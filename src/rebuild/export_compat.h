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
#include <fenv.h>
#include <intrin.h>
#include <corecrt_startup.h>
#include "vector_views.h"
#include "client_x64_semantics.h"
#include "client_debug_console.h"

/* Hex-Rays uses assignable byte/word views rather than Win32's value macros. */
#undef LOBYTE
#undef HIBYTE
#undef LOWORD
#undef HIWORD
#include <defs.h>
#include "client_export_helpers.h"

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
extern unsigned __int64 _R8, _R9, _R10, _R11, _R12, _R13, _R14, _R15;
extern unsigned __int64 _RSI, _RDI, _RBP, _RSP;
/* Hex-Rays names the 32-bit views of those registers; they alias the low
   halves of the 64-bit globals (little-endian), which is exactly what the
   original instructions read and wrote. */
#define _EAX (*(unsigned int *)&_RAX)
#define _EBX (*(unsigned int *)&_RBX)
#define _ECX (*(unsigned int *)&_RCX)
#define _EDX (*(unsigned int *)&_RDX)
#define _ESI (*(unsigned int *)&_RSI)
#define _EDI (*(unsigned int *)&_RDI)

/* Hex-Rays points Control Flow Guard dispatch tables at these synthetic
   CRT-provided no-ops. The export declares guard_check_icall_nop itself;
   guard_dispatch_icall_nop is only referenced through its address, with the
   signature of the pointer it initializes. The real implementations come
   from the CRT and are part of the pending ABI work. */
__int64 __fastcall guard_dispatch_icall_nop(unsigned __int64);

/* Hex-Rays calling-convention annotations for usercall functions. */
#define __usercall
#define __userpurge
/* MSVC SAL-style parameter annotation used on some thunks. */
#define __hidden

/* Scalar fsqrt is defined by client_export_helpers.h from reviewed SQRTSS
   sites; its result and exception state retain single precision. */

/* Hex-Rays uses this name where a 128-bit unsigned integer leaked into an
   appended export; defs.h typedefs uint8..uint64 but not uint128. */
typedef unsigned __int128 uint128;

/* Hex-Rays names SSE register locals in appended math exports. */
extern unsigned __int128 _XMM0, _XMM1, _XMM2, _XMM3, _XMM4, _XMM5, _XMM6, _XMM7;

/* defs.h defines the bit-extraction helpers below only in parts this build
   lacks, and defines the rotate intrinsics under __cplusplus. These are the
   same definitions expressed for C. */
#ifndef BYTE1
#define BYTE1(x) BYTEn(x,  1)
#endif
#ifndef BYTE2
#define BYTE2(x) BYTEn(x,  2)
#endif
#ifndef BYTE3
#define BYTE3(x) BYTEn(x,  3)
#endif
#ifndef BYTE4
#define BYTE4(x) BYTEn(x,  4)
#endif
#ifndef BYTE5
#define BYTE5(x) BYTEn(x,  5)
#endif
#ifndef BYTE6
#define BYTE6(x) BYTEn(x,  6)
#endif
#ifndef BYTE7
#define BYTE7(x) BYTEn(x,  7)
#endif
#ifndef BYTE8
#define BYTE8(x) BYTEn(x,  8)
#endif
#ifndef WORD3
#define WORD3(x) WORDn(x,  3)
#endif
#ifndef DWORD1
#define DWORD1(x) DWORDn(x,  1)
#endif
#ifndef DWORD2
#define DWORD2(x) DWORDn(x,  2)
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
