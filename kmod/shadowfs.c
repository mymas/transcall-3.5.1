#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/kprobes.h>
#include <linux/fs.h>
#include <linux/fs_struct.h>
#include <linux/slab.h>
#include <linux/string.h>
#include <linux/bitops.h>
#include <linux/mm.h>
#include <linux/dcache.h>
#include <linux/utsname.h>
#include <linux/syscalls.h>
#include <asm/uaccess.h>

//#define DEBUG

/* XXX only one VM shadow */
static unsigned long user_bitmap[PID_MAX_LIMIT / sizeof(unsigned long)];

static char *root_dir = "/tmp/vm0";
module_param(root_dir, charp, 0);

static int root_len;

/* jprobe */
//static asmlinkage long j_sys_exit(int error_code)
static void j_do_exit(long code)
{
#ifdef DEBUG
    printk("do_exit\n");
#endif

    if (test_bit(current->pid, user_bitmap)) {
        /* remove the current process */
        clear_bit(current->pid, user_bitmap);

#ifdef DEBUG
        printk("delete pid %d (%s)\n", current->pid, current->comm);
#endif
    }

    jprobe_return();
}

#define JENTRY(func)                            \
    {                                           \
        .entry = j_ ## func,                    \
        .kp = {                                 \
            .symbol_name = #func                \
        }                                       \
    }

static struct jprobe shadowfs_jprobes[] = {
    JENTRY(do_exit),
};

/* kretprobe */
static int r_do_fork(struct kretprobe_instance *ri, struct pt_regs *regs)
{
    int pid = regs_return_value(regs);

#ifdef DEBUG
    printk("do_fork\n");
#endif

    /* add a new process */
    if (test_bit(current->pid, user_bitmap)) {
        set_bit(pid, user_bitmap);

#ifdef DEBUG
        printk("add pid %d (%s)\n", pid, current->comm);
#endif
    }

    return 0;
}

static int check_ldso_addr(unsigned long ip)
{
    struct vm_area_struct *vma;
    struct file *file;
    char buf[256], *ptr;

    if (!current->mm)
        return 0;

    vma = find_vma(current->mm, ip);
    if (!vma)
        return 0;

    file = vma->vm_file;
    if (!file)
        return 0;

    ptr = d_path(&file->f_path, buf, 256);
    if (IS_ERR(ptr))
        return 0;

    if (!strstr(ptr, "ld-"))
        return 0;

    return 1;
}

struct fs_data {
    char path[PATH_MAX];
    mm_segment_t old_fs;
};

static int rewrite_path(void *data, unsigned long *reg)
{
    struct fs_data *fd = (struct fs_data *)data;
    char __user *filename = (char *)*reg;
    char *orig_path;
    struct pt_regs *user_regs;

    fd->old_fs.seg = 0;

    /* check if the current process is a target */
    if (!test_bit(current->pid, user_bitmap))
        return -1;

    orig_path = &fd->path[root_len];

    if (strncpy_from_user(orig_path, filename, PATH_MAX - root_len) < 0) {
#if 0
        printk("sys_arg: filename error: %s\n", filename);
        return -1;
#else
        strcpy(orig_path, filename);  /* XXX */
#endif
    }

#ifdef DEBUG
    printk("syscall %ld\n", user_regs->orig_ax);
#endif

    user_regs = task_pt_regs(current);

    if (orig_path[0] != '/') {
        /* relative path */
        *reg = (unsigned long)orig_path;
    }
    else if (check_ldso_addr(user_regs->ip)) {
        *reg = (unsigned long)orig_path;
    }
    else if (0 /*|| policy_check*/) {
        *reg = (unsigned long)orig_path;
    }
    else {
        /* absolute path */
        memcpy(fd->path, root_dir, root_len);
        *reg = (unsigned long)fd->path;
    }

    fd->old_fs = get_fs();
    set_fs(KERNEL_DS);

    return 0;
}

/* open-type syscalls */
static int e_sys_arg1(struct kretprobe_instance *ri, struct pt_regs *regs)
{
    rewrite_path(ri->data, &regs->di);
    return 0;
}

/* openat-type syscalls */
static int e_sys_arg2(struct kretprobe_instance *ri, struct pt_regs *regs)
{
    rewrite_path(ri->data, &regs->si);
    return 0;
}

static int r_sys_arg(struct kretprobe_instance *ri, struct pt_regs *regs)
{
    struct fs_data *fd = (struct fs_data *)ri->data;

    if (fd->old_fs.seg != 0)
        set_fs(fd->old_fs);

    return 0;
}

struct fs_data2 {
    struct fs_data data[2];
};

/* rename-type syscalls */
static int e_sys_args(struct kretprobe_instance *ri, struct pt_regs *regs)
{
    struct fs_data2 *fd2 = (struct fs_data2 *)ri->data;
    int rc;

    rc = rewrite_path(&fd2->data[0], &regs->di);
    if (rc == 0)
        rewrite_path(&fd2->data[1], &regs->si);

    return 0;
}

static int r_sys_args(struct kretprobe_instance *ri, struct pt_regs *regs)
{
    struct fs_data2 *fd2 = (struct fs_data2 *)ri->data;
    struct fs_data *fd = &fd2->data[0];
    
    if (fd->old_fs.seg != 0)
        set_fs(fd->old_fs);

    return 0;
}

static char kpath[PATH_MAX];

static int r_sys_getcwd(struct kretprobe_instance *ri, struct pt_regs *regs)
{
    struct pt_regs *user_regs;
    char __user *buf;
    size_t size;
    int len;

    /* check if the current process is a target */
    if (!test_bit(current->pid, user_bitmap))
        return 0;

    user_regs = task_pt_regs(current);

    buf = (char *)user_regs->di;
    size = (size_t)user_regs->si;

    if (strncpy_from_user(kpath, buf, size) < 0) {
        printk("getcwd: buf error\n");
        return 0;
    }

    if (strncmp(kpath, root_dir, root_len) == 0) {
        len = strlen(kpath);
        
        if (len == root_len)
            copy_to_user(buf, "/", 2);
        else
            copy_to_user(buf, &kpath[root_len], len - root_len + 1);
    }
    else
        printk("getcwd: invalid path: %s\n", kpath);

    return 0;
}

static int r_sys_newuname(struct kretprobe_instance *ri, struct pt_regs *regs)
{
    struct pt_regs *user_regs;
    struct new_utsname __user *buf;
    struct new_utsname name;
    mm_segment_t old_fs;
    struct file *file;
    loff_t pos = 0;
    int rc;

    /* check if the current process is a target */
    if (!test_bit(current->pid, user_bitmap))
        return 0;

#ifdef DEBUG
    printk("sys_newuname\n");
#endif

    old_fs = get_fs();
    set_fs(KERNEL_DS);
    
printk("open\n");

    file = filp_open("/proc/.uname", O_RDONLY, 0);
    if (file == NULL) {
        printk("newuname: cannot open /proc/.uname\n");
        return 0;
    }

printk("read\n");

    rc = vfs_read(file, (char *)&name, sizeof(name), &pos);
    if (rc != sizeof(name)) {
        printk("newuname: cannot read valid utsname\n");
        return 0;
    }

printk("close\n");

    filp_close(file, current->files);

printk("end\n");

    set_fs(old_fs);

    user_regs = task_pt_regs(current);
    buf = (struct new_utsname *)user_regs->di;
    
printk("copy\n");

    if (copy_to_user(buf, &name, sizeof(name)))
        printk("newuname: invalid buf\n");

    return 0;
}

#define RENTRY(func)                            \
    {                                           \
        .entry_handler = NULL,                  \
        .handler = r_ ## func,                  \
        .data_size = 0,                         \
        .kp = {                                 \
            .symbol_name = #func                \
        },                                      \
        .maxactive = 32                         \
    }

#define RENTRY2(func, type)                     \
    {                                           \
        .entry_handler = e_ ## func,            \
        .handler = r_ ## func,                  \
        .data_size = sizeof(type),              \
        .kp = {                                 \
            .symbol_name = #func                \
        },                                      \
        .maxactive = 32                         \
    }

#define RENTRY_ARG1(func)                       \
    {                                           \
        .entry_handler = e_sys_arg1,            \
        .handler = r_sys_arg,                   \
        .data_size = sizeof(struct fs_data),    \
        .kp = {                                 \
            .symbol_name = #func                \
        },                                      \
        .maxactive = 32                         \
    }

#define RENTRY_ARG2(func)                       \
    {                                           \
        .entry_handler = e_sys_arg2,            \
        .handler = r_sys_arg,                   \
        .data_size = sizeof(struct fs_data),    \
        .kp = {                                 \
            .symbol_name = #func                \
        },                                      \
        .maxactive = 32                         \
    }

#define RENTRY_ARGS(func)                       \
    {                                           \
        .entry_handler = e_sys_args,            \
        .handler = r_sys_args,                  \
        .data_size = sizeof(struct fs_data2),   \
        .kp = {                                 \
            .symbol_name = #func                \
        },                                      \
        .maxactive = 32                         \
    }

static struct kretprobe shadowfs_kretprobes[] = {
    RENTRY(do_fork),
    RENTRY_ARG1(sys_open),
    RENTRY_ARG1(sys_newstat),
    RENTRY_ARG1(sys_lstat),
    RENTRY_ARG1(sys_access),
    RENTRY_ARG1(sys_readlink),
    RENTRY_ARG1(sys_unlink),
    RENTRY_ARG1(sys_chdir),
    RENTRY_ARG1(sys_statfs),
    RENTRY_ARG1(sys_mkdir),
    RENTRY_ARG1(sys_rmdir),
    RENTRY_ARG1(sys_chmod),
    RENTRY_ARG1(sys_chown),
    RENTRY_ARG1(sys_utime),
    RENTRY_ARG1(sys_lgetxattr),
    RENTRY_ARG1(sys_creat),
    RENTRY_ARG2(sys_openat),
    RENTRY_ARG2(sys_unlinkat),
    RENTRY_ARG2(sys_newfstatat),
    RENTRY_ARG2(sys_utimensat),
    RENTRY_ARG2(sys_fchmodat),
    RENTRY_ARG2(sys_fchownat),
    RENTRY_ARGS(sys_rename),
    RENTRY_ARGS(sys_link),
    RENTRY_ARGS(sys_symlink),
    RENTRY(sys_getcwd),
    RENTRY(sys_newuname),
};

#if 0
static long shadowfs_ioctl(struct file *filp, unsigned int cmd,
                           unsigned long arg)
{
    struct shadowfs_env *env = (struct shadowfs_env *)env;

    

    return -EINVAL;
}

static struct file_operations shadowfs_fops = {
    .owner = THIS_MODULE,
    .unlocked_ioctl = shadowfs_ioctl,
};
#endif // 0

static int __init shadowfs_init(void)
{
    int nr_jprobes, nr_kretprobes;
    int i, j, ret;

    nr_jprobes = sizeof(shadowfs_jprobes) / sizeof(struct jprobe);

    for (i = 0; i < nr_jprobes; i++) {
        ret = register_jprobe(&shadowfs_jprobes[i]);
        if (ret < 0) {
            printk(KERN_INFO "register_jprobe failed: %d\n", i);
            
            for (j = 0; j < i; j++)
                unregister_jprobe(&shadowfs_jprobes[j]);
            
            return -1;
        }
    }

    nr_kretprobes = sizeof(shadowfs_kretprobes) / sizeof(struct kretprobe);

    for (i = 0; i < nr_kretprobes; i++) {
        ret = register_kretprobe(&shadowfs_kretprobes[i]);
        if (ret < 0) {
            printk(KERN_INFO "register_kretprobe failed: %d\n", i);

            for (j = 0; j < i; j++)
                unregister_kretprobe(&shadowfs_kretprobes[j]);

            for (j = 0; j < nr_jprobes; j++)
                unregister_jprobe(&shadowfs_jprobes[j]);

            return -1;
        }
    }

    set_bit(current->parent->pid, user_bitmap);

    root_len = strlen(root_dir);

#if 0
    if (register_chrdev(DEV_MAJOR, DEV_NAME, &shadowfs_fops))
        return -EBUSY;
#endif

    printk(KERN_INFO "shadowfs started\n");

    return 0;
}

static void __exit shadowfs_exit(void)
{
    int nr_jprobes, nr_kretprobes;
    int i;

    nr_jprobes = sizeof(shadowfs_jprobes) / sizeof(struct jprobe);
    nr_kretprobes = sizeof(shadowfs_kretprobes) / sizeof(struct kretprobe);

    for (i = 0; i < nr_jprobes; i++)
        unregister_jprobe(&shadowfs_jprobes[i]);

    for (i = 0; i < nr_kretprobes; i++)
        unregister_kretprobe(&shadowfs_kretprobes[i]);

#if 0
    unregister_chrdev(DEV_MAJOR, DEV_NAME);
#endif

    printk(KERN_INFO "shadowfs stopped\n");
}

module_init(shadowfs_init)
module_exit(shadowfs_exit)
MODULE_LICENSE("GPL");
