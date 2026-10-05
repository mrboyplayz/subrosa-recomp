#ifndef SR_CLIENT_X64_SEMANTICS_H
#define SR_CLIENT_X64_SEMANTICS_H
#include <stdint.h>
#include <emmintrin.h>

static inline unsigned sr_export_ofsub32(uint32_t left, uint32_t right)
{
    uint32_t result = left - right;
    return ((left ^ right) & (left ^ result)) >> 31;
}

/* Reviewed SHR sites clear carry before variable shifts. A masked count
   of zero therefore retains carry=0; all other counts select the last bit. */
static inline unsigned sr_export_cfshr64(uint64_t value, unsigned count)
{
    count &= 63u;
    return count ? (unsigned)((value >> (count - 1)) & 1u) : 0u;
}

static inline unsigned sr_export_cfshl64(uint64_t value, unsigned count)
{
    count &= 63u;
    return count ? (unsigned)((value >> (64 - count)) & 1u) : 0u;
}

/* 0x140243fd9 and the AVX counterpart test unordered(mask, mask).
   Both comparison masks are either zero or quiet-NaN all-ones words;
   parity is therefore exactly the low mask's sign bit. */
static inline unsigned sr_export_exp_range_mask(double value)
{
    __m128d input = _mm_set_sd(value);
    __m128d upper = _mm_set_sd(0x1.62e42fefa39efp+9);
    __m128d lower = _mm_set_sd(-0x1.74046dfefd9d0p+9);
    return (unsigned)_mm_movemask_pd(_mm_and_pd(_mm_cmple_sd(input, upper),
                                               _mm_cmpnlt_sd(input, lower))) & 1u;
}
#endif
