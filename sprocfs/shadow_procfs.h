#ifndef __SHADOW_PROCFS_H
#define __SHADOW_PROCFS_H

struct fuse_node;

// shadow_procfs.c
struct fuse_node *add_dir_node(struct fuse_node *node, char *dirname);
struct fuse_node *add_reg_node(struct fuse_node *node, char *filename);
struct fuse_node *add_lnk_node(struct fuse_node *node, char *linkname);
void write_data(struct fuse_node *node, char *data, int size);
void delete_numerics(struct fuse_node *node);
void *get_update_arg(struct fuse_node *node);

void create_pid_dirent(struct fuse_node *parent, int pid);
void create_tid_dirent(struct fuse_node *parent, int tid);
void create_fd_dirent(struct fuse_node *parent, int fd, int pid);

// retriever.c
#define PROTO_UPDATE_FUNC(fname) \
void update_##fname(struct fuse_node *node);

PROTO_UPDATE_FUNC(uptime)
PROTO_UPDATE_FUNC(filesystems)
PROTO_UPDATE_FUNC(meminfo)
PROTO_UPDATE_FUNC(version)
PROTO_UPDATE_FUNC(stat)
PROTO_UPDATE_FUNC(self)

PROTO_UPDATE_FUNC(pid_stat)
PROTO_UPDATE_FUNC(pid_status)
PROTO_UPDATE_FUNC(pid_cmdline)
PROTO_UPDATE_FUNC(pid_auxv)
PROTO_UPDATE_FUNC(pid_maps)
PROTO_UPDATE_FUNC(tid_maps)
PROTO_UPDATE_FUNC(pid_exe)
PROTO_UPDATE_FUNC(pid_task)
PROTO_UPDATE_FUNC(pid_fd)
PROTO_UPDATE_FUNC(pid_fd_num)

PROTO_UPDATE_FUNC(tty_drivers)

PROTO_UPDATE_FUNC(net_unix)
PROTO_UPDATE_FUNC(net_udp)
PROTO_UPDATE_FUNC(net_tcp)
PROTO_UPDATE_FUNC(net_raw)
PROTO_UPDATE_FUNC(net_packet)
#ifdef CONFIG_IPV6
PROTO_UPDATE_FUNC(net_udp6)
PROTO_UPDATE_FUNC(net_tcp6)
PROTO_UPDATE_FUNC(net_raw6)
#endif

PROTO_UPDATE_FUNC(sys_kernel_pid_max)
PROTO_UPDATE_FUNC(sys_kernel_ngroups_max)

void create_pids(struct fuse_node *node);

void create_kallsyms(struct fuse_node *root_node);

struct task_struct;

// fs/proc/base.c (static)
int proc_pid_cmdline(struct task_struct *task, char * buffer);
int proc_pid_auxv(struct task_struct *task, char *buffer);
int do_proc_readlink(struct path *path, char *buffer, int buflen);

// fs/proc/proc_misc.c (static)
int uptime_proc_show(struct seq_file *p, void *v);
int meminfo_proc_show(struct seq_file *p, void *v);
int filesystems_proc_show(struct seq_file *p, void *v);
int version_proc_show(struct seq_file *p, void *v);
int show_stat(struct seq_file *p, void *v);

// fs/proc/proc_tty.c (new)
void proc_ttys(struct seq_file *seq);

// kernel/kallsyms.c (new)
void proc_kallsyms(struct seq_file *seq);

// net/unix/af_unix.c (new)
void proc_net_unix(struct seq_file *seq);

// net/ipv4/udp.c (new)
void proc_net_udp(struct seq_file *seq);

// net/ipv4/tcp_ipv4.c (new)
void proc_net_tcp(struct seq_file *seq);

// net/ipv4/raw.c (new)
void proc_net_raw(struct seq_file *seq);

// net/ipv6/udp.c (new)
void proc_net_udp6(struct seq_file *seq);

// net/ipv6/tcp_ipv6.c (new)
void proc_net_tcp6(struct seq_file *seq);

// net/ipv6/raw.c (new)
void proc_net_raw6(struct seq_file *seq);

// net/packet/af_packet.c (new)
void proc_net_packet(struct seq_file *seq);

#endif // __SHADOW_PROCFS_H
