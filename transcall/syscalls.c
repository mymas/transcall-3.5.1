#include <linux/sched.h>
#include <linux/nsproxy.h>
#include <linux/utsname.h>
//#include <linux/pid.h>
//#include <linux/fdtable.h>
#include <linux/netdevice.h>

void emulate_uname(struct new_utsname *utsname)
{
    struct task_struct *task;
    struct uts_namespace *uts_ns;
    struct new_utsname *name;
    int size;

    task = next_task(&init_task);
    uts_ns = task->nsproxy->uts_ns;
    name = &uts_ns->name;

    memcpy((char *)utsname, (char *)kdata(name), sizeof(*name));
}

struct net_if {
    char name[IFNAMSIZ];
    short flags;
    int ifindex;
};

extern int inet_gifconf(struct net_device *dev, char __user *buf, int len);

int emulate_dev_ioctl(struct net_if *nif, int nr)
{
    struct net *net = &init_net; // XXX sock_net
    char buf[1024];
    struct ifconf ifc;
    struct ifreq *ifr;
    int i, num;

    register_gifconf(PF_INET, inet_gifconf);

    ifc.ifc_len = sizeof(buf);
    ifc.ifc_buf = buf;

    dev_ioctl(net, SIOCGIFCONF, &ifc);

    ifr = ifc.ifc_req;

    num = ifc.ifc_len / sizeof(struct ifreq);
    if (num > nr)
        num = nr;

    for (i = 0; i < num; i++) {
        dev_ioctl(net, SIOCGIFFLAGS, ifr);
        nif[i].flags = ifr->ifr_flags;

        dev_ioctl(net, SIOCGIFINDEX, ifr);
        nif[i].ifindex = ifr->ifr_ifindex;

        memcpy(nif[i].name, ifr->ifr_name, IFNAMSIZ);

        ifr++;
    }

    return num;
}
