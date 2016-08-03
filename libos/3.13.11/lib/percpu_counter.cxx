






extern "C" {


extern void g_pause(void);
extern void g_unpause(void);
extern void g_init(int domain_id);
extern void g_exit(void);
extern void *g_map(void *addr, unsigned long size);
extern void g_unmap(void *laddr);
extern void *g_proc_map(void *addr, unsigned long size, void *pgd);





}




extern int pid_max;
extern int ngroups_max;



struct seq_file;
struct dentry_operations;
struct dentry;
struct inode_operations;
struct nameidata;
struct super_operations;
struct kstatfs;
struct vfsmount;
struct statfs;

struct seq_file *seq_get(char *data, int size);
struct seq_file *seq_renew(struct seq_file *m);

char *dentry_op_dname(struct dentry_operations *op,
                      struct dentry *dentry, char *buffer, int buflen);
void *inode_op_getattr(struct inode_operations *op,
                       struct vfsmount *mnt, struct dentry *dentry,
                       struct kstat *stat);
void *inode_op_follow_link(struct inode_operations *op,
                           struct dentry *dentry, struct nameidata *nd);
int super_op_statfs(struct super_operations *op,
                    struct dentry *dentry, struct kstatfs *buf);


struct vfsmount *lookup_vfsmount(struct vfsmount *mnt, struct dentry *dentry);
int get_stat(struct vfsmount *mnt, struct dentry *dentry,
             struct kstat *stat);
int get_statfs(struct vfsmount *mnt, struct dentry *dentry,
               struct statfs *buf);







struct ftrace_branch_data {
 char *func;
 char *file;
 unsigned line;
 union {
  struct {
   unsigned long correct;
   unsigned long incorrect;
  };
  struct {
   unsigned long miss;
   unsigned long hit;
  };
  unsigned long miss_hit[2];
 };
};
struct kernel_symbol
{
 unsigned long value;
 char *name;
};





























typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;




typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

typedef signed long long s64;
typedef unsigned long long u64;






enum {
 _false = 0,
 _true = 1
};
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;




typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;


typedef unsigned long __kernel_old_dev_t;


typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;



typedef __kernel_ulong_t __kernel_ino_t;



typedef unsigned int __kernel_mode_t;



typedef int __kernel_pid_t;



typedef int __kernel_ipc_pid_t;



typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;



typedef __kernel_long_t __kernel_suseconds_t;



typedef int __kernel_daddr_t;



typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;




typedef struct {
 int val[2];
} __kernel_fsid_t;





typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_time_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;






typedef __u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef unsigned short umode_t;
typedef __u32 nlink_t;
typedef __kernel_off_t off_t;
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
typedef __kernel_timer_t timer_t;
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;





typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;

typedef unsigned long uintptr_t;



typedef __kernel_old_uid_t old_uid_t;
typedef __kernel_old_gid_t old_gid_t;



typedef __kernel_loff_t loff_t;
typedef __kernel_size_t size_t;




typedef __kernel_ssize_t ssize_t;




typedef __kernel_ptrdiff_t ptrdiff_t;




typedef __kernel_time_t time_t;




typedef __kernel_clock_t clock_t;




typedef __kernel_caddr_t caddr_t;



typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;


typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;




typedef __u8 u_int8_t;
typedef __s8 int8_t;
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;



typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;


typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
typedef unsigned long sector_t;
typedef unsigned long blkcnt_t;
typedef u64 dma_addr_t;
typedef unsigned gfp_t;
typedef unsigned fmode_t;
typedef unsigned oom_flags_t;


typedef u64 phys_addr_t;




typedef phys_addr_t resource_size_t;





typedef unsigned long irq_hw_number_t;




typedef struct _atomic {

 int counter;
} atomic_t;





typedef struct _atomic64 {

 long counter;
} atomic64_t;


struct list_head {
 struct list_head *next, *prev;
};

struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};

struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};






struct callback_head {
 struct callback_head *next;
 void (*func)(struct callback_head *head);
};

static inline void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}
static inline void __list_add(struct list_head *_new,
         struct list_head *prev,
         struct list_head *next)
{
 next->prev = _new;
 _new->next = next;
 _new->prev = prev;
 prev->next = _new;
}
static inline void list_add(struct list_head *_new, struct list_head *head)
{
 __list_add(_new, head, head->next);
}
static inline void list_add_tail(struct list_head *_new, struct list_head *head)
{
 __list_add(_new, head->prev, head);
}
static inline void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}
static inline void __list_del_entry(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
}

static inline void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *) 0x00100100 + (0xdead000000000000UL));
 entry->prev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
static inline void list_replace(struct list_head *old,
    struct list_head *_new)
{
 _new->next = old->next;
 _new->next->prev = _new;
 _new->prev = old->prev;
 _new->prev->next = _new;
}

static inline void list_replace_init(struct list_head *old,
     struct list_head *_new)
{
 list_replace(old, _new);
 INIT_LIST_HEAD(old);
}





static inline void list_del_init(struct list_head *entry)
{
 __list_del_entry(entry);
 INIT_LIST_HEAD(entry);
}






static inline void list_move(struct list_head *list, struct list_head *head)
{
 __list_del_entry(list);
 list_add(list, head);
}






static inline void list_move_tail(struct list_head *list,
      struct list_head *head)
{
 __list_del_entry(list);
 list_add_tail(list, head);
}






static inline int list_is_last( struct list_head *list,
    struct list_head *head)
{
 return list->next == head;
}





static inline int list_empty( struct list_head *head)
{
 return head->next == head;
}
static inline int list_empty_careful( struct list_head *head)
{
 struct list_head *next = head->next;
 return (next == head) && (next == head->prev);
}





static inline void list_rotate_left(struct list_head *head)
{
 struct list_head *first;

 if (!list_empty(head)) {
  first = head->next;
  list_move_tail(first, head);
 }
}





static inline int list_is_singular( struct list_head *head)
{
 return !list_empty(head) && (head->next == head->prev);
}

static inline void __list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 struct list_head *new_first = entry->next;
 list->next = head->next;
 list->next->prev = list;
 list->prev = entry;
 entry->next = list;
 head->next = new_first;
 new_first->prev = head;
}
static inline void list_cut_position(struct list_head *list,
  struct list_head *head, struct list_head *entry)
{
 if (list_empty(head))
  return;
 if (list_is_singular(head) &&
  (head->next != entry && head != entry))
  return;
 if (entry == head)
  INIT_LIST_HEAD(list);
 else
  __list_cut_position(list, head, entry);
}

static inline void __list_splice( struct list_head *list,
     struct list_head *prev,
     struct list_head *next)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;

 first->prev = prev;
 prev->next = first;

 last->next = next;
 next->prev = last;
}






static inline void list_splice( struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head, head->next);
}






static inline void list_splice_tail(struct list_head *list,
    struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head->prev, head);
}
static inline void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head, head->next);
  INIT_LIST_HEAD(list);
 }
}
static inline void list_splice_tail_init(struct list_head *list,
      struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head->prev, head);
  INIT_LIST_HEAD(list);
 }
}
static inline void INIT_HLIST_NODE(struct hlist_node *h)
{
 h->next = 0;
 h->pprev = 0;
}

static inline int hlist_unhashed( struct hlist_node *h)
{
 return !h->pprev;
}

static inline int hlist_empty( struct hlist_head *h)
{
 return !h->first;
}

static inline void __hlist_del(struct hlist_node *n)
{
 struct hlist_node *next = n->next;
 struct hlist_node **pprev = n->pprev;
 *pprev = next;
 if (next)
  next->pprev = pprev;
}

static inline void hlist_del(struct hlist_node *n)
{
 __hlist_del(n);
 n->next = ((void *) 0x00100100 + (0xdead000000000000UL));
 n->pprev = ((void *) 0x00200200 + (0xdead000000000000UL));
}

static inline void hlist_del_init(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  INIT_HLIST_NODE(n);
 }
}

static inline void hlist_add_head(struct hlist_node *n, struct hlist_head *h)
{
 struct hlist_node *first = h->first;
 n->next = first;
 if (first)
  first->pprev = &n->next;
 h->first = n;
 n->pprev = &h->first;
}


static inline void hlist_add_before(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 next->pprev = &n->next;
 *(n->pprev) = n;
}

static inline void hlist_add_after(struct hlist_node *n,
     struct hlist_node *next)
{
 next->next = n->next;
 n->next = next;
 next->pprev = &n->next;

 if(next->next)
  next->next->pprev = &next->next;
}


static inline void hlist_add_fake(struct hlist_node *n)
{
 n->pprev = &n->next;
}





static inline void hlist_move_list(struct hlist_head *old,
       struct hlist_head *_new)
{
 _new->first = old->first;
 if (_new->first)
  _new->first->pprev = &_new->first;
 old->first = 0;
}














typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;




extern unsigned int __sw_hweight8(unsigned int w);
extern unsigned int __sw_hweight16(unsigned int w);
extern unsigned int __sw_hweight32(unsigned int w);
extern unsigned long __sw_hweight64(__u64 w);














extern char early_idt_handlers[32][2+2+5];
static inline unsigned long get_limit(unsigned long segment)
{
 unsigned long __limit;
 asm("lsll %1,%0" : "=r" (__limit) : "r" (segment));
 return __limit + 1;
}






extern int devmem_is_allowed(unsigned long pagenr);

extern unsigned long max_low_pfn_mapped;
extern unsigned long max_pfn_mapped;

static inline phys_addr_t get_max_mapped(void)
{
 return (phys_addr_t)max_pfn_mapped << 12;
}

bool pfn_range_is_mapped(unsigned long start_pfn, unsigned long end_pfn);

extern unsigned long init_memory_mapping(unsigned long start,
      unsigned long end);

extern void initmem_init(void);







struct pt_regs {
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long bp;
 unsigned long bx;

 unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long ax;
 unsigned long cx;
 unsigned long dx;
 unsigned long si;
 unsigned long di;
 unsigned long orig_ax;


 unsigned long ip;
 unsigned long cs;
 unsigned long flags;
 unsigned long sp;
 unsigned long ss;

};



typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
extern initcall_t __security_initcall_start[], __security_initcall_end[];


typedef void (*ctor_fn_t)(void);


extern int do_one_initcall(initcall_t fn);
extern char __attribute__ ((__section__(".init.data"))) boot_command_line[];
extern char *saved_command_line;
extern unsigned int reset_devices;


void setup_arch(char **);
void prepare_namespace(void);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) load_default_modules(void);
int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) init_rootfs(void);

extern void (*late_time_init)(void);

extern bool initcall_debug;
struct obs_kernel_param {
 char *str;
 int (*setup_func)(char *);
 int early;
};
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) parse_early_param(void);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) parse_early_options(char *cmdline);

struct desc_struct {
 union {
  struct {
   unsigned int a;
   unsigned int b;
  };
  struct {
   u16 limit0;
   u16 base0;
   unsigned base1: 8, type: 4, s: 1, dpl: 2, p: 1;
   unsigned limit: 4, avl: 1, l: 1, d: 1, g: 1, base2: 8;
  };
 };
} __attribute__((packed));







enum {
 GATE_INTERRUPT = 0xE,
 GATE_TRAP = 0xF,
 GATE_CALL = 0xC,
 GATE_TASK = 0x5,
};


struct gate_struct64 {
 u16 offset_low;
 u16 segment;
 unsigned ist : 3, zero0 : 5, type : 5, dpl : 2, p : 1;
 u16 offset_middle;
 u32 offset_high;
 u32 zero1;
} __attribute__((packed));





enum {
 DESC_TSS = 0x9,
 DESC_LDT = 0x2,
 DESCTYPE_S = 0x10,
};


struct ldttss_desc64 {
 u16 limit0;
 u16 base0;
 unsigned base1 : 8, type : 5, dpl : 2, p : 1;
 unsigned limit1 : 4, zero0 : 3, g : 1, base2 : 8;
 u32 base3;
 u32 zero1;
} __attribute__((packed));


typedef struct gate_struct64 gate_desc;
typedef struct ldttss_desc64 ldt_desc;
typedef struct ldttss_desc64 tss_desc;
struct desc_ptr {
 unsigned short size;
 unsigned long address;
} __attribute__((packed)) ;

















typedef unsigned long pteval_t;
typedef unsigned long pmdval_t;
typedef unsigned long pudval_t;
typedef unsigned long pgdval_t;
typedef unsigned long pgprotval_t;

typedef struct { pteval_t pte; } pte_t;
typedef struct pgprot { pgprotval_t pgprot; } pgprot_t;

typedef struct { pgdval_t pgd; } pgd_t;

static inline pgd_t native_make_pgd(pgdval_t val)
{
 return (pgd_t) { val };
}

static inline pgdval_t native_pgd_val(pgd_t pgd)
{
 return pgd.pgd;
}

static inline pgdval_t pgd_flags(pgd_t pgd)
{
 return native_pgd_val(pgd) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}


typedef struct { pudval_t pud; } pud_t;

static inline pud_t native_make_pud(pmdval_t val)
{
 return (pud_t) { val };
}

static inline pudval_t native_pud_val(pud_t pud)
{
 return pud.pud;
}
typedef struct { pmdval_t pmd; } pmd_t;

static inline pmd_t native_make_pmd(pmdval_t val)
{
 return (pmd_t) { val };
}

static inline pmdval_t native_pmd_val(pmd_t pmd)
{
 return pmd.pmd;
}
static inline pudval_t pud_flags(pud_t pud)
{
 return native_pud_val(pud) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}

static inline pmdval_t pmd_flags(pmd_t pmd)
{
 return native_pmd_val(pmd) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}

static inline pte_t native_make_pte(pteval_t val)
{



        return ({ pte_t var; var.pte = val; var; });

}

static inline pteval_t native_pte_val(pte_t pte)
{
 return pte.pte;
}

static inline pteval_t pte_flags(pte_t pte)
{
 return native_pte_val(pte) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))));
}





typedef struct page *pgtable_t;

extern pteval_t __supported_pte_mask;
extern void set_nx(void);
extern int nx_enabled;


extern pgprot_t pgprot_writecombine(pgprot_t prot);





struct file;
pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
                              unsigned long size, pgprot_t vma_prot);
int phys_mem_access_prot_allowed(struct file *file, unsigned long pfn,
                              unsigned long size, pgprot_t *vma_prot);


void set_pte_vaddr(unsigned long vaddr, pte_t pte);







struct seq_file;
extern void arch_report_meminfo(struct seq_file *m);

enum pg_level {
 PG_LEVEL_NONE,
 PG_LEVEL_4K,
 PG_LEVEL_2M,
 PG_LEVEL_1G,
 PG_LEVEL_NUM
};


extern void update_page_count(int level, unsigned long pages);
extern pte_t *lookup_address(unsigned long address, unsigned int *level);
extern phys_addr_t slow_virt_to_phys(void *__address);
extern int kernel_map_pages_in_pgd(pgd_t *pgd, u64 pfn, unsigned long address,
       unsigned numpages, unsigned long page_flags);

struct page;
struct thread_struct;
struct desc_ptr;
struct tss_struct;
struct mm_struct;
struct desc_struct;
struct task_struct;
struct cpumask;





struct paravirt_callee_save {
 void *func;
};


struct pv_info {
 unsigned int kernel_rpl;
 int shared_kernel_pmd;


 u16 extra_user_64bit_cs;


 int paravirt_enabled;
 char *name;
};

struct pv_init_ops {
 unsigned (*patch)(u8 type, u16 clobber, void *insnbuf,
     unsigned long addr, unsigned len);
};


struct pv_lazy_ops {

 void (*enter)(void);
 void (*leave)(void);
 void (*flush)(void);
};

struct pv_time_ops {
 unsigned long long (*sched_clock)(void);
 unsigned long long (*steal_clock)(int cpu);
 unsigned long (*get_tsc_khz)(void);
};

struct pv_cpu_ops {

 unsigned long (*get_debugreg)(int regno);
 void (*set_debugreg)(int regno, unsigned long value);

 void (*clts)(void);

 unsigned long (*read_cr0)(void);
 void (*write_cr0)(unsigned long);

 unsigned long (*read_cr4_safe)(void);
 unsigned long (*read_cr4)(void);
 void (*write_cr4)(unsigned long);


 unsigned long (*read_cr8)(void);
 void (*write_cr8)(unsigned long);



 void (*load_tr_desc)(void);
 void (*load_gdt)( struct desc_ptr *);
 void (*load_idt)( struct desc_ptr *);

 void (*store_idt)(struct desc_ptr *);
 void (*set_ldt)( void *desc, unsigned entries);
 unsigned long (*store_tr)(void);
 void (*load_tls)(struct thread_struct *t, unsigned int cpu);

 void (*load_gs_index)(unsigned int idx);

 void (*write_ldt_entry)(struct desc_struct *ldt, int entrynum,
    void *desc);
 void (*write_gdt_entry)(struct desc_struct *,
    int entrynum, void *desc, int size);
 void (*write_idt_entry)(gate_desc *,
    int entrynum, gate_desc *gate);
 void (*alloc_ldt)(struct desc_struct *ldt, unsigned entries);
 void (*free_ldt)(struct desc_struct *ldt, unsigned entries);

 void (*load_sp0)(struct tss_struct *tss, struct thread_struct *t);

 void (*set_iopl_mask)(unsigned mask);

 void (*wbinvd)(void);
 void (*io_delay)(void);


 void (*cpuid)(unsigned int *eax, unsigned int *ebx,
        unsigned int *ecx, unsigned int *edx);



 u64 (*read_msr)(unsigned int msr, int *err);
 int (*write_msr)(unsigned int msr, unsigned low, unsigned high);

 u64 (*read_tsc)(void);
 u64 (*read_pmc)(int counter);
 unsigned long long (*read_tscp)(unsigned int *aux);







 void (*irq_enable_sysexit)(void);







 void (*usergs_sysret64)(void);







 void (*usergs_sysret32)(void);



 void (*iret)(void);

 void (*swapgs)(void);

 void (*start_context_switch)(struct task_struct *prev);
 void (*end_context_switch)(struct task_struct *next);
};

struct pv_irq_ops {
 struct paravirt_callee_save save_fl;
 struct paravirt_callee_save restore_fl;
 struct paravirt_callee_save irq_disable;
 struct paravirt_callee_save irq_enable;

 void (*safe_halt)(void);
 void (*halt)(void);


 void (*adjust_exception_frame)(void);

};

struct pv_apic_ops {

 void (*startup_ipi_hook)(int phys_apicid,
     unsigned long start_eip,
     unsigned long start_esp);

};

struct pv_mmu_ops {
 unsigned long (*read_cr2)(void);
 void (*write_cr2)(unsigned long);

 unsigned long (*read_cr3)(void);
 void (*write_cr3)(unsigned long);





 void (*activate_mm)(struct mm_struct *prev,
       struct mm_struct *next);
 void (*dup_mmap)(struct mm_struct *oldmm,
    struct mm_struct *mm);
 void (*exit_mmap)(struct mm_struct *mm);



 void (*flush_tlb_user)(void);
 void (*flush_tlb_kernel)(void);
 void (*flush_tlb_single)(unsigned long addr);
 void (*flush_tlb_others)( struct cpumask *cpus,
     struct mm_struct *mm,
     unsigned long start,
     unsigned long end);


 int (*pgd_alloc)(struct mm_struct *mm);
 void (*pgd_free)(struct mm_struct *mm, pgd_t *pgd);





 void (*alloc_pte)(struct mm_struct *mm, unsigned long pfn);
 void (*alloc_pmd)(struct mm_struct *mm, unsigned long pfn);
 void (*alloc_pud)(struct mm_struct *mm, unsigned long pfn);
 void (*release_pte)(unsigned long pfn);
 void (*release_pmd)(unsigned long pfn);
 void (*release_pud)(unsigned long pfn);


 void (*set_pte)(pte_t *ptep, pte_t pteval);
 void (*set_pte_at)(struct mm_struct *mm, unsigned long addr,
      pte_t *ptep, pte_t pteval);
 void (*set_pmd)(pmd_t *pmdp, pmd_t pmdval);
 void (*set_pmd_at)(struct mm_struct *mm, unsigned long addr,
      pmd_t *pmdp, pmd_t pmdval);
 void (*pte_update)(struct mm_struct *mm, unsigned long addr,
      pte_t *ptep);
 void (*pte_update_defer)(struct mm_struct *mm,
     unsigned long addr, pte_t *ptep);
 void (*pmd_update)(struct mm_struct *mm, unsigned long addr,
      pmd_t *pmdp);
 void (*pmd_update_defer)(struct mm_struct *mm,
     unsigned long addr, pmd_t *pmdp);

 pte_t (*ptep_modify_prot_start)(struct mm_struct *mm, unsigned long addr,
     pte_t *ptep);
 void (*ptep_modify_prot_commit)(struct mm_struct *mm, unsigned long addr,
     pte_t *ptep, pte_t pte);

 struct paravirt_callee_save pte_val;
 struct paravirt_callee_save make_pte;

 struct paravirt_callee_save pgd_val;
 struct paravirt_callee_save make_pgd;
 void (*set_pud)(pud_t *pudp, pud_t pudval);

 struct paravirt_callee_save pmd_val;
 struct paravirt_callee_save make_pmd;


 struct paravirt_callee_save pud_val;
 struct paravirt_callee_save make_pud;

 void (*set_pgd)(pgd_t *pudp, pgd_t pgdval);



 struct pv_lazy_ops lazy_mode;





 void (*set_fixmap)(unsigned idx,
      phys_addr_t phys, pgprot_t flags);
};

struct arch_spinlock;

typedef u16 __ticket_t;
typedef u32 __ticketpair_t;






typedef struct arch_spinlock {



 union _arch_u {

  __ticketpair_t head_tail;
  struct __raw_tickets {
   __ticket_t head, tail;
  } tickets;
 };
} arch_spinlock_t;



typedef union {
 s32 lock;
 s32 write;
} arch_rwlock_t;




struct pv_lock_ops {
 struct paravirt_callee_save lock_spinning;
 void (*unlock_kick)(struct arch_spinlock *lock, __ticket_t ticket);
};




struct paravirt_patch_template {
 struct pv_init_ops pv_init_ops;
 struct pv_time_ops pv_time_ops;
 struct pv_cpu_ops pv_cpu_ops;
 struct pv_irq_ops pv_irq_ops;
 struct pv_apic_ops pv_apic_ops;
 struct pv_mmu_ops pv_mmu_ops;
 struct pv_lock_ops pv_lock_ops;
};

extern struct pv_info pv_info;
extern struct pv_init_ops pv_init_ops;
extern struct pv_time_ops pv_time_ops;
extern struct pv_cpu_ops pv_cpu_ops;
extern struct pv_irq_ops pv_irq_ops;
extern struct pv_apic_ops pv_apic_ops;
extern struct pv_mmu_ops pv_mmu_ops;
extern struct pv_lock_ops pv_lock_ops;
unsigned paravirt_patch_nop(void);
unsigned paravirt_patch_ident_32(void *insnbuf, unsigned len);
unsigned paravirt_patch_ident_64(void *insnbuf, unsigned len);
unsigned paravirt_patch_ignore(unsigned len);
unsigned paravirt_patch_call(void *insnbuf,
        void *target, u16 tgt_clobbers,
        unsigned long addr, u16 site_clobbers,
        unsigned len);
unsigned paravirt_patch_jmp(void *insnbuf, void *target,
       unsigned long addr, unsigned len);
unsigned paravirt_patch_default(u8 type, u16 clobbers, void *insnbuf,
    unsigned long addr, unsigned len);

unsigned paravirt_patch_insns(void *insnbuf, unsigned len,
         char *start, char *end);

unsigned native_patch(u8 type, u16 clobbers, void *ibuf,
        unsigned long addr, unsigned len);

int paravirt_disable_iospace(void);
enum paravirt_lazy_mode {
 PARAVIRT_LAZY_NONE,
 PARAVIRT_LAZY_MMU,
 PARAVIRT_LAZY_CPU,
};

enum paravirt_lazy_mode paravirt_get_lazy_mode(void);
void paravirt_start_context_switch(struct task_struct *prev);
void paravirt_end_context_switch(struct task_struct *next);

void paravirt_enter_lazy_mmu(void);
void paravirt_leave_lazy_mmu(void);
void paravirt_flush_lazy_mmu(void);

void _paravirt_nop(void);
u32 _paravirt_ident_32(u32);
u64 _paravirt_ident_64(u64);




struct paravirt_patch_site {
 u8 *instr;
 u8 instrtype;
 u8 len;
 u16 clobbers;
};

extern struct paravirt_patch_site __parainstructions[],
 __parainstructions_end[];


struct cpuinfo_x86;
struct task_struct;

extern unsigned long profile_pc(struct pt_regs *regs);


extern unsigned long
convert_ip_to_linear(struct task_struct *child, struct pt_regs *regs);
extern void send_sigtrap(struct task_struct *tsk, struct pt_regs *regs,
    int error_code, int si_code);

extern long syscall_trace_enter(struct pt_regs *);
extern void syscall_trace_leave(struct pt_regs *);

static inline unsigned long regs_return_value(struct pt_regs *regs)
{
 return regs->ax;
}
static inline int user_mode(struct pt_regs *regs)
{



 return !!(regs->cs & 3);

}

static inline int user_mode_vm(struct pt_regs *regs)
{




 return user_mode(regs);

}

static inline int v8086_mode(struct pt_regs *regs)
{



 return 0;

}


static inline bool user_64bit_mode(struct pt_regs *regs)
{
 return regs->cs == (6*8+3) || regs->cs == pv_info.extra_user_64bit_cs;

}
static inline unsigned long kernel_stack_pointer(struct pt_regs *regs)
{
 return regs->sp;
}






static inline unsigned long instruction_pointer(struct pt_regs *regs)
{
 return ((regs)->ip);
}
static inline void instruction_pointer_set(struct pt_regs *regs,
                                           unsigned long val)
{
 (((regs)->ip) = (val));
}
static inline unsigned long user_stack_pointer(struct pt_regs *regs)
{
 return ((regs)->sp);
}
static inline void user_stack_pointer_set(struct pt_regs *regs,
                                          unsigned long val)
{
 (((regs)->sp) = (val));
}
static inline unsigned long frame_pointer(struct pt_regs *regs)
{
 return ((regs)->bp);
}
static inline void frame_pointer_set(struct pt_regs *regs,
                                     unsigned long val)
{
 (((regs)->bp) = (val));
}


extern int regs_query_register_offset( char *name);
extern char *regs_query_register_name(unsigned int offset);
static inline unsigned long regs_get_register(struct pt_regs *regs,
           unsigned int offset)
{
 if (__builtin_expect(!!(offset > (((size_t) &((struct pt_regs *)0)->ss))), 0))
  return 0;
 return *(unsigned long *)((unsigned long)regs + offset);
}
static inline int regs_within_kernel_stack(struct pt_regs *regs,
        unsigned long addr)
{
 return ((addr & ~((((1UL) << 12) << 1) - 1)) ==
  (kernel_stack_pointer(regs) & ~((((1UL) << 12) << 1) - 1)));
}
static inline unsigned long regs_get_kernel_stack_nth(struct pt_regs *regs,
            unsigned int n)
{
 unsigned long *addr = (unsigned long *)kernel_stack_pointer(regs);
 addr += n;
 if (regs_within_kernel_stack(regs, (unsigned long)addr))
  return *addr;
 else
  return 0;
}
struct user_desc;
extern int do_get_thread_area(struct task_struct *p, int idx,
         struct user_desc *info);
extern int do_set_thread_area(struct task_struct *p, int idx,
         struct user_desc *info, int can_allocate);
struct alt_instr {
 s32 instr_offset;
 s32 repl_offset;
 u16 cpuid;
 u8 instrlen;
 u8 replacementlen;
};

extern void alternative_instructions(void);
extern void apply_alternatives(struct alt_instr *start, struct alt_instr *end);

struct module;


extern void alternatives_smp_module_add(struct module *mod, char *name,
     void *locks, void *locks_end,
     void *text, void *text_end);
extern void alternatives_smp_module_del(struct module *mod);
extern void alternatives_enable_smp(void);
extern int alternatives_text_reserved(void *start, void *end);
extern bool skip_smp_alternatives;








extern char * x86_cap_flags[10*32];
extern char * x86_power_flags[32];
extern void warn_pre_alternatives(void);
extern bool __static_cpu_has_safe(u16 bit);






static inline __attribute__((always_inline)) __attribute__((pure)) bool __static_cpu_has(u16 bit)
{
  u8 flag;

  asm ("1: movb $0,%0\n"
        "2:\n"
        ".section .altinstructions,\"a\"\n"
        " .long 1b - .\n"
        " .long 3f - .\n"
        " .word %P1\n"
        " .byte 2b - 1b\n"
        " .byte 4f - 3f\n"
        ".previous\n"
        ".section .discard,\"aw\",@progbits\n"
        " .byte 0xff + (4f-3f) - (2b-1b)\n"
        ".previous\n"
        ".section .altinstr_replacement,\"ax\"\n"
        "3: movb $1,%0\n"
        "4:\n"
        ".previous\n"
        : "=qm" (flag) : "i" (bit));
  return flag;


}
static inline __attribute__((always_inline)) __attribute__((pure)) bool _static_cpu_has_safe(u16 bit)
{
  u8 flag;

  asm ("1: movb $2,%0\n"
        "2:\n"
        ".section .altinstructions,\"a\"\n"
        " .long 1b - .\n"
        " .long 3f - .\n"
        " .word %P2\n"
        " .byte 2b - 1b\n"
        " .byte 4f - 3f\n"
        ".previous\n"
        ".section .discard,\"aw\",@progbits\n"
        " .byte 0xff + (4f-3f) - (2b-1b)\n"
        ".previous\n"
        ".section .altinstr_replacement,\"ax\"\n"
        "3: movb $0,%0\n"
        "4:\n"
        ".previous\n"
        ".section .altinstructions,\"a\"\n"
        " .long 1b - .\n"
        " .long 5f - .\n"
        " .word %P1\n"
        " .byte 4b - 3b\n"
        " .byte 6f - 5f\n"
        ".previous\n"
        ".section .discard,\"aw\",@progbits\n"
        " .byte 0xff + (6f-5f) - (4b-3b)\n"
        ".previous\n"
        ".section .altinstr_replacement,\"ax\"\n"
        "5: movb $1,%0\n"
        "6:\n"
        ".previous\n"
        : "=qm" (flag)
        : "i" (bit), "i" ((3*32+21)));
  return (flag == 2 ? __static_cpu_has_safe(bit) : flag);

}
struct paravirt_patch_site;

void apply_paravirt(struct paravirt_patch_site *start,
      struct paravirt_patch_site *end);
extern void *text_poke_early(void *addr, void *opcode, size_t len);
extern void *text_poke(void *addr, void *opcode, size_t len);
extern int poke_int3_handler(struct pt_regs *regs);
extern void *text_poke_bp(void *addr, void *opcode, size_t len, void *handler);
static inline __attribute__((always_inline)) void
set_bit(long nr, unsigned long *addr)
{
 if ((__builtin_constant_p(nr))) {
  asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "orb %1,%0"
   : "+m" (*( long *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)(1 << ((nr) & 7)))
   : "memory");
 } else {
  asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "bts %1,%0"
   : "+m" (*( long *) (addr)) : "Ir" (nr) : "memory");
 }
}
static inline void __set_bit(long nr, unsigned long *addr)
{
 asm ("bts %1,%0" : "+m" (*( long *) (addr)) : "Ir" (nr) : "memory");
}
static inline __attribute__((always_inline)) void
clear_bit(long nr, unsigned long *addr)
{
 if ((__builtin_constant_p(nr))) {
  asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "andb %1,%0"
   : "+m" (*( long *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)~(1 << ((nr) & 7))));
 } else {
  asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "btr %1,%0"
   : "+m" (*( long *) (addr))
   : "Ir" (nr));
 }
}
static inline void clear_bit_unlock(long nr, unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit(nr, addr);
}

static inline void __clear_bit(long nr, unsigned long *addr)
{
 asm ("btr %1,%0" : "+m" (*( long *) (addr)) : "Ir" (nr));
}
static inline void __clear_bit_unlock(long nr, unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");
 __clear_bit(nr, addr);
}
static inline void __change_bit(long nr, unsigned long *addr)
{
 asm ("btc %1,%0" : "+m" (*( long *) (addr)) : "Ir" (nr));
}
static inline void change_bit(long nr, unsigned long *addr)
{
 if ((__builtin_constant_p(nr))) {
  asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xorb %1,%0"
   : "+m" (*( long *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)(1 << ((nr) & 7))));
 } else {
  asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "btc %1,%0"
   : "+m" (*( long *) (addr))
   : "Ir" (nr));
 }
}
static inline int test_and_set_bit(long nr, unsigned long *addr)
{
 do { char c; asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "bts" " %2, " "%0" "; set" "c" " %1" : "+m" (*addr), "=qm" (c) : "Ir" (nr) : "memory"); return c != 0; } while (0);
}
static inline __attribute__((always_inline)) int
test_and_set_bit_lock(long nr, unsigned long *addr)
{
 return test_and_set_bit(nr, addr);
}
static inline int __test_and_set_bit(long nr, unsigned long *addr)
{
 int oldbit;

 asm("bts %2,%1\n\t"
     "sbb %0,%0"
     : "=r" (oldbit), "+m" (*( long *) (addr))
     : "Ir" (nr));
 return oldbit;
}
static inline int test_and_clear_bit(long nr, unsigned long *addr)
{
 do { char c; asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "btr" " %2, " "%0" "; set" "c" " %1" : "+m" (*addr), "=qm" (c) : "Ir" (nr) : "memory"); return c != 0; } while (0);
}
static inline int __test_and_clear_bit(long nr, unsigned long *addr)
{
 int oldbit;

 asm ("btr %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*( long *) (addr))
       : "Ir" (nr));
 return oldbit;
}


static inline int __test_and_change_bit(long nr, unsigned long *addr)
{
 int oldbit;

 asm ("btc %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*( long *) (addr))
       : "Ir" (nr) : "memory");

 return oldbit;
}
static inline int test_and_change_bit(long nr, unsigned long *addr)
{
 do { char c; asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "btc" " %2, " "%0" "; set" "c" " %1" : "+m" (*addr), "=qm" (c) : "Ir" (nr) : "memory"); return c != 0; } while (0);
}

static inline __attribute__((always_inline)) int constant_test_bit(long nr, unsigned long *addr)
{
 return ((1UL << (nr & (64 -1))) &
  (addr[nr >> 6])) != 0;
}

static inline int variable_test_bit(long nr, unsigned long *addr)
{
 int oldbit;

 asm ("bt %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit)
       : "m" (*(unsigned long *)addr), "Ir" (nr));

 return oldbit;
}
static inline unsigned long __ffs(unsigned long word)
{
 asm("rep; bsf %1,%0"
  : "=r" (word)
  : "rm" (word));
 return word;
}







static inline unsigned long ffz(unsigned long word)
{
 asm("rep; bsf %1,%0"
  : "=r" (word)
  : "r" (~word));
 return word;
}







static inline unsigned long __fls(unsigned long word)
{
 asm("bsr %1,%0"
     : "=r" (word)
     : "rm" (word));
 return word;
}
static inline int ffs(int x)
{
 int r;
 asm("bsfl %1,%0"
     : "=r" (r)
     : "rm" (x), "0" (-1));
 return r + 1;
}
static inline int fls(int x)
{
 int r;
 asm("bsrl %1,%0"
     : "=r" (r)
     : "rm" (x), "0" (-1));
 return r + 1;
}
static inline __attribute__((always_inline)) int fls64(__u64 x)
{
 int bitpos = -1;





 asm("bsrq %1,%q0"
     : "+r" (bitpos)
     : "rm" (x));
 return bitpos + 1;
}




extern unsigned long find_next_bit( unsigned long *addr, unsigned long
  size, unsigned long offset);
extern unsigned long find_next_zero_bit( unsigned long *addr, unsigned
  long size, unsigned long offset);
extern unsigned long find_first_bit( unsigned long *addr,
        unsigned long size);
extern unsigned long find_first_zero_bit( unsigned long *addr,
      unsigned long size);

static inline int sched_find_first_bit( unsigned long *b)
{

 if (b[0])
  return __ffs(b[0]);
 return __ffs(b[1]) + 64;
}



static inline unsigned int __arch_hweight32(unsigned int w)
{
 unsigned int res = 0;

 asm ("661:\n\t" "call __sw_hweight32" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(4*32+23)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0xf3,0x40,0x0f,0xb8,0xc7" "\n" "664""1" ":\n\t" ".popsection"
       : "=""a" (res)
       : "D" (w));

 return res;
}

static inline unsigned int __arch_hweight16(unsigned int w)
{
 return __arch_hweight32(w & 0xffff);
}

static inline unsigned int __arch_hweight8(unsigned int w)
{
 return __arch_hweight32(w & 0xff);
}

static inline unsigned long __arch_hweight64(__u64 w)
{
 unsigned long res = 0;
 asm ("661:\n\t" "call _Z14__sw_hweight64y" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(4*32+23)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0xf3,0x48,0x0f,0xb8,0xc7" "\n" "664""1" ":\n\t" ".popsection"
       : "=""a" (res)
       : "D" (w));



 return res;
}


























static inline __attribute__((__const__)) __u32 __arch_swab32(__u32 val)
{
 asm("bswapl %0" : "=r" (val) : "0" (val));
 return val;
}


static inline __attribute__((__const__)) __u64 __arch_swab64(__u64 val)
{
 asm("bswapq %0" : "=r" (val) : "0" (val));
 return val;

}
static inline __attribute__((__const__)) __u16 __fswab16(__u16 val)
{

 return __builtin_bswap16(val);





}

static inline __attribute__((__const__)) __u32 __fswab32(__u32 val)
{

 return __builtin_bswap32(val);





}

static inline __attribute__((__const__)) __u64 __fswab64(__u64 val)
{

 return __builtin_bswap64(val);
}

static inline __attribute__((__const__)) __u32 __fswahw32(__u32 val)
{



 return ((__u32)( (((__u32)(val) & (__u32)0x0000ffffUL) << 16) | (((__u32)(val) & (__u32)0xffff0000UL) >> 16)));

}

static inline __attribute__((__const__)) __u32 __fswahb32(__u32 val)
{



 return ((__u32)( (((__u32)(val) & (__u32)0x00ff00ffUL) << 8) | (((__u32)(val) & (__u32)0xff00ff00UL) >> 8)));

}
static inline __u16 __swab16p( __u16 *p)
{



 return (__builtin_constant_p((__u16)(*p)) ? ((__u16)( (((__u16)(*p) & (__u16)0x00ffU) << 8) | (((__u16)(*p) & (__u16)0xff00U) >> 8))) : __fswab16(*p));

}





static inline __u32 __swab32p( __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x000000ffUL) << 24) | (((__u32)(*p) & (__u32)0x0000ff00UL) << 8) | (((__u32)(*p) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(*p) & (__u32)0xff000000UL) >> 24))) : __fswab32(*p));

}





static inline __u64 __swab64p( __u64 *p)
{



 return (__builtin_constant_p((__u64)(*p)) ? ((__u64)( (((__u64)(*p) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(*p) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(*p) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(*p) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(*p) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(*p) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(*p) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(*p) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(*p));

}







static inline __u32 __swahw32p( __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x0000ffffUL) << 16) | (((__u32)(*p) & (__u32)0xffff0000UL) >> 16))) : __fswahw32(*p));

}







static inline __u32 __swahb32p( __u32 *p)
{



 return (__builtin_constant_p((__u32)(*p)) ? ((__u32)( (((__u32)(*p) & (__u32)0x00ff00ffUL) << 8) | (((__u32)(*p) & (__u32)0xff00ff00UL) >> 8))) : __fswahb32(*p));

}





static inline void __swab16s(__u16 *p)
{



 *p = __swab16p(p);

}




static inline void __swab32s(__u32 *p)
{



 *p = __swab32p(p);

}





static inline void __swab64s(__u64 *p)
{



 *p = __swab64p(p);

}







static inline void __swahw32s(__u32 *p)
{



 *p = __swahw32p(p);

}







static inline void __swahb32s(__u32 *p)
{



 *p = __swahb32p(p);

}
static inline __le64 __cpu_to_le64p( __u64 *p)
{
 return ( __le64)*p;
}
static inline __u64 __le64_to_cpup( __le64 *p)
{
 return ( __u64)*p;
}
static inline __le32 __cpu_to_le32p( __u32 *p)
{
 return ( __le32)*p;
}
static inline __u32 __le32_to_cpup( __le32 *p)
{
 return ( __u32)*p;
}
static inline __le16 __cpu_to_le16p( __u16 *p)
{
 return ( __le16)*p;
}
static inline __u16 __le16_to_cpup( __le16 *p)
{
 return ( __u16)*p;
}
static inline __be64 __cpu_to_be64p( __u64 *p)
{
 return ( __be64)__swab64p(p);
}
static inline __u64 __be64_to_cpup( __be64 *p)
{
 return __swab64p((__u64 *)p);
}
static inline __be32 __cpu_to_be32p( __u32 *p)
{
 return ( __be32)__swab32p(p);
}
static inline __u32 __be32_to_cpup( __be32 *p)
{
 return __swab32p((__u32 *)p);
}
static inline __be16 __cpu_to_be16p( __u16 *p)
{
 return ( __be16)__swab16p(p);
}
static inline __u16 __be16_to_cpup( __be16 *p)
{
 return __swab16p((__u16 *)p);
}

static inline void le16_add_cpu(__le16 *var, u16 val)
{
 *var = (( __le16)(__u16)((( __u16)(__le16)(*var)) + val));
}

static inline void le32_add_cpu(__le32 *var, u32 val)
{
 *var = (( __le32)(__u32)((( __u32)(__le32)(*var)) + val));
}

static inline void le64_add_cpu(__le64 *var, u64 val)
{
 *var = (( __le64)(__u64)((( __u64)(__le64)(*var)) + val));
}

static inline void be16_add_cpu(__be16 *var, u16 val)
{
 *var = (( __be16)(__builtin_constant_p((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val))) ? ((__u16)( (((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val)) & (__u16)0x00ffU) << 8) | (((__u16)(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val)) & (__u16)0xff00U) >> 8))) : __fswab16(((__builtin_constant_p((__u16)(( __u16)(__be16)(*var))) ? ((__u16)( (((__u16)(( __u16)(__be16)(*var)) & (__u16)0x00ffU) << 8) | (((__u16)(( __u16)(__be16)(*var)) & (__u16)0xff00U) >> 8))) : __fswab16(( __u16)(__be16)(*var))) + val))));
}

static inline void be32_add_cpu(__be32 *var, u32 val)
{
 *var = (( __be32)(__builtin_constant_p((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val))) ? ((__u32)( (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x000000ffUL) << 24) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val)) & (__u32)0xff000000UL) >> 24))) : __fswab32(((__builtin_constant_p((__u32)(( __u32)(__be32)(*var))) ? ((__u32)( (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x000000ffUL) << 24) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x0000ff00UL) << 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0x00ff0000UL) >> 8) | (((__u32)(( __u32)(__be32)(*var)) & (__u32)0xff000000UL) >> 24))) : __fswab32(( __u32)(__be32)(*var))) + val))));
}

static inline void be64_add_cpu(__be64 *var, u64 val)
{
 *var = (( __be64)(__builtin_constant_p((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val))) ? ((__u64)( (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(((__builtin_constant_p((__u64)(( __u64)(__be64)(*var))) ? ((__u64)( (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000000000ffULL) << 56) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000000000ff00ULL) << 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000000000ff0000ULL) << 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00000000ff000000ULL) << 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x000000ff00000000ULL) >> 8) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x0000ff0000000000ULL) >> 24) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0x00ff000000000000ULL) >> 40) | (((__u64)(( __u64)(__be64)(*var)) & (__u64)0xff00000000000000ULL) >> 56))) : __fswab64(( __u64)(__be64)(*var))) + val))));
}





static inline unsigned long find_next_zero_bit_le( void *addr,
  unsigned long size, unsigned long offset)
{



 return find_next_zero_bit((unsigned long *)addr, size, offset);

}

static inline unsigned long find_next_bit_le( void *addr,
  unsigned long size, unsigned long offset)
{



 return find_next_bit((unsigned long *)addr, size, offset);

}

static inline unsigned long find_first_zero_bit_le( void *addr,
  unsigned long size)
{



 return find_first_zero_bit((unsigned long *)addr, size);

}
static inline int test_bit_le(int nr, void *addr)
{



        return (__builtin_constant_p((nr ^ 0)) ? constant_test_bit((nr ^ 0), ((unsigned long *)addr)) : variable_test_bit((nr ^ 0), ((unsigned long *)addr)));

}

static inline void set_bit_le(int nr, void *addr)
{



 set_bit(nr ^ 0, (unsigned long *)addr);

}

static inline void clear_bit_le(int nr, void *addr)
{



 clear_bit(nr ^ 0, (unsigned long *)addr);

}

static inline void __set_bit_le(int nr, void *addr)
{



 __set_bit(nr ^ 0, (unsigned long *)addr);

}

static inline void __clear_bit_le(int nr, void *addr)
{



 __clear_bit(nr ^ 0, (unsigned long *)addr);

}

static inline int test_and_set_bit_le(int nr, void *addr)
{



 return test_and_set_bit(nr ^ 0, (unsigned long *)addr);

}

static inline int test_and_clear_bit_le(int nr, void *addr)
{



 return test_and_clear_bit(nr ^ 0, (unsigned long *)addr);

}

static inline int __test_and_set_bit_le(int nr, void *addr)
{



 return __test_and_set_bit(nr ^ 0, (unsigned long *)addr);

}

static inline int __test_and_clear_bit_le(int nr, void *addr)
{



 return __test_and_clear_bit(nr ^ 0, (unsigned long *)addr);

}

static __inline__ int get_bitmask_order(unsigned int count)
{
 int order;

 order = fls(count);
 return order;
}

static __inline__ int get_count_order(unsigned int count)
{
 int order;

 order = fls(count) - 1;
 if (count & (count - 1))
  order++;
 return order;
}

static inline unsigned long hweight_long(unsigned long w)
{
 return sizeof(w) == 4 ? (__builtin_constant_p(w) ? ((( (!!((w) & (1ULL << 0))) + (!!((w) & (1ULL << 1))) + (!!((w) & (1ULL << 2))) + (!!((w) & (1ULL << 3))) + (!!((w) & (1ULL << 4))) + (!!((w) & (1ULL << 5))) + (!!((w) & (1ULL << 6))) + (!!((w) & (1ULL << 7))) ) + ( (!!(((w) >> 8) & (1ULL << 0))) + (!!(((w) >> 8) & (1ULL << 1))) + (!!(((w) >> 8) & (1ULL << 2))) + (!!(((w) >> 8) & (1ULL << 3))) + (!!(((w) >> 8) & (1ULL << 4))) + (!!(((w) >> 8) & (1ULL << 5))) + (!!(((w) >> 8) & (1ULL << 6))) + (!!(((w) >> 8) & (1ULL << 7))) )) + (( (!!(((w) >> 16) & (1ULL << 0))) + (!!(((w) >> 16) & (1ULL << 1))) + (!!(((w) >> 16) & (1ULL << 2))) + (!!(((w) >> 16) & (1ULL << 3))) + (!!(((w) >> 16) & (1ULL << 4))) + (!!(((w) >> 16) & (1ULL << 5))) + (!!(((w) >> 16) & (1ULL << 6))) + (!!(((w) >> 16) & (1ULL << 7))) ) + ( (!!((((w) >> 16) >> 8) & (1ULL << 0))) + (!!((((w) >> 16) >> 8) & (1ULL << 1))) + (!!((((w) >> 16) >> 8) & (1ULL << 2))) + (!!((((w) >> 16) >> 8) & (1ULL << 3))) + (!!((((w) >> 16) >> 8) & (1ULL << 4))) + (!!((((w) >> 16) >> 8) & (1ULL << 5))) + (!!((((w) >> 16) >> 8) & (1ULL << 6))) + (!!((((w) >> 16) >> 8) & (1ULL << 7))) ))) : __arch_hweight32(w)) : (__builtin_constant_p(w) ? (((( (!!((w) & (1ULL << 0))) + (!!((w) & (1ULL << 1))) + (!!((w) & (1ULL << 2))) + (!!((w) & (1ULL << 3))) + (!!((w) & (1ULL << 4))) + (!!((w) & (1ULL << 5))) + (!!((w) & (1ULL << 6))) + (!!((w) & (1ULL << 7))) ) + ( (!!(((w) >> 8) & (1ULL << 0))) + (!!(((w) >> 8) & (1ULL << 1))) + (!!(((w) >> 8) & (1ULL << 2))) + (!!(((w) >> 8) & (1ULL << 3))) + (!!(((w) >> 8) & (1ULL << 4))) + (!!(((w) >> 8) & (1ULL << 5))) + (!!(((w) >> 8) & (1ULL << 6))) + (!!(((w) >> 8) & (1ULL << 7))) )) + (( (!!(((w) >> 16) & (1ULL << 0))) + (!!(((w) >> 16) & (1ULL << 1))) + (!!(((w) >> 16) & (1ULL << 2))) + (!!(((w) >> 16) & (1ULL << 3))) + (!!(((w) >> 16) & (1ULL << 4))) + (!!(((w) >> 16) & (1ULL << 5))) + (!!(((w) >> 16) & (1ULL << 6))) + (!!(((w) >> 16) & (1ULL << 7))) ) + ( (!!((((w) >> 16) >> 8) & (1ULL << 0))) + (!!((((w) >> 16) >> 8) & (1ULL << 1))) + (!!((((w) >> 16) >> 8) & (1ULL << 2))) + (!!((((w) >> 16) >> 8) & (1ULL << 3))) + (!!((((w) >> 16) >> 8) & (1ULL << 4))) + (!!((((w) >> 16) >> 8) & (1ULL << 5))) + (!!((((w) >> 16) >> 8) & (1ULL << 6))) + (!!((((w) >> 16) >> 8) & (1ULL << 7))) ))) + ((( (!!(((w) >> 32) & (1ULL << 0))) + (!!(((w) >> 32) & (1ULL << 1))) + (!!(((w) >> 32) & (1ULL << 2))) + (!!(((w) >> 32) & (1ULL << 3))) + (!!(((w) >> 32) & (1ULL << 4))) + (!!(((w) >> 32) & (1ULL << 5))) + (!!(((w) >> 32) & (1ULL << 6))) + (!!(((w) >> 32) & (1ULL << 7))) ) + ( (!!((((w) >> 32) >> 8) & (1ULL << 0))) + (!!((((w) >> 32) >> 8) & (1ULL << 1))) + (!!((((w) >> 32) >> 8) & (1ULL << 2))) + (!!((((w) >> 32) >> 8) & (1ULL << 3))) + (!!((((w) >> 32) >> 8) & (1ULL << 4))) + (!!((((w) >> 32) >> 8) & (1ULL << 5))) + (!!((((w) >> 32) >> 8) & (1ULL << 6))) + (!!((((w) >> 32) >> 8) & (1ULL << 7))) )) + (( (!!((((w) >> 32) >> 16) & (1ULL << 0))) + (!!((((w) >> 32) >> 16) & (1ULL << 1))) + (!!((((w) >> 32) >> 16) & (1ULL << 2))) + (!!((((w) >> 32) >> 16) & (1ULL << 3))) + (!!((((w) >> 32) >> 16) & (1ULL << 4))) + (!!((((w) >> 32) >> 16) & (1ULL << 5))) + (!!((((w) >> 32) >> 16) & (1ULL << 6))) + (!!((((w) >> 32) >> 16) & (1ULL << 7))) ) + ( (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 0))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 1))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 2))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 3))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 4))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 5))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 6))) + (!!(((((w) >> 32) >> 16) >> 8) & (1ULL << 7))) )))) : __arch_hweight64(w));
}






static inline __u64 rol64(__u64 word, unsigned int shift)
{
 return (word << shift) | (word >> (64 - shift));
}






static inline __u64 ror64(__u64 word, unsigned int shift)
{
 return (word >> shift) | (word << (64 - shift));
}






static inline __u32 rol32(__u32 word, unsigned int shift)
{
 return (word << shift) | (word >> (32 - shift));
}






static inline __u32 ror32(__u32 word, unsigned int shift)
{
 return (word >> shift) | (word << (32 - shift));
}






static inline __u16 rol16(__u16 word, unsigned int shift)
{
 return (word << shift) | (word >> (16 - shift));
}






static inline __u16 ror16(__u16 word, unsigned int shift)
{
 return (word >> shift) | (word << (16 - shift));
}






static inline __u8 rol8(__u8 word, unsigned int shift)
{
 return (word << shift) | (word >> (8 - shift));
}






static inline __u8 ror8(__u8 word, unsigned int shift)
{
 return (word >> shift) | (word << (8 - shift));
}






static inline __s32 sign_extend32(__u32 value, int index)
{
 __u8 shift = 31 - index;
 return (__s32)(value << shift) >> shift;
}

static inline unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
static inline unsigned long __ffs64(u64 word)
{






 return __ffs((unsigned long)word);
}
extern unsigned long find_last_bit( unsigned long *addr,
       unsigned long size);
extern __attribute__((, noreturn))
int ____ilog2_NaN(void);
static inline __attribute__(())
int __ilog2_u32(u32 n)
{
 return fls(n) - 1;
}



static inline __attribute__(())
int __ilog2_u64(u64 n)
{
 return fls64(n) - 1;
}







static inline __attribute__(())
bool is_power_of_2(unsigned long n)
{
 return (n != 0 && ((n & (n - 1)) == 0));
}




static inline __attribute__(())
unsigned long __roundup_pow_of_two(unsigned long n)
{
 return 1UL << fls_long(n - 1);
}




static inline __attribute__(())
unsigned long __rounddown_pow_of_two(unsigned long n)
{
 return 1UL << (fls_long(n) - 1);
}








extern char linux_banner[];
extern char linux_proc_banner[];

static inline int printk_get_level( char *buffer)
{
 if (buffer[0] == '\001' && buffer[1]) {
  switch (buffer[1]) {
  case '0' ... '7':
  case 'd':
   return buffer[1];
  }
 }
 return 0;
}

static inline char *printk_skip_level( char *buffer)
{
 if (printk_get_level(buffer)) {
  switch (buffer[1]) {
  case '0' ... '7':
  case 'd':
   return buffer + 2;
  }
 }
 return buffer;
}

extern int console_printk[];






static inline void console_silent(void)
{
 (console_printk[0]) = 0;
}

static inline void console_verbose(void)
{
 if ((console_printk[0]))
  (console_printk[0]) = 15;
}

struct va_format {
 char *fmt;
 va_list *va;
};
static inline __attribute__((format(printf, 1, 2)))
int no_printk( char *fmt, ...)
{
 return 0;
}


extern __attribute__((format(printf, 1, 2)))
void early_printk( char *fmt, ...);
void early_vprintk( char *fmt, va_list ap);






 __attribute__((format(printf, 5, 0)))
int vprintk_emit(int facility, int level,
   char *dict, size_t dictlen,
   char *fmt, va_list args);

 __attribute__((format(printf, 1, 0)))
int vprintk( char *fmt, va_list args);

 __attribute__((format(printf, 5, 6))) __attribute__((__cold__))
 int printk_emit(int facility, int level,
      char *dict, size_t dictlen,
      char *fmt, ...);








extern "C" {

extern void printf(char *str, ...);
extern void *malloc(unsigned long size);
extern void free(void *ptr);

}







__attribute__((format(printf, 1, 2))) __attribute__((__cold__)) int printk_sched( char *fmt, ...);






extern int __printk_ratelimit( char *func);

extern bool printk_timed_ratelimit(unsigned long *caller_jiffies,
       unsigned int interval_msec);

extern int printk_delay_msec;
extern int dmesg_restrict;
extern int kptr_restrict;

extern void wake_up_klogd(void);

void log_buf_kexec_setup(void);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) setup_log_buf(int early);
void dump_stack_set_arch_desc( char *fmt, ...);
void dump_stack_print_info( char *log_lvl);
void show_regs_print_info( char *log_lvl);
extern void dump_stack(void) __attribute__((__cold__));
struct _ddebug {




 char *modname;
 char *function;
 char *filename;
 char *format;
 unsigned int lineno:18;
 unsigned int flags:8;
} __attribute__((aligned(8)));


int ddebug_add_module(struct _ddebug *tab, unsigned int n,
    char *modname);

extern char *strndup_user( char *, long);
extern void *memdup_user( void *, size_t);







static inline __attribute__((always_inline)) void *__inline_memcpy(void *to, void *from, size_t n)
{
 unsigned long d0, d1, d2;
 asm ("rep ; movsl\n\t"
       "testb $2,%b4\n\t"
       "je 1f\n\t"
       "movsw\n"
       "1:\ttestb $1,%b4\n\t"
       "je 2f\n\t"
       "movsb\n"
       "2:"
       : "=&c" (d0), "=&D" (d1), "=&S" (d2)
       : "0" (n / 4), "q" (n), "1" ((long)to), "2" ((long)from)
       : "memory");
 return to;
}







extern void *memcpy(void *to, void *from, size_t len);
void *memset(void *s, int c, size_t n);


void *memmove(void *dest, void *src, size_t count);

int memcmp( void *cs, void *ct, size_t count);
size_t strlen( char *s);
char *strcpy(char *dest, char *src);
char *strcat(char *dest, char *src);
int strcmp( char *cs, char *ct);


extern char * strcpy(char *, char *);


extern char * strncpy(char *, char *, __kernel_size_t);


size_t strlcpy(char *, char *, size_t);


extern char * strcat(char *, char *);


extern char * strncat(char *, char *, __kernel_size_t);


extern size_t strlcat(char *, char *, __kernel_size_t);


extern int strcmp( char *, char *);


extern int strncmp( char *, char *,__kernel_size_t);


extern int strnicmp( char *, char *, __kernel_size_t);


extern int strcasecmp( char *s1, char *s2);


extern int strncasecmp( char *s1, char *s2, size_t n);


extern char * strchr( char *,int);


extern char * strnchr( char *, size_t, int);


extern char * strrchr( char *,int);

extern char * skip_spaces( char *);

extern char *strim(char *);

static inline char *strstrip(char *str)
{
 return strim(str);
}


extern char * strstr( char *, char *);


extern char * strnstr( char *, char *, size_t);


extern __kernel_size_t strlen( char *);


extern __kernel_size_t strnlen( char *,__kernel_size_t);


extern char * strpbrk( char *, char *);


extern char * strsep(char **, char *);


extern __kernel_size_t strspn( char *, char *);


extern __kernel_size_t strcspn( char *, char *);
extern void * memscan(void *,int,__kernel_size_t);


extern int memcmp( void *, void *,__kernel_size_t);


extern void * memchr( void *,int,__kernel_size_t);

void *memchr_inv( void *s, int c, size_t n);

extern char *kstrdup( char *s, gfp_t gfp);
extern char *kstrndup( char *s, size_t len, gfp_t gfp);
extern void *kmemdup( void *src, size_t len, gfp_t gfp);

extern char **argv_split(gfp_t gfp, char *str, int *argcp);
extern void argv_free(char **argv);

extern bool sysfs_streq( char *s1, char *s2);
extern int strtobool( char *s, bool *res);


int vbin_printf(u32 *bin_buf, size_t size, char *fmt, va_list args);
int bstr_printf(char *buf, size_t size, char *fmt, u32 *bin_buf);
int bprintf(u32 *bin_buf, size_t size, char *fmt, ...) __attribute__((format(printf, 3, 4)));


extern ssize_t memory_read_from_buffer(void *to, size_t count, loff_t *ppos,
   void *from, size_t available);






static inline bool strstarts( char *str, char *prefix)
{
 return strncmp(str, prefix, strlen(prefix)) == 0;
}

extern size_t memweight( void *ptr, size_t bytes);






static inline char *kbasename( char *path)
{
 char *tail = strrchr(path, '/');
 return tail ? tail + 1 : path;
}







static inline int ddebug_remove_module( char *mod)
{
 return 0;
}

static inline int ddebug_dyndbg_module_param_cb(char *param, char *val,
      char *modname)
{
 if (strstr(param, "dyndbg")) {

  printf("\001" "4" "dyndbg param is supported only in "
   "CONFIG_DYNAMIC_DEBUG builds\n");
  return 0;
 }
 return -22;
}
extern struct file_operations kmsg_fops;

enum {
 DUMP_PREFIX_NONE,
 DUMP_PREFIX_ADDRESS,
 DUMP_PREFIX_OFFSET
};
extern void hex_dump_to_buffer( void *buf, size_t len,
          int rowsize, int groupsize,
          char *linebuf, size_t linebuflen, bool ascii);

extern void print_hex_dump( char *level, char *prefix_str,
      int prefix_type, int rowsize, int groupsize,
      void *buf, size_t len, bool ascii);




extern void print_hex_dump_bytes( char *prefix_str, int prefix_type,
     void *buf, size_t len);











struct sysinfo {
 __kernel_long_t uptime;
 __kernel_ulong_t loads[3];
 __kernel_ulong_t totalram;
 __kernel_ulong_t freeram;
 __kernel_ulong_t sharedram;
 __kernel_ulong_t bufferram;
 __kernel_ulong_t totalswap;
 __kernel_ulong_t freeswap;
 __u16 procs;
 __u16 pad;
 __kernel_ulong_t totalhigh;
 __kernel_ulong_t freehigh;
 __u32 mem_unit;
 char _f[20-2*sizeof(__kernel_ulong_t)-sizeof(__u32)];
};
struct completion;
struct pt_regs;
struct user;


extern int _cond_resched(void);
  static inline void __might_sleep( char *file, int line,
       int preempt_offset) { }
static inline void might_fault(void) { }


extern struct atomic_notifier_head panic_notifier_list;
extern long (*panic_blink)(int state);
__attribute__((format(printf, 1, 2)))
void panic( char *fmt, ...)
 __attribute__((noreturn)) __attribute__((__cold__));
extern void oops_enter(void);
extern void oops_exit(void);
void print_oops_end_marker(void);
extern int oops_may_print(void);
void do_exit(long error_code)
 __attribute__((noreturn));
void complete_and_exit(struct completion *, long)
 __attribute__((noreturn));


int _kstrtoul( char *s, unsigned int base, unsigned long *res);
int _kstrtol( char *s, unsigned int base, long *res);

int kstrtoull( char *s, unsigned int base, unsigned long long *res);
int kstrtoll( char *s, unsigned int base, long long *res);
static inline int kstrtoul( char *s, unsigned int base, unsigned long *res)
{




 if (sizeof(unsigned long) == sizeof(unsigned long long) &&
     __alignof__(unsigned long) == __alignof__(unsigned long long))
  return kstrtoull(s, base, (unsigned long long *)res);
 else
  return _kstrtoul(s, base, res);
}
static inline int kstrtol( char *s, unsigned int base, long *res)
{




 if (sizeof(long) == sizeof(long long) &&
     __alignof__(long) == __alignof__(long long))
  return kstrtoll(s, base, (long long *)res);
 else
  return _kstrtol(s, base, res);
}

int kstrtouint( char *s, unsigned int base, unsigned int *res);
int kstrtoint( char *s, unsigned int base, int *res);

static inline int kstrtou64( char *s, unsigned int base, u64 *res)
{
 return kstrtoull(s, base, res);
}

static inline int kstrtos64( char *s, unsigned int base, s64 *res)
{
 return kstrtoll(s, base, res);
}

static inline int kstrtou32( char *s, unsigned int base, u32 *res)
{
 return kstrtouint(s, base, res);
}

static inline int kstrtos32( char *s, unsigned int base, s32 *res)
{
 return kstrtoint(s, base, res);
}

int kstrtou16( char *s, unsigned int base, u16 *res);
int kstrtos16( char *s, unsigned int base, s16 *res);
int kstrtou8( char *s, unsigned int base, u8 *res);
int kstrtos8( char *s, unsigned int base, s8 *res);

int kstrtoull_from_user( char *s, size_t count, unsigned int base, unsigned long long *res);
int kstrtoll_from_user( char *s, size_t count, unsigned int base, long long *res);
int kstrtoul_from_user( char *s, size_t count, unsigned int base, unsigned long *res);
int kstrtol_from_user( char *s, size_t count, unsigned int base, long *res);
int kstrtouint_from_user( char *s, size_t count, unsigned int base, unsigned int *res);
int kstrtoint_from_user( char *s, size_t count, unsigned int base, int *res);
int kstrtou16_from_user( char *s, size_t count, unsigned int base, u16 *res);
int kstrtos16_from_user( char *s, size_t count, unsigned int base, s16 *res);
int kstrtou8_from_user( char *s, size_t count, unsigned int base, u8 *res);
int kstrtos8_from_user( char *s, size_t count, unsigned int base, s8 *res);

static inline int kstrtou64_from_user( char *s, size_t count, unsigned int base, u64 *res)
{
 return kstrtoull_from_user(s, count, base, res);
}

static inline int kstrtos64_from_user( char *s, size_t count, unsigned int base, s64 *res)
{
 return kstrtoll_from_user(s, count, base, res);
}

static inline int kstrtou32_from_user( char *s, size_t count, unsigned int base, u32 *res)
{
 return kstrtouint_from_user(s, count, base, res);
}

static inline int kstrtos32_from_user( char *s, size_t count, unsigned int base, s32 *res)
{
 return kstrtoint_from_user(s, count, base, res);
}



extern unsigned long simple_strtoul( char *,char **,unsigned int);
extern long simple_strtol( char *,char **,unsigned int);
extern unsigned long long simple_strtoull( char *,char **,unsigned int);
extern long long simple_strtoll( char *,char **,unsigned int);





extern int num_to_str(char *buf, int size, unsigned long long num);



extern __attribute__((format(printf, 2, 3))) int sprintf(char *buf, char * fmt, ...);
extern __attribute__((format(printf, 2, 0))) int vsprintf(char *buf, char *, va_list);
extern __attribute__((format(printf, 3, 4)))
int snprintf(char *buf, size_t size, char *fmt, ...);
extern __attribute__((format(printf, 3, 0)))
int vsnprintf(char *buf, size_t size, char *fmt, va_list args);
extern __attribute__((format(printf, 3, 4)))
int scnprintf(char *buf, size_t size, char *fmt, ...);
extern __attribute__((format(printf, 3, 0)))
int vscnprintf(char *buf, size_t size, char *fmt, va_list args);
extern __attribute__((format(printf, 2, 3)))
char *kasprintf(gfp_t gfp, char *fmt, ...);
extern char *kvasprintf(gfp_t gfp, char *fmt, va_list args);

extern __attribute__((format(scanf, 2, 3)))
int sscanf( char *, char *, ...);
extern __attribute__((format(scanf, 2, 0)))
int vsscanf( char *, char *, va_list);

extern int get_option(char **str, int *pint);
extern char *get_options( char *str, int nints, int *ints);
extern unsigned long long memparse( char *ptr, char **retptr);

extern int core_kernel_text(unsigned long addr);
extern int core_kernel_data(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
extern int func_ptr_is_kernel_text(void *ptr);

struct pid;
extern struct pid *session_of_pgrp(struct pid *pgrp);

unsigned long int_sqrt(unsigned long);

extern void bust_spinlocks(int yes);
extern int oops_in_progress;
extern int panic_timeout;
extern int panic_on_oops;
extern int panic_on_unrecovered_nmi;
extern int panic_on_io_nmi;
extern int sysctl_panic_on_stackoverflow;
extern char *print_tainted(void);
enum lockdep_ok {
 LOCKDEP_STILL_OK,
 LOCKDEP_NOW_UNRELIABLE
};
extern void add_taint(unsigned flag, enum lockdep_ok);
extern int test_taint(unsigned flag);
extern unsigned long get_taint(void);
extern int root_mountflags;

extern bool early_boot_irqs_disabled;


extern enum system_states {
 SYSTEM_BOOTING,
 SYSTEM_RUNNING,
 SYSTEM_HALT,
 SYSTEM_POWER_OFF,
 SYSTEM_RESTART,
} system_state;
extern char hex_asc[];



static inline char *hex_byte_pack(char *buf, u8 byte)
{
 *buf++ = hex_asc[((byte) & 0xf0) >> 4];
 *buf++ = hex_asc[((byte) & 0x0f)];
 return buf;
}

extern char hex_asc_upper[];



static inline char *hex_byte_pack_upper(char *buf, u8 byte)
{
 *buf++ = hex_asc_upper[((byte) & 0xf0) >> 4];
 *buf++ = hex_asc_upper[((byte) & 0x0f)];
 return buf;
}

static inline char * pack_hex_byte(char *buf, u8 byte)
{
 return hex_byte_pack(buf, byte);
}

extern int hex_to_bin(char ch);
extern int hex2bin(u8 *dst, char *src, size_t count);

int mac_pton( char *s, u8 *mac);
void tracing_off_permanent(void);




enum ftrace_dump_mode {
 DUMP_NONE,
 DUMP_ALL,
 DUMP_ORIG,
};


void tracing_on(void);
void tracing_off(void);
int tracing_is_on(void);
void tracing_snapshot(void);
void tracing_snapshot_alloc(void);

extern void tracing_start(void);
extern void tracing_stop(void);

static inline __attribute__((format(printf, 1, 2)))
void ____trace_printk_check_format( char *fmt, ...)
{
}
extern __attribute__((format(printf, 2, 3)))
int __trace_bprintk(unsigned long ip, char *fmt, ...);

extern __attribute__((format(printf, 2, 3)))
int __trace_printk(unsigned long ip, char *fmt, ...);
extern int __trace_bputs(unsigned long ip, char *str);
extern int __trace_puts(unsigned long ip, char *str, int size);

extern void trace_dump_stack(int skip);
extern int
__ftrace_vbprintk(unsigned long ip, char *fmt, va_list ap);

extern int
__ftrace_vprintk(unsigned long ip, char *fmt, va_list ap);

extern void ftrace_dump(enum ftrace_dump_mode oops_dump_mode);
extern void __bad_percpu_size(void);
static inline __attribute__((always_inline)) int x86_this_cpu_constant_test_bit(unsigned int nr,
                        unsigned long *addr)
{
 unsigned long *a = (unsigned long *)addr + nr / 64;


 return ((1UL << (nr % 64)) & ({ typeof((*a)) pfo_ret__; switch (sizeof((*a))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"(*a)); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(*a)); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(*a)); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(*a)); break; default: __bad_percpu_size(); } pfo_ret__; })) != 0;



}

static inline int x86_this_cpu_variable_test_bit(int nr,
                        unsigned long *addr)
{
 int oldbit;

 asm ("bt ""%%""gs"":" "%P" "2"",%1\n\t"
   "sbb %0,%0"
   : "=r" (oldbit)
   : "m" (*(unsigned long *)addr), "Ir" (nr));

 return oldbit;
}











extern unsigned long __per_cpu_offset[256];
extern void setup_per_cpu_areas(void);


extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned long) this_cpu_off;





enum bug_trap_type {
 BUG_TRAP_TYPE_NONE = 0,
 BUG_TRAP_TYPE_WARN = 1,
 BUG_TRAP_TYPE_BUG = 2,
};

struct pt_regs;
static inline int is_warning_bug( struct bug_entry *bug)
{



        return 0;

}

 struct bug_entry *find_bug(unsigned long bugaddr);

enum bug_trap_type report_bug(unsigned long bug_addr, struct pt_regs *regs);


int is_valid_bugaddr(unsigned long addr);

struct timespec;
struct compat_timespec;




struct restart_block {
 long (*fn)(struct restart_block *);
 union {

  struct {
   u32 *uaddr;
   u32 val;
   u32 flags;
   u32 bitset;
   u64 time;
   u32 *uaddr2;
  } futex;

  struct {
   clockid_t clockid;
   struct timespec *rmtp;

   struct compat_timespec *compat_rmtp;

   u64 expires;
  } nanosleep;

  struct {
   struct pollfd *ufds;
   int nfds;
   int has_timeout;
   unsigned long tv_sec;
   unsigned long tv_nsec;
  } poll;
 };
};

extern long do_no_restart_syscall(struct restart_block *parm);


extern unsigned long max_pfn;
extern unsigned long phys_base;

static inline unsigned long __phys_addr_nodebug(unsigned long x)
{
 unsigned long y = x - (0xffffffff80000000UL);


 x = y + ((x > y) ? phys_base : ((0xffffffff80000000UL) - ((unsigned long)(0xffff880000000000UL))));

 return x;
}
void clear_page(void *page);
void copy_page(void *to, void *from);






struct page;




struct range {
 u64 start;
 u64 end;
};

int add_range(struct range *range, int az, int nr_range,
  u64 start, u64 end);


int add_range_with_merge(struct range *range, int az, int nr_range,
    u64 start, u64 end);

void subtract_range(struct range *range, int az, u64 start, u64 end);

int clean_sort_range(struct range *range, int az);

void sort_range(struct range *range, int nr_range);


static inline resource_size_t cap_resource(u64 val)
{
 if (val > ((resource_size_t)~0))
  return ((resource_size_t)~0);

 return val;
}
extern struct range pfn_mapped[];
extern int nr_pfn_mapped;

static inline void clear_user_page(void *page, unsigned long vaddr,
       struct page *pg)
{
 clear_page(page);
}

static inline void copy_user_page(void *to, void *from, unsigned long vaddr,
      struct page *topage)
{
 copy_page(to, from);
}
extern bool __virt_addr_valid(unsigned long kaddr);




static inline __attribute__((__const__))
int __get_order(unsigned long size)
{
 int order;

 size--;
 size >>= 12;



 order = fls64(size);

 return order;
}
struct task_struct;
struct exec_domain;






struct task_struct;
struct mm_struct;






struct vm86_regs {



 long ebx;
 long ecx;
 long edx;
 long esi;
 long edi;
 long ebp;
 long eax;
 long __null_ds;
 long __null_es;
 long __null_fs;
 long __null_gs;
 long orig_eax;
 long eip;
 unsigned short cs, __csh;
 long eflags;
 long esp;
 unsigned short ss, __ssh;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct revectored_struct {
 unsigned long __map[8];
};

struct vm86_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
};






struct vm86plus_info_struct {
 unsigned long force_return_for_pic:1;
 unsigned long vm86dbg_active:1;
 unsigned long vm86dbg_TFpendig:1;
 unsigned long unused:28;
 unsigned long is_vm86pus:1;
 unsigned char vm86dbg_intxxtab[32];
};
struct vm86plus_struct {
 struct vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
};
struct kernel_vm86_regs {



 struct pt_regs pt;



 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned short fs, __fsh;
 unsigned short gs, __gsh;
};

struct kernel_vm86_struct {
 struct kernel_vm86_regs regs;
 unsigned long flags;
 unsigned long screen_bitmap;
 unsigned long cpu_type;
 struct revectored_struct int_revectored;
 struct revectored_struct int21_revectored;
 struct vm86plus_info_struct vm86plus;
 struct pt_regs *regs32;
};
static inline int handle_vm86_trap(struct kernel_vm86_regs *a, long b, int c)
{
 return 0;
}
struct math_emu_info {
 long ___orig_eip;
 union {
  struct pt_regs *regs;
  struct kernel_vm86_regs *vm86;
 };
};





struct _fpx_sw_bytes {
 __u32 magic1;
 __u32 extended_size;


 __u64 xstate_bv;




 __u32 xstate_size;




 __u32 padding[7];
};
struct _fpstate {
 __u16 cwd;
 __u16 swd;
 __u16 twd;

 __u16 fop;
 __u64 rip;
 __u64 rdp;
 __u32 mxcsr;
 __u32 mxcsr_mask;
 __u32 st_space[32];
 __u32 xmm_space[64];
 __u32 reserved2[12];
 union {
  __u32 reserved3[12];
  struct _fpx_sw_bytes sw_reserved;

 };
};
struct _xsave_hdr {
 __u64 xstate_bv;
 __u64 reserved1[2];
 __u64 reserved2[5];
};

struct _ymmh_state {

 __u32 ymmh_space[64];
};







struct _xstate {
 struct _fpstate fpstate;
 struct _xsave_hdr xstate_hdr;
 struct _ymmh_state ymmh;

};
struct sigcontext {
 unsigned long r8;
 unsigned long r9;
 unsigned long r10;
 unsigned long r11;
 unsigned long r12;
 unsigned long r13;
 unsigned long r14;
 unsigned long r15;
 unsigned long di;
 unsigned long si;
 unsigned long bp;
 unsigned long bx;
 unsigned long dx;
 unsigned long ax;
 unsigned long cx;
 unsigned long sp;
 unsigned long ip;
 unsigned long flags;
 unsigned short cs;
 unsigned short gs;
 unsigned short fs;
 unsigned short __pad0;
 unsigned long err;
 unsigned long trapno;
 unsigned long oldmask;
 unsigned long cr2;
 void *fpstate;
 unsigned long reserved1[8];
};







struct task_struct;

extern __attribute__((section(".data..percpu" ""))) __typeof__(struct task_struct *) current_task;







extern struct task_struct *get_current(void);






















extern unsigned int __invalid_size_argument_for_IOC;







extern int __bitmap_empty( unsigned long *bitmap, int bits);
extern int __bitmap_full( unsigned long *bitmap, int bits);
extern int __bitmap_equal( unsigned long *bitmap1,
                 unsigned long *bitmap2, int bits);
extern void __bitmap_complement(unsigned long *dst, unsigned long *src,
   int bits);
extern void __bitmap_shift_right(unsigned long *dst,
                        unsigned long *src, int shift, int bits);
extern void __bitmap_shift_left(unsigned long *dst,
                        unsigned long *src, int shift, int bits);
extern int __bitmap_and(unsigned long *dst, unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern int __bitmap_andnot(unsigned long *dst, unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern int __bitmap_intersects( unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern int __bitmap_subset( unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern int __bitmap_weight( unsigned long *bitmap, int bits);

extern void bitmap_set(unsigned long *map, int i, int len);
extern void bitmap_clear(unsigned long *map, int start, int nr);
extern unsigned long bitmap_find_next_zero_area(unsigned long *map,
      unsigned long size,
      unsigned long start,
      unsigned int nr,
      unsigned long align_mask);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   unsigned long *src, int nbits);
extern int __bitmap_parse( char *buf, unsigned int buflen, int is_user,
   unsigned long *dst, int nbits);
extern int bitmap_parse_user( char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   unsigned long *src, int nbits);
extern int bitmap_parselist( char *buf, unsigned long *maskp,
   int nmaskbits);
extern int bitmap_parselist_user( char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern void bitmap_remap(unsigned long *dst, unsigned long *src,
  unsigned long *old, unsigned long *_new, int bits);
extern int bitmap_bitremap(int oldbit,
  unsigned long *old, unsigned long *_new, int bits);
extern void bitmap_onto(unsigned long *dst, unsigned long *orig,
  unsigned long *relmap, int bits);
extern void bitmap_fold(unsigned long *dst, unsigned long *orig,
  int sz, int bits);
extern int bitmap_find_free_region(unsigned long *bitmap, int bits, int order);
extern void bitmap_release_region(unsigned long *bitmap, int pos, int order);
extern int bitmap_allocate_region(unsigned long *bitmap, int pos, int order);
extern void bitmap_copy_le(void *dst, unsigned long *src, int nbits);
extern int bitmap_ord_to_pos( unsigned long *bitmap, int n, int bits);
static inline void bitmap_zero(unsigned long *dst, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = 0UL;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memset(dst, 0, len);
 }
}

static inline void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));
 if (!(__builtin_constant_p(nbits) && (nbits) <= 64)) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  memset(dst, 0xff, len);
 }
 dst[nlongs - 1] = ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
}

static inline void bitmap_copy(unsigned long *dst, unsigned long *src,
   int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memcpy(dst, src, len);
 }
}

static inline int bitmap_and(unsigned long *dst, unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return (*dst = *src1 & *src2) != 0;
 return __bitmap_and(dst, src1, src2, nbits);
}

static inline void bitmap_or(unsigned long *dst, unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline void bitmap_xor(unsigned long *dst, unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline int bitmap_andnot(unsigned long *dst, unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return (*dst = *src1 & ~(*src2)) != 0;
 return __bitmap_andnot(dst, src1, src2, nbits);
}

static inline void bitmap_complement(unsigned long *dst, unsigned long *src,
   int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = ~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline int bitmap_equal( unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! ((*src1 ^ *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline int bitmap_intersects( unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ((*src1 & *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline int bitmap_subset( unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline int bitmap_empty( unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! (*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline int bitmap_full( unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return ! (~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline int bitmap_weight( unsigned long *src, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  return hweight_long(*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 return __bitmap_weight(src, nbits);
}

static inline void bitmap_shift_right(unsigned long *dst,
   unsigned long *src, int n, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline void bitmap_shift_left(unsigned long *dst,
   unsigned long *src, int n, int nbits)
{
 if ((__builtin_constant_p(nbits) && (nbits) <= 64))
  *dst = (*src << n) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}

static inline int bitmap_parse( char *buf, unsigned int buflen,
   unsigned long *maskp, int nmaskbits)
{
 return __bitmap_parse(buf, buflen, 0, maskp, nmaskbits);
}


typedef struct cpumask { unsigned long bits[(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } cpumask_t;
extern int nr_cpu_ids;
extern struct cpumask * cpu_possible_mask;
extern struct cpumask * cpu_online_mask;
extern struct cpumask * cpu_present_mask;
extern struct cpumask * cpu_active_mask;
static inline unsigned int cpumask_check(unsigned int cpu)
{



 return cpu;
}
static inline unsigned int cpumask_first( struct cpumask *srcp)
{
 return find_first_bit(((srcp)->bits), 256);
}
static inline unsigned int cpumask_next(int n, struct cpumask *srcp)
{

 if (n != -1)
  cpumask_check(n);
 return find_next_bit(((srcp)->bits), 256, n+1);
}
static inline unsigned int cpumask_next_zero(int n, struct cpumask *srcp)
{

 if (n != -1)
  cpumask_check(n);
 return find_next_zero_bit(((srcp)->bits), 256, n+1);
}

int cpumask_next_and(int n, struct cpumask *, struct cpumask *);
int cpumask_any_but( struct cpumask *mask, unsigned int cpu);
static inline void cpumask_set_cpu(unsigned int cpu, struct cpumask *dstp)
{
 set_bit(cpumask_check(cpu), ((dstp)->bits));
}






static inline void cpumask_clear_cpu(int cpu, struct cpumask *dstp)
{
 clear_bit(cpumask_check(cpu), ((dstp)->bits));
}
static inline int cpumask_test_and_set_cpu(int cpu, struct cpumask *cpumask)
{
 return test_and_set_bit(cpumask_check(cpu), ((cpumask)->bits));
}
static inline int cpumask_test_and_clear_cpu(int cpu, struct cpumask *cpumask)
{
 return test_and_clear_bit(cpumask_check(cpu), ((cpumask)->bits));
}





static inline void cpumask_setall(struct cpumask *dstp)
{
 bitmap_fill(((dstp)->bits), 256);
}





static inline void cpumask_clear(struct cpumask *dstp)
{
 bitmap_zero(((dstp)->bits), 256);
}
static inline int cpumask_and(struct cpumask *dstp,
          struct cpumask *src1p,
          struct cpumask *src2p)
{
 return bitmap_and(((dstp)->bits), ((src1p)->bits),
           ((src2p)->bits), 256);
}







static inline void cpumask_or(struct cpumask *dstp, struct cpumask *src1p,
         struct cpumask *src2p)
{
 bitmap_or(((dstp)->bits), ((src1p)->bits),
          ((src2p)->bits), 256);
}







static inline void cpumask_xor(struct cpumask *dstp,
          struct cpumask *src1p,
          struct cpumask *src2p)
{
 bitmap_xor(((dstp)->bits), ((src1p)->bits),
           ((src2p)->bits), 256);
}
static inline int cpumask_andnot(struct cpumask *dstp,
      struct cpumask *src1p,
      struct cpumask *src2p)
{
 return bitmap_andnot(((dstp)->bits), ((src1p)->bits),
       ((src2p)->bits), 256);
}






static inline void cpumask_complement(struct cpumask *dstp,
          struct cpumask *srcp)
{
 bitmap_complement(((dstp)->bits), ((srcp)->bits),
           256);
}






static inline bool cpumask_equal( struct cpumask *src1p,
    struct cpumask *src2p)
{
 return bitmap_equal(((src1p)->bits), ((src2p)->bits),
       256);
}






static inline bool cpumask_intersects( struct cpumask *src1p,
         struct cpumask *src2p)
{
 return bitmap_intersects(((src1p)->bits), ((src2p)->bits),
            256);
}
static inline int cpumask_subset( struct cpumask *src1p,
     struct cpumask *src2p)
{
 return bitmap_subset(((src1p)->bits), ((src2p)->bits),
        256);
}





static inline bool cpumask_empty( struct cpumask *srcp)
{
 return bitmap_empty(((srcp)->bits), 256);
}





static inline bool cpumask_full( struct cpumask *srcp)
{
 return bitmap_full(((srcp)->bits), 256);
}





static inline unsigned int cpumask_weight( struct cpumask *srcp)
{
 return bitmap_weight(((srcp)->bits), 256);
}







static inline void cpumask_shift_right(struct cpumask *dstp,
           struct cpumask *srcp, int n)
{
 bitmap_shift_right(((dstp)->bits), ((srcp)->bits), n,
            256);
}







static inline void cpumask_shift_left(struct cpumask *dstp,
          struct cpumask *srcp, int n)
{
 bitmap_shift_left(((dstp)->bits), ((srcp)->bits), n,
           256);
}






static inline void cpumask_copy(struct cpumask *dstp,
    struct cpumask *srcp)
{
 bitmap_copy(((dstp)->bits), ((srcp)->bits), 256);
}
static inline int cpumask_scnprintf(char *buf, int len,
        struct cpumask *srcp)
{
 return bitmap_scnprintf(buf, len, ((srcp)->bits), 256);
}
static inline int cpumask_parse_user( char *buf, int len,
         struct cpumask *dstp)
{
 return bitmap_parse_user(buf, len, ((dstp)->bits), 256);
}
static inline int cpumask_parselist_user( char *buf, int len,
         struct cpumask *dstp)
{
 return bitmap_parselist_user(buf, len, ((dstp)->bits),
       256);
}
static inline int cpulist_scnprintf(char *buf, int len,
        struct cpumask *srcp)
{
 return bitmap_scnlistprintf(buf, len, ((srcp)->bits),
        256);
}
static inline int cpumask_parse( char *buf, struct cpumask *dstp)
{
 char *nl = strchr(buf, '\n');
 int len = nl ? nl - buf : strlen(buf);

 return bitmap_parse(buf, len, ((dstp)->bits), 256);
}
static inline int cpulist_parse( char *buf, struct cpumask *dstp)
{
 return bitmap_parselist(buf, ((dstp)->bits), 256);
}






static inline size_t cpumask_size(void)
{


 return (((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(long);
}
typedef struct cpumask cpumask_var_t[1];

static inline bool alloc_cpumask_var(cpumask_var_t *mask, gfp_t flags)
{
 return _true;
}

static inline bool alloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags,
       int node)
{
 return _true;
}

static inline bool zalloc_cpumask_var(cpumask_var_t *mask, gfp_t flags)
{
 cpumask_clear(*mask);
 return _true;
}

static inline bool zalloc_cpumask_var_node(cpumask_var_t *mask, gfp_t flags,
       int node)
{
 cpumask_clear(*mask);
 return _true;
}

static inline void alloc_bootmem_cpumask_var(cpumask_var_t *mask)
{
}

static inline void free_cpumask_var(cpumask_var_t mask)
{
}

static inline void free_bootmem_cpumask_var(cpumask_var_t mask)
{
}




extern unsigned long cpu_all_bits[(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
void set_cpu_possible(unsigned int cpu, bool possible);
void set_cpu_present(unsigned int cpu, bool present);
void set_cpu_online(unsigned int cpu, bool online);
void set_cpu_active(unsigned int cpu, bool active);
void init_cpu_present( struct cpumask *src);
void init_cpu_possible( struct cpumask *src);
void init_cpu_online( struct cpumask *src);
static inline int __check_is_bitmap( unsigned long *bitmap)
{
 return 1;
}
extern unsigned long
 cpu_bit_bitmap[64 +1][(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];

static inline struct cpumask *get_cpu_mask(unsigned int cpu)
{
 unsigned long *p = cpu_bit_bitmap[1 + cpu % 64];
 p -= cpu / 64;
 return ((struct cpumask *)(1 ? (p) : (void *)sizeof(__check_is_bitmap(p))));
}
int __first_cpu( cpumask_t *srcp);
int __next_cpu(int n, cpumask_t *srcp);
int __next_cpu_nr(int n, cpumask_t *srcp);
static inline void __cpu_set(int cpu, cpumask_t *dstp)
{
 set_bit(cpu, dstp->bits);
}


static inline void __cpu_clear(int cpu, cpumask_t *dstp)
{
 clear_bit(cpu, dstp->bits);
}


static inline void __cpus_setall(cpumask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline void __cpus_clear(cpumask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}





static inline int __cpu_test_and_set(int cpu, cpumask_t *addr)
{
 return test_and_set_bit(cpu, addr->bits);
}


static inline int __cpus_and(cpumask_t *dstp, cpumask_t *src1p,
     cpumask_t *src2p, int nbits)
{
 return bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline void __cpus_or(cpumask_t *dstp, cpumask_t *src1p,
     cpumask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline void __cpus_xor(cpumask_t *dstp, cpumask_t *src1p,
     cpumask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline int __cpus_andnot(cpumask_t *dstp, cpumask_t *src1p,
     cpumask_t *src2p, int nbits)
{
 return bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_equal( cpumask_t *src1p,
     cpumask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_intersects( cpumask_t *src1p,
     cpumask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_subset( cpumask_t *src1p,
     cpumask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline int __cpus_empty( cpumask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline int __cpus_weight( cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline void __cpus_shift_left(cpumask_t *dstp,
     cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}

extern cpumask_var_t cpu_callin_mask;
extern cpumask_var_t cpu_callout_mask;
extern cpumask_var_t cpu_initialized_mask;
extern cpumask_var_t cpu_sibling_setup_mask;

extern void setup_cpu_local_masks(void);

struct msr {
 union {
  struct {
   u32 l;
   u32 h;
  };
  u64 q;
 };
};

struct msr_info {
 u32 msr_no;
 struct msr reg;
 struct msr *msrs;
 int err;
};

struct msr_regs_info {
 u32 *regs;
 int err;
};

static inline unsigned long long native_read_tscp(unsigned int *aux)
{
 unsigned long low, high;
 asm (".byte 0x0f,0x01,0xf9"
       : "=a" (low), "=d" (high), "=c" (*aux));
 return low | ((u64)high << 32);
}
static inline unsigned long long native_read_msr(unsigned int msr)
{
 unsigned low, high;

 asm ("rdmsr" : "=a" (low), "=d" (high) : "c" (msr));
 return ((low) | ((u64)(high) << 32));
}

static inline unsigned long long native_read_msr_safe(unsigned int msr,
            int *err)
{
 unsigned low, high;

 asm ("2: rdmsr ; xor %[err],%[err]\n"
       "1:\n\t"
       ".section .fixup,\"ax\"\n\t"
       "3:  mov %[fault],%[err] ; jmp 1b\n\t"
       ".previous\n\t"
       " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "2b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n"
       : [err] "=r" (*err), "=a" (low), "=d" (high)
       : "c" (msr), [fault] "i" (-5));
 return ((low) | ((u64)(high) << 32));
}

static inline void native_write_msr(unsigned int msr,
        unsigned low, unsigned high)
{
 asm ("wrmsr" : : "c" (msr), "a"(low), "d" (high) : "memory");
}


 static inline int native_write_msr_safe(unsigned int msr,
     unsigned low, unsigned high)
{
 int err;
 asm ("2: wrmsr ; xor %[err],%[err]\n"
       "1:\n\t"
       ".section .fixup,\"ax\"\n\t"
       "3:  mov %[fault],%[err] ; jmp 1b\n\t"
       ".previous\n\t"
       " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "2b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n"
       : [err] "=a" (err)
       : "c" (msr), "0" (low), "d" (high),
         [fault] "i" (-5)
       : "memory");
 return err;
}

extern unsigned long long native_read_tsc(void);

extern int rdmsr_safe_regs(u32 regs[8]);
extern int wrmsr_safe_regs(u32 regs[8]);

static inline __attribute__((always_inline)) unsigned long long __native_read_tsc(void)
{
 unsigned low, high;

 asm ("rdtsc" : "=a" (low), "=d" (high));

 return ((low) | ((u64)(high) << 32));
}

static inline unsigned long long native_read_pmc(int counter)
{
 unsigned low, high;

 asm ("rdpmc" : "=a" (low), "=d" (high) : "c" (counter));
 return ((low) | ((u64)(high) << 32));
}


static inline int paravirt_enabled(void)
{
 return pv_info.paravirt_enabled;
}

static inline void load_sp0(struct tss_struct *tss,
        struct thread_struct *thread)
{
 ;
}


static inline void __cpuid(unsigned int *eax, unsigned int *ebx,
      unsigned int *ecx, unsigned int *edx)
{
 ;
}




static inline unsigned long paravirt_get_debugreg(int reg)
{
 return 0;
}

static inline void set_debugreg(unsigned long val, int reg)
{
 ;
}

static inline void clts(void)
{
 ;
}

static inline unsigned long read_cr0(void)
{
 return 0;
}

static inline void write_cr0(unsigned long x)
{
 ;
}

static inline unsigned long read_cr2(void)
{
 return 0;
}

static inline void write_cr2(unsigned long x)
{
 ;
}

static inline unsigned long read_cr3(void)
{
 return 0;
}

static inline void write_cr3(unsigned long x)
{
 ;
}

static inline unsigned long read_cr4(void)
{
 return 0;
}
static inline unsigned long read_cr4_safe(void)
{
 return 0;
}

static inline void write_cr4(unsigned long x)
{
 ;
}


static inline unsigned long read_cr8(void)
{
 return 0;
}

static inline void write_cr8(unsigned long x)
{
 ;
}


static inline void arch_safe_halt(void)
{
 ;
}

static inline void halt(void)
{
 ;
}

static inline void wbinvd(void)
{
 ;
}



static inline u64 paravirt_read_msr(unsigned msr, int *err)
{
 return 0;
}

static inline int paravirt_write_msr(unsigned msr, unsigned low, unsigned high)
{
 return 0;
}
static inline int rdmsrl_safe(unsigned msr, unsigned long long *p)
{
 int err;

 *p = paravirt_read_msr(msr, &err);
 return err;
}

static inline u64 paravirt_read_tsc(void)
{
 return 0;
}
static inline unsigned long long paravirt_sched_clock(void)
{
 return 0;
}

struct static_key;
extern struct static_key paravirt_steal_enabled;
extern struct static_key paravirt_steal_rq_enabled;

static inline u64 paravirt_steal_clock(int cpu)
{
 return 0;
}

static inline unsigned long long paravirt_read_pmc(int counter)
{
 return 0;
}
static inline unsigned long long paravirt_rdtscp(unsigned int *aux)
{
 return 0;
}
static inline void paravirt_alloc_ldt(struct desc_struct *ldt, unsigned entries)
{
 ;
}

static inline void paravirt_free_ldt(struct desc_struct *ldt, unsigned entries)
{
 ;
}

static inline void load_TR_desc(void)
{
 ;
}
static inline void load_gdt( struct desc_ptr *dtr)
{
 ;
}
static inline void load_idt( struct desc_ptr *dtr)
{
 ;
}
static inline void set_ldt( void *addr, unsigned entries)
{
 ;
}
static inline void store_idt(struct desc_ptr *dtr)
{
 ;
}
static inline unsigned long paravirt_store_tr(void)
{
 return 0;
}

static inline void load_TLS(struct thread_struct *t, unsigned cpu)
{
 ;
}


static inline void load_gs_index(unsigned int gs)
{
 ;
}


static inline void write_ldt_entry(struct desc_struct *dt, int entry,
       void *desc)
{
 ;
}

static inline void write_gdt_entry(struct desc_struct *dt, int entry,
       void *desc, int type)
{
 ;
}

static inline void write_idt_entry(gate_desc *dt, int entry, gate_desc *g)
{
 ;
}
static inline void set_iopl_mask(unsigned mask)
{
 ;
}


static inline void slow_down_io(void)
{
 pv_cpu_ops.io_delay();





}


static inline void startup_ipi_hook(int phys_apicid, unsigned long start_eip,
        unsigned long start_esp)
{

                                        ;
}


static inline void paravirt_activate_mm(struct mm_struct *prev,
     struct mm_struct *next)
{
 ;
}

static inline void arch_dup_mmap(struct mm_struct *oldmm,
     struct mm_struct *mm)
{
 ;
}

static inline void arch_exit_mmap(struct mm_struct *mm)
{
 ;
}

static inline void __flush_tlb(void)
{
 ;
}
static inline void __flush_tlb_global(void)
{
 ;
}
static inline void __flush_tlb_single(unsigned long addr)
{
 ;
}

static inline void flush_tlb_others( struct cpumask *cpumask,
        struct mm_struct *mm,
        unsigned long start,
        unsigned long end)
{
 ;
}

static inline int paravirt_pgd_alloc(struct mm_struct *mm)
{
 return 0;
}

static inline void paravirt_pgd_free(struct mm_struct *mm, pgd_t *pgd)
{
 ;
}

static inline void paravirt_alloc_pte(struct mm_struct *mm, unsigned long pfn)
{
 ;
}
static inline void paravirt_release_pte(unsigned long pfn)
{
 ;
}

static inline void paravirt_alloc_pmd(struct mm_struct *mm, unsigned long pfn)
{
 ;
}

static inline void paravirt_release_pmd(unsigned long pfn)
{
 ;
}

static inline void paravirt_alloc_pud(struct mm_struct *mm, unsigned long pfn)
{
 ;
}
static inline void paravirt_release_pud(unsigned long pfn)
{
 ;
}

static inline void pte_update(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep)
{
 ;
}
static inline void pmd_update(struct mm_struct *mm, unsigned long addr,
         pmd_t *pmdp)
{
 ;
}

static inline void pte_update_defer(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 ;
}

static inline void pmd_update_defer(struct mm_struct *mm, unsigned long addr,
        pmd_t *pmdp)
{
 ;
}

static inline pte_t __pte(pteval_t val)
{
        return (pte_t) { 0 };

}

static inline pteval_t pte_val(pte_t pte)
{
        return 0;

}

static inline pgd_t __pgd(pgdval_t val)
{
        return (pgd_t) { 0 };

}

static inline pgdval_t pgd_val(pgd_t pgd)
{
        return 0;

}


static inline pte_t ptep_modify_prot_start(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
        return (pte_t) { 0 };

}

static inline void ptep_modify_prot_commit(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))

  pv_mmu_ops.ptep_modify_prot_commit(mm, addr, ptep, pte);
 else
 
                               ;
}

static inline void set_pte(pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))
 
                                   ;
 else
 
               ;
}

static inline void set_pte_at(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))

  pv_mmu_ops.set_pte_at(mm, addr, ptep, pte);
 else
  ;
}

static inline void set_pmd_at(struct mm_struct *mm, unsigned long addr,
         pmd_t *pmdp, pmd_t pmd)
{
 if (sizeof(pmdval_t) > sizeof(long))

  pv_mmu_ops.set_pmd_at(mm, addr, pmdp, pmd);
 else
 
                           ;
}

static inline void set_pmd(pmd_t *pmdp, pmd_t pmd)
{
 pmdval_t val = native_pmd_val(pmd);

 if (sizeof(pmdval_t) > sizeof(long))
  ;
 else
  ;
}


static inline pmd_t __pmd(pmdval_t val)
{
        return (pmd_t) { 0 };

}

static inline pmdval_t pmd_val(pmd_t pmd)
{
        return 0;

}

static inline void set_pud(pud_t *pudp, pud_t pud)
{
 pudval_t val = native_pud_val(pud);

 if (sizeof(pudval_t) > sizeof(long))
 
                           ;
 else
 
           ;
}

static inline pud_t __pud(pudval_t val)
{
        return (pud_t) { 0 };

}

static inline pudval_t pud_val(pud_t pud)
{
        return 0;

}

static inline void set_pgd(pgd_t *pgdp, pgd_t pgd)
{
 pgdval_t val = native_pgd_val(pgd);

 if (sizeof(pgdval_t) > sizeof(long))
 
                           ;
 else
 
           ;
}

static inline void pgd_clear(pgd_t *pgdp)
{
 set_pgd(pgdp, __pgd(0));
}

static inline void pud_clear(pud_t *pudp)
{
 set_pud(pudp, __pud(0));
}
static inline void set_pte_atomic(pte_t *ptep, pte_t pte)
{
 set_pte(ptep, pte);
}

static inline void pte_clear(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 set_pte_at(mm, addr, ptep, __pte(0));
}

static inline void pmd_clear(pmd_t *pmdp)
{
 set_pmd(pmdp, __pmd(0));
}



static inline void arch_start_context_switch(struct task_struct *prev)
{
 ;
}

static inline void arch_end_context_switch(struct task_struct *next)
{
 ;
}


static inline void arch_enter_lazy_mmu_mode(void)
{
 ;
}

static inline void arch_leave_lazy_mmu_mode(void)
{
 ;
}

static inline void arch_flush_lazy_mmu_mode(void)
{
 ;
}

static inline void __set_fixmap(unsigned idx,
    phys_addr_t phys, pgprot_t flags)
{
 pv_mmu_ops.set_fixmap(idx, phys, flags);
}



static inline __attribute__((always_inline)) void __ticket_lock_spinning(struct arch_spinlock *lock,
       __ticket_t ticket)
{
 ;
}

static inline __attribute__((always_inline)) void __ticket_unlock_kick(struct arch_spinlock *lock,
       __ticket_t ticket)
{
 ;
}
static inline unsigned long arch_local_save_flags(void)
{
 return 0;
}

static inline void arch_local_irq_restore(unsigned long f)
{
 ;
}

static inline void arch_local_irq_disable(void)
{
 ;
}

static inline void arch_local_irq_enable(void)
{
 ;
}

static inline unsigned long arch_local_irq_save(void)
{
 unsigned long f;

 f = arch_local_save_flags();
 arch_local_irq_disable();
 return f;
}
extern void default_banner(void);
struct msr *msrs_alloc(void);
void msrs_free(struct msr *msrs);


int rdmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
int wrmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);
int rdmsrl_on_cpu(unsigned int cpu, u32 msr_no, u64 *q);
int wrmsrl_on_cpu(unsigned int cpu, u32 msr_no, u64 q);
void rdmsr_on_cpus( struct cpumask *mask, u32 msr_no, struct msr *msrs);
void wrmsr_on_cpus( struct cpumask *mask, u32 msr_no, struct msr *msrs);
int rdmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
int wrmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);
int rdmsrl_safe_on_cpu(unsigned int cpu, u32 msr_no, u64 *q);
int wrmsrl_safe_on_cpu(unsigned int cpu, u32 msr_no, u64 q);
int rdmsr_safe_regs_on_cpu(unsigned int cpu, u32 regs[8]);
int wrmsr_safe_regs_on_cpu(unsigned int cpu, u32 regs[8]);

extern unsigned char * *ideal_nops;
extern void arch_init_ideal_nops(void);






static inline void native_clts(void)
{
 asm ("clts");
}
extern unsigned long __force_order;

static inline unsigned long native_read_cr0(void)
{
 unsigned long val;
 asm ("mov %%cr0,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline void native_write_cr0(unsigned long val)
{
 asm ("mov %0,%%cr0": : "r" (val), "m" (__force_order));
}

static inline unsigned long native_read_cr2(void)
{
 unsigned long val;
 asm ("mov %%cr2,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline void native_write_cr2(unsigned long val)
{
 asm ("mov %0,%%cr2": : "r" (val), "m" (__force_order));
}

static inline unsigned long native_read_cr3(void)
{
 unsigned long val;
 asm ("mov %%cr3,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline void native_write_cr3(unsigned long val)
{
 asm ("mov %0,%%cr3": : "r" (val), "m" (__force_order));
}

static inline unsigned long native_read_cr4(void)
{
 unsigned long val;
 asm ("mov %%cr4,%0\n\t" : "=r" (val), "=m" (__force_order));
 return val;
}

static inline unsigned long native_read_cr4_safe(void)
{
 unsigned long val;
 val = native_read_cr4();

 return val;
}

static inline void native_write_cr4(unsigned long val)
{
 asm ("mov %0,%%cr4": : "r" (val), "m" (__force_order));
}


static inline unsigned long native_read_cr8(void)
{
 unsigned long cr8;
 asm ("movq %%cr8,%0" : "=r" (cr8));
 return cr8;
}

static inline void native_write_cr8(unsigned long val)
{
 asm ("movq %0,%%cr8" :: "r" (val) : "memory");
}


static inline void native_wbinvd(void)
{
 asm ("wbinvd": : :"memory");
}

extern void native_load_gs_index(unsigned);
static inline void clflush( void *__p)
{
 asm ("clflush %0" : "+m" (*( char *)__p));
}




enum {
 UNAME26 = 0x0020000,
 ADDR_NO_RANDOMIZE = 0x0040000,
 FDPIC_FUNCPTRS = 0x0080000,


 MMAP_PAGE_ZERO = 0x0100000,
 ADDR_COMPAT_LAYOUT = 0x0200000,
 READ_IMPLIES_EXEC = 0x0400000,
 ADDR_LIMIT_32BIT = 0x0800000,
 SHORT_INODE = 0x1000000,
 WHOLE_SECONDS = 0x2000000,
 STICKY_TIMEOUTS = 0x4000000,
 ADDR_LIMIT_3GB = 0x8000000,
};
enum {
 PER_LINUX = 0x0000,
 PER_LINUX_32BIT = 0x0000 | ADDR_LIMIT_32BIT,
 PER_LINUX_FDPIC = 0x0000 | FDPIC_FUNCPTRS,
 PER_SVR4 = 0x0001 | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_SVR3 = 0x0002 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_SCOSVR3 = 0x0003 | STICKY_TIMEOUTS |
      WHOLE_SECONDS | SHORT_INODE,
 PER_OSR5 = 0x0003 | STICKY_TIMEOUTS | WHOLE_SECONDS,
 PER_WYSEV386 = 0x0004 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_ISCR4 = 0x0005 | STICKY_TIMEOUTS,
 PER_BSD = 0x0006,
 PER_SUNOS = 0x0006 | STICKY_TIMEOUTS,
 PER_XENIX = 0x0007 | STICKY_TIMEOUTS | SHORT_INODE,
 PER_LINUX32 = 0x0008,
 PER_LINUX32_3GB = 0x0008 | ADDR_LIMIT_3GB,
 PER_IRIX32 = 0x0009 | STICKY_TIMEOUTS,
 PER_IRIXN32 = 0x000a | STICKY_TIMEOUTS,
 PER_IRIX64 = 0x000b | STICKY_TIMEOUTS,
 PER_RISCOS = 0x000c,
 PER_SOLARIS = 0x000d | STICKY_TIMEOUTS,
 PER_UW7 = 0x000e | STICKY_TIMEOUTS | MMAP_PAGE_ZERO,
 PER_OSF4 = 0x000f,
 PER_HPUX = 0x0010,
 PER_MASK = 0x00ff,
};






struct exec_domain;
struct pt_regs;

extern int register_exec_domain(struct exec_domain *);
extern int unregister_exec_domain(struct exec_domain *);
extern int __set_personality(unsigned int);
typedef void (*handler_t)(int, struct pt_regs *);

struct exec_domain {
 char *name;
 handler_t handler;
 unsigned char pers_low;
 unsigned char pers_high;
 unsigned long *signal_map;
 unsigned long *signal_invmap;
 struct map_segment *err_map;
 struct map_segment *socktype_map;
 struct map_segment *sockopt_map;
 struct map_segment *af_map;
 struct module *module;
 struct exec_domain *next;
};






static inline u64 div_u64_rem(u64 dividend, u32 divisor, u32 *remainder)
{
 *remainder = dividend % divisor;
 return dividend / divisor;
}




static inline s64 div_s64_rem(s64 dividend, s32 divisor, s32 *remainder)
{
 *remainder = dividend % divisor;
 return dividend / divisor;
}




static inline u64 div64_u64_rem(u64 dividend, u64 divisor, u64 *remainder)
{
 *remainder = dividend % divisor;
 return dividend / divisor;
}




static inline u64 div64_u64(u64 dividend, u64 divisor)
{
 return dividend / divisor;
}




static inline s64 div64_s64(s64 dividend, s64 divisor)
{
 return dividend / divisor;
}
static inline u64 div_u64(u64 dividend, u32 divisor)
{
 u32 remainder;
 return div_u64_rem(dividend, divisor, &remainder);
}






static inline s64 div_s64(s64 dividend, s32 divisor)
{
 s32 remainder;
 return div_s64_rem(dividend, divisor, &remainder);
}


u32 iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder);

static inline __attribute__((always_inline)) u32
__iter_div_u64_rem(u64 dividend, u32 divisor, u64 *remainder)
{
 u32 ret = 0;

 while (dividend >= divisor) {


  asm("" : "+rm"(dividend));

  dividend -= divisor;
  ret++;
 }

 *remainder = dividend;

 return ret;
}




static inline u64 mul_u64_u32_shr(u64 a, u32 mul, unsigned int shift)
{
 return (u64)(((unsigned __int128)a * mul) >> shift);
}






static inline void * ERR_PTR(long error)
{
 return (void *) error;
}

static inline long PTR_ERR( void *ptr)
{
 return (long) ptr;
}

static inline long IS_ERR( void *ptr)
{
 return __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}

static inline long IS_ERR_OR_NULL( void *ptr)
{
 return !ptr || __builtin_expect(!!(((unsigned long)ptr) >= (unsigned long)-4095), 0);
}
static inline void * ERR_CAST( void *ptr)
{

 return (void *) ptr;
}

static inline int PTR_ERR_OR_ZERO( void *ptr)
{
 if (IS_ERR(ptr))
  return PTR_ERR(ptr);
 else
  return 0;
}
static inline unsigned long native_save_fl(void)
{
 unsigned long flags;






 asm ("# __raw_save_flags\n\t"
       "pushf ; pop %0"
       : "=rm" (flags)
       :
       : "memory");

 return flags;
}

static inline void native_restore_fl(unsigned long flags)
{
 asm ("push %0 ; popf"
       :
       :"g" (flags)
       :"memory", "cc");
}

static inline void native_irq_disable(void)
{
 asm ("cli": : :"memory");
}

static inline void native_irq_enable(void)
{
 asm ("sti": : :"memory");
}

static inline void native_safe_halt(void)
{
 asm ("sti; hlt": : :"memory");
}

static inline void native_halt(void)
{
 asm ("hlt": : :"memory");
}
static inline int arch_irqs_disabled_flags(unsigned long flags)
{
 return !(flags & ((1UL) << (9)));
}

static inline int arch_irqs_disabled(void)
{
 unsigned long flags = arch_local_save_flags();

 return arch_irqs_disabled_flags(flags);
}
static inline void *current_text_addr(void)
{
 void *pc;

 asm ("mov $1f, %0; 1:":"=r" (pc));

 return pc;
}
enum tlb_infos {
 ENTRIES,
 NR_INFO
};

extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lli_4k[NR_INFO];
extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lli_2m[NR_INFO];
extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lli_4m[NR_INFO];
extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lld_4k[NR_INFO];
extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lld_2m[NR_INFO];
extern u16 __attribute__((__section__(".data..read_mostly"))) tlb_lld_4m[NR_INFO];
extern s8 __attribute__((__section__(".data..read_mostly"))) tlb_flushall_shift;







struct cpuinfo_x86 {
 __u8 x86;
 __u8 x86_vendor;
 __u8 x86_model;
 __u8 x86_mask;
 int x86_tlbsize;

 __u8 x86_virt_bits;
 __u8 x86_phys_bits;

 __u8 x86_coreid_bits;

 __u32 extended_cpuid_level;

 int cpuid_level;
 __u32 x86_capability[10 + 1];
 char x86_vendor_id[16];
 char x86_model_id[64];

 int x86_cache_size;
 int x86_cache_alignment;
 int x86_power;
 unsigned long loops_per_jiffy;

 u16 x86_max_cores;
 u16 apicid;
 u16 initial_apicid;
 u16 x86_clflush_size;

 u16 booted_cores;

 u16 phys_proc_id;

 u16 cpu_core_id;

 u8 compute_unit_id;

 u16 cpu_index;
 u32 microcode;
} __attribute__((__aligned__((1 << (6)))));
extern struct cpuinfo_x86 boot_cpu_data;
extern struct cpuinfo_x86 new_cpu_data;

extern struct tss_struct doublefault_tss;
extern __u32 cpu_caps_cleared[10];
extern __u32 cpu_caps_set[10];


extern __attribute__((section(".data..percpu" "..shared_aligned"))) __typeof__(struct cpuinfo_x86) cpu_info __attribute__((__aligned__((1 << (6)))));






extern struct seq_operations cpuinfo_op;



extern void cpu_detect(struct cpuinfo_x86 *c);
extern void fpu_detect(struct cpuinfo_x86 *c);

extern void early_cpu_init(void);
extern void identify_boot_cpu(void);
extern void identify_secondary_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
void print_cpu_msr(struct cpuinfo_x86 *);
extern void init_scattered_cpuid_features(struct cpuinfo_x86 *c);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
extern void init_amd_cacheinfo(struct cpuinfo_x86 *c);

extern void detect_extended_topology(struct cpuinfo_x86 *c);
extern void detect_ht(struct cpuinfo_x86 *c);




static inline int have_cpuid_p(void)
{
 return 1;
}

static inline void native_cpuid(unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{

 asm ("cpuid"
     : "=a" (*eax),
       "=b" (*ebx),
       "=c" (*ecx),
       "=d" (*edx)
     : "0" (*eax), "2" (*ecx)
     : "memory");
}

static inline void load_cr3(pgd_t *pgdir)
{
 write_cr3(__phys_addr_nodebug((unsigned long)(pgdir)));
}
struct x86_hw_tss {
 u32 reserved1;
 u64 sp0;
 u64 sp1;
 u64 sp2;
 u64 reserved2;
 u64 ist[7];
 u32 reserved3;
 u32 reserved4;
 u16 reserved5;
 u16 io_bitmap_base;

} __attribute__((packed)) __attribute__((__aligned__((1 << (6)))));
struct tss_struct {



 struct x86_hw_tss x86_tss;







 unsigned long io_bitmap[((65536/8)/sizeof(long)) + 1];




 unsigned long stack[64];

} __attribute__((__aligned__((1 << (6)))));

extern __attribute__((section(".data..percpu" "..shared_aligned"))) __typeof__(struct tss_struct) init_tss __attribute__((__aligned__((1 << (6)))));




struct orig_ist {
 unsigned long ist[7];
};



struct i387_fsave_struct {
 u32 cwd;
 u32 swd;
 u32 twd;
 u32 fip;
 u32 fcs;
 u32 foo;
 u32 fos;


 u32 st_space[20];


 u32 status;
};

struct i387_fxsave_struct {
 u16 cwd;
 u16 swd;
 u16 twd;
 u16 fop;
 union {
  struct {
   u64 rip;
   u64 rdp;
  };
  struct {
   u32 fip;
   u32 fcs;
   u32 foo;
   u32 fos;
  };
 };
 u32 mxcsr;
 u32 mxcsr_mask;


 u32 st_space[32];


 u32 xmm_space[64];

 u32 padding[12];

 union {
  u32 padding1[12];
  u32 sw_reserved[12];
 };

} __attribute__((aligned(16)));

struct i387_soft_struct {
 u32 cwd;
 u32 swd;
 u32 twd;
 u32 fip;
 u32 fcs;
 u32 foo;
 u32 fos;

 u32 st_space[20];
 u8 ftop;
 u8 changed;
 u8 lookahead;
 u8 no_update;
 u8 rm;
 u8 alimit;
 struct math_emu_info *info;
 u32 entry_eip;
};

struct ymmh_struct {

 u32 ymmh_space[64];
};

struct xsave_hdr_struct {
 u64 xstate_bv;
 u64 reserved1[2];
 u64 reserved2[5];
} __attribute__((packed));

struct xsave_struct {
 struct i387_fxsave_struct i387;
 struct xsave_hdr_struct xsave_hdr;
 struct ymmh_struct ymmh;

} __attribute__ ((packed, aligned (64)));

union thread_xstate {
 struct i387_fsave_struct fsave;
 struct i387_fxsave_struct fxsave;
 struct i387_soft_struct soft;
 struct xsave_struct xsave;
};

struct fpu {
 unsigned int last_cpu;
 unsigned int has_fpu;
 union thread_xstate *state;
};


extern __attribute__((section(".data..percpu" ""))) __typeof__(struct orig_ist) orig_ist;

union irq_stack_union {
 char irq_stack[(((1UL) << 12) << 2)];





 struct {
  char gs_base[40];
  unsigned long stack_canary;
 };
};

extern __attribute__((section(".data..percpu" "..first"))) __typeof__(union irq_stack_union) irq_stack_union __attribute__((externally_visible));
extern typeof(irq_stack_union) init_per_cpu__irq_stack_union;

extern __attribute__((section(".data..percpu" ""))) __typeof__(char *) irq_stack_ptr;
extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned int) irq_count;
extern void ignore_sysret(void);
extern unsigned int xstate_size;
extern void free_thread_xstate(struct task_struct *);
extern struct kmem_cache *task_xstate_cachep;

struct perf_event;

struct thread_struct {

 struct desc_struct tls_array[3];
 unsigned long sp0;
 unsigned long sp;



 unsigned long usersp;
 unsigned short es;
 unsigned short ds;
 unsigned short fsindex;
 unsigned short gsindex;





 unsigned long fs;

 unsigned long gs;

 struct perf_event *ptrace_bps[4];

 unsigned long debugreg6;

 unsigned long ptrace_dr7;

 unsigned long cr2;
 unsigned long trap_nr;
 unsigned long error_code;

 struct fpu fpu;
 unsigned long *io_bitmap_ptr;
 unsigned long iopl;

 unsigned io_bitmap_max;
 unsigned char fpu_counter;
};




static inline void native_set_iopl_mask(unsigned mask)
{
}

static inline void
native_load_sp0(struct tss_struct *tss, struct thread_struct *thread)
{
 tss->x86_tss.sp0 = thread->sp0;







}

static inline void native_swapgs(void)
{

 asm ("swapgs" ::: "memory");

}
extern unsigned long mmu_cr4_features;
extern u32 *trampoline_cr4_features;

static inline void set_in_cr4(unsigned long mask)
{
 unsigned long cr4;

 mmu_cr4_features |= mask;
 if (trampoline_cr4_features)
  *trampoline_cr4_features = mmu_cr4_features;
 cr4 = read_cr4();
 cr4 |= mask;
 write_cr4(cr4);
}

static inline void clear_in_cr4(unsigned long mask)
{
 unsigned long cr4;

 mmu_cr4_features &= ~mask;
 if (trampoline_cr4_features)
  *trampoline_cr4_features = mmu_cr4_features;
 cr4 = read_cr4();
 cr4 &= ~mask;
 write_cr4(cr4);
}

typedef struct {
 unsigned long seg;
} mm_segment_t;



extern void release_thread(struct task_struct *);

unsigned long get_wchan(struct task_struct *p);






static inline void cpuid(unsigned int op,
    unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{
 *eax = op;
 *ecx = 0;
 __cpuid(eax, ebx, ecx, edx);
}


static inline void cpuid_count(unsigned int op, int count,
          unsigned int *eax, unsigned int *ebx,
          unsigned int *ecx, unsigned int *edx)
{
 *eax = op;
 *ecx = count;
 __cpuid(eax, ebx, ecx, edx);
}




static inline unsigned int cpuid_eax(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return eax;
}

static inline unsigned int cpuid_ebx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return ebx;
}

static inline unsigned int cpuid_ecx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return ecx;
}

static inline unsigned int cpuid_edx(unsigned int op)
{
 unsigned int eax, ebx, ecx, edx;

 cpuid(op, &eax, &ebx, &ecx, &edx);

 return edx;
}


static inline void rep_nop(void)
{
 asm ("rep; nop" ::: "memory");
}

static inline void cpu_relax(void)
{
 rep_nop();
}


static inline void sync_core(void)
{
 int tmp;
 asm ("cpuid"
       : "=a" (tmp)
       : "0" (1)
       : "ebx", "ecx", "edx", "memory");

}

static inline void __monitor( void *eax, unsigned long ecx,
        unsigned long edx)
{

 asm (".byte 0x0f, 0x01, 0xc8;"
       :: "a" (eax), "c" (ecx), "d"(edx));
}

static inline void __mwait(unsigned long eax, unsigned long ecx)
{

 asm (".byte 0x0f, 0x01, 0xc9;"
       :: "a" (eax), "c" (ecx));
}

static inline void __sti_mwait(unsigned long eax, unsigned long ecx)
{
 do { } while (0);

 asm ("sti; .byte 0x0f, 0x01, 0xc9;"
       :: "a" (eax), "c" (ecx));
}

extern void select_idle_routine( struct cpuinfo_x86 *c);
extern void init_amd_e400_c1e_mask(void);

extern unsigned long boot_option_idle_override;
extern bool amd_e400_c1e_detected;

enum idle_boot_override {IDLE_NO_OVERRIDE=0, IDLE_HALT, IDLE_NOMWAIT,
    IDLE_POLL};

extern void enable_sep_cpu(void);
extern int sysenter_setup(void);

extern void early_trap_init(void);
void early_trap_pf_init(void);


extern struct desc_ptr early_gdt_descr;

extern void cpu_set_gdt(int);
extern void switch_to_new_gdt(int);
extern void load_percpu_segment(int);
extern void cpu_init(void);

static inline unsigned long get_debugctlmsr(void)
{
 unsigned long debugctlmsr = 0;





 do { int _err; debugctlmsr = paravirt_read_msr(0x000001d9, &_err); } while (0);

 return debugctlmsr;
}

static inline void update_debugctlmsr(unsigned long debugctlmsr)
{




 do { paravirt_write_msr(0x000001d9, (u32)((u64)(debugctlmsr)), ((u64)(debugctlmsr))>>32); } while (0);
}

extern void set_task_blockstep(struct task_struct *task, bool on);





extern unsigned int machine_id;
extern unsigned int machine_submodel_id;
extern unsigned int BIOS_revision;


extern int bootloader_type;
extern int bootloader_version;

extern char ignore_fpu_irq;
static inline void prefetch( void *x)
{
 asm ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(0*32+25)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" "prefetchnta (%1)" "\n" "664""1" ":\n\t" ".popsection" : : "i" (0), "r" (x))


             ;
}






static inline void prefetchw( void *x)
{
 asm ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(1*32+31)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" "prefetchw (%1)" "\n" "664""1" ":\n\t" ".popsection" : : "i" (0), "r" (x))


             ;
}

static inline void spin_lock_prefetch( void *x)
{
 prefetchw(x);
}
extern unsigned long KSTK_ESP(struct task_struct *task);




extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned long) old_rsp;



extern void start_thread(struct pt_regs *regs, unsigned long new_ip,
            unsigned long new_sp);
extern int get_tsc_mode(unsigned long adr);
extern int set_tsc_mode(unsigned int val);

extern u16 amd_get_nb_id(int cpu);

static inline uint32_t hypervisor_cpuid_base( char *sig, uint32_t leaves)
{
 uint32_t base, eax, signature[3];

 for (base = 0x40000000; base < 0x40010000; base += 0x100) {
  cpuid(base, &eax, &signature[0], &signature[1], &signature[2]);

  if (!memcmp(sig, signature, 12) &&
      (leaves == 0 || ((eax - base) >= leaves)))
   return base;
 }

 return 0;
}

extern unsigned long arch_align_stack(unsigned long sp);
extern void free_init_pages(char *what, unsigned long begin, unsigned long end);

void default_idle(void);

bool xen_set_default_idle(void);




void stop_this_cpu(void *dummy);
void df_debug(struct pt_regs *regs, long error_code);










extern void __xchg_wrong_size(void)
 __attribute__((error("Bad argument size for xchg")));
extern void __cmpxchg_wrong_size(void)
 __attribute__((error("Bad argument size for cmpxchg")));
extern void __xadd_wrong_size(void)
 __attribute__((error("Bad argument size for xadd")));
extern void __add_wrong_size(void)
 __attribute__((error("Bad argument size for add")));



static inline void set_64bit( u64 *ptr, u64 val)
{
 *ptr = val;
}
static inline int atomic_read( atomic_t *v)
{



        return v->counter;

}
static inline int atomic_sub_return(int i, atomic_t *v)
{
 return ((v)->counter + (-i));
}




static inline int atomic_cmpxchg(atomic_t *v, int old, int _new)
{



        int counter = *(typeof(&v->counter))g_map(&v->counter, sizeof(*(&v->counter)));
 return ({ __typeof__(*((&counter))) __ret; __typeof__(*((&counter))) __old = ((old)); __typeof__(*((&counter))) __new = ((_new)); switch ((sizeof(*(&counter)))) { case 1: { u8 *__ptr = ( u8 *)((&counter)); asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgb %2,%1" : "=a" (__ret), "+m" (*__ptr) : "q" (__new), "0" (__old) : "memory"); break; } case 2: { u16 *__ptr = ( u16 *)((&counter)); asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgw %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 4: { u32 *__ptr = ( u32 *)((&counter)); asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgl %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 8: { u64 *__ptr = ( u64 *)((&counter)); asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgq %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } default: __cmpxchg_wrong_size(); } __ret; });

}

static inline int atomic_xchg(atomic_t *v, int _new)
{
 return ({ __typeof__ (*((&v->counter))) __ret = ((_new)); switch (sizeof(*((&v->counter)))) { case 1: asm ("" "xchg" "b %b0, %1\n" : "+q" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 2: asm ("" "xchg" "w %w0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 4: asm ("" "xchg" "l %0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 8: asm ("" "xchg" "q %q0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; default: __xchg_wrong_size(); } __ret; });
}
static inline int __atomic_add_unless(atomic_t *v, int a, int u)
{
 int c, old;
 c = atomic_read(v);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = atomic_cmpxchg((v), c, c + (a));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c;
}
static inline short int atomic_inc_short(short int *v)
{
 asm(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "addw $1, %0" : "+m" (*v));
 return *v;
}
static inline void atomic_or_long(unsigned long *v1, unsigned long v2)
{
 asm(".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "orq %1, %0" : "+m" (*v1) : "r" (v2));
}
static inline long atomic64_read( atomic64_t *v)
{



 return v->counter;

}
static inline void atomic64_set(atomic64_t *v, long i)
{
 v->counter = i;
}
static inline void atomic64_add(long i, atomic64_t *v)
{
 asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "addq %1,%0"
       : "=m" (v->counter)
       : "er" (i), "m" (v->counter));
}
static inline void atomic64_sub(long i, atomic64_t *v)
{
 asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "subq %1,%0"
       : "=m" (v->counter)
       : "er" (i), "m" (v->counter));
}
static inline int atomic64_sub_and_test(long i, atomic64_t *v)
{
 do { char c; asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "subq" " %2, " "%0" "; set" "e" " %1" : "+m" (v->counter), "=qm" (c) : "er" (i) : "memory"); return c != 0; } while (0);
}







static inline void atomic64_inc(atomic64_t *v)
{
 asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "incq %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}







static inline void atomic64_dec(atomic64_t *v)
{
 asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "decq %0"
       : "=m" (v->counter)
       : "m" (v->counter));
}
static inline int atomic64_dec_and_test(atomic64_t *v)
{
 do { char c; asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "decq" " " "%0" "; set" "e" " %1" : "+m" (v->counter), "=qm" (c) : : "memory"); return c != 0; } while (0);
}
static inline int atomic64_inc_and_test(atomic64_t *v)
{
 do { char c; asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "incq" " " "%0" "; set" "e" " %1" : "+m" (v->counter), "=qm" (c) : : "memory"); return c != 0; } while (0);
}
static inline int atomic64_add_negative(long i, atomic64_t *v)
{
 do { char c; asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "addq" " %2, " "%0" "; set" "s" " %1" : "+m" (v->counter), "=qm" (c) : "er" (i) : "memory"); return c != 0; } while (0);
}
static inline long atomic64_add_return(long i, atomic64_t *v)
{
 return i + ({ __typeof__ (*(((&v->counter)))) __ret = (((i))); switch (sizeof(*(((&v->counter))))) { case 1: asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "b %b0, %1\n" : "+q" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; case 2: asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "w %w0, %1\n" : "+r" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; case 4: asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "l %0, %1\n" : "+r" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; case 8: asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "q %q0, %1\n" : "+r" (__ret), "+m" (*(((&v->counter)))) : : "memory", "cc"); break; default: __xadd_wrong_size(); } __ret; });
}

static inline long atomic64_sub_return(long i, atomic64_t *v)
{
 return atomic64_add_return(-i, v);
}




static inline long atomic64_cmpxchg(atomic64_t *v, long old, long _new)
{
 return ({ __typeof__(*((&v->counter))) __ret; __typeof__(*((&v->counter))) __old = ((old)); __typeof__(*((&v->counter))) __new = ((_new)); switch ((sizeof(*(&v->counter)))) { case 1: { u8 *__ptr = ( u8 *)((&v->counter)); asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgb %2,%1" : "=a" (__ret), "+m" (*__ptr) : "q" (__new), "0" (__old) : "memory"); break; } case 2: { u16 *__ptr = ( u16 *)((&v->counter)); asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgw %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 4: { u32 *__ptr = ( u32 *)((&v->counter)); asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgl %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } case 8: { u64 *__ptr = ( u64 *)((&v->counter)); asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "cmpxchgq %2,%1" : "=a" (__ret), "+m" (*__ptr) : "r" (__new), "0" (__old) : "memory"); break; } default: __cmpxchg_wrong_size(); } __ret; });
}

static inline long atomic64_xchg(atomic64_t *v, long _new)
{
 return ({ __typeof__ (*((&v->counter))) __ret = ((_new)); switch (sizeof(*((&v->counter)))) { case 1: asm ("" "xchg" "b %b0, %1\n" : "+q" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 2: asm ("" "xchg" "w %w0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 4: asm ("" "xchg" "l %0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; case 8: asm ("" "xchg" "q %q0, %1\n" : "+r" (__ret), "+m" (*((&v->counter))) : : "memory", "cc"); break; default: __xchg_wrong_size(); } __ret; });
}
static inline int atomic64_add_unless(atomic64_t *v, long a, long u)
{
 long c, old;
 c = atomic64_read(v);
 for (;;) {
  if (__builtin_expect(!!(c == (u)), 0))
   break;
  old = atomic64_cmpxchg((v), c, c + (a));
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return c != (u);
}
static inline long atomic64_dec_if_positive(atomic64_t *v)
{
 long c, old, dec;
 c = atomic64_read(v);
 for (;;) {
  dec = c - 1;
  if (__builtin_expect(!!(dec < 0), 0))
   break;
  old = atomic64_cmpxchg((v), c, dec);
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return dec;
}
static inline int atomic_add_unless(atomic_t *v, int a, int u)
{
 return __atomic_add_unless(v, a, u) != u;
}
static inline int atomic_inc_not_zero_hint(atomic_t *v, int hint)
{
 int val, c = hint;


 if (!hint)
  return atomic_add_unless((v), 1, 0);

 do {
  val = atomic_cmpxchg(v, c, c + 1);
  if (val == c)
   return 1;
  c = val;
 } while (c);

 return 0;
}



static inline int atomic_inc_unless_negative(atomic_t *p)
{
 int v, v1;
 for (v = 0; v >= 0; v = v1) {
  v1 = atomic_cmpxchg(p, v, v + 1);
  if (__builtin_expect(!!(v1 == v), 1))
   return 1;
 }
 return 0;
}



static inline int atomic_dec_unless_positive(atomic_t *p)
{
 int v, v1;
 for (v = 0; v <= 0; v = v1) {
  v1 = atomic_cmpxchg(p, v, v - 1);
  if (__builtin_expect(!!(v1 == v), 1))
   return 1;
 }
 return 0;
}
static inline int atomic_dec_if_positive(atomic_t *v)
{
 int c, old, dec;
 c = atomic_read(v);
 for (;;) {
  dec = c - 1;
  if (__builtin_expect(!!(dec < 0), 0))
   break;
  old = atomic_cmpxchg((v), c, dec);
  if (__builtin_expect(!!(old == c), 1))
   break;
  c = old;
 }
 return dec;
}



static inline void atomic_or(int i, atomic_t *v)
{
 int old;
 int _new;

 do {
  old = atomic_read(v);
  _new = old | i;
 } while (atomic_cmpxchg(v, old, _new) != old);
}


typedef atomic64_t atomic_long_t;



static inline long atomic_long_read(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_read(v);
}

static inline void atomic_long_set(atomic_long_t *l, long i)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_set(v, i);
}

static inline void atomic_long_inc(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_inc(v);
}

static inline void atomic_long_dec(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_dec(v);
}

static inline void atomic_long_add(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_add(i, v);
}

static inline void atomic_long_sub(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 atomic64_sub(i, v);
}

static inline int atomic_long_sub_and_test(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_sub_and_test(i, v);
}

static inline int atomic_long_dec_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_dec_and_test(v);
}

static inline int atomic_long_inc_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_inc_and_test(v);
}

static inline int atomic_long_add_negative(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return atomic64_add_negative(i, v);
}

static inline long atomic_long_add_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_return(i, v);
}

static inline long atomic_long_sub_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_sub_return(i, v);
}

static inline long atomic_long_inc_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_add_return(1, (v)));
}

static inline long atomic_long_dec_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_sub_return(1, (v)));
}

static inline long atomic_long_add_unless(atomic_long_t *l, long a, long u)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_add_unless(v, a, u);
}

struct thread_info {
 struct task_struct *task;
 struct exec_domain *exec_domain;
 __u32 flags;
 __u32 status;
 __u32 cpu;
 int saved_preempt_count;
 mm_segment_t addr_limit;
 struct restart_block restart_block;
 void *sysenter_return;






 unsigned int sig_on_uaccess_error:1;
 unsigned int uaccess_err:1;
};
extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned long) kernel_stack;

static inline struct thread_info *current_thread_info(void)
{






}
static inline void set_restore_sigmask(void)
{
 struct thread_info *ti = current_thread_info();
 ti->status |= 0x0008;
 (!(__builtin_constant_p((2)) ? constant_test_bit((2), ((unsigned long *)&ti->flags)) : variable_test_bit((2), ((unsigned long *)&ti->flags))));
}
static inline void clear_restore_sigmask(void)
{
 current_thread_info()->status &= ~0x0008;
}
static inline bool test_restore_sigmask(void)
{
 return current_thread_info()->status & 0x0008;
}
static inline bool test_and_clear_restore_sigmask(void)
{
 struct thread_info *ti = current_thread_info();
 if (!(ti->status & 0x0008))
  return _false;
 ti->status &= ~0x0008;
 return _true;
}

static inline bool is_ia32_task(void)
{




 if (current_thread_info()->status & 0x0002)
  return _true;

 return _false;
}



extern void arch_task_cache_init(void);
extern int arch_dup_task_struct(struct task_struct *dst, struct task_struct *src);
extern void arch_release_task_struct(struct task_struct *tsk);
static inline void set_ti_thread_flag(struct thread_info *ti, int flag)
{
 set_bit(flag, (unsigned long *)&ti->flags);
}

static inline void clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline int test_and_set_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_set_bit(flag, (unsigned long *)&ti->flags);
}

static inline int test_and_clear_ti_thread_flag(struct thread_info *ti, int flag)
{
 return test_and_clear_bit(flag, (unsigned long *)&ti->flags);
}

static inline int test_ti_thread_flag(struct thread_info *ti, int flag)
{
 return (__builtin_constant_p((flag)) ? constant_test_bit((flag), ((unsigned long *)&ti->flags)) : variable_test_bit((flag), ((unsigned long *)&ti->flags)));
}
static inline void set_need_resched(void)
{
}

extern __attribute__((section(".data..percpu" ""))) __typeof__(int) __preempt_count;
static inline __attribute__((always_inline)) int preempt_count(void)
{
 return ({ typeof((__preempt_count)) pfo_ret__; switch (sizeof((__preempt_count))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"(__preempt_count)); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(__preempt_count)); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(__preempt_count)); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(__preempt_count)); break; default: __bad_percpu_size(); } pfo_ret__; }) & ~0x80000000;
}

static inline __attribute__((always_inline)) void preempt_count_set(int pc)
{
 do { typedef typeof((__preempt_count)) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = (pc); (void)pto_tmp__; } switch (sizeof((__preempt_count))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "qi" ((pto_T__)(pc))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "ri" ((pto_T__)(pc))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "ri" ((pto_T__)(pc))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "re" ((pto_T__)(pc))); break; default: __bad_percpu_size(); } } while (0);
}
static inline __attribute__((always_inline)) void set_preempt_need_resched(void)
{
 do { typedef typeof((__preempt_count)) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = (~0x80000000); (void)pto_tmp__; } switch (sizeof((__preempt_count))) { case 1: asm("and" "b %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "qi" ((pto_T__)(~0x80000000))); break; case 2: asm("and" "w %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "ri" ((pto_T__)(~0x80000000))); break; case 4: asm("and" "l %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "ri" ((pto_T__)(~0x80000000))); break; case 8: asm("and" "q %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "re" ((pto_T__)(~0x80000000))); break; default: __bad_percpu_size(); } } while (0);
}

static inline __attribute__((always_inline)) void clear_preempt_need_resched(void)
{
 do { typedef typeof((__preempt_count)) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = (0x80000000); (void)pto_tmp__; } switch (sizeof((__preempt_count))) { case 1: asm("or" "b %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "qi" ((pto_T__)(0x80000000))); break; case 2: asm("or" "w %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "ri" ((pto_T__)(0x80000000))); break; case 4: asm("or" "l %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "ri" ((pto_T__)(0x80000000))); break; case 8: asm("or" "q %1,""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "re" ((pto_T__)(0x80000000))); break; default: __bad_percpu_size(); } } while (0);
}

static inline __attribute__((always_inline)) bool test_preempt_need_resched(void)
{
 return !(({ typeof((__preempt_count)) pfo_ret__; switch (sizeof((__preempt_count))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"(__preempt_count)); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(__preempt_count)); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(__preempt_count)); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(__preempt_count)); break; default: __bad_percpu_size(); } pfo_ret__; }) & 0x80000000);
}





static inline __attribute__((always_inline)) void __preempt_count_add(int val)
{
 do { typedef typeof((__preempt_count)) pao_T__; int pao_ID__ = (__builtin_constant_p(val) && ((val) == 1 || (val) == -1)) ? (int)(val) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = (val); (void)pao_tmp__; } switch (sizeof((__preempt_count))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "qi" ((pao_T__)(val))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "ri" ((pao_T__)(val))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "ri" ((pao_T__)(val))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "re" ((pao_T__)(val))); break; default: __bad_percpu_size(); } } while (0);
}

static inline __attribute__((always_inline)) void __preempt_count_sub(int val)
{
 do { typedef typeof((__preempt_count)) pao_T__; int pao_ID__ = (__builtin_constant_p(-val) && ((-val) == 1 || (-val) == -1)) ? (int)(-val) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = (-val); (void)pao_tmp__; } switch (sizeof((__preempt_count))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "qi" ((pao_T__)(-val))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "ri" ((pao_T__)(-val))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "ri" ((pao_T__)(-val))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((__preempt_count)) : "re" ((pao_T__)(-val))); break; default: __bad_percpu_size(); } } while (0);
}






static inline __attribute__((always_inline)) bool __preempt_count_dec_and_test(void)
{
 do { char c; asm ("decl" " " "%%""gs"":" "%P" "0" "; set" "e" " %1" : "+m" (__preempt_count), "=qm" (c) : : "memory"); return c != 0; } while (0);
}




static inline __attribute__((always_inline)) bool should_resched(void)
{
 return __builtin_expect(!!(!({ typeof((__preempt_count)) pfo_ret__; switch (sizeof((__preempt_count))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"(__preempt_count)); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(__preempt_count)); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(__preempt_count)); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"(__preempt_count)); break; default: __bad_percpu_size(); } pfo_ret__; })), 0);
}
struct preempt_notifier;
struct preempt_ops {
 void (*sched_in)(struct preempt_notifier *notifier, int cpu);
 void (*sched_out)(struct preempt_notifier *notifier,
     struct task_struct *next);
};
struct preempt_notifier {
 struct hlist_node link;
 struct preempt_ops *ops;
};

void preempt_notifier_register(struct preempt_notifier *notifier);
void preempt_notifier_unregister(struct preempt_notifier *notifier);

static inline void preempt_notifier_init(struct preempt_notifier *notifier,
         struct preempt_ops *ops)
{
 INIT_HLIST_NODE(&notifier->link);
 notifier->ops = ops;
}









extern void local_bh_disable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);
static inline __attribute__((always_inline)) void rdtsc_barrier(void)
{
 asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(3*32+17)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" "mfence" "\n" "664""1" ":\n\t" ".popsection" : : : "memory");
 asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(3*32+18)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" "lfence" "\n" "664""1" ":\n\t" ".popsection" : : : "memory");
}
struct task_struct;
struct lockdep_map;


extern int prove_locking;
extern int lock_stat;
static inline void lockdep_off(void)
{
}

static inline void lockdep_on(void)
{
}
struct lock_class_key { };
static inline void print_irqtrace_events(struct task_struct *curr)
{
}

typedef struct raw_spinlock {
 arch_spinlock_t raw_lock;
} raw_spinlock_t;
typedef struct spinlock {
 union {
  struct raw_spinlock rlock;
 };
} spinlock_t;
typedef struct {
 arch_rwlock_t raw_lock;
} rwlock_t;








extern bool static_key_initialized;
enum jump_label_type {
 JUMP_LABEL_DISABLE = 0,
 JUMP_LABEL_ENABLE,
};

struct module;
struct static_key {
 atomic_t enabled;
};

static inline __attribute__((always_inline)) void jump_label_init(void)
{
 static_key_initialized = _true;
}

static inline __attribute__((always_inline)) bool static_key_false(struct static_key *key)
{
 if (__builtin_expect(!!(atomic_read(&key->enabled) > 0), 0))
  return _true;
 return _false;
}

static inline __attribute__((always_inline)) bool static_key_true(struct static_key *key)
{
 if (__builtin_expect(!!(atomic_read(&key->enabled) > 0), 1))
  return _true;
 return _false;
}

static inline void static_key_slow_inc(struct static_key *key)
{
 (!static_key_initialized);
 ;
}

static inline void static_key_slow_dec(struct static_key *key)
{
 (!static_key_initialized);
 ;
}

static inline int jump_label_text_reserved(void *start, void *end)
{
 return 0;
}

static inline void jump_label_lock(void) {}
static inline void jump_label_unlock(void) {}

static inline int jump_label_apply_nops(struct module *mod)
{
 return 0;
}
static inline bool static_key_enabled(struct static_key *key)
{
 return (atomic_read(&key->enabled) > 0);
}
extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);
extern void cpu_idle(void);

typedef void (*smp_call_func_t)(void *info);
struct call_single_data {
 struct list_head list;
 smp_call_func_t func;
 void *info;
 u16 flags;
};


extern unsigned int total_cpus;

int smp_call_function_single(int cpuid, smp_call_func_t func, void *info,
        int wait);




int on_each_cpu(smp_call_func_t func, void *info, int wait);





void on_each_cpu_mask( struct cpumask *mask, smp_call_func_t func,
  void *info, bool wait);






void on_each_cpu_cond(bool (*cond_func)(int cpu, void *info),
  smp_call_func_t func, void *info, bool wait,
  gfp_t gfp_flags);

void __smp_call_function_single(int cpuid, struct call_single_data *data,
    int wait);












struct mpf_intel {
 char signature[4];
 unsigned int physptr;
 unsigned char length;
 unsigned char specification;
 unsigned char checksum;
 unsigned char feature1;
 unsigned char feature2;
 unsigned char feature3;
 unsigned char feature4;
 unsigned char feature5;
};



struct mpc_table {
 char signature[4];
 unsigned short length;
 char spec;
 char checksum;
 char oem[8];
 char productid[12];
 unsigned int oemptr;
 unsigned short oemsize;
 unsigned short oemcount;
 unsigned int lapic;
 unsigned int reserved;
};
struct mpc_cpu {
 unsigned char type;
 unsigned char apicid;
 unsigned char apicver;
 unsigned char cpuflag;
 unsigned int cpufeature;
 unsigned int featureflag;
 unsigned int reserved[2];
};

struct mpc_bus {
 unsigned char type;
 unsigned char busid;
 unsigned char bustype[6];
};
struct mpc_ioapic {
 unsigned char type;
 unsigned char apicid;
 unsigned char apicver;
 unsigned char flags;
 unsigned int apicaddr;
};

struct mpc_intsrc {
 unsigned char type;
 unsigned char irqtype;
 unsigned short irqflag;
 unsigned char srcbus;
 unsigned char srcbusirq;
 unsigned char dstapic;
 unsigned char dstirq;
};

enum mp_irq_source_types {
 mp_INT = 0,
 mp_NMI = 1,
 mp_SMI = 2,
 mp_ExtINT = 3
};







struct mpc_lintsrc {
 unsigned char type;
 unsigned char irqtype;
 unsigned short irqflag;
 unsigned char srcbusid;
 unsigned char srcbusirq;
 unsigned char destapic;
 unsigned char destapiclint;
};



struct mpc_oemtable {
 char signature[4];
 unsigned short length;
 char rev;
 char checksum;
 char mpc[8];
};
enum mp_bustype {
 MP_BUS_ISA = 1,
 MP_BUS_EISA,
 MP_BUS_PCI,
};







struct screen_info {
 __u8 orig_x;
 __u8 orig_y;
 __u16 ext_mem_k;
 __u16 orig_video_page;
 __u8 orig_video_mode;
 __u8 orig_video_cols;
 __u8 flags;
 __u8 unused2;
 __u16 orig_video_ega_bx;
 __u16 unused3;
 __u8 orig_video_lines;
 __u8 orig_video_isVGA;
 __u16 orig_video_points;


 __u16 lfb_width;
 __u16 lfb_height;
 __u16 lfb_depth;
 __u32 lfb_base;
 __u32 lfb_size;
 __u16 cl_magic, cl_offset;
 __u16 lfb_linelength;
 __u8 red_size;
 __u8 red_pos;
 __u8 green_size;
 __u8 green_pos;
 __u8 blue_size;
 __u8 blue_pos;
 __u8 rsvd_size;
 __u8 rsvd_pos;
 __u16 vesapm_seg;
 __u16 vesapm_off;
 __u16 pages;
 __u16 vesa_attributes;
 __u32 capabilities;
 __u8 _reserved[6];
} __attribute__((packed));

extern struct screen_info screen_info;
typedef unsigned short apm_event_t;
typedef unsigned short apm_eventinfo_t;

struct apm_bios_info {
 __u16 version;
 __u16 cseg;
 __u32 offset;
 __u16 cseg_16;
 __u16 dseg;
 __u16 flags;
 __u16 cseg_len;
 __u16 cseg_16_len;
 __u16 dseg_len;
};
struct apm_info {
 struct apm_bios_info bios;
 unsigned short connection_version;
 int get_power_status_broken;
 int get_power_status_swabinminutes;
 int allow_ints;
 int forbid_idle;
 int realmode_power_off;
 int disabled;
};
extern struct apm_info apm_info;
struct edd_device_params {
 __u16 length;
 __u16 info_flags;
 __u32 num_default_cylinders;
 __u32 num_default_heads;
 __u32 sectors_per_track;
 __u64 number_of_sectors;
 __u16 bytes_per_sector;
 __u32 dpte_ptr;
 __u16 key;
 __u8 device_path_info_length;
 __u8 reserved2;
 __u16 reserved3;
 __u8 host_bus_type[4];
 __u8 interface_type[8];
 union {
  struct {
   __u16 base_address;
   __u16 reserved1;
   __u32 reserved2;
  } __attribute__ ((packed)) isa;
  struct {
   __u8 bus;
   __u8 slot;
   __u8 function;
   __u8 channel;
   __u32 reserved;
  } __attribute__ ((packed)) pci;

  struct {
   __u64 reserved;
  } __attribute__ ((packed)) ibnd;
  struct {
   __u64 reserved;
  } __attribute__ ((packed)) xprs;
  struct {
   __u64 reserved;
  } __attribute__ ((packed)) htpt;
  struct {
   __u64 reserved;
  } __attribute__ ((packed)) unknown;
 } interface_path;
 union {
  struct {
   __u8 device;
   __u8 reserved1;
   __u16 reserved2;
   __u32 reserved3;
   __u64 reserved4;
  } __attribute__ ((packed)) ata;
  struct {
   __u8 device;
   __u8 lun;
   __u8 reserved1;
   __u8 reserved2;
   __u32 reserved3;
   __u64 reserved4;
  } __attribute__ ((packed)) atapi;
  struct {
   __u16 id;
   __u64 lun;
   __u16 reserved1;
   __u32 reserved2;
  } __attribute__ ((packed)) scsi;
  struct {
   __u64 serial_number;
   __u64 reserved;
  } __attribute__ ((packed)) usb;
  struct {
   __u64 eui;
   __u64 reserved;
  } __attribute__ ((packed)) i1394;
  struct {
   __u64 wwid;
   __u64 lun;
  } __attribute__ ((packed)) fibre;
  struct {
   __u64 identity_tag;
   __u64 reserved;
  } __attribute__ ((packed)) i2o;
  struct {
   __u32 array_number;
   __u32 reserved1;
   __u64 reserved2;
  } __attribute__ ((packed)) raid;
  struct {
   __u8 device;
   __u8 reserved1;
   __u16 reserved2;
   __u32 reserved3;
   __u64 reserved4;
  } __attribute__ ((packed)) sata;
  struct {
   __u64 reserved1;
   __u64 reserved2;
  } __attribute__ ((packed)) unknown;
 } device_path;
 __u8 reserved4;
 __u8 checksum;
} __attribute__ ((packed));

struct edd_info {
 __u8 device;
 __u8 version;
 __u16 interface_support;
 __u16 legacy_max_cylinder;
 __u8 legacy_max_head;
 __u8 legacy_sectors_per_track;
 struct edd_device_params params;
} __attribute__ ((packed));

struct edd {
 unsigned int mbr_signature[16];
 struct edd_info edd_info[6];
 unsigned char mbr_signature_nr;
 unsigned char edd_info_nr;
};


extern struct edd edd;








struct e820entry {
 __u64 addr;
 __u64 size;
 __u32 type;
} __attribute__((packed));

struct e820map {
 __u32 nr_map;
 struct e820entry map[(128 + 3 * (1 << 6))];
};


extern struct e820map e820;
extern struct e820map e820_saved;

extern unsigned long pci_mem_start;
extern int e820_any_mapped(u64 start, u64 end, unsigned type);
extern int e820_all_mapped(u64 start, u64 end, unsigned type);
extern void e820_add_region(u64 start, u64 size, int type);
extern void e820_print_map(char *who);
extern int
sanitize_e820_map(struct e820entry *biosmap, int max_nr_map, u32 *pnr_map);
extern u64 e820_update_range(u64 start, u64 size, unsigned old_type,
          unsigned new_type);
extern u64 e820_remove_range(u64 start, u64 size, unsigned old_type,
        int checktype);
extern void update_e820(void);
extern void e820_setup_gap(void);
extern int e820_search_gap(unsigned long *gapstart, unsigned long *gapsize,
   unsigned long start_addr, unsigned long long end_addr);
struct setup_data;
extern void parse_e820_ext(u64 phys_addr, u32 data_len);



extern void e820_mark_nosave_regions(unsigned long limit_pfn);







extern void early_memtest(unsigned long start, unsigned long end);






extern unsigned long e820_end_of_ram_pfn(void);
extern unsigned long e820_end_of_low_ram_pfn(void);
extern u64 early_reserve_e820(u64 sizet, u64 align);

void memblock_x86_fill(void);
void memblock_find_dma_reserve(void);

extern void finish_e820_parsing(void);
extern void e820_reserve_resources(void);
extern void e820_reserve_resources_late(void);
extern void setup_memory_map(void);
extern char *default_machine_specific_memory_setup(void);





static inline bool is_ISA_range(u64 s, u64 e)
{
 return s >= 0xa0000 && e <= 0x100000;
}


struct resource {
 resource_size_t start;
 resource_size_t end;
 char *name;
 unsigned long flags;
 struct resource *parent, *sibling, *child;
};
extern struct resource ioport_resource;
extern struct resource iomem_resource;

extern struct resource *request_resource_conflict(struct resource *root, struct resource *_new);
extern int request_resource(struct resource *root, struct resource *_new);
extern int release_resource(struct resource *_new);
void release_child_resources(struct resource *_new);
extern void reserve_region_with_split(struct resource *root,
        resource_size_t start, resource_size_t end,
        char *name);
extern struct resource *insert_resource_conflict(struct resource *parent, struct resource *_new);
extern int insert_resource(struct resource *parent, struct resource *_new);
extern void insert_resource_expand_to_fit(struct resource *root, struct resource *_new);
extern void arch_remove_reservations(struct resource *avail);
extern int allocate_resource(struct resource *root, struct resource *_new,
        resource_size_t size, resource_size_t min,
        resource_size_t max, resource_size_t align,
        resource_size_t (*alignf)(void *,
             struct resource *,
             resource_size_t,
             resource_size_t),
        void *alignf_data);
struct resource *lookup_resource(struct resource *root, resource_size_t start);
int adjust_resource(struct resource *res, resource_size_t start,
      resource_size_t size);
resource_size_t resource_alignment(struct resource *res);
static inline resource_size_t resource_size( struct resource *res)
{
 return res->end - res->start + 1;
}
static inline unsigned long resource_type( struct resource *res)
{
 return res->flags & 0x00001f00;
}
extern struct resource * __request_region(struct resource *,
     resource_size_t start,
     resource_size_t n,
     char *name, int flags);






extern int __check_region(struct resource *, resource_size_t, resource_size_t);
extern void __release_region(struct resource *, resource_size_t,
    resource_size_t);

extern int release_mem_region_adjustable(struct resource *, resource_size_t,
    resource_size_t);


static inline int check_region(resource_size_t s,
      resource_size_t n)
{
 return __check_region(&ioport_resource, s, n);
}


struct device;





extern struct resource * __devm_request_region(struct device *dev,
    struct resource *parent, resource_size_t start,
    resource_size_t n, char *name);






extern void __devm_release_region(struct device *dev, struct resource *parent,
      resource_size_t start, resource_size_t n);
extern int iomem_map_sanity_check(resource_size_t addr, unsigned long size);
extern int iomem_is_exclusive(u64 addr);

extern int
walk_system_ram_range(unsigned long start_pfn, unsigned long nr_pages,
  void *arg, int (*func)(unsigned long, unsigned long, void *));


static inline bool resource_overlaps(struct resource *r1, struct resource *r2)
{
       return (r1->start <= r2->end && r1->end >= r2->start);
}
struct ist_info {
 __u32 signature;
 __u32 command;
 __u32 event;
 __u32 perf_level;
};


extern struct ist_info ist_info;






struct edid_info {
 unsigned char dummy[128];
};


extern struct edid_info edid_info;


struct setup_data {
 __u64 next;
 __u32 type;
 __u32 len;
 __u8 data[0];
};

struct setup_header {
 __u8 setup_sects;
 __u16 root_flags;
 __u32 syssize;
 __u16 ram_size;
 __u16 vid_mode;
 __u16 root_dev;
 __u16 boot_flag;
 __u16 jump;
 __u32 header;
 __u16 version;
 __u32 realmode_swtch;
 __u16 start_sys;
 __u16 kernel_version;
 __u8 type_of_loader;
 __u8 loadflags;
 __u16 setup_move_size;
 __u32 code32_start;
 __u32 ramdisk_image;
 __u32 ramdisk_size;
 __u32 bootsect_kludge;
 __u16 heap_end_ptr;
 __u8 ext_loader_ver;
 __u8 ext_loader_type;
 __u32 cmd_line_ptr;
 __u32 initrd_addr_max;
 __u32 kernel_alignment;
 __u8 relocatable_kernel;
 __u8 min_alignment;
 __u16 xloadflags;
 __u32 cmdline_size;
 __u32 hardware_subarch;
 __u64 hardware_subarch_data;
 __u32 payload_offset;
 __u32 payload_length;
 __u64 setup_data;
 __u64 pref_address;
 __u32 init_size;
 __u32 handover_offset;
} __attribute__((packed));

struct sys_desc_table {
 __u16 length;
 __u8 table[14];
};


struct olpc_ofw_header {
 __u32 ofw_magic;
 __u32 ofw_version;
 __u32 cif_handler;
 __u32 irq_desc_table;
} __attribute__((packed));

struct efi_info {
 __u32 efi_loader_signature;
 __u32 efi_systab;
 __u32 efi_memdesc_size;
 __u32 efi_memdesc_version;
 __u32 efi_memmap;
 __u32 efi_memmap_size;
 __u32 efi_systab_hi;
 __u32 efi_memmap_hi;
};


struct boot_params {
 struct screen_info screen_info;
 struct apm_bios_info apm_bios_info;
 __u8 _pad2[4];
 __u64 tboot_addr;
 struct ist_info ist_info;
 __u8 _pad3[16];
 __u8 hd0_info[16];
 __u8 hd1_info[16];
 struct sys_desc_table sys_desc_table;
 struct olpc_ofw_header olpc_ofw_header;
 __u32 ext_ramdisk_image;
 __u32 ext_ramdisk_size;
 __u32 ext_cmd_line_ptr;
 __u8 _pad4[116];
 struct edid_info edid_info;
 struct efi_info efi_info;
 __u32 alt_mem_k;
 __u32 scratch;
 __u8 e820_entries;
 __u8 eddbuf_entries;
 __u8 edd_mbr_sig_buf_entries;
 __u8 kbd_status;
 __u8 _pad5[3];
 __u8 sentinel;
 __u8 _pad6[1];
 struct setup_header hdr;
 __u8 _pad7[0x290-0x1f1-sizeof(struct setup_header)];
 __u32 edd_mbr_sig_buffer[16];
 struct e820entry e820_map[128];
 __u8 _pad8[48];
 struct edd_info eddbuf[6];
 __u8 _pad9[276];
} __attribute__((packed));

enum {
 X86_SUBARCH_PC = 0,
 X86_SUBARCH_LGUEST,
 X86_SUBARCH_XEN,
 X86_SUBARCH_INTEL_MID,
 X86_SUBARCH_CE4100,
 X86_NR_SUBARCHS,
};

struct mpc_bus;
struct mpc_cpu;
struct mpc_table;
struct cpuinfo_x86;
struct x86_init_mpparse {
 void (*mpc_record)(unsigned int mode);
 void (*setup_ioapic_ids)(void);
 int (*mpc_apic_id)(struct mpc_cpu *m);
 void (*smp_read_mpc_oem)(struct mpc_table *mpc);
 void (*mpc_oem_pci_bus)(struct mpc_bus *m);
 void (*mpc_oem_bus_info)(struct mpc_bus *m, char *name);
 void (*find_smp_config)(void);
 void (*get_smp_config)(unsigned int early);
};
struct x86_init_resources {
 void (*probe_roms)(void);
 void (*reserve_resources)(void);
 char *(*memory_setup)(void);
};
struct x86_init_irqs {
 void (*pre_vector_init)(void);
 void (*intr_init)(void);
 void (*trap_init)(void);
};






struct x86_init_oem {
 void (*arch_setup)(void);
 void (*banner)(void);
};
struct x86_init_paging {
 void (*pagetable_init)(void);
};
struct x86_init_timers {
 void (*setup_percpu_clockev)(void);
 void (*tsc_pre_init)(void);
 void (*timer_init)(void);
 void (*wallclock_init)(void);
};





struct x86_init_iommu {
 int (*iommu_init)(void);
};
struct x86_init_pci {
 int (*arch_init)(void);
 int (*init)(void);
 void (*init_irq)(void);
 void (*fixup_irqs)(void);
};





struct x86_init_ops {
 struct x86_init_resources resources;
 struct x86_init_mpparse mpparse;
 struct x86_init_irqs irqs;
 struct x86_init_oem oem;
 struct x86_init_paging paging;
 struct x86_init_timers timers;
 struct x86_init_iommu iommu;
 struct x86_init_pci pci;
};






struct x86_cpuinit_ops {
 void (*setup_percpu_clockev)(void);
 void (*early_percpu_clock_init)(void);
 void (*fixup_cpu_id)(struct cpuinfo_x86 *c, int node);
};

struct timespec;
struct x86_platform_ops {
 unsigned long (*calibrate_tsc)(void);
 void (*get_wallclock)(struct timespec *ts);
 int (*set_wallclock)( struct timespec *ts);
 void (*iommu_shutdown)(void);
 bool (*is_untracked_pat_range)(u64 start, u64 end);
 void (*nmi_init)(void);
 unsigned char (*get_nmi_reason)(void);
 int (*i8042_detect)(void);
 void (*save_sched_clock_state)(void);
 void (*restore_sched_clock_state)(void);
 void (*apic_post_init)(void);
};

struct pci_dev;
struct msi_msg;
struct msi_desc;

struct x86_msi_ops {
 int (*setup_msi_irqs)(struct pci_dev *dev, int nvec, int type);
 void (*compose_msi_msg)(struct pci_dev *dev, unsigned int irq,
    unsigned int dest, struct msi_msg *msg,
          u8 hpet_id);
 void (*teardown_msi_irq)(unsigned int irq);
 void (*teardown_msi_irqs)(struct pci_dev *dev);
 void (*restore_msi_irqs)(struct pci_dev *dev, int irq);
 int (*setup_hpet_msi)(unsigned int irq, unsigned int id);
 u32 (*msi_mask_irq)(struct msi_desc *desc, u32 mask, u32 flag);
 u32 (*msix_mask_irq)(struct msi_desc *desc, u32 flag);
};

struct IO_APIC_route_entry;
struct io_apic_irq_attr;
struct irq_data;
struct cpumask;

struct x86_io_apic_ops {
 void (*init) (void);
 unsigned int (*read) (unsigned int apic, unsigned int reg);
 void (*write) (unsigned int apic, unsigned int reg, unsigned int value);
 void (*modify) (unsigned int apic, unsigned int reg, unsigned int value);
 void (*disable)(void);
 void (*print_entries)(unsigned int apic, unsigned int nr_entries);
 int (*set_affinity)(struct irq_data *data,
     struct cpumask *mask,
     bool force);
 int (*setup_entry)(int irq, struct IO_APIC_route_entry *entry,
           unsigned int destination, int vector,
           struct io_apic_irq_attr *attr);
 void (*eoi_ioapic_pin)(int apic, int pin, int vector);
};

extern struct x86_init_ops x86_init;
extern struct x86_cpuinit_ops x86_cpuinit;
extern struct x86_platform_ops x86_platform;
extern struct x86_msi_ops x86_msi;
extern struct x86_io_apic_ops x86_io_apic_ops;
extern void x86_init_noop(void);
extern void x86_init_uint_noop(unsigned int unused);
struct local_apic {

        struct { unsigned int __reserved[4]; } __reserved_01;

        struct { unsigned int __reserved[4]; } __reserved_02;

        struct {
  unsigned int __reserved_1 : 24,
   phys_apic_id : 4,
   __reserved_2 : 4;
  unsigned int __reserved[3];
 } id;

       
 struct {
  unsigned int version : 8,
   __reserved_1 : 8,
   max_lvt : 8,
   __reserved_2 : 8;
  unsigned int __reserved[3];
 } version;

        struct { unsigned int __reserved[4]; } __reserved_03;

        struct { unsigned int __reserved[4]; } __reserved_04;

        struct { unsigned int __reserved[4]; } __reserved_05;

        struct { unsigned int __reserved[4]; } __reserved_06;

        struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } tpr;

       
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } apr;

       
 struct {
  unsigned int priority : 8,
   __reserved_1 : 24;
  unsigned int __reserved_2[3];
 } ppr;

        struct {
  unsigned int eoi;
  unsigned int __reserved[3];
 } eoi;

        struct { unsigned int __reserved[4]; } __reserved_07;

        struct {
  unsigned int __reserved_1 : 24,
   logical_dest : 8;
  unsigned int __reserved_2[3];
 } ldr;

        struct {
  unsigned int __reserved_1 : 28,
   model : 4;
  unsigned int __reserved_2[3];
 } dfr;

        struct {
  unsigned int spurious_vector : 8,
   apic_enabled : 1,
   focus_cpu : 1,
   __reserved_2 : 22;
  unsigned int __reserved_3[3];
 } svr;

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } isr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } tmr [8];

        struct {
         unsigned int bitfield;
  unsigned int __reserved[3];
 } irr [8];

        union {
  struct {
   unsigned int send_cs_error : 1,
    receive_cs_error : 1,
    send_accept_error : 1,
    receive_accept_error : 1,
    __reserved_1 : 1,
    send_illegal_vector : 1,
    receive_illegal_vector : 1,
    illegal_register_address : 1,
    __reserved_2 : 24;
   unsigned int __reserved_3[3];
  } error_bits;
  struct {
   unsigned int errors;
   unsigned int __reserved_3[3];
  } all_errors;
 } esr;

        struct { unsigned int __reserved[4]; } __reserved_08;

        struct { unsigned int __reserved[4]; } __reserved_09;

        struct { unsigned int __reserved[4]; } __reserved_10;

        struct { unsigned int __reserved[4]; } __reserved_11;

        struct { unsigned int __reserved[4]; } __reserved_12;

        struct { unsigned int __reserved[4]; } __reserved_13;

        struct { unsigned int __reserved[4]; } __reserved_14;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   destination_mode : 1,
   delivery_status : 1,
   __reserved_1 : 1,
   level : 1,
   trigger : 1,
   __reserved_2 : 2,
   shorthand : 2,
   __reserved_3 : 12;
  unsigned int __reserved_4[3];
 } icr1;

        struct {
  union {
   unsigned int __reserved_1 : 24,
    phys_dest : 4,
    __reserved_2 : 4;
   unsigned int __reserved_3 : 24,
    logical_dest : 8;
  } dest;
  unsigned int __reserved_4[3];
 } icr2;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   timer_mode : 1,
   __reserved_3 : 14;
  unsigned int __reserved_4[3];
 } lvt_timer;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_thermal;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_pc;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint0;

        struct {
  unsigned int vector : 8,
   delivery_mode : 3,
   __reserved_1 : 1,
   delivery_status : 1,
   polarity : 1,
   remote_irr : 1,
   trigger : 1,
   mask : 1,
   __reserved_2 : 15;
  unsigned int __reserved_3[3];
 } lvt_lint1;

        struct {
  unsigned int vector : 8,
   __reserved_1 : 4,
   delivery_status : 1,
   __reserved_2 : 3,
   mask : 1,
   __reserved_3 : 15;
  unsigned int __reserved_4[3];
 } lvt_error;

        struct {
  unsigned int initial_count;
  unsigned int __reserved_2[3];
 } timer_icr;

       
 struct {
  unsigned int curr_count;
  unsigned int __reserved_2[3];
 } timer_ccr;

        struct { unsigned int __reserved[4]; } __reserved_16;

        struct { unsigned int __reserved[4]; } __reserved_17;

        struct { unsigned int __reserved[4]; } __reserved_18;

        struct { unsigned int __reserved[4]; } __reserved_19;

        struct {
  unsigned int divisor : 4,
   __reserved_1 : 28;
  unsigned int __reserved_2[3];
 } timer_dcr;

        struct { unsigned int __reserved[4]; } __reserved_20;

} __attribute__ ((packed));
enum ioapic_irq_destination_types {
 dest_Fixed = 0,
 dest_LowestPrio = 1,
 dest_SMI = 2,
 dest__reserved_1 = 3,
 dest_NMI = 4,
 dest_INIT = 5,
 dest__reserved_2 = 6,
 dest_ExtINT = 7
};

extern int apic_version[];
extern int pic_mode;
extern unsigned long mp_bus_not_pci[(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];

extern unsigned int boot_cpu_physical_apicid;
extern unsigned int max_physical_apicid;
extern int mpc_default_type;
extern unsigned long mp_lapic_addr;


extern int smp_found_config;




static inline void get_smp_config(void)
{
 x86_init.mpparse.get_smp_config(0);
}

static inline void early_get_smp_config(void)
{
 x86_init.mpparse.get_smp_config(1);
}

static inline void find_smp_config(void)
{
 x86_init.mpparse.find_smp_config();
}


extern void early_reserve_e820_mpc_new(void);
extern int enable_update_mptable;
extern int default_mpc_apic_id(struct mpc_cpu *m);
extern void default_smp_read_mpc_oem(struct mpc_table *mpc);

extern void default_mpc_oem_bus_info(struct mpc_bus *m, char *str);



extern void default_find_smp_config(void);
extern void default_get_smp_config(unsigned int early);
int generic_processor_info(int apicid, int version);

extern void mp_register_ioapic(int id, u32 address, u32 gsi_base);
extern void mp_override_legacy_irq(u8 bus_irq, u8 polarity, u8 trigger,
       u32 gsi);
extern void mp_config_acpi_legacy_irqs(void);
struct device;
extern int mp_register_gsi(struct device *dev, u32 gsi, int edge_level,
     int active_high_low);




struct physid_mask {
 unsigned long mask[(((32768) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
};

typedef struct physid_mask physid_mask_t;
static inline unsigned long physids_coerce(physid_mask_t *map)
{
 return map->mask[0];
}

static inline void physids_promote(unsigned long physids, physid_mask_t *map)
{
 bitmap_zero((*map).mask, 32768);
 map->mask[0] = physids;
}

static inline void physid_set_mask_of_physid(int physid, physid_mask_t *map)
{
 bitmap_zero((*map).mask, 32768);
 set_bit(physid, (*map).mask);
}




extern physid_mask_t phys_cpu_present_map;

extern int generic_mps_oem_check(struct mpc_table *, char *, char *);

extern int default_acpi_madt_oem_check(char *, char *);



















typedef struct seqcount {
 unsigned sequence;



} seqcount_t;
typedef struct {
 struct seqcount seqcount;
 spinlock_t lock;
} seqlock_t;

struct timespec {
 __kernel_time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 __kernel_time_t tv_sec;
 __kernel_suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};

extern struct timezone sys_tz;
static inline int timespec_equal( struct timespec *a,
                                 struct timespec *b)
{
 return (a->tv_sec == b->tv_sec) && (a->tv_nsec == b->tv_nsec);
}






static inline int timespec_compare( struct timespec *lhs, struct timespec *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_nsec - rhs->tv_nsec;
}

static inline int timeval_compare( struct timeval *lhs, struct timeval *rhs)
{
 if (lhs->tv_sec < rhs->tv_sec)
  return -1;
 if (lhs->tv_sec > rhs->tv_sec)
  return 1;
 return lhs->tv_usec - rhs->tv_usec;
}

extern unsigned long mktime( unsigned int year, unsigned int mon,
       unsigned int day, unsigned int hour,
       unsigned int min, unsigned int sec);

extern void set_normalized_timespec(struct timespec *ts, time_t sec, s64 nsec);






extern struct timespec timespec_add_safe( struct timespec lhs,
      struct timespec rhs);


static inline struct timespec timespec_add(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec + rhs.tv_sec,
    lhs.tv_nsec + rhs.tv_nsec);
 return ts_delta;
}




static inline struct timespec timespec_sub(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec - rhs.tv_sec,
    lhs.tv_nsec - rhs.tv_nsec);
 return ts_delta;
}
static inline bool timespec_valid( struct timespec *ts)
{

 if (ts->tv_sec < 0)
  return _false;

 if ((unsigned long)ts->tv_nsec >= 1000000000L)
  return _false;
 return _true;
}

static inline bool timespec_valid_strict( struct timespec *ts)
{
 if (!timespec_valid(ts))
  return _false;

 if ((unsigned long long)ts->tv_sec >= (((s64)~((u64)1 << 63)) / 1000000000L))
  return _false;
 return _true;
}

extern bool persistent_clock_exist;

static inline bool has_persistent_clock(void)
{
 return persistent_clock_exist;
}

extern void read_persistent_clock(struct timespec *ts);
extern void read_boot_clock(struct timespec *ts);
extern int persistent_clock_is_local;
extern int update_persistent_clock(struct timespec now);
void timekeeping_init(void);
extern int timekeeping_suspended;

unsigned long get_seconds(void);
struct timespec current_kernel_time(void);
struct timespec __current_kernel_time(void);
struct timespec get_monotonic_coarse(void);
void get_xtime_and_monotonic_and_sleep_offset(struct timespec *xtim,
    struct timespec *wtom, struct timespec *sleep);
void timekeeping_inject_sleeptime(struct timespec *delta);
extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday( struct timespec *tv);
extern int do_sys_settimeofday( struct timespec *tv,
          struct timezone *tz);

extern long do_utimes(int dfd, char *filename, struct timespec *times, int flags);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value,
   struct itimerval *ovalue);
extern unsigned int alarm_setitimer(unsigned int seconds);
extern int do_getitimer(int which, struct itimerval *value);
extern int __getnstimeofday(struct timespec *tv);
extern void getnstimeofday(struct timespec *tv);
extern void getrawmonotonic(struct timespec *ts);
extern void getnstime_raw_and_real(struct timespec *ts_raw,
  struct timespec *ts_real);
extern void getboottime(struct timespec *ts);
extern void monotonic_to_bootbased(struct timespec *ts);
extern void get_monotonic_boottime(struct timespec *ts);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);
extern int timekeeping_valid_for_hres(void);
extern u64 timekeeping_max_deferment(void);
extern int timekeeping_inject_offset(struct timespec *ts);
extern s32 timekeeping_get_tai_offset(void);
extern void timekeeping_set_tai_offset(s32 tai_offset);
extern void timekeeping_clocktai(struct timespec *ts);

struct tms;
extern void do_sys_times(struct tms *);





struct tm {




 int tm_sec;

 int tm_min;

 int tm_hour;

 int tm_mday;

 int tm_mon;

 long tm_year;

 int tm_wday;

 int tm_yday;
};

void time_to_tm(time_t totalsecs, int offset, struct tm *result);
static inline s64 timespec_to_ns( struct timespec *ts)
{
 return ((s64) ts->tv_sec * 1000000000L) + ts->tv_nsec;
}
static inline s64 timeval_to_ns( struct timeval *tv)
{
 return ((s64) tv->tv_sec * 1000000000L) +
  tv->tv_usec * 1000L;
}







extern struct timespec ns_to_timespec( s64 nsec);







extern struct timeval ns_to_timeval( s64 nsec);
static inline __attribute__((always_inline)) void timespec_add_ns(struct timespec *a, u64 ns)
{
 a->tv_sec += __iter_div_u64_rem(a->tv_nsec + ns, 1000000000L, &ns);
 a->tv_nsec = ns;
}







struct timex {
 unsigned int modes;
 long offset;
 long freq;
 long maxerror;
 long esterror;
 int status;
 long constant;
 long precision;
 long tolerance;


 struct timeval time;
 long tick;

 long ppsfreq;
 long jitter;
 int shift;
 long stabil;
 long jitcnt;
 long calcnt;
 long errcnt;
 long stbcnt;

 int tai;

 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32; int :32;
 int :32; int :32; int :32;
};

















typedef unsigned long long cycles_t;

extern unsigned int cpu_khz;
extern unsigned int tsc_khz;

extern void disable_TSC(void);

static inline cycles_t get_cycles(void)
{
 unsigned long long ret = 0;





 (ret = paravirt_read_tsc());

 return ret;
}

static inline __attribute__((always_inline)) cycles_t vget_cycles(void)
{
 return (cycles_t)__native_read_tsc();
}

extern void tsc_init(void);
extern void mark_tsc_unstable(char *reason);
extern int unsynchronized_tsc(void);
extern int check_tsc_unstable(void);
extern int check_tsc_disabled(void);
extern unsigned long native_calibrate_tsc(void);

extern int tsc_clocksource_reliable;





extern void check_tsc_sync_source(int cpu);
extern void check_tsc_sync_target(void);

extern int notsc_setup(char *);
extern void tsc_save_sched_clock_state(void);
extern void tsc_restore_sched_clock_state(void);
extern unsigned long tick_usec;
extern unsigned long tick_nsec;
extern int do_adjtimex(struct timex *);
extern void hardpps( struct timespec *, struct timespec *);

int read_current_timer(unsigned long *timer_val);
void ntp_notify_cmos_timer(void);
extern int register_refined_jiffies(long clock_tick_rate);
extern u64 __attribute__((section(".data"))) jiffies_64;
extern unsigned long __attribute__((section(".data"))) jiffies;




static inline u64 get_jiffies_64(void)
{
 return (u64)jiffies;
}
extern unsigned long preset_lpj;
extern unsigned int jiffies_to_msecs( unsigned long j);
extern unsigned int jiffies_to_usecs( unsigned long j);
extern unsigned long msecs_to_jiffies( unsigned int m);
extern unsigned long usecs_to_jiffies( unsigned int u);
extern unsigned long timespec_to_jiffies( struct timespec *value);
extern void jiffies_to_timespec( unsigned long jiffies,
    struct timespec *value);
extern unsigned long timeval_to_jiffies( struct timeval *value);
extern void jiffies_to_timeval( unsigned long jiffies,
          struct timeval *value);

extern clock_t jiffies_to_clock_t(unsigned long x);
static inline clock_t jiffies_delta_to_clock_t(long delta)
{
 return jiffies_to_clock_t(({ typeof(0L) _max1 = (0L); typeof(delta) _max2 = (delta); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; }));
}

extern unsigned long clock_t_to_jiffies(unsigned long x);
extern u64 jiffies_64_to_clock_t(u64 x);
extern u64 nsec_to_clock_t(u64 x);
extern u64 nsecs_to_jiffies64(u64 n);
extern unsigned long nsecs_to_jiffies(u64 n);
union ktime {
 s64 tv64;
};

typedef union ktime ktime_t;
static inline ktime_t ktime_set( long secs, unsigned long nsecs)
{

 if (__builtin_expect(!!(secs >= (((s64)~((u64)1 << 63)) / 1000000000L)), 0))



                return ({ ktime_t var; var.tv64 = ((s64)~((u64)1 << 63)); var; });





        return ({ ktime_t var; var.tv64 = (s64)secs * 1000000000L + (s64)nsecs; var; });

}
static inline ktime_t timespec_to_ktime(struct timespec ts)
{
 return ktime_set(ts.tv_sec, ts.tv_nsec);
}


static inline ktime_t timeval_to_ktime(struct timeval tv)
{
 return ktime_set(tv.tv_sec, tv.tv_usec * 1000L);
}
static inline int ktime_equal( ktime_t cmp1, ktime_t cmp2)
{
 return cmp1.tv64 == cmp2.tv64;
}
static inline int ktime_compare( ktime_t cmp1, ktime_t cmp2)
{
 if (cmp1.tv64 < cmp2.tv64)
  return -1;
 if (cmp1.tv64 > cmp2.tv64)
  return 1;
 return 0;
}

static inline s64 ktime_to_us( ktime_t kt)
{
 struct timeval tv = ns_to_timeval((kt).tv64);
 return (s64) tv.tv_sec * 1000000L + tv.tv_usec;
}

static inline s64 ktime_to_ms( ktime_t kt)
{
 struct timeval tv = ns_to_timeval((kt).tv64);
 return (s64) tv.tv_sec * 1000L + tv.tv_usec / 1000L;
}

static inline s64 ktime_us_delta( ktime_t later, ktime_t earlier)
{
       return ktime_to_us(({ ({ ktime_t var; var.tv64 = (later).tv64 - (earlier).tv64; var; }); }));
}

static inline ktime_t ktime_add_us( ktime_t kt, u64 usec)
{
 return ({ ({ ktime_t var; var.tv64 = (kt).tv64 + (usec * 1000L); var; }); });
}

static inline ktime_t ktime_add_ms( ktime_t kt, u64 msec)
{
 return ({ ({ ktime_t var; var.tv64 = (kt).tv64 + (msec * 1000000L); var; }); });
}

static inline ktime_t ktime_sub_us( ktime_t kt, u64 usec)
{
 return ({ ({ ktime_t var; var.tv64 = (kt).tv64 - (usec * 1000L); var; }); });
}

extern ktime_t ktime_add_safe( ktime_t lhs, ktime_t rhs);
static inline bool ktime_to_timespec_cond( ktime_t kt,
             struct timespec *ts)
{
 if (kt.tv64) {
  *ts = ns_to_timespec((kt).tv64);
  return _true;
 } else {
  return _false;
 }
}
extern void ktime_get_ts(struct timespec *ts);




static inline ktime_t ns_to_ktime(u64 ns)
{



 static ktime_t ktime_zero = { 0 };


 return ({ ({ ktime_t var; var.tv64 = (ktime_zero).tv64 + (ns); var; }); });
}

static inline ktime_t ms_to_ktime(u64 ms)
{



 static ktime_t ktime_zero = { 0 };


 return ktime_add_ms(ktime_zero, ms);
}







enum debug_obj_state {
 ODEBUG_STATE_NONE,
 ODEBUG_STATE_INIT,
 ODEBUG_STATE_INACTIVE,
 ODEBUG_STATE_ACTIVE,
 ODEBUG_STATE_DESTROYED,
 ODEBUG_STATE_NOTAVAILABLE,
 ODEBUG_STATE_MAX,
};

struct debug_obj_descr;
struct debug_obj {
 struct hlist_node node;
 enum debug_obj_state state;
 unsigned int astate;
 void *object;
 struct debug_obj_descr *descr;
};
struct debug_obj_descr {
 char *name;
 void *(*debug_hint) (void *addr);
 int (*fixup_init) (void *addr, enum debug_obj_state state);
 int (*fixup_activate) (void *addr, enum debug_obj_state state);
 int (*fixup_destroy) (void *addr, enum debug_obj_state state);
 int (*fixup_free) (void *addr, enum debug_obj_state state);
 int (*fixup_assert_init)(void *addr, enum debug_obj_state state);
};
static inline void
debug_object_init (void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_init_on_stack(void *addr, struct debug_obj_descr *descr) { }
static inline int
debug_object_activate (void *addr, struct debug_obj_descr *descr) { return 0; }
static inline void
debug_object_deactivate(void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_destroy (void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_free (void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_assert_init(void *addr, struct debug_obj_descr *descr) { }

static inline void debug_objects_early_init(void) { }
static inline void debug_objects_mem_init(void) { }





static inline void
debug_check_no_obj_freed( void *address, unsigned long size) { }


struct tvec_base;

struct timer_list {




 struct list_head entry;
 unsigned long expires;
 struct tvec_base *base;

 void (*function)(unsigned long);
 unsigned long data;

 int slack;


 int start_pid;
 void *start_site;
 char start_comm[16];




};

extern struct tvec_base boot_tvec_bases;
void init_timer_key(struct timer_list *timer, unsigned int flags,
      char *name, struct lock_class_key *key);







static inline void destroy_timer_on_stack(struct timer_list *timer) { }
static inline void init_timer_on_stack_key(struct timer_list *timer,
        unsigned int flags, char *name,
        struct lock_class_key *key)
{
 init_timer_key(timer, flags, name, key);
}
static inline int timer_pending( struct timer_list * timer)
{
 return timer->entry.next != 0;
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer_pending(struct timer_list *timer, unsigned long expires);
extern int mod_timer_pinned(struct timer_list *timer, unsigned long expires);

extern void set_timer_slack(struct timer_list *time, int slack_hz);
extern unsigned long get_next_timer_interrupt(unsigned long now);






extern int timer_stats_active;



extern void init_timer_stats(void);

extern void timer_stats_update_stats(void *timer, pid_t pid, void *startf,
         void *timerf, char *comm,
         unsigned int timer_flag);

extern void __timer_stats_timer_set_start_info(struct timer_list *timer,
            void *addr);

static inline void timer_stats_timer_set_start_info(struct timer_list *timer)
{
 if (__builtin_expect(!!(!timer_stats_active), 1))
  return;
 __timer_stats_timer_set_start_info(timer, __builtin_return_address(0));
}

static inline void timer_stats_timer_clear_start_info(struct timer_list *timer)
{
 timer->start_site = 0;
}
extern void add_timer(struct timer_list *timer);

extern int try_to_del_timer_sync(struct timer_list *timer);


  extern int del_timer_sync(struct timer_list *timer);






extern void init_timers(void);
extern void run_local_timers(void);






unsigned long __round_jiffies(unsigned long j, int cpu);
unsigned long __round_jiffies_relative(unsigned long j, int cpu);
unsigned long round_jiffies(unsigned long j);
unsigned long round_jiffies_relative(unsigned long j);

unsigned long __round_jiffies_up(unsigned long j, int cpu);
unsigned long __round_jiffies_up_relative(unsigned long j, int cpu);
unsigned long round_jiffies_up(unsigned long j);
unsigned long round_jiffies_up_relative(unsigned long j);







struct workqueue_struct;

struct work_struct;
typedef void (*work_func_t)(struct work_struct *work);
void delayed_work_timer_fn(unsigned long __data);







enum {
 WORK_STRUCT_PENDING_BIT = 0,
 WORK_STRUCT_DELAYED_BIT = 1,
 WORK_STRUCT_PWQ_BIT = 2,
 WORK_STRUCT_LINKED_BIT = 3,




 WORK_STRUCT_COLOR_SHIFT = 4,


 WORK_STRUCT_COLOR_BITS = 4,

 WORK_STRUCT_PENDING = 1 << WORK_STRUCT_PENDING_BIT,
 WORK_STRUCT_DELAYED = 1 << WORK_STRUCT_DELAYED_BIT,
 WORK_STRUCT_PWQ = 1 << WORK_STRUCT_PWQ_BIT,
 WORK_STRUCT_LINKED = 1 << WORK_STRUCT_LINKED_BIT,



 WORK_STRUCT_STATIC = 0,






 WORK_NR_COLORS = (1 << WORK_STRUCT_COLOR_BITS) - 1,
 WORK_NO_COLOR = WORK_NR_COLORS,


 WORK_CPU_UNBOUND = 256,
 WORK_CPU_END = 256 + 1,






 WORK_STRUCT_FLAG_BITS = WORK_STRUCT_COLOR_SHIFT +
      WORK_STRUCT_COLOR_BITS,


 WORK_OFFQ_FLAG_BASE = WORK_STRUCT_COLOR_SHIFT,

 WORK_OFFQ_CANCELING = (1 << WORK_OFFQ_FLAG_BASE),






 WORK_OFFQ_FLAG_BITS = 1,
 WORK_OFFQ_POOL_SHIFT = WORK_OFFQ_FLAG_BASE + WORK_OFFQ_FLAG_BITS,
 WORK_OFFQ_LEFT = 64 - WORK_OFFQ_POOL_SHIFT,
 WORK_OFFQ_POOL_BITS = WORK_OFFQ_LEFT <= 31 ? WORK_OFFQ_LEFT : 31,
 WORK_OFFQ_POOL_NONE = (1LU << WORK_OFFQ_POOL_BITS) - 1,


 WORK_STRUCT_FLAG_MASK = (1UL << WORK_STRUCT_FLAG_BITS) - 1,
 WORK_STRUCT_WQ_DATA_MASK = ~WORK_STRUCT_FLAG_MASK,
 WORK_STRUCT_NO_POOL = (unsigned long)WORK_OFFQ_POOL_NONE << WORK_OFFQ_POOL_SHIFT,


 WORK_BUSY_PENDING = 1 << 0,
 WORK_BUSY_RUNNING = 1 << 1,


 WORKER_DESC_LEN = 24,
};

struct work_struct {
 atomic_long_t data;
 struct list_head entry;
 work_func_t func;



};





struct delayed_work {
 struct work_struct work;
 struct timer_list timer;


 struct workqueue_struct *wq;
 int cpu;
};
struct workqueue_attrs {
 int nice;
 cpumask_var_t cpumask;
 bool no_numa;
};

static inline struct delayed_work *to_delayed_work(struct work_struct *work)
{
 return ({ typeof( ((struct delayed_work *)0)->work ) *__mptr = (work); (struct delayed_work *)( (char *)__mptr - ((size_t) &((struct delayed_work *)0)->work) );});
}

struct execute_work {
 struct work_struct work;
};
static inline void __init_work(struct work_struct *work, int onstack) { }
static inline void destroy_work_on_stack(struct work_struct *work) { }
static inline unsigned int work_static(struct work_struct *work) { return 0; }
enum {




 WQ_NON_REENTRANT = 1 << 0,

 WQ_UNBOUND = 1 << 1,
 WQ_FREEZABLE = 1 << 2,
 WQ_MEM_RECLAIM = 1 << 3,
 WQ_HIGHPRI = 1 << 4,
 WQ_CPU_INTENSIVE = 1 << 5,
 WQ_SYSFS = 1 << 6,
 WQ_POWER_EFFICIENT = 1 << 7,

 __WQ_DRAINING = 1 << 16,
 __WQ_ORDERED = 1 << 17,

 WQ_MAX_ACTIVE = 512,
 WQ_MAX_UNBOUND_PER_CPU = 4,
 WQ_DFL_ACTIVE = WQ_MAX_ACTIVE / 2,
};
extern struct workqueue_struct *system_wq;
extern struct workqueue_struct *system_long_wq;
extern struct workqueue_struct *system_unbound_wq;
extern struct workqueue_struct *system_freezable_wq;
extern struct workqueue_struct *system_power_efficient_wq;
extern struct workqueue_struct *system_freezable_power_efficient_wq;

static inline struct workqueue_struct * __system_nrt_wq(void)
{
 return system_wq;
}

static inline struct workqueue_struct * __system_nrt_freezable_wq(void)
{
 return system_freezable_wq;
}





extern struct workqueue_struct *
__alloc_workqueue_key( char *fmt, unsigned int flags, int max_active,
 struct lock_class_key *key, char *lock_name, ...) __attribute__((format(printf, 1, 6)));
extern void destroy_workqueue(struct workqueue_struct *wq);

struct workqueue_attrs *alloc_workqueue_attrs(gfp_t gfp_mask);
void free_workqueue_attrs(struct workqueue_attrs *attrs);
int apply_workqueue_attrs(struct workqueue_struct *wq,
     struct workqueue_attrs *attrs);

extern bool queue_work_on(int cpu, struct workqueue_struct *wq,
   struct work_struct *work);
extern bool queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);
extern bool mod_delayed_work_on(int cpu, struct workqueue_struct *wq,
   struct delayed_work *dwork, unsigned long delay);

extern void flush_workqueue(struct workqueue_struct *wq);
extern void drain_workqueue(struct workqueue_struct *wq);
extern void flush_scheduled_work(void);

extern int schedule_on_each_cpu(work_func_t func);

int execute_in_process_context(work_func_t fn, struct execute_work *);

extern bool flush_work(struct work_struct *work);
extern bool cancel_work_sync(struct work_struct *work);

extern bool flush_delayed_work(struct delayed_work *dwork);
extern bool cancel_delayed_work(struct delayed_work *dwork);
extern bool cancel_delayed_work_sync(struct delayed_work *dwork);

extern void workqueue_set_max_active(struct workqueue_struct *wq,
         int max_active);
extern bool current_is_workqueue_rescuer(void);
extern bool workqueue_congested(int cpu, struct workqueue_struct *wq);
extern unsigned int work_busy(struct work_struct *work);
extern __attribute__((format(printf, 1, 2))) void set_worker_desc( char *fmt, ...);
extern void print_worker_info( char *log_lvl, struct task_struct *task);
static inline bool queue_work(struct workqueue_struct *wq,
         struct work_struct *work)
{
 return queue_work_on(WORK_CPU_UNBOUND, wq, work);
}
static inline bool queue_delayed_work(struct workqueue_struct *wq,
          struct delayed_work *dwork,
          unsigned long delay)
{
 return queue_delayed_work_on(WORK_CPU_UNBOUND, wq, dwork, delay);
}
static inline bool mod_delayed_work(struct workqueue_struct *wq,
        struct delayed_work *dwork,
        unsigned long delay)
{
 return mod_delayed_work_on(WORK_CPU_UNBOUND, wq, dwork, delay);
}
static inline bool schedule_work_on(int cpu, struct work_struct *work)
{
 return queue_work_on(cpu, system_wq, work);
}
static inline bool schedule_work(struct work_struct *work)
{
 return queue_work(system_wq, work);
}
static inline bool schedule_delayed_work_on(int cpu, struct delayed_work *dwork,
         unsigned long delay)
{
 return queue_delayed_work_on(cpu, system_wq, dwork, delay);
}
static inline bool schedule_delayed_work(struct delayed_work *dwork,
      unsigned long delay)
{
 return queue_delayed_work(system_wq, dwork, delay);
}




static inline bool keventd_up(void)
{
 return system_wq != 0;
}






static inline bool __cancel_delayed_work(struct delayed_work *work)
{
 bool ret;

 ret = del_timer(&work->timer);
 if (ret)
  clear_bit(WORK_STRUCT_PENDING_BIT, ((unsigned long *)(&(&work->work)->data)));
 return ret;
}


static inline bool flush_work_sync(struct work_struct *work)
{
 return flush_work(work);
}


static inline bool flush_delayed_work_sync(struct delayed_work *dwork)
{
 return flush_delayed_work(dwork);
}







long work_on_cpu(int cpu, long (*fn)(void *), void *arg);



extern void freeze_workqueues_begin(void);
extern bool freeze_workqueues_busy(void);
extern void thaw_workqueues(void);



int workqueue_sysfs_register(struct workqueue_struct *wq);


typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int flags, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int flags, void *key);

struct __wait_queue {
 unsigned int flags;

 void *_private;
 wait_queue_func_t func;
 struct list_head task_list;
};

struct wait_bit_key {
 void *flags;
 int bit_nr;

};

struct wait_bit_queue {
 struct wait_bit_key key;
 wait_queue_t wait;
};

struct __wait_queue_head {
 spinlock_t lock;
 struct list_head task_list;
};
typedef struct __wait_queue_head wait_queue_head_t;

struct task_struct;
extern void __init_waitqueue_head(wait_queue_head_t *q, char *name, struct lock_class_key *);
static inline void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->_private = p;
 q->func = default_wake_function;
}

static inline void
init_waitqueue_func_entry(wait_queue_t *q, wait_queue_func_t func)
{
 q->flags = 0;
 q->_private = 0;
 q->func = func;
}

static inline int waitqueue_active(wait_queue_head_t *q)
{
 return !list_empty(&q->task_list);
}

extern void add_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);
extern void add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t *wait);
extern void remove_wait_queue(wait_queue_head_t *q, wait_queue_t *wait);

static inline void __add_wait_queue(wait_queue_head_t *head, wait_queue_t *_new)
{
 list_add(&_new->task_list, &head->task_list);
}




static inline void
__add_wait_queue_exclusive(wait_queue_head_t *q, wait_queue_t *wait)
{
 wait->flags |= 0x01;
 __add_wait_queue(q, wait);
}

static inline void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *_new)
{
 list_add_tail(&_new->task_list, &head->task_list);
}

static inline void
__add_wait_queue_tail_exclusive(wait_queue_head_t *q, wait_queue_t *wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}

static inline void
__remove_wait_queue(wait_queue_head_t *head, wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
void __wake_up_locked_key(wait_queue_head_t *q, unsigned int mode, void *key);
void __wake_up_sync_key(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
void __wake_up_locked(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_bit(wait_queue_head_t *, void *, int);
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
void wake_up_bit(void *, int);
void wake_up_atomic_t(atomic_t *);
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_atomic_t(atomic_t *, int (*)(atomic_t *), unsigned);
wait_queue_head_t *bit_waitqueue(void *, int);
extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q, signed long timeout);
extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q, signed long timeout);




void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state);
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state);
long prepare_to_wait_event(wait_queue_head_t *q, wait_queue_t *wait, int state);
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
void abort_exclusive_wait(wait_queue_head_t *q, wait_queue_t *wait, unsigned int mode, void *key);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
static inline int
wait_on_bit(void *word, int bit, int (*action)(void *), unsigned mode)
{



        if (!(__builtin_constant_p((bit)) ? constant_test_bit((bit), ((unsigned long *)word)) : variable_test_bit((bit), ((unsigned long *)word))))

  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
static inline int
wait_on_bit_lock(void *word, int bit, int (*action)(void *), unsigned mode)
{



        if (!test_and_set_bit(bit, (unsigned long *)word))

  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}
static inline
int wait_on_atomic_t(atomic_t *val, int (*action)(atomic_t *), unsigned mode)
{
 if (atomic_read(val) == 0)
  return 0;
 return out_of_line_wait_on_atomic_t(val, action, mode);
}

struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
static inline void init_completion(struct completion *x)
{
 x->done = 0;
 do { static struct lock_class_key __key; __init_waitqueue_head((&x->wait), "&x->wait", &__key); } while (0);
}
static inline void reinit_completion(struct completion *x)
{
 x->done = 0;
}

extern void wait_for_completion(struct completion *);
extern void wait_for_completion_io(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern int wait_for_completion_killable(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x,
         unsigned long timeout);
extern unsigned long wait_for_completion_io_timeout(struct completion *x,
          unsigned long timeout);
extern long wait_for_completion_interruptible_timeout(
 struct completion *x, unsigned long timeout);
extern long wait_for_completion_killable_timeout(
 struct completion *x, unsigned long timeout);
extern bool try_wait_for_completion(struct completion *x);
extern bool completion_done(struct completion *x);

extern void complete(struct completion *);
extern void complete_all(struct completion *);




extern void (*pm_power_off)(void);
extern void (*pm_power_off_prepare)(void);

struct device;

extern void pm_vt_switch_required(struct device *dev, bool required);
extern void pm_vt_switch_unregister(struct device *dev);
struct device;


extern char power_group_name[];




typedef struct pm_message {
 int event;
} pm_message_t;
struct dev_pm_ops {
 int (*prepare)(struct device *dev);
 void (*complete)(struct device *dev);
 int (*suspend)(struct device *dev);
 int (*resume)(struct device *dev);
 int (*freeze)(struct device *dev);
 int (*thaw)(struct device *dev);
 int (*poweroff)(struct device *dev);
 int (*restore)(struct device *dev);
 int (*suspend_late)(struct device *dev);
 int (*resume_early)(struct device *dev);
 int (*freeze_late)(struct device *dev);
 int (*thaw_early)(struct device *dev);
 int (*poweroff_late)(struct device *dev);
 int (*restore_early)(struct device *dev);
 int (*suspend_noirq)(struct device *dev);
 int (*resume_noirq)(struct device *dev);
 int (*freeze_noirq)(struct device *dev);
 int (*thaw_noirq)(struct device *dev);
 int (*poweroff_noirq)(struct device *dev);
 int (*restore_noirq)(struct device *dev);
 int (*runtime_suspend)(struct device *dev);
 int (*runtime_resume)(struct device *dev);
 int (*runtime_idle)(struct device *dev);
};
enum rpm_status {
 RPM_ACTIVE = 0,
 RPM_RESUMING,
 RPM_SUSPENDED,
 RPM_SUSPENDING,
};
enum rpm_request {
 RPM_REQ_NONE = 0,
 RPM_REQ_IDLE,
 RPM_REQ_SUSPEND,
 RPM_REQ_AUTOSUSPEND,
 RPM_REQ_RESUME,
};

struct wakeup_source;

struct pm_domain_data {
 struct list_head list_node;
 struct device *dev;
};

struct pm_subsys_data {
 spinlock_t lock;
 unsigned int refcount;

 struct list_head clock_list;




};

struct dev_pm_info {
 pm_message_t power_state;
 unsigned int can_wakeup:1;
 unsigned int async_suspend:1;
 bool is_prepared:1;
 bool is_suspended:1;
 bool ignore_children:1;
 bool early_init:1;
 spinlock_t lock;

 struct list_head entry;
 struct completion completion;
 struct wakeup_source *wakeup;
 bool wakeup_path:1;
 bool syscore:1;




 struct timer_list suspend_timer;
 unsigned long timer_expires;
 struct work_struct work;
 wait_queue_head_t wait_queue;
 atomic_t usage_count;
 atomic_t child_count;
 unsigned int disable_depth:3;
 unsigned int idle_notification:1;
 unsigned int request_pending:1;
 unsigned int deferred_resume:1;
 unsigned int run_wake:1;
 unsigned int runtime_auto:1;
 unsigned int no_callbacks:1;
 unsigned int irq_safe:1;
 unsigned int use_autosuspend:1;
 unsigned int timer_autosuspends:1;
 unsigned int memalloc_noio:1;
 enum rpm_request request;
 enum rpm_status runtime_status;
 int runtime_error;
 int autosuspend_delay;
 unsigned long last_busy;
 unsigned long active_jiffies;
 unsigned long suspended_jiffies;
 unsigned long accounting_timestamp;

 struct pm_subsys_data *subsys_data;
 struct dev_pm_qos *qos;
};

extern void update_pm_runtime_accounting(struct device *dev);
extern int dev_pm_get_subsys_data(struct device *dev);
extern int dev_pm_put_subsys_data(struct device *dev);






struct dev_pm_domain {
 struct dev_pm_ops ops;
};
extern void device_pm_lock(void);
extern void dpm_resume_start(pm_message_t state);
extern void dpm_resume_end(pm_message_t state);
extern void dpm_resume(pm_message_t state);
extern void dpm_complete(pm_message_t state);

extern void device_pm_unlock(void);
extern int dpm_suspend_end(pm_message_t state);
extern int dpm_suspend_start(pm_message_t state);
extern int dpm_suspend(pm_message_t state);
extern int dpm_prepare(pm_message_t state);

extern void __suspend_report_result( char *function, void *fn, int ret);






extern int device_pm_wait_for_dev(struct device *sub, struct device *dev);
extern void dpm_for_each_dev(void *data, void (*fn)(struct device *, void *));

extern int pm_generic_prepare(struct device *dev);
extern int pm_generic_suspend_late(struct device *dev);
extern int pm_generic_suspend_noirq(struct device *dev);
extern int pm_generic_suspend(struct device *dev);
extern int pm_generic_resume_early(struct device *dev);
extern int pm_generic_resume_noirq(struct device *dev);
extern int pm_generic_resume(struct device *dev);
extern int pm_generic_freeze_noirq(struct device *dev);
extern int pm_generic_freeze_late(struct device *dev);
extern int pm_generic_freeze(struct device *dev);
extern int pm_generic_thaw_noirq(struct device *dev);
extern int pm_generic_thaw_early(struct device *dev);
extern int pm_generic_thaw(struct device *dev);
extern int pm_generic_restore_noirq(struct device *dev);
extern int pm_generic_restore_early(struct device *dev);
extern int pm_generic_restore(struct device *dev);
extern int pm_generic_poweroff_noirq(struct device *dev);
extern int pm_generic_poweroff_late(struct device *dev);
extern int pm_generic_poweroff(struct device *dev);
extern void pm_generic_complete(struct device *dev);
enum dpm_order {
 DPM_ORDER_NONE,
 DPM_ORDER_DEV_AFTER_PARENT,
 DPM_ORDER_PARENT_BEFORE_DEV,
 DPM_ORDER_DEV_LAST,
};










typedef struct _nodemask { unsigned long bits[((((1 << 6)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } nodemask_t;

extern nodemask_t _unused_nodemask_arg_;
static inline __attribute__((always_inline)) void __node_set(int node, nodemask_t *dstp)
{
 set_bit(node, dstp->bits);
}


static inline void __node_clear(int node, nodemask_t *dstp)
{
 clear_bit(node, dstp->bits);
}


static inline void __nodes_setall(nodemask_t *dstp, int nbits)
{
 bitmap_fill(dstp->bits, nbits);
}


static inline void __nodes_clear(nodemask_t *dstp, int nbits)
{
 bitmap_zero(dstp->bits, nbits);
}






static inline int __node_test_and_set(int node, nodemask_t *addr)
{
 return test_and_set_bit(node, addr->bits);
}



static inline void __nodes_and(nodemask_t *dstp, nodemask_t *src1p,
     nodemask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_or(nodemask_t *dstp, nodemask_t *src1p,
     nodemask_t *src2p, int nbits)
{
 bitmap_or(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_xor(nodemask_t *dstp, nodemask_t *src1p,
     nodemask_t *src2p, int nbits)
{
 bitmap_xor(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_andnot(nodemask_t *dstp, nodemask_t *src1p,
     nodemask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}



static inline void __nodes_complement(nodemask_t *dstp,
     nodemask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
}



static inline int __nodes_equal( nodemask_t *src1p,
     nodemask_t *src2p, int nbits)
{
 return bitmap_equal(src1p->bits, src2p->bits, nbits);
}



static inline int __nodes_intersects( nodemask_t *src1p,
     nodemask_t *src2p, int nbits)
{
 return bitmap_intersects(src1p->bits, src2p->bits, nbits);
}



static inline int __nodes_subset( nodemask_t *src1p,
     nodemask_t *src2p, int nbits)
{
 return bitmap_subset(src1p->bits, src2p->bits, nbits);
}


static inline int __nodes_empty( nodemask_t *srcp, int nbits)
{
 return bitmap_empty(srcp->bits, nbits);
}


static inline int __nodes_full( nodemask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline int __nodes_weight( nodemask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline void __nodes_shift_right(nodemask_t *dstp,
     nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline void __nodes_shift_left(nodemask_t *dstp,
     nodemask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}





static inline int __first_node( nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 6)); int __min2 = (find_first_bit(srcp->bits, (1 << 6))); __min1 < __min2 ? __min1: __min2; });
}


static inline int __next_node(int n, nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 6)); int __min2 = (find_next_bit(srcp->bits, (1 << 6), n+1)); __min1 < __min2 ? __min1: __min2; });
}

static inline void init_nodemask_of_node(nodemask_t *mask, int node)
{
 __nodes_clear(&(*mask), (1 << 6));
 __node_set((node), &(*mask));
}
static inline int __first_unset_node( nodemask_t *maskp)
{
 return ({ int __min1 = ((1 << 6)); int __min2 = (find_first_zero_bit(maskp->bits, (1 << 6))); __min1 < __min2 ? __min1: __min2; })
                                                  ;
}
static inline int __nodemask_scnprintf(char *buf, int len,
     nodemask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline int __nodemask_parse_user( char *buf, int len,
     nodemask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline int __nodelist_scnprintf(char *buf, int len,
     nodemask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline int __nodelist_parse( char *buf, nodemask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline int __node_remap(int oldbit,
  nodemask_t *oldp, nodemask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline void __nodes_remap(nodemask_t *dstp, nodemask_t *srcp,
  nodemask_t *oldp, nodemask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}



static inline void __nodes_onto(nodemask_t *dstp, nodemask_t *origp,
  nodemask_t *relmapp, int nbits)
{
 bitmap_onto(dstp->bits, origp->bits, relmapp->bits, nbits);
}



static inline void __nodes_fold(nodemask_t *dstp, nodemask_t *origp,
  int sz, int nbits)
{
 bitmap_fold(dstp->bits, origp->bits, sz, nbits);
}
enum node_states {
 N_POSSIBLE,
 N_ONLINE,
 N_NORMAL_MEMORY,



 N_HIGH_MEMORY = N_NORMAL_MEMORY,


 N_MEMORY,



 N_CPU,
 NR_NODE_STATES
};






extern nodemask_t node_states[NR_NODE_STATES];


static inline int node_state(int node, enum node_states state)
{
 return (__builtin_constant_p(((node))) ? constant_test_bit(((node)), ((node_states[state]).bits)) : variable_test_bit(((node)), ((node_states[state]).bits)));
}

static inline void node_set_state(int node, enum node_states state)
{
 __node_set(node, &node_states[state]);
}

static inline void node_clear_state(int node, enum node_states state)
{
 __node_clear(node, &node_states[state]);
}

static inline int num_node_state(enum node_states state)
{
 return __nodes_weight(&(node_states[state]), (1 << 6));
}







extern int nr_node_ids;
extern int nr_online_nodes;

static inline void node_set_online(int nid)
{
 node_set_state(nid, N_ONLINE);
 nr_online_nodes = num_node_state(N_ONLINE);
}

static inline void node_set_offline(int nid)
{
 node_clear_state(nid, N_ONLINE);
 nr_online_nodes = num_node_state(N_ONLINE);
}
extern int node_random( nodemask_t *maskp);
struct nodemask_scratch {
 nodemask_t mask1;
 nodemask_t mask2;
};

extern __attribute__((section(".data..percpu" ""))) __typeof__(int) x86_cpu_to_node_map; extern __typeof__(int) *x86_cpu_to_node_map_early_ptr; extern __typeof__(int) x86_cpu_to_node_map_early_map[];
static inline int early_cpu_to_node(int cpu)
{
 return *((x86_cpu_to_node_map_early_ptr) ? &(x86_cpu_to_node_map_early_ptr)[cpu] : &(*({ do { void *__vpp_verify = (typeof(((&(x86_cpu_to_node_map))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(x86_cpu_to_node_map))) *)(&(x86_cpu_to_node_map)))); (typeof((typeof(*(&(x86_cpu_to_node_map))) *)(&(x86_cpu_to_node_map)))) (__ptr + (((__per_cpu_offset[cpu])))); }); })));
}




extern cpumask_var_t node_to_cpumask_map[(1 << 6)];





static inline struct cpumask *cpumask_of_node(int node)
{
 return node_to_cpumask_map[node];
}


extern void setup_node_to_cpumask_map(void);
extern int __node_distance(int, int);

extern struct cpumask *cpu_coregroup_mask(int cpu);
static inline void arch_fix_phys_package_id(int num, u32 slot)
{
}

struct pci_bus;
void x86_pci_root_bus_resources(int bus, struct list_head *resources);
extern int get_mp_bus_to_node(int busnum);
extern void set_mp_bus_to_node(int busnum, int node);
extern int numa_off;
extern s16 __apicid_to_node[32768];
extern nodemask_t numa_nodes_parsed __attribute__ ((__section__(".init.data")));

extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) numa_add_memblk(int nodeid, u64 start, u64 end);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) numa_set_distance(int from, int to, int distance);

static inline void set_apicid_to_node(int apicid, s16 node)
{
 __apicid_to_node[apicid] = node;
}

extern int numa_cpu_node(int cpu);
extern void numa_set_node(int cpu, int node);
extern void numa_clear_node(int cpu);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) init_cpu_to_node(void);
extern void numa_add_cpu(int cpu);
extern void numa_remove_cpu(int cpu);





struct mutex {

 atomic_t count;
 spinlock_t wait_lock;
 struct list_head wait_list;

 struct task_struct *owner;


 void *spin_mlock;
};





struct mutex_waiter {
 struct list_head list;
 struct task_struct *task;



};
extern int atomic_dec_and_mutex_lock(atomic_t *cnt, struct mutex *lock);





typedef struct {
 void *ldt;
 int size;



 unsigned short ia32_compat;


 struct mutex lock;
 void *vdso;
} mm_context_t;


void leave_mm(int cpu);





static inline unsigned char readb( void *addr) { unsigned char ret; asm ("mov" "b" " %1,%0":"=q" (ret) :"m" (*( unsigned char *)addr) :"memory"); return ret; }
static inline unsigned short readw( void *addr) { unsigned short ret; asm ("mov" "w" " %1,%0":"=r" (ret) :"m" (*( unsigned short *)addr) :"memory"); return ret; }
static inline unsigned int readl( void *addr) { unsigned int ret; asm ("mov" "l" " %1,%0":"=r" (ret) :"m" (*( unsigned int *)addr) :"memory"); return ret; }

static inline unsigned char __readb( void *addr) { unsigned char ret; asm ("mov" "b" " %1,%0":"=q" (ret) :"m" (*( unsigned char *)addr) ); return ret; }
static inline unsigned short __readw( void *addr) { unsigned short ret; asm ("mov" "w" " %1,%0":"=r" (ret) :"m" (*( unsigned short *)addr) ); return ret; }
static inline unsigned int __readl( void *addr) { unsigned int ret; asm ("mov" "l" " %1,%0":"=r" (ret) :"m" (*( unsigned int *)addr) ); return ret; }

static inline void writeb(unsigned char val, void *addr) { asm ("mov" "b" " %0,%1": :"q" (val), "m" (*( unsigned char *)addr) :"memory"); }
static inline void writew(unsigned short val, void *addr) { asm ("mov" "w" " %0,%1": :"r" (val), "m" (*( unsigned short *)addr) :"memory"); }
static inline void writel(unsigned int val, void *addr) { asm ("mov" "l" " %0,%1": :"r" (val), "m" (*( unsigned int *)addr) :"memory"); }

static inline void __writeb(unsigned char val, void *addr) { asm ("mov" "b" " %0,%1": :"q" (val), "m" (*( unsigned char *)addr) ); }
static inline void __writew(unsigned short val, void *addr) { asm ("mov" "w" " %0,%1": :"r" (val), "m" (*( unsigned short *)addr) ); }
static inline void __writel(unsigned int val, void *addr) { asm ("mov" "l" " %0,%1": :"r" (val), "m" (*( unsigned int *)addr) ); }
static inline unsigned long readq( void *addr) { unsigned long ret; asm ("mov" "q" " %1,%0":"=r" (ret) :"m" (*( unsigned long *)addr) :"memory"); return ret; }
static inline void writeq(unsigned long val, void *addr) { asm ("mov" "q" " %0,%1": :"r" (val), "m" (*( unsigned long *)addr) :"memory"); }
static inline phys_addr_t virt_to_phys( void *address)
{
 return __phys_addr_nodebug((unsigned long)(address));
}
static inline void *phys_to_virt(phys_addr_t address)
{
 return ((void *)((unsigned long)(address)+((unsigned long)(0xffff880000000000UL))));
}
static inline unsigned int isa_virt_to_bus( void *address)
{
 return (unsigned int)virt_to_phys(address);
}
extern void *ioremap_nocache(resource_size_t offset, unsigned long size);
extern void *ioremap_cache(resource_size_t offset, unsigned long size);
extern void *ioremap_prot(resource_size_t offset, unsigned long size,
    unsigned long prot_val);




static inline void *ioremap(resource_size_t offset, unsigned long size)
{
 return ioremap_nocache(offset, size);
}

extern void iounmap( void *addr);

extern void set_iounmap_nonlazy(void);



extern unsigned int ioread8(void *);
extern unsigned int ioread16(void *);
extern unsigned int ioread16be(void *);
extern unsigned int ioread32(void *);
extern unsigned int ioread32be(void *);

extern void iowrite8(u8, void *);
extern void iowrite16(u16, void *);
extern void iowrite16be(u16, void *);
extern void iowrite32(u32, void *);
extern void iowrite32be(u32, void *);
extern void ioread8_rep(void *port, void *buf, unsigned long count);
extern void ioread16_rep(void *port, void *buf, unsigned long count);
extern void ioread32_rep(void *port, void *buf, unsigned long count);

extern void iowrite8_rep(void *port, void *buf, unsigned long count);
extern void iowrite16_rep(void *port, void *buf, unsigned long count);
extern void iowrite32_rep(void *port, void *buf, unsigned long count);



extern void *ioport_map(unsigned long port, unsigned int nr);
extern void ioport_unmap(void *);
struct pci_dev;
extern void pci_iounmap(struct pci_dev *dev, void *);






struct pci_dev;


extern void *pci_iomap(struct pci_dev *dev, int bar, unsigned long max);








struct rb_node {
 unsigned long __rb_parent_color;
 struct rb_node *rb_right;
 struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long))));


struct rb_root {
 struct rb_node *rb_node;
};
extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);



extern struct rb_node *rb_next( struct rb_node *);
extern struct rb_node *rb_prev( struct rb_node *);
extern struct rb_node *rb_first( struct rb_root *);
extern struct rb_node *rb_last( struct rb_root *);


extern struct rb_node *rb_first_postorder( struct rb_root *);
extern struct rb_node *rb_next_postorder( struct rb_node *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *_new,
       struct rb_root *root);

static inline void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->__rb_parent_color = (unsigned long)parent;
 node->rb_left = node->rb_right = 0;

 *rb_link = node;
}

struct vm_area_struct;
struct vm_struct {
 struct vm_struct *next;
 void *addr;
 unsigned long size;
 unsigned long flags;
 struct page **pages;
 unsigned int nr_pages;
 phys_addr_t phys_addr;
 void *caller;
};

struct vmap_area {
 unsigned long va_start;
 unsigned long va_end;
 unsigned long flags;
 struct rb_node rb_node;
 struct list_head list;
 struct list_head purge_list;
 struct vm_struct *vm;
 struct callback_head callback_head;
};




extern void vm_unmap_ram( void *mem, unsigned int count);
extern void *vm_map_ram(struct page **pages, unsigned int count,
    int node, pgprot_t prot);
extern void vm_unmap_aliases(void);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) vmalloc_init(void);






extern void *vmalloc(unsigned long size);
extern void *vzalloc(unsigned long size);
extern void *vmalloc_user(unsigned long size);
extern void *vmalloc_node(unsigned long size, int node);
extern void *vzalloc_node(unsigned long size, int node);
extern void *vmalloc_exec(unsigned long size);
extern void *vmalloc_32(unsigned long size);
extern void *vmalloc_32_user(unsigned long size);
extern void *__vmalloc(unsigned long size, gfp_t gfp_mask, pgprot_t prot);
extern void *__vmalloc_node_range(unsigned long size, unsigned long align,
   unsigned long start, unsigned long end, gfp_t gfp_mask,
   pgprot_t prot, int node, void *caller);
extern void vfree( void *addr);

extern void *vmap(struct page **pages, unsigned int count,
   unsigned long flags, pgprot_t prot);
extern void vunmap( void *addr);

extern int remap_vmalloc_range_partial(struct vm_area_struct *vma,
           unsigned long uaddr, void *kaddr,
           unsigned long size);

extern int remap_vmalloc_range(struct vm_area_struct *vma, void *addr,
       unsigned long pgoff);
void vmalloc_sync_all(void);





static inline size_t get_vm_area_size( struct vm_struct *area)
{

 return area->size - ((1UL) << 12);
}

extern struct vm_struct *get_vm_area(unsigned long size, unsigned long flags);
extern struct vm_struct *get_vm_area_caller(unsigned long size,
     unsigned long flags, void *caller);
extern struct vm_struct *__get_vm_area(unsigned long size, unsigned long flags,
     unsigned long start, unsigned long end);
extern struct vm_struct *__get_vm_area_caller(unsigned long size,
     unsigned long flags,
     unsigned long start, unsigned long end,
     void *caller);
extern struct vm_struct *remove_vm_area( void *addr);
extern struct vm_struct *find_vm_area( void *addr);

extern int map_vm_area(struct vm_struct *area, pgprot_t prot,
   struct page ***pages);

extern int map_kernel_range_noflush(unsigned long start, unsigned long size,
        pgprot_t prot, struct page **pages);
extern void unmap_kernel_range_noflush(unsigned long addr, unsigned long size);
extern void unmap_kernel_range(unsigned long addr, unsigned long size);
extern struct vm_struct *alloc_vm_area(size_t size, pte_t **ptes);
extern void free_vm_area(struct vm_struct *area);


extern long vread(char *buf, char *addr, unsigned long count);
extern long vwrite(char *buf, char *addr, unsigned long count);




extern struct list_head vmap_area_list;
extern __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) void vm_area_add_early(struct vm_struct *vm);
extern __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) void vm_area_register_early(struct vm_struct *vm, size_t align);



struct vm_struct **pcpu_get_vm_areas( unsigned long *offsets,
         size_t *sizes, int nr_vms,
         size_t align);

void pcpu_free_vm_areas(struct vm_struct **vms, int nr_vms);
struct vmalloc_info {
 unsigned long used;
 unsigned long largest_chunk;
};



extern void get_vmalloc_info(struct vmalloc_info *vmi);






static inline void
memset_io( void *addr, unsigned char val, size_t count)
{
 memset((void *)addr, val, count);
}

static inline void
memcpy_fromio(void *dst, void *src, size_t count)
{
 memcpy(dst, ( void *)src, count);
}

static inline void
memcpy_toio( void *dst, void *src, size_t count)
{
 memcpy((void *)dst, src, count);
}
static inline void flush_write_buffers(void)
{



}



extern void native_io_delay(void);

extern int io_delay_type;
extern void io_delay_init(void);
static inline void outb(unsigned char value, int port) { asm ("out" "b" " %" "b" "0, %w1" : : "a"(value), "Nd"(port)); } static inline unsigned char inb(int port) { unsigned char value; asm ("in" "b" " %w1, %" "b" "0" : "=a"(value) : "Nd"(port)); return value; } static inline void outb_p(unsigned char value, int port) { outb(value, port); slow_down_io(); } static inline unsigned char inb_p(int port) { unsigned char value = inb(port); slow_down_io(); return value; } static inline void outsb(int port, void *addr, unsigned long count) { asm ("rep; outs" "b" : "+S"(addr), "+c"(count) : "d"(port)); } static inline void insb(int port, void *addr, unsigned long count) { asm ("rep; ins" "b" : "+D"(addr), "+c"(count) : "d"(port)); }
static inline void outw(unsigned short value, int port) { asm ("out" "w" " %" "w" "0, %w1" : : "a"(value), "Nd"(port)); } static inline unsigned short inw(int port) { unsigned short value; asm ("in" "w" " %w1, %" "w" "0" : "=a"(value) : "Nd"(port)); return value; } static inline void outw_p(unsigned short value, int port) { outw(value, port); slow_down_io(); } static inline unsigned short inw_p(int port) { unsigned short value = inw(port); slow_down_io(); return value; } static inline void outsw(int port, void *addr, unsigned long count) { asm ("rep; outs" "w" : "+S"(addr), "+c"(count) : "d"(port)); } static inline void insw(int port, void *addr, unsigned long count) { asm ("rep; ins" "w" : "+D"(addr), "+c"(count) : "d"(port)); }
static inline void outl(unsigned int value, int port) { asm ("out" "l" " %" "" "0, %w1" : : "a"(value), "Nd"(port)); } static inline unsigned int inl(int port) { unsigned int value; asm ("in" "l" " %w1, %" "" "0" : "=a"(value) : "Nd"(port)); return value; } static inline void outl_p(unsigned int value, int port) { outl(value, port); slow_down_io(); } static inline unsigned int inl_p(int port) { unsigned int value = inl(port); slow_down_io(); return value; } static inline void outsl(int port, void *addr, unsigned long count) { asm ("rep; outs" "l" : "+S"(addr), "+c"(count) : "d"(port)); } static inline void insl(int port, void *addr, unsigned long count) { asm ("rep; ins" "l" : "+D"(addr), "+c"(count) : "d"(port)); }

extern void *xlate_dev_mem_ptr(unsigned long phys);
extern void unxlate_dev_mem_ptr(unsigned long phys, void *addr);

extern int ioremap_change_attr(unsigned long vaddr, unsigned long size,
    unsigned long prot_val);
extern void *ioremap_wc(resource_size_t offset, unsigned long size);






extern void early_ioremap_init(void);
extern void early_ioremap_reset(void);
extern void *early_ioremap(resource_size_t phys_addr,
       unsigned long size);
extern void *early_memremap(resource_size_t phys_addr,
        unsigned long size);
extern void early_iounmap(void *addr, unsigned long size);
extern void fixup_early_ioremap(void);
extern bool is_early_ioremap_ptep(pte_t *ptep);





enum xen_domain_type {
 XEN_NATIVE,
 XEN_PV_DOMAIN,
 XEN_HVM_DOMAIN,
};


extern enum xen_domain_type xen_domain_type;
typedef unsigned long xen_pfn_t;

typedef unsigned long xen_ulong_t;


typedef unsigned char * __guest_handle_uchar;
typedef unsigned int * __guest_handle_uint;
typedef char * __guest_handle_char;
typedef int * __guest_handle_int;
typedef void * __guest_handle_void;
typedef uint64_t * __guest_handle_uint64_t;
typedef uint32_t * __guest_handle_uint32_t;
typedef xen_pfn_t * __guest_handle_xen_pfn_t;
typedef xen_ulong_t * __guest_handle_xen_ulong_t;
struct trap_info {
    uint8_t vector;
    uint8_t flags;
    uint16_t cs;
    unsigned long address;
};
typedef struct trap_info * __guest_handle_trap_info;

struct arch_shared_info {
    unsigned long max_pfn;

    unsigned long pfn_to_mfn_frame_list_list;
    unsigned long nmi_reason;
};





struct iret_context {

    uint64_t rax, r11, rcx, flags, rip, cs, rflags, rsp, ss;

};
struct cpu_user_regs {
    uint64_t r15;
    uint64_t r14;
    uint64_t r13;
    uint64_t r12;
    union { uint64_t rbp, ebp; uint32_t _ebp; };
    union { uint64_t rbx, ebx; uint32_t _ebx; };
    uint64_t r11;
    uint64_t r10;
    uint64_t r9;
    uint64_t r8;
    union { uint64_t rax, eax; uint32_t _eax; };
    union { uint64_t rcx, ecx; uint32_t _ecx; };
    union { uint64_t rdx, edx; uint32_t _edx; };
    union { uint64_t rsi, esi; uint32_t _esi; };
    union { uint64_t rdi, edi; uint32_t _edi; };
    uint32_t error_code;
    uint32_t entry_vector;
    union { uint64_t rip, eip; uint32_t _eip; };
    uint16_t cs, _pad0[1];
    uint8_t saved_upcall_mask;
    uint8_t _pad1[3];
    union { uint64_t rflags, eflags; uint32_t _eflags; };
    union { uint64_t rsp, esp; uint32_t _esp; };
    uint16_t ss, _pad2[3];
    uint16_t es, _pad3[3];
    uint16_t ds, _pad4[3];
    uint16_t fs, _pad5[3];
    uint16_t gs, _pad6[3];
};
typedef struct cpu_user_regs * __guest_handle_cpu_user_regs;






struct arch_vcpu_info {
    unsigned long cr2;
    unsigned long pad;
};

typedef unsigned long xen_callback_t;


struct pvclock_vcpu_time_info {
 u32 version;
 u32 pad0;
 u64 tsc_timestamp;
 u64 system_time;
 u32 tsc_to_system_mul;
 s8 tsc_shift;
 u8 flags;
 u8 pad[2];
} __attribute__((__packed__));

struct pvclock_wall_clock {
 u32 version;
 u32 sec;
 u32 nsec;
} __attribute__((__packed__));






struct vcpu_guest_context {

    struct { char x[512]; } fpu_ctxt;



    unsigned long flags;
    struct cpu_user_regs user_regs;
    struct trap_info trap_ctxt[256];
    unsigned long ldt_base, ldt_ents;
    unsigned long gdt_frames[16], gdt_ents;
    unsigned long kernel_ss, kernel_sp;

    unsigned long ctrlreg[8];
    unsigned long debugreg[8];






    unsigned long event_callback_eip;
    unsigned long failsafe_callback_eip;
    unsigned long syscall_callback_eip;

    unsigned long vm_assist;


    uint64_t fs_base;
    uint64_t gs_base_kernel;
    uint64_t gs_base_user;

};
typedef struct vcpu_guest_context * __guest_handle_vcpu_guest_context;
struct mmuext_op {
 unsigned int cmd;
 union {

  xen_pfn_t mfn;

  unsigned long linear_addr;
 } arg1;
 union {

  unsigned int nr_ents;

  void *vcpumask;
 } arg2;
};
typedef struct mmuext_op * __guest_handle_mmuext_op;
typedef uint16_t domid_t;
struct mmu_update {
    uint64_t ptr;
    uint64_t val;
};
typedef struct mmu_update * __guest_handle_mmu_update;





struct multicall_entry {
    unsigned long op;
    long result;
    unsigned long args[6];
};
typedef struct multicall_entry * __guest_handle_multicall_entry;







struct vcpu_time_info {
 uint32_t version;
 uint32_t pad0;
 uint64_t tsc_timestamp;
 uint64_t system_time;






 uint32_t tsc_to_system_mul;
 int8_t tsc_shift;
 int8_t pad1[3];
};

struct vcpu_info {
 uint8_t evtchn_upcall_pending;
 uint8_t evtchn_upcall_mask;
 xen_ulong_t evtchn_pending_sel;
 struct arch_vcpu_info arch;
 struct pvclock_vcpu_time_info time;
};





struct shared_info {
 struct vcpu_info vcpu_info[32];
 xen_ulong_t evtchn_pending[sizeof(xen_ulong_t) * 8];
 xen_ulong_t evtchn_mask[sizeof(xen_ulong_t) * 8];





 struct pvclock_wall_clock wc;

 struct arch_shared_info arch;

};
struct start_info {

 char magic[32];
 unsigned long nr_pages;
 unsigned long shared_info;
 uint32_t flags;
 xen_pfn_t store_mfn;
 uint32_t store_evtchn;
 union {
  struct {
   xen_pfn_t mfn;
   uint32_t evtchn;
  } domU;
  struct {
   uint32_t info_off;
   uint32_t info_size;
  } dom0;
 } console;

 unsigned long pt_base;
 unsigned long nr_pt_frames;
 unsigned long mfn_list;
 unsigned long mod_start;
 unsigned long mod_len;
 int8_t cmd_line[1024];
};

struct dom0_vga_console_info {
 uint8_t video_type;




 union {
  struct {

   uint16_t font_height;

   uint16_t cursor_x, cursor_y;

   uint16_t rows, columns;
  } text_mode_3;

  struct {

   uint16_t width, height;

   uint16_t bytes_per_line;

   uint16_t bits_per_pixel;

   uint32_t lfb_base;
   uint32_t lfb_size;

   uint8_t red_pos, red_size;
   uint8_t green_pos, green_size;
   uint8_t blue_pos, blue_size;
   uint8_t rsvd_pos, rsvd_size;


   uint32_t gbl_caps;

   uint16_t mode_attrs;
  } vesa_lfb;
 } u;
};






typedef uint64_t cpumap_t;

typedef uint8_t xen_domain_handle_t[16];







struct tmem_op {
 uint32_t cmd;
 int32_t pool_id;
 union {
  struct {
   uint64_t uuid[2];
   uint32_t flags;
  } _new;
  struct {
   uint64_t oid[3];
   uint32_t index;
   uint32_t tmem_offset;
   uint32_t pfn_offset;
   uint32_t len;
   __guest_handle_void gmfn;
  } gen;
 } u;
};

typedef u64 * __guest_handle_u64;
extern struct shared_info *HYPERVISOR_shared_info;
extern struct start_info *xen_start_info;



static inline uint32_t xen_cpuid_base(void)
{
 return hypervisor_cpuid_base("XenVMMXenVMM", 2);
}


extern bool xen_hvm_need_lapic(void);

static inline bool xen_x2apic_para_available(void)
{
 return xen_hvm_need_lapic();
}
struct bio_vec;

extern bool xen_biovec_phys_mergeable( struct bio_vec *vec1,
          struct bio_vec *vec2);
extern int arch_phys_wc_add(unsigned long base,
      unsigned long size);
extern void arch_phys_wc_del(int handle);


struct real_mode_header {
 u32 text_start;
 u32 ro_end;

 u32 trampoline_start;
 u32 trampoline_status;
 u32 trampoline_header;

 u32 trampoline_pgd;



 u32 wakeup_start;
 u32 wakeup_header;


 u32 machine_real_restart_asm;

 u32 machine_real_restart_seg;

};


struct trampoline_header {






 u64 start;
 u64 efer;
 u32 cr4;

};

extern struct real_mode_header *real_mode_header;
extern unsigned char real_mode_blob_end[];

extern unsigned long init_rsp;
extern unsigned long initial_code;
extern unsigned long initial_gs;

extern unsigned char real_mode_blob[];
extern unsigned char real_mode_relocs[];





extern unsigned char secondary_startup_64[];


void reserve_real_mode(void);
void setup_real_mode(void);
int __acpi_acquire_global_lock(unsigned int *lock);
int __acpi_release_global_lock(unsigned int *lock);
extern int acpi_lapic;
extern int acpi_ioapic;
extern int acpi_noirq;
extern int acpi_strict;
extern int acpi_disabled;
extern int acpi_pci_disabled;
extern int acpi_skip_timer_override;
extern int acpi_use_timer_override;
extern int acpi_fix_pin2_polarity;
extern int acpi_disable_cmcff;

extern u8 acpi_sci_flags;
extern int acpi_sci_override_gsi;
void acpi_pic_sci_set_trigger(unsigned int, u16);

extern int (*__acpi_register_gsi)(struct device *dev, u32 gsi,
      int trigger, int polarity);

static inline void disable_acpi(void)
{
 acpi_disabled = 1;
 acpi_pci_disabled = 1;
 acpi_noirq = 1;
}

extern int acpi_gsi_to_irq(u32 gsi, unsigned int *irq);

static inline void acpi_noirq_set(void) { acpi_noirq = 1; }
static inline void acpi_disable_pci(void)
{
 acpi_pci_disabled = 1;
 acpi_noirq_set();
}


extern int (*acpi_suspend_lowlevel)(void);







static inline unsigned int acpi_processor_cstate_check(unsigned int max_cstate)
{






 if (boot_cpu_data.x86 == 0x0F &&
     boot_cpu_data.x86_vendor == 2 &&
     boot_cpu_data.x86_model <= 0x05 &&
     boot_cpu_data.x86_mask < 0x0A)
  return 1;
 else if (amd_e400_c1e_detected)
  return 1;
 else
  return max_cstate;
}

static inline bool arch_has_acpi_pdc(void)
{
 struct cpuinfo_x86 *c = &(*({ do { void *__vpp_verify = (typeof(((&(cpu_info))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_info))) *)(&(cpu_info)))); (typeof((typeof(*(&(cpu_info))) *)(&(cpu_info)))) (__ptr + (((__per_cpu_offset[0])))); }); }));
 return (c->x86_vendor == 0 ||
  c->x86_vendor == 5);
}

static inline void arch_acpi_set_pdc_bits(u32 *buf)
{
 struct cpuinfo_x86 *c = &(*({ do { void *__vpp_verify = (typeof(((&(cpu_info))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_info))) *)(&(cpu_info)))); (typeof((typeof(*(&(cpu_info))) *)(&(cpu_info)))) (__ptr + (((__per_cpu_offset[0])))); }); }));

 buf[2] |= ((0x0010) | (0x0008) | (0x0002) | (0x0100) | (0x0200));

 if ((__builtin_constant_p((4*32+ 7)) && ( ((((4*32+ 7))>>5)==0 && (1UL<<(((4*32+ 7))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((4*32+ 7))>>5)==1 && (1UL<<(((4*32+ 7))&31) & ((1<<((1*32+29) & 31))|0))) || ((((4*32+ 7))>>5)==2 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==3 && (1UL<<(((4*32+ 7))&31) & ((1<<((3*32+20) & 31))))) || ((((4*32+ 7))>>5)==4 && (1UL<<(((4*32+ 7))&31) & (0))) || ((((4*32+ 7))>>5)==5 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==6 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==7 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==8 && (1UL<<(((4*32+ 7))&31) & 0)) || ((((4*32+ 7))>>5)==9 && (1UL<<(((4*32+ 7))&31) & 0)) ) ? 1 : (__builtin_constant_p(((4*32+ 7))) ? constant_test_bit(((4*32+ 7)), ((unsigned long *)((c)->x86_capability))) : variable_test_bit(((4*32+ 7)), ((unsigned long *)((c)->x86_capability))))))
  buf[2] |= ((0x0008) | (0x0002) | (0x0020) | (0x0800) | (0x0001));

 if ((__builtin_constant_p((0*32+22)) && ( ((((0*32+22))>>5)==0 && (1UL<<(((0*32+22))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+22))>>5)==1 && (1UL<<(((0*32+22))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+22))>>5)==2 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==3 && (1UL<<(((0*32+22))&31) & ((1<<((3*32+20) & 31))))) || ((((0*32+22))>>5)==4 && (1UL<<(((0*32+22))&31) & (0))) || ((((0*32+22))>>5)==5 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==6 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==7 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==8 && (1UL<<(((0*32+22))&31) & 0)) || ((((0*32+22))>>5)==9 && (1UL<<(((0*32+22))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+22))) ? constant_test_bit(((0*32+22)), ((unsigned long *)((c)->x86_capability))) : variable_test_bit(((0*32+22)), ((unsigned long *)((c)->x86_capability))))))
  buf[2] |= (0x0004);




 if (!(__builtin_constant_p((4*32+ 3)) && ( ((((4*32+ 3))>>5)==0 && (1UL<<(((4*32+ 3))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((4*32+ 3))>>5)==1 && (1UL<<(((4*32+ 3))&31) & ((1<<((1*32+29) & 31))|0))) || ((((4*32+ 3))>>5)==2 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==3 && (1UL<<(((4*32+ 3))&31) & ((1<<((3*32+20) & 31))))) || ((((4*32+ 3))>>5)==4 && (1UL<<(((4*32+ 3))&31) & (0))) || ((((4*32+ 3))>>5)==5 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==6 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==7 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==8 && (1UL<<(((4*32+ 3))&31) & 0)) || ((((4*32+ 3))>>5)==9 && (1UL<<(((4*32+ 3))&31) & 0)) ) ? 1 : (__builtin_constant_p(((4*32+ 3))) ? constant_test_bit(((4*32+ 3)), ((unsigned long *)((c)->x86_capability))) : variable_test_bit(((4*32+ 3)), ((unsigned long *)((c)->x86_capability))))))
  buf[2] &= ~((0x0200));
}
extern int acpi_numa;
extern int x86_acpi_numa_init(void);





typedef u64 cycle_t;
struct clocksource;
struct module;


struct arch_clocksource_data {
 int vclock_mode;
};
struct cyclecounter {
 cycle_t (*read)( struct cyclecounter *cc);
 cycle_t mask;
 u32 mult;
 u32 shift;
};
struct timecounter {
 struct cyclecounter *cc;
 cycle_t cycle_last;
 u64 nsec;
};
static inline u64 cyclecounter_cyc2ns( struct cyclecounter *cc,
          cycle_t cycles)
{
 u64 ret = (u64)cycles;
 ret = (ret * cc->mult) >> cc->shift;
 return ret;
}
extern void timecounter_init(struct timecounter *tc,
        struct cyclecounter *cc,
        u64 start_tstamp);
extern u64 timecounter_read(struct timecounter *tc);
extern u64 timecounter_cyc2time(struct timecounter *tc,
    cycle_t cycle_tstamp);
struct clocksource {




 cycle_t (*read)(struct clocksource *cs);
 cycle_t cycle_last;
 cycle_t mask;
 u32 mult;
 u32 shift;
 u64 max_idle_ns;
 u32 maxadj;

 struct arch_clocksource_data archdata;


 char *name;
 struct list_head list;
 int rating;
 int (*enable)(struct clocksource *cs);
 void (*disable)(struct clocksource *cs);
 unsigned long flags;
 void (*suspend)(struct clocksource *cs);
 void (*resume)(struct clocksource *cs);




 struct list_head wd_list;
 cycle_t cs_last;
 cycle_t wd_last;

 struct module *owner;
} __attribute__((__aligned__((1 << (6)))));
static inline u32 clocksource_khz2mult(u32 khz, u32 shift_constant)
{







 u64 tmp = ((u64)1000000) << shift_constant;

 tmp += khz/2;
 ({ uint32_t __base = (khz); uint32_t __rem; __rem = ((uint64_t)(tmp)) % __base; (tmp) = ((uint64_t)(tmp)) / __base; __rem; });

 return (u32)tmp;
}
static inline u32 clocksource_hz2mult(u32 hz, u32 shift_constant)
{







 u64 tmp = ((u64)1000000000) << shift_constant;

 tmp += hz/2;
 ({ uint32_t __base = (hz); uint32_t __rem; __rem = ((uint64_t)(tmp)) % __base; (tmp) = ((uint64_t)(tmp)) / __base; __rem; });

 return (u32)tmp;
}
static inline s64 clocksource_cyc2ns(cycle_t cycles, u32 mult, u32 shift)
{
 return ((u64) cycles * mult) >> shift;
}


extern int clocksource_register(struct clocksource*);
extern int clocksource_unregister(struct clocksource*);
extern void clocksource_touch_watchdog(void);
extern struct clocksource* clocksource_get_next(void);
extern void clocksource_change_rating(struct clocksource *cs, int rating);
extern void clocksource_suspend(void);
extern void clocksource_resume(void);
extern struct clocksource * __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) __attribute__((weak)) clocksource_default_clock(void);
extern void clocksource_mark_unstable(struct clocksource *cs);

extern u64
clocks_calc_max_nsecs(u32 mult, u32 shift, u32 maxadj, u64 mask);
extern void
clocks_calc_mult_shift(u32 *mult, u32 *shift, u32 from, u32 to, u32 minsec);





extern int
__clocksource_register_scale(struct clocksource *cs, u32 scale, u32 freq);
extern void
__clocksource_updatefreq_scale(struct clocksource *cs, u32 scale, u32 freq);

static inline int clocksource_register_hz(struct clocksource *cs, u32 hz)
{
 return __clocksource_register_scale(cs, 1, hz);
}

static inline int clocksource_register_khz(struct clocksource *cs, u32 khz)
{
 return __clocksource_register_scale(cs, 1000, khz);
}

static inline void __clocksource_updatefreq_hz(struct clocksource *cs, u32 hz)
{
 __clocksource_updatefreq_scale(cs, 1, hz);
}

static inline void __clocksource_updatefreq_khz(struct clocksource *cs, u32 khz)
{
 __clocksource_updatefreq_scale(cs, 1000, khz);
}


extern int timekeeping_notify(struct clocksource *clock);

extern cycle_t clocksource_mmio_readl_up(struct clocksource *);
extern cycle_t clocksource_mmio_readl_down(struct clocksource *);
extern cycle_t clocksource_mmio_readw_up(struct clocksource *);
extern cycle_t clocksource_mmio_readw_down(struct clocksource *);

extern int clocksource_mmio_init(void *, char *,
 unsigned long, int, unsigned, cycle_t (*)(struct clocksource *));

extern int clocksource_i8253_init(void);

struct device_node;
typedef void(*clocksource_of_init_fn)(struct device_node *);
static inline void clocksource_of_init(void) {}



cycle_t pvclock_clocksource_read(struct pvclock_vcpu_time_info *src);
u8 pvclock_read_flags(struct pvclock_vcpu_time_info *src);
void pvclock_set_flags(u8 flags);
unsigned long pvclock_tsc_khz(struct pvclock_vcpu_time_info *src);
void pvclock_read_wallclock(struct pvclock_wall_clock *wall,
       struct pvclock_vcpu_time_info *vcpu,
       struct timespec *ts);
void pvclock_resume(void);

void pvclock_touch_watchdogs(void);





static inline u64 pvclock_scale_delta(u64 delta, u32 mul_frac, int shift)
{
 u64 product;



 ulong tmp;


 if (shift < 0)
  delta >>= -shift;
 else
  delta <<= shift;
 __asm__ (
  "mulq %[mul_frac] ; shrd $32, %[hi], %[lo]"
  : [lo]"=a"(product),
    [hi]"=d"(tmp)
  : "0"(delta),
    [mul_frac]"rm"((u64)mul_frac));




 return product;
}

static inline __attribute__((always_inline))
u64 pvclock_get_nsec_offset( struct pvclock_vcpu_time_info *src)
{
 u64 delta = __native_read_tsc() - src->tsc_timestamp;
 return pvclock_scale_delta(delta, src->tsc_to_system_mul,
       src->tsc_shift);
}

static inline __attribute__((always_inline))
unsigned __pvclock_read_cycles( struct pvclock_vcpu_time_info *src,
          cycle_t *cycles, u8 *flags)
{
 unsigned version;
 cycle_t ret, offset;
 u8 ret_flags;

 version = src->version;






 rdtsc_barrier();
 offset = pvclock_get_nsec_offset(src);
 ret = src->system_time + offset;
 ret_flags = src->flags;
 rdtsc_barrier();

 *cycles = ret;
 *flags = ret_flags;
 return version;
}

struct pvclock_vsyscall_time_info {
 struct pvclock_vcpu_time_info pvti;
} __attribute__((__aligned__((1 << (6)))));




int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) pvclock_init_vsyscall(struct pvclock_vsyscall_time_info *i,
     int size);
struct pvclock_vcpu_time_info *pvclock_get_vsyscall_time_info(int cpu);











enum vsyscall_num {
 __NR_vgettimeofday,
 __NR_vtime,
 __NR_vgetcpu,
};





extern int vgetcpu_mode;
extern struct timezone sys_tz;

static unsigned long * vvaraddr_jiffies = (void *)((-10*1024*1024 - 4096) + (0));
static int * vvaraddr_vgetcpu_mode = (void *)((-10*1024*1024 - 4096) + (16));
static struct vsyscall_gtod_data * vvaraddr_vsyscall_gtod_data = (void *)((-10*1024*1024 - 4096) + (128));

extern void map_vsyscall(void);





extern bool emulate_vsyscall(struct pt_regs *regs, unsigned long address);





static inline unsigned int __getcpu(void)
{
 unsigned int p;

 if ((*vvaraddr_vgetcpu_mode) == 1) {

  native_read_tscp(&p);
 } else {

  asm("lsl %1,%0" : "=r" (p) : "r" ((15 * 8 + 3)));
 }

 return p;
}
enum fixed_addresses {




 VSYSCALL_LAST_PAGE,
 VSYSCALL_FIRST_PAGE = VSYSCALL_LAST_PAGE
       + (((-2UL << 20)-(-10UL << 20)) >> 12) - 1,
 VVAR_PAGE,
 VSYSCALL_HPET,

 PVCLOCK_FIXMAP_BEGIN,
 PVCLOCK_FIXMAP_END = PVCLOCK_FIXMAP_BEGIN+(((256 -1)/(((1UL) << 12)/sizeof(struct pvclock_vsyscall_time_info)))+1)-1,


 FIX_DBGP_BASE,
 FIX_EARLYCON_MEM_BASE,




 FIX_APIC_BASE,


 FIX_IO_APIC_BASE_0,
 FIX_IO_APIC_BASE_END = FIX_IO_APIC_BASE_0 + 128 - 1,







 FIX_RO_IDT,
 FIX_PARAVIRT_BOOTMAP,

 FIX_TEXT_POKE1,
 FIX_TEXT_POKE0,



 __end_of_permanent_fixed_addresses,
 FIX_BTMAP_END =
  (__end_of_permanent_fixed_addresses ^
   (__end_of_permanent_fixed_addresses + (64 * 4) - 1)) &
  -512
  ? __end_of_permanent_fixed_addresses + (64 * 4) -
    (__end_of_permanent_fixed_addresses & ((64 * 4) - 1))
  : __end_of_permanent_fixed_addresses,
 FIX_BTMAP_BEGIN = FIX_BTMAP_END + (64 * 4) - 1,




 FIX_TBOOT_BASE,

 __end_of_fixed_addresses
};


extern void reserve_top_address(unsigned long reserve);






extern int fixmaps_set;

extern pte_t *kmap_pte;
extern pgprot_t kmap_prot;
extern pte_t *pkmap_page_table;

void __native_set_fixmap(enum fixed_addresses idx, pte_t pte);
void native_set_fixmap(enum fixed_addresses idx,
         phys_addr_t phys, pgprot_t flags);
extern void __this_fixmap_does_not_exist(void);






static inline __attribute__((always_inline)) unsigned long fix_to_virt( unsigned int idx)
{
 if (idx >= __end_of_fixed_addresses)
  __this_fixmap_does_not_exist();

 return (((-2UL << 20)-((1UL) << 12)) - ((idx) << 12));
}

static inline unsigned long virt_to_fix( unsigned long vaddr)
{
 (vaddr >= ((-2UL << 20)-((1UL) << 12)) || vaddr < (((-2UL << 20)-((1UL) << 12)) - (__end_of_permanent_fixed_addresses << 12)));
 return ((((-2UL << 20)-((1UL) << 12)) - ((vaddr)&(~(((1UL) << 12)-1)))) >> 12);
}


static inline __attribute__((always_inline)) unsigned long
__set_fixmap_offset(enum fixed_addresses idx, phys_addr_t phys, pgprot_t flags)
{
 __set_fixmap(idx, phys, flags);
 return fix_to_virt(idx) + (phys & (((1UL) << 12) - 1));
}








struct notifier_block;
void idle_notifier_register(struct notifier_block *n);
void idle_notifier_unregister(struct notifier_block *n);


void enter_idle(void);
void exit_idle(void);






void amd_e400_remove_cpu(int cpu);
static inline void generic_apic_probe(void)
{
}




extern unsigned int apic_verbosity;
extern int local_apic_timer_c2_ok;

extern int disable_apic;
extern unsigned int lapic_timer_frequency;


extern void __inquire_remote_apic(int apicid);






static inline void default_inquire_remote_apic(int apicid)
{
 if (apic_verbosity >= 2)
  __inquire_remote_apic(apicid);
}
static inline bool apic_from_smp_config(void)
{
 return smp_found_config && !disable_apic;
}
extern int is_vsmp_box(void);






extern void xapic_wait_icr_idle(void);
extern u32 safe_xapic_wait_icr_idle(void);
extern void xapic_icr_write(u32, u32);
extern int setup_profiling_timer(unsigned int);

static inline void native_apic_mem_write(u32 reg, u32 v)
{
 u32 *addr = ( u32 *)((fix_to_virt(FIX_APIC_BASE)) + reg);

 asm ("661:\n\t" "movl %0, %1" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(3*32+19)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" "xchgl %0, %1" "\n" "664""1" ":\n\t" ".popsection" : "=r" (v), "=m" (*addr) : "i" (0), "0" (v), "m" (*addr))

                                           ;
}

static inline u32 native_apic_mem_read(u32 reg)
{
 return *(( u32 *)((fix_to_virt(FIX_APIC_BASE)) + reg));
}

extern void native_apic_wait_icr_idle(void);
extern u32 native_safe_apic_wait_icr_idle(void);
extern void native_apic_icr_write(u32 low, u32 id);
extern u64 native_apic_icr_read(void);

extern int x2apic_mode;







static inline void x2apic_wrmsr_fence(void)
{
 asm ("mfence" : : : "memory");
}

static inline void native_apic_msr_write(u32 reg, u32 v)
{
 if (reg == 0xE0 || reg == 0x20 || reg == 0xD0 ||
     reg == 0x30)
  return;

 do { paravirt_write_msr(0x800 + (reg >> 4), v, 0); } while (0);
}

static inline void native_apic_msr_eoi_write(u32 reg, u32 v)
{
 do { paravirt_write_msr(0x800 + (0xB0 >> 4), 0x0, 0); } while (0);
}

static inline u32 native_apic_msr_read(u32 reg)
{
 u64 msr;

 if (reg == 0xE0)
  return -1;

 do { int _err; msr = paravirt_read_msr(0x800 + (reg >> 4), &_err); } while (0);
 return (u32)msr;
}

static inline void native_x2apic_wait_icr_idle(void)
{

 return;
}

static inline u32 native_safe_x2apic_wait_icr_idle(void)
{

 return 0;
}

static inline void native_x2apic_icr_write(u32 low, u32 id)
{
 do { paravirt_write_msr(0x800 + (0x300 >> 4), (u32)((u64)(((__u64) id) << 32 | low)), ((u64)(((__u64) id) << 32 | low))>>32); } while (0);
}

static inline u64 native_x2apic_icr_read(void)
{
 unsigned long val;

 do { int _err; val = paravirt_read_msr(0x800 + (0x300 >> 4), &_err); } while (0);
 return val;
}

extern int x2apic_phys;
extern int x2apic_preenabled;
extern void check_x2apic(void);
extern void enable_x2apic(void);
extern void x2apic_icr_write(u32 low, u32 id);
static inline int x2apic_enabled(void)
{
 u64 msr;

 if (!(__builtin_constant_p((4*32+21)) && ( ((((4*32+21))>>5)==0 && (1UL<<(((4*32+21))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((4*32+21))>>5)==1 && (1UL<<(((4*32+21))&31) & ((1<<((1*32+29) & 31))|0))) || ((((4*32+21))>>5)==2 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==3 && (1UL<<(((4*32+21))&31) & ((1<<((3*32+20) & 31))))) || ((((4*32+21))>>5)==4 && (1UL<<(((4*32+21))&31) & (0))) || ((((4*32+21))>>5)==5 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==6 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==7 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==8 && (1UL<<(((4*32+21))&31) & 0)) || ((((4*32+21))>>5)==9 && (1UL<<(((4*32+21))&31) & 0)) ) ? 1 : (__builtin_constant_p(((4*32+21))) ? constant_test_bit(((4*32+21)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((4*32+21)), ((unsigned long *)((&boot_cpu_data)->x86_capability))))))
  return 0;

 do { int _err; msr = paravirt_read_msr(0x0000001b, &_err); } while (0);
 if (msr & (1UL << 10))
  return 1;
 return 0;
}


static inline void x2apic_force_phys(void)
{
 x2apic_phys = 1;
}
extern void enable_IR_x2apic(void);

extern int get_physical_broadcast(void);

extern int lapic_get_maxlvt(void);
extern void clear_local_APIC(void);
extern void connect_bsp_APIC(void);
extern void disconnect_bsp_APIC(int virt_wire_setup);
extern void disable_local_APIC(void);
extern void lapic_shutdown(void);
extern int verify_local_APIC(void);
extern void sync_Arb_IDs(void);
extern void init_bsp_APIC(void);
extern void setup_local_APIC(void);
extern void end_local_APIC_setup(void);
extern void bsp_end_local_APIC_setup(void);
extern void init_apic_mappings(void);
void register_lapic_address(unsigned long address);
extern void setup_boot_APIC_clock(void);
extern void setup_secondary_APIC_clock(void);
extern int APIC_init_uniprocessor(void);
extern int apic_force_enable(unsigned long addr);





extern int apic_is_clustered_box(void);







extern int setup_APIC_eilvt(u8 lvt_off, u8 vector, u8 msg_type, u8 mask);
struct apic {
 char *name;

 int (*probe)(void);
 int (*acpi_madt_oem_check)(char *oem_id, char *oem_table_id);
 int (*apic_id_valid)(int apicid);
 int (*apic_id_registered)(void);

 u32 irq_delivery_mode;
 u32 irq_dest_mode;

 struct cpumask *(*target_cpus)(void);

 int disable_esr;

 int dest_logical;
 unsigned long (*check_apicid_used)(physid_mask_t *map, int apicid);
 unsigned long (*check_apicid_present)(int apicid);

 void (*vector_allocation_domain)(int cpu, struct cpumask *retmask,
      struct cpumask *mask);
 void (*init_apic_ldr)(void);

 void (*ioapic_phys_id_map)(physid_mask_t *phys_map, physid_mask_t *retmap);

 void (*setup_apic_routing)(void);
 int (*multi_timer_check)(int apic, int irq);
 int (*cpu_present_to_apicid)(int mps_cpu);
 void (*apicid_to_cpu_present)(int phys_apicid, physid_mask_t *retmap);
 void (*setup_portio_remap)(void);
 int (*check_phys_apicid_present)(int phys_apicid);
 void (*enable_apic_mode)(void);
 int (*phys_pkg_id)(int cpuid_apic, int index_msb);






 int (*mps_oem_check)(struct mpc_table *mpc, char *oem, char *productid);

 unsigned int (*get_apic_id)(unsigned long x);
 unsigned long (*set_apic_id)(unsigned int id);
 unsigned long apic_id_mask;

 int (*cpu_mask_to_apicid_and)( struct cpumask *cpumask,
          struct cpumask *andmask,
          unsigned int *apicid);


 void (*send_IPI_mask)( struct cpumask *mask, int vector);
 void (*send_IPI_mask_allbutself)( struct cpumask *mask,
      int vector);
 void (*send_IPI_allbutself)(int vector);
 void (*send_IPI_all)(int vector);
 void (*send_IPI_self)(int vector);


 int (*wakeup_secondary_cpu)(int apicid, unsigned long start_eip);

 int trampoline_phys_low;
 int trampoline_phys_high;

 void (*wait_for_init_deassert)(atomic_t *deassert);
 void (*smp_callin_clear_local_apic)(void);
 void (*inquire_remote_apic)(int apicid);


 u32 (*read)(u32 reg);
 void (*write)(u32 reg, u32 v);







 void (*eoi_write)(u32 reg, u32 v);
 u64 (*icr_read)(void);
 void (*icr_write)(u32 low, u32 high);
 void (*wait_icr_idle)(void);
 u32 (*safe_wait_icr_idle)(void);
};






extern struct apic *apic;
extern struct apic *__apicdrivers[], *__apicdrivers_end[];





extern atomic_t init_deasserted;
extern int wakeup_secondary_cpu_via_nmi(int apicid, unsigned long start_eip);




static inline u32 apic_read(u32 reg)
{
 return apic->read(reg);
}

static inline void apic_write(u32 reg, u32 val)
{
 apic->write(reg, val);
}

static inline void apic_eoi(void)
{
 apic->eoi_write(0xB0, 0x0);
}

static inline u64 apic_icr_read(void)
{
 return apic->icr_read();
}

static inline void apic_icr_write(u32 low, u32 high)
{
 apic->icr_write(low, high);
}

static inline void apic_wait_icr_idle(void)
{
 apic->wait_icr_idle();
}

static inline u32 safe_apic_wait_icr_idle(void)
{
 return apic->safe_wait_icr_idle();
}

extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) apic_set_eoi_write(void (*eoi_write)(u32 reg, u32 v));
static inline void ack_APIC_irq(void)
{




 apic_eoi();
}

static inline unsigned default_get_apic_id(unsigned long x)
{
 unsigned int ver = ((apic_read(0x30)) & 0xFFu);

 if (((ver) >= 0x14) || (__builtin_constant_p((3*32+26)) && ( ((((3*32+26))>>5)==0 && (1UL<<(((3*32+26))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((3*32+26))>>5)==1 && (1UL<<(((3*32+26))&31) & ((1<<((1*32+29) & 31))|0))) || ((((3*32+26))>>5)==2 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==3 && (1UL<<(((3*32+26))&31) & ((1<<((3*32+20) & 31))))) || ((((3*32+26))>>5)==4 && (1UL<<(((3*32+26))&31) & (0))) || ((((3*32+26))>>5)==5 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==6 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==7 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==8 && (1UL<<(((3*32+26))&31) & 0)) || ((((3*32+26))>>5)==9 && (1UL<<(((3*32+26))&31) & 0)) ) ? 1 : (__builtin_constant_p(((3*32+26))) ? constant_test_bit(((3*32+26)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((3*32+26)), ((unsigned long *)((&boot_cpu_data)->x86_capability))))))
  return (x >> 24) & 0xFF;
 else
  return (x >> 24) & 0x0F;
}
extern int default_acpi_madt_oem_check(char *, char *);

extern void apic_send_IPI_self(int vector);

extern __attribute__((section(".data..percpu" ""))) __typeof__(int) x2apic_extra_bits;

extern int default_cpu_present_to_apicid(int mps_cpu);
extern int default_check_phys_apicid_present(int phys_apicid);


static inline void default_wait_for_init_deassert(atomic_t *deassert)
{
 while (!atomic_read(deassert))
  cpu_relax();
 return;
}

extern void generic_bigsmp_probe(void);







static inline struct cpumask *default_target_cpus(void)
{

 return cpu_online_mask;



}

static inline struct cpumask *online_target_cpus(void)
{
 return cpu_online_mask;
}

extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(u16) x86_bios_cpu_apicid; extern __typeof__(u16) *x86_bios_cpu_apicid_early_ptr; extern __typeof__(u16) x86_bios_cpu_apicid_early_map[];


static inline unsigned int read_apic_id(void)
{
 unsigned int reg;

 reg = apic_read(0x20);

 return apic->get_apic_id(reg);
}

static inline int default_apic_id_valid(int apicid)
{
 return (apicid < 255);
}

extern void default_setup_apic_routing(void);

extern struct apic apic_noop;
static inline int
flat_cpu_mask_to_apicid_and( struct cpumask *cpumask,
       struct cpumask *andmask,
       unsigned int *apicid)
{
 unsigned long cpu_mask = ((cpumask)->bits)[0] &
     ((andmask)->bits)[0] &
     ((cpu_online_mask)->bits)[0] &
     0xFFu;

 if (__builtin_expect(!!(cpu_mask), 1)) {
  *apicid = (unsigned int)cpu_mask;
  return 0;
 } else {
  return -22;
 }
}

extern int
default_cpu_mask_to_apicid_and( struct cpumask *cpumask,
          struct cpumask *andmask,
          unsigned int *apicid);

static inline void
flat_vector_allocation_domain(int cpu, struct cpumask *retmask,
         struct cpumask *mask)
{
 cpumask_clear(retmask);
 ((retmask)->bits)[0] = 0xFFu;
}

static inline void
default_vector_allocation_domain(int cpu, struct cpumask *retmask,
     struct cpumask *mask)
{
 cpumask_copy(retmask, (get_cpu_mask(cpu)));
}

static inline unsigned long default_check_apicid_used(physid_mask_t *map, int apicid)
{
 return (__builtin_constant_p((apicid)) ? constant_test_bit((apicid), ((*map).mask)) : variable_test_bit((apicid), ((*map).mask)));
}

static inline unsigned long default_check_apicid_present(int bit)
{
 return (__builtin_constant_p((bit)) ? constant_test_bit((bit), ((phys_cpu_present_map).mask)) : variable_test_bit((bit), ((phys_cpu_present_map).mask)));
}

static inline void default_ioapic_phys_id_map(physid_mask_t *phys_map, physid_mask_t *retmap)
{
 *retmap = *phys_map;
}

static inline int __default_cpu_present_to_apicid(int mps_cpu)
{
 if (mps_cpu < nr_cpu_ids && (__builtin_constant_p((cpumask_check((mps_cpu)))) ? constant_test_bit((cpumask_check((mps_cpu))), ((((cpu_present_mask))->bits))) : variable_test_bit((cpumask_check((mps_cpu))), ((((cpu_present_mask))->bits)))))
  return (int)(*({ do { void *__vpp_verify = (typeof(((&(x86_bios_cpu_apicid))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(x86_bios_cpu_apicid))) *)(&(x86_bios_cpu_apicid)))); (typeof((typeof(*(&(x86_bios_cpu_apicid))) *)(&(x86_bios_cpu_apicid)))) (__ptr + (((__per_cpu_offset[mps_cpu])))); }); }));
 else
  return 0xFFFFu;
}

static inline int
__default_check_phys_apicid_present(int phys_apicid)
{
 return (__builtin_constant_p((phys_apicid)) ? constant_test_bit((phys_apicid), ((phys_cpu_present_map).mask)) : variable_test_bit((phys_apicid), ((phys_cpu_present_map).mask)));
}
extern int default_cpu_present_to_apicid(int mps_cpu);
extern int default_check_phys_apicid_present(int phys_apicid);



extern void irq_enter(void);
extern void irq_exit(void);

static inline void entering_irq(void)
{
 irq_enter();
 exit_idle();
}

static inline void entering_ack_irq(void)
{
 ack_APIC_irq();
 entering_irq();
}

static inline void exiting_irq(void)
{
 irq_exit();
}

static inline void exiting_ack_irq(void)
{
 irq_exit();

 ack_APIC_irq();
}

extern void ioapic_zap_locks(void);







static inline int invalid_vm86_irq(int irq)
{
 return irq < 3 || irq > 15;
}
union IO_APIC_reg_00 {
 u32 raw;
 struct {
  u32 __reserved_2 : 14,
   LTS : 1,
   delivery_type : 1,
   __reserved_1 : 8,
   ID : 8;
 } __attribute__ ((packed)) bits;
};

union IO_APIC_reg_01 {
 u32 raw;
 struct {
  u32 version : 8,
   __reserved_2 : 7,
   PRQ : 1,
   entries : 8,
   __reserved_1 : 8;
 } __attribute__ ((packed)) bits;
};

union IO_APIC_reg_02 {
 u32 raw;
 struct {
  u32 __reserved_2 : 24,
   arbitration : 4,
   __reserved_1 : 4;
 } __attribute__ ((packed)) bits;
};

union IO_APIC_reg_03 {
 u32 raw;
 struct {
  u32 boot_DT : 1,
   __reserved_1 : 31;
 } __attribute__ ((packed)) bits;
};

struct IO_APIC_route_entry {
 __u32 vector : 8,
  delivery_mode : 3,



  dest_mode : 1,
  delivery_status : 1,
  polarity : 1,
  irr : 1,
  trigger : 1,
  mask : 1,
  __reserved_2 : 15;

 __u32 __reserved_3 : 24,
  dest : 8;
} __attribute__ ((packed));

struct IR_IO_APIC_route_entry {
 __u64 vector : 8,
  zero : 3,
  index2 : 1,
  delivery_status : 1,
  polarity : 1,
  irr : 1,
  trigger : 1,
  mask : 1,
  reserved : 31,
  format : 1,
  index : 15;
} __attribute__ ((packed));
extern int nr_ioapics;

extern int mpc_ioapic_id(int ioapic);
extern unsigned int mpc_ioapic_addr(int ioapic);
extern struct mp_ioapic_gsi *mp_ioapic_gsi_routing(int ioapic);




extern int mp_irq_entries;


extern struct mpc_intsrc mp_irqs[(256 * 4)];


extern int mpc_default_type;


extern int sis_apic_bug;


extern int skip_ioapic_setup;


extern int noioapicquirk;


extern int noioapicreroute;


extern int timer_through_8259;
struct io_apic_irq_attr;
struct irq_cfg;
extern int io_apic_set_pci_routing(struct device *dev, int irq,
   struct io_apic_irq_attr *irq_attr);
void setup_IO_APIC_irq_extra(u32 gsi);
extern void ioapic_insert_resources(void);

extern int native_setup_ioapic_entry(int, struct IO_APIC_route_entry *,
         unsigned int, int,
         struct io_apic_irq_attr *);
extern int native_setup_ioapic_entry(int, struct IO_APIC_route_entry *,
         unsigned int, int,
         struct io_apic_irq_attr *);
extern void eoi_ioapic_irq(unsigned int irq, struct irq_cfg *cfg);

extern void native_compose_msi_msg(struct pci_dev *pdev,
       unsigned int irq, unsigned int dest,
       struct msi_msg *msg, u8 hpet_id);
extern void native_eoi_ioapic_pin(int apic, int pin, int vector);
int io_apic_setup_irq_pin_once(unsigned int irq, int node, struct io_apic_irq_attr *attr);

extern int save_ioapic_entries(void);
extern void mask_ioapic_entries(void);
extern int restore_ioapic_entries(void);

extern int get_nr_irqs_gsi(void);

extern void setup_ioapic_ids_from_mpc(void);
extern void setup_ioapic_ids_from_mpc_nocheck(void);

struct mp_ioapic_gsi{
 u32 gsi_base;
 u32 gsi_end;
};
extern struct mp_ioapic_gsi mp_gsi_routing[];
extern u32 gsi_top;
int mp_find_ioapic(u32 gsi);
int mp_find_ioapic_pin(int ioapic, u32 gsi);
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) mp_register_ioapic(int id, u32 address, u32 gsi_base);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) pre_init_apic_IRQ0(void);

extern void mp_save_irq(struct mpc_intsrc *m);

extern void disable_ioapic_support(void);

extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) native_io_apic_init_mappings(void);
extern unsigned int native_io_apic_read(unsigned int apic, unsigned int reg);
extern void native_io_apic_write(unsigned int apic, unsigned int reg, unsigned int val);
extern void native_io_apic_modify(unsigned int apic, unsigned int reg, unsigned int val);
extern void native_disable_io_apic(void);
extern void native_io_apic_print_entries(unsigned int apic, unsigned int nr_entries);
extern void intel_ir_io_apic_print_entries(unsigned int apic, unsigned int nr_entries);
extern int native_ioapic_set_affinity(struct irq_data *,
          struct cpumask *,
          bool);

static inline unsigned int io_apic_read(unsigned int apic, unsigned int reg)
{
 return x86_io_apic_ops.read(apic, reg);
}

static inline void io_apic_write(unsigned int apic, unsigned int reg, unsigned int value)
{
 x86_io_apic_ops.write(apic, reg, value);
}
static inline void io_apic_modify(unsigned int apic, unsigned int reg, unsigned int value)
{
 x86_io_apic_ops.modify(apic, reg, value);
}

extern void io_apic_eoi(unsigned int apic, unsigned int vector);






extern int smp_num_siblings;
extern unsigned int num_processors;

static inline bool cpu_has_ht_siblings(void)
{
 bool has_siblings = _false;

 has_siblings = (__builtin_constant_p((0*32+28)) && ( ((((0*32+28))>>5)==0 && (1UL<<(((0*32+28))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+28))>>5)==1 && (1UL<<(((0*32+28))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+28))>>5)==2 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==3 && (1UL<<(((0*32+28))&31) & ((1<<((3*32+20) & 31))))) || ((((0*32+28))>>5)==4 && (1UL<<(((0*32+28))&31) & (0))) || ((((0*32+28))>>5)==5 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==6 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==7 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==8 && (1UL<<(((0*32+28))&31) & 0)) || ((((0*32+28))>>5)==9 && (1UL<<(((0*32+28))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+28))) ? constant_test_bit(((0*32+28)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((0*32+28)), ((unsigned long *)((&boot_cpu_data)->x86_capability))))) && smp_num_siblings > 1;

 return has_siblings;
}

extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(cpumask_var_t) cpu_sibling_map;
extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(cpumask_var_t) cpu_core_map;

extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(cpumask_var_t) cpu_llc_shared_map;
extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(u16) cpu_llc_id;
extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(int) cpu_number;

static inline struct cpumask *cpu_sibling_mask(int cpu)
{
 return (*({ do { void *__vpp_verify = (typeof(((&(cpu_sibling_map))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_sibling_map))) *)(&(cpu_sibling_map)))); (typeof((typeof(*(&(cpu_sibling_map))) *)(&(cpu_sibling_map)))) (__ptr + (((__per_cpu_offset[cpu])))); }); }));
}

static inline struct cpumask *cpu_core_mask(int cpu)
{
 return (*({ do { void *__vpp_verify = (typeof(((&(cpu_core_map))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_core_map))) *)(&(cpu_core_map)))); (typeof((typeof(*(&(cpu_core_map))) *)(&(cpu_core_map)))) (__ptr + (((__per_cpu_offset[cpu])))); }); }));
}

static inline struct cpumask *cpu_llc_shared_mask(int cpu)
{
 return (*({ do { void *__vpp_verify = (typeof(((&(cpu_llc_shared_map))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(cpu_llc_shared_map))) *)(&(cpu_llc_shared_map)))); (typeof((typeof(*(&(cpu_llc_shared_map))) *)(&(cpu_llc_shared_map)))) (__ptr + (((__per_cpu_offset[cpu])))); }); }));
}

extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(u16) x86_cpu_to_apicid; extern __typeof__(u16) *x86_cpu_to_apicid_early_ptr; extern __typeof__(u16) x86_cpu_to_apicid_early_map[];
extern __attribute__((section(".data..percpu" "..readmostly"))) __typeof__(u16) x86_bios_cpu_apicid; extern __typeof__(u16) *x86_bios_cpu_apicid_early_ptr; extern __typeof__(u16) x86_bios_cpu_apicid_early_map[];





extern unsigned long stack_start;

struct task_struct;

struct smp_ops {
 void (*smp_prepare_boot_cpu)(void);
 void (*smp_prepare_cpus)(unsigned max_cpus);
 void (*smp_cpus_done)(unsigned max_cpus);

 void (*stop_other_cpus)(int wait);
 void (*smp_send_reschedule)(int cpu);

 int (*cpu_up)(unsigned cpu, struct task_struct *tidle);
 int (*cpu_disable)(void);
 void (*cpu_die)(unsigned int cpu);
 void (*play_dead)(void);

 void (*send_call_func_ipi)( struct cpumask *mask);
 void (*send_call_func_single_ipi)(int cpu);
};


extern void set_cpu_sibling_map(int cpu);





extern struct smp_ops smp_ops;

static inline void smp_send_stop(void)
{
 smp_ops.stop_other_cpus(0);
}

static inline void stop_other_cpus(void)
{
 smp_ops.stop_other_cpus(1);
}

static inline void smp_prepare_boot_cpu(void)
{
 smp_ops.smp_prepare_boot_cpu();
}

static inline void smp_prepare_cpus(unsigned int max_cpus)
{
 smp_ops.smp_prepare_cpus(max_cpus);
}

static inline void smp_cpus_done(unsigned int max_cpus)
{
 smp_ops.smp_cpus_done(max_cpus);
}

static inline int __cpu_up(unsigned int cpu, struct task_struct *tidle)
{
 return smp_ops.cpu_up(cpu, tidle);
}

static inline int __cpu_disable(void)
{
 return smp_ops.cpu_disable();
}

static inline void __cpu_die(unsigned int cpu)
{
 smp_ops.cpu_die(cpu);
}

static inline void play_dead(void)
{
 smp_ops.play_dead();
}

static inline void smp_send_reschedule(int cpu)
{
 smp_ops.smp_send_reschedule(cpu);
}

static inline void arch_send_call_function_single_ipi(int cpu)
{
 smp_ops.send_call_func_single_ipi(cpu);
}

static inline void arch_send_call_function_ipi_mask( struct cpumask *mask)
{
 smp_ops.send_call_func_ipi(mask);
}

void cpu_disable_common(void);
void native_smp_prepare_boot_cpu(void);
void native_smp_prepare_cpus(unsigned int max_cpus);
void native_smp_cpus_done(unsigned int max_cpus);
int native_cpu_up(unsigned int cpunum, struct task_struct *tidle);
int native_cpu_disable(void);
void native_cpu_die(unsigned int cpu);
void native_play_dead(void);
void play_dead_common(void);
void wbinvd_on_cpu(int cpu);
int wbinvd_on_all_cpus(void);

void native_send_call_func_ipi( struct cpumask *mask);
void native_send_call_func_single_ipi(int cpu);
void x86_idle_thread_init(unsigned int cpu, struct task_struct *idle);

void smp_store_boot_cpu_info(void);
void smp_store_cpu_info(int id);
extern unsigned disabled_cpus;
extern int hard_smp_processor_id(void);
extern void smp_send_stop(void);




extern void smp_send_reschedule(int cpu);





extern void smp_prepare_cpus(unsigned int max_cpus);




extern int __cpu_up(unsigned int cpunum, struct task_struct *tidle);




extern void smp_cpus_done(unsigned int max_cpus);




int smp_call_function(smp_call_func_t func, void *info, int wait);
void smp_call_function_many( struct cpumask *mask,
       smp_call_func_t func, void *info, bool wait);

int smp_call_function_any( struct cpumask *mask,
     smp_call_func_t func, void *info, int wait);

void kick_all_cpus_sync(void);




void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) call_function_init(void);
void generic_smp_call_function_single_interrupt(void);







void smp_prepare_boot_cpu(void);

extern unsigned int setup_max_cpus;
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) setup_nr_cpu_ids(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) smp_init(void);
extern void arch_disable_smp_support(void);

void smp_setup_processor_id(void);








extern void *pcpu_base_addr;
extern unsigned long *pcpu_unit_offsets;

struct pcpu_group_info {
 int nr_units;
 unsigned long base_offset;
 unsigned int *cpu_map;

};

struct pcpu_alloc_info {
 size_t static_size;
 size_t reserved_size;
 size_t dyn_size;
 size_t unit_size;
 size_t atom_size;
 size_t alloc_size;
 size_t __ai_size;
 int nr_groups;
 struct pcpu_group_info groups[];
};

enum pcpu_fc {
 PCPU_FC_AUTO,
 PCPU_FC_EMBED,
 PCPU_FC_PAGE,

 PCPU_FC_NR,
};
extern char * pcpu_fc_names[PCPU_FC_NR];

extern enum pcpu_fc pcpu_chosen_fc;

typedef void * (*pcpu_fc_alloc_fn_t)(unsigned int cpu, size_t size,
         size_t align);
typedef void (*pcpu_fc_free_fn_t)(void *ptr, size_t size);
typedef void (*pcpu_fc_populate_pte_fn_t)(unsigned long addr);
typedef int (pcpu_fc_cpu_distance_fn_t)(unsigned int from, unsigned int to);

extern struct pcpu_alloc_info * __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) pcpu_alloc_alloc_info(int nr_groups,
            int nr_units);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) pcpu_free_alloc_info(struct pcpu_alloc_info *ai);

extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) pcpu_setup_first_chunk( struct pcpu_alloc_info *ai,
      void *base_addr);


extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) pcpu_embed_first_chunk(size_t reserved_size, size_t dyn_size,
    size_t atom_size,
    pcpu_fc_cpu_distance_fn_t cpu_distance_fn,
    pcpu_fc_alloc_fn_t alloc_fn,
    pcpu_fc_free_fn_t free_fn);



extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) pcpu_page_first_chunk(size_t reserved_size,
    pcpu_fc_alloc_fn_t alloc_fn,
    pcpu_fc_free_fn_t free_fn,
    pcpu_fc_populate_pte_fn_t populate_pte_fn);
extern void *__alloc_reserved_percpu(size_t size, size_t align);
extern bool is_kernel_percpu_address(unsigned long addr);




extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) percpu_init_late(void);

extern void *__alloc_percpu(size_t size, size_t align);
extern void free_percpu(void *__pdata);
extern phys_addr_t per_cpu_ptr_to_phys(void *addr);
extern void __bad_size_call_parameter(void);




struct percpu_counter {
 raw_spinlock_t lock;
 s64 count;

 struct list_head list;

 s32 *counters;
};

extern int percpu_counter_batch;

int __percpu_counter_init(struct percpu_counter *fbc, s64 amount,
     struct lock_class_key *key);
void percpu_counter_destroy(struct percpu_counter *fbc);
void percpu_counter_set(struct percpu_counter *fbc, s64 amount);
void __percpu_counter_add(struct percpu_counter *fbc, s64 amount, s32 batch);
s64 __percpu_counter_sum(struct percpu_counter *fbc);
int percpu_counter_compare(struct percpu_counter *fbc, s64 rhs);

static inline void percpu_counter_add(struct percpu_counter *fbc, s64 amount)
{
 __percpu_counter_add(fbc, amount, percpu_counter_batch);
}

static inline s64 percpu_counter_sum_positive(struct percpu_counter *fbc)
{
 s64 ret = __percpu_counter_sum(fbc);
 return ret < 0 ? 0 : ret;
}

static inline s64 percpu_counter_sum(struct percpu_counter *fbc)
{
 return __percpu_counter_sum(fbc);
}

static inline s64 percpu_counter_read(struct percpu_counter *fbc)
{
 return fbc->count;
}






static inline s64 percpu_counter_read_positive(struct percpu_counter *fbc)
{
 s64 ret = fbc->count;

 __asm__ __volatile__("": : :"memory");
 if (ret >= 0)
  return ret;
 return 0;
}

static inline int percpu_counter_initialized(struct percpu_counter *fbc)
{
 return (fbc->counters != 0);
}
static inline void percpu_counter_inc(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, 1);
}

static inline void percpu_counter_dec(struct percpu_counter *fbc)
{
 percpu_counter_add(fbc, -1);
}

static inline void percpu_counter_sub(struct percpu_counter *fbc, s64 amount)
{
 percpu_counter_add(fbc, -amount);
}
struct rw_semaphore;





struct rw_semaphore {
 long count;
 raw_spinlock_t wait_lock;
 struct list_head wait_list;



};

extern struct rw_semaphore *rwsem_down_read_failed(struct rw_semaphore *sem);
extern struct rw_semaphore *rwsem_down_write_failed(struct rw_semaphore *sem);
extern struct rw_semaphore *rwsem_wake(struct rw_semaphore *);
extern struct rw_semaphore *rwsem_downgrade_wake(struct rw_semaphore *sem);


static inline void __down_read(struct rw_semaphore *sem)
{
 asm ("# beginning down_read\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " " " "incq" " " "(%1)\n\t"

       "  jns        1f\n"
       "  call call_rwsem_down_read_failed\n"
       "1:\n\t"
       "# ending down_read\n\t"
       : "+m" (sem->count)
       : "a" (sem)
       : "memory", "cc");
}




static inline int __down_read_trylock(struct rw_semaphore *sem)
{
 long result, tmp;
 asm ("# beginning __down_read_trylock\n\t"
       "  mov          %0,%1\n\t"
       "1:\n\t"
       "  mov          %1,%2\n\t"
       "  add          %3,%2\n\t"
       "  jle	     2f\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "  cmpxchg  %2,%0\n\t"
       "  jnz	     1b\n\t"
       "2:\n\t"
       "# ending __down_read_trylock\n\t"
       : "+m" (sem->count), "=&a" (result), "=&r" (tmp)
       : "i" (0x00000001L)
       : "memory", "cc");
 return result >= 0 ? 1 : 0;
}




static inline void __down_write_nested(struct rw_semaphore *sem, int subclass)
{
 long tmp;
 asm ("# beginning down_write\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "  xadd      %1,(%2)\n\t"

       "  test " " " "%k1" " " "," " " "%k1" " " "\n\t"

       "  jz        1f\n"
       "  call call_rwsem_down_write_failed\n"
       "1:\n"
       "# ending down_write"
       : "+m" (sem->count), "=d" (tmp)
       : "a" (sem), "1" (((-0xffffffffL -1) + 0x00000001L))
       : "memory", "cc");
}

static inline void __down_write(struct rw_semaphore *sem)
{
 __down_write_nested(sem, 0);
}




static inline int __down_write_trylock(struct rw_semaphore *sem)
{
 long result, tmp;
 asm ("# beginning __down_write_trylock\n\t"
       "  mov          %0,%1\n\t"
       "1:\n\t"
       "  test " " " "%k1" " " "," " " "%k1" " " "\n\t"

       "  jnz          2f\n\t"
       "  mov          %1,%2\n\t"
       "  add          %3,%2\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "  cmpxchg  %2,%0\n\t"
       "  jnz	     1b\n\t"
       "2:\n\t"
       "  sete         %b1\n\t"
       "  movzbl       %b1, %k1\n\t"
       "# ending __down_write_trylock\n\t"
       : "+m" (sem->count), "=&a" (result), "=&r" (tmp)
       : "er" (((-0xffffffffL -1) + 0x00000001L))
       : "memory", "cc");
 return result;
}




static inline void __up_read(struct rw_semaphore *sem)
{
 long tmp;
 asm ("# beginning __up_read\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "  xadd      %1,(%2)\n\t"

       "  jns        1f\n\t"
       "  call call_rwsem_wake\n"
       "1:\n"
       "# ending __up_read\n"
       : "+m" (sem->count), "=d" (tmp)
       : "a" (sem), "1" (-0x00000001L)
       : "memory", "cc");
}




static inline void __up_write(struct rw_semaphore *sem)
{
 long tmp;
 asm ("# beginning __up_write\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "  xadd      %1,(%2)\n\t"

       "  jns        1f\n\t"
       "  call call_rwsem_wake\n"
       "1:\n\t"
       "# ending __up_write\n"
       : "+m" (sem->count), "=d" (tmp)
       : "a" (sem), "1" (-((-0xffffffffL -1) + 0x00000001L))
       : "memory", "cc");
}




static inline void __downgrade_write(struct rw_semaphore *sem)
{
 asm ("# beginning __downgrade_write\n\t"
       ".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " " " "addq" " " "%2,(%1)\n\t"




       "  jns       1f\n\t"
       "  call call_rwsem_downgrade_wake\n"
       "1:\n\t"
       "# ending __downgrade_write\n"
       : "+m" (sem->count)
       : "a" (sem), "er" (-(-0xffffffffL -1))
       : "memory", "cc");
}




static inline void rwsem_atomic_add(long delta, struct rw_semaphore *sem)
{
 asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " " " "addq" " " "%1,%0"
       : "+m" (sem->count)
       : "er" (delta));
}




static inline long rwsem_atomic_update(long delta, struct rw_semaphore *sem)
{
 return delta + ({ __typeof__ (*(((&sem->count)))) __ret = (((delta))); switch (sizeof(*(((&sem->count))))) { case 1: asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "b %b0, %1\n" : "+q" (__ret), "+m" (*(((&sem->count)))) : : "memory", "cc"); break; case 2: asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "w %w0, %1\n" : "+r" (__ret), "+m" (*(((&sem->count)))) : : "memory", "cc"); break; case 4: asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "l %0, %1\n" : "+r" (__ret), "+m" (*(((&sem->count)))) : : "memory", "cc"); break; case 8: asm (".pushsection .smp_locks,\"a\"\n" ".balign 4\n" ".long 671f - .\n" ".popsection\n" "671:" "\n\tlock; " "xadd" "q %q0, %1\n" : "+r" (__ret), "+m" (*(((&sem->count)))) : : "memory", "cc"); break; default: __xadd_wrong_size(); } __ret; });
}


static inline int rwsem_is_locked(struct rw_semaphore *sem)
{
 return sem->count != 0;
}
extern void __init_rwsem(struct rw_semaphore *sem, char *name,
    struct lock_class_key *key);


struct srcu_struct_array {
 unsigned long c[2];
 unsigned long seq[2];
};

struct rcu_batch {
 struct callback_head *head, **tail;
};



struct srcu_struct {
 unsigned completed;
 struct srcu_struct_array *per_cpu_ref;
 spinlock_t queue_lock;
 bool running;

 struct rcu_batch batch_queue;

 struct rcu_batch batch_check0;

 struct rcu_batch batch_check1;
 struct rcu_batch batch_done;
 struct delayed_work work;



};
int init_srcu_struct(struct srcu_struct *sp);




void process_srcu(struct work_struct *work);
void call_srcu(struct srcu_struct *sp, struct callback_head *head,
  void (*func)(struct callback_head *head));

void cleanup_srcu_struct(struct srcu_struct *sp);
int __srcu_read_lock(struct srcu_struct *sp) ;
void __srcu_read_unlock(struct srcu_struct *sp, int idx) ;
void synchronize_srcu(struct srcu_struct *sp);
void synchronize_srcu_expedited(struct srcu_struct *sp);
long srcu_batches_completed(struct srcu_struct *sp);
void srcu_barrier(struct srcu_struct *sp);
static inline int srcu_read_lock_held(struct srcu_struct *sp)
{
 return 1;
}
static inline int srcu_read_lock(struct srcu_struct *sp)
{
 int retval = __srcu_read_lock(sp);

 ;
 return retval;
}
static inline void srcu_read_unlock(struct srcu_struct *sp, int idx)

{
 ;
 __srcu_read_unlock(sp, idx);
}
static inline void smp_mb__after_srcu_read_unlock(void)
{

}
typedef int (*notifier_fn_t)(struct notifier_block *nb,
   unsigned long action, void *data);

struct notifier_block {
 notifier_fn_t notifier_call;
 struct notifier_block *next;
 int priority;
};

struct atomic_notifier_head {
 spinlock_t lock;
 struct notifier_block *head;
};

struct blocking_notifier_head {
 struct rw_semaphore rwsem;
 struct notifier_block *head;
};

struct raw_notifier_head {
 struct notifier_block *head;
};

struct srcu_notifier_head {
 struct mutex mutex;
 struct srcu_struct srcu;
 struct notifier_block *head;
};
extern void srcu_init_notifier_head(struct srcu_notifier_head *nh);
extern int atomic_notifier_chain_register(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_register(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_register(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_register(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int blocking_notifier_chain_cond_register(
  struct blocking_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_chain_unregister(struct atomic_notifier_head *nh,
  struct notifier_block *nb);
extern int blocking_notifier_chain_unregister(struct blocking_notifier_head *nh,
  struct notifier_block *nb);
extern int raw_notifier_chain_unregister(struct raw_notifier_head *nh,
  struct notifier_block *nb);
extern int srcu_notifier_chain_unregister(struct srcu_notifier_head *nh,
  struct notifier_block *nb);

extern int atomic_notifier_call_chain(struct atomic_notifier_head *nh,
  unsigned long val, void *v);
extern int __atomic_notifier_call_chain(struct atomic_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int blocking_notifier_call_chain(struct blocking_notifier_head *nh,
  unsigned long val, void *v);
extern int __blocking_notifier_call_chain(struct blocking_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int raw_notifier_call_chain(struct raw_notifier_head *nh,
  unsigned long val, void *v);
extern int __raw_notifier_call_chain(struct raw_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
extern int srcu_notifier_call_chain(struct srcu_notifier_head *nh,
  unsigned long val, void *v);
extern int __srcu_notifier_call_chain(struct srcu_notifier_head *nh,
 unsigned long val, void *v, int nr_to_call, int *nr_calls);
static inline int notifier_from_errno(int err)
{
 if (err)
  return 0x8000 | (0x0001 - err);

 return 0x0001;
}


static inline int notifier_to_errno(int ret)
{
 ret &= ~0x8000;
 return ret > 0x0001 ? 0x0001 - ret : 0;
}
extern struct blocking_notifier_head reboot_notifier_list;


struct sock;
struct kobject;





enum kobj_ns_type {
 KOBJ_NS_TYPE_NONE = 0,
 KOBJ_NS_TYPE_NET,
 KOBJ_NS_TYPES
};
struct kobj_ns_type_operations {
 enum kobj_ns_type type;
 bool (*current_may_mount)(void);
 void *(*grab_current_ns)(void);
 void *(*netlink_ns)(struct sock *sk);
 void *(*initial_ns)(void);
 void (*drop_ns)(void *);
};

int kobj_ns_type_register( struct kobj_ns_type_operations *ops);
int kobj_ns_type_registered(enum kobj_ns_type type);
 struct kobj_ns_type_operations *kobj_child_ns_ops(struct kobject *parent);
 struct kobj_ns_type_operations *kobj_ns_ops(struct kobject *kobj);

bool kobj_ns_current_may_mount(enum kobj_ns_type type);
void *kobj_ns_grab_current(enum kobj_ns_type type);
 void *kobj_ns_netlink(enum kobj_ns_type type, struct sock *sk);
 void *kobj_ns_initial(enum kobj_ns_type type);
void kobj_ns_drop(enum kobj_ns_type type, void *ns);




struct stat {
 unsigned long st_dev;
 unsigned long st_ino;
 unsigned long st_nlink;

 unsigned int st_mode;
 unsigned int st_uid;
 unsigned int st_gid;
 unsigned int __pad0;
 unsigned long st_rdev;
 long st_size;
 long st_blksize;
 long st_blocks;

 unsigned long st_atime;
 unsigned long st_atime_nsec;
 unsigned long st_mtime;
 unsigned long st_mtime_nsec;
 unsigned long st_ctime;
 unsigned long st_ctime_nsec;
 long __unused[3];
};
struct __old_kernel_stat {
 unsigned short st_dev;
 unsigned short st_ino;
 unsigned short st_mode;
 unsigned short st_nlink;
 unsigned short st_uid;
 unsigned short st_gid;
 unsigned short st_rdev;






 unsigned int st_size;
 unsigned int st_atime;
 unsigned int st_mtime;
 unsigned int st_ctime;

};
extern int overflowuid;
extern int overflowgid;

extern void __bad_uid(void);
extern void __bad_gid(void);
extern int fs_overflowuid;
extern int fs_overflowgid;

struct user_namespace;
extern struct user_namespace init_user_ns;



typedef struct {
 uid_t val;
} kuid_t;


typedef struct {
 gid_t val;
} kgid_t;




static inline uid_t __kuid_val(kuid_t uid)
{
 return uid.val;
}

static inline gid_t __kgid_val(kgid_t gid)
{
 return gid.val;
}
static inline bool uid_eq(kuid_t left, kuid_t right)
{
 return __kuid_val(left) == __kuid_val(right);
}

static inline bool gid_eq(kgid_t left, kgid_t right)
{
 return __kgid_val(left) == __kgid_val(right);
}

static inline bool uid_gt(kuid_t left, kuid_t right)
{
 return __kuid_val(left) > __kuid_val(right);
}

static inline bool gid_gt(kgid_t left, kgid_t right)
{
 return __kgid_val(left) > __kgid_val(right);
}

static inline bool uid_gte(kuid_t left, kuid_t right)
{
 return __kuid_val(left) >= __kuid_val(right);
}

static inline bool gid_gte(kgid_t left, kgid_t right)
{
 return __kgid_val(left) >= __kgid_val(right);
}

static inline bool uid_lt(kuid_t left, kuid_t right)
{
 return __kuid_val(left) < __kuid_val(right);
}

static inline bool gid_lt(kgid_t left, kgid_t right)
{
 return __kgid_val(left) < __kgid_val(right);
}

static inline bool uid_lte(kuid_t left, kuid_t right)
{
 return __kuid_val(left) <= __kuid_val(right);
}

static inline bool gid_lte(kgid_t left, kgid_t right)
{
 return __kgid_val(left) <= __kgid_val(right);
}

static inline bool uid_valid(kuid_t uid)
{
 return !uid_eq(uid, (kuid_t){ -1 });
}

static inline bool gid_valid(kgid_t gid)
{
 return !gid_eq(gid, (kgid_t){ -1 });
}



extern kuid_t make_kuid(struct user_namespace *from, uid_t uid);
extern kgid_t make_kgid(struct user_namespace *from, gid_t gid);

extern uid_t from_kuid(struct user_namespace *to, kuid_t uid);
extern gid_t from_kgid(struct user_namespace *to, kgid_t gid);
extern uid_t from_kuid_munged(struct user_namespace *to, kuid_t uid);
extern gid_t from_kgid_munged(struct user_namespace *to, kgid_t gid);

static inline bool kuid_has_mapping(struct user_namespace *ns, kuid_t uid)
{
 return from_kuid(ns, uid) != (uid_t) -1;
}

static inline bool kgid_has_mapping(struct user_namespace *ns, kgid_t gid)
{
 return from_kgid(ns, gid) != (gid_t) -1;
}

struct kstat {
 u64 ino;
 dev_t dev;
 umode_t mode;
 unsigned int nlink;
 kuid_t uid;
 kgid_t gid;
 dev_t rdev;
 loff_t size;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 unsigned long blksize;
 unsigned long long blocks;
};


struct kobject;
struct module;
struct bin_attribute;
enum kobj_ns_type;

struct attribute {
 char *name;
 umode_t mode;





};
struct attribute_group {
 char *name;
 umode_t (*is_visible)(struct kobject *,
           struct attribute *, int);
 struct attribute **attrs;
 struct bin_attribute **bin_attrs;
};
struct file;
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *_private;
 ssize_t (*read)(struct file *, struct kobject *, struct bin_attribute *,
   char *, loff_t, size_t);
 ssize_t (*write)(struct file *, struct kobject *, struct bin_attribute *,
    char *, loff_t, size_t);
 int (*mmap)(struct file *, struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};
struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *, char *);
 ssize_t (*store)(struct kobject *, struct attribute *, char *, size_t);
};

struct sysfs_dirent;



int sysfs_schedule_callback(struct kobject *kobj, void (*func)(void *),
       void *data, struct module *owner);

int sysfs_create_dir_ns(struct kobject *kobj, void *ns);
void sysfs_remove_dir(struct kobject *kobj);
int sysfs_rename_dir_ns(struct kobject *kobj, char *new_name,
         void *new_ns);
int sysfs_move_dir_ns(struct kobject *kobj,
       struct kobject *new_parent_kobj,
       void *new_ns);

int sysfs_create_file_ns(struct kobject *kobj,
          struct attribute *attr,
          void *ns);
int sysfs_create_files(struct kobject *kobj,
       struct attribute **attr);
int sysfs_chmod_file(struct kobject *kobj,
      struct attribute *attr, umode_t mode);
void sysfs_remove_file_ns(struct kobject *kobj, struct attribute *attr,
     void *ns);
void sysfs_remove_files(struct kobject *kobj, struct attribute **attr);

int sysfs_create_bin_file(struct kobject *kobj,
           struct bin_attribute *attr);
void sysfs_remove_bin_file(struct kobject *kobj,
      struct bin_attribute *attr);

int sysfs_create_link(struct kobject *kobj, struct kobject *target,
       char *name);
int sysfs_create_link_nowarn(struct kobject *kobj,
       struct kobject *target,
       char *name);
void sysfs_remove_link(struct kobject *kobj, char *name);

int sysfs_rename_link_ns(struct kobject *kobj, struct kobject *target,
    char *old_name, char *new_name,
    void *new_ns);

void sysfs_delete_link(struct kobject *dir, struct kobject *targ,
   char *name);

int sysfs_create_group(struct kobject *kobj,
        struct attribute_group *grp);
int sysfs_create_groups(struct kobject *kobj,
         struct attribute_group **groups);
int sysfs_update_group(struct kobject *kobj,
         struct attribute_group *grp);
void sysfs_remove_group(struct kobject *kobj,
   struct attribute_group *grp);
void sysfs_remove_groups(struct kobject *kobj,
    struct attribute_group **groups);
int sysfs_add_file_to_group(struct kobject *kobj,
   struct attribute *attr, char *group);
void sysfs_remove_file_from_group(struct kobject *kobj,
   struct attribute *attr, char *group);
int sysfs_merge_group(struct kobject *kobj,
         struct attribute_group *grp);
void sysfs_unmerge_group(struct kobject *kobj,
         struct attribute_group *grp);
int sysfs_add_link_to_group(struct kobject *kobj, char *group_name,
       struct kobject *target, char *link_name);
void sysfs_remove_link_from_group(struct kobject *kobj, char *group_name,
      char *link_name);

void sysfs_notify(struct kobject *kobj, char *dir, char *attr);
void sysfs_notify_dirent(struct sysfs_dirent *sd);
struct sysfs_dirent *sysfs_get_dirent_ns(struct sysfs_dirent *parent_sd,
      unsigned char *name,
      void *ns);
struct sysfs_dirent *sysfs_get(struct sysfs_dirent *sd);
void sysfs_put(struct sysfs_dirent *sd);

int sysfs_init(void);
static inline int sysfs_create_file(struct kobject *kobj,
       struct attribute *attr)
{
 return sysfs_create_file_ns(kobj, attr, 0);
}

static inline void sysfs_remove_file(struct kobject *kobj,
         struct attribute *attr)
{
 return sysfs_remove_file_ns(kobj, attr, 0);
}

static inline int sysfs_rename_link(struct kobject *kobj, struct kobject *target,
        char *old_name, char *new_name)
{
 return sysfs_rename_link_ns(kobj, target, old_name, new_name, 0);
}

static inline struct sysfs_dirent *
sysfs_get_dirent(struct sysfs_dirent *parent_sd, unsigned char *name)
{
 return sysfs_get_dirent_ns(parent_sd, name, 0);
}


struct kref {
 atomic_t refcount;
};





static inline void kref_init(struct kref *kref)
{
 ;
}





static inline void kref_get(struct kref *kref)
{




 ((((&kref->refcount)->counter + (1))) < 2);
}
static inline int kref_sub(struct kref *kref, unsigned int count,
      void (*release)(struct kref *kref))
{
 (release == 0);

 if (1) {
  release(kref);
  return 1;
 }
 return 0;
}
static inline int kref_put(struct kref *kref, void (*release)(struct kref *kref))
{
 return kref_sub(kref, 1, release);
}
static inline int kref_put_spinlock_irqsave(struct kref *kref,
  void (*release)(struct kref *kref),
  spinlock_t *lock)
{
 unsigned long flags;

 (release == 0);
 if (atomic_add_unless(&kref->refcount, -1, 1))
  return 0;
 ;
 if (1) {
  release(kref);
  ;
  return 1;
 }
 ;
 return 0;
}

static inline int kref_put_mutex(struct kref *kref,
     void (*release)(struct kref *kref),
     struct mutex *lock)
{
 (release == 0);
 if (__builtin_expect(!!(!atomic_add_unless(&kref->refcount, -1, 1)), 0)) {
  ;
  if (__builtin_expect(!!(!1), 0)) {
   ;
   return 0;
  }
  release(kref);
  return 1;
 }
 return 0;
}
static inline int kref_get_unless_zero(struct kref *kref)
{
 return atomic_add_unless(&kref->refcount, 1, 0);
}
extern char uevent_helper[];


extern u64 uevent_seqnum;
enum kobject_action {
 KOBJ_ADD,
 KOBJ_REMOVE,
 KOBJ_CHANGE,
 KOBJ_MOVE,
 KOBJ_ONLINE,
 KOBJ_OFFLINE,
 KOBJ_MAX
};

struct kobject {
 char *name;
 struct list_head entry;
 struct kobject *parent;
 struct kset *kset;
 struct kobj_type *ktype;
 struct sysfs_dirent *sd;
 struct kref kref;



 unsigned int state_initialized:1;
 unsigned int state_in_sysfs:1;
 unsigned int state_add_uevent_sent:1;
 unsigned int state_remove_uevent_sent:1;
 unsigned int uevent_suppress:1;
};

extern __attribute__((format(printf, 2, 3)))
int kobject_set_name(struct kobject *kobj, char *name, ...);
extern int kobject_set_name_vargs(struct kobject *kobj, char *fmt,
      va_list vargs);

static inline char *kobject_name( struct kobject *kobj)
{
 return kobj->name;
}

extern void kobject_init(struct kobject *kobj, struct kobj_type *ktype);
extern __attribute__((format(printf, 3, 4)))
int kobject_add(struct kobject *kobj, struct kobject *parent,
  char *fmt, ...);
extern __attribute__((format(printf, 4, 5)))
int kobject_init_and_add(struct kobject *kobj,
    struct kobj_type *ktype, struct kobject *parent,
    char *fmt, ...);

extern void kobject_del(struct kobject *kobj);

extern struct kobject * kobject_create(void);
extern struct kobject * kobject_create_and_add( char *name,
      struct kobject *parent);

extern int kobject_rename(struct kobject *, char *new_name);
extern int kobject_move(struct kobject *, struct kobject *);

extern struct kobject *kobject_get(struct kobject *kobj);
extern void kobject_put(struct kobject *kobj);

extern void *kobject_namespace(struct kobject *kobj);
extern char *kobject_get_path(struct kobject *kobj, gfp_t flag);

struct kobj_type {
 void (*release)(struct kobject *kobj);
 struct sysfs_ops *sysfs_ops;
 struct attribute **default_attrs;
 struct kobj_ns_type_operations *(*child_ns_type)(struct kobject *kobj);
 void *(*_namespace)(struct kobject *kobj);
};

struct kobj_uevent_env {
 char *envp[32];
 int envp_idx;
 char buf[2048];
 int buflen;
};

struct kset_uevent_ops {
 int (* filter)(struct kset *kset, struct kobject *kobj);
 char *(* name)(struct kset *kset, struct kobject *kobj);
 int (* uevent)(struct kset *kset, struct kobject *kobj,
        struct kobj_uevent_env *env);
};

struct kobj_attribute {
 struct attribute attr;
 ssize_t (*show)(struct kobject *kobj, struct kobj_attribute *attr,
   char *buf);
 ssize_t (*store)(struct kobject *kobj, struct kobj_attribute *attr,
    char *buf, size_t count);
};

extern struct sysfs_ops kobj_sysfs_ops;

struct sock;
struct kset {
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 struct kset_uevent_ops *uevent_ops;
};

extern void kset_init(struct kset *kset);
extern int kset_register(struct kset *kset);
extern void kset_unregister(struct kset *kset);
extern struct kset * kset_create_and_add( char *name,
      struct kset_uevent_ops *u,
      struct kobject *parent_kobj);

static inline struct kset *to_kset(struct kobject *kobj)
{
 return kobj ? ({ typeof( ((struct kset *)0)->kobj ) *__mptr = (kobj); (struct kset *)( (char *)__mptr - ((size_t) &((struct kset *)0)->kobj) );}) : 0;
}

static inline struct kset *kset_get(struct kset *k)
{
 return k ? to_kset(kobject_get(&k->kobj)) : 0;
}

static inline void kset_put(struct kset *k)
{
 kobject_put(&k->kobj);
}

static inline struct kobj_type *get_ktype(struct kobject *kobj)
{
 return kobj->ktype;
}

extern struct kobject *kset_find_obj(struct kset *, char *);


extern struct kobject *kernel_kobj;

extern struct kobject *mm_kobj;

extern struct kobject *hypervisor_kobj;

extern struct kobject *power_kobj;

extern struct kobject *firmware_kobj;

int kobject_uevent(struct kobject *kobj, enum kobject_action action);
int kobject_uevent_env(struct kobject *kobj, enum kobject_action action,
   char *envp[]);

__attribute__((format(printf, 2, 3)))
int add_uevent_var(struct kobj_uevent_env *env, char *format, ...);

int kobject_action_type( char *buf, size_t count,
   enum kobject_action *type);
struct klist_node;
struct klist {
 spinlock_t k_lock;
 struct list_head k_list;
 void (*get)(struct klist_node *);
 void (*put)(struct klist_node *);
} __attribute__ ((aligned (sizeof(void *))));
extern void klist_init(struct klist *k, void (*get)(struct klist_node *),
         void (*put)(struct klist_node *));

struct klist_node {
 void *n_klist;
 struct list_head n_node;
 struct kref n_ref;
};

extern void klist_add_tail(struct klist_node *n, struct klist *k);
extern void klist_add_head(struct klist_node *n, struct klist *k);
extern void klist_add_after(struct klist_node *n, struct klist_node *pos);
extern void klist_add_before(struct klist_node *n, struct klist_node *pos);

extern void klist_del(struct klist_node *n);
extern void klist_remove(struct klist_node *n);

extern int klist_node_attached(struct klist_node *n);


struct klist_iter {
 struct klist *i_klist;
 struct klist_node *i_cur;
};


extern void klist_iter_init(struct klist *k, struct klist_iter *i);
extern void klist_iter_init_node(struct klist *k, struct klist_iter *i,
     struct klist_node *n);
extern void klist_iter_exit(struct klist_iter *i);
extern struct klist_node *klist_next(struct klist_iter *i);





struct seq_operations;
struct file;
struct path;
struct inode;
struct dentry;
struct user_namespace;

struct seq_file {
 char *buf;
 size_t size;
 size_t from;
 size_t count;
 size_t pad_until;
 loff_t index;
 loff_t read_pos;
 u64 version;
 struct mutex lock;
 struct seq_operations *op;
 int poll_event;

 struct user_namespace *user_ns;

 void *_private;
};

struct seq_operations {
 void * (*start) (struct seq_file *m, loff_t *pos);
 void (*stop) (struct seq_file *m, void *v);
 void * (*next) (struct seq_file *m, void *v, loff_t *pos);
 int (*show) (struct seq_file *m, void *v);
};
static inline size_t seq_get_buf(struct seq_file *m, char **bufp)
{
 (m->count > m->size);
 if (m->count < m->size)
  *bufp = m->buf + m->count;
 else
  *bufp = 0;

 return m->size - m->count;
}
static inline void seq_commit(struct seq_file *m, int num)
{
 if (num < 0) {
  m->count = m->size;
 } else {
  (m->count + num > m->size);
  m->count += num;
 }
}
static inline void seq_setwidth(struct seq_file *m, size_t size)
{
 m->pad_until = m->count + size;
}
void seq_pad(struct seq_file *m, char c);

char *mangle_path(char *s, char *p, char *esc);
int seq_open(struct file *, struct seq_operations *);
ssize_t seq_read(struct file *, char *, size_t, loff_t *);
loff_t seq_lseek(struct file *, loff_t, int);
int seq_release(struct inode *, struct file *);
int seq_escape(struct seq_file *, char *, char *);
int seq_putc(struct seq_file *m, char c);
int seq_puts(struct seq_file *m, char *s);
int seq_write(struct seq_file *seq, void *data, size_t len);

__attribute__((format(printf, 2, 3))) int seq_printf(struct seq_file *, char *, ...);
__attribute__((format(printf, 2, 0))) int seq_vprintf(struct seq_file *, char *, va_list args);

int seq_path(struct seq_file *, struct path *, char *);
int seq_dentry(struct seq_file *, struct dentry *, char *);
int seq_path_root(struct seq_file *m, struct path *path,
    struct path *root, char *esc);
int seq_bitmap(struct seq_file *m, unsigned long *bits,
       unsigned int nr_bits);
static inline int seq_cpumask(struct seq_file *m, struct cpumask *mask)
{
 return seq_bitmap(m, ((mask)->bits), nr_cpu_ids);
}

static inline int seq_nodemask(struct seq_file *m, nodemask_t *mask)
{



        return seq_bitmap(m, (typeof(mask->bits))g_map(mask->bits, sizeof(*(mask->bits))), (1 << 6));

}

int seq_bitmap_list(struct seq_file *m, unsigned long *bits,
  unsigned int nr_bits);

static inline int seq_cpumask_list(struct seq_file *m,
       struct cpumask *mask)
{
 return seq_bitmap_list(m, ((mask)->bits), nr_cpu_ids);
}

static inline int seq_nodemask_list(struct seq_file *m, nodemask_t *mask)
{
 return seq_bitmap_list(m, mask->bits, (1 << 6));
}

int single_open(struct file *, int (*)(struct seq_file *, void *), void *);
int single_open_size(struct file *, int (*)(struct seq_file *, void *), void *, size_t);
int single_release(struct inode *, struct file *);
void *__seq_open_private(struct file *, struct seq_operations *, int);
int seq_open_private(struct file *, struct seq_operations *, int);
int seq_release_private(struct inode *, struct file *);
int seq_put_decimal_ull(struct seq_file *m, char delimiter,
   unsigned long long num);
int seq_put_decimal_ll(struct seq_file *m, char delimiter,
   long long num);

static inline struct user_namespace *seq_user_ns(struct seq_file *seq)
{
 extern struct user_namespace init_user_ns;
 return &init_user_ns;

}






extern struct list_head *seq_list_start(struct list_head *head,
  loff_t pos);
extern struct list_head *seq_list_start_head(struct list_head *head,
  loff_t pos);
extern struct list_head *seq_list_next(void *v, struct list_head *head,
  loff_t *ppos);





extern struct hlist_node *seq_hlist_start(struct hlist_head *head,
       loff_t pos);
extern struct hlist_node *seq_hlist_start_head(struct hlist_head *head,
            loff_t pos);
extern struct hlist_node *seq_hlist_next(void *v, struct hlist_head *head,
      loff_t *ppos);

extern struct hlist_node *seq_hlist_start_rcu(struct hlist_head *head,
           loff_t pos);
extern struct hlist_node *seq_hlist_start_head_rcu(struct hlist_head *head,
         loff_t pos);
extern struct hlist_node *seq_hlist_next_rcu(void *v,
         struct hlist_head *head,
         loff_t *ppos);


extern struct hlist_node *seq_hlist_start_percpu(struct hlist_head *head, int *cpu, loff_t pos);

extern struct hlist_node *seq_hlist_next_percpu(void *v, struct hlist_head *head, int *cpu, loff_t *pos);


struct pinctrl;
struct pinctrl_state;
struct device;




extern int pinctrl_request_gpio(unsigned gpio);
extern void pinctrl_free_gpio(unsigned gpio);
extern int pinctrl_gpio_direction_input(unsigned gpio);
extern int pinctrl_gpio_direction_output(unsigned gpio);

extern struct pinctrl * pinctrl_get(struct device *dev);
extern void pinctrl_put(struct pinctrl *p);
extern struct pinctrl_state * pinctrl_lookup_state(
       struct pinctrl *p,
       char *name);
extern int pinctrl_select_state(struct pinctrl *p, struct pinctrl_state *s);

extern struct pinctrl * devm_pinctrl_get(struct device *dev);
extern void devm_pinctrl_put(struct pinctrl *p);


extern int pinctrl_pm_select_default_state(struct device *dev);
extern int pinctrl_pm_select_sleep_state(struct device *dev);
extern int pinctrl_pm_select_idle_state(struct device *dev);
static inline struct pinctrl * pinctrl_get_select(
     struct device *dev, char *name)
{
 struct pinctrl *p;
 struct pinctrl_state *s;
 int ret;

 p = pinctrl_get(dev);
 if (IS_ERR(p))
  return p;

 s = pinctrl_lookup_state(p, name);
 if (IS_ERR(s)) {
  pinctrl_put(p);
  return ERR_PTR(PTR_ERR(s));
 }

 ret = pinctrl_select_state(p, s);
 if (ret < 0) {
  pinctrl_put(p);
  return ERR_PTR(ret);
 }

 return p;
}

static inline struct pinctrl * pinctrl_get_select_default(
     struct device *dev)
{
 return pinctrl_get_select(dev, "default");
}

static inline struct pinctrl * devm_pinctrl_get_select(
     struct device *dev, char *name)
{
 struct pinctrl *p;
 struct pinctrl_state *s;
 int ret;

 p = devm_pinctrl_get(dev);
 if (IS_ERR(p))
  return p;

 s = pinctrl_lookup_state(p, name);
 if (IS_ERR(s)) {
  devm_pinctrl_put(p);
  return ERR_CAST(s);
 }

 ret = pinctrl_select_state(p, s);
 if (ret < 0) {
  devm_pinctrl_put(p);
  return ERR_PTR(ret);
 }

 return p;
}

static inline struct pinctrl * devm_pinctrl_get_select_default(
     struct device *dev)
{
 return devm_pinctrl_get_select(dev, "default");
}






struct dev_pin_info {
 struct pinctrl *p;
 struct pinctrl_state *default_state;

 struct pinctrl_state *sleep_state;
 struct pinctrl_state *idle_state;

};

extern int pinctrl_bind_pins(struct device *dev);


struct ratelimit_state {
 raw_spinlock_t lock;

 int interval;
 int burst;
 int printed;
 int missed;
 unsigned long begin;
};
static inline void ratelimit_state_init(struct ratelimit_state *rs,
     int interval, int burst)
{
 ;
 rs->interval = interval;
 rs->burst = burst;
 rs->printed = 0;
 rs->missed = 0;
 rs->begin = 0;
}

extern struct ratelimit_state printk_ratelimit_state;

extern int ___ratelimit(struct ratelimit_state *rs, char *func);




enum pageblock_bits {
 PB_migrate,
 PB_migrate_end = PB_migrate + 3 - 1,


 PB_migrate_skip,

 NR_PAGEBLOCK_BITS
};
struct page;


unsigned long get_pageblock_flags_group(struct page *page,
     int start_bitidx, int end_bitidx);
void set_pageblock_flags_group(struct page *page, unsigned long flags,
     int start_bitidx, int end_bitidx);




enum {
 MIGRATE_UNMOVABLE,
 MIGRATE_RECLAIMABLE,
 MIGRATE_MOVABLE,
 MIGRATE_PCPTYPES,
 MIGRATE_RESERVE = MIGRATE_PCPTYPES,
 MIGRATE_CMA,


 MIGRATE_ISOLATE,

 MIGRATE_TYPES
};
extern int page_group_by_mobility_disabled;

static inline int get_pageblock_migratetype(struct page *page)
{
 return get_pageblock_flags_group(page, PB_migrate, PB_migrate_end);
}

struct free_area {
 struct list_head free_list[MIGRATE_TYPES];
 unsigned long nr_free;
};

struct pglist_data;
struct zone_padding {
 char x[0];
} __attribute__((__aligned__(1 << (6))));





enum zone_stat_item {

 NR_FREE_PAGES,
 NR_ALLOC_BATCH,
 NR_LRU_BASE,
 NR_INACTIVE_ANON = NR_LRU_BASE,
 NR_ACTIVE_ANON,
 NR_INACTIVE_FILE,
 NR_ACTIVE_FILE,
 NR_UNEVICTABLE,
 NR_MLOCK,
 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_FILE_DIRTY,
 NR_WRITEBACK,
 NR_SLAB_RECLAIMABLE,
 NR_SLAB_UNRECLAIMABLE,
 NR_PAGETABLE,
 NR_KERNEL_STACK,

 NR_UNSTABLE_NFS,
 NR_BOUNCE,
 NR_VMSCAN_WRITE,
 NR_VMSCAN_IMMEDIATE,
 NR_WRITEBACK_TEMP,
 NR_ISOLATED_ANON,
 NR_ISOLATED_FILE,
 NR_SHMEM,
 NR_DIRTIED,
 NR_WRITTEN,

 NUMA_HIT,
 NUMA_MISS,
 NUMA_FOREIGN,
 NUMA_INTERLEAVE_HIT,
 NUMA_LOCAL,
 NUMA_OTHER,

 NR_ANON_TRANSPARENT_HUGEPAGES,
 NR_FREE_CMA_PAGES,
 NR_VM_ZONE_STAT_ITEMS };
enum lru_list {
 LRU_INACTIVE_ANON = 0,
 LRU_ACTIVE_ANON = 0 + 1,
 LRU_INACTIVE_FILE = 0 + 2,
 LRU_ACTIVE_FILE = 0 + 2 + 1,
 LRU_UNEVICTABLE,
 NR_LRU_LISTS
};





static inline int is_file_lru(enum lru_list lru)
{
 return (lru == LRU_INACTIVE_FILE || lru == LRU_ACTIVE_FILE);
}

static inline int is_active_lru(enum lru_list lru)
{
 return (lru == LRU_ACTIVE_ANON || lru == LRU_ACTIVE_FILE);
}

static inline int is_unevictable_lru(enum lru_list lru)
{
 return (lru == LRU_UNEVICTABLE);
}

struct zone_reclaim_stat {
 unsigned long recent_rotated[2];
 unsigned long recent_scanned[2];
};

struct lruvec {
 struct list_head lists[NR_LRU_LISTS];
 struct zone_reclaim_stat reclaim_stat;

 struct zone *zone;

};
typedef unsigned isolate_mode_t;

enum zone_watermarks {
 WMARK_MIN,
 WMARK_LOW,
 WMARK_HIGH,
 NR_WMARK
};





struct per_cpu_pages {
 int count;
 int high;
 int batch;


 struct list_head lists[MIGRATE_PCPTYPES];
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp;

 s8 expire;


 s8 stat_threshold;
 s8 vm_stat_diff[NR_VM_ZONE_STAT_ITEMS];

};



enum zone_type {
 ZONE_DMA,







 ZONE_DMA32,






 ZONE_NORMAL,
 ZONE_MOVABLE,
 __MAX_NR_ZONES
};



struct zone {



 unsigned long watermark[NR_WMARK];






 unsigned long percpu_drift_mark;
 unsigned long lowmem_reserve[4];





 unsigned long dirty_balance_reserve;


 int node;



 unsigned long min_unmapped_pages;
 unsigned long min_slab_pages;

 struct per_cpu_pageset *pageset;



 spinlock_t lock;


 bool compact_blockskip_flush;


 unsigned long compact_cached_free_pfn;
 unsigned long compact_cached_migrate_pfn;



 seqlock_t span_seqlock;

 struct free_area free_area[11];
 unsigned int compact_considered;
 unsigned int compact_defer_shift;
 int compact_order_failed;


 struct zone_padding _pad1_;


 spinlock_t lru_lock;
 struct lruvec lruvec;

 unsigned long pages_scanned;
 unsigned long flags;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];





 unsigned int inactive_ratio;


 struct zone_padding _pad2_;
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
 unsigned long spanned_pages;
 unsigned long present_pages;
 unsigned long managed_pages;




 char *name;
} __attribute__((__aligned__(1 << (6))));

typedef enum {
 ZONE_RECLAIM_LOCKED,
 ZONE_OOM_LOCKED,
 ZONE_CONGESTED,


 ZONE_TAIL_LRU_DIRTY,



 ZONE_WRITEBACK,


} zone_flags_t;

static inline void zone_set_flag(struct zone *zone, zone_flags_t flag)
{
 set_bit(flag, &zone->flags);
}

static inline int zone_test_and_set_flag(struct zone *zone, zone_flags_t flag)
{
 return test_and_set_bit(flag, &zone->flags);
}

static inline void zone_clear_flag(struct zone *zone, zone_flags_t flag)
{
 clear_bit(flag, &zone->flags);
}

static inline int zone_is_reclaim_congested( struct zone *zone)
{
 return (__builtin_constant_p((ZONE_CONGESTED)) ? constant_test_bit((ZONE_CONGESTED), (&zone->flags)) : variable_test_bit((ZONE_CONGESTED), (&zone->flags)));
}

static inline int zone_is_reclaim_dirty( struct zone *zone)
{
 return (__builtin_constant_p((ZONE_TAIL_LRU_DIRTY)) ? constant_test_bit((ZONE_TAIL_LRU_DIRTY), (&zone->flags)) : variable_test_bit((ZONE_TAIL_LRU_DIRTY), (&zone->flags)));
}

static inline int zone_is_reclaim_writeback( struct zone *zone)
{
 return (__builtin_constant_p((ZONE_WRITEBACK)) ? constant_test_bit((ZONE_WRITEBACK), (&zone->flags)) : variable_test_bit((ZONE_WRITEBACK), (&zone->flags)));
}

static inline int zone_is_reclaim_locked( struct zone *zone)
{
 return (__builtin_constant_p((ZONE_RECLAIM_LOCKED)) ? constant_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)));
}

static inline int zone_is_oom_locked( struct zone *zone)
{
 return (__builtin_constant_p((ZONE_OOM_LOCKED)) ? constant_test_bit((ZONE_OOM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_OOM_LOCKED), (&zone->flags)));
}

static inline unsigned long zone_end_pfn( struct zone *zone)
{
 return zone->zone_start_pfn + zone->spanned_pages;
}

static inline bool zone_spans_pfn( struct zone *zone, unsigned long pfn)
{
 return zone->zone_start_pfn <= pfn && pfn < zone_end_pfn(zone);
}

static inline bool zone_is_initialized(struct zone *zone)
{
 return !!zone->wait_table;
}

static inline bool zone_is_empty(struct zone *zone)
{
 return zone->spanned_pages == 0;
}
struct zonelist_cache {
 unsigned short z_to_n[((1 << 6) * 4)];
 unsigned long fullzones[(((((1 << 6) * 4)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
 unsigned long last_full_zap;
};
struct zoneref {
 struct zone *zone;
 int zone_idx;
};
struct zonelist {
 struct zonelist_cache *zlcache_ptr;
 struct zoneref _zonerefs[((1 << 6) * 4) + 1];

 struct zonelist_cache zlcache;

};


struct node_active_region {
 unsigned long start_pfn;
 unsigned long end_pfn;
 int nid;
};




extern struct page *mem_map;
struct bootmem_data;
typedef struct pglist_data {
 struct zone node_zones[4];
 struct zonelist node_zonelists[2];
 int nr_zones;
 spinlock_t node_size_lock;

 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 nodemask_t reclaim_nodes;
 wait_queue_head_t kswapd_wait;
 wait_queue_head_t pfmemalloc_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
 enum zone_type classzone_idx;





 spinlock_t numabalancing_migrate_lock;


 unsigned long numabalancing_migrate_next_window;


 unsigned long numabalancing_migrate_nr_pages;

} pg_data_t;
static inline unsigned long pgdat_end_pfn(pg_data_t *pgdat)
{
 return pgdat->node_start_pfn + pgdat->node_spanned_pages;
}

static inline bool pgdat_is_empty(pg_data_t *pgdat)
{
 return !pgdat->node_start_pfn && !pgdat->node_spanned_pages;
}








struct page;
struct zone;
struct pglist_data;
struct mem_section;
struct memory_block;







enum {
 MEMORY_HOTPLUG_MIN_BOOTMEM_TYPE = 12,
 SECTION_INFO = MEMORY_HOTPLUG_MIN_BOOTMEM_TYPE,
 MIX_SECTION_INFO,
 NODE_INFO,
 MEMORY_HOTPLUG_MAX_BOOTMEM_TYPE = NODE_INFO,
};


enum {
 ONLINE_KEEP,
 ONLINE_KERNEL,
 ONLINE_MOVABLE,
};




static inline
void pgdat_resize_lock(struct pglist_data *pgdat, unsigned long *flags)
{
 ;
}
static inline
void pgdat_resize_unlock(struct pglist_data *pgdat, unsigned long *flags)
{
 ;
}
static inline
void pgdat_resize_init(struct pglist_data *pgdat)
{
 ;
}







static inline unsigned zone_span_seqbegin(struct zone *zone)
{
 return 0;
}
static inline int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return 0;
}
static inline void zone_span_writelock(struct zone *zone)
{
 ;
}
static inline void zone_span_writeunlock(struct zone *zone)
{
 ;
}
static inline void zone_seqlock_init(struct zone *zone)
{
 ;
}
extern int zone_grow_free_lists(struct zone *zone, unsigned long new_nr_pages);
extern int zone_grow_waitqueues(struct zone *zone, unsigned long nr_pages);
extern int add_one_highpage(struct page *page, int pfn, int bad_ppro);

extern int online_pages(unsigned long, unsigned long, int);
extern void __offline_isolated_pages(unsigned long, unsigned long);

typedef void (*online_page_callback_t)(struct page *page);

extern int set_online_page_callback(online_page_callback_t callback);
extern int restore_online_page_callback(online_page_callback_t callback);

extern void __online_page_set_limits(struct page *page);
extern void __online_page_increment_counters(struct page *page);
extern void __online_page_free(struct page *page);

extern int try_online_node(int nid);


extern bool is_pageblock_removable_nolock(struct page *page);
extern int arch_remove_memory(u64 start, u64 size);
extern int __remove_pages(struct zone *zone, unsigned long start_pfn,
 unsigned long nr_pages);



extern int __add_pages(int nid, struct zone *zone, unsigned long start_pfn,
 unsigned long nr_pages);


extern int memory_add_physaddr_to_nid(u64 start);
extern pg_data_t *node_data[];
static inline void arch_refresh_nodedata(int nid, pg_data_t *pgdat)
{
 node_data[nid] = pgdat;
}
extern void register_page_bootmem_info_node(struct pglist_data *pgdat);





extern void put_page_bootmem(struct page *page);
extern void get_page_bootmem(unsigned long ingo, struct page *page,
        unsigned long type);







void lock_memory_hotplug(void);
void unlock_memory_hotplug(void);
extern int is_mem_section_removable(unsigned long pfn, unsigned long nr_pages);
extern void try_offline_node(int nid);
extern int offline_pages(unsigned long start_pfn, unsigned long nr_pages);
extern void remove_memory(int nid, u64 start, u64 size);
extern int walk_memory_range(unsigned long start_pfn, unsigned long end_pfn,
  void *arg, int (*func)(struct memory_block *, void *));
extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int offline_pages(unsigned long start_pfn, unsigned long nr_pages);
extern bool is_memblock_offlined(struct memory_block *mem);
extern void remove_memory(int nid, u64 start, u64 size);
extern int sparse_add_one_section(struct zone *zone, unsigned long start_pfn);
extern void sparse_remove_one_section(struct zone *zone, struct mem_section *ms);
extern struct page *sparse_decode_mem_map(unsigned long coded_mem_map,
       unsigned long pnum);

extern struct mutex zonelists_mutex;
void build_all_zonelists(pg_data_t *pgdat, struct zone *zone);
void wakeup_kswapd(struct zone *zone, int order, enum zone_type classzone_idx);
bool zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
bool zone_watermark_ok_safe(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
enum memmap_context {
 MEMMAP_EARLY,
 MEMMAP_HOTPLUG,
};
extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size,
         enum memmap_context context);

extern void lruvec_init(struct lruvec *lruvec);

static inline struct zone *lruvec_zone(struct lruvec *lruvec)
{

 return lruvec->zone;



}


void memory_present(int nid, unsigned long start, unsigned long end);







static inline int local_memory_node(int node_id) { return node_id; };
static inline int populated_zone(struct zone *zone)
{
 return (!!zone->present_pages);
}

extern int movable_zone;

static inline int zone_movable_is_highmem(void)
{



 return 0;

}

static inline int is_highmem_idx(enum zone_type idx)
{




 return 0;

}







static inline int is_highmem(struct zone *zone)
{






 return 0;

}


struct ctl_table;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
extern int sysctl_lowmem_reserve_ratio[4 -1];
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);
int sysctl_min_slab_ratio_sysctl_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);

extern int numa_zonelist_order_handler(struct ctl_table *, int,
   void *, size_t *, loff_t *);
extern char numa_zonelist_order[];





extern struct pglist_data *node_data[];



extern struct pglist_data *first_online_pgdat(void);
extern struct pglist_data *next_online_pgdat(struct pglist_data *pgdat);
extern struct zone *next_zone(struct zone *zone);
static inline struct zone *zonelist_zone(struct zoneref *zoneref)
{
 return zoneref->zone;
}

static inline int zonelist_zone_idx(struct zoneref *zoneref)
{
 return zoneref->zone_idx;
}

static inline int zonelist_node_idx(struct zoneref *zoneref)
{


 return zoneref->zone->node;



}
struct zoneref *next_zones_zonelist(struct zoneref *z,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone);
static inline struct zoneref *first_zones_zonelist(struct zonelist *zonelist,
     enum zone_type highest_zoneidx,
     nodemask_t *nodes,
     struct zone **zone)
{
 return next_zones_zonelist(zonelist->_zonerefs, highest_zoneidx, nodes,
        zone);
}
struct page;
struct page_cgroup;
struct mem_section {
 unsigned long section_mem_map;


 unsigned long *pageblock_flags;





 struct page_cgroup *page_cgroup;
 unsigned long pad;





};
extern struct mem_section *mem_section[((((1UL << (46 - 27))) + ((((1UL) << 12) / sizeof (struct mem_section))) - 1) / ((((1UL) << 12) / sizeof (struct mem_section))))];




static inline struct mem_section *__nr_to_section(unsigned long nr)
{
 if (!mem_section[((nr) / (((1UL) << 12) / sizeof (struct mem_section)))])
  return 0;
 return &mem_section[((nr) / (((1UL) << 12) / sizeof (struct mem_section)))][nr & ((((1UL) << 12) / sizeof (struct mem_section)) - 1)];
}
extern int __section_nr(struct mem_section* ms);
extern unsigned long usemap_size(void);
static inline struct page *__section_mem_map_addr(struct mem_section *section)
{
 unsigned long map = section->section_mem_map;
 map &= (~((1UL<<2)-1));
 return (struct page *)map;
}

static inline int present_section(struct mem_section *section)
{
 return (section && (section->section_mem_map & (1UL<<0)));
}

static inline int present_section_nr(unsigned long nr)
{
 return present_section(__nr_to_section(nr));
}

static inline int valid_section(struct mem_section *section)
{
 return (section && (section->section_mem_map & (1UL<<1)));
}

static inline int valid_section_nr(unsigned long nr)
{
 return valid_section(__nr_to_section(nr));
}

static inline struct mem_section *__pfn_to_section(unsigned long pfn)
{
 return __nr_to_section(((pfn) >> (27 - 12)));
}


static inline int pfn_valid(unsigned long pfn)
{
 if (((pfn) >> (27 - 12)) >= (1UL << (46 - 27)))
  return 0;
 return valid_section(__nr_to_section(((pfn) >> (27 - 12))));
}


static inline int pfn_present(unsigned long pfn)
{
 if (((pfn) >> (27 - 12)) >= (1UL << (46 - 27)))
  return 0;
 return present_section(__nr_to_section(((pfn) >> (27 - 12))));
}
void sparse_init(void);






bool early_pfn_in_nid(unsigned long pfn, int nid);
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) node_memmap_size_bytes(int, unsigned long, unsigned long);
static inline int memmap_valid_within(unsigned long pfn,
     struct page *page, struct zone *zone)
{
 return 1;
}


int arch_update_cpu_topology(void);
extern __attribute__((section(".data..percpu" ""))) __typeof__(int) numa_node;



static inline int numa_node_id(void)
{
 return ({ typeof((numa_node)) pscr_ret__; do { void *__vpp_verify = (typeof((&((numa_node))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof((numa_node))) { case 1: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 2: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 4: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 8: pscr_ret__ = ({ typeof(((numa_node))) pfo_ret__; switch (sizeof(((numa_node)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((numa_node))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((numa_node))); break; default: __bad_percpu_size(); } pfo_ret__; });break; default: __bad_size_call_parameter();break; } pscr_ret__; });
}



static inline int cpu_to_node(int cpu)
{
 return (*({ do { void *__vpp_verify = (typeof(((&(numa_node))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(numa_node))) *)(&(numa_node)))); (typeof((typeof(*(&(numa_node))) *)(&(numa_node)))) (__ptr + (((__per_cpu_offset[cpu])))); }); }));
}



static inline void set_numa_node(int node)
{
 do { do { void *__vpp_verify = (typeof((&((numa_node))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof((numa_node))) { case 1: do { typedef typeof(((numa_node))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((node)); (void)pto_tmp__; } switch (sizeof(((numa_node)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "qi" ((pto_T__)((node)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "re" ((pto_T__)((node)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof(((numa_node))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((node)); (void)pto_tmp__; } switch (sizeof(((numa_node)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "qi" ((pto_T__)((node)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "re" ((pto_T__)((node)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof(((numa_node))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((node)); (void)pto_tmp__; } switch (sizeof(((numa_node)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "qi" ((pto_T__)((node)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "re" ((pto_T__)((node)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof(((numa_node))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((node)); (void)pto_tmp__; } switch (sizeof(((numa_node)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "qi" ((pto_T__)((node)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "ri" ((pto_T__)((node)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((numa_node))) : "re" ((pto_T__)((node)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
}



static inline void set_cpu_numa_node(int cpu, int node)
{
 (*({ do { void *__vpp_verify = (typeof(((&(numa_node))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*(&(numa_node))) *)(&(numa_node)))); (typeof((typeof(*(&(numa_node))) *)(&(numa_node)))) (__ptr + (((__per_cpu_offset[cpu])))); }); })) = node;
}
static inline int numa_mem_id(void)
{
 return numa_node_id();
}



static inline int cpu_to_mem(int cpu)
{
 return cpu_to_node(cpu);
}


struct vm_area_struct;
static inline int allocflags_to_migratetype(gfp_t gfp_flags)
{
 ((gfp_flags & ((( gfp_t)0x80000u)|(( gfp_t)0x08u))) == ((( gfp_t)0x80000u)|(( gfp_t)0x08u)));

 if (__builtin_expect(!!(page_group_by_mobility_disabled), 0))
  return MIGRATE_UNMOVABLE;


 return (((gfp_flags & (( gfp_t)0x08u)) != 0) << 1) |
  ((gfp_flags & (( gfp_t)0x80000u)) != 0);
}
static inline enum zone_type gfp_zone(gfp_t flags)
{
 enum zone_type z;
 int bit = ( int) (flags & ((( gfp_t)0x01u)|(( gfp_t)0x02u)|(( gfp_t)0x04u)|(( gfp_t)0x08u)));

 z = (( (ZONE_NORMAL << 0 * 2) | (ZONE_DMA << 0x01u * 2) | (ZONE_NORMAL << 0x02u * 2) | (ZONE_DMA32 << 0x04u * 2) | (ZONE_NORMAL << 0x08u * 2) | (ZONE_DMA << (0x08u | 0x01u) * 2) | (ZONE_MOVABLE << (0x08u | 0x02u) * 2) | (ZONE_DMA32 << (0x08u | 0x04u) * 2) ) >> (bit * 2)) &
      ((1 << 2) - 1);
 (0);
 return z;
}
static inline int gfp_zonelist(gfp_t flags)
{
 if ((1 || 0) && __builtin_expect(!!(flags & (( gfp_t)0x40000u)), 0))
  return 1;

 return 0;
}
static inline struct zonelist *node_zonelist(int nid, gfp_t flags)
{
 return (node_data[nid])->node_zonelists + gfp_zonelist(flags);
}


static inline void arch_free_page(struct page *page, int order) { }


static inline void arch_alloc_page(struct page *page, int order) { }


struct page *
__alloc_pages_nodemask(gfp_t gfp_mask, unsigned int order,
         struct zonelist *zonelist, nodemask_t *nodemask);

static inline struct page *
__alloc_pages(gfp_t gfp_mask, unsigned int order,
  struct zonelist *zonelist)
{
 return __alloc_pages_nodemask(gfp_mask, order, zonelist, 0);
}

static inline struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{

 if (nid < 0)
  nid = numa_node_id();

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}

static inline struct page *alloc_pages_exact_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 (0);

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}


extern struct page *alloc_pages_current(gfp_t gfp_mask, unsigned order);

static inline struct page *
alloc_pages(gfp_t gfp_mask, unsigned int order)
{
 return alloc_pages_current(gfp_mask, order);
}
extern struct page *alloc_pages_vma(gfp_t gfp_mask, int order,
   struct vm_area_struct *vma, unsigned long addr,
   int node);
extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);

void *alloc_pages_exact(size_t size, gfp_t gfp_mask);
void free_pages_exact(void *virt, size_t size);

void *alloc_pages_exact_nid(int nid, size_t size, gfp_t gfp_mask);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_cold_page(struct page *page, int cold);
extern void free_hot_cold_page_list(struct list_head *list, int cold);

extern void __free_memcg_kmem_pages(struct page *page, unsigned int order);
extern void free_memcg_kmem_pages(unsigned long addr, unsigned int order);




void page_alloc_init(void);
void drain_zone_pages(struct zone *zone, struct per_cpu_pages *pcp);
void drain_all_pages(void);
void drain_local_pages(void *dummy);
extern gfp_t gfp_allowed_mask;


bool gfp_pfmemalloc_allowed(gfp_t gfp_mask);

extern void pm_restrict_gfp_mask(void);
extern void pm_restore_gfp_mask(void);


extern bool pm_suspended_storage(void);
extern int alloc_contig_range(unsigned long start, unsigned long end,
         unsigned migratetype);
extern void free_contig_range(unsigned long pfn, unsigned nr_pages);


extern void init_cma_reserved_pageblock(struct page *page);



struct dev_archdata {

 struct dma_map_ops *dma_ops;


 void *iommu;

};

struct pdev_archdata {
};

struct device;
struct device_private;
struct device_driver;
struct driver_private;
struct module;
struct _class;
struct subsys_private;
struct bus_type;
struct device_node;
struct iommu_ops;
struct iommu_group;

struct bus_attribute {
 struct attribute attr;
 ssize_t (*show)(struct bus_type *bus, char *buf);
 ssize_t (*store)(struct bus_type *bus, char *buf, size_t count);
};
extern int bus_create_file(struct bus_type *,
     struct bus_attribute *);
extern void bus_remove_file(struct bus_type *, struct bus_attribute *);
struct bus_type {
 char *name;
 char *dev_name;
 struct device *dev_root;
 struct device_attribute *dev_attrs;
 struct attribute_group **bus_groups;
 struct attribute_group **dev_groups;
 struct attribute_group **drv_groups;

 int (*match)(struct device *dev, struct device_driver *drv);
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 int (*probe)(struct device *dev);
 int (*remove)(struct device *dev);
 void (*shutdown)(struct device *dev);

 int (*online)(struct device *dev);
 int (*offline)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);

 struct dev_pm_ops *pm;

 struct iommu_ops *iommu_ops;

 struct subsys_private *p;
 struct lock_class_key lock_key;
};

extern int bus_register(struct bus_type *bus);

extern void bus_unregister(struct bus_type *bus);

extern int bus_rescan_devices(struct bus_type *bus);


struct subsys_dev_iter {
 struct klist_iter ki;
 struct device_type *type;
};
void subsys_dev_iter_init(struct subsys_dev_iter *iter,
    struct bus_type *subsys,
    struct device *start,
    struct device_type *type);
struct device *subsys_dev_iter_next(struct subsys_dev_iter *iter);
void subsys_dev_iter_exit(struct subsys_dev_iter *iter);

int bus_for_each_dev(struct bus_type *bus, struct device *start, void *data,
       int (*fn)(struct device *dev, void *data));
struct device *bus_find_device(struct bus_type *bus, struct device *start,
          void *data,
          int (*match)(struct device *dev, void *data));
struct device *bus_find_device_by_name(struct bus_type *bus,
           struct device *start,
           char *name);
struct device *subsys_find_device_by_id(struct bus_type *bus, unsigned int id,
     struct device *hint);
int bus_for_each_drv(struct bus_type *bus, struct device_driver *start,
       void *data, int (*fn)(struct device_driver *, void *));
void bus_sort_breadthfirst(struct bus_type *bus,
      int (*compare)( struct device *a,
       struct device *b));






struct notifier_block;

extern int bus_register_notifier(struct bus_type *bus,
     struct notifier_block *nb);
extern int bus_unregister_notifier(struct bus_type *bus,
       struct notifier_block *nb);
extern struct kset *bus_get_kset(struct bus_type *bus);
extern struct klist *bus_get_device_klist(struct bus_type *bus);
struct device_driver {
 char *name;
 struct bus_type *bus;

 struct module *owner;
 char *mod_name;

 bool suppress_bind_attrs;

 struct of_device_id *of_match_table;
 struct acpi_device_id *acpi_match_table;

 int (*probe) (struct device *dev);
 int (*remove) (struct device *dev);
 void (*shutdown) (struct device *dev);
 int (*suspend) (struct device *dev, pm_message_t state);
 int (*resume) (struct device *dev);
 struct attribute_group **groups;

 struct dev_pm_ops *pm;

 struct driver_private *p;
};


extern int driver_register(struct device_driver *drv);
extern void driver_unregister(struct device_driver *drv);

extern struct device_driver *driver_find( char *name,
      struct bus_type *bus);
extern int driver_probe_done(void);
extern void wait_for_device_probe(void);




struct driver_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device_driver *driver, char *buf);
 ssize_t (*store)(struct device_driver *driver, char *buf,
    size_t count);
};
extern int driver_create_file(struct device_driver *driver,
     struct driver_attribute *attr);
extern void driver_remove_file(struct device_driver *driver,
          struct driver_attribute *attr);

extern int driver_for_each_device(struct device_driver *drv,
            struct device *start,
            void *data,
            int (*fn)(struct device *dev,
        void *));
struct device *driver_find_device(struct device_driver *drv,
      struct device *start, void *data,
      int (*match)(struct device *dev, void *data));
struct subsys_interface {
 char *name;
 struct bus_type *subsys;
 struct list_head node;
 int (*add_dev)(struct device *dev, struct subsys_interface *sif);
 int (*remove_dev)(struct device *dev, struct subsys_interface *sif);
};

int subsys_interface_register(struct subsys_interface *sif);
void subsys_interface_unregister(struct subsys_interface *sif);

int subsys_system_register(struct bus_type *subsys,
      struct attribute_group **groups);
int subsys_virtual_register(struct bus_type *subsys,
       struct attribute_group **groups);
struct _class {
 char *name;
 struct module *owner;

 struct class_attribute *class_attrs;
 struct attribute_group **dev_groups;
 struct kobject *dev_kobj;

 int (*dev_uevent)(struct device *dev, struct kobj_uevent_env *env);
 char *(*devnode)(struct device *dev, umode_t *mode);

 void (*class_release)(struct _class *_class);
 void (*dev_release)(struct device *dev);

 int (*suspend)(struct device *dev, pm_message_t state);
 int (*resume)(struct device *dev);

 struct kobj_ns_type_operations *ns_type;
 void *(*_namespace)(struct device *dev);

 struct dev_pm_ops *pm;

 struct subsys_private *p;
};

struct class_dev_iter {
 struct klist_iter ki;
 struct device_type *type;
};

extern struct kobject *sysfs_dev_block_kobj;
extern struct kobject *sysfs_dev_char_kobj;
extern int __class_register(struct _class *_class,
      struct lock_class_key *key);
extern void class_unregister(struct _class *_class);
struct class_compat;
struct class_compat *class_compat_register( char *name);
void class_compat_unregister(struct class_compat *cls);
int class_compat_create_link(struct class_compat *cls, struct device *dev,
        struct device *device_link);
void class_compat_remove_link(struct class_compat *cls, struct device *dev,
         struct device *device_link);

extern void class_dev_iter_init(struct class_dev_iter *iter,
    struct _class *_class,
    struct device *start,
    struct device_type *type);
extern struct device *class_dev_iter_next(struct class_dev_iter *iter);
extern void class_dev_iter_exit(struct class_dev_iter *iter);

extern int class_for_each_device(struct _class *_class, struct device *start,
     void *data,
     int (*fn)(struct device *dev, void *data));
extern struct device *class_find_device(struct _class *_class,
     struct device *start, void *data,
     int (*match)(struct device *, void *));

struct class_attribute {
 struct attribute attr;
 ssize_t (*show)(struct _class *_class, struct class_attribute *attr,
   char *buf);
 ssize_t (*store)(struct _class *_class, struct class_attribute *attr,
   char *buf, size_t count);
};
extern int class_create_file_ns(struct _class *_class,
          struct class_attribute *attr,
          void *ns);
extern void class_remove_file_ns(struct _class *_class,
     struct class_attribute *attr,
     void *ns);

static inline int class_create_file(struct _class *_class,
     struct class_attribute *attr)
{
 return class_create_file_ns(_class, attr, 0);
}

static inline void class_remove_file(struct _class *_class,
         struct class_attribute *attr)
{
 return class_remove_file_ns(_class, attr, 0);
}


struct class_attribute_string {
 struct class_attribute attr;
 char *str;
};
extern ssize_t show_class_attr_string(struct _class *_class, struct class_attribute *attr,
                        char *buf);

struct class_interface {
 struct list_head node;
 struct _class *_class;

 int (*add_dev) (struct device *, struct class_interface *);
 void (*remove_dev) (struct device *, struct class_interface *);
};

extern int class_interface_register(struct class_interface *);
extern void class_interface_unregister(struct class_interface *);

extern struct _class * __class_create(struct module *owner,
        char *name,
        struct lock_class_key *key);
extern void class_destroy(struct _class *cls);
struct device_type {
 char *name;
 struct attribute_group **groups;
 int (*uevent)(struct device *dev, struct kobj_uevent_env *env);
 char *(*devnode)(struct device *dev, umode_t *mode,
    kuid_t *uid, kgid_t *gid);
 void (*release)(struct device *dev);

 struct dev_pm_ops *pm;
};


struct device_attribute {
 struct attribute attr;
 ssize_t (*show)(struct device *dev, struct device_attribute *attr,
   char *buf);
 ssize_t (*store)(struct device *dev, struct device_attribute *attr,
    char *buf, size_t count);
};

struct dev_ext_attribute {
 struct device_attribute attr;
 void *var;
};

ssize_t device_show_ulong(struct device *dev, struct device_attribute *attr,
     char *buf);
ssize_t device_store_ulong(struct device *dev, struct device_attribute *attr,
      char *buf, size_t count);
ssize_t device_show_int(struct device *dev, struct device_attribute *attr,
   char *buf);
ssize_t device_store_int(struct device *dev, struct device_attribute *attr,
    char *buf, size_t count);
ssize_t device_show_bool(struct device *dev, struct device_attribute *attr,
   char *buf);
ssize_t device_store_bool(struct device *dev, struct device_attribute *attr,
    char *buf, size_t count);
extern int device_create_file(struct device *device,
         struct device_attribute *entry);
extern void device_remove_file(struct device *dev,
          struct device_attribute *attr);
extern int device_create_bin_file(struct device *dev,
     struct bin_attribute *attr);
extern void device_remove_bin_file(struct device *dev,
       struct bin_attribute *attr);
extern int device_schedule_callback_owner(struct device *dev,
  void (*func)(struct device *dev), struct module *owner);






typedef void (*dr_release_t)(struct device *dev, void *res);
typedef int (*dr_match_t)(struct device *dev, void *res, void *match_data);







extern void *devres_alloc(dr_release_t release, size_t size, gfp_t gfp);

extern void devres_for_each_res(struct device *dev, dr_release_t release,
    dr_match_t match, void *match_data,
    void (*fn)(struct device *, void *, void *),
    void *data);
extern void devres_free(void *res);
extern void devres_add(struct device *dev, void *res);
extern void *devres_find(struct device *dev, dr_release_t release,
    dr_match_t match, void *match_data);
extern void *devres_get(struct device *dev, void *new_res,
   dr_match_t match, void *match_data);
extern void *devres_remove(struct device *dev, dr_release_t release,
      dr_match_t match, void *match_data);
extern int devres_destroy(struct device *dev, dr_release_t release,
     dr_match_t match, void *match_data);
extern int devres_release(struct device *dev, dr_release_t release,
     dr_match_t match, void *match_data);


extern void * devres_open_group(struct device *dev, void *id,
          gfp_t gfp);
extern void devres_close_group(struct device *dev, void *id);
extern void devres_remove_group(struct device *dev, void *id);
extern int devres_release_group(struct device *dev, void *id);


extern void *devm_kmalloc(struct device *dev, size_t size, gfp_t gfp);
static inline void *devm_kzalloc(struct device *dev, size_t size, gfp_t gfp)
{
 return devm_kmalloc(dev, size, gfp | (( gfp_t)0x8000u));
}
static inline void *devm_kmalloc_array(struct device *dev,
           size_t n, size_t size, gfp_t flags)
{
 if (size != 0 && n > (~(size_t)0) / size)
  return 0;
 return devm_kmalloc(dev, n * size, flags);
}
static inline void *devm_kcalloc(struct device *dev,
     size_t n, size_t size, gfp_t flags)
{
 return devm_kmalloc_array(dev, n, size, flags | (( gfp_t)0x8000u));
}
extern void devm_kfree(struct device *dev, void *p);

void *devm_ioremap_resource(struct device *dev, struct resource *res);
void *devm_request_and_ioremap(struct device *dev,
   struct resource *res);


int devm_add_action(struct device *dev, void (*action)(void *), void *data);
void devm_remove_action(struct device *dev, void (*action)(void *), void *data);

struct device_dma_parameters {




 unsigned int max_segment_size;
 unsigned long segment_boundary_mask;
};

struct acpi_device;

struct acpi_dev_node {

 struct acpi_device *companion;

};
struct device {
 struct device *parent;

 struct device_private *p;

 struct kobject kobj;
 char *init_name;
 struct device_type *type;

 struct mutex mutex;



 struct bus_type *bus;
 struct device_driver *driver;

 void *platform_data;

 struct dev_pm_info power;
 struct dev_pm_domain *pm_domain;


 struct dev_pin_info *pins;



 int numa_node;

 u64 *dma_mask;
 u64 coherent_dma_mask;





 struct device_dma_parameters *dma_parms;

 struct list_head dma_pools;

 struct dma_coherent_mem *dma_mem;






 struct dev_archdata archdata;

 struct device_node *of_node;
 struct acpi_dev_node acpi_node;

 dev_t devt;
 u32 id;

 spinlock_t devres_lock;
 struct list_head devres_head;

 struct klist_node knode_class;
 struct _class *_class;
 struct attribute_group **groups;

 void (*release)(struct device *dev);
 struct iommu_group *iommu_group;

 bool offline_disabled:1;
 bool offline:1;
};

static inline struct device *kobj_to_dev(struct kobject *kobj)
{
 return ({ typeof( ((struct device *)0)->kobj ) *__mptr = (kobj); (struct device *)( (char *)__mptr - ((size_t) &((struct device *)0)->kobj) );});
}


struct wakeup_source {
 char *name;
 struct list_head entry;
 spinlock_t lock;
 struct timer_list timer;
 unsigned long timer_expires;
 ktime_t total_time;
 ktime_t max_time;
 ktime_t last_time;
 ktime_t start_prevent_time;
 ktime_t prevent_sleep_time;
 unsigned long event_count;
 unsigned long active_count;
 unsigned long relax_count;
 unsigned long expire_count;
 unsigned long wakeup_count;
 bool active:1;
 bool autosleep_enabled:1;
};







static inline bool device_can_wakeup(struct device *dev)
{
 return dev->power.can_wakeup;
}

static inline bool device_may_wakeup(struct device *dev)
{
 return dev->power.can_wakeup && !!dev->power.wakeup;
}


extern void wakeup_source_prepare(struct wakeup_source *ws, char *name);
extern struct wakeup_source *wakeup_source_create( char *name);
extern void wakeup_source_drop(struct wakeup_source *ws);
extern void wakeup_source_destroy(struct wakeup_source *ws);
extern void wakeup_source_add(struct wakeup_source *ws);
extern void wakeup_source_remove(struct wakeup_source *ws);
extern struct wakeup_source *wakeup_source_register( char *name);
extern void wakeup_source_unregister(struct wakeup_source *ws);
extern int device_wakeup_enable(struct device *dev);
extern int device_wakeup_disable(struct device *dev);
extern void device_set_wakeup_capable(struct device *dev, bool capable);
extern int device_init_wakeup(struct device *dev, bool val);
extern int device_set_wakeup_enable(struct device *dev, bool enable);
extern void __pm_stay_awake(struct wakeup_source *ws);
extern void pm_stay_awake(struct device *dev);
extern void __pm_relax(struct wakeup_source *ws);
extern void pm_relax(struct device *dev);
extern void __pm_wakeup_event(struct wakeup_source *ws, unsigned int msec);
extern void pm_wakeup_event(struct device *dev, unsigned int msec);
static inline void wakeup_source_init(struct wakeup_source *ws,
          char *name)
{
 wakeup_source_prepare(ws, name);
 wakeup_source_add(ws);
}

static inline void wakeup_source_trash(struct wakeup_source *ws)
{
 wakeup_source_remove(ws);
 wakeup_source_drop(ws);
}

static inline char *dev_name( struct device *dev)
{

 if (dev->init_name)
  return dev->init_name;

 return kobject_name(&dev->kobj);
}

extern __attribute__((format(printf, 2, 3)))
int dev_set_name(struct device *dev, char *name, ...);


static inline int dev_to_node(struct device *dev)
{
 return dev->numa_node;
}
static inline void set_dev_node(struct device *dev, int node)
{
 dev->numa_node = node;
}
static inline struct pm_subsys_data *dev_to_psd(struct device *dev)
{
 return dev ? dev->power.subsys_data : 0;
}

static inline unsigned int dev_get_uevent_suppress( struct device *dev)
{
 return dev->kobj.uevent_suppress;
}

static inline void dev_set_uevent_suppress(struct device *dev, int val)
{
 dev->kobj.uevent_suppress = val;
}

static inline int device_is_registered(struct device *dev)
{
 return dev->kobj.state_in_sysfs;
}

static inline void device_enable_async_suspend(struct device *dev)
{
 if (!dev->power.is_prepared)
  dev->power.async_suspend = _true;
}

static inline void device_disable_async_suspend(struct device *dev)
{
 if (!dev->power.is_prepared)
  dev->power.async_suspend = _false;
}

static inline bool device_async_suspend_enabled(struct device *dev)
{
 return !!dev->power.async_suspend;
}

static inline void pm_suspend_ignore_children(struct device *dev, bool enable)
{
 dev->power.ignore_children = enable;
}

static inline void dev_pm_syscore_device(struct device *dev, bool val)
{

 dev->power.syscore = val;

}

static inline void device_lock(struct device *dev)
{
 ;
}

static inline int device_trylock(struct device *dev)
{
 return 1;
}

static inline void device_unlock(struct device *dev)
{
 ;
}

void driver_init(void);




extern int device_register(struct device *dev);
extern void device_unregister(struct device *dev);
extern void device_initialize(struct device *dev);
extern int device_add(struct device *dev);
extern void device_del(struct device *dev);
extern int device_for_each_child(struct device *dev, void *data,
       int (*fn)(struct device *dev, void *data));
extern struct device *device_find_child(struct device *dev, void *data,
    int (*match)(struct device *dev, void *data));
extern int device_rename(struct device *dev, char *new_name);
extern int device_move(struct device *dev, struct device *new_parent,
         enum dpm_order dpm_order);
extern char *device_get_devnode(struct device *dev,
          umode_t *mode, kuid_t *uid, kgid_t *gid,
          char **tmp);
extern void *dev_get_drvdata( struct device *dev);
extern int dev_set_drvdata(struct device *dev, void *data);

static inline bool device_supports_offline(struct device *dev)
{
 return dev->bus && dev->bus->offline && dev->bus->online;
}

extern void lock_device_hotplug(void);
extern void unlock_device_hotplug(void);
extern int lock_device_hotplug_sysfs(void);
extern int device_offline(struct device *dev);
extern int device_online(struct device *dev);



extern struct device *__root_device_register( char *name,
          struct module *owner);
extern void root_device_unregister(struct device *root);

static inline void *dev_get_platdata( struct device *dev)
{
 return dev->platform_data;
}





extern int device_bind_driver(struct device *dev);
extern void device_release_driver(struct device *dev);
extern int device_attach(struct device *dev);
extern int driver_attach(struct device_driver *drv);
extern int device_reprobe(struct device *dev);




extern struct device *device_create_vargs(struct _class *cls,
       struct device *parent,
       dev_t devt,
       void *drvdata,
       char *fmt,
       va_list vargs);
extern __attribute__((format(printf, 5, 6)))
struct device *device_create(struct _class *cls, struct device *parent,
        dev_t devt, void *drvdata,
        char *fmt, ...);
extern __attribute__((format(printf, 6, 7)))
struct device *device_create_with_groups(struct _class *cls,
        struct device *parent, dev_t devt, void *drvdata,
        struct attribute_group **groups,
        char *fmt, ...);
extern void device_destroy(struct _class *cls, dev_t devt);







extern int (*platform_notify)(struct device *dev);

extern int (*platform_notify_remove)(struct device *dev);






extern struct device *get_device(struct device *dev);
extern void put_device(struct device *dev);


extern int devtmpfs_create_node(struct device *dev);
extern int devtmpfs_delete_node(struct device *dev);
extern int devtmpfs_mount( char *mntdir);







extern void device_shutdown(void);


extern char *dev_driver_string( struct device *dev);




extern __attribute__((format(printf, 3, 0)))
int dev_vprintk_emit(int level, struct device *dev,
       char *fmt, va_list args);
extern __attribute__((format(printf, 3, 4)))
int dev_printk_emit(int level, struct device *dev, char *fmt, ...);

extern __attribute__((format(printf, 3, 4)))
int dev_printk( char *level, struct device *dev,
        char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_emerg( struct device *dev, char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_alert( struct device *dev, char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_crit( struct device *dev, char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_err( struct device *dev, char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_warn( struct device *dev, char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int dev_notice( struct device *dev, char *fmt, ...);
extern __attribute__((format(printf, 2, 3)))
int _dev_info( struct device *dev, char *fmt, ...);



struct node {
 struct device dev;


 struct work_struct node_work;

};

struct memory_block;
extern struct node *node_devices[];
typedef void (*node_registration_func_t)(struct node *);

extern void unregister_node(struct node *node);

extern int register_one_node(int nid);
extern void unregister_one_node(int nid);
extern int register_cpu_under_node(unsigned int cpu, unsigned int nid);
extern int unregister_cpu_under_node(unsigned int cpu, unsigned int nid);
extern int register_mem_sect_under_node(struct memory_block *mem_blk,
      int nid);
extern int unregister_mem_sect_under_nodes(struct memory_block *mem_blk,
        unsigned long phys_index);


extern void register_hugetlbfs_with_node(node_registration_func_t doregister,
      node_registration_func_t unregister);



struct device;
struct device_node;

struct cpu {
 int node_id;
 int hotpluggable;
 struct device dev;
};

extern int register_cpu(struct cpu *cpu, int num);
extern struct device *get_cpu_device(unsigned cpu);
extern bool cpu_is_hotpluggable(unsigned cpu);
extern bool arch_match_cpu_phys_id(int cpu, u64 phys_id);
extern bool arch_find_n_match_cpu_physical_id(struct device_node *cpun,
           int cpu, unsigned int *thread);

extern int cpu_add_dev_attr(struct device_attribute *attr);
extern void cpu_remove_dev_attr(struct device_attribute *attr);

extern int cpu_add_dev_attr_group(struct attribute_group *attrs);
extern void cpu_remove_dev_attr_group(struct attribute_group *attrs);


extern void unregister_cpu(struct cpu *cpu);
extern ssize_t arch_cpu_probe( char *, size_t);
extern ssize_t arch_cpu_release( char *, size_t);

struct notifier_block;


extern int arch_cpu_uevent(struct device *dev, struct kobj_uevent_env *env);
extern ssize_t arch_print_cpu_modalias(struct device *dev,
           struct device_attribute *attr,
           char *bufptr);





enum {
 CPU_PRI_SCHED_ACTIVE = ((int)(~0U>>1)),
 CPU_PRI_CPUSET_ACTIVE = ((int)(~0U>>1)) - 1,
 CPU_PRI_SCHED_INACTIVE = (-((int)(~0U>>1)) - 1) + 1,
 CPU_PRI_CPUSET_INACTIVE = (-((int)(~0U>>1)) - 1),


 CPU_PRI_PERF = 20,
 CPU_PRI_MIGRATION = 10,

 CPU_PRI_WORKQUEUE_UP = 5,
 CPU_PRI_WORKQUEUE_DOWN = -5,
};
extern int register_cpu_notifier(struct notifier_block *nb);
extern void unregister_cpu_notifier(struct notifier_block *nb);
int cpu_up(unsigned int cpu);
void notify_cpu_starting(unsigned int cpu);
extern void cpu_maps_update_begin(void);
extern void cpu_maps_update_done(void);
extern struct bus_type cpu_subsys;




extern void cpu_hotplug_begin(void);
extern void cpu_hotplug_done(void);
extern void get_online_cpus(void);
extern void put_online_cpus(void);
extern void cpu_hotplug_disable(void);
extern void cpu_hotplug_enable(void);



void clear_tasks_mm_cpumask(int cpu);
int cpu_down(unsigned int cpu);
extern int disable_nonboot_cpus(void);
extern void enable_nonboot_cpus(void);





enum cpuhp_state {
 CPUHP_OFFLINE,
 CPUHP_ONLINE,
};

void cpu_startup_entry(enum cpuhp_state state);
void cpu_idle(void);

void cpu_idle_poll_ctrl(bool enable);

void arch_cpu_idle(void);
void arch_cpu_idle_prepare(void);
void arch_cpu_idle_enter(void);
void arch_cpu_idle_exit(void);
void arch_cpu_idle_dead(void);
struct completion;






struct __sysctl_args {
 int *name;
 int nlen;
 void *oldval;
 size_t *oldlenp;
 void *newval;
 size_t newlen;
 unsigned long __unused[4];
};





enum
{
 CTL_KERN=1,
 CTL_VM=2,
 CTL_NET=3,
 CTL_PROC=4,
 CTL_FS=5,
 CTL_DEBUG=6,
 CTL_DEV=7,
 CTL_BUS=8,
 CTL_ABI=9,
 CTL_CPU=10,
 CTL_ARLAN=254,
 CTL_S390DBF=5677,
 CTL_SUNRPC=7249,
 CTL_PM=9899,
 CTL_FRV=9898,
};


enum
{
 CTL_BUS_ISA=1
};


enum
{
 INOTIFY_MAX_USER_INSTANCES=1,
 INOTIFY_MAX_USER_WATCHES=2,
 INOTIFY_MAX_QUEUED_EVENTS=3
};


enum
{
 KERN_OSTYPE=1,
 KERN_OSRELEASE=2,
 KERN_OSREV=3,
 KERN_VERSION=4,
 KERN_SECUREMASK=5,
 KERN_PROF=6,
 KERN_NODENAME=7,
 KERN_DOMAINNAME=8,

 KERN_PANIC=15,
 KERN_REALROOTDEV=16,

 KERN_SPARC_REBOOT=21,
 KERN_CTLALTDEL=22,
 KERN_PRINTK=23,
 KERN_NAMETRANS=24,
 KERN_PPC_HTABRECLAIM=25,
 KERN_PPC_ZEROPAGED=26,
 KERN_PPC_POWERSAVE_NAP=27,
 KERN_MODPROBE=28,
 KERN_SG_BIG_BUFF=29,
 KERN_ACCT=30,
 KERN_PPC_L2CR=31,

 KERN_RTSIGNR=32,
 KERN_RTSIGMAX=33,

 KERN_SHMMAX=34,
 KERN_MSGMAX=35,
 KERN_MSGMNB=36,
 KERN_MSGPOOL=37,
 KERN_SYSRQ=38,
 KERN_MAX_THREADS=39,
  KERN_RANDOM=40,
  KERN_SHMALL=41,
  KERN_MSGMNI=42,
  KERN_SEM=43,
  KERN_SPARC_STOP_A=44,
  KERN_SHMMNI=45,
 KERN_OVERFLOWUID=46,
 KERN_OVERFLOWGID=47,
 KERN_SHMPATH=48,
 KERN_HOTPLUG=49,
 KERN_IEEE_EMULATION_WARNINGS=50,
 KERN_S390_USER_DEBUG_LOGGING=51,
 KERN_CORE_USES_PID=52,
 KERN_TAINTED=53,
 KERN_CADPID=54,
 KERN_PIDMAX=55,
   KERN_CORE_PATTERN=56,
 KERN_PANIC_ON_OOPS=57,
 KERN_HPPA_PWRSW=58,
 KERN_HPPA_UNALIGNED=59,
 KERN_PRINTK_RATELIMIT=60,
 KERN_PRINTK_RATELIMIT_BURST=61,
 KERN_PTY=62,
 KERN_NGROUPS_MAX=63,
 KERN_SPARC_SCONS_PWROFF=64,
 KERN_HZ_TIMER=65,
 KERN_UNKNOWN_NMI_PANIC=66,
 KERN_BOOTLOADER_TYPE=67,
 KERN_RANDOMIZE=68,
 KERN_SETUID_DUMPABLE=69,
 KERN_SPIN_RETRY=70,
 KERN_ACPI_VIDEO_FLAGS=71,
 KERN_IA64_UNALIGNED=72,
 KERN_COMPAT_LOG=73,
 KERN_MAX_LOCK_DEPTH=74,
 KERN_NMI_WATCHDOG=75,
 KERN_PANIC_ON_NMI=76,
};




enum
{
 VM_UNUSED1=1,
 VM_UNUSED2=2,
 VM_UNUSED3=3,
 VM_UNUSED4=4,
 VM_OVERCOMMIT_MEMORY=5,
 VM_UNUSED5=6,
 VM_UNUSED7=7,
 VM_UNUSED8=8,
 VM_UNUSED9=9,
 VM_PAGE_CLUSTER=10,
 VM_DIRTY_BACKGROUND=11,
 VM_DIRTY_RATIO=12,
 VM_DIRTY_WB_CS=13,
 VM_DIRTY_EXPIRE_CS=14,
 VM_NR_PDFLUSH_THREADS=15,
 VM_OVERCOMMIT_RATIO=16,
 VM_PAGEBUF=17,
 VM_HUGETLB_PAGES=18,
 VM_SWAPPINESS=19,
 VM_LOWMEM_RESERVE_RATIO=20,
 VM_MIN_FREE_KBYTES=21,
 VM_MAX_MAP_COUNT=22,
 VM_LAPTOP_MODE=23,
 VM_BLOCK_DUMP=24,
 VM_HUGETLB_GROUP=25,
 VM_VFS_CACHE_PRESSURE=26,
 VM_LEGACY_VA_LAYOUT=27,
 VM_SWAP_TOKEN_TIMEOUT=28,
 VM_DROP_PAGECACHE=29,
 VM_PERCPU_PAGELIST_FRACTION=30,
 VM_ZONE_RECLAIM_MODE=31,
 VM_MIN_UNMAPPED=32,
 VM_PANIC_ON_OOM=33,
 VM_VDSO_ENABLED=34,
 VM_MIN_SLAB=35,
};



enum
{
 NET_CORE=1,
 NET_ETHER=2,
 NET_802=3,
 NET_UNIX=4,
 NET_IPV4=5,
 NET_IPX=6,
 NET_ATALK=7,
 NET_NETROM=8,
 NET_AX25=9,
 NET_BRIDGE=10,
 NET_ROSE=11,
 NET_IPV6=12,
 NET_X25=13,
 NET_TR=14,
 NET_DECNET=15,
 NET_ECONET=16,
 NET_SCTP=17,
 NET_LLC=18,
 NET_NETFILTER=19,
 NET_DCCP=20,
 NET_IRDA=412,
};


enum
{
 RANDOM_POOLSIZE=1,
 RANDOM_ENTROPY_COUNT=2,
 RANDOM_READ_THRESH=3,
 RANDOM_WRITE_THRESH=4,
 RANDOM_BOOT_ID=5,
 RANDOM_UUID=6
};


enum
{
 PTY_MAX=1,
 PTY_NR=2
};


enum
{
 BUS_ISA_MEM_BASE=1,
 BUS_ISA_PORT_BASE=2,
 BUS_ISA_PORT_SHIFT=3
};


enum
{
 NET_CORE_WMEM_MAX=1,
 NET_CORE_RMEM_MAX=2,
 NET_CORE_WMEM_DEFAULT=3,
 NET_CORE_RMEM_DEFAULT=4,

 NET_CORE_MAX_BACKLOG=6,
 NET_CORE_FASTROUTE=7,
 NET_CORE_MSG_COST=8,
 NET_CORE_MSG_BURST=9,
 NET_CORE_OPTMEM_MAX=10,
 NET_CORE_HOT_LIST_LENGTH=11,
 NET_CORE_DIVERT_VERSION=12,
 NET_CORE_NO_CONG_THRESH=13,
 NET_CORE_NO_CONG=14,
 NET_CORE_LO_CONG=15,
 NET_CORE_MOD_CONG=16,
 NET_CORE_DEV_WEIGHT=17,
 NET_CORE_SOMAXCONN=18,
 NET_CORE_BUDGET=19,
 NET_CORE_AEVENT_ETIME=20,
 NET_CORE_AEVENT_RSEQTH=21,
 NET_CORE_WARNINGS=22,
};







enum
{
 NET_UNIX_DESTROY_DELAY=1,
 NET_UNIX_DELETE_DELAY=2,
 NET_UNIX_MAX_DGRAM_QLEN=3,
};


enum
{
 NET_NF_CONNTRACK_MAX=1,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_NF_CONNTRACK_BUCKETS=14,
 NET_NF_CONNTRACK_LOG_INVALID=15,
 NET_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_NF_CONNTRACK_TCP_LOOSE=17,
 NET_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_NF_CONNTRACK_TCP_MAX_RETRANS=19,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
 NET_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_NF_CONNTRACK_COUNT=27,
 NET_NF_CONNTRACK_ICMPV6_TIMEOUT=28,
 NET_NF_CONNTRACK_FRAG6_TIMEOUT=29,
 NET_NF_CONNTRACK_FRAG6_LOW_THRESH=30,
 NET_NF_CONNTRACK_FRAG6_HIGH_THRESH=31,
 NET_NF_CONNTRACK_CHECKSUM=32,
};


enum
{

 NET_IPV4_FORWARD=8,
 NET_IPV4_DYNADDR=9,

 NET_IPV4_CONF=16,
 NET_IPV4_NEIGH=17,
 NET_IPV4_ROUTE=18,
 NET_IPV4_FIB_HASH=19,
 NET_IPV4_NETFILTER=20,

 NET_IPV4_TCP_TIMESTAMPS=33,
 NET_IPV4_TCP_WINDOW_SCALING=34,
 NET_IPV4_TCP_SACK=35,
 NET_IPV4_TCP_RETRANS_COLLAPSE=36,
 NET_IPV4_DEFAULT_TTL=37,
 NET_IPV4_AUTOCONFIG=38,
 NET_IPV4_NO_PMTU_DISC=39,
 NET_IPV4_TCP_SYN_RETRIES=40,
 NET_IPV4_IPFRAG_HIGH_THRESH=41,
 NET_IPV4_IPFRAG_LOW_THRESH=42,
 NET_IPV4_IPFRAG_TIME=43,
 NET_IPV4_TCP_MAX_KA_PROBES=44,
 NET_IPV4_TCP_KEEPALIVE_TIME=45,
 NET_IPV4_TCP_KEEPALIVE_PROBES=46,
 NET_IPV4_TCP_RETRIES1=47,
 NET_IPV4_TCP_RETRIES2=48,
 NET_IPV4_TCP_FIN_TIMEOUT=49,
 NET_IPV4_IP_MASQ_DEBUG=50,
 NET_TCP_SYNCOOKIES=51,
 NET_TCP_STDURG=52,
 NET_TCP_RFC1337=53,
 NET_TCP_SYN_TAILDROP=54,
 NET_TCP_MAX_SYN_BACKLOG=55,
 NET_IPV4_LOCAL_PORT_RANGE=56,
 NET_IPV4_ICMP_ECHO_IGNORE_ALL=57,
 NET_IPV4_ICMP_ECHO_IGNORE_BROADCASTS=58,
 NET_IPV4_ICMP_SOURCEQUENCH_RATE=59,
 NET_IPV4_ICMP_DESTUNREACH_RATE=60,
 NET_IPV4_ICMP_TIMEEXCEED_RATE=61,
 NET_IPV4_ICMP_PARAMPROB_RATE=62,
 NET_IPV4_ICMP_ECHOREPLY_RATE=63,
 NET_IPV4_ICMP_IGNORE_BOGUS_ERROR_RESPONSES=64,
 NET_IPV4_IGMP_MAX_MEMBERSHIPS=65,
 NET_TCP_TW_RECYCLE=66,
 NET_IPV4_ALWAYS_DEFRAG=67,
 NET_IPV4_TCP_KEEPALIVE_INTVL=68,
 NET_IPV4_INET_PEER_THRESHOLD=69,
 NET_IPV4_INET_PEER_MINTTL=70,
 NET_IPV4_INET_PEER_MAXTTL=71,
 NET_IPV4_INET_PEER_GC_MINTIME=72,
 NET_IPV4_INET_PEER_GC_MAXTIME=73,
 NET_TCP_ORPHAN_RETRIES=74,
 NET_TCP_ABORT_ON_OVERFLOW=75,
 NET_TCP_SYNACK_RETRIES=76,
 NET_TCP_MAX_ORPHANS=77,
 NET_TCP_MAX_TW_BUCKETS=78,
 NET_TCP_FACK=79,
 NET_TCP_REORDERING=80,
 NET_TCP_ECN=81,
 NET_TCP_DSACK=82,
 NET_TCP_MEM=83,
 NET_TCP_WMEM=84,
 NET_TCP_RMEM=85,
 NET_TCP_APP_WIN=86,
 NET_TCP_ADV_WIN_SCALE=87,
 NET_IPV4_NONLOCAL_BIND=88,
 NET_IPV4_ICMP_RATELIMIT=89,
 NET_IPV4_ICMP_RATEMASK=90,
 NET_TCP_TW_REUSE=91,
 NET_TCP_FRTO=92,
 NET_TCP_LOW_LATENCY=93,
 NET_IPV4_IPFRAG_SECRET_INTERVAL=94,
 NET_IPV4_IGMP_MAX_MSF=96,
 NET_TCP_NO_METRICS_SAVE=97,
 NET_TCP_DEFAULT_WIN_SCALE=105,
 NET_TCP_MODERATE_RCVBUF=106,
 NET_TCP_TSO_WIN_DIVISOR=107,
 NET_TCP_BIC_BETA=108,
 NET_IPV4_ICMP_ERRORS_USE_INBOUND_IFADDR=109,
 NET_TCP_CONG_CONTROL=110,
 NET_TCP_ABC=111,
 NET_IPV4_IPFRAG_MAX_DIST=112,
  NET_TCP_MTU_PROBING=113,
 NET_TCP_BASE_MSS=114,
 NET_IPV4_TCP_WORKAROUND_SIGNED_WINDOWS=115,
 NET_TCP_DMA_COPYBREAK=116,
 NET_TCP_SLOW_START_AFTER_IDLE=117,
 NET_CIPSOV4_CACHE_ENABLE=118,
 NET_CIPSOV4_CACHE_BUCKET_SIZE=119,
 NET_CIPSOV4_RBM_OPTFMT=120,
 NET_CIPSOV4_RBM_STRICTVALID=121,
 NET_TCP_AVAIL_CONG_CONTROL=122,
 NET_TCP_ALLOWED_CONG_CONTROL=123,
 NET_TCP_MAX_SSTHRESH=124,
 NET_TCP_FRTO_RESPONSE=125,
};

enum {
 NET_IPV4_ROUTE_FLUSH=1,
 NET_IPV4_ROUTE_MIN_DELAY=2,
 NET_IPV4_ROUTE_MAX_DELAY=3,
 NET_IPV4_ROUTE_GC_THRESH=4,
 NET_IPV4_ROUTE_MAX_SIZE=5,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL=6,
 NET_IPV4_ROUTE_GC_TIMEOUT=7,
 NET_IPV4_ROUTE_GC_INTERVAL=8,
 NET_IPV4_ROUTE_REDIRECT_LOAD=9,
 NET_IPV4_ROUTE_REDIRECT_NUMBER=10,
 NET_IPV4_ROUTE_REDIRECT_SILENCE=11,
 NET_IPV4_ROUTE_ERROR_COST=12,
 NET_IPV4_ROUTE_ERROR_BURST=13,
 NET_IPV4_ROUTE_GC_ELASTICITY=14,
 NET_IPV4_ROUTE_MTU_EXPIRES=15,
 NET_IPV4_ROUTE_MIN_PMTU=16,
 NET_IPV4_ROUTE_MIN_ADVMSS=17,
 NET_IPV4_ROUTE_SECRET_INTERVAL=18,
 NET_IPV4_ROUTE_GC_MIN_INTERVAL_MS=19,
};

enum
{
 NET_PROTO_CONF_ALL=-2,
 NET_PROTO_CONF_DEFAULT=-3


};

enum
{
 NET_IPV4_CONF_FORWARDING=1,
 NET_IPV4_CONF_MC_FORWARDING=2,
 NET_IPV4_CONF_PROXY_ARP=3,
 NET_IPV4_CONF_ACCEPT_REDIRECTS=4,
 NET_IPV4_CONF_SECURE_REDIRECTS=5,
 NET_IPV4_CONF_SEND_REDIRECTS=6,
 NET_IPV4_CONF_SHARED_MEDIA=7,
 NET_IPV4_CONF_RP_FILTER=8,
 NET_IPV4_CONF_ACCEPT_SOURCE_ROUTE=9,
 NET_IPV4_CONF_BOOTP_RELAY=10,
 NET_IPV4_CONF_LOG_MARTIANS=11,
 NET_IPV4_CONF_TAG=12,
 NET_IPV4_CONF_ARPFILTER=13,
 NET_IPV4_CONF_MEDIUM_ID=14,
 NET_IPV4_CONF_NOXFRM=15,
 NET_IPV4_CONF_NOPOLICY=16,
 NET_IPV4_CONF_FORCE_IGMP_VERSION=17,
 NET_IPV4_CONF_ARP_ANNOUNCE=18,
 NET_IPV4_CONF_ARP_IGNORE=19,
 NET_IPV4_CONF_PROMOTE_SECONDARIES=20,
 NET_IPV4_CONF_ARP_ACCEPT=21,
 NET_IPV4_CONF_ARP_NOTIFY=22,
};


enum
{
 NET_IPV4_NF_CONNTRACK_MAX=1,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_SENT=2,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_SYN_RECV=3,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_ESTABLISHED=4,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_FIN_WAIT=5,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE_WAIT=6,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_LAST_ACK=7,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_TIME_WAIT=8,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_CLOSE=9,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT=10,
 NET_IPV4_NF_CONNTRACK_UDP_TIMEOUT_STREAM=11,
 NET_IPV4_NF_CONNTRACK_ICMP_TIMEOUT=12,
 NET_IPV4_NF_CONNTRACK_GENERIC_TIMEOUT=13,
 NET_IPV4_NF_CONNTRACK_BUCKETS=14,
 NET_IPV4_NF_CONNTRACK_LOG_INVALID=15,
 NET_IPV4_NF_CONNTRACK_TCP_TIMEOUT_MAX_RETRANS=16,
 NET_IPV4_NF_CONNTRACK_TCP_LOOSE=17,
 NET_IPV4_NF_CONNTRACK_TCP_BE_LIBERAL=18,
 NET_IPV4_NF_CONNTRACK_TCP_MAX_RETRANS=19,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_CLOSED=20,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_WAIT=21,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_COOKIE_ECHOED=22,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_ESTABLISHED=23,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_SENT=24,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_RECD=25,
  NET_IPV4_NF_CONNTRACK_SCTP_TIMEOUT_SHUTDOWN_ACK_SENT=26,
 NET_IPV4_NF_CONNTRACK_COUNT=27,
 NET_IPV4_NF_CONNTRACK_CHECKSUM=28,
};


enum {
 NET_IPV6_CONF=16,
 NET_IPV6_NEIGH=17,
 NET_IPV6_ROUTE=18,
 NET_IPV6_ICMP=19,
 NET_IPV6_BINDV6ONLY=20,
 NET_IPV6_IP6FRAG_HIGH_THRESH=21,
 NET_IPV6_IP6FRAG_LOW_THRESH=22,
 NET_IPV6_IP6FRAG_TIME=23,
 NET_IPV6_IP6FRAG_SECRET_INTERVAL=24,
 NET_IPV6_MLD_MAX_MSF=25,
};

enum {
 NET_IPV6_ROUTE_FLUSH=1,
 NET_IPV6_ROUTE_GC_THRESH=2,
 NET_IPV6_ROUTE_MAX_SIZE=3,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL=4,
 NET_IPV6_ROUTE_GC_TIMEOUT=5,
 NET_IPV6_ROUTE_GC_INTERVAL=6,
 NET_IPV6_ROUTE_GC_ELASTICITY=7,
 NET_IPV6_ROUTE_MTU_EXPIRES=8,
 NET_IPV6_ROUTE_MIN_ADVMSS=9,
 NET_IPV6_ROUTE_GC_MIN_INTERVAL_MS=10
};

enum {
 NET_IPV6_FORWARDING=1,
 NET_IPV6_HOP_LIMIT=2,
 NET_IPV6_MTU=3,
 NET_IPV6_ACCEPT_RA=4,
 NET_IPV6_ACCEPT_REDIRECTS=5,
 NET_IPV6_AUTOCONF=6,
 NET_IPV6_DAD_TRANSMITS=7,
 NET_IPV6_RTR_SOLICITS=8,
 NET_IPV6_RTR_SOLICIT_INTERVAL=9,
 NET_IPV6_RTR_SOLICIT_DELAY=10,
 NET_IPV6_USE_TEMPADDR=11,
 NET_IPV6_TEMP_VALID_LFT=12,
 NET_IPV6_TEMP_PREFERED_LFT=13,
 NET_IPV6_REGEN_MAX_RETRY=14,
 NET_IPV6_MAX_DESYNC_FACTOR=15,
 NET_IPV6_MAX_ADDRESSES=16,
 NET_IPV6_FORCE_MLD_VERSION=17,
 NET_IPV6_ACCEPT_RA_DEFRTR=18,
 NET_IPV6_ACCEPT_RA_PINFO=19,
 NET_IPV6_ACCEPT_RA_RTR_PREF=20,
 NET_IPV6_RTR_PROBE_INTERVAL=21,
 NET_IPV6_ACCEPT_RA_RT_INFO_MAX_PLEN=22,
 NET_IPV6_PROXY_NDP=23,
 NET_IPV6_ACCEPT_SOURCE_ROUTE=25,
 __NET_IPV6_MAX
};


enum {
 NET_IPV6_ICMP_RATELIMIT=1
};


enum {
 NET_NEIGH_MCAST_SOLICIT=1,
 NET_NEIGH_UCAST_SOLICIT=2,
 NET_NEIGH_APP_SOLICIT=3,
 NET_NEIGH_RETRANS_TIME=4,
 NET_NEIGH_REACHABLE_TIME=5,
 NET_NEIGH_DELAY_PROBE_TIME=6,
 NET_NEIGH_GC_STALE_TIME=7,
 NET_NEIGH_UNRES_QLEN=8,
 NET_NEIGH_PROXY_QLEN=9,
 NET_NEIGH_ANYCAST_DELAY=10,
 NET_NEIGH_PROXY_DELAY=11,
 NET_NEIGH_LOCKTIME=12,
 NET_NEIGH_GC_INTERVAL=13,
 NET_NEIGH_GC_THRESH1=14,
 NET_NEIGH_GC_THRESH2=15,
 NET_NEIGH_GC_THRESH3=16,
 NET_NEIGH_RETRANS_TIME_MS=17,
 NET_NEIGH_REACHABLE_TIME_MS=18,
};


enum {
 NET_DCCP_DEFAULT=1,
};


enum {
 NET_IPX_PPROP_BROADCASTING=1,
 NET_IPX_FORWARDING=2
};


enum {
 NET_LLC2=1,
 NET_LLC_STATION=2,
};


enum {
 NET_LLC2_TIMEOUT=1,
};


enum {
 NET_LLC_STATION_ACK_TIMEOUT=1,
};


enum {
 NET_LLC2_ACK_TIMEOUT=1,
 NET_LLC2_P_TIMEOUT=2,
 NET_LLC2_REJ_TIMEOUT=3,
 NET_LLC2_BUSY_TIMEOUT=4,
};


enum {
 NET_ATALK_AARP_EXPIRY_TIME=1,
 NET_ATALK_AARP_TICK_TIME=2,
 NET_ATALK_AARP_RETRANSMIT_LIMIT=3,
 NET_ATALK_AARP_RESOLVE_TIME=4
};



enum {
 NET_NETROM_DEFAULT_PATH_QUALITY=1,
 NET_NETROM_OBSOLESCENCE_COUNT_INITIALISER=2,
 NET_NETROM_NETWORK_TTL_INITIALISER=3,
 NET_NETROM_TRANSPORT_TIMEOUT=4,
 NET_NETROM_TRANSPORT_MAXIMUM_TRIES=5,
 NET_NETROM_TRANSPORT_ACKNOWLEDGE_DELAY=6,
 NET_NETROM_TRANSPORT_BUSY_DELAY=7,
 NET_NETROM_TRANSPORT_REQUESTED_WINDOW_SIZE=8,
 NET_NETROM_TRANSPORT_NO_ACTIVITY_TIMEOUT=9,
 NET_NETROM_ROUTING_CONTROL=10,
 NET_NETROM_LINK_FAILS_COUNT=11,
 NET_NETROM_RESET=12
};


enum {
 NET_AX25_IP_DEFAULT_MODE=1,
 NET_AX25_DEFAULT_MODE=2,
 NET_AX25_BACKOFF_TYPE=3,
 NET_AX25_CONNECT_MODE=4,
 NET_AX25_STANDARD_WINDOW=5,
 NET_AX25_EXTENDED_WINDOW=6,
 NET_AX25_T1_TIMEOUT=7,
 NET_AX25_T2_TIMEOUT=8,
 NET_AX25_T3_TIMEOUT=9,
 NET_AX25_IDLE_TIMEOUT=10,
 NET_AX25_N2=11,
 NET_AX25_PACLEN=12,
 NET_AX25_PROTOCOL=13,
 NET_AX25_DAMA_SLAVE_TIMEOUT=14
};


enum {
 NET_ROSE_RESTART_REQUEST_TIMEOUT=1,
 NET_ROSE_CALL_REQUEST_TIMEOUT=2,
 NET_ROSE_RESET_REQUEST_TIMEOUT=3,
 NET_ROSE_CLEAR_REQUEST_TIMEOUT=4,
 NET_ROSE_ACK_HOLD_BACK_TIMEOUT=5,
 NET_ROSE_ROUTING_CONTROL=6,
 NET_ROSE_LINK_FAIL_TIMEOUT=7,
 NET_ROSE_MAX_VCS=8,
 NET_ROSE_WINDOW_SIZE=9,
 NET_ROSE_NO_ACTIVITY_TIMEOUT=10
};


enum {
 NET_X25_RESTART_REQUEST_TIMEOUT=1,
 NET_X25_CALL_REQUEST_TIMEOUT=2,
 NET_X25_RESET_REQUEST_TIMEOUT=3,
 NET_X25_CLEAR_REQUEST_TIMEOUT=4,
 NET_X25_ACK_HOLD_BACK_TIMEOUT=5,
 NET_X25_FORWARD=6
};


enum
{
 NET_TR_RIF_TIMEOUT=1
};


enum {
 NET_DECNET_NODE_TYPE = 1,
 NET_DECNET_NODE_ADDRESS = 2,
 NET_DECNET_NODE_NAME = 3,
 NET_DECNET_DEFAULT_DEVICE = 4,
 NET_DECNET_TIME_WAIT = 5,
 NET_DECNET_DN_COUNT = 6,
 NET_DECNET_DI_COUNT = 7,
 NET_DECNET_DR_COUNT = 8,
 NET_DECNET_DST_GC_INTERVAL = 9,
 NET_DECNET_CONF = 10,
 NET_DECNET_NO_FC_MAX_CWND = 11,
 NET_DECNET_MEM = 12,
 NET_DECNET_RMEM = 13,
 NET_DECNET_WMEM = 14,
 NET_DECNET_DEBUG_LEVEL = 255
};


enum {
 NET_DECNET_CONF_LOOPBACK = -2,
 NET_DECNET_CONF_DDCMP = -3,
 NET_DECNET_CONF_PPP = -4,
 NET_DECNET_CONF_X25 = -5,
 NET_DECNET_CONF_GRE = -6,
 NET_DECNET_CONF_ETHER = -7


};


enum {
 NET_DECNET_CONF_DEV_PRIORITY = 1,
 NET_DECNET_CONF_DEV_T1 = 2,
 NET_DECNET_CONF_DEV_T2 = 3,
 NET_DECNET_CONF_DEV_T3 = 4,
 NET_DECNET_CONF_DEV_FORWARDING = 5,
 NET_DECNET_CONF_DEV_BLKSIZE = 6,
 NET_DECNET_CONF_DEV_STATE = 7
};


enum {
 NET_SCTP_RTO_INITIAL = 1,
 NET_SCTP_RTO_MIN = 2,
 NET_SCTP_RTO_MAX = 3,
 NET_SCTP_RTO_ALPHA = 4,
 NET_SCTP_RTO_BETA = 5,
 NET_SCTP_VALID_COOKIE_LIFE = 6,
 NET_SCTP_ASSOCIATION_MAX_RETRANS = 7,
 NET_SCTP_PATH_MAX_RETRANS = 8,
 NET_SCTP_MAX_INIT_RETRANSMITS = 9,
 NET_SCTP_HB_INTERVAL = 10,
 NET_SCTP_PRESERVE_ENABLE = 11,
 NET_SCTP_MAX_BURST = 12,
 NET_SCTP_ADDIP_ENABLE = 13,
 NET_SCTP_PRSCTP_ENABLE = 14,
 NET_SCTP_SNDBUF_POLICY = 15,
 NET_SCTP_SACK_TIMEOUT = 16,
 NET_SCTP_RCVBUF_POLICY = 17,
};


enum {
 NET_BRIDGE_NF_CALL_ARPTABLES = 1,
 NET_BRIDGE_NF_CALL_IPTABLES = 2,
 NET_BRIDGE_NF_CALL_IP6TABLES = 3,
 NET_BRIDGE_NF_FILTER_VLAN_TAGGED = 4,
 NET_BRIDGE_NF_FILTER_PPPOE_TAGGED = 5,
};


enum {
 NET_IRDA_DISCOVERY=1,
 NET_IRDA_DEVNAME=2,
 NET_IRDA_DEBUG=3,
 NET_IRDA_FAST_POLL=4,
 NET_IRDA_DISCOVERY_SLOTS=5,
 NET_IRDA_DISCOVERY_TIMEOUT=6,
 NET_IRDA_SLOT_TIMEOUT=7,
 NET_IRDA_MAX_BAUD_RATE=8,
 NET_IRDA_MIN_TX_TURN_TIME=9,
 NET_IRDA_MAX_TX_DATA_SIZE=10,
 NET_IRDA_MAX_TX_WINDOW=11,
 NET_IRDA_MAX_NOREPLY_TIME=12,
 NET_IRDA_WARN_NOREPLY_TIME=13,
 NET_IRDA_LAP_KEEPALIVE_TIME=14,
};



enum
{
 FS_NRINODE=1,
 FS_STATINODE=2,
 FS_MAXINODE=3,
 FS_NRDQUOT=4,
 FS_MAXDQUOT=5,
 FS_NRFILE=6,
 FS_MAXFILE=7,
 FS_DENTRY=8,
 FS_NRSUPER=9,
 FS_MAXSUPER=10,
 FS_OVERFLOWUID=11,
 FS_OVERFLOWGID=12,
 FS_LEASES=13,
 FS_DIR_NOTIFY=14,
 FS_LEASE_TIME=15,
 FS_DQSTATS=16,
 FS_XFS=17,
 FS_AIO_NR=18,
 FS_AIO_MAX_NR=19,
 FS_INOTIFY=20,
 FS_OCFS2=988,
};


enum {
 FS_DQ_LOOKUPS = 1,
 FS_DQ_DROPS = 2,
 FS_DQ_READS = 3,
 FS_DQ_WRITES = 4,
 FS_DQ_CACHE_HITS = 5,
 FS_DQ_ALLOCATED = 6,
 FS_DQ_FREE = 7,
 FS_DQ_SYNCS = 8,
 FS_DQ_WARNINGS = 9,
};




enum {
 DEV_CDROM=1,
 DEV_HWMON=2,
 DEV_PARPORT=3,
 DEV_RAID=4,
 DEV_MAC_HID=5,
 DEV_SCSI=6,
 DEV_IPMI=7,
};


enum {
 DEV_CDROM_INFO=1,
 DEV_CDROM_AUTOCLOSE=2,
 DEV_CDROM_AUTOEJECT=3,
 DEV_CDROM_DEBUG=4,
 DEV_CDROM_LOCK=5,
 DEV_CDROM_CHECK_MEDIA=6
};


enum {
 DEV_PARPORT_DEFAULT=-3
};


enum {
 DEV_RAID_SPEED_LIMIT_MIN=1,
 DEV_RAID_SPEED_LIMIT_MAX=2
};


enum {
 DEV_PARPORT_DEFAULT_TIMESLICE=1,
 DEV_PARPORT_DEFAULT_SPINTIME=2
};


enum {
 DEV_PARPORT_SPINTIME=1,
 DEV_PARPORT_BASE_ADDR=2,
 DEV_PARPORT_IRQ=3,
 DEV_PARPORT_DMA=4,
 DEV_PARPORT_MODES=5,
 DEV_PARPORT_DEVICES=6,
 DEV_PARPORT_AUTOPROBE=16
};


enum {
 DEV_PARPORT_DEVICES_ACTIVE=-3,
};


enum {
 DEV_PARPORT_DEVICE_TIMESLICE=1,
};


enum {
 DEV_MAC_HID_KEYBOARD_SENDS_LINUX_KEYCODES=1,
 DEV_MAC_HID_KEYBOARD_LOCK_KEYCODES=2,
 DEV_MAC_HID_MOUSE_BUTTON_EMULATION=3,
 DEV_MAC_HID_MOUSE_BUTTON2_KEYCODE=4,
 DEV_MAC_HID_MOUSE_BUTTON3_KEYCODE=5,
 DEV_MAC_HID_ADB_MOUSE_SENDS_KEYCODES=6
};


enum {
 DEV_SCSI_LOGGING_LEVEL=1,
};


enum {
 DEV_IPMI_POWEROFF_POWERCYCLE=1,
};


enum
{
 ABI_DEFHANDLER_COFF=1,
 ABI_DEFHANDLER_ELF=2,
 ABI_DEFHANDLER_LCALL7=3,
 ABI_DEFHANDLER_LIBCSO=4,
 ABI_TRACE=5,
 ABI_FAKE_UTSNAME=6,
};


struct ctl_table;
struct nsproxy;
struct ctl_table_root;
struct ctl_table_header;
struct ctl_dir;

typedef struct ctl_table ctl_table;

typedef int proc_handler (struct ctl_table *ctl, int write,
     void *buffer, size_t *lenp, loff_t *ppos);

extern int proc_dostring(struct ctl_table *, int,
    void *, size_t *, loff_t *);
extern int proc_dointvec(struct ctl_table *, int,
    void *, size_t *, loff_t *);
extern int proc_dointvec_minmax(struct ctl_table *, int,
    void *, size_t *, loff_t *);
extern int proc_dointvec_jiffies(struct ctl_table *, int,
     void *, size_t *, loff_t *);
extern int proc_dointvec_userhz_jiffies(struct ctl_table *, int,
     void *, size_t *, loff_t *);
extern int proc_dointvec_ms_jiffies(struct ctl_table *, int,
        void *, size_t *, loff_t *);
extern int proc_doulongvec_minmax(struct ctl_table *, int,
      void *, size_t *, loff_t *);
extern int proc_doulongvec_ms_jiffies_minmax(struct ctl_table *table, int,
          void *, size_t *, loff_t *);
extern int proc_do_large_bitmap(struct ctl_table *, int,
    void *, size_t *, loff_t *);
struct ctl_table_poll {
 atomic_t event;
 wait_queue_head_t wait;
};

static inline void *proc_sys_poll_event(struct ctl_table_poll *poll)
{
 return (void *)(unsigned long)atomic_read(&poll->event);
}
struct ctl_table
{
 char *procname;
 void *data;
 int maxlen;
 umode_t mode;
 struct ctl_table *child;
 proc_handler *proc_handler;
 struct ctl_table_poll *poll;
 void *extra1;
 void *extra2;
};

struct ctl_node {
 struct rb_node node;
 struct ctl_table_header *header;
};



struct ctl_table_header
{
 union {
  struct {
   struct ctl_table *ctl_table;
   int used;
   int count;
   int nreg;
  };
  struct callback_head rcu;
 };
 struct completion *unregistering;
 struct ctl_table *ctl_table_arg;
 struct ctl_table_root *root;
 struct ctl_table_set *set;
 struct ctl_dir *parent;
 struct ctl_node *node;
};

struct ctl_dir {

 struct ctl_table_header header;
 struct rb_root root;
};

struct ctl_table_set {
 int (*is_seen)(struct ctl_table_set *);
 struct ctl_dir dir;
};

struct ctl_table_root {
 struct ctl_table_set default_set;
 struct ctl_table_set *(*lookup)(struct ctl_table_root *root,
        struct nsproxy *namespaces);
 int (*permissions)(struct ctl_table_header *head, struct ctl_table *table);
};


struct ctl_path {
 char *procname;
};



void proc_sys_poll_notify(struct ctl_table_poll *poll);

extern void setup_sysctl_set(struct ctl_table_set *p,
 struct ctl_table_root *root,
 int (*is_seen)(struct ctl_table_set *));
extern void retire_sysctl_set(struct ctl_table_set *set);

void register_sysctl_root(struct ctl_table_root *root);
struct ctl_table_header *__register_sysctl_table(
 struct ctl_table_set *set,
 char *path, struct ctl_table *table);
struct ctl_table_header *__register_sysctl_paths(
 struct ctl_table_set *set,
 struct ctl_path *path, struct ctl_table *table);
struct ctl_table_header *register_sysctl( char *path, struct ctl_table *table);
struct ctl_table_header *register_sysctl_table(struct ctl_table * table);
struct ctl_table_header *register_sysctl_paths( struct ctl_path *path,
      struct ctl_table *table);

void unregister_sysctl_table(struct ctl_table_header * table);

extern int sysctl_init(void);




extern char modprobe_path[];


extern __attribute__((format(printf, 2, 3)))
int __request_module(bool wait, char *name, ...);
struct cred;
struct file;






struct subprocess_info {
 struct work_struct work;
 struct completion *complete;
 char *path;
 char **argv;
 char **envp;
 int wait;
 int retval;
 int (*init)(struct subprocess_info *info, struct cred *_new);
 void (*cleanup)(struct subprocess_info *info);
 void *data;
};

extern int
call_usermodehelper(char *path, char **argv, char **envp, int wait);

extern struct subprocess_info *
call_usermodehelper_setup(char *path, char **argv, char **envp, gfp_t gfp_mask,
     int (*init)(struct subprocess_info *info, struct cred *_new),
     void (*cleanup)(struct subprocess_info *), void *data);

extern int
call_usermodehelper_exec(struct subprocess_info *info, int wait);

extern struct ctl_table usermodehelper_table[];

enum umh_disable_depth {
 UMH_ENABLED = 0,
 UMH_FREEZING,
 UMH_DISABLED,
};

extern void usermodehelper_init(void);

extern int __usermodehelper_disable(enum umh_disable_depth depth);
extern void __usermodehelper_set_disable_depth(enum umh_disable_depth depth);

static inline int usermodehelper_disable(void)
{
 return __usermodehelper_disable(UMH_DISABLED);
}

static inline void usermodehelper_enable(void)
{
 __usermodehelper_set_disable_depth(UMH_ENABLED);
}

extern int usermodehelper_read_trylock(void);
extern long usermodehelper_read_lock_wait(long timeout);
extern void usermodehelper_read_unlock(void);









struct user_i387_struct {
 unsigned short cwd;
 unsigned short swd;
 unsigned short twd;

 unsigned short fop;
 __u64 rip;
 __u64 rdp;
 __u32 mxcsr;
 __u32 mxcsr_mask;
 __u32 st_space[32];
 __u32 xmm_space[64];
 __u32 padding[24];
};




struct user_regs_struct {
 unsigned long r15;
 unsigned long r14;
 unsigned long r13;
 unsigned long r12;
 unsigned long bp;
 unsigned long bx;
 unsigned long r11;
 unsigned long r10;
 unsigned long r9;
 unsigned long r8;
 unsigned long ax;
 unsigned long cx;
 unsigned long dx;
 unsigned long si;
 unsigned long di;
 unsigned long orig_ax;
 unsigned long ip;
 unsigned long cs;
 unsigned long flags;
 unsigned long sp;
 unsigned long ss;
 unsigned long fs_base;
 unsigned long gs_base;
 unsigned long ds;
 unsigned long es;
 unsigned long fs;
 unsigned long gs;
};





struct user {


  struct user_regs_struct regs;

  int u_fpvalid;

  int pad0;
  struct user_i387_struct i387;

  unsigned long int u_tsize;
  unsigned long int u_dsize;
  unsigned long int u_ssize;
  unsigned long start_code;
  unsigned long start_stack;



  long int signal;
  int reserved;
  int pad1;
  unsigned long u_ar0;

  struct user_i387_struct *u_fpstate;
  unsigned long magic;
  char u_comm[32];
  unsigned long u_debugreg[8];
  unsigned long error_code;
  unsigned long fault_address;
};




struct user_ymmh_regs {

 __u32 ymmh_space[64];
};

struct user_xsave_hdr {
 __u64 xstate_bv;
 __u64 reserved1[2];
 __u64 reserved2[5];
};
struct user_xstateregs {
 struct {
  __u64 fpx_space[58];
  __u64 xstate_fx_sw[6];
 } i387;
 struct user_xsave_hdr xsave_hdr;
 struct user_ymmh_regs ymmh;

};

typedef unsigned long elf_greg_t;


typedef elf_greg_t elf_gregset_t[(sizeof(struct user_regs_struct) / sizeof(elf_greg_t))];

typedef struct user_i387_struct elf_fpregset_t;




extern char VDSO32_PRELINK[];
extern void* __kernel_sigreturn;
extern void* __kernel_rt_sigreturn;






extern char vdso32_int80_start, vdso32_int80_end;
extern char vdso32_syscall_start, vdso32_syscall_end;
extern char vdso32_sysenter_start, vdso32_sysenter_end;

extern unsigned int vdso_enabled;
static inline void elf_common_init(struct thread_struct *t,
       struct pt_regs *regs, u16 ds)
{
 regs->ax = regs->bx = regs->cx = regs->dx = 0;
 regs->si = regs->di = regs->bp = 0;
 regs->r8 = regs->r9 = regs->r10 = regs->r11 = 0;
 regs->r12 = regs->r13 = regs->r14 = regs->r15 = 0;
 t->fs = t->gs = 0;
 t->fsindex = t->gsindex = 0;
 t->ds = t->es = ds;
}







void start_thread_ia32(struct pt_regs *regs, u32 new_ip, u32 new_sp);


void set_personality_ia32(bool);
extern void set_personality_64bit(void);
extern unsigned int sysctl_vsyscall32;
extern int force_personality32;
struct task_struct;
struct linux_binprm;


extern int arch_setup_additional_pages(struct linux_binprm *bprm,
           int uses_interp);
extern int x32_setup_additional_pages(struct linux_binprm *bprm,
          int uses_interp);

extern int syscall32_setup_pages(struct linux_binprm *, int exstack);


extern unsigned long arch_randomize_brk(struct mm_struct *mm);





static inline int mmap_is_ia32(void)
{




 if (test_ti_thread_flag(current_thread_info(), 29))
  return 1;

 return 0;
}


enum align_flags {
 ALIGN_VA_32 = (1UL << (0)),
 ALIGN_VA_64 = (1UL << (1)),
};

struct va_alignment {
 int flags;
 unsigned long mask;
} __attribute__((__aligned__((1 << (6)))));

extern struct va_alignment va_align;
extern unsigned long align_vdso_addr(unsigned long);






typedef __u32 Elf32_Addr;
typedef __u16 Elf32_Half;
typedef __u32 Elf32_Off;
typedef __s32 Elf32_Sword;
typedef __u32 Elf32_Word;


typedef __u64 Elf64_Addr;
typedef __u16 Elf64_Half;
typedef __s16 Elf64_SHalf;
typedef __u64 Elf64_Off;
typedef __s32 Elf64_Sword;
typedef __u32 Elf64_Word;
typedef __u64 Elf64_Xword;
typedef __s64 Elf64_Sxword;
typedef struct dynamic{
  Elf32_Sword d_tag;
  union{
    Elf32_Sword d_val;
    Elf32_Addr d_ptr;
  } d_un;
} Elf32_Dyn;

typedef struct {
  Elf64_Sxword d_tag;
  union {
    Elf64_Xword d_val;
    Elf64_Addr d_ptr;
  } d_un;
} Elf64_Dyn;
typedef struct elf32_rel {
  Elf32_Addr r_offset;
  Elf32_Word r_info;
} Elf32_Rel;

typedef struct elf64_rel {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
} Elf64_Rel;

typedef struct elf32_rela{
  Elf32_Addr r_offset;
  Elf32_Word r_info;
  Elf32_Sword r_addend;
} Elf32_Rela;

typedef struct elf64_rela {
  Elf64_Addr r_offset;
  Elf64_Xword r_info;
  Elf64_Sxword r_addend;
} Elf64_Rela;

typedef struct elf32_sym{
  Elf32_Word st_name;
  Elf32_Addr st_value;
  Elf32_Word st_size;
  unsigned char st_info;
  unsigned char st_other;
  Elf32_Half st_shndx;
} Elf32_Sym;

typedef struct elf64_sym {
  Elf64_Word st_name;
  unsigned char st_info;
  unsigned char st_other;
  Elf64_Half st_shndx;
  Elf64_Addr st_value;
  Elf64_Xword st_size;
} Elf64_Sym;




typedef struct elf32_hdr{
  unsigned char e_ident[16];
  Elf32_Half e_type;
  Elf32_Half e_machine;
  Elf32_Word e_version;
  Elf32_Addr e_entry;
  Elf32_Off e_phoff;
  Elf32_Off e_shoff;
  Elf32_Word e_flags;
  Elf32_Half e_ehsize;
  Elf32_Half e_phentsize;
  Elf32_Half e_phnum;
  Elf32_Half e_shentsize;
  Elf32_Half e_shnum;
  Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct elf64_hdr {
  unsigned char e_ident[16];
  Elf64_Half e_type;
  Elf64_Half e_machine;
  Elf64_Word e_version;
  Elf64_Addr e_entry;
  Elf64_Off e_phoff;
  Elf64_Off e_shoff;
  Elf64_Word e_flags;
  Elf64_Half e_ehsize;
  Elf64_Half e_phentsize;
  Elf64_Half e_phnum;
  Elf64_Half e_shentsize;
  Elf64_Half e_shnum;
  Elf64_Half e_shstrndx;
} Elf64_Ehdr;







typedef struct elf32_phdr{
  Elf32_Word p_type;
  Elf32_Off p_offset;
  Elf32_Addr p_vaddr;
  Elf32_Addr p_paddr;
  Elf32_Word p_filesz;
  Elf32_Word p_memsz;
  Elf32_Word p_flags;
  Elf32_Word p_align;
} Elf32_Phdr;

typedef struct elf64_phdr {
  Elf64_Word p_type;
  Elf64_Word p_flags;
  Elf64_Off p_offset;
  Elf64_Addr p_vaddr;
  Elf64_Addr p_paddr;
  Elf64_Xword p_filesz;
  Elf64_Xword p_memsz;
  Elf64_Xword p_align;
} Elf64_Phdr;
typedef struct elf32_shdr {
  Elf32_Word sh_name;
  Elf32_Word sh_type;
  Elf32_Word sh_flags;
  Elf32_Addr sh_addr;
  Elf32_Off sh_offset;
  Elf32_Word sh_size;
  Elf32_Word sh_link;
  Elf32_Word sh_info;
  Elf32_Word sh_addralign;
  Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct elf64_shdr {
  Elf64_Word sh_name;
  Elf64_Word sh_type;
  Elf64_Xword sh_flags;
  Elf64_Addr sh_addr;
  Elf64_Off sh_offset;
  Elf64_Xword sh_size;
  Elf64_Word sh_link;
  Elf64_Word sh_info;
  Elf64_Xword sh_addralign;
  Elf64_Xword sh_entsize;
} Elf64_Shdr;
typedef struct elf32_note {
  Elf32_Word n_namesz;
  Elf32_Word n_descsz;
  Elf32_Word n_type;
} Elf32_Nhdr;


typedef struct elf64_note {
  Elf64_Word n_namesz;
  Elf64_Word n_descsz;
  Elf64_Word n_type;
} Elf64_Nhdr;
extern Elf64_Dyn _DYNAMIC [];
struct file;
struct coredump_params;


static inline int elf_coredump_extra_notes_size(void) { return 0; }
static inline int elf_coredump_extra_notes_write(struct coredump_params *cprm) { return 0; }


struct kernel_param;






enum {
 KERNEL_PARAM_FL_NOARG = (1 << 0)
};

struct kernel_param_ops {

 unsigned int flags;

 int (*set)( char *val, struct kernel_param *kp);

 int (*get)(char *buffer, struct kernel_param *kp);

 void (*free)(void *arg);
};

struct kernel_param {
 char *name;
 struct kernel_param_ops *ops;
 u16 perm;
 s16 level;
 union {
  void *arg;
  struct kparam_string *str;
  struct kparam_array *arr;
 };
};


struct kparam_string {
 unsigned int maxlen;
 char *string;
};


struct kparam_array
{
 unsigned int max;
 unsigned int elemsize;
 unsigned int *num;
 struct kernel_param_ops *ops;
 void *elem;
};
static inline int
__check_old_set_param(int (*oldset)( char *, struct kernel_param *))
{
 return 0;
}
extern void __kernel_param_lock(void);
extern void __kernel_param_unlock(void);
extern bool parameq( char *name1, char *name2);
extern bool parameqn( char *name1, char *name2, size_t n);


extern int parse_args( char *name,
        char *args,
        struct kernel_param *params,
        unsigned num,
        s16 level_min,
        s16 level_max,
        int (*unknown)(char *param, char *val,
         char *doing));



extern void destroy_params( struct kernel_param *params, unsigned num);
extern struct kernel_param_ops param_ops_byte;
extern int param_set_byte( char *val, struct kernel_param *kp);
extern int param_get_byte(char *buffer, struct kernel_param *kp);


extern struct kernel_param_ops param_ops_short;
extern int param_set_short( char *val, struct kernel_param *kp);
extern int param_get_short(char *buffer, struct kernel_param *kp);


extern struct kernel_param_ops param_ops_ushort;
extern int param_set_ushort( char *val, struct kernel_param *kp);
extern int param_get_ushort(char *buffer, struct kernel_param *kp);


extern struct kernel_param_ops param_ops_int;
extern int param_set_int( char *val, struct kernel_param *kp);
extern int param_get_int(char *buffer, struct kernel_param *kp);


extern struct kernel_param_ops param_ops_uint;
extern int param_set_uint( char *val, struct kernel_param *kp);
extern int param_get_uint(char *buffer, struct kernel_param *kp);


extern struct kernel_param_ops param_ops_long;
extern int param_set_long( char *val, struct kernel_param *kp);
extern int param_get_long(char *buffer, struct kernel_param *kp);


extern struct kernel_param_ops param_ops_ulong;
extern int param_set_ulong( char *val, struct kernel_param *kp);
extern int param_get_ulong(char *buffer, struct kernel_param *kp);


extern struct kernel_param_ops param_ops_charp;
extern int param_set_charp( char *val, struct kernel_param *kp);
extern int param_get_charp(char *buffer, struct kernel_param *kp);



extern struct kernel_param_ops param_ops_bool;
extern int param_set_bool( char *val, struct kernel_param *kp);
extern int param_get_bool(char *buffer, struct kernel_param *kp);


extern struct kernel_param_ops param_ops_invbool;
extern int param_set_invbool( char *val, struct kernel_param *kp);
extern int param_get_invbool(char *buffer, struct kernel_param *kp);



extern struct kernel_param_ops param_ops_bint;
extern int param_set_bint( char *val, struct kernel_param *kp);
extern struct kernel_param_ops param_array_ops;

extern struct kernel_param_ops param_ops_string;
extern int param_set_copystring( char *val, struct kernel_param *);
extern int param_get_string(char *buffer, struct kernel_param *kp);



struct module;


extern int module_param_sysfs_setup(struct module *mod,
        struct kernel_param *kparam,
        unsigned int num_params);

extern void module_param_sysfs_remove(struct module *mod);

struct module;
struct tracepoint;

struct tracepoint_func {
 void *func;
 void *data;
};

struct tracepoint {
 char *name;
 struct static_key key;
 void (*regfunc)(void);
 void (*unregfunc)(void);
 struct tracepoint_func *funcs;
};





extern int tracepoint_probe_register( char *name, void *probe, void *data);





extern int
tracepoint_probe_unregister( char *name, void *probe, void *data);

extern int tracepoint_probe_register_noupdate( char *name, void *probe,
           void *data);
extern int tracepoint_probe_unregister_noupdate( char *name, void *probe,
      void *data);
extern void tracepoint_probe_update_all(void);


struct tp_module {
 struct list_head list;
 unsigned int num_tracepoints;
 struct tracepoint * *tracepoints_ptrs;
};
bool trace_module_has_bad_taint(struct module *mod);







struct tracepoint_iter {

 struct tp_module *module;

 struct tracepoint * *tracepoint;
};

extern void tracepoint_iter_start(struct tracepoint_iter *iter);
extern void tracepoint_iter_next(struct tracepoint_iter *iter);
extern void tracepoint_iter_stop(struct tracepoint_iter *iter);
extern void tracepoint_iter_reset(struct tracepoint_iter *iter);






struct mod_arch_specific
{
};
struct modversion_info
{
 unsigned long crc;
 char name[(64 - sizeof(unsigned long))];
};

struct module;

struct module_kobject {
 struct kobject kobj;
 struct module *mod;
 struct kobject *drivers_dir;
 struct module_param_attrs *mp;
 struct completion *kobj_completion;
};

struct module_attribute {
 struct attribute attr;
 ssize_t (*show)(struct module_attribute *, struct module_kobject *,
   char *);
 ssize_t (*store)(struct module_attribute *, struct module_kobject *,
    char *, size_t count);
 void (*setup)(struct module *, char *);
 int (*test)(struct module *);
 void (*free)(struct module *);
};

struct module_version_attribute {
 struct module_attribute mattr;
 char *module_name;
 char *version;
} __attribute__ ((__aligned__(sizeof(void *))));

extern ssize_t __modver_version_show(struct module_attribute *,
         struct module_kobject *, char *);

extern struct module_attribute module_uevent;


extern int init_module(void);
extern void cleanup_module(void);


struct exception_table_entry;

 struct exception_table_entry *
search_extable( struct exception_table_entry *first,
        struct exception_table_entry *last,
        unsigned long value);
void sort_extable(struct exception_table_entry *start,
    struct exception_table_entry *finish);
void sort_main_extable(void);
void trim_init_extable(struct module *m);
 struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;



extern int modules_disabled;

void *__symbol_get( char *symbol);
void *__symbol_get_gpl( char *symbol);



struct module_use {
 struct list_head source_list;
 struct list_head target_list;
 struct module *source, *target;
};

enum module_state {
 MODULE_STATE_LIVE,
 MODULE_STATE_COMING,
 MODULE_STATE_GOING,
 MODULE_STATE_UNFORMED,
};
struct module_ref {
 unsigned long incs;
 unsigned long decs;
} __attribute((aligned(2 * sizeof(unsigned long))));

struct module
{
 enum module_state state;


 struct list_head list;


 char name[(64 - sizeof(unsigned long))];


 struct module_kobject mkobj;
 struct module_attribute *modinfo_attrs;
 char *version;
 char *srcversion;
 struct kobject *holders_dir;


 struct kernel_symbol *syms;
 unsigned long *crcs;
 unsigned int num_syms;


 struct kernel_param *kp;
 unsigned int num_kp;


 unsigned int num_gpl_syms;
 struct kernel_symbol *gpl_syms;
 unsigned long *gpl_crcs;



 struct kernel_symbol *unused_syms;
 unsigned long *unused_crcs;
 unsigned int num_unused_syms;


 unsigned int num_unused_gpl_syms;
 struct kernel_symbol *unused_gpl_syms;
 unsigned long *unused_gpl_crcs;




 bool sig_ok;



 struct kernel_symbol *gpl_future_syms;
 unsigned long *gpl_future_crcs;
 unsigned int num_gpl_future_syms;


 unsigned int num_exentries;
 struct exception_table_entry *extable;


 int (*init)(void);


 void *module_init;


 void *module_core;


 unsigned int init_size, core_size;


 unsigned int init_text_size, core_text_size;


 unsigned int init_ro_size, core_ro_size;


 struct mod_arch_specific arch;

 unsigned int taints;



 unsigned num_bugs;
 struct list_head bug_list;
 struct bug_entry *bug_table;
 Elf64_Sym *symtab, *core_symtab;
 unsigned int num_symtab, core_num_syms;
 char *strtab, *core_strtab;


 struct module_sect_attrs *sect_attrs;


 struct module_notes_attrs *notes_attrs;




 char *args;



 void *percpu;
 unsigned int percpu_size;
 unsigned int num_trace_bprintk_fmt;
 char **trace_bprintk_fmt_start;


 struct ftrace_event_call **trace_events;
 unsigned int num_trace_events;


 unsigned int num_ftrace_callsites;
 unsigned long *ftrace_callsites;




 struct list_head source_list;

 struct list_head target_list;


 void (*exit)(void);

 struct module_ref *refptr;







};




extern struct mutex module_mutex;




static inline int module_is_live(struct module *mod)
{
 return mod->state != MODULE_STATE_GOING;
}

struct module *__module_text_address(unsigned long addr);
struct module *__module_address(unsigned long addr);
bool is_module_address(unsigned long addr);
bool is_module_percpu_address(unsigned long addr);
bool is_module_text_address(unsigned long addr);

static inline int within_module_core(unsigned long addr, struct module *mod)
{
 return (unsigned long)mod->module_core <= addr &&
        addr < (unsigned long)mod->module_core + mod->core_size;
}

static inline int within_module_init(unsigned long addr, struct module *mod)
{
 return (unsigned long)mod->module_init <= addr &&
        addr < (unsigned long)mod->module_init + mod->init_size;
}


struct module *find_module( char *name);

struct symsearch {
 struct kernel_symbol *start, *stop;
 unsigned long *crcs;
 enum {
  NOT_GPL_ONLY,
  GPL_ONLY,
  WILL_BE_GPL_ONLY,
 } licence;
 bool unused;
};


 struct kernel_symbol *find_symbol( char *name,
     struct module **owner,
     unsigned long **crc,
     bool gplok,
     bool warn);


bool each_symbol_section(bool (*fn)( struct symsearch *arr,
        struct module *owner,
        void *data), void *data);



int module_get_kallsym(unsigned int symnum, unsigned long *value, char *type,
   char *name, char *module_name, int *exported);


unsigned long module_kallsyms_lookup_name( char *name);

int module_kallsyms_on_each_symbol(int (*fn)(void *, char *,
          struct module *, unsigned long),
       void *data);

extern void __module_put_and_exit(struct module *mod, long code)
 __attribute__((noreturn));



unsigned long module_refcount(struct module *mod);
void __symbol_put( char *symbol);

void symbol_put_addr(void *addr);



extern void __module_get(struct module *module);



extern bool try_module_get(struct module *module);

extern void module_put(struct module *module);
int ref_module(struct module *a, struct module *b);
 char *module_address_lookup(unsigned long addr,
       unsigned long *symbolsize,
       unsigned long *offset,
       char **modname,
       char *namebuf);
int lookup_module_symbol_name(unsigned long addr, char *symname);
int lookup_module_symbol_attrs(unsigned long addr, unsigned long *size, unsigned long *offset, char *modname, char *name);


 struct exception_table_entry *search_module_extables(unsigned long addr);

int register_module_notifier(struct notifier_block * nb);
int unregister_module_notifier(struct notifier_block * nb);

extern void print_modules(void);
extern struct kset *module_kset;
extern struct kobj_type module_ktype;
extern int module_sysfs_initialized;
extern void set_all_modules_text_rw(void);
extern void set_all_modules_text_ro(void);






void module_bug_finalize( Elf64_Ehdr *, Elf64_Shdr *,
    struct module *);
void module_bug_cleanup(struct module *);



static struct list_head percpu_counters = { &(percpu_counters), &(percpu_counters) };
static spinlock_t percpu_counters_lock = {};
static inline void debug_percpu_counter_activate(struct percpu_counter *fbc)
{ }
static inline void debug_percpu_counter_deactivate(struct percpu_counter *fbc)
{ }


void percpu_counter_set(struct percpu_counter *fbc, s64 amount)
{
 int cpu;
 unsigned long flags;

 ;
 for (((cpu)) = -1; ((cpu)) = cpumask_next(((cpu)), (cpu_possible_mask)), ((cpu)) < nr_cpu_ids;) {
  s32 *pcount = ({ do { void *__vpp_verify = (typeof((((fbc->counters))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*((fbc->counters))) *)((fbc->counters)))); (typeof((typeof(*((fbc->counters))) *)((fbc->counters)))) (__ptr + (((__per_cpu_offset[(cpu)])))); }); });
  *pcount = 0;
 }
 fbc->count = amount;
 ;
}
;

void __percpu_counter_add(struct percpu_counter *fbc, s64 amount, s32 batch)
{
 s64 count;

 __asm__ __volatile__("": : :"memory");
 count = ({ typeof((*fbc->counters)) pscr_ret__; do { void *__vpp_verify = (typeof((&((*fbc->counters))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof((*fbc->counters))) { case 1: pscr_ret__ = ({ typeof(((*fbc->counters))) pfo_ret__; switch (sizeof(((*fbc->counters)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((*fbc->counters))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 2: pscr_ret__ = ({ typeof(((*fbc->counters))) pfo_ret__; switch (sizeof(((*fbc->counters)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((*fbc->counters))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 4: pscr_ret__ = ({ typeof(((*fbc->counters))) pfo_ret__; switch (sizeof(((*fbc->counters)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((*fbc->counters))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 8: pscr_ret__ = ({ typeof(((*fbc->counters))) pfo_ret__; switch (sizeof(((*fbc->counters)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((*fbc->counters))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((*fbc->counters))); break; default: __bad_percpu_size(); } pfo_ret__; });break; default: __bad_size_call_parameter();break; } pscr_ret__; }) + amount;
 if (count >= batch || count <= -batch) {
  unsigned long flags;
  ;
  fbc->count += count;
  do { do { void *__vpp_verify = (typeof((&(((*fbc->counters)))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof(((*fbc->counters)))) { case 1: do { typedef typeof((((*fbc->counters)))) pao_T__; int pao_ID__ = (__builtin_constant_p((-(typeof(*fbc->counters))(count - amount))) && (((-(typeof(*fbc->counters))(count - amount))) == 1 || ((-(typeof(*fbc->counters))(count - amount))) == -1)) ? (int)((-(typeof(*fbc->counters))(count - amount))) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((-(typeof(*fbc->counters))(count - amount))); (void)pao_tmp__; } switch (sizeof((((*fbc->counters))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "qi" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "ri" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "ri" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "re" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof((((*fbc->counters)))) pao_T__; int pao_ID__ = (__builtin_constant_p((-(typeof(*fbc->counters))(count - amount))) && (((-(typeof(*fbc->counters))(count - amount))) == 1 || ((-(typeof(*fbc->counters))(count - amount))) == -1)) ? (int)((-(typeof(*fbc->counters))(count - amount))) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((-(typeof(*fbc->counters))(count - amount))); (void)pao_tmp__; } switch (sizeof((((*fbc->counters))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "qi" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "ri" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "ri" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "re" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof((((*fbc->counters)))) pao_T__; int pao_ID__ = (__builtin_constant_p((-(typeof(*fbc->counters))(count - amount))) && (((-(typeof(*fbc->counters))(count - amount))) == 1 || ((-(typeof(*fbc->counters))(count - amount))) == -1)) ? (int)((-(typeof(*fbc->counters))(count - amount))) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((-(typeof(*fbc->counters))(count - amount))); (void)pao_tmp__; } switch (sizeof((((*fbc->counters))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "qi" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "ri" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "ri" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "re" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof((((*fbc->counters)))) pao_T__; int pao_ID__ = (__builtin_constant_p((-(typeof(*fbc->counters))(count - amount))) && (((-(typeof(*fbc->counters))(count - amount))) == 1 || ((-(typeof(*fbc->counters))(count - amount))) == -1)) ? (int)((-(typeof(*fbc->counters))(count - amount))) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((-(typeof(*fbc->counters))(count - amount))); (void)pao_tmp__; } switch (sizeof((((*fbc->counters))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "qi" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "ri" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "ri" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((*fbc->counters)))) : "re" ((pao_T__)((-(typeof(*fbc->counters))(count - amount))))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
  ;
 } else {
  do { do { void *__vpp_verify = (typeof((&((*fbc->counters))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof((*fbc->counters))) { case 1: do { typedef typeof(((*fbc->counters))) pao_T__; int pao_ID__ = (__builtin_constant_p((amount)) && (((amount)) == 1 || ((amount)) == -1)) ? (int)((amount)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((amount)); (void)pao_tmp__; } switch (sizeof(((*fbc->counters)))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "qi" ((pao_T__)((amount)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "ri" ((pao_T__)((amount)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "ri" ((pao_T__)((amount)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "re" ((pao_T__)((amount)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof(((*fbc->counters))) pao_T__; int pao_ID__ = (__builtin_constant_p((amount)) && (((amount)) == 1 || ((amount)) == -1)) ? (int)((amount)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((amount)); (void)pao_tmp__; } switch (sizeof(((*fbc->counters)))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "qi" ((pao_T__)((amount)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "ri" ((pao_T__)((amount)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "ri" ((pao_T__)((amount)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "re" ((pao_T__)((amount)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof(((*fbc->counters))) pao_T__; int pao_ID__ = (__builtin_constant_p((amount)) && (((amount)) == 1 || ((amount)) == -1)) ? (int)((amount)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((amount)); (void)pao_tmp__; } switch (sizeof(((*fbc->counters)))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "qi" ((pao_T__)((amount)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "ri" ((pao_T__)((amount)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "ri" ((pao_T__)((amount)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "re" ((pao_T__)((amount)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof(((*fbc->counters))) pao_T__; int pao_ID__ = (__builtin_constant_p((amount)) && (((amount)) == 1 || ((amount)) == -1)) ? (int)((amount)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((amount)); (void)pao_tmp__; } switch (sizeof(((*fbc->counters)))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "qi" ((pao_T__)((amount)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "ri" ((pao_T__)((amount)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "ri" ((pao_T__)((amount)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters)))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((*fbc->counters))) : "re" ((pao_T__)((amount)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
 }
 __asm__ __volatile__("": : :"memory");
}
;





s64 __percpu_counter_sum(struct percpu_counter *fbc)
{
 s64 ret;
 int cpu;
 unsigned long flags;

 ;
 ret = fbc->count;
 for (((cpu)) = -1; ((cpu)) = cpumask_next(((cpu)), (cpu_online_mask)), ((cpu)) < nr_cpu_ids;) {
  s32 *pcount = ({ do { void *__vpp_verify = (typeof((((fbc->counters))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*((fbc->counters))) *)((fbc->counters)))); (typeof((typeof(*((fbc->counters))) *)((fbc->counters)))) (__ptr + (((__per_cpu_offset[(cpu)])))); }); });



  ret += *(typeof(pcount))g_map(pcount, sizeof(*(pcount)));

 }
 ;
 return ret;
}
;
int percpu_counter_batch __attribute__((__section__(".data..read_mostly"))) = 32;
;

static void compute_batch_value(void)
{
 int nr = cpumask_weight(cpu_online_mask);

 percpu_counter_batch = ({ typeof(32) _max1 = (32); typeof(nr*2) _max2 = (nr*2); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; });
}

static int percpu_counter_hotcpu_callback(struct notifier_block *nb,
     unsigned long action, void *hcpu)
{

 unsigned int cpu;
 struct percpu_counter *fbc;

 compute_batch_value();
 if (action != 0x0007)
  return 0x0001;

 cpu = (unsigned long)hcpu;
 ;
 for (fbc = ({ typeof( ((typeof(*fbc) *)0)->list ) *__mptr = ((&percpu_counters)->next); (typeof(*fbc) *)( (char *)__mptr - ((size_t) &((typeof(*fbc) *)0)->list) );}); &fbc->list != (&percpu_counters); fbc = ({ typeof( ((typeof(*(fbc)) *)0)->list ) *__mptr = ((fbc)->list.next); (typeof(*(fbc)) *)( (char *)__mptr - ((size_t) &((typeof(*(fbc)) *)0)->list) );})) {
  s32 *pcount;
  unsigned long flags;

  ;
  pcount = ({ do { void *__vpp_verify = (typeof((((fbc->counters))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*((fbc->counters))) *)((fbc->counters)))); (typeof((typeof(*((fbc->counters))) *)((fbc->counters)))) (__ptr + (((__per_cpu_offset[(cpu)])))); }); });
  fbc->count += *pcount;
  *pcount = 0;
  ;
 }
 ;

 return 0x0001;
}





int percpu_counter_compare(struct percpu_counter *fbc, s64 rhs)
{
 s64 count;

 count = percpu_counter_read(fbc);

 if (({ long ret; if (sizeof(count - rhs) == sizeof(long)) { long __x = (count - rhs); ret = (__x < 0) ? -__x : __x; } else { int __x = (count - rhs); ret = (__x < 0) ? -__x : __x; } ret; }) > (percpu_counter_batch*cpumask_weight(cpu_online_mask))) {
  if (count > rhs)
   return 1;
  else
   return -1;
 }

 count = percpu_counter_sum(fbc);
 if (count > rhs)
  return 1;
 else if (count < rhs)
  return -1;
 else
  return 0;
}
;
