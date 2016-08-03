#include <stdio.h>
#include <stdlib.h>
#include "csfs.h"
#include "addr.h"

int main(int argc, char *argv[])
{
    struct dentry *dentry;
    int domid;
    char *path;
    void *addr;

    if (argc != 3)
        exit(1);

    domid = atoi(argv[1]);
    path = argv[2];

    g_init(domid);

    // XXX should not use dentry in this file?
    dentry = lookup_dentry(path);
    if (dentry == NULL) {
        printf("dentry not found\n");
        exit(1);
    }

    print_children(dentry);

    addr = get_page_cache(dentry, 0);
    if (addr == NULL) {
        printf("page cache not found\n");
        exit(1);
    }

    printf("%s\n", (char *)addr);

    release_page_cache(addr);

    g_exit();

    return 0;
}
