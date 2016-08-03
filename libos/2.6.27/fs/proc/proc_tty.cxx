



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
void *inode_op_follow_link(struct inode_operations *op,
                           struct dentry *dentry, struct nameidata *nd);
int super_op_statfs(struct super_operations *op,
                    struct dentry *dentry, struct kstatfs *buf);


struct vfsmount *lookup_vfsmount(struct vfsmount *mnt, struct dentry *dentry);
int get_stat(struct vfsmount *mnt, struct dentry *dentry,
             struct kstat *stat);
int get_statfs(struct vfsmount *mnt, struct dentry *dentry,
               struct statfs *buf);




int uptime_proc_show(struct seq_file *m, void *v);
int meminfo_proc_show(struct seq_file *m, void *v);
int filesystems_proc_show(struct seq_file *m, void *v);
int version_proc_show(struct seq_file *m, void *v);

























enum {
 _false = 0,
 _true = 1
};
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;





typedef unsigned long __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef unsigned long __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef unsigned long __kernel_size_t;
typedef long __kernel_ssize_t;
typedef long __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef __kernel_uid_t __kernel_uid32_t;
typedef __kernel_gid_t __kernel_gid32_t;

typedef unsigned long __kernel_old_dev_t;




static inline void __FD_SET(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] |= (1UL<<_rem);
}


static inline void __FD_CLR(unsigned long fd, __kernel_fd_set *fdsetp)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 fdsetp->fds_bits[_tmp] &= ~(1UL<<_rem);
}


static inline int __FD_ISSET(unsigned long fd, __const__ __kernel_fd_set *p)
{
 unsigned long _tmp = fd / (8 * sizeof(unsigned long));
 unsigned long _rem = fd % (8 * sizeof(unsigned long));
 return (p->fds_bits[_tmp] & (1UL<<_rem)) != 0;
}






static inline void __FD_ZERO(__kernel_fd_set *p)
{
 unsigned long *tmp = p->fds_bits;
 int i;

 if (__builtin_constant_p((1024/(8 * sizeof(unsigned long))))) {
  switch ((1024/(8 * sizeof(unsigned long)))) {
  case 32:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
   tmp[ 8] = 0; tmp[ 9] = 0; tmp[10] = 0; tmp[11] = 0;
   tmp[12] = 0; tmp[13] = 0; tmp[14] = 0; tmp[15] = 0;
   tmp[16] = 0; tmp[17] = 0; tmp[18] = 0; tmp[19] = 0;
   tmp[20] = 0; tmp[21] = 0; tmp[22] = 0; tmp[23] = 0;
   tmp[24] = 0; tmp[25] = 0; tmp[26] = 0; tmp[27] = 0;
   tmp[28] = 0; tmp[29] = 0; tmp[30] = 0; tmp[31] = 0;
   return;
  case 16:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
   tmp[ 8] = 0; tmp[ 9] = 0; tmp[10] = 0; tmp[11] = 0;
   tmp[12] = 0; tmp[13] = 0; tmp[14] = 0; tmp[15] = 0;
   return;
  case 8:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   tmp[ 4] = 0; tmp[ 5] = 0; tmp[ 6] = 0; tmp[ 7] = 0;
   return;
  case 4:
   tmp[ 0] = 0; tmp[ 1] = 0; tmp[ 2] = 0; tmp[ 3] = 0;
   return;
  }
 }
 i = (1024/(8 * sizeof(unsigned long)));
 while (i) {
  i--;
  *tmp = 0;
  tmp++;
 }
}



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



typedef unsigned short umode_t;
typedef u64 dma64_addr_t;


typedef u64 dma_addr_t;



typedef __u32 __kernel_dev_t;

typedef __kernel_fd_set fd_set;
typedef __kernel_dev_t dev_t;
typedef __kernel_ino_t ino_t;
typedef __kernel_mode_t mode_t;
typedef __kernel_nlink_t nlink_t;
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
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;

typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;


typedef unsigned gfp_t;


typedef u64 resource_size_t;




struct ustat {
 __kernel_daddr_t f_tfree;
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};

struct timespec;
struct compat_timespec;




struct restart_block {
 long (*fn)(struct restart_block *);
 union {
  struct {
   unsigned long arg0, arg1, arg2, arg3;
  };

  struct {
   u32 *uaddr;
   u32 val;
   u32 flags;
   u32 bitset;
   u64 time;
  } futex;

  struct {
   clockid_t index;
   struct timespec *rmtp;

   struct compat_timespec *compat_rmtp;

   u64 expires;
  } nanosleep;
 };
};

extern long do_no_restart_syscall(struct restart_block *parm);













extern char * x86_cap_flags[8*32];
extern char * x86_power_flags[32];

struct alt_instr {
 u8 *instr;
 u8 *replacement;
 u8 cpuid;
 u8 instrlen;
 u8 replacementlen;
 u8 pad1;

 u32 pad2;

};

extern void alternative_instructions(void);
extern void apply_alternatives(struct alt_instr *start, struct alt_instr *end);

struct module;


extern void alternatives_smp_module_add(struct module *mod, char *name,
     void *locks, void *locks_end,
     void *text, void *text_end);
extern void alternatives_smp_module_del(struct module *mod);
extern void alternatives_smp_switch(int smp);
 unsigned char * *find_nop_table(void);
struct paravirt_patch_site;

void apply_paravirt(struct paravirt_patch_site *start,
      struct paravirt_patch_site *end);
extern void add_nops(void *insns, unsigned int len);
extern void *text_poke(void *addr, void *opcode, size_t len);
extern void *text_poke_early(void *addr, void *opcode, size_t len);
static inline void set_bit(unsigned int nr, unsigned long *addr)
{
 if ((__builtin_constant_p(nr))) {
  asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "orb %1,%0"
   : "+m" (*( long *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)(1 << ((nr) & 7)))
   : "memory");
 } else {
  asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "bts %1,%0"
   : "+m" (*( long *) (addr)) : "Ir" (nr) : "memory");
 }
}
static inline void __set_bit(int nr, unsigned long *addr)
{
 asm ("bts %1,%0" : "+m" (*( long *) (addr)) : "Ir" (nr) : "memory");
}
static inline void clear_bit(int nr, unsigned long *addr)
{
 if ((__builtin_constant_p(nr))) {
  asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "andb %1,%0"
   : "+m" (*( long *) ((void *)(addr) + ((nr)>>3)))
   : "iq" ((u8)~(1 << ((nr) & 7))));
 } else {
  asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "btr %1,%0"
   : "+m" (*( long *) (addr))
   : "Ir" (nr));
 }
}
static inline void clear_bit_unlock(unsigned nr, unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");
 clear_bit(nr, addr);
}

static inline void __clear_bit(int nr, unsigned long *addr)
{
 asm ("btr %1,%0" : "+m" (*( long *) (addr)) : "Ir" (nr));
}
static inline void __clear_bit_unlock(unsigned nr, unsigned long *addr)
{
 __asm__ __volatile__("": : :"memory");
 __clear_bit(nr, addr);
}
static inline void __change_bit(int nr, unsigned long *addr)
{
 asm ("btc %1,%0" : "+m" (*( long *) (addr)) : "Ir" (nr));
}
static inline void change_bit(int nr, unsigned long *addr)
{
 asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "btc %1,%0" : "+m" (*( long *) (addr)) : "Ir" (nr));
}
static inline int test_and_set_bit(int nr, unsigned long *addr)
{
 int oldbit;

 asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "bts %2,%1\n\t"
       "sbb %0,%0" : "=r" (oldbit), "+m" (*( long *) (addr)) : "Ir" (nr) : "memory");

 return oldbit;
}
static inline int test_and_set_bit_lock(int nr, unsigned long *addr)
{
 return test_and_set_bit(nr, addr);
}
static inline int __test_and_set_bit(int nr, unsigned long *addr)
{
 int oldbit;

 asm("bts %2,%1\n\t"
     "sbb %0,%0"
     : "=r" (oldbit), "+m" (*( long *) (addr))
     : "Ir" (nr));
 return oldbit;
}
static inline int test_and_clear_bit(int nr, unsigned long *addr)
{
 int oldbit;

 asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "btr %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*( long *) (addr)) : "Ir" (nr) : "memory");

 return oldbit;
}
static inline int __test_and_clear_bit(int nr, unsigned long *addr)
{
 int oldbit;

 asm ("btr %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*( long *) (addr))
       : "Ir" (nr));
 return oldbit;
}


static inline int __test_and_change_bit(int nr, unsigned long *addr)
{
 int oldbit;

 asm ("btc %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*( long *) (addr))
       : "Ir" (nr) : "memory");

 return oldbit;
}
static inline int test_and_change_bit(int nr, unsigned long *addr)
{
 int oldbit;

 asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "btc %2,%1\n\t"
       "sbb %0,%0"
       : "=r" (oldbit), "+m" (*( long *) (addr)) : "Ir" (nr) : "memory");

 return oldbit;
}

static inline int constant_test_bit(int nr, unsigned long *addr)
{
 return ((1UL << (nr % 64)) &
  (((unsigned long *)addr)[nr / 64])) != 0;
}

static inline int variable_test_bit(int nr, unsigned long *addr)
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
 asm("bsf %1,%0"
  : "=r" (word)
  : "rm" (word));
 return word;
}







static inline unsigned long ffz(unsigned long word)
{
 asm("bsf %1,%0"
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

 asm("bsfl %1,%0\n\t"
     "cmovzl %2,%0"
     : "=r" (r) : "rm" (x), "r" (-1));






 return r + 1;
}
static inline int fls(int x)
{
 int r;

 asm("bsrl %1,%0\n\t"
     "cmovzl %2,%0"
     : "=&r" (r) : "rm" (x), "rm" (-1));






 return r + 1;
}




static inline void set_bit_string(unsigned long *bitmap,
  unsigned long i, int len)
{
 unsigned long end = i + len;
 while (i < end) {
  __set_bit(i, bitmap);
  i++;
 }
}



static inline int sched_find_first_bit( unsigned long *b)
{

 if (b[0])
  return __ffs(b[0]);
 return __ffs(b[1]) + 64;
}








extern unsigned int hweight32(unsigned int w);
extern unsigned int hweight16(unsigned int w);
extern unsigned int hweight8(unsigned int w);
extern unsigned long hweight64(__u64 w);



static inline int fls64(__u64 x)
{
 if (x == 0)
  return 0;
 return __fls(x) + 1;
}










static inline __attribute__((__const__)) __u64 ___arch__swab64(__u64 x)
{
 asm("bswapq %0"
     : "=r" (x)
     : "0" (x));
 return x;
}

static inline __attribute__((__const__)) __u32 ___arch__swab32(__u32 x)
{
 asm("bswapl %0"
     : "=r" (x)
     : "0" (x));
 return x;
}
static __inline__ __attribute__((__const__)) __u16 ___swab16(__u16 x)
{
 return x<<8 | x>>8;
}
static __inline__ __attribute__((__const__)) __u32 ___swab32(__u32 x)
{
 return x<<24 | x>>24 |
  (x & (__u32)0x0000ff00UL)<<8 |
  (x & (__u32)0x00ff0000UL)>>8;
}
static __inline__ __attribute__((__const__)) __u64 ___swab64(__u64 x)
{
 return x<<56 | x>>56 |
  (x & (__u64)0x000000000000ff00ULL)<<40 |
  (x & (__u64)0x0000000000ff0000ULL)<<24 |
  (x & (__u64)0x00000000ff000000ULL)<< 8 |
         (x & (__u64)0x000000ff00000000ULL)>> 8 |
  (x & (__u64)0x0000ff0000000000ULL)>>24 |
  (x & (__u64)0x00ff000000000000ULL)>>40;
}
static __inline__ __attribute__((__const__)) __u16 __fswab16(__u16 x)
{
 return ___swab16(x);
}
static __inline__ __u16 __swab16p( __u16 *x)
{
 return ___swab16(*(x));
}
static __inline__ void __swab16s(__u16 *addr)
{
 ((void)(*(addr) = ___swab16(*(addr))));
}

static __inline__ __attribute__((__const__)) __u32 __fswab32(__u32 x)
{
 return ___arch__swab32(x);
}
static __inline__ __u32 __swab32p( __u32 *x)
{
 return ___arch__swab32(*(x));
}
static __inline__ void __swab32s(__u32 *addr)
{
 ((void)(*(addr) = ___arch__swab32(*(addr))));
}


static __inline__ __attribute__((__const__)) __u64 __fswab64(__u64 x)
{





 return ___arch__swab64(x);

}
static __inline__ __u64 __swab64p( __u64 *x)
{
 return ___arch__swab64(*(x));
}
static __inline__ void __swab64s(__u64 *addr)
{
 ((void)(*(addr) = ___arch__swab64(*(addr))));
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
 *var = (( __be16)__fswab16((__fswab16(( __u16)(__be16)(*var)) + val)));
}

static inline void be32_add_cpu(__be32 *var, u32 val)
{
 *var = (( __be32)__fswab32((__fswab32(( __u32)(__be32)(*var)) + val)));
}

static inline void be64_add_cpu(__be64 *var, u64 val)
{
 *var = (( __be64)__fswab64((__fswab64(( __u64)(__be64)(*var)) + val)));
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
 return sizeof(w) == 4 ? hweight32(w) : hweight64(w);
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

static inline unsigned fls_long(unsigned long l)
{
 if (sizeof(l) == 4)
  return fls(l);
 return fls64(l);
}
extern unsigned long find_first_bit( unsigned long *addr,
        unsigned long size);
extern unsigned long find_first_zero_bit( unsigned long *addr,
      unsigned long size);
extern unsigned long find_next_bit( unsigned long *addr,
       unsigned long size, unsigned long offset);
extern unsigned long find_next_zero_bit( unsigned long *addr,
     unsigned long size,
     unsigned long offset);



void clear_page(void *page);
void copy_page(void *to, void *from);


extern unsigned long max_pfn;
extern unsigned long phys_base;

extern unsigned long __phys_addr(unsigned long);





typedef unsigned long pteval_t;
typedef unsigned long pmdval_t;
typedef unsigned long pudval_t;
typedef unsigned long pgdval_t;
typedef unsigned long pgprotval_t;
typedef unsigned long phys_addr_t;

typedef struct page *pgtable_t;

typedef struct { pteval_t pte; } pte_t;



extern unsigned long init_memory_mapping(unsigned long start,
      unsigned long end);

extern void initmem_init(unsigned long start_pfn, unsigned long end_pfn);

extern void init_extra_mapping_uc(unsigned long phys, unsigned long size);
extern void init_extra_mapping_wb(unsigned long phys, unsigned long size);
typedef struct { pgdval_t pgd; } pgd_t;
typedef struct { pgprotval_t pgprot; } pgprot_t;

extern int page_is_ram(unsigned long pagenr);
extern int devmem_is_allowed(unsigned long pagenr);
extern void map_devmem(unsigned long pfn, unsigned long size,
         pgprot_t vma_prot);
extern void unmap_devmem(unsigned long pfn, unsigned long size,
    pgprot_t vma_prot);

extern unsigned long max_low_pfn_mapped;
extern unsigned long max_pfn_mapped;

struct page;

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





static inline pgd_t native_make_pgd(pgdval_t val)
{

        return ({ pgd_t var; var.pgd = val; var; });
}

static inline pgdval_t native_pgd_val(pgd_t pgd)
{
 return pgd.pgd;
}



typedef struct { pudval_t pud; } pud_t;

static inline pud_t native_make_pud(pmdval_t val)
{

        return ({ pud_t var; var.pud = val; var; });
}

static inline pudval_t native_pud_val(pud_t pud)
{
 return pud.pud;
}
typedef struct { pmdval_t pmd; } pmd_t;

static inline pmd_t native_make_pmd(pmdval_t val)
{

        return ({ pmd_t var; var.pmd = val; var; });
}

static inline pmdval_t native_pmd_val(pmd_t pmd)
{
 return pmd.pmd;
}
static inline pte_t native_make_pte(pteval_t val)
{

        return ({ pte_t var; var.pte = val; var; });
}

static inline pteval_t native_pte_val(pte_t pte)
{
 return pte.pte;
}

static inline pteval_t native_pte_flags(pte_t pte)
{
 return native_pte_val(pte) & (~((pteval_t)(((signed long)(~(((1UL) << 12)-1))) & ((phys_addr_t)(1ULL << 46) - 1))));
}











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







typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;








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









struct ratelimit_state {
 int interval;
 int burst;
 int printed;
 int missed;
 unsigned long begin;
};




extern int __ratelimit(struct ratelimit_state *rs);

static inline int ratelimit(void)
{
 static struct ratelimit_state rs = {(5 * 1000), 10,}
                             ;
 return __ratelimit(&rs);
}


extern char linux_banner[];
extern char linux_proc_banner[];
extern int console_printk[];






struct completion;
struct pt_regs;
struct user;


extern int _cond_resched(void);
  void __might_sleep(char *file, int line);
extern struct atomic_notifier_head panic_notifier_list;
extern long (*panic_blink)(long time);
 void panic( char * fmt, ...)
 __attribute__ ((noreturn, format (printf, 1, 2))) __attribute__((__cold__));
extern void oops_enter(void);
extern void oops_exit(void);
extern int oops_may_print(void);
 void do_exit(long error_code)
 __attribute__((noreturn));
 void complete_and_exit(struct completion *, long)
 __attribute__((noreturn));
extern unsigned long simple_strtoul( char *,char **,unsigned int);
extern long simple_strtol( char *,char **,unsigned int);
extern unsigned long long simple_strtoull( char *,char **,unsigned int);
extern long long simple_strtoll( char *,char **,unsigned int);
extern int strict_strtoul( char *, unsigned int, unsigned long *);
extern int strict_strtol( char *, unsigned int, long *);
extern int strict_strtoull( char *, unsigned int, unsigned long long *);
extern int strict_strtoll( char *, unsigned int, long long *);
extern int sprintf(char * buf, char * fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern int vsprintf(char *buf, char *, va_list)
 __attribute__ ((format (printf, 2, 0)));
extern int snprintf(char * buf, size_t size, char * fmt, ...)
 __attribute__ ((format (printf, 3, 4)));
extern int vsnprintf(char *buf, size_t size, char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0)));
extern int scnprintf(char * buf, size_t size, char * fmt, ...)
 __attribute__ ((format (printf, 3, 4)));
extern int vscnprintf(char *buf, size_t size, char *fmt, va_list args)
 __attribute__ ((format (printf, 3, 0)));
extern char *kasprintf(gfp_t gfp, char *fmt, ...)
 __attribute__ ((format (printf, 2, 3)));
extern char *kvasprintf(gfp_t gfp, char *fmt, va_list args);

extern int sscanf( char *, char *, ...)
 __attribute__ ((format (scanf, 2, 3)));
extern int vsscanf( char *, char *, va_list)
 __attribute__ ((format (scanf, 2, 0)));

extern int get_option(char **str, int *pint);
extern char *get_options( char *str, int nints, int *ints);
extern unsigned long long memparse(char *ptr, char **retptr);

extern int core_kernel_text(unsigned long addr);
extern int __kernel_text_address(unsigned long addr);
extern int kernel_text_address(unsigned long addr);
struct pid;
extern struct pid *session_of_pgrp(struct pid *pgrp);


 int vprintk( char *fmt, va_list args)
 __attribute__ ((format (printf, 1, 0)));
 int printk( char * fmt, ...)
 __attribute__ ((format (printf, 1, 2))) __attribute__((__cold__));

extern struct ratelimit_state printk_ratelimit_state;
extern int printk_ratelimit(void);
extern bool printk_timed_ratelimit(unsigned long *caller_jiffies,
       unsigned int interval_msec);
extern void __attribute__((format(printf, 1, 2)))
 early_printk( char *fmt, ...);

unsigned long int_sqrt(unsigned long);

static inline void console_silent(void)
{
 (console_printk[0]) = 0;
}

static inline void console_verbose(void)
{
 if ((console_printk[0]))
  (console_printk[0]) = 15;
}

extern void bust_spinlocks(int yes);
extern void wake_up_klogd(void);
extern int oops_in_progress;
extern int panic_timeout;
extern int panic_on_oops;
extern int panic_on_unrecovered_nmi;
extern int tainted;
extern char *print_tainted(void);
extern void add_taint(unsigned);
extern int root_mountflags;


extern enum system_states {
 SYSTEM_BOOTING,
 SYSTEM_RUNNING,
 SYSTEM_HALT,
 SYSTEM_POWER_OFF,
 SYSTEM_RESTART,
 SYSTEM_SUSPEND_DISK,
} system_state;
extern void dump_stack(void) __attribute__((__cold__));

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

extern char hex_asc[];



static inline char *pack_hex_byte(char *buf, u8 byte)
{
 *buf++ = hex_asc[((byte) & 0xf0) >> 4];
 *buf++ = hex_asc[((byte) & 0x0f)];
 return buf;
}
struct sysinfo;
extern int do_sysinfo(struct sysinfo *info);




struct sysinfo {
 long uptime;
 unsigned long loads[3];
 unsigned long totalram;
 unsigned long freeram;
 unsigned long sharedram;
 unsigned long bufferram;
 unsigned long totalswap;
 unsigned long freeswap;
 unsigned short procs;
 unsigned short pad;
 unsigned long totalhigh;
 unsigned long freehigh;
 unsigned int mem_unit;
 char _f[20-2*sizeof(long)-sizeof(int)];
};







extern char *strndup_user( char *, long);







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

extern char * strstrip(char *);

extern char * strstr( char *, char *);


extern __kernel_size_t strlen( char *);


extern __kernel_size_t strnlen( char *,__kernel_size_t);


extern char * strpbrk( char *, char *);


extern char * strsep(char **, char *);


extern __kernel_size_t strspn( char *, char *);


extern __kernel_size_t strcspn( char *, char *);
extern void * memscan(void *,int,__kernel_size_t);


extern int memcmp( void *, void *,__kernel_size_t);


extern void * memchr( void *,int,__kernel_size_t);


extern char *kstrdup( char *s, gfp_t gfp);
extern char *kstrndup( char *s, size_t len, gfp_t gfp);
extern void *kmemdup( void *src, size_t len, gfp_t gfp);

extern char **argv_split(gfp_t gfp, char *str, int *argcp);
extern void argv_free(char **argv);

extern bool sysfs_streq( char *s1, char *s2);

extern ssize_t memory_read_from_buffer(void *to, size_t count, loff_t *ppos,
   void *from, size_t available);
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
extern void __bitmap_and(unsigned long *dst, unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern void __bitmap_or(unsigned long *dst, unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern void __bitmap_xor(unsigned long *dst, unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern void __bitmap_andnot(unsigned long *dst, unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern int __bitmap_intersects( unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern int __bitmap_subset( unsigned long *bitmap1,
   unsigned long *bitmap2, int bits);
extern int __bitmap_weight( unsigned long *bitmap, int bits);

extern int bitmap_scnprintf(char *buf, unsigned int len,
   unsigned long *src, int nbits);
extern int bitmap_scnprintf_len(unsigned int nr_bits);
extern int __bitmap_parse( char *buf, unsigned int buflen, int is_user,
   unsigned long *dst, int nbits);
extern int bitmap_parse_user( char *ubuf, unsigned int ulen,
   unsigned long *dst, int nbits);
extern int bitmap_scnlistprintf(char *buf, unsigned int len,
   unsigned long *src, int nbits);
extern int bitmap_parselist( char *buf, unsigned long *maskp,
   int nmaskbits);
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







static inline void bitmap_zero(unsigned long *dst, int nbits)
{
 if (nbits <= 64)
  *dst = 0UL;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memset(dst, 0, len);
 }
}

static inline void bitmap_fill(unsigned long *dst, int nbits)
{
 size_t nlongs = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)));
 if (nlongs > 1) {
  int len = (nlongs - 1) * sizeof(unsigned long);
  memset(dst, 0xff, len);
 }
 dst[nlongs - 1] = ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
}

static inline void bitmap_copy(unsigned long *dst, unsigned long *src,
   int nbits)
{
 if (nbits <= 64)
  *dst = *src;
 else {
  int len = (((nbits) + (8 * sizeof(long)) - 1) / (8 * sizeof(long))) * sizeof(unsigned long);
  memcpy(dst, src, len);
 }
}

static inline void bitmap_and(unsigned long *dst, unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 & *src2;
 else
  __bitmap_and(dst, src1, src2, nbits);
}

static inline void bitmap_or(unsigned long *dst, unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 | *src2;
 else
  __bitmap_or(dst, src1, src2, nbits);
}

static inline void bitmap_xor(unsigned long *dst, unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 ^ *src2;
 else
  __bitmap_xor(dst, src1, src2, nbits);
}

static inline void bitmap_andnot(unsigned long *dst, unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  *dst = *src1 & ~(*src2);
 else
  __bitmap_andnot(dst, src1, src2, nbits);
}

static inline void bitmap_complement(unsigned long *dst, unsigned long *src,
   int nbits)
{
 if (nbits <= 64)
  *dst = ~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_complement(dst, src, nbits);
}

static inline int bitmap_equal( unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ! ((*src1 ^ *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_equal(src1, src2, nbits);
}

static inline int bitmap_intersects( unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ((*src1 & *src2) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL )) != 0;
 else
  return __bitmap_intersects(src1, src2, nbits);
}

static inline int bitmap_subset( unsigned long *src1,
   unsigned long *src2, int nbits)
{
 if (nbits <= 64)
  return ! ((*src1 & ~(*src2)) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_subset(src1, src2, nbits);
}

static inline int bitmap_empty( unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return ! (*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_empty(src, nbits);
}

static inline int bitmap_full( unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return ! (~(*src) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 else
  return __bitmap_full(src, nbits);
}

static inline int bitmap_weight( unsigned long *src, int nbits)
{
 if (nbits <= 64)
  return hweight_long(*src & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL ));
 return __bitmap_weight(src, nbits);
}

static inline void bitmap_shift_right(unsigned long *dst,
   unsigned long *src, int n, int nbits)
{
 if (nbits <= 64)
  *dst = *src >> n;
 else
  __bitmap_shift_right(dst, src, n, nbits);
}

static inline void bitmap_shift_left(unsigned long *dst,
   unsigned long *src, int n, int nbits)
{
 if (nbits <= 64)
  *dst = (*src << n) & ( ((nbits) % 64) ? (1UL<<((nbits) % 64))-1 : ~0UL );
 else
  __bitmap_shift_left(dst, src, n, nbits);
}

static inline int bitmap_parse( char *buf, unsigned int buflen,
   unsigned long *maskp, int nmaskbits)
{
 return __bitmap_parse(buf, buflen, 0, maskp, nmaskbits);
}

typedef struct _cpumask { unsigned long bits[(((64) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } cpumask_t;
extern cpumask_t _unused_cpumask_arg_;


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


static inline void __cpus_and(cpumask_t *dstp, cpumask_t *src1p,
     cpumask_t *src2p, int nbits)
{
 bitmap_and(dstp->bits, src1p->bits, src2p->bits, nbits);
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



static inline void __cpus_andnot(cpumask_t *dstp, cpumask_t *src1p,
     cpumask_t *src2p, int nbits)
{
 bitmap_andnot(dstp->bits, src1p->bits, src2p->bits, nbits);
}


static inline void __cpus_complement(cpumask_t *dstp,
     cpumask_t *srcp, int nbits)
{
 bitmap_complement(dstp->bits, srcp->bits, nbits);
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


static inline int __cpus_full( cpumask_t *srcp, int nbits)
{
 return bitmap_full(srcp->bits, nbits);
}


static inline int __cpus_weight( cpumask_t *srcp, int nbits)
{
 return bitmap_weight(srcp->bits, nbits);
}



static inline void __cpus_shift_right(cpumask_t *dstp,
     cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_right(dstp->bits, srcp->bits, n, nbits);
}



static inline void __cpus_shift_left(cpumask_t *dstp,
     cpumask_t *srcp, int n, int nbits)
{
 bitmap_shift_left(dstp->bits, srcp->bits, n, nbits);
}
extern unsigned long
 cpu_bit_bitmap[64 +1][(((64) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];

static inline cpumask_t *get_cpu_mask(unsigned int cpu)
{
 unsigned long *p = cpu_bit_bitmap[1 + cpu % 64];
 p -= cpu / 64;
 return ( cpumask_t *)p;
}
static inline int __cpumask_scnprintf(char *buf, int len,
     cpumask_t *srcp, int nbits)
{
 return bitmap_scnprintf(buf, len, srcp->bits, nbits);
}



static inline int __cpumask_parse_user( char *buf, int len,
     cpumask_t *dstp, int nbits)
{
 return bitmap_parse_user(buf, len, dstp->bits, nbits);
}



static inline int __cpulist_scnprintf(char *buf, int len,
     cpumask_t *srcp, int nbits)
{
 return bitmap_scnlistprintf(buf, len, srcp->bits, nbits);
}


static inline int __cpulist_parse( char *buf, cpumask_t *dstp, int nbits)
{
 return bitmap_parselist(buf, dstp->bits, nbits);
}



static inline int __cpu_remap(int oldbit,
  cpumask_t *oldp, cpumask_t *newp, int nbits)
{
 return bitmap_bitremap(oldbit, oldp->bits, newp->bits, nbits);
}



static inline void __cpus_remap(cpumask_t *dstp, cpumask_t *srcp,
  cpumask_t *oldp, cpumask_t *newp, int nbits)
{
 bitmap_remap(dstp->bits, srcp->bits, oldp->bits, newp->bits, nbits);
}



static inline void __cpus_onto(cpumask_t *dstp, cpumask_t *origp,
  cpumask_t *relmapp, int nbits)
{
 bitmap_onto(dstp->bits, origp->bits, relmapp->bits, nbits);
}



static inline void __cpus_fold(cpumask_t *dstp, cpumask_t *origp,
  int sz, int nbits)
{
 bitmap_fold(dstp->bits, origp->bits, sz, nbits);
}
extern int nr_cpu_ids;
int __first_cpu( cpumask_t *srcp);
int __next_cpu(int n, cpumask_t *srcp);
int __any_online_cpu( cpumask_t *mask);
extern cpumask_t cpu_possible_map;
extern cpumask_t cpu_online_map;
extern cpumask_t cpu_present_map;
extern cpumask_t cpu_active_map;
enum km_type {
 KM_BOUNCE_READ,
 KM_SKB_SUNRPC_DATA,
 KM_SKB_DATA_SOFTIRQ,
 KM_USER0,
 KM_USER1,
 KM_BIO_SRC_IRQ,
 KM_BIO_DST_IRQ,
 KM_PTE0,
 KM_PTE1,
 KM_IRQ0,
 KM_IRQ1,
 KM_SOFTIRQ0,
 KM_SOFTIRQ1,
 KM_TYPE_NR
};


struct page;
struct thread_struct;
struct desc_ptr;
struct tss_struct;
struct mm_struct;
struct desc_struct;


struct pv_info {
 unsigned int kernel_rpl;
 int shared_kernel_pmd;
 int paravirt_enabled;
 char *name;
};

struct pv_init_ops {
 unsigned (*patch)(u8 type, u16 clobber, void *insnbuf,
     unsigned long addr, unsigned len);


 void (*arch_setup)(void);
 char *(*memory_setup)(void);
 void (*post_allocator_init)(void);


 void (*banner)(void);
};


struct pv_lazy_ops {

 void (*enter)(void);
 void (*leave)(void);
};

struct pv_time_ops {
 void (*time_init)(void);


 unsigned long (*get_wallclock)(void);
 int (*set_wallclock)(unsigned long);

 unsigned long long (*sched_clock)(void);
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
 void (*store_gdt)(struct desc_ptr *);
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

 struct pv_lazy_ops lazy_mode;
};

struct pv_irq_ops {
 void (*init_IRQ)(void);







 unsigned long (*save_fl)(void);
 void (*restore_fl)(unsigned long);
 void (*irq_disable)(void);
 void (*irq_enable)(void);
 void (*safe_halt)(void);
 void (*halt)(void);


 void (*adjust_exception_frame)(void);

};

struct pv_apic_ops {





 void (*apic_write)(unsigned long reg, u32 v);
 u32 (*apic_read)(unsigned long reg);
 void (*setup_boot_clock)(void);
 void (*setup_secondary_clock)(void);

 void (*startup_ipi_hook)(int phys_apicid,
     unsigned long start_eip,
     unsigned long start_esp);

};

struct pv_mmu_ops {






 void (*pagetable_setup_start)(pgd_t *pgd_base);
 void (*pagetable_setup_done)(pgd_t *pgd_base);

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
 void (*flush_tlb_others)( cpumask_t *cpus, struct mm_struct *mm,
     unsigned long va);


 int (*pgd_alloc)(struct mm_struct *mm);
 void (*pgd_free)(struct mm_struct *mm, pgd_t *pgd);





 void (*alloc_pte)(struct mm_struct *mm, u32 pfn);
 void (*alloc_pmd)(struct mm_struct *mm, u32 pfn);
 void (*alloc_pmd_clone)(u32 pfn, u32 clonepfn, u32 start, u32 count);
 void (*alloc_pud)(struct mm_struct *mm, u32 pfn);
 void (*release_pte)(u32 pfn);
 void (*release_pmd)(u32 pfn);
 void (*release_pud)(u32 pfn);


 void (*set_pte)(pte_t *ptep, pte_t pteval);
 void (*set_pte_at)(struct mm_struct *mm, unsigned long addr,
      pte_t *ptep, pte_t pteval);
 void (*set_pmd)(pmd_t *pmdp, pmd_t pmdval);
 void (*pte_update)(struct mm_struct *mm, unsigned long addr,
      pte_t *ptep);
 void (*pte_update_defer)(struct mm_struct *mm,
     unsigned long addr, pte_t *ptep);

 pte_t (*ptep_modify_prot_start)(struct mm_struct *mm, unsigned long addr,
     pte_t *ptep);
 void (*ptep_modify_prot_commit)(struct mm_struct *mm, unsigned long addr,
     pte_t *ptep, pte_t pte);

 pteval_t (*pte_val)(pte_t);
 pteval_t (*pte_flags)(pte_t);
 pte_t (*make_pte)(pteval_t pte);

 pgdval_t (*pgd_val)(pgd_t);
 pgd_t (*make_pgd)(pgdval_t pgd);
 void (*set_pud)(pud_t *pudp, pud_t pudval);

 pmdval_t (*pmd_val)(pmd_t);
 pmd_t (*make_pmd)(pmdval_t pmd);


 pudval_t (*pud_val)(pud_t);
 pud_t (*make_pud)(pudval_t pud);

 void (*set_pgd)(pgd_t *pudp, pgd_t pgdval);







 struct pv_lazy_ops lazy_mode;





 void (*set_fixmap)(unsigned idx,
      unsigned long phys, pgprot_t flags);
};

struct raw_spinlock;
struct pv_lock_ops {
 int (*spin_is_locked)(struct raw_spinlock *lock);
 int (*spin_is_contended)(struct raw_spinlock *lock);
 void (*spin_lock)(struct raw_spinlock *lock);
 int (*spin_trylock)(struct raw_spinlock *lock);
 void (*spin_unlock)(struct raw_spinlock *lock);
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
static inline int paravirt_enabled(void)
{
 return pv_info.paravirt_enabled;
}

static inline void load_sp0(struct tss_struct *tss,
        struct thread_struct *thread)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.load_sp0); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.load_sp0) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.load_sp0), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(tss)), "1" ((unsigned long)(thread)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline unsigned long get_wallclock(void)
{
 return ({ unsigned long __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_time_ops.get_wallclock); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_time_ops.get_wallclock) / sizeof(void *))), [paravirt_opptr] "m" (pv_time_ops.get_wallclock), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_time_ops.get_wallclock) / sizeof(void *))), [paravirt_opptr] "m" (pv_time_ops.get_wallclock), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline int set_wallclock(unsigned long nowtime)
{
 return ({ int __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_time_ops.set_wallclock); if (sizeof(int) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_time_ops.set_wallclock) / sizeof(void *))), [paravirt_opptr] "m" (pv_time_ops.set_wallclock), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(nowtime)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_time_ops.set_wallclock) / sizeof(void *))), [paravirt_opptr] "m" (pv_time_ops.set_wallclock), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(nowtime)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline void (*choose_time_init(void))(void)
{
 return pv_time_ops.time_init;
}


static inline void __cpuid(unsigned int *eax, unsigned int *ebx,
      unsigned int *ecx, unsigned int *edx)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.cpuid); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.cpuid) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.cpuid), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(eax)), "1"((unsigned long)(ebx)), "2"((unsigned long)(ecx)), "3"((unsigned long)(edx)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}




static inline unsigned long paravirt_get_debugreg(int reg)
{
 return ({ unsigned long __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_cpu_ops.get_debugreg); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.get_debugreg) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.get_debugreg), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(reg)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.get_debugreg) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.get_debugreg), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(reg)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void set_debugreg(unsigned long val, int reg)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.set_debugreg); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.set_debugreg) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.set_debugreg), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(reg)), "1" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void clts(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.clts); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.clts) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.clts), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline unsigned long read_cr0(void)
{
 return ({ unsigned long __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_cpu_ops.read_cr0); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_cr0) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_cr0), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_cr0) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_cr0), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void write_cr0(unsigned long x)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.write_cr0); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.write_cr0) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.write_cr0), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline unsigned long read_cr2(void)
{
 return ({ unsigned long __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.read_cr2); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.read_cr2) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.read_cr2), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.read_cr2) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.read_cr2), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void write_cr2(unsigned long x)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.write_cr2); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.write_cr2) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.write_cr2), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline unsigned long read_cr3(void)
{
 return ({ unsigned long __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.read_cr3); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.read_cr3) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.read_cr3), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.read_cr3) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.read_cr3), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void write_cr3(unsigned long x)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.write_cr3); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.write_cr3) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.write_cr3), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline unsigned long read_cr4(void)
{
 return ({ unsigned long __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_cpu_ops.read_cr4); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_cr4) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_cr4), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_cr4) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_cr4), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}
static inline unsigned long read_cr4_safe(void)
{
 return ({ unsigned long __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_cpu_ops.read_cr4_safe); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_cr4_safe) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_cr4_safe), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_cr4_safe) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_cr4_safe), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void write_cr4(unsigned long x)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.write_cr4); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.write_cr4) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.write_cr4), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline unsigned long read_cr8(void)
{
 return ({ unsigned long __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_cpu_ops.read_cr8); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_cr8) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_cr8), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_cr8) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_cr8), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void write_cr8(unsigned long x)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.write_cr8); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.write_cr8) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.write_cr8), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(x)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void raw_safe_halt(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_irq_ops.safe_halt); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_irq_ops.safe_halt) / sizeof(void *))), [paravirt_opptr] "m" (pv_irq_ops.safe_halt), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void halt(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_irq_ops.safe_halt); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_irq_ops.safe_halt) / sizeof(void *))), [paravirt_opptr] "m" (pv_irq_ops.safe_halt), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void wbinvd(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.wbinvd); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.wbinvd) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.wbinvd), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}



static inline u64 paravirt_read_msr(unsigned msr, int *err)
{
 return ({ u64 __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_cpu_ops.read_msr); if (sizeof(u64) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_msr) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_msr), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(msr)), "1" ((unsigned long)(err)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_msr) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_msr), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(msr)), "1" ((unsigned long)(err)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}
static inline int paravirt_write_msr(unsigned msr, unsigned low, unsigned high)
{
 return ({ int __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_cpu_ops.write_msr); if (sizeof(int) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.write_msr) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.write_msr), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(msr)), "1"((unsigned long)(low)), "2"((unsigned long)(high)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.write_msr) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.write_msr), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(msr)), "1"((unsigned long)(low)), "2"((unsigned long)(high)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}
static inline int rdmsrl_safe(unsigned msr, unsigned long long *p)
{
 int err;

 *p = paravirt_read_msr(msr, &err);
 return err;
}

static inline u64 paravirt_read_tsc(void)
{
 return ({ u64 __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_cpu_ops.read_tsc); if (sizeof(u64) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_tsc) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_tsc), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_tsc) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_tsc), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}
static inline unsigned long long paravirt_sched_clock(void)
{
 return ({ unsigned long long __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_time_ops.sched_clock); if (sizeof(unsigned long long) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_time_ops.sched_clock) / sizeof(void *))), [paravirt_opptr] "m" (pv_time_ops.sched_clock), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long long)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_time_ops.sched_clock) / sizeof(void *))), [paravirt_opptr] "m" (pv_time_ops.sched_clock), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long long)__eax; } __ret; });
}


static inline unsigned long long paravirt_read_pmc(int counter)
{
 return ({ u64 __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_cpu_ops.read_pmc); if (sizeof(u64) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_pmc) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_pmc), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(counter)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_pmc) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_pmc), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(counter)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}
static inline unsigned long long paravirt_rdtscp(unsigned int *aux)
{
 return ({ u64 __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_cpu_ops.read_tscp); if (sizeof(u64) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_tscp) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_tscp), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(aux)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.read_tscp) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.read_tscp), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(aux)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (u64)__eax; } __ret; });
}
static inline void load_TR_desc(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.load_tr_desc); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.load_tr_desc) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.load_tr_desc), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void load_gdt( struct desc_ptr *dtr)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.load_gdt); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.load_gdt) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.load_gdt), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(dtr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void load_idt( struct desc_ptr *dtr)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.load_idt); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.load_idt) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.load_idt), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(dtr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void set_ldt( void *addr, unsigned entries)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.set_ldt); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.set_ldt) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.set_ldt), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(addr)), "1" ((unsigned long)(entries)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void store_gdt(struct desc_ptr *dtr)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.store_gdt); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.store_gdt) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.store_gdt), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(dtr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void store_idt(struct desc_ptr *dtr)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.store_idt); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.store_idt) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.store_idt), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(dtr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline unsigned long paravirt_store_tr(void)
{
 return ({ unsigned long __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_cpu_ops.store_tr); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.store_tr) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.store_tr), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.store_tr) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.store_tr), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void load_TLS(struct thread_struct *t, unsigned cpu)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.load_tls); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.load_tls) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.load_tls), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(t)), "1" ((unsigned long)(cpu)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void load_gs_index(unsigned int gs)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.load_gs_index); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.load_gs_index) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.load_gs_index), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(gs)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void write_ldt_entry(struct desc_struct *dt, int entry,
       void *desc)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.write_ldt_entry); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.write_ldt_entry) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.write_ldt_entry), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(dt)), "1"((unsigned long)(entry)), "2"((unsigned long)(desc)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void write_gdt_entry(struct desc_struct *dt, int entry,
       void *desc, int type)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.write_gdt_entry); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.write_gdt_entry) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.write_gdt_entry), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(dt)), "1"((unsigned long)(entry)), "2"((unsigned long)(desc)), "3"((unsigned long)(type)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void write_idt_entry(gate_desc *dt, int entry, gate_desc *g)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.write_idt_entry); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.write_idt_entry) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.write_idt_entry), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(dt)), "1"((unsigned long)(entry)), "2"((unsigned long)(g)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void set_iopl_mask(unsigned mask)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.set_iopl_mask); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.set_iopl_mask) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.set_iopl_mask), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mask)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void slow_down_io(void)
{
 pv_cpu_ops.io_delay();





}





static inline void apic_write(unsigned long reg, u32 v)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_apic_ops.apic_write); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_apic_ops.apic_write) / sizeof(void *))), [paravirt_opptr] "m" (pv_apic_ops.apic_write), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(reg)), "1" ((unsigned long)(v)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline u32 apic_read(unsigned long reg)
{
 return ({ unsigned long __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_apic_ops.apic_read); if (sizeof(unsigned long) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_apic_ops.apic_read) / sizeof(void *))), [paravirt_opptr] "m" (pv_apic_ops.apic_read), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(reg)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_apic_ops.apic_read) / sizeof(void *))), [paravirt_opptr] "m" (pv_apic_ops.apic_read), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(reg)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (unsigned long)__eax; } __ret; });
}

static inline void setup_boot_clock(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_apic_ops.setup_boot_clock); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_apic_ops.setup_boot_clock) / sizeof(void *))), [paravirt_opptr] "m" (pv_apic_ops.setup_boot_clock), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void setup_secondary_clock(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_apic_ops.setup_secondary_clock); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_apic_ops.setup_secondary_clock) / sizeof(void *))), [paravirt_opptr] "m" (pv_apic_ops.setup_secondary_clock), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline void paravirt_post_allocator_init(void)
{
 if (pv_init_ops.post_allocator_init)
  (*pv_init_ops.post_allocator_init)();
}

static inline void paravirt_pagetable_setup_start(pgd_t *base)
{
 (*pv_mmu_ops.pagetable_setup_start)(base);
}

static inline void paravirt_pagetable_setup_done(pgd_t *base)
{
 (*pv_mmu_ops.pagetable_setup_done)(base);
}


static inline void startup_ipi_hook(int phys_apicid, unsigned long start_eip,
        unsigned long start_esp)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_apic_ops.startup_ipi_hook); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_apic_ops.startup_ipi_hook) / sizeof(void *))), [paravirt_opptr] "m" (pv_apic_ops.startup_ipi_hook), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(phys_apicid)), "1"((unsigned long)(start_eip)), "2"((unsigned long)(start_esp)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                                        ;
}


static inline void paravirt_activate_mm(struct mm_struct *prev,
     struct mm_struct *next)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.activate_mm); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.activate_mm) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.activate_mm), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(prev)), "1" ((unsigned long)(next)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void arch_dup_mmap(struct mm_struct *oldmm,
     struct mm_struct *mm)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.dup_mmap); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.dup_mmap) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.dup_mmap), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(oldmm)), "1" ((unsigned long)(mm)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void arch_exit_mmap(struct mm_struct *mm)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.exit_mmap); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.exit_mmap) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.exit_mmap), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void __flush_tlb(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.flush_tlb_user); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.flush_tlb_user) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.flush_tlb_user), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void __flush_tlb_global(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.flush_tlb_kernel); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.flush_tlb_kernel) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.flush_tlb_kernel), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void __flush_tlb_single(unsigned long addr)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.flush_tlb_single); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.flush_tlb_single) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.flush_tlb_single), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(addr)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void flush_tlb_others(cpumask_t cpumask, struct mm_struct *mm,
        unsigned long va)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.flush_tlb_others); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.flush_tlb_others) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.flush_tlb_others), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(&cpumask)), "1"((unsigned long)(mm)), "2"((unsigned long)(va)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline int paravirt_pgd_alloc(struct mm_struct *mm)
{
 return ({ int __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.pgd_alloc); if (sizeof(int) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pgd_alloc) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pgd_alloc), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pgd_alloc) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pgd_alloc), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline void paravirt_pgd_free(struct mm_struct *mm, pgd_t *pgd)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.pgd_free); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pgd_free) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pgd_free), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)), "1" ((unsigned long)(pgd)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void paravirt_alloc_pte(struct mm_struct *mm, unsigned pfn)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.alloc_pte); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.alloc_pte) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.alloc_pte), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)), "1" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void paravirt_release_pte(unsigned pfn)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.release_pte); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.release_pte) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.release_pte), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void paravirt_alloc_pmd(struct mm_struct *mm, unsigned pfn)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.alloc_pmd); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.alloc_pmd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.alloc_pmd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)), "1" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void paravirt_alloc_pmd_clone(unsigned pfn, unsigned clonepfn,
         unsigned start, unsigned count)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.alloc_pmd_clone); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.alloc_pmd_clone) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.alloc_pmd_clone), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pfn)), "1"((unsigned long)(clonepfn)), "2"((unsigned long)(start)), "3"((unsigned long)(count)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void paravirt_release_pmd(unsigned pfn)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.release_pmd); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.release_pmd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.release_pmd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void paravirt_alloc_pud(struct mm_struct *mm, unsigned pfn)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.alloc_pud); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.alloc_pud) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.alloc_pud), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)), "1" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void paravirt_release_pud(unsigned pfn)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.release_pud); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.release_pud) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.release_pud), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pfn)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}
static inline void pte_update(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.pte_update); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pte_update) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pte_update), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)), "1"((unsigned long)(addr)), "2"((unsigned long)(ptep)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void pte_update_defer(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.pte_update_defer); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pte_update_defer) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pte_update_defer), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)), "1"((unsigned long)(addr)), "2"((unsigned long)(ptep)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline pte_t __pte(pteval_t val)
{
 pteval_t ret;

 if (sizeof(pteval_t) > sizeof(long))
  ret = ({ pteval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.make_pte); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pte) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pte), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)), "1" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pte) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pte), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)), "1" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)__eax; } __ret; })

                         ;
 else
  ret = ({ pteval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.make_pte); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pte) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pte), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pte) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pte), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)__eax; } __ret; })

         ;


        return native_make_pte(ret);
}

static inline pteval_t pte_val(pte_t pte)
{
 pteval_t ret;

 if (sizeof(pteval_t) > sizeof(long))
  ret = ({ pteval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.pte_val); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pte_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pte_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pte.pte)), "1" ((unsigned long)((u64)pte.pte >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pte_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pte_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pte.pte)), "1" ((unsigned long)((u64)pte.pte >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)__eax; } __ret; })
                                 ;
 else
  ret = ({ pteval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.pte_val); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pte_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pte_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pte.pte)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pte_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pte_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pte.pte)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)__eax; } __ret; })
             ;

 return ret;
}

static inline pteval_t pte_flags(pte_t pte)
{
 pteval_t ret;

 if (sizeof(pteval_t) > sizeof(long))
  ret = ({ pteval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.pte_flags); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pte_flags) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pte_flags), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pte.pte)), "1" ((unsigned long)((u64)pte.pte >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pte_flags) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pte_flags), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pte.pte)), "1" ((unsigned long)((u64)pte.pte >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)__eax; } __ret; })
                                 ;
 else
  ret = ({ pteval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.pte_flags); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pte_flags) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pte_flags), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pte.pte)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pte_flags) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pte_flags), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pte.pte)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)__eax; } __ret; })
             ;




 return ret;
}

static inline pgd_t __pgd(pgdval_t val)
{
 pgdval_t ret;

 if (sizeof(pgdval_t) > sizeof(long))
  ret = ({ pgdval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.make_pgd); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pgd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pgd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)), "1" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pgd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pgd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)), "1" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pgdval_t)__eax; } __ret; })
                         ;
 else
  ret = ({ pgdval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.make_pgd); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pgd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pgd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pgd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pgd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pgdval_t)__eax; } __ret; })
         ;

 return (pgd_t) { ret };
}

static inline pgdval_t pgd_val(pgd_t pgd)
{
 pgdval_t ret;

 if (sizeof(pgdval_t) > sizeof(long))
  ret = ({ pgdval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.pgd_val); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pgd_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pgd_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pgd.pgd)), "1" ((unsigned long)((u64)pgd.pgd >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pgd_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pgd_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pgd.pgd)), "1" ((unsigned long)((u64)pgd.pgd >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pgdval_t)__eax; } __ret; })
                                  ;
 else
  ret = ({ pgdval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.pgd_val); if (sizeof(pgdval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pgd_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pgd_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pgd.pgd)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pgdval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pgd_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pgd_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pgd.pgd)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pgdval_t)__eax; } __ret; })
              ;

 return ret;
}


static inline pte_t ptep_modify_prot_start(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep)
{
 pteval_t ret;

 ret = ({ pteval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.ptep_modify_prot_start); if (sizeof(pteval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.ptep_modify_prot_start) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.ptep_modify_prot_start), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)), "1"((unsigned long)(addr)), "2"((unsigned long)(ptep)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.ptep_modify_prot_start) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.ptep_modify_prot_start), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)), "1"((unsigned long)(addr)), "2"((unsigned long)(ptep)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pteval_t)__eax; } __ret; })
                   ;


        return native_make_pte(ret);
}

static inline void ptep_modify_prot_commit(struct mm_struct *mm, unsigned long addr,
        pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))

  pv_mmu_ops.ptep_modify_prot_commit(mm, addr, ptep, pte);
 else
  ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.ptep_modify_prot_commit); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.ptep_modify_prot_commit) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.ptep_modify_prot_commit), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)), "1"((unsigned long)(addr)), "2"((unsigned long)(ptep)), "3"((unsigned long)(pte.pte)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                               ;
}

static inline void set_pte(pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))
  ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.set_pte); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.set_pte) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.set_pte), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(ptep)), "1"((unsigned long)(pte.pte)), "2"((unsigned long)((u64)pte.pte >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                                   ;
 else
  ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.set_pte); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.set_pte) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.set_pte), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(ptep)), "1" ((unsigned long)(pte.pte)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
               ;
}

static inline void set_pte_at(struct mm_struct *mm, unsigned long addr,
         pte_t *ptep, pte_t pte)
{
 if (sizeof(pteval_t) > sizeof(long))

  pv_mmu_ops.set_pte_at(mm, addr, ptep, pte);
 else
  ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.set_pte_at); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.set_pte_at) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.set_pte_at), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(mm)), "1"((unsigned long)(addr)), "2"((unsigned long)(ptep)), "3"((unsigned long)(pte.pte)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void set_pmd(pmd_t *pmdp, pmd_t pmd)
{
 pmdval_t val = native_pmd_val(pmd);

 if (sizeof(pmdval_t) > sizeof(long))
  ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.set_pmd); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.set_pmd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.set_pmd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pmdp)), "1"((unsigned long)(val)), "2"((unsigned long)((u64)val >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
 else
  ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.set_pmd); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.set_pmd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.set_pmd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pmdp)), "1" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}


static inline pmd_t __pmd(pmdval_t val)
{
 pmdval_t ret;

 if (sizeof(pmdval_t) > sizeof(long))
  ret = ({ pmdval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.make_pmd); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pmd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pmd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)), "1" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pmd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pmd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)), "1" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pmdval_t)__eax; } __ret; })
                         ;
 else
  ret = ({ pmdval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.make_pmd); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pmd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pmd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pmd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pmd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pmdval_t)__eax; } __ret; })
         ;

 return (pmd_t) { ret };
}

static inline pmdval_t pmd_val(pmd_t pmd)
{
 pmdval_t ret;

 if (sizeof(pmdval_t) > sizeof(long))
  ret = ({ pmdval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.pmd_val); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pmd_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pmd_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pmd.pmd)), "1" ((unsigned long)((u64)pmd.pmd >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pmd_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pmd_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pmd.pmd)), "1" ((unsigned long)((u64)pmd.pmd >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pmdval_t)__eax; } __ret; })
                                  ;
 else
  ret = ({ pmdval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.pmd_val); if (sizeof(pmdval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pmd_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pmd_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pmd.pmd)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pmdval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pmd_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pmd_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pmd.pmd)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pmdval_t)__eax; } __ret; })
              ;

 return ret;
}

static inline void set_pud(pud_t *pudp, pud_t pud)
{
 pudval_t val = native_pud_val(pud);

 if (sizeof(pudval_t) > sizeof(long))
  ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.set_pud); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.set_pud) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.set_pud), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pudp)), "1"((unsigned long)(val)), "2"((unsigned long)((u64)val >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                           ;
 else
  ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.set_pud); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.set_pud) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.set_pud), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pudp)), "1" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
           ;
}

static inline pud_t __pud(pudval_t val)
{
 pudval_t ret;

 if (sizeof(pudval_t) > sizeof(long))
  ret = ({ pudval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.make_pud); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pud) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pud), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)), "1" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pud) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pud), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)), "1" ((unsigned long)((u64)val >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pudval_t)__eax; } __ret; })
                         ;
 else
  ret = ({ pudval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.make_pud); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pud) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pud), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.make_pud) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.make_pud), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(val)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pudval_t)__eax; } __ret; })
         ;

 return (pud_t) { ret };
}

static inline pudval_t pud_val(pud_t pud)
{
 pudval_t ret;

 if (sizeof(pudval_t) > sizeof(long))
  ret = ({ pudval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.pud_val); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pud_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pud_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pud.pud)), "1" ((unsigned long)((u64)pud.pud >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pud_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pud_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pud.pud)), "1" ((unsigned long)((u64)pud.pud >> 32)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pudval_t)__eax; } __ret; })
                                  ;
 else
  ret = ({ pudval_t __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_mmu_ops.pud_val); if (sizeof(pudval_t) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pud_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pud_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pud.pud)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pudval_t)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.pud_val) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.pud_val), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pud.pud)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (pudval_t)__eax; } __ret; })
              ;

 return ret;
}

static inline void set_pgd(pgd_t *pgdp, pgd_t pgd)
{
 pgdval_t val = native_pgd_val(pgd);

 if (sizeof(pgdval_t) > sizeof(long))
  ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.set_pgd); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.set_pgd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.set_pgd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pgdp)), "1"((unsigned long)(val)), "2"((unsigned long)((u64)val >> 32)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
                           ;
 else
  ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.set_pgd); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.set_pgd) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.set_pgd), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(pgdp)), "1" ((unsigned long)(val)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); })
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

static inline void set_pte_present(struct mm_struct *mm, unsigned long addr,
       pte_t *ptep, pte_t pte)
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



enum paravirt_lazy_mode {
 PARAVIRT_LAZY_NONE,
 PARAVIRT_LAZY_MMU,
 PARAVIRT_LAZY_CPU,
};

enum paravirt_lazy_mode paravirt_get_lazy_mode(void);
void paravirt_enter_lazy_cpu(void);
void paravirt_leave_lazy_cpu(void);
void paravirt_enter_lazy_mmu(void);
void paravirt_leave_lazy_mmu(void);
void paravirt_leave_lazy(enum paravirt_lazy_mode mode);


static inline void arch_enter_lazy_cpu_mode(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.lazy_mode.enter); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.lazy_mode.enter) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.lazy_mode.enter), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void arch_leave_lazy_cpu_mode(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_cpu_ops.lazy_mode.leave); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_cpu_ops.lazy_mode.leave) / sizeof(void *))), [paravirt_opptr] "m" (pv_cpu_ops.lazy_mode.leave), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void arch_flush_lazy_cpu_mode(void)
{
 if (__builtin_expect(!!(paravirt_get_lazy_mode() == PARAVIRT_LAZY_CPU), 0)) {
  arch_leave_lazy_cpu_mode();
  arch_enter_lazy_cpu_mode();
 }
}



static inline void arch_enter_lazy_mmu_mode(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.lazy_mode.enter); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.lazy_mode.enter) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.lazy_mode.enter), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void arch_leave_lazy_mmu_mode(void)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_mmu_ops.lazy_mode.leave); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_mmu_ops.lazy_mode.leave) / sizeof(void *))), [paravirt_opptr] "m" (pv_mmu_ops.lazy_mode.leave), [paravirt_clobber] "i" (((1 << 9) - 1)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline void arch_flush_lazy_mmu_mode(void)
{
 if (__builtin_expect(!!(paravirt_get_lazy_mode() == PARAVIRT_LAZY_MMU), 0)) {
  arch_leave_lazy_mmu_mode();
  arch_enter_lazy_mmu_mode();
 }
}

static inline void __set_fixmap(unsigned idx,
    unsigned long phys, pgprot_t flags)
{
 pv_mmu_ops.set_fixmap(idx, phys, flags);
}

void _paravirt_nop(void);


void paravirt_use_bytelocks(void);



static inline int __raw_spin_is_locked(struct raw_spinlock *lock)
{
 return ({ int __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_lock_ops.spin_is_locked); if (sizeof(int) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_lock_ops.spin_is_locked) / sizeof(void *))), [paravirt_opptr] "m" (pv_lock_ops.spin_is_locked), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_lock_ops.spin_is_locked) / sizeof(void *))), [paravirt_opptr] "m" (pv_lock_ops.spin_is_locked), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline int __raw_spin_is_contended(struct raw_spinlock *lock)
{
 return ({ int __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_lock_ops.spin_is_contended); if (sizeof(int) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_lock_ops.spin_is_contended) / sizeof(void *))), [paravirt_opptr] "m" (pv_lock_ops.spin_is_contended), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_lock_ops.spin_is_contended) / sizeof(void *))), [paravirt_opptr] "m" (pv_lock_ops.spin_is_contended), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline __attribute__((always_inline)) void __raw_spin_lock(struct raw_spinlock *lock)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_lock_ops.spin_lock); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_lock_ops.spin_lock) / sizeof(void *))), [paravirt_opptr] "m" (pv_lock_ops.spin_lock), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(lock)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}

static inline __attribute__((always_inline)) int __raw_spin_trylock(struct raw_spinlock *lock)
{
 return ({ int __ret; unsigned long __edi, __esi, __edx, __ecx, __eax; ((void)pv_lock_ops.spin_trylock); if (sizeof(int) > sizeof(unsigned long)) { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_lock_ops.spin_trylock) / sizeof(void *))), [paravirt_opptr] "m" (pv_lock_ops.spin_trylock), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)((((u64)__edx) << 32) | __eax); } else { asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx), "=a" (__eax) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_lock_ops.spin_trylock) / sizeof(void *))), [paravirt_opptr] "m" (pv_lock_ops.spin_trylock), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(lock)) : "memory", "cc" , "r8", "r9", "r10", "r11"); __ret = (int)__eax; } __ret; });
}

static inline __attribute__((always_inline)) void __raw_spin_unlock(struct raw_spinlock *lock)
{
 ({ unsigned long __edi, __esi, __edx, __ecx; ((void)pv_lock_ops.spin_unlock); asm ("" "771:\n\t" "call *%[paravirt_opptr];" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n" "" : "=D" (__edi), "=S" (__esi), "=d" (__edx), "=c" (__ecx) : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_lock_ops.spin_unlock) / sizeof(void *))), [paravirt_opptr] "m" (pv_lock_ops.spin_unlock), [paravirt_clobber] "i" (((1 << 9) - 1)), "0" ((unsigned long)(lock)) : "memory", "cc" , "rax", "r8", "r9", "r10", "r11"); });
}




struct paravirt_patch_site {
 u8 *instr;
 u8 instrtype;
 u8 len;
 u16 clobbers;
};

extern struct paravirt_patch_site __parainstructions[],
 __parainstructions_end[];
static inline unsigned long __raw_local_save_flags(void)
{
 unsigned long f;

 asm ("771:\n\t" "pushq %%rdi;" "call *%[paravirt_opptr];" "popq %%rdi;" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n"


       : "=a"(f)
       : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_irq_ops.save_fl) / sizeof(void *))), [paravirt_opptr] "m" (pv_irq_ops.save_fl),
         [paravirt_clobber] "i" ((1 << 0))
       : "memory", "cc" , "r8", "r9", "r10", "r11", "rdi", "rcx" , "rdx", "rsi");
 return f;
}

static inline void raw_local_irq_restore(unsigned long f)
{
 asm ("771:\n\t" "pushq %%rdi;" "call *%[paravirt_opptr];" "popq %%rdi;" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n"


       : "=a"(f)
       : "D"(f),
         [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_irq_ops.restore_fl) / sizeof(void *))), [paravirt_opptr] "m" (pv_irq_ops.restore_fl),
         [paravirt_clobber] "i" ((1 << 0))
       : "memory", "cc" , "r8", "r9", "r10", "r11", "rcx" , "rdx", "rsi");
}

static inline void raw_local_irq_disable(void)
{
 asm ("771:\n\t" "pushq %%rdi;" "call *%[paravirt_opptr];" "popq %%rdi;" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n"


       :
       : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_irq_ops.irq_disable) / sizeof(void *))), [paravirt_opptr] "m" (pv_irq_ops.irq_disable),
         [paravirt_clobber] "i" ((1 << 0))
       : "memory", "eax", "cc" , "r8", "r9", "r10", "r11", "rcx" , "rdx", "rsi");
}

static inline void raw_local_irq_enable(void)
{
 asm ("771:\n\t" "pushq %%rdi;" "call *%[paravirt_opptr];" "popq %%rdi;" "\n" "772:\n" ".pushsection .parainstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " " 771b\n" "  .byte " "%c[paravirt_typenum]" "\n" "  .byte 772b-771b\n" "  .short " "%c[paravirt_clobber]" "\n" ".popsection\n"


       :
       : [paravirt_typenum] "i" ((((size_t) &((struct paravirt_patch_template *)0)->pv_irq_ops.irq_enable) / sizeof(void *))), [paravirt_opptr] "m" (pv_irq_ops.irq_enable),
         [paravirt_clobber] "i" ((1 << 0))
       : "memory", "eax", "cc" , "r8", "r9", "r10", "r11", "rcx" , "rdx", "rsi");
}

static inline unsigned long __raw_local_irq_save(void)
{
 unsigned long f;

 f = __raw_local_save_flags();
 raw_local_irq_disable();
 return f;
}
static __inline__ __attribute__((__const__)) int get_order(unsigned long size)
{
 int order;

 size = (size - 1) >> (12 - 1);
 order = -1;
 do {
  size >>= 1;
  order++;
 } while (size);
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







struct ptrace_bts_config {

 __u32 size;

 __u32 flags;

 __u32 signal;

 __u32 bts_size;
};



typedef int (*initcall_t)(void);
typedef void (*exitcall_t)(void);

extern initcall_t __con_initcall_start[], __con_initcall_end[];
extern initcall_t __security_initcall_start[], __security_initcall_end[];


extern int do_one_initcall(initcall_t fn);
extern char __attribute__ ((__section__(".init.data"))) boot_command_line[];
extern char *saved_command_line;
extern unsigned int reset_devices;


void setup_arch(char **);
void prepare_namespace(void);

extern void (*late_time_init)(void);
struct obs_kernel_param {
 char *str;
 int (*setup_func)(char *);
 int early;
};
void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) parse_early_param(void);

struct cpuinfo_x86;







enum bts_qualifier {
 BTS_INVALID = 0,
 BTS_BRANCH,
 BTS_TASK_ARRIVES,
 BTS_TASK_DEPARTS
};

struct bts_struct {
 u64 qualifier;
 union {

  struct {
   u64 from_ip;
   u64 to_ip;
  } lbr;


  u64 jiffies;
 } variant;
};





extern int ds_allocate(void **, size_t);
extern int ds_free(void **);
extern int ds_get_bts_size(void *);
extern int ds_get_bts_end(void *);
extern int ds_get_bts_index(void *);
extern int ds_set_overflow(void *, int);
extern int ds_get_overflow(void *);
extern int ds_clear(void *);
extern int ds_read_bts(void *, int, struct bts_struct *);
extern int ds_write_bts(void *, struct bts_struct *);
extern unsigned long ds_debugctl_mask(void);
extern void __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) ds_init_intel(struct cpuinfo_x86 *c);
extern char early_idt_handlers[32][10];
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
struct task_struct;

extern void ptrace_bts_take_timestamp(struct task_struct *, enum bts_qualifier);

extern unsigned long profile_pc(struct pt_regs *regs);

extern unsigned long
convert_ip_to_linear(struct task_struct *child, struct pt_regs *regs);





void signal_fault(struct pt_regs *regs, void *frame, char *where);


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







static inline unsigned long kernel_trap_sp(struct pt_regs *regs)
{



 return regs->sp;

}

static inline unsigned long instruction_pointer(struct pt_regs *regs)
{
 return regs->ip;
}

static inline unsigned long frame_pointer(struct pt_regs *regs)
{
 return regs->bp;
}





extern void user_enable_single_step(struct task_struct *);
extern void user_disable_single_step(struct task_struct *);

extern void user_enable_block_step(struct task_struct *);






struct user_desc;
extern int do_get_thread_area(struct task_struct *p, int idx,
         struct user_desc *info);
extern int do_set_thread_area(struct task_struct *p, int idx,
         struct user_desc *info, int can_allocate);
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







struct info {
 long ___orig_eip;
 long ___ebx;
 long ___ecx;
 long ___edx;
 long ___esi;
 long ___edi;
 long ___ebp;
 long ___eax;
 long ___ds;
 long ___es;
 long ___fs;
 long ___orig_eax;
 long ___eip;
 long ___cs;
 long ___eflags;
 long ___esp;
 long ___ss;
 long ___vm86_es;
 long ___vm86_ds;
 long ___vm86_fs;
 long ___vm86_gs;
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
 __u32 reserved2[24];
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
 struct _fpstate *fpstate;
 unsigned long reserved1[8];
};




extern struct task_struct *get_current(void);










static inline void set_64bit( unsigned long *ptr, unsigned long val)
{
 *ptr = val;
}
static inline unsigned long __xchg(unsigned long x, void *ptr,
       int size)
{
 switch (size) {
 case 1:
  asm ("xchgb %b0,%1"
        : "=q" (x)
        : "m" (*(( long *)(ptr))), "0" (x)
        : "memory");
  break;
 case 2:
  asm ("xchgw %w0,%1"
        : "=r" (x)
        : "m" (*(( long *)(ptr))), "0" (x)
        : "memory");
  break;
 case 4:
  asm ("xchgl %k0,%1"
        : "=r" (x)
        : "m" (*(( long *)(ptr))), "0" (x)
        : "memory");
  break;
 case 8:
  asm ("xchgq %0,%1"
        : "=r" (x)
        : "m" (*(( long *)(ptr))), "0" (x)
        : "memory");
  break;
 }
 return x;
}
static inline unsigned long __cmpxchg( void *ptr, unsigned long old,
          unsigned long _new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "cmpxchgb %b1,%2"
        : "=a"(prev)
        : "q"(_new), "m"(*(( long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 2:
  asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "cmpxchgw %w1,%2"
        : "=a"(prev)
        : "r"(_new), "m"(*(( long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 4:
  asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "cmpxchgl %k1,%2"
        : "=a"(prev)
        : "r"(_new), "m"(*(( long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 8:
  asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "cmpxchgq %1,%2"
        : "=a"(prev)
        : "r"(_new), "m"(*(( long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 }
 return old;
}






static inline unsigned long __sync_cmpxchg( void *ptr,
        unsigned long old,
        unsigned long _new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  asm ("lock; cmpxchgb %b1,%2"
        : "=a"(prev)
        : "q"(_new), "m"(*(( long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 2:
  asm ("lock; cmpxchgw %w1,%2"
        : "=a"(prev)
        : "r"(_new), "m"(*(( long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 4:
  asm ("lock; cmpxchgl %1,%2"
        : "=a"(prev)
        : "r"(_new), "m"(*(( long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 }
 return old;
}

static inline unsigned long __cmpxchg_local( void *ptr,
         unsigned long old,
         unsigned long _new, int size)
{
 unsigned long prev;
 switch (size) {
 case 1:
  asm ("cmpxchgb %b1,%2"
        : "=a"(prev)
        : "q"(_new), "m"(*(( long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 2:
  asm ("cmpxchgw %w1,%2"
        : "=a"(prev)
        : "r"(_new), "m"(*(( long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 4:
  asm ("cmpxchgl %k1,%2"
        : "=a"(prev)
        : "r"(_new), "m"(*(( long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 case 8:
  asm ("cmpxchgq %1,%2"
        : "=a"(prev)
        : "r"(_new), "m"(*(( long *)(ptr))), "0"(old)
        : "memory");
  return prev;
 }
 return old;
}


  extern void trace_softirqs_on(unsigned long ip);
  extern void trace_softirqs_off(unsigned long ip);
  extern void trace_hardirqs_on(void);
  extern void trace_hardirqs_off(void);
 extern void stop_critical_timings(void);
 extern void start_critical_timings(void);







static inline unsigned long native_save_fl(void)
{
 unsigned long flags;







 asm ("# __raw_save_flags\n\t"
       "pushf ; pop %0"
       : "=r" (flags)
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
static inline int raw_irqs_disabled_flags(unsigned long flags)
{
 return !(flags & 0x00000200);
}

static inline int raw_irqs_disabled(void)
{
 unsigned long flags = __raw_local_save_flags();

 return raw_irqs_disabled_flags(flags);
}







static inline void trace_hardirqs_fixup_flags(unsigned long flags)
{
 if (raw_irqs_disabled_flags(flags))
  trace_hardirqs_off();
 else
  trace_hardirqs_on();
}

static inline void trace_hardirqs_fixup(void)
{
 unsigned long flags = __raw_local_save_flags();

 trace_hardirqs_fixup_flags(flags);
}
extern void native_load_gs_index(unsigned);
static inline unsigned long get_limit(unsigned long segment)
{
 unsigned long __limit;
 asm("lsll %1,%0" : "=r" (__limit) : "r" (segment));
 return __limit + 1;
}

static inline void native_clts(void)
{
 asm ("clts");
}
static unsigned long __force_order;

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
static inline void clflush( void *__p)
{
 asm ("clflush %0" : "+m" (*( char *)__p));
}



void disable_hlt(void);
void enable_hlt(void);

void cpu_idle_wait(void);

extern unsigned long arch_align_stack(unsigned long sp);
extern void free_init_pages(char *what, unsigned long begin, unsigned long end);

void default_idle(void);
static inline void rdtsc_barrier(void)
{
 asm ("661:\n\t" ".byte 0x66,0x66,0x90\n" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661b\n" " " ".quad" " " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "mfence" "\n664:\n" ".previous" :: "i" ((3*32+17)) : "memory");
 asm ("661:\n\t" ".byte 0x66,0x66,0x90\n" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661b\n" " " ".quad" " " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "lfence" "\n664:\n" ".previous" :: "i" ((3*32+18)) : "memory");
}










struct x8664_pda {
 struct task_struct *pcurrent;
 unsigned long data_offset;

 unsigned long kernelstack;
 unsigned long oldrsp;
 int irqcount;
 unsigned int cpunumber;





 char *irqstackptr;
 short nodenumber;
 short in_bootmem;
 unsigned int __softirq_pending;
 unsigned int __nmi_count;
 short mmu_state;
 short isidle;
 struct mm_struct *active_mm;
 unsigned apic_timer_irqs;
 unsigned irq0_irqs;
 unsigned irq_resched_count;
 unsigned irq_call_count;
 unsigned irq_tlb_count;
 unsigned irq_thermal_count;
 unsigned irq_threshold_count;
 unsigned irq_spurious_count;
} __attribute__((__aligned__((1 << (7)))));

extern struct x8664_pda **_cpu_pda;
extern void pda_init(int);







extern void __bad_pda_field(void) __attribute__((noreturn));





extern struct x8664_pda _proxy_pda;







extern void setup_per_cpu_areas(void);

extern __typeof__(struct x8664_pda) per_cpu__pda;




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
       " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "2b" "," "3b" "\n" " .previous\n"
       : [err] "=r" (*err), "=a" (low), "=d" (high)
       : "c" (msr), [fault] "i" (-14));
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
       " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "2b" "," "3b" "\n" " .previous\n"
       : [err] "=a" (err)
       : "c" (msr), "0" (low), "d" (high),
         [fault] "i" (-14)
       : "memory");
 return err;
}

extern unsigned long long native_read_tsc(void);

static inline __attribute__((always_inline)) unsigned long long __native_read_tsc(void)
{
 unsigned low, high;

 rdtsc_barrier();
 asm ("rdtsc" : "=a" (low), "=d" (high));
 rdtsc_barrier();

 return ((low) | ((u64)(high) << 32));
}

static inline unsigned long long native_read_pmc(int counter)
{
 unsigned low, high;

 asm ("rdpmc" : "=a" (low), "=d" (high) : "c" (counter));
 return ((low) | ((u64)(high) << 32));
}
int rdmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
int wrmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);
int rdmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
int wrmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);



struct exec_domain;
struct pt_regs;

extern int register_exec_domain(struct exec_domain *);
extern int unregister_exec_domain(struct exec_domain *);
extern int __set_personality(unsigned long);
enum {
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
static inline void *current_text_addr(void)
{
 void *pc;

 asm ("mov $1f, %0; 1:":"=r" (pc));

 return pc;
}
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
 __u32 x86_capability[8];
 char x86_vendor_id[16];
 char x86_model_id[64];

 int x86_cache_size;
 int x86_cache_alignment;
 int x86_power;
 unsigned long loops_per_jiffy;


 cpumask_t llc_shared_map;


 u16 x86_max_cores;
 u16 apicid;
 u16 initial_apicid;
 u16 x86_clflush_size;


 u16 booted_cores;

 u16 phys_proc_id;

 u16 cpu_core_id;

 u16 cpu_index;

} __attribute__((__aligned__((1 << (7)))));
extern struct cpuinfo_x86 boot_cpu_data;
extern struct cpuinfo_x86 new_cpu_data;

extern struct tss_struct doublefault_tss;
extern __u32 cleared_cpu_caps[8];


extern __typeof__(struct cpuinfo_x86) per_cpu__cpu_info;







static inline int hlt_works(int cpu)
{



 return 1;

}



extern void cpu_detect(struct cpuinfo_x86 *c);

extern void early_cpu_init(void);
extern void identify_boot_cpu(void);
extern void identify_secondary_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
extern void init_scattered_cpuid_features(struct cpuinfo_x86 *c);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
extern unsigned short num_cache_leaves;


extern void detect_ht(struct cpuinfo_x86 *c);




static inline void native_cpuid(unsigned int *eax, unsigned int *ebx,
    unsigned int *ecx, unsigned int *edx)
{

 asm("cpuid"
     : "=a" (*eax),
       "=b" (*ebx),
       "=c" (*ecx),
       "=d" (*edx)
     : "0" (*eax), "2" (*ecx));
}

static inline void load_cr3(pgd_t *pgdir)
{
 write_cr3(__phys_addr((unsigned long)(pgdir)));
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

} __attribute__((packed)) __attribute__((__aligned__((1 << (7)))));
struct tss_struct {



 struct x86_hw_tss x86_tss;







 unsigned long io_bitmap[((65536/8)/sizeof(long)) + 1];



 unsigned long io_bitmap_max;
 struct thread_struct *io_bitmap_owner;




 unsigned long stack[64];

} __attribute__((__aligned__((1 << (7)))));

extern __typeof__(struct tss_struct) per_cpu__init_tss;




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

 u32 padding[24];

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
 struct info *info;
 u32 entry_eip;
};

union thread_xstate {
 struct i387_fsave_struct fsave;
 struct i387_fxsave_struct fxsave;
 struct i387_soft_struct soft;
};


extern __typeof__(struct orig_ist) per_cpu__orig_ist;


extern void print_cpu_info(struct cpuinfo_x86 *);
extern unsigned int xstate_size;
extern void free_thread_xstate(struct task_struct *);
extern struct kmem_cache *task_xstate_cachep;
extern void init_scattered_cpuid_features(struct cpuinfo_x86 *c);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
extern unsigned short num_cache_leaves;

struct thread_struct {

 struct desc_struct tls_array[3];
 unsigned long sp0;
 unsigned long sp;



 unsigned long usersp;
 unsigned short es;
 unsigned short ds;
 unsigned short fsindex;
 unsigned short gsindex;

 unsigned long ip;
 unsigned long fs;
 unsigned long gs;

 unsigned long debugreg0;
 unsigned long debugreg1;
 unsigned long debugreg2;
 unsigned long debugreg3;
 unsigned long debugreg6;
 unsigned long debugreg7;

 unsigned long cr2;
 unsigned long trap_no;
 unsigned long error_code;

 union thread_xstate *xstate;
 unsigned long *io_bitmap_ptr;
 unsigned long iopl;

 unsigned io_bitmap_max;

 unsigned long debugctlmsr;


 unsigned long ds_area_msr;
};

static inline unsigned long native_get_debugreg(int regno)
{
 unsigned long val = 0;

 switch (regno) {
 case 0:
  asm("mov %%db0, %0" :"=r" (val));
  break;
 case 1:
  asm("mov %%db1, %0" :"=r" (val));
  break;
 case 2:
  asm("mov %%db2, %0" :"=r" (val));
  break;
 case 3:
  asm("mov %%db3, %0" :"=r" (val));
  break;
 case 6:
  asm("mov %%db6, %0" :"=r" (val));
  break;
 case 7:
  asm("mov %%db7, %0" :"=r" (val));
  break;
 default:
  ;
 }
 return val;
}

static inline void native_set_debugreg(int regno, unsigned long value)
{
 switch (regno) {
 case 0:
  asm("mov %0, %%db0" ::"r" (value));
  break;
 case 1:
  asm("mov %0, %%db1" ::"r" (value));
  break;
 case 2:
  asm("mov %0, %%db2" ::"r" (value));
  break;
 case 3:
  asm("mov %0, %%db3" ::"r" (value));
  break;
 case 6:
  asm("mov %0, %%db6" ::"r" (value));
  break;
 case 7:
  asm("mov %0, %%db7" ::"r" (value));
  break;
 default:
  ;
 }
}




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

static inline void set_in_cr4(unsigned long mask)
{
 unsigned cr4;

 mmu_cr4_features |= mask;
 cr4 = read_cr4();
 cr4 |= mask;
 write_cr4(cr4);
}

static inline void clear_in_cr4(unsigned long mask)
{
 unsigned cr4;

 mmu_cr4_features &= ~mask;
 cr4 = read_cr4();
 cr4 &= ~mask;
 write_cr4(cr4);
}

struct microcode_header {
 unsigned int hdrver;
 unsigned int rev;
 unsigned int date;
 unsigned int sig;
 unsigned int cksum;
 unsigned int ldrver;
 unsigned int pf;
 unsigned int datasize;
 unsigned int totalsize;
 unsigned int reserved[3];
};

struct microcode {
 struct microcode_header hdr;
 unsigned int bits[0];
};

typedef struct microcode microcode_t;
typedef struct microcode_header microcode_header_t;


struct extended_signature {
 unsigned int sig;
 unsigned int pf;
 unsigned int cksum;
};

struct extended_sigtable {
 unsigned int count;
 unsigned int cksum;
 unsigned int reserved[3];
 struct extended_signature sigs[0];
};

typedef struct {
 unsigned long seg;
} mm_segment_t;





extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);


extern void release_thread(struct task_struct *);


extern void prepare_to_copy(struct task_struct *tsk);

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

 asm ("cpuid" : "=a" (tmp) : "0" (1)
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
 trace_hardirqs_on();

 asm ("sti; .byte 0x0f, 0x01, 0xc9;"
       :: "a" (eax), "c" (ecx));
}

extern void mwait_idle_with_hints(unsigned long eax, unsigned long ecx);

extern void select_idle_routine( struct cpuinfo_x86 *c);

extern unsigned long boot_option_idle_override;
extern unsigned long idle_halt;
extern unsigned long idle_nomwait;
static inline void wbinvd_halt(void)
{
 asm ("mfence":::"memory");

 if ((__builtin_constant_p((0*32+19)) && ( ((((0*32+19))>>5)==0 && (1UL<<(((0*32+19))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|(1<<((0*32+13) & 31))|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((0*32+19))>>5)==1 && (1UL<<(((0*32+19))&31) & ((1<<((1*32+29) & 31))|0))) || ((((0*32+19))>>5)==2 && (1UL<<(((0*32+19))&31) & 0)) || ((((0*32+19))>>5)==3 && (1UL<<(((0*32+19))&31) & ((1<<((3*32+20) & 31))))) || ((((0*32+19))>>5)==4 && (1UL<<(((0*32+19))&31) & 0)) || ((((0*32+19))>>5)==5 && (1UL<<(((0*32+19))&31) & 0)) || ((((0*32+19))>>5)==6 && (1UL<<(((0*32+19))&31) & 0)) || ((((0*32+19))>>5)==7 && (1UL<<(((0*32+19))&31) & 0)) ) ? 1 : (__builtin_constant_p(((0*32+19))) ? constant_test_bit(((0*32+19)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((0*32+19)), ((unsigned long *)((&boot_cpu_data)->x86_capability))))))
  asm ("cli; wbinvd; 1: hlt; jmp 1b" : : : "memory");
 else
  while (1)
   halt();
}

extern void enable_sep_cpu(void);
extern int sysenter_setup(void);


extern struct desc_ptr early_gdt_descr;

extern void cpu_set_gdt(int);
extern void switch_to_new_gdt(void);
extern void cpu_init(void);
extern void init_gdt(int cpu);

static inline void update_debugctlmsr(unsigned long debugctlmsr)
{




 do { paravirt_write_msr(0x000001d9, (u32)((u64)(debugctlmsr)), ((u64)(debugctlmsr))>>32); } while (0);
}





extern unsigned int machine_id;
extern unsigned int machine_submodel_id;
extern unsigned int BIOS_revision;


extern int bootloader_type;

extern char ignore_fpu_irq;
static inline void prefetch( void *x)
{
 asm ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661b\n" " " ".quad" " " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchnta (%1)" "\n664:\n" ".previous" :: "i" ((0*32+25)), "r" (x))


             ;
}






static inline void prefetchw( void *x)
{
 asm ("661:\n\t" "prefetcht0 (%1)" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661b\n" " " ".quad" " " "663f\n" "	 .byte %c0\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "prefetchw (%1)" "\n664:\n" ".previous" :: "i" ((1*32+31)), "r" (x))


             ;
}

static inline void spin_lock_prefetch( void *x)
{
 prefetchw(x);
}
extern void start_thread(struct pt_regs *regs, unsigned long new_ip,
            unsigned long new_sp);
extern int get_tsc_mode(unsigned long adr);
extern int set_tsc_mode(unsigned int val);

struct thread_info {
 struct task_struct *task;
 struct exec_domain *exec_domain;
 unsigned long flags;
 __u32 status;
 __u32 cpu;
 int preempt_count;

 mm_segment_t addr_limit;
 struct restart_block restart_block;
 void *sysenter_return;






};
static inline struct thread_info *current_thread_info(void)
{
 struct thread_info *ti;
 ti = (void *)(({ typeof(_proxy_pda.kernelstack) ret__; switch (sizeof(_proxy_pda.kernelstack)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (((size_t) &((struct x8664_pda *)0)->kernelstack)), "m" (_proxy_pda.kernelstack)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (((size_t) &((struct x8664_pda *)0)->kernelstack)), "m" (_proxy_pda.kernelstack)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (((size_t) &((struct x8664_pda *)0)->kernelstack)), "m" (_proxy_pda.kernelstack)); break; default: __bad_pda_field(); } ret__; }) + (5*8) - (((1UL) << 12) << 1));
 return ti;
}


static inline struct thread_info *stack_thread_info(void)
{
 struct thread_info *ti;
 asm("andq %%rsp,%0; " : "=r" (ti) : "0" (~((((1UL) << 12) << 1) - 1)));
 return ti;
}
static inline void set_restore_sigmask(void)
{
 struct thread_info *ti = current_thread_info();
 ti->status |= 0x0008;
 set_bit(2, (unsigned long *)&ti->flags);
}



extern void arch_task_cache_init(void);
extern void free_thread_info(struct thread_info *ti);
extern int arch_dup_task_struct(struct task_struct *dst, struct task_struct *src);
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
static inline void prefetch_range(void *addr, size_t len)
{







}
struct exception_table_entry {
 unsigned long insn, fixup;
};

extern int fixup_exception(struct pt_regs *regs);
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
struct task_struct;
struct lockdep_map;
static inline void lockdep_off(void)
{
}

static inline void lockdep_on(void)
{
}
struct lock_class_key { };
extern void early_init_irq_lock_class(void);







extern void early_boot_irqs_off(void);
extern void early_boot_irqs_on(void);
extern void print_irqtrace_events(struct task_struct *curr);







__attribute__((warn_unused_result)) unsigned long
copy_user_generic(void *to, void *from, unsigned len);

__attribute__((warn_unused_result)) unsigned long
copy_to_user(void *to, void *from, unsigned len);
__attribute__((warn_unused_result)) unsigned long
copy_from_user(void *to, void *from, unsigned len);
__attribute__((warn_unused_result)) unsigned long
copy_in_user(void *to, void *from, unsigned len);

static inline __attribute__((always_inline)) __attribute__((warn_unused_result))
int __copy_from_user(void *dst, void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(dst, ( void *)src, size);
 switch (size) {
 case 1:asm ("1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=q"(*(u8 *)dst) : "m" ((*(struct __large_struct *)((u8 *)src))), "i" (1), "0" (ret))
                                ;
  return ret;
 case 2:asm ("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u16 *)dst) : "m" ((*(struct __large_struct *)((u16 *)src))), "i" (2), "0" (ret))
                                ;
  return ret;
 case 4:asm ("1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u32 *)dst) : "m" ((*(struct __large_struct *)((u32 *)src))), "i" (4), "0" (ret))
                                ;
  return ret;
 case 8:asm ("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (8), "0" (ret))
                               ;
  return ret;
 case 10:
  asm ("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (16), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm ("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u16 *)(8 + (char *)dst)) : "m" ((*(struct __large_struct *)((u16 *)(8 + (char *)src)))), "i" (2), "0" (ret))

                                 ;
  return ret;
 case 16:
  asm ("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u64 *)dst) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (16), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm ("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(*(u64 *)(8 + (char *)dst)) : "m" ((*(struct __large_struct *)((u64 *)(8 + (char *)src)))), "i" (8), "0" (ret))

                                ;
  return ret;
 default:
  return copy_user_generic(dst, ( void *)src, size);
 }
}

static inline __attribute__((always_inline)) __attribute__((warn_unused_result))
int __copy_to_user(void *dst, void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst, src, size);
 switch (size) {
 case 1:asm ("1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "iq"(*(u8 *)src), "m" ((*(struct __large_struct *)((u8 *)dst))), "i" (1), "0" (ret))
                                ;
  return ret;
 case 2:asm ("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(*(u16 *)src), "m" ((*(struct __large_struct *)((u16 *)dst))), "i" (2), "0" (ret))
                                ;
  return ret;
 case 4:asm ("1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(*(u32 *)src), "m" ((*(struct __large_struct *)((u32 *)dst))), "i" (4), "0" (ret))
                                ;
  return ret;
 case 8:asm ("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (8), "0" (ret))
                               ;
  return ret;
 case 10:
  asm ("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (10), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm("":::"memory");
  asm ("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(4[(u16 *)src]), "m" ((*(struct __large_struct *)(4 + (u16 *)dst))), "i" (2), "0" (ret))
                                 ;
  return ret;
 case 16:
  asm ("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(*(u64 *)src), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (16), "0" (ret))
                                 ;
  if (__builtin_expect(!!(ret), 0))
   return ret;
  asm("":::"memory");
  asm ("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(1[(u64 *)src]), "m" ((*(struct __large_struct *)(1 + (u64 *)dst))), "i" (8), "0" (ret))
                                ;
  return ret;
 default:
  return copy_user_generic(( void *)dst, src, size);
 }
}

static inline __attribute__((always_inline)) __attribute__((warn_unused_result))
int __copy_in_user(void *dst, void *src, unsigned size)
{
 int ret = 0;
 if (!__builtin_constant_p(size))
  return copy_user_generic(( void *)dst,
      ( void *)src, size);
 switch (size) {
 case 1: {
  u8 tmp;
  asm ("1:	mov""b"" %2,%""b""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""b"" %""b""1,%""b""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=q"(tmp) : "m" ((*(struct __large_struct *)((u8 *)src))), "i" (1), "0" (ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm ("1:	mov""b"" %""b""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "iq"(tmp), "m" ((*(struct __large_struct *)((u8 *)dst))), "i" (1), "0" (ret))
                                  ;
  return ret;
 }
 case 2: {
  u16 tmp;
  asm ("1:	mov""w"" %2,%""w""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""w"" %""w""1,%""w""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(tmp) : "m" ((*(struct __large_struct *)((u16 *)src))), "i" (2), "0" (ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm ("1:	mov""w"" %""w""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(tmp), "m" ((*(struct __large_struct *)((u16 *)dst))), "i" (2), "0" (ret))
                                  ;
  return ret;
 }

 case 4: {
  u32 tmp;
  asm ("1:	mov""l"" %2,%""k""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""l"" %""k""1,%""k""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(tmp) : "m" ((*(struct __large_struct *)((u32 *)src))), "i" (4), "0" (ret))
                                 ;
  if (__builtin_expect(!!(!ret), 1))
   asm ("1:	mov""l"" %""k""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(tmp), "m" ((*(struct __large_struct *)((u32 *)dst))), "i" (4), "0" (ret))
                                  ;
  return ret;
 }
 case 8: {
  u64 tmp;
  asm ("1:	mov""q"" %2,%""""1\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	xor""q"" %""""1,%""""1\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r" (ret), "=r"(tmp) : "m" ((*(struct __large_struct *)((u64 *)src))), "i" (8), "0" (ret))
                                ;
  if (__builtin_expect(!!(!ret), 1))
   asm ("1:	mov""q"" %""""1,%2\n" "2:\n" ".section .fixup,\"ax\"\n" "3:	mov %3,%0\n" "	jmp 2b\n" ".previous\n" " .section __ex_table,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "1b" "," "3b" "\n" " .previous\n" : "=r"(ret) : "ir"(tmp), "m" ((*(struct __large_struct *)((u64 *)dst))), "i" (8), "0" (ret))
                                 ;
  return ret;
 }
 default:
  return copy_user_generic(( void *)dst,
      ( void *)src, size);
 }
}

__attribute__((warn_unused_result)) long
strncpy_from_user(char *dst, char *src, long count);
__attribute__((warn_unused_result)) long
__strncpy_from_user(char *dst, char *src, long count);
__attribute__((warn_unused_result)) long strnlen_user( char *str, long n);
__attribute__((warn_unused_result)) long __strnlen_user( char *str, long n);
__attribute__((warn_unused_result)) long strlen_user( char *str);
__attribute__((warn_unused_result)) unsigned long clear_user(void *mem, unsigned long len);
__attribute__((warn_unused_result)) unsigned long __clear_user(void *mem, unsigned long len);

__attribute__((warn_unused_result)) long __copy_from_user_inatomic(void *dst, void *src,
         unsigned size);

static __attribute__((warn_unused_result)) inline __attribute__((always_inline)) int
__copy_to_user_inatomic(void *dst, void *src, unsigned size)
{
 return copy_user_generic(( void *)dst, src, size);
}

extern long __copy_user_nocache(void *dst, void *src,
    unsigned size, int zerorest);

static inline int __copy_from_user_nocache(void *dst, void *src,
        unsigned size)
{
 do { __might_sleep("../../libos/2.6.27/include/asm/uaccess_64.h", 188); _cond_resched(); } while (0);
 return __copy_user_nocache(dst, src, size, 1);
}

static inline int __copy_from_user_inatomic_nocache(void *dst,
          void *src,
          unsigned size)
{
 return __copy_user_nocache(dst, src, size, 0);
}

unsigned long
copy_user_handle_tail(char *to, char *from, unsigned len, unsigned zerorest);




struct list_head {
 struct list_head *next, *prev;
};






static inline void INIT_LIST_HEAD(struct list_head *list)
{
 list->next = list;
 list->prev = list;
}
extern void __list_add(struct list_head *_new,
         struct list_head *prev,
         struct list_head *next);
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
extern void list_del(struct list_head *entry);
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
 __list_del(entry->prev, entry->next);
 INIT_LIST_HEAD(entry);
}






static inline void list_move(struct list_head *list, struct list_head *head)
{
 __list_del(list->prev, list->next);
 list_add(list, head);
}






static inline void list_move_tail(struct list_head *list,
      struct list_head *head)
{
 __list_del(list->prev, list->next);
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
struct hlist_head {
 struct hlist_node *first;
};

struct hlist_node {
 struct hlist_node *next, **pprev;
};




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
 n->next = ((void *) 0x00100100);
 n->pprev = ((void *) 0x00200200);
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





static inline void hlist_move_list(struct hlist_head *old,
       struct hlist_head *_new)
{
 _new->first = old->first;
 if (_new->first)
  _new->first->pprev = &_new->first;
 old->first = 0;
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
extern void __local_bh_enable(void);
extern void _local_bh_enable(void);
extern void local_bh_enable(void);
extern void local_bh_enable_ip(unsigned long ip);







typedef struct raw_spinlock {
 unsigned int slock;
} raw_spinlock_t;



typedef struct {
 unsigned int lock;
} raw_rwlock_t;






typedef struct {
 raw_spinlock_t raw_lock;
} spinlock_t;



typedef struct {
 raw_rwlock_t raw_lock;
} rwlock_t;

extern int __attribute__((section(".spinlock.text"))) generic__raw_read_trylock(raw_rwlock_t *lock);















typedef struct _atomic {
 int counter;
} atomic_t;
static inline int atomic_sub_return(int i, atomic_t *v)
{
 return 1;
}






typedef struct _atomic64 {
 long counter;
} atomic64_t;
static inline long atomic64_sub_return(long i, atomic64_t *v)
{
 return 1;
}
typedef atomic64_t atomic_long_t;



static inline long atomic_long_read(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)((v)->counter);
}

static inline void atomic_long_set(atomic_long_t *l, long i)
{
 atomic64_t *v = (atomic64_t *)l;

 ;
}

static inline void atomic_long_inc(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 ;
}

static inline void atomic_long_dec(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 ;
}

static inline void atomic_long_add(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 ;
}

static inline void atomic_long_sub(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 ;
}

static inline int atomic_long_sub_and_test(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return 1;
}

static inline int atomic_long_dec_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return 1;
}

static inline int atomic_long_inc_and_test(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return 1;
}

static inline int atomic_long_add_negative(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return 1;
}

static inline long atomic_long_add_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)1;
}

static inline long atomic_long_sub_return(long i, atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)atomic64_sub_return(i, v);
}

static inline long atomic_long_inc_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(1);
}

static inline long atomic_long_dec_return(atomic_long_t *l)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)(atomic64_sub_return(1, (v)));
}

static inline long atomic_long_add_unless(atomic_long_t *l, long a, long u)
{
 atomic64_t *v = (atomic64_t *)l;

 return (long)1;
}
static inline int __ticket_spin_is_locked(raw_spinlock_t *lock)
{
 int tmp = (*( typeof(lock->slock) *)&(lock->slock));

 return (((tmp >> 8) & 0xff) != (tmp & 0xff));
}

static inline int __ticket_spin_is_contended(raw_spinlock_t *lock)
{
 int tmp = (*( typeof(lock->slock) *)&(lock->slock));

 return (((tmp >> 8) - tmp) & 0xff) > 1;
}

static inline __attribute__((always_inline)) void __ticket_spin_lock(raw_spinlock_t *lock)
{
 short inc = 0x0100;

 asm (
  ".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "xaddw %w0, %1\n"
  "1:\t"
  "cmpb %h0, %b0\n\t"
  "je 2f\n\t"
  "rep ; nop\n\t"
  "movb %1, %b0\n\t"

  "jmp 1b\n"
  "2:"
  : "+Q" (inc), "+m" (lock->slock)
  :
  : "memory", "cc");
}

static inline __attribute__((always_inline)) int __ticket_spin_trylock(raw_spinlock_t *lock)
{
 int tmp;
 short _new;

 asm ("movw %2,%w0\n\t"
       "cmpb %h0,%b0\n\t"
       "jne 1f\n\t"
       "movw %w0,%w1\n\t"
       "incb %h1\n\t"
       "lock ; cmpxchgw %w1,%2\n\t"
       "1:"
       "sete %b1\n\t"
       "movzbl %b1,%0\n\t"
       : "=&a" (tmp), "=Q" (_new), "+m" (lock->slock)
       :
       : "memory", "cc");

 return tmp;
}

static inline __attribute__((always_inline)) void __ticket_spin_unlock(raw_spinlock_t *lock)
{
 asm ( "incb %0"
       : "+m" (lock->slock)
       :
       : "memory", "cc");
}
struct __byte_spinlock {
 s8 lock;
 s8 spinners;
};

static inline int __byte_spin_is_locked(raw_spinlock_t *lock)
{
 struct __byte_spinlock *bl = (struct __byte_spinlock *)lock;
 return bl->lock != 0;
}

static inline int __byte_spin_is_contended(raw_spinlock_t *lock)
{
 struct __byte_spinlock *bl = (struct __byte_spinlock *)lock;
 return bl->spinners != 0;
}

static inline void __byte_spin_lock(raw_spinlock_t *lock)
{
 struct __byte_spinlock *bl = (struct __byte_spinlock *)lock;
 s8 val = 1;

 asm("1: xchgb %1, %0\n"
     "   test %1,%1\n"
     "   jz 3f\n"
     "   " ".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "incb %2\n"
     "2: rep;nop\n"
     "   cmpb $1, %0\n"
     "   je 2b\n"
     "   " ".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "decb %2\n"
     "   jmp 1b\n"
     "3:"
     : "+m" (bl->lock), "+q" (val), "+m" (bl->spinners): : "memory");
}

static inline int __byte_spin_trylock(raw_spinlock_t *lock)
{
 struct __byte_spinlock *bl = (struct __byte_spinlock *)lock;
 u8 old = 1;

 asm("xchgb %1,%0"
     : "+m" (bl->lock), "+q" (old) : : "memory");

 return old == 0;
}

static inline void __byte_spin_unlock(raw_spinlock_t *lock)
{
 struct __byte_spinlock *bl = (struct __byte_spinlock *)lock;
 ;
 bl->lock = 0;
}
static inline void __raw_spin_unlock_wait(raw_spinlock_t *lock)
{
 while (__raw_spin_is_locked(lock))
  cpu_relax();
}
static inline int __raw_read_can_lock(raw_rwlock_t *lock)
{
 return (int)(lock)->lock > 0;
}





static inline int __raw_write_can_lock(raw_rwlock_t *lock)
{
 return (lock)->lock == 0x01000000;
}

static inline void __raw_read_lock(raw_rwlock_t *rw)
{
 asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " " subl $1,(%0)\n\t"
       "jns 1f\n"
       "call __read_lock_failed\n\t"
       "1:\n"
       ::"D" (rw) : "memory");
}

static inline void __raw_write_lock(raw_rwlock_t *rw)
{
 asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " " subl %1,(%0)\n\t"
       "jz 1f\n"
       "call __write_lock_failed\n\t"
       "1:\n"
       ::"D" (rw), "i" (0x01000000) : "memory");
}

static inline int __raw_read_trylock(raw_rwlock_t *lock)
{
 atomic_t *count = (atomic_t *)lock;

 ;
 if (((count)->counter) >= 0)
  return 1;
 ;
 return 0;
}

static inline int __raw_write_trylock(raw_rwlock_t *lock)
{
 atomic_t *count = (atomic_t *)lock;

 if (1)
  return 1;
 ;
 return 0;
}

static inline void __raw_read_unlock(raw_rwlock_t *rw)
{
 asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "incl %0" :"+m" (rw->lock) : : "memory");
}

static inline void __raw_write_unlock(raw_rwlock_t *rw)
{
 asm (".section .smp_locks,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661f\n" ".previous\n" "661:\n\tlock; " "addl %1, %0"
       : "+m" (rw->lock) : "i" (0x01000000) : "memory");
}
int in_lock_functions(unsigned long addr);



void __attribute__((section(".spinlock.text"))) _spin_lock(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_lock_nested(spinlock_t *lock, int subclass)
       ;
void __attribute__((section(".spinlock.text"))) _spin_lock_nest_lock(spinlock_t *lock, struct lockdep_map *map)
       ;
void __attribute__((section(".spinlock.text"))) _read_lock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_lock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_lock_bh(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _read_lock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_lock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_lock_irq(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _read_lock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_lock_irq(rwlock_t *lock) ;
unsigned long __attribute__((section(".spinlock.text"))) _spin_lock_irqsave(spinlock_t *lock)
       ;
unsigned long __attribute__((section(".spinlock.text"))) _spin_lock_irqsave_nested(spinlock_t *lock, int subclass)
       ;
unsigned long __attribute__((section(".spinlock.text"))) _read_lock_irqsave(rwlock_t *lock)
       ;
unsigned long __attribute__((section(".spinlock.text"))) _write_lock_irqsave(rwlock_t *lock)
       ;
int __attribute__((section(".spinlock.text"))) _spin_trylock(spinlock_t *lock);
int __attribute__((section(".spinlock.text"))) _read_trylock(rwlock_t *lock);
int __attribute__((section(".spinlock.text"))) _write_trylock(rwlock_t *lock);
int __attribute__((section(".spinlock.text"))) _spin_trylock_bh(spinlock_t *lock);
void __attribute__((section(".spinlock.text"))) _spin_unlock(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _read_unlock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_unlock(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_unlock_bh(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _read_unlock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_unlock_bh(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_unlock_irq(spinlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _read_unlock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _write_unlock_irq(rwlock_t *lock) ;
void __attribute__((section(".spinlock.text"))) _spin_unlock_irqrestore(spinlock_t *lock, unsigned long flags)
       ;
void __attribute__((section(".spinlock.text"))) _read_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
       ;
void __attribute__((section(".spinlock.text"))) _write_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
       ;
extern int _atomic_dec_and_lock(atomic_t *atomic, spinlock_t *lock);


typedef struct {
 unsigned sequence;
 spinlock_t lock;
} seqlock_t;
static inline void write_seqlock(seqlock_t *sl)
{
 ;
 ++sl->sequence;
 ;
}

static inline void write_sequnlock(seqlock_t *sl)
{
 ;
 sl->sequence++;
 ;
}

static inline int write_tryseqlock(seqlock_t *sl)
{
 int ret = 1;

 if (ret) {
  ++sl->sequence;
  ;
 }
 return ret;
}
typedef struct seqcount {
 unsigned sequence;
} seqcount_t;





static inline unsigned read_seqcount_begin( seqcount_t *s)
{
 unsigned ret;

repeat:
 ret = s->sequence;
 ;
 if (__builtin_expect(!!(ret & 1), 0)) {
  cpu_relax();
  goto repeat;
 }
 return ret;
}




static inline int read_seqcount_retry( seqcount_t *s, unsigned start)
{
 ;

 return s->sequence != start;
}






static inline void write_seqcount_begin(seqcount_t *s)
{
 s->sequence++;
 ;
}

static inline void write_seqcount_end(seqcount_t *s)
{
 ;
 s->sequence++;
}




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




static inline u64 div64_u64(u64 dividend, u64 divisor)
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




struct timespec {
 time_t tv_sec;
 long tv_nsec;
};


struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};

struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
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

extern void set_normalized_timespec(struct timespec *ts, time_t sec, long nsec);




static inline struct timespec timespec_sub(struct timespec lhs,
      struct timespec rhs)
{
 struct timespec ts_delta;
 set_normalized_timespec(&ts_delta, lhs.tv_sec - rhs.tv_sec,
    lhs.tv_nsec - rhs.tv_nsec);
 return ts_delta;
}







extern struct timespec xtime;
extern struct timespec wall_to_monotonic;
extern seqlock_t xtime_lock;

extern unsigned long read_persistent_clock(void);
extern int update_persistent_clock(struct timespec now);
extern int no_sync_cmos_clock __attribute__((__section__(".data.read_mostly")));
void timekeeping_init(void);
extern int timekeeping_suspended;

unsigned long get_seconds(void);
struct timespec current_kernel_time(void);




extern void do_gettimeofday(struct timeval *tv);
extern int do_settimeofday(struct timespec *tv);
extern int do_sys_settimeofday(struct timespec *tv, struct timezone *tz);

extern long do_utimes(int dfd, char *filename, struct timespec *times, int flags);
struct itimerval;
extern int do_setitimer(int which, struct itimerval *value,
   struct itimerval *ovalue);
extern unsigned int alarm_setitimer(unsigned int seconds);
extern int do_getitimer(int which, struct itimerval *value);
extern void getnstimeofday(struct timespec *tv);
extern void getboottime(struct timespec *ts);
extern void monotonic_to_bootbased(struct timespec *ts);

extern struct timespec timespec_trunc(struct timespec t, unsigned gran);
extern int timekeeping_valid_for_hres(void);
extern void update_wall_time(void);
extern void update_xtime_cache(u64 nsec);
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
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};

struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};

struct kstat {
 u64 ino;
 dev_t dev;
 umode_t mode;
 unsigned int nlink;
 uid_t uid;
 gid_t gid;
 dev_t rdev;
 loff_t size;
 struct timespec atime;
 struct timespec mtime;
 struct timespec ctime;
 unsigned long blksize;
 unsigned long long blocks;
};





typedef struct __wait_queue wait_queue_t;
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int sync, void *key);
int default_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);

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
extern void init_waitqueue_head(wait_queue_head_t *q);
static inline void init_waitqueue_entry(wait_queue_t *q, struct task_struct *p)
{
 q->flags = 0;
 q->_private = p;
 q->func = default_wake_function;
}

static inline void init_waitqueue_func_entry(wait_queue_t *q,
     wait_queue_func_t func)
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




static inline void __add_wait_queue_tail(wait_queue_head_t *head,
      wait_queue_t *_new)
{
 list_add_tail(&_new->task_list, &head->task_list);
}

static inline void __remove_wait_queue(wait_queue_head_t *head,
       wait_queue_t *old)
{
 list_del(&old->task_list);
}

void __wake_up_common(wait_queue_head_t *q, unsigned int mode,
   int nr_exclusive, int sync, void *key);
void __wake_up(wait_queue_head_t *q, unsigned int mode, int nr, void *key);
extern void __wake_up_locked(wait_queue_head_t *q, unsigned int mode);
extern void __wake_up_sync(wait_queue_head_t *q, unsigned int mode, int nr);
void __wake_up_bit(wait_queue_head_t *, void *, int);
int __wait_on_bit(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
int __wait_on_bit_lock(wait_queue_head_t *, struct wait_bit_queue *, int (*)(void *), unsigned);
void wake_up_bit(void *, int);
int out_of_line_wait_on_bit(void *, int, int (*)(void *), unsigned);
int out_of_line_wait_on_bit_lock(void *, int, int (*)(void *), unsigned);
wait_queue_head_t *bit_waitqueue(void *, int);
static inline void add_wait_queue_exclusive_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 wait->flags |= 0x01;
 __add_wait_queue_tail(q, wait);
}




static inline void remove_wait_queue_locked(wait_queue_head_t *q,
         wait_queue_t * wait)
{
 __remove_wait_queue(q, wait);
}






extern void sleep_on(wait_queue_head_t *q);
extern long sleep_on_timeout(wait_queue_head_t *q,
          signed long timeout);
extern void interruptible_sleep_on(wait_queue_head_t *q);
extern long interruptible_sleep_on_timeout(wait_queue_head_t *q,
        signed long timeout);




void prepare_to_wait(wait_queue_head_t *q, wait_queue_t *wait, int state);
void prepare_to_wait_exclusive(wait_queue_head_t *q, wait_queue_t *wait, int state);
void finish_wait(wait_queue_head_t *q, wait_queue_t *wait);
void abort_exclusive_wait(wait_queue_head_t *q, wait_queue_t *wait,
   unsigned int mode, void *key);
int autoremove_wake_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
int wake_bit_function(wait_queue_t *wait, unsigned mode, int sync, void *key);
static inline int wait_on_bit(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
        if (!(__builtin_constant_p((bit)) ? constant_test_bit((bit), ((unsigned long *)word)) : variable_test_bit((bit), ((unsigned long *)word))))
  return 0;
 return out_of_line_wait_on_bit(word, bit, action, mode);
}
static inline int wait_on_bit_lock(void *word, int bit,
    int (*action)(void *), unsigned mode)
{
 if (!test_and_set_bit(bit, (unsigned long *)word))
  return 0;
 return out_of_line_wait_on_bit_lock(word, bit, action, mode);
}





typedef struct { unsigned long bits[((((1 << 9)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))]; } nodemask_t;
extern nodemask_t _unused_nodemask_arg_;


static inline void __node_set(int node, nodemask_t *dstp)
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
 return ({ int __min1 = ((1 << 9)); int __min2 = (find_first_bit(srcp->bits, (1 << 9))); __min1 < __min2 ? __min1: __min2; });
}


static inline int __next_node(int n, nodemask_t *srcp)
{
 return ({ int __min1 = ((1 << 9)); int __min2 = (find_next_bit(srcp->bits, (1 << 9), n+1)); __min1 < __min2 ? __min1: __min2; });
}
static inline int __first_unset_node( nodemask_t *maskp)
{
 return ({ int __min1 = ((1 << 9)); int __min2 = (find_first_zero_bit(maskp->bits, (1 << 9))); __min1 < __min2 ? __min1: __min2; })
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
 return __nodes_weight(&(node_states[state]), (1 << 9));
}







extern int nr_node_ids;
enum pageblock_bits {
 PB_migrate,
 PB_migrate_end = PB_migrate + 3 - 1,

 NR_PAGEBLOCK_BITS
};
struct page;


unsigned long get_pageblock_flags_group(struct page *page,
     int start_bitidx, int end_bitidx);
void set_pageblock_flags_group(struct page *page, unsigned long flags,
     int start_bitidx, int end_bitidx);
extern int page_group_by_mobility_disabled;

static inline int get_pageblock_migratetype(struct page *page)
{
 if (__builtin_expect(!!(page_group_by_mobility_disabled), 0))
  return 0;

 return get_pageblock_flags_group(page, PB_migrate, PB_migrate_end);
}

struct free_area {
 struct list_head free_list[5];
 unsigned long nr_free;
};

struct pglist_data;
struct zone_padding {
 char x[0];
} __attribute__((__aligned__(1 << ((7)))));





enum zone_stat_item {

 NR_FREE_PAGES,
 NR_INACTIVE,
 NR_ACTIVE,
 NR_ANON_PAGES,
 NR_FILE_MAPPED,

 NR_FILE_PAGES,
 NR_FILE_DIRTY,
 NR_WRITEBACK,

 NR_SLAB_RECLAIMABLE,
 NR_SLAB_UNRECLAIMABLE,
 NR_PAGETABLE,
 NR_UNSTABLE_NFS,
 NR_BOUNCE,
 NR_VMSCAN_WRITE,
 NR_WRITEBACK_TEMP,

 NUMA_HIT,
 NUMA_MISS,
 NUMA_FOREIGN,
 NUMA_INTERLEAVE_HIT,
 NUMA_LOCAL,
 NUMA_OTHER,

 NR_VM_ZONE_STAT_ITEMS };

struct per_cpu_pages {
 int count;
 int high;
 int batch;
 struct list_head list;
};

struct per_cpu_pageset {
 struct per_cpu_pages pcp;

 s8 expire;


 s8 stat_threshold;
 s8 vm_stat_diff[NR_VM_ZONE_STAT_ITEMS];

} __attribute__((__aligned__((1 << (7)))));
enum zone_type {
 ZONE_DMA,







 ZONE_DMA32,






 ZONE_NORMAL,
 ZONE_MOVABLE,
 __MAX_NR_ZONES
};
struct zone {

 unsigned long pages_min, pages_low, pages_high;
 unsigned long lowmem_reserve[4];


 int node;



 unsigned long min_unmapped_pages;
 unsigned long min_slab_pages;
 struct per_cpu_pageset *pageset[64];






 spinlock_t lock;




 struct free_area free_area[11];
 struct zone_padding _pad1_;


 spinlock_t lru_lock;
 struct list_head active_list;
 struct list_head inactive_list;
 unsigned long nr_scan_active;
 unsigned long nr_scan_inactive;
 unsigned long pages_scanned;
 unsigned long flags;


 atomic_long_t vm_stat[NR_VM_ZONE_STAT_ITEMS];
 int prev_priority;


 struct zone_padding _pad2_;
 wait_queue_head_t * wait_table;
 unsigned long wait_table_hash_nr_entries;
 unsigned long wait_table_bits;




 struct pglist_data *zone_pgdat;

 unsigned long zone_start_pfn;
 unsigned long spanned_pages;
 unsigned long present_pages;




 char *name;
} __attribute__((__aligned__(1 << ((7)))));

typedef enum {
 ZONE_ALL_UNRECLAIMABLE,
 ZONE_RECLAIM_LOCKED,
 ZONE_OOM_LOCKED,
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

static inline int zone_is_all_unreclaimable( struct zone *zone)
{
 return (__builtin_constant_p((ZONE_ALL_UNRECLAIMABLE)) ? constant_test_bit((ZONE_ALL_UNRECLAIMABLE), (&zone->flags)) : variable_test_bit((ZONE_ALL_UNRECLAIMABLE), (&zone->flags)));
}

static inline int zone_is_reclaim_locked( struct zone *zone)
{
 return (__builtin_constant_p((ZONE_RECLAIM_LOCKED)) ? constant_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_RECLAIM_LOCKED), (&zone->flags)));
}

static inline int zone_is_oom_locked( struct zone *zone)
{
 return (__builtin_constant_p((ZONE_OOM_LOCKED)) ? constant_test_bit((ZONE_OOM_LOCKED), (&zone->flags)) : variable_test_bit((ZONE_OOM_LOCKED), (&zone->flags)));
}
struct zonelist_cache {
 unsigned short z_to_n[((1 << 9) * 4)];
 unsigned long fullzones[(((((1 << 9) * 4)) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
 unsigned long last_full_zap;
};
struct zoneref {
 struct zone *zone;
 int zone_idx;
};
struct zonelist {
 struct zonelist_cache *zlcache_ptr;
 struct zoneref _zonerefs[((1 << 9) * 4) + 1];

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



 struct bootmem_data *bdata;
 unsigned long node_start_pfn;
 unsigned long node_present_pages;
 unsigned long node_spanned_pages;

 int node_id;
 wait_queue_head_t kswapd_wait;
 struct task_struct *kswapd;
 int kswapd_max_order;
} pg_data_t;




struct mutex {

 atomic_t count;
 spinlock_t wait_lock;
 struct list_head wait_list;
};





struct mutex_waiter {
 struct list_head list;
 struct task_struct *task;




};

struct rw_semaphore;


struct rwsem_waiter;
struct rw_semaphore {
 __s32 activity;
 spinlock_t wait_lock;
 struct list_head wait_list;



};
extern void __init_rwsem(struct rw_semaphore *sem, char *name,
    struct lock_class_key *key);
extern void __down_read(struct rw_semaphore *sem);
extern int __down_read_trylock(struct rw_semaphore *sem);
extern void __down_write(struct rw_semaphore *sem);
extern void __down_write_nested(struct rw_semaphore *sem, int subclass);
extern int __down_write_trylock(struct rw_semaphore *sem);
extern void __up_read(struct rw_semaphore *sem);
extern void __up_write(struct rw_semaphore *sem);
extern void __downgrade_write(struct rw_semaphore *sem);

static inline int rwsem_is_locked(struct rw_semaphore *sem)
{
 return (sem->activity != 0);
}
struct srcu_struct_array {
 int c[2];
};

struct srcu_struct {
 int completed;
 struct srcu_struct_array *per_cpu_ref;
 struct mutex mutex;
};







int init_srcu_struct(struct srcu_struct *sp);
void cleanup_srcu_struct(struct srcu_struct *sp);
int srcu_read_lock(struct srcu_struct *sp) ;
void srcu_read_unlock(struct srcu_struct *sp, int idx) ;
void synchronize_srcu(struct srcu_struct *sp);
long srcu_batches_completed(struct srcu_struct *sp);
struct notifier_block {
 int (*notifier_call)(struct notifier_block *, unsigned long, void *);
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
 return 0x8000 | (0x0001 - err);
}


static inline int notifier_to_errno(int ret)
{
 ret &= ~0x8000;
 return ret > 0x0001 ? 0x0001 - ret : 0;
}
extern struct blocking_notifier_head reboot_notifier_list;

struct page;
struct zone;
struct pglist_data;
struct mem_section;
static inline void pgdat_resize_lock(struct pglist_data *p, unsigned long *f) {}
static inline void pgdat_resize_unlock(struct pglist_data *p, unsigned long *f) {}
static inline void pgdat_resize_init(struct pglist_data *pgdat) {}

static inline unsigned zone_span_seqbegin(struct zone *zone)
{
 return 0;
}
static inline int zone_span_seqretry(struct zone *zone, unsigned iv)
{
 return 0;
}
static inline void zone_span_writelock(struct zone *zone) {}
static inline void zone_span_writeunlock(struct zone *zone) {}
static inline void zone_seqlock_init(struct zone *zone) {}

static inline int mhp_notimplemented( char *func)
{
 printk("<4>" "%s() called, with CONFIG_MEMORY_HOTPLUG disabled\n", func);
 dump_stack();
 return -38;
}

static inline void register_page_bootmem_info_node(struct pglist_data *pgdat)
{
}







extern int walk_memory_resource(unsigned long start_pfn,
   unsigned long nr_pages, void *arg,
   int (*func)(unsigned long, unsigned long, void *));






static inline int is_mem_section_removable(unsigned long pfn,
     unsigned long nr_pages)
{
 return 0;
}


extern int add_memory(int nid, u64 start, u64 size);
extern int arch_add_memory(int nid, u64 start, u64 size);
extern int remove_memory(u64 start, u64 size);
extern int sparse_add_one_section(struct zone *zone, unsigned long start_pfn,
        int nr_pages);
extern void sparse_remove_one_section(struct zone *zone, struct mem_section *ms);
extern struct page *sparse_decode_mem_map(unsigned long coded_mem_map,
       unsigned long pnum);

void get_zone_counts(unsigned long *active, unsigned long *inactive,
   unsigned long *free);
void build_all_zonelists(void);
void wakeup_kswapd(struct zone *zone, int order);
int zone_watermark_ok(struct zone *z, int order, unsigned long mark,
  int classzone_idx, int alloc_flags);
enum memmap_context {
 MEMMAP_EARLY,
 MEMMAP_HOTPLUG,
};
extern int init_currently_empty_zone(struct zone *zone, unsigned long start_pfn,
         unsigned long size,
         enum memmap_context context);


void memory_present(int nid, unsigned long start, unsigned long end);
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

static inline int is_normal_idx(enum zone_type idx)
{
 return (idx == ZONE_NORMAL);
}







static inline int is_highmem(struct zone *zone)
{






 return 0;

}

static inline int is_normal(struct zone *zone)
{
 return zone == zone->zone_pgdat->node_zones + ZONE_NORMAL;
}

static inline int is_dma32(struct zone *zone)
{

 return zone == zone->zone_pgdat->node_zones + ZONE_DMA32;



}

static inline int is_dma(struct zone *zone)
{

 return zone == zone->zone_pgdat->node_zones + ZONE_DMA;



}


struct ctl_table;
struct file;
int min_free_kbytes_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
extern int sysctl_lowmem_reserve_ratio[4 -1];
int lowmem_reserve_ratio_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int percpu_pagelist_fraction_sysctl_handler(struct ctl_table *, int, struct file *,
     void *, size_t *, loff_t *);
int sysctl_min_unmapped_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);
int sysctl_min_slab_ratio_sysctl_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);

extern int numa_zonelist_order_handler(struct ctl_table *, int,
   struct file *, void *, size_t *, loff_t *);
extern char numa_zonelist_order[];


extern void cpu_idle(void);

struct call_single_data {
 struct list_head list;
 void (*func) (void *info);
 void *info;
 unsigned int flags;
};












struct intel_mp_floating {
 char mpf_signature[4];
 unsigned int mpf_physptr;
 unsigned char mpf_length;
 unsigned char mpf_specification;
 unsigned char mpf_checksum;
 unsigned char mpf_feature1;
 unsigned char mpf_feature2;
 unsigned char mpf_feature3;
 unsigned char mpf_feature4;
 unsigned char mpf_feature5;
};



struct mp_config_table {
 char mpc_signature[4];
 unsigned short mpc_length;
 char mpc_spec;
 char mpc_checksum;
 char mpc_oem[8];
 char mpc_productid[12];
 unsigned int mpc_oemptr;
 unsigned short mpc_oemsize;
 unsigned short mpc_oemcount;
 unsigned int mpc_lapic;
 unsigned int reserved;
};
struct mpc_config_processor {
 unsigned char mpc_type;
 unsigned char mpc_apicid;
 unsigned char mpc_apicver;
 unsigned char mpc_cpuflag;
 unsigned int mpc_cpufeature;
 unsigned int mpc_featureflag;
 unsigned int mpc_reserved[2];
};

struct mpc_config_bus {
 unsigned char mpc_type;
 unsigned char mpc_busid;
 unsigned char mpc_bustype[6];
};
struct mpc_config_ioapic {
 unsigned char mpc_type;
 unsigned char mpc_apicid;
 unsigned char mpc_apicver;
 unsigned char mpc_flags;
 unsigned int mpc_apicaddr;
};

struct mpc_config_intsrc {
 unsigned char mpc_type;
 unsigned char mpc_irqtype;
 unsigned short mpc_irqflag;
 unsigned char mpc_srcbus;
 unsigned char mpc_srcbusirq;
 unsigned char mpc_dstapic;
 unsigned char mpc_dstirq;
};

enum mp_irq_source_types {
 mp_INT = 0,
 mp_NMI = 1,
 mp_SMI = 2,
 mp_ExtINT = 3
};







struct mpc_config_lintsrc {
 unsigned char mpc_type;
 unsigned char mpc_irqtype;
 unsigned short mpc_irqflag;
 unsigned char mpc_srcbusid;
 unsigned char mpc_srcbusirq;
 unsigned char mpc_destapic;
 unsigned char mpc_destapiclint;
};



struct mp_config_oemtable {
 char oem_signature[4];
 unsigned short oem_length;
 char oem_rev;
 char oem_checksum;
 char mpc_oem[8];
};
enum mp_bustype {
 MP_BUS_ISA = 1,
 MP_BUS_EISA,
 MP_BUS_PCI,
 MP_BUS_MCA,
};
extern void early_find_smp_config(void);
extern void early_get_smp_config(void);





extern unsigned long mp_bus_not_pci[(((256) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];

extern unsigned int boot_cpu_physical_apicid;
extern unsigned int max_physical_apicid;
extern int smp_found_config;
extern int mpc_default_type;
extern unsigned long mp_lapic_addr;

extern void find_smp_config(void);
extern void get_smp_config(void);

extern void early_reserve_e820_mpc_new(void);




void __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) generic_processor_info(int apicid, int version);

extern void mp_register_ioapic(int id, u32 address, u32 gsi_base);
extern void mp_override_legacy_irq(u8 bus_irq, u8 polarity, u8 trigger,
       u32 gsi);
extern void mp_config_acpi_legacy_irqs(void);
extern int mp_register_gsi(u32 gsi, int edge_level, int active_high_low);

extern int mp_config_acpi_gsi(unsigned char number, unsigned int devfn, u8 pin,
    u32 gsi, int triggering, int polarity);
struct physid_mask {
 unsigned long mask[(((255) + (8 * sizeof(long)) - 1) / (8 * sizeof(long)))];
};

typedef struct physid_mask physid_mask_t;
static inline void physid_set_mask_of_physid(int physid, physid_mask_t *map)
{
 bitmap_zero((*map).mask, 255);
 set_bit(physid, (*map).mask);
}




extern physid_mask_t phys_cpu_present_map;



extern void (*pm_idle)(void);
extern void (*pm_power_off)(void);
extern void (*pm_power_off_prepare)(void);





struct device;

typedef struct pm_message {
 int event;
} pm_message_t;
struct pm_ops {
 int (*prepare)(struct device *dev);
 void (*complete)(struct device *dev);
 int (*suspend)(struct device *dev);
 int (*resume)(struct device *dev);
 int (*freeze)(struct device *dev);
 int (*thaw)(struct device *dev);
 int (*poweroff)(struct device *dev);
 int (*restore)(struct device *dev);
};
struct pm_ext_ops {
 struct pm_ops base;
 int (*suspend_noirq)(struct device *dev);
 int (*resume_noirq)(struct device *dev);
 int (*freeze_noirq)(struct device *dev);
 int (*thaw_noirq)(struct device *dev);
 int (*poweroff_noirq)(struct device *dev);
 int (*restore_noirq)(struct device *dev);
};
enum dpm_state {
 DPM_INVALID,
 DPM_ON,
 DPM_PREPARING,
 DPM_RESUMING,
 DPM_SUSPENDING,
 DPM_OFF,
 DPM_OFF_IRQ,
};

struct dev_pm_info {
 pm_message_t power_state;
 unsigned can_wakeup:1;
 unsigned should_wakeup:1;
 enum dpm_state status;

 struct list_head entry;

};
extern void device_pm_lock(void);
extern void device_power_up(pm_message_t state);
extern void device_resume(pm_message_t state);

extern void device_pm_unlock(void);
extern int device_power_down(pm_message_t state);
extern int device_suspend(pm_message_t state);
extern int device_prepare_suspend(pm_message_t state);

extern void __suspend_report_result( char *function, void *fn, int ret);
extern unsigned int pm_flags;
extern unsigned long loops_per_jiffy;

extern void __bad_udelay(void);
extern void __bad_ndelay(void);

extern void __udelay(unsigned long usecs);
extern void __ndelay(unsigned long nsecs);
extern void __const_udelay(unsigned long xloops);
extern void __delay(unsigned long loops);
void use_tsc_delay(void);
extern unsigned long lpj_fine;
void calibrate_delay(void);
void msleep(unsigned int msecs);
unsigned long msleep_interruptible(unsigned int msecs);

static inline void ssleep(unsigned int seconds)
{
 msleep(seconds * 1000);
}
















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

struct bootnode {
 u64 start;
 u64 end;
};

extern int compute_hash_shift(struct bootnode *nodes, int numblks,
         int *nodeids);



extern void numa_init_array(void);
extern int numa_off;

extern void srat_reserve_add_area(int nodeid);
extern int hotadd_percent;

extern s16 apicid_to_node[32768];

extern unsigned long numa_free_all_bootmem(void);
extern void setup_node_bootmem(int nodeid, unsigned long start,
          unsigned long end);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) init_cpu_to_node(void);
extern void __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) numa_set_node(int cpu, int node);
extern void __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) numa_clear_node(int cpu);
extern void __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) numa_add_cpu(int cpu);
extern void __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) numa_remove_cpu(int cpu);

typedef struct {
 void *ldt;

 rwlock_t ldtlock;

 int size;
 struct mutex lock;
 void *vdso;
} mm_context_t;


void leave_mm(int cpu);
int __acpi_acquire_global_lock(unsigned int *lock);
int __acpi_release_global_lock(unsigned int *lock);
extern int acpi_lapic;
extern int acpi_ioapic;
extern int acpi_noirq;
extern int acpi_strict;
extern int acpi_disabled;
extern int acpi_ht;
extern int acpi_pci_disabled;
extern int acpi_skip_timer_override;
extern int acpi_use_timer_override;

extern u8 acpi_sci_flags;
extern int acpi_sci_override_gsi;
void acpi_pic_sci_set_trigger(unsigned int, u16);

static inline void disable_acpi(void)
{
 acpi_disabled = 1;
 acpi_ht = 0;
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
extern int acpi_irq_balance_set(char *str);


extern int acpi_save_state_mem(void);
extern void acpi_restore_state_mem(void);

extern unsigned long acpi_wakeup_address;


extern void acpi_reserve_bootmem(void);




static inline unsigned int acpi_processor_cstate_check(unsigned int max_cstate)
{






 if (boot_cpu_data.x86 == 0x0F &&
     boot_cpu_data.x86_vendor == 2 &&
     boot_cpu_data.x86_model <= 0x05 &&
     boot_cpu_data.x86_mask < 0x0A)
  return 1;
 else if ((__builtin_constant_p((3*32+21)) && ( ((((3*32+21))>>5)==0 && (1UL<<(((3*32+21))&31) & ((1<<((0*32+ 0) & 31))|0|(1<<((0*32+ 5) & 31))|(1<<((0*32+ 6) & 31))| (1<<((0*32+ 8) & 31))|(1<<((0*32+13) & 31))|(1<<((0*32+24) & 31))|(1<<((0*32+15) & 31))| (1<<((0*32+25) & 31))|(1<<((0*32+26) & 31))))) || ((((3*32+21))>>5)==1 && (1UL<<(((3*32+21))&31) & ((1<<((1*32+29) & 31))|0))) || ((((3*32+21))>>5)==2 && (1UL<<(((3*32+21))&31) & 0)) || ((((3*32+21))>>5)==3 && (1UL<<(((3*32+21))&31) & ((1<<((3*32+20) & 31))))) || ((((3*32+21))>>5)==4 && (1UL<<(((3*32+21))&31) & 0)) || ((((3*32+21))>>5)==5 && (1UL<<(((3*32+21))&31) & 0)) || ((((3*32+21))>>5)==6 && (1UL<<(((3*32+21))&31) & 0)) || ((((3*32+21))>>5)==7 && (1UL<<(((3*32+21))&31) & 0)) ) ? 1 : (__builtin_constant_p(((3*32+21))) ? constant_test_bit(((3*32+21)), ((unsigned long *)((&boot_cpu_data)->x86_capability))) : variable_test_bit(((3*32+21)), ((unsigned long *)((&boot_cpu_data)->x86_capability))))))
  return 1;
 else
  return max_cstate;
}
struct bootnode;


extern int acpi_numa;
extern int acpi_scan_nodes(unsigned long start, unsigned long end);

extern void acpi_fake_nodes( struct bootnode *fake_nodes,
       int num_nodes);





enum vsyscall_num {
 __NR_vgettimeofday,
 __NR_vtime,
 __NR_vgetcpu,
};
extern int __vgetcpu_mode;
extern unsigned long __jiffies;


extern int vgetcpu_mode;
extern struct timezone sys_tz;

extern void map_vsyscall(void);
extern u64 efi_call0(void *fp);
extern u64 efi_call1(void *fp, u64 arg1);
extern u64 efi_call2(void *fp, u64 arg1, u64 arg2);
extern u64 efi_call3(void *fp, u64 arg1, u64 arg2, u64 arg3);
extern u64 efi_call4(void *fp, u64 arg1, u64 arg2, u64 arg3, u64 arg4);
extern u64 efi_call5(void *fp, u64 arg1, u64 arg2, u64 arg3,
       u64 arg4, u64 arg5);
extern u64 efi_call6(void *fp, u64 arg1, u64 arg2, u64 arg3,
       u64 arg4, u64 arg5, u64 arg6);
extern void *efi_ioremap(unsigned long addr, unsigned long size);



extern void efi_reserve_early(void);
extern void efi_call_phys_prelog(void);
extern void efi_call_phys_epilog(void);
enum fixed_addresses {
 VSYSCALL_LAST_PAGE,
 VSYSCALL_FIRST_PAGE = VSYSCALL_LAST_PAGE
       + (((-2UL << 20)-(-10UL << 20)) >> 12) - 1,
 VSYSCALL_HPET,
 FIX_DBGP_BASE,
 FIX_EARLYCON_MEM_BASE,
 FIX_APIC_BASE,
 FIX_IO_APIC_BASE_0,
 FIX_IO_APIC_BASE_END = FIX_IO_APIC_BASE_0 + 128 - 1,
 FIX_EFI_IO_MAP_LAST_PAGE,
 FIX_EFI_IO_MAP_FIRST_PAGE = FIX_EFI_IO_MAP_LAST_PAGE
      + 100 - 1,

 FIX_PARAVIRT_BOOTMAP,


 FIX_ACPI_BEGIN,
 FIX_ACPI_END = FIX_ACPI_BEGIN + 4 - 1,


 FIX_OHCI1394_BASE,

 __end_of_permanent_fixed_addresses,
 FIX_BTMAP_END = __end_of_permanent_fixed_addresses + 512 -
   (__end_of_permanent_fixed_addresses & 511),
 FIX_BTMAP_BEGIN = FIX_BTMAP_END + 64*4 - 1,
 __end_of_fixed_addresses
};


extern int fixmaps_set;

void __native_set_fixmap(enum fixed_addresses idx, pte_t pte);
void native_set_fixmap(enum fixed_addresses idx,
         unsigned long phys, pgprot_t flags);
extern void __this_fixmap_does_not_exist(void);






static inline __attribute__((always_inline)) unsigned long fix_to_virt( unsigned int idx)
{
 if (idx >= __end_of_fixed_addresses)
  __this_fixmap_does_not_exist();

 return (((-2UL << 20)-((1UL) << 12)) - ((idx) << 12));
}

static inline unsigned long virt_to_fix( unsigned long vaddr)
{
 ;
 return ((((-2UL << 20)-((1UL) << 12)) - ((vaddr)&(~(((1UL) << 12)-1)))) >> 12);
}
extern void generic_apic_probe(void);



extern unsigned int apic_verbosity;
extern int local_apic_timer_c2_ok;

extern int ioapic_force;

extern int disable_apic;
extern int is_vsmp_box(void);

static inline void native_apic_write(unsigned long reg, u32 v)
{
 u32 *addr = ( u32 *)((fix_to_virt(FIX_APIC_BASE)) + reg);

 asm ("661:\n\t" "movl %0, %1" "\n662:\n" ".section .altinstructions,\"a\"\n" " " ".balign 8" " " "\n" " " ".quad" " " "661b\n" " " ".quad" " " "663f\n" "	 .byte %c[feat]\n" "	 .byte 662b-661b\n" "	 .byte 664f-663f\n" ".previous\n" ".section .altinstr_replacement,\"ax\"\n" "663:\n\t" "xchgl %0, %1" "\n664:\n" ".previous" : "=r" (v), "=m" (*addr) : [feat] "i" ((3*32+19)), "0" (v), "m" (*addr))

                                           ;
}

static inline u32 native_apic_read(unsigned long reg)
{
 return *(( u32 *)((fix_to_virt(FIX_APIC_BASE)) + reg));
}

extern void apic_wait_icr_idle(void);
extern u32 safe_apic_wait_icr_idle(void);
extern int get_physical_broadcast(void);

static inline void ack_APIC_irq(void)
{
 apic_write(0xB0, 0);
}

extern int lapic_get_maxlvt(void);
extern void clear_local_APIC(void);
extern void connect_bsp_APIC(void);
extern void disconnect_bsp_APIC(int virt_wire_setup);
extern void disable_local_APIC(void);
extern void lapic_shutdown(void);
extern int verify_local_APIC(void);
extern void cache_APIC_registers(void);
extern void sync_Arb_IDs(void);
extern void init_bsp_APIC(void);
extern void setup_local_APIC(void);
extern void end_local_APIC_setup(void);
extern void init_apic_mappings(void);
extern void setup_boot_APIC_clock(void);
extern void setup_secondary_APIC_clock(void);
extern int APIC_init_uniprocessor(void);
extern void enable_NMI_through_LVT0(void);





extern void early_init_lapic_mapping(void);
extern int apic_is_clustered_box(void);







extern u8 setup_APIC_eilvt_mce(u8 vector, u8 msg_type, u8 mask);
extern u8 setup_APIC_eilvt_ibs(u8 vector, u8 msg_type, u8 mask);

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






extern int nr_ioapics;
extern int nr_ioapic_registers[128];







struct mp_config_ioapic {
 unsigned long mp_apicaddr;
 unsigned int mp_apicid;
 unsigned char mp_type;
 unsigned char mp_apicver;
 unsigned char mp_flags;
};

struct mp_config_intsrc {
 unsigned int mp_dstapic;
 unsigned char mp_type;
 unsigned char mp_irqtype;
 unsigned short mp_irqflag;
 unsigned char mp_srcbus;
 unsigned char mp_srcbusirq;
 unsigned char mp_dstirq;
};


extern struct mp_config_ioapic mp_ioapics[128];


extern int mp_irq_entries;


extern struct mp_config_intsrc mp_irqs[(256 * 4)];


extern int mpc_default_type;


extern int sis_apic_bug;


extern int skip_ioapic_setup;


extern int timer_through_8259;

static inline void disable_ioapic_setup(void)
{
 skip_ioapic_setup = 1;
}
extern int io_apic_get_unique_id(int ioapic, int apic_id);
extern int io_apic_get_version(int ioapic);
extern int io_apic_get_redir_entries(int ioapic);
extern int io_apic_set_pci_routing(int ioapic, int pin, int irq,
       int edge_level, int active_high_low);


extern int (*ioapic_renumber_irq)(int ioapic, int irq);
extern void ioapic_init_mappings(void);





extern cpumask_t cpu_callout_map;
extern cpumask_t cpu_initialized;
extern cpumask_t cpu_callin_map;

extern void (*mtrr_hook)(void);
extern void zap_low_mappings(void);

extern int __attribute__ ((__section__(".cpuinit.text"))) __attribute__((__cold__)) get_local_pda(int cpu);

extern int smp_num_siblings;
extern unsigned int num_processors;
extern cpumask_t cpu_initialized;

extern __typeof__(cpumask_t) per_cpu__cpu_sibling_map;
extern __typeof__(cpumask_t) per_cpu__cpu_core_map;
extern __typeof__(u16) per_cpu__cpu_llc_id;

extern __typeof__(u16) per_cpu__x86_cpu_to_apicid; extern __typeof__(u16) *x86_cpu_to_apicid_early_ptr; extern __typeof__(u16) x86_cpu_to_apicid_early_map[];
extern __typeof__(u16) per_cpu__x86_bios_cpu_apicid; extern __typeof__(u16) *x86_bios_cpu_apicid_early_ptr; extern __typeof__(u16) x86_bios_cpu_apicid_early_map[];


extern struct _stack_start {
 void *sp;
 unsigned short ss;
} stack_start;

struct smp_ops {
 void (*smp_prepare_boot_cpu)(void);
 void (*smp_prepare_cpus)(unsigned max_cpus);
 int (*cpu_up)(unsigned cpu);
 void (*smp_cpus_done)(unsigned max_cpus);

 void (*smp_send_stop)(void);
 void (*smp_send_reschedule)(int cpu);

 void (*send_call_func_ipi)(cpumask_t mask);
 void (*send_call_func_single_ipi)(int cpu);
};


extern void set_cpu_sibling_map(int cpu);





extern struct smp_ops smp_ops;

static inline void smp_send_stop(void)
{
 smp_ops.smp_send_stop();
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

static inline int __cpu_up(unsigned int cpu)
{
 return smp_ops.cpu_up(cpu);
}

static inline void smp_send_reschedule(int cpu)
{
 smp_ops.smp_send_reschedule(cpu);
}

static inline void arch_send_call_function_single_ipi(int cpu)
{
 smp_ops.send_call_func_single_ipi(cpu);
}

static inline void arch_send_call_function_ipi(cpumask_t mask)
{
 smp_ops.send_call_func_ipi(mask);
}

void native_smp_prepare_boot_cpu(void);
void native_smp_prepare_cpus(unsigned int max_cpus);
void native_smp_cpus_done(unsigned int max_cpus);
int native_cpu_up(unsigned int cpunum);
void native_send_call_func_ipi(cpumask_t mask);
void native_send_call_func_single_ipi(int cpu);

extern int __cpu_disable(void);
extern void __cpu_die(unsigned int cpu);

void smp_store_cpu_info(int id);



static inline int num_booting_cpus(void)
{
 return __cpus_weight(&(cpu_callout_map), 64);
}



extern void prefill_possible_map(void);






extern unsigned disabled_cpus __attribute__ ((__section__(".cpuinit.data")));
static inline int logical_smp_processor_id(void)
{

 return (((*(u32 *)((fix_to_virt(FIX_APIC_BASE)) + 0xD0)) >> 24) & 0xFFu);
}







extern unsigned int read_apic_id(void);






static inline int hard_smp_processor_id(void)
{

 return (((read_apic_id())>>24)&0xFFu);
}
extern void cpu_uninit(void);
extern void smp_send_stop(void);




extern void smp_send_reschedule(int cpu);





extern void smp_prepare_cpus(unsigned int max_cpus);




extern int __cpu_up(unsigned int cpunum);




extern void smp_cpus_done(unsigned int max_cpus);




int smp_call_function(void(*func)(void *info), void *info, int wait);
int smp_call_function_mask(cpumask_t mask, void(*func)(void *info), void *info,
    int wait);
int smp_call_function_single(int cpuid, void (*func) (void *info), void *info,
    int wait);
void __smp_call_function_single(int cpuid, struct call_single_data *data);





void generic_smp_call_function_single_interrupt(void);
void generic_smp_call_function_interrupt(void);
void ipi_call_lock(void);
void ipi_call_unlock(void);
void ipi_call_lock_irq(void);
void ipi_call_unlock_irq(void);





int on_each_cpu(void (*func) (void *info), void *info, int wait);
void smp_prepare_boot_cpu(void);

extern unsigned int setup_max_cpus;
void smp_setup_processor_id(void);
extern cpumask_t *node_to_cpumask_map;


extern __typeof__(int) per_cpu__x86_cpu_to_node_map; extern __typeof__(int) *x86_cpu_to_node_map_early_ptr; extern __typeof__(int) x86_cpu_to_node_map_early_map[];
static inline int cpu_to_node(int cpu)
{
 return (*({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((&per_cpu__x86_cpu_to_node_map))); (typeof((&per_cpu__x86_cpu_to_node_map))) (__ptr + (((((_cpu_pda[cpu])->data_offset))))); }));
}


static inline int early_cpu_to_node(int cpu)
{
 if ((x86_cpu_to_node_map_early_ptr))
  return (x86_cpu_to_node_map_early_ptr)[cpu];

 return (*({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((&per_cpu__x86_cpu_to_node_map))); (typeof((&per_cpu__x86_cpu_to_node_map))) (__ptr + (((((_cpu_pda[cpu])->data_offset))))); }));
}


static inline cpumask_t *_node_to_cpumask_ptr(int node)
{
 return &node_to_cpumask_map[node];
}


static inline cpumask_t node_to_cpumask(int node)
{
 return node_to_cpumask_map[node];
}
extern int __node_distance(int, int);



static inline int node_to_first_cpu(int node)
{
 cpumask_t *mask = _node_to_cpumask_ptr(node);
 return __first_cpu(&(*mask));
}


extern cpumask_t cpu_coregroup_map(int cpu);
static inline void arch_fix_phys_package_id(int num, u32 slot)
{
}

struct pci_bus;
void set_pci_bus_resources_arch_default(struct pci_bus *b);







extern int get_mp_bus_to_node(int busnum);
extern void set_mp_bus_to_node(int busnum, int node);
void arch_update_cpu_topology(void);



struct memnode {
 int shift;
 unsigned int mapsize;
 s16 *map;
 s16 embedded_map[64 - 8];
} __attribute__((__aligned__((1 << (7)))));
extern struct memnode memnode;




extern struct pglist_data *node_data[];

static inline __attribute__((pure)) int phys_to_nid(unsigned long addr)
{
 unsigned nid;
 ;
 ;
 nid = memnode.map[addr >> memnode.shift];
 ;
 return nid;
}



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
struct mem_section {
 unsigned long section_mem_map;


 unsigned long *pageblock_flags;
};
extern struct mem_section *mem_section[((1UL << (44 - 27)) / (((1UL) << 12) / sizeof (struct mem_section)))];




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
 if (((pfn) >> (27 - 12)) >= (1UL << (44 - 27)))
  return 0;
 return valid_section(__nr_to_section(((pfn) >> (27 - 12))));
}

static inline int pfn_present(unsigned long pfn)
{
 if (((pfn) >> (27 - 12)) >= (1UL << (44 - 27)))
  return 0;
 return present_section(__nr_to_section(((pfn) >> (27 - 12))));
}
void sparse_init(void);






bool early_pfn_in_nid(unsigned long pfn, int nid);
void memory_present(int nid, unsigned long start, unsigned long end);
unsigned long __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) node_memmap_size_bytes(int, unsigned long, unsigned long);



struct vm_area_struct;
static inline int allocflags_to_migratetype(gfp_t gfp_flags)
{
 ;

 if (__builtin_expect(!!(page_group_by_mobility_disabled), 0))
  return 0;


 return (((gfp_flags & (( gfp_t)0x100000u)) != 0) << 1) |
  ((gfp_flags & (( gfp_t)0x80000u)) != 0);
}

static inline enum zone_type gfp_zone(gfp_t flags)
{

 if (flags & (( gfp_t)0x01u))
  return ZONE_DMA;


 if (flags & (( gfp_t)0x04u))
  return ZONE_DMA32;

 if ((flags & ((( gfp_t)0x02u) | (( gfp_t)0x100000u))) ==
   ((( gfp_t)0x02u) | (( gfp_t)0x100000u)))
  return ZONE_MOVABLE;




 return ZONE_NORMAL;
}
static inline int gfp_zonelist(gfp_t flags)
{
 if (1 && __builtin_expect(!!(flags & (( gfp_t)0x40000u)), 0))
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
__alloc_pages_internal(gfp_t gfp_mask, unsigned int order,
         struct zonelist *zonelist, nodemask_t *nodemask);

static inline struct page *
__alloc_pages(gfp_t gfp_mask, unsigned int order,
  struct zonelist *zonelist)
{
 return __alloc_pages_internal(gfp_mask, order, zonelist, 0);
}

static inline struct page *
__alloc_pages_nodemask(gfp_t gfp_mask, unsigned int order,
  struct zonelist *zonelist, nodemask_t *nodemask)
{
 return __alloc_pages_internal(gfp_mask, order, zonelist, nodemask);
}


static inline struct page *alloc_pages_node(int nid, gfp_t gfp_mask,
      unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return 0;


 if (nid < 0)
  nid = ({ typeof(_proxy_pda.nodenumber) ret__; switch (sizeof(_proxy_pda.nodenumber)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (((size_t) &((struct x8664_pda *)0)->nodenumber)), "m" (_proxy_pda.nodenumber)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (((size_t) &((struct x8664_pda *)0)->nodenumber)), "m" (_proxy_pda.nodenumber)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (((size_t) &((struct x8664_pda *)0)->nodenumber)), "m" (_proxy_pda.nodenumber)); break; default: __bad_pda_field(); } ret__; });

 return __alloc_pages(gfp_mask, order, node_zonelist(nid, gfp_mask));
}


extern struct page *alloc_pages_current(gfp_t gfp_mask, unsigned order);

static inline struct page *
alloc_pages(gfp_t gfp_mask, unsigned int order)
{
 if (__builtin_expect(!!(order >= 11), 0))
  return 0;

 return alloc_pages_current(gfp_mask, order);
}
extern struct page *alloc_page_vma(gfp_t gfp_mask,
   struct vm_area_struct *vma, unsigned long addr);







extern unsigned long __get_free_pages(gfp_t gfp_mask, unsigned int order);
extern unsigned long get_zeroed_page(gfp_t gfp_mask);

void *alloc_pages_exact(size_t size, gfp_t gfp_mask);
void free_pages_exact(void *virt, size_t size);







extern void __free_pages(struct page *page, unsigned int order);
extern void free_pages(unsigned long addr, unsigned int order);
extern void free_hot_page(struct page *page);
extern void free_cold_page(struct page *page);




void page_alloc_init(void);
void drain_zone_pages(struct zone *zone, struct per_cpu_pages *pcp);
void drain_all_pages(void);
void drain_local_pages(void *dummy);
extern int request_module( char * name, ...) __attribute__ ((format (printf, 1, 2)));







struct key;
struct file;
struct subprocess_info;


struct subprocess_info *call_usermodehelper_setup(char *path, char **argv,
        char **envp, gfp_t gfp_mask);


void call_usermodehelper_setkeys(struct subprocess_info *info,
     struct key *session_keyring);
int call_usermodehelper_stdinpipe(struct subprocess_info *sub_info,
      struct file **filp);
void call_usermodehelper_setcleanup(struct subprocess_info *info,
        void (*cleanup)(char **argv, char **envp));

enum umh_wait {
 UMH_NO_WAIT = -1,
 UMH_WAIT_EXEC = 0,
 UMH_WAIT_PROC = 1,
};


int call_usermodehelper_exec(struct subprocess_info *info, enum umh_wait wait);



void call_usermodehelper_freeinfo(struct subprocess_info *info);

static inline int
call_usermodehelper(char *path, char **argv, char **envp, enum umh_wait wait)
{
 struct subprocess_info *info;
 gfp_t gfp_mask = (wait == UMH_NO_WAIT) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u));

 info = call_usermodehelper_setup(path, argv, envp, gfp_mask);
 if (info == 0)
  return -12;
 return call_usermodehelper_exec(info, wait);
}

static inline int
call_usermodehelper_keys(char *path, char **argv, char **envp,
    struct key *session_keyring, enum umh_wait wait)
{
 struct subprocess_info *info;
 gfp_t gfp_mask = (wait == UMH_NO_WAIT) ? ((( gfp_t)0x20u)) : ((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u));

 info = call_usermodehelper_setup(path, argv, envp, gfp_mask);
 if (info == 0)
  return -12;

 call_usermodehelper_setkeys(info, session_keyring);
 return call_usermodehelper_exec(info, wait);
}

extern void usermodehelper_init(void);

struct file;
extern int call_usermodehelper_pipe(char *path, char *argv[], char *envp[],
        struct file **filp);








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

typedef unsigned long elf_greg_t;


typedef elf_greg_t elf_gregset_t[(sizeof(struct user_regs_struct) / sizeof(elf_greg_t))];

typedef struct user_i387_struct elf_fpregset_t;




extern char VDSO64_PRELINK[];
extern char VDSO32_PRELINK[];
extern void* __kernel_sigreturn;
extern void* __kernel_rt_sigreturn;





extern char vdso32_int80_start, vdso32_int80_end;
extern char vdso32_syscall_start, vdso32_syscall_end;
extern char vdso32_sysenter_start, vdso32_sysenter_end;

extern unsigned int vdso_enabled;
static inline void start_ia32_thread(struct pt_regs *regs, u32 ip, u32 sp)
{
 asm ("movl %0,%%fs" :: "r" (0));
 asm ("movl %0,%%es; movl %0,%%ds" : : "r" ((5* 8 + 3)));
 load_gs_index(0);
 regs->ip = ip;
 regs->sp = sp;
 regs->flags = 0x00000200;
 regs->cs = (4 * 8 + 3);
 regs->ss = (5* 8 + 3);
}

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
extern void set_personality_64bit(void);
extern unsigned int sysctl_vsyscall32;
extern int force_personality32;
struct task_struct;
struct linux_binprm;


extern int arch_setup_additional_pages(struct linux_binprm *bprm,
           int executable_stack);

extern int syscall32_setup_pages(struct linux_binprm *, int exstack);


extern unsigned long arch_randomize_brk(struct mm_struct *mm);


struct file;
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
typedef struct {
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
static inline int elf_coredump_extra_notes_size(void) { return 0; }
static inline int elf_coredump_extra_notes_write(struct file *file,
   loff_t *foffset) { return 0; }


struct kobject;
struct module;





struct attribute {
 char *name;
 struct module *owner;
 mode_t mode;
};

struct attribute_group {
 char *name;
 mode_t (*is_visible)(struct kobject *,
           struct attribute *, int);
 struct attribute **attrs;
};
struct vm_area_struct;

struct bin_attribute {
 struct attribute attr;
 size_t size;
 void *_private;
 ssize_t (*read)(struct kobject *, struct bin_attribute *,
   char *, loff_t, size_t);
 ssize_t (*write)(struct kobject *, struct bin_attribute *,
    char *, loff_t, size_t);
 int (*mmap)(struct kobject *, struct bin_attribute *attr,
      struct vm_area_struct *vma);
};

struct sysfs_ops {
 ssize_t (*show)(struct kobject *, struct attribute *,char *);
 ssize_t (*store)(struct kobject *,struct attribute *, char *, size_t);
};



int sysfs_schedule_callback(struct kobject *kobj, void (*func)(void *),
       void *data, struct module *owner);

int __attribute__((warn_unused_result)) sysfs_create_dir(struct kobject *kobj);
void sysfs_remove_dir(struct kobject *kobj);
int __attribute__((warn_unused_result)) sysfs_rename_dir(struct kobject *kobj, char *new_name);
int __attribute__((warn_unused_result)) sysfs_move_dir(struct kobject *kobj,
    struct kobject *new_parent_kobj);

int __attribute__((warn_unused_result)) sysfs_create_file(struct kobject *kobj,
       struct attribute *attr);
int __attribute__((warn_unused_result)) sysfs_chmod_file(struct kobject *kobj, struct attribute *attr,
      mode_t mode);
void sysfs_remove_file(struct kobject *kobj, struct attribute *attr);

int __attribute__((warn_unused_result)) sysfs_create_bin_file(struct kobject *kobj,
           struct bin_attribute *attr);
void sysfs_remove_bin_file(struct kobject *kobj, struct bin_attribute *attr);

int __attribute__((warn_unused_result)) sysfs_create_link(struct kobject *kobj, struct kobject *target,
       char *name);
int __attribute__((warn_unused_result)) sysfs_create_link_nowarn(struct kobject *kobj,
       struct kobject *target,
       char *name);
void sysfs_remove_link(struct kobject *kobj, char *name);

int __attribute__((warn_unused_result)) sysfs_create_group(struct kobject *kobj,
        struct attribute_group *grp);
int sysfs_update_group(struct kobject *kobj,
         struct attribute_group *grp);
void sysfs_remove_group(struct kobject *kobj,
   struct attribute_group *grp);
int sysfs_add_file_to_group(struct kobject *kobj,
   struct attribute *attr, char *group);
void sysfs_remove_file_from_group(struct kobject *kobj,
   struct attribute *attr, char *group);

void sysfs_notify(struct kobject *kobj, char *dir, char *attr);

extern int __attribute__((warn_unused_result)) sysfs_init(void);



struct kref {
 atomic_t refcount;
};

void kref_set(struct kref *kref, int num);
void kref_init(struct kref *kref);
void kref_get(struct kref *kref);
int kref_put(struct kref *kref, void (*release) (struct kref *kref));








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
};

extern int kobject_set_name(struct kobject *kobj, char *name, ...)
       __attribute__((format(printf, 2, 3)));

static inline char *kobject_name( struct kobject *kobj)
{
 return kobj->name;
}

extern void kobject_init(struct kobject *kobj, struct kobj_type *ktype);
extern int __attribute__((warn_unused_result)) kobject_add(struct kobject *kobj,
        struct kobject *parent,
        char *fmt, ...);
extern int __attribute__((warn_unused_result)) kobject_init_and_add(struct kobject *kobj,
          struct kobj_type *ktype,
          struct kobject *parent,
          char *fmt, ...);

extern void kobject_del(struct kobject *kobj);

extern struct kobject * __attribute__((warn_unused_result)) kobject_create(void);
extern struct kobject * __attribute__((warn_unused_result)) kobject_create_and_add( char *name,
      struct kobject *parent);

extern int __attribute__((warn_unused_result)) kobject_rename(struct kobject *, char *new_name);
extern int __attribute__((warn_unused_result)) kobject_move(struct kobject *, struct kobject *);

extern struct kobject *kobject_get(struct kobject *kobj);
extern void kobject_put(struct kobject *kobj);

extern char *kobject_get_path(struct kobject *kobj, gfp_t flag);

struct kobj_type {
 void (*release)(struct kobject *kobj);
 struct sysfs_ops *sysfs_ops;
 struct attribute **default_attrs;
};

struct kobj_uevent_env {
 char *envp[32];
 int envp_idx;
 char buf[2048];
 int buflen;
};

struct kset_uevent_ops {
 int (*filter)(struct kset *kset, struct kobject *kobj);
 char *(*name)(struct kset *kset, struct kobject *kobj);
 int (*uevent)(struct kset *kset, struct kobject *kobj,
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
struct kset {
 struct list_head list;
 spinlock_t list_lock;
 struct kobject kobj;
 struct kset_uevent_ops *uevent_ops;
};

extern void kset_init(struct kset *kset);
extern int __attribute__((warn_unused_result)) kset_register(struct kset *kset);
extern void kset_unregister(struct kset *kset);
extern struct kset * __attribute__((warn_unused_result)) kset_create_and_add( char *name,
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

int add_uevent_var(struct kobj_uevent_env *env, char *format, ...)
 __attribute__((format (printf, 2, 3)));

int kobject_action_type( char *buf, size_t count,
   enum kobject_action *type);
struct kernel_param;


typedef int (*param_set_fn)( char *val, struct kernel_param *kp);

typedef int (*param_get_fn)(char *buffer, struct kernel_param *kp);

struct kernel_param {
 char *name;
 unsigned int perm;
 param_set_fn set;
 param_get_fn get;
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
 unsigned int *num;
 param_set_fn set;
 param_get_fn get;
 unsigned int elemsize;
 void *elem;
};
extern int parse_args( char *name,
        char *args,
        struct kernel_param *params,
        unsigned num,
        int (*unknown)(char *param, char *val));







extern int param_set_byte( char *val, struct kernel_param *kp);
extern int param_get_byte(char *buffer, struct kernel_param *kp);


extern int param_set_short( char *val, struct kernel_param *kp);
extern int param_get_short(char *buffer, struct kernel_param *kp);


extern int param_set_ushort( char *val, struct kernel_param *kp);
extern int param_get_ushort(char *buffer, struct kernel_param *kp);


extern int param_set_int( char *val, struct kernel_param *kp);
extern int param_get_int(char *buffer, struct kernel_param *kp);


extern int param_set_uint( char *val, struct kernel_param *kp);
extern int param_get_uint(char *buffer, struct kernel_param *kp);


extern int param_set_long( char *val, struct kernel_param *kp);
extern int param_get_long(char *buffer, struct kernel_param *kp);


extern int param_set_ulong( char *val, struct kernel_param *kp);
extern int param_get_ulong(char *buffer, struct kernel_param *kp);


extern int param_set_charp( char *val, struct kernel_param *kp);
extern int param_get_charp(char *buffer, struct kernel_param *kp);


extern int param_set_bool( char *val, struct kernel_param *kp);
extern int param_get_bool(char *buffer, struct kernel_param *kp);


extern int param_set_invbool( char *val, struct kernel_param *kp);
extern int param_get_invbool(char *buffer, struct kernel_param *kp);
extern int param_array_set( char *val, struct kernel_param *kp);
extern int param_array_get(char *buffer, struct kernel_param *kp);

extern int param_set_copystring( char *val, struct kernel_param *kp);
extern int param_get_string(char *buffer, struct kernel_param *kp);



struct module;


extern int module_param_sysfs_setup(struct module *mod,
        struct kernel_param *kparam,
        unsigned int num_params);

extern void module_param_sysfs_remove(struct module *mod);
struct module;
struct marker;
typedef void marker_probe_func(void *probe_private, void *call_private,
  char *fmt, va_list *args);

struct marker_probe_closure {
 marker_probe_func *func;
 void *probe_private;
};

struct marker {
 char *name;
 char *format;


 char state;
 char ptype;

 void (*call)( struct marker *mdata, void *call_private, ...);
 struct marker_probe_closure single;
 struct marker_probe_closure *multi;
} __attribute__((aligned(8)));
extern void marker_update_probe_range(struct marker *begin,
 struct marker *end);
static inline void __attribute__((format(printf,1,2))) ___mark_check_format( char *fmt, ...)
{
}







extern marker_probe_func __mark_empty_function;

extern void marker_probe_cb( struct marker *mdata,
 void *call_private, ...);
extern void marker_probe_cb_noarg( struct marker *mdata,
 void *call_private, ...);





extern int marker_probe_register( char *name, char *format,
    marker_probe_func *probe, void *probe_private);




extern int marker_probe_unregister( char *name,
 marker_probe_func *probe, void *probe_private);



extern int marker_probe_unregister_private_data(marker_probe_func *probe,
 void *probe_private);

extern void *marker_get_private_data( char *name, marker_probe_func *probe,
 int num);







void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) kmem_cache_init(void);
int slab_is_available(void);

struct kmem_cache *kmem_cache_create( char *, size_t, size_t,
   unsigned long,
   void (*)(void *));
void kmem_cache_destroy(struct kmem_cache *);
int kmem_cache_shrink(struct kmem_cache *);
void kmem_cache_free(struct kmem_cache *, void *);
unsigned int kmem_cache_size(struct kmem_cache *);
 char *kmem_cache_name(struct kmem_cache *);
int kmem_ptr_validate(struct kmem_cache *cachep, void *ptr);
void * __attribute__((warn_unused_result)) __krealloc( void *, size_t, gfp_t);
void * __attribute__((warn_unused_result)) krealloc( void *, size_t, gfp_t);
void kfree( void *);
size_t ksize( void *);


















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
int check_tsc_unstable(void);





extern void check_tsc_sync_source(int cpu);
extern void check_tsc_sync_target(void);

extern int notsc_setup(char *);






extern unsigned long tick_usec;
extern unsigned long tick_nsec;
extern int tickadj;




extern int time_status;
extern long time_maxerror;
extern long time_esterror;

extern long time_adjust;

extern void ntp_init(void);
extern void ntp_clear(void);





static inline int ntp_synced(void)
{
 return !(time_status & 0x0040);
}
extern u64 tick_length;

extern void second_overflow(void);
extern void update_ntp_one_tick(void);
extern int do_adjtimex(struct timex *);




int read_current_timer(unsigned long *timer_val);
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
extern clock_t jiffies_to_clock_t(long x);
extern unsigned long clock_t_to_jiffies(unsigned long x);
extern u64 jiffies_64_to_clock_t(u64 x);
extern u64 nsec_to_clock_t(u64 x);
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

static inline s64 ktime_to_us( ktime_t kt)
{
 struct timeval tv = ns_to_timeval((kt).tv64);
 return (s64) tv.tv_sec * 1000000L + tv.tv_usec;
}

static inline s64 ktime_us_delta( ktime_t later, ktime_t earlier)
{
       return ktime_to_us(({ ({ ktime_t var; var.tv64 = (later).tv64 - (earlier).tv64; var; }); }));
}

static inline ktime_t ktime_add_us( ktime_t kt, u64 usec)
{
 return ({ ({ ktime_t var; var.tv64 = (kt).tv64 + (usec * 1000); var; }); });
}

static inline ktime_t ktime_sub_us( ktime_t kt, u64 usec)
{
 return ({ ({ ktime_t var; var.tv64 = (kt).tv64 - (usec * 1000); var; }); });
}

extern ktime_t ktime_add_safe( ktime_t lhs, ktime_t rhs);
extern void ktime_get_ts(struct timespec *ts);




static inline ktime_t ns_to_ktime(u64 ns)
{

        static ktime_t ktime_zero = { 0 };



 return ({ ({ ktime_t var; var.tv64 = (ktime_zero).tv64 + (ns); var; }); });
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
 void *object;
 struct debug_obj_descr *descr;
};
struct debug_obj_descr {
 char *name;

 int (*fixup_init) (void *addr, enum debug_obj_state state);
 int (*fixup_activate) (void *addr, enum debug_obj_state state);
 int (*fixup_destroy) (void *addr, enum debug_obj_state state);
 int (*fixup_free) (void *addr, enum debug_obj_state state);
};
static inline void
debug_object_init (void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_init_on_stack(void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_activate (void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_deactivate(void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_destroy (void *addr, struct debug_obj_descr *descr) { }
static inline void
debug_object_free (void *addr, struct debug_obj_descr *descr) { }

static inline void debug_objects_early_init(void) { }
static inline void debug_objects_mem_init(void) { }





static inline void
debug_check_no_obj_freed( void *address, unsigned long size) { }

struct rb_node
{
 unsigned long rb_parent_color;


 struct rb_node *rb_right;
 struct rb_node *rb_left;
} __attribute__((aligned(sizeof(long))));


struct rb_root
{
 struct rb_node *rb_node;
};
static inline void rb_set_parent(struct rb_node *rb, struct rb_node *p)
{
 rb->rb_parent_color = (rb->rb_parent_color & 3) | (unsigned long)p;
}
static inline void rb_set_color(struct rb_node *rb, int color)
{
 rb->rb_parent_color = (rb->rb_parent_color & ~1) | color;
}
extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);


extern struct rb_node *rb_next(struct rb_node *);
extern struct rb_node *rb_prev(struct rb_node *);
extern struct rb_node *rb_first(struct rb_root *);
extern struct rb_node *rb_last(struct rb_root *);


extern void rb_replace_node(struct rb_node *victim, struct rb_node *_new,
       struct rb_root *root);

static inline void rb_link_node(struct rb_node * node, struct rb_node * parent,
    struct rb_node ** rb_link)
{
 node->rb_parent_color = (unsigned long )parent;
 node->rb_left = node->rb_right = 0;

 *rb_link = node;
}





struct hrtimer_clock_base;
struct hrtimer_cpu_base;




enum hrtimer_mode {
 HRTIMER_MODE_ABS,
 HRTIMER_MODE_REL,
};




enum hrtimer_restart {
 HRTIMER_NORESTART,
 HRTIMER_RESTART,
};
enum hrtimer_cb_mode {
 HRTIMER_CB_SOFTIRQ,
 HRTIMER_CB_IRQSAFE,
 HRTIMER_CB_IRQSAFE_NO_RESTART,
 HRTIMER_CB_IRQSAFE_PERCPU,
 HRTIMER_CB_IRQSAFE_UNLOCKED,
};
struct hrtimer {
 struct rb_node node;
 ktime_t expires;
 enum hrtimer_restart (*function)(struct hrtimer *);
 struct hrtimer_clock_base *base;
 unsigned long state;
 enum hrtimer_cb_mode cb_mode;
 struct list_head cb_entry;

 void *start_site;
 char start_comm[16];
 int start_pid;

};
struct hrtimer_sleeper {
 struct hrtimer timer;
 struct task_struct *task;
};
struct hrtimer_clock_base {
 struct hrtimer_cpu_base *cpu_base;
 clockid_t index;
 struct rb_root active;
 struct rb_node *first;
 ktime_t resolution;
 ktime_t (*get_time)(void);
 ktime_t (*get_softirq_time)(void);
 ktime_t softirq_time;

 ktime_t offset;
 int (*reprogram)(struct hrtimer *t,
          struct hrtimer_clock_base *b,
          ktime_t n);

};
struct hrtimer_cpu_base {
 spinlock_t lock;
 struct hrtimer_clock_base clock_base[2];
 struct list_head cb_pending;

 ktime_t expires_next;
 int hres_active;
 unsigned long nr_events;

};


struct clock_event_device;

extern void clock_was_set(void);
extern void hres_timers_resume(void);
extern void hrtimer_interrupt(struct clock_event_device *dev);




static inline ktime_t hrtimer_cb_get_time(struct hrtimer *timer)
{
 return timer->base->get_time();
}

static inline int hrtimer_is_hres_active(struct hrtimer *timer)
{
 return timer->base->cpu_base->hres_active;
}
extern ktime_t ktime_get(void);
extern ktime_t ktime_get_real(void);




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
extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);

static inline int hrtimer_restart(struct hrtimer *timer)
{
 return hrtimer_start(timer, timer->expires, HRTIMER_MODE_ABS);
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
 return timer->state &
  (0x01 | 0x04);
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


extern void hrtimer_run_queues(void);
extern void hrtimer_run_pending(void);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) hrtimers_init(void);
extern void sysrq_timer_list_show(void);






extern void timer_stats_update_stats(void *timer, pid_t pid, void *startf,
         void *timerf, char *comm,
         unsigned int timer_flag);

static inline void timer_stats_account_hrtimer(struct hrtimer *timer)
{
 timer_stats_update_stats(timer, timer->start_pid, timer->start_site,
     timer->function, timer->start_comm, 0);
}

extern void __timer_stats_hrtimer_set_start_info(struct hrtimer *timer,
       void *addr);

static inline void timer_stats_hrtimer_set_start_info(struct hrtimer *timer)
{
 __timer_stats_hrtimer_set_start_info(timer, __builtin_return_address(0));
}

static inline void timer_stats_hrtimer_clear_start_info(struct hrtimer *timer)
{
 timer->start_site = 0;
}

struct tvec_base;

struct timer_list {
 struct list_head entry;
 unsigned long expires;

 void (*function)(unsigned long);
 unsigned long data;

 struct tvec_base *base;

 void *start_site;
 char start_comm[16];
 int start_pid;

};

extern struct tvec_base boot_tvec_bases;
void init_timer(struct timer_list *timer);
void init_timer_deferrable(struct timer_list *timer);





static inline void destroy_timer_on_stack(struct timer_list *timer) { }
static inline void init_timer_on_stack(struct timer_list *timer)
{
 init_timer(timer);
}


static inline void setup_timer(struct timer_list * timer,
    void (*function)(unsigned long),
    unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer(timer);
}

static inline void setup_timer_on_stack(struct timer_list *timer,
     void (*function)(unsigned long),
     unsigned long data)
{
 timer->function = function;
 timer->data = data;
 init_timer_on_stack(timer);
}
static inline int timer_pending( struct timer_list * timer)
{
 return timer->entry.next != 0;
}

extern void add_timer_on(struct timer_list *timer, int cpu);
extern int del_timer(struct timer_list * timer);
extern int __mod_timer(struct timer_list *timer, unsigned long expires);
extern int mod_timer(struct timer_list *timer, unsigned long expires);
extern unsigned long next_timer_interrupt(void);





extern unsigned long get_next_timer_interrupt(unsigned long now);
extern void init_timer_stats(void);

extern void timer_stats_update_stats(void *timer, pid_t pid, void *startf,
         void *timerf, char *comm,
         unsigned int timer_flag);

extern void __timer_stats_timer_set_start_info(struct timer_list *timer,
            void *addr);

static inline void timer_stats_timer_set_start_info(struct timer_list *timer)
{
 __timer_stats_timer_set_start_info(timer, __builtin_return_address(0));
}

static inline void timer_stats_timer_clear_start_info(struct timer_list *timer)
{
 timer->start_site = 0;
}
static inline void add_timer(struct timer_list *timer)
{
 ;
 __mod_timer(timer, timer->expires);
}


  extern int try_to_del_timer_sync(struct timer_list *timer);
  extern int del_timer_sync(struct timer_list *timer);







extern void init_timers(void);
extern void run_local_timers(void);
struct hrtimer;
extern enum hrtimer_restart it_real_fn(struct hrtimer *);

unsigned long __round_jiffies(unsigned long j, int cpu);
unsigned long __round_jiffies_relative(unsigned long j, int cpu);
unsigned long round_jiffies(unsigned long j);
unsigned long round_jiffies_relative(unsigned long j);




struct workqueue_struct;

struct work_struct;
typedef void (*work_func_t)(struct work_struct *work);







struct work_struct {
 atomic_long_t data;



 struct list_head entry;
 work_func_t func;



};



struct delayed_work {
 struct work_struct work;
 struct timer_list timer;
};

struct execute_work {
 struct work_struct work;
};
extern struct workqueue_struct *
__create_workqueue_key( char *name, int singlethread,
         int freezeable, struct lock_class_key *key,
         char *lock_name);
extern void destroy_workqueue(struct workqueue_struct *wq);

extern int queue_work(struct workqueue_struct *wq, struct work_struct *work);
extern int queue_work_on(int cpu, struct workqueue_struct *wq,
   struct work_struct *work);
extern int queue_delayed_work(struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);
extern int queue_delayed_work_on(int cpu, struct workqueue_struct *wq,
   struct delayed_work *work, unsigned long delay);

extern void flush_workqueue(struct workqueue_struct *wq);
extern void flush_scheduled_work(void);

extern int schedule_work(struct work_struct *work);
extern int schedule_work_on(int cpu, struct work_struct *work);
extern int schedule_delayed_work(struct delayed_work *work, unsigned long delay);
extern int schedule_delayed_work_on(int cpu, struct delayed_work *work,
     unsigned long delay);
extern int schedule_on_each_cpu(work_func_t func);
extern int current_is_keventd(void);
extern int keventd_up(void);

extern void init_workqueues(void);
int execute_in_process_context(work_func_t fn, struct execute_work *);

extern int flush_work(struct work_struct *work);

extern int cancel_work_sync(struct work_struct *work);







static inline int cancel_delayed_work(struct delayed_work *work)
{
 int ret;

 ret = del_timer_sync(&work->timer);
 if (ret)
  clear_bit(0, ((unsigned long *)(&(&work->work)->data)));
 return ret;
}

extern int cancel_delayed_work_sync(struct delayed_work *work);


static inline
void cancel_rearming_delayed_workqueue(struct workqueue_struct *wq,
     struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}


static inline
void cancel_rearming_delayed_work(struct delayed_work *work)
{
 cancel_delayed_work_sync(work);
}


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
 FREE_SLAB,
 CPUSLAB_FLUSH,
 DEACTIVATE_FULL,
 DEACTIVATE_EMPTY,
 DEACTIVATE_TO_HEAD,
 DEACTIVATE_TO_TAIL,
 DEACTIVATE_REMOTE_FREES,
 ORDER_FALLBACK,
 NR_SLUB_STAT_ITEMS };

struct kmem_cache_cpu {
 void **freelist;
 struct page *page;
 int node;
 unsigned int offset;
 unsigned int objsize;



};

struct kmem_cache_node {
 spinlock_t list_lock;
 unsigned long nr_partial;
 unsigned long min_partial;
 struct list_head partial;

 atomic_long_t nr_slabs;
 atomic_long_t total_objects;
 struct list_head full;

};






struct kmem_cache_order_objects {
 unsigned long x;
};




struct kmem_cache {

 unsigned long flags;
 int size;
 int objsize;
 int offset;
 struct kmem_cache_order_objects oo;





 struct kmem_cache_node local_node;


 struct kmem_cache_order_objects max;
 struct kmem_cache_order_objects min;
 gfp_t allocflags;
 int refcount;
 void (*ctor)(void *);
 int inuse;
 int align;
 char *name;
 struct list_head list;

 struct kobject kobj;






 int remote_node_defrag_ratio;
 struct kmem_cache_node *node[(1 << 9)];


 struct kmem_cache_cpu *cpu_slab[64];



};
extern struct kmem_cache kmalloc_caches[12 + 1];





static inline __attribute__((always_inline)) int kmalloc_index(size_t size)
{
 if (!size)
  return 0;

 if (size <= 8)
  return ( __builtin_constant_p(8) ? ( (8) < 1 ? ____ilog2_NaN() : (8) & (1ULL << 63) ? 63 : (8) & (1ULL << 62) ? 62 : (8) & (1ULL << 61) ? 61 : (8) & (1ULL << 60) ? 60 : (8) & (1ULL << 59) ? 59 : (8) & (1ULL << 58) ? 58 : (8) & (1ULL << 57) ? 57 : (8) & (1ULL << 56) ? 56 : (8) & (1ULL << 55) ? 55 : (8) & (1ULL << 54) ? 54 : (8) & (1ULL << 53) ? 53 : (8) & (1ULL << 52) ? 52 : (8) & (1ULL << 51) ? 51 : (8) & (1ULL << 50) ? 50 : (8) & (1ULL << 49) ? 49 : (8) & (1ULL << 48) ? 48 : (8) & (1ULL << 47) ? 47 : (8) & (1ULL << 46) ? 46 : (8) & (1ULL << 45) ? 45 : (8) & (1ULL << 44) ? 44 : (8) & (1ULL << 43) ? 43 : (8) & (1ULL << 42) ? 42 : (8) & (1ULL << 41) ? 41 : (8) & (1ULL << 40) ? 40 : (8) & (1ULL << 39) ? 39 : (8) & (1ULL << 38) ? 38 : (8) & (1ULL << 37) ? 37 : (8) & (1ULL << 36) ? 36 : (8) & (1ULL << 35) ? 35 : (8) & (1ULL << 34) ? 34 : (8) & (1ULL << 33) ? 33 : (8) & (1ULL << 32) ? 32 : (8) & (1ULL << 31) ? 31 : (8) & (1ULL << 30) ? 30 : (8) & (1ULL << 29) ? 29 : (8) & (1ULL << 28) ? 28 : (8) & (1ULL << 27) ? 27 : (8) & (1ULL << 26) ? 26 : (8) & (1ULL << 25) ? 25 : (8) & (1ULL << 24) ? 24 : (8) & (1ULL << 23) ? 23 : (8) & (1ULL << 22) ? 22 : (8) & (1ULL << 21) ? 21 : (8) & (1ULL << 20) ? 20 : (8) & (1ULL << 19) ? 19 : (8) & (1ULL << 18) ? 18 : (8) & (1ULL << 17) ? 17 : (8) & (1ULL << 16) ? 16 : (8) & (1ULL << 15) ? 15 : (8) & (1ULL << 14) ? 14 : (8) & (1ULL << 13) ? 13 : (8) & (1ULL << 12) ? 12 : (8) & (1ULL << 11) ? 11 : (8) & (1ULL << 10) ? 10 : (8) & (1ULL << 9) ? 9 : (8) & (1ULL << 8) ? 8 : (8) & (1ULL << 7) ? 7 : (8) & (1ULL << 6) ? 6 : (8) & (1ULL << 5) ? 5 : (8) & (1ULL << 4) ? 4 : (8) & (1ULL << 3) ? 3 : (8) & (1ULL << 2) ? 2 : (8) & (1ULL << 1) ? 1 : (8) & (1ULL << 0) ? 0 : ____ilog2_NaN() ) : (sizeof(8) <= 4) ? __ilog2_u32(8) : __ilog2_u64(8) );


 if (size > 64 && size <= 96)
  return 1;
 if (size > 128 && size <= 192)
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
 return -1;
}







static inline __attribute__((always_inline)) struct kmem_cache *kmalloc_slab(size_t size)
{
 int index = kmalloc_index(size);

 if (index == 0)
  return 0;

 return &kmalloc_caches[index];
}
void *kmem_cache_alloc(struct kmem_cache *, gfp_t);
void *__kmalloc(size_t size, gfp_t flags);

static inline __attribute__((always_inline)) void *kmalloc_large(size_t size, gfp_t flags)
{
 return (void *)__get_free_pages(flags | (( gfp_t)0x4000u), get_order(size));
}


extern void *kmalloc(size_t size, gfp_t flags);
void *__kmalloc_node(size_t size, gfp_t flags, int node);
void *kmem_cache_alloc_node(struct kmem_cache *, gfp_t flags, int node);

static inline __attribute__((always_inline)) void *kmalloc_node(size_t size, gfp_t flags, int node)
{
 if (__builtin_constant_p(size) &&
  size <= ((1UL) << 12) && !(flags & (( gfp_t)0x01u))) {
   struct kmem_cache *s = kmalloc_slab(size);

  if (!s)
   return ((void *)16);

  return kmem_cache_alloc_node(s, flags, node);
 }
 return __kmalloc_node(size, flags, node);
}
static inline void *kcalloc(size_t n, size_t size, gfp_t flags)
{
 if (size != 0 && n > (~0UL) / size)
  return 0;
 return __kmalloc(n * size, flags | (( gfp_t)0x8000u));
}
extern void *__kmalloc_track_caller(size_t, gfp_t, void*);
extern void *__kmalloc_node_track_caller(size_t, gfp_t, int, void *);
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


extern struct seq_operations slabinfo_op;
ssize_t slabinfo_write(struct file *, char *, size_t, loff_t *);
struct percpu_data {
 void *ptrs[1];
};
extern void *__percpu_alloc_mask(size_t size, gfp_t gfp, cpumask_t *mask);
extern void percpu_free(void *__pdata);




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
 unsigned char c;

 asm (" " "subq" " " "%2,%0; sete %1"
       : "+m" (l->a.counter), "=qm" (c)
       : "ir" (i) : "memory");
 return c;
}
static inline int local_dec_and_test(local_t *l)
{
 unsigned char c;

 asm (" " "decq" " " "%0; sete %1"
       : "+m" (l->a.counter), "=qm" (c)
       : : "memory");
 return c != 0;
}
static inline int local_inc_and_test(local_t *l)
{
 unsigned char c;

 asm (" " "incq" " " "%0; sete %1"
       : "+m" (l->a.counter), "=qm" (c)
       : : "memory");
 return c != 0;
}
static inline int local_add_negative(long i, local_t *l)
{
 unsigned char c;

 asm (" " "addq" " " "%2,%0; sets %1"
       : "+m" (l->a.counter), "=qm" (c)
       : "ir" (i) : "memory");
 return c;
}
static inline long local_add_return(long i, local_t *l)
{
 long __i;






 __i = i;
 asm (" " "xaddq" " " "%0, %1;"
       : "+r" (i), "+m" (l->a.counter)
       : : "memory");
 return i + __i;
}

static inline long local_sub_return(long i, local_t *l)
{
 return local_add_return(-i, l);
}





struct mod_arch_specific {};
struct kernel_symbol
{
 unsigned long value;
 char *name;
};

struct modversion_info
{
 unsigned long crc;
 char name[(64 - sizeof(unsigned long))];
};

struct module;

struct module_attribute {
        struct attribute attr;
        ssize_t (*show)(struct module_attribute *, struct module *, char *);
        ssize_t (*store)(struct module_attribute *, struct module *,
    char *, size_t count);
 void (*setup)(struct module *, char *);
 int (*test)(struct module *);
 void (*free)(struct module *);
};

struct module_kobject
{
 struct kobject kobj;
 struct module *mod;
 struct kobject *drivers_dir;
};


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
 struct exception_table_entry *search_exception_tables(unsigned long add);

struct notifier_block;




void *__symbol_get( char *symbol);
void *__symbol_get_gpl( char *symbol);
struct module_ref
{
 local_t count;
} __attribute__((__aligned__((1 << (7)))));

enum module_state
{
 MODULE_STATE_LIVE,
 MODULE_STATE_COMING,
 MODULE_STATE_GOING,
};

struct module
{
 enum module_state state;


 struct list_head list;


 char name[(64 - sizeof(unsigned long))];


 struct module_kobject mkobj;
 struct module_param_attrs *param_attrs;
 struct module_attribute *modinfo_attrs;
 char *version;
 char *srcversion;
 struct kobject *holders_dir;


 struct kernel_symbol *syms;
 unsigned long *crcs;
 unsigned int num_syms;


 unsigned int num_gpl_syms;
 struct kernel_symbol *gpl_syms;
 unsigned long *gpl_crcs;



 struct kernel_symbol *unused_syms;
 unsigned long *unused_crcs;
 unsigned int num_unused_syms;


 unsigned int num_unused_gpl_syms;
 struct kernel_symbol *unused_gpl_syms;
 unsigned long *unused_gpl_crcs;



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


 void *unwind_info;


 struct mod_arch_specific arch;

 unsigned int taints;



 unsigned num_bugs;
 struct list_head bug_list;
 struct bug_entry *bug_table;




 Elf64_Sym *symtab;
 unsigned int num_symtab;
 char *strtab;


 struct module_sect_attrs *sect_attrs;


 struct module_notes_attrs *notes_attrs;



 void *percpu;



 char *args;

 struct marker *markers;
 unsigned int num_markers;




 struct list_head modules_which_use_me;


 struct task_struct *waiter;


 void (*exit)(void);


 struct module_ref ref[64];


};







static inline int module_is_live(struct module *mod)
{
 return mod->state != MODULE_STATE_GOING;
}


struct module *module_text_address(unsigned long addr);
struct module *__module_text_address(unsigned long addr);
int is_module_address(unsigned long addr);



int module_get_kallsym(unsigned int symnum, unsigned long *value, char *type,
   char *name, char *module_name, int *exported);


unsigned long module_kallsyms_lookup_name( char *name);

extern void __module_put_and_exit(struct module *mod, long code)
 __attribute__((noreturn));



unsigned int module_refcount(struct module *mod);
void __symbol_put( char *symbol);

void symbol_put_addr(void *addr);



static inline void __module_get(struct module *module)
{
 if (module) {
  local_inc(&module->ref[({ do { } while (0); ({ typeof(_proxy_pda.cpunumber) ret__; switch (sizeof(_proxy_pda.cpunumber)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (((size_t) &((struct x8664_pda *)0)->cpunumber)), "m" (_proxy_pda.cpunumber)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (((size_t) &((struct x8664_pda *)0)->cpunumber)), "m" (_proxy_pda.cpunumber)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (((size_t) &((struct x8664_pda *)0)->cpunumber)), "m" (_proxy_pda.cpunumber)); break; default: __bad_pda_field(); } ret__; }); })].count);
  do { } while (0);
 }
}

static inline int try_module_get(struct module *module)
{
 int ret = 1;

 if (module) {
  unsigned int cpu = ({ do { } while (0); ({ typeof(_proxy_pda.cpunumber) ret__; switch (sizeof(_proxy_pda.cpunumber)) { case 2: asm("mov" "w %%gs:%c1,%0" : "=r" (ret__) : "i" (((size_t) &((struct x8664_pda *)0)->cpunumber)), "m" (_proxy_pda.cpunumber)); break; case 4: asm("mov" "l %%gs:%c1,%0": "=r" (ret__): "i" (((size_t) &((struct x8664_pda *)0)->cpunumber)), "m" (_proxy_pda.cpunumber)); break; case 8: asm("mov" "q %%gs:%c1,%0": "=r" (ret__) : "i" (((size_t) &((struct x8664_pda *)0)->cpunumber)), "m" (_proxy_pda.cpunumber)); break; default: __bad_pda_field(); } ret__; }); });
  if (__builtin_expect(!!(module_is_live(module)), 1))
   local_inc(&module->ref[cpu].count);
  else
   ret = 0;
  do { } while (0);
 }
 return ret;
}

extern void module_put(struct module *module);
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

extern void module_update_markers(void);
struct device_driver;

struct module;

extern struct kset *module_kset;
extern struct kobj_type module_ktype;
extern int module_sysfs_initialized;

int mod_sysfs_init(struct module *mod);
int mod_sysfs_setup(struct module *mod,
      struct kernel_param *kparam,
      unsigned int num_params);
int module_add_modinfo_attrs(struct module *mod);
void module_remove_modinfo_attrs(struct module *mod);










extern unsigned int __invalid_size_argument_for_IOC;
extern int sysctl_nr_open;
struct files_stat_struct {
 int nr_files;
 int nr_free_files;
 int max_files;
};
extern struct files_stat_struct files_stat;
extern int get_max_files(void);

struct inodes_stat_t {
 int nr_inodes;
 int nr_unused;
 int dummy[5];
};
extern struct inodes_stat_t inodes_stat;

extern int leases_enable, lease_break_time;


extern int dir_notify_enable;
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




struct completion {
 unsigned int done;
 wait_queue_head_t wait;
};
static inline void init_completion(struct completion *x)
{
 x->done = 0;
 init_waitqueue_head(&x->wait);
}

extern void wait_for_completion(struct completion *);
extern int wait_for_completion_interruptible(struct completion *x);
extern int wait_for_completion_killable(struct completion *x);
extern unsigned long wait_for_completion_timeout(struct completion *x,
         unsigned long timeout);
extern unsigned long wait_for_completion_interruptible_timeout(
   struct completion *x, unsigned long timeout);
extern bool try_wait_for_completion(struct completion *x);
extern bool completion_done(struct completion *x);

extern void complete(struct completion *);
extern void complete_all(struct completion *);






struct rcu_head {
 struct rcu_head *next;
 void (*func)(struct rcu_head *head);
};


struct rcu_ctrlblk {
 long cur;
 long completed;
 int next_pending;

 int signaled;

 spinlock_t lock __attribute__((__aligned__(1 << ((7)))));
 cpumask_t cpumask;

} __attribute__((__aligned__(1 << ((7)))));


static inline int rcu_batch_before(long a, long b)
{
 return (a - b) < 0;
}


static inline int rcu_batch_after(long a, long b)
{
 return (a - b) > 0;
}






struct rcu_data {

 long quiescbatch;
 int passed_quiesc;
 int qs_pending;


 long batch;
 struct rcu_head *nxtlist;
 struct rcu_head **nxttail;
 long qlen;
 struct rcu_head *curlist;
 struct rcu_head **curtail;
 struct rcu_head *donelist;
 struct rcu_head **donetail;
 long blimit;
 int cpu;
 struct rcu_head barrier;
};

extern __typeof__(struct rcu_data) per_cpu__rcu_data;
extern __typeof__(struct rcu_data) per_cpu__rcu_bh_data;







static inline void rcu_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((&per_cpu__rcu_data))); (typeof((&per_cpu__rcu_data))) (__ptr + (((((_cpu_pda[cpu])->data_offset))))); }));
 rdp->passed_quiesc = 1;
}
static inline void rcu_bh_qsctr_inc(int cpu)
{
 struct rcu_data *rdp = &(*({ unsigned long __ptr; __asm__ ("" : "=r"(__ptr) : "0"((&per_cpu__rcu_bh_data))); (typeof((&per_cpu__rcu_bh_data))) (__ptr + (((((_cpu_pda[cpu])->data_offset))))); }));
 rdp->passed_quiesc = 1;
}

extern int rcu_pending(int cpu);
extern int rcu_needs_cpu(int cpu);
extern void __rcu_init(void);

extern void rcu_check_callbacks(int cpu, int user);
extern void rcu_restart_cpu(int cpu);

extern long rcu_batches_completed(void);
extern long rcu_batches_completed_bh(void);
struct rcu_synchronize {
 struct rcu_head head;
 struct completion completion;
};

extern void wakeme_after_rcu(struct rcu_head *head);
extern void call_rcu(struct rcu_head *head,
         void (*func)(struct rcu_head *head));
extern void call_rcu_bh(struct rcu_head *head,
   void (*func)(struct rcu_head *head));


extern void synchronize_rcu(void);
extern void rcu_barrier(void);
extern void rcu_barrier_bh(void);
extern void rcu_barrier_sched(void);


extern void rcu_init(void);
extern int rcu_needs_cpu(int cpu);







static inline void __list_add_rcu(struct list_head *_new,
  struct list_head *prev, struct list_head *next)
{
 _new->next = next;
 _new->prev = prev;
 ({ (prev->next) = (_new); });
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
 __list_del(entry->prev, entry->next);
 entry->prev = ((void *) 0x00200200);
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
 ({ (_new->prev->next) = (_new); });
 _new->next->prev = _new;
 old->prev = ((void *) 0x00200200);
}
static inline void list_splice_init_rcu(struct list_head *list,
     struct list_head *head,
     void (*sync)(void))
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 if (list_empty(head))
  return;



 INIT_LIST_HEAD(list);
 sync();
 last->next = at;
 ({ (head->next) = (first); });
 first->prev = head;
 at->prev = last;
}
static inline void hlist_del_rcu(struct hlist_node *n)
{
 __hlist_del(n);
 n->pprev = ((void *) 0x00200200);
}
static inline void hlist_replace_rcu(struct hlist_node *old,
     struct hlist_node *_new)
{
 struct hlist_node *next = old->next;

 _new->next = next;
 _new->pprev = old->pprev;
 ({ (*_new->pprev) = (_new); });
 if (next)
  _new->next->pprev = &_new->next;
 old->pprev = ((void *) 0x00200200);
}
static inline void hlist_add_head_rcu(struct hlist_node *n,
     struct hlist_head *h)
{
 struct hlist_node *first = h->first;

 n->next = first;
 n->pprev = &h->first;
 ({ (h->first) = (n); });
 if (first)
  first->pprev = &n->next;
}
static inline void hlist_add_before_rcu(struct hlist_node *n,
     struct hlist_node *next)
{
 n->pprev = next->pprev;
 n->next = next;
 ({ (*(n->pprev)) = (n); });
 next->pprev = &n->next;
}
static inline void hlist_add_after_rcu(struct hlist_node *prev,
           struct hlist_node *n)
{
 n->next = prev->next;
 n->pprev = &prev->next;
 ({ (prev->next) = (n); });
 if (n->next)
  n->next->pprev = &n->next;
}




struct nameidata;
struct path;
struct vfsmount;
struct qstr {
 unsigned int hash;
 unsigned int len;
 unsigned char *name;
};

struct dentry_stat_t {
 int nr_dentry;
 int nr_unused;
 int age_limit;
 int want_pages;
 int dummy[2];
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


static inline unsigned int
full_name_hash( unsigned char *name, unsigned int len)
{
 unsigned long hash = 0;
 while (len--)
  hash = partial_name_hash(*name++, hash);
 return end_name_hash(hash);
}

struct dcookie_struct;



struct dentry {
 atomic_t d_count;
 unsigned int d_flags;
 spinlock_t d_lock;
 struct inode *d_inode;





 struct hlist_node d_hash;
 struct dentry *d_parent;
 struct qstr d_name;

 struct list_head d_lru;



 union _d_u {
  struct list_head d_child;
   struct rcu_head d_rcu;
 } d_u;
 struct list_head d_subdirs;
 struct list_head d_alias;
 unsigned long d_time;
 struct dentry_operations *d_op;
 struct super_block *d_sb;
 void *d_fsdata;

 struct dcookie_struct *d_cookie;

 int d_mounted;
 unsigned char d_iname[36];
};







enum dentry_d_lock_class
{
 DENTRY_D_LOCK_NORMAL,
 DENTRY_D_LOCK_NESTED
};

struct dentry_operations {
 int (*d_revalidate)(struct dentry *, struct nameidata *);
 int (*d_hash) (struct dentry *, struct qstr *);
 int (*d_compare) (struct dentry *, struct qstr *, struct qstr *);
 int (*d_delete)(struct dentry *);
 void (*d_release)(struct dentry *);
 void (*d_iput)(struct dentry *, struct inode *);
 char *(*d_dname)(struct dentry *, char *, int);
};
extern spinlock_t dcache_lock;
extern seqlock_t rename_lock;
static inline void __d_drop(struct dentry *dentry)
{
 if (!(dentry->d_flags & 0x0010)) {
  dentry->d_flags |= 0x0010;
  hlist_del_rcu(&dentry->d_hash);
 }
}

static inline void d_drop(struct dentry *dentry)
{
 ;
 ;
  __d_drop(dentry);
 ;
 ;
}

static inline int dname_external(struct dentry *dentry)
{
 return dentry->d_name.name != dentry->d_iname;
}




extern void d_instantiate(struct dentry *, struct inode *);
extern struct dentry * d_instantiate_unique(struct dentry *, struct inode *);
extern struct dentry * d_materialise_unique(struct dentry *, struct inode *);
extern void d_delete(struct dentry *);


extern struct dentry * d_alloc(struct dentry *, struct qstr *);
extern struct dentry * d_alloc_anon(struct inode *);
extern struct dentry * d_splice_alias(struct inode *, struct dentry *);
extern struct dentry * d_add_ci(struct dentry *, struct inode *, struct qstr *);
extern void shrink_dcache_sb(struct super_block *);
extern void shrink_dcache_parent(struct dentry *);
extern void shrink_dcache_for_umount(struct super_block *);
extern int d_invalidate(struct dentry *);


extern struct dentry * d_alloc_root(struct inode *);


extern void d_genocide(struct dentry *);

extern struct dentry *d_find_alias(struct inode *);
extern void d_prune_aliases(struct inode *);


extern int have_submounts(struct dentry *);




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


extern void d_move(struct dentry *, struct dentry *);


extern struct dentry * d_lookup(struct dentry *, struct qstr *);
extern struct dentry * __d_lookup(struct dentry *, struct qstr *);
extern struct dentry * d_hash_and_lookup(struct dentry *, struct qstr *);


extern int d_validate(struct dentry *, struct dentry *);




extern char *dynamic_dname(struct dentry *, char *, int, char *, ...);

extern char *__d_path( struct path *path, struct path *root, char *, int);
extern char *d_path( struct path *, char *, int);
extern char *dentry_path(struct dentry *, char *, int);
static inline struct dentry *dget(struct dentry *dentry)
{
 if (dentry) {
  ;
  ;
 }
 return dentry;
}

extern struct dentry * dget_locked(struct dentry *);
static inline int d_unhashed(struct dentry *dentry)
{
 return (dentry->d_flags & 0x0010);
}

static inline struct dentry *dget_parent(struct dentry *dentry)
{
 struct dentry *ret;

 ;
 ret = dget(dentry->d_parent);
 ;
 return ret;
}

extern void dput(struct dentry *);

static inline int d_mountpoint(struct dentry *dentry)
{
 return dentry->d_mounted;
}

extern struct vfsmount *lookup_mnt(struct vfsmount *, struct dentry *);
extern struct dentry *lookup_create(struct nameidata *nd, int is_dir);

extern int sysctl_vfs_cache_pressure;



struct dentry;
struct vfsmount;

struct path {
 struct vfsmount *mnt;
 struct dentry *dentry;
};




static inline void *radix_tree_ptr_to_indirect(void *ptr)
{
 return (void *)((unsigned long)ptr | 1);
}

static inline void *radix_tree_indirect_to_ptr(void *ptr)
{
 return (void *)((unsigned long)ptr & ~1);
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



 void *ret = *(typeof(pslot))g_map(pslot, sizeof(*(pslot)));

 if (__builtin_expect(!!(radix_tree_is_indirect_ptr(ret)), 0))
  ret = ((void *)-1UL);
 return ret;
}
static inline void radix_tree_replace_slot(void **pslot, void *item)
{
 ;
 ({ (*pslot) = (item); });
}

int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
   unsigned long first_index, unsigned int max_items);
unsigned int
radix_tree_gang_lookup_slot(struct radix_tree_root *root, void ***results,
   unsigned long first_index, unsigned int max_items);
unsigned long radix_tree_next_hole(struct radix_tree_root *root,
    unsigned long index, unsigned long max_scan);
int radix_tree_preload(gfp_t gfp_mask);
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
int radix_tree_tagged(struct radix_tree_root *root, unsigned int tag);

static inline void radix_tree_preload_end(void)
{
 do { } while (0);
}
struct raw_prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
};

struct prio_tree_node {
 struct prio_tree_node *left;
 struct prio_tree_node *right;
 struct prio_tree_node *parent;
 unsigned long start;
 unsigned long last;
};

struct prio_tree_root {
 struct prio_tree_node *prio_tree_node;
 unsigned short index_bits;
 unsigned short raw;




};

struct prio_tree_iter {
 struct prio_tree_node *cur;
 unsigned long mask;
 unsigned long value;
 int size_level;

 struct prio_tree_root *root;
 unsigned long r_index;
 unsigned long h_index;
};

static inline void prio_tree_iter_init(struct prio_tree_iter *iter,
  struct prio_tree_root *root, unsigned long r_index, unsigned long h_index)
{
 iter->root = root;
 iter->r_index = r_index;
 iter->h_index = h_index;
 iter->cur = 0;
}
static inline int prio_tree_empty( struct prio_tree_root *root)
{
 return root->prio_tree_node == 0;
}

static inline int prio_tree_root( struct prio_tree_node *node)
{
 return node->parent == node;
}

static inline int prio_tree_left_empty( struct prio_tree_node *node)
{
 return node->left == node;
}

static inline int prio_tree_right_empty( struct prio_tree_node *node)
{
 return node->right == node;
}


struct prio_tree_node *prio_tree_replace(struct prio_tree_root *root,
                struct prio_tree_node *old, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_insert(struct prio_tree_root *root,
                struct prio_tree_node *node);
void prio_tree_remove(struct prio_tree_root *root, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_next(struct prio_tree_iter *iter);






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
 struct rcu_head rcu;
 struct upid numbers[1];
};

extern struct pid init_struct_pid;

struct pid_link
{
 struct hlist_node node;
 struct pid *pid;
};

static inline struct pid *get_pid(struct pid *pid)
{
 if (pid)
  ;
 return pid;
}






extern struct task_struct *pid_task(struct pid *pid, enum pid_type);
extern struct task_struct *get_pid_task(struct pid *pid, enum pid_type);

extern struct pid *get_task_pid(struct task_struct *task, enum pid_type type);





extern void attach_pid(struct task_struct *task, enum pid_type type,
   struct pid *pid);
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
int next_pidmap(struct pid_namespace *pid_ns, int last);

extern struct pid *alloc_pid(struct pid_namespace *ns);
extern void free_pid(struct pid *pid);
static inline struct pid_namespace *ns_of_pid(struct pid *pid)
{
 struct pid_namespace *ns = 0;
 if (pid)
  ns = pid->numbers[pid->level].ns;
 return ns;
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
typedef struct kernel_cap_struct {
 __u32 cap[2];
} kernel_cap_t;
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

extern kernel_cap_t __cap_empty_set;
extern kernel_cap_t __cap_full_set;
extern kernel_cap_t __cap_init_eff_set;

kernel_cap_t cap_set_effective( kernel_cap_t pE_new);
extern int capable(int cap);
struct semaphore {
 spinlock_t lock;
 unsigned int count;
 struct list_head wait_list;
};
static inline void sema_init(struct semaphore *sem, int val)
{





}




extern void down(struct semaphore *sem);
extern int __attribute__((warn_unused_result)) down_interruptible(struct semaphore *sem);
extern int __attribute__((warn_unused_result)) down_killable(struct semaphore *sem);
extern int __attribute__((warn_unused_result)) down_trylock(struct semaphore *sem);
extern int __attribute__((warn_unused_result)) down_timeout(struct semaphore *sem, long jiffies);
extern void up(struct semaphore *sem);



struct export_operations;
struct hd_geometry;
struct iovec;
struct nameidata;
struct kiocb;
struct pipe_inode_info;
struct poll_table_struct;
struct kstatfs;
struct vm_area_struct;
struct vfsmount;

extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) inode_init(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) inode_init_early(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) files_init(unsigned long);

struct buffer_head;
typedef int (get_block_t)(struct inode *inode, sector_t iblock,
   struct buffer_head *bh_result, int create);
typedef void (dio_iodone_t)(struct kiocb *iocb, loff_t offset,
   ssize_t bytes, void *_private);
struct iattr {
 unsigned int ia_valid;
 umode_t ia_mode;
 uid_t ia_uid;
 gid_t ia_gid;
 loff_t ia_size;
 struct timespec ia_atime;
 struct timespec ia_mtime;
 struct timespec ia_ctime;






 struct file *ia_file;
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
struct v1_mem_dqinfo {
};
struct v2_mem_dqinfo {
 unsigned int dqi_blocks;
 unsigned int dqi_free_blk;
 unsigned int dqi_free_entry;
};


typedef __kernel_uid32_t qid_t;
typedef __u64 qsize_t;

extern spinlock_t dq_data_lock;
struct mem_dqblk {
 __u32 dqb_bhardlimit;
 __u32 dqb_bsoftlimit;
 qsize_t dqb_curspace;
 __u32 dqb_ihardlimit;
 __u32 dqb_isoftlimit;
 __u32 dqb_curinodes;
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
 union {
  struct v1_mem_dqinfo v1_i;
  struct v2_mem_dqinfo v2_i;
 } u;
};

struct super_block;





extern void mark_info_dirty(struct super_block *sb, int type);
static inline int info_dirty(struct mem_dqinfo *info)
{
 return (__builtin_constant_p((16)) ? constant_test_bit((16), (&info->dqi_flags)) : variable_test_bit((16), (&info->dqi_flags)));
}

struct dqstats {
 int lookups;
 int drops;
 int reads;
 int writes;
 int cache_hits;
 int allocated_dquots;
 int free_dquots;
 int syncs;
};

extern struct dqstats dqstats;
struct dquot {
 struct hlist_node dq_hash;
 struct list_head dq_inuse;
 struct list_head dq_free;
 struct list_head dq_dirty;
 struct mutex dq_lock;
 atomic_t dq_count;
 wait_queue_head_t dq_wait_unused;
 struct super_block *dq_sb;
 unsigned int dq_id;
 loff_t dq_off;
 unsigned long dq_flags;
 short dq_type;
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
 int (*initialize) (struct inode *, int);
 int (*drop) (struct inode *);
 int (*alloc_space) (struct inode *, qsize_t, int);
 int (*alloc_inode) ( struct inode *, unsigned long);
 int (*free_space) (struct inode *, qsize_t);
 int (*free_inode) ( struct inode *, unsigned long);
 int (*transfer) (struct inode *, struct iattr *);
 int (*write_dquot) (struct dquot *);
 int (*acquire_dquot) (struct dquot *);
 int (*release_dquot) (struct dquot *);
 int (*mark_dirty) (struct dquot *);
 int (*write_info) (struct super_block *, int);
};


struct quotactl_ops {
 int (*quota_on)(struct super_block *, int, int, char *, int);
 int (*quota_off)(struct super_block *, int, int);
 int (*quota_sync)(struct super_block *, int);
 int (*get_info)(struct super_block *, int, struct if_dqinfo *);
 int (*set_info)(struct super_block *, int, struct if_dqinfo *);
 int (*get_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*set_dqblk)(struct super_block *, int, qid_t, struct if_dqblk *);
 int (*get_xstate)(struct super_block *, struct fs_quota_stat *);
 int (*set_xstate)(struct super_block *, unsigned int, int);
 int (*get_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
 int (*set_xquota)(struct super_block *, int, qid_t, struct fs_disk_quota *);
};

struct quota_format_type {
 int qf_fmt_id;
 struct quota_format_ops *qf_ops;
 struct module *qf_owner;
 struct quota_format_type *qf_next;
};
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
size_t iov_iter_single_seg_count(struct iov_iter *i);

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
 void (*sync_page)(struct page *);


 int (*writepages)(struct address_space *, struct writeback_control *);


 int (*set_page_dirty)(struct page *page);

 int (*readpages)(struct file *filp, struct address_space *mapping,
   struct list_head *pages, unsigned nr_pages);





 int (*prepare_write)(struct file *, struct page *, unsigned, unsigned);
 int (*commit_write)(struct file *, struct page *, unsigned, unsigned);

 int (*write_begin)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned flags,
    struct page **pagep, void **fsdata);
 int (*write_end)(struct file *, struct address_space *mapping,
    loff_t pos, unsigned len, unsigned copied,
    struct page *page, void *fsdata);


 sector_t (*bmap)(struct address_space *, sector_t);
 void (*invalidatepage) (struct page *, unsigned long);
 int (*releasepage) (struct page *, gfp_t);
 ssize_t (*direct_IO)(int, struct kiocb *, struct iovec *iov,
   loff_t offset, unsigned long nr_segs);
 int (*get_xip_mem)(struct address_space *, unsigned long, int,
      void **, unsigned long *);

 int (*migratepage) (struct address_space *,
   struct page *, struct page *);
 int (*launder_page) (struct page *);
 int (*is_partially_uptodate) (struct page *, read_descriptor_t *,
     unsigned long);
};





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
 struct prio_tree_root i_mmap;
 struct list_head i_mmap_nonlinear;
 spinlock_t i_mmap_lock;
 unsigned int truncate_count;
 unsigned long nrpages;
 unsigned long writeback_index;
 struct address_space_operations *a_ops;
 unsigned long flags;
 struct backing_dev_info *backing_dev_info;
 spinlock_t private_lock;
 struct list_head private_list;
 struct address_space *assoc_mapping;
} __attribute__((aligned(sizeof(long))));






struct block_device {
 dev_t bd_dev;
 struct inode * bd_inode;
 int bd_openers;
 struct mutex bd_mutex;
 struct semaphore bd_mount_sem;
 struct list_head bd_inodes;
 void * bd_holder;
 int bd_holders;

 struct list_head bd_holder_list;

 struct block_device * bd_contains;
 unsigned bd_block_size;
 struct hd_struct * bd_part;

 unsigned bd_part_count;
 int bd_invalidated;
 struct gendisk * bd_disk;
 struct list_head bd_list;
 struct backing_dev_info *bd_inode_backing_dev_info;






 unsigned long bd_private;
};
int mapping_tagged(struct address_space *mapping, int tag);




static inline int mapping_mapped(struct address_space *mapping)
{
 return !prio_tree_empty(&mapping->i_mmap) ||
  !list_empty(&mapping->i_mmap_nonlinear);
}







static inline int mapping_writably_mapped(struct address_space *mapping)
{
 return mapping->i_mmap_writable != 0;
}
struct inode {
 struct hlist_node i_hash;
 struct list_head i_list;
 struct list_head i_sb_list;
 struct list_head i_dentry;
 unsigned long i_ino;
 atomic_t i_count;
 unsigned int i_nlink;
 uid_t i_uid;
 gid_t i_gid;
 dev_t i_rdev;
 u64 i_version;
 loff_t i_size;



 struct timespec i_atime;
 struct timespec i_mtime;
 struct timespec i_ctime;
 unsigned int i_blkbits;
 blkcnt_t i_blocks;
 unsigned short i_bytes;
 umode_t i_mode;
 spinlock_t i_lock;
 struct mutex i_mutex;
 struct rw_semaphore i_alloc_sem;
 struct inode_operations *i_op;
 struct file_operations *i_fop;
 struct super_block *i_sb;
 struct file_lock *i_flock;
 struct address_space *i_mapping;
 struct address_space i_data;

 struct dquot *i_dquot[2];

 struct list_head i_devices;
 union {
  struct pipe_inode_info *i_pipe;
  struct block_device *i_bdev;
  struct cdev *i_cdev;
 };
 int i_cindex;

 __u32 i_generation;


 unsigned long i_dnotify_mask;
 struct dnotify_struct *i_dnotify;



 struct list_head inotify_watches;
 struct mutex inotify_mutex;


 unsigned long i_state;
 unsigned long dirtied_when;

 unsigned int i_flags;

 atomic_t i_writecount;

 void *i_security;

 void *i_private;
};
enum inode_i_mutex_lock_class
{
 I_MUTEX_NORMAL,
 I_MUTEX_PARENT,
 I_MUTEX_CHILD,
 I_MUTEX_XATTR,
 I_MUTEX_QUOTA
};

extern void inode_double_lock(struct inode *inode1, struct inode *inode2);
extern void inode_double_unlock(struct inode *inode1, struct inode *inode2);
static inline loff_t i_size_read( struct inode *inode)
{
 return inode->i_size;

}






static inline void i_size_write(struct inode *inode, loff_t i_size)
{
 inode->i_size = i_size;

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
 uid_t uid, euid;
 int signum;
};




struct file_ra_state {
 unsigned long start;
 unsigned int size;
 unsigned int async_size;


 unsigned int ra_pages;
 int mmap_miss;
 loff_t prev_pos;
};




static inline int ra_has_index(struct file_ra_state *ra, unsigned long index)
{
 return (index >= ra->start &&
  index < ra->start + ra->size);
}




struct file {




 union {
  struct list_head fu_list;
  struct rcu_head fu_rcuhead;
 } f_u;
 struct path f_path;


 struct file_operations *f_op;
 atomic_long_t f_count;
 unsigned int f_flags;
 mode_t f_mode;
 loff_t f_pos;
 struct fown_struct f_owner;
 unsigned int f_uid, f_gid;
 struct file_ra_state f_ra;

 u64 f_version;

 void *f_security;


 void *private_data;



 struct list_head f_ep_links;
 spinlock_t f_ep_lock;

 struct address_space *f_mapping;



};
extern spinlock_t files_lock;
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
 int (*fl_compare_owner)(struct file_lock *, struct file_lock *);
 void (*fl_notify)(struct file_lock *);
 int (*fl_grant)(struct file_lock *, struct file_lock *, int);
 void (*fl_copy_lock)(struct file_lock *, struct file_lock *);
 void (*fl_release_private)(struct file_lock *);
 void (*fl_break)(struct file_lock *);
 int (*fl_mylease)(struct file_lock *, struct file_lock *);
 int (*fl_change)(struct file_lock **, int);
};







 enum nfs_stat {
 NFS_OK = 0,
 NFSERR_PERM = 1,
 NFSERR_NOENT = 2,
 NFSERR_IO = 5,
 NFSERR_NXIO = 6,
 NFSERR_EAGAIN = 11,
 NFSERR_ACCES = 13,
 NFSERR_EXIST = 17,
 NFSERR_XDEV = 18,
 NFSERR_NODEV = 19,
 NFSERR_NOTDIR = 20,
 NFSERR_ISDIR = 21,
 NFSERR_INVAL = 22,
 NFSERR_FBIG = 27,
 NFSERR_NOSPC = 28,
 NFSERR_ROFS = 30,
 NFSERR_MLINK = 31,
 NFSERR_OPNOTSUPP = 45,
 NFSERR_NAMETOOLONG = 63,
 NFSERR_NOTEMPTY = 66,
 NFSERR_DQUOT = 69,
 NFSERR_STALE = 70,
 NFSERR_REMOTE = 71,
 NFSERR_WFLUSH = 99,
 NFSERR_BADHANDLE = 10001,
 NFSERR_NOT_SYNC = 10002,
 NFSERR_BAD_COOKIE = 10003,
 NFSERR_NOTSUPP = 10004,
 NFSERR_TOOSMALL = 10005,
 NFSERR_SERVERFAULT = 10006,
 NFSERR_BADTYPE = 10007,
 NFSERR_JUKEBOX = 10008,
 NFSERR_SAME = 10009,
 NFSERR_DENIED = 10010,
 NFSERR_EXPIRED = 10011,
 NFSERR_LOCKED = 10012,
 NFSERR_GRACE = 10013,
 NFSERR_FHEXPIRED = 10014,
 NFSERR_SHARE_DENIED = 10015,
 NFSERR_WRONGSEC = 10016,
 NFSERR_CLID_INUSE = 10017,
 NFSERR_RESOURCE = 10018,
 NFSERR_MOVED = 10019,
 NFSERR_NOFILEHANDLE = 10020,
 NFSERR_MINOR_VERS_MISMATCH = 10021,
 NFSERR_STALE_CLIENTID = 10022,
 NFSERR_STALE_STATEID = 10023,
 NFSERR_OLD_STATEID = 10024,
 NFSERR_BAD_STATEID = 10025,
 NFSERR_BAD_SEQID = 10026,
 NFSERR_NOT_SAME = 10027,
 NFSERR_LOCK_RANGE = 10028,
 NFSERR_SYMLINK = 10029,
 NFSERR_RESTOREFH = 10030,
 NFSERR_LEASE_MOVED = 10031,
 NFSERR_ATTRNOTSUPP = 10032,
 NFSERR_NO_GRACE = 10033,
 NFSERR_RECLAIM_BAD = 10034,
 NFSERR_RECLAIM_CONFLICT = 10035,
 NFSERR_BAD_XDR = 10036,
 NFSERR_LOCKS_HELD = 10037,
 NFSERR_OPENMODE = 10038,
 NFSERR_BADOWNER = 10039,
 NFSERR_BADCHAR = 10040,
 NFSERR_BADNAME = 10041,
 NFSERR_BAD_RANGE = 10042,
 NFSERR_LOCK_NOTSUPP = 10043,
 NFSERR_OP_ILLEGAL = 10044,
 NFSERR_DEADLOCK = 10045,
 NFSERR_FILE_OPEN = 10046,
 NFSERR_ADMIN_REVOKED = 10047,
 NFSERR_CB_PATH_DOWN = 10048,
 NFSERR_REPLAY_ME = 10049
};



enum nfs_ftype {
 NFNON = 0,
 NFREG = 1,
 NFDIR = 2,
 NFBLK = 3,
 NFCHR = 4,
 NFLNK = 5,
 NFSOCK = 6,
 NFBAD = 7,
 NFFIFO = 8
};


typedef u32 rpc_authflavor_t;

enum rpc_auth_flavors {
 RPC_AUTH_NULL = 0,
 RPC_AUTH_UNIX = 1,
 RPC_AUTH_SHORT = 2,
 RPC_AUTH_DES = 3,
 RPC_AUTH_KRB = 4,
 RPC_AUTH_GSS = 6,
 RPC_AUTH_MAXFLAVOR = 8,

 RPC_AUTH_GSS_KRB5 = 390003,
 RPC_AUTH_GSS_KRB5I = 390004,
 RPC_AUTH_GSS_KRB5P = 390005,
 RPC_AUTH_GSS_LKEY = 390006,
 RPC_AUTH_GSS_LKEYI = 390007,
 RPC_AUTH_GSS_LKEYP = 390008,
 RPC_AUTH_GSS_SPKM = 390009,
 RPC_AUTH_GSS_SPKMI = 390010,
 RPC_AUTH_GSS_SPKMP = 390011,
};




enum rpc_msg_type {
 RPC_CALL = 0,
 RPC_REPLY = 1
};

enum rpc_reply_stat {
 RPC_MSG_ACCEPTED = 0,
 RPC_MSG_DENIED = 1
};

enum rpc_accept_stat {
 RPC_SUCCESS = 0,
 RPC_PROG_UNAVAIL = 1,
 RPC_PROG_MISMATCH = 2,
 RPC_PROC_UNAVAIL = 3,
 RPC_GARBAGE_ARGS = 4,
 RPC_SYSTEM_ERR = 5,

 RPC_DROP_REPLY = 60000,
};

enum rpc_reject_stat {
 RPC_MISMATCH = 0,
 RPC_AUTH_ERROR = 1
};

enum rpc_auth_stat {
 RPC_AUTH_OK = 0,
 RPC_AUTH_BADCRED = 1,
 RPC_AUTH_REJECTEDCRED = 2,
 RPC_AUTH_BADVERF = 3,
 RPC_AUTH_REJECTEDVERF = 4,
 RPC_AUTH_TOOWEAK = 5,

 RPCSEC_GSS_CREDPROBLEM = 13,
 RPCSEC_GSS_CTXPROBLEM = 14
};
typedef __be32 rpc_fraghdr;






struct nfs_fh {
 unsigned short size;
 unsigned char data[128];
};





static inline int nfs_compare_fh( struct nfs_fh *a, struct nfs_fh *b)
{
 return a->size != b->size || memcmp(a->data, b->data, a->size) != 0;
}

static inline void nfs_copy_fh(struct nfs_fh *target, struct nfs_fh *source)
{
 target->size = source->size;
 memcpy(target->data, source->data, source->size);
}
enum nfs3_stable_how {
 NFS_UNSTABLE = 0,
 NFS_DATA_SYNC = 1,
 NFS_FILE_SYNC = 2
};

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
 struct list_head fl_link;
 struct list_head fl_block;
 fl_owner_t fl_owner;
 unsigned char fl_flags;
 unsigned char fl_type;
 unsigned int fl_pid;
 struct pid *fl_nspid;
 wait_queue_head_t fl_wait;
 struct file *fl_file;
 loff_t fl_start;
 loff_t fl_end;

 struct fasync_struct * fl_fasync;
 unsigned long fl_break_time;

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



struct flock {
 short l_type;
 short l_whence;
 off_t l_start;
 off_t l_len;
 pid_t l_pid;

};

extern int fcntl_getlk(struct file *, struct flock *);
extern int fcntl_setlk(unsigned int, struct file *, unsigned int,
   struct flock *);







extern void send_sigio(struct fown_struct *fown, int fd, int band);
extern int fcntl_setlease(unsigned int fd, struct file *filp, long arg);
extern int fcntl_getlease(struct file *filp);


extern int do_sync_mapping_range(struct address_space *mapping, loff_t offset,
   loff_t endbyte, unsigned int flags);


extern void locks_init_lock(struct file_lock *);
extern void locks_copy_lock(struct file_lock *, struct file_lock *);
extern void __locks_copy_lock(struct file_lock *, struct file_lock *);
extern void locks_remove_posix(struct file *, fl_owner_t);
extern void locks_remove_flock(struct file *);
extern void posix_test_lock(struct file *, struct file_lock *);
extern int posix_lock_file(struct file *, struct file_lock *, struct file_lock *);
extern int posix_lock_file_wait(struct file *, struct file_lock *);
extern int posix_unblock_lock(struct file *, struct file_lock *);
extern int vfs_test_lock(struct file *, struct file_lock *);
extern int vfs_lock_file(struct file *, unsigned int, struct file_lock *, struct file_lock *);
extern int vfs_cancel_lock(struct file *filp, struct file_lock *fl);
extern int flock_lock_file_wait(struct file *filp, struct file_lock *fl);
extern int __break_lease(struct inode *inode, unsigned int flags);
extern void lease_get_mtime(struct inode *, struct timespec *time);
extern int generic_setlease(struct file *, long, struct file_lock **);
extern int vfs_setlease(struct file *, long, struct file_lock **);
extern int lease_modify(struct file_lock **, int);
extern int lock_may_read(struct inode *, loff_t start, unsigned long count);
extern int lock_may_write(struct inode *, loff_t start, unsigned long count);
extern struct seq_operations locks_seq_operations;

struct fasync_struct {
 int magic;
 int fa_fd;
 struct fasync_struct *fa_next;
 struct file *fa_file;
};




extern int fasync_helper(int, struct file *, int, struct fasync_struct **);

extern void kill_fasync(struct fasync_struct **, int, int);

extern void __kill_fasync(struct fasync_struct *, int, int);

extern int __f_setown(struct file *filp, struct pid *, enum pid_type, int force);
extern int f_setown(struct file *filp, unsigned long arg, int force);
extern void f_delown(struct file *filp);
extern pid_t f_getown(struct file *filp);
extern int send_sigurg(struct fown_struct *fown);
extern struct list_head super_blocks;
extern spinlock_t sb_lock;



struct super_block {
 struct list_head s_list;
 dev_t s_dev;
 unsigned long s_blocksize;
 unsigned char s_blocksize_bits;
 unsigned char s_dirt;
 unsigned long long s_maxbytes;
 struct file_system_type *s_type;
 struct super_operations *s_op;
 struct dquot_operations *dq_op;
  struct quotactl_ops *s_qcop;
 struct export_operations *s_export_op;
 unsigned long s_flags;
 unsigned long s_magic;
 struct dentry *s_root;
 struct rw_semaphore s_umount;
 struct mutex s_lock;
 int s_count;
 int s_need_sync_fs;
 atomic_t s_active;

 void *s_security;

 struct xattr_handler **s_xattr;

 struct list_head s_inodes;
 struct list_head s_dirty;
 struct list_head s_io;
 struct list_head s_more_io;
 struct hlist_head s_anon;
 struct list_head s_files;

 struct list_head s_dentry_lru;
 int s_nr_dentry_unused;

 struct block_device *s_bdev;
 struct mtd_info *s_mtd;
 struct list_head s_instances;
 struct quota_info s_dquot;

 int s_frozen;
 wait_queue_head_t s_wait_unfrozen;

 char s_id[32];

 void *s_fs_info;





 struct mutex s_vfs_rename_mutex;



 u32 s_time_gran;





 char *s_subtype;





 char *s_options;
};

extern struct timespec current_fs_time(struct super_block *sb);




enum {
 SB_UNFROZEN = 0,
 SB_FREEZE_WRITE = 1,
 SB_FREEZE_TRANS = 2,
};
extern void lock_super(struct super_block *);
extern void unlock_super(struct super_block *);




extern int vfs_permission(struct nameidata *, int);
extern int vfs_create(struct inode *, struct dentry *, int, struct nameidata *);
extern int vfs_mkdir(struct inode *, struct dentry *, int);
extern int vfs_mknod(struct inode *, struct dentry *, int, dev_t);
extern int vfs_symlink(struct inode *, struct dentry *, char *);
extern int vfs_link(struct dentry *, struct inode *, struct dentry *);
extern int vfs_rmdir(struct inode *, struct dentry *);
extern int vfs_unlink(struct inode *, struct dentry *);
extern int vfs_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);




extern void dentry_unhash(struct dentry *dentry);




extern int file_permission(struct file *, int);
int generic_osync_inode(struct inode *, struct address_space *, int);







typedef int (*filldir_t)(void *, char *, int, loff_t, u64, unsigned);

struct block_device_operations {
 int (*open) (struct inode *, struct file *);
 int (*release) (struct inode *, struct file *);
 int (*ioctl) (struct inode *, struct file *, unsigned, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned, unsigned long);
 int (*direct_access) (struct block_device *, sector_t,
      void **, unsigned long *);
 int (*media_changed) (struct gendisk *);
 int (*revalidate_disk) (struct gendisk *);
 int (*getgeo)(struct block_device *, struct hd_geometry *);
 struct module *owner;
};
struct file_operations {
 struct module *owner;
 loff_t (*llseek) (struct file *, loff_t, int);
 ssize_t (*read) (struct file *, char *, size_t, loff_t *);
 ssize_t (*write) (struct file *, char *, size_t, loff_t *);
 ssize_t (*aio_read) (struct kiocb *, struct iovec *, unsigned long, loff_t);
 ssize_t (*aio_write) (struct kiocb *, struct iovec *, unsigned long, loff_t);
 int (*readdir) (struct file *, void *, filldir_t);
 unsigned int (*poll) (struct file *, struct poll_table_struct *);
 int (*ioctl) (struct inode *, struct file *, unsigned int, unsigned long);
 long (*unlocked_ioctl) (struct file *, unsigned int, unsigned long);
 long (*compat_ioctl) (struct file *, unsigned int, unsigned long);
 int (*mmap) (struct file *, struct vm_area_struct *);
 int (*open) (struct inode *, struct file *);
 int (*flush) (struct file *, fl_owner_t id);
 int (*release) (struct inode *, struct file *);
 int (*fsync) (struct file *, struct dentry *, int datasync);
 int (*aio_fsync) (struct kiocb *, int datasync);
 int (*fasync) (int, struct file *, int);
 int (*lock) (struct file *, int, struct file_lock *);
 ssize_t (*sendpage) (struct file *, struct page *, int, size_t, loff_t *, int);
 unsigned long (*get_unmapped_area)(struct file *, unsigned long, unsigned long, unsigned long, unsigned long);
 int (*check_flags)(int);
 int (*dir_notify)(struct file *filp, unsigned long arg);
 int (*flock) (struct file *, int, struct file_lock *);
 ssize_t (*splice_write)(struct pipe_inode_info *, struct file *, loff_t *, size_t, unsigned int);
 ssize_t (*splice_read)(struct file *, loff_t *, struct pipe_inode_info *, size_t, unsigned int);
 int (*setlease)(struct file *, long, struct file_lock **);
};

struct inode_operations {
 int (*create) (struct inode *,struct dentry *,int, struct nameidata *);
 struct dentry * (*lookup) (struct inode *,struct dentry *, struct nameidata *);
 int (*link) (struct dentry *,struct inode *,struct dentry *);
 int (*unlink) (struct inode *,struct dentry *);
 int (*symlink) (struct inode *,struct dentry *, char *);
 int (*mkdir) (struct inode *,struct dentry *,int);
 int (*rmdir) (struct inode *,struct dentry *);
 int (*mknod) (struct inode *,struct dentry *,int,dev_t);
 int (*rename) (struct inode *, struct dentry *,
   struct inode *, struct dentry *);
 int (*readlink) (struct dentry *, char *,int);
 void * (*follow_link) (struct dentry *, struct nameidata *);
 void (*put_link) (struct dentry *, struct nameidata *, void *);
 void (*truncate) (struct inode *);
 int (*permission) (struct inode *, int);
 int (*setattr) (struct dentry *, struct iattr *);
 int (*getattr) (struct vfsmount *mnt, struct dentry *, struct kstat *);
 int (*setxattr) (struct dentry *, char *, void *,size_t,int);
 ssize_t (*getxattr) (struct dentry *, char *, void *, size_t);
 ssize_t (*listxattr) (struct dentry *, char *, size_t);
 int (*removexattr) (struct dentry *, char *);
 void (*truncate_range)(struct inode *, loff_t, loff_t);
 long (*fallocate)(struct inode *inode, int mode, loff_t offset,
     loff_t len);
};

struct seq_file;

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

    void (*dirty_inode) (struct inode *);
 int (*write_inode) (struct inode *, int);
 void (*drop_inode) (struct inode *);
 void (*delete_inode) (struct inode *);
 void (*put_super) (struct super_block *);
 void (*write_super) (struct super_block *);
 int (*sync_fs)(struct super_block *sb, int wait);
 void (*write_super_lockfs) (struct super_block *);
 void (*unlockfs) (struct super_block *);
 int (*statfs) (struct dentry *, struct kstatfs *);
 int (*remount_fs) (struct super_block *, int *, char *);
 void (*clear_inode) (struct inode *);
 void (*umount_begin) (struct super_block *);

 int (*show_options)(struct seq_file *, struct vfsmount *);
 int (*show_stats)(struct seq_file *, struct vfsmount *);

 ssize_t (*quota_read)(struct super_block *, int, char *, size_t, loff_t);
 ssize_t (*quota_write)(struct super_block *, int, char *, size_t, loff_t);

};
extern void __mark_inode_dirty(struct inode *, int);
static inline void mark_inode_dirty(struct inode *inode)
{
 __mark_inode_dirty(inode, (1 | 2 | 4));
}

static inline void mark_inode_dirty_sync(struct inode *inode)
{
 __mark_inode_dirty(inode, 1);
}
static inline void inc_nlink(struct inode *inode)
{
 inode->i_nlink++;
}

static inline void inode_inc_link_count(struct inode *inode)
{
 inc_nlink(inode);
 mark_inode_dirty(inode);
}
static inline void drop_nlink(struct inode *inode)
{
 inode->i_nlink--;
}
static inline void clear_nlink(struct inode *inode)
{
 inode->i_nlink = 0;
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

extern void touch_atime(struct vfsmount *mnt, struct dentry *dentry);
static inline void file_accessed(struct file *file)
{
 if (!(file->f_flags & 01000000))
  touch_atime(file->f_path.mnt, file->f_path.dentry);
}

int sync_inode(struct inode *inode, struct writeback_control *wbc);

struct file_system_type {
 char *name;
 int fs_flags;
 int (*get_sb) (struct file_system_type *, int,
         char *, void *, struct vfsmount *);
 void (*kill_sb) (struct super_block *);
 struct module *owner;
 struct file_system_type * next;
 struct list_head fs_supers;

 struct lock_class_key s_lock_key;
 struct lock_class_key s_umount_key;

 struct lock_class_key i_lock_key;
 struct lock_class_key i_mutex_key;
 struct lock_class_key i_mutex_dir_key;
 struct lock_class_key i_alloc_sem_key;
};

extern int get_sb_bdev(struct file_system_type *fs_type,
 int flags, char *dev_name, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_single(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
extern int get_sb_nodev(struct file_system_type *fs_type,
 int flags, void *data,
 int (*fill_super)(struct super_block *, void *, int),
 struct vfsmount *mnt);
void generic_shutdown_super(struct super_block *sb);
void kill_block_super(struct super_block *sb);
void kill_anon_super(struct super_block *sb);
void kill_litter_super(struct super_block *sb);
void deactivate_super(struct super_block *sb);
int set_anon_super(struct super_block *s, void *data);
struct super_block *sget(struct file_system_type *type,
   int (*test)(struct super_block *,void *),
   int (*set)(struct super_block *,void *),
   void *data);
extern int get_sb_pseudo(struct file_system_type *, char *,
 struct super_operations *ops, unsigned long,
 struct vfsmount *mnt);
extern int simple_set_mnt(struct vfsmount *mnt, struct super_block *sb);
int __put_super_and_need_restart(struct super_block *sb);
void unnamed_dev_init(void);







extern int register_filesystem(struct file_system_type *);
extern int unregister_filesystem(struct file_system_type *);
extern struct vfsmount *kern_mount_data(struct file_system_type *, void *data);

extern int may_umount_tree(struct vfsmount *);
extern int may_umount(struct vfsmount *);
extern long do_mount(char *, char *, char *, unsigned long, void *);
extern struct vfsmount *collect_mounts(struct vfsmount *, struct dentry *);
extern void drop_collected_mounts(struct vfsmount *);

extern int vfs_statfs(struct dentry *, struct kstatfs *);


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

extern int rw_verify_area(int, struct file *, loff_t *, size_t);

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
  return __break_lease(inode, mode);
 return 0;
}



extern int do_truncate(struct dentry *, loff_t start, unsigned int time_attrs,
         struct file *filp);
extern long do_sys_open(int dfd, char *filename, int flags,
   int mode);
extern struct file *filp_open( char *, int, int);
extern struct file * dentry_open(struct dentry *, struct vfsmount *, int);
extern int filp_close(struct file *, fl_owner_t id);
extern char * getname( char *);


extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) vfs_caches_init_early(void);
extern void __attribute__ ((__section__(".init.text"))) __attribute__((__cold__)) vfs_caches_init(unsigned long);

extern struct kmem_cache *names_cachep;






extern void putname( char *name);



extern int register_blkdev(unsigned int, char *);
extern void unregister_blkdev(unsigned int, char *);
extern struct block_device *bdget(dev_t);
extern void bd_set_size(struct block_device *, loff_t size);
extern void bd_forget(struct inode *inode);
extern void bdput(struct block_device *);
extern struct block_device *open_by_devnum(dev_t, unsigned);



extern struct file_operations def_blk_fops;
extern struct file_operations def_chr_fops;
extern struct file_operations bad_sock_fops;
extern struct file_operations def_fifo_fops;

extern int ioctl_by_bdev(struct block_device *, unsigned, unsigned long);
extern int blkdev_ioctl(struct inode *, struct file *, unsigned, unsigned long);
extern int blkdev_driver_ioctl(struct inode *inode, struct file *file,
          struct gendisk *disk, unsigned cmd,
          unsigned long arg);
extern long compat_blkdev_ioctl(struct file *, unsigned, unsigned long);
extern int blkdev_get(struct block_device *, mode_t, unsigned);
extern int blkdev_put(struct block_device *);
extern int bd_claim(struct block_device *, void *);
extern void bd_release(struct block_device *);

extern int bd_claim_by_disk(struct block_device *, void *, struct gendisk *);
extern void bd_release_from_disk(struct block_device *, struct gendisk *);
extern int alloc_chrdev_region(dev_t *, unsigned, unsigned, char *);
extern int register_chrdev_region(dev_t, unsigned, char *);
extern int register_chrdev(unsigned int, char *,
      struct file_operations *);
extern void unregister_chrdev(unsigned int, char *);
extern void unregister_chrdev_region(dev_t, unsigned);
extern void chrdev_show(struct seq_file *,off_t);






extern char *__bdevname(dev_t, char *buffer);
extern char *bdevname(struct block_device *bdev, char *buffer);
extern struct block_device *lookup_bdev( char *);
extern struct block_device *open_bdev_excl( char *, int, void *);
extern void close_bdev_excl(struct block_device *);
extern void blkdev_show(struct seq_file *,off_t);




extern void init_special_inode(struct inode *, umode_t, dev_t);


extern void make_bad_inode(struct inode *);
extern int is_bad_inode(struct inode *);

extern struct file_operations read_pipefifo_fops;
extern struct file_operations write_pipefifo_fops;
extern struct file_operations rdwr_pipefifo_fops;

extern int fs_may_remount_ro(struct super_block *);
extern int check_disk_change(struct block_device *);
extern int __invalidate_device(struct block_device *);
extern int invalidate_partition(struct gendisk *, int);

extern int invalidate_inodes(struct super_block *);
unsigned long __invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end,
     bool be_atomic);
unsigned long invalidate_mapping_pages(struct address_space *mapping,
     unsigned long start, unsigned long end);

static inline unsigned long
invalidate_inode_pages(struct address_space *mapping)
{
 return invalidate_mapping_pages(mapping, 0, ~0UL);
}

static inline void invalidate_remote_inode(struct inode *inode)
{
 if ((((inode->i_mode) & 00170000) == 0100000) || (((inode->i_mode) & 00170000) == 0040000) ||
     (((inode->i_mode) & 00170000) == 0120000))
  invalidate_mapping_pages(inode->i_mapping, 0, -1);
}
extern int invalidate_inode_pages2(struct address_space *mapping);
extern int invalidate_inode_pages2_range(struct address_space *mapping,
      unsigned long start, unsigned long end);
extern void generic_sync_sb_inodes(struct super_block *sb,
    struct writeback_control *wbc);
extern int write_inode_now(struct inode *, int);
extern int filemap_fdatawrite(struct address_space *);
extern int filemap_flush(struct address_space *);
extern int filemap_fdatawait(struct address_space *);
extern int filemap_write_and_wait(struct address_space *mapping);
extern int filemap_write_and_wait_range(struct address_space *mapping,
            loff_t lstart, loff_t lend);
extern int wait_on_page_writeback_range(struct address_space *mapping,
    unsigned long start, unsigned long end);
extern int __filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end, int sync_mode);
extern int filemap_fdatawrite_range(struct address_space *mapping,
    loff_t start, loff_t end);

extern long do_fsync(struct file *file, int datasync);
extern void sync_supers(void);
extern void sync_filesystems(int wait);
extern void __fsync_super(struct super_block *sb);
extern void emergency_sync(void);
extern void emergency_remount(void);
extern int do_remount_sb(struct super_block *sb, int flags,
    void *data, int force);

extern sector_t bmap(struct inode *, sector_t);

extern int notify_change(struct dentry *, struct iattr *);
extern int inode_permission(struct inode *, int);
extern int generic_permission(struct inode *, int,
  int (*check_acl)(struct inode *, int));

extern int get_write_access(struct inode *);
extern int deny_write_access(struct file *);
static inline void put_write_access(struct inode * inode)
{
 ;
}
static inline void allow_write_access(struct file *file)
{
 if (file)
  ;
}
extern int do_pipe(int *);
extern int do_pipe_flags(int *, int);
extern struct file *create_read_pipe(struct file *f, int flags);
extern struct file *create_write_pipe(int flags);
extern void free_write_pipe(struct file *);

extern struct file *do_filp_open(int dfd, char *pathname,
  int open_flag, int mode);
extern int may_open(struct nameidata *, int, int);

extern int kernel_read(struct file *, unsigned long, char *, unsigned long);
extern struct file * open_exec( char *);


extern int is_subdir(struct dentry *, struct dentry *);
extern ino_t find_inode_number(struct dentry *, struct qstr *);






static inline void *ERR_PTR(long error)
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
static inline void *ERR_CAST( void *ptr)
{

 return (void *) ptr;
}


extern loff_t default_llseek(struct file *file, loff_t offset, int origin);

extern loff_t vfs_llseek(struct file *file, loff_t offset, int origin);

extern void inode_init_once(struct inode *);
extern void iput(struct inode *);
extern struct inode * igrab(struct inode *);
extern ino_t iunique(struct super_block *, ino_t);
extern int inode_needs_sync(struct inode *inode);
extern void generic_delete_inode(struct inode *inode);
extern void generic_drop_inode(struct inode *inode);

extern struct inode *ilookup5_nowait(struct super_block *sb,
  unsigned long hashval, int (*test)(struct inode *, void *),
  void *data);
extern struct inode *ilookup5(struct super_block *sb, unsigned long hashval,
  int (*test)(struct inode *, void *), void *data);
extern struct inode *ilookup(struct super_block *sb, unsigned long ino);

extern struct inode * iget5_locked(struct super_block *, unsigned long, int (*test)(struct inode *, void *), int (*set)(struct inode *, void *), void *);
extern struct inode * iget_locked(struct super_block *, unsigned long);
extern void unlock_new_inode(struct inode *);

extern void __iget(struct inode * inode);
extern void iget_failed(struct inode *);
extern void clear_inode(struct inode *);
extern void destroy_inode(struct inode *);
extern struct inode *new_inode(struct super_block *);
extern int should_remove_suid(struct dentry *);
extern int file_remove_suid(struct file *);

extern void __insert_inode_hash(struct inode *, unsigned long hashval);
extern void remove_inode_hash(struct inode *);
static inline void insert_inode_hash(struct inode *inode) {
 __insert_inode_hash(inode, inode->i_ino);
}

extern struct file * get_empty_filp(void);
extern void file_move(struct file *f, struct list_head *list);
extern void file_kill(struct file *f);

struct bio;
extern void submit_bio(int, struct bio *);
extern int bdev_read_only(struct block_device *);

extern int set_blocksize(struct block_device *, int);
extern int sb_set_blocksize(struct super_block *, int);
extern int sb_min_blocksize(struct super_block *, int);
extern int sb_has_dirty_inodes(struct super_block *);

extern int generic_file_mmap(struct file *, struct vm_area_struct *);
extern int generic_file_readonly_mmap(struct file *, struct vm_area_struct *);
extern int file_read_actor(read_descriptor_t * desc, struct page *page, unsigned long offset, unsigned long size);
int generic_write_checks(struct file *file, loff_t *pos, size_t *count, int isblk);
extern ssize_t generic_file_aio_read(struct kiocb *, struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_aio_write(struct kiocb *, struct iovec *, unsigned long, loff_t);
extern ssize_t generic_file_aio_write_nolock(struct kiocb *, struct iovec *,
  unsigned long, loff_t);
extern ssize_t generic_file_direct_write(struct kiocb *, struct iovec *,
  unsigned long *, loff_t, loff_t *, size_t, size_t);
extern ssize_t generic_file_buffered_write(struct kiocb *, struct iovec *,
  unsigned long, loff_t, loff_t *, size_t, ssize_t);
extern ssize_t do_sync_read(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern ssize_t do_sync_write(struct file *filp, char *buf, size_t len, loff_t *ppos);
extern int generic_segment_checks( struct iovec *iov,
  unsigned long *nr_segs, size_t *count, int access_flags);


extern ssize_t generic_file_splice_read(struct file *, loff_t *,
  struct pipe_inode_info *, size_t, unsigned int);
extern ssize_t generic_file_splice_write(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_file_splice_write_nolock(struct pipe_inode_info *,
  struct file *, loff_t *, size_t, unsigned int);
extern ssize_t generic_splice_sendpage(struct pipe_inode_info *pipe,
  struct file *out, loff_t *, size_t len, unsigned int flags);
extern long do_splice_direct(struct file *in, loff_t *ppos, struct file *out,
  size_t len, unsigned int flags);

extern void
file_ra_state_init(struct file_ra_state *ra, struct address_space *mapping);
extern loff_t no_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek(struct file *file, loff_t offset, int origin);
extern loff_t generic_file_llseek_unlocked(struct file *file, loff_t offset,
   int origin);
extern int generic_file_open(struct inode * inode, struct file * filp);
extern int nonseekable_open(struct inode * inode, struct file * filp);


extern ssize_t xip_file_read(struct file *filp, char *buf, size_t len,
        loff_t *ppos);
extern int xip_file_mmap(struct file * file, struct vm_area_struct * vma);
extern ssize_t xip_file_write(struct file *filp, char *buf,
         size_t len, loff_t *ppos);
extern int xip_truncate_page(struct address_space *mapping, loff_t from);
ssize_t __blockdev_direct_IO(int rw, struct kiocb *iocb, struct inode *inode,
 struct block_device *bdev, struct iovec *iov, loff_t offset,
 unsigned long nr_segs, get_block_t get_block, dio_iodone_t end_io,
 int lock_type);

enum {
 DIO_LOCKING = 1,
 DIO_NO_LOCKING,
 DIO_OWN_LOCKING,
};

static inline ssize_t blockdev_direct_IO(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_LOCKING);
}

static inline ssize_t blockdev_direct_IO_no_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_NO_LOCKING);
}

static inline ssize_t blockdev_direct_IO_own_locking(int rw, struct kiocb *iocb,
 struct inode *inode, struct block_device *bdev, struct iovec *iov,
 loff_t offset, unsigned long nr_segs, get_block_t get_block,
 dio_iodone_t end_io)
{
 return __blockdev_direct_IO(rw, iocb, inode, bdev, iov, offset,
    nr_segs, get_block, end_io, DIO_OWN_LOCKING);
}


extern struct file_operations generic_ro_fops;



extern int vfs_readlink(struct dentry *, char *, int, char *);
extern int vfs_follow_link(struct nameidata *, char *);
extern int page_readlink(struct dentry *, char *, int);
extern void *page_follow_link_light(struct dentry *, struct nameidata *);
extern void page_put_link(struct dentry *, struct nameidata *, void *);
extern int __page_symlink(struct inode *inode, char *symname, int len,
  int nofs);
extern int page_symlink(struct inode *inode, char *symname, int len);
extern struct inode_operations page_symlink_inode_operations;
extern int generic_readlink(struct dentry *, char *, int);
extern void generic_fillattr(struct inode *, struct kstat *);
extern int vfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
void inode_add_bytes(struct inode *inode, loff_t bytes);
void inode_sub_bytes(struct inode *inode, loff_t bytes);
loff_t inode_get_bytes(struct inode *inode);
void inode_set_bytes(struct inode *inode, loff_t bytes);

extern int vfs_readdir(struct file *, filldir_t, void *);

extern int vfs_stat(char *, struct kstat *);
extern int vfs_lstat(char *, struct kstat *);
extern int vfs_stat_fd(int dfd, char *, struct kstat *);
extern int vfs_lstat_fd(int dfd, char *, struct kstat *);
extern int vfs_fstat(unsigned int, struct kstat *);

extern int do_vfs_ioctl(struct file *filp, unsigned int fd, unsigned int cmd,
      unsigned long arg);

extern void get_filesystem(struct file_system_type *fs);
extern void put_filesystem(struct file_system_type *fs);
extern struct file_system_type *get_fs_type( char *name);
extern struct super_block *get_super(struct block_device *);
extern struct super_block *user_get_super(dev_t);
extern void drop_super(struct super_block *sb);

extern int dcache_dir_open(struct inode *, struct file *);
extern int dcache_dir_close(struct inode *, struct file *);
extern loff_t dcache_dir_lseek(struct file *, loff_t, int);
extern int dcache_readdir(struct file *, void *, filldir_t);
extern int simple_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int simple_statfs(struct dentry *, struct kstatfs *);
extern int simple_link(struct dentry *, struct inode *, struct dentry *);
extern int simple_unlink(struct inode *, struct dentry *);
extern int simple_rmdir(struct inode *, struct dentry *);
extern int simple_rename(struct inode *, struct dentry *, struct inode *, struct dentry *);
extern int simple_sync_file(struct file *, struct dentry *, int);
extern int simple_empty(struct dentry *);
extern int simple_readpage(struct file *file, struct page *page);
extern int simple_prepare_write(struct file *file, struct page *page,
   unsigned offset, unsigned to);
extern int simple_write_begin(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned flags,
   struct page **pagep, void **fsdata);
extern int simple_write_end(struct file *file, struct address_space *mapping,
   loff_t pos, unsigned len, unsigned copied,
   struct page *page, void *fsdata);

extern struct dentry *simple_lookup(struct inode *, struct dentry *, struct nameidata *);
extern ssize_t generic_read_dir(struct file *, char *, size_t, loff_t *);
extern struct file_operations simple_dir_operations;
extern struct inode_operations simple_dir_inode_operations;
struct tree_descr { char *name; struct file_operations *ops; int mode; };
struct dentry *d_alloc_name(struct dentry *, char *);
extern int simple_fill_super(struct super_block *, int, struct tree_descr *);
extern int simple_pin_fs(struct file_system_type *, struct vfsmount **mount, int *count);
extern void simple_release_fs(struct vfsmount **mount, int *count);

extern ssize_t simple_read_from_buffer(void *to, size_t count,
   loff_t *ppos, void *from, size_t available);


extern int buffer_migrate_page(struct address_space *,
    struct page *, struct page *);




extern int inode_change_ok(struct inode *, struct iattr *);
extern int __attribute__((warn_unused_result)) inode_setattr(struct inode *, struct iattr *);

extern void file_update_time(struct file *file);

extern int generic_show_options(struct seq_file *m, struct vfsmount *mnt);
extern void save_mount_options(struct super_block *sb, char *options);

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

static inline void simple_transaction_set(struct file *file, size_t n)
{
 struct simple_transaction_argresp *ar = file->private_data;

 ;





 ;
 ar->size = n;
}
static inline void __attribute__((format(printf, 1, 2)))
__simple_attr_check_format( char *fmt, ...)
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



static inline char *alloc_secdata(void)
{
 return (char *)get_zeroed_page(((( gfp_t)0x10u) | (( gfp_t)0x40u) | (( gfp_t)0x80u)));
}

static inline void free_secdata(void *secdata)
{
 free_pages(((unsigned long)secdata),0);
}
struct ctl_table;
int proc_nr_files(struct ctl_table *table, int write, struct file *filp,
    void *buffer, size_t *lenp, loff_t *ppos);

int get_filesystem_list(char * buf);


struct net;
struct completion;
struct mm_struct;
enum {
 PROC_ROOT_INO = 1,
};
typedef int (read_proc_t)(char *page, char **start, off_t off,
     int count, int *eof, void *data);
typedef int (write_proc_t)(struct file *file, char *buffer,
      unsigned long count, void *data);

struct proc_dir_entry {
 unsigned int low_ino;
 unsigned short namelen;
 char *name;
 mode_t mode;
 nlink_t nlink;
 uid_t uid;
 gid_t gid;
 loff_t size;
 struct inode_operations *proc_iops;
 struct file_operations *proc_fops;
 struct module *owner;
 struct proc_dir_entry *next, *parent, *subdir;
 void *data;
 read_proc_t *read_proc;
 write_proc_t *write_proc;
 atomic_t count;
 int pde_users;
 spinlock_t pde_unload_lock;
 struct completion *pde_unload_completion;
 struct list_head pde_openers;
};

struct kcore_list {
 struct kcore_list *next;
 unsigned long addr;
 size_t size;
};

struct vmcore {
 struct list_head list;
 unsigned long long paddr;
 unsigned long long size;
 loff_t offset;
};



extern struct proc_dir_entry *proc_root_kcore;

extern spinlock_t proc_subdir_lock;

extern void proc_root_init(void);
extern void proc_misc_init(void);

void proc_flush_task(struct task_struct *task);
struct dentry *proc_pid_lookup(struct inode *dir, struct dentry * dentry, struct nameidata *);
int proc_pid_readdir(struct file * filp, void * dirent, filldir_t filldir);
unsigned long task_vsize(struct mm_struct *);
int task_statm(struct mm_struct *, int *, int *, int *, int *);
void task_mem(struct seq_file *, struct mm_struct *);
void clear_refs_smap(struct mm_struct *mm);

struct proc_dir_entry *de_get(struct proc_dir_entry *de);
void de_put(struct proc_dir_entry *de);

extern struct proc_dir_entry *create_proc_entry( char *name, mode_t mode,
      struct proc_dir_entry *parent);
struct proc_dir_entry *proc_create_data( char *name, mode_t mode,
    struct proc_dir_entry *parent,
    struct file_operations *proc_fops,
    void *data);
extern void remove_proc_entry( char *name, struct proc_dir_entry *parent);

extern struct vfsmount *proc_mnt;
struct pid_namespace;
extern int proc_fill_super(struct super_block *);
extern struct inode *proc_get_inode(struct super_block *, unsigned int, struct proc_dir_entry *);
extern int proc_readdir(struct file *, void *, filldir_t);
extern struct dentry *proc_lookup(struct inode *, struct dentry *, struct nameidata *);

extern struct file_operations proc_kcore_operations;
extern struct file_operations ppc_htab_operations;

extern int pid_ns_prepare_proc(struct pid_namespace *ns);
extern void pid_ns_release_proc(struct pid_namespace *ns);




struct tty_driver;
extern void proc_tty_init(void);
extern void proc_tty_register_driver(struct tty_driver *driver);
extern void proc_tty_unregister_driver(struct tty_driver *driver);
extern struct proc_dir_entry *proc_symlink( char *,
  struct proc_dir_entry *, char *);
extern struct proc_dir_entry *proc_mkdir( char *,struct proc_dir_entry *);
extern struct proc_dir_entry *proc_mkdir_mode( char *name, mode_t mode,
   struct proc_dir_entry *parent);

static inline struct proc_dir_entry *proc_create( char *name, mode_t mode,
 struct proc_dir_entry *parent, struct file_operations *proc_fops)
{
 return proc_create_data(name, mode, parent, proc_fops, 0);
}

static inline struct proc_dir_entry *create_proc_read_entry( char *name,
 mode_t mode, struct proc_dir_entry *base,
 read_proc_t *read_proc, void * data)
{
 struct proc_dir_entry *res=create_proc_entry(name,mode,base);
 if (res) {
  res->read_proc=read_proc;
  res->data=data;
 }
 return res;
}

extern struct proc_dir_entry *proc_net_fops_create(struct net *net,
 char *name, mode_t mode, struct file_operations *fops);
extern void proc_net_remove(struct net *net, char *name);
extern struct proc_dir_entry *proc_net_mkdir(struct net *net, char *name,
 struct proc_dir_entry *parent);



extern void set_mm_exe_file(struct mm_struct *mm, struct file *new_exe_file);
extern struct file *get_mm_exe_file(struct mm_struct *mm);
extern void dup_mm_exe_file(struct mm_struct *oldmm, struct mm_struct *newmm);
extern void kclist_add(struct kcore_list *, void *, size_t);


union proc_op {
 int (*proc_get_link)(struct inode *, struct path *);
 int (*proc_read)(struct task_struct *task, char *page);
 int (*proc_show)(struct seq_file *m,
  struct pid_namespace *ns, struct pid *pid,
  struct task_struct *task);
};

struct ctl_table_header;
struct ctl_table;

struct proc_inode {
 struct pid *pid;
 int fd;
 union proc_op op;
 struct proc_dir_entry *pde;
 struct ctl_table_header *sysctl;
 struct ctl_table *sysctl_entry;
 struct inode vfs_inode;
};

static inline struct proc_inode *PROC_I( struct inode *inode)
{
 return ({ typeof( ((struct proc_inode *)0)->vfs_inode ) *__mptr = (inode); (struct proc_inode *)( (char *)__mptr - ((size_t) &((struct proc_inode *)0)->vfs_inode) );});
}

static inline struct proc_dir_entry *PDE( struct inode *inode)
{
 return PROC_I(inode)->pde;
}

static inline struct net *PDE_NET(struct proc_dir_entry *pde)
{
 return pde->parent->data;
}

struct proc_maps_private {
 struct pid *pid;
 struct task_struct *task;

 struct vm_area_struct *tail_vma;

};













typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;


struct termios {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;
 cc_t c_line;
 cc_t c_cc[19];
};

struct termios2 {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;
 cc_t c_line;
 cc_t c_cc[19];
 speed_t c_ispeed;
 speed_t c_ospeed;
};

struct ktermios {
 tcflag_t c_iflag;
 tcflag_t c_oflag;
 tcflag_t c_cflag;
 tcflag_t c_lflag;
 cc_t c_line;
 cc_t c_cc[19];
 speed_t c_ispeed;
 speed_t c_ospeed;
};




struct winsize {
 unsigned short ws_row;
 unsigned short ws_col;
 unsigned short ws_xpixel;
 unsigned short ws_ypixel;
};


struct termio {
 unsigned short c_iflag;
 unsigned short c_oflag;
 unsigned short c_cflag;
 unsigned short c_lflag;
 unsigned char c_line;
 unsigned char c_cc[8];
};
static inline int user_termio_to_kernel_termios(struct ktermios *termios,
      struct termio *termio)
{
 { unsigned short __tmp; ({ int __ret_gu; unsigned long __val_gu; (void)0; switch (sizeof(*(&(termio)->c_iflag))) { case 1: asm ("call __get_user_" "1" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_iflag)); break; case 2: asm ("call __get_user_" "2" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_iflag)); break; case 4: asm ("call __get_user_" "4" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_iflag)); break; case 8: asm ("call __get_user_" "8" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_iflag)); break; default: asm ("call __get_user_" "X" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_iflag)); break; } (__tmp) = (__typeof__(*(&(termio)->c_iflag)))__val_gu; __ret_gu; }); *(unsigned short *) &(termios)->c_iflag = __tmp; };
 { unsigned short __tmp; ({ int __ret_gu; unsigned long __val_gu; (void)0; switch (sizeof(*(&(termio)->c_oflag))) { case 1: asm ("call __get_user_" "1" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_oflag)); break; case 2: asm ("call __get_user_" "2" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_oflag)); break; case 4: asm ("call __get_user_" "4" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_oflag)); break; case 8: asm ("call __get_user_" "8" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_oflag)); break; default: asm ("call __get_user_" "X" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_oflag)); break; } (__tmp) = (__typeof__(*(&(termio)->c_oflag)))__val_gu; __ret_gu; }); *(unsigned short *) &(termios)->c_oflag = __tmp; };
 { unsigned short __tmp; ({ int __ret_gu; unsigned long __val_gu; (void)0; switch (sizeof(*(&(termio)->c_cflag))) { case 1: asm ("call __get_user_" "1" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_cflag)); break; case 2: asm ("call __get_user_" "2" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_cflag)); break; case 4: asm ("call __get_user_" "4" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_cflag)); break; case 8: asm ("call __get_user_" "8" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_cflag)); break; default: asm ("call __get_user_" "X" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_cflag)); break; } (__tmp) = (__typeof__(*(&(termio)->c_cflag)))__val_gu; __ret_gu; }); *(unsigned short *) &(termios)->c_cflag = __tmp; };
 { unsigned short __tmp; ({ int __ret_gu; unsigned long __val_gu; (void)0; switch (sizeof(*(&(termio)->c_lflag))) { case 1: asm ("call __get_user_" "1" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_lflag)); break; case 2: asm ("call __get_user_" "2" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_lflag)); break; case 4: asm ("call __get_user_" "4" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_lflag)); break; case 8: asm ("call __get_user_" "8" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_lflag)); break; default: asm ("call __get_user_" "X" : "=a" (__ret_gu),"=d" (__val_gu) : "0" (&(termio)->c_lflag)); break; } (__tmp) = (__typeof__(*(&(termio)->c_lflag)))__val_gu; __ret_gu; }); *(unsigned short *) &(termios)->c_lflag = __tmp; };
 return copy_from_user(termios->c_cc, termio->c_cc, 8);
}




static inline int kernel_termios_to_user_termio(struct termio *termio,
         struct ktermios *termios)
{
 ({ int __ret_pu; __typeof__(*(&(termio)->c_iflag)) __pu_val; (void)0; __pu_val = (termios)->c_iflag; switch (sizeof(*(&(termio)->c_iflag))) { case 1: asm ("call __put_user_" "1" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_iflag)))(__pu_val)), "c" (&(termio)->c_iflag) : "ebx"); break; case 2: asm ("call __put_user_" "2" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_iflag)))(__pu_val)), "c" (&(termio)->c_iflag) : "ebx"); break; case 4: asm ("call __put_user_" "4" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_iflag)))(__pu_val)), "c" (&(termio)->c_iflag) : "ebx"); break; case 8: asm ("call __put_user_" "8" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_iflag)))(__pu_val)), "c" (&(termio)->c_iflag) : "ebx"); break; default: asm ("call __put_user_" "X" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_iflag)))(__pu_val)), "c" (&(termio)->c_iflag) : "ebx"); break; } __ret_pu; });
 ({ int __ret_pu; __typeof__(*(&(termio)->c_oflag)) __pu_val; (void)0; __pu_val = (termios)->c_oflag; switch (sizeof(*(&(termio)->c_oflag))) { case 1: asm ("call __put_user_" "1" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_oflag)))(__pu_val)), "c" (&(termio)->c_oflag) : "ebx"); break; case 2: asm ("call __put_user_" "2" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_oflag)))(__pu_val)), "c" (&(termio)->c_oflag) : "ebx"); break; case 4: asm ("call __put_user_" "4" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_oflag)))(__pu_val)), "c" (&(termio)->c_oflag) : "ebx"); break; case 8: asm ("call __put_user_" "8" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_oflag)))(__pu_val)), "c" (&(termio)->c_oflag) : "ebx"); break; default: asm ("call __put_user_" "X" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_oflag)))(__pu_val)), "c" (&(termio)->c_oflag) : "ebx"); break; } __ret_pu; });
 ({ int __ret_pu; __typeof__(*(&(termio)->c_cflag)) __pu_val; (void)0; __pu_val = (termios)->c_cflag; switch (sizeof(*(&(termio)->c_cflag))) { case 1: asm ("call __put_user_" "1" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_cflag)))(__pu_val)), "c" (&(termio)->c_cflag) : "ebx"); break; case 2: asm ("call __put_user_" "2" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_cflag)))(__pu_val)), "c" (&(termio)->c_cflag) : "ebx"); break; case 4: asm ("call __put_user_" "4" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_cflag)))(__pu_val)), "c" (&(termio)->c_cflag) : "ebx"); break; case 8: asm ("call __put_user_" "8" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_cflag)))(__pu_val)), "c" (&(termio)->c_cflag) : "ebx"); break; default: asm ("call __put_user_" "X" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_cflag)))(__pu_val)), "c" (&(termio)->c_cflag) : "ebx"); break; } __ret_pu; });
 ({ int __ret_pu; __typeof__(*(&(termio)->c_lflag)) __pu_val; (void)0; __pu_val = (termios)->c_lflag; switch (sizeof(*(&(termio)->c_lflag))) { case 1: asm ("call __put_user_" "1" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_lflag)))(__pu_val)), "c" (&(termio)->c_lflag) : "ebx"); break; case 2: asm ("call __put_user_" "2" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_lflag)))(__pu_val)), "c" (&(termio)->c_lflag) : "ebx"); break; case 4: asm ("call __put_user_" "4" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_lflag)))(__pu_val)), "c" (&(termio)->c_lflag) : "ebx"); break; case 8: asm ("call __put_user_" "8" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_lflag)))(__pu_val)), "c" (&(termio)->c_lflag) : "ebx"); break; default: asm ("call __put_user_" "X" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_lflag)))(__pu_val)), "c" (&(termio)->c_lflag) : "ebx"); break; } __ret_pu; });
 ({ int __ret_pu; __typeof__(*(&(termio)->c_line)) __pu_val; (void)0; __pu_val = (termios)->c_line; switch (sizeof(*(&(termio)->c_line))) { case 1: asm ("call __put_user_" "1" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_line)))(__pu_val)), "c" (&(termio)->c_line) : "ebx"); break; case 2: asm ("call __put_user_" "2" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_line)))(__pu_val)), "c" (&(termio)->c_line) : "ebx"); break; case 4: asm ("call __put_user_" "4" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_line)))(__pu_val)), "c" (&(termio)->c_line) : "ebx"); break; case 8: asm ("call __put_user_" "8" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_line)))(__pu_val)), "c" (&(termio)->c_line) : "ebx"); break; default: asm ("call __put_user_" "X" : "=a" (__ret_pu) :"0" ((typeof(*(&(termio)->c_line)))(__pu_val)), "c" (&(termio)->c_line) : "ebx"); break; } __ret_pu; });
 return copy_to_user((termio)->c_cc, (termios)->c_cc, 8);
}

static inline int user_termios_to_kernel_termios(struct ktermios *k,
       struct termios2 *u)
{
 return copy_from_user(k, u, sizeof(struct termios2));
}

static inline int kernel_termios_to_user_termios(struct termios2 *u,
       struct ktermios *k)
{
 return copy_to_user(u, k, sizeof(struct termios2));
}

static inline int user_termios_to_kernel_termios_1(struct ktermios *k,
         struct termios *u)
{
 return copy_from_user(k, u, sizeof(struct termios));
}

static inline int kernel_termios_to_user_termios_1(struct termios *u,
         struct ktermios *k)
{
 return copy_to_user(u, k, sizeof(struct termios));
}








struct file_operations;
struct inode;
struct module;

struct cdev {
 struct kobject kobj;
 struct module *owner;
 struct file_operations *ops;
 struct list_head list;
 dev_t dev;
 unsigned int count;
};

void cdev_init(struct cdev *, struct file_operations *);

struct cdev *cdev_alloc(void);

void cdev_put(struct cdev *p);

int cdev_add(struct cdev *, dev_t, unsigned);

void cdev_del(struct cdev *);

void cd_forget(struct inode *);

extern struct backing_dev_info directly_mappable_cdev_bdi;

struct tty_struct;
struct tty_driver;

struct tty_operations {
 int (*open)(struct tty_struct * tty, struct file * filp);
 void (*close)(struct tty_struct * tty, struct file * filp);
 int (*write)(struct tty_struct * tty,
        unsigned char *buf, int count);
 int (*put_char)(struct tty_struct *tty, unsigned char ch);
 void (*flush_chars)(struct tty_struct *tty);
 int (*write_room)(struct tty_struct *tty);
 int (*chars_in_buffer)(struct tty_struct *tty);
 int (*ioctl)(struct tty_struct *tty, struct file * file,
      unsigned int cmd, unsigned long arg);
 long (*compat_ioctl)(struct tty_struct *tty, struct file * file,
        unsigned int cmd, unsigned long arg);
 void (*set_termios)(struct tty_struct *tty, struct ktermios * old);
 void (*throttle)(struct tty_struct * tty);
 void (*unthrottle)(struct tty_struct * tty);
 void (*stop)(struct tty_struct *tty);
 void (*start)(struct tty_struct *tty);
 void (*hangup)(struct tty_struct *tty);
 int (*break_ctl)(struct tty_struct *tty, int state);
 void (*flush_buffer)(struct tty_struct *tty);
 void (*set_ldisc)(struct tty_struct *tty);
 void (*wait_until_sent)(struct tty_struct *tty, int timeout);
 void (*send_xchar)(struct tty_struct *tty, char ch);
 int (*read_proc)(char *page, char **start, off_t off,
     int count, int *eof, void *data);
 int (*tiocmget)(struct tty_struct *tty, struct file *file);
 int (*tiocmset)(struct tty_struct *tty, struct file *file,
   unsigned int set, unsigned int clear);
 int (*resize)(struct tty_struct *tty, struct tty_struct *real_tty,
    struct winsize *ws);

 int (*poll_init)(struct tty_driver *driver, int line, char *options);
 int (*poll_get_char)(struct tty_driver *driver, int line);
 void (*poll_put_char)(struct tty_driver *driver, int line, char ch);

};

struct tty_driver {
 int magic;
 struct cdev cdev;
 struct module *owner;
 char *driver_name;
 char *name;
 int name_base;
 int major;
 int minor_start;
 int minor_num;
 int num;
 short type;
 short subtype;
 struct ktermios init_termios;
 int flags;
 int refcount;
 struct proc_dir_entry *proc_entry;
 struct tty_driver *other;




 struct tty_struct **ttys;
 struct ktermios **termios;
 struct ktermios **termios_locked;
 void *driver_state;





 struct tty_operations *ops;
 struct list_head tty_drivers;
};

extern struct list_head tty_drivers;

struct tty_driver *alloc_tty_driver(int lines);
void put_tty_driver(struct tty_driver *driver);
void tty_set_operations(struct tty_driver *driver,
   struct tty_operations *op);
extern struct tty_driver *tty_find_polling_driver(char *name, int *line);
struct tty_ldisc_ops {
 int magic;
 char *name;
 int num;
 int flags;




 int (*open)(struct tty_struct *);
 void (*close)(struct tty_struct *);
 void (*flush_buffer)(struct tty_struct *tty);
 ssize_t (*chars_in_buffer)(struct tty_struct *tty);
 ssize_t (*read)(struct tty_struct * tty, struct file * file,
   unsigned char * buf, size_t nr);
 ssize_t (*write)(struct tty_struct * tty, struct file * file,
    unsigned char * buf, size_t nr);
 int (*ioctl)(struct tty_struct * tty, struct file * file,
    unsigned int cmd, unsigned long arg);
 long (*compat_ioctl)(struct tty_struct * tty, struct file * file,
    unsigned int cmd, unsigned long arg);
 void (*set_termios)(struct tty_struct *tty, struct ktermios * old);
 unsigned int (*poll)(struct tty_struct *, struct file *,
        struct poll_table_struct *);
 int (*hangup)(struct tty_struct *tty);




 void (*receive_buf)(struct tty_struct *, unsigned char *cp,
          char *fp, int count);
 void (*write_wakeup)(struct tty_struct *);

 struct module *owner;

 int refcount;
};

struct tty_ldisc {
 struct tty_ldisc_ops *ops;
 int refcount;
};
struct tty_buffer {
 struct tty_buffer *next;
 char *char_buf_ptr;
 unsigned char *flag_buf_ptr;
 int used;
 int size;
 int commit;
 int read;

 unsigned long data[0];
};

struct tty_bufhead {
 struct delayed_work work;
 spinlock_t lock;
 struct tty_buffer *head;
 struct tty_buffer *tail;
 struct tty_buffer *free;
 int memory_used;

};
struct device;
struct signal_struct;
struct tty_port {
 struct tty_struct *tty;
 int blocked_open;
 int count;
 wait_queue_head_t open_wait;
 wait_queue_head_t close_wait;
 unsigned long flags;
 struct mutex mutex;
 unsigned char *xmit_buf;
 int close_delay;
 int closing_wait;
};
struct tty_operations;

struct tty_struct {
 int magic;
 struct tty_driver *driver;
 struct tty_operations *ops;
 int index;

 struct tty_ldisc ldisc;
 struct mutex termios_mutex;
 spinlock_t ctrl_lock;

 struct ktermios *termios, *termios_locked;
 char name[64];
 struct pid *pgrp;
 struct pid *session;
 unsigned long flags;
 int count;
 struct winsize winsize;
 unsigned char stopped:1, hw_stopped:1, flow_stopped:1, packet:1;
 unsigned char low_latency:1, warned:1;
 unsigned char ctrl_status;
 unsigned int receive_room;

 struct tty_struct *link;
 struct fasync_struct *fasync;
 struct tty_bufhead buf;
 int alt_speed;
 wait_queue_head_t write_wait;
 wait_queue_head_t read_wait;
 struct work_struct hangup_work;
 void *disc_data;
 void *driver_data;
 struct list_head tty_files;
 unsigned int column;
 unsigned char lnext:1, erasing:1, raw:1, real_raw:1, icanon:1;
 unsigned char closing:1;
 unsigned short minimum_to_wake;
 unsigned long overrun_time;
 int num_overrun;
 unsigned long process_char_map[256/(8*sizeof(unsigned long))];
 char *read_buf;
 int read_head;
 int read_tail;
 int read_cnt;
 unsigned long read_flags[4096/(8*sizeof(unsigned long))];
 int canon_data;
 unsigned long canon_head;
 unsigned int canon_column;
 struct mutex atomic_read_lock;
 struct mutex atomic_write_lock;
 unsigned char *write_buf;
 int write_cnt;
 spinlock_t read_lock;

 struct work_struct SAK_work;
 struct tty_port *port;
};
extern void tty_write_flush(struct tty_struct *);

extern struct ktermios tty_std_termios;

extern int kmsg_redirect;

extern void console_init(void);
extern int vcs_init(void);

extern int tty_paranoia_check(struct tty_struct *tty, struct inode *inode,
         char *routine);
extern char *tty_name(struct tty_struct *tty, char *buf);
extern void tty_wait_until_sent(struct tty_struct *tty, long timeout);
extern int tty_check_change(struct tty_struct *tty);
extern void stop_tty(struct tty_struct *tty);
extern void start_tty(struct tty_struct *tty);
extern int tty_register_driver(struct tty_driver *driver);
extern int tty_unregister_driver(struct tty_driver *driver);
extern struct device *tty_register_device(struct tty_driver *driver,
       unsigned index, struct device *dev);
extern void tty_unregister_device(struct tty_driver *driver, unsigned index);
extern int tty_read_raw_data(struct tty_struct *tty, unsigned char *bufp,
        int buflen);
extern void tty_write_message(struct tty_struct *tty, char *msg);
extern int tty_put_char(struct tty_struct *tty, unsigned char c);
extern int tty_chars_in_buffer(struct tty_struct *tty);
extern int tty_write_room(struct tty_struct *tty);
extern void tty_driver_flush_buffer(struct tty_struct *tty);
extern void tty_throttle(struct tty_struct *tty);
extern void tty_unthrottle(struct tty_struct *tty);
extern int tty_do_resize(struct tty_struct *tty, struct tty_struct *real_tty,
      struct winsize *ws);

extern int is_current_pgrp_orphaned(void);
extern struct pid *tty_get_pgrp(struct tty_struct *tty);
extern int is_ignored(int sig);
extern int tty_signal(int sig, struct tty_struct *tty);
extern void tty_hangup(struct tty_struct *tty);
extern void tty_vhangup(struct tty_struct *tty);
extern void tty_unhangup(struct file *filp);
extern int tty_hung_up_p(struct file *filp);
extern void do_SAK(struct tty_struct *tty);
extern void __do_SAK(struct tty_struct *tty);
extern void disassociate_ctty(int priv);
extern void no_tty(void);
extern void tty_flip_buffer_push(struct tty_struct *tty);
extern speed_t tty_get_baud_rate(struct tty_struct *tty);
extern speed_t tty_termios_baud_rate(struct ktermios *termios);
extern speed_t tty_termios_input_baud_rate(struct ktermios *termios);
extern void tty_termios_encode_baud_rate(struct ktermios *termios,
      speed_t ibaud, speed_t obaud);
extern void tty_encode_baud_rate(struct tty_struct *tty,
      speed_t ibaud, speed_t obaud);
extern void tty_termios_copy_hw(struct ktermios *_new, struct ktermios *old);
extern int tty_termios_hw_change(struct ktermios *a, struct ktermios *b);

extern struct tty_ldisc *tty_ldisc_ref(struct tty_struct *);
extern void tty_ldisc_deref(struct tty_ldisc *);
extern struct tty_ldisc *tty_ldisc_ref_wait(struct tty_struct *);
extern struct file_operations tty_ldiscs_proc_fops;

extern void tty_wakeup(struct tty_struct *tty);
extern void tty_ldisc_flush(struct tty_struct *tty);

extern long tty_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
extern int tty_mode_ioctl(struct tty_struct *tty, struct file *file,
   unsigned int cmd, unsigned long arg);
extern int tty_perform_flush(struct tty_struct *tty, unsigned long arg);
extern dev_t tty_devnum(struct tty_struct *tty);
extern void proc_clear_tty(struct task_struct *p);
extern struct tty_struct *get_current_tty(void);

extern struct mutex tty_mutex;

extern void tty_write_unlock(struct tty_struct *tty);
extern int tty_write_lock(struct tty_struct *tty, int ndelay);


extern void tty_port_init(struct tty_port *port);
extern int tty_port_alloc_xmit_buf(struct tty_port *port);
extern void tty_port_free_xmit_buf(struct tty_port *port);

extern int tty_register_ldisc(int disc, struct tty_ldisc_ops *new_ldisc);
extern int tty_unregister_ldisc(int disc);
extern int tty_set_ldisc(struct tty_struct *tty, int ldisc);
extern int tty_ldisc_setup(struct tty_struct *tty, struct tty_struct *o_tty);
extern void tty_ldisc_release(struct tty_struct *tty, struct tty_struct *o_tty);
extern void tty_ldisc_init(struct tty_struct *tty);
extern void tty_ldisc_begin(void);

extern void tty_ldisc_enable(struct tty_struct *tty);



extern struct tty_ldisc_ops tty_ldisc_N_TTY;



extern void tty_audit_add_data(struct tty_struct *tty, unsigned char *data,
          size_t size);
extern void tty_audit_exit(void);
extern void tty_audit_fork(struct signal_struct *sig);
extern void tty_audit_push(struct tty_struct *tty);
extern void tty_audit_push_task(struct task_struct *tsk,
     uid_t loginuid, u32 sessionid);
extern int n_tty_ioctl(struct tty_struct *tty, struct file *file,
         unsigned int cmd, unsigned long arg);



extern void serial_console_init(void);



extern int pcxe_open(struct tty_struct *tty, struct file *filp);



extern void console_print( char *);



extern int vt_ioctl(struct tty_struct *tty, struct file *file,
      unsigned int cmd, unsigned long arg);
struct seq_operations;
struct file;
struct path;
struct inode;
struct dentry;

struct seq_file {
 char *buf;
 size_t size;
 size_t from;
 size_t count;
 loff_t index;
 loff_t read_pos;
 u64 version;
 struct mutex lock;
 struct seq_operations *op;
 void *_private;
};

struct seq_operations {
 void * (*start) (struct seq_file *m, loff_t *pos);
 void (*stop) (struct seq_file *m, void *v);
 void * (*next) (struct seq_file *m, void *v, loff_t *pos);
 int (*show) (struct seq_file *m, void *v);
};



int seq_open(struct file *, struct seq_operations *);
ssize_t seq_read(struct file *, char *, size_t, loff_t *);
loff_t seq_lseek(struct file *, loff_t, int);
int seq_release(struct inode *, struct file *);
int seq_escape(struct seq_file *, char *, char *);
int seq_putc(struct seq_file *m, char c);
int seq_puts(struct seq_file *m, char *s);

int seq_printf(struct seq_file *, char *, ...)
 __attribute__ ((format (printf,2,3)));

int seq_path(struct seq_file *, struct path *, char *);
int seq_dentry(struct seq_file *, struct dentry *, char *);
int seq_path_root(struct seq_file *m, struct path *path, struct path *root,
    char *esc);
int seq_bitmap(struct seq_file *m, unsigned long *bits, unsigned int nr_bits);
static inline int seq_cpumask(struct seq_file *m, cpumask_t *mask)
{
 return seq_bitmap(m, mask->bits, 64);
}

static inline int seq_nodemask(struct seq_file *m, nodemask_t *mask)
{
 return seq_bitmap(m, mask->bits, (1 << 9));
}

int single_open(struct file *, int (*)(struct seq_file *, void *), void *);
int single_release(struct inode *, struct file *);
void *__seq_open_private(struct file *, struct seq_operations *, int);
int seq_open_private(struct file *, struct seq_operations *, int);
int seq_release_private(struct inode *, struct file *);







extern struct list_head *seq_list_start(struct list_head *head,
  loff_t pos);
extern struct list_head *seq_list_start_head(struct list_head *head,
  loff_t pos);
extern struct list_head *seq_list_next(void *v, struct list_head *head,
  loff_t *ppos);
static void show_tty_range(struct seq_file *m, struct tty_driver *p,
 dev_t from, int num)
{
 seq_printf(m, "%-20s ", p->driver_name ? p->driver_name : "unknown");
 seq_printf(m, "/dev/%-8s ", p->name);
 if (p->num > 1) {
  seq_printf(m, "%3d %d-%d ", ((unsigned int) ((from) >> 20)), ((unsigned int) ((from) & ((1U << 20) - 1))),
   ((unsigned int) ((from) & ((1U << 20) - 1))) + num - 1);
 } else {
  seq_printf(m, "%3d %7d ", ((unsigned int) ((from) >> 20)), ((unsigned int) ((from) & ((1U << 20) - 1))));
 }
 switch (p->type) {
 case 0x0001:
  seq_printf(m, "system");
  if (p->subtype == 0x0001)
   seq_printf(m, ":/dev/tty");
  else if (p->subtype == 0x0003)
   seq_printf(m, ":console");
  else if (p->subtype == 0x0002)
   seq_printf(m, ":vtmaster");
  break;
 case 0x0002:
  seq_printf(m, "console");
  break;
 case 0x0003:
  seq_printf(m, "serial");
  break;
 case 0x0004:
  if (p->subtype == 0x0001)
   seq_printf(m, "pty:master");
  else if (p->subtype == 0x0002)
   seq_printf(m, "pty:slave");
  else
   seq_printf(m, "pty");
  break;
 default:
  seq_printf(m, "type:%d.%d", p->type, p->subtype);
 }
 seq_putc(m, '\n');
}

static int show_tty_driver(struct seq_file *m, void *v)
{
 struct tty_driver *p = ({ typeof( ((struct tty_driver *)0)->tty_drivers ) *__mptr = (v); (struct tty_driver *)( (char *)__mptr - ((size_t) &((struct tty_driver *)0)->tty_drivers) );});
 dev_t from = (((p->major) << 20) | (p->minor_start));
 dev_t to = from + p->num;

 if (&p->tty_drivers == tty_drivers.next) {

  seq_printf(m, "%-20s /dev/%-8s ", "/dev/tty", "tty");
  seq_printf(m, "%3d %7d ", 5, 0);
  seq_printf(m, "system:/dev/tty\n");
  seq_printf(m, "%-20s /dev/%-8s ", "/dev/console", "console");
  seq_printf(m, "%3d %7d ", 5, 1);
  seq_printf(m, "system:console\n");

  seq_printf(m, "%-20s /dev/%-8s ", "/dev/ptmx", "ptmx");
  seq_printf(m, "%3d %7d ", 5, 2);
  seq_printf(m, "system\n");


  seq_printf(m, "%-20s /dev/%-8s ", "/dev/vc/0", "vc/0");
  seq_printf(m, "%3d %7d ", 4, 0);
  seq_printf(m, "system:vtmaster\n");

 }

 while (((unsigned int) ((from) >> 20)) < ((unsigned int) ((to) >> 20))) {
  dev_t next = (((((unsigned int) ((from) >> 20))+1) << 20) | (0));
  show_tty_range(m, p, from, next - from);
  from = next;
 }
 if (from != to)
  show_tty_range(m, p, from, to - from);
 return 0;
}


static void *t_start(struct seq_file *m, loff_t *pos)
{
 ;
 return seq_list_start(&tty_drivers, *pos);
}

static void *t_next(struct seq_file *m, void *v, loff_t *pos)
{
 return seq_list_next(v, &tty_drivers, pos);
}

static void t_stop(struct seq_file *m, void *v)
{
 ;
}
void proc_ttys(struct seq_file *seq)
{
    loff_t pos = 0;
    void *v = 0;

    v = t_start(seq, &pos);
    while (v != 0) {
        show_tty_driver(seq, v);
        v = t_next(seq, v, &pos);
    }
}
