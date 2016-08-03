






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





struct sched_param {
 int sched_priority;
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

struct task_struct;
typedef struct __user_cap_header_struct {
 __u32 version;
 int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct {
        __u32 effective;
        __u32 permitted;
        __u32 inheritable;
} *cap_user_data_t;
struct vfs_cap_data {
 __le32 magic_etc;
 struct {
  __le32 permitted;
  __le32 inheritable;
 } data[2];
};





extern int file_caps_enabled;

typedef struct kernel_cap_struct {
 __u32 cap[2];
} kernel_cap_t;


struct cpu_vfs_cap_data {
 __u32 magic_etc;
 kernel_cap_t permitted;
 kernel_cap_t inheritable;
};





struct file;
struct inode;
struct dentry;
struct user_namespace;

struct user_namespace *current_user_ns(void);

extern kernel_cap_t __cap_empty_set;
extern kernel_cap_t __cap_init_eff_set;
static inline kernel_cap_t cap_combine( kernel_cap_t a,
           kernel_cap_t b)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] | b.cap[__capi]; } } while (0);
 return dest;
}

static inline kernel_cap_t cap_intersect( kernel_cap_t a,
      kernel_cap_t b)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] & b.cap[__capi]; } } while (0);
 return dest;
}

static inline kernel_cap_t cap_drop( kernel_cap_t a,
        kernel_cap_t drop)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = a.cap[__capi] &~ drop.cap[__capi]; } } while (0);
 return dest;
}

static inline kernel_cap_t cap_invert( kernel_cap_t c)
{
 kernel_cap_t dest;
 do { unsigned __capi; for (__capi = 0; __capi < 2; ++__capi) { dest.cap[__capi] = ~ c.cap[__capi]; } } while (0);
 return dest;
}

static inline int cap_isclear( kernel_cap_t a)
{
 unsigned __capi;
 for (__capi = 0; __capi < 2; ++__capi) {
  if (a.cap[__capi] != 0)
   return 0;
 }
 return 1;
}
static inline int cap_issubset( kernel_cap_t a, kernel_cap_t set)
{
 kernel_cap_t dest;
 dest = cap_drop(a, set);
 return cap_isclear(dest);
}



static inline int cap_is_fs_cap(int cap)
{
 kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((27) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((9) & 31)), ((1 << ((32) & 31))) } });
 return !!((1 << ((cap) & 31)) & __cap_fs_set.cap[((cap) >> 5)]);
}

static inline kernel_cap_t cap_drop_fs_set( kernel_cap_t a)
{
 kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((27) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((9) & 31)), ((1 << ((32) & 31))) } });
 return cap_drop(a, __cap_fs_set);
}

static inline kernel_cap_t cap_raise_fs_set( kernel_cap_t a,
         kernel_cap_t permitted)
{
 kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((27) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((9) & 31)), ((1 << ((32) & 31))) } });
 return cap_combine(a,
      cap_intersect(permitted, __cap_fs_set));
}

static inline kernel_cap_t cap_drop_nfsd_set( kernel_cap_t a)
{
 kernel_cap_t __cap_fs_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((27) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((24) & 31)), ((1 << ((32) & 31))) } });
 return cap_drop(a, __cap_fs_set);
}

static inline kernel_cap_t cap_raise_nfsd_set( kernel_cap_t a,
           kernel_cap_t permitted)
{
 kernel_cap_t __cap_nfsd_set = ((kernel_cap_t){{ ((1 << ((0) & 31)) | (1 << ((27) & 31)) | (1 << ((1) & 31)) | (1 << ((2) & 31)) | (1 << ((3) & 31)) | (1 << ((4) & 31))) | (1 << ((24) & 31)), ((1 << ((32) & 31))) } });
 return cap_combine(a,
      cap_intersect(permitted, __cap_nfsd_set));
}

extern bool has_capability(struct task_struct *t, int cap);
extern bool has_ns_capability(struct task_struct *t,
         struct user_namespace *ns, int cap);
extern bool has_capability_noaudit(struct task_struct *t, int cap);
extern bool has_ns_capability_noaudit(struct task_struct *t,
          struct user_namespace *ns, int cap);
extern bool capable(int cap);
extern bool ns_capable(struct user_namespace *ns, int cap);
extern bool inode_capable( struct inode *inode, int cap);
extern bool file_ns_capable( struct file *file, struct user_namespace *ns, int cap);


extern int get_vfs_caps_from_disk( struct dentry *dentry, struct cpu_vfs_cap_data *cpu_caps);




typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;




struct kernel_symbol
{
 unsigned long value;
 char *name;
};



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

enum page_debug_flags {
 PAGE_DEBUG_FLAG_POISON,
 PAGE_DEBUG_FLAG_GUARD,
};
struct vm_area_struct;
struct mm_struct;
struct inode;
struct notifier_block;


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

typedef u8 uprobe_opcode_t;







struct arch_uprobe {
 u16 fixups;
 union {
  u8 insn[16];
  u8 ixol[16];
 };

 unsigned long rip_rela_target_address;

};

struct arch_uprobe_task {

 unsigned long saved_scratch_register;

 unsigned int saved_trap_nr;
 unsigned int saved_tf;
};







enum uprobe_filter_ctx {
 UPROBE_FILTER_REGISTER,
 UPROBE_FILTER_UNREGISTER,
 UPROBE_FILTER_MMAP,
};

struct uprobe_consumer {
 int (*handler)(struct uprobe_consumer *self, struct pt_regs *regs);
 int (*ret_handler)(struct uprobe_consumer *self,
    unsigned long func,
    struct pt_regs *regs);
 bool (*filter)(struct uprobe_consumer *self,
    enum uprobe_filter_ctx ctx,
    struct mm_struct *mm);

 struct uprobe_consumer *next;
};


enum uprobe_task_state {
 UTASK_RUNNING,
 UTASK_SSTEP,
 UTASK_SSTEP_ACK,
 UTASK_SSTEP_TRAPPED,
};




struct uprobe_task {
 enum uprobe_task_state state;
 struct arch_uprobe_task autask;

 struct return_instance *return_instances;
 unsigned int depth;
 struct uprobe *active_uprobe;

 unsigned long xol_vaddr;
 unsigned long vaddr;
};






struct xol_area {
 wait_queue_head_t wq;
 atomic_t slot_count;
 unsigned long *bitmap;
 struct page *page;






 unsigned long vaddr;
};

struct uprobes_state {
 struct xol_area *xol_area;
};

extern int __attribute__((weak)) set_swbp(struct arch_uprobe *aup, struct mm_struct *mm, unsigned long vaddr);
extern int __attribute__((weak)) set_orig_insn(struct arch_uprobe *aup, struct mm_struct *mm, unsigned long vaddr);
extern bool __attribute__((weak)) is_swbp_insn(uprobe_opcode_t *insn);
extern bool __attribute__((weak)) is_trap_insn(uprobe_opcode_t *insn);
extern int uprobe_write_opcode(struct mm_struct *mm, unsigned long vaddr, uprobe_opcode_t);
extern int uprobe_register(struct inode *inode, loff_t offset, struct uprobe_consumer *uc);
extern int uprobe_apply(struct inode *inode, loff_t offset, struct uprobe_consumer *uc, bool);
extern void uprobe_unregister(struct inode *inode, loff_t offset, struct uprobe_consumer *uc);
extern int uprobe_mmap(struct vm_area_struct *vma);
extern void uprobe_munmap(struct vm_area_struct *vma, unsigned long start, unsigned long end);
extern void uprobe_start_dup_mmap(void);
extern void uprobe_end_dup_mmap(void);
extern void uprobe_dup_mmap(struct mm_struct *oldmm, struct mm_struct *newmm);
extern void uprobe_free_utask(struct task_struct *t);
extern void uprobe_copy_process(struct task_struct *t, unsigned long flags);
extern unsigned long __attribute__((weak)) uprobe_get_swbp_addr(struct pt_regs *regs);
extern int uprobe_post_sstep_notifier(struct pt_regs *regs);
extern int uprobe_pre_sstep_notifier(struct pt_regs *regs);
extern void uprobe_notify_resume(struct pt_regs *regs);
extern bool uprobe_deny_signal(void);
extern bool arch_uprobe_skip_sstep(struct arch_uprobe *aup, struct pt_regs *regs);
extern void uprobe_clear_state(struct mm_struct *mm);
extern int arch_uprobe_analyze_insn(struct arch_uprobe *aup, struct mm_struct *mm, unsigned long addr);
extern int arch_uprobe_pre_xol(struct arch_uprobe *aup, struct pt_regs *regs);
extern int arch_uprobe_post_xol(struct arch_uprobe *aup, struct pt_regs *regs);
extern bool arch_uprobe_xol_was_trapped(struct task_struct *tsk);
extern int arch_uprobe_exception_notify(struct notifier_block *self, unsigned long val, void *data);
extern void arch_uprobe_abort_xol(struct arch_uprobe *aup, struct pt_regs *regs);
extern unsigned long arch_uretprobe_hijack_return_addr(unsigned long trampoline_vaddr, struct pt_regs *regs);





typedef struct {
 void *ldt;
 int size;



 unsigned short ia32_compat;


 struct mutex lock;
 void *vdso;
} mm_context_t;


void leave_mm(int cpu);






struct address_space;
struct page {

 unsigned long flags;

 union {
  struct address_space *mapping;






  void *s_mem;
 };


 struct {
  union {
   unsigned long index;
   void *freelist;
   bool pfmemalloc;
  };

  union {



   unsigned long counters;
   struct {

    union {
     atomic_t _mapcount;

     struct {
      unsigned inuse:16;
      unsigned objects:15;
      unsigned frozen:1;
     };
     int units;
    };
    atomic_t _count;
   };
   unsigned int active;
  };
 };


 union {
  struct list_head lru;


  struct {
   struct page *next;

   int pages;
   int pobjects;




  };

  struct list_head list;
  struct slab *slab_page;
  struct callback_head callback_head;



  pgtable_t pmd_huge_pte;

 };


 union {
  unsigned long _private;
  spinlock_t ptl;


  struct kmem_cache *slab_cache;
  struct page *first_page;
 };
}





 __attribute__((aligned(2 * sizeof(unsigned long))))

;

struct page_frag {
 struct page *page;

 __u32 offset;
 __u32 size;




};

typedef unsigned long vm_flags_t;






struct vm_region {
 struct rb_node vm_rb;
 vm_flags_t vm_flags;
 unsigned long vm_start;
 unsigned long vm_end;
 unsigned long vm_top;
 unsigned long vm_pgoff;
 struct file *vm_file;
 struct file *vm_prfile;

 int vm_usage;
 bool vm_icache_flushed : 1;

};







struct vm_area_struct {


 unsigned long vm_start;
 unsigned long vm_end;



 struct vm_area_struct *vm_next, *vm_prev;

 struct rb_node vm_rb;







 unsigned long rb_subtree_gap;



 struct mm_struct *vm_mm;
 pgprot_t vm_page_prot;
 unsigned long vm_flags;






 union {
  struct {
   struct rb_node rb;
   unsigned long rb_subtree_last;
  } linear;
  struct list_head nonlinear;
 } shared;







 struct list_head anon_vma_chain;

 struct anon_vma *anon_vma;


 struct vm_operations_struct *vm_ops;


 unsigned long vm_pgoff;

 struct file * vm_file;
 struct file *vm_prfile;
 void * vm_private_data;





 struct mempolicy *vm_policy;

};

struct core_thread {
 struct task_struct *task;
 struct core_thread *next;
};

struct core_state {
 atomic_t nr_threads;
 struct core_thread dumper;
 struct completion startup;
};

enum {
 MM_FILEPAGES,
 MM_ANONPAGES,
 MM_SWAPENTS,
 NR_MM_COUNTERS
};




struct task_rss_stat {
 int events;
 int count[NR_MM_COUNTERS];
};


struct mm_rss_stat {
 atomic_long_t count[NR_MM_COUNTERS];
};

struct kioctx_table;
struct mm_struct {
 struct vm_area_struct * mmap;
 struct rb_root mm_rb;
 struct vm_area_struct * mmap_cache;

 unsigned long (*get_unmapped_area) (struct file *filp,
    unsigned long addr, unsigned long len,
    unsigned long pgoff, unsigned long flags);

 unsigned long mmap_base;
 unsigned long mmap_legacy_base;
 unsigned long task_size;
 unsigned long highest_vm_end;
 pgd_t * pgd;
 atomic_t mm_users;
 atomic_t mm_count;
 atomic_long_t nr_ptes;
 int map_count;

 spinlock_t page_table_lock;
 struct rw_semaphore mmap_sem;

 struct list_head mmlist;





 unsigned long hiwater_rss;
 unsigned long hiwater_vm;

 unsigned long total_vm;
 unsigned long locked_vm;
 unsigned long pinned_vm;
 unsigned long shared_vm;
 unsigned long exec_vm;
 unsigned long stack_vm;
 unsigned long def_flags;
 unsigned long start_code, end_code, start_data, end_data;
 unsigned long start_brk, brk, start_stack;
 unsigned long arg_start, arg_end, env_start, env_end;

 unsigned long saved_auxv[(2*(2 + 20 + 1))];





 struct mm_rss_stat rss_stat;

 struct linux_binfmt *binfmt;

 cpumask_var_t cpu_vm_mask_var;


 mm_context_t context;

 unsigned long flags;

 struct core_state *core_state;

 spinlock_t ioctx_lock;
 struct kioctx_table *ioctx_table;
 struct task_struct *owner;



 struct file *exe_file;

 struct mmu_notifier_mm *mmu_notifier_mm;
 unsigned long numa_next_scan;


 unsigned long numa_scan_offset;


 int numa_scan_seq;







 bool tlb_flush_pending;

 struct uprobes_state uprobes_state;
};

static inline void mm_init_cpumask(struct mm_struct *mm)
{



}


static inline cpumask_t *mm_cpumask(struct mm_struct *mm)
{
 return mm->cpu_vm_mask_var;
}
static inline bool mm_tlb_flush_pending(struct mm_struct *mm)
{
 __asm__ __volatile__("": : :"memory");
 return mm->tlb_flush_pending;
}
static inline void set_tlb_flush_pending(struct mm_struct *mm)
{
 mm->tlb_flush_pending = _true;





 ;
}

static inline void clear_tlb_flush_pending(struct mm_struct *mm)
{
 __asm__ __volatile__("": : :"memory");
 mm->tlb_flush_pending = _false;
}








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
enum irqreturn {
 IRQ_NONE = (0 << 0),
 IRQ_HANDLED = (1 << 0),
 IRQ_WAKE_THREAD = (1 << 1),
};

typedef enum irqreturn irqreturn_t;





extern int nr_irqs;
extern struct irq_desc *irq_to_desc(unsigned int irq);
unsigned int irq_get_next_irq(unsigned int offset);




static inline int irq_canonicalize(int irq)
{
 return ((irq == 2) ? 9 : irq);
}
extern void fixup_irqs(void);
extern void irq_force_complete_move(int);


extern void (*x86_platform_ipi_callback)(void);
extern void native_init_IRQ(void);
extern bool handle_irq(unsigned irq, struct pt_regs *regs);

extern __attribute__((externally_visible)) unsigned int do_IRQ(struct pt_regs *regs);


extern unsigned long used_vectors[(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
extern int vector_used_by_percpu_irq(unsigned int vector);

extern void init_ISA_irqs(void);


void arch_trigger_all_cpu_backtrace(void);

extern __attribute__((section(".data..percpu" ""))) __typeof__(struct pt_regs *) irq_regs;

static inline struct pt_regs *get_irq_regs(void)
{
 return ({ typeof((irq_regs)) pscr_ret__; do { void *__vpp_verify = (typeof((&((irq_regs))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof((irq_regs))) { case 1: pscr_ret__ = ({ typeof(((irq_regs))) pfo_ret__; switch (sizeof(((irq_regs)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((irq_regs))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 2: pscr_ret__ = ({ typeof(((irq_regs))) pfo_ret__; switch (sizeof(((irq_regs)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((irq_regs))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 4: pscr_ret__ = ({ typeof(((irq_regs))) pfo_ret__; switch (sizeof(((irq_regs)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((irq_regs))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 8: pscr_ret__ = ({ typeof(((irq_regs))) pfo_ret__; switch (sizeof(((irq_regs)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((irq_regs))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((irq_regs))); break; default: __bad_percpu_size(); } pfo_ret__; });break; default: __bad_size_call_parameter();break; } pscr_ret__; });
}

static inline struct pt_regs *set_irq_regs(struct pt_regs *new_regs)
{
 struct pt_regs *old_regs;

 old_regs = get_irq_regs();
 do { do { void *__vpp_verify = (typeof((&((irq_regs))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof((irq_regs))) { case 1: do { typedef typeof(((irq_regs))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((new_regs)); (void)pto_tmp__; } switch (sizeof(((irq_regs)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "qi" ((pto_T__)((new_regs)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "ri" ((pto_T__)((new_regs)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "ri" ((pto_T__)((new_regs)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "re" ((pto_T__)((new_regs)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof(((irq_regs))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((new_regs)); (void)pto_tmp__; } switch (sizeof(((irq_regs)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "qi" ((pto_T__)((new_regs)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "ri" ((pto_T__)((new_regs)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "ri" ((pto_T__)((new_regs)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "re" ((pto_T__)((new_regs)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof(((irq_regs))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((new_regs)); (void)pto_tmp__; } switch (sizeof(((irq_regs)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "qi" ((pto_T__)((new_regs)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "ri" ((pto_T__)((new_regs)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "ri" ((pto_T__)((new_regs)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "re" ((pto_T__)((new_regs)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof(((irq_regs))) pto_T__; if (0) { pto_T__ pto_tmp__; pto_tmp__ = ((new_regs)); (void)pto_tmp__; } switch (sizeof(((irq_regs)))) { case 1: asm("mov" "b %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "qi" ((pto_T__)((new_regs)))); break; case 2: asm("mov" "w %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "ri" ((pto_T__)((new_regs)))); break; case 4: asm("mov" "l %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "ri" ((pto_T__)((new_regs)))); break; case 8: asm("mov" "q %1,""%%""gs"":" "%P" "0" : "+m" (((irq_regs))) : "re" ((pto_T__)((new_regs)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);

 return old_regs;
}

struct seq_file;
struct module;
struct irq_desc;
struct irq_data;
typedef void (*irq_flow_handler_t)(unsigned int irq,
         struct irq_desc *desc);
typedef void (*irq_preflow_handler_t)(struct irq_data *data);
enum {
 IRQ_TYPE_NONE = 0x00000000,
 IRQ_TYPE_EDGE_RISING = 0x00000001,
 IRQ_TYPE_EDGE_FALLING = 0x00000002,
 IRQ_TYPE_EDGE_BOTH = (IRQ_TYPE_EDGE_FALLING | IRQ_TYPE_EDGE_RISING),
 IRQ_TYPE_LEVEL_HIGH = 0x00000004,
 IRQ_TYPE_LEVEL_LOW = 0x00000008,
 IRQ_TYPE_LEVEL_MASK = (IRQ_TYPE_LEVEL_LOW | IRQ_TYPE_LEVEL_HIGH),
 IRQ_TYPE_SENSE_MASK = 0x0000000f,
 IRQ_TYPE_DEFAULT = IRQ_TYPE_SENSE_MASK,

 IRQ_TYPE_PROBE = 0x00000010,

 IRQ_LEVEL = (1 << 8),
 IRQ_PER_CPU = (1 << 9),
 IRQ_NOPROBE = (1 << 10),
 IRQ_NOREQUEST = (1 << 11),
 IRQ_NOAUTOEN = (1 << 12),
 IRQ_NO_BALANCING = (1 << 13),
 IRQ_MOVE_PCNTXT = (1 << 14),
 IRQ_NESTED_THREAD = (1 << 15),
 IRQ_NOTHREAD = (1 << 16),
 IRQ_PER_CPU_DEVID = (1 << 17),
 IRQ_IS_POLLED = (1 << 18),
};
enum {
 IRQ_SET_MASK_OK = 0,
 IRQ_SET_MASK_OK_NOCOPY,
};

struct msi_desc;
struct irq_domain;
struct irq_data {
 u32 mask;
 unsigned int irq;
 unsigned long hwirq;
 unsigned int node;
 unsigned int state_use_accessors;
 struct irq_chip *chip;
 struct irq_domain *domain;
 void *handler_data;
 void *chip_data;
 struct msi_desc *msi_desc;
 cpumask_var_t affinity;
};
enum {
 IRQD_TRIGGER_MASK = 0xf,
 IRQD_SETAFFINITY_PENDING = (1 << 8),
 IRQD_NO_BALANCING = (1 << 10),
 IRQD_PER_CPU = (1 << 11),
 IRQD_AFFINITY_SET = (1 << 12),
 IRQD_LEVEL = (1 << 13),
 IRQD_WAKEUP_STATE = (1 << 14),
 IRQD_MOVE_PCNTXT = (1 << 15),
 IRQD_IRQ_DISABLED = (1 << 16),
 IRQD_IRQ_MASKED = (1 << 17),
 IRQD_IRQ_INPROGRESS = (1 << 18),
};

static inline bool irqd_is_setaffinity_pending(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_SETAFFINITY_PENDING;
}

static inline bool irqd_is_per_cpu(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_PER_CPU;
}

static inline bool irqd_can_balance(struct irq_data *d)
{
 return !(d->state_use_accessors & (IRQD_PER_CPU | IRQD_NO_BALANCING));
}

static inline bool irqd_affinity_was_set(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_AFFINITY_SET;
}

static inline void irqd_mark_affinity_was_set(struct irq_data *d)
{
 d->state_use_accessors |= IRQD_AFFINITY_SET;
}

static inline u32 irqd_get_trigger_type(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_TRIGGER_MASK;
}




static inline void irqd_set_trigger_type(struct irq_data *d, u32 type)
{
 d->state_use_accessors &= ~IRQD_TRIGGER_MASK;
 d->state_use_accessors |= type & IRQD_TRIGGER_MASK;
}

static inline bool irqd_is_level_type(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_LEVEL;
}

static inline bool irqd_is_wakeup_set(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_WAKEUP_STATE;
}

static inline bool irqd_can_move_in_process_context(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_MOVE_PCNTXT;
}

static inline bool irqd_irq_disabled(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_IRQ_DISABLED;
}

static inline bool irqd_irq_masked(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_IRQ_MASKED;
}

static inline bool irqd_irq_inprogress(struct irq_data *d)
{
 return d->state_use_accessors & IRQD_IRQ_INPROGRESS;
}






static inline void irqd_set_chained_irq_inprogress(struct irq_data *d)
{
 d->state_use_accessors |= IRQD_IRQ_INPROGRESS;
}

static inline void irqd_clr_chained_irq_inprogress(struct irq_data *d)
{
 d->state_use_accessors &= ~IRQD_IRQ_INPROGRESS;
}

static inline irq_hw_number_t irqd_to_hwirq(struct irq_data *d)
{
 return d->hwirq;
}
struct irq_chip {
 char *name;
 unsigned int (*irq_startup)(struct irq_data *data);
 void (*irq_shutdown)(struct irq_data *data);
 void (*irq_enable)(struct irq_data *data);
 void (*irq_disable)(struct irq_data *data);

 void (*irq_ack)(struct irq_data *data);
 void (*irq_mask)(struct irq_data *data);
 void (*irq_mask_ack)(struct irq_data *data);
 void (*irq_unmask)(struct irq_data *data);
 void (*irq_eoi)(struct irq_data *data);

 int (*irq_set_affinity)(struct irq_data *data, struct cpumask *dest, bool force);
 int (*irq_retrigger)(struct irq_data *data);
 int (*irq_set_type)(struct irq_data *data, unsigned int flow_type);
 int (*irq_set_wake)(struct irq_data *data, unsigned int on);

 void (*irq_bus_lock)(struct irq_data *data);
 void (*irq_bus_sync_unlock)(struct irq_data *data);

 void (*irq_cpu_online)(struct irq_data *data);
 void (*irq_cpu_offline)(struct irq_data *data);

 void (*irq_suspend)(struct irq_data *data);
 void (*irq_resume)(struct irq_data *data);
 void (*irq_pm_shutdown)(struct irq_data *data);

 void (*irq_calc_mask)(struct irq_data *data);

 void (*irq_print_chip)(struct irq_data *data, struct seq_file *p);

 unsigned long flags;
};
enum {
 IRQCHIP_SET_TYPE_MASKED = (1 << 0),
 IRQCHIP_EOI_IF_HANDLED = (1 << 1),
 IRQCHIP_MASK_ON_SUSPEND = (1 << 2),
 IRQCHIP_ONOFFLINE_ENABLED = (1 << 3),
 IRQCHIP_SKIP_SET_WAKE = (1 << 4),
 IRQCHIP_ONESHOT_SAFE = (1 << 5),
};


struct irq_affinity_notify;
struct proc_dir_entry;
struct module;
struct irq_desc;
struct irq_desc {
 struct irq_data irq_data;
 unsigned int *kstat_irqs;
 irq_flow_handler_t handle_irq;



 struct irqaction *action;
 unsigned int status_use_accessors;
 unsigned int core_internal_state__do_not_mess_with_it;
 unsigned int depth;
 unsigned int wake_depth;
 unsigned int irq_count;
 unsigned long last_unhandled;
 unsigned int irqs_unhandled;
 raw_spinlock_t lock;
 struct cpumask *percpu_enabled;

 struct cpumask *affinity_hint;
 struct irq_affinity_notify *affinity_notify;

 cpumask_var_t pending_mask;


 unsigned long threads_oneshot;
 atomic_t threads_active;
 wait_queue_head_t wait_for_threads;

 struct proc_dir_entry *dir;

 int parent_irq;
 struct module *owner;
 char *name;
} __attribute__((__aligned__(1 << (6))));





static inline struct irq_data *irq_desc_get_irq_data(struct irq_desc *desc)
{
 return &desc->irq_data;
}

static inline struct irq_chip *irq_desc_get_chip(struct irq_desc *desc)
{
 return desc->irq_data.chip;
}

static inline void *irq_desc_get_chip_data(struct irq_desc *desc)
{
 return desc->irq_data.chip_data;
}

static inline void *irq_desc_get_handler_data(struct irq_desc *desc)
{
 return desc->irq_data.handler_data;
}

static inline struct msi_desc *irq_desc_get_msi_desc(struct irq_desc *desc)
{
 return desc->irq_data.msi_desc;
}







static inline void generic_handle_irq_desc(unsigned int irq, struct irq_desc *desc)
{
 desc->handle_irq(irq, desc);
}

int generic_handle_irq(unsigned int irq);


static inline int irq_has_action(unsigned int irq)
{
 struct irq_desc *desc = irq_to_desc(irq);
 return desc->action != 0;
}


static inline void __irq_set_handler_locked(unsigned int irq,
         irq_flow_handler_t handler)
{
 struct irq_desc *desc;

 desc = irq_to_desc(irq);
 desc->handle_irq = handler;
}


static inline void
__irq_set_chip_handler_name_locked(unsigned int irq, struct irq_chip *chip,
       irq_flow_handler_t handler, char *name)
{
 struct irq_desc *desc;

 desc = irq_to_desc(irq);
 irq_desc_get_irq_data(desc)->chip = chip;
 desc->handle_irq = handler;
 desc->name = name;
}

static inline int irq_balancing_disabled(unsigned int irq)
{
 struct irq_desc *desc;

 desc = irq_to_desc(irq);
 return desc->status_use_accessors & (IRQ_PER_CPU | IRQ_NO_BALANCING);
}

static inline void
irq_set_lockdep_class(unsigned int irq, struct lock_class_key *_class)
{
 struct irq_desc *desc = irq_to_desc(irq);

 if (desc)
  do { (void)(_class); } while (0);
}










struct proc_dir_entry;
struct pt_regs;
struct notifier_block;


void create_prof_cpu_mask(void);
int create_proc_profile(void);
enum profile_type {
 PROFILE_TASK_EXIT,
 PROFILE_MUNMAP
};



extern int prof_on __attribute__((__section__(".data..read_mostly")));


int profile_init(void);
int profile_setup(char *str);
void profile_tick(int type);




void profile_hits(int type, void *ip, unsigned int nr_hits);




static inline void profile_hit(int type, void *ip)
{



 if (__builtin_expect(!!(prof_on == type), 0))
  profile_hits(type, ip, 1);
}

struct task_struct;
struct mm_struct;


void profile_task_exit(struct task_struct * task);




int profile_handoff_task(struct task_struct * task);


void profile_munmap(unsigned long addr);

int task_handoff_register(struct notifier_block * n);
int task_handoff_unregister(struct notifier_block * n);

int profile_event_register(enum profile_type, struct notifier_block * n);
int profile_event_unregister(enum profile_type, struct notifier_block * n);

struct pt_regs;







extern char _text[], _stext[], _etext[];
extern char _data[], _sdata[], _edata[];
extern char __bss_start[], __bss_stop[];
extern char __init_begin[], __init_end[];
extern char _sinittext[], _einittext[];
extern char _end[];
extern char __per_cpu_load[], __per_cpu_start[], __per_cpu_end[];
extern char __kprobes_text_start[], __kprobes_text_end[];
extern char __entry_text_start[], __entry_text_end[];
extern char __start_rodata[], __end_rodata[];


extern char __ctors_start[], __ctors_end[];
static inline int arch_is_kernel_text(unsigned long addr)
{
 return 0;
}



static inline int arch_is_kernel_data(unsigned long addr)
{
 return 0;
}
static inline __attribute__((always_inline)) void clac(void)
{

 asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" : : : "memory");
}

static inline __attribute__((always_inline)) void stac(void)
{

 asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" : : : "memory");
}
struct exception_table_entry {
 int insn, fixup;
};




extern int fixup_exception(struct pt_regs *regs);
extern int early_fixup_exception(unsigned long *ip);
extern int __get_user_1(void);
extern int __get_user_2(void);
extern int __get_user_4(void);
extern int __get_user_8(void);
extern int __get_user_bad(void);
extern void __put_user_bad(void);





extern void __put_user_1(void);
extern void __put_user_2(void);
extern void __put_user_4(void);
extern void __put_user_8(void);
struct __large_struct { unsigned long buf[100]; };
extern unsigned long
copy_from_user_nmi(void *to, void *from, unsigned long n);
extern long
strncpy_from_user(char *dst, char *src, long count);

extern long strlen_user( char *str);
extern long strnlen_user( char *str, long n);

unsigned long clear_user(void *mem, unsigned long len);
unsigned long __clear_user(void *mem, unsigned long len);
 unsigned long
copy_user_enhanced_fast_string(void *to, void *from, unsigned len);
 unsigned long
copy_user_generic_string(void *to, void *from, unsigned len);
 unsigned long
copy_user_generic_unrolled(void *to, void *from, unsigned len);

static inline __attribute__((always_inline)) unsigned long
copy_user_generic(void *to, void *from, unsigned len)
{
 unsigned ret;






 asm ("661:\n\t" "call %P[old]" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(3*32+16)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" " .long 661b - .\n" " .long " "663""2""f - .\n" " .word " "(9*32+ 9)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""2""f-""663""2""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" " .byte 0xff + (" "664""2""f-""663""2""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" "call %P[new1]" "\n" "664""1" ":\n\t" "663""2"":\n\t" "call %P[new2]" "\n" "664""2" ":\n\t" ".popsection" : "=a" (ret), "=D" (to), "=S" (from), "=d" (len) : [old] "i" (copy_user_generic_unrolled), [new1] "i" (copy_user_generic_string), [new2] "i" (copy_user_enhanced_fast_string), "1" (to), "2" (from), "3" (len) : "memory", "rcx", "r8", "r9", "r10", "r11")







                                                ;
 return ret;
}

 unsigned long
copy_in_user(void *to, void *from, unsigned len);

static inline __attribute__((always_inline))
int __copy_from_user_nocheck(void *dst, void *src, unsigned size)
{
 int ret = 0;

 if (!__builtin_constant_p(size))
  return copy_user_generic(dst, ( void *)src, size);
 switch (size) {
 case 1:asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""b"" %2,%""b""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=q"(*(u8 *)dst) : "m" ((*(struct __large_struct *)((u8 *)src))), "i" (1), "0" (ret))
                                ;
  return ret;
 case 2:asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""w"" %2,%""w""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=r"(*(u16 *)dst) : "m" ((*(struct __large_struct *)((u16 *)src))), "i" (2), "0" (ret))
                                ;
  return ret;
 case 4:asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""l"" %2,%""k""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=r"(*(u32 *)dst) : "m" ((*(struct __large_struct *)((u32 *)src))), "i" (4), "0" (ret))
                                ;
  return ret;
 case 8:asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %2,%""""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=r"(*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (8), "0" (ret))
                               ;
  return ret;
 case 10:
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %2,%""""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=r"(*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (10), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""w"" %2,%""w""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=r"(*(u16 *)(8 + (char *)dst)) : "m" ((*(struct __large_struct *)((u16 *)(8 + (char *)src)))), "i" (2), "0" (ret))

                                 ;
  return ret;
 case 16:
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %2,%""""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=r"(*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (16), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %2,%""""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=r"(*(u64 *)(8 + (char *)dst)) : "m" ((*(struct __large_struct *)((u64 *)(8 + (char *)src)))), "i" (8), "0" (ret))

                                ;
  return ret;
 default:
  return copy_user_generic(dst, ( void *)src, size);
 }
}

static inline __attribute__((always_inline))
int __copy_from_user(void *dst, void *src, unsigned size)
{
 might_fault();
 return __copy_from_user_nocheck(dst, src, size);
}

static inline __attribute__((always_inline))
int __copy_to_user_nocheck(void *dst, void *src, unsigned size)
{
 int ret = 0;

 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst, src, size);
 switch (size) {
 case 1:asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""b"" %""b""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "iq"(*(u8 *)src), "m" ((*(struct __large_struct *)((u8 *)dst))), "i" (1), "0" (ret))
                                ;
  return ret;
 case 2:asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""w"" %""w""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "ir"(*(u16 *)src), "m" ((*(struct __large_struct *)((u16 *)dst))), "i" (2), "0" (ret))
                                ;
  return ret;
 case 4:asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""l"" %""k""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "ir"(*(u32 *)src), "m" ((*(struct __large_struct *)((u32 *)dst))), "i" (4), "0" (ret))
                                ;
  return ret;
 case 8:asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %""""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "er"(*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (8), "0" (ret))
                               ;
  return ret;
 case 10:
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %""""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "er"(*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (10), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm("":::"memory");
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""w"" %""w""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "ir"(4[(u16 *)src]), "m" ((*(struct __large_struct *)(4 + (u16 *)dst))), "i" (2), "0" (ret))
                                 ;
  return ret;
 case 16:
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %""""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "er"(*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (16), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm("":::"memory");
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %""""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "er"(1[(u64 *)src]), "m" ((*(struct __large_struct *)(1 + (u64 *)dst))), "i" (8), "0" (ret))
                                ;
  return ret;
 default:
  return copy_user_generic(( void *)dst, src, size);
 }
}

static inline __attribute__((always_inline))
int __copy_to_user(void *dst, void *src, unsigned size)
{
 might_fault();
 return __copy_to_user_nocheck(dst, src, size);
}

static inline __attribute__((always_inline))
int __copy_in_user(void *dst, void *src, unsigned size)
{
 int ret = 0;

 might_fault();
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst,
      ( void *)src, size);
 switch (size) {
 case 1: {
  u8 tmp;
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""b"" %2,%""b""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=q"(tmp) : "m" ((*(struct __large_struct *)((u8 *)src))), "i" (1), "0" (ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""b"" %""b""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "iq"(tmp), "m" ((*(struct __large_struct *)((u8 *)dst))), "i" (1), "0" (ret))
                                  ;
  return ret;
 }
 case 2: {
  u16 tmp;
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""w"" %2,%""w""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=r"(tmp) : "m" ((*(struct __large_struct *)((u16 *)src))), "i" (2), "0" (ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""w"" %""w""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "ir"(tmp), "m" ((*(struct __large_struct *)((u16 *)dst))), "i" (2), "0" (ret))
                                  ;
  return ret;
 }

 case 4: {
  u32 tmp;
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""l"" %2,%""k""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=r"(tmp) : "m" ((*(struct __large_struct *)((u32 *)src))), "i" (4), "0" (ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""l"" %""k""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "ir"(tmp), "m" ((*(struct __large_struct *)((u32 *)dst))), "i" (4), "0" (ret))
                                  ;
  return ret;
 }
 case 8: {
  u64 tmp;
  asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %2,%""""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (ret), "=r"(tmp) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (8), "0" (ret))
                                ;
  if (__builtin_expect(!!(!ret), 1))
   asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %""""1,%2\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r"(ret) : "er"(tmp), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (8), "0" (ret))
                                 ;
  return ret;
 }
 default:
  return copy_user_generic(( void *)dst,
      ( void *)src, size);
 }
}

static inline __attribute__((always_inline)) int
__copy_from_user_inatomic(void *dst, void *src, unsigned size)
{
 return __copy_from_user_nocheck(dst, ( void *)src, size);
}

static inline __attribute__((always_inline)) int
__copy_to_user_inatomic(void *dst, void *src, unsigned size)
{
 return __copy_to_user_nocheck(( void *)dst, src, size);
}

extern long __copy_user_nocache(void *dst, void *src,
    unsigned size, int zerorest);

static inline int
__copy_from_user_nocache(void *dst, void *src, unsigned size)
{
 might_fault();
 return __copy_user_nocache(dst, src, size, 1);
}

static inline int
__copy_from_user_inatomic_nocache(void *dst, void *src,
      unsigned size)
{
 return __copy_user_nocache(dst, src, size, 0);
}

unsigned long
copy_user_handle_tail(char *to, char *from, unsigned len, unsigned zerorest);


unsigned long _copy_from_user(void *to, void *from,
        unsigned n);
unsigned long _copy_to_user(void *to, void *from,
      unsigned n);







extern void __attribute__((warning("copy_from_user() buffer size is too small")))
copy_from_user_overflow(void);
extern void __attribute__((warning("copy_to_user() buffer size is too small")))
copy_to_user_overflow(void) __asm__("copy_from_user_overflow");
static inline void
__copy_from_user_overflow(int size, unsigned long count)
{
 (1);
}
unsigned long copy_from_user(void *to, void *from, unsigned long n);
unsigned long copy_to_user(void *to, void *from, unsigned long n);

extern char __brk_base[], __brk_limit[];
extern struct exception_table_entry __stop___ex_table[];


extern char __end_rodata_hpage_align[];


extern void apic_timer_interrupt(void);
extern void x86_platform_ipi(void);
extern void kvm_posted_intr_ipi(void);
extern void error_interrupt(void);
extern void irq_work_interrupt(void);

extern void spurious_interrupt(void);
extern void thermal_interrupt(void);
extern void reschedule_interrupt(void);

extern void invalidate_interrupt(void);
extern void invalidate_interrupt0(void);
extern void invalidate_interrupt1(void);
extern void invalidate_interrupt2(void);
extern void invalidate_interrupt3(void);
extern void invalidate_interrupt4(void);
extern void invalidate_interrupt5(void);
extern void invalidate_interrupt6(void);
extern void invalidate_interrupt7(void);
extern void invalidate_interrupt8(void);
extern void invalidate_interrupt9(void);
extern void invalidate_interrupt10(void);
extern void invalidate_interrupt11(void);
extern void invalidate_interrupt12(void);
extern void invalidate_interrupt13(void);
extern void invalidate_interrupt14(void);
extern void invalidate_interrupt15(void);
extern void invalidate_interrupt16(void);
extern void invalidate_interrupt17(void);
extern void invalidate_interrupt18(void);
extern void invalidate_interrupt19(void);
extern void invalidate_interrupt20(void);
extern void invalidate_interrupt21(void);
extern void invalidate_interrupt22(void);
extern void invalidate_interrupt23(void);
extern void invalidate_interrupt24(void);
extern void invalidate_interrupt25(void);
extern void invalidate_interrupt26(void);
extern void invalidate_interrupt27(void);
extern void invalidate_interrupt28(void);
extern void invalidate_interrupt29(void);
extern void invalidate_interrupt30(void);
extern void invalidate_interrupt31(void);

extern void irq_move_cleanup_interrupt(void);
extern void reboot_interrupt(void);
extern void threshold_interrupt(void);

extern void call_function_interrupt(void);
extern void call_function_single_interrupt(void);



extern void trace_apic_timer_interrupt(void);
extern void trace_x86_platform_ipi(void);
extern void trace_error_interrupt(void);
extern void trace_irq_work_interrupt(void);
extern void trace_spurious_interrupt(void);
extern void trace_thermal_interrupt(void);
extern void trace_reschedule_interrupt(void);
extern void trace_threshold_interrupt(void);
extern void trace_call_function_interrupt(void);
extern void trace_call_function_single_interrupt(void);







extern unsigned long io_apic_irqs;

extern void init_VISWS_APIC_irqs(void);
extern void setup_IO_APIC(void);
extern void disable_IO_APIC(void);

struct io_apic_irq_attr {
 int ioapic;
 int ioapic_pin;
 int trigger;
 int polarity;
};

static inline void set_io_apic_irq_attr(struct io_apic_irq_attr *irq_attr,
     int ioapic, int ioapic_pin,
     int trigger, int polarity)
{
 irq_attr->ioapic = ioapic;
 irq_attr->ioapic_pin = ioapic_pin;
 irq_attr->trigger = trigger;
 irq_attr->polarity = polarity;
}


struct irq_2_iommu {
 struct intel_iommu *iommu;
 u16 irte_index;
 u16 sub_handle;
 u8 irte_mask;
};


struct irq_2_irte {
 u16 devid;
 u16 index;
};






struct irq_cfg {
 struct irq_pin_list *irq_2_pin;
 cpumask_var_t domain;
 cpumask_var_t old_domain;
 u8 vector;
 u8 move_in_progress : 1;

 u8 remapped : 1;
 union {
  struct irq_2_iommu irq_2_iommu;
  struct irq_2_irte irq_2_irte;
 };

};

extern int assign_irq_vector(int, struct irq_cfg *, struct cpumask *);
extern void send_cleanup_vector(struct irq_cfg *);

struct irq_data;
int __ioapic_set_affinity(struct irq_data *, struct cpumask *,
     unsigned int *dest_id);
extern int IO_APIC_get_PCI_irq_vector(int bus, int devfn, int pin, struct io_apic_irq_attr *irq_attr);
extern void setup_ioapic_dest(void);

extern void enable_IO_APIC(void);


extern atomic_t irq_err_count;
extern atomic_t irq_mis_count;


extern void eisa_set_level_irq(unsigned int irq);


extern __attribute__((externally_visible)) void smp_apic_timer_interrupt(struct pt_regs *);
extern __attribute__((externally_visible)) void smp_spurious_interrupt(struct pt_regs *);
extern __attribute__((externally_visible)) void smp_x86_platform_ipi(struct pt_regs *);
extern __attribute__((externally_visible)) void smp_error_interrupt(struct pt_regs *);

extern void smp_irq_move_cleanup_interrupt(void);


extern __attribute__((externally_visible)) void smp_reschedule_interrupt(struct pt_regs *);
extern __attribute__((externally_visible)) void smp_call_function_interrupt(struct pt_regs *);
extern __attribute__((externally_visible)) void smp_call_function_single_interrupt(struct pt_regs *);
extern __attribute__((externally_visible)) void smp_invalidate_interrupt(struct pt_regs *);


extern void (*__attribute__ ((__section__(".init.rodata"))) interrupt[256 -0x20])(void);




typedef int vector_irq_t[256];
extern __attribute__((section(".data..percpu" ""))) __typeof__(vector_irq_t) vector_irq;
extern void setup_vector_irq(int cpu);


extern void lock_vector_lock(void);
extern void unlock_vector_lock(void);
extern void __setup_vector_irq(int cpu);
struct irqaction;
extern int setup_irq(unsigned int irq, struct irqaction *_new);
extern void remove_irq(unsigned int irq, struct irqaction *act);
extern int setup_percpu_irq(unsigned int irq, struct irqaction *_new);
extern void remove_percpu_irq(unsigned int irq, struct irqaction *act);

extern void irq_cpu_online(void);
extern void irq_cpu_offline(void);
extern int __irq_set_affinity_locked(struct irq_data *data, struct cpumask *cpumask);


void irq_move_irq(struct irq_data *data);
void irq_move_masked_irq(struct irq_data *data);





extern int no_irq_affinity;




static inline int irq_set_parent(int irq, int parent_irq)
{
 return 0;
}






extern void handle_level_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_fasteoi_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_edge_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_edge_eoi_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_simple_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_percpu_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_percpu_devid_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_bad_irq(unsigned int irq, struct irq_desc *desc);
extern void handle_nested_irq(unsigned int irq);


extern void note_interrupt(unsigned int irq, struct irq_desc *desc,
      irqreturn_t action_ret);



extern int noirqdebug_setup(char *str);


extern int can_request_irq(unsigned int irq, unsigned long irqflags);


extern struct irq_chip no_irq_chip;
extern struct irq_chip dummy_irq_chip;

extern void
irq_set_chip_and_handler_name(unsigned int irq, struct irq_chip *chip,
         irq_flow_handler_t handle, char *name);

static inline void irq_set_chip_and_handler(unsigned int irq, struct irq_chip *chip,
         irq_flow_handler_t handle)
{
 irq_set_chip_and_handler_name(irq, chip, handle, 0);
}

extern int irq_set_percpu_devid(unsigned int irq);

extern void
__irq_set_handler(unsigned int irq, irq_flow_handler_t handle, int is_chained,
    char *name);

static inline void
irq_set_handler(unsigned int irq, irq_flow_handler_t handle)
{
 __irq_set_handler(irq, handle, 0, 0);
}






static inline void
irq_set_chained_handler(unsigned int irq, irq_flow_handler_t handle)
{
 __irq_set_handler(irq, handle, 1, 0);
}

void irq_modify_status(unsigned int irq, unsigned long clr, unsigned long set);

static inline void irq_set_status_flags(unsigned int irq, unsigned long set)
{
 irq_modify_status(irq, 0, set);
}

static inline void irq_clear_status_flags(unsigned int irq, unsigned long clr)
{
 irq_modify_status(irq, clr, 0);
}

static inline void irq_set_noprobe(unsigned int irq)
{
 irq_modify_status(irq, 0, IRQ_NOPROBE);
}

static inline void irq_set_probe(unsigned int irq)
{
 irq_modify_status(irq, IRQ_NOPROBE, 0);
}

static inline void irq_set_nothread(unsigned int irq)
{
 irq_modify_status(irq, 0, IRQ_NOTHREAD);
}

static inline void irq_set_thread(unsigned int irq)
{
 irq_modify_status(irq, IRQ_NOTHREAD, 0);
}

static inline void irq_set_nested_thread(unsigned int irq, bool nest)
{
 if (nest)
  irq_set_status_flags(irq, IRQ_NESTED_THREAD);
 else
  irq_clear_status_flags(irq, IRQ_NESTED_THREAD);
}

static inline void irq_set_percpu_devid_flags(unsigned int irq)
{
 irq_set_status_flags(irq,
        IRQ_NOAUTOEN | IRQ_PER_CPU | IRQ_NOTHREAD |
        IRQ_NOPROBE | IRQ_PER_CPU_DEVID);
}


extern unsigned int create_irq_nr(unsigned int irq_want, int node);
extern unsigned int __create_irqs(unsigned int from, unsigned int count,
      int node);
extern int create_irq(void);
extern void destroy_irq(unsigned int irq);
extern void destroy_irqs(unsigned int irq, unsigned int count);





extern void dynamic_irq_cleanup(unsigned int irq);
static inline void dynamic_irq_init(unsigned int irq)
{
 dynamic_irq_cleanup(irq);
}


extern int irq_set_chip(unsigned int irq, struct irq_chip *chip);
extern int irq_set_handler_data(unsigned int irq, void *data);
extern int irq_set_chip_data(unsigned int irq, void *data);
extern int irq_set_irq_type(unsigned int irq, unsigned int type);
extern int irq_set_msi_desc(unsigned int irq, struct msi_desc *entry);
extern int irq_set_msi_desc_off(unsigned int irq_base, unsigned int irq_offset,
    struct msi_desc *entry);
extern struct irq_data *irq_get_irq_data(unsigned int irq);

static inline struct irq_chip *irq_get_chip(unsigned int irq)
{
 struct irq_data *d = irq_get_irq_data(irq);
 return d ? d->chip : 0;
}

static inline struct irq_chip *irq_data_get_irq_chip(struct irq_data *d)
{
 return d->chip;
}

static inline void *irq_get_chip_data(unsigned int irq)
{
 struct irq_data *d = irq_get_irq_data(irq);
 return d ? d->chip_data : 0;
}

static inline void *irq_data_get_irq_chip_data(struct irq_data *d)
{
 return d->chip_data;
}

static inline void *irq_get_handler_data(unsigned int irq)
{
 struct irq_data *d = irq_get_irq_data(irq);
 return d ? d->handler_data : 0;
}

static inline void *irq_data_get_irq_handler_data(struct irq_data *d)
{
 return d->handler_data;
}

static inline struct msi_desc *irq_get_msi_desc(unsigned int irq)
{
 struct irq_data *d = irq_get_irq_data(irq);
 return d ? d->msi_desc : 0;
}

static inline struct msi_desc *irq_data_get_msi(struct irq_data *d)
{
 return d->msi_desc;
}

static inline u32 irq_get_trigger_type(unsigned int irq)
{
 struct irq_data *d = irq_get_irq_data(irq);
 return d ? irqd_get_trigger_type(d) : 0;
}

int __irq_alloc_descs(int irq, unsigned int from, unsigned int cnt, int node,
  struct module *owner);
void irq_free_descs(unsigned int irq, unsigned int cnt);
int irq_reserve_irqs(unsigned int from, unsigned int cnt);

static inline void irq_free_desc(unsigned int irq)
{
 irq_free_descs(irq, 1);
}

static inline int irq_reserve_irq(unsigned int irq)
{
 return irq_reserve_irqs(irq, 1);
}
struct irq_chip_regs {
 unsigned long enable;
 unsigned long disable;
 unsigned long mask;
 unsigned long ack;
 unsigned long eoi;
 unsigned long type;
 unsigned long polarity;
};
struct irq_chip_type {
 struct irq_chip chip;
 struct irq_chip_regs regs;
 irq_flow_handler_t handler;
 u32 type;
 u32 mask_cache_priv;
 u32 *mask_cache;
};
struct irq_chip_generic {
 raw_spinlock_t lock;
 void *reg_base;
 unsigned int irq_base;
 unsigned int irq_cnt;
 u32 mask_cache;
 u32 type_cache;
 u32 polarity_cache;
 u32 wake_enabled;
 u32 wake_active;
 unsigned int num_ct;
 void *_private;
 unsigned long installed;
 unsigned long unused;
 struct irq_domain *domain;
 struct list_head list;
 struct irq_chip_type chip_types[0];
};
enum irq_gc_flags {
 IRQ_GC_INIT_MASK_CACHE = 1 << 0,
 IRQ_GC_INIT_NESTED_LOCK = 1 << 1,
 IRQ_GC_MASK_CACHE_PER_TYPE = 1 << 2,
 IRQ_GC_NO_MASK = 1 << 3,
};
struct irq_domain_chip_generic {
 unsigned int irqs_per_chip;
 unsigned int num_chips;
 unsigned int irq_flags_to_clear;
 unsigned int irq_flags_to_set;
 enum irq_gc_flags gc_flags;
 struct irq_chip_generic *gc[0];
};


void irq_gc_noop(struct irq_data *d);
void irq_gc_mask_disable_reg(struct irq_data *d);
void irq_gc_mask_set_bit(struct irq_data *d);
void irq_gc_mask_clr_bit(struct irq_data *d);
void irq_gc_unmask_enable_reg(struct irq_data *d);
void irq_gc_ack_set_bit(struct irq_data *d);
void irq_gc_ack_clr_bit(struct irq_data *d);
void irq_gc_mask_disable_reg_and_ack(struct irq_data *d);
void irq_gc_eoi(struct irq_data *d);
int irq_gc_set_wake(struct irq_data *d, unsigned int on);


struct irq_chip_generic *
irq_alloc_generic_chip( char *name, int nr_ct, unsigned int irq_base,
         void *reg_base, irq_flow_handler_t handler);
void irq_setup_generic_chip(struct irq_chip_generic *gc, u32 msk,
       enum irq_gc_flags flags, unsigned int clr,
       unsigned int set);
int irq_setup_alt_chip(struct irq_data *d, unsigned int type);
void irq_remove_generic_chip(struct irq_chip_generic *gc, u32 msk,
        unsigned int clr, unsigned int set);

struct irq_chip_generic *irq_get_domain_generic_chip(struct irq_domain *d, unsigned int hw_irq);
int irq_alloc_domain_generic_chips(struct irq_domain *d, int irqs_per_chip,
       int num_ct, char *name,
       irq_flow_handler_t handler,
       unsigned int clr, unsigned int set,
       enum irq_gc_flags flags);


static inline struct irq_chip_type *irq_data_get_chip_type(struct irq_data *d)
{
 return ({ typeof( ((struct irq_chip_type *)0)->chip ) *__mptr = (d->chip); (struct irq_chip_type *)( (char *)__mptr - ((size_t) &((struct irq_chip_type *)0)->chip) );});
}




static inline void irq_gc_lock(struct irq_chip_generic *gc)
{
 ;
}

static inline void irq_gc_unlock(struct irq_chip_generic *gc)
{
 ;
}




typedef struct _irq_cpustat {

 unsigned int __softirq_pending;
 unsigned int __nmi_count;

 unsigned int apic_timer_irqs;
 unsigned int irq_spurious_count;
 unsigned int icr_read_retry_count;


 unsigned int kvm_posted_intr_ipis;

 unsigned int x86_platform_ipis;
 unsigned int apic_perf_irqs;
 unsigned int apic_irq_work_irqs;

 unsigned int irq_resched_count;
 unsigned int irq_call_count;




 unsigned int irq_tlb_count;


 unsigned int irq_thermal_count;


 unsigned int irq_threshold_count;

} __attribute__((__aligned__((1 << (6))))) irq_cpustat_t;

extern __attribute__((section(".data..percpu" "..shared_aligned"))) __typeof__(irq_cpustat_t) irq_stat __attribute__((__aligned__((1 << (6)))));
extern void ack_bad_irq(unsigned int irq);

extern u64 arch_irq_stat_cpu(unsigned int cpu);


extern u64 arch_irq_stat(void);



typedef u64 cputime_t;
typedef u64 cputime64_t;
static inline cputime_t timespec_to_cputime( struct timespec *val)
{
 u64 ret = val->tv_sec * 1000000000L + val->tv_nsec;
 return ( cputime_t) ret;
}
static inline void cputime_to_timespec( cputime_t ct, struct timespec *val)
{
 u32 rem;

 val->tv_sec = div_u64_rem(( u64)ct, 1000000000L, &rem);;
 val->tv_nsec = rem;
}




static inline cputime_t timeval_to_cputime( struct timeval *val)
{
 u64 ret = val->tv_sec * 1000000000L + val->tv_usec * 1000L;
 return ( cputime_t) ret;
}
static inline void cputime_to_timeval( cputime_t ct, struct timeval *val)
{
 u32 rem;

 val->tv_sec = div_u64_rem(( u64)ct, 1000000000L, &rem);;
 val->tv_usec = rem / 1000L;
}















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
struct ipc_perm
{
 __kernel_key_t key;
 __kernel_uid_t uid;
 __kernel_gid_t gid;
 __kernel_uid_t cuid;
 __kernel_gid_t cgid;
 __kernel_mode_t mode;
 unsigned short seq;
};


struct ipc64_perm {
 __kernel_key_t key;
 __kernel_uid32_t uid;
 __kernel_gid32_t gid;
 __kernel_uid32_t cuid;
 __kernel_gid32_t cgid;
 __kernel_mode_t mode;

 unsigned char __pad1[4 - sizeof(__kernel_mode_t)];
 unsigned short seq;
 unsigned short __pad2;
 unsigned long __unused1;
 unsigned long __unused2;
};
struct ipc_kludge {
 struct msgbuf *msgp;
 long msgtyp;
};




struct kern_ipc_perm
{
 spinlock_t lock;
 int deleted;
 int id;
 key_t key;
 kuid_t uid;
 kgid_t gid;
 kuid_t cuid;
 kgid_t cgid;
 umode_t mode;
 unsigned long seq;
 void *security;
};
struct semid_ds {
 struct ipc_perm sem_perm;
 __kernel_time_t sem_otime;
 __kernel_time_t sem_ctime;
 struct sem *sem_base;
 struct sem_queue *sem_pending;
 struct sem_queue **sem_pending_last;
 struct sem_undo *undo;
 unsigned short sem_nsems;
};


struct semid64_ds {
 struct ipc64_perm sem_perm;
 __kernel_time_t sem_otime;
 unsigned long __unused1;
 __kernel_time_t sem_ctime;
 unsigned long __unused2;
 unsigned long sem_nsems;
 unsigned long __unused3;
 unsigned long __unused4;
};


struct sembuf {
 unsigned short sem_num;
 short sem_op;
 short sem_flg;
};


union semun {
 int val;
 struct semid_ds *buf;
 unsigned short *array;
 struct seminfo *__buf;
 void *__pad;
};

struct seminfo {
 int semmap;
 int semmni;
 int semmns;
 int semmnu;
 int semmsl;
 int semopm;
 int semume;
 int semusz;
 int semvmx;
 int semaem;
};

struct task_struct;


struct sem_array {
 struct kern_ipc_perm __attribute__((__aligned__((1 << (6)))))
    sem_perm;
 time_t sem_ctime;
 struct sem *sem_base;
 struct list_head pending_alter;

 struct list_head pending_const;

 struct list_head list_id;
 int sem_nsems;
 int complex_count;
};



struct sysv_sem {
 struct sem_undo_list *undo_list;
};

extern int copy_semundo(unsigned long clone_flags, struct task_struct *tsk);
extern void exit_sem(struct task_struct *tsk);







typedef unsigned long old_sigset_t;

typedef struct {
 unsigned long sig[(64 / 64)];
} sigset_t;






struct siginfo;
typedef void __signalfn_t(int);
typedef __signalfn_t *__sighandler_t;

typedef void __restorefn_t(void);
typedef __restorefn_t *__sigrestore_t;
typedef struct sigaltstack {
 void *ss_sp;
 int ss_flags;
 size_t ss_size;
} stack_t;

extern void do_notify_resume(struct pt_regs *, void *, __u32);









typedef union sigval {
 int sival_int;
 void *sival_ptr;
} sigval_t;
typedef struct siginfo {
 int si_signo;
 int si_errno;
 int si_code;

 union {
  int _pad[((128 - (4 * sizeof(int))) / sizeof(int))];


  struct {
   __kernel_pid_t _pid;
   __kernel_uid32_t _uid;
  } _kill;


  struct {
   __kernel_timer_t _tid;
   int _overrun;
   char _pad[sizeof( __kernel_uid32_t) - sizeof(int)];
   sigval_t _sigval;
   int _sys_private;
  } _timer;


  struct {
   __kernel_pid_t _pid;
   __kernel_uid32_t _uid;
   sigval_t _sigval;
  } _rt;


  struct {
   __kernel_pid_t _pid;
   __kernel_uid32_t _uid;
   int _status;
   __kernel_clock_t _utime;
   __kernel_clock_t _stime;
  } _sigchld;


  struct {
   void *_addr;



   short _addr_lsb;
  } _sigfault;


  struct {
   long _band;
   int _fd;
  } _sigpoll;


  struct {
   void *_call_addr;
   int _syscall;
   unsigned int _arch;
  } _sigsys;
 } _sifields;
} siginfo_t;
typedef struct sigevent {
 sigval_t sigev_value;
 int sigev_signo;
 int sigev_notify;
 union {
  int _pad[((64 - (sizeof(int) * 2 + sizeof(sigval_t))) / sizeof(int))];
   int _tid;

  struct {
   void (*_function)(sigval_t);
   void *_attribute;
  } _sigev_thread;
 } _sigev_un;
} sigevent_t;
struct siginfo;
void do_schedule_next_timer(struct siginfo *info);





static inline void copy_siginfo(struct siginfo *to, struct siginfo *from)
{
 if (from->si_code < 0)
  memcpy(to, from, sizeof(*to));
 else

  memcpy(to, from, (4 * sizeof(int)) + sizeof(from->_sifields._sigchld));
}



extern int copy_siginfo_to_user(struct siginfo *to, struct siginfo *from);

struct task_struct;


extern int print_fatal_signals;




struct sigqueue {
 struct list_head list;
 int flags;
 siginfo_t info;
 struct user_struct *user;
};




struct sigpending {
 struct list_head list;
 sigset_t signal;
};
static inline void sigaddset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] |= 1UL << sig;
 else
  set->sig[sig / 64] |= 1UL << (sig % 64);
}

static inline void sigdelset(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  set->sig[0] &= ~(1UL << sig);
 else
  set->sig[sig / 64] &= ~(1UL << (sig % 64));
}

static inline int sigismember(sigset_t *set, int _sig)
{
 unsigned long sig = _sig - 1;
 if ((64 / 64) == 1)
  return 1 & (set->sig[0] >> sig);
 else
  return 1 & (set->sig[sig / 64] >> (sig % 64));
}

static inline int sigfindinword(unsigned long word)
{
 return ffz(~word);
}



static inline int sigisemptyset(sigset_t *set)
{
 extern void _NSIG_WORDS_is_unsupported_size(void);
 switch ((64 / 64)) {
 case 4:
  return (set->sig[3] | set->sig[2] |
   set->sig[1] | set->sig[0]) == 0;
 case 2:
  return (set->sig[1] | set->sig[0]) == 0;
 case 1:
  return set->sig[0] == 0;
 default:
  _NSIG_WORDS_is_unsupported_size();
  return 0;
 }
}
static inline void sigorsets(sigset_t *r, sigset_t *a, sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) | (b3)); r->sig[2] = ((a2) | (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) | (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) | (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline void sigandsets(sigset_t *r, sigset_t *a, sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & (b3)); r->sig[2] = ((a2) & (b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & (b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & (b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }


static inline void sigandnsets(sigset_t *r, sigset_t *a, sigset_t *b) { extern void _NSIG_WORDS_is_unsupported_size(void); unsigned long a0, a1, a2, a3, b0, b1, b2, b3; switch ((64 / 64)) { case 4: a3 = a->sig[3]; a2 = a->sig[2]; b3 = b->sig[3]; b2 = b->sig[2]; r->sig[3] = ((a3) & ~(b3)); r->sig[2] = ((a2) & ~(b2)); case 2: a1 = a->sig[1]; b1 = b->sig[1]; r->sig[1] = ((a1) & ~(b1)); case 1: a0 = a->sig[0]; b0 = b->sig[0]; r->sig[0] = ((a0) & ~(b0)); break; default: _NSIG_WORDS_is_unsupported_size(); } }
static inline void signotset(sigset_t *set) { extern void _NSIG_WORDS_is_unsupported_size(void); switch ((64 / 64)) { case 4: set->sig[3] = (~(set->sig[3])); set->sig[2] = (~(set->sig[2])); case 2: set->sig[1] = (~(set->sig[1])); case 1: set->sig[0] = (~(set->sig[0])); break; default: _NSIG_WORDS_is_unsupported_size(); } }




static inline void sigemptyset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, 0, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = 0;
 case 1: set->sig[0] = 0;
  break;
 }
}

static inline void sigfillset(sigset_t *set)
{
 switch ((64 / 64)) {
 default:
  memset(set, -1, sizeof(sigset_t));
  break;
 case 2: set->sig[1] = -1;
 case 1: set->sig[0] = -1;
  break;
 }
}



static inline void sigaddsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] |= mask;
}

static inline void sigdelsetmask(sigset_t *set, unsigned long mask)
{
 set->sig[0] &= ~mask;
}

static inline int sigtestsetmask(sigset_t *set, unsigned long mask)
{
 return (set->sig[0] & mask) != 0;
}

static inline void siginitset(sigset_t *set, unsigned long mask)
{
 set->sig[0] = mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], 0, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = 0;
 case 1: ;
 }
}

static inline void siginitsetinv(sigset_t *set, unsigned long mask)
{
 set->sig[0] = ~mask;
 switch ((64 / 64)) {
 default:
  memset(&set->sig[1], -1, sizeof(long)*((64 / 64)-1));
  break;
 case 2: set->sig[1] = -1;
 case 1: ;
 }
}



static inline void init_sigpending(struct sigpending *sig)
{
 sigemptyset(&sig->signal);
 INIT_LIST_HEAD(&sig->list);
}

extern void flush_sigqueue(struct sigpending *queue);


static inline int valid_signal(unsigned long sig)
{
 return sig <= 64 ? 1 : 0;
}

struct timespec;
struct pt_regs;

extern int next_signal(struct sigpending *pending, sigset_t *mask);
extern int do_send_sig_info(int sig, struct siginfo *info,
    struct task_struct *p, bool group);
extern int group_send_sig_info(int sig, struct siginfo *info, struct task_struct *p);
extern int __group_send_sig_info(int, struct siginfo *, struct task_struct *);
extern int do_sigtimedwait( sigset_t *, siginfo_t *,
    struct timespec *);
extern int sigprocmask(int, sigset_t *, sigset_t *);
extern void set_current_blocked(sigset_t *);
extern void __set_current_blocked( sigset_t *);
extern int show_unhandled_signals;
extern int sigsuspend(sigset_t *);

struct sigaction {

 __sighandler_t sa_handler;
 unsigned long sa_flags;





 __sigrestore_t sa_restorer;

 sigset_t sa_mask;
};

struct k_sigaction {
 struct sigaction sa;



};
struct ksignal {
 struct k_sigaction ka;
 siginfo_t info;
 int sig;
};

extern int get_signal_to_deliver(siginfo_t *info, struct k_sigaction *return_ka, struct pt_regs *regs, void *cookie);
extern void signal_setup_done(int failed, struct ksignal *ksig, int stepping);
extern void signal_delivered(int sig, siginfo_t *info, struct k_sigaction *ka, struct pt_regs *regs, int stepping);
extern void exit_signals(struct task_struct *tsk);
extern struct kmem_cache *sighand_cachep;

int unhandled_signal(struct task_struct *tsk, int sig);
void signals_init(void);

int restore_altstack( stack_t *);
int __save_altstack(stack_t *, unsigned long);
struct seq_file;
extern void render_sigset_t(struct seq_file *, char *, sigset_t *);







enum pid_type
{
 PIDTYPE_PID,
 PIDTYPE_PGID,
 PIDTYPE_SID,
 PIDTYPE_MAX
};
struct upid {

 int nr;
 struct pid_namespace *ns;
 struct hlist_node pid_chain;
};

struct pid
{
 atomic_t count;
 unsigned int level;

 struct hlist_head tasks[PIDTYPE_MAX];
 struct callback_head rcu;
 struct upid numbers[1];
};

extern struct pid init_struct_pid;

struct pid_link
{
 struct hlist_node node;
 struct pid *pid;
};
extern struct task_struct *pid_task(struct pid *pid, enum pid_type);
extern struct task_struct *get_pid_task(struct pid *pid, enum pid_type);

extern struct pid *get_task_pid(struct task_struct *task, enum pid_type type);




extern void attach_pid(struct task_struct *task, enum pid_type);
extern void detach_pid(struct task_struct *task, enum pid_type);
extern void change_pid(struct task_struct *task, enum pid_type,
   struct pid *pid);
extern void transfer_pid(struct task_struct *old, struct task_struct *_new,
    enum pid_type);

struct pid_namespace;
extern struct pid_namespace init_pid_ns;
extern struct pid *find_pid_ns(int nr, struct pid_namespace *ns);
extern struct pid *find_vpid(int nr);




extern struct pid *find_get_pid(int nr);
extern struct pid *find_ge_pid(int nr, struct pid_namespace *);
int next_pidmap(struct pid_namespace *pid_ns, unsigned int last);

extern struct pid *alloc_pid(struct pid_namespace *ns);
extern void free_pid(struct pid *pid);
extern void disable_pid_allocation(struct pid_namespace *ns);
static inline struct pid_namespace *ns_of_pid(struct pid *pid)
{
 struct pid_namespace *ns = 0;
 if (pid)
  ns = pid->numbers[pid->level].ns;
 return ns;
}







static inline bool is_child_reaper(struct pid *pid)
{
 return pid->numbers[pid->level].nr == 1;
}
static inline pid_t pid_nr(struct pid *pid)
{
 pid_t nr = 0;
 if (pid)
  nr = pid->numbers[0].nr;
 return nr;
}

pid_t pid_nr_ns(struct pid *pid, struct pid_namespace *ns);
pid_t pid_vnr(struct pid *pid);


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



struct prop_global {





 int shift;






 struct percpu_counter events;
};






struct prop_descriptor {
 int index;
 struct prop_global pg[2];
 struct mutex mutex;
};

int prop_descriptor_init(struct prop_descriptor *pd, int shift);
void prop_change_shift(struct prop_descriptor *pd, int new_shift);





struct prop_local_percpu {



 struct percpu_counter events;




 int shift;
 unsigned long period;
 raw_spinlock_t lock;
};

int prop_local_init_percpu(struct prop_local_percpu *pl);
void prop_local_destroy_percpu(struct prop_local_percpu *pl);
void __prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl);
void prop_fraction_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl,
  long *numerator, long *denominator);

static inline
void prop_inc_percpu(struct prop_descriptor *pd, struct prop_local_percpu *pl)
{
 unsigned long flags;

 ;
 __prop_inc_percpu(pd, pl);
 ;
}
void __prop_inc_percpu_max(struct prop_descriptor *pd,
      struct prop_local_percpu *pl, long frac);






struct prop_local_single {



 unsigned long events;





 unsigned long period;
 int shift;
 raw_spinlock_t lock;
};





int prop_local_init_single(struct prop_local_single *pl);
void prop_local_destroy_single(struct prop_local_single *pl);
void __prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl);
void prop_fraction_single(struct prop_descriptor *pd, struct prop_local_single *pl,
  long *numerator, long *denominator);

static inline
void prop_inc_single(struct prop_descriptor *pd, struct prop_local_single *pl)
{
 unsigned long flags;

 ;
 __prop_inc_single(pd, pl);
 ;
}



struct seccomp_data {
 int nr;
 __u32 arch;
 __u64 instruction_pointer;
 __u64 args[6];
};




















struct seccomp_filter;
struct seccomp {
 int mode;
 struct seccomp_filter *filter;
};

extern int __secure_computing(int);
static inline int secure_computing(int this_syscall)
{
 if (__builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 8)), 0))
  return __secure_computing(this_syscall);
 return 0;
}


static inline void secure_computing_strict(int this_syscall)
{
 (secure_computing(this_syscall) != 0);
}

extern long prctl_get_seccomp(void);
extern long prctl_set_seccomp(unsigned long, char *);

static inline int seccomp_mode(struct seccomp *s)
{
 return s->mode;
}
extern void put_seccomp_filter(struct task_struct *tsk);
extern void get_seccomp_filter(struct task_struct *tsk);
extern u32 seccomp_bpf_load(int off);

static inline void INIT_LIST_HEAD_RCU(struct list_head *list)
{
 (list->next) = list;
 (list->prev) = list;
}
static inline void __list_add_rcu(struct list_head *_new,
  struct list_head *prev, struct list_head *next)
{
 _new->next = next;
 _new->prev = prev;
 ({ ((*((struct list_head **)(&(prev)->next)))) = (_new); });
 next->prev = _new;
}
static inline void list_add_rcu(struct list_head *_new, struct list_head *head)
{
 __list_add_rcu(_new, head, head->next);
}
static inline void list_add_tail_rcu(struct list_head *_new,
     struct list_head *head)
{
 __list_add_rcu(_new, head->prev, head);
}
static inline void list_del_rcu(struct list_head *entry)
{
 __list_del_entry(entry);
 entry->prev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
static inline void hlist_del_init_rcu(struct hlist_node *n)
{
 if (!hlist_unhashed(n)) {
  __hlist_del(n);
  n->pprev = 0;
 }
}
static inline void list_replace_rcu(struct list_head *old,
    struct list_head *_new)
{
 _new->next = old->next;
 _new->prev = old->prev;
 ({ ((*((struct list_head **)(&(_new->prev)->next)))) = (_new); });
 _new->next->prev = _new;
 old->prev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
static inline void list_splice_init_rcu(struct list_head *list,
     struct list_head *head,
     void (*sync)(void))
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 if (list_empty(list))
  return;







 INIT_LIST_HEAD_RCU(list);
 sync();
 last->next = at;
 ({ ((*((struct list_head **)(&(head)->next)))) = (first); });
 first->prev = head;
 at->prev = last;
}
static inline void hlist_del_rcu(struct hlist_node *n)
{
 __hlist_del(n);
 n->pprev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
static inline void hlist_replace_rcu(struct hlist_node *old,
     struct hlist_node *_new)
{
 struct hlist_node *next = old->next;

 _new->next = next;
 _new->pprev = old->pprev;
 ({ (*(struct hlist_node **)_new->pprev) = (_new); });
 if (next)
  _new->next->pprev = &_new->next;
 old->pprev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
static inline void hlist_add_head_rcu(struct hlist_node *n,
     struct hlist_head *h)
{
 struct hlist_node *first = h->first;

 n->next = first;
 n->pprev = &h->first;
 ({ (((h)->first)) = (n); });
 if (first)
  first->pprev = &n->next;
}
static inline void hlist_add_before_rcu(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 ({ ((*((n)->pprev))) = (n); });
 next->pprev = &n->next;
}
static inline void hlist_add_after_rcu(struct hlist_node *prev,
           struct hlist_node *n)
{
 n->next = prev->next;
 n->pprev = &prev->next;
 ({ (((prev)->next)) = (n); });
 if (n->next)
  n->next->pprev = &n->next;
}
struct plist_head {
 struct list_head node_list;
};

struct plist_node {
 int prio;
 struct list_head prio_list;
 struct list_head node_list;
};
static inline void
plist_head_init(struct plist_head *head)
{
 INIT_LIST_HEAD(&head->node_list);
}






static inline void plist_node_init(struct plist_node *node, int prio)
{
 node->prio = prio;
 INIT_LIST_HEAD(&node->prio_list);
 INIT_LIST_HEAD(&node->node_list);
}

extern void plist_add(struct plist_node *node, struct plist_head *head);
extern void plist_del(struct plist_node *node, struct plist_head *head);
static inline int plist_head_empty( struct plist_head *head)
{
 return list_empty(&head->node_list);
}





static inline int plist_node_empty( struct plist_node *node)
{
 return list_empty(&node->node_list);
}
static inline struct plist_node *plist_first( struct plist_head *head)
{
 return ({ typeof( ((struct plist_node *)0)->node_list ) *__mptr = (head->node_list.next); (struct plist_node *)( (char *)__mptr - ((size_t) &((struct plist_node *)0)->node_list) );})
                                  ;
}







static inline struct plist_node *plist_last( struct plist_head *head)
{
 return ({ typeof( ((struct plist_node *)0)->node_list ) *__mptr = (head->node_list.prev); (struct plist_node *)( (char *)__mptr - ((size_t) &((struct plist_node *)0)->node_list) );})
                                  ;
}


extern int max_lock_depth;
struct rt_mutex {
 raw_spinlock_t wait_lock;
 struct plist_head wait_list;
 struct task_struct *owner;






};

struct rt_mutex_waiter;
struct hrtimer_sleeper;






 static inline int rt_mutex_debug_check_no_locks_freed( void *from,
             unsigned long len)
 {
 return 0;
 }
static inline int rt_mutex_is_locked(struct rt_mutex *lock)
{
 return lock->owner != 0;
}

extern void __rt_mutex_init(struct rt_mutex *lock, char *name);
extern void rt_mutex_destroy(struct rt_mutex *lock);

extern void rt_mutex_lock(struct rt_mutex *lock);
extern int rt_mutex_lock_interruptible(struct rt_mutex *lock,
      int detect_deadlock);
extern int rt_mutex_timed_lock(struct rt_mutex *lock,
     struct hrtimer_sleeper *timeout,
     int detect_deadlock);

extern int rt_mutex_trylock(struct rt_mutex *lock);

extern void rt_mutex_unlock(struct rt_mutex *lock);






struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
 long ru_maxrss;
 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;
};

struct rlimit {
 unsigned long rlim_cur;
 unsigned long rlim_max;
};



struct rlimit64 {
 __u64 rlim_cur;
 __u64 rlim_max;
};





struct task_struct;

int getrusage(struct task_struct *p, int who, struct rusage *ru);
int do_prlimit(struct task_struct *tsk, unsigned int resource,
  struct rlimit *new_rlim, struct rlimit *old_rlim);








struct timerqueue_node {
 struct rb_node node;
 ktime_t expires;
};

struct timerqueue_head {
 struct rb_root head;
 struct timerqueue_node *next;
};


extern void timerqueue_add(struct timerqueue_head *head,
    struct timerqueue_node *node);
extern void timerqueue_del(struct timerqueue_head *head,
    struct timerqueue_node *node);
extern struct timerqueue_node *timerqueue_iterate_next(
      struct timerqueue_node *node);
static inline
struct timerqueue_node *timerqueue_getnext(struct timerqueue_head *head)
{
 return head->next;
}

static inline void timerqueue_init(struct timerqueue_node *node)
{
 ((&node->node)->__rb_parent_color = (unsigned long)(&node->node));
}

static inline void timerqueue_init_head(struct timerqueue_head *head)
{
 head->head = (struct rb_root) { 0, };
 head->next = 0;
}

struct hrtimer_clock_base;
struct hrtimer_cpu_base;




enum hrtimer_mode {
 HRTIMER_MODE_ABS = 0x0,
 HRTIMER_MODE_REL = 0x1,
 HRTIMER_MODE_PINNED = 0x02,
 HRTIMER_MODE_ABS_PINNED = 0x02,
 HRTIMER_MODE_REL_PINNED = 0x03,
};




enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};
struct hrtimer {
 struct timerqueue_node node;
 ktime_t _softexpires;
 enum hrtimer_restart (*function)(struct hrtimer *);
 struct hrtimer_clock_base *base;
 unsigned long state;

 int start_pid;
 void *start_site;
 char start_comm[16];

};
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
struct hrtimer_clock_base {
 struct hrtimer_cpu_base *cpu_base;
 int index;
 clockid_t clockid;
 struct timerqueue_head active;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t softirq_time;
 ktime_t offset;
};

enum hrtimer_base_type {
 HRTIMER_BASE_MONOTONIC,
 HRTIMER_BASE_REALTIME,
 HRTIMER_BASE_BOOTTIME,
 HRTIMER_BASE_TAI,
 HRTIMER_MAX_CLOCK_BASES,
};
struct hrtimer_cpu_base {
 raw_spinlock_t lock;
 unsigned int active_bases;
 unsigned int clock_was_set;

 ktime_t expires_next;
 int hres_active;
 int hang_detected;
 unsigned long nr_events;
 unsigned long nr_retries;
 unsigned long nr_hangs;
 ktime_t max_hang_time;

 struct hrtimer_clock_base clock_base[HRTIMER_MAX_CLOCK_BASES];
};

static inline void hrtimer_set_expires(struct hrtimer *timer, ktime_t time)
{
 timer->node.expires = time;
 timer->_softexpires = time;
}

static inline void hrtimer_set_expires_range(struct hrtimer *timer, ktime_t time, ktime_t delta)
{
 timer->_softexpires = time;
 timer->node.expires = ktime_add_safe(time, delta);
}

static inline void hrtimer_set_expires_range_ns(struct hrtimer *timer, ktime_t time, unsigned long delta)
{
 timer->_softexpires = time;
 timer->node.expires = ktime_add_safe(time, ns_to_ktime(delta));
}

static inline void hrtimer_set_expires_tv64(struct hrtimer *timer, s64 tv64)
{
 timer->node.expires.tv64 = tv64;
 timer->_softexpires.tv64 = tv64;
}

static inline void hrtimer_add_expires(struct hrtimer *timer, ktime_t time)
{
 timer->node.expires = ktime_add_safe(timer->node.expires, time);
 timer->_softexpires = ktime_add_safe(timer->_softexpires, time);
}

static inline void hrtimer_add_expires_ns(struct hrtimer *timer, u64 ns)
{
 timer->node.expires = ({ ({ ktime_t var; var.tv64 = (timer->node.expires).tv64 + (ns); var; }); });
 timer->_softexpires = ({ ({ ktime_t var; var.tv64 = (timer->_softexpires).tv64 + (ns); var; }); });
}

static inline ktime_t hrtimer_get_expires( struct hrtimer *timer)
{
 return timer->node.expires;
}

static inline ktime_t hrtimer_get_softexpires( struct hrtimer *timer)
{
 return timer->_softexpires;
}

static inline s64 hrtimer_get_expires_tv64( struct hrtimer *timer)
{
 return timer->node.expires.tv64;
}
static inline s64 hrtimer_get_softexpires_tv64( struct hrtimer *timer)
{
 return timer->_softexpires.tv64;
}

static inline s64 hrtimer_get_expires_ns( struct hrtimer *timer)
{
 return ((timer->node.expires).tv64);
}

static inline ktime_t hrtimer_expires_remaining( struct hrtimer *timer)
{
 return ({ ({ ktime_t var; var.tv64 = (timer->node.expires).tv64 - (timer->base->get_time()).tv64; var; }); });
}


struct clock_event_device;

extern void hrtimer_interrupt(struct clock_event_device *dev);




static inline ktime_t hrtimer_cb_get_time(struct hrtimer *timer)
{
 return timer->base->get_time();
}

static inline int hrtimer_is_hres_active(struct hrtimer *timer)
{
 return timer->base->cpu_base->hres_active;
}

extern void hrtimer_peek_ahead_timers(void);
extern void clock_was_set_delayed(void);
extern void clock_was_set(void);

extern void timerfd_clock_was_set(void);



extern void hrtimers_resume(void);

extern ktime_t ktime_get(void);
extern ktime_t ktime_get_real(void);
extern ktime_t ktime_get_boottime(void);
extern ktime_t ktime_get_monotonic_offset(void);
extern ktime_t ktime_get_clocktai(void);
extern ktime_t ktime_get_update_offsets(ktime_t *offs_real, ktime_t *offs_boot,
      ktime_t *offs_tai);

extern __attribute__((section(".data..percpu" ""))) __typeof__(struct tick_device) tick_cpu_device;





extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
    enum hrtimer_mode mode);







static inline void hrtimer_init_on_stack(struct hrtimer *timer,
      clockid_t which_clock,
      enum hrtimer_mode mode)
{
 hrtimer_init(timer, which_clock, mode);
}
static inline void destroy_hrtimer_on_stack(struct hrtimer *timer) { }



extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
    enum hrtimer_mode mode);
extern int hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
   unsigned long range_ns, enum hrtimer_mode mode);
extern int
__hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
    unsigned long delta_ns,
    enum hrtimer_mode mode, int wakeup);

extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);

static inline int hrtimer_start_expires(struct hrtimer *timer,
      enum hrtimer_mode mode)
{
 unsigned long delta;
 ktime_t soft, hard;
 soft = hrtimer_get_softexpires(timer);
 hard = hrtimer_get_expires(timer);
 delta = ((({ ({ ktime_t var; var.tv64 = (hard).tv64 - (soft).tv64; var; }); })).tv64);
 return hrtimer_start_range_ns(timer, soft, delta, mode);
}

static inline int hrtimer_restart(struct hrtimer *timer)
{
 return hrtimer_start_expires(timer, HRTIMER_MODE_ABS);
}


extern ktime_t hrtimer_get_remaining( struct hrtimer *timer);
extern int hrtimer_get_res( clockid_t which_clock, struct timespec *tp);

extern ktime_t hrtimer_get_next_event(void);






static inline int hrtimer_active( struct hrtimer *timer)
{
 return timer->state != 0x00;
}




static inline int hrtimer_is_queued(struct hrtimer *timer)
{
 return timer->state & 0x01;
}





static inline int hrtimer_callback_running(struct hrtimer *timer)
{
 return timer->state & 0x02;
}


extern u64
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);


static inline u64 hrtimer_forward_now(struct hrtimer *timer,
          ktime_t interval)
{
 return hrtimer_forward(timer, timer->base->get_time(), interval);
}


extern long hrtimer_nanosleep(struct timespec *rqtp,
         struct timespec *rmtp,
         enum hrtimer_mode mode,
         clockid_t clockid);
extern long hrtimer_nanosleep_restart(struct restart_block *restart_block);

extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
     struct task_struct *tsk);

extern int schedule_hrtimeout_range(ktime_t *expires, unsigned long delta,
      enum hrtimer_mode mode);
extern int schedule_hrtimeout_range_clock(ktime_t *expires,
  unsigned long delta, enum hrtimer_mode mode, int clock);
extern int schedule_hrtimeout(ktime_t *expires, enum hrtimer_mode mode);


extern void hrtimer_run_queues(void);
extern void hrtimer_run_pending(void);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) hrtimers_init(void);
extern void sysrq_timer_list_show(void);



extern enum hrtimer_restart it_real_fn(struct hrtimer *);
struct task_io_accounting {


 u64 rchar;

 u64 wchar;

 u64 syscr;

 u64 syscw;







 u64 read_bytes;





 u64 write_bytes;
 u64 cancelled_write_bytes;

};
struct task_struct;






struct latency_record {
 unsigned long backtrace[12];
 unsigned int count;
 unsigned long time;
 unsigned long max;
};



extern int latencytop_enabled;
void __account_scheduler_latency(struct task_struct *task, int usecs, int inter);
static inline void
account_scheduler_latency(struct task_struct *task, int usecs, int inter)
{
 if (__builtin_expect(!!(latencytop_enabled), 0))
  __account_scheduler_latency(task, usecs, inter);
}

void clear_all_latency_tracing(struct task_struct *p);
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


struct assoc_array {
 struct assoc_array_ptr *root;
 unsigned long nr_leaves_on_tree;
};




struct assoc_array_ops {

 unsigned long (*get_key_chunk)( void *index_key, int level);


 unsigned long (*get_object_key_chunk)( void *object, int level);


 bool (*compare_object)( void *object, void *index_key);




 int (*diff_objects)( void *object, void *index_key);


 void (*free_object)(void *object);
};




struct assoc_array_edit;

static inline void assoc_array_init(struct assoc_array *array)
{
 array->root = 0;
 array->nr_leaves_on_tree = 0;
}

extern int assoc_array_iterate( struct assoc_array *array,
          int (*iterator)( void *object,
            void *iterator_data),
          void *iterator_data);
extern void *assoc_array_find( struct assoc_array *array,
         struct assoc_array_ops *ops,
         void *index_key);
extern void assoc_array_destroy(struct assoc_array *array,
    struct assoc_array_ops *ops);
extern struct assoc_array_edit *assoc_array_insert(struct assoc_array *array,
         struct assoc_array_ops *ops,
         void *index_key,
         void *object);
extern void assoc_array_insert_set_object(struct assoc_array_edit *edit,
       void *object);
extern struct assoc_array_edit *assoc_array_delete(struct assoc_array *array,
         struct assoc_array_ops *ops,
         void *index_key);
extern struct assoc_array_edit *assoc_array_clear(struct assoc_array *array,
        struct assoc_array_ops *ops);
extern void assoc_array_apply_edit(struct assoc_array_edit *edit);
extern void assoc_array_cancel_edit(struct assoc_array_edit *edit);
extern int assoc_array_gc(struct assoc_array *array,
     struct assoc_array_ops *ops,
     bool (*iterator)(void *object, void *iterator_data),
     void *iterator_data);





typedef int32_t key_serial_t;


typedef uint32_t key_perm_t;

struct key;
struct seq_file;
struct user_struct;
struct signal_struct;
struct cred;

struct key_type;
struct key_owner;
struct keyring_list;
struct keyring_name;

struct keyring_index_key {
 struct key_type *type;
 char *description;
 size_t desc_len;
};
typedef struct __key_reference_with_attributes *key_ref_t;

static inline key_ref_t make_key_ref( struct key *key,
         bool possession)
{
 return (key_ref_t) ((unsigned long) key | possession);
}

static inline struct key *key_ref_to_ptr( key_ref_t key_ref)
{
 return (struct key *) ((unsigned long) key_ref & ~1UL);
}

static inline bool is_key_possessed( key_ref_t key_ref)
{
 return (unsigned long) key_ref & 1UL;
}
struct key {
 atomic_t usage;
 key_serial_t serial;
 union {
  struct list_head graveyard_link;
  struct rb_node serial_node;
 };
 struct rw_semaphore sem;
 struct key_user *user;
 void *security;
 union {
  time_t expiry;
  time_t revoked_at;
 };
 time_t last_used_at;
 kuid_t uid;
 kgid_t gid;
 key_perm_t perm;
 unsigned short quotalen;
 unsigned short datalen;
 unsigned long flags;
 union {
  struct keyring_index_key index_key;
  struct {
   struct key_type *type;
   char *description;
  };
 };




 union {
  struct list_head link;
  unsigned long x[2];
  void *p[2];
  int reject_error;
 } type_data;





 union {
  union {
   unsigned long value;
   void *rcudata;
   void *data;
   void *data2[2];
  } payload;
  struct assoc_array keys;
 };
};

extern struct key *key_alloc(struct key_type *type,
        char *desc,
        kuid_t uid, kgid_t gid,
        struct cred *cred,
        key_perm_t perm,
        unsigned long flags);







extern void key_revoke(struct key *key);
extern void key_invalidate(struct key *key);
extern void key_put(struct key *key);

static inline struct key *__key_get(struct key *key)
{
 ;
 return key;
}

static inline struct key *key_get(struct key *key)
{
 return key ? __key_get(key) : key;
}

static inline void key_ref_put(key_ref_t key_ref)
{
 key_put(key_ref_to_ptr(key_ref));
}

extern struct key *request_key(struct key_type *type,
          char *description,
          char *callout_info);

extern struct key *request_key_with_auxdata(struct key_type *type,
         char *description,
         void *callout_info,
         size_t callout_len,
         void *aux);

extern struct key *request_key_async(struct key_type *type,
         char *description,
         void *callout_info,
         size_t callout_len);

extern struct key *request_key_async_with_auxdata(struct key_type *type,
        char *description,
        void *callout_info,
        size_t callout_len,
        void *aux);

extern int wait_for_key_construction(struct key *key, bool intr);

extern int key_validate( struct key *key);

extern key_ref_t key_create_or_update(key_ref_t keyring,
          char *type,
          char *description,
          void *payload,
          size_t plen,
          key_perm_t perm,
          unsigned long flags);

extern int key_update(key_ref_t key,
        void *payload,
        size_t plen);

extern int key_link(struct key *keyring,
      struct key *key);

extern int key_unlink(struct key *keyring,
        struct key *key);

extern struct key *keyring_alloc( char *description, kuid_t uid, kgid_t gid,
     struct cred *cred,
     key_perm_t perm,
     unsigned long flags,
     struct key *dest);

extern int keyring_clear(struct key *keyring);

extern key_ref_t keyring_search(key_ref_t keyring,
    struct key_type *type,
    char *description);

extern int keyring_add_key(struct key *keyring,
      struct key *key);

extern struct key *key_lookup(key_serial_t id);

static inline key_serial_t key_serial( struct key *key)
{
 return key ? key->serial : 0;
}

extern void key_set_timeout(struct key *, unsigned);
static inline bool key_is_instantiated( struct key *key)
{
 return (__builtin_constant_p((0)) ? constant_test_bit((0), (&key->flags)) : variable_test_bit((0), (&key->flags))) &&
  !(__builtin_constant_p((5)) ? constant_test_bit((5), (&key->flags)) : variable_test_bit((5), (&key->flags)));
}
extern ctl_table key_sysctls[];




extern int install_thread_keyring_to_cred(struct cred *cred);
extern void key_fsuid_changed(struct task_struct *tsk);
extern void key_fsgid_changed(struct task_struct *tsk);
extern void key_init(void);
struct selinux_audit_rule;
struct audit_context;
struct kern_ipc_perm;






bool selinux_is_enabled(void);



struct user_struct;
struct cred;
struct inode;







struct group_info {
 atomic_t usage;
 int ngroups;
 int nblocks;
 kgid_t small_block[32];
 kgid_t *blocks[0];
};
static inline struct group_info *get_group_info(struct group_info *gi)
{
 ;
 return gi;
}
extern struct group_info *groups_alloc(int);
extern struct group_info init_groups;





extern int set_current_groups(struct group_info *);
extern int set_groups(struct cred *, struct group_info *);
extern int groups_search( struct group_info *, kgid_t);





extern int in_group_p(kgid_t);
extern int in_egroup_p(kgid_t);
struct cred {
 atomic_t usage;







 kuid_t uid;
 kgid_t gid;
 kuid_t suid;
 kgid_t sgid;
 kuid_t euid;
 kgid_t egid;
 kuid_t fsuid;
 kgid_t fsgid;
 unsigned securebits;
 kernel_cap_t cap_inheritable;
 kernel_cap_t cap_permitted;
 kernel_cap_t cap_effective;
 kernel_cap_t cap_bset;

 unsigned char jit_keyring;

 struct key *session_keyring;
 struct key *process_keyring;
 struct key *thread_keyring;
 struct key *request_key_auth;


 void *security;

 struct user_struct *user;
 struct user_namespace *user_ns;
 struct group_info *group_info;
 struct callback_head rcu;
};

extern void __put_cred(struct cred *);
extern void exit_creds(struct task_struct *);
extern int copy_creds(struct task_struct *, unsigned long);
extern struct cred *get_task_cred(struct task_struct *);
extern struct cred *cred_alloc_blank(void);
extern struct cred *prepare_creds(void);
extern struct cred *prepare_exec_creds(void);
extern int commit_creds(struct cred *);
extern void abort_creds(struct cred *);
extern struct cred *override_creds( struct cred *);
extern void revert_creds( struct cred *);
extern struct cred *prepare_kernel_cred(struct task_struct *);
extern int change_create_files_as(struct cred *, struct inode *);
extern int set_security_override(struct cred *, u32);
extern int set_security_override_from_ctx(struct cred *, char *);
extern int set_create_files_as(struct cred *, struct inode *);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) cred_init(void);
static inline void validate_creds( struct cred *cred)
{
}
static inline void validate_creds_for_do_exit(struct task_struct *tsk)
{
}
static inline void validate_process_creds(void)
{
}
static inline struct cred *get_new_cred(struct cred *cred)
{
 ;
 return cred;
}
static inline struct cred *get_cred( struct cred *cred)
{
 struct cred *nonconst_cred = (struct cred *) cred;
 validate_creds(cred);
 return get_new_cred(nonconst_cred);
}
static inline void put_cred( struct cred *_cred)
{
 struct cred *cred = (struct cred *) _cred;

 validate_creds(cred);
 if (1)
  __put_cred(cred);
}
extern struct user_namespace init_user_ns;
struct llist_head {
 struct llist_node *first;
};

struct llist_node {
 struct llist_node *next;
};
static inline void init_llist_head(struct llist_head *list)
{
 list->first = 0;
}
static inline bool llist_empty( struct llist_head *head)
{
 return (head->first) == 0;
}

static inline struct llist_node *llist_next(struct llist_node *node)
{
 return node->next;
}

extern bool llist_add_batch(struct llist_node *new_first,
       struct llist_node *new_last,
       struct llist_head *head);







static inline bool llist_add(struct llist_node *_new, struct llist_head *head)
{
 return llist_add_batch(_new, _new, head);
}
static inline struct llist_node *llist_del_all(struct llist_head *head)
{
 return ({ __typeof__ (*((&head->first))) __ret = ((0)); switch (sizeof(*((&head->first)))) { case 1: asm ("" "xchg" "b %b0, %1\n" : "+q" (__ret), "+m" (*((&head->first))) : : "memory", "cc"); break; case 2: asm ("" "xchg" "w %w0, %1\n" : "+r" (__ret), "+m" (*((&head->first))) : : "memory", "cc"); break; case 4: asm ("" "xchg" "l %0, %1\n" : "+r" (__ret), "+m" (*((&head->first))) : : "memory", "cc"); break; case 8: asm ("" "xchg" "q %q0, %1\n" : "+r" (__ret), "+m" (*((&head->first))) : : "memory", "cc"); break; default: __xchg_wrong_size(); } __ret; });
}

extern struct llist_node *llist_del_first(struct llist_head *head);

struct llist_node *llist_reverse_order(struct llist_node *head);





struct exec_domain;
struct futex_pi_state;
struct robust_list_head;
struct bio_list;
struct fs_struct;
struct perf_event_context;
struct blk_plug;
extern unsigned long avenrun[];
extern void get_avenrun(unsigned long *loads, unsigned long offset, int shift);
extern unsigned long total_forks;
extern int nr_threads;
extern __attribute__((section(".data..percpu" ""))) __typeof__(unsigned long) process_counts;
extern int nr_processes(void);
extern unsigned long nr_running(void);
extern unsigned long nr_iowait(void);
extern unsigned long nr_iowait_cpu(int cpu);
extern unsigned long this_cpu_load(void);


extern void calc_global_load(unsigned long ticks);
extern void update_cpu_load_nohz(void);

extern unsigned long get_parent_ip(unsigned long addr);

extern void dump_cpu_task(int cpu);

struct seq_file;
struct cfs_rq;
struct task_group;

extern void proc_sched_show_task(struct task_struct *p, struct seq_file *m);
extern void proc_sched_set_task(struct task_struct *p);
extern void
print_cfs_rq(struct seq_file *m, int cpu, struct cfs_rq *cfs_rq);
extern rwlock_t tasklist_lock;
extern spinlock_t mmlist_lock;

struct task_struct;





extern void sched_init(void);
extern void sched_init_smp(void);
extern void schedule_tail(struct task_struct *prev);
extern void init_idle(struct task_struct *idle, int cpu);
extern void init_idle_bootup_task(struct task_struct *idle);

extern int runqueue_is_locked(int cpu);


extern void nohz_balance_enter_idle(int cpu);
extern void set_cpu_sd_state_idle(void);
extern int get_nohz_timer_target(void);
extern void show_state_filter(unsigned long state_filter);

static inline void show_state(void)
{
 show_state_filter(0);
}

extern void show_regs(struct pt_regs *);






extern void show_stack(struct task_struct *task, unsigned long *sp);

void io_schedule(void);
long io_schedule_timeout(long timeout);

extern void cpu_init (void);
extern void trap_init(void);
extern void update_process_times(int user);
extern void scheduler_tick(void);

extern void sched_show_task(struct task_struct *p);


extern void touch_softlockup_watchdog(void);
extern void touch_softlockup_watchdog_sync(void);
extern void touch_all_softlockup_watchdogs(void);
extern int proc_dowatchdog_thresh(struct ctl_table *table, int write,
      void *buffer,
      size_t *lenp, loff_t *ppos);
extern unsigned int softlockup_panic;
void lockup_detector_init(void);
void reset_hung_task_detector(void);
extern char __sched_text_start[], __sched_text_end[];


extern int in_sched_functions(unsigned long addr);


extern signed long schedule_timeout(signed long timeout);
extern signed long schedule_timeout_interruptible(signed long timeout);
extern signed long schedule_timeout_killable(signed long timeout);
extern signed long schedule_timeout_uninterruptible(signed long timeout);
 void schedule(void);
extern void schedule_preempt_disabled(void);

struct nsproxy;
struct user_namespace;


extern void arch_pick_mmap_layout(struct mm_struct *mm);
extern unsigned long
arch_get_unmapped_area(struct file *, unsigned long, unsigned long,
         unsigned long, unsigned long);
extern unsigned long
arch_get_unmapped_area_topdown(struct file *filp, unsigned long addr,
     unsigned long len, unsigned long pgoff,
     unsigned long flags);





extern void set_dumpable(struct mm_struct *mm, int value);
extern int get_dumpable(struct mm_struct *mm);
struct sighand_struct {
 atomic_t count;
 struct k_sigaction action[64];
 spinlock_t siglock;
 wait_queue_head_t signalfd_wqh;
};

struct pacct_struct {
 int ac_flag;
 long ac_exitcode;
 unsigned long ac_mem;
 cputime_t ac_utime, ac_stime;
 unsigned long ac_minflt, ac_majflt;
};

struct cpu_itimer {
 cputime_t expires;
 cputime_t incr;
 u32 error;
 u32 incr_error;
};
struct cputime {
 cputime_t utime;
 cputime_t stime;
};
struct task_cputime {
 cputime_t utime;
 cputime_t stime;
 unsigned long long sum_exec_runtime;
};
struct thread_group_cputimer {
 struct task_cputime cputime;
 int running;
 raw_spinlock_t lock;
};


struct autogroup;
struct signal_struct {
 atomic_t sigcnt;
 atomic_t live;
 int nr_threads;

 wait_queue_head_t wait_chldexit;


 struct task_struct *curr_target;


 struct sigpending shared_pending;


 int group_exit_code;





 int notify_count;
 struct task_struct *group_exit_task;


 int group_stop_count;
 unsigned int flags;
 unsigned int is_child_subreaper:1;
 unsigned int has_child_subreaper:1;


 int posix_timer_id;
 struct list_head posix_timers;


 struct hrtimer real_timer;
 struct pid *leader_pid;
 ktime_t it_real_incr;






 struct cpu_itimer it[2];





 struct thread_group_cputimer cputimer;


 struct task_cputime cputime_expires;

 struct list_head cpu_timers[3];

 struct pid *tty_old_pgrp;


 int leader;

 struct tty_struct *tty;


 struct autogroup *autogroup;







 cputime_t utime, stime, cutime, cstime;
 cputime_t gtime;
 cputime_t cgtime;

 struct cputime prev_cputime;

 unsigned long nvcsw, nivcsw, cnvcsw, cnivcsw;
 unsigned long min_flt, maj_flt, cmin_flt, cmaj_flt;
 unsigned long inblock, oublock, cinblock, coublock;
 unsigned long maxrss, cmaxrss;
 struct task_io_accounting ioac;







 unsigned long long sum_sched_runtime;
 struct rlimit rlim[16];


 struct pacct_struct pacct;


 struct taskstats *stats;


 unsigned audit_tty;
 unsigned audit_tty_log_passwd;
 struct tty_audit_buf *tty_audit_buf;
 struct rw_semaphore group_rwsem;


 oom_flags_t oom_flags;
 short oom_score_adj;
 short oom_score_adj_min;


 struct mutex cred_guard_mutex;


};
static inline int signal_group_exit( struct signal_struct *sig)
{
 return (sig->flags & 0x00000004) ||
  (sig->group_exit_task != 0);
}




struct user_struct {
 atomic_t __count;
 atomic_t processes;
 atomic_t files;
 atomic_t sigpending;

 atomic_t inotify_watches;
 atomic_t inotify_devs;


 atomic_t fanotify_listeners;


 atomic_long_t epoll_watches;



 unsigned long mq_bytes;

 unsigned long locked_shm;


 struct key *uid_keyring;
 struct key *session_keyring;



 struct hlist_node uidhash_node;
 kuid_t uid;


 atomic_long_t locked_vm;

};

extern int uids_sysfs_init(void);

extern struct user_struct *find_user(kuid_t);

extern struct user_struct root_user;



struct backing_dev_info;
struct reclaim_state;


struct sched_info {

 unsigned long pcount;
 unsigned long long run_delay;


 unsigned long long last_arrival,
      last_queued;
};



struct task_delay_info {
 spinlock_t lock;
 unsigned int flags;
 struct timespec blkio_start, blkio_end;
 u64 blkio_delay;
 u64 swapin_delay;
 u32 blkio_count;

 u32 swapin_count;


 struct timespec freepages_start, freepages_end;
 u64 freepages_delay;
 u32 freepages_count;
};


static inline int sched_info_on(void)
{

 return 1;






}

enum cpu_idle_type {
 CPU_IDLE,
 CPU_NOT_IDLE,
 CPU_NEWLY_IDLE,
 CPU_MAX_IDLE_TYPES
};
extern int __attribute__((weak)) arch_sd_sibiling_asym_packing(void);

struct sched_domain_attr {
 int relax_domain_level;
};





extern int sched_domain_level_max;

struct sched_group;

struct sched_domain {

 struct sched_domain *parent;
 struct sched_domain *child;
 struct sched_group *groups;
 unsigned long min_interval;
 unsigned long max_interval;
 unsigned int busy_factor;
 unsigned int imbalance_pct;
 unsigned int cache_nice_tries;
 unsigned int busy_idx;
 unsigned int idle_idx;
 unsigned int newidle_idx;
 unsigned int wake_idx;
 unsigned int forkexec_idx;
 unsigned int smt_gain;

 int nohz_idle;
 int flags;
 int level;


 unsigned long last_balance;
 unsigned int balance_interval;
 unsigned int nr_balance_failed;


 u64 max_newidle_lb_cost;
 unsigned long next_decay_max_lb_cost;



 unsigned int lb_count[CPU_MAX_IDLE_TYPES];
 unsigned int lb_failed[CPU_MAX_IDLE_TYPES];
 unsigned int lb_balanced[CPU_MAX_IDLE_TYPES];
 unsigned int lb_imbalance[CPU_MAX_IDLE_TYPES];
 unsigned int lb_gained[CPU_MAX_IDLE_TYPES];
 unsigned int lb_hot_gained[CPU_MAX_IDLE_TYPES];
 unsigned int lb_nobusyg[CPU_MAX_IDLE_TYPES];
 unsigned int lb_nobusyq[CPU_MAX_IDLE_TYPES];


 unsigned int alb_count;
 unsigned int alb_failed;
 unsigned int alb_pushed;


 unsigned int sbe_count;
 unsigned int sbe_balanced;
 unsigned int sbe_pushed;


 unsigned int sbf_count;
 unsigned int sbf_balanced;
 unsigned int sbf_pushed;


 unsigned int ttwu_wake_remote;
 unsigned int ttwu_move_affine;
 unsigned int ttwu_move_balance;


 char *name;

 union {
  void *_private;
  struct callback_head rcu;
 };

 unsigned int span_weight;







 unsigned long span[0];
};

static inline struct cpumask *sched_domain_span(struct sched_domain *sd)
{
 return ((struct cpumask *)(1 ? (sd->span) : (void *)sizeof(__check_is_bitmap(sd->span))));
}

extern void partition_sched_domains(int ndoms_new, cpumask_var_t doms_new[],
        struct sched_domain_attr *dattr_new);


cpumask_var_t *alloc_sched_domains(unsigned int ndoms);
void free_sched_domains(cpumask_var_t doms[], unsigned int ndoms);

bool cpus_share_cache(int this_cpu, int that_cpu);
struct io_context;





static inline void prefetch_stack(struct task_struct *t) { }


struct audit_context;
struct mempolicy;
struct pipe_inode_info;
struct uts_namespace;

struct load_weight {
 unsigned long weight;
 u32 inv_weight;
};

struct sched_avg {





 u32 runnable_avg_sum, runnable_avg_period;
 u64 last_runnable_update;
 s64 decay_count;
 unsigned long load_avg_contrib;
};


struct sched_statistics {
 u64 wait_start;
 u64 wait_max;
 u64 wait_count;
 u64 wait_sum;
 u64 iowait_count;
 u64 iowait_sum;

 u64 sleep_start;
 u64 sleep_max;
 s64 sum_sleep_runtime;

 u64 block_start;
 u64 block_max;
 u64 exec_max;
 u64 slice_max;

 u64 nr_migrations_cold;
 u64 nr_failed_migrations_affine;
 u64 nr_failed_migrations_running;
 u64 nr_failed_migrations_hot;
 u64 nr_forced_migrations;

 u64 nr_wakeups;
 u64 nr_wakeups_sync;
 u64 nr_wakeups_migrate;
 u64 nr_wakeups_local;
 u64 nr_wakeups_remote;
 u64 nr_wakeups_affine;
 u64 nr_wakeups_affine_attempts;
 u64 nr_wakeups_passive;
 u64 nr_wakeups_idle;
};


struct sched_entity {
 struct load_weight load;
 struct rb_node run_node;
 struct list_head group_node;
 unsigned int on_rq;

 u64 exec_start;
 u64 sum_exec_runtime;
 u64 vruntime;
 u64 prev_sum_exec_runtime;

 u64 nr_migrations;


 struct sched_statistics statistics;



 struct sched_entity *parent;

 struct cfs_rq *cfs_rq;

 struct cfs_rq *my_q;




 struct sched_avg avg;

};

struct sched_rt_entity {
 struct list_head run_list;
 unsigned long timeout;
 unsigned long watchdog_stamp;
 unsigned int time_slice;

 struct sched_rt_entity *back;







};


struct rcu_node;

enum perf_event_task_context {
 perf_invalid_context = -1,
 perf_hw_context = 0,
 perf_sw_context,
 perf_nr_task_contexts,
};


enum _vtime {
  VTIME_SLEEPING = 0,
  VTIME_USER,
  VTIME_SYS,
};


struct task_struct {
 long state;
 void *stack;
 atomic_t usage;
 unsigned int flags;
 unsigned int ptrace;


 struct llist_node wake_entry;
 int on_cpu;
 struct task_struct *last_wakee;
 unsigned long wakee_flips;
 unsigned long wakee_flip_decay_ts;

 int wake_cpu;

 int on_rq;

 int prio, static_prio, normal_prio;
 unsigned int rt_priority;
 struct sched_class *sched_class;
 struct sched_entity se;
 struct sched_rt_entity rt;

 struct task_group *sched_task_group;




 struct hlist_head preempt_notifiers;



 unsigned int btrace_seq;


 unsigned int policy;
 int nr_cpus_allowed;
 cpumask_t cpus_allowed;
 struct sched_info sched_info;


 struct list_head tasks;

 struct plist_node pushable_tasks;


 struct mm_struct *mm, *active_mm;




 struct task_rss_stat rss_stat;


 int exit_state;
 int exit_code, exit_signal;
 int pdeath_signal;
 unsigned int jobctl;


 unsigned int personality;

 unsigned did_exec:1;
 unsigned in_execve:1;

 unsigned in_iowait:1;


 unsigned no_new_privs:1;


 unsigned sched_reset_on_fork:1;
 unsigned sched_contributes_to_load:1;

 pid_t pid;
 pid_t tgid;



 unsigned long stack_canary;






 struct task_struct *real_parent;
 struct task_struct *parent;



 struct list_head children;
 struct list_head sibling;
 struct task_struct *group_leader;






 struct list_head ptraced;
 struct list_head ptrace_entry;


 struct pid_link pids[PIDTYPE_MAX];
 struct list_head thread_group;

 struct completion *vfork_done;
 int *set_child_tid;
 int *clear_child_tid;

 cputime_t utime, stime, utimescaled, stimescaled;
 cputime_t gtime;

 struct cputime prev_cputime;


 seqlock_t vtime_seqlock;
 unsigned long long vtime_snap;







        enum _vtime vtime_snap_whence;


 unsigned long nvcsw, nivcsw;
 struct timespec start_time;
 struct timespec real_start_time;

 unsigned long min_flt, maj_flt;

 struct task_cputime cputime_expires;
 struct list_head cpu_timers[3];


 struct cred *real_cred;

 struct cred *cred;

 char comm[16];




 int link_count, total_link_count;


 struct sysv_sem sysvsem;



 unsigned long last_switch_count;


 struct thread_struct thread;

 struct fs_struct *fs;

 struct files_struct *files;

 struct nsproxy *nsproxy;

 struct signal_struct *signal;
 struct sighand_struct *sighand;

 sigset_t blocked, real_blocked;
 sigset_t saved_sigmask;
 struct sigpending pending;

 unsigned long sas_ss_sp;
 size_t sas_ss_size;
 int (*notifier)(void *priv);
 void *notifier_data;
 sigset_t *notifier_mask;
 struct callback_head *task_works;

 struct audit_context *audit_context;

 kuid_t loginuid;
 unsigned int sessionid;

 struct seccomp seccomp;


    u32 parent_exec_id;
    u32 self_exec_id;


 spinlock_t alloc_lock;


 raw_spinlock_t pi_lock;



 struct plist_head pi_waiters;

 struct rt_mutex_waiter *pi_blocked_on;
 void *journal_info;


 struct bio_list *bio_list;



 struct blk_plug *plug;



 struct reclaim_state *reclaim_state;

 struct backing_dev_info *backing_dev_info;

 struct io_context *io_context;

 unsigned long ptrace_message;
 siginfo_t *last_siginfo;
 struct task_io_accounting ioac;

 u64 acct_rss_mem1;
 u64 acct_vm_mem1;
 cputime_t acct_timexpd;


 nodemask_t mems_allowed;
 seqcount_t mems_allowed_seq;
 int cpuset_mem_spread_rotor;
 int cpuset_slab_spread_rotor;



 struct css_set *cgroups;

 struct list_head cg_list;


 struct robust_list_head *robust_list;

 struct compat_robust_list_head *compat_robust_list;

 struct list_head pi_state_list;
 struct futex_pi_state *pi_state_cache;


 struct perf_event_context *perf_event_ctxp[perf_nr_task_contexts];
 struct mutex perf_event_mutex;
 struct list_head perf_event_list;


 struct mempolicy *mempolicy;
 short il_next;
 short pref_node_fork;


 int numa_scan_seq;
 unsigned int numa_scan_period;
 unsigned int numa_scan_period_max;
 int numa_preferred_nid;
 int numa_migrate_deferred;
 unsigned long numa_migrate_retry;
 u64 node_stamp;
 struct callback_head numa_work;

 struct list_head numa_entry;
 struct numa_group *numa_group;






 unsigned long *numa_faults;
 unsigned long total_numa_faults;






 unsigned long *numa_faults_buffer;







 unsigned long numa_faults_locality[2];

 unsigned long numa_pages_migrated;


 struct callback_head rcu;




 struct pipe_inode_info *splice_pipe;

 struct page_frag task_frag;


 struct task_delay_info *delays;
 int nr_dirtied;
 int nr_dirtied_pause;
 unsigned long dirty_paused_when;


 int latency_record_count;
 struct latency_record latency_record[32];





 unsigned long timer_slack_ns;
 unsigned long default_timer_slack_ns;



 int curr_ret_stack;

 struct ftrace_ret_stack *ret_stack;

 unsigned long long ftrace_timestamp;




 atomic_t trace_overrun;

 atomic_t tracing_graph_pause;



 unsigned long trace;

 unsigned long trace_recursion;


 struct memcg_batch_info {
  int do_batch;
  struct mem_cgroup *memcg;
  unsigned long nr_pages;
  unsigned long memsw_nr_pages;
 } memcg_batch;
 unsigned int memcg_kmem_skip_account;
 struct memcg_oom_info {
  struct mem_cgroup *memcg;
  gfp_t gfp_mask;
  int order;
  unsigned int may_oom:1;
 } memcg_oom;


 struct uprobe_task *utask;


 unsigned int sequential_io;
 unsigned int sequential_io_avg;

};
extern void task_numa_fault(int last_node, int node, int pages, int flags);
extern pid_t task_numa_group_id(struct task_struct *p);
extern void set_numabalancing_state(bool enabled);
extern void task_numa_free(struct task_struct *p);

extern unsigned int sysctl_numa_balancing_migrate_deferred;
static inline struct pid *task_pid(struct task_struct *task)
{
 return task->pids[PIDTYPE_PID].pid;
}

static inline struct pid *task_tgid(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PID].pid;
}






static inline struct pid *task_pgrp(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_PGID].pid;
}

static inline struct pid *task_session(struct task_struct *task)
{
 return task->group_leader->pids[PIDTYPE_SID].pid;
}

struct pid_namespace;
pid_t __task_pid_nr_ns(struct task_struct *task, enum pid_type type,
   struct pid_namespace *ns);

static inline pid_t task_pid_nr(struct task_struct *tsk)
{
 return tsk->pid;
}

static inline pid_t task_pid_nr_ns(struct task_struct *tsk,
     struct pid_namespace *ns)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_PID, ns);
}

static inline pid_t task_pid_vnr(struct task_struct *tsk)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_PID, 0);
}


static inline pid_t task_tgid_nr(struct task_struct *tsk)
{
 return tsk->tgid;
}

pid_t task_tgid_nr_ns(struct task_struct *tsk, struct pid_namespace *ns);

static inline pid_t task_tgid_vnr(struct task_struct *tsk)
{
 return pid_vnr(task_tgid(tsk));
}


static int pid_alive( struct task_struct *p);
static inline pid_t task_ppid_nr_ns( struct task_struct *tsk, struct pid_namespace *ns)
{
 pid_t pid = 0;

 ;
 if (pid_alive(tsk))
  pid = task_tgid_nr_ns((tsk->real_parent), ns);
 ;

 return pid;
}

static inline pid_t task_ppid_nr( struct task_struct *tsk)
{
 return task_ppid_nr_ns(tsk, &init_pid_ns);
}

static inline pid_t task_pgrp_nr_ns(struct task_struct *tsk,
     struct pid_namespace *ns)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_PGID, ns);
}

static inline pid_t task_pgrp_vnr(struct task_struct *tsk)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_PGID, 0);
}


static inline pid_t task_session_nr_ns(struct task_struct *tsk,
     struct pid_namespace *ns)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_SID, ns);
}

static inline pid_t task_session_vnr(struct task_struct *tsk)
{
 return __task_pid_nr_ns(tsk, PIDTYPE_SID, 0);
}


static inline pid_t task_pgrp_nr(struct task_struct *tsk)
{
 return task_pgrp_nr_ns(tsk, &init_pid_ns);
}
static inline int pid_alive( struct task_struct *p)
{
 return p->pids[PIDTYPE_PID].pid != 0;
}
static inline int is_global_init(struct task_struct *tsk)
{
 return tsk->pid == 1;
}

extern struct pid *cad_pid;

extern void free_task(struct task_struct *tsk);


extern void __put_task_struct(struct task_struct *t);

static inline void put_task_struct(struct task_struct *t)
{
 if (1)
  __put_task_struct(t);
}


extern void task_cputime(struct task_struct *t,
    cputime_t *utime, cputime_t *stime);
extern void task_cputime_scaled(struct task_struct *t,
    cputime_t *utimescaled, cputime_t *stimescaled);
extern cputime_t task_gtime(struct task_struct *t);
extern void task_cputime_adjusted(struct task_struct *p, cputime_t *ut, cputime_t *st);
extern void thread_group_cputime_adjusted(struct task_struct *p, cputime_t *ut, cputime_t *st);
static inline gfp_t memalloc_noio_flags(gfp_t flags)
{
 if (__builtin_expect(!!(get_current()->flags & 0x00080000), 0))
  flags &= ~(( gfp_t)0x40u);
 return flags;
}

static inline unsigned int memalloc_noio_save(void)
{
 unsigned int flags = get_current()->flags & 0x00080000;
 get_current()->flags |= 0x00080000;
 return flags;
}

static inline void memalloc_noio_restore(unsigned int flags)
{
 get_current()->flags = (get_current()->flags & ~0x00080000) | flags;
}
extern bool task_set_jobctl_pending(struct task_struct *task,
        unsigned int mask);
extern void task_clear_jobctl_trapping(struct task_struct *task);
extern void task_clear_jobctl_pending(struct task_struct *task,
          unsigned int mask);
static inline void rcu_copy_process(struct task_struct *p)
{
}



static inline void tsk_restore_flags(struct task_struct *task,
    unsigned long orig_flags, unsigned long flags)
{
 task->flags &= ~flags;
 task->flags |= orig_flags & flags;
}


extern void do_set_cpus_allowed(struct task_struct *p,
          struct cpumask *new_mask);

extern int set_cpus_allowed_ptr(struct task_struct *p,
    struct cpumask *new_mask);
void calc_load_enter_idle(void);
void calc_load_exit_idle(void);






static inline int set_cpus_allowed(struct task_struct *p, cpumask_t new_mask)
{
 return set_cpus_allowed_ptr(p, &new_mask);
}
extern unsigned long long sched_clock(void);



extern u64 cpu_clock(int cpu);
extern u64 local_clock(void);
extern u64 sched_clock_cpu(int cpu);


extern void sched_clock_init(void);
extern int sched_clock_stable;

extern void sched_clock_tick(void);
extern void sched_clock_idle_sleep_event(void);
extern void sched_clock_idle_wakeup_event(u64 delta_ns);
static inline void enable_sched_clock_irqtime(void) {}
static inline void disable_sched_clock_irqtime(void) {}


extern unsigned long long
task_sched_runtime(struct task_struct *task);



extern void sched_exec(void);




extern void sched_clock_idle_sleep_event(void);
extern void sched_clock_idle_wakeup_event(u64 delta_ns);


extern void idle_task_exit(void);





extern void wake_up_nohz_cpu(int cpu);





extern bool sched_can_stop_tick(void);
extern u64 scheduler_tick_max_deferment(void);





extern void sched_autogroup_create_attach(struct task_struct *p);
extern void sched_autogroup_detach(struct task_struct *p);
extern void sched_autogroup_fork(struct signal_struct *sig);
extern void sched_autogroup_exit(struct signal_struct *sig);

extern void proc_sched_autogroup_show_task(struct task_struct *p, struct seq_file *m);
extern int proc_sched_autogroup_set_nice(struct task_struct *p, int nice);
extern bool yield_to(struct task_struct *p, bool preempt);
extern void set_user_nice(struct task_struct *p, long nice);
extern int task_prio( struct task_struct *p);
extern int task_nice( struct task_struct *p);
extern int can_nice( struct task_struct *p, int nice);
extern int task_curr( struct task_struct *p);
extern int idle_cpu(int cpu);
extern int sched_setscheduler(struct task_struct *, int,
         struct sched_param *);
extern int sched_setscheduler_nocheck(struct task_struct *, int,
          struct sched_param *);
extern struct task_struct *idle_task(int cpu);






static inline bool is_idle_task( struct task_struct *p)
{
 return p->pid == 0;
}
extern struct task_struct *curr_task(int cpu);
extern void set_curr_task(int cpu, struct task_struct *p);

void yield(void);




extern struct exec_domain default_exec_domain;

union thread_union {
 struct thread_info thread_info;
 unsigned long stack[(((1UL) << 12) << 1)/sizeof(long)];
};


static inline int kstack_end(void *addr)
{



 return !(((unsigned long)addr+sizeof(void*)-1) & ((((1UL) << 12) << 1)-sizeof(void*)));
}


extern union thread_union init_thread_union;
extern struct task_struct init_task;

extern struct mm_struct init_mm;

extern struct pid_namespace init_pid_ns;
extern struct task_struct *find_task_by_vpid(pid_t nr);
extern struct task_struct *find_task_by_pid_ns(pid_t nr,
  struct pid_namespace *ns);


extern struct user_struct * alloc_uid(kuid_t);
static inline struct user_struct *get_uid(struct user_struct *u)
{
 ;
 return u;
}
extern void free_uid(struct user_struct *);



extern void xtime_update(unsigned long ticks);

extern int wake_up_state(struct task_struct *tsk, unsigned int state);
extern int wake_up_process(struct task_struct *tsk);
extern void wake_up_new_task(struct task_struct *tsk);

 extern void kick_process(struct task_struct *tsk);



extern void sched_fork(unsigned long clone_flags, struct task_struct *p);
extern void sched_dead(struct task_struct *p);

extern void proc_caches_init(void);
extern void flush_signals(struct task_struct *);
extern void __flush_signals(struct task_struct *);
extern void ignore_signals(struct task_struct *);
extern void flush_signal_handlers(struct task_struct *, int force_default);
extern int dequeue_signal(struct task_struct *tsk, sigset_t *mask, siginfo_t *info);

static inline int dequeue_signal_lock(struct task_struct *tsk, sigset_t *mask, siginfo_t *info)
{
 unsigned long flags;
 int ret;

 ;
 ret = dequeue_signal(tsk, mask, info);
 ;

 return ret;
}

extern void block_all_signals(int (*notifier)(void *priv), void *priv,
         sigset_t *mask);
extern void unblock_all_signals(void);
extern void release_task(struct task_struct * p);
extern int send_sig_info(int, struct siginfo *, struct task_struct *);
extern int force_sigsegv(int, struct task_struct *);
extern int force_sig_info(int, struct siginfo *, struct task_struct *);
extern int __kill_pgrp_info(int sig, struct siginfo *info, struct pid *pgrp);
extern int kill_pid_info(int sig, struct siginfo *info, struct pid *pid);
extern int kill_pid_info_as_cred(int, struct siginfo *, struct pid *,
    struct cred *, u32);
extern int kill_pgrp(struct pid *pid, int sig, int priv);
extern int kill_pid(struct pid *pid, int sig, int priv);
extern int kill_proc_info(int, struct siginfo *, pid_t);
extern bool do_notify_parent(struct task_struct *, int);
extern void __wake_up_parent(struct task_struct *p, struct task_struct *parent);
extern void force_sig(int, struct task_struct *);
extern int send_sig(int, struct task_struct *, int);
extern int zap_other_threads(struct task_struct *p);
extern struct sigqueue *sigqueue_alloc(void);
extern void sigqueue_free(struct sigqueue *);
extern int send_sigqueue(struct sigqueue *, struct task_struct *, int group);
extern int do_sigaction(int, struct k_sigaction *, struct k_sigaction *);

static inline void restore_saved_sigmask(void)
{
 if (test_and_clear_restore_sigmask())
  __set_current_blocked(&get_current()->saved_sigmask);
}

static inline sigset_t *sigmask_to_save(void)
{
 sigset_t *res = &get_current()->blocked;
 if (__builtin_expect(!!(test_restore_sigmask()), 0))
  res = &get_current()->saved_sigmask;
 return res;
}

static inline int kill_cad_pid(int sig, int priv)
{
 return kill_pid(cad_pid, sig, priv);
}
static inline int on_sig_stack(unsigned long sp)
{




 return sp > get_current()->sas_ss_sp &&
  sp - get_current()->sas_ss_sp <= get_current()->sas_ss_size;

}

static inline int sas_ss_flags(unsigned long sp)
{
 return (get_current()->sas_ss_size == 0 ? 2
  : on_sig_stack(sp) ? 1 : 0);
}

static inline unsigned long sigsp(unsigned long sp, struct ksignal *ksig)
{
 if (__builtin_expect(!!((ksig->ka.sa.sa_flags & 0x08000000u)), 0) && ! sas_ss_flags(sp))



  return get_current()->sas_ss_sp + get_current()->sas_ss_size;

 return sp;
}




extern struct mm_struct * mm_alloc(void);


extern void __mmdrop(struct mm_struct *);
static inline void mmdrop(struct mm_struct * mm)
{
 if (__builtin_expect(!!(1), 0))
  __mmdrop(mm);
}


extern void mmput(struct mm_struct *);

extern struct mm_struct *get_task_mm(struct task_struct *task);





extern struct mm_struct *mm_access(struct task_struct *task, unsigned int mode);

extern void mm_release(struct task_struct *, struct mm_struct *);

extern struct mm_struct *dup_mm(struct task_struct *tsk);

extern int copy_thread(unsigned long, unsigned long, unsigned long,
   struct task_struct *);
extern void flush_thread(void);
extern void exit_thread(void);

extern void exit_files(struct task_struct *);
extern void __cleanup_sighand(struct sighand_struct *);

extern void exit_itimers(struct signal_struct *);
extern void flush_itimer_signals(void);

extern void do_group_exit(int);

extern int allow_signal(int);
extern int disallow_signal(int);

extern int do_execve( char *,
       char * *,
       char * *);
extern long do_fork(unsigned long, unsigned long, unsigned long, int *, int *);
struct task_struct *fork_idle(int);
extern pid_t kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);

extern void set_task_comm(struct task_struct *tsk, char *from);
extern char *get_task_comm(char *to, struct task_struct *tsk);


void scheduler_ipi(void);
extern unsigned long wait_task_inactive(struct task_struct *, long match_state);
extern bool current_is_single_threaded(void);
static inline int get_nr_threads(struct task_struct *tsk)
{
 return tsk->signal->nr_threads;
}

static inline bool thread_group_leader(struct task_struct *p)
{
 return p->exit_signal >= 0;
}







static inline bool has_group_leader_pid(struct task_struct *p)
{
 return task_pid(p) == p->signal->leader_pid;
}

static inline
bool same_thread_group(struct task_struct *p1, struct task_struct *p2)
{
 return p1->signal == p2->signal;
}

static inline struct task_struct *next_thread( struct task_struct *p)
{
 return ({typeof (*p->thread_group.next) *__ptr = (typeof (*p->thread_group.next) *)p->thread_group.next; ({ typeof( ((struct task_struct *)0)->thread_group ) *__mptr = ((typeof(p->thread_group.next))(__ptr)); (struct task_struct *)( (char *)__mptr - ((size_t) &((struct task_struct *)0)->thread_group) );}); })
                                          ;
}

static inline int thread_group_empty(struct task_struct *p)
{
 return list_empty(&p->thread_group);
}
static inline void threadgroup_change_begin(struct task_struct *tsk)
{
 ;
}
static inline void threadgroup_change_end(struct task_struct *tsk)
{
 ;
}
static inline void threadgroup_lock(struct task_struct *tsk)
{
 ;
}







static inline void threadgroup_unlock(struct task_struct *tsk)
{
 ;
}
static inline void setup_thread_stack(struct task_struct *p, struct task_struct *org)
{
 *((struct thread_info *)(p)->stack) = *((struct thread_info *)(org)->stack);
 ((struct thread_info *)(p)->stack)->task = p;
}

static inline unsigned long *end_of_stack(struct task_struct *p)
{
 return (unsigned long *)(((struct thread_info *)(p)->stack) + 1);
}



static inline int object_is_on_stack(void *obj)
{
 void *stack = ((get_current())->stack);

 return (obj >= stack) && (obj < (stack + (((1UL) << 12) << 1)));
}

extern void thread_info_cache_init(void);
static inline void set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline void clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline int test_and_set_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_set_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline int test_and_clear_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_and_clear_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline int test_tsk_thread_flag(struct task_struct *tsk, int flag)
{
 return test_ti_thread_flag(((struct thread_info *)(tsk)->stack), flag);
}

static inline void set_tsk_need_resched(struct task_struct *tsk)
{
 set_tsk_thread_flag(tsk,3);
}

static inline void clear_tsk_need_resched(struct task_struct *tsk)
{
 clear_tsk_thread_flag(tsk,3);
}

static inline int test_tsk_need_resched(struct task_struct *tsk)
{
 return __builtin_expect(!!(test_tsk_thread_flag(tsk,3)), 0);
}

static inline int restart_syscall(void)
{
 set_tsk_thread_flag(get_current(), 2);
 return -513;
}

static inline int signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(test_tsk_thread_flag(p,2)), 0);
}

static inline int __fatal_signal_pending(struct task_struct *p)
{
 return __builtin_expect(!!(sigismember(&p->pending.signal, 9)), 0);
}

static inline int fatal_signal_pending(struct task_struct *p)
{
 return signal_pending(p) && __fatal_signal_pending(p);
}

static inline int signal_pending_state(long state, struct task_struct *p)
{
 if (!(state & (1 | 128)))
  return 0;
 if (!signal_pending(p))
  return 0;

 return (state & 1) || __fatal_signal_pending(p);
}
extern int _cond_resched(void);






extern int __cond_resched_lock(spinlock_t *lock);
extern int __cond_resched_softirq(void);






static inline void cond_resched_rcu(void)
{

 ;
 ({ __might_sleep("../../libos/3.13.11/include/linux/sched.h", 2547, 0); _cond_resched(); });
 ;

}






static inline int spin_needbreak(spinlock_t *lock)
{



 return 0;

}
static inline int tsk_is_polling(struct task_struct *p)
{
 return ((struct thread_info *)(p)->stack)->status & 0x0004;
}
static inline void __current_set_polling(void)
{
 current_thread_info()->status |= 0x0004;
}

static inline bool current_set_polling_and_test(void)
{
 __current_set_polling();





 asm ("mfence":::"memory");

 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}

static inline void __current_clr_polling(void)
{
 current_thread_info()->status &= ~0x0004;
}

static inline bool current_clr_polling_and_test(void)
{
 __current_clr_polling();





 asm ("mfence":::"memory");

 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}
static inline __attribute__((always_inline)) bool need_resched(void)
{
 return __builtin_expect(!!(test_ti_thread_flag(current_thread_info(), 3)), 0);
}




void thread_group_cputime(struct task_struct *tsk, struct task_cputime *times);
void thread_group_cputimer(struct task_struct *tsk, struct task_cputime *times);

static inline void thread_group_cputime_init(struct signal_struct *sig)
{
 ;
}







extern void recalc_sigpending_and_wake(struct task_struct *t);
extern void recalc_sigpending(void);

extern void signal_wake_up_state(struct task_struct *t, unsigned int state);

static inline void signal_wake_up(struct task_struct *t, bool resume)
{
 signal_wake_up_state(t, resume ? 128 : 0);
}
static inline void ptrace_signal_wake_up(struct task_struct *t, bool resume)
{
 signal_wake_up_state(t, resume ? 8 : 0);
}






static inline unsigned int task_cpu( struct task_struct *p)
{
 return ((struct thread_info *)(p)->stack)->cpu;
}

static inline int task_node( struct task_struct *p)
{
 return cpu_to_node(task_cpu(p));
}

extern void set_task_cpu(struct task_struct *p, unsigned int cpu);
extern long sched_setaffinity(pid_t pid, struct cpumask *new_mask);
extern long sched_getaffinity(pid_t pid, struct cpumask *mask);


extern struct task_group root_task_group;


extern int task_can_switch_user(struct user_struct *up,
     struct task_struct *tsk);


static inline void add_rchar(struct task_struct *tsk, ssize_t amt)
{
 tsk->ioac.rchar += amt;
}

static inline void add_wchar(struct task_struct *tsk, ssize_t amt)
{
 tsk->ioac.wchar += amt;
}

static inline void inc_syscr(struct task_struct *tsk)
{
 tsk->ioac.syscr++;
}

static inline void inc_syscw(struct task_struct *tsk)
{
 tsk->ioac.syscw++;
}
extern void mm_update_next_owner(struct mm_struct *mm);
extern void mm_init_owner(struct mm_struct *mm, struct task_struct *p);
static inline unsigned long task_rlimit( struct task_struct *tsk,
  unsigned int limit)
{
 return (tsk->signal->rlim[limit].rlim_cur);
}

static inline unsigned long task_rlimit_max( struct task_struct *tsk,
  unsigned int limit)
{
 return (tsk->signal->rlim[limit].rlim_max);
}




static inline unsigned long _rlimit(unsigned int limit)

{
 return task_rlimit(get_current(), limit);
}

static inline unsigned long rlimit_max(unsigned int limit)
{
 return task_rlimit_max(get_current(), limit);
}







struct ptrace_peeksiginfo_args {
 __u64 off;
 __u32 flags;
 __s32 nr;
};
extern long arch_ptrace(struct task_struct *child, long request,
   unsigned long addr, unsigned long data);
extern int ptrace_readdata(struct task_struct *tsk, unsigned long src, char *dst, int len);
extern int ptrace_writedata(struct task_struct *tsk, char *src, unsigned long dst, int len);
extern void ptrace_disable(struct task_struct *);
extern int ptrace_request(struct task_struct *child, long request,
     unsigned long addr, unsigned long data);
extern void ptrace_notify(int exit_code);
extern void __ptrace_link(struct task_struct *child,
     struct task_struct *new_parent);
extern void __ptrace_unlink(struct task_struct *child);
extern void exit_ptrace(struct task_struct *tracer);
static inline int ptrace_reparented(struct task_struct *child)
{
 return !same_thread_group(child->real_parent, child->parent);
}

static inline void ptrace_unlink(struct task_struct *child)
{
 if (__builtin_expect(!!(child->ptrace), 0))
  __ptrace_unlink(child);
}

int generic_ptrace_peekdata(struct task_struct *tsk, unsigned long addr,
       unsigned long data);
int generic_ptrace_pokedata(struct task_struct *tsk, unsigned long addr,
       unsigned long data);
static inline struct task_struct *ptrace_parent(struct task_struct *task)
{
 if (__builtin_expect(!!(task->ptrace), 0))
  return (task->parent);
 return 0;
}
static inline bool ptrace_event_enabled(struct task_struct *task, int event)
{
 return task->ptrace & (1 << (3 + (event)));
}
static inline void ptrace_event(int event, unsigned long message)
{
 if (__builtin_expect(!!(ptrace_event_enabled(get_current(), event)), 0)) {
  get_current()->ptrace_message = message;
  ptrace_notify((event << 8) | 5);
 } else if (event == 4) {

  if ((get_current()->ptrace & (0x00000001|0x00010000)) == 0x00000001)
   send_sig(5, get_current(), 0);
 }
}
static inline void ptrace_init_task(struct task_struct *child, bool ptrace)
{
 INIT_LIST_HEAD(&child->ptrace_entry);
 INIT_LIST_HEAD(&child->ptraced);
 child->jobctl = 0;
 child->ptrace = 0;
 child->parent = child->real_parent;

 if (__builtin_expect(!!(ptrace), 0) && get_current()->ptrace) {
  child->ptrace = get_current()->ptrace;
  __ptrace_link(child, get_current()->parent);

  if (child->ptrace & 0x00010000)
   task_set_jobctl_pending(child, (1 << 19));
  else
   sigaddset(&child->pending.signal, 19);

  set_tsk_thread_flag(child, 2);
 }
}







static inline void ptrace_release_task(struct task_struct *task)
{
 (!list_empty(&task->ptraced));
 ptrace_unlink(task);
 (!list_empty(&task->ptrace_entry));
}
extern void user_enable_single_step(struct task_struct *);
extern void user_disable_single_step(struct task_struct *);
extern void user_enable_block_step(struct task_struct *);



extern void user_single_step_siginfo(struct task_struct *tsk,
    struct pt_regs *regs, siginfo_t *info);
extern int task_current_syscall(struct task_struct *target, long *callno,
    unsigned long args[6], unsigned int maxargs,
    unsigned long *sp, unsigned long *pc);
enum {
 Audit_equal,
 Audit_not_equal,
 Audit_bitmask,
 Audit_bittest,
 Audit_lt,
 Audit_gt,
 Audit_le,
 Audit_ge,
 Audit_bad
};
struct audit_status {
 __u32 mask;
 __u32 enabled;
 __u32 failure;
 __u32 pid;
 __u32 rate_limit;
 __u32 backlog_limit;
 __u32 lost;
 __u32 backlog;
};

struct audit_features {

 __u32 vers;
 __u32 mask;
 __u32 features;
 __u32 lock;
};
struct audit_tty_status {
 __u32 enabled;
 __u32 log_passwd;
};







struct audit_rule_data {
 __u32 flags;
 __u32 action;
 __u32 field_count;
 __u32 mask[64];
 __u32 fields[64];
 __u32 values[64];
 __u32 fieldflags[64];
 __u32 buflen;
 char buf[0];
};





struct audit_rule {
 __u32 flags;
 __u32 action;
 __u32 field_count;
 __u32 mask[64];
 __u32 fields[64];
 __u32 values[64];
};

struct audit_sig_info {
 uid_t uid;
 pid_t pid;
 char ctx[0];
};

struct audit_buffer;
struct audit_context;
struct inode;
struct netlink_skb_parms;
struct path;
struct linux_binprm;
struct mq_attr;
struct mqstat;
struct audit_watch;
struct audit_tree;

struct audit_krule {
 int vers_ops;
 u32 flags;
 u32 listnr;
 u32 action;
 u32 mask[64];
 u32 buflen;
 u32 field_count;
 char *filterkey;
 struct audit_field *fields;
 struct audit_field *arch_f;
 struct audit_field *inode_f;
 struct audit_watch *watch;
 struct audit_tree *tree;
 struct list_head rlist;
 struct list_head list;
 u64 prio;
};

struct audit_field {
 u32 type;
 u32 val;
 kuid_t uid;
 kgid_t gid;
 u32 op;
 char *lsm_str;
 void *lsm_rule;
};

extern int is_audit_feature_set(int which);

extern int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) audit_register_class(int _class, unsigned *list);
extern int audit_classify_syscall(int abi, unsigned syscall);
extern int audit_classify_arch(int arch);
struct filename;

extern void audit_log_session_info(struct audit_buffer *ab);




extern int audit_alloc(struct task_struct *task);
extern void __audit_free(struct task_struct *task);
extern void __audit_syscall_entry(int arch,
      int major, unsigned long a0, unsigned long a1,
      unsigned long a2, unsigned long a3);
extern void __audit_syscall_exit(int ret_success, long ret_value);
extern struct filename *__audit_reusename( char *uptr);
extern void __audit_getname(struct filename *name);
extern void audit_putname(struct filename *name);



extern void __audit_inode(struct filename *name, struct dentry *dentry,
    unsigned int flags);
extern void __audit_inode_child( struct inode *parent,
    struct dentry *dentry,
    unsigned char type);
extern void __audit_seccomp(unsigned long syscall, long signr, int code);
extern void __audit_ptrace(struct task_struct *t);

static inline int audit_dummy_context(void)
{
 void *p = get_current()->audit_context;
 return !p || *(int *)p;
}
static inline void audit_free(struct task_struct *task)
{
 if (__builtin_expect(!!(task->audit_context), 0))
  __audit_free(task);
}
static inline void audit_syscall_entry(int arch, int major, unsigned long a0,
           unsigned long a1, unsigned long a2,
           unsigned long a3)
{
 if (__builtin_expect(!!(get_current()->audit_context), 0))
  __audit_syscall_entry(arch, major, a0, a1, a2, a3);
}
static inline void audit_syscall_exit(void *pt_regs)
{
 if (__builtin_expect(!!(get_current()->audit_context), 0)) {




  int success = (!__builtin_expect(!!(((unsigned long)(regs_return_value((struct pt_regs *)pt_regs))) >= (unsigned long)-4095), 0));
  long return_code = regs_return_value((struct pt_regs *)pt_regs);


  __audit_syscall_exit(success, return_code);
 }
}
static inline struct filename *audit_reusename( char *name)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  return __audit_reusename(name);
 return 0;
}
static inline void audit_getname(struct filename *name)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_getname(name);
}
static inline void audit_inode(struct filename *name,
    struct dentry *dentry,
    unsigned int parent) {
 if (__builtin_expect(!!(!audit_dummy_context()), 0)) {
  unsigned int flags = 0;
  if (parent)
   flags |= 1;
  __audit_inode(name, dentry, flags);
 }
}
static inline void audit_inode_parent_hidden(struct filename *name,
      struct dentry *dentry)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_inode(name, dentry,
    1 | 2);
}
static inline void audit_inode_child( struct inode *parent,
         struct dentry *dentry,
         unsigned char type) {
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_inode_child(parent, dentry, type);
}
void audit_core_dumps(long signr);

static inline void audit_seccomp(unsigned long syscall, long signr, int code)
{

 if (signr || __builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_seccomp(syscall, signr, code);
}

static inline void audit_ptrace(struct task_struct *t)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_ptrace(t);
}


extern unsigned int audit_serial(void);
extern int auditsc_get_stamp(struct audit_context *ctx,
         struct timespec *t, unsigned int *serial);
extern int audit_set_loginuid(kuid_t loginuid);

static inline kuid_t audit_get_loginuid(struct task_struct *tsk)
{
 return tsk->loginuid;
}

static inline int audit_get_sessionid(struct task_struct *tsk)
{
 return tsk->sessionid;
}

extern void __audit_ipc_obj(struct kern_ipc_perm *ipcp);
extern void __audit_ipc_set_perm(unsigned long qbytes, uid_t uid, gid_t gid, umode_t mode);
extern void __audit_bprm(struct linux_binprm *bprm);
extern int __audit_socketcall(int nargs, unsigned long *args);
extern int __audit_sockaddr(int len, void *addr);
extern void __audit_fd_pair(int fd1, int fd2);
extern void __audit_mq_open(int oflag, umode_t mode, struct mq_attr *attr);
extern void __audit_mq_sendrecv(mqd_t mqdes, size_t msg_len, unsigned int msg_prio, struct timespec *abs_timeout);
extern void __audit_mq_notify(mqd_t mqdes, struct sigevent *notification);
extern void __audit_mq_getsetattr(mqd_t mqdes, struct mq_attr *mqstat);
extern int __audit_log_bprm_fcaps(struct linux_binprm *bprm,
      struct cred *_new,
      struct cred *old);
extern void __audit_log_capset(pid_t pid, struct cred *_new, struct cred *old);
extern void __audit_mmap_fd(int fd, int flags);

static inline void audit_ipc_obj(struct kern_ipc_perm *ipcp)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_ipc_obj(ipcp);
}
static inline void audit_fd_pair(int fd1, int fd2)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_fd_pair(fd1, fd2);
}
static inline void audit_ipc_set_perm(unsigned long qbytes, uid_t uid, gid_t gid, umode_t mode)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_ipc_set_perm(qbytes, uid, gid, mode);
}
static inline void audit_bprm(struct linux_binprm *bprm)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_bprm(bprm);
}
static inline int audit_socketcall(int nargs, unsigned long *args)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  return __audit_socketcall(nargs, args);
 return 0;
}
static inline int audit_sockaddr(int len, void *addr)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  return __audit_sockaddr(len, addr);
 return 0;
}
static inline void audit_mq_open(int oflag, umode_t mode, struct mq_attr *attr)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_mq_open(oflag, mode, attr);
}
static inline void audit_mq_sendrecv(mqd_t mqdes, size_t msg_len, unsigned int msg_prio, struct timespec *abs_timeout)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_mq_sendrecv(mqdes, msg_len, msg_prio, abs_timeout);
}
static inline void audit_mq_notify(mqd_t mqdes, struct sigevent *notification)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_mq_notify(mqdes, notification);
}
static inline void audit_mq_getsetattr(mqd_t mqdes, struct mq_attr *mqstat)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_mq_getsetattr(mqdes, mqstat);
}

static inline int audit_log_bprm_fcaps(struct linux_binprm *bprm,
           struct cred *_new,
           struct cred *old)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  return __audit_log_bprm_fcaps(bprm, _new, old);
 return 0;
}

static inline void audit_log_capset(pid_t pid, struct cred *_new,
       struct cred *old)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_log_capset(pid, _new, old);
}

static inline void audit_mmap_fd(int fd, int flags)
{
 if (__builtin_expect(!!(!audit_dummy_context()), 0))
  __audit_mmap_fd(fd, flags);
}

extern int audit_n_rules;
extern int audit_signals;
static inline bool audit_loginuid_set(struct task_struct *tsk)
{
 return uid_valid(audit_get_loginuid(tsk));
}




extern __attribute__((format(printf, 4, 5)))
void audit_log(struct audit_context *ctx, gfp_t gfp_mask, int type,
        char *fmt, ...);

extern struct audit_buffer *audit_log_start(struct audit_context *ctx, gfp_t gfp_mask, int type);
extern __attribute__((format(printf, 2, 3)))
void audit_log_format(struct audit_buffer *ab, char *fmt, ...);
extern void audit_log_end(struct audit_buffer *ab);
extern int audit_string_contains_control( char *string,
         size_t len);
extern void audit_log_n_hex(struct audit_buffer *ab,
       unsigned char *buf,
       size_t len);
extern void audit_log_n_string(struct audit_buffer *ab,
            char *buf,
            size_t n);
extern void audit_log_n_untrustedstring(struct audit_buffer *ab,
       char *string,
       size_t n);
extern void audit_log_untrustedstring(struct audit_buffer *ab,
            char *string);
extern void audit_log_d_path(struct audit_buffer *ab,
          char *prefix,
          struct path *path);
extern void audit_log_key(struct audit_buffer *ab,
       char *key);
extern void audit_log_link_denied( char *operation,
        struct path *link);
extern void audit_log_lost( char *message);

extern void audit_log_secctx(struct audit_buffer *ab, u32 secid);





extern int audit_log_task_context(struct audit_buffer *ab);
extern void audit_log_task_info(struct audit_buffer *ab,
    struct task_struct *tsk);

extern int audit_update_lsm_rules(void);


extern int audit_filter_user(int type);
extern int audit_filter_type(int type);
extern int audit_receive_filter(int type, int pid, int seq,
    void *data, size_t datasz);
extern int audit_enabled;
static inline void audit_log_string(struct audit_buffer *ab, char *buf)
{
 audit_log_n_string(ab, buf, strlen(buf));
}








struct task_struct;

extern int debug_locks;
extern int debug_locks_silent;


static inline int __debug_locks_off(void)
{
 return ({ __typeof__ (*((&debug_locks))) __ret = ((0)); switch (sizeof(*((&debug_locks)))) { case 1: asm ("" "xchg" "b %b0, %1\n" : "+q" (__ret), "+m" (*((&debug_locks))) : : "memory", "cc"); break; case 2: asm ("" "xchg" "w %w0, %1\n" : "+r" (__ret), "+m" (*((&debug_locks))) : : "memory", "cc"); break; case 4: asm ("" "xchg" "l %0, %1\n" : "+r" (__ret), "+m" (*((&debug_locks))) : : "memory", "cc"); break; case 8: asm ("" "xchg" "q %q0, %1\n" : "+r" (__ret), "+m" (*((&debug_locks))) : : "memory", "cc"); break; default: __xchg_wrong_size(); } __ret; });
}




extern int debug_locks_off(void);
struct task_struct;







static inline void debug_show_all_locks(void)
{
}

static inline void debug_show_held_locks(struct task_struct *task)
{
}

static inline void
debug_check_no_locks_freed( void *from, unsigned long len)
{
}

static inline void
debug_check_no_locks_held(void)
{
}



static inline void bit_spin_lock(int bitnum, unsigned long *addr)
{







 __asm__ __volatile__("": : :"memory");

 while (__builtin_expect(!!(test_and_set_bit_lock(bitnum, addr)), 0)) {
  __asm__ __volatile__("": : :"memory");
  do {
   cpu_relax();
  } while ((__builtin_constant_p((bitnum)) ? constant_test_bit((bitnum), (addr)) : variable_test_bit((bitnum), (addr))));
  __asm__ __volatile__("": : :"memory");
 }

 (void)0;
}




static inline int bit_spin_trylock(int bitnum, unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");

 if (__builtin_expect(!!(test_and_set_bit_lock(bitnum, addr)), 0)) {
  __asm__ __volatile__("": : :"memory");
  return 0;
 }

 (void)0;
 return 1;
}




static inline void bit_spin_unlock(int bitnum, unsigned long *addr)
{




 clear_bit_unlock(bitnum, addr);

 __asm__ __volatile__("": : :"memory");
 (void)0;
}






static inline void __bit_spin_unlock(int bitnum, unsigned long *addr)
{




 __clear_bit_unlock(bitnum, addr);

 __asm__ __volatile__("": : :"memory");
 (void)0;
}




static inline int bit_spin_is_locked(int bitnum, unsigned long *addr)
{

 return (__builtin_constant_p((bitnum)) ? constant_test_bit((bitnum), (addr)) : variable_test_bit((bitnum), (addr)));





}
struct shrink_control {
 gfp_t gfp_mask;






 unsigned long nr_to_scan;


 nodemask_t nodes_to_scan;

 int nid;
};
struct shrinker {
 unsigned long (*count_objects)(struct shrinker *,
           struct shrink_control *sc);
 unsigned long (*scan_objects)(struct shrinker *,
          struct shrink_control *sc);

 int seeks;
 long batch;
 unsigned long flags;


 struct list_head list;

 atomic_long_t *nr_deferred;
};





extern int register_shrinker(struct shrinker *);
extern void unregister_shrinker(struct shrinker *);












struct hlist_bl_head {
 struct hlist_bl_node *first;
};

struct hlist_bl_node {
 struct hlist_bl_node *next, **pprev;
};



static inline void INIT_HLIST_BL_NODE(struct hlist_bl_node *h)
{
 h->next = 0;
 h->pprev = 0;
}



static inline int hlist_bl_unhashed( struct hlist_bl_node *h)
{
 return !h->pprev;
}

static inline struct hlist_bl_node *hlist_bl_first(struct hlist_bl_head *h)
{
 return (struct hlist_bl_node *)
  ((unsigned long)h->first & ~1UL);
}

static inline void hlist_bl_set_first(struct hlist_bl_head *h,
     struct hlist_bl_node *n)
{
 ;

                        ;
 h->first = (struct hlist_bl_node *)((unsigned long)n | 1UL);
}

static inline int hlist_bl_empty( struct hlist_bl_head *h)
{
 return !((unsigned long)h->first & ~1UL);
}

static inline void hlist_bl_add_head(struct hlist_bl_node *n,
     struct hlist_bl_head *h)
{
 struct hlist_bl_node *first = hlist_bl_first(h);

 n->next = first;
 if (first)
  first->pprev = &n->next;
 n->pprev = &h->first;
 hlist_bl_set_first(h, n);
}

static inline void __hlist_bl_del(struct hlist_bl_node *n)
{
 struct hlist_bl_node *next = n->next;
 struct hlist_bl_node **pprev = n->pprev;

 ;


 *pprev = (struct hlist_bl_node *)
   ((unsigned long)next |
    ((unsigned long)*pprev & 1UL));
 if (next)
  next->pprev = pprev;
}

static inline void hlist_bl_del(struct hlist_bl_node *n)
{
 __hlist_bl_del(n);
 n->next = ((void *) 0x00100100 + (0xdead000000000000UL));
 n->pprev = ((void *) 0x00200200 + (0xdead000000000000UL));
}

static inline void hlist_bl_del_init(struct hlist_bl_node *n)
{
 if (!hlist_bl_unhashed(n)) {
  __hlist_bl_del(n);
  INIT_HLIST_BL_NODE(n);
 }
}

static inline void hlist_bl_lock(struct hlist_bl_head *b)
{
 bit_spin_lock(0, (unsigned long *)b);
}

static inline void hlist_bl_unlock(struct hlist_bl_head *b)
{
 __bit_spin_unlock(0, (unsigned long *)b);
}

static inline bool hlist_bl_is_locked(struct hlist_bl_head *b)
{
 return bit_spin_is_locked(0, (unsigned long *)b);
}


static inline void hlist_bl_set_first_rcu(struct hlist_bl_head *h,
     struct hlist_bl_node *n)
{
 ;

                        ;
 ({ (h->first) = ((struct hlist_bl_node *)((unsigned long)n | 1UL)); })
                                                                ;
}

static inline struct hlist_bl_node *hlist_bl_first_rcu(struct hlist_bl_head *h)
{
 return (struct hlist_bl_node *)
  ((unsigned long)(h->first) & ~1UL);
}
static inline void hlist_bl_del_init_rcu(struct hlist_bl_node *n)
{
 if (!hlist_bl_unhashed(n)) {
  __hlist_bl_del(n);
  n->pprev = 0;
 }
}
static inline void hlist_bl_del_rcu(struct hlist_bl_node *n)
{
 __hlist_bl_del(n);
 n->pprev = ((void *) 0x00200200 + (0xdead000000000000UL));
}
static inline void hlist_bl_add_head_rcu(struct hlist_bl_node *n,
     struct hlist_bl_head *h)
{
 struct hlist_bl_node *first;


 first = hlist_bl_first(h);

 n->next = first;
 if (first)
  first->pprev = &n->next;
 n->pprev = &h->first;


 hlist_bl_set_first_rcu(h, n);
}




struct lockref {
 union {

  __u64 __attribute__((aligned(8))) lock_count;

  struct {
   spinlock_t lock;
   unsigned int count;
  };
 };
};

extern void lockref_get(struct lockref *);
extern int lockref_get_not_zero(struct lockref *);
extern int lockref_get_or_lock(struct lockref *);
extern int lockref_put_or_lock(struct lockref *);

extern void lockref_mark_dead(struct lockref *);
extern int lockref_get_not_dead(struct lockref *);


static inline int __lockref_is_dead( struct lockref *l)
{
 return ((int)l->count < 0);
}

struct nameidata;
struct path;
struct vfsmount;
struct qstr {
 union {
  struct {
   u32 hash; u32 len;;
  };
  u64 hash_len;
 };
 unsigned char *name;
};





struct dentry_stat_t {
 long nr_dentry;
 long nr_unused;
 long age_limit;
 long want_pages;
 long dummy[2];
};
extern struct dentry_stat_t dentry_stat;






static inline unsigned long
partial_name_hash(unsigned long c, unsigned long prevhash)
{
 return (prevhash + (c << 4) + (c >> 4)) * 11;
}





static inline unsigned long end_name_hash(unsigned long hash)
{
 return (unsigned int) hash;
}


extern unsigned int full_name_hash( unsigned char *, unsigned int);
struct dentry {

 unsigned int d_flags;
 seqcount_t d_seq;
 struct hlist_bl_node d_hash;
 struct dentry *d_parent;
 struct qstr d_name;
 struct inode *d_inode;

 unsigned char d_iname[32];


 struct lockref d_lockref;
 struct dentry_operations *d_op;
 struct super_block *d_sb;
 unsigned long d_time;
 void *d_fsdata;

 struct list_head d_lru;






 union _d_u {

  struct list_head d_child;
   struct callback_head d_rcu;
 } d_u;
 struct list_head d_subdirs;
 struct hlist_node d_alias;
};







enum dentry_d_lock_class
{
 DENTRY_D_LOCK_NORMAL,
 DENTRY_D_LOCK_NESTED
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, unsigned int);
 int (*d_weak_revalidate)(struct dentry *, unsigned int);
 int (*d_hash)( struct dentry *, struct qstr *);
 int (*d_compare)( struct dentry *, struct dentry *,
   unsigned int, char *, struct qstr *);
 int (*d_delete)( struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_prune)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
 char *(*d_dname)(struct dentry *, char *, int);
 struct vfsmount *(*d_automount)(struct path *);
 int (*d_manage)(struct dentry *, bool);
} __attribute__((__aligned__((1 << (6)))));
extern seqlock_t rename_lock;

static inline int dname_external( struct dentry *dentry)
{
 return dentry->d_name.name != dentry->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern struct dentry * d_instantiate_unique(struct dentry *, struct inode *);
extern struct dentry * d_materialise_unique(struct dentry *, struct inode *);
extern int d_instantiate_no_diralias(struct dentry *, struct inode *);
extern void __d_drop(struct dentry *dentry);
extern void d_drop(struct dentry *dentry);
extern void d_delete(struct dentry *);
extern void d_set_d_op(struct dentry *dentry, struct dentry_operations *op);


extern struct dentry * d_alloc(struct dentry *, struct qstr *);
extern struct dentry * d_alloc_pseudo(struct super_block *, struct qstr *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern struct dentry * d_add_ci(struct dentry *, struct inode *, struct qstr *);
extern struct dentry *d_find_any_alias(struct inode *inode);
extern struct dentry * d_obtain_alias(struct inode *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern void shrink_dcache_for_umount(struct super_block *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_make_root(struct inode *);


extern void d_genocide(struct dentry *);

extern void d_tmpfile(struct dentry *, struct inode *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);
extern int check_submounts_and_drop(struct dentry *);




extern void d_rehash(struct dentry *);
static inline void d_add(struct dentry *entry, struct inode *inode)
{
 d_instantiate(entry, inode);
 d_rehash(entry);
}
static inline struct dentry *d_add_unique(struct dentry *entry, struct inode *inode)
{
 struct dentry *res;

 res = d_instantiate_unique(entry, inode);
 d_rehash(res != 0 ? res : entry);
 return res;
}

extern void dentry_update_name_case(struct dentry *, struct qstr *);


extern void d_move(struct dentry *, struct dentry *);
extern struct dentry *d_ancestor(struct dentry *, struct dentry *);


extern struct dentry *d_lookup( struct dentry *, struct qstr *);
extern struct dentry *d_hash_and_lookup(struct dentry *, struct qstr *);
extern struct dentry *__d_lookup( struct dentry *, struct qstr *);
extern struct dentry *__d_lookup_rcu( struct dentry *parent,
    struct qstr *name, unsigned *seq);

static inline unsigned d_count( struct dentry *dentry)
{
 return dentry->d_lockref.count;
}


extern int d_validate(struct dentry *, struct dentry *);




extern char *dynamic_dname(struct dentry *, char *, int, char *, ...);
extern char *simple_dname(struct dentry *, char *, int);

extern char *__d_path( struct path *, struct path *, char *, int);
extern char *d_absolute_path( struct path *, char *, int);
extern char *d_path( struct path *, char *, int);
extern char *dentry_path_raw(struct dentry *, char *, int);
extern char *dentry_path(struct dentry *, char *, int);
static inline struct dentry *dget_dlock(struct dentry *dentry)
{
 if (dentry)
  dentry->d_lockref.count++;
 return dentry;
}

static inline struct dentry *dget(struct dentry *dentry)
{
 if (dentry)
  lockref_get(&dentry->d_lockref);
 return dentry;
}

extern struct dentry *dget_parent(struct dentry *dentry);
static inline int d_unhashed( struct dentry *dentry)
{
 return hlist_bl_unhashed(&dentry->d_hash);
}

static inline int d_unlinked( struct dentry *dentry)
{
 return d_unhashed(dentry) && !((dentry) == (dentry)->d_parent);
}

static inline int cant_mount( struct dentry *dentry)
{
 return (dentry->d_flags & 0x00000100);
}

static inline void dont_mount(struct dentry *dentry)
{
 ;
 dentry->d_flags |= 0x00000100;
 ;
}

extern void dput(struct dentry *);

static inline bool d_managed( struct dentry *dentry)
{
 return dentry->d_flags & (0x00010000|0x00020000|0x00040000);
}

static inline bool d_mountpoint( struct dentry *dentry)
{
 return dentry->d_flags & 0x00010000;
}




static inline void __d_set_type(struct dentry *dentry, unsigned type)
{
 dentry->d_flags = (dentry->d_flags & ~0x00700000) | type;
}

static inline void __d_clear_type(struct dentry *dentry)
{
 __d_set_type(dentry, 0x00000000);
}

static inline void d_set_type(struct dentry *dentry, unsigned type)
{
 ;
 __d_set_type(dentry, type);
 ;
}

static inline unsigned __d_entry_type( struct dentry *dentry)
{
 return dentry->d_flags & 0x00700000;
}

static inline bool d_is_directory( struct dentry *dentry)
{
 return __d_entry_type(dentry) == 0x00100000;
}

static inline bool d_is_autodir( struct dentry *dentry)
{
 return __d_entry_type(dentry) == 0x00200000;
}

static inline bool d_is_symlink( struct dentry *dentry)
{
 return __d_entry_type(dentry) == 0x00300000;
}

static inline bool d_is_file( struct dentry *dentry)
{
 return __d_entry_type(dentry) == 0x00400000;
}

static inline bool d_is_negative( struct dentry *dentry)
{
 return __d_entry_type(dentry) == 0x00000000;
}

static inline bool d_is_positive( struct dentry *dentry)
{
 return !d_is_negative(dentry);
}

extern int sysctl_vfs_cache_pressure;

static inline unsigned long vfs_pressure_ratio(unsigned long val)
{
 return ( { typeof(val) quot = (val) / (100); typeof(val) rem = (val) % (100); (quot * (sysctl_vfs_cache_pressure)) + ((rem * (sysctl_vfs_cache_pressure)) / (100)); } );
}
struct file;

extern void fput(struct file *);

struct file_operations;
struct vfsmount;
struct dentry;
struct path;
extern struct file *alloc_file(struct path *, fmode_t mode,
 struct file_operations *fop);

static inline void fput_light(struct file *file, int fput_needed)
{
 if (fput_needed)
  fput(file);
}

struct fd {
 struct file *file;
 int need_put;
};

static inline void fdput(struct fd fd)
{
 if (fd.need_put)
  fput(fd.file);
}

extern struct file *fget(unsigned int fd);
extern struct file *fget_light(unsigned int fd, int *fput_needed);

static inline struct fd fdget(unsigned int fd)
{
 int b;
 struct file *f = fget_light(fd, &b);
 return (struct fd){f,b};
}

extern struct file *fget_raw(unsigned int fd);
extern struct file *fget_raw_light(unsigned int fd, int *fput_needed);

static inline struct fd fdget_raw(unsigned int fd)
{
 int b;
 struct file *f = fget_raw_light(fd, &b);
 return (struct fd){f,b};
}

extern int f_dupfd(unsigned int from, struct file *file, unsigned flags);
extern int replace_fd(unsigned fd, struct file *file, unsigned flags);
extern void set_close_on_exec(unsigned int fd, int flag);
extern bool get_close_on_exec(unsigned int fd);
extern void put_filp(struct file *);
extern int get_unused_fd_flags(unsigned flags);

extern void put_unused_fd(unsigned int fd);

extern void fd_install(unsigned int fd, struct file *file);

extern void flush_delayed_fput(void);
extern void __fput_sync(struct file *);









static inline int old_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < 256 && ((unsigned int) ((dev) & ((1U << 20) - 1))) < 256;
}

static inline u16 old_encode_dev(dev_t dev)
{
 return (((unsigned int) ((dev) >> 20)) << 8) | ((unsigned int) ((dev) & ((1U << 20) - 1)));
}

static inline dev_t old_decode_dev(u16 val)
{
 return ((((val >> 8) & 255) << 20) | (val & 255));
}

static inline int new_valid_dev(dev_t dev)
{
 return 1;
}

static inline u32 new_encode_dev(dev_t dev)
{
 unsigned major = ((unsigned int) ((dev) >> 20));
 unsigned minor = ((unsigned int) ((dev) & ((1U << 20) - 1)));
 return (minor & 0xff) | (major << 8) | ((minor & ~0xff) << 12);
}

static inline dev_t new_decode_dev(u32 dev)
{
 unsigned major = (dev & 0xfff00) >> 8;
 unsigned minor = (dev & 0xff) | ((dev >> 12) & 0xfff00);
 return (((major) << 20) | (minor));
}

static inline int huge_valid_dev(dev_t dev)
{
 return 1;
}

static inline u64 huge_encode_dev(dev_t dev)
{
 return new_encode_dev(dev);
}

static inline dev_t huge_decode_dev(u64 dev)
{
 return new_decode_dev(dev);
}

static inline int sysv_valid_dev(dev_t dev)
{
 return ((unsigned int) ((dev) >> 20)) < (1<<14) && ((unsigned int) ((dev) & ((1U << 20) - 1))) < (1<<18);
}

static inline u32 sysv_encode_dev(dev_t dev)
{
 return ((unsigned int) ((dev) & ((1U << 20) - 1))) | (((unsigned int) ((dev) >> 20)) << 18);
}

static inline unsigned sysv_major(u32 dev)
{
 return (dev >> 18) & 0x3fff;
}

static inline unsigned sysv_minor(u32 dev)
{
 return dev & 0x3ffff;
}




struct dentry;
struct vfsmount;

struct path {
 struct vfsmount *mnt;
 struct dentry *dentry;
};
static inline int path_equal( struct path *path1, struct path *path2)
{
 return path1->mnt == path2->mnt && path1->dentry == path2->dentry;
}




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


enum lru_status {
 LRU_REMOVED,
 LRU_ROTATE,
 LRU_SKIP,
 LRU_RETRY,

};

struct list_lru_node {
 spinlock_t lock;
 struct list_head list;

 long nr_items;
} __attribute__((__aligned__((1 << (6)))));

struct list_lru {
 struct list_lru_node *node;
 nodemask_t active_nodes;
};

void list_lru_destroy(struct list_lru *lru);
int list_lru_init(struct list_lru *lru);
bool list_lru_add(struct list_lru *lru, struct list_head *item);
bool list_lru_del(struct list_lru *lru, struct list_head *item);
unsigned long list_lru_count_node(struct list_lru *lru, int nid);
static inline unsigned long list_lru_count(struct list_lru *lru)
{
 long count = 0;
 int nid;

 for ((nid) = __first_node(&(lru->active_nodes)); (nid) < (1 << 6); (nid) = __next_node(((nid)), &((lru->active_nodes))))
  count += list_lru_count_node(lru, nid);

 return count;
}

typedef enum lru_status
(*list_lru_walk_cb)(struct list_head *item, spinlock_t *lock, void *cb_arg);
unsigned long list_lru_walk_node(struct list_lru *lru, int nid,
     list_lru_walk_cb isolate, void *cb_arg,
     unsigned long *nr_to_walk);

static inline unsigned long
list_lru_walk(struct list_lru *lru, list_lru_walk_cb isolate,
       void *cb_arg, unsigned long nr_to_walk)
{
 long isolated = 0;
 int nid;

 for ((nid) = __first_node(&(lru->active_nodes)); (nid) < (1 << 6); (nid) = __next_node(((nid)), &((lru->active_nodes)))) {
  isolated += list_lru_walk_node(lru, nid, isolate,
            cb_arg, &nr_to_walk);
  if (nr_to_walk <= 0)
   break;
 }
 return isolated;
}

static inline int radix_tree_is_indirect_ptr(void *ptr)
{
 return (int)((unsigned long)ptr & 1);
}






struct radix_tree_root {
 unsigned int height;
 gfp_t gfp_mask;
 struct radix_tree_node *rnode;
};
static inline void *radix_tree_deref_slot(void **pslot)
{



        return *(typeof(pslot))g_map(pslot, sizeof(*(pslot)));

}
static inline void *radix_tree_deref_slot_protected(void **pslot,
       spinlock_t *treelock)
{
 return (*pslot);
}
static inline int radix_tree_deref_retry(void *arg)
{
 return __builtin_expect(!!((unsigned long)arg & 1), 0);
}






static inline int radix_tree_exceptional_entry(void *arg)
{

 return (unsigned long)arg & 2;
}






static inline int radix_tree_exception(void *arg)
{
 return __builtin_expect(!!((unsigned long)arg & (1 | 2)), 0)
                                                           ;
}
static inline void radix_tree_replace_slot(void **pslot, void *item)
{
 (radix_tree_is_indirect_ptr(item));
 ({ (*pslot) = (item); });
}

int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
unsigned int radix_tree_gang_lookup_slot(struct radix_tree_root *root,
   void ***results, unsigned long *indices,
   unsigned long first_index, unsigned int max_items);
unsigned long radix_tree_next_hole(struct radix_tree_root *root,
    unsigned long index, unsigned long max_scan);
unsigned long radix_tree_prev_hole(struct radix_tree_root *root,
    unsigned long index, unsigned long max_scan);
int radix_tree_preload(gfp_t gfp_mask);
int radix_tree_maybe_preload(gfp_t gfp_mask);
void radix_tree_init(void);
void *radix_tree_tag_set(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
void *radix_tree_tag_clear(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
int radix_tree_tag_get(struct radix_tree_root *root,
   unsigned long index, unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
  unsigned long first_index, unsigned int max_items,
  unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag_slot(struct radix_tree_root *root, void ***results,
  unsigned long first_index, unsigned int max_items,
  unsigned int tag);
unsigned long radix_tree_range_tag_if_tagged(struct radix_tree_root *root,
  unsigned long *first_indexp, unsigned long last_index,
  unsigned long nr_to_tag,
  unsigned int fromtag, unsigned int totag);
int radix_tree_tagged(struct radix_tree_root *root, unsigned int tag);
unsigned long radix_tree_locate_item(struct radix_tree_root *root, void *item);

static inline void radix_tree_preload_end(void)
{
 __asm__ __volatile__("": : :"memory");
}
struct radix_tree_iter {
 unsigned long index;
 unsigned long next_index;
 unsigned long tags;
};
static inline __attribute__((always_inline)) void **
radix_tree_iter_init(struct radix_tree_iter *iter, unsigned long start)
{
 iter->index = 0;
 iter->next_index = start;
 return 0;
}
void **radix_tree_next_chunk(struct radix_tree_root *root,
        struct radix_tree_iter *iter, unsigned flags);







static inline __attribute__((always_inline)) unsigned
radix_tree_chunk_size(struct radix_tree_iter *iter)
{
 return iter->next_index - iter->index;
}
static inline __attribute__((always_inline)) void **
radix_tree_next_slot(void **slot, struct radix_tree_iter *iter, unsigned flags)
{
 if (flags & 0x0100) {
  iter->tags >>= 1;
  if (__builtin_expect(!!(iter->tags & 1ul), 1)) {
   iter->index++;
   return slot + 1;
  }
  if (!(flags & 0x0200) && __builtin_expect(!!(iter->tags), 1)) {
   unsigned offset = __ffs(iter->tags);

   iter->tags >>= offset;
   iter->index += offset + 1;
   return slot + offset + 1;
  }
 } else {
  unsigned size = radix_tree_chunk_size(iter) - 1;

  while (size--) {
   slot++;
   iter->index++;
   if (__builtin_expect(!!(*slot), 1))
    return slot;
   if (flags & 0x0200) {

    iter->next_index = 0;
    break;
   }
  }
 }
 return 0;
}






struct semaphore {
 raw_spinlock_t lock;
 unsigned int count;
 struct list_head wait_list;
};
static inline void sema_init(struct semaphore *sem, int val)
{





}

extern void down(struct semaphore *sem);
extern int down_interruptible(struct semaphore *sem);
extern int down_killable(struct semaphore *sem);
extern int down_trylock(struct semaphore *sem);
extern int down_timeout(struct semaphore *sem, long jiffies);
extern void up(struct semaphore *sem);
struct fiemap_extent {
 __u64 fe_logical;

 __u64 fe_physical;

 __u64 fe_length;
 __u64 fe_reserved64[2];
 __u32 fe_flags;
 __u32 fe_reserved[3];
};

struct fiemap {
 __u64 fm_start;

 __u64 fm_length;

 __u32 fm_flags;
 __u32 fm_mapped_extents;
 __u32 fm_extent_count;
 __u32 fm_reserved;
 struct fiemap_extent fm_extents[0];
};



enum migrate_mode {
 MIGRATE_ASYNC,
 MIGRATE_SYNC_LIGHT,
 MIGRATE_SYNC,
};


struct percpu_rw_semaphore {
 unsigned int *fast_read_ctr;
 atomic_t write_ctr;
 struct rw_semaphore rw_sem;
 atomic_t slow_read_ctr;
 wait_queue_head_t write_waitq;
};

extern void percpu_down_read(struct percpu_rw_semaphore *);
extern void percpu_up_read(struct percpu_rw_semaphore *);

extern void percpu_down_write(struct percpu_rw_semaphore *);
extern void percpu_up_write(struct percpu_rw_semaphore *);

extern int __percpu_init_rwsem(struct percpu_rw_semaphore *,
    char *, struct lock_class_key *);
extern void percpu_free_rwsem(struct percpu_rw_semaphore *);
struct bio_set;
struct bio;
struct bio_integrity_payload;
struct page;
struct block_device;
struct io_context;
struct cgroup_subsys_state;
typedef void (bio_end_io_t) (struct bio *, int);
typedef void (bio_destructor_t) (struct bio *);




struct bio_vec {
 struct page *bv_page;
 unsigned int bv_len;
 unsigned int bv_offset;
};





struct bio {
 sector_t bi_sector;

 struct bio *bi_next;
 struct block_device *bi_bdev;
 unsigned long bi_flags;
 unsigned long bi_rw;



 unsigned short bi_vcnt;
 unsigned short bi_idx;




 unsigned int bi_phys_segments;

 unsigned int bi_size;





 unsigned int bi_seg_front_size;
 unsigned int bi_seg_back_size;

 bio_end_io_t *bi_end_io;

 void *bi_private;





 struct io_context *bi_ioc;
 struct cgroup_subsys_state *bi_css;


 struct bio_integrity_payload *bi_integrity;






 unsigned int bi_max_vecs;

 atomic_t bi_cnt;

 struct bio_vec *bi_io_vec;

 struct bio_set *bi_pool;






 struct bio_vec bi_inline_vecs[0];
};
enum rq_flag_bits {

 __REQ_WRITE,
 __REQ_FAILFAST_DEV,
 __REQ_FAILFAST_TRANSPORT,
 __REQ_FAILFAST_DRIVER,

 __REQ_SYNC,
 __REQ_META,
 __REQ_PRIO,
 __REQ_DISCARD,
 __REQ_SECURE,
 __REQ_WRITE_SAME,

 __REQ_NOIDLE,
 __REQ_FUA,
 __REQ_FLUSH,


 __REQ_RAHEAD,
 __REQ_THROTTLED,



 __REQ_SORTED,
 __REQ_SOFTBARRIER,
 __REQ_NOMERGE,
 __REQ_STARTED,
 __REQ_DONTPREP,
 __REQ_QUEUED,
 __REQ_ELVPRIV,
 __REQ_FAILED,
 __REQ_QUIET,
 __REQ_PREEMPT,
 __REQ_ALLOCED,
 __REQ_COPY_USER,
 __REQ_FLUSH_SEQ,
 __REQ_IO_STAT,
 __REQ_MIXED_MERGE,
 __REQ_KERNEL,
 __REQ_PM,
 __REQ_END,
 __REQ_NR_BITS,
};


struct fstrim_range {
 __u64 start;
 __u64 len;
 __u64 minlen;
};


struct files_stat_struct {
 unsigned long nr_files;
 unsigned long nr_free_files;
 unsigned long max_files;
};

struct inodes_stat_t {
 long nr_inodes;
 long nr_unused;
 long dummy[5];
};

struct export_operations;
struct hd_geometry;
struct iovec;
struct nameidata;
struct kiocb;
struct kobject;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;
struct cred;
struct swap_info_struct;
struct seq_file;
struct workqueue_struct;

extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) inode_init(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) inode_init_early(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) files_init(unsigned long);

extern struct files_stat_struct files_stat;
extern unsigned long get_max_files(void);
extern int sysctl_nr_open;
extern struct inodes_stat_t inodes_stat;
extern int leases_enable, lease_break_time;
extern int sysctl_protected_symlinks;
extern int sysctl_protected_hardlinks;

struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
   ssize_t bytes, void *_private);
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 kuid_t ia_uid;
 kgid_t ia_gid;
 loff_t ia_size;
 struct timespec ia_atime;
 struct timespec ia_mtime;
 struct timespec ia_ctime;






 struct file *ia_file;
};




typedef struct fs_disk_quota {
 __s8 d_version;
 __s8 d_flags;
 __u16 d_fieldmask;
 __u32 d_id;
 __u64 d_blk_hardlimit;
 __u64 d_blk_softlimit;
 __u64 d_ino_hardlimit;
 __u64 d_ino_softlimit;
 __u64 d_bcount;
 __u64 d_icount;
 __s32 d_itimer;

 __s32 d_btimer;
 __u16 d_iwarns;
 __u16 d_bwarns;
 __s32 d_padding2;
 __u64 d_rtb_hardlimit;
 __u64 d_rtb_softlimit;
 __u64 d_rtbcount;
 __s32 d_rtbtimer;
 __u16 d_rtbwarns;
 __s16 d_padding3;
 char d_padding4[8];
} fs_disk_quota_t;
typedef struct fs_qfilestat {
 __u64 qfs_ino;
 __u64 qfs_nblks;
 __u32 qfs_nextents;
} fs_qfilestat_t;

typedef struct fs_quota_stat {
 __s8 qs_version;
 __u16 qs_flags;
 __s8 qs_pad;
 fs_qfilestat_t qs_uquota;
 fs_qfilestat_t qs_gquota;
 __u32 qs_incoredqs;
 __s32 qs_btimelimit;
 __s32 qs_itimelimit;
 __s32 qs_rtbtimelimit;
 __u16 qs_bwarnlimit;
 __u16 qs_iwarnlimit;
} fs_quota_stat_t;
struct fs_qfilestatv {
 __u64 qfs_ino;
 __u64 qfs_nblks;
 __u32 qfs_nextents;
 __u32 qfs_pad;
};

struct fs_quota_statv {
 __s8 qs_version;
 __u8 qs_pad1;
 __u16 qs_flags;
 __u32 qs_incoredqs;
 struct fs_qfilestatv qs_uquota;
 struct fs_qfilestatv qs_gquota;
 struct fs_qfilestatv qs_pquota;
 __s32 qs_btimelimit;
 __s32 qs_itimelimit;
 __s32 qs_rtbtimelimit;
 __u16 qs_bwarnlimit;
 __u16 qs_iwarnlimit;
 __u64 qs_pad2[8];
};







struct dquot;


struct qtree_fmt_operations {
 void (*mem2disk_dqblk)(void *disk, struct dquot *dquot);
 void (*disk2mem_dqblk)(struct dquot *dquot, void *disk);
 int (*is_id)(void *disk, struct dquot *dquot);
};


struct qtree_mem_dqinfo {
 struct super_block *dqi_sb;
 int dqi_type;
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
 unsigned int dqi_blocksize_bits;
 unsigned int dqi_entry_size;
 unsigned int dqi_usable_bs;
 unsigned int dqi_qtree_depth;
 struct qtree_fmt_operations *dqi_ops;
};

int qtree_write_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_read_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_delete_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_release_dquot(struct qtree_mem_dqinfo *info, struct dquot *dquot);
int qtree_entry_unused(struct qtree_mem_dqinfo *info, char *disk);
static inline int qtree_depth(struct qtree_mem_dqinfo *info)
{
 unsigned int epb = info->dqi_usable_bs >> 2;
 unsigned long long entries = epb;
 int i;

 for (i = 1; entries < (1ULL << 32); i++)
  entries *= epb;
 return i;
}



struct user_namespace;
extern struct user_namespace init_user_ns;

typedef __kernel_uid32_t projid_t;



typedef struct {
 projid_t val;
} kprojid_t;

static inline projid_t __kprojid_val(kprojid_t projid)
{
 return projid.val;
}
static inline bool projid_eq(kprojid_t left, kprojid_t right)
{
 return __kprojid_val(left) == __kprojid_val(right);
}

static inline bool projid_lt(kprojid_t left, kprojid_t right)
{
 return __kprojid_val(left) < __kprojid_val(right);
}

static inline bool projid_valid(kprojid_t projid)
{
 return !projid_eq(projid, (kprojid_t){ -1 });
}



extern kprojid_t make_kprojid(struct user_namespace *from, projid_t projid);

extern projid_t from_kprojid(struct user_namespace *to, kprojid_t projid);
extern projid_t from_kprojid_munged(struct user_namespace *to, kprojid_t projid);

static inline bool kprojid_has_mapping(struct user_namespace *ns, kprojid_t projid)
{
 return from_kprojid(ns, projid) != (projid_t)-1;
}
enum {
 QIF_BLIMITS_B = 0,
 QIF_SPACE_B,
 QIF_ILIMITS_B,
 QIF_INODES_B,
 QIF_BTIME_B,
 QIF_ITIME_B,
};
struct if_dqblk {
 __u64 dqb_bhardlimit;
 __u64 dqb_bsoftlimit;
 __u64 dqb_curspace;
 __u64 dqb_ihardlimit;
 __u64 dqb_isoftlimit;
 __u64 dqb_curinodes;
 __u64 dqb_btime;
 __u64 dqb_itime;
 __u32 dqb_valid;
};
struct if_dqinfo {
 __u64 dqi_bgrace;
 __u64 dqi_igrace;
 __u32 dqi_flags;
 __u32 dqi_valid;
};
enum {
 QUOTA_NL_C_UNSPEC,
 QUOTA_NL_C_WARNING,
 __QUOTA_NL_C_MAX,
};


enum {
 QUOTA_NL_A_UNSPEC,
 QUOTA_NL_A_QTYPE,
 QUOTA_NL_A_EXCESS_ID,
 QUOTA_NL_A_WARNING,
 QUOTA_NL_A_DEV_MAJOR,
 QUOTA_NL_A_DEV_MINOR,
 QUOTA_NL_A_CAUSED_ID,
 __QUOTA_NL_A_MAX,
};



enum quota_type {
 USRQUOTA = 0,
 GRPQUOTA = 1,
 PRJQUOTA = 2,
};

typedef __kernel_uid32_t qid_t;
typedef long long qsize_t;

struct kqid {
 union {
  kuid_t uid;
  kgid_t gid;
  kprojid_t projid;
 };
 enum quota_type type;
};

extern bool qid_eq(struct kqid left, struct kqid right);
extern bool qid_lt(struct kqid left, struct kqid right);
extern qid_t from_kqid(struct user_namespace *to, struct kqid qid);
extern qid_t from_kqid_munged(struct user_namespace *to, struct kqid qid);
extern bool qid_valid(struct kqid qid);
static inline struct kqid make_kqid(struct user_namespace *from,
        enum quota_type type, qid_t qid)
{
 struct kqid kqid;

 kqid.type = type;
 switch (type) {
 case USRQUOTA:
  kqid.uid = make_kuid(from, qid);
  break;
 case GRPQUOTA:
  kqid.gid = make_kgid(from, qid);
  break;
 case PRJQUOTA:
  kqid.projid = make_kprojid(from, qid);
  break;
 default:
  ;
 }
 return kqid;
}







static inline struct kqid make_kqid_invalid(enum quota_type type)
{
 struct kqid kqid;

 kqid.type = type;
 switch (type) {
 case USRQUOTA:
  kqid.uid = (kuid_t){ -1 };
  break;
 case GRPQUOTA:
  kqid.gid = (kgid_t){ -1 };
  break;
 case PRJQUOTA:
  kqid.projid = (kprojid_t){ -1 };
  break;
 default:
  ;
 }
 return kqid;
}





static inline struct kqid make_kqid_uid(kuid_t uid)
{
 struct kqid kqid;
 kqid.type = USRQUOTA;
 kqid.uid = uid;
 return kqid;
}





static inline struct kqid make_kqid_gid(kgid_t gid)
{
 struct kqid kqid;
 kqid.type = GRPQUOTA;
 kqid.gid = gid;
 return kqid;
}





static inline struct kqid make_kqid_projid(kprojid_t projid)
{
 struct kqid kqid;
 kqid.type = PRJQUOTA;
 kqid.projid = projid;
 return kqid;
}


extern spinlock_t dq_data_lock;
struct mem_dqblk {
 qsize_t dqb_bhardlimit;
 qsize_t dqb_bsoftlimit;
 qsize_t dqb_curspace;
 qsize_t dqb_rsvspace;
 qsize_t dqb_ihardlimit;
 qsize_t dqb_isoftlimit;
 qsize_t dqb_curinodes;
 time_t dqb_btime;
 time_t dqb_itime;
};




struct quota_format_type;

struct mem_dqinfo {
 struct quota_format_type *dqi_format;
 int dqi_fmt_id;

 struct list_head dqi_dirty_list;
 unsigned long dqi_flags;
 unsigned int dqi_bgrace;
 unsigned int dqi_igrace;
 qsize_t dqi_maxblimit;
 qsize_t dqi_maxilimit;
 void *dqi_priv;
};

struct super_block;
extern void mark_info_dirty(struct super_block *sb, int type);
static inline int info_dirty(struct mem_dqinfo *info)
{
 return (__builtin_constant_p((31)) ? constant_test_bit((31), (&info->dqi_flags)) : variable_test_bit((31), (&info->dqi_flags)));
}

enum {
 DQST_LOOKUPS,
 DQST_DROPS,
 DQST_READS,
 DQST_WRITES,
 DQST_CACHE_HITS,
 DQST_ALLOC_DQUOTS,
 DQST_FREE_DQUOTS,
 DQST_SYNCS,
 _DQST_DQSTAT_LAST
};

struct dqstats {
 int stat[_DQST_DQSTAT_LAST];
 struct percpu_counter counter[_DQST_DQSTAT_LAST];
};

extern struct dqstats *dqstats_pcpu;
extern struct dqstats dqstats;

static inline void dqstats_inc(unsigned int type)
{
 percpu_counter_inc(&dqstats.counter[type]);
}

static inline void dqstats_dec(unsigned int type)
{
 percpu_counter_dec(&dqstats.counter[type]);
}
struct dquot {
 struct hlist_node dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 struct list_head dq_dirty;
 struct mutex dq_lock;
 atomic_t dq_count;
 wait_queue_head_t dq_wait_unused;
 struct super_block *dq_sb;
 struct kqid dq_id;
 loff_t dq_off;
 unsigned long dq_flags;
 struct mem_dqblk dq_dqb;
};


struct quota_format_ops {
 int (*check_quota_file)(struct super_block *sb, int type);
 int (*read_file_info)(struct super_block *sb, int type);
 int (*write_file_info)(struct super_block *sb, int type);
 int (*free_file_info)(struct super_block *sb, int type);
 int (*read_dqblk)(struct dquot *dquot);
 int (*commit_dqblk)(struct dquot *dquot);
 int (*release_dqblk)(struct dquot *dquot);
};


struct dquot_operations {
 int (*write_dquot) (struct dquot *);
 struct dquot *(*alloc_dquot)(struct super_block *, int);
 void (*destroy_dquot)(struct dquot *);
 int (*acquire_dquot) (struct dquot *);
 int (*release_dquot) (struct dquot *);
 int (*mark_dirty) (struct dquot *);
 int (*write_info) (struct super_block *, int);


 qsize_t *(*get_reserved_space) (struct inode *);
};

struct path;


struct quotactl_ops {
 int (*quota_on)(struct super_block *, int, int, struct path *);
 int (*quota_on_meta)(struct super_block *, int, int);
 int (*quota_off)(struct super_block *, int);
 int (*quota_sync)(struct super_block *, int);
 int (*get_info)(struct super_block *, int, struct if_dqinfo *);
 int (*set_info)(struct super_block *, int, struct if_dqinfo *);
 int (*get_dqblk)(struct super_block *, struct kqid, struct fs_disk_quota *);
 int (*set_dqblk)(struct super_block *, struct kqid, struct fs_disk_quota *);
 int (*get_xstate)(struct super_block *, struct fs_quota_stat *);
 int (*set_xstate)(struct super_block *, unsigned int, int);
 int (*get_xstatev)(struct super_block *, struct fs_quota_statv *);
};

struct quota_format_type {
 int qf_fmt_id;
 struct quota_format_ops *qf_ops;
 struct module *qf_owner;
 struct quota_format_type *qf_next;
};


enum {
 _DQUOT_USAGE_ENABLED = 0,
 _DQUOT_LIMITS_ENABLED,
 _DQUOT_SUSPENDED,


 _DQUOT_STATE_FLAGS
};
static inline unsigned int dquot_state_flag(unsigned int flags, int type)
{
 return flags << _DQUOT_STATE_FLAGS * type;
}

static inline unsigned int dquot_generic_flag(unsigned int flags, int type)
{
 return (flags >> _DQUOT_STATE_FLAGS * type) & ((1 << _DQUOT_USAGE_ENABLED) | (1 << _DQUOT_LIMITS_ENABLED) | (1 << _DQUOT_SUSPENDED));
}


extern void quota_send_warning(struct kqid qid, dev_t dev,
          char warntype);
struct quota_info {
 unsigned int flags;
 struct mutex dqio_mutex;
 struct mutex dqonoff_mutex;
 struct rw_semaphore dqptr_sem;
 struct inode *files[2];
 struct mem_dqinfo info[2];
 struct quota_format_ops *ops[2];
};

int register_quota_format(struct quota_format_type *fmt);
void unregister_quota_format(struct quota_format_type *fmt);

struct quota_module_name {
 int qm_fmt_id;
 char *qm_mod_name;
};
enum positive_aop_returns {
 AOP_WRITEPAGE_ACTIVATE = 0x80000,
 AOP_TRUNCATED_PAGE = 0x80001,
};
struct page;
struct address_space;
struct writeback_control;

struct iov_iter {
 struct iovec *iov;
 unsigned long nr_segs;
 size_t iov_offset;
 size_t count;
};

size_t iov_iter_copy_from_user_atomic(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
size_t iov_iter_copy_from_user(struct page *page,
  struct iov_iter *i, unsigned long offset, size_t bytes);
void iov_iter_advance(struct iov_iter *i, size_t bytes);
int iov_iter_fault_in_readable(struct iov_iter *i, size_t bytes);
size_t iov_iter_single_seg_count( struct iov_iter *i);

static inline void iov_iter_init(struct iov_iter *i,
   struct iovec *iov, unsigned long nr_segs,
   size_t count, size_t written)
{
 i->iov = iov;
 i->nr_segs = nr_segs;
 i->iov_offset = 0;
 i->count = count + written;

 iov_iter_advance(i, written);
}

static inline size_t iov_iter_count(struct iov_iter *i)
{
 return i->count;
}
typedef struct {
 size_t written;
 size_t count;
 union {
  char *buf;
  void *data;
 } arg;
 int error;
} read_descriptor_t;

typedef int (*read_actor_t)(read_descriptor_t *, struct page *,
  unsigned long, unsigned long);

struct address_space_operations {
 int (*writepage)(struct page *page, struct writeback_control *wbc);
 int (*readpage)(struct file *, struct page *);


 int (*writepages)(struct address_space *, struct writeback_control *);


 int (*set_page_dirty)(struct page *page);

 int (*readpages)(struct file *filp, struct address_space *mapping,
   struct list_head *pages, unsigned nr_pages);

 int (*write_begin)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);
 int (*write_end)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);


 sector_t (*bmap)(struct address_space *, sector_t);
 void (*invalidatepage) (struct page *, unsigned int, unsigned int);
 int (*releasepage) (struct page *, gfp_t);
 void (*freepage)(struct page *);
 ssize_t (*direct_IO)(int, struct kiocb *, struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
 int (*get_xip_mem)(struct address_space *, unsigned long, int,
      void **, unsigned long *);




 int (*migratepage) (struct address_space *,
   struct page *, struct page *, enum migrate_mode);
 int (*launder_page) (struct page *);
 int (*is_partially_uptodate) (struct page *, read_descriptor_t *,
     unsigned long);
 void (*is_dirty_writeback) (struct page *, bool *, bool *);
 int (*error_remove_page)(struct address_space *, struct page *);


 int (*swap_activate)(struct swap_info_struct *sis, struct file *file,
    sector_t *span);
 void (*swap_deactivate)(struct file *file);
};

extern struct address_space_operations empty_aops;





int pagecache_write_begin(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);

int pagecache_write_end(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);

struct backing_dev_info;
struct address_space {
 struct inode *host;
 struct radix_tree_root page_tree;
 spinlock_t tree_lock;
 unsigned int i_mmap_writable;
 struct rb_root i_mmap;
 struct list_head i_mmap_nonlinear;
 struct mutex i_mmap_mutex;

 unsigned long nrpages;
 unsigned long writeback_index;
 struct address_space_operations *a_ops;
 unsigned long flags;
 struct backing_dev_info *backing_dev_info;
 spinlock_t private_lock;
 struct list_head private_list;
 void *private_data;
} __attribute__((aligned(sizeof(long))));





struct request_queue;

struct block_device {
 dev_t bd_dev;
 int bd_openers;
 struct inode * bd_inode;
 struct super_block * bd_super;
 struct mutex bd_mutex;
 struct list_head bd_inodes;
 void * bd_claiming;
 void * bd_holder;
 int bd_holders;
 bool bd_write_holder;

 struct list_head bd_holder_disks;

 struct block_device * bd_contains;
 unsigned bd_block_size;
 struct hd_struct * bd_part;

 unsigned bd_part_count;
 int bd_invalidated;
 struct gendisk * bd_disk;
 struct request_queue * bd_queue;
 struct list_head bd_list;






 unsigned long bd_private;


 int bd_fsfreeze_count;

 struct mutex bd_fsfreeze_mutex;
};
int mapping_tagged(struct address_space *mapping, int tag);




static inline int mapping_mapped(struct address_space *mapping)
{
 return !((&mapping->i_mmap)->rb_node == 0) ||
  !list_empty(&mapping->i_mmap_nonlinear);
}







static inline int mapping_writably_mapped(struct address_space *mapping)
{
 return mapping->i_mmap_writable != 0;
}
struct posix_acl;
struct inode {
 umode_t i_mode;
 unsigned short i_opflags;
 kuid_t i_uid;
 kgid_t i_gid;
 unsigned int i_flags;


 struct posix_acl *i_acl;
 struct posix_acl *i_default_acl;


 struct inode_operations *i_op;
 struct super_block *i_sb;
 struct address_space *i_mapping;


 void *i_security;



 unsigned long i_ino;







 union {
  unsigned int i_nlink;
  unsigned int __i_nlink;
 };
 dev_t i_rdev;
 loff_t i_size;
 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 spinlock_t i_lock;
 unsigned short i_bytes;
 unsigned int i_blkbits;
 blkcnt_t i_blocks;






 unsigned long i_state;
 struct mutex i_mutex;

 unsigned long dirtied_when;

 struct hlist_node i_hash;
 struct list_head i_wb_list;
 struct list_head i_lru;
 struct list_head i_sb_list;
 union {
  struct hlist_head i_dentry;
  struct callback_head i_rcu;
 };
 u64 i_version;
 atomic_t i_count;
 atomic_t i_dio_count;
 atomic_t i_writecount;
 struct file_operations *i_fop;
 struct file_lock *i_flock;
 struct address_space i_data;

 struct dquot *i_dquot[2];

 struct list_head i_devices;
 union {
  struct pipe_inode_info *i_pipe;
  struct block_device *i_bdev;
  struct cdev *i_cdev;
 };

 __u32 i_generation;


 __u32 i_fsnotify_mask;
 struct hlist_head i_fsnotify_marks;



 atomic_t i_readcount;

 void *i_private;
};

static inline int inode_unhashed(struct inode *inode)
{
 return hlist_unhashed(&inode->i_hash);
}
enum inode_i_mutex_lock_class
{
 I_MUTEX_NORMAL,
 I_MUTEX_PARENT,
 I_MUTEX_CHILD,
 I_MUTEX_XATTR,
 I_MUTEX_NONDIR2
};

void lock_two_nondirectories(struct inode *, struct inode*);
void unlock_two_nondirectories(struct inode *, struct inode*);
static inline loff_t i_size_read( struct inode *inode)
{
 return inode->i_size;

}






static inline void i_size_write(struct inode *inode, loff_t i_size)
{
 inode->i_size = i_size;

}






static inline uid_t i_uid_read( struct inode *inode)
{
 return from_kuid(&init_user_ns, inode->i_uid);
}

static inline gid_t i_gid_read( struct inode *inode)
{
 return from_kgid(&init_user_ns, inode->i_gid);
}

static inline void i_uid_write(struct inode *inode, uid_t uid)
{
 inode->i_uid = make_kuid(&init_user_ns, uid);
}

static inline void i_gid_write(struct inode *inode, gid_t gid)
{
 inode->i_gid = make_kgid(&init_user_ns, gid);
}

static inline unsigned iminor( struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) & ((1U << 20) - 1)));
}

static inline unsigned imajor( struct inode *inode)
{
 return ((unsigned int) ((inode->i_rdev) >> 20));
}

extern struct block_device *I_BDEV(struct inode *inode);

struct fown_struct {
 rwlock_t lock;
 struct pid *pid;
 enum pid_type pid_type;
 kuid_t uid, euid;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned int size;
 unsigned int async_size;


 unsigned int ra_pages;
 unsigned int mmap_miss;
 loff_t prev_pos;
};




static inline int ra_has_index(struct file_ra_state *ra, unsigned long index)
{
 return (index >= ra->start &&
  index < ra->start + ra->size);
}




struct file {
 union {
  struct llist_node fu_llist;
  struct callback_head fu_rcuhead;
 } f_u;
 struct path f_path;

 struct inode *f_inode;
 struct file_operations *f_op;





 spinlock_t f_lock;
 atomic_long_t f_count;
 unsigned int f_flags;
 fmode_t f_mode;
 loff_t f_pos;
 struct fown_struct f_owner;
 struct cred *f_cred;
 struct file_ra_state f_ra;

 u64 f_version;

 void *f_security;


 void *private_data;



 struct list_head f_ep_links;
 struct list_head f_tfile_llink;

 struct address_space *f_mapping;



};

struct file_handle {
 __u32 handle_bytes;
 int handle_type;

 unsigned char f_handle[0];
};

static inline struct file *get_file(struct file *f)
{



 return f;
}
static inline void file_take_write(struct file *filp) {}
static inline void file_release_write(struct file *filp) {}
static inline void file_reset_write(struct file *filp) {}
static inline void file_check_state(struct file *filp) {}
static inline int file_check_writeable(struct file *filp)
{
 return 0;
}
typedef struct files_struct *fl_owner_t;

struct file_lock_operations {
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
};

struct lock_manager_operations {
 int (*lm_compare_owner)(struct file_lock *, struct file_lock *);
 unsigned long (*lm_owner_key)(struct file_lock *);
 void (*lm_notify)(struct file_lock *);
 int (*lm_grant)(struct file_lock *, struct file_lock *, int);
 void (*lm_break)(struct file_lock *);
 int (*lm_change)(struct file_lock **, int);
};

struct lock_manager {
 struct list_head list;
};

struct net;
void locks_start_grace(struct net *, struct lock_manager *);
void locks_end_grace(struct lock_manager *);
int locks_in_grace(struct net *);





struct nlm_lockowner;




struct nfs_lock_info {
 u32 state;
 struct nlm_lockowner *owner;
 struct list_head list;
};

struct nfs4_lock_state;
struct nfs4_lock_info {
 struct nfs4_lock_state *owner;
};
struct file_lock {
 struct file_lock *fl_next;
 struct hlist_node fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned int fl_flags;
 unsigned char fl_type;
 unsigned int fl_pid;
 int fl_link_cpu;
 struct pid *fl_nspid;
 wait_queue_head_t fl_wait;
 struct file *fl_file;
 loff_t fl_start;
 loff_t fl_end;

 struct fasync_struct * fl_fasync;

 unsigned long fl_break_time;
 unsigned long fl_downgrade_time;

 struct file_lock_operations *fl_ops;
 struct lock_manager_operations *fl_lmops;
 union {
  struct nfs_lock_info nfs_fl;
  struct nfs4_lock_info nfs4_fl;
  struct {
   struct list_head link;
   int state;
  } afs;
 } fl_u;
};






struct f_owner_ex {
 int type;
 __kernel_pid_t pid;
};
struct flock {
 short l_type;
 short l_whence;
 __kernel_off_t l_start;
 __kernel_off_t l_len;
 __kernel_pid_t l_pid;

};

extern void send_sigio(struct fown_struct *fown, int fd, int band);


extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
   struct flock *);







extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


void locks_free_lock(struct file_lock *fl);
extern void locks_init_lock(struct file_lock *);
extern struct file_lock * locks_alloc_lock(void);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void __locks_copy_lock(struct file_lock *, struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern void locks_release_private(struct file_lock *);
extern void posix_test_lock(struct file *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern int posix_unblock_lock(struct file_lock *);
extern int vfs_test_lock(struct file *, struct file_lock *);
extern int vfs_lock_file(struct file *, unsigned int, struct file_lock *, struct file_lock *);
extern int vfs_cancel_lock(struct file *filp, struct file_lock *fl);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags, unsigned int type);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int generic_setlease(struct file *, long, struct file_lock **);
extern int vfs_setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);
struct fasync_struct {
 spinlock_t fa_lock;
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
 struct callback_head fa_rcu;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);
extern struct fasync_struct *fasync_insert_entry(int, struct file *, struct fasync_struct **, struct fasync_struct *);
extern int fasync_remove_entry(struct file *, struct fasync_struct **);
extern struct fasync_struct *fasync_alloc(void);
extern void fasync_free(struct fasync_struct *);


extern void kill_fasync(struct fasync_struct **, int, int);

extern int __f_setown(struct file *filp, struct pid *, enum pid_type, int force);
extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern pid_t f_getown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);

struct mm_struct;
extern struct list_head super_blocks;
extern spinlock_t sb_lock;


enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_PAGEFAULT = 2,
 SB_FREEZE_FS = 3,

 SB_FREEZE_COMPLETE = 4,
};



struct sb_writers {

 struct percpu_counter counter[(SB_FREEZE_COMPLETE - 1)];
 wait_queue_head_t wait;

 int frozen;
 wait_queue_head_t wait_unfrozen;




};

struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned char s_blocksize_bits;
 unsigned long s_blocksize;
 loff_t s_maxbytes;
 struct file_system_type *s_type;
 struct super_operations *s_op;
 struct dquot_operations *dq_op;
 struct quotactl_ops *s_qcop;
 struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 int s_count;
 atomic_t s_active;

 void *s_security;

 struct xattr_handler **s_xattr;

 struct list_head s_inodes;
 struct hlist_bl_head s_anon;
 struct list_head s_mounts;
 struct block_device *s_bdev;
 struct backing_dev_info *s_bdi;
 struct mtd_info *s_mtd;
 struct hlist_node s_instances;
 struct quota_info s_dquot;

 struct sb_writers s_writers;

 char s_id[32];
 u8 s_uuid[16];

 void *s_fs_info;
 unsigned int s_max_links;
 fmode_t s_mode;



 u32 s_time_gran;





 struct mutex s_vfs_rename_mutex;





 char *s_subtype;





 char *s_options;
 struct dentry_operations *s_d_op;




 int cleancache_poolid;

 struct shrinker s_shrink;


 atomic_long_t s_remove_count;


 int s_readonly_remount;


 struct workqueue_struct *s_dio_done_wq;





 struct list_lru s_dentry_lru __attribute__((__aligned__((1 << (6)))));
 struct list_lru s_inode_lru __attribute__((__aligned__((1 << (6)))));
 struct callback_head rcu;




 int s_stack_depth;
};

extern struct timespec current_fs_time(struct super_block *sb);





void __sb_end_write(struct super_block *sb, int level);
int __sb_start_write(struct super_block *sb, int level, bool wait);
static inline void sb_end_write(struct super_block *sb)
{
 __sb_end_write(sb, SB_FREEZE_WRITE);
}
static inline void sb_end_pagefault(struct super_block *sb)
{
 __sb_end_write(sb, SB_FREEZE_PAGEFAULT);
}
static inline void sb_end_intwrite(struct super_block *sb)
{
 __sb_end_write(sb, SB_FREEZE_FS);
}
static inline void sb_start_write(struct super_block *sb)
{
 __sb_start_write(sb, SB_FREEZE_WRITE, _true);
}

static inline int sb_start_write_trylock(struct super_block *sb)
{
 return __sb_start_write(sb, SB_FREEZE_WRITE, _false);
}
static inline void sb_start_pagefault(struct super_block *sb)
{
 __sb_start_write(sb, SB_FREEZE_PAGEFAULT, _true);
}
static inline void sb_start_intwrite(struct super_block *sb)
{
 __sb_start_write(sb, SB_FREEZE_FS, _true);
}


extern bool inode_owner_or_capable( struct inode *inode);




extern int vfs_create(struct inode *, struct dentry *, umode_t, bool);
extern int vfs_mkdir(struct inode *, struct dentry *, umode_t);
extern int vfs_mknod(struct inode *, struct dentry *, umode_t, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, char *);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *, struct inode **);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *, struct inode **);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *, struct inode **);




extern void dentry_unhash(struct dentry *dentry);




extern void inode_init_owner(struct inode *inode, struct inode *dir,
   umode_t mode);



struct fiemap_extent_info {
 unsigned int fi_flags;
 unsigned int fi_extents_mapped;
 unsigned int fi_extents_max;
 struct fiemap_extent *fi_extents_start;

};
int fiemap_fill_next_extent(struct fiemap_extent_info *info, u64 logical,
       u64 phys, u64 len, u32 flags);
int fiemap_check_flags(struct fiemap_extent_info *fieinfo, u32 fs_flags);
typedef int (*filldir_t)(void *, char *, int, loff_t, u64, unsigned);
struct dir_context {
 filldir_t actor;
 loff_t pos;
};

struct block_device_operations;







struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*write) (struct file *, char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, struct iovec *, unsigned long, loff_t);
 ssize_t (*aio_write) (struct kiocb *, struct iovec *, unsigned long, loff_t);
 int (*iterate) (struct file *, struct dir_context *);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *, fl_owner_t id);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, loff_t, loff_t, int datasync);
 int (*aio_fsync) (struct kiocb *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*flock) (struct file *, int, struct file_lock *);
 ssize_t (*splice_write)(struct pipe_inode_info *, struct file *, loff_t *, size_t, unsigned int);
 ssize_t (*splice_read)(struct file *, loff_t *, struct pipe_inode_info *, size_t, unsigned int);
 int (*setlease)(struct file *, long, struct file_lock **);
 long (*fallocate)(struct file *file, int mode, loff_t offset,
     loff_t len);
 int (*show_fdinfo)(struct seq_file *m, struct file *f);
};

struct inode_operations {
 struct dentry * (*lookup) (struct inode *,struct dentry *, unsigned int);
 void * (*follow_link) (struct dentry *, struct nameidata *);
 int (*permission) (struct inode *, int);
 struct posix_acl * (*get_acl)(struct inode *, int);

 int (*readlink) (struct dentry *, char *,int);
 void (*put_link) (struct dentry *, struct nameidata *, void *);

 int (*create) (struct inode *,struct dentry *, umode_t, bool);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *, char *);
 int (*mkdir) (struct inode *,struct dentry *,umode_t);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,umode_t,dev_t);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct vfsmount *mnt, struct dentry *, struct kstat *);
 int (*setxattr) (struct dentry *, char *, void *,size_t,int);
 ssize_t (*getxattr) (struct dentry *, char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, char *);
 int (*fiemap)(struct inode *, struct fiemap_extent_info *, u64 start,
        u64 len);
 int (*update_time)(struct inode *, struct timespec *, int);
 int (*atomic_open)(struct inode *, struct dentry *,
      struct file *, unsigned open_flag,
      umode_t create_mode, int *opened);
 int (*tmpfile) (struct inode *, struct dentry *, umode_t);
 int (*dentry_open)(struct dentry *, struct file *, struct cred *);
} __attribute__((__aligned__((1 << (6)))));

ssize_t rw_copy_check_uvector(int type, struct iovec * uvector,
         unsigned long nr_segs, unsigned long fast_segs,
         struct iovec *fast_pointer,
         struct iovec **ret_pointer);

extern ssize_t vfs_read(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_write(struct file *, char *, size_t, loff_t *);
extern ssize_t vfs_readv(struct file *, struct iovec *,
  unsigned long, loff_t *);
extern ssize_t vfs_writev(struct file *, struct iovec *,
  unsigned long, loff_t *);

struct super_operations {
    struct inode *(*alloc_inode)(struct super_block *sb);
 void (*destroy_inode)(struct inode *);

    void (*dirty_inode) (struct inode *, int flags);
 int (*write_inode) (struct inode *, struct writeback_control *wbc);
 int (*drop_inode) (struct inode *);
 void (*evict_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 int (*sync_fs)(struct super_block *sb, int wait);
 int (*freeze_fs) (struct super_block *);
 int (*unfreeze_fs) (struct super_block *);
 int (*statfs) (struct dentry *, struct kstatfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*umount_begin) (struct super_block *);

 int (*show_options)(struct seq_file *, struct dentry *);
 int (*show_devname)(struct seq_file *, struct dentry *);
 int (*show_path)(struct seq_file *, struct dentry *);
 int (*show_stats)(struct seq_file *, struct dentry *);

 ssize_t (*quota_read)(struct super_block *, int, char *, size_t, loff_t);
 ssize_t (*quota_write)(struct super_block *, int, char *, size_t, loff_t);

 int (*bdev_try_to_free_page)(struct super_block*, struct page*, gfp_t);
 long (*nr_cached_objects)(struct super_block *, int);
 long (*free_cached_objects)(struct super_block *, long, int);
};
extern void __mark_inode_dirty(struct inode *, int);
static inline void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, ((1 << 0) | (1 << 1) | (1 << 2)));
}

static inline void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 << 0));
}

extern void inc_nlink(struct inode *inode);
extern void drop_nlink(struct inode *inode);
extern void clear_nlink(struct inode *inode);
extern void set_nlink(struct inode *inode, unsigned int nlink);

static inline void inode_inc_link_count(struct inode *inode)
{
 inc_nlink(inode);
 mark_inode_dirty(inode);
}

static inline void inode_dec_link_count(struct inode *inode)
{
 drop_nlink(inode);
 mark_inode_dirty(inode);
}
static inline void inode_inc_iversion(struct inode *inode)
{
       ;
       inode->i_version++;
       ;
}

enum file_time_flags {
 S_ATIME = 1,
 S_MTIME = 2,
 S_CTIME = 4,
 S_VERSION = 8,
};

extern void touch_atime( struct path *);
static inline void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(&file->f_path);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);
int sync_inode_metadata(struct inode *inode, int wait);

struct file_system_type {
 char *name;
 int fs_flags;






 struct dentry *(*mount) (struct file_system_type *, int,
         char *, void *);
 void (*kill_sb) (struct super_block *);
 struct module *owner;
 struct file_system_type * next;
 struct hlist_head fs_supers;

 struct lock_class_key s_lock_key;
 struct lock_class_key s_umount_key;
 struct lock_class_key s_vfs_rename_key;
 struct lock_class_key s_writers_key[(SB_FREEZE_COMPLETE - 1)];

 struct lock_class_key i_lock_key;
 struct lock_class_key i_mutex_key;
 struct lock_class_key i_mutex_dir_key;
};



extern struct dentry *mount_ns(struct file_system_type *fs_type, int flags,
 void *data, int (*fill_super)(struct super_block *, void *, int));
extern struct dentry *mount_bdev(struct file_system_type *fs_type,
 int flags, char *dev_name, void *data,
 int (*fill_super)(struct super_block *, void *, int));
extern struct dentry *mount_single(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int));
extern struct dentry *mount_nodev(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int));
extern struct dentry *mount_subtree(struct vfsmount *mnt, char *path);
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
void deactivate_locked_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
int get_anon_bdev(dev_t *);
void free_anon_bdev(dev_t);
struct super_block *sget(struct file_system_type *type,
   int (*test)(struct super_block *,void *),
   int (*set)(struct super_block *,void *),
   int flags, void *data);
extern struct dentry *mount_pseudo(struct file_system_type *, char *,
 struct super_operations *ops,
 struct dentry_operations *dops,
 unsigned long);
extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount_data(struct file_system_type *, void *data);

extern void kern_unmount(struct vfsmount *mnt);
extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern long do_mount( char *, char *, char *, unsigned long, void *);
extern struct vfsmount *collect_mounts(struct path *);
extern void drop_collected_mounts(struct vfsmount *);
extern int iterate_mounts(int (*)(struct vfsmount *, void *), void *,
     struct vfsmount *);
extern int vfs_statfs(struct path *, struct kstatfs *);
extern int user_statfs( char *, struct kstatfs *);
extern int fd_statfs(int, struct kstatfs *);
extern int vfs_ustat(dev_t, struct kstatfs *);
extern int freeze_super(struct super_block *super);
extern int thaw_super(struct super_block *super);
extern bool our_mnt(struct vfsmount *mnt);
extern bool fs_fully_visible(struct file_system_type *);

extern int current_umask(void);

extern void ihold(struct inode * inode);
extern void iput(struct inode *);


extern struct kobject *fs_kobj;







extern int locks_mandatory_locked(struct inode *);
extern int locks_mandatory_area(int, struct inode *, struct file *, loff_t, size_t);






static inline int __mandatory_lock(struct inode *ino)
{
 return (ino->i_mode & (0002000 | 00010)) == 0002000;
}






static inline int mandatory_lock(struct inode *ino)
{
 return ((ino)->i_sb->s_flags & (64)) && __mandatory_lock(ino);
}

static inline int locks_verify_locked(struct inode *inode)
{
 if (mandatory_lock(inode))
  return locks_mandatory_locked(inode);
 return 0;
}

static inline int locks_verify_truncate(struct inode *inode,
        struct file *filp,
        loff_t size)
{
 if (inode->i_flock && mandatory_lock(inode))
  return locks_mandatory_area(
   2, inode, filp,
   size < inode->i_size ? size : inode->i_size,
   (size < inode->i_size ? inode->i_size - size
    : size - inode->i_size)
  );
 return 0;
}

static inline int break_lease(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __break_lease(inode, mode, 32);
 return 0;
}

static inline int break_deleg(struct inode *inode, unsigned int mode)
{
 if (inode->i_flock)
  return __break_lease(inode, mode, 4);
 return 0;
}

static inline int try_break_deleg(struct inode *inode, struct inode **delegated_inode)
{
 int ret;

 ret = break_deleg(inode, 00000001|00004000);
 if (ret == -11 && delegated_inode) {
  *delegated_inode = inode;
  ihold(inode);
 }
 return ret;
}

static inline int break_deleg_wait(struct inode **delegated_inode)
{
 int ret;

 ret = break_deleg(*delegated_inode, 00000001);
 iput(*delegated_inode);
 *delegated_inode = 0;
 return ret;
}
struct audit_names;
struct filename {
 char *name;
 char *uptr;
 struct audit_names *aname;
 bool separate;
};

extern long vfs_truncate(struct path *, loff_t);
extern int do_truncate(struct dentry *, loff_t start, unsigned int time_attrs,
         struct file *filp);
extern int do_fallocate(struct file *file, int mode, loff_t offset,
   loff_t len);
extern long do_sys_open(int dfd, char *filename, int flags,
   umode_t mode);
extern struct file *file_open_name(struct filename *, int, umode_t);
extern struct file *filp_open( char *, int, umode_t);
extern struct file *file_open_root(struct dentry *, struct vfsmount *,
       char *, int);
extern int vfs_open( struct path *, struct file *, struct cred *);
extern struct file * dentry_open( struct path *, int, struct cred *);
extern int filp_close(struct file *, fl_owner_t id);

extern struct filename *getname( char *);

enum {
 FILE_CREATED = 1,
 FILE_OPENED = 2
};
extern int finish_open(struct file *file, struct dentry *dentry,
   int (*open)(struct inode *, struct file *),
   int *opened);
extern int finish_no_open(struct file *file, struct dentry *dentry);



extern int ioctl_preallocate(struct file *filp, void *argp);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) vfs_caches_init_early(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) vfs_caches_init(unsigned long);

extern struct kmem_cache *names_cachep;

extern void final_putname(struct filename *name);






extern void putname(struct filename *name);



extern int register_blkdev(unsigned int, char *);
extern void unregister_blkdev(unsigned int, char *);
extern struct block_device *bdget(dev_t);
extern struct block_device *bdgrab(struct block_device *bdev);
extern void bd_set_size(struct block_device *, loff_t size);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern void invalidate_bdev(struct block_device *);
extern void iterate_bdevs(void (*)(struct block_device *, void *), void *);
extern int sync_blockdev(struct block_device *bdev);
extern void kill_bdev(struct block_device *);
extern struct super_block *freeze_bdev(struct block_device *);
extern void emergency_thaw_all(void);
extern int thaw_bdev(struct block_device *bdev, struct super_block *sb);
extern int fsync_bdev(struct block_device *);
extern int sb_is_blkdev_sb(struct super_block *sb);
extern int sync_filesystem(struct super_block *);
extern struct file_operations def_blk_fops;
extern struct file_operations def_chr_fops;
extern struct file_operations bad_sock_fops;

extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_ioctl(struct block_device *, fmode_t, unsigned, unsigned long);
extern long compat_blkdev_ioctl(struct file *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *bdev, fmode_t mode, void *holder);
extern struct block_device *blkdev_get_by_path( char *path, fmode_t mode,
            void *holder);
extern struct block_device *blkdev_get_by_dev(dev_t dev, fmode_t mode,
           void *holder);
extern void blkdev_put(struct block_device *bdev, fmode_t mode);

extern int bd_link_disk_holder(struct block_device *bdev, struct gendisk *disk);
extern void bd_unlink_disk_holder(struct block_device *bdev,
      struct gendisk *disk);
extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, char *);
extern int register_chrdev_region(dev_t, unsigned, char *);
extern int __register_chrdev(unsigned int major, unsigned int baseminor,
        unsigned int count, char *name,
        struct file_operations *fops);
extern void __unregister_chrdev(unsigned int major, unsigned int baseminor,
    unsigned int count, char *name);
extern void unregister_chrdev_region(dev_t, unsigned);
extern void chrdev_show(struct seq_file *,off_t);

static inline int register_chrdev(unsigned int major, char *name,
      struct file_operations *fops)
{
 return __register_chrdev(major, 0, 256, name, fops);
}

static inline void unregister_chrdev(unsigned int major, char *name)
{
 __unregister_chrdev(major, 0, 256, name);
}







extern char *__bdevname(dev_t, char *buffer);
extern char *bdevname(struct block_device *bdev, char *buffer);
extern struct block_device *lookup_bdev( char *);
extern void blkdev_show(struct seq_file *,off_t);





extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);
extern void check_disk_size_change(struct gendisk *disk,
       struct block_device *bdev);
extern int revalidate_disk(struct gendisk *);
extern int check_disk_change(struct block_device *);
extern int __invalidate_device(struct block_device *, bool);
extern int invalidate_partition(struct gendisk *, int);

unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);

static inline void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_mapping_pages(inode->i_mapping, 0, -1);
}
extern int invalidate_inode_pages2(struct address_space *mapping);
extern int invalidate_inode_pages2_range(struct address_space *mapping,
      unsigned long start, unsigned long end);
extern int write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_fdatawait_range(struct address_space *, loff_t lstart,
       loff_t lend);
extern int filemap_write_and_wait(struct address_space *mapping);
extern int filemap_write_and_wait_range(struct address_space *mapping,
            loff_t lstart, loff_t lend);
extern int __filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end, int sync_mode);
extern int filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end);

extern int vfs_fsync_range(struct file *file, loff_t start, loff_t end,
      int datasync);
extern int vfs_fsync(struct file *file, int datasync);
extern int generic_write_sync(struct file *file, loff_t pos, loff_t count);
extern void emergency_sync(void);
extern void emergency_remount(void);

extern sector_t bmap(struct inode *, sector_t);

extern int notify_change(struct dentry *, struct iattr *, struct inode **);
extern int inode_permission(struct inode *, int);
extern int __inode_permission(struct inode *, int);
extern int generic_permission(struct inode *, int);

static inline bool execute_ok(struct inode *inode)
{
 return (inode->i_mode & (00100|00010|00001)) || (((inode->i_mode) & 00170000) == 0040000);
}

static inline struct inode *file_inode(struct file *f)
{
 return f->f_inode;
}

static inline void file_start_write(struct file *file)
{
 if (!(((file_inode(file)->i_mode) & 00170000) == 0100000))
  return;
 __sb_start_write(file_inode(file)->i_sb, SB_FREEZE_WRITE, _true);
}

static inline bool file_start_write_trylock(struct file *file)
{
 if (!(((file_inode(file)->i_mode) & 00170000) == 0100000))
  return _true;
 return __sb_start_write(file_inode(file)->i_sb, SB_FREEZE_WRITE, _false);
}

static inline void file_end_write(struct file *file)
{
 if (!(((file_inode(file)->i_mode) & 00170000) == 0100000))
  return;
 __sb_end_write(file_inode(file)->i_sb, SB_FREEZE_WRITE);
}
static inline int get_write_access(struct inode *inode)
{
 return atomic_inc_unless_negative(&inode->i_writecount) ? 0 : -26;
}
static inline int deny_write_access(struct file *file)
{
 struct inode *inode = file_inode(file);
 return atomic_dec_unless_positive(&inode->i_writecount) ? 0 : -26;
}
static inline void put_write_access(struct inode * inode)
{
 ;
}
static inline void allow_write_access(struct file *file)
{
 if (file)
  ;
}
static inline bool inode_is_open_for_write( struct inode *inode)
{
 return atomic_read(&inode->i_writecount) > 0;
}


static inline void i_readcount_dec(struct inode *inode)
{
 (!atomic_read(&inode->i_readcount));
 ;
}
static inline void i_readcount_inc(struct inode *inode)
{
 ;
}
extern int do_pipe_flags(int *, int);

extern int kernel_read(struct file *, loff_t, char *, unsigned long);
extern ssize_t kernel_write(struct file *, char *, size_t, loff_t);
extern struct file * open_exec( char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern int path_is_under(struct path *, struct path *);




extern loff_t default_llseek(struct file *file, loff_t offset, int whence);

extern loff_t vfs_llseek(struct file *file, loff_t offset, int whence);

extern int inode_init_always(struct super_block *, struct inode *);
extern void inode_init_once(struct inode *);
extern void address_space_init_once(struct address_space *mapping);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern int generic_delete_inode(struct inode *inode);
static inline int generic_drop_inode(struct inode *inode)
{
 return !inode->i_nlink || inode_unhashed(inode);
}

extern struct inode *ilookup5_nowait(struct super_block *sb,
  unsigned long hashval, int (*test)(struct inode *, void *),
  void *data);
extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
  int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);

extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern int insert_inode_locked4(struct inode *, unsigned long, int (*test)(struct inode *, void *), void *);
extern int insert_inode_locked(struct inode *);



static inline void lockdep_annotate_inode_mutex_key(struct inode *inode) { };

extern void unlock_new_inode(struct inode *);
extern unsigned int get_next_ino(void);

extern void __iget(struct inode * inode);
extern void iget_failed(struct inode *);
extern void clear_inode(struct inode *);
extern void __destroy_inode(struct inode *);
extern struct inode *new_inode_pseudo(struct super_block *sb);
extern struct inode *new_inode(struct super_block *sb);
extern void free_inode_nonrcu(struct inode *inode);
extern int should_remove_suid(struct dentry *);
extern int file_remove_suid(struct file *);

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
static inline void insert_inode_hash(struct inode *inode)
{
 __insert_inode_hash(inode, inode->i_ino);
}

extern void __remove_inode_hash(struct inode *);
static inline void remove_inode_hash(struct inode *inode)
{
 if (!inode_unhashed(inode))
  __remove_inode_hash(inode);
}

extern void inode_sb_list_add(struct inode *inode);


extern void submit_bio(int, struct bio *);
extern int bdev_read_only(struct block_device *);

extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_remap_pages(struct vm_area_struct *, unsigned long addr,
  unsigned long size, unsigned long pgoff);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_aio_read(struct kiocb *, struct iovec *, unsigned long, loff_t);
extern ssize_t __generic_file_aio_write(struct kiocb *, struct iovec *, unsigned long,
  loff_t *);
extern ssize_t generic_file_aio_write(struct kiocb *, struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_direct_write(struct kiocb *, struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern int generic_segment_checks( struct iovec *iov,
  unsigned long *nr_segs, size_t *count, int access_flags);


extern ssize_t blkdev_aio_write(struct kiocb *iocb, struct iovec *iov,
    unsigned long nr_segs, loff_t pos);
extern int blkdev_fsync(struct file *filp, loff_t start, loff_t end,
   int datasync);
extern void block_sync_page(struct page *page);


extern ssize_t generic_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t default_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t generic_file_splice_write(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe,
  struct file *out, loff_t *, size_t len, unsigned int flags);
extern long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
  loff_t *opos, size_t len, unsigned int flags);


extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern loff_t noop_llseek(struct file *file, loff_t offset, int whence);
extern loff_t no_llseek(struct file *file, loff_t offset, int whence);
extern loff_t vfs_setpos(struct file *file, loff_t offset, loff_t maxsize);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int whence);
extern loff_t generic_file_llseek_size(struct file *file, loff_t offset,
  int whence, loff_t maxsize, loff_t eof);
extern loff_t fixed_size_llseek(struct file *file, loff_t offset,
  int whence, loff_t size);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);
static inline int xip_truncate_page(struct address_space *mapping, loff_t from)
{
 return 0;
}



typedef void (dio_submit_t)(int rw, struct bio *bio, struct inode *inode,
       loff_t file_offset);

enum {

 DIO_LOCKING = 0x01,


 DIO_SKIP_HOLES = 0x02,
};

void dio_end_io(struct bio *bio, int error);

ssize_t __blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
 struct block_device *bdev, struct iovec *iov, loff_t offset,
 unsigned long nr_segs, get_block_t get_block, dio_iodone_t end_io,
 dio_submit_t submit_io, int flags);

static inline ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb,
  struct inode *inode, struct iovec *iov, loff_t offset,
  unsigned long nr_segs, get_block_t get_block)
{
 return __blockdev_direct_IO(rw, iocb, inode, inode->i_sb->s_bdev, iov,
        offset, nr_segs, get_block, 0, 0,
        DIO_LOCKING | DIO_SKIP_HOLES);
}


void inode_dio_wait(struct inode *inode);
void inode_dio_done(struct inode *inode);

extern struct file_operations generic_ro_fops;



extern int vfs_readlink(struct dentry *, char *, int, char *);
extern int page_readlink(struct dentry *, char *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int __page_symlink(struct inode *inode, char *symname, int len,
  int nofs);
extern int page_symlink(struct inode *inode, char *symname, int len);
extern struct inode_operations page_symlink_inode_operations;
extern void kfree_put_link(struct dentry *, struct nameidata *, void *);
extern int generic_readlink(struct dentry *, char *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
int vfs_getattr_nosec(struct path *path, struct kstat *stat);
extern int vfs_getattr(struct path *, struct kstat *);
void __inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void __inode_sub_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);

extern int vfs_readdir(struct file *, filldir_t, void *);
extern int iterate_dir(struct file *, struct dir_context *);

extern int vfs_stat( char *, struct kstat *);
extern int vfs_lstat( char *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);
extern int vfs_fstatat(int , char *, struct kstat *, int);

extern int do_vfs_ioctl(struct file *filp, unsigned int fd, unsigned int cmd,
      unsigned long arg);
extern int __generic_block_fiemap(struct inode *inode,
      struct fiemap_extent_info *fieinfo,
      loff_t start, loff_t len,
      get_block_t *get_block);
extern int generic_block_fiemap(struct inode *inode,
    struct fiemap_extent_info *fieinfo, u64 start,
    u64 len, get_block_t *get_block);

extern void get_filesystem(struct file_system_type *fs);
extern void put_filesystem(struct file_system_type *fs);
extern struct file_system_type *get_fs_type( char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *get_super_thawed(struct block_device *);
extern struct super_block *get_active_super(struct block_device *bdev);
extern void drop_super(struct super_block *sb);
extern void iterate_supers(void (*)(struct super_block *, void *), void *);
extern void iterate_supers_type(struct file_system_type *,
           void (*)(struct super_block *, void *), void *);

extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, struct dir_context *);
extern int simple_setattr(struct dentry *, struct iattr *);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct dentry *, struct kstatfs *);
extern int simple_open(struct inode *inode, struct file *file);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int noop_fsync(struct file *, loff_t, loff_t, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_write_begin(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned flags,
   struct page **pagep, void **fsdata);
extern int simple_write_end(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned copied,
   struct page *page, void *fsdata);
extern int always_delete_dentry( struct dentry *);
extern struct inode *alloc_anon_inode(struct super_block *);
extern struct dentry_operations simple_dentry_operations;

extern struct dentry *simple_lookup(struct inode *, struct dentry *, unsigned int flags);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
extern struct file_operations simple_dir_operations;
extern struct inode_operations simple_dir_inode_operations;
struct tree_descr { char *name; struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, char *);
extern int simple_fill_super(struct super_block *, unsigned long, struct tree_descr *);
extern int simple_pin_fs(struct file_system_type *, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *to, size_t count,
   loff_t *ppos, void *from, size_t available);
extern ssize_t simple_write_to_buffer(void *to, size_t available, loff_t *ppos,
  void *from, size_t count);

extern int generic_file_fsync(struct file *, loff_t, loff_t, int);

extern int generic_check_addressable(unsigned, u64);


extern int buffer_migrate_page(struct address_space *,
    struct page *, struct page *,
    enum migrate_mode);




extern int inode_change_ok( struct inode *, struct iattr *);
extern int inode_newsize_ok( struct inode *, loff_t offset);
extern void setattr_copy(struct inode *inode, struct iattr *attr);

extern int update_time(struct inode *, struct timespec *, int);
extern int file_update_time(struct file *file);

extern int generic_show_options(struct seq_file *m, struct dentry *root);
extern void save_mount_options(struct super_block *sb, char *options);
extern void replace_mount_options(struct super_block *sb, char *options);

static inline ino_t parent_ino(struct dentry *dentry)
{
 ino_t res;





 ;
 res = dentry->d_parent->d_inode->i_ino;
 ;
 return res;
}







struct simple_transaction_argresp {
 ssize_t size;
 char data[0];
};



char *simple_transaction_get(struct file *file, char *buf,
    size_t size);
ssize_t simple_transaction_read(struct file *file, char *buf,
    size_t size, loff_t *pos);
int simple_transaction_release(struct inode *inode, struct file *file);

void simple_transaction_set(struct file *file, size_t n);
static inline __attribute__((format(printf, 1, 2)))
void __simple_attr_check_format( char *fmt, ...)
{

}

int simple_attr_open(struct inode *inode, struct file *file,
       int (*get)(void *, u64 *), int (*set)(void *, u64),
       char *fmt);
int simple_attr_release(struct inode *inode, struct file *file);
ssize_t simple_attr_read(struct file *file, char *buf,
    size_t len, loff_t *ppos);
ssize_t simple_attr_write(struct file *file, char *buf,
     size_t len, loff_t *ppos);

struct ctl_table;
int proc_nr_files(struct ctl_table *table, int write,
    void *buffer, size_t *lenp, loff_t *ppos);
int proc_nr_dentry(struct ctl_table *table, int write,
    void *buffer, size_t *lenp, loff_t *ppos);
int proc_nr_inodes(struct ctl_table *table, int write,
     void *buffer, size_t *lenp, loff_t *ppos);
int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) get_filesystem_list(char *buf);
static inline int is_sxid(umode_t mode)
{
 return (mode & 0004000) || ((mode & 0002000) && (mode & 00010));
}

static inline void inode_has_no_xattr(struct inode *inode)
{
 if (!is_sxid(inode->i_mode) && (inode->i_sb->s_flags & (1<<28)))
  inode->i_flags |= 4096;
}

static inline bool dir_emit(struct dir_context *ctx,
       char *name, int namelen,
       u64 ino, unsigned type)
{
 return ctx->actor(ctx, name, namelen, ctx->pos, ino, type) == 0;
}
static inline bool dir_emit_dot(struct file *file, struct dir_context *ctx)
{
 return ctx->actor(ctx, ".", 1, ctx->pos,
     file->f_path.dentry->d_inode->i_ino, 4) == 0;
}
static inline bool dir_emit_dotdot(struct file *file, struct dir_context *ctx)
{
 return ctx->actor(ctx, "..", 2, ctx->pos,
     parent_ino(file->f_path.dentry), 4) == 0;
}
static inline bool dir_emit_dots(struct file *file, struct dir_context *ctx)
{
 if (ctx->pos == 0) {
  if (!dir_emit_dot(file, ctx))
   return _false;
  ctx->pos = 1;
 }
 if (ctx->pos == 1) {
  if (!dir_emit_dotdot(file, ctx))
   return _false;
  ctx->pos = 2;
 }
 return _true;
}
static inline bool dir_relax(struct inode *inode)
{
 ;
 ;
 return !((inode)->i_flags & 16);
}

struct mempolicy;
struct anon_vma;
struct anon_vma_chain;
struct file_ra_state;
struct user_struct;
struct writeback_control;
static inline void set_max_mapnr(unsigned long limit) { }


extern unsigned long totalram_pages;
extern void * high_memory;
extern int page_cluster;


extern int sysctl_legacy_va_layout;





extern unsigned long empty_zero_page[((1UL) << 12) / sizeof(unsigned long)]
 __attribute__((externally_visible));


extern spinlock_t pgd_lock;
extern struct list_head pgd_list;

extern struct mm_struct *pgd_page_get_mm(struct page *page);
static inline int pte_dirty(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 6);
}

static inline int pte_young(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 5);
}

static inline int pmd_young(pmd_t pmd)
{
 return pmd_flags(pmd) & (((pteval_t)(1)) << 5);
}

static inline int pte_write(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 1);
}

static inline int pte_file(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 6);
}

static inline int pte_huge(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 7);
}

static inline int pte_global(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 8);
}

static inline int pte_exec(pte_t pte)
{
 return !(pte_flags(pte) & (((pteval_t)(1)) << 63));
}

static inline int pte_special(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 9);
}

static inline unsigned long pte_pfn(pte_t pte)
{
 return (pte_val(pte) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1))))) >> 12;
}

static inline unsigned long pmd_pfn(pmd_t pmd)
{
 return (pmd_val(pmd) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1))))) >> 12;
}

static inline unsigned long pud_pfn(pud_t pud)
{
 return (pud_val(pud) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1))))) >> 12;
}



static inline int pmd_large(pmd_t pte)
{
 return pmd_flags(pte) & (((pteval_t)(1)) << 7);
}


static inline int pmd_trans_splitting(pmd_t pmd)
{
 return pmd_val(pmd) & (((pteval_t)(1)) << 9);
}

static inline int pmd_trans_huge(pmd_t pmd)
{
 return pmd_val(pmd) & (((pteval_t)(1)) << 7);
}

static inline int has_transparent_hugepage(void)
{
 return (__builtin_constant_p((0*32+ 3)) && ( ((((0*32+ 3))>>5)==0 && (1UL<<(((0*32+ 3))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|0|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+ 3))>>5)==1 && (1UL<<(((0*32+ 3))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+ 3))>>5)==2 && (1UL<<(((0*32+ 3))&31) & 0)) || ((((0*32+ 3))>>5)==3 && (1UL<<(((0*32+ 3))&31) & ((1<<((3*32+20) & 31))))) || ((((0*32+ 3))>>5)==4 && (1UL<<(((0*32+ 3))&31) & (0))) || ((((0*32+ 3))>>5)==5 && (1UL<<(((0*32+ 3))&31) & 0)) || ((((0*32+ 3))>>5)==6 && (1UL<<(((0*32+ 3))&31) & 0)) || ((((0*32+ 3))>>5)==7 && (1UL<<(((0*32+ 3))&31) & 0)) || ((((0*32+ 3))>>5)==8 && (1UL<<(((0*32+ 3))&31) & 0)) || ((((0*32+ 3))>>5)==9 && (1UL<<(((0*32+ 3))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+ 3))) ? constant_test_bit(((0*32+ 3)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((0*32+ 3)), ((unsigned long *)((&boot_cpu_data)->x86_capability)))));
}


static inline pte_t pte_set_flags(pte_t pte, pteval_t set)
{
 pteval_t v = native_pte_val(pte);

 return native_make_pte(v | set);
}

static inline pte_t pte_clear_flags(pte_t pte, pteval_t clear)
{
 pteval_t v = native_pte_val(pte);

 return native_make_pte(v & ~clear);
}

static inline pte_t pte_mkclean(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 6));
}

static inline pte_t pte_mkold(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 5));
}

static inline pte_t pte_wrprotect(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 1));
}

static inline pte_t pte_mkexec(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 63));
}

static inline pte_t pte_mkdirty(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 6) | (((pteval_t)(1)) << 11));
}

static inline pte_t pte_mkyoung(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 5));
}

static inline pte_t pte_mkwrite(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 1));
}

static inline pte_t pte_mkhuge(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 7));
}

static inline pte_t pte_clrhuge(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 7));
}

static inline pte_t pte_mkglobal(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 8));
}

static inline pte_t pte_clrglobal(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 8));
}

static inline pte_t pte_mkspecial(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 9));
}

static inline pmd_t pmd_set_flags(pmd_t pmd, pmdval_t set)
{
 pmdval_t v = native_pmd_val(pmd);

 return __pmd(v | set);
}

static inline pmd_t pmd_clear_flags(pmd_t pmd, pmdval_t clear)
{
 pmdval_t v = native_pmd_val(pmd);

 return __pmd(v & ~clear);
}

static inline pmd_t pmd_mkold(pmd_t pmd)
{
 return pmd_clear_flags(pmd, (((pteval_t)(1)) << 5));
}

static inline pmd_t pmd_wrprotect(pmd_t pmd)
{
 return pmd_clear_flags(pmd, (((pteval_t)(1)) << 1));
}

static inline pmd_t pmd_mkdirty(pmd_t pmd)
{
 return pmd_set_flags(pmd, (((pteval_t)(1)) << 6) | (((pteval_t)(1)) << 11));
}

static inline pmd_t pmd_mkhuge(pmd_t pmd)
{
 return pmd_set_flags(pmd, (((pteval_t)(1)) << 7));
}

static inline pmd_t pmd_mkyoung(pmd_t pmd)
{
 return pmd_set_flags(pmd, (((pteval_t)(1)) << 5));
}

static inline pmd_t pmd_mkwrite(pmd_t pmd)
{
 return pmd_set_flags(pmd, (((pteval_t)(1)) << 1));
}

static inline pmd_t pmd_mknotpresent(pmd_t pmd)
{
 return pmd_clear_flags(pmd, (((pteval_t)(1)) << 0));
}

static inline int pte_soft_dirty(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 11);
}

static inline int pmd_soft_dirty(pmd_t pmd)
{
 return pmd_flags(pmd) & (((pteval_t)(1)) << 11);
}

static inline pte_t pte_mksoft_dirty(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 11));
}

static inline pmd_t pmd_mksoft_dirty(pmd_t pmd)
{
 return pmd_set_flags(pmd, (((pteval_t)(1)) << 11));
}

static inline pte_t pte_file_clear_soft_dirty(pte_t pte)
{
 return pte_clear_flags(pte, (((pteval_t)(1)) << 11));
}

static inline pte_t pte_file_mksoft_dirty(pte_t pte)
{
 return pte_set_flags(pte, (((pteval_t)(1)) << 11));
}

static inline int pte_file_soft_dirty(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(1)) << 11);
}





static inline pgprotval_t massage_pgprot(pgprot_t pgprot)
{
 pgprotval_t protval = ((pgprot).pgprot);

 if (protval & (((pteval_t)(1)) << 0))
  protval &= __supported_pte_mask;

 return protval;
}

static inline pte_t pfn_pte(unsigned long page_nr, pgprot_t pgprot)
{
 return __pte(((phys_addr_t)page_nr << 12) |
       massage_pgprot(pgprot));
}

static inline pmd_t pfn_pmd(unsigned long page_nr, pgprot_t pgprot)
{
 return __pmd(((phys_addr_t)page_nr << 12) |
       massage_pgprot(pgprot));
}

static inline pte_t pte_modify(pte_t pte, pgprot_t newprot)
{
 pteval_t val = pte_val(pte);





 val &= (((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))) | (((pteval_t)(1)) << 4) | (((pteval_t)(1)) << 3) | (((pteval_t)(1)) << 9) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6) | (((pteval_t)(1)) << 11));
 val |= massage_pgprot(newprot) & ~(((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))) | (((pteval_t)(1)) << 4) | (((pteval_t)(1)) << 3) | (((pteval_t)(1)) << 9) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6) | (((pteval_t)(1)) << 11));

 return __pte(val);
}

static inline pmd_t pmd_modify(pmd_t pmd, pgprot_t newprot)
{
 pmdval_t val = pmd_val(pmd);

 val &= ((((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))) | (((pteval_t)(1)) << 4) | (((pteval_t)(1)) << 3) | (((pteval_t)(1)) << 9) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6) | (((pteval_t)(1)) << 11)) | (((pteval_t)(1)) << 7));
 val |= massage_pgprot(newprot) & ~((((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))) | (((pteval_t)(1)) << 4) | (((pteval_t)(1)) << 3) | (((pteval_t)(1)) << 9) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6) | (((pteval_t)(1)) << 11)) | (((pteval_t)(1)) << 7));

 return __pmd(val);
}



static inline pgprot_t pgprot_modify(pgprot_t oldprot, pgprot_t newprot)
{
 pgprotval_t preservebits = ((oldprot).pgprot) & (((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))) | (((pteval_t)(1)) << 4) | (((pteval_t)(1)) << 3) | (((pteval_t)(1)) << 9) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6) | (((pteval_t)(1)) << 11));
 pgprotval_t addbits = ((newprot).pgprot);
 return ((pgprot_t) { (preservebits | addbits) } );
}





static inline int is_new_memtype_allowed(u64 paddr, unsigned long size,
      unsigned long flags,
      unsigned long new_flags)
{



 if (x86_platform.is_untracked_pat_range(paddr, paddr + size))
  return 1;







 if ((flags == ((((pteval_t)(1)) << 4)) &&
      new_flags == (0)) ||
     (flags == ((((pteval_t)(1)) << 3)) &&
      new_flags == (0))) {
  return 0;
 }

 return 1;
}

pmd_t *populate_extra_pmd(unsigned long vaddr);
pte_t *populate_extra_pte(unsigned long vaddr);





extern pud_t level3_kernel_pgt[512];
extern pud_t level3_ident_pgt[512];
extern pmd_t level2_kernel_pgt[512];
extern pmd_t level2_fixmap_pgt[512];
extern pmd_t level2_ident_pgt[512];
extern pgd_t init_level4_pgt[];



extern void paging_init(void);
struct mm_struct;

void set_pte_vaddr_pud(pud_t *pud_page, unsigned long vaddr, pte_t new_pte);


static inline void native_pte_clear(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 *ptep = native_make_pte(0);
}

static inline void native_set_pte(pte_t *ptep, pte_t pte)
{
 *ptep = pte;
}

static inline void native_set_pte_atomic(pte_t *ptep, pte_t pte)
{
 native_set_pte(ptep, pte);
}

static inline void native_set_pmd(pmd_t *pmdp, pmd_t pmd)
{
 *pmdp = pmd;
}

static inline void native_pmd_clear(pmd_t *pmd)
{
 native_set_pmd(pmd, native_make_pmd(0));
}

static inline pte_t native_ptep_get_and_clear(pte_t *xp)
{

 return native_make_pte(({ __typeof__ (*((&xp->pte))) __ret = ((0)); switch (sizeof(*((&xp->pte)))) { case 1: asm ("" "xchg" "b %b0, %1\n" : "+q" (__ret), "+m" (*((&xp->pte))) : : "memory", "cc"); break; case 2: asm ("" "xchg" "w %w0, %1\n" : "+r" (__ret), "+m" (*((&xp->pte))) : : "memory", "cc"); break; case 4: asm ("" "xchg" "l %0, %1\n" : "+r" (__ret), "+m" (*((&xp->pte))) : : "memory", "cc"); break; case 8: asm ("" "xchg" "q %q0, %1\n" : "+r" (__ret), "+m" (*((&xp->pte))) : : "memory", "cc"); break; default: __xchg_wrong_size(); } __ret; }));







}

static inline pmd_t native_pmdp_get_and_clear(pmd_t *xp)
{

 return native_make_pmd(({ __typeof__ (*((&xp->pmd))) __ret = ((0)); switch (sizeof(*((&xp->pmd)))) { case 1: asm ("" "xchg" "b %b0, %1\n" : "+q" (__ret), "+m" (*((&xp->pmd))) : : "memory", "cc"); break; case 2: asm ("" "xchg" "w %w0, %1\n" : "+r" (__ret), "+m" (*((&xp->pmd))) : : "memory", "cc"); break; case 4: asm ("" "xchg" "l %0, %1\n" : "+r" (__ret), "+m" (*((&xp->pmd))) : : "memory", "cc"); break; case 8: asm ("" "xchg" "q %q0, %1\n" : "+r" (__ret), "+m" (*((&xp->pmd))) : : "memory", "cc"); break; default: __xchg_wrong_size(); } __ret; }));







}

static inline void native_set_pud(pud_t *pudp, pud_t pud)
{
 *pudp = pud;
}

static inline void native_pud_clear(pud_t *pud)
{
 native_set_pud(pud, native_make_pud(0));
}

static inline void native_set_pgd(pgd_t *pgdp, pgd_t pgd)
{
 *pgdp = pgd;
}

static inline void native_pgd_clear(pgd_t *pgd)
{
 native_set_pgd(pgd, native_make_pgd(0));
}

extern void sync_global_pgds(unsigned long start, unsigned long end);
static inline int pgd_large(pgd_t pgd) { return 0; }
extern int kern_addr_valid(unsigned long addr);
extern void cleanup_highmap(void);
extern void init_extra_mapping_uc(unsigned long phys, unsigned long size);
extern void init_extra_mapping_wb(unsigned long phys, unsigned long size);







static inline int pte_none(pte_t pte)
{
 return !pte.pte;
}


static inline int pte_same(pte_t a, pte_t b)
{
 return a.pte == b.pte;
}

static inline int pte_present(pte_t a)
{
 return pte_flags(a) & ((((pteval_t)(1)) << 0) | (((pteval_t)(1)) << 8) |
          (((pteval_t)(1)) << 8));
}


static inline bool pte_accessible(struct mm_struct *mm, pte_t a)
{
 if (pte_flags(a) & (((pteval_t)(1)) << 0))
  return _true;

 if ((pte_flags(a) & ((((pteval_t)(1)) << 8) | (((pteval_t)(1)) << 8))) &&
   mm_tlb_flush_pending(mm))
  return _true;

 return _false;
}

static inline int pte_hidden(pte_t pte)
{
 return pte_flags(pte) & (((pteval_t)(0)));
}

static inline int pmd_present(pmd_t pmd)
{






 return pmd_flags(pmd) & ((((pteval_t)(1)) << 0) | (((pteval_t)(1)) << 8) | (((pteval_t)(1)) << 7) |
     (((pteval_t)(1)) << 8));
}

static inline int pmd_none(pmd_t pmd)
{


 return (unsigned long)native_pmd_val(pmd) == 0;
}

static inline unsigned long pmd_page_vaddr(pmd_t pmd)
{
 return (unsigned long)((void *)((unsigned long)(pmd_val(pmd) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))))+((unsigned long)(0xffff880000000000UL))));
}
static inline unsigned long pmd_index(unsigned long address)
{
 return (address >> 21) & (512 - 1);
}
static inline unsigned long pte_index(unsigned long address)
{
 return (address >> 12) & (512 - 1);
}

static inline pte_t *pte_offset_kernel(pmd_t *pmd, unsigned long address)
{
 return (pte_t *)pmd_page_vaddr(*pmd) + pte_index(address);
}

static inline int pmd_bad(pmd_t pmd)
{


 if ((pmd_flags(pmd) & ((((pteval_t)(1)) << 8)|(((pteval_t)(1)) << 0))) == (((pteval_t)(1)) << 8))
  return 0;

 return (pmd_flags(pmd) & ~(((pteval_t)(1)) << 2)) != ((((pteval_t)(1)) << 0) | (((pteval_t)(1)) << 1) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6));
}

static inline unsigned long pages_to_mb(unsigned long npg)
{
 return npg >> (20 - 12);
}


static inline int pud_none(pud_t pud)
{
 return native_pud_val(pud) == 0;
}

static inline int pud_present(pud_t pud)
{
 return pud_flags(pud) & (((pteval_t)(1)) << 0);
}

static inline unsigned long pud_page_vaddr(pud_t pud)
{
 return (unsigned long)((void *)((unsigned long)((unsigned long)pud_val(pud) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))))+((unsigned long)(0xffff880000000000UL))));
}
static inline pmd_t *pmd_offset(pud_t *pud, unsigned long address)
{
 return (pmd_t *)pud_page_vaddr(*pud) + pmd_index(address);
}

static inline int pud_large(pud_t pud)
{
 return (pud_val(pud) & ((((pteval_t)(1)) << 7) | (((pteval_t)(1)) << 0))) ==
  ((((pteval_t)(1)) << 7) | (((pteval_t)(1)) << 0));
}

static inline int pud_bad(pud_t pud)
{
 return (pud_flags(pud) & ~(((((pteval_t)(1)) << 0) | (((pteval_t)(1)) << 1) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6)) | (((pteval_t)(1)) << 2))) != 0;
}
static inline int pgd_present(pgd_t pgd)
{
 return pgd_flags(pgd) & (((pteval_t)(1)) << 0);
}

static inline unsigned long pgd_page_vaddr(pgd_t pgd)
{
 return (unsigned long)((void *)((unsigned long)((unsigned long)pgd_val(pgd) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1)))))+((unsigned long)(0xffff880000000000UL))));
}
static inline unsigned long pud_index(unsigned long address)
{
 return (address >> 30) & (512 - 1);
}

static inline pud_t *pud_offset(pgd_t *pgd, unsigned long address)
{
 return (pud_t *)pgd_page_vaddr(*pgd) + pud_index(address);
}

static inline int pgd_bad(pgd_t pgd)
{
 return (pgd_flags(pgd) & ~(((pteval_t)(1)) << 2)) != ((((pteval_t)(1)) << 0) | (((pteval_t)(1)) << 1) | (((pteval_t)(1)) << 5) | (((pteval_t)(1)) << 6));
}

static inline int pgd_none(pgd_t pgd)
{
 return !native_pgd_val(pgd);
}
extern int direct_gbpages;
void init_mem_mapping(void);
void early_alloc_pgt_buf(void);


static inline pte_t native_local_ptep_get_and_clear(pte_t *ptep)
{
 pte_t res = *ptep;


 native_pte_clear(0, 0, ptep);
 return res;
}

static inline pmd_t native_local_pmdp_get_and_clear(pmd_t *pmdp)
{
 pmd_t res = *pmdp;

 native_pmd_clear(pmdp);
 return res;
}

static inline void native_set_pte_at(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep , pte_t pte)
{
 native_set_pte(ptep, pte);
}

static inline void native_set_pmd_at(struct mm_struct *mm, unsigned long addr,
         pmd_t *pmdp , pmd_t pmd)
{
 native_set_pmd(pmdp, pmd);
}
struct vm_area_struct;


extern int ptep_set_access_flags(struct vm_area_struct *vma,
     unsigned long address, pte_t *ptep,
     pte_t entry, int dirty);


extern int ptep_test_and_clear_young(struct vm_area_struct *vma,
         unsigned long addr, pte_t *ptep);


extern int ptep_clear_flush_young(struct vm_area_struct *vma,
      unsigned long address, pte_t *ptep);


static inline pte_t ptep_get_and_clear(struct mm_struct *mm, unsigned long addr,
           pte_t *ptep)
{
 pte_t pte = native_ptep_get_and_clear(ptep);
 pte_update(mm, addr, ptep);
 return pte;
}


static inline pte_t ptep_get_and_clear_full(struct mm_struct *mm,
         unsigned long addr, pte_t *ptep,
         int full)
{
 pte_t pte;
 if (full) {




  pte = native_local_ptep_get_and_clear(ptep);
 } else {
  pte = ptep_get_and_clear(mm, addr, ptep);
 }
 return pte;
}


static inline void ptep_set_wrprotect(struct mm_struct *mm,
          unsigned long addr, pte_t *ptep)
{
 clear_bit(1, (unsigned long *)&ptep->pte);
 pte_update(mm, addr, ptep);
}






extern int pmdp_set_access_flags(struct vm_area_struct *vma,
     unsigned long address, pmd_t *pmdp,
     pmd_t entry, int dirty);


extern int pmdp_test_and_clear_young(struct vm_area_struct *vma,
         unsigned long addr, pmd_t *pmdp);


extern int pmdp_clear_flush_young(struct vm_area_struct *vma,
      unsigned long address, pmd_t *pmdp);



extern void pmdp_splitting_flush(struct vm_area_struct *vma,
     unsigned long addr, pmd_t *pmdp);


static inline int pmd_write(pmd_t pmd)
{
 return pmd_flags(pmd) & (((pteval_t)(1)) << 1);
}


static inline pmd_t pmdp_get_and_clear(struct mm_struct *mm, unsigned long addr,
           pmd_t *pmdp)
{
 pmd_t pmd = native_pmdp_get_and_clear(pmdp);
 pmd_update(mm, addr, pmdp);
 return pmd;
}


static inline void pmdp_set_wrprotect(struct mm_struct *mm,
          unsigned long addr, pmd_t *pmdp)
{
 clear_bit(1, (unsigned long *)pmdp);
 pmd_update(mm, addr, pmdp);
}
static inline void clone_pgd_range(pgd_t *dst, pgd_t *src, int count)
{
       memcpy(dst, src, count * sizeof(pgd_t));
}


static inline int page_level_shift(enum pg_level level)
{
 return (12 - ( __builtin_constant_p(512) ? ( (512) < 1 ? ____ilog2_NaN() : (512) & (1ULL << 63) ? 63 : (512) & (1ULL << 62) ? 62 : (512) & (1ULL << 61) ? 61 : (512) & (1ULL << 60) ? 60 : (512) & (1ULL << 59) ? 59 : (512) & (1ULL << 58) ? 58 : (512) & (1ULL << 57) ? 57 : (512) & (1ULL << 56) ? 56 : (512) & (1ULL << 55) ? 55 : (512) & (1ULL << 54) ? 54 : (512) & (1ULL << 53) ? 53 : (512) & (1ULL << 52) ? 52 : (512) & (1ULL << 51) ? 51 : (512) & (1ULL << 50) ? 50 : (512) & (1ULL << 49) ? 49 : (512) & (1ULL << 48) ? 48 : (512) & (1ULL << 47) ? 47 : (512) & (1ULL << 46) ? 46 : (512) & (1ULL << 45) ? 45 : (512) & (1ULL << 44) ? 44 : (512) & (1ULL << 43) ? 43 : (512) & (1ULL << 42) ? 42 : (512) & (1ULL << 41) ? 41 : (512) & (1ULL << 40) ? 40 : (512) & (1ULL << 39) ? 39 : (512) & (1ULL << 38) ? 38 : (512) & (1ULL << 37) ? 37 : (512) & (1ULL << 36) ? 36 : (512) & (1ULL << 35) ? 35 : (512) & (1ULL << 34) ? 34 : (512) & (1ULL << 33) ? 33 : (512) & (1ULL << 32) ? 32 : (512) & (1ULL << 31) ? 31 : (512) & (1ULL << 30) ? 30 : (512) & (1ULL << 29) ? 29 : (512) & (1ULL << 28) ? 28 : (512) & (1ULL << 27) ? 27 : (512) & (1ULL << 26) ? 26 : (512) & (1ULL << 25) ? 25 : (512) & (1ULL << 24) ? 24 : (512) & (1ULL << 23) ? 23 : (512) & (1ULL << 22) ? 22 : (512) & (1ULL << 21) ? 21 : (512) & (1ULL << 20) ? 20 : (512) & (1ULL << 19) ? 19 : (512) & (1ULL << 18) ? 18 : (512) & (1ULL << 17) ? 17 : (512) & (1ULL << 16) ? 16 : (512) & (1ULL << 15) ? 15 : (512) & (1ULL << 14) ? 14 : (512) & (1ULL << 13) ? 13 : (512) & (1ULL << 12) ? 12 : (512) & (1ULL << 11) ? 11 : (512) & (1ULL << 10) ? 10 : (512) & (1ULL << 9) ? 9 : (512) & (1ULL << 8) ? 8 : (512) & (1ULL << 7) ? 7 : (512) & (1ULL << 6) ? 6 : (512) & (1ULL << 5) ? 5 : (512) & (1ULL << 4) ? 4 : (512) & (1ULL << 3) ? 3 : (512) & (1ULL << 2) ? 2 : (512) & (1ULL << 1) ? 1 : (512) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(512) <= 4) ? __ilog2_u32(512) : __ilog2_u64(512) )) + level * ( __builtin_constant_p(512) ? ( (512) < 1 ? ____ilog2_NaN() : (512) & (1ULL << 63) ? 63 : (512) & (1ULL << 62) ? 62 : (512) & (1ULL << 61) ? 61 : (512) & (1ULL << 60) ? 60 : (512) & (1ULL << 59) ? 59 : (512) & (1ULL << 58) ? 58 : (512) & (1ULL << 57) ? 57 : (512) & (1ULL << 56) ? 56 : (512) & (1ULL << 55) ? 55 : (512) & (1ULL << 54) ? 54 : (512) & (1ULL << 53) ? 53 : (512) & (1ULL << 52) ? 52 : (512) & (1ULL << 51) ? 51 : (512) & (1ULL << 50) ? 50 : (512) & (1ULL << 49) ? 49 : (512) & (1ULL << 48) ? 48 : (512) & (1ULL << 47) ? 47 : (512) & (1ULL << 46) ? 46 : (512) & (1ULL << 45) ? 45 : (512) & (1ULL << 44) ? 44 : (512) & (1ULL << 43) ? 43 : (512) & (1ULL << 42) ? 42 : (512) & (1ULL << 41) ? 41 : (512) & (1ULL << 40) ? 40 : (512) & (1ULL << 39) ? 39 : (512) & (1ULL << 38) ? 38 : (512) & (1ULL << 37) ? 37 : (512) & (1ULL << 36) ? 36 : (512) & (1ULL << 35) ? 35 : (512) & (1ULL << 34) ? 34 : (512) & (1ULL << 33) ? 33 : (512) & (1ULL << 32) ? 32 : (512) & (1ULL << 31) ? 31 : (512) & (1ULL << 30) ? 30 : (512) & (1ULL << 29) ? 29 : (512) & (1ULL << 28) ? 28 : (512) & (1ULL << 27) ? 27 : (512) & (1ULL << 26) ? 26 : (512) & (1ULL << 25) ? 25 : (512) & (1ULL << 24) ? 24 : (512) & (1ULL << 23) ? 23 : (512) & (1ULL << 22) ? 22 : (512) & (1ULL << 21) ? 21 : (512) & (1ULL << 20) ? 20 : (512) & (1ULL << 19) ? 19 : (512) & (1ULL << 18) ? 18 : (512) & (1ULL << 17) ? 17 : (512) & (1ULL << 16) ? 16 : (512) & (1ULL << 15) ? 15 : (512) & (1ULL << 14) ? 14 : (512) & (1ULL << 13) ? 13 : (512) & (1ULL << 12) ? 12 : (512) & (1ULL << 11) ? 11 : (512) & (1ULL << 10) ? 10 : (512) & (1ULL << 9) ? 9 : (512) & (1ULL << 8) ? 8 : (512) & (1ULL << 7) ? 7 : (512) & (1ULL << 6) ? 6 : (512) & (1ULL << 5) ? 5 : (512) & (1ULL << 4) ? 4 : (512) & (1ULL << 3) ? 3 : (512) & (1ULL << 2) ? 2 : (512) & (1ULL << 1) ? 1 : (512) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(512) <= 4) ? __ilog2_u32(512) : __ilog2_u64(512) );
}
static inline unsigned long page_level_size(enum pg_level level)
{
 return 1UL << page_level_shift(level);
}
static inline unsigned long page_level_mask(enum pg_level level)
{
 return ~(page_level_size(level) - 1);
}





static inline void update_mmu_cache(struct vm_area_struct *vma,
  unsigned long addr, pte_t *ptep)
{
}
static inline void update_mmu_cache_pmd(struct vm_area_struct *vma,
  unsigned long addr, pmd_t *pmd)
{
}

static inline pte_t pte_swp_mksoft_dirty(pte_t pte)
{
 (0);
 return pte_set_flags(pte, (((pteval_t)(1)) << 7));
}

static inline int pte_swp_soft_dirty(pte_t pte)
{
 (0);
 return pte_flags(pte) & (((pteval_t)(1)) << 7);
}

static inline pte_t pte_swp_clear_soft_dirty(pte_t pte)
{
 (0);
 return pte_clear_flags(pte, (((pteval_t)(1)) << 7));
}

static inline void pte_clear_not_present_full(struct mm_struct *mm,
           unsigned long address,
           pte_t *ptep,
           int full)
{
 pte_clear(mm, address, ptep);
}



extern pte_t ptep_clear_flush(struct vm_area_struct *vma,
         unsigned long address,
         pte_t *ptep);



extern pmd_t pmdp_clear_flush(struct vm_area_struct *vma,
         unsigned long address,
         pmd_t *pmdp);
extern void pgtable_trans_huge_deposit(struct mm_struct *mm, pmd_t *pmdp,
           pgtable_t pgtable);



extern pgtable_t pgtable_trans_huge_withdraw(struct mm_struct *mm, pmd_t *pmdp);



extern void pmdp_invalidate(struct vm_area_struct *vma, unsigned long address,
       pmd_t *pmdp);
static inline int pmd_same(pmd_t pmd_a, pmd_t pmd_b)
{
 return pmd_val(pmd_a) == pmd_val(pmd_b);
}
void pgd_clear_bad(pgd_t *);
void pud_clear_bad(pud_t *);
void pmd_clear_bad(pmd_t *);

static inline int pgd_none_or_clear_bad(pgd_t *pgd)
{
 if (pgd_none(*pgd))
  return 1;
 if (__builtin_expect(!!(pgd_bad(*pgd)), 0)) {
  pgd_clear_bad(pgd);
  return 1;
 }
 return 0;
}

static inline int pud_none_or_clear_bad(pud_t *pud)
{
 if (pud_none(*pud))
  return 1;
 if (__builtin_expect(!!(pud_bad(*pud)), 0)) {
  pud_clear_bad(pud);
  return 1;
 }
 return 0;
}

static inline int pmd_none_or_clear_bad(pmd_t *pmd)
{
 if (pmd_none(*pmd))
  return 1;
 if (__builtin_expect(!!(pmd_bad(*pmd)), 0)) {
  pmd_clear_bad(pmd);
  return 1;
 }
 return 0;
}

static inline pte_t __ptep_modify_prot_start(struct mm_struct *mm,
          unsigned long addr,
          pte_t *ptep)
{





 return ptep_get_and_clear(mm, addr, ptep);
}

static inline void __ptep_modify_prot_commit(struct mm_struct *mm,
          unsigned long addr,
          pte_t *ptep, pte_t pte)
{




 set_pte_at(mm, addr, ptep, pte);
}
extern int track_pfn_remap(struct vm_area_struct *vma, pgprot_t *prot,
      unsigned long pfn, unsigned long addr,
      unsigned long size);
extern int track_pfn_insert(struct vm_area_struct *vma, pgprot_t *prot,
       unsigned long pfn);
extern int track_pfn_copy(struct vm_area_struct *vma);
extern void untrack_pfn(struct vm_area_struct *vma, unsigned long pfn,
   unsigned long size);
static inline int is_zero_pfn(unsigned long pfn)
{
 extern unsigned long zero_pfn;
 return pfn == zero_pfn;
}

static inline unsigned long my_zero_pfn(unsigned long addr)
{
 extern unsigned long zero_pfn;
 return zero_pfn;
}
static inline pmd_t pmd_read_atomic(pmd_t *pmdp)
{





 return *pmdp;
}



static inline int pmd_move_must_withdraw(spinlock_t *new_pmd_ptl,
      spinlock_t *old_pmd_ptl)
{




 return new_pmd_ptl != old_pmd_ptl;
}
static inline int pmd_none_or_trans_huge_or_clear_bad(pmd_t *pmd)
{
 pmd_t pmdval = pmd_read_atomic(pmd);
 __asm__ __volatile__("": : :"memory");

 if (pmd_none(pmdval) || pmd_trans_huge(pmdval))
  return 1;
 if (__builtin_expect(!!(pmd_bad(pmdval)), 0)) {
  pmd_clear_bad(pmd);
  return 1;
 }
 return 0;
}
static inline int pmd_trans_unstable(pmd_t *pmd)
{

 return pmd_none_or_trans_huge_or_clear_bad(pmd);



}
static inline int pte_numa(pte_t pte)
{
 return (pte_flags(pte) &
  ((((pteval_t)(1)) << 8)|(((pteval_t)(1)) << 0))) == (((pteval_t)(1)) << 8);
}



static inline int pmd_numa(pmd_t pmd)
{
 return (pmd_flags(pmd) &
  ((((pteval_t)(1)) << 8)|(((pteval_t)(1)) << 0))) == (((pteval_t)(1)) << 8);
}
static inline pte_t pte_mknonnuma(pte_t pte)
{
 pte = pte_clear_flags(pte, (((pteval_t)(1)) << 8));
 return pte_set_flags(pte, (((pteval_t)(1)) << 0)|(((pteval_t)(1)) << 5));
}



static inline pmd_t pmd_mknonnuma(pmd_t pmd)
{
 pmd = pmd_clear_flags(pmd, (((pteval_t)(1)) << 8));
 return pmd_set_flags(pmd, (((pteval_t)(1)) << 0)|(((pteval_t)(1)) << 5));
}



static inline pte_t pte_mknuma(pte_t pte)
{
 pte = pte_set_flags(pte, (((pteval_t)(1)) << 8));
 return pte_clear_flags(pte, (((pteval_t)(1)) << 0));
}



static inline pmd_t pmd_mknuma(pmd_t pmd)
{
 pmd = pmd_set_flags(pmd, (((pteval_t)(1)) << 8));
 return pmd_clear_flags(pmd, (((pteval_t)(1)) << 0));
}






extern unsigned long sysctl_user_reserve_kbytes;
extern unsigned long sysctl_admin_reserve_kbytes;
extern struct kmem_cache *vm_area_cachep;
extern pgprot_t protection_map[16];
struct vm_fault {
 unsigned int flags;
 unsigned long pgoff;
 void *virtual_address;

 struct page *page;




};






struct vm_operations_struct {
 void (*open)(struct vm_area_struct * area);
 void (*close)(struct vm_area_struct * area);
 int (*fault)(struct vm_area_struct *vma, struct vm_fault *vmf);



 int (*page_mkwrite)(struct vm_area_struct *vma, struct vm_fault *vmf);




 int (*access)(struct vm_area_struct *vma, unsigned long addr,
        void *buf, int len, int write);
 int (*set_policy)(struct vm_area_struct *vma, struct mempolicy *_new);
 struct mempolicy *(*get_policy)(struct vm_area_struct *vma,
     unsigned long addr);
 int (*migrate)(struct vm_area_struct *vma, nodemask_t *from,
  nodemask_t *to, unsigned long flags);


 int (*remap_pages)(struct vm_area_struct *vma, unsigned long addr,
      unsigned long size, unsigned long pgoff);
};

struct mmu_gather;
struct inode;





static inline void set_freepage_migratetype(struct page *page, int migratetype)
{
 page->index = migratetype;
}


static inline int get_freepage_migratetype(struct page *page)
{
 return page->index;
}





enum pageflags {
 PG_locked,
 PG_error,
 PG_referenced,
 PG_uptodate,
 PG_dirty,
 PG_lru,
 PG_active,
 PG_slab,
 PG_owner_priv_1,
 PG_arch_1,
 PG_reserved,
 PG_private,
 PG_private_2,
 PG_writeback,

 PG_head,
 PG_tail,



 PG_swapcache,
 PG_mappedtodisk,
 PG_reclaim,
 PG_swapbacked,
 PG_unevictable,

 PG_mlocked,


 PG_uncached,


 PG_hwpoison,


 PG_compound_lock,

 PG_readaheadunused,
 __NR_PAGEFLAGS,


 PG_checked = PG_owner_priv_1,





 PG_fscache = PG_private_2,


 PG_pinned = PG_owner_priv_1,
 PG_savepinned = PG_dirty,


 PG_slob_free = PG_private,
};
struct page;

static inline int PageLocked( struct page *page) { return (__builtin_constant_p((PG_locked)) ? constant_test_bit((PG_locked), (&page->flags)) : variable_test_bit((PG_locked), (&page->flags))); }
static inline int PageError( struct page *page) { return (__builtin_constant_p((PG_error)) ? constant_test_bit((PG_error), (&page->flags)) : variable_test_bit((PG_error), (&page->flags))); } static inline void SetPageError(struct page *page) { set_bit(PG_error, &page->flags); } static inline void ClearPageError(struct page *page) { clear_bit(PG_error, &page->flags); } static inline int TestClearPageError(struct page *page) { return test_and_clear_bit(PG_error, &page->flags); }
static inline int PageReferenced( struct page *page) { return (__builtin_constant_p((PG_referenced)) ? constant_test_bit((PG_referenced), (&page->flags)) : variable_test_bit((PG_referenced), (&page->flags))); } static inline void SetPageReferenced(struct page *page) { set_bit(PG_referenced, &page->flags); } static inline void ClearPageReferenced(struct page *page) { clear_bit(PG_referenced, &page->flags); } static inline int TestClearPageReferenced(struct page *page) { return test_and_clear_bit(PG_referenced, &page->flags); }
static inline int PageDirty( struct page *page) { return (__builtin_constant_p((PG_dirty)) ? constant_test_bit((PG_dirty), (&page->flags)) : variable_test_bit((PG_dirty), (&page->flags))); } static inline void SetPageDirty(struct page *page) { set_bit(PG_dirty, &page->flags); } static inline void ClearPageDirty(struct page *page) { clear_bit(PG_dirty, &page->flags); } static inline int TestSetPageDirty(struct page *page) { return test_and_set_bit(PG_dirty, &page->flags); } static inline int TestClearPageDirty(struct page *page) { return test_and_clear_bit(PG_dirty, &page->flags); } static inline void __ClearPageDirty(struct page *page) { __clear_bit(PG_dirty, &page->flags); }
static inline int PageLRU( struct page *page) { return (__builtin_constant_p((PG_lru)) ? constant_test_bit((PG_lru), (&page->flags)) : variable_test_bit((PG_lru), (&page->flags))); } static inline void SetPageLRU(struct page *page) { set_bit(PG_lru, &page->flags); } static inline void ClearPageLRU(struct page *page) { clear_bit(PG_lru, &page->flags); } static inline void __ClearPageLRU(struct page *page) { __clear_bit(PG_lru, &page->flags); }
static inline int PageActive( struct page *page) { return (__builtin_constant_p((PG_active)) ? constant_test_bit((PG_active), (&page->flags)) : variable_test_bit((PG_active), (&page->flags))); } static inline void SetPageActive(struct page *page) { set_bit(PG_active, &page->flags); } static inline void ClearPageActive(struct page *page) { clear_bit(PG_active, &page->flags); } static inline void __ClearPageActive(struct page *page) { __clear_bit(PG_active, &page->flags); }
 static inline int TestClearPageActive(struct page *page) { return test_and_clear_bit(PG_active, &page->flags); }
static inline int PageSlab( struct page *page) { return (__builtin_constant_p((PG_slab)) ? constant_test_bit((PG_slab), (&page->flags)) : variable_test_bit((PG_slab), (&page->flags))); } static inline void __SetPageSlab(struct page *page) { __set_bit(PG_slab, &page->flags); } static inline void __ClearPageSlab(struct page *page) { __clear_bit(PG_slab, &page->flags); }
static inline int PageChecked( struct page *page) { return (__builtin_constant_p((PG_checked)) ? constant_test_bit((PG_checked), (&page->flags)) : variable_test_bit((PG_checked), (&page->flags))); } static inline void SetPageChecked(struct page *page) { set_bit(PG_checked, &page->flags); } static inline void ClearPageChecked(struct page *page) { clear_bit(PG_checked, &page->flags); }
static inline int PagePinned( struct page *page) { return (__builtin_constant_p((PG_pinned)) ? constant_test_bit((PG_pinned), (&page->flags)) : variable_test_bit((PG_pinned), (&page->flags))); } static inline void SetPagePinned(struct page *page) { set_bit(PG_pinned, &page->flags); } static inline void ClearPagePinned(struct page *page) { clear_bit(PG_pinned, &page->flags); } static inline int TestSetPagePinned(struct page *page) { return test_and_set_bit(PG_pinned, &page->flags); } static inline int TestClearPagePinned(struct page *page) { return test_and_clear_bit(PG_pinned, &page->flags); }
static inline int PageSavePinned( struct page *page) { return (__builtin_constant_p((PG_savepinned)) ? constant_test_bit((PG_savepinned), (&page->flags)) : variable_test_bit((PG_savepinned), (&page->flags))); } static inline void SetPageSavePinned(struct page *page) { set_bit(PG_savepinned, &page->flags); } static inline void ClearPageSavePinned(struct page *page) { clear_bit(PG_savepinned, &page->flags); };
static inline int PageReserved( struct page *page) { return (__builtin_constant_p((PG_reserved)) ? constant_test_bit((PG_reserved), (&page->flags)) : variable_test_bit((PG_reserved), (&page->flags))); } static inline void SetPageReserved(struct page *page) { set_bit(PG_reserved, &page->flags); } static inline void ClearPageReserved(struct page *page) { clear_bit(PG_reserved, &page->flags); } static inline void __ClearPageReserved(struct page *page) { __clear_bit(PG_reserved, &page->flags); }
static inline int PageSwapBacked( struct page *page) { return (__builtin_constant_p((PG_swapbacked)) ? constant_test_bit((PG_swapbacked), (&page->flags)) : variable_test_bit((PG_swapbacked), (&page->flags))); } static inline void SetPageSwapBacked(struct page *page) { set_bit(PG_swapbacked, &page->flags); } static inline void ClearPageSwapBacked(struct page *page) { clear_bit(PG_swapbacked, &page->flags); } static inline void __ClearPageSwapBacked(struct page *page) { __clear_bit(PG_swapbacked, &page->flags); }

static inline int PageSlobFree( struct page *page) { return (__builtin_constant_p((PG_slob_free)) ? constant_test_bit((PG_slob_free), (&page->flags)) : variable_test_bit((PG_slob_free), (&page->flags))); } static inline void __SetPageSlobFree(struct page *page) { __set_bit(PG_slob_free, &page->flags); } static inline void __ClearPageSlobFree(struct page *page) { __clear_bit(PG_slob_free, &page->flags); }







       


static inline int PagePrivate( struct page *page) { return (__builtin_constant_p((PG_private)) ? constant_test_bit((PG_private), (&page->flags)) : variable_test_bit((PG_private), (&page->flags))); } static inline void SetPagePrivate(struct page *page) { set_bit(PG_private, &page->flags); } static inline void ClearPagePrivate(struct page *page) { clear_bit(PG_private, &page->flags); } static inline void __SetPagePrivate(struct page *page) { __set_bit(PG_private, &page->flags); }
 static inline void __ClearPagePrivate(struct page *page) { __clear_bit(PG_private, &page->flags); }

       

static inline int PagePrivate2( struct page *page) { return (__builtin_constant_p((PG_private_2)) ? constant_test_bit((PG_private_2), (&page->flags)) : variable_test_bit((PG_private_2), (&page->flags))); } static inline void SetPagePrivate2(struct page *page) { set_bit(PG_private_2, &page->flags); } static inline void ClearPagePrivate2(struct page *page) { clear_bit(PG_private_2, &page->flags); } static inline int TestSetPagePrivate2(struct page *page) { return test_and_set_bit(PG_private_2, &page->flags); } static inline int TestClearPagePrivate2(struct page *page) { return test_and_clear_bit(PG_private_2, &page->flags); }
static inline int PageOwnerPriv1( struct page *page) { return (__builtin_constant_p((PG_owner_priv_1)) ? constant_test_bit((PG_owner_priv_1), (&page->flags)) : variable_test_bit((PG_owner_priv_1), (&page->flags))); } static inline void SetPageOwnerPriv1(struct page *page) { set_bit(PG_owner_priv_1, &page->flags); } static inline void ClearPageOwnerPriv1(struct page *page) { clear_bit(PG_owner_priv_1, &page->flags); } static inline int TestClearPageOwnerPriv1(struct page *page) { return test_and_clear_bit(PG_owner_priv_1, &page->flags); }





static inline int PageWriteback( struct page *page) { return (__builtin_constant_p((PG_writeback)) ? constant_test_bit((PG_writeback), (&page->flags)) : variable_test_bit((PG_writeback), (&page->flags))); } static inline int TestSetPageWriteback(struct page *page) { return test_and_set_bit(PG_writeback, &page->flags); } static inline int TestClearPageWriteback(struct page *page) { return test_and_clear_bit(PG_writeback, &page->flags); }
static inline int PageMappedToDisk( struct page *page) { return (__builtin_constant_p((PG_mappedtodisk)) ? constant_test_bit((PG_mappedtodisk), (&page->flags)) : variable_test_bit((PG_mappedtodisk), (&page->flags))); } static inline void SetPageMappedToDisk(struct page *page) { set_bit(PG_mappedtodisk, &page->flags); } static inline void ClearPageMappedToDisk(struct page *page) { clear_bit(PG_mappedtodisk, &page->flags); }


static inline int PageReclaim( struct page *page) { return (__builtin_constant_p((PG_reclaim)) ? constant_test_bit((PG_reclaim), (&page->flags)) : variable_test_bit((PG_reclaim), (&page->flags))); } static inline void SetPageReclaim(struct page *page) { set_bit(PG_reclaim, &page->flags); } static inline void ClearPageReclaim(struct page *page) { clear_bit(PG_reclaim, &page->flags); } static inline int TestClearPageReclaim(struct page *page) { return test_and_clear_bit(PG_reclaim, &page->flags); }
static inline int PageReadahead( struct page *page) { return (__builtin_constant_p((PG_reclaim)) ? constant_test_bit((PG_reclaim), (&page->flags)) : variable_test_bit((PG_reclaim), (&page->flags))); } static inline void SetPageReadahead(struct page *page) { set_bit(PG_reclaim, &page->flags); } static inline void ClearPageReadahead(struct page *page) { clear_bit(PG_reclaim, &page->flags); }

static inline int PageReadaheadUnused( struct page *page) { return (__builtin_constant_p((PG_readaheadunused)) ? constant_test_bit((PG_readaheadunused), (&page->flags)) : variable_test_bit((PG_readaheadunused), (&page->flags))); } static inline void SetPageReadaheadUnused(struct page *page) { set_bit(PG_readaheadunused, &page->flags); } static inline void ClearPageReadaheadUnused(struct page *page) { clear_bit(PG_readaheadunused, &page->flags); }
static inline int PageHighMem( struct page *page) { return 0; }



static inline int PageSwapCache( struct page *page) { return (__builtin_constant_p((PG_swapcache)) ? constant_test_bit((PG_swapcache), (&page->flags)) : variable_test_bit((PG_swapcache), (&page->flags))); } static inline void SetPageSwapCache(struct page *page) { set_bit(PG_swapcache, &page->flags); } static inline void ClearPageSwapCache(struct page *page) { clear_bit(PG_swapcache, &page->flags); }





static inline int PageUnevictable( struct page *page) { return (__builtin_constant_p((PG_unevictable)) ? constant_test_bit((PG_unevictable), (&page->flags)) : variable_test_bit((PG_unevictable), (&page->flags))); } static inline void SetPageUnevictable(struct page *page) { set_bit(PG_unevictable, &page->flags); } static inline void ClearPageUnevictable(struct page *page) { clear_bit(PG_unevictable, &page->flags); } static inline void __ClearPageUnevictable(struct page *page) { __clear_bit(PG_unevictable, &page->flags); }
 static inline int TestClearPageUnevictable(struct page *page) { return test_and_clear_bit(PG_unevictable, &page->flags); }


static inline int PageMlocked( struct page *page) { return (__builtin_constant_p((PG_mlocked)) ? constant_test_bit((PG_mlocked), (&page->flags)) : variable_test_bit((PG_mlocked), (&page->flags))); } static inline void SetPageMlocked(struct page *page) { set_bit(PG_mlocked, &page->flags); } static inline void ClearPageMlocked(struct page *page) { clear_bit(PG_mlocked, &page->flags); } static inline void __ClearPageMlocked(struct page *page) { __clear_bit(PG_mlocked, &page->flags); }
 static inline int TestSetPageMlocked(struct page *page) { return test_and_set_bit(PG_mlocked, &page->flags); } static inline int TestClearPageMlocked(struct page *page) { return test_and_clear_bit(PG_mlocked, &page->flags); } static inline int __TestClearPageMlocked(struct page *page) { return __test_and_clear_bit(PG_mlocked, &page->flags); }






static inline int PageUncached( struct page *page) { return (__builtin_constant_p((PG_uncached)) ? constant_test_bit((PG_uncached), (&page->flags)) : variable_test_bit((PG_uncached), (&page->flags))); } static inline void SetPageUncached(struct page *page) { set_bit(PG_uncached, &page->flags); } static inline void ClearPageUncached(struct page *page) { clear_bit(PG_uncached, &page->flags); }





static inline int PageHWPoison( struct page *page) { return (__builtin_constant_p((PG_hwpoison)) ? constant_test_bit((PG_hwpoison), (&page->flags)) : variable_test_bit((PG_hwpoison), (&page->flags))); } static inline void SetPageHWPoison(struct page *page) { set_bit(PG_hwpoison, &page->flags); } static inline void ClearPageHWPoison(struct page *page) { clear_bit(PG_hwpoison, &page->flags); }
static inline int TestSetPageHWPoison(struct page *page) { return test_and_set_bit(PG_hwpoison, &page->flags); } static inline int TestClearPageHWPoison(struct page *page) { return test_and_clear_bit(PG_hwpoison, &page->flags); }






u64 stable_page_flags(struct page *page);

static inline int PageUptodate(struct page *page)
{
 int ret = (__builtin_constant_p((PG_uptodate)) ? constant_test_bit((PG_uptodate), (&(page)->flags)) : variable_test_bit((PG_uptodate), (&(page)->flags)));
 if (ret)
  __asm__ __volatile__("": : :"memory");

 return ret;
}

static inline void __SetPageUptodate(struct page *page)
{
 __asm__ __volatile__("": : :"memory");
 __set_bit(PG_uptodate, &(page)->flags);
}

static inline void SetPageUptodate(struct page *page)
{





 __asm__ __volatile__("": : :"memory");
 set_bit(PG_uptodate, &(page)->flags);
}

static inline void ClearPageUptodate(struct page *page) { clear_bit(PG_uptodate, &page->flags); }

extern void cancel_dirty_page(struct page *page, unsigned int account_size);

int test_clear_page_writeback(struct page *page);
int test_set_page_writeback(struct page *page);

static inline void set_page_writeback(struct page *page)
{
 test_set_page_writeback(page);
}
static inline int PageHead( struct page *page) { return (__builtin_constant_p((PG_head)) ? constant_test_bit((PG_head), (&page->flags)) : variable_test_bit((PG_head), (&page->flags))); } static inline void __SetPageHead(struct page *page) { __set_bit(PG_head, &page->flags); } static inline void __ClearPageHead(struct page *page) { __clear_bit(PG_head, &page->flags); } static inline void ClearPageHead(struct page *page) { clear_bit(PG_head, &page->flags); }
static inline int PageTail( struct page *page) { return (__builtin_constant_p((PG_tail)) ? constant_test_bit((PG_tail), (&page->flags)) : variable_test_bit((PG_tail), (&page->flags))); } static inline void __SetPageTail(struct page *page) { __set_bit(PG_tail, &page->flags); } static inline void __ClearPageTail(struct page *page) { __clear_bit(PG_tail, &page->flags); }

static inline int PageCompound(struct page *page)
{
 return page->flags & ((1L << PG_head) | (1L << PG_tail));

}

static inline void ClearPageCompound(struct page *page)
{
 (!PageHead(page));
 ClearPageHead(page);
}
static inline int PageTransHuge(struct page *page)
{
 (0);
 return PageHead(page);
}






static inline int PageTransCompound(struct page *page)
{
 return PageCompound(page);
}






static inline int PageTransTail(struct page *page)
{
 return PageTail(page);
}
static inline int PageSlabPfmemalloc(struct page *page)
{
 (0);
 return PageActive(page);
}

static inline void SetPageSlabPfmemalloc(struct page *page)
{
 (0);
 SetPageActive(page);
}

static inline void __ClearPageSlabPfmemalloc(struct page *page)
{
 (0);
 __ClearPageActive(page);
}

static inline void ClearPageSlabPfmemalloc(struct page *page)
{
 (0);
 ClearPageActive(page);
}
static inline int page_has_private(struct page *page)
{
 return !!(page->flags & (1 << PG_private | 1 << PG_private_2));
}



extern int do_huge_pmd_anonymous_page(struct mm_struct *mm,
          struct vm_area_struct *vma,
          unsigned long address, pmd_t *pmd,
          unsigned int flags);
extern int copy_huge_pmd(struct mm_struct *dst_mm, struct mm_struct *src_mm,
    pmd_t *dst_pmd, pmd_t *src_pmd, unsigned long addr,
    struct vm_area_struct *vma);
extern void huge_pmd_set_accessed(struct mm_struct *mm,
      struct vm_area_struct *vma,
      unsigned long address, pmd_t *pmd,
      pmd_t orig_pmd, int dirty);
extern int do_huge_pmd_wp_page(struct mm_struct *mm, struct vm_area_struct *vma,
          unsigned long address, pmd_t *pmd,
          pmd_t orig_pmd);
extern struct page *follow_trans_huge_pmd(struct vm_area_struct *vma,
       unsigned long addr,
       pmd_t *pmd,
       unsigned int flags);
extern int zap_huge_pmd(struct mmu_gather *tlb,
   struct vm_area_struct *vma,
   pmd_t *pmd, unsigned long addr);
extern int mincore_huge_pmd(struct vm_area_struct *vma, pmd_t *pmd,
   unsigned long addr, unsigned long end,
   unsigned char *vec);
extern int move_huge_pmd(struct vm_area_struct *vma,
    struct vm_area_struct *new_vma,
    unsigned long old_addr,
    unsigned long new_addr, unsigned long old_end,
    pmd_t *old_pmd, pmd_t *new_pmd);
extern int change_huge_pmd(struct vm_area_struct *vma, pmd_t *pmd,
   unsigned long addr, pgprot_t newprot,
   int prot_numa);

enum transparent_hugepage_flag {
 TRANSPARENT_HUGEPAGE_FLAG,
 TRANSPARENT_HUGEPAGE_REQ_MADV_FLAG,
 TRANSPARENT_HUGEPAGE_DEFRAG_FLAG,
 TRANSPARENT_HUGEPAGE_DEFRAG_REQ_MADV_FLAG,
 TRANSPARENT_HUGEPAGE_DEFRAG_KHUGEPAGED_FLAG,
 TRANSPARENT_HUGEPAGE_USE_ZERO_PAGE_FLAG,



};

enum page_check_address_pmd_flag {
 PAGE_CHECK_ADDRESS_PMD_FLAG,
 PAGE_CHECK_ADDRESS_PMD_NOTSPLITTING_FLAG,
 PAGE_CHECK_ADDRESS_PMD_SPLITTING_FLAG,
};
extern pmd_t *page_check_address_pmd(struct page *page,
         struct mm_struct *mm,
         unsigned long address,
         enum page_check_address_pmd_flag flag,
         spinlock_t **ptl);
extern bool is_vma_temporary_stack(struct vm_area_struct *vma);
extern unsigned long transparent_hugepage_flags;
extern int copy_pte_range(struct mm_struct *dst_mm, struct mm_struct *src_mm,
     pmd_t *dst_pmd, pmd_t *src_pmd,
     struct vm_area_struct *vma,
     unsigned long addr, unsigned long end);
extern int split_huge_page_to_list(struct page *page, struct list_head *list);
static inline int split_huge_page(struct page *page)
{
 return split_huge_page_to_list(page, 0);
}
extern void __split_huge_page_pmd(struct vm_area_struct *vma,
  unsigned long address, pmd_t *pmd);
extern void split_huge_page_pmd_mm(struct mm_struct *mm, unsigned long address,
  pmd_t *pmd);



extern int hugepage_madvise(struct vm_area_struct *vma,
       unsigned long *vm_flags, int advice);
extern void __vma_adjust_trans_huge(struct vm_area_struct *vma,
        unsigned long start,
        unsigned long end,
        long adjust_next);
extern int __pmd_trans_huge_lock(pmd_t *pmd, struct vm_area_struct *vma,
  spinlock_t **ptl);

static inline int pmd_trans_huge_lock(pmd_t *pmd, struct vm_area_struct *vma,
  spinlock_t **ptl)
{
 (0);
 if (pmd_trans_huge(*pmd))
  return __pmd_trans_huge_lock(pmd, vma, ptl);
 else
  return 0;
}
static inline void vma_adjust_trans_huge(struct vm_area_struct *vma,
      unsigned long start,
      unsigned long end,
      long adjust_next)
{
 if (!vma->anon_vma || vma->vm_ops)
  return;
 __vma_adjust_trans_huge(vma, start, end, adjust_next);
}
static inline int hpage_nr_pages(struct page *page)
{
 if (__builtin_expect(!!(PageTransHuge(page)), 0))
  return (1<<(21 -12));
 return 1;
}

extern int do_huge_pmd_numa_page(struct mm_struct *mm, struct vm_area_struct *vma,
    unsigned long addr, pmd_t pmd, pmd_t *pmdp);
static inline int put_page_testzero(struct page *page)
{
 (0);
 return 1;
}







static inline int get_page_unless_zero(struct page *page)
{
 return atomic_add_unless((&page->_count), 1, 0);
}
static inline int put_page_unless_one(struct page *page)
{
 return atomic_add_unless(&page->_count, -1, 1);
}

extern int page_is_ram(unsigned long pfn);


struct page *vmalloc_to_page( void *addr);
unsigned long vmalloc_to_pfn( void *addr);







static inline int is_vmalloc_addr( void *x)
{

 unsigned long addr = (unsigned long)x;

 return addr >= (0xffffc90000000000UL) && addr < (0xffffe8ffffffffffUL);



}

extern int is_vmalloc_or_module_addr( void *x);







static inline void compound_lock(struct page *page)
{

 (0);
 bit_spin_lock(PG_compound_lock, &page->flags);

}

static inline void compound_unlock(struct page *page)
{

 (0);
 bit_spin_unlock(PG_compound_lock, &page->flags);

}

static inline unsigned long compound_lock_irqsave(struct page *page)
{
 unsigned long flags = flags;

 ;
 compound_lock(page);

 return flags;
}

static inline void compound_unlock_irqrestore(struct page *page,
           unsigned long flags)
{

 compound_unlock(page);
 ;

}

static inline struct page *compound_head(struct page *page)
{
 if (__builtin_expect(!!(PageTail(page)), 0)) {
  struct page *head = page->first_page;






  __asm__ __volatile__("": : :"memory");
  if (__builtin_expect(!!(PageTail(page)), 1))
   return head;
 }
 return page;
}






static inline void page_mapcount_reset(struct page *page)
{
 ;
}

static inline int page_mapcount(struct page *page)
{
 return atomic_read(&(page)->_mapcount) + 1;
}

static inline int page_count(struct page *page)
{
 return atomic_read(&compound_head(page)->_count);
}

static inline void get_huge_page_tail(struct page *page)
{




 (0);
 (0);
 ;
}

extern bool __get_page_tail(struct page *page);

static inline void get_page(struct page *page)
{
 if (__builtin_expect(!!(PageTail(page)), 0))
  if (__builtin_expect(!!(__get_page_tail(page)), 1))
   return;




 (0);
 ;
}

static inline struct page *virt_to_head_page( void *x)
{
 struct page *page = (((struct page *)(0xffffea0000000000UL)) + (__phys_addr_nodebug((unsigned long)(x)) >> 12));
 return compound_head(page);
}





static inline void init_page_count(struct page *page)
{
 ;
}
static inline int PageBuddy(struct page *page)
{
 return atomic_read(&page->_mapcount) == (-128);
}

static inline void __SetPageBuddy(struct page *page)
{
 (0);
 ;
}

static inline void __ClearPageBuddy(struct page *page)
{
 (0);
 ;
}






void put_pages_list(struct list_head *pages);

void split_page(struct page *page, unsigned int order);
int split_free_page(struct page *page);






typedef void compound_page_dtor(struct page *);

static inline void set_compound_page_dtor(struct page *page,
      compound_page_dtor *dtor)
{
 page[1].lru.next = (void *)dtor;
}

static inline compound_page_dtor *get_compound_page_dtor(struct page *page)
{
 return (compound_page_dtor *)page[1].lru.next;
}

static inline int compound_order(struct page *page)
{
 if (!PageHead(page))
  return 0;
 return (unsigned long)page[1].lru.prev;
}

static inline void set_compound_order(struct page *page, unsigned long order)
{
 page[1].lru.prev = (void *)order;
}
static inline pte_t maybe_mkwrite(pte_t pte, struct vm_area_struct *vma)
{
 if (__builtin_expect(!!(vma->vm_flags & 0x00000002), 1))
  pte = pte_mkwrite(pte);
 return pte;
}
static inline enum zone_type page_zonenum( struct page *page)
{
 return (page->flags >> (((((sizeof(unsigned long)*8) - 0) - 6) - 2) * (2 != 0))) & ((1UL << 2) - 1);
}
static inline int page_zone_id(struct page *page)
{
 return (page->flags >> ((((((sizeof(unsigned long)*8) - 0) - 6) < ((((sizeof(unsigned long)*8) - 0) - 6) - 2))? (((sizeof(unsigned long)*8) - 0) - 6) : ((((sizeof(unsigned long)*8) - 0) - 6) - 2)) * ((6 + 2) != 0))) & ((1UL << (6 + 2)) - 1);
}

static inline int zone_to_nid(struct zone *zone)
{

 return zone->node;



}




static inline int page_to_nid( struct page *page)
{
 return (page->flags >> ((((sizeof(unsigned long)*8) - 0) - 6) * (6 != 0))) & ((1UL << 6) - 1);
}



static inline int cpu_pid_to_cpupid(int cpu, int pid)
{
 return ((cpu & ((1 << 8)-1)) << 8) | (pid & ((1 << 8)-1));
}

static inline int cpupid_to_pid(int cpupid)
{
 return cpupid & ((1 << 8)-1);
}

static inline int cpupid_to_cpu(int cpupid)
{
 return (cpupid >> 8) & ((1 << 8)-1);
}

static inline int cpupid_to_nid(int cpupid)
{
 return cpu_to_node(cpupid_to_cpu(cpupid));
}

static inline bool cpupid_pid_unset(int cpupid)
{
 return cpupid_to_pid(cpupid) == (-1 & ((1 << 8)-1));
}

static inline bool cpupid_cpu_unset(int cpupid)
{
 return cpupid_to_cpu(cpupid) == (-1 & ((1 << 8)-1));
}

static inline bool __cpupid_match_pid(pid_t task_pid, int cpupid)
{
 return (task_pid & ((1 << 8)-1)) == cpupid_to_pid(cpupid);
}
static inline int page_cpupid_last(struct page *page)
{
 return (page->flags >> ((((((sizeof(unsigned long)*8) - 0) - 6) - 2) - (8 +8)) * ((8 +8) != 0))) & ((1UL << (8 +8)) - 1);
}

extern int page_cpupid_xchg_last(struct page *page, int cpupid);

static inline void page_cpupid_reset_last(struct page *page)
{
 int cpupid = (1 << (8 +8)) - 1;

 page->flags &= ~(((1UL << (8 +8)) - 1) << ((((((sizeof(unsigned long)*8) - 0) - 6) - 2) - (8 +8)) * ((8 +8) != 0)));
 page->flags |= (cpupid & ((1UL << (8 +8)) - 1)) << ((((((sizeof(unsigned long)*8) - 0) - 6) - 2) - (8 +8)) * ((8 +8) != 0));
}
static inline struct zone *page_zone( struct page *page)
{
 return &(node_data[page_to_nid(page)])->node_zones[page_zonenum(page)];
}
static inline void set_page_zone(struct page *page, enum zone_type zone)
{
 page->flags &= ~(((1UL << 2) - 1) << (((((sizeof(unsigned long)*8) - 0) - 6) - 2) * (2 != 0)));
 page->flags |= (zone & ((1UL << 2) - 1)) << (((((sizeof(unsigned long)*8) - 0) - 6) - 2) * (2 != 0));
}

static inline void set_page_node(struct page *page, unsigned long node)
{
 page->flags &= ~(((1UL << 6) - 1) << ((((sizeof(unsigned long)*8) - 0) - 6) * (6 != 0)));
 page->flags |= (node & ((1UL << 6) - 1)) << ((((sizeof(unsigned long)*8) - 0) - 6) * (6 != 0));
}

static inline void set_page_links(struct page *page, enum zone_type zone,
 unsigned long node, unsigned long pfn)
{
 set_page_zone(page, zone);
 set_page_node(page, node);



}










enum vm_event_item { PGPGIN, PGPGOUT, PSWPIN, PSWPOUT,
  PGALLOC_DMA, PGALLOC_DMA32, PGALLOC_NORMAL , PGALLOC_MOVABLE,
  PGFREE, PGACTIVATE, PGDEACTIVATE,
  PGFAULT, PGMAJFAULT,
  PGREFILL_DMA, PGREFILL_DMA32, PGREFILL_NORMAL , PGREFILL_MOVABLE,
  PGSTEAL_KSWAPD_DMA, PGSTEAL_KSWAPD_DMA32, PGSTEAL_KSWAPD_NORMAL , PGSTEAL_KSWAPD_MOVABLE,
  PGSTEAL_DIRECT_DMA, PGSTEAL_DIRECT_DMA32, PGSTEAL_DIRECT_NORMAL , PGSTEAL_DIRECT_MOVABLE,
  PGSCAN_KSWAPD_DMA, PGSCAN_KSWAPD_DMA32, PGSCAN_KSWAPD_NORMAL , PGSCAN_KSWAPD_MOVABLE,
  PGSCAN_DIRECT_DMA, PGSCAN_DIRECT_DMA32, PGSCAN_DIRECT_NORMAL , PGSCAN_DIRECT_MOVABLE,
  PGSCAN_DIRECT_THROTTLE,

  PGSCAN_ZONE_RECLAIM_FAILED,

  PGINODESTEAL, SLABS_SCANNED, KSWAPD_INODESTEAL,
  KSWAPD_LOW_WMARK_HIT_QUICKLY, KSWAPD_HIGH_WMARK_HIT_QUICKLY,
  PAGEOUTRUN, ALLOCSTALL, PGROTATED,

  NUMA_PTE_UPDATES,
  NUMA_HUGE_PTE_UPDATES,
  NUMA_HINT_FAULTS,
  NUMA_HINT_FAULTS_LOCAL,
  NUMA_PAGE_MIGRATE,


  PGMIGRATE_SUCCESS, PGMIGRATE_FAIL,


  COMPACTMIGRATE_SCANNED, COMPACTFREE_SCANNED,
  COMPACTISOLATED,
  COMPACTSTALL, COMPACTFAIL, COMPACTSUCCESS,


  HTLB_BUDDY_PGALLOC, HTLB_BUDDY_PGALLOC_FAIL,

  UNEVICTABLE_PGCULLED,
  UNEVICTABLE_PGSCANNED,
  UNEVICTABLE_PGRESCUED,
  UNEVICTABLE_PGMLOCKED,
  UNEVICTABLE_PGMUNLOCKED,
  UNEVICTABLE_PGCLEARED,
  UNEVICTABLE_PGSTRANDED,

  THP_FAULT_ALLOC,
  THP_FAULT_FALLBACK,
  THP_COLLAPSE_ALLOC,
  THP_COLLAPSE_ALLOC_FAILED,
  THP_SPLIT,
  THP_ZERO_PAGE_ALLOC,
  THP_ZERO_PAGE_ALLOC_FAILED,


  NR_TLB_REMOTE_FLUSH,
  NR_TLB_REMOTE_FLUSH_RECEIVED,

  NR_TLB_LOCAL_FLUSH_ALL,
  NR_TLB_LOCAL_FLUSH_ONE,
  NR_VM_EVENT_ITEMS
};


extern int sysctl_stat_interval;
struct vm_event_state {
 unsigned long event[NR_VM_EVENT_ITEMS];
};

extern __attribute__((section(".data..percpu" ""))) __typeof__(struct vm_event_state) vm_event_states;

static inline void __count_vm_event(enum vm_event_item item)
{
 do { do { void *__vpp_verify = (typeof((&(((vm_event_states.event[item])))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof(((vm_event_states.event[item])))) { case 1: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? (int)((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? (int)((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? (int)((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? (int)((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
}

static inline void count_vm_event(enum vm_event_item item)
{
 do { do { void *__vpp_verify = (typeof((&(((vm_event_states.event[item])))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof(((vm_event_states.event[item])))) { case 1: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? (int)((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? (int)((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? (int)((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof((((vm_event_states.event[item])))) pao_T__; int pao_ID__ = (__builtin_constant_p((1)) && (((1)) == 1 || ((1)) == -1)) ? (int)((1)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((1)); (void)pao_tmp__; } switch (sizeof((((vm_event_states.event[item]))))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "qi" ((pao_T__)((1)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "ri" ((pao_T__)((1)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item]))))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" ((((vm_event_states.event[item])))) : "re" ((pao_T__)((1)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
}

static inline void __count_vm_events(enum vm_event_item item, long delta)
{
 do { do { void *__vpp_verify = (typeof((&((vm_event_states.event[item]))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof((vm_event_states.event[item]))) { case 1: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? (int)((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? (int)((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? (int)((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? (int)((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
}

static inline void count_vm_events(enum vm_event_item item, long delta)
{
 do { do { void *__vpp_verify = (typeof((&((vm_event_states.event[item]))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof((vm_event_states.event[item]))) { case 1: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? (int)((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 2: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? (int)((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 4: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? (int)((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; case 8: do { typedef typeof(((vm_event_states.event[item]))) pao_T__; int pao_ID__ = (__builtin_constant_p((delta)) && (((delta)) == 1 || ((delta)) == -1)) ? (int)((delta)) : 0; if (0) { pao_T__ pao_tmp__; pao_tmp__ = ((delta)); (void)pao_tmp__; } switch (sizeof(((vm_event_states.event[item])))) { case 1: if (pao_ID__ == 1) asm("incb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decb ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addb %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "qi" ((pao_T__)((delta)))); break; case 2: if (pao_ID__ == 1) asm("incw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decw ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addw %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 4: if (pao_ID__ == 1) asm("incl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decl ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addl %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "ri" ((pao_T__)((delta)))); break; case 8: if (pao_ID__ == 1) asm("incq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else if (pao_ID__ == -1) asm("decq ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item])))); else asm("addq %1, ""%%""gs"":" "%P" "0" : "+m" (((vm_event_states.event[item]))) : "re" ((pao_T__)((delta)))); break; default: __bad_percpu_size(); } } while (0);break; default: __bad_size_call_parameter();break; } } while (0);
}

extern void all_vm_events(unsigned long *);

extern void vm_events_fold_cpu(int cpu);
extern atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];

static inline void zone_page_state_add(long x, struct zone *zone,
     enum zone_stat_item item)
{
 atomic_long_add(x, &zone->vm_stat[item]);
 atomic_long_add(x, &vm_stat[item]);
}

static inline unsigned long global_page_state(enum zone_stat_item item)
{
 long x = atomic_long_read(&vm_stat[item]);

 if (x < 0)
  x = 0;

 return x;
}

static inline unsigned long zone_page_state(struct zone *zone,
     enum zone_stat_item item)
{
 long x = atomic_long_read(&zone->vm_stat[item]);

 if (x < 0)
  x = 0;

 return x;
}







static inline unsigned long zone_page_state_snapshot(struct zone *zone,
     enum zone_stat_item item)
{
 long x = atomic_long_read(&zone->vm_stat[item]);


 int cpu;
 for (((cpu)) = -1; ((cpu)) = cpumask_next(((cpu)), (cpu_online_mask)), ((cpu)) < nr_cpu_ids;)
  x += ({ do { void *__vpp_verify = (typeof((((zone->pageset))) + 0))0; (void)__vpp_verify; } while (0); ({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((typeof(*((zone->pageset))) *)((zone->pageset)))); (typeof((typeof(*((zone->pageset))) *)((zone->pageset)))) (__ptr + (((__per_cpu_offset[(cpu)])))); }); })->vm_stat_diff[item];

 if (x < 0)
  x = 0;

 return x;
}







static inline unsigned long node_page_state(int node,
     enum zone_stat_item item)
{
 struct zone *zones = (node_data[node])->node_zones;

 return

  zone_page_state(&zones[ZONE_DMA], item) +


  zone_page_state(&zones[ZONE_DMA32], item) +




  zone_page_state(&zones[ZONE_NORMAL], item) +
  zone_page_state(&zones[ZONE_MOVABLE], item);
}

extern void zone_statistics(struct zone *, struct zone *, gfp_t gfp);
extern void inc_zone_state(struct zone *, enum zone_stat_item);


void __mod_zone_page_state(struct zone *, enum zone_stat_item item, int);
void __inc_zone_page_state(struct page *, enum zone_stat_item);
void __dec_zone_page_state(struct page *, enum zone_stat_item);

void mod_zone_page_state(struct zone *, enum zone_stat_item, int);
void inc_zone_page_state(struct page *, enum zone_stat_item);
void dec_zone_page_state(struct page *, enum zone_stat_item);

extern void inc_zone_state(struct zone *, enum zone_stat_item);
extern void __inc_zone_state(struct zone *, enum zone_stat_item);
extern void dec_zone_state(struct zone *, enum zone_stat_item);
extern void __dec_zone_state(struct zone *, enum zone_stat_item);

void cpu_vm_stats_fold(int cpu);
void refresh_zone_stat_thresholds(void);

void drain_zonestat(struct zone *zone, struct per_cpu_pageset *);

int calculate_pressure_threshold(struct zone *zone);
int calculate_normal_threshold(struct zone *zone);
void set_pgdat_percpu_threshold(pg_data_t *pgdat,
    int (*calculate_pressure)(struct zone *));
static inline void __mod_zone_freepage_state(struct zone *zone, int nr_pages,
          int migratetype)
{
 __mod_zone_page_state(zone, NR_FREE_PAGES, nr_pages);
 if (__builtin_expect(!!((migratetype) == MIGRATE_CMA), 0))
  __mod_zone_page_state(zone, NR_FREE_CMA_PAGES, nr_pages);
}

extern char * vmstat_text[];

static inline __attribute__((always_inline)) void *lowmem_page_address( struct page *page)
{
 return ((void *)((unsigned long)(((phys_addr_t)((unsigned long)((page) - ((struct page *)(0xffffea0000000000UL)))) << 12))+((unsigned long)(0xffff880000000000UL))));
}
extern struct address_space *page_mapping(struct page *page);


static inline void *page_rmapping(struct page *page)
{
 return (void *)((unsigned long)page->mapping & ~(1 | 2));
}

extern struct address_space *__page_file_mapping(struct page *);

static inline
struct address_space *page_file_mapping(struct page *page)
{
 if (__builtin_expect(!!(PageSwapCache(page)), 0))
  return __page_file_mapping(page);

 return page->mapping;
}

static inline int PageAnon(struct page *page)
{
 return ((unsigned long)page->mapping & 1) != 0;
}





static inline unsigned long page_index(struct page *page)
{
 if (__builtin_expect(!!(PageSwapCache(page)), 0))
  return ((page)->_private);
 return page->index;
}

extern unsigned long __page_file_index(struct page *page);





static inline unsigned long page_file_index(struct page *page)
{
 if (__builtin_expect(!!(PageSwapCache(page)), 0))
  return __page_file_index(page);

 return page->index;
}




static inline int page_mapped(struct page *page)
{
 return atomic_read(&(page)->_mapcount) >= 0;
}
extern void pagefault_out_of_memory(void);
extern void show_free_areas(unsigned int flags);
extern bool skip_free_areas_node(unsigned int flags, int nid);

int shmem_zero_setup(struct vm_area_struct *);

extern int can_do_mlock(void);
extern int user_shm_lock(size_t, struct user_struct *);
extern void user_shm_unlock(size_t, struct user_struct *);




struct zap_details {
 struct vm_area_struct *nonlinear_vma;
 struct address_space *check_mapping;
 unsigned long first_index;
 unsigned long last_index;
};

struct page *vm_normal_page(struct vm_area_struct *vma, unsigned long addr,
  pte_t pte);

int zap_vma_ptes(struct vm_area_struct *vma, unsigned long address,
  unsigned long size);
void zap_page_range(struct vm_area_struct *vma, unsigned long address,
  unsigned long size, struct zap_details *);
void unmap_vmas(struct mmu_gather *tlb, struct vm_area_struct *start_vma,
  unsigned long start, unsigned long end);
struct mm_walk {
 int (*pgd_entry)(pgd_t *pgd, unsigned long addr,
    unsigned long next, struct mm_walk *walk);
 int (*pud_entry)(pud_t *pud, unsigned long addr,
                  unsigned long next, struct mm_walk *walk);
 int (*pmd_entry)(pmd_t *pmd, unsigned long addr,
    unsigned long next, struct mm_walk *walk);
 int (*pte_entry)(pte_t *pte, unsigned long addr,
    unsigned long next, struct mm_walk *walk);
 int (*pte_hole)(unsigned long addr, unsigned long next,
   struct mm_walk *walk);
 int (*hugetlb_entry)(pte_t *pte, unsigned long hmask,
        unsigned long addr, unsigned long next,
        struct mm_walk *walk);
 struct mm_struct *mm;
 void *_private;
};

int walk_page_range(unsigned long addr, unsigned long end,
  struct mm_walk *walk);
void free_pgd_range(struct mmu_gather *tlb, unsigned long addr,
  unsigned long end, unsigned long floor, unsigned long ceiling);
int copy_page_range(struct mm_struct *dst, struct mm_struct *src,
   struct vm_area_struct *vma);
void unmap_mapping_range(struct address_space *mapping,
  loff_t holebegin, loff_t holelen, int even_cows);
int follow_pfn(struct vm_area_struct *vma, unsigned long address,
 unsigned long *pfn);
int follow_phys(struct vm_area_struct *vma, unsigned long address,
  unsigned int flags, unsigned long *prot, resource_size_t *phys);
int generic_access_phys(struct vm_area_struct *vma, unsigned long addr,
   void *buf, int len, int write);

static inline void unmap_shared_mapping_range(struct address_space *mapping,
  loff_t holebegin, loff_t holelen)
{
 unmap_mapping_range(mapping, holebegin, holelen, 0);
}

extern void truncate_pagecache(struct inode *inode, loff_t _new);
extern void truncate_setsize(struct inode *inode, loff_t newsize);
void truncate_pagecache_range(struct inode *inode, loff_t offset, loff_t end);
int truncate_inode_page(struct address_space *mapping, struct page *page);
int generic_error_remove_page(struct address_space *mapping, struct page *page);
int invalidate_inode_page(struct page *page);


extern int handle_mm_fault(struct mm_struct *mm, struct vm_area_struct *vma,
   unsigned long address, unsigned int flags);
extern int fixup_user_fault(struct task_struct *tsk, struct mm_struct *mm,
       unsigned long address, unsigned int fault_flags);
static inline void aufs_trace(struct file *f, struct file *pr,
         char func[], int line, char func2[])
{





}

static inline struct file *vmr_do_pr_or_file(struct vm_region *region,
          char func[], int line)
{
 struct file *f = region->vm_file, *pr = region->vm_prfile;



 aufs_trace(f, pr, func, line, (char *)__func__);

 return (f && pr) ? pr : f;
}

static inline void vmr_do_fput(struct vm_region *region,
          char func[], int line)
{
 struct file *f = region->vm_file, *pr = region->vm_prfile;



 aufs_trace(f, pr, func, line, (char *)__func__);

 fput(f);
 if (f && pr)
  fput(pr);
}

static inline void vma_do_file_update_time(struct vm_area_struct *vma,
        char func[], int line)
{
 struct file *f = vma->vm_file, *pr = vma->vm_prfile;



 aufs_trace(f, pr, func, line, (char *)__func__);

 file_update_time(f);
 if (f && pr)
  file_update_time(pr);
}

static inline struct file *vma_do_pr_or_file(struct vm_area_struct *vma,
          char func[], int line)
{
 struct file *f = vma->vm_file, *pr = vma->vm_prfile;



 aufs_trace(f, pr, func, line, (char *)__func__);

 return (f && pr) ? pr : f;
}

static inline void vma_do_get_file(struct vm_area_struct *vma,
       char func[], int line)
{
 struct file *f = vma->vm_file, *pr = vma->vm_prfile;



 aufs_trace(f, pr, func, line, (char *)__func__);

 get_file(f);
 if (f && pr)
  get_file(pr);
}

static inline void vma_do_fput(struct vm_area_struct *vma,
          char func[], int line)
{
 struct file *f = vma->vm_file, *pr = vma->vm_prfile;



 aufs_trace(f, pr, func, line, (char *)__func__);

 fput(f);
 if (f && pr)
  fput(pr);
}
extern int access_process_vm(struct task_struct *tsk, unsigned long addr, void *buf, int len, int write);
extern int access_remote_vm(struct mm_struct *mm, unsigned long addr,
  void *buf, int len, int write);

long __get_user_pages(struct task_struct *tsk, struct mm_struct *mm,
        unsigned long start, unsigned long nr_pages,
        unsigned int foll_flags, struct page **pages,
        struct vm_area_struct **vmas, int *nonblocking);
long get_user_pages(struct task_struct *tsk, struct mm_struct *mm,
      unsigned long start, unsigned long nr_pages,
      int write, int force, struct page **pages,
      struct vm_area_struct **vmas);
int get_user_pages_fast(unsigned long start, int nr_pages, int write,
   struct page **pages);
struct kvec;
int get_kernel_pages( struct kvec *iov, int nr_pages, int write,
   struct page **pages);
int get_kernel_page(unsigned long start, int write, struct page **pages);
struct page *get_dump_page(unsigned long addr);

extern int try_to_release_page(struct page * page, gfp_t gfp_mask);
extern void do_invalidatepage(struct page *page, unsigned int offset,
         unsigned int length);

int __set_page_dirty_nobuffers(struct page *page);
int __set_page_dirty_no_writeback(struct page *page);
int redirty_page_for_writepage(struct writeback_control *wbc,
    struct page *page);
void account_page_dirtied(struct page *page, struct address_space *mapping);
void account_page_writeback(struct page *page);
int set_page_dirty(struct page *page);
int set_page_dirty_lock(struct page *page);
int clear_page_dirty_for_io(struct page *page);


static inline int vma_growsdown(struct vm_area_struct *vma, unsigned long addr)
{
 return vma && (vma->vm_end == addr) && (vma->vm_flags & 0x00000100);
}

static inline int stack_guard_page_start(struct vm_area_struct *vma,
          unsigned long addr)
{
 return (vma->vm_flags & 0x00000100) &&
  (vma->vm_start == addr) &&
  !vma_growsdown(vma->vm_prev, addr);
}


static inline int vma_growsup(struct vm_area_struct *vma, unsigned long addr)
{
 return vma && (vma->vm_start == addr) && (vma->vm_flags & 0x00000000);
}

static inline int stack_guard_page_end(struct vm_area_struct *vma,
        unsigned long addr)
{
 return (vma->vm_flags & 0x00000000) &&
  (vma->vm_end == addr) &&
  !vma_growsup(vma->vm_next, addr);
}

extern pid_t
vm_is_stack(struct task_struct *task, struct vm_area_struct *vma, int in_group);

extern unsigned long move_page_tables(struct vm_area_struct *vma,
  unsigned long old_addr, struct vm_area_struct *new_vma,
  unsigned long new_addr, unsigned long len,
  bool need_rmap_locks);
extern unsigned long change_protection(struct vm_area_struct *vma, unsigned long start,
         unsigned long end, pgprot_t newprot,
         int dirty_accountable, int prot_numa);
extern int mprotect_fixup(struct vm_area_struct *vma,
     struct vm_area_struct **pprev, unsigned long start,
     unsigned long end, unsigned long newflags);




int __get_user_pages_fast(unsigned long start, int nr_pages, int write,
     struct page **pages);



static inline unsigned long get_mm_counter(struct mm_struct *mm, int member)
{
 long val = atomic_long_read(&mm->rss_stat.count[member]);






 if (val < 0)
  val = 0;

 return (unsigned long)val;
}

static inline void add_mm_counter(struct mm_struct *mm, int member, long value)
{
 atomic_long_add(value, &mm->rss_stat.count[member]);
}

static inline void inc_mm_counter(struct mm_struct *mm, int member)
{
 atomic_long_inc(&mm->rss_stat.count[member]);
}

static inline void dec_mm_counter(struct mm_struct *mm, int member)
{
 atomic_long_dec(&mm->rss_stat.count[member]);
}

static inline unsigned long get_mm_rss(struct mm_struct *mm)
{
 return get_mm_counter(mm, MM_FILEPAGES) +
  get_mm_counter(mm, MM_ANONPAGES);
}

static inline unsigned long get_mm_hiwater_rss(struct mm_struct *mm)
{
 return ({ typeof(mm->hiwater_rss) _max1 = (mm->hiwater_rss); typeof(get_mm_rss(mm)) _max2 = (get_mm_rss(mm)); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; });
}

static inline unsigned long get_mm_hiwater_vm(struct mm_struct *mm)
{
 return ({ typeof(mm->hiwater_vm) _max1 = (mm->hiwater_vm); typeof(mm->total_vm) _max2 = (mm->total_vm); (void) (&_max1 == &_max2); _max1 > _max2 ? _max1 : _max2; });
}

static inline void update_hiwater_rss(struct mm_struct *mm)
{
 unsigned long _rss = get_mm_rss(mm);

 if ((mm)->hiwater_rss < _rss)
  (mm)->hiwater_rss = _rss;
}

static inline void update_hiwater_vm(struct mm_struct *mm)
{
 if (mm->hiwater_vm < mm->total_vm)
  mm->hiwater_vm = mm->total_vm;
}

static inline void setmax_mm_hiwater_rss(unsigned long *maxrss,
      struct mm_struct *mm)
{
 unsigned long hiwater_rss = get_mm_hiwater_rss(mm);

 if (*maxrss < hiwater_rss)
  *maxrss = hiwater_rss;
}


void sync_mm_rss(struct mm_struct *mm);






int vma_wants_writenotify(struct vm_area_struct *vma);

extern pte_t *__get_locked_pte(struct mm_struct *mm, unsigned long addr,
          spinlock_t **ptl);
static inline pte_t *get_locked_pte(struct mm_struct *mm, unsigned long addr,
        spinlock_t **ptl)
{
 pte_t *ptep;
 (ptep = __get_locked_pte(mm, addr, ptl));
 return ptep;
}
int __pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address);
int __pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address);


int __pte_alloc(struct mm_struct *mm, struct vm_area_struct *vma,
  pmd_t *pmd, unsigned long address);
int __pte_alloc_kernel(pmd_t *pmd, unsigned long address);






static inline pud_t *pud_alloc(struct mm_struct *mm, pgd_t *pgd, unsigned long address)
{
 return (__builtin_expect(!!(pgd_none(*pgd)), 0) && __pud_alloc(mm, pgd, address))?
  0: pud_offset(pgd, address);
}

static inline pmd_t *pmd_alloc(struct mm_struct *mm, pud_t *pud, unsigned long address)
{
 return (__builtin_expect(!!(pud_none(*pud)), 0) && __pmd_alloc(mm, pud, address))?
  0: pmd_offset(pud, address);
}
static inline bool ptlock_alloc(struct page *page)
{
 return _true;
}

static inline void ptlock_free(struct page *page)
{
}

static inline spinlock_t *ptlock_ptr(struct page *page)
{
 return &page->ptl;
}


static inline spinlock_t *pte_lockptr(struct mm_struct *mm, pmd_t *pmd)
{
 return ptlock_ptr((((struct page *)(0xffffea0000000000UL)) + ((pmd_val(*pmd) & ((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)((1ULL << 46) - 1))))) >> 12)));
}

static inline bool ptlock_init(struct page *page)
{
 (0);
 if (!ptlock_alloc(page))
  return _false;
 ;
 return _true;
}


static inline void pte_lock_deinit(struct page *page)
{
 page->mapping = 0;
 ptlock_free(page);
}
static inline bool pgtable_page_ctor(struct page *page)
{
 inc_zone_page_state(page, NR_PAGETABLE);
 return ptlock_init(page);
}

static inline void pgtable_page_dtor(struct page *page)
{
 pte_lock_deinit(page);
 dec_zone_page_state(page, NR_PAGETABLE);
}
static inline spinlock_t *pmd_lockptr(struct mm_struct *mm, pmd_t *pmd)
{
 return ptlock_ptr((((struct page *)(0xffffea0000000000UL)) + (__phys_addr_nodebug((unsigned long)(pmd)) >> 12)));
}

static inline bool pgtable_pmd_page_ctor(struct page *page)
{

 page->pmd_huge_pte = 0;

 return ptlock_init(page);
}

static inline void pgtable_pmd_page_dtor(struct page *page)
{

 (0);

 ptlock_free(page);
}
static inline spinlock_t *pmd_lock(struct mm_struct *mm, pmd_t *pmd)
{
 spinlock_t *ptl = pmd_lockptr(mm, pmd);
 ;
 return ptl;
}

extern void free_area_init(unsigned long * zones_size);
extern void free_area_init_node(int nid, unsigned long * zones_size,
  unsigned long zone_start_pfn, unsigned long *zholes_size);
extern void free_initmem(void);







extern unsigned long free_reserved_area(void *start, void *end,
     int poison, char *s);
extern void adjust_managed_page_count(struct page *page, long count);
extern void mem_init_print_info( char *str);


static inline void __free_reserved_page(struct page *page)
{
 ClearPageReserved(page);
 init_page_count(page);
 __free_pages((page), 0);
}

static inline void free_reserved_page(struct page *page)
{
 __free_reserved_page(page);
 adjust_managed_page_count(page, 1);
}

static inline void mark_page_reserved(struct page *page)
{
 SetPageReserved(page);
 adjust_managed_page_count(page, -1);
}







static inline unsigned long free_initmem_default(int poison)
{
 extern char __init_begin[], __init_end[];

 return free_reserved_area(&__init_begin, &__init_end,
      poison, "unused kernel");
}

static inline unsigned long get_num_physpages(void)
{
 int nid;
 unsigned long phys_pages = 0;

 for (((nid)) = __first_node(&(node_states[N_ONLINE])); ((nid)) < (1 << 6); ((nid)) = __next_node((((nid))), &((node_states[N_ONLINE]))))
  phys_pages += ((node_data[nid])->node_present_pages);

 return phys_pages;
}
extern void free_area_init_nodes(unsigned long *max_zone_pfn);
unsigned long node_map_pfn_alignment(void);
unsigned long __absent_pages_in_range(int nid, unsigned long start_pfn,
      unsigned long end_pfn);
extern unsigned long absent_pages_in_range(unsigned long start_pfn,
      unsigned long end_pfn);
extern void get_pfn_range_for_nid(unsigned int nid,
   unsigned long *start_pfn, unsigned long *end_pfn);
extern unsigned long find_min_pfn_with_active_regions(void);
extern void free_bootmem_with_active_regions(int nid,
      unsigned long max_low_pfn);
extern void sparse_memory_present_with_active_regions(int nid);
extern int __attribute__ ((__section__(".meminit.text"))) __attribute__((__cold__)) early_pfn_to_nid(unsigned long pfn);






extern void set_dma_reserve(unsigned long new_dma_reserve);
extern void memmap_init_zone(unsigned long, int, unsigned long,
    unsigned long, enum memmap_context);
extern void setup_per_zone_wmarks(void);
extern int __attribute__ ((__section__(".meminit.text"))) __attribute__((__cold__)) init_per_zone_wmark_min(void);
extern void mem_init(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) mmap_init(void);
extern void show_mem(unsigned int flags);
extern void si_meminfo(struct sysinfo * val);
extern void si_meminfo_node(struct sysinfo *val, int nid);

extern __attribute__((format(printf, 3, 4)))
void warn_alloc_failed(gfp_t gfp_mask, int order, char *fmt, ...);

extern void setup_per_cpu_pageset(void);

extern void zone_pcp_update(struct zone *zone);
extern void zone_pcp_reset(struct zone *zone);


extern int min_free_kbytes;


extern atomic_long_t mmap_pages_allocated;
extern int nommu_shrink_inode_mappings(struct inode *, size_t, size_t);


void vma_interval_tree_insert(struct vm_area_struct *node,
         struct rb_root *root);
void vma_interval_tree_insert_after(struct vm_area_struct *node,
        struct vm_area_struct *prev,
        struct rb_root *root);
void vma_interval_tree_remove(struct vm_area_struct *node,
         struct rb_root *root);
struct vm_area_struct *vma_interval_tree_iter_first(struct rb_root *root,
    unsigned long start, unsigned long last);
struct vm_area_struct *vma_interval_tree_iter_next(struct vm_area_struct *node,
    unsigned long start, unsigned long last);





static inline void vma_nonlinear_insert(struct vm_area_struct *vma,
     struct list_head *list)
{
 list_add_tail(&vma->shared.nonlinear, list);
}

void anon_vma_interval_tree_insert(struct anon_vma_chain *node,
       struct rb_root *root);
void anon_vma_interval_tree_remove(struct anon_vma_chain *node,
       struct rb_root *root);
struct anon_vma_chain *anon_vma_interval_tree_iter_first(
 struct rb_root *root, unsigned long start, unsigned long last);
struct anon_vma_chain *anon_vma_interval_tree_iter_next(
 struct anon_vma_chain *node, unsigned long start, unsigned long last);
extern int __vm_enough_memory(struct mm_struct *mm, long pages, int cap_sys_admin);
extern int vma_adjust(struct vm_area_struct *vma, unsigned long start,
 unsigned long end, unsigned long pgoff, struct vm_area_struct *insert);
extern struct vm_area_struct *vma_merge(struct mm_struct *,
 struct vm_area_struct *prev, unsigned long addr, unsigned long end,
 unsigned long vm_flags, struct anon_vma *, struct file *, unsigned long,
 struct mempolicy *);
extern struct anon_vma *find_mergeable_anon_vma(struct vm_area_struct *);
extern int split_vma(struct mm_struct *,
 struct vm_area_struct *, unsigned long addr, int new_below);
extern int insert_vm_struct(struct mm_struct *, struct vm_area_struct *);
extern void __vma_link_rb(struct mm_struct *, struct vm_area_struct *,
 struct rb_node **, struct rb_node *);
extern void unlink_file_vma(struct vm_area_struct *);
extern struct vm_area_struct *copy_vma(struct vm_area_struct **,
 unsigned long addr, unsigned long len, unsigned long pgoff,
 bool *need_rmap_locks);
extern void exit_mmap(struct mm_struct *);

extern int mm_take_all_locks(struct mm_struct *mm);
extern void mm_drop_all_locks(struct mm_struct *mm);

extern void set_mm_exe_file(struct mm_struct *mm, struct file *new_exe_file);
extern struct file *get_mm_exe_file(struct mm_struct *mm);

extern int may_expand_vm(struct mm_struct *mm, unsigned long npages);
extern int install_special_mapping(struct mm_struct *mm,
       unsigned long addr, unsigned long len,
       unsigned long flags, struct page **pages);

extern unsigned long get_unmapped_area(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);

extern unsigned long mmap_region(struct file *file, unsigned long addr,
 unsigned long len, vm_flags_t vm_flags, unsigned long pgoff);
extern unsigned long do_mmap_pgoff(struct file *file, unsigned long addr,
 unsigned long len, unsigned long prot, unsigned long flags,
 unsigned long pgoff, unsigned long *populate);
extern int do_munmap(struct mm_struct *, unsigned long, size_t);


extern int __mm_populate(unsigned long addr, unsigned long len,
    int ignore_errors);
static inline void mm_populate(unsigned long addr, unsigned long len)
{

 (void) __mm_populate(addr, len, 1);
}





extern unsigned long vm_brk(unsigned long, unsigned long);
extern int vm_munmap(unsigned long, size_t);
extern unsigned long vm_mmap(struct file *, unsigned long,
        unsigned long, unsigned long,
        unsigned long, unsigned long);

struct vm_unmapped_area_info {

 unsigned long flags;
 unsigned long length;
 unsigned long low_limit;
 unsigned long high_limit;
 unsigned long align_mask;
 unsigned long align_offset;
};

extern unsigned long unmapped_area(struct vm_unmapped_area_info *info);
extern unsigned long unmapped_area_topdown(struct vm_unmapped_area_info *info);
static inline unsigned long
vm_unmapped_area(struct vm_unmapped_area_info *info)
{
 if (!(info->flags & 1))
  return unmapped_area(info);
 else
  return unmapped_area_topdown(info);
}


extern void truncate_inode_pages(struct address_space *, loff_t);
extern void truncate_inode_pages_range(struct address_space *,
           loff_t lstart, loff_t lend);


extern int filemap_fault(struct vm_area_struct *, struct vm_fault *);
extern int filemap_page_mkwrite(struct vm_area_struct *vma, struct vm_fault *vmf);


int write_one_page(struct page *page, int wait);
void task_dirty_inc(struct task_struct *tsk);





int force_page_cache_readahead(struct address_space *mapping, struct file *filp,
   unsigned long offset, unsigned long nr_to_read);

void page_cache_sync_readahead(struct address_space *mapping,
          struct file_ra_state *ra,
          struct file *filp,
          unsigned long offset,
          unsigned long size);

void page_cache_async_readahead(struct address_space *mapping,
    struct file_ra_state *ra,
    struct file *filp,
    struct page *pg,
    unsigned long offset,
    unsigned long size);

unsigned long max_sane_readahead(unsigned long nr);
unsigned long ra_submit(struct file_ra_state *ra,
   struct address_space *mapping,
   struct file *filp);


extern int expand_stack(struct vm_area_struct *vma, unsigned long address);


extern int expand_downwards(struct vm_area_struct *vma,
  unsigned long address);







extern struct vm_area_struct * find_vma(struct mm_struct * mm, unsigned long addr);
extern struct vm_area_struct * find_vma_prev(struct mm_struct * mm, unsigned long addr,
          struct vm_area_struct **pprev);



static inline struct vm_area_struct * find_vma_intersection(struct mm_struct * mm, unsigned long start_addr, unsigned long end_addr)
{
 struct vm_area_struct * vma = find_vma(mm,start_addr);

 if (vma && end_addr <= vma->vm_start)
  vma = 0;
 return vma;
}

static inline unsigned long vma_pages(struct vm_area_struct *vma)
{
 return (vma->vm_end - vma->vm_start) >> 12;
}


static inline struct vm_area_struct *find_exact_vma(struct mm_struct *mm,
    unsigned long vm_start, unsigned long vm_end)
{
 struct vm_area_struct *vma = find_vma(mm, vm_start);

 if (vma && (vma->vm_start != vm_start || vma->vm_end != vm_end))
  vma = 0;

 return vma;
}


pgprot_t vm_get_page_prot(unsigned long vm_flags);
unsigned long change_prot_numa(struct vm_area_struct *vma,
   unsigned long start, unsigned long end);


struct vm_area_struct *find_extend_vma(struct mm_struct *, unsigned long addr);
int remap_pfn_range(struct vm_area_struct *, unsigned long addr,
   unsigned long pfn, unsigned long size, pgprot_t);
int vm_insert_page(struct vm_area_struct *, unsigned long addr, struct page *);
int vm_insert_pfn(struct vm_area_struct *vma, unsigned long addr,
   unsigned long pfn);
int vm_insert_mixed(struct vm_area_struct *vma, unsigned long addr,
   unsigned long pfn);
int vm_iomap_memory(struct vm_area_struct *vma, phys_addr_t start, unsigned long len);


struct page *follow_page_mask(struct vm_area_struct *vma,
         unsigned long address, unsigned int foll_flags,
         unsigned int *page_mask);

static inline struct page *follow_page(struct vm_area_struct *vma,
  unsigned long address, unsigned int foll_flags)
{
 unsigned int unused_page_mask;
 return follow_page_mask(vma, address, foll_flags, &unused_page_mask);
}
typedef int (*pte_fn_t)(pte_t *pte, pgtable_t token, unsigned long addr,
   void *data);
extern int apply_to_page_range(struct mm_struct *mm, unsigned long address,
          unsigned long size, pte_fn_t fn, void *data);


void vm_stat_account(struct mm_struct *, unsigned long, struct file *, long);
static inline void
kernel_map_pages(struct page *page, int numpages, int enable) {}

static inline bool kernel_page_present(struct page *page) { return _true; }



extern struct vm_area_struct *get_gate_vma(struct mm_struct *mm);

int in_gate_area_no_mm(unsigned long addr);
int in_gate_area(struct mm_struct *mm, unsigned long addr);






extern int sysctl_drop_caches;
int drop_caches_sysctl_handler(struct ctl_table *, int,
     void *, size_t *, loff_t *);


unsigned long shrink_slab(struct shrink_control *shrink,
     unsigned long nr_pages_scanned,
     unsigned long lru_pages);




extern int randomize_va_space;


 char * arch_vma_name(struct vm_area_struct *vma);
void print_vma_addr(char *prefix, unsigned long rip);

void sparse_mem_maps_populate_node(struct page **map_map,
       unsigned long pnum_begin,
       unsigned long pnum_end,
       unsigned long map_count,
       int nodeid);

struct page *sparse_mem_map_populate(unsigned long pnum, int nid);
pgd_t *vmemmap_pgd_populate(unsigned long addr, int node);
pud_t *vmemmap_pud_populate(pgd_t *pgd, unsigned long addr, int node);
pmd_t *vmemmap_pmd_populate(pud_t *pud, unsigned long addr, int node);
pte_t *vmemmap_pte_populate(pmd_t *pmd, unsigned long addr, int node);
void *vmemmap_alloc_block(unsigned long size, int node);
void *vmemmap_alloc_block_buf(unsigned long size, int node);
void vmemmap_verify(pte_t *, int, unsigned long, unsigned long);
int vmemmap_populate_basepages(unsigned long start, unsigned long end,
          int node);
int vmemmap_populate(unsigned long start, unsigned long end, int node);
void vmemmap_populate_print_last(void);

void vmemmap_free(unsigned long start, unsigned long end);

void register_page_bootmem_memmap(unsigned long section_nr, struct page *map,
      unsigned long size);

enum mf_flags {
 MF_COUNT_INCREASED = 1 << 0,
 MF_ACTION_REQUIRED = 1 << 1,
 MF_MUST_KILL = 1 << 2,
 MF_SOFT_OFFLINE = 1 << 3,
};
extern int memory_failure(unsigned long pfn, int trapno, int flags);
extern void memory_failure_queue(unsigned long pfn, int trapno, int flags);
extern int unpoison_memory(unsigned long pfn);
extern int sysctl_memory_failure_early_kill;
extern int sysctl_memory_failure_recovery;
extern void shake_page(struct page *p, int access);
extern atomic_long_t num_poisoned_pages;
extern int soft_offline_page(struct page *page, int flags);

extern void dump_page(struct page *page);


extern void clear_huge_page(struct page *page,
       unsigned long addr,
       unsigned int pages_per_huge_page);
extern void copy_user_huge_page(struct page *dst, struct page *src,
    unsigned long addr, struct vm_area_struct *vma,
    unsigned int pages_per_huge_page);
static inline unsigned int debug_guardpage_minorder(void) { return 0; }
static inline bool page_is_guard(struct page *page) { return _false; }



void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) setup_nr_node_ids(void);

static inline void kmemleak_init(void)
{
}
static inline void kmemleak_alloc( void *ptr, size_t size, int min_count,
      gfp_t gfp)
{
}
static inline void kmemleak_alloc_recursive( void *ptr, size_t size,
         int min_count, unsigned long flags,
         gfp_t gfp)
{
}
static inline void kmemleak_alloc_percpu( void *ptr, size_t size)
{
}
static inline void kmemleak_free( void *ptr)
{
}
static inline void kmemleak_free_part( void *ptr, size_t size)
{
}
static inline void kmemleak_free_recursive( void *ptr, unsigned long flags)
{
}
static inline void kmemleak_free_percpu( void *ptr)
{
}
static inline void kmemleak_not_leak( void *ptr)
{
}
static inline void kmemleak_ignore( void *ptr)
{
}
static inline void kmemleak_scan_area( void *ptr, size_t size, gfp_t gfp)
{
}
static inline void kmemleak_erase(void **ptr)
{
}
static inline void kmemleak_no_scan( void *ptr)
{
}

struct mem_cgroup;



void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) kmem_cache_init(void);
int slab_is_available(void);

struct kmem_cache *kmem_cache_create( char *, size_t, size_t,
   unsigned long,
   void (*)(void *));
struct kmem_cache *
kmem_cache_create_memcg(struct mem_cgroup *, char *, size_t, size_t,
   unsigned long, void (*)(void *), struct kmem_cache *);
void kmem_cache_destroy(struct kmem_cache *);
int kmem_cache_shrink(struct kmem_cache *);
void kmem_cache_free(struct kmem_cache *, void *);
void * __krealloc( void *, size_t, gfp_t);
void * krealloc( void *, size_t, gfp_t);
void kfree( void *);
void kzfree( void *);
size_t ksize( void *);
extern struct kmem_cache *kmalloc_caches[(12 + 1) + 1];

extern struct kmem_cache *kmalloc_dma_caches[(12 + 1) + 1];
static inline __attribute__((always_inline)) int kmalloc_index(size_t size)
{
 if (!size)
  return 0;

 if (size <= (1 << 3))
  return 3;

 if ((1 << 3) <= 32 && size > 64 && size <= 96)
  return 1;
 if ((1 << 3) <= 64 && size > 128 && size <= 192)
  return 2;
 if (size <= 8) return 3;
 if (size <= 16) return 4;
 if (size <= 32) return 5;
 if (size <= 64) return 6;
 if (size <= 128) return 7;
 if (size <= 256) return 8;
 if (size <= 512) return 9;
 if (size <= 1024) return 10;
 if (size <= 2 * 1024) return 11;
 if (size <= 4 * 1024) return 12;
 if (size <= 8 * 1024) return 13;
 if (size <= 16 * 1024) return 14;
 if (size <= 32 * 1024) return 15;
 if (size <= 64 * 1024) return 16;
 if (size <= 128 * 1024) return 17;
 if (size <= 256 * 1024) return 18;
 if (size <= 512 * 1024) return 19;
 if (size <= 1024 * 1024) return 20;
 if (size <= 2 * 1024 * 1024) return 21;
 if (size <= 4 * 1024 * 1024) return 22;
 if (size <= 8 * 1024 * 1024) return 23;
 if (size <= 16 * 1024 * 1024) return 24;
 if (size <= 32 * 1024 * 1024) return 25;
 if (size <= 64 * 1024 * 1024) return 26;
 ;


 return -1;
}


void *__kmalloc(size_t size, gfp_t flags);
void *kmem_cache_alloc(struct kmem_cache *, gfp_t flags);


void *__kmalloc_node(size_t size, gfp_t flags, int node);
void *kmem_cache_alloc_node(struct kmem_cache *, gfp_t flags, int node);
extern void *kmem_cache_alloc_trace(struct kmem_cache *, gfp_t, size_t);


extern void *kmem_cache_alloc_node_trace(struct kmem_cache *s,
        gfp_t gfpflags,
        int node, size_t size);
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

enum stat_item {
 ALLOC_FASTPATH,
 ALLOC_SLOWPATH,
 FREE_FASTPATH,
 FREE_SLOWPATH,
 FREE_FROZEN,
 FREE_ADD_PARTIAL,
 FREE_REMOVE_PARTIAL,
 ALLOC_FROM_PARTIAL,
 ALLOC_SLAB,
 ALLOC_REFILL,
 ALLOC_NODE_MISMATCH,
 FREE_SLAB,
 CPUSLAB_FLUSH,
 DEACTIVATE_FULL,
 DEACTIVATE_EMPTY,
 DEACTIVATE_TO_HEAD,
 DEACTIVATE_TO_TAIL,
 DEACTIVATE_REMOTE_FREES,
 DEACTIVATE_BYPASS,
 ORDER_FALLBACK,
 CMPXCHG_DOUBLE_CPU_FAIL,
 CMPXCHG_DOUBLE_FAIL,
 CPU_PARTIAL_ALLOC,
 CPU_PARTIAL_FREE,
 CPU_PARTIAL_NODE,
 CPU_PARTIAL_DRAIN,
 NR_SLUB_STAT_ITEMS };

struct kmem_cache_cpu {
 void **freelist;
 unsigned long tid;
 struct page *page;
 struct page *partial;



};






struct kmem_cache_order_objects {
 unsigned long x;
};




struct kmem_cache {
 struct kmem_cache_cpu *cpu_slab;

 unsigned long flags;
 unsigned long min_partial;
 int size;
 int object_size;
 int offset;
 int cpu_partial;
 struct kmem_cache_order_objects oo;


 struct kmem_cache_order_objects max;
 struct kmem_cache_order_objects min;
 gfp_t allocflags;
 int refcount;
 void (*ctor)(void *);
 int inuse;
 int align;
 int reserved;
 char *name;
 struct list_head list;

 struct kobject kobj;
 int remote_node_defrag_ratio;

 struct kmem_cache_node *node[(1 << 6)];
};


static inline __attribute__((always_inline)) void *
kmalloc_order(size_t size, gfp_t flags, unsigned int order)
{
 void *ret;

 flags |= ((( gfp_t)0x4000u) | (( gfp_t)0x100000u));
 ret = (void *) __get_free_pages(flags, order);
 kmemleak_alloc(ret, size, 1, flags);
 return ret;
}


extern void *kmalloc_order_trace(size_t size, gfp_t flags, unsigned int order);
static inline __attribute__((always_inline)) void *kmalloc_large(size_t size, gfp_t flags)
{
 unsigned int order = ( __builtin_constant_p(size) ? ( ((size) == 0UL) ? 64 - 12 : (((size) < (1UL << 12)) ? 0 : ( __builtin_constant_p((size) - 1) ? ( ((size) - 1) < 1 ? ____ilog2_NaN() : ((size) - 1) & (1ULL << 63) ? 63 : ((size) - 1) & (1ULL << 62) ? 62 : ((size) - 1) & (1ULL << 61) ? 61 : ((size) - 1) & (1ULL << 60) ? 60 : ((size) - 1) & (1ULL << 59) ? 59 : ((size) - 1) & (1ULL << 58) ? 58 : ((size) - 1) & (1ULL << 57) ? 57 : ((size) - 1) & (1ULL << 56) ? 56 : ((size) - 1) & (1ULL << 55) ? 55 : ((size) - 1) & (1ULL << 54) ? 54 : ((size) - 1) & (1ULL << 53) ? 53 : ((size) - 1) & (1ULL << 52) ? 52 : ((size) - 1) & (1ULL << 51) ? 51 : ((size) - 1) & (1ULL << 50) ? 50 : ((size) - 1) & (1ULL << 49) ? 49 : ((size) - 1) & (1ULL << 48) ? 48 : ((size) - 1) & (1ULL << 47) ? 47 : ((size) - 1) & (1ULL << 46) ? 46 : ((size) - 1) & (1ULL << 45) ? 45 : ((size) - 1) & (1ULL << 44) ? 44 : ((size) - 1) & (1ULL << 43) ? 43 : ((size) - 1) & (1ULL << 42) ? 42 : ((size) - 1) & (1ULL << 41) ? 41 : ((size) - 1) & (1ULL << 40) ? 40 : ((size) - 1) & (1ULL << 39) ? 39 : ((size) - 1) & (1ULL << 38) ? 38 : ((size) - 1) & (1ULL << 37) ? 37 : ((size) - 1) & (1ULL << 36) ? 36 : ((size) - 1) & (1ULL << 35) ? 35 : ((size) - 1) & (1ULL << 34) ? 34 : ((size) - 1) & (1ULL << 33) ? 33 : ((size) - 1) & (1ULL << 32) ? 32 : ((size) - 1) & (1ULL << 31) ? 31 : ((size) - 1) & (1ULL << 30) ? 30 : ((size) - 1) & (1ULL << 29) ? 29 : ((size) - 1) & (1ULL << 28) ? 28 : ((size) - 1) & (1ULL << 27) ? 27 : ((size) - 1) & (1ULL << 26) ? 26 : ((size) - 1) & (1ULL << 25) ? 25 : ((size) - 1) & (1ULL << 24) ? 24 : ((size) - 1) & (1ULL << 23) ? 23 : ((size) - 1) & (1ULL << 22) ? 22 : ((size) - 1) & (1ULL << 21) ? 21 : ((size) - 1) & (1ULL << 20) ? 20 : ((size) - 1) & (1ULL << 19) ? 19 : ((size) - 1) & (1ULL << 18) ? 18 : ((size) - 1) & (1ULL << 17) ? 17 : ((size) - 1) & (1ULL << 16) ? 16 : ((size) - 1) & (1ULL << 15) ? 15 : ((size) - 1) & (1ULL << 14) ? 14 : ((size) - 1) & (1ULL << 13) ? 13 : ((size) - 1) & (1ULL << 12) ? 12 : ((size) - 1) & (1ULL << 11) ? 11 : ((size) - 1) & (1ULL << 10) ? 10 : ((size) - 1) & (1ULL << 9) ? 9 : ((size) - 1) & (1ULL << 8) ? 8 : ((size) - 1) & (1ULL << 7) ? 7 : ((size) - 1) & (1ULL << 6) ? 6 : ((size) - 1) & (1ULL << 5) ? 5 : ((size) - 1) & (1ULL << 4) ? 4 : ((size) - 1) & (1ULL << 3) ? 3 : ((size) - 1) & (1ULL << 2) ? 2 : ((size) - 1) & (1ULL << 1) ? 1 : ((size) - 1) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof((size) - 1) <= 4) ? __ilog2_u32((size) - 1) : __ilog2_u64((size) - 1) ) - 12 + 1) ) : __get_order(size) );
 return kmalloc_order_trace(size, flags, order);
}
extern void *kmalloc(size_t size, gfp_t flags);







static inline __attribute__((always_inline)) int kmalloc_size(int n)
{

 if (n > 2)
  return 1 << n;

 if (n == 1 && (1 << 3) <= 32)
  return 96;

 if (n == 2 && (1 << 3) <= 64)
  return 192;

 return 0;
}

static inline __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{

 if (__builtin_constant_p(size) &&
  size <= (1UL << (12 + 1)) && !(flags & (( gfp_t)0x01u))) {
  int i = kmalloc_index(size);

  if (!i)
   return ((void *)16);

  return kmem_cache_alloc_node_trace(kmalloc_caches[i],
      flags, node, size);
 }

 return __kmalloc_node(size, flags, node);
}
struct memcg_cache_params {
 bool is_root_cache;
 union {
  struct kmem_cache *memcg_caches[0];
  struct {
   struct mem_cgroup *memcg;
   struct list_head list;
   struct kmem_cache *root_cache;
   bool dead;
   atomic_t nr_pages;
   struct work_struct destroy;
  };
 };
};

int memcg_update_all_caches(int num_memcgs);

struct seq_file;
int cache_show(struct kmem_cache *s, struct seq_file *m);
void print_slabinfo_header(struct seq_file *m);







static inline void *kmalloc_array(size_t n, size_t size, gfp_t flags)
{
 if (size != 0 && n > (~(size_t)0) / size)
  return 0;
 return __kmalloc(n * size, flags);
}







static inline void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 return kmalloc_array(n, size, flags | (( gfp_t)0x8000u));
}
extern void *__kmalloc_track_caller(size_t, gfp_t, unsigned long);
extern void *__kmalloc_node_track_caller(size_t, gfp_t, int, unsigned long);
static inline void *kmem_cache_zalloc(struct kmem_cache *k, gfp_t flags)
{
 return kmem_cache_alloc(k, flags | (( gfp_t)0x8000u));
}






static inline void *kzalloc(size_t size, gfp_t flags)
{
 return kmalloc(size, flags | (( gfp_t)0x8000u));
}







static inline void *kzalloc_node(size_t size, gfp_t flags, int node)
{
 return kmalloc_node(size, flags | (( gfp_t)0x8000u), node);
}




static inline unsigned int kmem_cache_size(struct kmem_cache *s)
{
 return s->object_size;
}

void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) kmem_cache_init_late(void);



struct linux_binprm;
struct cred;
struct rlimit;
struct siginfo;
struct sem_array;
struct sembuf;
struct kern_ipc_perm;
struct audit_context;
struct super_block;
struct inode;
struct dentry;
struct file;
struct vfsmount;
struct path;
struct qstr;
struct nameidata;
struct iattr;
struct fown_struct;
struct file_operations;
struct shmid_kernel;
struct msg_msg;
struct msg_queue;
struct xattr;
struct xfrm_sec_ctx;
struct mm_struct;
struct ctl_table;
struct audit_krule;
struct user_namespace;
struct timezone;





extern int cap_capable( struct cred *cred, struct user_namespace *ns,
         int cap, int audit);
extern int cap_settime( struct timespec *ts, struct timezone *tz);
extern int cap_ptrace_access_check(struct task_struct *child, unsigned int mode);
extern int cap_ptrace_traceme(struct task_struct *parent);
extern int cap_capget(struct task_struct *target, kernel_cap_t *effective, kernel_cap_t *inheritable, kernel_cap_t *permitted);
extern int cap_capset(struct cred *_new, struct cred *old,
        kernel_cap_t *effective,
        kernel_cap_t *inheritable,
        kernel_cap_t *permitted);
extern int cap_bprm_set_creds(struct linux_binprm *bprm);
extern int cap_bprm_secureexec(struct linux_binprm *bprm);
extern int cap_inode_setxattr(struct dentry *dentry, char *name,
         void *value, size_t size, int flags);
extern int cap_inode_removexattr(struct dentry *dentry, char *name);
extern int cap_inode_need_killpriv(struct dentry *dentry);
extern int cap_inode_killpriv(struct dentry *dentry);
extern int cap_mmap_addr(unsigned long addr);
extern int cap_mmap_file(struct file *file, unsigned long reqprot,
    unsigned long prot, unsigned long flags);
extern int cap_task_fix_setuid(struct cred *_new, struct cred *old, int flags);
extern int cap_task_prctl(int option, unsigned long arg2, unsigned long arg3,
     unsigned long arg4, unsigned long arg5);
extern int cap_task_setscheduler(struct task_struct *p);
extern int cap_task_setioprio(struct task_struct *p, int ioprio);
extern int cap_task_setnice(struct task_struct *p, int nice);
extern int cap_vm_enough_memory(struct mm_struct *mm, long pages);

struct msghdr;
struct sk_buff;
struct sock;
struct sockaddr;
struct socket;
struct flowi;
struct dst_entry;
struct xfrm_selector;
struct xfrm_policy;
struct xfrm_state;
struct xfrm_user_sec_ctx;
struct seq_file;

extern int cap_netlink_send(struct sock *sk, struct sk_buff *skb);

void reset_security_ops(void);


extern unsigned long mmap_min_addr;
extern unsigned long dac_mmap_min_addr;
struct sched_param;
struct request_sock;
extern int mmap_min_addr_handler(struct ctl_table *table, int write,
     void *buffer, size_t *lenp, loff_t *ppos);



typedef int (*initxattrs) (struct inode *inode,
      struct xattr *xattr_array, void *fs_data);



struct security_mnt_opts {
 char **mnt_opts;
 int *mnt_opts_flags;
 int num_mnt_opts;
};

static inline void security_init_mnt_opts(struct security_mnt_opts *opts)
{
 opts->mnt_opts = 0;
 opts->mnt_opts_flags = 0;
 opts->num_mnt_opts = 0;
}

static inline void security_free_mnt_opts(struct security_mnt_opts *opts)
{
 int i;
 if (opts->mnt_opts)
  for (i = 0; i < opts->num_mnt_opts; i++)
   kfree(opts->mnt_opts[i]);
 kfree(opts->mnt_opts);
 opts->mnt_opts = 0;
 kfree(opts->mnt_opts_flags);
 opts->mnt_opts_flags = 0;
 opts->num_mnt_opts = 0;
}
struct security_operations {
 char name[10 + 1];

 int (*ptrace_access_check) (struct task_struct *child, unsigned int mode);
 int (*ptrace_traceme) (struct task_struct *parent);
 int (*capget) (struct task_struct *target,
         kernel_cap_t *effective,
         kernel_cap_t *inheritable, kernel_cap_t *permitted);
 int (*capset) (struct cred *_new,
         struct cred *old,
         kernel_cap_t *effective,
         kernel_cap_t *inheritable,
         kernel_cap_t *permitted);
 int (*capable) ( struct cred *cred, struct user_namespace *ns,
   int cap, int audit);
 int (*quotactl) (int cmds, int type, int id, struct super_block *sb);
 int (*quota_on) (struct dentry *dentry);
 int (*syslog) (int type);
 int (*settime) ( struct timespec *ts, struct timezone *tz);
 int (*vm_enough_memory) (struct mm_struct *mm, long pages);

 int (*bprm_set_creds) (struct linux_binprm *bprm);
 int (*bprm_check_security) (struct linux_binprm *bprm);
 int (*bprm_secureexec) (struct linux_binprm *bprm);
 void (*bprm_committing_creds) (struct linux_binprm *bprm);
 void (*bprm_committed_creds) (struct linux_binprm *bprm);

 int (*sb_alloc_security) (struct super_block *sb);
 void (*sb_free_security) (struct super_block *sb);
 int (*sb_copy_data) (char *orig, char *copy);
 int (*sb_remount) (struct super_block *sb, void *data);
 int (*sb_kern_mount) (struct super_block *sb, int flags, void *data);
 int (*sb_show_options) (struct seq_file *m, struct super_block *sb);
 int (*sb_statfs) (struct dentry *dentry);
 int (*sb_mount) ( char *dev_name, struct path *path,
    char *type, unsigned long flags, void *data);
 int (*sb_umount) (struct vfsmount *mnt, int flags);
 int (*sb_pivotroot) (struct path *old_path,
        struct path *new_path);
 int (*sb_set_mnt_opts) (struct super_block *sb,
    struct security_mnt_opts *opts,
    unsigned long kern_flags,
    unsigned long *set_kern_flags);
 int (*sb_clone_mnt_opts) ( struct super_block *oldsb,
       struct super_block *newsb);
 int (*sb_parse_opts_str) (char *options, struct security_mnt_opts *opts);
 int (*dentry_init_security) (struct dentry *dentry, int mode,
     struct qstr *name, void **ctx,
     u32 *ctxlen);



 int (*path_unlink) (struct path *dir, struct dentry *dentry);
 int (*path_mkdir) (struct path *dir, struct dentry *dentry, umode_t mode);
 int (*path_rmdir) (struct path *dir, struct dentry *dentry);
 int (*path_mknod) (struct path *dir, struct dentry *dentry, umode_t mode,
      unsigned int dev);
 int (*path_truncate) (struct path *path);
 int (*path_symlink) (struct path *dir, struct dentry *dentry,
        char *old_name);
 int (*path_link) (struct dentry *old_dentry, struct path *new_dir,
     struct dentry *new_dentry);
 int (*path_rename) (struct path *old_dir, struct dentry *old_dentry,
       struct path *new_dir, struct dentry *new_dentry);
 int (*path_chmod) (struct path *path, umode_t mode);
 int (*path_chown) (struct path *path, kuid_t uid, kgid_t gid);
 int (*path_chroot) (struct path *path);


 int (*inode_alloc_security) (struct inode *inode);
 void (*inode_free_security) (struct inode *inode);
 int (*inode_init_security) (struct inode *inode, struct inode *dir,
        struct qstr *qstr, char **name,
        void **value, size_t *len);
 int (*inode_create) (struct inode *dir,
        struct dentry *dentry, umode_t mode);
 int (*inode_link) (struct dentry *old_dentry,
      struct inode *dir, struct dentry *new_dentry);
 int (*inode_unlink) (struct inode *dir, struct dentry *dentry);
 int (*inode_symlink) (struct inode *dir,
         struct dentry *dentry, char *old_name);
 int (*inode_mkdir) (struct inode *dir, struct dentry *dentry, umode_t mode);
 int (*inode_rmdir) (struct inode *dir, struct dentry *dentry);
 int (*inode_mknod) (struct inode *dir, struct dentry *dentry,
       umode_t mode, dev_t dev);
 int (*inode_rename) (struct inode *old_dir, struct dentry *old_dentry,
        struct inode *new_dir, struct dentry *new_dentry);
 int (*inode_readlink) (struct dentry *dentry);
 int (*inode_follow_link) (struct dentry *dentry, struct nameidata *nd);
 int (*inode_permission) (struct inode *inode, int mask);
 int (*inode_setattr) (struct dentry *dentry, struct iattr *attr);
 int (*inode_getattr) (struct vfsmount *mnt, struct dentry *dentry);
 int (*inode_setxattr) (struct dentry *dentry, char *name,
          void *value, size_t size, int flags);
 void (*inode_post_setxattr) (struct dentry *dentry, char *name,
         void *value, size_t size, int flags);
 int (*inode_getxattr) (struct dentry *dentry, char *name);
 int (*inode_listxattr) (struct dentry *dentry);
 int (*inode_removexattr) (struct dentry *dentry, char *name);
 int (*inode_need_killpriv) (struct dentry *dentry);
 int (*inode_killpriv) (struct dentry *dentry);
 int (*inode_getsecurity) ( struct inode *inode, char *name, void **buffer, bool alloc);
 int (*inode_setsecurity) (struct inode *inode, char *name, void *value, size_t size, int flags);
 int (*inode_listsecurity) (struct inode *inode, char *buffer, size_t buffer_size);
 void (*inode_getsecid) ( struct inode *inode, u32 *secid);

 int (*file_permission) (struct file *file, int mask);
 int (*file_alloc_security) (struct file *file);
 void (*file_free_security) (struct file *file);
 int (*file_ioctl) (struct file *file, unsigned int cmd,
      unsigned long arg);
 int (*mmap_addr) (unsigned long addr);
 int (*mmap_file) (struct file *file,
     unsigned long reqprot, unsigned long prot,
     unsigned long flags);
 int (*file_mprotect) (struct vm_area_struct *vma,
         unsigned long reqprot,
         unsigned long prot);
 int (*file_lock) (struct file *file, unsigned int cmd);
 int (*file_fcntl) (struct file *file, unsigned int cmd,
      unsigned long arg);
 int (*file_set_fowner) (struct file *file);
 int (*file_send_sigiotask) (struct task_struct *tsk,
        struct fown_struct *fown, int sig);
 int (*file_receive) (struct file *file);
 int (*file_open) (struct file *file, struct cred *cred);

 int (*task_create) (unsigned long clone_flags);
 void (*task_free) (struct task_struct *task);
 int (*cred_alloc_blank) (struct cred *cred, gfp_t gfp);
 void (*cred_free) (struct cred *cred);
 int (*cred_prepare)(struct cred *_new, struct cred *old,
       gfp_t gfp);
 void (*cred_transfer)(struct cred *_new, struct cred *old);
 int (*kernel_act_as)(struct cred *_new, u32 secid);
 int (*kernel_create_files_as)(struct cred *_new, struct inode *inode);
 int (*kernel_module_request)(char *kmod_name);
 int (*kernel_module_from_file)(struct file *file);
 int (*task_fix_setuid) (struct cred *_new, struct cred *old,
    int flags);
 int (*task_setpgid) (struct task_struct *p, pid_t pgid);
 int (*task_getpgid) (struct task_struct *p);
 int (*task_getsid) (struct task_struct *p);
 void (*task_getsecid) (struct task_struct *p, u32 *secid);
 int (*task_setnice) (struct task_struct *p, int nice);
 int (*task_setioprio) (struct task_struct *p, int ioprio);
 int (*task_getioprio) (struct task_struct *p);
 int (*task_setrlimit) (struct task_struct *p, unsigned int resource,
   struct rlimit *new_rlim);
 int (*task_setscheduler) (struct task_struct *p);
 int (*task_getscheduler) (struct task_struct *p);
 int (*task_movememory) (struct task_struct *p);
 int (*task_kill) (struct task_struct *p,
     struct siginfo *info, int sig, u32 secid);
 int (*task_wait) (struct task_struct *p);
 int (*task_prctl) (int option, unsigned long arg2,
      unsigned long arg3, unsigned long arg4,
      unsigned long arg5);
 void (*task_to_inode) (struct task_struct *p, struct inode *inode);

 int (*ipc_permission) (struct kern_ipc_perm *ipcp, short flag);
 void (*ipc_getsecid) (struct kern_ipc_perm *ipcp, u32 *secid);

 int (*msg_msg_alloc_security) (struct msg_msg *msg);
 void (*msg_msg_free_security) (struct msg_msg *msg);

 int (*msg_queue_alloc_security) (struct msg_queue *msq);
 void (*msg_queue_free_security) (struct msg_queue *msq);
 int (*msg_queue_associate) (struct msg_queue *msq, int msqflg);
 int (*msg_queue_msgctl) (struct msg_queue *msq, int cmd);
 int (*msg_queue_msgsnd) (struct msg_queue *msq,
     struct msg_msg *msg, int msqflg);
 int (*msg_queue_msgrcv) (struct msg_queue *msq,
     struct msg_msg *msg,
     struct task_struct *target,
     long type, int mode);

 int (*shm_alloc_security) (struct shmid_kernel *shp);
 void (*shm_free_security) (struct shmid_kernel *shp);
 int (*shm_associate) (struct shmid_kernel *shp, int shmflg);
 int (*shm_shmctl) (struct shmid_kernel *shp, int cmd);
 int (*shm_shmat) (struct shmid_kernel *shp,
     char *shmaddr, int shmflg);

 int (*sem_alloc_security) (struct sem_array *sma);
 void (*sem_free_security) (struct sem_array *sma);
 int (*sem_associate) (struct sem_array *sma, int semflg);
 int (*sem_semctl) (struct sem_array *sma, int cmd);
 int (*sem_semop) (struct sem_array *sma,
     struct sembuf *sops, unsigned nsops, int alter);

 int (*netlink_send) (struct sock *sk, struct sk_buff *skb);

 void (*d_instantiate) (struct dentry *dentry, struct inode *inode);

 int (*getprocattr) (struct task_struct *p, char *name, char **value);
 int (*setprocattr) (struct task_struct *p, char *name, void *value, size_t size);
 int (*ismaclabel) ( char *name);
 int (*secid_to_secctx) (u32 secid, char **secdata, u32 *seclen);
 int (*secctx_to_secid) ( char *secdata, u32 seclen, u32 *secid);
 void (*release_secctx) (char *secdata, u32 seclen);

 int (*inode_notifysecctx)(struct inode *inode, void *ctx, u32 ctxlen);
 int (*inode_setsecctx)(struct dentry *dentry, void *ctx, u32 ctxlen);
 int (*inode_getsecctx)(struct inode *inode, void **ctx, u32 *ctxlen);


 int (*unix_stream_connect) (struct sock *sock, struct sock *other, struct sock *newsk);
 int (*unix_may_send) (struct socket *sock, struct socket *other);

 int (*socket_create) (int family, int type, int protocol, int kern);
 int (*socket_post_create) (struct socket *sock, int family,
       int type, int protocol, int kern);
 int (*socket_bind) (struct socket *sock,
       struct sockaddr *address, int addrlen);
 int (*socket_connect) (struct socket *sock,
          struct sockaddr *address, int addrlen);
 int (*socket_listen) (struct socket *sock, int backlog);
 int (*socket_accept) (struct socket *sock, struct socket *newsock);
 int (*socket_sendmsg) (struct socket *sock,
          struct msghdr *msg, int size);
 int (*socket_recvmsg) (struct socket *sock,
          struct msghdr *msg, int size, int flags);
 int (*socket_getsockname) (struct socket *sock);
 int (*socket_getpeername) (struct socket *sock);
 int (*socket_getsockopt) (struct socket *sock, int level, int optname);
 int (*socket_setsockopt) (struct socket *sock, int level, int optname);
 int (*socket_shutdown) (struct socket *sock, int how);
 int (*socket_sock_rcv_skb) (struct sock *sk, struct sk_buff *skb);
 int (*socket_getpeersec_stream) (struct socket *sock, char *optval, int *optlen, unsigned len);
 int (*socket_getpeersec_dgram) (struct socket *sock, struct sk_buff *skb, u32 *secid);
 int (*sk_alloc_security) (struct sock *sk, int family, gfp_t priority);
 void (*sk_free_security) (struct sock *sk);
 void (*sk_clone_security) ( struct sock *sk, struct sock *newsk);
 void (*sk_getsecid) (struct sock *sk, u32 *secid);
 void (*sock_graft) (struct sock *sk, struct socket *parent);
 int (*inet_conn_request) (struct sock *sk, struct sk_buff *skb,
      struct request_sock *req);
 void (*inet_csk_clone) (struct sock *newsk, struct request_sock *req);
 void (*inet_conn_established) (struct sock *sk, struct sk_buff *skb);
 int (*secmark_relabel_packet) (u32 secid);
 void (*secmark_refcount_inc) (void);
 void (*secmark_refcount_dec) (void);
 void (*req_classify_flow) ( struct request_sock *req, struct flowi *fl);
 int (*tun_dev_alloc_security) (void **security);
 void (*tun_dev_free_security) (void *security);
 int (*tun_dev_create) (void);
 int (*tun_dev_attach_queue) (void *security);
 int (*tun_dev_attach) (struct sock *sk, void *security);
 int (*tun_dev_open) (void *security);
 void (*skb_owned_by) (struct sk_buff *skb, struct sock *sk);
 int (*key_alloc) (struct key *key, struct cred *cred, unsigned long flags);
 void (*key_free) (struct key *key);
 int (*key_permission) (key_ref_t key_ref,
          struct cred *cred,
          key_perm_t perm);
 int (*key_getsecurity)(struct key *key, char **_buffer);



 int (*audit_rule_init) (u32 field, u32 op, char *rulestr, void **lsmrule);
 int (*audit_rule_known) (struct audit_krule *krule);
 int (*audit_rule_match) (u32 secid, u32 field, u32 op, void *lsmrule,
     struct audit_context *actx);
 void (*audit_rule_free) (void *lsmrule);

};


extern int security_init(void);
extern int security_module_enable(struct security_operations *ops);
extern int register_security(struct security_operations *ops);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) security_fixup_ops(struct security_operations *ops);



int security_ptrace_access_check(struct task_struct *child, unsigned int mode);
int security_ptrace_traceme(struct task_struct *parent);
int security_capget(struct task_struct *target,
      kernel_cap_t *effective,
      kernel_cap_t *inheritable,
      kernel_cap_t *permitted);
int security_capset(struct cred *_new, struct cred *old,
      kernel_cap_t *effective,
      kernel_cap_t *inheritable,
      kernel_cap_t *permitted);
int security_quotactl(int cmds, int type, int id, struct super_block *sb);
int security_quota_on(struct dentry *dentry);
int security_syslog(int type);
int security_settime( struct timespec *ts, struct timezone *tz);
int security_vm_enough_memory_mm(struct mm_struct *mm, long pages);
int security_bprm_set_creds(struct linux_binprm *bprm);
int security_bprm_check(struct linux_binprm *bprm);
void security_bprm_committing_creds(struct linux_binprm *bprm);
void security_bprm_committed_creds(struct linux_binprm *bprm);
int security_bprm_secureexec(struct linux_binprm *bprm);
int security_sb_alloc(struct super_block *sb);
void security_sb_free(struct super_block *sb);
int security_sb_copy_data(char *orig, char *copy);
int security_sb_remount(struct super_block *sb, void *data);
int security_sb_kern_mount(struct super_block *sb, int flags, void *data);
int security_sb_show_options(struct seq_file *m, struct super_block *sb);
int security_sb_statfs(struct dentry *dentry);
int security_sb_mount( char *dev_name, struct path *path,
        char *type, unsigned long flags, void *data);
int security_sb_umount(struct vfsmount *mnt, int flags);
int security_sb_pivotroot(struct path *old_path, struct path *new_path);
int security_sb_set_mnt_opts(struct super_block *sb,
    struct security_mnt_opts *opts,
    unsigned long kern_flags,
    unsigned long *set_kern_flags);
int security_sb_clone_mnt_opts( struct super_block *oldsb,
    struct super_block *newsb);
int security_sb_parse_opts_str(char *options, struct security_mnt_opts *opts);
int security_dentry_init_security(struct dentry *dentry, int mode,
     struct qstr *name, void **ctx,
     u32 *ctxlen);

int security_inode_alloc(struct inode *inode);
void security_inode_free(struct inode *inode);
int security_inode_init_security(struct inode *inode, struct inode *dir,
     struct qstr *qstr,
     initxattrs initxattrs, void *fs_data);
int security_old_inode_init_security(struct inode *inode, struct inode *dir,
         struct qstr *qstr, char **name,
         void **value, size_t *len);
int security_inode_create(struct inode *dir, struct dentry *dentry, umode_t mode);
int security_inode_link(struct dentry *old_dentry, struct inode *dir,
    struct dentry *new_dentry);
int security_inode_unlink(struct inode *dir, struct dentry *dentry);
int security_inode_symlink(struct inode *dir, struct dentry *dentry,
      char *old_name);
int security_inode_mkdir(struct inode *dir, struct dentry *dentry, umode_t mode);
int security_inode_rmdir(struct inode *dir, struct dentry *dentry);
int security_inode_mknod(struct inode *dir, struct dentry *dentry, umode_t mode, dev_t dev);
int security_inode_rename(struct inode *old_dir, struct dentry *old_dentry,
     struct inode *new_dir, struct dentry *new_dentry);
int security_inode_readlink(struct dentry *dentry);
int security_inode_follow_link(struct dentry *dentry, struct nameidata *nd);
int security_inode_permission(struct inode *inode, int mask);
int security_inode_setattr(struct dentry *dentry, struct iattr *attr);
int security_inode_getattr(struct vfsmount *mnt, struct dentry *dentry);
int security_inode_setxattr(struct dentry *dentry, char *name,
       void *value, size_t size, int flags);
void security_inode_post_setxattr(struct dentry *dentry, char *name,
      void *value, size_t size, int flags);
int security_inode_getxattr(struct dentry *dentry, char *name);
int security_inode_listxattr(struct dentry *dentry);
int security_inode_removexattr(struct dentry *dentry, char *name);
int security_inode_need_killpriv(struct dentry *dentry);
int security_inode_killpriv(struct dentry *dentry);
int security_inode_getsecurity( struct inode *inode, char *name, void **buffer, bool alloc);
int security_inode_setsecurity(struct inode *inode, char *name, void *value, size_t size, int flags);
int security_inode_listsecurity(struct inode *inode, char *buffer, size_t buffer_size);
void security_inode_getsecid( struct inode *inode, u32 *secid);
int security_file_permission(struct file *file, int mask);
int security_file_alloc(struct file *file);
void security_file_free(struct file *file);
int security_file_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
int security_mmap_file(struct file *file, unsigned long prot,
   unsigned long flags);
int security_mmap_addr(unsigned long addr);
int security_file_mprotect(struct vm_area_struct *vma, unsigned long reqprot,
      unsigned long prot);
int security_file_lock(struct file *file, unsigned int cmd);
int security_file_fcntl(struct file *file, unsigned int cmd, unsigned long arg);
int security_file_set_fowner(struct file *file);
int security_file_send_sigiotask(struct task_struct *tsk,
     struct fown_struct *fown, int sig);
int security_file_receive(struct file *file);
int security_file_open(struct file *file, struct cred *cred);
int security_task_create(unsigned long clone_flags);
void security_task_free(struct task_struct *task);
int security_cred_alloc_blank(struct cred *cred, gfp_t gfp);
void security_cred_free(struct cred *cred);
int security_prepare_creds(struct cred *_new, struct cred *old, gfp_t gfp);
void security_transfer_creds(struct cred *_new, struct cred *old);
int security_kernel_act_as(struct cred *_new, u32 secid);
int security_kernel_create_files_as(struct cred *_new, struct inode *inode);
int security_kernel_module_request(char *kmod_name);
int security_kernel_module_from_file(struct file *file);
int security_task_fix_setuid(struct cred *_new, struct cred *old,
        int flags);
int security_task_setpgid(struct task_struct *p, pid_t pgid);
int security_task_getpgid(struct task_struct *p);
int security_task_getsid(struct task_struct *p);
void security_task_getsecid(struct task_struct *p, u32 *secid);
int security_task_setnice(struct task_struct *p, int nice);
int security_task_setioprio(struct task_struct *p, int ioprio);
int security_task_getioprio(struct task_struct *p);
int security_task_setrlimit(struct task_struct *p, unsigned int resource,
  struct rlimit *new_rlim);
int security_task_setscheduler(struct task_struct *p);
int security_task_getscheduler(struct task_struct *p);
int security_task_movememory(struct task_struct *p);
int security_task_kill(struct task_struct *p, struct siginfo *info,
   int sig, u32 secid);
int security_task_wait(struct task_struct *p);
int security_task_prctl(int option, unsigned long arg2, unsigned long arg3,
   unsigned long arg4, unsigned long arg5);
void security_task_to_inode(struct task_struct *p, struct inode *inode);
int security_ipc_permission(struct kern_ipc_perm *ipcp, short flag);
void security_ipc_getsecid(struct kern_ipc_perm *ipcp, u32 *secid);
int security_msg_msg_alloc(struct msg_msg *msg);
void security_msg_msg_free(struct msg_msg *msg);
int security_msg_queue_alloc(struct msg_queue *msq);
void security_msg_queue_free(struct msg_queue *msq);
int security_msg_queue_associate(struct msg_queue *msq, int msqflg);
int security_msg_queue_msgctl(struct msg_queue *msq, int cmd);
int security_msg_queue_msgsnd(struct msg_queue *msq,
         struct msg_msg *msg, int msqflg);
int security_msg_queue_msgrcv(struct msg_queue *msq, struct msg_msg *msg,
         struct task_struct *target, long type, int mode);
int security_shm_alloc(struct shmid_kernel *shp);
void security_shm_free(struct shmid_kernel *shp);
int security_shm_associate(struct shmid_kernel *shp, int shmflg);
int security_shm_shmctl(struct shmid_kernel *shp, int cmd);
int security_shm_shmat(struct shmid_kernel *shp, char *shmaddr, int shmflg);
int security_sem_alloc(struct sem_array *sma);
void security_sem_free(struct sem_array *sma);
int security_sem_associate(struct sem_array *sma, int semflg);
int security_sem_semctl(struct sem_array *sma, int cmd);
int security_sem_semop(struct sem_array *sma, struct sembuf *sops,
   unsigned nsops, int alter);
void security_d_instantiate(struct dentry *dentry, struct inode *inode);
int security_getprocattr(struct task_struct *p, char *name, char **value);
int security_setprocattr(struct task_struct *p, char *name, void *value, size_t size);
int security_netlink_send(struct sock *sk, struct sk_buff *skb);
int security_ismaclabel( char *name);
int security_secid_to_secctx(u32 secid, char **secdata, u32 *seclen);
int security_secctx_to_secid( char *secdata, u32 seclen, u32 *secid);
void security_release_secctx(char *secdata, u32 seclen);

int security_inode_notifysecctx(struct inode *inode, void *ctx, u32 ctxlen);
int security_inode_setsecctx(struct dentry *dentry, void *ctx, u32 ctxlen);
int security_inode_getsecctx(struct inode *inode, void **ctx, u32 *ctxlen);
int security_unix_stream_connect(struct sock *sock, struct sock *other, struct sock *newsk);
int security_unix_may_send(struct socket *sock, struct socket *other);
int security_socket_create(int family, int type, int protocol, int kern);
int security_socket_post_create(struct socket *sock, int family,
    int type, int protocol, int kern);
int security_socket_bind(struct socket *sock, struct sockaddr *address, int addrlen);
int security_socket_connect(struct socket *sock, struct sockaddr *address, int addrlen);
int security_socket_listen(struct socket *sock, int backlog);
int security_socket_accept(struct socket *sock, struct socket *newsock);
int security_socket_sendmsg(struct socket *sock, struct msghdr *msg, int size);
int security_socket_recvmsg(struct socket *sock, struct msghdr *msg,
       int size, int flags);
int security_socket_getsockname(struct socket *sock);
int security_socket_getpeername(struct socket *sock);
int security_socket_getsockopt(struct socket *sock, int level, int optname);
int security_socket_setsockopt(struct socket *sock, int level, int optname);
int security_socket_shutdown(struct socket *sock, int how);
int security_sock_rcv_skb(struct sock *sk, struct sk_buff *skb);
int security_socket_getpeersec_stream(struct socket *sock, char *optval,
          int *optlen, unsigned len);
int security_socket_getpeersec_dgram(struct socket *sock, struct sk_buff *skb, u32 *secid);
int security_sk_alloc(struct sock *sk, int family, gfp_t priority);
void security_sk_free(struct sock *sk);
void security_sk_clone( struct sock *sk, struct sock *newsk);
void security_sk_classify_flow(struct sock *sk, struct flowi *fl);
void security_req_classify_flow( struct request_sock *req, struct flowi *fl);
void security_sock_graft(struct sock*sk, struct socket *parent);
int security_inet_conn_request(struct sock *sk,
   struct sk_buff *skb, struct request_sock *req);
void security_inet_csk_clone(struct sock *newsk,
   struct request_sock *req);
void security_inet_conn_established(struct sock *sk,
   struct sk_buff *skb);
int security_secmark_relabel_packet(u32 secid);
void security_secmark_refcount_inc(void);
void security_secmark_refcount_dec(void);
int security_tun_dev_alloc_security(void **security);
void security_tun_dev_free_security(void *security);
int security_tun_dev_create(void);
int security_tun_dev_attach_queue(void *security);
int security_tun_dev_attach(struct sock *sk, void *security);
int security_tun_dev_open(void *security);

void security_skb_owned_by(struct sk_buff *skb, struct sock *sk);
static inline int security_xfrm_policy_alloc(struct xfrm_sec_ctx **ctxp, struct xfrm_user_sec_ctx *sec_ctx)
{
 return 0;
}

static inline int security_xfrm_policy_clone(struct xfrm_sec_ctx *old, struct xfrm_sec_ctx **new_ctxp)
{
 return 0;
}

static inline void security_xfrm_policy_free(struct xfrm_sec_ctx *ctx)
{
}

static inline int security_xfrm_policy_delete(struct xfrm_sec_ctx *ctx)
{
 return 0;
}

static inline int security_xfrm_state_alloc(struct xfrm_state *x,
     struct xfrm_user_sec_ctx *sec_ctx)
{
 return 0;
}

static inline int security_xfrm_state_alloc_acquire(struct xfrm_state *x,
     struct xfrm_sec_ctx *polsec, u32 secid)
{
 return 0;
}

static inline void security_xfrm_state_free(struct xfrm_state *x)
{
}

static inline int security_xfrm_state_delete(struct xfrm_state *x)
{
 return 0;
}

static inline int security_xfrm_policy_lookup(struct xfrm_sec_ctx *ctx, u32 fl_secid, u8 dir)
{
 return 0;
}

static inline int security_xfrm_state_pol_flow_match(struct xfrm_state *x,
   struct xfrm_policy *xp, struct flowi *fl)
{
 return 1;
}

static inline int security_xfrm_decode_session(struct sk_buff *skb, u32 *secid)
{
 return 0;
}

static inline void security_skb_classify_flow(struct sk_buff *skb, struct flowi *fl)
{
}




int security_path_unlink(struct path *dir, struct dentry *dentry);
int security_path_mkdir(struct path *dir, struct dentry *dentry, umode_t mode);
int security_path_rmdir(struct path *dir, struct dentry *dentry);
int security_path_mknod(struct path *dir, struct dentry *dentry, umode_t mode,
   unsigned int dev);
int security_path_truncate(struct path *path);
int security_path_symlink(struct path *dir, struct dentry *dentry,
     char *old_name);
int security_path_link(struct dentry *old_dentry, struct path *new_dir,
         struct dentry *new_dentry);
int security_path_rename(struct path *old_dir, struct dentry *old_dentry,
    struct path *new_dir, struct dentry *new_dentry);
int security_path_chmod(struct path *path, umode_t mode);
int security_path_chown(struct path *path, kuid_t uid, kgid_t gid);
int security_path_chroot(struct path *path);
int security_key_alloc(struct key *key, struct cred *cred, unsigned long flags);
void security_key_free(struct key *key);
int security_key_permission(key_ref_t key_ref,
       struct cred *cred, key_perm_t perm);
int security_key_getsecurity(struct key *key, char **_buffer);
int security_audit_rule_init(u32 field, u32 op, char *rulestr, void **lsmrule);
int security_audit_rule_known(struct audit_krule *krule);
int security_audit_rule_match(u32 secid, u32 field, u32 op, void *lsmrule,
         struct audit_context *actx);
void security_audit_rule_free(void *lsmrule);
extern struct dentry *securityfs_create_file( char *name, umode_t mode,
          struct dentry *parent, void *data,
          struct file_operations *fops);
extern struct dentry *securityfs_create_dir( char *name, struct dentry *parent);
extern void securityfs_remove(struct dentry *dentry);
static inline char *alloc_secdata(void)
{
 return (char *)get_zeroed_page(((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
}

static inline void free_secdata(void *secdata)
{
 free_pages(((unsigned long)secdata), 0);
}
extern int yama_ptrace_access_check(struct task_struct *child,
        unsigned int mode);
extern int yama_ptrace_traceme(struct task_struct *parent);
extern void yama_task_free(struct task_struct *task);
extern int yama_task_prctl(int option, unsigned long arg2, unsigned long arg3,
      unsigned long arg4, unsigned long arg5);
struct epoll_event;
struct iattr;
struct inode;
struct iocb;
struct io_event;
struct iovec;
struct itimerspec;
struct itimerval;
struct kexec_segment;
struct linux_dirent;
struct linux_dirent64;
struct list_head;
struct mmap_arg_struct;
struct msgbuf;
struct msghdr;
struct mmsghdr;
struct msqid_ds;
struct new_utsname;
struct nfsctl_arg;
struct __old_kernel_stat;
struct oldold_utsname;
struct old_utsname;
struct pollfd;
struct rlimit;
struct rlimit64;
struct rusage;
struct sched_param;
struct sel_arg_struct;
struct semaphore;
struct sembuf;
struct shmid_ds;
struct sockaddr;
struct stat;
struct stat64;
struct statfs;
struct statfs64;
struct __sysctl_args;
struct sysinfo;
struct timespec;
struct timeval;
struct timex;
struct timezone;
struct tms;
struct utimbuf;
struct mq_attr;
struct compat_stat;
struct compat_timeval;
struct robust_list_head;
struct getcpu_cache;
struct old_linux_dirent;
struct perf_event_attr;
struct file_handle;
struct sigaltstack;


typedef __kernel_ulong_t aio_context_t;

enum {
 IOCB_CMD_PREAD = 0,
 IOCB_CMD_PWRITE = 1,
 IOCB_CMD_FSYNC = 2,
 IOCB_CMD_FDSYNC = 3,




 IOCB_CMD_NOOP = 6,
 IOCB_CMD_PREADV = 7,
 IOCB_CMD_PWRITEV = 8,
};
struct io_event {
 __u64 data;
 __u64 obj;
 __s64 res;
 __s64 res2;
};
struct iocb {

 __u64 aio_data;
 __u32 aio_key, aio_reserved1;



 __u16 aio_lio_opcode;
 __s16 aio_reqprio;
 __u32 aio_fildes;

 __u64 aio_buf;
 __u64 aio_nbytes;
 __s64 aio_offset;


 __u64 aio_reserved2;


 __u32 aio_flags;





 __u32 aio_resfd;
};




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







static inline void
kmemcheck_alloc_shadow(struct page *page, int order, gfp_t flags, int node)
{
}

static inline void
kmemcheck_free_shadow(struct page *page, int order)
{
}

static inline void
kmemcheck_slab_alloc(struct kmem_cache *s, gfp_t gfpflags, void *object,
       size_t size)
{
}

static inline void kmemcheck_slab_free(struct kmem_cache *s, void *object,
           size_t size)
{
}

static inline void kmemcheck_pagealloc_alloc(struct page *p,
 unsigned int order, gfp_t gfpflags)
{
}

static inline bool kmemcheck_page_is_tracked(struct page *p)
{
 return _false;
}

static inline void kmemcheck_mark_unallocated(void *address, unsigned int n)
{
}

static inline void kmemcheck_mark_uninitialized(void *address, unsigned int n)
{
}

static inline void kmemcheck_mark_initialized(void *address, unsigned int n)
{
}

static inline void kmemcheck_mark_freed(void *address, unsigned int n)
{
}

static inline void kmemcheck_mark_unallocated_pages(struct page *p,
          unsigned int n)
{
}

static inline void kmemcheck_mark_uninitialized_pages(struct page *p,
            unsigned int n)
{
}

static inline void kmemcheck_mark_initialized_pages(struct page *p,
          unsigned int n)
{
}

static inline bool kmemcheck_is_obj_initialized(unsigned long addr, size_t size)
{
 return _true;
}

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
struct pollfd {
 int fd;
 short events;
 short revents;
};

extern struct ctl_table epoll_table[];
struct poll_table_struct;




typedef void (*poll_queue_proc)(struct file *, wait_queue_head_t *, struct poll_table_struct *);





typedef struct poll_table_struct {
 poll_queue_proc _qproc;
 unsigned long _key;
} poll_table;

static inline void poll_wait(struct file * filp, wait_queue_head_t * wait_address, poll_table *p)
{
 if (p && p->_qproc && wait_address)
  p->_qproc(filp, wait_address, p);
}






static inline bool poll_does_not_wait( poll_table *p)
{
 return p == 0 || p->_qproc == 0;
}







static inline unsigned long poll_requested_events( poll_table *p)
{
 return p ? p->_key : ~0UL;
}

static inline void init_poll_funcptr(poll_table *pt, poll_queue_proc qproc)
{
 pt->_qproc = qproc;
 pt->_key = ~0UL;
}

struct poll_table_entry {
 struct file *filp;
 unsigned long key;
 wait_queue_t wait;
 wait_queue_head_t *wait_address;
};




struct poll_wqueues {
 poll_table pt;
 struct poll_table_page *table;
 struct task_struct *polling_task;
 int triggered;
 int error;
 int inline_index;
 struct poll_table_entry inline_entries[((832 - 256) / sizeof(struct poll_table_entry))];
};

extern void poll_initwait(struct poll_wqueues *pwq);
extern void poll_freewait(struct poll_wqueues *pwq);
extern int poll_schedule_timeout(struct poll_wqueues *pwq, int state,
     ktime_t *expires, unsigned long slack);
extern long select_estimate_accuracy(struct timespec *tv);


static inline int poll_schedule(struct poll_wqueues *pwq, int state)
{
 return poll_schedule_timeout(pwq, state, 0, 0);
}





typedef struct {
 unsigned long *in, *out, *ex;
 unsigned long *res_in, *res_out, *res_ex;
} fd_set_bits;
static inline
int get_fd_set(unsigned long nr, void *ufdset, unsigned long *fdset)
{
 nr = ((((nr)+(8*sizeof(long))-1)/(8*sizeof(long)))*sizeof(long));
 if (ufdset)
  return copy_from_user(fdset, ufdset, nr) ? -14 : 0;

 memset(fdset, 0, nr);
 return 0;
}

static inline unsigned long
set_fd_set(unsigned long nr, void *ufdset, unsigned long *fdset)
{
 if (ufdset)
  return __copy_to_user(ufdset, fdset, ((((nr)+(8*sizeof(long))-1)/(8*sizeof(long)))*sizeof(long)));
 return 0;
}

static inline
void zero_fd_set(unsigned long nr, unsigned long *fdset)
{
 memset(fdset, 0, ((((nr)+(8*sizeof(long))-1)/(8*sizeof(long)))*sizeof(long)));
}



extern int do_select(int n, fd_set_bits *fds, struct timespec *end_time);
extern int do_sys_poll(struct pollfd * ufds, unsigned int nfds,
         struct timespec *end_time);
extern int core_sys_select(int n, fd_set *inp, fd_set *outp,
      fd_set *exp, struct timespec *end_time);

extern int poll_select_set_timeout(struct timespec *to, long sec, long nsec);

struct ring_buffer;
struct ring_buffer_iter;




struct ring_buffer_event {
 ;
 u32 type_len:5, time_delta:27;
 ;

 u32 array[];
};
enum ring_buffer_type {
 RINGBUF_TYPE_DATA_TYPE_LEN_MAX = 28,
 RINGBUF_TYPE_PADDING,
 RINGBUF_TYPE_TIME_EXTEND,

 RINGBUF_TYPE_TIME_STAMP,
};

unsigned ring_buffer_event_length(struct ring_buffer_event *event);
void *ring_buffer_event_data(struct ring_buffer_event *event);
void ring_buffer_discard_commit(struct ring_buffer *buffer,
    struct ring_buffer_event *event);




struct ring_buffer *
__ring_buffer_alloc(unsigned long size, unsigned flags, struct lock_class_key *key);
void ring_buffer_wait(struct ring_buffer *buffer, int cpu);
int ring_buffer_poll_wait(struct ring_buffer *buffer, int cpu,
     struct file *filp, poll_table *poll_table);




void ring_buffer_free(struct ring_buffer *buffer);

int ring_buffer_resize(struct ring_buffer *buffer, unsigned long size, int cpu);

void ring_buffer_change_overwrite(struct ring_buffer *buffer, int val);

struct ring_buffer_event *ring_buffer_lock_reserve(struct ring_buffer *buffer,
         unsigned long length);
int ring_buffer_unlock_commit(struct ring_buffer *buffer,
         struct ring_buffer_event *event);
int ring_buffer_write(struct ring_buffer *buffer,
        unsigned long length, void *data);

struct ring_buffer_event *
ring_buffer_peek(struct ring_buffer *buffer, int cpu, u64 *ts,
   unsigned long *lost_events);
struct ring_buffer_event *
ring_buffer_consume(struct ring_buffer *buffer, int cpu, u64 *ts,
      unsigned long *lost_events);

struct ring_buffer_iter *
ring_buffer_read_prepare(struct ring_buffer *buffer, int cpu);
void ring_buffer_read_prepare_sync(void);
void ring_buffer_read_start(struct ring_buffer_iter *iter);
void ring_buffer_read_finish(struct ring_buffer_iter *iter);

struct ring_buffer_event *
ring_buffer_iter_peek(struct ring_buffer_iter *iter, u64 *ts);
struct ring_buffer_event *
ring_buffer_read(struct ring_buffer_iter *iter, u64 *ts);
void ring_buffer_iter_reset(struct ring_buffer_iter *iter);
int ring_buffer_iter_empty(struct ring_buffer_iter *iter);

unsigned long ring_buffer_size(struct ring_buffer *buffer, int cpu);

void ring_buffer_reset_cpu(struct ring_buffer *buffer, int cpu);
void ring_buffer_reset(struct ring_buffer *buffer);


int ring_buffer_swap_cpu(struct ring_buffer *buffer_a,
    struct ring_buffer *buffer_b, int cpu);
int ring_buffer_empty(struct ring_buffer *buffer);
int ring_buffer_empty_cpu(struct ring_buffer *buffer, int cpu);

void ring_buffer_record_disable(struct ring_buffer *buffer);
void ring_buffer_record_enable(struct ring_buffer *buffer);
void ring_buffer_record_off(struct ring_buffer *buffer);
void ring_buffer_record_on(struct ring_buffer *buffer);
int ring_buffer_record_is_on(struct ring_buffer *buffer);
void ring_buffer_record_disable_cpu(struct ring_buffer *buffer, int cpu);
void ring_buffer_record_enable_cpu(struct ring_buffer *buffer, int cpu);

u64 ring_buffer_oldest_event_ts(struct ring_buffer *buffer, int cpu);
unsigned long ring_buffer_bytes_cpu(struct ring_buffer *buffer, int cpu);
unsigned long ring_buffer_entries(struct ring_buffer *buffer);
unsigned long ring_buffer_overruns(struct ring_buffer *buffer);
unsigned long ring_buffer_entries_cpu(struct ring_buffer *buffer, int cpu);
unsigned long ring_buffer_overrun_cpu(struct ring_buffer *buffer, int cpu);
unsigned long ring_buffer_commit_overrun_cpu(struct ring_buffer *buffer, int cpu);
unsigned long ring_buffer_dropped_events_cpu(struct ring_buffer *buffer, int cpu);
unsigned long ring_buffer_read_events_cpu(struct ring_buffer *buffer, int cpu);

u64 ring_buffer_time_stamp(struct ring_buffer *buffer, int cpu);
void ring_buffer_normalize_time_stamp(struct ring_buffer *buffer,
          int cpu, u64 *ts);
void ring_buffer_set_clock(struct ring_buffer *buffer,
      u64 (*clock)(void));

size_t ring_buffer_page_len(void *page);


void *ring_buffer_alloc_read_page(struct ring_buffer *buffer, int cpu);
void ring_buffer_free_read_page(struct ring_buffer *buffer, void *data);
int ring_buffer_read_page(struct ring_buffer *buffer, void **data_page,
     size_t len, int cpu, int full);

struct trace_seq;

int ring_buffer_print_entry_header(struct trace_seq *s);
int ring_buffer_print_page_header(struct trace_seq *s);

enum ring_buffer_flags {
 RB_FL_OVERWRITE = 1 << 0,
};
struct trace_seq {
 unsigned char buffer[((1UL) << 12)];
 unsigned int len;
 unsigned int readpos;
 int full;
};

static inline void
trace_seq_init(struct trace_seq *s)
{
 s->len = 0;
 s->readpos = 0;
 s->full = 0;
}





extern __attribute__((format(printf, 2, 3)))
int trace_seq_printf(struct trace_seq *s, char *fmt, ...);
extern __attribute__((format(printf, 2, 0)))
int trace_seq_vprintf(struct trace_seq *s, char *fmt, va_list args);
extern int
trace_seq_bprintf(struct trace_seq *s, char *fmt, u32 *binary);
extern int trace_print_seq(struct seq_file *m, struct trace_seq *s);
extern ssize_t trace_seq_to_user(struct trace_seq *s, char *ubuf,
     size_t cnt);
extern int trace_seq_puts(struct trace_seq *s, char *str);
extern int trace_seq_putc(struct trace_seq *s, unsigned char c);
extern int trace_seq_putmem(struct trace_seq *s, void *mem, size_t len);
extern int trace_seq_putmem_hex(struct trace_seq *s, void *mem,
    size_t len);
extern void *trace_seq_reserve(struct trace_seq *s, size_t len);
extern int trace_seq_path(struct trace_seq *s, struct path *path);






static inline void ftrace_nmi_enter(void) { }
static inline void ftrace_nmi_exit(void) { }









enum ctx_state {
    IN_KERNEL = 0,
    IN_USER,
};


struct context_tracking {






 bool active;
 enum ctx_state






        state;
};


extern struct static_key context_tracking_enabled;



extern struct context_tracking context_tracking;


static inline bool context_tracking_in_user(void)
{
 return ({ typeof((context_tracking.state)) pscr_ret__; do { void *__vpp_verify = (typeof((&((context_tracking.state))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof((context_tracking.state))) { case 1: pscr_ret__ = ({ typeof(((context_tracking.state))) pfo_ret__; switch (sizeof(((context_tracking.state)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((context_tracking.state))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 2: pscr_ret__ = ({ typeof(((context_tracking.state))) pfo_ret__; switch (sizeof(((context_tracking.state)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((context_tracking.state))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 4: pscr_ret__ = ({ typeof(((context_tracking.state))) pfo_ret__; switch (sizeof(((context_tracking.state)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((context_tracking.state))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 8: pscr_ret__ = ({ typeof(((context_tracking.state))) pfo_ret__; switch (sizeof(((context_tracking.state)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((context_tracking.state))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.state))); break; default: __bad_percpu_size(); } pfo_ret__; });break; default: __bad_size_call_parameter();break; } pscr_ret__; }) == IN_USER;
}

static inline bool context_tracking_active(void)
{
 return ({ typeof((context_tracking.active)) pscr_ret__; do { void *__vpp_verify = (typeof((&((context_tracking.active))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof((context_tracking.active))) { case 1: pscr_ret__ = ({ typeof(((context_tracking.active))) pfo_ret__; switch (sizeof(((context_tracking.active)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((context_tracking.active))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 2: pscr_ret__ = ({ typeof(((context_tracking.active))) pfo_ret__; switch (sizeof(((context_tracking.active)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((context_tracking.active))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 4: pscr_ret__ = ({ typeof(((context_tracking.active))) pfo_ret__; switch (sizeof(((context_tracking.active)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((context_tracking.active))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 8: pscr_ret__ = ({ typeof(((context_tracking.active))) pfo_ret__; switch (sizeof(((context_tracking.active)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((context_tracking.active))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((context_tracking.active))); break; default: __bad_percpu_size(); } pfo_ret__; });break; default: __bad_size_call_parameter();break; } pscr_ret__; });
}





struct task_struct;
static inline bool vtime_accounting_enabled(void)
{
 if (static_key_false(&context_tracking_enabled)) {
  if (context_tracking_active())
   return _true;
 }

 return _false;
}
extern void vtime_common_task_switch(struct task_struct *prev);
static inline void vtime_task_switch(struct task_struct *prev)
{
 if (vtime_accounting_enabled())
  vtime_common_task_switch(prev);
}


extern void vtime_account_system(struct task_struct *tsk);
extern void vtime_account_idle(struct task_struct *tsk);
extern void vtime_account_user(struct task_struct *tsk);




extern void vtime_common_account_irq_enter(struct task_struct *tsk);
static inline void vtime_account_irq_enter(struct task_struct *tsk)
{
 if (vtime_accounting_enabled())
  vtime_common_account_irq_enter(tsk);
}
extern void arch_vtime_task_switch(struct task_struct *tsk);
extern void vtime_gen_account_irq_exit(struct task_struct *tsk);

static inline void vtime_account_irq_exit(struct task_struct *tsk)
{
 if (vtime_accounting_enabled())
  vtime_gen_account_irq_exit(tsk);
}

extern void vtime_user_enter(struct task_struct *tsk);

static inline void vtime_user_exit(struct task_struct *tsk)
{
 vtime_account_user(tsk);
}
extern void vtime_guest_enter(struct task_struct *tsk);
extern void vtime_guest_exit(struct task_struct *tsk);
extern void vtime_init_idle(struct task_struct *tsk, int cpu);
static inline void irqtime_account_irq(struct task_struct *tsk) { }


static inline void account_irq_enter_time(struct task_struct *tsk)
{
 vtime_account_irq_enter(tsk);
 irqtime_account_irq(tsk);
}

static inline void account_irq_exit_time(struct task_struct *tsk)
{
 vtime_account_irq_exit(tsk);
 irqtime_account_irq(tsk);
}


extern void synchronize_irq(unsigned int irq);
extern void rcu_nmi_enter(void);
extern void rcu_nmi_exit(void);
extern void irq_enter(void);
extern void irq_exit(void);
enum perf_type_id {
 PERF_TYPE_HARDWARE = 0,
 PERF_TYPE_SOFTWARE = 1,
 PERF_TYPE_TRACEPOINT = 2,
 PERF_TYPE_HW_CACHE = 3,
 PERF_TYPE_RAW = 4,
 PERF_TYPE_BREAKPOINT = 5,

 PERF_TYPE_MAX,
};






enum perf_hw_id {



 PERF_COUNT_HW_CPU_CYCLES = 0,
 PERF_COUNT_HW_INSTRUCTIONS = 1,
 PERF_COUNT_HW_CACHE_REFERENCES = 2,
 PERF_COUNT_HW_CACHE_MISSES = 3,
 PERF_COUNT_HW_BRANCH_INSTRUCTIONS = 4,
 PERF_COUNT_HW_BRANCH_MISSES = 5,
 PERF_COUNT_HW_BUS_CYCLES = 6,
 PERF_COUNT_HW_STALLED_CYCLES_FRONTEND = 7,
 PERF_COUNT_HW_STALLED_CYCLES_BACKEND = 8,
 PERF_COUNT_HW_REF_CPU_CYCLES = 9,

 PERF_COUNT_HW_MAX,
};
enum perf_hw_cache_id {
 PERF_COUNT_HW_CACHE_L1D = 0,
 PERF_COUNT_HW_CACHE_L1I = 1,
 PERF_COUNT_HW_CACHE_LL = 2,
 PERF_COUNT_HW_CACHE_DTLB = 3,
 PERF_COUNT_HW_CACHE_ITLB = 4,
 PERF_COUNT_HW_CACHE_BPU = 5,
 PERF_COUNT_HW_CACHE_NODE = 6,

 PERF_COUNT_HW_CACHE_MAX,
};

enum perf_hw_cache_op_id {
 PERF_COUNT_HW_CACHE_OP_READ = 0,
 PERF_COUNT_HW_CACHE_OP_WRITE = 1,
 PERF_COUNT_HW_CACHE_OP_PREFETCH = 2,

 PERF_COUNT_HW_CACHE_OP_MAX,
};

enum perf_hw_cache_op_result_id {
 PERF_COUNT_HW_CACHE_RESULT_ACCESS = 0,
 PERF_COUNT_HW_CACHE_RESULT_MISS = 1,

 PERF_COUNT_HW_CACHE_RESULT_MAX,
};







enum perf_sw_ids {
 PERF_COUNT_SW_CPU_CLOCK = 0,
 PERF_COUNT_SW_TASK_CLOCK = 1,
 PERF_COUNT_SW_PAGE_FAULTS = 2,
 PERF_COUNT_SW_CONTEXT_SWITCHES = 3,
 PERF_COUNT_SW_CPU_MIGRATIONS = 4,
 PERF_COUNT_SW_PAGE_FAULTS_MIN = 5,
 PERF_COUNT_SW_PAGE_FAULTS_MAJ = 6,
 PERF_COUNT_SW_ALIGNMENT_FAULTS = 7,
 PERF_COUNT_SW_EMULATION_FAULTS = 8,
 PERF_COUNT_SW_DUMMY = 9,

 PERF_COUNT_SW_MAX,
};





enum perf_event_sample_format {
 PERF_SAMPLE_IP = 1U << 0,
 PERF_SAMPLE_TID = 1U << 1,
 PERF_SAMPLE_TIME = 1U << 2,
 PERF_SAMPLE_ADDR = 1U << 3,
 PERF_SAMPLE_READ = 1U << 4,
 PERF_SAMPLE_CALLCHAIN = 1U << 5,
 PERF_SAMPLE_ID = 1U << 6,
 PERF_SAMPLE_CPU = 1U << 7,
 PERF_SAMPLE_PERIOD = 1U << 8,
 PERF_SAMPLE_STREAM_ID = 1U << 9,
 PERF_SAMPLE_RAW = 1U << 10,
 PERF_SAMPLE_BRANCH_STACK = 1U << 11,
 PERF_SAMPLE_REGS_USER = 1U << 12,
 PERF_SAMPLE_STACK_USER = 1U << 13,
 PERF_SAMPLE_WEIGHT = 1U << 14,
 PERF_SAMPLE_DATA_SRC = 1U << 15,
 PERF_SAMPLE_IDENTIFIER = 1U << 16,
 PERF_SAMPLE_TRANSACTION = 1U << 17,

 PERF_SAMPLE_MAX = 1U << 18,
};
enum perf_branch_sample_type {
 PERF_SAMPLE_BRANCH_USER = 1U << 0,
 PERF_SAMPLE_BRANCH_KERNEL = 1U << 1,
 PERF_SAMPLE_BRANCH_HV = 1U << 2,

 PERF_SAMPLE_BRANCH_ANY = 1U << 3,
 PERF_SAMPLE_BRANCH_ANY_CALL = 1U << 4,
 PERF_SAMPLE_BRANCH_ANY_RETURN = 1U << 5,
 PERF_SAMPLE_BRANCH_IND_CALL = 1U << 6,
 PERF_SAMPLE_BRANCH_ABORT_TX = 1U << 7,
 PERF_SAMPLE_BRANCH_IN_TX = 1U << 8,
 PERF_SAMPLE_BRANCH_NO_TX = 1U << 9,

 PERF_SAMPLE_BRANCH_MAX = 1U << 10,
};
enum perf_sample_regs_abi {
 PERF_SAMPLE_REGS_ABI_NONE = 0,
 PERF_SAMPLE_REGS_ABI_32 = 1,
 PERF_SAMPLE_REGS_ABI_64 = 2,
};





enum {
 PERF_TXN_ELISION = (1 << 0),
 PERF_TXN_TRANSACTION = (1 << 1),
 PERF_TXN_SYNC = (1 << 2),
 PERF_TXN_ASYNC = (1 << 3),
 PERF_TXN_RETRY = (1 << 4),
 PERF_TXN_CONFLICT = (1 << 5),
 PERF_TXN_CAPACITY_WRITE = (1 << 6),
 PERF_TXN_CAPACITY_READ = (1 << 7),

 PERF_TXN_MAX = (1 << 8),



 PERF_TXN_ABORT_MASK = (0xffffffffULL << 32),
 PERF_TXN_ABORT_SHIFT = 32,
};
enum perf_event_read_format {
 PERF_FORMAT_TOTAL_TIME_ENABLED = 1U << 0,
 PERF_FORMAT_TOTAL_TIME_RUNNING = 1U << 1,
 PERF_FORMAT_ID = 1U << 2,
 PERF_FORMAT_GROUP = 1U << 3,

 PERF_FORMAT_MAX = 1U << 4,
};
struct perf_event_attr {




 __u32 type;




 __u32 size;




 __u64 config;

 union {
  __u64 sample_period;
  __u64 sample_freq;
 };

 __u64 sample_type;
 __u64 read_format;

 __u64 disabled : 1,
    inherit : 1,
    pinned : 1,
    exclusive : 1,
    exclude_user : 1,
    exclude_kernel : 1,
    exclude_hv : 1,
    exclude_idle : 1,
    mmap : 1,
    comm : 1,
    freq : 1,
    inherit_stat : 1,
    enable_on_exec : 1,
    task : 1,
    watermark : 1,
    precise_ip : 2,
    mmap_data : 1,
    sample_id_all : 1,

    exclude_host : 1,
    exclude_guest : 1,

    exclude_callchain_kernel : 1,
    exclude_callchain_user : 1,
    mmap2 : 1,

    __reserved_1 : 40;

 union {
  __u32 wakeup_events;
  __u32 wakeup_watermark;
 };

 __u32 bp_type;
 union {
  __u64 bp_addr;
  __u64 config1;
 };
 union {
  __u64 bp_len;
  __u64 config2;
 };
 __u64 branch_sample_type;





 __u64 sample_regs_user;




 __u32 sample_stack_user;


 __u32 __reserved_2;
};
enum perf_event_ioc_flags {
 PERF_IOC_FLAG_GROUP = 1U << 0,
};




struct perf_event_mmap_page {
 __u32 version;
 __u32 compat_version;
 __u32 lock;
 __u32 index;
 __s64 offset;
 __u64 time_enabled;
 __u64 time_running;
 union {
  __u64 capabilities;
  struct {
   __u64 cap_bit0 : 1,
    cap_bit0_is_deprecated : 1,

    cap_user_rdpmc : 1,
    cap_user_time : 1,
    cap_user_time_zero : 1,
    cap_____res : 59;
  };
 };
 __u16 pmc_width;
 __u16 time_shift;
 __u32 time_mult;
 __u64 time_offset;
 __u64 time_zero;
 __u32 size;





 __u8 __reserved[118*8+4];
 __u64 data_head;
 __u64 data_tail;
};
struct perf_event_header {
 __u32 type;
 __u16 misc;
 __u16 size;
};

enum perf_event_type {
 PERF_RECORD_MMAP = 1,
 PERF_RECORD_LOST = 2,
 PERF_RECORD_COMM = 3,
 PERF_RECORD_EXIT = 4,
 PERF_RECORD_THROTTLE = 5,
 PERF_RECORD_UNTHROTTLE = 6,
 PERF_RECORD_FORK = 7,
 PERF_RECORD_READ = 8,
 PERF_RECORD_SAMPLE = 9,
 PERF_RECORD_MMAP2 = 10,

 PERF_RECORD_MAX,
};



enum perf_callchain_context {
 PERF_CONTEXT_HV = (__u64)-32,
 PERF_CONTEXT_KERNEL = (__u64)-128,
 PERF_CONTEXT_USER = (__u64)-512,

 PERF_CONTEXT_GUEST = (__u64)-2048,
 PERF_CONTEXT_GUEST_KERNEL = (__u64)-2176,
 PERF_CONTEXT_GUEST_USER = (__u64)-2560,

 PERF_CONTEXT_MAX = (__u64)-4095,
};





union perf_mem_data_src {
 __u64 val;
 struct {
  __u64 mem_op:5,
   mem_lvl:14,
   mem_snoop:5,
   mem_lock:2,
   mem_dtlb:7,
   mem_rsvd:31;
 };
};
struct perf_branch_entry {
 __u64 from;
 __u64 to;
 __u64 mispred:1,
  predicted:1,
  in_tx:1,
  abort:1,
  reserved:60;
};






union cpuid10_eax {
 struct {
  unsigned int version_id:8;
  unsigned int num_counters:8;
  unsigned int bit_width:8;
  unsigned int mask_length:8;
 } split;
 unsigned int full;
};

union cpuid10_ebx {
 struct {
  unsigned int no_unhalted_core_cycles:1;
  unsigned int no_instructions_retired:1;
  unsigned int no_unhalted_reference_cycles:1;
  unsigned int no_llc_reference:1;
  unsigned int no_llc_misses:1;
  unsigned int no_branch_instruction_retired:1;
  unsigned int no_branch_misses_retired:1;
 } split;
 unsigned int full;
};

union cpuid10_edx {
 struct {
  unsigned int num_counters_fixed:5;
  unsigned int bit_width_fixed:8;
  unsigned int reserved:19;
 } split;
 unsigned int full;
};

struct x86_pmu_capability {
 int version;
 int num_counters_gp;
 int num_counters_fixed;
 int bit_width_gp;
 int bit_width_fixed;
 unsigned int events_mask;
 int events_mask_len;
};
extern u32 get_ibs_caps(void);





extern void perf_events_lapic_init(void);
struct pt_regs;
extern unsigned long perf_instruction_pointer(struct pt_regs *regs);
extern unsigned long perf_misc_flags(struct pt_regs *regs);


static inline void pagefault_disable(void)
{
 __preempt_count_add(1);




 __asm__ __volatile__("": : :"memory");
}

static inline void pagefault_enable(void)
{




 __asm__ __volatile__("": : :"memory");
 __preempt_count_sub(1);
 do { } while (0);
}
extern long probe_kernel_read(void *dst, void *src, size_t size);
extern long __probe_kernel_read(void *dst, void *src, size_t size);
extern long probe_kernel_write(void *dst, void *src, size_t size);
extern long __probe_kernel_write(void *dst, void *src, size_t size);


extern int kstack_depth_to_print;

struct thread_info;
struct stacktrace_ops;

typedef unsigned long (*walk_stack_t)(struct thread_info *tinfo,
          unsigned long *stack,
          unsigned long bp,
          struct stacktrace_ops *ops,
          void *data,
          unsigned long *end,
          int *graph);

extern unsigned long
print_context_stack(struct thread_info *tinfo,
      unsigned long *stack, unsigned long bp,
      struct stacktrace_ops *ops, void *data,
      unsigned long *end, int *graph);

extern unsigned long
print_context_stack_bp(struct thread_info *tinfo,
         unsigned long *stack, unsigned long bp,
         struct stacktrace_ops *ops, void *data,
         unsigned long *end, int *graph);



struct stacktrace_ops {
 void (*address)(void *data, unsigned long address, int reliable);

 int (*stack)(void *data, char *name);
 walk_stack_t walk_stack;
};

void dump_trace(struct task_struct *tsk, struct pt_regs *regs,
  unsigned long *stack, unsigned long bp,
  struct stacktrace_ops *ops, void *data);
static inline unsigned long
stack_frame(struct task_struct *task, struct pt_regs *regs)
{
 unsigned long bp;

 if (regs)
  return regs->bp;

 if (task == get_current()) {

  asm("movq %%rbp, %0" : "=r" (bp) :);
  return bp;
 }


 return *(unsigned long *)task->thread.sp;
}
extern void
show_trace_log_lvl(struct task_struct *task, struct pt_regs *regs,
     unsigned long *stack, unsigned long bp, char *log_lvl);

extern void
show_stack_log_lvl(struct task_struct *task, struct pt_regs *regs,
     unsigned long *sp, unsigned long bp, char *log_lvl);

extern unsigned int code_bytes;


struct stack_frame {
 struct stack_frame *next_frame;
 unsigned long return_address;
};

struct stack_frame_ia32 {
    u32 next_frame;
    u32 return_address;
};

static inline unsigned long caller_frame_pointer(void)
{
 struct stack_frame *frame;

 asm("movq %%rbp, %0" : "=r" (frame) :);


 frame = frame->next_frame;


 return (unsigned long)frame;
}
struct perf_guest_switch_msr {
 unsigned msr;
 u64 host, guest;
};

extern struct perf_guest_switch_msr *perf_guest_get_msrs(int *nr);
extern void perf_get_x86_pmu_capability(struct x86_pmu_capability *cap);
extern void perf_check_microcode(void);
 extern void amd_pmu_enable_virt(void);
 extern void amd_pmu_disable_virt(void);
typedef struct {
 atomic_long_t a;
} local_t;






static inline void local_inc(local_t *l)
{
 asm (" " "incq" " " "%0"
       : "+m" (l->a.counter));
}

static inline void local_dec(local_t *l)
{
 asm (" " "decq" " " "%0"
       : "+m" (l->a.counter));
}

static inline void local_add(long i, local_t *l)
{
 asm (" " "addq" " " "%1,%0"
       : "+m" (l->a.counter)
       : "ir" (i));
}

static inline void local_sub(long i, local_t *l)
{
 asm (" " "subq" " " "%1,%0"
       : "+m" (l->a.counter)
       : "ir" (i));
}
static inline int local_sub_and_test(long i, local_t *l)
{
 do { char c; asm (" " "subq" " " " %2, " "%0" "; set" "e" " %1" : "+m" (l->a.counter), "=qm" (c) : "er" (i) : "memory"); return c != 0; } while (0);
}
static inline int local_dec_and_test(local_t *l)
{
 do { char c; asm (" " "decq" " " " " "%0" "; set" "e" " %1" : "+m" (l->a.counter), "=qm" (c) : : "memory"); return c != 0; } while (0);
}
static inline int local_inc_and_test(local_t *l)
{
 do { char c; asm (" " "incq" " " " " "%0" "; set" "e" " %1" : "+m" (l->a.counter), "=qm" (c) : : "memory"); return c != 0; } while (0);
}
static inline int local_add_negative(long i, local_t *l)
{
 do { char c; asm (" " "addq" " " " %2, " "%0" "; set" "s" " %1" : "+m" (l->a.counter), "=qm" (c) : "er" (i) : "memory"); return c != 0; } while (0);
}
static inline long local_add_return(long i, local_t *l)
{
 long __i = i;
 asm (" " "xaddq" " " "%0, %1;"
       : "+r" (i), "+m" (l->a.counter)
       : : "memory");
 return i + __i;
}

static inline long local_sub_return(long i, local_t *l)
{
 return local_add_return(-i, l);
}

typedef struct {
 local_t a;
} local64_t;


struct perf_guest_info_callbacks {
 int (*is_in_guest)(void);
 int (*is_user_mode)(void);
 unsigned long (*get_guest_ip)(void);
};





struct arch_hw_breakpoint {
 unsigned long address;
 u8 len;
 u8 type;
};









struct pt_regs;


enum die_val {
 DIE_OOPS = 1,
 DIE_INT3,
 DIE_DEBUG,
 DIE_PANIC,
 DIE_NMI,
 DIE_DIE,
 DIE_KERNELDEBUG,
 DIE_TRAP,
 DIE_GPF,
 DIE_CALL,
 DIE_PAGE_FAULT,
 DIE_NMIUNKNOWN,
};

extern void printk_address(unsigned long address);
extern void die( char *, struct pt_regs *,long);
extern int __die( char *, struct pt_regs *, long);
extern void show_trace(struct task_struct *t, struct pt_regs *regs,
         unsigned long *sp, unsigned long bp);
extern void __show_regs(struct pt_regs *regs, int all);
extern unsigned long oops_begin(void);
extern void oops_end(unsigned long, struct pt_regs *, int signr);

extern int in_crash_kexec;

struct notifier_block;

struct die_args {
 struct pt_regs *regs;
 char *str;
 long err;
 int trapnr;
 int signr;
};

int register_die_notifier(struct notifier_block *nb);
int unregister_die_notifier(struct notifier_block *nb);

int notify_die(enum die_val val, char *str,
        struct pt_regs *regs, long err, int trap, int sig);
static inline int hw_breakpoint_slots(int type)
{
 return 4;
}

struct perf_event;
struct pmu;

extern int arch_check_bp_in_kernelspace(struct perf_event *bp);
extern int arch_validate_hwbkpt_settings(struct perf_event *bp);
extern int hw_breakpoint_exceptions_notify(struct notifier_block *unused,
        unsigned long val, void *data);


int arch_install_hw_breakpoint(struct perf_event *bp);
void arch_uninstall_hw_breakpoint(struct perf_event *bp);
void hw_breakpoint_pmu_read(struct perf_event *bp);
void hw_breakpoint_pmu_unthrottle(struct perf_event *bp);

extern void
arch_fill_perf_breakpoint(struct perf_event *bp);

unsigned long encode_dr7(int drnum, unsigned int len, unsigned int type);
int decode_dr7(unsigned long dr7, int bpnum, unsigned *len, unsigned *type);

extern int arch_bp_generic_fields(int x86_len, int x86_type,
      int *gen_len, int *gen_type);

extern struct pmu perf_ops_bp;






struct mnt_namespace;
struct uts_namespace;
struct ipc_namespace;
struct pid_namespace;
struct fs_struct;
struct nsproxy {
 atomic_t count;
 struct uts_namespace *uts_ns;
 struct ipc_namespace *ipc_ns;
 struct mnt_namespace *mnt_ns;
 struct pid_namespace *pid_ns_for_children;
 struct net *net_ns;
};
extern struct nsproxy init_nsproxy;
static inline struct nsproxy *task_nsproxy(struct task_struct *tsk)
{
 return (tsk->nsproxy);
}

int copy_namespaces(unsigned long flags, struct task_struct *tsk);
void exit_task_namespaces(struct task_struct *tsk);
void switch_task_namespaces(struct task_struct *tsk, struct nsproxy *_new);
void free_nsproxy(struct nsproxy *ns);
int unshare_nsproxy_namespaces(unsigned long, struct nsproxy **,
 struct cred *, struct fs_struct *);
int __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) nsproxy_cache_init(void);

static inline void put_nsproxy(struct nsproxy *ns)
{
 if (1) {
  free_nsproxy(ns);
 }
}

static inline void get_nsproxy(struct nsproxy *ns)
{
 ;
}


struct pidmap {
       atomic_t nr_free;
       void *page;
};





struct bsd_acct_struct;

struct pid_namespace {
 struct kref kref;
 struct pidmap pidmap[(((0 ? ((1UL) << 12) * 8 : (sizeof(long) > 4 ? 4 * 1024 * 1024 : (0 ? 0x1000 : 0x8000)))+(((1UL) << 12) * 8)-1)/(((1UL) << 12) * 8))];
 struct callback_head rcu;
 int last_pid;
 unsigned int nr_hashed;
 struct task_struct *child_reaper;
 struct kmem_cache *pid_cachep;
 unsigned int level;
 struct pid_namespace *parent;

 struct vfsmount *proc_mnt;
 struct dentry *proc_self;


 struct bsd_acct_struct *bacct;

 struct user_namespace *user_ns;
 struct work_struct proc_work;
 kgid_t pid_gid;
 int hide_pid;
 int reboot;
 unsigned int proc_inum;
};

extern struct pid_namespace init_pid_ns;




static inline struct pid_namespace *get_pid_ns(struct pid_namespace *ns)
{
 if (ns != &init_pid_ns)
  kref_get(&ns->kref);
 return ns;
}

extern struct pid_namespace *copy_pid_ns(unsigned long flags,
 struct user_namespace *user_ns, struct pid_namespace *ns);
extern void zap_pid_ns_processes(struct pid_namespace *pid_ns);
extern int reboot_pid_ns(struct pid_namespace *pid_ns, int cmd);
extern void put_pid_ns(struct pid_namespace *ns);
extern struct pid_namespace *task_active_pid_ns(struct task_struct *tsk);
void pidhash_init(void);
void pidmap_init(void);

extern u64 trace_clock_x86_tsc(void);

extern u64 trace_clock_local(void);
extern u64 trace_clock(void);
extern u64 trace_clock_jiffies(void);
extern u64 trace_clock_global(void);
extern u64 trace_clock_counter(void);
struct module;



unsigned long kallsyms_lookup_name( char *name);


int kallsyms_on_each_symbol(int (*fn)(void *, char *, struct module *,
          unsigned long),
       void *data);

extern int kallsyms_lookup_size_offset(unsigned long addr,
      unsigned long *symbolsize,
      unsigned long *offset);


 char *kallsyms_lookup(unsigned long addr,
       unsigned long *symbolsize,
       unsigned long *offset,
       char **modname, char *namebuf);


extern int sprint_symbol(char *buffer, unsigned long address);
extern int sprint_symbol_no_offset(char *buffer, unsigned long address);
extern int sprint_backtrace(char *buffer, unsigned long address);


extern void __print_symbol( char *fmt, unsigned long address);

int lookup_symbol_name(unsigned long addr, char *symname);
int lookup_symbol_attrs(unsigned long addr, unsigned long *size, unsigned long *offset, char *modname, char *name);
static __attribute__((format(printf, 1, 2)))
void __check_printsym_format( char *fmt, ...)
{
}

static inline void print_symbol( char *fmt, unsigned long addr)
{
 __check_printsym_format(fmt, "");
 __print_symbol(fmt, (unsigned long)
         __builtin_extract_return_addr((void *)addr));
}

static inline void print_ip_sym(unsigned long ip)
{
 printf("[<%p>] %pS\n", (void *) ip, (void *) ip);
}
extern void mcount(void);
extern atomic_t modifying_ftrace_code;
extern void __fentry__(void);

static inline unsigned long ftrace_call_adjust(unsigned long addr)
{




 return addr;
}



struct dyn_arch_ftrace {

};

int ftrace_int3_handler(struct pt_regs *regs);






struct user_i387_ia32_struct {
 u32 cwd;
 u32 swd;
 u32 twd;
 u32 fip;
 u32 fcs;
 u32 foo;
 u32 fos;
 u32 st_space[20];
};


struct user32_fxsr_struct {
 unsigned short cwd;
 unsigned short swd;
 unsigned short twd;
 unsigned short fop;
 int fip;
 int fcs;
 int foo;
 int fos;
 int mxcsr;
 int reserved;
 int st_space[32];
 int xmm_space[32];
 int padding[56];
};

struct user_regs_struct32 {
 __u32 ebx, ecx, edx, esi, edi, ebp, eax;
 unsigned short ds, __ds, es, __es;
 unsigned short fs, __fs, gs, __gs;
 __u32 orig_eax, eip;
 unsigned short cs, __cs;
 __u32 eflags, esp;
 unsigned short ss, __ss;
};

struct user32 {
  struct user_regs_struct32 regs;
  int u_fpvalid;

  struct user_i387_ia32_struct i387;

  __u32 u_tsize;
  __u32 u_dsize;
  __u32 u_ssize;
  __u32 start_code;
  __u32 start_stack;



  __u32 signal;
  int reserved;
  __u32 u_ar0;

  __u32 u_fpstate;
  __u32 magic;
  char u_comm[32];
  int u_debugreg[8];
};





typedef u32 compat_size_t;
typedef s32 compat_ssize_t;
typedef s32 compat_time_t;
typedef s32 compat_clock_t;
typedef s32 compat_pid_t;
typedef u16 __compat_uid_t;
typedef u16 __compat_gid_t;
typedef u32 __compat_uid32_t;
typedef u32 __compat_gid32_t;
typedef u16 compat_mode_t;
typedef u32 compat_ino_t;
typedef u16 compat_dev_t;
typedef s32 compat_off_t;
typedef s64 compat_loff_t;
typedef u16 compat_nlink_t;
typedef u16 compat_ipc_pid_t;
typedef s32 compat_daddr_t;
typedef u32 compat_caddr_t;
typedef __kernel_fsid_t compat_fsid_t;
typedef s32 compat_timer_t;
typedef s32 compat_key_t;

typedef s32 compat_int_t;
typedef s32 compat_long_t;
typedef s64 __attribute__((aligned(4))) compat_s64;
typedef u32 compat_uint_t;
typedef u32 compat_ulong_t;
typedef u64 __attribute__((aligned(4))) compat_u64;
typedef u32 compat_uptr_t;

struct compat_timespec {
 compat_time_t tv_sec;
 s32 tv_nsec;
};

struct compat_timeval {
 compat_time_t tv_sec;
 s32 tv_usec;
};

struct compat_stat {
 compat_dev_t st_dev;
 u16 __pad1;
 compat_ino_t st_ino;
 compat_mode_t st_mode;
 compat_nlink_t st_nlink;
 __compat_uid_t st_uid;
 __compat_gid_t st_gid;
 compat_dev_t st_rdev;
 u16 __pad2;
 u32 st_size;
 u32 st_blksize;
 u32 st_blocks;
 u32 st_atime;
 u32 st_atime_nsec;
 u32 st_mtime;
 u32 st_mtime_nsec;
 u32 st_ctime;
 u32 st_ctime_nsec;
 u32 __unused4;
 u32 __unused5;
};

struct compat_flock {
 short l_type;
 short l_whence;
 compat_off_t l_start;
 compat_off_t l_len;
 compat_pid_t l_pid;
};
struct compat_flock64 {
 short l_type;
 short l_whence;
 compat_loff_t l_start;
 compat_loff_t l_len;
 compat_pid_t l_pid;
} __attribute__((packed));

struct compat_statfs {
 int f_type;
 int f_bsize;
 int f_blocks;
 int f_bfree;
 int f_bavail;
 int f_files;
 int f_ffree;
 compat_fsid_t f_fsid;
 int f_namelen;
 int f_frsize;
 int f_flags;
 int f_spare[4];
};




typedef u32 compat_old_sigset_t;




typedef u32 compat_sigset_word;

typedef union compat_sigval {
 compat_int_t sival_int;
 compat_uptr_t sival_ptr;
} compat_sigval_t;

typedef struct compat_siginfo {
 int si_signo;
 int si_errno;
 int si_code;

 union {
  int _pad[128/sizeof(int) - 3];


  struct {
   unsigned int _pid;
   unsigned int _uid;
  } _kill;


  struct {
   compat_timer_t _tid;
   int _overrun;
   compat_sigval_t _sigval;
   int _sys_private;
   int _overrun_incr;
  } _timer;


  struct {
   unsigned int _pid;
   unsigned int _uid;
   compat_sigval_t _sigval;
  } _rt;


  struct {
   unsigned int _pid;
   unsigned int _uid;
   int _status;
   compat_clock_t _utime;
   compat_clock_t _stime;
  } _sigchld;


  struct {
   unsigned int _pid;
   unsigned int _uid;
   int _status;
   compat_s64 _utime;
   compat_s64 _stime;
  } _sigchld_x32;


  struct {
   unsigned int _addr;
  } _sigfault;


  struct {
   int _band;
   int _fd;
  } _sigpoll;

  struct {
   unsigned int _call_addr;
   int _syscall;
   unsigned int _arch;
  } _sigsys;
 } _sifields;
} compat_siginfo_t;




struct compat_ipc64_perm {
 compat_key_t key;
 __compat_uid32_t uid;
 __compat_gid32_t gid;
 __compat_uid32_t cuid;
 __compat_gid32_t cgid;
 unsigned short mode;
 unsigned short __pad1;
 unsigned short seq;
 unsigned short __pad2;
 compat_ulong_t unused1;
 compat_ulong_t unused2;
};

struct compat_semid64_ds {
 struct compat_ipc64_perm sem_perm;
 compat_time_t sem_otime;
 compat_ulong_t __unused1;
 compat_time_t sem_ctime;
 compat_ulong_t __unused2;
 compat_ulong_t sem_nsems;
 compat_ulong_t __unused3;
 compat_ulong_t __unused4;
};

struct compat_msqid64_ds {
 struct compat_ipc64_perm msg_perm;
 compat_time_t msg_stime;
 compat_ulong_t __unused1;
 compat_time_t msg_rtime;
 compat_ulong_t __unused2;
 compat_time_t msg_ctime;
 compat_ulong_t __unused3;
 compat_ulong_t msg_cbytes;
 compat_ulong_t msg_qnum;
 compat_ulong_t msg_qbytes;
 compat_pid_t msg_lspid;
 compat_pid_t msg_lrpid;
 compat_ulong_t __unused4;
 compat_ulong_t __unused5;
};

struct compat_shmid64_ds {
 struct compat_ipc64_perm shm_perm;
 compat_size_t shm_segsz;
 compat_time_t shm_atime;
 compat_ulong_t __unused1;
 compat_time_t shm_dtime;
 compat_ulong_t __unused2;
 compat_time_t shm_ctime;
 compat_ulong_t __unused3;
 compat_pid_t shm_cpid;
 compat_pid_t shm_lpid;
 compat_ulong_t shm_nattch;
 compat_ulong_t __unused4;
 compat_ulong_t __unused5;
};
typedef struct user_regs_struct32 compat_elf_gregset_t;
static inline void *compat_ptr(compat_uptr_t uptr)
{
 return (void *)(unsigned long)uptr;
}

static inline compat_uptr_t ptr_to_compat(void *uptr)
{
 return (u32)(unsigned long)uptr;
}

static inline void *arch_compat_alloc_user_space(long len)
{
 compat_uptr_t sp;

 if (test_ti_thread_flag(current_thread_info(), 17)) {
  sp = ((struct pt_regs *)(get_current())->thread.sp0 - 1)->sp;
 } else {

  sp = ({ typeof((old_rsp)) pscr_ret__; do { void *__vpp_verify = (typeof((&((old_rsp))) + 0))0; (void)__vpp_verify; } while (0); switch(sizeof((old_rsp))) { case 1: pscr_ret__ = ({ typeof(((old_rsp))) pfo_ret__; switch (sizeof(((old_rsp)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((old_rsp))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 2: pscr_ret__ = ({ typeof(((old_rsp))) pfo_ret__; switch (sizeof(((old_rsp)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((old_rsp))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 4: pscr_ret__ = ({ typeof(((old_rsp))) pfo_ret__; switch (sizeof(((old_rsp)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((old_rsp))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; default: __bad_percpu_size(); } pfo_ret__; });break; case 8: pscr_ret__ = ({ typeof(((old_rsp))) pfo_ret__; switch (sizeof(((old_rsp)))) { case 1: asm("mov" "b ""%%""gs"":" "%P" "1"",%0" : "=q" (pfo_ret__) : "m"((old_rsp))); break; case 2: asm("mov" "w ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; case 4: asm("mov" "l ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; case 8: asm("mov" "q ""%%""gs"":" "%P" "1"",%0" : "=r" (pfo_ret__) : "m"((old_rsp))); break; default: __bad_percpu_size(); } pfo_ret__; });break; default: __bad_size_call_parameter();break; } pscr_ret__; }) - 128;
 }

 return (void *)((sp - len) & ~((__typeof__(sp - len))((16)-1)));
}

static inline bool is_x32_task(void)
{




 return _false;
}

static inline bool is_compat_task(void)
{
 return is_ia32_task() || is_x32_task();
}
static inline bool arch_trace_is_compat_syscall(struct pt_regs *regs)
{
 if (is_compat_task())
  return _true;
 return _false;
}
struct module;
struct ftrace_hash;



extern int ftrace_enabled;
extern int
ftrace_enable_sysctl(struct ctl_table *table, int write,
       void *buffer, size_t *lenp,
       loff_t *ppos);

struct ftrace_ops;

typedef void (*ftrace_func_t)(unsigned long ip, unsigned long parent_ip,
         struct ftrace_ops *op, struct pt_regs *regs);
enum {
 FTRACE_OPS_FL_ENABLED = 1 << 0,
 FTRACE_OPS_FL_GLOBAL = 1 << 1,
 FTRACE_OPS_FL_DYNAMIC = 1 << 2,
 FTRACE_OPS_FL_CONTROL = 1 << 3,
 FTRACE_OPS_FL_SAVE_REGS = 1 << 4,
 FTRACE_OPS_FL_SAVE_REGS_IF_SUPPORTED = 1 << 5,
 FTRACE_OPS_FL_RECURSION_SAFE = 1 << 6,
 FTRACE_OPS_FL_STUB = 1 << 7,
 FTRACE_OPS_FL_INITIALIZED = 1 << 8,
};

struct ftrace_ops {
 ftrace_func_t func;
 struct ftrace_ops *next;
 unsigned long flags;
 int *disabled;

 struct ftrace_hash *notrace_hash;
 struct ftrace_hash *filter_hash;
 struct mutex regex_lock;

};

extern int function_trace_stop;




enum ftrace_tracing_type_t {
 FTRACE_TYPE_ENTER = 0,
 FTRACE_TYPE_RETURN,
};


extern enum ftrace_tracing_type_t ftrace_tracing_type;
static inline void ftrace_stop(void)
{
 function_trace_stop = 1;
}
static inline void ftrace_start(void)
{
 function_trace_stop = 0;
}
int register_ftrace_function(struct ftrace_ops *ops);
int unregister_ftrace_function(struct ftrace_ops *ops);
void clear_ftrace_function(void);
static inline void ftrace_function_local_enable(struct ftrace_ops *ops)
{
 if ((!(ops->flags & FTRACE_OPS_FL_CONTROL)))
  return;

 (*({ unsigned long tcp_ptr__; do { void *__vpp_verify = (typeof((ops->disabled) + 0))0; (void)__vpp_verify; } while (0); asm ("add " "%%""gs"":" "%P" "1" ", %0" : "=r" (tcp_ptr__) : "m" (this_cpu_off), "0" (ops->disabled)); (typeof(*(ops->disabled)) *)tcp_ptr__; }))--;
}
static inline void ftrace_function_local_disable(struct ftrace_ops *ops)
{
 if ((!(ops->flags & FTRACE_OPS_FL_CONTROL)))
  return;

 (*({ unsigned long tcp_ptr__; do { void *__vpp_verify = (typeof((ops->disabled) + 0))0; (void)__vpp_verify; } while (0); asm ("add " "%%""gs"":" "%P" "1" ", %0" : "=r" (tcp_ptr__) : "m" (this_cpu_off), "0" (ops->disabled)); (typeof(*(ops->disabled)) *)tcp_ptr__; }))++;
}
static inline int ftrace_function_local_disabled(struct ftrace_ops *ops)
{
 (!(ops->flags & FTRACE_OPS_FL_CONTROL));
 return *({ unsigned long tcp_ptr__; do { void *__vpp_verify = (typeof((ops->disabled) + 0))0; (void)__vpp_verify; } while (0); asm ("add " "%%""gs"":" "%P" "1" ", %0" : "=r" (tcp_ptr__) : "m" (this_cpu_off), "0" (ops->disabled)); (typeof(*(ops->disabled)) *)tcp_ptr__; });
}

extern void ftrace_stub(unsigned long a0, unsigned long a1,
   struct ftrace_ops *op, struct pt_regs *regs);
extern int stack_tracer_enabled;
int
stack_trace_sysctl(struct ctl_table *table, int write,
     void *buffer, size_t *lenp,
     loff_t *ppos);


struct ftrace_func_command {
 struct list_head list;
 char *name;
 int (*func)(struct ftrace_hash *hash,
     char *func, char *cmd,
     char *params, int enable);
};



int ftrace_arch_code_modify_prepare(void);
int ftrace_arch_code_modify_post_process(void);

void ftrace_bug(int err, unsigned long ip);

struct seq_file;

struct ftrace_probe_ops {
 void (*func)(unsigned long ip,
     unsigned long parent_ip,
     void **data);
 int (*init)(struct ftrace_probe_ops *ops,
     unsigned long ip, void **data);
 void (*free)(struct ftrace_probe_ops *ops,
     unsigned long ip, void **data);
 int (*print)(struct seq_file *m,
      unsigned long ip,
      struct ftrace_probe_ops *ops,
      void *data);
};

extern int
register_ftrace_function_probe(char *glob, struct ftrace_probe_ops *ops,
         void *data);
extern void
unregister_ftrace_function_probe(char *glob, struct ftrace_probe_ops *ops,
    void *data);
extern void
unregister_ftrace_function_probe_func(char *glob, struct ftrace_probe_ops *ops);
extern void unregister_ftrace_function_probe_all(char *glob);

extern int ftrace_text_reserved(void *start, void *end);

extern int ftrace_nr_registered_ops(void);
enum {
 FTRACE_FL_ENABLED = (1UL << 29),
 FTRACE_FL_REGS = (1UL << 30),
 FTRACE_FL_REGS_EN = (1UL << 31)
};




struct dyn_ftrace {
 union {
  unsigned long ip;
  struct dyn_ftrace *freelist;
 };
 unsigned long flags;
 struct dyn_arch_ftrace arch;
};

int ftrace_force_update(void);
int ftrace_set_filter_ip(struct ftrace_ops *ops, unsigned long ip,
    int remove, int reset);
int ftrace_set_filter(struct ftrace_ops *ops, unsigned char *buf,
         int len, int reset);
int ftrace_set_notrace(struct ftrace_ops *ops, unsigned char *buf,
   int len, int reset);
void ftrace_set_global_filter(unsigned char *buf, int len, int reset);
void ftrace_set_global_notrace(unsigned char *buf, int len, int reset);
void ftrace_free_filter(struct ftrace_ops *ops);

int register_ftrace_command(struct ftrace_func_command *cmd);
int unregister_ftrace_command(struct ftrace_func_command *cmd);

enum {
 FTRACE_UPDATE_CALLS = (1 << 0),
 FTRACE_DISABLE_CALLS = (1 << 1),
 FTRACE_UPDATE_TRACE_FUNC = (1 << 2),
 FTRACE_START_FUNC_RET = (1 << 3),
 FTRACE_STOP_FUNC_RET = (1 << 4),
};
enum {
 FTRACE_UPDATE_IGNORE,
 FTRACE_UPDATE_MAKE_CALL,
 FTRACE_UPDATE_MODIFY_CALL,
 FTRACE_UPDATE_MODIFY_CALL_REGS,
 FTRACE_UPDATE_MAKE_NOP,
};

enum {
 FTRACE_ITER_FILTER = (1 << 0),
 FTRACE_ITER_NOTRACE = (1 << 1),
 FTRACE_ITER_PRINTALL = (1 << 2),
 FTRACE_ITER_DO_HASH = (1 << 3),
 FTRACE_ITER_HASH = (1 << 4),
 FTRACE_ITER_ENABLED = (1 << 5),
};

void arch_ftrace_update_code(int command);

struct ftrace_rec_iter;

struct ftrace_rec_iter *ftrace_rec_iter_start(void);
struct ftrace_rec_iter *ftrace_rec_iter_next(struct ftrace_rec_iter *iter);
struct dyn_ftrace *ftrace_rec_iter_record(struct ftrace_rec_iter *iter);







int ftrace_update_record(struct dyn_ftrace *rec, int enable);
int ftrace_test_record(struct dyn_ftrace *rec, int enable);
void ftrace_run_stop_machine(int command);
unsigned long ftrace_location(unsigned long ip);

extern ftrace_func_t ftrace_trace_function;

int ftrace_regex_open(struct ftrace_ops *ops, int flag,
    struct inode *inode, struct file *file);
ssize_t ftrace_filter_write(struct file *file, char *ubuf,
       size_t cnt, loff_t *ppos);
ssize_t ftrace_notrace_write(struct file *file, char *ubuf,
        size_t cnt, loff_t *ppos);
int ftrace_regex_release(struct inode *inode, struct file *file);

void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__))
ftrace_set_early_filter(struct ftrace_ops *ops, char *buf, int enable);


extern int ftrace_ip_converted(unsigned long ip);
extern int ftrace_dyn_arch_init(void *data);
extern void ftrace_replace_code(int enable);
extern int ftrace_update_ftrace_func(ftrace_func_t func);
extern void ftrace_caller(void);
extern void ftrace_regs_caller(void);
extern void ftrace_call(void);
extern void ftrace_regs_call(void);
extern void mcount_call(void);

void ftrace_modify_all_code(int command);
extern void ftrace_graph_caller(void);
extern int ftrace_enable_ftrace_graph_caller(void);
extern int ftrace_disable_ftrace_graph_caller(void);
extern int ftrace_make_nop(struct module *mod,
      struct dyn_ftrace *rec, unsigned long addr);
extern int ftrace_make_call(struct dyn_ftrace *rec, unsigned long addr);
extern int ftrace_modify_call(struct dyn_ftrace *rec, unsigned long old_addr,
         unsigned long addr);
extern int ftrace_arch_read_dyn_info(char *buf, int size);

extern int skip_trace(unsigned long ip);

extern void ftrace_disable_daemon(void);
extern void ftrace_enable_daemon(void);
loff_t ftrace_filter_lseek(struct file *file, loff_t offset, int whence);


void ftrace_kill(void);

static inline void tracer_disable(void)
{

 ftrace_enabled = 0;

}






static inline int __ftrace_enabled_save(void)
{

 int saved_ftrace_enabled = ftrace_enabled;
 ftrace_enabled = 0;
 return saved_ftrace_enabled;



}

static inline void __ftrace_enabled_restore(int enabled)
{

 ftrace_enabled = enabled;

}
  static inline void time_hardirqs_on(unsigned long a0, unsigned long a1) { }
  static inline void time_hardirqs_off(unsigned long a0, unsigned long a1) { }
extern void ftrace_init(void);







struct ftrace_graph_ent {
 unsigned long func;
 int depth;
};




struct ftrace_graph_ret {
 unsigned long func;
 unsigned long long calltime;
 unsigned long long rettime;

 unsigned long overrun;
 int depth;
};


typedef void (*trace_func_graph_ret_t)(struct ftrace_graph_ret *);
typedef int (*trace_func_graph_ent_t)(struct ftrace_graph_ent *);
struct ftrace_ret_stack {
 unsigned long ret;
 unsigned long func;
 unsigned long long calltime;
 unsigned long long subtime;
 unsigned long fp;
};






extern void return_to_handler(void);

extern int
ftrace_push_return_trace(unsigned long ret, unsigned long func, int *depth,
    unsigned long frame_pointer);
extern char __irqentry_text_start[];
extern char __irqentry_text_end[];




extern int register_ftrace_graph(trace_func_graph_ret_t retfunc,
    trace_func_graph_ent_t entryfunc);

extern void ftrace_graph_stop(void);


extern trace_func_graph_ret_t ftrace_graph_return;
extern trace_func_graph_ent_t ftrace_graph_entry;

extern void unregister_ftrace_graph(void);

extern void ftrace_graph_init_task(struct task_struct *t);
extern void ftrace_graph_exit_task(struct task_struct *t);
extern void ftrace_graph_init_idle_task(struct task_struct *t, int cpu);

static inline int task_curr_ret_stack(struct task_struct *t)
{
 return t->curr_ret_stack;
}

static inline void pause_graph_tracing(void)
{
 ;
}

static inline void unpause_graph_tracing(void)
{
 ;
}
enum {
 TSK_TRACE_FL_TRACE_BIT = 0,
 TSK_TRACE_FL_GRAPH_BIT = 1,
};
enum {
 TSK_TRACE_FL_TRACE = 1 << TSK_TRACE_FL_TRACE_BIT,
 TSK_TRACE_FL_GRAPH = 1 << TSK_TRACE_FL_GRAPH_BIT,
};

static inline void set_tsk_trace_trace(struct task_struct *tsk)
{
 set_bit(TSK_TRACE_FL_TRACE_BIT, &tsk->trace);
}

static inline void clear_tsk_trace_trace(struct task_struct *tsk)
{
 clear_bit(TSK_TRACE_FL_TRACE_BIT, &tsk->trace);
}

static inline int test_tsk_trace_trace(struct task_struct *tsk)
{
 return tsk->trace & TSK_TRACE_FL_TRACE;
}

static inline void set_tsk_trace_graph(struct task_struct *tsk)
{
 set_bit(TSK_TRACE_FL_GRAPH_BIT, &tsk->trace);
}

static inline void clear_tsk_trace_graph(struct task_struct *tsk)
{
 clear_bit(TSK_TRACE_FL_GRAPH_BIT, &tsk->trace);
}

static inline int test_tsk_trace_graph(struct task_struct *tsk)
{
 return tsk->trace & TSK_TRACE_FL_GRAPH;
}

enum ftrace_dump_mode;

extern enum ftrace_dump_mode ftrace_dump_on_oops;

extern void disable_trace_on_warning(void);
extern int __disable_trace_on_warning;
unsigned long arch_syscall_addr(int nr);
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
struct irq_work {
 unsigned long flags;
 struct llist_node llnode;
 void (*func)(struct irq_work *);
};

static inline
void init_irq_work(struct irq_work *work, void (*func)(struct irq_work *))
{
 work->flags = 0;
 work->func = func;
}

void irq_work_queue(struct irq_work *work);
void irq_work_run(void);
void irq_work_sync(struct irq_work *work);


bool irq_work_needs_cpu(void);
struct static_key_deferred {
 struct static_key key;
};
static inline void static_key_slow_dec_deferred(struct static_key_deferred *key)
{
 (!static_key_initialized);
 static_key_slow_dec(&key->key);
}
static inline void
jump_label_rate_limit(struct static_key_deferred *key,
  unsigned long rl)
{
 (!static_key_initialized);
}









enum perf_event_x86_regs {
 PERF_REG_X86_AX,
 PERF_REG_X86_BX,
 PERF_REG_X86_CX,
 PERF_REG_X86_DX,
 PERF_REG_X86_SI,
 PERF_REG_X86_DI,
 PERF_REG_X86_BP,
 PERF_REG_X86_SP,
 PERF_REG_X86_IP,
 PERF_REG_X86_FLAGS,
 PERF_REG_X86_CS,
 PERF_REG_X86_SS,
 PERF_REG_X86_DS,
 PERF_REG_X86_ES,
 PERF_REG_X86_FS,
 PERF_REG_X86_GS,
 PERF_REG_X86_R8,
 PERF_REG_X86_R9,
 PERF_REG_X86_R10,
 PERF_REG_X86_R11,
 PERF_REG_X86_R12,
 PERF_REG_X86_R13,
 PERF_REG_X86_R14,
 PERF_REG_X86_R15,

 PERF_REG_X86_32_MAX = PERF_REG_X86_GS + 1,
 PERF_REG_X86_64_MAX = PERF_REG_X86_R15 + 1,
};
u64 perf_reg_value(struct pt_regs *regs, int idx);
int perf_reg_validate(u64 mask);
u64 perf_reg_abi(struct task_struct *task);


struct perf_callchain_entry {
 __u64 nr;
 __u64 ip[127];
};

struct perf_raw_record {
 u32 size;
 void *data;
};
struct perf_branch_stack {
 __u64 nr;
 struct perf_branch_entry entries[0];
};

struct perf_regs_user {
 __u64 abi;
 struct pt_regs *regs;
};

struct task_struct;




struct hw_perf_event_extra {
 u64 config;
 unsigned int reg;
 int alloc;
 int idx;
};

struct event_constraint;




struct hw_perf_event {

 union {
  struct {
   u64 config;
   u64 last_tag;
   unsigned long config_base;
   unsigned long event_base;
   int event_base_rdpmc;
   int idx;
   int last_cpu;
   int flags;

   struct hw_perf_event_extra extra_reg;
   struct hw_perf_event_extra branch_reg;

   struct event_constraint *constraint;
  };
  struct {
   struct hrtimer hrtimer;
  };
  struct {
   struct task_struct *tp_target;

   struct list_head tp_list;
  };

  struct {





   struct task_struct *bp_target;
   struct arch_hw_breakpoint info;
   struct list_head bp_list;
  };

 };
 int state;
 local64_t prev_count;
 u64 sample_period;
 u64 last_period;
 local64_t period_left;
 u64 interrupts_seq;
 u64 interrupts;

 u64 freq_time_stamp;
 u64 freq_count_stamp;

};
struct perf_event;
struct pmu {
 struct list_head entry;

 struct device *dev;
 struct attribute_group **attr_groups;
 char *name;
 int type;

 int * pmu_disable_count;
 struct perf_cpu_context * pmu_cpu_context;
 int task_ctx_nr;
 int hrtimer_interval_ms;





 void (*pmu_enable) (struct pmu *pmu);
 void (*pmu_disable) (struct pmu *pmu);





 int (*event_init) (struct perf_event *event);
 int (*add) (struct perf_event *event, int flags);
 void (*del) (struct perf_event *event, int flags);






 void (*start) (struct perf_event *event, int flags);
 void (*stop) (struct perf_event *event, int flags);




 void (*read) (struct perf_event *event);
 void (*start_txn) (struct pmu *pmu);






 int (*commit_txn) (struct pmu *pmu);




 void (*cancel_txn) (struct pmu *pmu);





 int (*event_idx) (struct perf_event *event);




 void (*flush_branch_stack) (void);
};




enum perf_event_active_state {
 PERF_EVENT_STATE_ERROR = -2,
 PERF_EVENT_STATE_OFF = -1,
 PERF_EVENT_STATE_INACTIVE = 0,
 PERF_EVENT_STATE_ACTIVE = 1,
};

struct file;
struct perf_sample_data;

typedef void (*perf_overflow_handler_t)(struct perf_event *,
     struct perf_sample_data *,
     struct pt_regs *regs);

enum perf_group_flag {
 PERF_GROUP_SOFTWARE = 0x1,
};




struct swevent_hlist {
 struct hlist_head heads[(1 << 8)];
 struct callback_head callback_head;
};





struct perf_cgroup;
struct ring_buffer;




struct perf_event {






 struct list_head event_entry;
 struct list_head group_entry;
 struct list_head sibling_list;






 struct list_head migrate_entry;

 struct hlist_node hlist_entry;
 int nr_siblings;
 int group_flags;
 struct perf_event *group_leader;
 struct pmu *pmu;

 enum perf_event_active_state state;
 unsigned int attach_state;
 local64_t count;
 atomic64_t child_count;
 u64 total_time_enabled;
 u64 total_time_running;
 u64 tstamp_enabled;
 u64 tstamp_running;
 u64 tstamp_stopped;
 u64 shadow_ctx_time;

 struct perf_event_attr attr;
 u16 header_size;
 u16 id_header_size;
 u16 read_size;
 struct hw_perf_event hw;

 struct perf_event_context *ctx;
 atomic_long_t refcount;





 atomic64_t child_total_time_enabled;
 atomic64_t child_total_time_running;




 struct mutex child_mutex;
 struct list_head child_list;
 struct perf_event *parent;

 int oncpu;
 int cpu;

 struct list_head owner_entry;
 struct task_struct *owner;


 struct mutex mmap_mutex;
 atomic_t mmap_count;

 struct ring_buffer *rb;
 struct list_head rb_entry;


 wait_queue_head_t waitq;
 struct fasync_struct *fasync;


 int pending_wakeup;
 int pending_kill;
 int pending_disable;
 struct irq_work pending;

 atomic_t event_limit;

 void (*destroy)(struct perf_event *);
 struct callback_head callback_head;

 struct pid_namespace *ns;
 u64 id;

 perf_overflow_handler_t overflow_handler;
 void *overflow_handler_context;


 struct ftrace_event_call *tp_event;
 struct event_filter *filter;

 struct ftrace_ops ftrace_ops;




 struct perf_cgroup *cgrp;
 int cgrp_defer_enabled;



};

enum perf_event_context_type {
 task_context,
 cpu_context,
};






struct perf_event_context {
 struct pmu *pmu;
 enum perf_event_context_type type;




 raw_spinlock_t lock;





 struct mutex mutex;

 struct list_head pinned_groups;
 struct list_head flexible_groups;
 struct list_head event_list;
 int nr_events;
 int nr_active;
 int is_active;
 int nr_stat;
 int nr_freq;
 int rotate_disable;
 atomic_t refcount;
 struct task_struct *task;




 u64 time;
 u64 timestamp;





 struct perf_event_context *parent_ctx;
 u64 parent_gen;
 u64 generation;
 int pin_count;
 int nr_cgroups;
 int nr_branch_stack;
 struct callback_head callback_head;
};
struct perf_cpu_context {
 struct perf_event_context ctx;
 struct perf_event_context *task_ctx;
 int active_oncpu;
 int exclusive;
 struct hrtimer hrtimer;
 ktime_t hrtimer_interval;
 struct list_head rotation_list;
 struct pmu *unique_pmu;
 struct perf_cgroup *cgrp;
};

struct perf_output_handle {
 struct perf_event *event;
 struct ring_buffer *rb;
 unsigned long wakeup;
 unsigned long size;
 void *addr;
 int page;
};



extern int perf_pmu_register(struct pmu *pmu, char *name, int type);
extern void perf_pmu_unregister(struct pmu *pmu);

extern int perf_num_counters(void);
extern char *perf_pmu_name(void);
extern void __perf_event_task_sched_in(struct task_struct *prev,
           struct task_struct *task);
extern void __perf_event_task_sched_out(struct task_struct *prev,
     struct task_struct *next);
extern int perf_event_init_task(struct task_struct *child);
extern void perf_event_exit_task(struct task_struct *child);
extern void perf_event_free_task(struct task_struct *task);
extern void perf_event_delayed_put(struct task_struct *task);
extern void perf_event_print_debug(void);
extern void perf_pmu_disable(struct pmu *pmu);
extern void perf_pmu_enable(struct pmu *pmu);
extern int perf_event_task_disable(void);
extern int perf_event_task_enable(void);
extern int perf_event_refresh(struct perf_event *event, int refresh);
extern void perf_event_update_userpage(struct perf_event *event);
extern int perf_event_release_kernel(struct perf_event *event);
extern struct perf_event *
perf_event_create_kernel_counter(struct perf_event_attr *attr,
    int cpu,
    struct task_struct *task,
    perf_overflow_handler_t callback,
    void *context);
extern void perf_pmu_migrate_context(struct pmu *pmu,
    int src_cpu, int dst_cpu);
extern u64 perf_event_read_value(struct perf_event *event,
     u64 *enabled, u64 *running);


struct perf_sample_data {
 u64 type;

 u64 ip;
 struct {
  u32 pid;
  u32 tid;
 } tid_entry;
 u64 time;
 u64 addr;
 u64 id;
 u64 stream_id;
 struct {
  u32 cpu;
  u32 reserved;
 } cpu_entry;
 u64 period;
 union perf_mem_data_src data_src;
 struct perf_callchain_entry *callchain;
 struct perf_raw_record *raw;
 struct perf_branch_stack *br_stack;
 struct perf_regs_user regs_user;
 u64 stack_user_size;
 u64 weight;



 u64 txn;
};

static inline void perf_sample_data_init(struct perf_sample_data *data,
      u64 addr, u64 period)
{

 data->addr = addr;
 data->raw = 0;
 data->br_stack = 0;
 data->period = period;
 data->regs_user.abi = PERF_SAMPLE_REGS_ABI_NONE;
 data->regs_user.regs = 0;
 data->stack_user_size = 0;
 data->weight = 0;
 data->data_src.val = 0;
 data->txn = 0;
}

extern void perf_output_sample(struct perf_output_handle *handle,
          struct perf_event_header *header,
          struct perf_sample_data *data,
          struct perf_event *event);
extern void perf_prepare_sample(struct perf_event_header *header,
    struct perf_sample_data *data,
    struct perf_event *event,
    struct pt_regs *regs);

extern int perf_event_overflow(struct perf_event *event,
     struct perf_sample_data *data,
     struct pt_regs *regs);

static inline bool is_sampling_event(struct perf_event *event)
{
 return event->attr.sample_period != 0;
}




static inline int is_software_event(struct perf_event *event)
{
 return event->pmu->task_ctx_nr == perf_sw_context;
}

extern struct static_key perf_swevent_enabled[PERF_COUNT_SW_MAX];

extern void __perf_sw_event(u32, u64, struct pt_regs *, u64);
static inline void perf_fetch_caller_regs(struct pt_regs *regs)
{
 memset(regs, 0, sizeof(*regs));

 { (regs)->ip = (((unsigned long)__builtin_return_address(0))); (regs)->bp = caller_frame_pointer(); (regs)->cs = (2*8); regs->flags = 0; asm ( " " "movq" " " "%%""rsp" ", %0\n" : "=m" ((regs)->sp) :: "memory" ); };
}

static inline __attribute__((always_inline)) void
perf_sw_event(u32 event_id, u64 nr, struct pt_regs *regs, u64 addr)
{
 struct pt_regs hot_regs;

 if (static_key_false(&perf_swevent_enabled[event_id])) {
  if (!regs) {
   perf_fetch_caller_regs(&hot_regs);
   regs = &hot_regs;
  }
  __perf_sw_event(event_id, nr, regs, addr);
 }
}

extern struct static_key_deferred perf_sched_events;

static inline void perf_event_task_sched_in(struct task_struct *prev,
         struct task_struct *task)
{
 if (static_key_false(&perf_sched_events.key))
  __perf_event_task_sched_in(prev, task);
}

static inline void perf_event_task_sched_out(struct task_struct *prev,
          struct task_struct *next)
{
 perf_sw_event(PERF_COUNT_SW_CONTEXT_SWITCHES, 1, 0, 0);

 if (static_key_false(&perf_sched_events.key))
  __perf_event_task_sched_out(prev, next);
}

extern void perf_event_mmap(struct vm_area_struct *vma);
extern struct perf_guest_info_callbacks *perf_guest_cbs;
extern int perf_register_guest_info_callbacks(struct perf_guest_info_callbacks *callbacks);
extern int perf_unregister_guest_info_callbacks(struct perf_guest_info_callbacks *callbacks);

extern void perf_event_comm(struct task_struct *tsk);
extern void perf_event_fork(struct task_struct *tsk);


extern __attribute__((section(".data..percpu" ""))) __typeof__(struct perf_callchain_entry) perf_callchain_entry;

extern void perf_callchain_user(struct perf_callchain_entry *entry, struct pt_regs *regs);
extern void perf_callchain_kernel(struct perf_callchain_entry *entry, struct pt_regs *regs);

static inline void perf_callchain_store(struct perf_callchain_entry *entry, u64 ip)
{
 if (entry->nr < 127)
  entry->ip[entry->nr++] = ip;
}

extern int sysctl_perf_event_paranoid;
extern int sysctl_perf_event_mlock;
extern int sysctl_perf_event_sample_rate;
extern int sysctl_perf_cpu_time_max_percent;

extern void perf_sample_event_took(u64 sample_len_ns);

extern int perf_proc_update_handler(struct ctl_table *table, int write,
  void *buffer, size_t *lenp,
  loff_t *ppos);
extern int perf_cpu_time_max_percent_handler(struct ctl_table *table, int write,
  void *buffer, size_t *lenp,
  loff_t *ppos);


static inline bool perf_paranoid_tracepoint_raw(void)
{
 return sysctl_perf_event_paranoid > -1;
}

static inline bool perf_paranoid_cpu(void)
{
 return sysctl_perf_event_paranoid > 0;
}

static inline bool perf_paranoid_kernel(void)
{
 return sysctl_perf_event_paranoid > 1;
}

extern void perf_event_init(void);
extern void perf_tp_event(u64 addr, u64 count, void *record,
     int entry_size, struct pt_regs *regs,
     struct hlist_head *head, int rctx,
     struct task_struct *task);
extern void perf_bp_event(struct perf_event *event, void *data);







static inline bool has_branch_stack(struct perf_event *event)
{
 return event->attr.sample_type & PERF_SAMPLE_BRANCH_STACK;
}

extern int perf_output_begin(struct perf_output_handle *handle,
        struct perf_event *event, unsigned int size);
extern void perf_output_end(struct perf_output_handle *handle);
extern unsigned int perf_output_copy(struct perf_output_handle *handle,
        void *buf, unsigned int len);
extern unsigned int perf_output_skip(struct perf_output_handle *handle,
         unsigned int len);
extern int perf_swevent_get_recursion_context(void);
extern void perf_swevent_put_recursion_context(int rctx);
extern u64 perf_swevent_set_period(struct perf_event *event);
extern void perf_event_enable(struct perf_event *event);
extern void perf_event_disable(struct perf_event *event);
extern int __perf_event_disable(void *info);
extern void perf_event_task_tick(void);
extern bool perf_event_can_stop_tick(void);





extern void perf_restore_debug_store(void);
struct perf_pmu_events_attr {
 struct device_attribute attr;
 u64 id;
 char *event_str;
};

struct trace_array;
struct trace_buffer;
struct tracer;
struct dentry;

struct trace_print_flags {
 unsigned long mask;
 char *name;
};

struct trace_print_flags_u64 {
 unsigned long long mask;
 char *name;
};

 char *ftrace_print_flags_seq(struct trace_seq *p, char *delim,
       unsigned long flags,
       struct trace_print_flags *flag_array);

 char *ftrace_print_symbols_seq(struct trace_seq *p, unsigned long val,
         struct trace_print_flags *symbol_array);
 char *ftrace_print_hex_seq(struct trace_seq *p,
     unsigned char *buf, int len);

struct trace_iterator;
struct trace_event;

int ftrace_raw_output_prep(struct trace_iterator *iter,
      struct trace_event *event);







struct trace_entry {
 unsigned short type;
 unsigned char flags;
 unsigned char preempt_count;
 int pid;
};
struct trace_iterator {
 struct trace_array *tr;
 struct tracer *trace;
 struct trace_buffer *trace_buffer;
 void *_private;
 int cpu_file;
 struct mutex mutex;
 struct ring_buffer_iter **buffer_iter;
 unsigned long iter_flags;


 struct trace_seq tmp_seq;

 cpumask_var_t started;


 bool snapshot;


 struct trace_seq seq;
 struct trace_entry *ent;
 unsigned long lost_events;
 int leftover;
 int ent_size;
 int cpu;
 u64 ts;

 loff_t pos;
 long idx;


};

enum trace_iter_flags {
 TRACE_FILE_LAT_FMT = 1,
 TRACE_FILE_ANNOTATE = 2,
 TRACE_FILE_TIME_IN_NS = 4,
};


enum print_line_t {
 TRACE_TYPE_PARTIAL_LINE = 0,
 TRACE_TYPE_HANDLED = 1,
 TRACE_TYPE_UNHANDLED = 2,
 TRACE_TYPE_NO_CONSUME = 3
};

typedef enum print_line_t (*trace_print_func)(struct trace_iterator *iter,
          int flags, struct trace_event *event);

struct trace_event_functions {
 trace_print_func trace;
 trace_print_func raw;
 trace_print_func hex;
 trace_print_func binary;
};

struct trace_event {
 struct hlist_node node;
 struct list_head list;
 int type;
 struct trace_event_functions *funcs;
};

extern int register_ftrace_event(struct trace_event *event);
extern int unregister_ftrace_event(struct trace_event *event);

void tracing_generic_entry_update(struct trace_entry *entry,
      unsigned long flags,
      int pc);
struct ftrace_event_file;

struct ring_buffer_event *
trace_event_buffer_lock_reserve(struct ring_buffer **current_buffer,
    struct ftrace_event_file *ftrace_file,
    int type, unsigned long len,
    unsigned long flags, int pc);
struct ring_buffer_event *
trace_current_buffer_lock_reserve(struct ring_buffer **current_buffer,
      int type, unsigned long len,
      unsigned long flags, int pc);
void trace_current_buffer_unlock_commit(struct ring_buffer *buffer,
     struct ring_buffer_event *event,
     unsigned long flags, int pc);
void trace_buffer_unlock_commit(struct ring_buffer *buffer,
    struct ring_buffer_event *event,
    unsigned long flags, int pc);
void trace_buffer_unlock_commit_regs(struct ring_buffer *buffer,
         struct ring_buffer_event *event,
         unsigned long flags, int pc,
         struct pt_regs *regs);
void trace_current_buffer_discard_commit(struct ring_buffer *buffer,
      struct ring_buffer_event *event);

void tracing_record_cmdline(struct task_struct *tsk);

struct event_filter;

enum trace_reg {
 TRACE_REG_REGISTER,
 TRACE_REG_UNREGISTER,

 TRACE_REG_PERF_REGISTER,
 TRACE_REG_PERF_UNREGISTER,
 TRACE_REG_PERF_OPEN,
 TRACE_REG_PERF_CLOSE,
 TRACE_REG_PERF_ADD,
 TRACE_REG_PERF_DEL,

};

struct ftrace_event_call;

struct ftrace_event_class {
 char *system;
 void *probe;

 void *perf_probe;

 int (*reg)(struct ftrace_event_call *event,
           enum trace_reg type, void *data);
 int (*define_fields)(struct ftrace_event_call *);
 struct list_head *(*get_fields)(struct ftrace_event_call *);
 struct list_head fields;
 int (*raw_init)(struct ftrace_event_call *);
};

extern int ftrace_event_reg(struct ftrace_event_call *event,
       enum trace_reg type, void *data);

enum {
 TRACE_EVENT_FL_FILTERED_BIT,
 TRACE_EVENT_FL_CAP_ANY_BIT,
 TRACE_EVENT_FL_NO_SET_FILTER_BIT,
 TRACE_EVENT_FL_IGNORE_ENABLE_BIT,
 TRACE_EVENT_FL_WAS_ENABLED_BIT,
 TRACE_EVENT_FL_USE_CALL_FILTER_BIT,
};
enum {
 TRACE_EVENT_FL_FILTERED = (1 << TRACE_EVENT_FL_FILTERED_BIT),
 TRACE_EVENT_FL_CAP_ANY = (1 << TRACE_EVENT_FL_CAP_ANY_BIT),
 TRACE_EVENT_FL_NO_SET_FILTER = (1 << TRACE_EVENT_FL_NO_SET_FILTER_BIT),
 TRACE_EVENT_FL_IGNORE_ENABLE = (1 << TRACE_EVENT_FL_IGNORE_ENABLE_BIT),
 TRACE_EVENT_FL_WAS_ENABLED = (1 << TRACE_EVENT_FL_WAS_ENABLED_BIT),
 TRACE_EVENT_FL_USE_CALL_FILTER = (1 << TRACE_EVENT_FL_USE_CALL_FILTER_BIT),
};

struct ftrace_event_call {
 struct list_head list;
 struct ftrace_event_class *_class;
 char *name;
 struct trace_event event;
 char *print_fmt;
 struct event_filter *filter;
 struct list_head *files;
 void *mod;
 void *data;
 int flags;


 int perf_refcount;
 struct hlist_head *perf_events;

 int (*perf_perm)(struct ftrace_event_call *,
        struct perf_event *);

};

struct trace_array;
struct ftrace_subsystem_dir;

enum {
 FTRACE_EVENT_FL_ENABLED_BIT,
 FTRACE_EVENT_FL_RECORDED_CMD_BIT,
 FTRACE_EVENT_FL_FILTERED_BIT,
 FTRACE_EVENT_FL_NO_SET_FILTER_BIT,
 FTRACE_EVENT_FL_SOFT_MODE_BIT,
 FTRACE_EVENT_FL_SOFT_DISABLED_BIT,
};
enum {
 FTRACE_EVENT_FL_ENABLED = (1 << FTRACE_EVENT_FL_ENABLED_BIT),
 FTRACE_EVENT_FL_RECORDED_CMD = (1 << FTRACE_EVENT_FL_RECORDED_CMD_BIT),
 FTRACE_EVENT_FL_FILTERED = (1 << FTRACE_EVENT_FL_FILTERED_BIT),
 FTRACE_EVENT_FL_NO_SET_FILTER = (1 << FTRACE_EVENT_FL_NO_SET_FILTER_BIT),
 FTRACE_EVENT_FL_SOFT_MODE = (1 << FTRACE_EVENT_FL_SOFT_MODE_BIT),
 FTRACE_EVENT_FL_SOFT_DISABLED = (1 << FTRACE_EVENT_FL_SOFT_DISABLED_BIT),
};

struct ftrace_event_file {
 struct list_head list;
 struct ftrace_event_call *event_call;
 struct event_filter *filter;
 struct dentry *dir;
 struct trace_array *tr;
 struct ftrace_subsystem_dir *system;
 unsigned long flags;
 atomic_t sm_ref;
};
extern void destroy_preds(struct ftrace_event_file *file);
extern void destroy_call_preds(struct ftrace_event_call *call);
extern int filter_match_preds(struct event_filter *filter, void *rec);

extern int filter_check_discard(struct ftrace_event_file *file, void *rec,
    struct ring_buffer *buffer,
    struct ring_buffer_event *event);
extern int call_filter_check_discard(struct ftrace_event_call *call, void *rec,
         struct ring_buffer *buffer,
         struct ring_buffer_event *event);

enum {
 FILTER_OTHER = 0,
 FILTER_STATIC_STRING,
 FILTER_DYN_STRING,
 FILTER_PTR_STRING,
 FILTER_TRACE_FN,
};

extern int trace_event_raw_init(struct ftrace_event_call *call);
extern int trace_define_field(struct ftrace_event_call *call, char *type,
         char *name, int offset, int size,
         int is_signed, int filter_type);
extern int trace_add_event_call(struct ftrace_event_call *call);
extern int trace_remove_event_call(struct ftrace_event_call *call);



int trace_set_clr_event( char *system, char *event, int set);
struct perf_event;

extern __attribute__((section(".data..percpu" ""))) __typeof__(struct pt_regs) perf_trace_regs;

extern int perf_trace_init(struct perf_event *event);
extern void perf_trace_destroy(struct perf_event *event);
extern int perf_trace_add(struct perf_event *event, int flags);
extern void perf_trace_del(struct perf_event *event, int flags);
extern int ftrace_profile_set_filter(struct perf_event *event, int event_id,
         char *filter_str);
extern void ftrace_profile_free_filter(struct perf_event *event);
extern void *perf_trace_buf_prepare(int size, unsigned short type,
        struct pt_regs *regs, int *rctxp);

static inline void
perf_trace_buf_submit(void *raw_data, int size, int rctx, u64 addr,
         u64 count, struct pt_regs *regs, void *head,
         struct task_struct *task)
{



 perf_tp_event(addr, count, raw_data, size, regs, (struct hlist_head *)head, rctx, task);

}
struct syscall_metadata {
 char *name;
 int syscall_nr;
 int nb_args;
 char **types;
 char **args;
 struct list_head enter_fields;

 struct ftrace_event_call *enter_event;
 struct ftrace_event_call *exit_event;
};
extern struct ftrace_event_class event_class_syscall_enter;
extern struct ftrace_event_class event_class_syscall_exit;
extern struct trace_event_functions enter_syscall_print_funcs;
extern struct trace_event_functions exit_syscall_print_funcs;
 long sys_time(time_t *tloc);
 long sys_stime(time_t *tptr);
 long sys_gettimeofday(struct timeval *tv,
    struct timezone *tz);
 long sys_settimeofday(struct timeval *tv,
    struct timezone *tz);
 long sys_adjtimex(struct timex *txc_p);

 long sys_times(struct tms *tbuf);

 long sys_gettid(void);
 long sys_nanosleep(struct timespec *rqtp, struct timespec *rmtp);
 long sys_alarm(unsigned int seconds);
 long sys_getpid(void);
 long sys_getppid(void);
 long sys_getuid(void);
 long sys_geteuid(void);
 long sys_getgid(void);
 long sys_getegid(void);
 long sys_getresuid(uid_t *ruid, uid_t *euid, uid_t *suid);
 long sys_getresgid(gid_t *rgid, gid_t *egid, gid_t *sgid);
 long sys_getpgid(pid_t pid);
 long sys_getpgrp(void);
 long sys_getsid(pid_t pid);
 long sys_getgroups(int gidsetsize, gid_t *grouplist);

 long sys_setregid(gid_t rgid, gid_t egid);
 long sys_setgid(gid_t gid);
 long sys_setreuid(uid_t ruid, uid_t euid);
 long sys_setuid(uid_t uid);
 long sys_setresuid(uid_t ruid, uid_t euid, uid_t suid);
 long sys_setresgid(gid_t rgid, gid_t egid, gid_t sgid);
 long sys_setfsuid(uid_t uid);
 long sys_setfsgid(gid_t gid);
 long sys_setpgid(pid_t pid, pid_t pgid);
 long sys_setsid(void);
 long sys_setgroups(int gidsetsize, gid_t *grouplist);

 long sys_acct( char *name);
 long sys_capget(cap_user_header_t header,
    cap_user_data_t dataptr);
 long sys_capset(cap_user_header_t header,
    cap_user_data_t data);
 long sys_personality(unsigned int personality);

 long sys_sigpending(old_sigset_t *set);
 long sys_sigprocmask(int how, old_sigset_t *set,
    old_sigset_t *oset);
 long sys_sigaltstack( struct sigaltstack *uss,
    struct sigaltstack *uoss);

 long sys_getitimer(int which, struct itimerval *value);
 long sys_setitimer(int which,
    struct itimerval *value,
    struct itimerval *ovalue);
 long sys_timer_create(clockid_t which_clock,
     struct sigevent *timer_event_spec,
     timer_t * created_timer_id);
 long sys_timer_gettime(timer_t timer_id,
    struct itimerspec *setting);
 long sys_timer_getoverrun(timer_t timer_id);
 long sys_timer_settime(timer_t timer_id, int flags,
    struct itimerspec *new_setting,
    struct itimerspec *old_setting);
 long sys_timer_delete(timer_t timer_id);
 long sys_clock_settime(clockid_t which_clock,
    struct timespec *tp);
 long sys_clock_gettime(clockid_t which_clock,
    struct timespec *tp);
 long sys_clock_adjtime(clockid_t which_clock,
    struct timex *tx);
 long sys_clock_getres(clockid_t which_clock,
    struct timespec *tp);
 long sys_clock_nanosleep(clockid_t which_clock, int flags,
    struct timespec *rqtp,
    struct timespec *rmtp);

 long sys_nice(int increment);
 long sys_sched_setscheduler(pid_t pid, int policy,
     struct sched_param *param);
 long sys_sched_setparam(pid_t pid,
     struct sched_param *param);
 long sys_sched_getscheduler(pid_t pid);
 long sys_sched_getparam(pid_t pid,
     struct sched_param *param);
 long sys_sched_setaffinity(pid_t pid, unsigned int len,
     unsigned long *user_mask_ptr);
 long sys_sched_getaffinity(pid_t pid, unsigned int len,
     unsigned long *user_mask_ptr);
 long sys_sched_yield(void);
 long sys_sched_get_priority_max(int policy);
 long sys_sched_get_priority_min(int policy);
 long sys_sched_rr_get_interval(pid_t pid,
     struct timespec *interval);
 long sys_setpriority(int which, int who, int niceval);
 long sys_getpriority(int which, int who);

 long sys_shutdown(int, int);
 long sys_reboot(int magic1, int magic2, unsigned int cmd,
    void *arg);
 long sys_restart_syscall(void);
 long sys_kexec_load(unsigned long entry, unsigned long nr_segments,
    struct kexec_segment *segments,
    unsigned long flags);

 long sys_exit(int error_code);
 long sys_exit_group(int error_code);
 long sys_wait4(pid_t pid, int *stat_addr,
    int options, struct rusage *ru);
 long sys_waitid(int which, pid_t pid,
      struct siginfo *infop,
      int options, struct rusage *ru);
 long sys_waitpid(pid_t pid, int *stat_addr, int options);
 long sys_set_tid_address(int *tidptr);
 long sys_futex(u32 *uaddr, int op, u32 val,
   struct timespec *utime, u32 *uaddr2,
   u32 val3);

 long sys_init_module(void *umod, unsigned long len,
    char *uargs);
 long sys_delete_module( char *name_user,
    unsigned int flags);






 long sys_sigsuspend(int unused1, int unused2, old_sigset_t mask);


 long sys_rt_sigsuspend(sigset_t *unewset, size_t sigsetsize);







 long sys_rt_sigaction(int,
     struct sigaction *,
     struct sigaction *,
     size_t);

 long sys_rt_sigprocmask(int how, sigset_t *set,
    sigset_t *oset, size_t sigsetsize);
 long sys_rt_sigpending(sigset_t *set, size_t sigsetsize);
 long sys_rt_sigtimedwait( sigset_t *uthese,
    siginfo_t *uinfo,
    struct timespec *uts,
    size_t sigsetsize);
 long sys_rt_tgsigqueueinfo(pid_t tgid, pid_t pid, int sig,
  siginfo_t *uinfo);
 long sys_kill(int pid, int sig);
 long sys_tgkill(int tgid, int pid, int sig);
 long sys_tkill(int pid, int sig);
 long sys_rt_sigqueueinfo(int pid, int sig, siginfo_t *uinfo);
 long sys_sgetmask(void);
 long sys_ssetmask(int newmask);
 long sys_signal(int sig, __sighandler_t handler);
 long sys_pause(void);

 long sys_sync(void);
 long sys_fsync(unsigned int fd);
 long sys_fdatasync(unsigned int fd);
 long sys_bdflush(int func, long data);
 long sys_mount(char *dev_name, char *dir_name,
    char *type, unsigned long flags,
    void *data);
 long sys_umount(char *name, int flags);
 long sys_oldumount(char *name);
 long sys_truncate( char *path, long length);
 long sys_ftruncate(unsigned int fd, unsigned long length);
 long sys_stat( char *filename,
   struct __old_kernel_stat *statbuf);
 long sys_statfs( char * path,
    struct statfs *buf);
 long sys_statfs64( char *path, size_t sz,
    struct statfs64 *buf);
 long sys_fstatfs(unsigned int fd, struct statfs *buf);
 long sys_fstatfs64(unsigned int fd, size_t sz,
    struct statfs64 *buf);
 long sys_lstat( char *filename,
   struct __old_kernel_stat *statbuf);
 long sys_fstat(unsigned int fd,
   struct __old_kernel_stat *statbuf);
 long sys_newstat( char *filename,
    struct stat *statbuf);
 long sys_newlstat( char *filename,
    struct stat *statbuf);
 long sys_newfstat(unsigned int fd, struct stat *statbuf);
 long sys_ustat(unsigned dev, struct ustat *ubuf);
 long sys_setxattr( char *path, char *name,
        void *value, size_t size, int flags);
 long sys_lsetxattr( char *path, char *name,
         void *value, size_t size, int flags);
 long sys_fsetxattr(int fd, char *name,
         void *value, size_t size, int flags);
 long sys_getxattr( char *path, char *name,
        void *value, size_t size);
 long sys_lgetxattr( char *path, char *name,
         void *value, size_t size);
 long sys_fgetxattr(int fd, char *name,
         void *value, size_t size);
 long sys_listxattr( char *path, char *list,
         size_t size);
 long sys_llistxattr( char *path, char *list,
          size_t size);
 long sys_flistxattr(int fd, char *list, size_t size);
 long sys_removexattr( char *path,
    char *name);
 long sys_lremovexattr( char *path,
     char *name);
 long sys_fremovexattr(int fd, char *name);

 long sys_brk(unsigned long brk);
 long sys_mprotect(unsigned long start, size_t len,
    unsigned long prot);
 long sys_mremap(unsigned long addr,
      unsigned long old_len, unsigned long new_len,
      unsigned long flags, unsigned long new_addr);
 long sys_remap_file_pages(unsigned long start, unsigned long size,
   unsigned long prot, unsigned long pgoff,
   unsigned long flags);
 long sys_msync(unsigned long start, size_t len, int flags);
 long sys_fadvise64(int fd, loff_t offset, size_t len, int advice);
 long sys_fadvise64_64(int fd, loff_t offset, loff_t len, int advice);
 long sys_munmap(unsigned long addr, size_t len);
 long sys_mlock(unsigned long start, size_t len);
 long sys_munlock(unsigned long start, size_t len);
 long sys_mlockall(int flags);
 long sys_munlockall(void);
 long sys_madvise(unsigned long start, size_t len, int behavior);
 long sys_mincore(unsigned long start, size_t len,
    unsigned char * vec);

 long sys_pivot_root( char *new_root,
    char *put_old);
 long sys_chroot( char *filename);
 long sys_mknod( char *filename, umode_t mode,
    unsigned dev);
 long sys_link( char *oldname,
    char *newname);
 long sys_symlink( char *old, char *_new);
 long sys_unlink( char *pathname);
 long sys_rename( char *oldname,
    char *newname);
 long sys_chmod( char *filename, umode_t mode);
 long sys_fchmod(unsigned int fd, umode_t mode);

 long sys_fcntl(unsigned int fd, unsigned int cmd, unsigned long arg);




 long sys_pipe(int *fildes);
 long sys_pipe2(int *fildes, int flags);
 long sys_dup(unsigned int fildes);
 long sys_dup2(unsigned int oldfd, unsigned int newfd);
 long sys_dup3(unsigned int oldfd, unsigned int newfd, int flags);
 long sys_ioperm(unsigned long from, unsigned long num, int on);
 long sys_ioctl(unsigned int fd, unsigned int cmd,
    unsigned long arg);
 long sys_flock(unsigned int fd, unsigned int cmd);
 long sys_io_setup(unsigned nr_reqs, aio_context_t *ctx);
 long sys_io_destroy(aio_context_t ctx);
 long sys_io_getevents(aio_context_t ctx_id,
    long min_nr,
    long nr,
    struct io_event *events,
    struct timespec *timeout);
 long sys_io_submit(aio_context_t, long,
    struct iocb * *);
 long sys_io_cancel(aio_context_t ctx_id, struct iocb *iocb,
         struct io_event *result);
 long sys_sendfile(int out_fd, int in_fd,
        off_t *offset, size_t count);
 long sys_sendfile64(int out_fd, int in_fd,
          loff_t *offset, size_t count);
 long sys_readlink( char *path,
    char *buf, int bufsiz);
 long sys_creat( char *pathname, umode_t mode);
 long sys_open( char *filename,
    int flags, umode_t mode);
 long sys_close(unsigned int fd);
 long sys_access( char *filename, int mode);
 long sys_vhangup(void);
 long sys_chown( char *filename,
    uid_t user, gid_t group);
 long sys_lchown( char *filename,
    uid_t user, gid_t group);
 long sys_fchown(unsigned int fd, uid_t user, gid_t group);

 long sys_chown16( char *filename,
    old_uid_t user, old_gid_t group);
 long sys_lchown16( char *filename,
    old_uid_t user, old_gid_t group);
 long sys_fchown16(unsigned int fd, old_uid_t user, old_gid_t group);
 long sys_setregid16(old_gid_t rgid, old_gid_t egid);
 long sys_setgid16(old_gid_t gid);
 long sys_setreuid16(old_uid_t ruid, old_uid_t euid);
 long sys_setuid16(old_uid_t uid);
 long sys_setresuid16(old_uid_t ruid, old_uid_t euid, old_uid_t suid);
 long sys_getresuid16(old_uid_t *ruid,
    old_uid_t *euid, old_uid_t *suid);
 long sys_setresgid16(old_gid_t rgid, old_gid_t egid, old_gid_t sgid);
 long sys_getresgid16(old_gid_t *rgid,
    old_gid_t *egid, old_gid_t *sgid);
 long sys_setfsuid16(old_uid_t uid);
 long sys_setfsgid16(old_gid_t gid);
 long sys_getgroups16(int gidsetsize, old_gid_t *grouplist);
 long sys_setgroups16(int gidsetsize, old_gid_t *grouplist);
 long sys_getuid16(void);
 long sys_geteuid16(void);
 long sys_getgid16(void);
 long sys_getegid16(void);


 long sys_utime(char *filename,
    struct utimbuf *times);
 long sys_utimes(char *filename,
    struct timeval *utimes);
 long sys_lseek(unsigned int fd, off_t offset,
     unsigned int whence);
 long sys_llseek(unsigned int fd, unsigned long offset_high,
   unsigned long offset_low, loff_t *result,
   unsigned int whence);
 long sys_read(unsigned int fd, char *buf, size_t count);
 long sys_readahead(int fd, loff_t offset, size_t count);
 long sys_readv(unsigned long fd,
     struct iovec *vec,
     unsigned long vlen);
 long sys_write(unsigned int fd, char *buf,
     size_t count);
 long sys_writev(unsigned long fd,
      struct iovec *vec,
      unsigned long vlen);
 long sys_pread64(unsigned int fd, char *buf,
       size_t count, loff_t pos);
 long sys_pwrite64(unsigned int fd, char *buf,
        size_t count, loff_t pos);
 long sys_preadv(unsigned long fd, struct iovec *vec,
      unsigned long vlen, unsigned long pos_l, unsigned long pos_h);
 long sys_pwritev(unsigned long fd, struct iovec *vec,
       unsigned long vlen, unsigned long pos_l, unsigned long pos_h);
 long sys_getcwd(char *buf, unsigned long size);
 long sys_mkdir( char *pathname, umode_t mode);
 long sys_chdir( char *filename);
 long sys_fchdir(unsigned int fd);
 long sys_rmdir( char *pathname);
 long sys_lookup_dcookie(u64 cookie64, char *buf, size_t len);
 long sys_quotactl(unsigned int cmd, char *special,
    qid_t id, void *addr);
 long sys_getdents(unsigned int fd,
    struct linux_dirent *dirent,
    unsigned int count);
 long sys_getdents64(unsigned int fd,
    struct linux_dirent64 *dirent,
    unsigned int count);

 long sys_setsockopt(int fd, int level, int optname,
    char *optval, int optlen);
 long sys_getsockopt(int fd, int level, int optname,
    char *optval, int *optlen);
 long sys_bind(int, struct sockaddr *, int);
 long sys_connect(int, struct sockaddr *, int);
 long sys_accept(int, struct sockaddr *, int *);
 long sys_accept4(int, struct sockaddr *, int *, int);
 long sys_getsockname(int, struct sockaddr *, int *);
 long sys_getpeername(int, struct sockaddr *, int *);
 long sys_send(int, void *, size_t, unsigned);
 long sys_sendto(int, void *, size_t, unsigned,
    struct sockaddr *, int);
 long sys_sendmsg(int fd, struct msghdr *msg, unsigned flags);
 long sys_sendmmsg(int fd, struct mmsghdr *msg,
        unsigned int vlen, unsigned flags);
 long sys_recv(int, void *, size_t, unsigned);
 long sys_recvfrom(int, void *, size_t, unsigned,
    struct sockaddr *, int *);
 long sys_recvmsg(int fd, struct msghdr *msg, unsigned flags);
 long sys_recvmmsg(int fd, struct mmsghdr *msg,
        unsigned int vlen, unsigned flags,
        struct timespec *timeout);
 long sys_socket(int, int, int);
 long sys_socketpair(int, int, int, int *);
 long sys_socketcall(int call, unsigned long *args);
 long sys_listen(int, int);
 long sys_poll(struct pollfd *ufds, unsigned int nfds,
    int timeout);
 long sys_select(int n, fd_set *inp, fd_set *outp,
   fd_set *exp, struct timeval *tvp);
 long sys_old_select(struct sel_arg_struct *arg);
 long sys_epoll_create(int size);
 long sys_epoll_create1(int flags);
 long sys_epoll_ctl(int epfd, int op, int fd,
    struct epoll_event *event);
 long sys_epoll_wait(int epfd, struct epoll_event *events,
    int maxevents, int timeout);
 long sys_epoll_pwait(int epfd, struct epoll_event *events,
    int maxevents, int timeout,
    sigset_t *sigmask,
    size_t sigsetsize);
 long sys_gethostname(char *name, int len);
 long sys_sethostname(char *name, int len);
 long sys_setdomainname(char *name, int len);
 long sys_newuname(struct new_utsname *name);
 long sys_uname(struct old_utsname *);
 long sys_olduname(struct oldold_utsname *);

 long sys_getrlimit(unsigned int resource,
    struct rlimit *rlim);

 long sys_old_getrlimit(unsigned int resource, struct rlimit *rlim);

 long sys_setrlimit(unsigned int resource,
    struct rlimit *rlim);
 long sys_prlimit64(pid_t pid, unsigned int resource,
    struct rlimit64 *new_rlim,
    struct rlimit64 *old_rlim);
 long sys_getrusage(int who, struct rusage *ru);
 long sys_umask(int mask);

 long sys_msgget(key_t key, int msgflg);
 long sys_msgsnd(int msqid, struct msgbuf *msgp,
    size_t msgsz, int msgflg);
 long sys_msgrcv(int msqid, struct msgbuf *msgp,
    size_t msgsz, long msgtyp, int msgflg);
 long sys_msgctl(int msqid, int cmd, struct msqid_ds *buf);

 long sys_semget(key_t key, int nsems, int semflg);
 long sys_semop(int semid, struct sembuf *sops,
    unsigned nsops);
 long sys_semctl(int semid, int semnum, int cmd, unsigned long arg);
 long sys_semtimedop(int semid, struct sembuf *sops,
    unsigned nsops,
    struct timespec *timeout);
 long sys_shmat(int shmid, char *shmaddr, int shmflg);
 long sys_shmget(key_t key, size_t size, int flag);
 long sys_shmdt(char *shmaddr);
 long sys_shmctl(int shmid, int cmd, struct shmid_ds *buf);
 long sys_ipc(unsigned int call, int first, unsigned long second,
  unsigned long third, void *ptr, long fifth);

 long sys_mq_open( char *name, int oflag, umode_t mode, struct mq_attr *attr);
 long sys_mq_unlink( char *name);
 long sys_mq_timedsend(mqd_t mqdes, char *msg_ptr, size_t msg_len, unsigned int msg_prio, struct timespec *abs_timeout);
 long sys_mq_timedreceive(mqd_t mqdes, char *msg_ptr, size_t msg_len, unsigned int *msg_prio, struct timespec *abs_timeout);
 long sys_mq_notify(mqd_t mqdes, struct sigevent *notification);
 long sys_mq_getsetattr(mqd_t mqdes, struct mq_attr *mqstat, struct mq_attr *omqstat);

 long sys_pciconfig_iobase(long which, unsigned long bus, unsigned long devfn);
 long sys_pciconfig_read(unsigned long bus, unsigned long dfn,
    unsigned long off, unsigned long len,
    void *buf);
 long sys_pciconfig_write(unsigned long bus, unsigned long dfn,
    unsigned long off, unsigned long len,
    void *buf);

 long sys_prctl(int option, unsigned long arg2, unsigned long arg3,
   unsigned long arg4, unsigned long arg5);
 long sys_swapon( char *specialfile, int swap_flags);
 long sys_swapoff( char *specialfile);
 long sys_sysctl(struct __sysctl_args *args);
 long sys_sysinfo(struct sysinfo *info);
 long sys_sysfs(int option,
    unsigned long arg1, unsigned long arg2);
 long sys_syslog(int type, char *buf, int len);
 long sys_uselib( char *library);
 long sys_ni_syscall(void);
 long sys_ptrace(long request, long pid, unsigned long addr,
      unsigned long data);

 long sys_add_key( char *_type,
       char *_description,
       void *_payload,
       size_t plen,
       key_serial_t destringid);

 long sys_request_key( char *_type,
    char *_description,
    char *_callout_info,
    key_serial_t destringid);

 long sys_keyctl(int cmd, unsigned long arg2, unsigned long arg3,
      unsigned long arg4, unsigned long arg5);

 long sys_ioprio_set(int which, int who, int ioprio);
 long sys_ioprio_get(int which, int who);
 long sys_set_mempolicy(int mode, unsigned long *nmask,
    unsigned long maxnode);
 long sys_migrate_pages(pid_t pid, unsigned long maxnode,
    unsigned long *from,
    unsigned long *to);
 long sys_move_pages(pid_t pid, unsigned long nr_pages,
    void * *pages,
    int *nodes,
    int *status,
    int flags);
 long sys_mbind(unsigned long start, unsigned long len,
    unsigned long mode,
    unsigned long *nmask,
    unsigned long maxnode,
    unsigned flags);
 long sys_get_mempolicy(int *policy,
    unsigned long *nmask,
    unsigned long maxnode,
    unsigned long addr, unsigned long flags);

 long sys_inotify_init(void);
 long sys_inotify_init1(int flags);
 long sys_inotify_add_watch(int fd, char *path,
     u32 mask);
 long sys_inotify_rm_watch(int fd, __s32 wd);

 long sys_spu_run(int fd, __u32 *unpc,
     __u32 *ustatus);
 long sys_spu_create( char *name,
  unsigned int flags, umode_t mode, int fd);

 long sys_mknodat(int dfd, char * filename, umode_t mode,
       unsigned dev);
 long sys_mkdirat(int dfd, char * pathname, umode_t mode);
 long sys_unlinkat(int dfd, char * pathname, int flag);
 long sys_symlinkat( char * oldname,
         int newdfd, char * newname);
 long sys_linkat(int olddfd, char *oldname,
      int newdfd, char *newname, int flags);
 long sys_renameat(int olddfd, char * oldname,
        int newdfd, char * newname);
 long sys_futimesat(int dfd, char *filename,
         struct timeval *utimes);
 long sys_faccessat(int dfd, char *filename, int mode);
 long sys_fchmodat(int dfd, char * filename,
        umode_t mode);
 long sys_fchownat(int dfd, char *filename, uid_t user,
        gid_t group, int flag);
 long sys_openat(int dfd, char *filename, int flags,
      umode_t mode);
 long sys_newfstatat(int dfd, char *filename,
          struct stat *statbuf, int flag);
 long sys_fstatat64(int dfd, char *filename,
          struct stat64 *statbuf, int flag);
 long sys_readlinkat(int dfd, char *path, char *buf,
          int bufsiz);
 long sys_utimensat(int dfd, char *filename,
    struct timespec *utimes, int flags);
 long sys_unshare(unsigned long unshare_flags);

 long sys_splice(int fd_in, loff_t *off_in,
      int fd_out, loff_t *off_out,
      size_t len, unsigned int flags);

 long sys_vmsplice(int fd, struct iovec *iov,
        unsigned long nr_segs, unsigned int flags);

 long sys_tee(int fdin, int fdout, size_t len, unsigned int flags);

 long sys_sync_file_range(int fd, loff_t offset, loff_t nbytes,
     unsigned int flags);
 long sys_sync_file_range2(int fd, unsigned int flags,
         loff_t offset, loff_t nbytes);
 long sys_get_robust_list(int pid,
        struct robust_list_head * *head_ptr,
        size_t *len_ptr);
 long sys_set_robust_list(struct robust_list_head *head,
        size_t len);
 long sys_getcpu(unsigned *cpu, unsigned *node, struct getcpu_cache *cache);
 long sys_signalfd(int ufd, sigset_t *user_mask, size_t sizemask);
 long sys_signalfd4(int ufd, sigset_t *user_mask, size_t sizemask, int flags);
 long sys_timerfd_create(int clockid, int flags);
 long sys_timerfd_settime(int ufd, int flags,
        struct itimerspec *utmr,
        struct itimerspec *otmr);
 long sys_timerfd_gettime(int ufd, struct itimerspec *otmr);
 long sys_eventfd(unsigned int count);
 long sys_eventfd2(unsigned int count, int flags);
 long sys_fallocate(int fd, int mode, loff_t offset, loff_t len);
 long sys_old_readdir(unsigned int, struct old_linux_dirent *, unsigned int);
 long sys_pselect6(int, fd_set *, fd_set *,
        fd_set *, struct timespec *,
        void *);
 long sys_ppoll(struct pollfd *, unsigned int,
     struct timespec *, sigset_t *,
     size_t);
 long sys_fanotify_init(unsigned int flags, unsigned int event_f_flags);
 long sys_fanotify_mark(int fanotify_fd, unsigned int flags,
      u64 mask, int fd,
      char *pathname);
 long sys_syncfs(int fd);

 long sys_fork(void);
 long sys_vfork(void);
 long sys_clone(unsigned long, unsigned long, int *,
        int *, int);



 long sys_execve( char *filename,
  char * *argv,
  char * *envp);

 long sys_perf_event_open(
  struct perf_event_attr *attr_uptr,
  pid_t pid, int cpu, int group_fd, unsigned long flags);

 long sys_mmap_pgoff(unsigned long addr, unsigned long len,
   unsigned long prot, unsigned long flags,
   unsigned long fd, unsigned long pgoff);
 long sys_old_mmap(struct mmap_arg_struct *arg);
 long sys_name_to_handle_at(int dfd, char *name,
          struct file_handle *handle,
          int *mnt_id, int flag);
 long sys_open_by_handle_at(int mountdirfd,
          struct file_handle *handle,
          int flags);
 long sys_setns(int fd, int nstype);
 long sys_process_vm_readv(pid_t pid,
         struct iovec *lvec,
         unsigned long liovcnt,
         struct iovec *rvec,
         unsigned long riovcnt,
         unsigned long flags);
 long sys_process_vm_writev(pid_t pid,
          struct iovec *lvec,
          unsigned long liovcnt,
          struct iovec *rvec,
          unsigned long riovcnt,
          unsigned long flags);

 long sys_kcmp(pid_t pid1, pid_t pid2, int type,
    unsigned long idx1, unsigned long idx2);
 long sys_finit_module(int fd, char *uargs, int flags);

struct uid_gid_map {
 u32 nr_extents;
 struct uid_gid_extent {
  u32 first;
  u32 lower_first;
  u32 count;
 } extent[5];
};

struct user_namespace {
 struct uid_gid_map uid_map;
 struct uid_gid_map gid_map;
 struct uid_gid_map projid_map;
 atomic_t count;
 struct user_namespace *parent;
 int level;
 kuid_t owner;
 kgid_t group;
 unsigned int proc_inum;



 struct key *persistent_keyring_register;
 struct rw_semaphore persistent_keyring_register_sem;

};

extern struct user_namespace init_user_ns;



static inline struct user_namespace *get_user_ns(struct user_namespace *ns)
{
 if (ns)
  ;
 return ns;
}

extern int create_user_ns(struct cred *_new);
extern int unshare_userns(unsigned long unshare_flags, struct cred **new_cred);
extern void free_user_ns(struct user_namespace *ns);

static inline void put_user_ns(struct user_namespace *ns)
{
 if (ns && 1)
  free_user_ns(ns);
}

struct seq_operations;
extern struct seq_operations proc_uid_seq_operations;
extern struct seq_operations proc_gid_seq_operations;
extern struct seq_operations proc_projid_seq_operations;
extern ssize_t proc_uid_map_write(struct file *, char *, size_t, loff_t *);
extern ssize_t proc_gid_map_write(struct file *, char *, size_t, loff_t *);
extern ssize_t proc_projid_map_write(struct file *, char *, size_t, loff_t *);
bool has_ns_capability(struct task_struct *t,
         struct user_namespace *ns, int cap)
{
 int ret;

 ;
 ret = 0;
 ;

 return (ret == 0);
}
bool has_capability(struct task_struct *t, int cap)
{
 return has_ns_capability(t, &init_user_ns, cap);
}
bool has_ns_capability_noaudit(struct task_struct *t,
          struct user_namespace *ns, int cap)
{
 int ret;

 ;
 ret = 0;
 ;

 return (ret == 0);
}
bool has_capability_noaudit(struct task_struct *t, int cap)
{
 return has_ns_capability_noaudit(t, &init_user_ns, cap);
}
bool ns_capable(struct user_namespace *ns, int cap)
{
 if (__builtin_expect(!!(!((cap) >= 0 && (cap) <= 36)), 0)) {
  printf("\001" "2" "capable() called with invalid cap=%u\n", cap);
  ;
 }

 if (0 == 0) {
  get_current()->flags |= 0x00000100;
  return _true;
 }
 return _false;
}
;
bool file_ns_capable( struct file *file, struct user_namespace *ns, int cap)
{
 if ((!((cap) >= 0 && (cap) <= 36)))
  return _false;

 if (0 == 0)
  return _true;

 return _false;
}
;
bool capable(int cap)
{
 return ns_capable(&init_user_ns, cap);
}
;
bool inode_capable( struct inode *inode, int cap)
{
 struct user_namespace *ns = (({ (get_current()->cred)->user_ns; }));

 return ns_capable(ns, cap) && kuid_has_mapping(ns, inode->i_uid);
}
;
