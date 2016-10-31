#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <xenctrl.h>
#include "htable.h"

#define PAGE_SHIFT 12
#define PAGE_SIZE (1UL << PAGE_SHIFT)
#define PAGE_MASK (~(PAGE_SIZE-1))

#define PSE_SHIFT (PAGE_SHIFT+9)
#define PSE_SIZE (1UL << PSE_SHIFT)
#define PSE_MASK (~(PSE_SIZE-1))

#define PTE_PSE 0x80

static xc_interface *xch;
static int dom;
static struct htable *ht;
static struct htable *ht_phys;
static struct htable *ht_pse;

static int pause_count = 0;

void g_pause(void)
{
    /*
    if (xch && pause_count == 0)
        xc_domain_pause(xch, dom);

    pause_count++;
    */
}

void g_unpause(void)
{
    /*
    if (pause_count == 0)
        return;

    pause_count--;

    if (xch && pause_count == 0)
        xc_domain_unpause(xch, dom);
    */
}

void g_init(int domain_id)
{
    dom = domain_id;

    ht = htable_new();  // for virtual address
    ht_phys = htable_new();  // for physical address
    ht_pse = htable_new();  // for large page

    xch = xc_interface_open(NULL, NULL, 0);
}    

void g_exit(void)
{
    xc_interface_close(xch);
}

int map2_count = 0;
int total2_count = 0;
int large_count = 0;

static unsigned long translate_kern_address(xc_interface *xch, int dom,
                                            unsigned long virt)
{
    vcpu_guest_context_any_t ctxt;
    uint64_t cr3;
    uint64_t paddr, mask, pte = 0;
    int size, level;
    void *map;
    int rc;
    unsigned long va = virt;
    unsigned long mfn;
    unsigned long virt_start;

    if (virt < 0xffff000000000000)
        return 0;

    total2_count++;

    mfn = htable_get(ht_pse, va & PSE_MASK, 1);
    if (mfn)
        return mfn + ((va & ~PSE_MASK) >> PAGE_SHIFT);

    rc = xc_vcpu_getcontext(xch, dom, 0, &ctxt);
    if (rc < 0) {
        perror("xc_vcpu_getcontext");
        return rc;
    }

    cr3 = ctxt.x64.ctrlreg[3];

    /* 64-bit fixed */
    size = 8;
    paddr = cr3 & ~0xfffull;

    virt &= 0x0000ffffffffffffull;
    mask =  0x0000ff8000000000ull;

    /* Walk the pagetables */
    for (level = 4; level > 0; level--) {
        paddr += ((virt & mask) >> (xc_ffs64(mask) - 1)) * size;

        map = (void *)htable_get(ht_phys, paddr, 1);
        if (!map) {
            map = xc_map_foreign_range(xch, dom, PAGE_SIZE, PROT_READ, 
                                       paddr >> PAGE_SHIFT);
            if (!map) {
                printf("cannot map (pfn %lx)\n", paddr >> PAGE_SHIFT);
                return 0;
            }

            htable_put(ht_phys, paddr, (unsigned long)map, 1);
            map2_count++;
        }

        total2_count++;

        memcpy(&pte, map + (paddr & (PAGE_SIZE - 1)), size);

        /* possible when attempting to map a pointer as an array */
        if (!(pte & 1))
            return 0;

        paddr = pte & 0x000ffffffffff000ull;
        if (level == 2 && (pte & PTE_PSE)) {
            mask = ((mask ^ ~-mask) >> 1); /* All bits below first set bit */
            mfn = ((paddr & ~mask) | (virt & mask)) >> PAGE_SHIFT;

            htable_put(ht_pse, va & PSE_MASK, mfn & ~511, 1);

            large_count++;

            return mfn;
        }
        mask >>= 9;
    }

    return paddr >> PAGE_SHIFT;
}

int notrans_count = 0;
int map_count = 0;
int total_count = 0;

void *g_map(void *vaddr, unsigned long size)
{
    unsigned long base, offset;
    unsigned long mfn;
    unsigned long gbase;
    int num;

    total_count++;

    base = (unsigned long)vaddr & PAGE_MASK;
    offset = (unsigned long)vaddr & ~PAGE_MASK;
    num = (offset + size + PAGE_SIZE - 1) / PAGE_SIZE;

    gbase = htable_get(ht, base, num);

    if (gbase == 0) {
        if (num == 1) {
            mfn = translate_kern_address(xch, dom, base);
            if (mfn == 0) {
                if (base > 0xffff000000000000)
                    printf("translation failed: %lx\n",
                           (unsigned long)vaddr);

                //htable_put(ht, base, base, num);
                notrans_count++;
                return vaddr;  /* no translation */
            }

            gbase = (unsigned long)xc_map_foreign_range(xch, dom, PAGE_SIZE,
                                                        PROT_READ, mfn);
            if (gbase == 0) {
                //printf("g_map: map error (%p)\n", vaddr);
                return NULL;
            }

            htable_put(ht, base, gbase, num);

            map_count++;
        }
        else {
            xen_pfn_t arr[num];
            int i;

            for (i = 0; i < num; i++) {
                arr[i] = translate_kern_address(xch, dom,
                                                base + PAGE_SIZE * i);
                if (arr[i] == 0) {
                    if (base > 0xffff000000000000 && i == 0)
                        printf("translation failed 2: %lx\n",
                               (unsigned long)vaddr);

                    /* ignore more than second pages */
                    if (i > 0) {
                        num = i;
                        break;
                    }

                    //htable_put(ht, base, base, num);
                    notrans_count++;
                    return vaddr;  /* no translation */
                }
            }

            gbase = (unsigned long)xc_map_foreign_batch(xch, dom, PROT_READ,
                                                        arr, num);
            if (gbase == 0) {
                //printf("g_map: map error (%p)\n", vaddr);
                return NULL;
            }

            for (i = 0; i < num; i++)
                htable_put(ht, base + i * PAGE_SIZE, gbase + i * PAGE_SIZE,
                           num - i);

            map_count++;
        }

        //printf("map: %lx + %lx (%lu)\n", base, offset, num);
    }
    /*
    else
        printf("reuse: %lx + %lx\n", base, offset);
    */

    return (void *)(gbase + offset);
}

// XXX should remove entry from hashtable
void g_unmap(void *laddr)
{
#if 0
    unsigned long addr = (unsigned long)laddr & PAGE_MASK;

    munmap((void *)addr, PAGE_SIZE);
#endif
}

static unsigned long translate_proc_address(xc_interface *xch, int dom,
                                            unsigned long cr3,
                                            unsigned long virt)
{
    uint64_t paddr, mask, pte = 0;
    int size, level;
    void *map;

    /* 64-bit fixed */
    size = 8;
    paddr = cr3 & ~0xfffull;

    virt &= 0x0000ffffffffffffull;
    mask =  0x0000ff8000000000ull;

    /* Walk the pagetables */
    for (level = 4; level > 0; level--) {
        paddr += ((virt & mask) >> (xc_ffs64(mask) - 1)) * size;

        map = xc_map_foreign_range(xch, dom, PAGE_SIZE, PROT_READ, 
                                   paddr >> PAGE_SHIFT);
        if (!map) 
            return 0;

        memcpy(&pte, map + (paddr & (PAGE_SIZE - 1)), size);
        munmap(map, PAGE_SIZE);

        if (!(pte & 1)) 
            return 0;

        paddr = pte & 0x000ffffffffff000ull;

        if (level == 2 && (pte & PTE_PSE)) {
            mask = ((mask ^ ~-mask) >> 1); /* All bits below first set bit */
            return ((paddr & ~mask) | (virt & mask)) >> PAGE_SHIFT;
        }
        mask >>= 9;
    }

    return paddr >> PAGE_SHIFT;
}

int total3_count = 0;

void *g_proc_map(void *vaddr, unsigned long size, void *pgd)
{
    unsigned long pfn, cr3;
    unsigned long base, offset;
    unsigned long mfn;
    unsigned long gbase;
    int num;

    total3_count++;

    pfn = translate_kern_address(xch, dom, (unsigned long)pgd);
    cr3 = pfn << PAGE_SHIFT;

    base = (unsigned long)vaddr & PAGE_MASK;
    offset = (unsigned long)vaddr & ~PAGE_MASK;
    num = (offset + size + PAGE_SIZE - 1) / PAGE_SIZE;

    if (num == 1) {
        mfn = translate_proc_address(xch, dom, cr3, base);
        if (mfn == 0) {
            printf("g_proc_map: invalid address: %lx\n",
                   (unsigned long)vaddr);
            return NULL;
        }
        
        gbase = (unsigned long)xc_map_foreign_range(xch, dom, PAGE_SIZE,
                                                    PROT_READ, mfn);
    }
    else {
        xen_pfn_t arr[num];
        int i;
        
        for (i = 0; i < num; i++) {
            arr[i] = translate_proc_address(xch, dom, cr3,
                                            base + PAGE_SIZE * i);
            if (arr[i] == 0) {
                if (i == 0) {
                    printf("g_proc_map: invalid address: %lx\n",
                           (unsigned long)vaddr);
                    return NULL;
                }
                else {
                    /* ignore more than second pages */
                    num = i;
                    break;
                }
            }
        }
        
        gbase = (unsigned long)xc_map_foreign_batch(xch, dom, PROT_READ,
                                                    arr, num);
    }

    if (gbase == 0) {
        printf("g_proc_map: map error (%p)\n", vaddr);
        return NULL;
    }

    return (void *)(gbase + offset);
}
