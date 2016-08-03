#ifndef _ASM_GENERIC_BITOPS_LE_H_
#define _ASM_GENERIC_BITOPS_LE_H_

#include <asm/types.h>
#include <asm/byteorder.h>

#if defined(__LITTLE_ENDIAN)

#define BITOP_LE_SWIZZLE	0

static inline unsigned long find_next_zero_bit_le(const void *addr,
		unsigned long size, unsigned long offset)
{
#ifdef NOTC
	return find_next_zero_bit(addr, size, offset);
#else
	return find_next_zero_bit((unsigned long *)addr, size, offset);
#endif
}

static inline unsigned long find_next_bit_le(const void *addr,
		unsigned long size, unsigned long offset)
{
#ifdef NOTC
	return find_next_bit(addr, size, offset);
#else
	return find_next_bit((unsigned long *)addr, size, offset);
#endif
}

static inline unsigned long find_first_zero_bit_le(const void *addr,
		unsigned long size)
{
#ifdef NOTC
	return find_first_zero_bit(addr, size);
#else
	return find_first_zero_bit((unsigned long *)addr, size);
#endif
}

#elif defined(__BIG_ENDIAN)

#define BITOP_LE_SWIZZLE	((BITS_PER_LONG-1) & ~0x7)

#ifndef find_next_zero_bit_le
extern unsigned long find_next_zero_bit_le(const void *addr,
		unsigned long size, unsigned long offset);
#endif

#ifndef find_next_bit_le
extern unsigned long find_next_bit_le(const void *addr,
		unsigned long size, unsigned long offset);
#endif

#ifndef find_first_zero_bit_le
#define find_first_zero_bit_le(addr, size) \
	find_next_zero_bit_le((addr), (size), 0)
#endif

#else
#error "Please fix <asm/byteorder.h>"
#endif

static inline int test_bit_le(int nr, const void *addr)
{
#ifdef NOTC
        return test_bit(nr ^ BITOP_LE_SWIZZLE, addr);
#else
        return test_bit(nr ^ BITOP_LE_SWIZZLE, (unsigned long *)addr);
#endif
}

static inline void set_bit_le(int nr, void *addr)
{
#ifdef NOTC
	set_bit(nr ^ BITOP_LE_SWIZZLE, addr);
#else
	set_bit(nr ^ BITOP_LE_SWIZZLE, (unsigned long *)addr);
#endif
}

static inline void clear_bit_le(int nr, void *addr)
{
#ifdef NOTC
	clear_bit(nr ^ BITOP_LE_SWIZZLE, addr);
#else
	clear_bit(nr ^ BITOP_LE_SWIZZLE, (unsigned long *)addr);
#endif
}

static inline void __set_bit_le(int nr, void *addr)
{
#ifdef NOTC
	__set_bit(nr ^ BITOP_LE_SWIZZLE, addr);
#else
	__set_bit(nr ^ BITOP_LE_SWIZZLE, (unsigned long *)addr);
#endif
}

static inline void __clear_bit_le(int nr, void *addr)
{
#ifdef NOTC
	__clear_bit(nr ^ BITOP_LE_SWIZZLE, addr);
#else
	__clear_bit(nr ^ BITOP_LE_SWIZZLE, (unsigned long *)addr);
#endif
}

static inline int test_and_set_bit_le(int nr, void *addr)
{
#ifdef NOTC
	return test_and_set_bit(nr ^ BITOP_LE_SWIZZLE, addr);
#else
	return test_and_set_bit(nr ^ BITOP_LE_SWIZZLE, (unsigned long *)addr);
#endif
}

static inline int test_and_clear_bit_le(int nr, void *addr)
{
#ifdef NOTC
	return test_and_clear_bit(nr ^ BITOP_LE_SWIZZLE, addr);
#else
	return test_and_clear_bit(nr ^ BITOP_LE_SWIZZLE, (unsigned long *)addr);
#endif
}

static inline int __test_and_set_bit_le(int nr, void *addr)
{
#ifdef NOTC
	return __test_and_set_bit(nr ^ BITOP_LE_SWIZZLE, addr);
#else
	return __test_and_set_bit(nr ^ BITOP_LE_SWIZZLE, (unsigned long *)addr);
#endif
}

static inline int __test_and_clear_bit_le(int nr, void *addr)
{
#ifdef NOTC
	return __test_and_clear_bit(nr ^ BITOP_LE_SWIZZLE, addr);
#else
	return __test_and_clear_bit(nr ^ BITOP_LE_SWIZZLE, (unsigned long *)addr);
#endif
}

#endif /* _ASM_GENERIC_BITOPS_LE_H_ */
