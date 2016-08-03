#include <linux/sched.h>
#include <linux/nsproxy.h>
#include <linux/utsname.h>
#include <linux/pid.h>
#include <linux/seq_file.h>
#include <linux/fdtable.h>
#include <linux/netdevice.h>
#include <net/udp.h>
#include <net/tcp.h>
#include <net/raw.h>
#include "fs/proc/internal.h"
#include "shadow_procfs.h"
#include "utils.h"

#define DATA_SIZE 10000
static char data[DATA_SIZE];

#define SFILE_UPDATE1(fname, proc)                                 \
void update_##fname(struct fuse_node *node)                        \
{                                                                  \
    struct seq_file *m;                                            \
                                                                   \
    m = seq_get(data, DATA_SIZE);                                  \
    proc(seq_renew(m));                                            \
    write_data(node, m->buf, m->count);                            \
}

#define SFILE_UPDATE2(fname, proc)                                 \
void update_##fname(struct fuse_node *node)                        \
{                                                                  \
    struct seq_file *m;                                            \
                                                                   \
    m = seq_get(data, DATA_SIZE);                                  \
    proc(seq_renew(m), NULL);                                      \
    write_data(node, m->buf, m->count);                            \
}

#define SFILE_UPDATE_VAR(fname, var)                               \
void update_##fname(struct fuse_node *node)                        \
{                                                                  \
    int size;                                                      \
                                                                   \
    size = sprintf(data, "%d\n", var);                             \
    write_data(node, data, size);                                  \
}

// root
SFILE_UPDATE2(uptime, uptime_proc_show)
SFILE_UPDATE2(meminfo, meminfo_proc_show)
SFILE_UPDATE2(filesystems, filesystems_proc_show)
SFILE_UPDATE2(version, version_proc_show)
SFILE_UPDATE2(stat, show_stat)

// tty
SFILE_UPDATE1(tty_drivers, proc_ttys)

// sys
SFILE_UPDATE_VAR(sys_kernel_pid_max, pid_max)
SFILE_UPDATE_VAR(sys_kernel_ngroups_max, ngroups_max)

#define UPDATE_SEQ(op, priv) {           \
    struct seq_file *m;                  \
    extern struct seq_operations op;     \
                                         \
    m = seq_get(data, DATA_SIZE);        \
    seq_traverse(m, priv, &op);          \
    write_data(node, m->buf, m->count);  \
}

static void seq_traverse(struct seq_file *seq, void *priv,
                         struct seq_operations *op)
{
    loff_t pos = 0;
    void *p = NULL;

    seq->private = priv;

    p = op->start(seq, &pos);
    while (p != NULL) {
        op->show(seq, p);
        p = op->next(seq, p, &pos);
    }
}

void update_self(struct fuse_node *node)
{
    write_data(node, "1", 1);
}

#if 0
void create_kallsyms(struct fuse_node *root_node)
{
    /*
    struct seq_file *m;

    m = seq_get(data, DATA_SIZE);

    proc_kallsyms(seq_renew(m));
    ONE(root_node, "kallsyms");
    */
}
#endif // 0

void create_pids(struct fuse_node *node)
{
    struct task_struct *task;
    char dirname[16];
    struct fuse_node *pid_node, *task_node, *tid_node;

    task = next_task(&init_task);

    while (task != &init_task) {
        create_pid_dirent(node, task->pid);
        
        task = next_task(task);
    }
}

void update_pid_task(struct fuse_node *node)
{
    struct task_struct *task;
    struct task_struct *th;
    pid_t nr;

    nr = (int)get_update_arg(node);

    task = find_task_by_vpid(nr);
    if (task == NULL)
        return;

    delete_numerics(node);  // XXX

    th = task;

    do {
        create_tid_dirent(node, th->pid);

        th = next_thread(th);	
    } while (th != task);
}

void update_pid_fd(struct fuse_node *node)
{
    struct task_struct *task;
    struct files_struct *files;
    struct file *file;
    unsigned int fd;
    pid_t nr;

    nr = (int)get_update_arg(node);
    
    task = find_task_by_vpid(nr);
    if (task == NULL)
        return;

    delete_numerics(node);  // XXX

    files = get_files_struct(task);

    for (fd = 0; fd < files_fdtable(files)->max_fds; fd++) {
        file = fcheck_files(files, fd);
        if (file)
            create_fd_dirent(node, fd, nr);
    }
}

void update_pid_fd_num(struct fuse_node *node)
{
    struct task_struct *task;
    struct files_struct *files;
    struct file *file;
    int size;
    unsigned int fd;
    pid_t nr;
    void *arg;

    arg = get_update_arg(node);
    fd = (unsigned long)arg & 0xffffffff;
    nr = (unsigned long)arg >> 32;
    
    task = find_task_by_vpid(nr);
    if (task == NULL)
        return;

    files = get_files_struct(task);

    file = fcheck_files(files, fd);
    if (file) {
        size = do_proc_readlink(&file->f_path, data, DATA_SIZE);
        if (size <= 0)
            return;

        write_data(node, data, size);
    }
}

void update_pid_stat(struct fuse_node *node)
{
    struct task_struct *task;
    struct pid *pid;
    struct pid_namespace *ns;
    struct seq_file *m;
    pid_t nr;

    nr = (int)get_update_arg(node);

    task = find_task_by_vpid(nr);
    if (task == NULL)
        return;

    pid = get_task_pid(task, PIDTYPE_PID);
    ns = pid->numbers[0].ns;

    m = seq_get(data, DATA_SIZE);
    proc_tid_stat(seq_renew(m), ns, pid, task);
    write_data(node, m->buf, m->count);
}

void update_pid_status(struct fuse_node *node)
{
    struct task_struct *task;
    struct pid *pid;
    struct pid_namespace *ns;
    struct seq_file *m;
    pid_t nr;

    nr = (int)get_update_arg(node);

    task = find_task_by_vpid(nr);
    if (task == NULL)
        return;

    pid = get_task_pid(task, PIDTYPE_PID);
    ns = pid->numbers[0].ns;

    m = seq_get(data, DATA_SIZE);
    proc_pid_status(seq_renew(m), ns, pid, task);
    write_data(node, m->buf, m->count);
}

void update_pid_cmdline(struct fuse_node *node)
{
    struct task_struct *task;
    int size;
    pid_t nr;

    nr = (int)get_update_arg(node);

    task = find_task_by_vpid(nr);
    if (task == NULL)
        return;

    size = proc_pid_cmdline(task, data);
    write_data(node, data, size);
}

void update_pid_auxv(struct fuse_node *node)
{
    struct task_struct *task;
    int size;
    pid_t nr;

    nr = (int)get_update_arg(node);

    task = find_task_by_vpid(nr);
    if (task == NULL)
        return;

    size = proc_pid_auxv(task, data);
    write_data(node, data, size);
}

void update_pid_exe(struct fuse_node *node)
{
    struct task_struct *task;
    struct mm_struct *mm;
    struct file *exe_file;
    int size;
    pid_t nr;

    nr = (int)get_update_arg(node);

    task = find_task_by_vpid(nr);
    if (task == NULL)
        return;

    mm = get_task_mm(task);
    if (!mm)
        return;

    exe_file = get_mm_exe_file(mm);
    if (exe_file) {
        size = do_proc_readlink(&exe_file->f_path, data, DATA_SIZE);
        if (size <= 0)
            return;

        write_data(node, data, size);
    }
}

// net
extern void udp_set_private(struct udp_iter_state *state);
extern void tcp_set_private(struct tcp_iter_state *state);
extern void raw_set_private(struct raw_iter_state *state);
extern void udp6_set_private(struct udp_iter_state *state);
extern void tcp6_set_private(struct tcp_iter_state *state);
extern void raw6_set_private(struct raw_iter_state *state);

// net/unix/af_unix.c (only in 2.6)
struct unix_iter_state {
	struct seq_net_private p;
	int i;
};

void update_net_unix(struct fuse_node *node)
{
    struct unix_iter_state state;

    UPDATE_SEQ(unix_seq_ops, &state);
}

void update_net_udp(struct fuse_node *node)
{
    struct udp_iter_state state;

    udp_set_private(&state);
    UPDATE_SEQ(udp_seq_ops, &state);
}

void update_net_tcp(struct fuse_node *node)
{
    struct tcp_iter_state state;

    tcp_set_private(&state);
    UPDATE_SEQ(tcp_seq_ops, &state);
}

void update_net_raw(struct fuse_node *node)
{
    struct raw_iter_state state;

    raw_set_private(&state);
    UPDATE_SEQ(raw_seq_ops, &state);
}

void update_net_packet(struct fuse_node *node)
{
    UPDATE_SEQ(packet_seq_ops, NULL);
}

#ifdef CONFIG_IPV6
void update_net_udp6(struct fuse_node *node)
{
    struct udp_iter_state state;

    udp6_set_private(&state);
    UPDATE_SEQ(udp6_seq_ops, &state);
}

void update_net_tcp6(struct fuse_node *node)
{
    struct tcp_iter_state state;

    tcp6_set_private(&state);
    UPDATE_SEQ(tcp6_seq_ops, &state);
}

void update_net_raw6(struct fuse_node *node)
{
    struct raw_iter_state state;

    raw6_set_private(&state);
    UPDATE_SEQ(raw6_seq_ops, &state);
}
#endif // CONFIG_IPV6

void update_pid_maps(struct fuse_node *node)
{
    struct proc_maps_private priv;
    struct task_struct *task;
    int nr;

    nr = (int)get_update_arg(node);

    task = find_task_by_vpid(nr);
    if (task == NULL)
        return;

    priv.pid = get_task_pid(task, PIDTYPE_PID);

    UPDATE_SEQ(proc_pid_maps_op, &priv);
}

void update_tid_maps(struct fuse_node *node)
{
    struct proc_maps_private priv;
    struct task_struct *task;
    int nr;

    nr = (int)get_update_arg(node);

    task = find_task_by_vpid(nr);
    if (task == NULL)
        return;

    priv.pid = get_task_pid(task, PIDTYPE_PID);

    UPDATE_SEQ(proc_tid_maps_op, &priv);
}
