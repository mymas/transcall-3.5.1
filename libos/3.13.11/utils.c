#include <linux/seq_file.h>
#include <linux/sched.h>
#include <linux/statfs.h>
#include "fs/internal.h"
#include "fs/ext4/ext4.h"
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

unsigned long copy_from_user(void *to, const void *from, unsigned long n)
{
    memcpy(to, from, n);

    return 0;
}

unsigned long copy_to_user(void *to, const void *from, unsigned long n)
{
    memcpy(to, from, n);

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

// fs/anon_inodes.cc (static)
extern struct dentry_operations anon_inodefs_dentry_operations;
extern char *anon_inodefs_dname(struct dentry *dentry, char *buffer,
                                int buflen);

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
        
    return "unknown";
}

void *inode_op_getattr(struct inode_operations *op,
                       struct vfsmount *mnt, struct dentry *dentry,
                       struct kstat *stat)
{
    if (op == &ext4_file_inode_operations)
        return ext4_getattr(mnt, dentry, stat);

    return (void *)1;  // generic
}

// fs/ext4/symlink.c (static)
extern void *ext4_follow_link(struct dentry *dentry, struct nameidata *nd);

// for inode->i_op->follow_link()
void *inode_op_follow_link(struct inode_operations *op,
                           struct dentry *dentry, struct nameidata *nd)
{
    if (op == &ext4_fast_symlink_inode_operations)
        return ext4_follow_link(dentry, nd);

    return (void *)1;  // generic
}

// fs/ext4/statfs.c (static)
extern struct super_operations ext4_sops;
extern struct super_operations ext4_nojournal_sops;
extern int ext4_statfs(struct dentry *dentry, struct kstatfs *buf);

// for dentry->d_sb->s_op->statfs()
int super_op_statfs(struct super_operations *op,
                    struct dentry *dentry, struct kstatfs *buf)
{
    if (op == &ext4_sops || op == &ext4_nojournal_sops)
        return ext4_statfs(dentry, buf);

    return -ENOSYS;
}

// for compatibility

struct vfsmount *lookup_vfsmount(struct vfsmount *mnt, struct dentry *dentry)
{
    struct path path;

    path.dentry = dentry;
    path.mnt = mnt;

    return lookup_mnt(&path);
}

int get_stat(struct vfsmount *mnt, struct dentry *dentry, 
             struct kstat *stat)
{
    struct path path;

    path.dentry = dentry;
    path.mnt = mnt;

    return vfs_getattr(&path, stat);
}

// fs/statfs.c (static)
extern int do_statfs_native(struct kstatfs *st, struct statfs __user *p);

int get_statfs(struct vfsmount *mnt, struct dentry *dentry,
               struct statfs *buf)
{
    struct path path;
    struct kstatfs st;
    int retval;

    path.dentry = dentry;
    path.mnt = mnt;

    retval = vfs_statfs(&path, &st);
    if (retval == 0)
        retval = do_statfs_native(&st, buf);
    
    return retval;
}
