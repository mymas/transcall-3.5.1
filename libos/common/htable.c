#include <stdio.h>
#include <stdlib.h>

struct anode {
    unsigned long key, value;
    unsigned long size;
    struct anode *next;
};

static struct anode *anode_new(unsigned long key, unsigned long value,
                               unsigned long size)
{
    struct anode *node;

    node = (struct anode *)malloc(sizeof(struct anode));

    node->key = key;
    node->value = value;
    node->size = size;

    return node;
}

struct alist {
    struct anode *head;
};

static struct alist *alist_new(void)
{
    struct alist *ls;

    ls = (struct alist *)malloc(sizeof(struct alist));

    ls->head = NULL;

    return ls;
}

static void alist_insert_head(struct alist *ls, unsigned long key,
                              unsigned long value, unsigned long size)
{
    struct anode *node;

    node = anode_new(key, value, size);

    node->next = ls->head;
    ls->head = node;
}

static unsigned long alist_search(struct alist *ls, unsigned long key,
                                  unsigned long size)
{
    struct anode *node = ls->head;

    while (node != NULL) {
        if (node->key == key && node->size >= size)
            return node->value;

        node = node->next;
    }

    return 0;
}

#define HT_SIZE 233

struct htable {
    struct alist *ls[HT_SIZE];
};

struct htable *htable_new(void)
{
    struct htable *ht;
    int i;

    ht = (struct htable *)malloc(sizeof(struct htable));

    for (i = 0; i < HT_SIZE; i++)
        ht->ls[i] = alist_new();

    return ht;
}

static unsigned int htable_hash(unsigned long key)
{
    return key % HT_SIZE;
}

void htable_put(struct htable *ht, unsigned long key, unsigned long value,
                unsigned long size)
{
    int index = htable_hash(key);

    if (ht == NULL)
        printf("g_init should be invoked\n");

    alist_insert_head(ht->ls[index], key, value, size);
}

unsigned long htable_get(struct htable *ht, unsigned long key,
                         unsigned long size)
{
    int index = htable_hash(key);

    if (ht == NULL)
        printf("g_init should be invoked\n");

    return alist_search(ht->ls[index], key, size);
}
