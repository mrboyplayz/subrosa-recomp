#ifndef SR_EXPORT_COMPAT_H
#define SR_EXPORT_COMPAT_H

#include <windows.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>
#include <time.h>
#include <intrin.h>
#include <corecrt_startup.h>
#include "vector_views.h"

/* Hex-Rays uses assignable byte/word views rather than Win32's value macros. */
#undef LOBYTE
#undef HIBYTE
#undef LOWORD
#undef HIWORD
#include <defs.h>

#if defined(__SIZEOF_INT128__)
typedef unsigned __int128 _OWORD;
#else
#error "The raw export currently requires a compiler with 128-bit integer support"
#endif

struct __crt_locale_pointers;

/* Hex-Rays models architecture registers read and written around inline
   assembly as these globals; the cpuid/xgetbv rewrites bind them to the
   real registers. Providing their storage is part of the pending ABI work. */
extern unsigned __int64 _RAX, _RBX, _RCX, _RDX;

/* Hex-Rays points Control Flow Guard dispatch tables at these synthetic
   CRT-provided no-ops. The export declares guard_check_icall_nop itself;
   guard_dispatch_icall_nop is only referenced through its address, with the
   signature of the pointer it initializes. The real implementations come
   from the CRT and are part of the pending ABI work. */
__int64 __fastcall guard_dispatch_icall_nop(unsigned __int64);

/* Hex-Rays spells x87 square root through this helper; the export calls it
   where the original used the FPU instruction. Binding it to libm is part of
   the pending external-library work. */
double fsqrt(double);

/* defs.h defines the bit-extraction helpers below only in parts this build
   lacks, and defines the rotate intrinsics under __cplusplus. These are the
   same definitions expressed for C. */
#ifndef BYTE1
#define BYTE1(x) BYTEn(x,  1)
#endif
#ifndef BYTE2
#define BYTE2(x) BYTEn(x,  2)
#endif
#ifndef DWORD1
#define DWORD1(x) DWORDn(x,  1)
#endif

#ifndef __cplusplus
static __inline uint8 __ROL1__(uint8 value, int count) {
    if (!count) return value;
    count %= 8;
    if (count < 0) count += 8;
    return (uint8)((value << count) | (value >> (8 - count)));
}
static __inline uint16 __ROL2__(uint16 value, int count) {
    if (!count) return value;
    count %= 16;
    if (count < 0) count += 16;
    return (uint16)((value << count) | (value >> (16 - count)));
}
static __inline uint32 __ROL4__(uint32 value, int count) {
    if (!count) return value;
    count %= 32;
    if (count < 0) count += 32;
    return (value << count) | (value >> (32 - count));
}
static __inline uint64 __ROL8__(uint64 value, int count) {
    if (!count) return value;
    count %= 64;
    if (count < 0) count += 64;
    return (value << count) | (value >> (64 - count));
}
static __inline uint8 __ROR1__(uint8 value, int count) { return __ROL1__(value, -count); }
static __inline uint16 __ROR2__(uint16 value, int count) { return __ROL2__(value, -count); }
static __inline uint32 __ROR4__(uint32 value, int count) { return __ROL4__(value, -count); }
static __inline uint64 __ROR8__(uint64 value, int count) { return __ROL8__(value, -count); }
#endif

#ifndef __cplusplus
#define nullptr ((void *)0)
#define true 1
#define false 0
#endif

#endif
