#ifndef __HTABLE_H
#define __HTABLE_H

#ifdef __cplusplus
extern "C" {
#endif

struct htable;

struct htable *htable_new(void);
void htable_put(struct htable *ht, unsigned long key, unsigned long value,
                unsigned long size);
unsigned long htable_get(struct htable *ht, unsigned long key,
                         unsigned long size);

#ifdef __cplusplus
}
#endif

#endif /* __HTABLE_H */
