#ifndef SR_VECTOR_VIEWS_H
#define SR_VECTOR_VIEWS_H

#include <stdint.h>

#define SR_DECLARE_VECTOR_BITS(bits) \
    typedef union SrVec##bits##Bits { \
        float f32[(bits) / 32]; \
        double f64[(bits) / 64]; \
        int8_t i8[(bits) / 8]; \
        uint8_t u8[(bits) / 8]; \
        int16_t i16[(bits) / 16]; \
        uint16_t u16[(bits) / 16]; \
        int32_t i32[(bits) / 32]; \
        uint32_t u32[(bits) / 32]; \
        int64_t i64[(bits) / 64]; \
        uint64_t u64[(bits) / 64]; \
        int64_t i64_scalar; \
        uint64_t u64_scalar; \
    } SrVec##bits##Bits; \
    _Static_assert(sizeof(SrVec##bits##Bits) == (bits) / 8, "vector storage size")

SR_DECLARE_VECTOR_BITS(64);
SR_DECLARE_VECTOR_BITS(128);
SR_DECLARE_VECTOR_BITS(256);
SR_DECLARE_VECTOR_BITS(512);
#undef SR_DECLARE_VECTOR_BITS

/* Compile the generated translation with -fno-strict-aliasing. */
/* The conditional pointer type retains const/volatile for the selected view. */
#define SR_VEC_VIEW(bits, pointer) \
    _Generic((1 ? (pointer) : (void *)1), \
        const void *: (const SrVec##bits##Bits *)(pointer), \
        volatile void *: (volatile SrVec##bits##Bits *)(pointer), \
        const volatile void *: (const volatile SrVec##bits##Bits *)(pointer), \
        default: (SrVec##bits##Bits *)(pointer))
#define SR_VEC_LANES(bits, value, member) \
    (SR_VEC_VIEW(bits, ((void)sizeof(char[sizeof(value) == (bits) / 8 ? 1 : -1]), \
                       &(value)))->member)
#define SR_VEC_PTR_LANES(bits, pointer, member) \
    (SR_VEC_VIEW(bits, ((void)sizeof(char[sizeof(*(pointer)) == (bits) / 8 ? 1 : -1]), \
                       (pointer)))->member)

#endif
