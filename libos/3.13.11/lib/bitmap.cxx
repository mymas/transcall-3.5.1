






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








typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;













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
extern unsigned char _ctype[];
static inline unsigned char __tolower(unsigned char c)
{
 if ((((_ctype[(int)(unsigned char)(c)])&(0x01)) != 0))
  c -= 'A'-'a';
 return c;
}

static inline unsigned char __toupper(unsigned char c)
{
 if ((((_ctype[(int)(unsigned char)(c)])&(0x02)) != 0))
  c -= 'a'-'A';
 return c;
}
static inline char _tolower( char c)
{
 return c | 0x20;
}


static inline int isodigit( char c)
{
 return c >= '0' && c <= '7';
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
int __bitmap_empty( unsigned long *bitmap, int bits)
{
 int k, lim = bits/64;
 for (k = 0; k < lim; ++k)
  if (bitmap[k])
   return 0;

 if (bits % 64)
  if (bitmap[k] & ( ((bits) % 64) ? (1UL<<((bits) % 64))-1 : ~0UL ))
   return 0;

 return 1;
}
;

int __bitmap_full( unsigned long *bitmap, int bits)
{
 int k, lim = bits/64;
 for (k = 0; k < lim; ++k)
  if (~bitmap[k])
   return 0;

 if (bits % 64)
  if (~bitmap[k] & ( ((bits) % 64) ? (1UL<<((bits) % 64))-1 : ~0UL ))
   return 0;

 return 1;
}
;

int __bitmap_equal( unsigned long *bitmap1,
  unsigned long *bitmap2, int bits)
{
 int k, lim = bits/64;
 for (k = 0; k < lim; ++k)
  if (bitmap1[k] != bitmap2[k])
   return 0;

 if (bits % 64)
  if ((bitmap1[k] ^ bitmap2[k]) & ( ((bits) % 64) ? (1UL<<((bits) % 64))-1 : ~0UL ))
   return 0;

 return 1;
}
;

void __bitmap_complement(unsigned long *dst, unsigned long *src, int bits)
{
 int k, lim = bits/64;
 for (k = 0; k < lim; ++k)
  dst[k] = ~src[k];

 if (bits % 64)
  dst[k] = ~src[k] & ( ((bits) % 64) ? (1UL<<((bits) % 64))-1 : ~0UL );
}
;
void __bitmap_shift_right(unsigned long *dst,
   unsigned long *src, int shift, int bits)
{
 int k, lim = (((bits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))), left = bits % 64;
 int off = shift/64, rem = shift % 64;
 unsigned long mask = (1UL << left) - 1;
 for (k = 0; off + k < lim; ++k) {
  unsigned long upper, lower;





  if (!rem || off + k + 1 >= lim)
   upper = 0;
  else {
   upper = src[off + k + 1];
   if (off + k + 1 == lim - 1 && left)
    upper &= mask;
  }
  lower = src[off + k];
  if (left && off + k == lim - 1)
   lower &= mask;
  dst[k] = upper << (64 - rem) | lower >> rem;
  if (left && k == lim - 1)
   dst[k] &= mask;
 }
 if (off)
  memset(&dst[lim - off], 0, off*sizeof(unsigned long));
}
;
void __bitmap_shift_left(unsigned long *dst,
   unsigned long *src, int shift, int bits)
{
 int k, lim = (((bits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))), left = bits % 64;
 int off = shift/64, rem = shift % 64;
 for (k = lim - off - 1; k >= 0; --k) {
  unsigned long upper, lower;





  if (rem && k > 0)
   lower = src[k - 1];
  else
   lower = 0;
  upper = src[k];
  if (left && k == lim - 1)
   upper &= (1UL << left) - 1;
  dst[k + off] = lower >> (64 - rem) | upper << rem;
  if (left && k + off == lim - 1)
   dst[k + off] &= (1UL << left) - 1;
 }
 if (off)
  memset(dst, 0, off*sizeof(unsigned long));
}
;

int __bitmap_and(unsigned long *dst, unsigned long *bitmap1,
    unsigned long *bitmap2, int bits)
{
 int k;
 int nr = (((bits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));
 unsigned long result = 0;

 for (k = 0; k < nr; k++)
  result |= (dst[k] = bitmap1[k] & bitmap2[k]);
 return result != 0;
}
;

void __bitmap_or(unsigned long *dst, unsigned long *bitmap1,
    unsigned long *bitmap2, int bits)
{
 int k;
 int nr = (((bits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));

 for (k = 0; k < nr; k++)
  dst[k] = bitmap1[k] | bitmap2[k];
}
;

void __bitmap_xor(unsigned long *dst, unsigned long *bitmap1,
    unsigned long *bitmap2, int bits)
{
 int k;
 int nr = (((bits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));

 for (k = 0; k < nr; k++)
  dst[k] = bitmap1[k] ^ bitmap2[k];
}
;

int __bitmap_andnot(unsigned long *dst, unsigned long *bitmap1,
    unsigned long *bitmap2, int bits)
{
 int k;
 int nr = (((bits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));
 unsigned long result = 0;

 for (k = 0; k < nr; k++)
  result |= (dst[k] = bitmap1[k] & ~bitmap2[k]);
 return result != 0;
}
;

int __bitmap_intersects( unsigned long *bitmap1,
    unsigned long *bitmap2, int bits)
{
 int k, lim = bits/64;
 for (k = 0; k < lim; ++k)
  if (bitmap1[k] & bitmap2[k])
   return 1;

 if (bits % 64)
  if ((bitmap1[k] & bitmap2[k]) & ( ((bits) % 64) ? (1UL<<((bits) % 64))-1 : ~0UL ))
   return 1;
 return 0;
}
;

int __bitmap_subset( unsigned long *bitmap1,
    unsigned long *bitmap2, int bits)
{
 int k, lim = bits/64;
 for (k = 0; k < lim; ++k)
  if (bitmap1[k] & ~bitmap2[k])
   return 0;

 if (bits % 64)
  if ((bitmap1[k] & ~bitmap2[k]) & ( ((bits) % 64) ? (1UL<<((bits) % 64))-1 : ~0UL ))
   return 0;
 return 1;
}
;

int __bitmap_weight( unsigned long *bitmap, int bits)
{
 int k, w = 0, lim = bits/64;

 for (k = 0; k < lim; k++)
  w += hweight_long(bitmap[k]);

 if (bits % 64)
  w += hweight_long(bitmap[k] & ( ((bits) % 64) ? (1UL<<((bits) % 64))-1 : ~0UL ));

 return w;
}
;

void bitmap_set(unsigned long *map, int start, int nr)
{
 unsigned long *p = map + ((start) / 64);
 int size = start + nr;
 int bits_to_set = 64 - (start % 64);
 unsigned long mask_to_set = (~0UL << ((start) % 64));

 while (nr - bits_to_set >= 0) {
  *p |= mask_to_set;
  nr -= bits_to_set;
  bits_to_set = 64;
  mask_to_set = ~0UL;
  p++;
 }
 if (nr) {
  mask_to_set &= ( ((size) % 64) ? (1UL<<((size) % 64))-1 : ~0UL );
  *p |= mask_to_set;
 }
}
;

void bitmap_clear(unsigned long *map, int start, int nr)
{
 unsigned long *p = map + ((start) / 64);
 int size = start + nr;
 int bits_to_clear = 64 - (start % 64);
 unsigned long mask_to_clear = (~0UL << ((start) % 64));

 while (nr - bits_to_clear >= 0) {
  *p &= ~mask_to_clear;
  nr -= bits_to_clear;
  bits_to_clear = 64;
  mask_to_clear = ~0UL;
  p++;
 }
 if (nr) {
  mask_to_clear &= ( ((size) % 64) ? (1UL<<((size) % 64))-1 : ~0UL );
  *p &= ~mask_to_clear;
 }
}
;
unsigned long bitmap_find_next_zero_area(unsigned long *map,
      unsigned long size,
      unsigned long start,
      unsigned int nr,
      unsigned long align_mask)
{
 unsigned long index, end, i;
again:
 index = find_next_zero_bit(map, size, start);


 index = ((((index)) + ((align_mask))) & ~((align_mask)));

 end = index + nr;
 if (end > size)
  return end;
 i = find_next_bit(map, end, index);
 if (i < end) {
  start = i + 1;
  goto again;
 }
 return index;
}
;
int bitmap_scnprintf(char *buf, unsigned int buflen,
 unsigned long *maskp, int nmaskbits)
{
 int i, word, bit, len = 0;
 unsigned long val;
 char *sep = "";
 int chunksz;
 u32 chunkmask;

 chunksz = nmaskbits & (32 - 1);
 if (chunksz == 0)
  chunksz = 32;

 i = ((((nmaskbits)) + ((typeof((nmaskbits)))((32)) - 1)) & ~((typeof((nmaskbits)))((32)) - 1)) - 32;
 for (; i >= 0; i -= 32) {
  chunkmask = ((1ULL << chunksz) - 1);
  word = i / 64;
  bit = i % 64;
  val = (maskp[word] >> bit) & chunkmask;
  len += scnprintf(buf+len, buflen-len, "%s%0*lx", sep,
   (chunksz+3)/4, val);
  chunksz = 32;
  sep = ",";
 }
 return len;
}
;
int __bitmap_parse( char *buf, unsigned int buflen,
  int is_user, unsigned long *maskp,
  int nmaskbits)
{
 int c, old_c, totaldigits, ndigits, nchunks, nbits;
 u32 chunk;
 char *ubuf = ( char *)buf;

 bitmap_zero(maskp, nmaskbits);

 nchunks = nbits = totaldigits = c = 0;
 do {
  chunk = ndigits = 0;


  while (buflen) {
   old_c = c;
   if (is_user) {
    if (({ int __gu_err; unsigned long __gu_val; do { __gu_err = 0; (void)0; switch ((sizeof(*(ubuf++)))) { case 1: asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""b"" %2,%""b""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (__gu_err), "=q"(__gu_val) : "m" ((*(struct __large_struct *)(((ubuf++))))), "i" (-14), "0" (__gu_err)); break; case 2: asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""w"" %2,%""w""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (__gu_err), "=r"(__gu_val) : "m" ((*(struct __large_struct *)(((ubuf++))))), "i" (-14), "0" (__gu_err)); break; case 4: asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""l"" %2,%""k""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (__gu_err), "=r"(__gu_val) : "m" ((*(struct __large_struct *)(((ubuf++))))), "i" (-14), "0" (__gu_err)); break; case 8: asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %2,%""""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (__gu_err), "=r"(__gu_val) : "m" ((*(struct __large_struct *)(((ubuf++))))), "i" (-14), "0" (__gu_err)); break; default: (__gu_val) = __get_user_bad(); } } while (0); ((c)) = ( __typeof__(*((ubuf++))))__gu_val; __gu_err; }))
     return -14;
   }
   else
    c = *buf++;
   buflen--;
   if ((((_ctype[(int)(unsigned char)(c)])&(0x20)) != 0))
    continue;






   if (totaldigits && c && (((_ctype[(int)(unsigned char)(old_c)])&(0x20)) != 0))
    return -22;


   if (c == '\0' || c == ',')
    break;

   if (!(((_ctype[(int)(unsigned char)(c)])&(0x04|0x40)) != 0))
    return -22;






   if (chunk & ~((1UL << (32 - 4)) - 1))
    return -75;

   chunk = (chunk << 4) | hex_to_bin(c);
   ndigits++; totaldigits++;
  }
  if (ndigits == 0)
   return -22;
  if (nchunks == 0 && chunk == 0)
   continue;

  __bitmap_shift_left(maskp, maskp, 32, nmaskbits);
  *maskp |= chunk;
  nchunks++;
  nbits += (nchunks == 1) ? fls(chunk) : 32;
  if (nbits > nmaskbits)
   return -75;
 } while (buflen && c == ',');

 return 0;
}
;
int bitmap_parse_user( char *ubuf,
   unsigned int ulen, unsigned long *maskp,
   int nmaskbits)
{
 if (!(__builtin_expect(!!(({ unsigned long flag, roksum; (void)0; asm("add %3,%1 ; sbb %0,%0 ; cmp %1,%4 ; sbb $0,%0" : "=&r" (flag), "=r" (roksum) : "1" (ubuf), "g" ((long)(ulen)), "rm" ((current_thread_info()->addr_limit.seg))); flag; }) == 0), 1)))
  return -14;
 return __bitmap_parse(( char *)ubuf,
    ulen, 1, maskp, nmaskbits);

}
;
static inline int bscnl_emit(char *buf, int buflen, int rbot, int rtop, int len)
{
 if (len > 0)
  len += scnprintf(buf + len, buflen - len, ",");
 if (rbot == rtop)
  len += scnprintf(buf + len, buflen - len, "%d", rbot);
 else
  len += scnprintf(buf + len, buflen - len, "%d-%d", rbot, rtop);
 return len;
}
int bitmap_scnlistprintf(char *buf, unsigned int buflen,
 unsigned long *maskp, int nmaskbits)
{
 int len = 0;

 int cur, rbot, rtop;

 if (buflen == 0)
  return 0;
 buf[0] = 0;

 rbot = cur = find_first_bit(maskp, nmaskbits);
 while (cur < nmaskbits) {
  rtop = cur;
  cur = find_next_bit(maskp, nmaskbits, cur+1);
  if (cur >= nmaskbits || cur > rtop + 1) {
   len = bscnl_emit(buf, buflen, rbot, rtop, len);
   rbot = cur;
  }
 }
 return len;
}
;
static int __bitmap_parselist( char *buf, unsigned int buflen,
  int is_user, unsigned long *maskp,
  int nmaskbits)
{
 unsigned a, b;
 int c, old_c, totaldigits;
 char *ubuf = ( char *)buf;
 int exp_digit, in_range;

 totaldigits = c = 0;
 bitmap_zero(maskp, nmaskbits);
 do {
  exp_digit = 1;
  in_range = 0;
  a = b = 0;


  while (buflen) {
   old_c = c;
   if (is_user) {
    if (({ int __gu_err; unsigned long __gu_val; do { __gu_err = 0; (void)0; switch ((sizeof(*(ubuf++)))) { case 1: asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""b"" %2,%""b""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (__gu_err), "=q"(__gu_val) : "m" ((*(struct __large_struct *)(((ubuf++))))), "i" (-14), "0" (__gu_err)); break; case 2: asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""w"" %2,%""w""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (__gu_err), "=r"(__gu_val) : "m" ((*(struct __large_struct *)(((ubuf++))))), "i" (-14), "0" (__gu_err)); break; case 4: asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""l"" %2,%""k""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (__gu_err), "=r"(__gu_val) : "m" ((*(struct __large_struct *)(((ubuf++))))), "i" (-14), "0" (__gu_err)); break; case 8: asm ("661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xcb" "\n" "664""1" ":\n\t" ".popsection" "\n" "1:	mov""q"" %2,%""""1\n" "2: " "661:\n\t" ".byte " "0x66,0x66,0x90" "\n" "\n662:\n" ".pushsection .altinstructions,\"a\"\n" " .long 661b - .\n" " .long " "663""1""f - .\n" " .word " "(9*32+20)" "\n" " .byte " "662b-661b" "\n" " .byte " "664""1""f-""663""1""f" "\n" ".popsection\n" ".pushsection .discard,\"aw\",@progbits\n" " .byte 0xff + (" "664""1""f-""663""1""f" ") - (" "662b-661b" ")\n" ".popsection\n" ".pushsection .altinstr_replacement, \"ax\"\n" "663""1"":\n\t" ".byte 0x0f,0x01,0xca" "\n" "664""1" ":\n\t" ".popsection" "\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .pushsection \"__ex_table\",\"a\"\n" " .balign 8\n" " .long (" "1b" ") - .\n" " .long (" "3b" ") - .\n" " .popsection\n" : "=r" (__gu_err), "=r"(__gu_val) : "m" ((*(struct __large_struct *)(((ubuf++))))), "i" (-14), "0" (__gu_err)); break; default: (__gu_val) = __get_user_bad(); } } while (0); ((c)) = ( __typeof__(*((ubuf++))))__gu_val; __gu_err; }))
     return -14;
   } else
    c = *buf++;
   buflen--;
   if ((((_ctype[(int)(unsigned char)(c)])&(0x20)) != 0))
    continue;






   if (totaldigits && c && (((_ctype[(int)(unsigned char)(old_c)])&(0x20)) != 0))
    return -22;


   if (c == '\0' || c == ',')
    break;

   if (c == '-') {
    if (exp_digit || in_range)
     return -22;
    b = 0;
    in_range = 1;
    exp_digit = 1;
    continue;
   }

   if (!(((_ctype[(int)(unsigned char)(c)])&(0x04)) != 0))
    return -22;

   b = b * 10 + (c - '0');
   if (!in_range)
    a = b;
   exp_digit = 0;
   totaldigits++;
  }
  if (!(a <= b))
   return -22;
  if (b >= nmaskbits)
   return -34;
  while (a <= b) {
   set_bit(a, maskp);
   a++;
  }
 } while (buflen && c == ',');
 return 0;
}

int bitmap_parselist( char *bp, unsigned long *maskp, int nmaskbits)
{
 char *nl = strchr(bp, '\n');
 int len;

 if (nl)
  len = nl - bp;
 else
  len = strlen(bp);

 return __bitmap_parselist(bp, len, 0, maskp, nmaskbits);
}
;
int bitmap_parselist_user( char *ubuf,
   unsigned int ulen, unsigned long *maskp,
   int nmaskbits)
{
 if (!(__builtin_expect(!!(({ unsigned long flag, roksum; (void)0; asm("add %3,%1 ; sbb %0,%0 ; cmp %1,%4 ; sbb $0,%0" : "=&r" (flag), "=r" (roksum) : "1" (ubuf), "g" ((long)(ulen)), "rm" ((current_thread_info()->addr_limit.seg))); flag; }) == 0), 1)))
  return -14;
 return __bitmap_parselist(( char *)ubuf,
     ulen, 1, maskp, nmaskbits);
}
;
static int bitmap_pos_to_ord( unsigned long *buf, int pos, int bits)
{
 int i, ord;

 if (pos < 0 || pos >= bits || !(__builtin_constant_p((pos)) ? constant_test_bit((pos), (buf)) : variable_test_bit((pos), (buf))))
  return -1;

 i = find_first_bit(buf, bits);
 ord = 0;
 while (i < pos) {
  i = find_next_bit(buf, bits, i + 1);
       ord++;
 }
 (i != pos);

 return ord;
}
int bitmap_ord_to_pos( unsigned long *buf, int ord, int bits)
{
 int pos = 0;

 if (ord >= 0 && ord < bits) {
  int i;

  for (i = find_first_bit(buf, bits);
       i < bits && ord > 0;
       i = find_next_bit(buf, bits, i + 1))
        ord--;
  if (i < bits && ord == 0)
   pos = i;
 }

 return pos;
}
void bitmap_remap(unsigned long *dst, unsigned long *src,
  unsigned long *old, unsigned long *_new,
  int bits)
{
 int oldbit, w;

 if (dst == src)
  return;
 bitmap_zero(dst, bits);

 w = bitmap_weight(_new, bits);
 for ((oldbit) = find_first_bit((src), (bits)); (oldbit) < (bits); (oldbit) = find_next_bit((src), (bits), (oldbit) + 1)) {
       int n = bitmap_pos_to_ord(old, oldbit, bits);

  if (n < 0 || w == 0)
   set_bit(oldbit, dst);
  else
   set_bit(bitmap_ord_to_pos(_new, n % w, bits), dst);
 }
}
;
int bitmap_bitremap(int oldbit, unsigned long *old,
    unsigned long *_new, int bits)
{
 int w = bitmap_weight(_new, bits);
 int n = bitmap_pos_to_ord(old, oldbit, bits);
 if (n < 0 || w == 0)
  return oldbit;
 else
  return bitmap_ord_to_pos(_new, n % w, bits);
}
;
void bitmap_onto(unsigned long *dst, unsigned long *orig,
   unsigned long *relmap, int bits)
{
 int n, m;

 if (dst == orig)
  return;
 bitmap_zero(dst, bits);
 m = 0;
 for ((n) = find_first_bit((relmap), (bits)); (n) < (bits); (n) = find_next_bit((relmap), (bits), (n) + 1)) {

  if ((__builtin_constant_p((m)) ? constant_test_bit((m), (orig)) : variable_test_bit((m), (orig))))
   set_bit(n, dst);
  m++;
 }
}
;
void bitmap_fold(unsigned long *dst, unsigned long *orig,
   int sz, int bits)
{
 int oldbit;

 if (dst == orig)
  return;
 bitmap_zero(dst, bits);

 for ((oldbit) = find_first_bit((orig), (bits)); (oldbit) < (bits); (oldbit) = find_next_bit((orig), (bits), (oldbit) + 1))
  set_bit(oldbit % sz, dst);
}
;
enum {
 REG_OP_ISFREE,
 REG_OP_ALLOC,
 REG_OP_RELEASE,
};

static int __reg_op(unsigned long *bitmap, int pos, int order, int reg_op)
{
 int nbits_reg;
 int index;
 int offset;
 int nlongs_reg;
 int nbitsinlong;
 unsigned long mask;
 int i;
 int ret = 0;





 nbits_reg = 1 << order;
 index = pos / 64;
 offset = pos - (index * 64);
 nlongs_reg = (((nbits_reg) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));
 nbitsinlong = ({ typeof(nbits_reg) _min1 = (nbits_reg); typeof(64) _min2 = (64); (void) (&_min1 == &_min2); _min1 < _min2 ? _min1 : _min2; });





 mask = (1UL << (nbitsinlong - 1));
 mask += mask - 1;
 mask <<= offset;

 switch (reg_op) {
 case REG_OP_ISFREE:
  for (i = 0; i < nlongs_reg; i++) {
   if (bitmap[index + i] & mask)
    goto done;
  }
  ret = 1;
  break;

 case REG_OP_ALLOC:
  for (i = 0; i < nlongs_reg; i++)
   bitmap[index + i] |= mask;
  break;

 case REG_OP_RELEASE:
  for (i = 0; i < nlongs_reg; i++)
   bitmap[index + i] &= ~mask;
  break;
 }
done:
 return ret;
}
int bitmap_find_free_region(unsigned long *bitmap, int bits, int order)
{
 int pos, end;

 for (pos = 0 ; (end = pos + (1 << order)) <= bits; pos = end) {
  if (!__reg_op(bitmap, pos, order, REG_OP_ISFREE))
   continue;
  __reg_op(bitmap, pos, order, REG_OP_ALLOC);
  return pos;
 }
 return -12;
}
;
void bitmap_release_region(unsigned long *bitmap, int pos, int order)
{
 __reg_op(bitmap, pos, order, REG_OP_RELEASE);
}
;
int bitmap_allocate_region(unsigned long *bitmap, int pos, int order)
{
 if (!__reg_op(bitmap, pos, order, REG_OP_ISFREE))
  return -16;
 __reg_op(bitmap, pos, order, REG_OP_ALLOC);
 return 0;
}
;
void bitmap_copy_le(void *dst, unsigned long *src, int nbits)
{
 unsigned long *d = dst;
 int i;

 for (i = 0; i < nbits/64; i++) {
  if (64 == 64)
   d[i] = (( __le64)(__u64)(src[i]));
  else
   d[i] = (( __le32)(__u32)(src[i]));
 }
}
;
