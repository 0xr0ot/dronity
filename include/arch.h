#pragma once

#include "types.h"

#ifdef __x86_64__
#include "arch-x86-64.h"
#endif

#ifdef __i386__
#include "arch-i386.h"
#endif

#ifdef __powerpc__
#include "arch-ppc.h"
#endif

#ifdef __ia64__
#include "arch-ia64.h"
#endif

#ifdef __sparc__
#include "arch-sparc.h"
#endif

#ifdef __s390__
#include "arch-s390.h"
#endif

#ifdef __arm__
#include "arch-arm.h"
#endif

#ifdef __mips__
#include "arch-mips.h"
#endif

#ifdef __sh__
#include "arch-sh.h"
#endif

#ifdef __alpha__
#include "arch-alpha.h"
#endif

#ifdef __aarch64__
#include "arch-aarch64.h"
#endif

#ifdef __hppa__
#include "arch-parisc.h"
#endif

#ifdef __tile__
#include "arch-tile.h"
#endif

#ifndef SYSCALL_OFFSET
#define SYSCALL_OFFSET 0
#endif

/* already defined in /sysroot/usr/include/limits.h:126:0: note: this is the location of the previous definition
 #define PAGE_MASK (~(PAGE_SIZE - 1))
 thus adding here a comment to skip the re-definition error (defined the same way)
*/

/* glibc's PAGE_MASK is the bitwise negation of BSD's! for platform <=20 */
#ifndef PAGE_MASK
#define PAGE_MASK (~(page_size - 1))
#endif


extern unsigned int page_size;

extern bool biarch;
