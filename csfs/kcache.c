#include <linux/sched.h>
#include <linux/fs_struct.h>
#include <linux/fs.h>
#include <linux/dcache.h>
#include <linux/mount.h>
#include <linux/pagemap.h>
#include <linux/list.h>
#include <linux/namei.h>
#include <linux/statfs.h>
#include "csfs.h"
#include "utils.h"
#include "strset.h"

#define MAX_PATH 256

struct dentry *lookup_dentry(char *path, struct vfsmount **mntp)
{
    struct task_struct *task;
    struct fs_struct *fs;
    struct path *root;
    struct dentry *dentry;
    struct qstr q;
    char buf[MAX_PATH], *path2, *name;
    struct vfsmount *mnt;
    struct mount *m;

    task = next_task(&init_task);

    fs = task->fs;
    root = &fs->root;
    dentry = root->dentry;
    mnt = root->mnt;

    if (strcmp(path, "/") == 0)
        goto end;

    strcpy(buf, &path[1]);
    path2 = buf;

    while ((name = strsep(&path2, "/")) != NULL) {
        q.name = (unsigned char *)name;
        q.len = strlen(name);
        q.hash = full_name_hash(q.name, q.len);

        dentry = d_lookup(dentry, &q);
        if (dentry == NULL)
            break;

        if (d_mountpoint(dentry)) {
            mnt = lookup_vfsmount(mnt, dentry);
            if (mnt == NULL)
                return NULL;

            dentry = mnt->mnt_root;
        }
    }

 end:
    if (mntp)
        *mntp = mnt;

    return dentry;
}

void *map_page_cache(struct dentry *dentry, unsigned long index)
{
    struct inode *inode;
    struct address_space *mapping;
    struct page *page;

    inode = dentry->d_inode;
    if (inode == NULL)
        return NULL;

    mapping = inode->i_mapping;

    page = find_get_page(mapping, index);
    if (page == NULL)
        return NULL;

    return kmap_atomic(page);
}

void unmap_page_cache(void *addr)
{
    kunmap_atomic(addr);
}

long long get_cached_size(struct dentry *dentry)
{
    struct inode *inode;

    inode = dentry->d_inode;
    if (inode == NULL)
        return 0;

    return i_size_read(inode);
}
    
// linux/fs/stat.c
extern int cp_new_stat(struct kstat *stat, struct stat __user *statbuf);

int get_cached_stat(struct vfsmount *mnt, struct dentry *dentry,
                    struct stat *stbuf)
{
    struct inode *inode;
    struct kstat stat;

    inode = dentry->d_inode;
    if (inode == NULL)
        return -1;

    get_stat(mnt, dentry, &stat);

    return cp_new_stat(&stat, stbuf);
}

void get_dir_cache(struct dentry *dentry, struct strset *ss)
{
    struct dentry *child;
    char *name;
    unsigned long ino, mode;

    list_for_each_entry(child, &dentry->d_subdirs, d_u.d_child) {
        // skip a deleted entry
        if (child->d_inode == NULL)
            continue;

        name = (char *)child->d_name.name;
        ino = child->d_inode->i_ino;
        mode = child->d_inode->i_mode;

        strset_add(ss, name, ino, mode);
    }
}    

int get_cached_link(struct dentry *dentry, char *buf, int size)
{
    struct inode *inode;
    struct nameidata nd;
    void *cookie;
    char *link;
    int len;

    inode = dentry->d_inode;
    if (inode == NULL)
        return -1;

    cookie = inode_op_follow_link(inode->i_op, dentry, &nd);
    if (IS_ERR(cookie))
        return PTR_ERR(cookie);

    if (cookie == NULL) {
	len = vfs_readlink(dentry, buf, size, nd_get_link(&nd));
    }
    else {
        link = (char *)map_page_cache(dentry, 0);
        if (link == NULL)
            return -1;

        len = i_size_read(inode);
        memcpy(buf, link, len);

        unmap_page_cache(link);
    }

    return len;
}

int get_cached_statfs(struct vfsmount *mnt, struct dentry *dentry,
                      struct statfs *stbuf)
{
    struct inode *inode;

    inode = dentry->d_inode;
    if (inode == NULL)
        return -1;

    return get_statfs(mnt, dentry, stbuf);
}

/*
unsigned long ino;
dev_t dev;

struct block_device *bdev = bdget(dev);
struct super_block *sb = get_super(bdev);
struct hlist_head *head = inode_hashtable + hash(sb, ino);
struct inode *inode = find_inode_fast(sb, head, ino);
*/
