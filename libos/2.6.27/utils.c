#include <linux/seq_file.h>
#include <linux/sched.h>
#include <linux/fs.h>
#include <linux/jbd.h>
#include <linux/ext3_fs.h>
#include "stdinc.h"
#include "utils.h"
#include "addr.h"

static struct seq_file seq;

struct seq_file *seq_get(char *data, int size)
{
    struct seq_file *m = &seq;

    m->buf = data;
    m->size = size;
    m->count = 0;

    return m;
}

struct seq_file *seq_renew(struct seq_file *m)
{
    m->count = 0;

    return m;
}

int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf,
                      int len, int write)
{
    struct mm_struct *mm;
    void *data;

    mm = get_task_mm(tsk);
    if (!mm)
        return 0;

    data = g_proc_map((void *)addr, len, mm->pgd);
    if (data == NULL)
        return 0;

    memcpy(buf, data, len);

    return len;
}

void *kmalloc(size_t size, gfp_t flags)
{
    return malloc(size);
}

void kfree(const void *block)
{
    free(block);
}

unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order)
{
    return (unsigned long)malloc(PAGE_SIZE << order);
}

void free_pages(unsigned long addr, unsigned int order)
{
    free((void *)addr);
}

unsigned long copy_to_user(void *to, const void *from, unsigned len)
{
    memcpy(to, from, len);

    return 0;
}

unsigned long copy_from_user(void *to, const void *from, unsigned len)
{
    memcpy(to, from, len);

    return 0;
}

struct task_struct *get_current(void)
{
    // no current process...
    return next_task(&init_task);
}

// net/socket.cc (static)
extern struct dentry_operations sockfs_dentry_operations;
extern char *sockfs_dname(struct dentry *dentry, char *buffer, int buflen);

// fs/pipe.cc (static)
extern struct dentry_operations pipefs_dentry_operations;
extern char *pipefs_dname(struct dentry *dentry, char *buffer, int buflen);

// fs/anon_inodes.cc (from 3.13)
extern struct dentry_operations anon_inodefs_dentry_operations;

static char *anon_inodefs_dname(struct dentry *dentry, char *buffer,
                                int buflen)
{
    return dynamic_dname(dentry, buffer, buflen, "anon_inode:%s",
                         dentry->d_name.name);
}

// for dentry->d_op->d_dname()
char *dentry_op_dname(struct dentry_operations *op,
                      struct dentry *dentry, char *buffer, int buflen)
{
    if (op == &sockfs_dentry_operations)
        return sockfs_dname(dentry, buffer, buflen);
    else if (op == &pipefs_dentry_operations)
        return pipefs_dname(dentry, buffer, buflen);
    else if (op == &anon_inodefs_dentry_operations)
        return anon_inodefs_dname(dentry, buffer, buflen);

    return NULL;
}

// fs/ext3/symlink.c (static)
extern void * ext3_follow_link(struct dentry *dentry, struct nameidata *nd);

// for inode->i_op->follow_link()
void *inode_op_follow_link(struct inode_operations *op,
                           struct dentry *dentry, struct nameidata *nd)
{
    if (op == &ext3_fast_symlink_inode_operations)
        return ext3_follow_link(dentry, nd);

    return (void *)1;  /* generic */
}

// fs/ext4/statfs.c (static)
extern struct super_operations ext3_sops;
extern int ext3_statfs(struct dentry *dentry, struct kstatfs *buf);

// for dentry->d_sb->s_op->statfs()
int super_op_statfs(struct super_operations *op,
                    struct dentry *dentry, struct kstatfs *buf)
{
    if (op == &ext3_sops)
        return ext3_statfs(dentry, buf);

    return -ENOSYS;
}

// for compatibility

struct vfsmount *lookup_vfsmount(struct vfsmount *mnt, struct dentry *dentry)
{
    return lookup_mnt(mnt, dentry);
}

int get_stat(struct vfsmount *mnt, struct dentry *dentry, 
               struct kstat *stat)
{
    return vfs_getattr(mnt, dentry, stat);
}

// fs/open.c (static)
extern int vfs_statfs_native(struct dentry *dentry, struct statfs *buf);

int get_statfs(struct vfsmount *mnt, struct dentry *dentry,
               struct statfs *buf)
{
    return vfs_statfs_native(dentry, buf);
}

#define PROC_SHOW(name)                                               \
int name##_read_proc(char *page, char **start, off_t off, int count,  \
                     int *eof, void *data);                           \
                                                                      \
int name##_proc_show(struct seq_file *m, void *v)                     \
{                                                                     \
    char *start;                                                      \
    int eof, size;                                                    \
                                                                      \
    m->count = name##_read_proc(m->buf, &start, 0, m->size, &eof, NULL); \
                                                                        \
    return 0;                                                         \
}

PROC_SHOW(uptime)
PROC_SHOW(meminfo)
PROC_SHOW(filesystems)
PROC_SHOW(version)
