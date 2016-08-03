#ifndef __UTILS_H
#define __UTILS_H

struct seq_file;
struct dentry_operations;
struct dentry;
struct inode_operations;
struct nameidata;
struct super_operations;
struct kstatfs;
struct vfsmount;
struct statfs;

struct seq_file *seq_get(char *data, int size);
struct seq_file *seq_renew(struct seq_file *m);

char *dentry_op_dname(struct dentry_operations *op,
                      struct dentry *dentry, char *buffer, int buflen);
void *inode_op_follow_link(struct inode_operations *op,
                           struct dentry *dentry, struct nameidata *nd);
int super_op_statfs(struct super_operations *op,
                    struct dentry *dentry, struct kstatfs *buf);

// for compatibility
struct vfsmount *lookup_vfsmount(struct vfsmount *mnt, struct dentry *dentry);
int get_stat(struct vfsmount *mnt, struct dentry *dentry, 
             struct kstat *stat);
int get_statfs(struct vfsmount *mnt, struct dentry *dentry,
               struct statfs *buf);

#define PROTO_SHOW_FUNC(name) \
int name##_proc_show(struct seq_file *m, void *v);

PROTO_SHOW_FUNC(uptime)
PROTO_SHOW_FUNC(meminfo)
PROTO_SHOW_FUNC(filesystems)
PROTO_SHOW_FUNC(version)

#define proc_tid_maps_op proc_pid_maps_op

#endif // __UTILS_H
