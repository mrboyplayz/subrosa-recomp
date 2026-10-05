#ifndef SR_SERVER_BITS_H
#define SR_SERVER_BITS_H
#include <stdint.h>
#include <string.h>

static inline void sr_server_cpuid(uint32_t leaf, uint32_t subleaf,
    uint32_t *a, uint32_t *b, uint32_t *c, uint32_t *d) {
    __asm__ volatile("cpuid" : "=a"(*a), "=b"(*b), "=c"(*c), "=d"(*d)
        : "0"(leaf), "2"(subleaf));
}

/* The caller must establish OSXSAVE support before executing XGETBV. */
static inline void sr_server_xgetbv0(uint32_t *low, uint32_t *high) {
    __asm__ volatile(".byte 0x0f, 0x01, 0xd0" : "=a"(*low), "=d"(*high) : "c"(0));
}

/* C counterpart of defs.h's C++ __coerce: copy low representation bytes,
   evaluate once, and reject a source too small to hold the requested view. */
#define SR_SERVER_COERCE(type, value) \
    ({ __typeof__(value) sr_source = (value); type sr_result; \
       _Static_assert(sizeof(sr_source) >= sizeof(sr_result), "coerce source width"); \
       memcpy(&sr_result, &sr_source, sizeof(sr_result)); sr_result; })
#define COERCE_FLOAT(value) SR_SERVER_COERCE(float, value)
#define COERCE_DOUBLE(value) SR_SERVER_COERCE(double, value)
#define COERCE_UNSIGNED_INT(value) SR_SERVER_COERCE(uint32_t, value)

#define SDWORD1(value) (*((int32_t *)&(value) + 1))
#define SDWORD2(value) (*((int32_t *)&(value) + 2))

#define __SET_PAIR__(high, low, value) \
    do { uint64_t sr_pair = (uint64_t)(value); \
         (low) = (uint32_t)sr_pair; (high) = (uint32_t)(sr_pair >> 32); } while (0)
#endif
