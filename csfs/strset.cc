#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct snode {
    char *name;
    unsigned long ino;
    unsigned short mode;

    struct snode *next;  /* for set */
    struct snode *lnext;  /* for list */
};

static struct snode *snode_new(char *name, unsigned long ino,
                               unsigned short mode)
{
    struct snode *node;

    node = (struct snode *)malloc(sizeof(struct snode));

    node->name = strdup(name);
    node->ino = ino;
    node->mode = mode;

    return node;
}

static void snode_delete(struct snode *node)
{
    free(node->name);
    free(node);
}

struct snode *snode_get_next(struct snode *node)
{
    return node->lnext;
}

void snode_get_data(struct snode *node, char **name,
                    unsigned long *ino, unsigned long *mode)
{
    *name = node->name;
    *ino = node->ino;
    *mode = node->mode;
}

struct slist {
    struct snode *head;
};

static struct slist *slist_new(void)
{
    struct slist *ls;

    ls = (struct slist *)malloc(sizeof(struct slist));

    ls->head = NULL;

    return ls;
}

static void slist_delete(struct slist *ls)
{
    struct snode *node = ls->head;
    struct snode *tmp;

    while (node != NULL) {
        tmp = node;
        node = node->next;

        snode_delete(tmp);
    }

    free(ls);
}

static struct snode *slist_insert_head(struct slist *ls, char *name,
                                       unsigned long ino, unsigned long mode)
{
    struct snode *node;

    node = snode_new(name, ino, mode);

    node->next = ls->head;
    ls->head = node;

    return node;
}

static int slist_search(struct slist *ls, char *name)
{
    struct snode *node = ls->head;

    while (node != NULL) {
        if (strcmp(node->name, name) == 0)
            return 1;

        node = node->next;
    }

    return 0;  // not found
}

struct llist {
    struct snode *head;
};

static void llist_init(struct llist *ls)
{
    ls->head = NULL;
}

static void llist_insert_head(struct llist *ls, struct snode *node)
{
    node->lnext = ls->head;
    ls->head = node;
}

static struct snode *llist_get_head(struct llist *ls)
{
    return ls->head;
}

#define SS_SIZE 13

struct strset {
    struct slist *ls[SS_SIZE];

    struct llist linear;  /* whole list of all nodes */
};

struct strset *strset_new(void)
{
    struct strset *ss;
    int i;

    ss = (struct strset *)malloc(sizeof(struct strset));

    for (i = 0; i < SS_SIZE; i++)
        ss->ls[i] = slist_new();

    llist_init(&ss->linear);

    return ss;
}

void strset_delete(struct strset *ss)
{
    int i;

    for (i = 0; i < SS_SIZE; i++)
        slist_delete(ss->ls[i]);

    free(ss);
}

static unsigned int strset_hash(char *name)
{
    int len = strlen(name);
    unsigned int value = 0;
    int i;

    for (i = 0; i < len; i++)
        value += (unsigned char)name[i];

    return value % SS_SIZE;
}

void strset_add(struct strset *ss, char *name,
                unsigned long ino, unsigned long mode)
{
    int index = strset_hash(name);
    struct snode *node;

    if (ss == NULL)
        printf("strset_new should be invoked\n");

    node = slist_insert_head(ss->ls[index], name, ino, mode);

    llist_insert_head(&ss->linear, node);
}

int strset_contains(struct strset *ss, char *name)
{
    int index = strset_hash(name);

    if (ss == NULL)
        printf("strset_new should be invoked\n");

    return slist_search(ss->ls[index], name);
}

struct snode *strset_get_head(struct strset *ss)
{
    return llist_get_head(&ss->linear);
}
