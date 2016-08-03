#ifndef __CSFS_H
#define __CSFS_H

struct dentry;
struct vfsmount;
struct stat;
struct strset;
struct statfs;

struct dentry *lookup_dentry(char *path, struct vfsmount **mntp = NULL);
void *map_page_cache(struct dentry *dentry, unsigned long index);
void unmap_page_cache(void *addr);
long long get_cached_size(struct dentry *dentry);
int get_cached_stat(struct vfsmount *mnt, struct dentry *dentry,
                    struct stat *stbuf);
void get_dir_cache(struct dentry *dentry, struct strset *ss);
int get_cached_link(struct dentry *dentry, char *buf, int size);
int get_cached_statfs(struct vfsmount *mnt, struct dentry *dentry,
                      struct statfs *stbuf);

#endif // __CSFS_H
