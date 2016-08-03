#ifndef __STDINC_H
#define __STDINC_H

extern "C" {

extern void printf(char *str, ...);
extern void *malloc(unsigned long size);
extern void free(void *ptr);

}

#endif // __STDINC_H
