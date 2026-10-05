#ifndef SR_SERVER_COMPAT_H
#define SR_SERVER_COMPAT_H

#include <io.h>
#include <math.h>
#include <ctype.h>
#include <search.h>
#include <winternl.h>
#include "server_bits.h"
#include "server_image.h"

typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *);
typedef int (__cdecl *_UserMathErrorFunctionPointer)(struct _exception *);
typedef void (__cdecl *_tls_callback_type)(void);

/* These objects are defined later in the combined export. */
extern int dword_140585550;
extern struct _CONTEXT ContextRecord;
extern float unk_16E18CA40;
extern uint32_t unk_140585570;
int *__daylight_sr(void);
long *__timezone_sr(void);

#define SR_SERVER_BITS128(value) \
    ({ __typeof__(value) sr_value = (value); _OWORD sr_bits; \
       _Static_assert(sizeof(sr_value) == sizeof(sr_bits), "128-bit copy"); \
       memcpy(&sr_bits, &sr_value, sizeof(sr_bits)); sr_bits; })

static inline struct _FILETIME sr_server_filetime(uint64_t bits) {
    return (struct _FILETIME){(DWORD)bits, (DWORD)(bits >> 32)};
}

/* C equivalent of the Hex-Rays signed subtraction overflow flag. */
#undef __OFSUB__
#define __OFSUB__(x, y) \
    ({ __typeof__(x) sr_x = (x); __typeof__(y) sr_y = (y); \
       unsigned sr_width = (sizeof(sr_x) > sizeof(sr_y) ? sizeof(sr_x) : sizeof(sr_y)) * 8; \
       uint64_t sr_a = (uint64_t)sr_x, sr_b = (uint64_t)sr_y; \
       (int)(((sr_a ^ sr_b) & (sr_a ^ (sr_a - sr_b))) >> (sr_width - 1) & 1); })

#endif
