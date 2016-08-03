#ifndef __STRSET_H
#define __STRSET_H

struct strset;
struct snode;

struct strset *strset_new(void);
void strset_delete(struct strset *ss);
void strset_add(struct strset *ss, char *name,
                unsigned long ino, unsigned long mode);
int strset_contains(struct strset *ss, char *name);

struct snode *strset_get_head(struct strset *ss);
struct snode *snode_get_next(struct snode *node);
void snode_get_data(struct snode *node, char **name,
                    unsigned long *ino, unsigned long *mode);

#endif /* __STRSET_H */
