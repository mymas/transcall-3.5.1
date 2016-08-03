#ifndef __ADDR_H
#define __ADDR_H

#ifdef __cplusplus
extern "C" {
#endif

extern void g_pause(void);
extern void g_unpause(void);
extern void g_init(int domain_id);
extern void g_exit(void);
extern void *g_map(void *addr, unsigned long size);
extern void g_unmap(void *laddr);
extern void *g_proc_map(void *addr, unsigned long size, void *pgd);

/* for non-struct kernel data */
#define kdata(obj) (typeof(obj))g_map(obj, sizeof(*(obj)))

#ifdef __cplusplus
}
#endif

#endif /* __ADDR_H */
