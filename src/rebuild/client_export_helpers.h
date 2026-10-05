#ifndef SR_CLIENT_EXPORT_HELPERS_H
#define SR_CLIENT_EXPORT_HELPERS_H
#include "client_math_helpers.h"

/* C forms of the bit-copy and forward-copy helpers defined by defs.h's C++
   branch. Evaluate input once and reject widening that would read past it. */
#ifndef __cplusplus
#define SR_EXPORT_COERCE(type, value) __extension__ ({ \
    __auto_type sr_coerce_input = (value); \
    type sr_coerce_output; \
    _Static_assert(sizeof(sr_coerce_output) <= sizeof(sr_coerce_input), \
                   "bit coercion cannot widen its source"); \
    memcpy(&sr_coerce_output, &sr_coerce_input, sizeof(sr_coerce_output)); \
    sr_coerce_output; })
#define COERCE_FLOAT(v) SR_EXPORT_COERCE(float, v)
/* All 562 exported fsqrt sites correspond to native scalar SQRTSS. */
static inline float sr_export_sqrtss(float value) {
    return _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(value)));
}
#define fsqrt(value) sr_export_sqrtss((float)(value))
/* Nine reviewed REP STOSQ sites use a count of qwords, not bytes. Windows
   x64 callers supply DF=0; retain the native instruction's memory effects. */
static inline void sr_export_memset64(void *destination, uint64_t value, size_t count) {
    __asm__ volatile("rep stosq" : "+D"(destination), "+c"(count) : "a"(value) : "memory");
}
#define memset64(destination, value, count) sr_export_memset64((destination), (value), (count))
/* Compatibility with reviewed exported double declarations whose native input
   is a float lane. Retain the word as bits in XMM2; never numerically convert
   the float to a double. This is restricted to reviewed call boundaries;
   other inferred arguments and locals still require recovery. */
static inline double sr_export_float_lane_container(uint32_t word) {
    uint64_t bits = word;
    double container;
    memcpy(&container, &bits, sizeof(container));
    return container;
}
/* Reviewed narrow sites use explicit float-word containers or discard
   phantom constant arguments. All remaining double sources are >=8 bytes. */
#define COERCE_DOUBLE(v) SR_EXPORT_COERCE(double, v)
#define COERCE_INT(v) SR_EXPORT_COERCE(int32_t, v)
#define COERCE_UNSIGNED_INT(v) SR_EXPORT_COERCE(uint32_t, v)
/* The three previously narrow sites now promote floats to double, matching
   CVTSS2SD/CVTPS2PD in their reviewed original instruction sequences. */
#define COERCE__INT64(v) SR_EXPORT_COERCE(int64_t, v)
#define COERCE_UNSIGNED_INT64(v) SR_EXPORT_COERCE(uint64_t, v)

#define SDWORD1(x) SDWORDn(x, 1)
#define SDWORD2(x) SDWORDn(x, 2)

static inline void *sr_export_qmemcpy(void *dst, const void *src, size_t count) {
    unsigned char *out = dst;
    const unsigned char *in = src;
    while (count--) *out++ = *in++;
    return dst;
}
#define qmemcpy sr_export_qmemcpy
#endif

#endif
