#define FUSE_USE_VERSION  26
   
#include <fuse.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/xattr.h>
#include "shadow_procfs.h"
#include "../libos/common/addr.h"
#include "../libos/common/vm_id.h"

#define SNAPSHOT

#define MAX_PATH 256
#define MAX_NAME 64
//#define KOURAI
//#define MEASURE
#define MIYAMA_VM_LIST

#ifdef KOURAI
extern int notrans_count, map_count, total_count;
extern int map2_count, total2_count;
extern int total3_count;
#endif /*KOURAI*/

#ifdef MEASURE
extern double cr3_res_time, ept_res_time;
#endif /*MEASURE*/

double t1, t2;
double gettimeofday_sec()
{
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec + tv.tv_usec * 1e-6;
}

struct shadow_file {
    int type;  // S_IFREG, S_IFDIR, S_IFLNK
    char *name;
    struct shadow_file *child;

    // create a file or directory
    struct fuse_node *(*create)(struct fuse_node *, char *);

    // update the contents of a file or directory
    void (*update)(struct fuse_node *);
};

struct fuse_node {
    char name[MAX_NAME];
    char *data;
    struct stat st;
  
    struct fuse_node *down;
    struct fuse_node *next;
    
    struct shadow_file *files;  // for dir

    struct fuse_node *(*create)(struct fuse_node *, char *);

    void (*update)(struct fuse_node *);
    void *update_arg;
};

static struct fuse_node *root_node = NULL;
static struct fuse_node *bottom = NULL;

struct fuse_node *last_next_node(struct fuse_node *node)
{
    while (node->next) {
        node = node->next;
    }
    
    return node;
}

struct fuse_node *find_node(const char *path)
{
    struct fuse_node *node;
    char buf[MAX_PATH], *path2, *name;
    
    if (strcmp(path, "/") == 0)
        return root_node;

    node = root_node;

    strcpy(buf, &path[1]);
    path2 = buf;

    while ((name = strsep(&path2, "/")) != NULL) {
        node = node->down;

        while (node) {
            if (strcmp(node->name, name) == 0)
                break;

            node = node->next;
        }

        if (node == NULL)
            return NULL;
    }

    return node;
}

static struct fuse_node *lookup_node(struct fuse_node *parent,
                                     const char *name)
{
    struct fuse_node *node = parent->down;

    while (node) {
        if (strcmp(node->name, name) == 0)
            return node;

        node = node->next;
    }

    return NULL;
}

static struct fuse_node *get_empty_node(struct fuse_node *node)
{
    if (node->down == NULL) {
        node->down = (struct fuse_node *)malloc(sizeof(struct fuse_node));
        node->down->next = NULL;
        node->down->down = NULL;
        node->down->data = NULL;
        node->down->st.st_size = 0;

        return node->down;
    }
    else { 
        struct fuse_node *last_node = last_next_node(node->down);
        last_node->next = (struct fuse_node *)malloc(sizeof(struct fuse_node));
        last_node->next->next = NULL;
        last_node->next->down = NULL;
        last_node->next->data = NULL;
        last_node->next->st.st_size = 0;

        return last_node->next;
    }
}

static inline struct fuse_node *get_fnode(struct fuse_file_info *fi)
{
    return (struct fuse_node *)(uintptr_t)fi->fh;
}

static struct fuse_node *add_node(struct fuse_node *fnode, const char *name,
                                  mode_t mode, nlink_t nlink)
{
    struct fuse_node *new_node = get_empty_node(fnode);

    new_node->st.st_mode = mode;
    new_node->st.st_nlink = nlink;
    strcpy(new_node->name, name);

    time(&new_node->st.st_ctime);
    new_node->st.st_mtime = new_node->st.st_ctime;
    new_node->st.st_atime = new_node->st.st_ctime;

    return new_node;
}                 

struct fuse_node *add_dir_node(struct fuse_node *node, char *dirname)
{
    return add_node(node, dirname, S_IFDIR | 0555, 2);
}

struct fuse_node *add_reg_node(struct fuse_node *node, char *filename)
{
    return add_node(node, filename, S_IFREG | 0444, 1);
}

struct fuse_node *add_lnk_node(struct fuse_node *node, char *linkname)
{
    return add_node(node, linkname, S_IFLNK | 0777, 1);
}

void write_data(struct fuse_node *node, char *data, int size)
{
    node->st.st_size = size;
    node->data = (char *)malloc(size);
    memcpy(node->data, data, size);
}

static void free_node(struct fuse_node *node)
{
    struct fuse_node *sub_node = node->down;
    struct fuse_node *this_node;
    
    while (sub_node) {
        this_node = sub_node;
        sub_node = sub_node->next;
        free_node(this_node);
    }

    free(node);
}

#define DYNAMIC_DIRENT(name) ((name)[0] >= '0' && (name)[0] <= '9')

void delete_numerics(struct fuse_node *node)
{
    struct fuse_node *sub_node = node->down;
    struct fuse_node **prev = &node->down;
    
    while (sub_node) {
        /* start with numeric */
        if (DYNAMIC_DIRENT(sub_node->name)) {
            *prev = sub_node->next;
            free_node(sub_node);
            sub_node = *prev;
        }
        else {
            prev = &sub_node->next;
            sub_node = sub_node->next;
        }
    }
}

static int is_pid(const char *name)
{
    int i = 0;

    while (name[i] != '\0') {
        if (name[i] < '0' || name[i] > '9')
            return 0;
        i++;
    }

    return 1;
}

static struct fuse_node *setup_node(struct fuse_node *parent,
                                    struct shadow_file *sfile)
{
    struct fuse_node *node;

    if (sfile->type == S_IFREG)
        node = add_reg_node(parent, sfile->name);
    else if (sfile->type == S_IFLNK)
        node = add_lnk_node(parent, sfile->name);
    else if (sfile->type == S_IFDIR)
        node = add_dir_node(parent, sfile->name);
    else {
        printf("%s: invalid node type: %d\n", sfile->name, sfile->type);
        return NULL;
    }
    
    node->files = sfile->child;

    node->create = sfile->create;
    node->update = sfile->update;
    node->update_arg = parent->update_arg;
    
    return node;
}

static struct fuse_node *create_node(struct fuse_node *parent, char *name)
{
    struct fuse_node *node;
    int i;

    if (parent->files == NULL)
        return NULL;

    for (i = 0; parent->files[i].name; i++) {
        struct shadow_file *sfile = &parent->files[i];

        if (strcmp(sfile->name, "DYN") == 0) {
            g_pause();
            node = sfile->create(parent, name);
            g_unpause();
            if (node)
                return node;
        }

        if (strcmp(name, sfile->name) != 0)
            continue;

        node = setup_node(parent, sfile);
        if (node == NULL)
            return NULL;
        
        return node;
    }

    return NULL;
}

static struct fuse_node *create_dynamic(struct fuse_node *parent,
                                        char *name)
{
    parent->update(parent);
    return lookup_node(parent, name);
}

static struct fuse_node *create_path(const char *path)
{
    struct fuse_node *parent, *node;
    char buf[MAX_PATH], *path2, *name;
    int index;

    if (strcmp(path, "/") == 0)
        return root_node;

    parent = root_node;

    strcpy(buf, &path[1]);
    path2 = buf;

    while ((name = strsep(&path2, "/")) != NULL) {
        node = lookup_node(parent, name);
        if (node == NULL) {
            node = create_node(parent, name);
            if (node == NULL)
                return NULL;
        }

        parent = node;
    }

    return node;
}

void *get_update_arg(struct fuse_node *node)
{
    return node->update_arg;
}

static struct fuse_node *create_pid(struct fuse_node *parent, char *name)
{
    delete_numerics(parent);  // XXX
    create_pids(parent);

    return lookup_node(parent, name);
}

static PROTO_UPDATE_FUNC(pid)
static PROTO_UPDATE_FUNC(tid)
static PROTO_UPDATE_FUNC(tty)
static PROTO_UPDATE_FUNC(net)
static PROTO_UPDATE_FUNC(sys)
static PROTO_UPDATE_FUNC(sys_kernel)

#define SFILE_REG(name, fname) \
    { S_IFREG, #name, NULL, create_node, update_##fname }
#define SFILE_DIR(name, fname) \
    { S_IFDIR, #name, fname##_files, create_node, update_##fname }
#define SFILE_LNK(name, fname) \
    { S_IFLNK, #name, NULL, create_node, update_##fname }
#define SFILE_DYN_REG(fname) \
    { 0, "DYN", NULL, create_dynamic, update_##fname }
#define SFILE_DYN_DIR(fname) \
    { 0, "DYN", fname##_files, create_dynamic, update_##fname }
#define SFILE_DYN_DIR_PART(fname) \
    { 0, "DYN", fname##_files, create_##fname, update_##fname }

#define SFILE_END \
    { 0, NULL, NULL, 0, 0 }

static struct shadow_file pid_fd_files[] = {
    SFILE_DYN_REG(pid_fd_num),
    SFILE_END
};

// <pid>/task/<tid>
static shadow_file tid_files[] = {
#define SFILE_PID_REG(name) SFILE_REG(name, pid_##name)
#define SFILE_PID_DIR(name) SFILE_DIR(name, pid_##name)
#define SFILE_PID_LNK(name) SFILE_LNK(name, pid_##name)
    SFILE_PID_REG(stat),
    SFILE_PID_REG(status),
    SFILE_PID_REG(cmdline),
    SFILE_PID_REG(auxv),
    SFILE_REG(maps, tid_maps),
    SFILE_PID_LNK(exe),
    SFILE_PID_DIR(fd),
    SFILE_END
};

static struct shadow_file pid_task_files[] = {
    SFILE_DYN_DIR(tid),
    SFILE_END
};

// <pid>
static shadow_file pid_files[] = {
#define SFILE_PID_REG(name) SFILE_REG(name, pid_##name)
#define SFILE_PID_LNK(name) SFILE_LNK(name, pid_##name)
#define SFILE_PID_DIR(name) SFILE_DIR(name, pid_##name)
    SFILE_PID_REG(stat),
    SFILE_PID_REG(status),
    SFILE_PID_REG(cmdline),
    SFILE_PID_REG(auxv),
    SFILE_REG(maps, pid_maps),
    SFILE_PID_LNK(exe),
    SFILE_PID_DIR(task),
    SFILE_PID_DIR(fd),
    SFILE_END
};

static struct shadow_file tty_files[] = {
#define SFILE_TTY_REG(name) SFILE_REG(name, tty_##name)
    SFILE_TTY_REG(drivers),
    SFILE_END
};

static struct shadow_file net_files[] = {
#define SFILE_NET_REG(name) SFILE_REG(name, net_##name)
#pragma push_macro("unix")
#undef unix
    SFILE_NET_REG(unix),
#pragma pop_macro("unix")
    SFILE_NET_REG(udp),
    SFILE_NET_REG(tcp),
    SFILE_NET_REG(raw),
    SFILE_NET_REG(packet),
#ifdef CONFIG_IPV6
    SFILE_NET_REG(udp6),
    SFILE_NET_REG(tcp6),
    SFILE_NET_REG(raw6),
#endif
    SFILE_END
};

static struct shadow_file sys_kernel_files[] = {
#define SFILE_SYSK_REG(name) SFILE_REG(name, sys_kernel_##name)
    SFILE_SYSK_REG(pid_max),
    SFILE_SYSK_REG(ngroups_max),
    SFILE_END
};

static struct shadow_file sys_files[] = {
#define SFILE_SYS_DIR(name) SFILE_DIR(name, sys_##name)
    SFILE_SYS_DIR(kernel),
    SFILE_END
};

static struct shadow_file root_files[] = {
#define SFILE_ROOT_REG(name) SFILE_REG(name, name)
#define SFILE_ROOT_DIR(name) SFILE_DIR(name, name)
#define SFILE_ROOT_LNK(name) SFILE_LNK(name, name)
    SFILE_ROOT_REG(uptime),
    SFILE_ROOT_REG(meminfo),
    SFILE_ROOT_REG(filesystems),
    SFILE_ROOT_REG(version),
    SFILE_ROOT_REG(stat),
    SFILE_ROOT_DIR(tty),
    SFILE_ROOT_DIR(net),
    SFILE_ROOT_DIR(sys),
    SFILE_ROOT_LNK(self),
    SFILE_DYN_DIR_PART(pid),
    SFILE_END
};

static void update_dir(struct fuse_node *parent)
{
    struct fuse_node *node;
    int i = 0;

    if (parent->files == NULL)
        return NULL;

    for (i = 0; parent->files[i].name; i++) {
        struct shadow_file *sfile = &parent->files[i];

        if (strcmp(sfile->name, "DYN") == 0) {
            g_pause();
            sfile->create(parent, "");
            g_unpause();
            continue;
        }

        // skip an existing node
        node = lookup_node(parent, sfile->name);
        if (node)
            continue;

        node = setup_node(parent, sfile);
        if (node == NULL)
            continue;
    }
}

#define SFILE_UPDATE_DIR(name)                                \
static void update_##name(struct fuse_node *node)             \
{                                                             \
    update_dir(node);                                         \
}

SFILE_UPDATE_DIR(root)
SFILE_UPDATE_DIR(pid)
SFILE_UPDATE_DIR(tid)
SFILE_UPDATE_DIR(tty)
SFILE_UPDATE_DIR(net)
SFILE_UPDATE_DIR(sys)
SFILE_UPDATE_DIR(sys_kernel)

void create_pid_dirent(struct fuse_node *parent, int pid)
{
    struct fuse_node *node;
    char dirname[16];

    sprintf(dirname, "%d", pid);
    node = add_dir_node(parent, dirname);

    node->files = pid_files;

    node->create = create_node;
    node->update = update_pid;
    node->update_arg = (void *)((long)pid);
}

void create_tid_dirent(struct fuse_node *parent, int tid)
{
    struct fuse_node *node;
    char dirname[16];

    sprintf(dirname, "%d", tid);
    node = add_dir_node(parent, dirname);

    node->files = tid_files;

    node->create = create_node;
    node->update = update_tid;
    node->update_arg = (void *)((long)tid);
}

void create_fd_dirent(struct fuse_node *parent, int fd, int pid)
{
    struct fuse_node *node;
    char dirname[16];

    sprintf(dirname, "%d", fd);
    node = add_lnk_node(parent, dirname);

    node->files = pid_fd_files;

    node->create = NULL;
    node->update = update_pid_fd_num;
    node->update_arg =
        (void *)((unsigned long)fd | ((unsigned long)pid << 32));
}

#ifdef SNAPSHOT
static void take_snapshot(struct fuse_node *parent)
{
    struct fuse_node *node;
    int i;

    g_pause();

    for (i = 0; parent->files[i].name; i++) {
        struct shadow_file *sfile = &parent->files[i];

        if (strcmp(sfile->name, "DYN") == 0) {
            sfile->create(parent, "");
            continue;
        }

        node = setup_node(parent, sfile);
        if (node == NULL)
            continue;
    }        

    node = parent->down;

    while (node) {
        if (node->files)
            take_snapshot(node);  // directory
        else
            node->update(node);  // file or link

        node = node->next;
    }

    g_unpause();
}
#endif // SNAPSHOT

void init_shadow_proc(int domid)
{
    root_node = (struct fuse_node *)malloc(sizeof(struct fuse_node));
    root_node->next = NULL;
    root_node->down = NULL;
    root_node->data = NULL;
    sprintf(root_node->name, "/");

    root_node->files = root_files;

    root_node->create = NULL;
    root_node->update = update_root;
    root_node->update_arg = NULL;

    root_node->st.st_mode = S_IFDIR | 0555;
    root_node->st.st_nlink = 2;

    time(&root_node->st.st_ctime);
    root_node->st.st_mtime = root_node->st.st_ctime;
    root_node->st.st_atime = root_node->st.st_ctime;

#ifdef SNAPSHOT
    t1 = gettimeofday_sec();
    take_snapshot(root_node);
    t2 = gettimeofday_sec();
    printf("elapsed time[sec]: %f\n", (t2 -t1));
#endif
}

static int shadow_proc_getattr(const char *path, struct stat *stbuf)
{
    struct fuse_node *node;

#ifdef SNAPSHOT
    node = find_node(path);
#else
    node = create_path(path);
#endif
    if (node == NULL)
        return -ENOENT;

    if (strcmp(path, "/") == 0) {
        memset(stbuf, 0, sizeof(struct stat));
        stbuf->st_mode = S_IFDIR | 0555;
        stbuf->st_nlink = 2;
    }
    else if (node != NULL) {
        memset(stbuf, 0, sizeof(struct stat));
        stbuf->st_mode = node->st.st_mode; 
        stbuf->st_nlink = node->st.st_nlink;
        stbuf->st_size = node->st.st_size;
        stbuf->st_atime = node->st.st_atime;
        stbuf->st_mtime = node->st.st_mtime;
        stbuf->st_ctime = node->st.st_ctime;
    }
    else {
        const char *nodename;
        int type, off;
        unsigned long ino = 0;

        nodename = strrchr(path, '/');
        if (nodename == NULL)
            nodename = path;
        else
            nodename++;

        if (strncmp(nodename, "socket:", 7) == 0) {
            type = S_IFSOCK;
            off = 8;
        }
        else if (strncmp(nodename, "pipe:", 5) == 0) {
            type = S_IFIFO;
            off = 6;
        }
        else if (strncmp(nodename, "anon_inode:", 11) == 0) {
            type = 0;
        }
        else
            return -ENOENT;

        if (type != 0) {
            while (nodename[off] != ']') {
                ino = ino * 10 + (nodename[off] - '0');
                off++;
            }
        }
        else
            ino = 11111;  // XXX

        memset(stbuf, 0, sizeof(struct stat));
        stbuf->st_mode = type | 0555; 
        stbuf->st_ino = ino;
        stbuf->st_nlink = 1;
        stbuf->st_size = 0;

        time(&stbuf->st_ctime);
        stbuf->st_mtime = stbuf->st_ctime;
        stbuf->st_atime = stbuf->st_ctime;
    }

    return 0;
}

static int shadow_proc_readlink(const char *path, char *buf, size_t size)
{
    struct fuse_node *fnode;
    struct stat stbuf;

    fnode = find_node(path); 
    if (fnode == NULL)
        return -ENOENT;

#ifndef SNAPSHOT
    if (fnode->update) {
        g_pause();
        fnode->update(fnode);
        g_unpause();
    }
#endif

    sprintf(buf, "%.*s", (int)fnode->st.st_size, fnode->data);
    
    return 0;
}

static int shadow_proc_opendir(const char *path, struct fuse_file_info *fi)
{
    struct fuse_node *node;

    node = find_node(path);
    if (node == NULL)
        return -ENOENT;

#ifndef SNAPSHOT
    if (node->update)
        node->update(node);
#endif

    fi->fh = (uintptr_t)node->down;

    return 0;
}

static int shadow_proc_readdir(const char *path, void *buf,
                               fuse_fill_dir_t filler, off_t offset,
                               struct fuse_file_info *fi)
{
    struct fuse_node *fnode = get_fnode(fi);      

    if (fnode == NULL)
        return -ENOENT;
    
    filler(buf, ".", NULL, 0);
    filler(buf, "..", NULL, 0);
    
    while (fnode != NULL) {
        filler(buf, fnode->name, &fnode->st, 0);
        fnode = fnode->next;
    }
    
    return 0;
}

static int shadow_proc_open(const char *path, struct fuse_file_info *fi)
{
    struct fuse_node *node;

    node = find_node(path);
    if (node == NULL)
        return -ENOENT;
    
#ifndef SNAPSHOT
    if (node->update) {
        g_pause();
        node->update(node);
        g_unpause();
    }
#endif
    
    fi->direct_io = 1;
    fi->fh = (uintptr_t)node;

    return 0;
}

static int shadow_proc_read(const char *path, char *buf, size_t size,
                            off_t offset, struct fuse_file_info *fi)
{
    struct fuse_node *fnode;

    fnode = get_fnode(fi);
    if (fnode == NULL)
        return -EINVAL;
    
    if (offset > fnode->st.st_size)
        return -EINVAL;
    
    if (offset + size > fnode->st.st_size)
        size = fnode->st.st_size - offset;
    
    memcpy(buf, &(fnode->data[offset]), size);
    
    return size;
}

/* compatible with ac++ */
static struct fuse_operations proc_oper = {
    shadow_proc_getattr,  /* getattr */
    shadow_proc_readlink,  /* readlink */
    NULL, /* getdir */
    NULL, /* mknod */
    NULL, /* mkdir */
    NULL, /* unlink */
    NULL, /* rmdir */
    NULL, /* symlink */
    NULL, /* rename */
    NULL, /* link */
    NULL, /* chmod */
    NULL, /* chown */
    NULL, /* truncate */
    NULL, /* utime */
    shadow_proc_open,  /* open */
    shadow_proc_read,  /* read */
    NULL, /* write */
    NULL, /* statfs */
    NULL, /* flush */
    NULL, /* release */
    NULL, /* fsync */
    NULL, /* setxattr */
    NULL, /* getxattr */
    NULL, /* listxattr */
    NULL, /* removexattr */
    shadow_proc_opendir,  /* opendir */
    shadow_proc_readdir,  /* readdir */
};


extern unsigned long total_swapcache_pages(void);
int main(int argc, char *argv[])
{
    int domid;
    int rc;

    if (argc < 4) {
        fprintf(stderr,
                "usage: shadow_procfs procdir [option...] domid vm_id \n");
        return -1;
    }

    if (getuid() != 0) {
        fprintf(stderr, "need root privileges\n");
        return -1;
    }

    domid = strtoul(argv[argc - 2], NULL, 0);

#ifdef MIYAMA_VM_LIST
    vm_id = strtoul(argv[argc - 1], NULL, 0);
    printf("vm_id %d\n", vm_id);
#endif /*MIYAMA_VM_LIST*/

    if (domid == 0) {
        fprintf(stderr, "domid is invalid: %s\n", argv[argc - 2]);
        return -1;
    }

    argc = argc -2;	

    g_init(domid);


    init_shadow_proc(domid);

#ifdef KOURAI
    printf("notrans: %d, map: %d, total: %d\n",
		    notrans_count, map_count, total_count);
    printf("map2: %d, total2: %d\n",
		    map2_count, total2_count);
    printf("total3: %d\n", total3_count);
    rc = fuse_main(argc, argv, &proc_oper, NULL);

#endif 
#ifdef MEASURE
    printf("<time> cr3|%lf , ept|%lf \n",cr3_res_time,ept_res_time);
#endif
    rc = fuse_main(argc, argv, &proc_oper, NULL);

    g_exit();

    return rc;
}
