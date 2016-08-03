#ifndef _LINUX_PATH_H
#define _LINUX_PATH_H

struct dentry;
struct vfsmount;

struct path {
	struct vfsmount *mnt;
	struct dentry *dentry;
};

#if 1
#define path_get(path)
#define path_put(path)
#else // 1
extern void path_get(struct path *);
extern void path_put(struct path *);
#endif // 1

#endif  /* _LINUX_PATH_H */
