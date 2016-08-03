#ifndef __TRANSCALL_H
#define __TRANSCALL_H

struct new_utsname;
struct net_if;

void emulate_uname(struct new_utsname *utsname);
int emulate_dev_ioctl(struct net_if *nif, int nr);

#endif /* __TRANSCALL_H */
