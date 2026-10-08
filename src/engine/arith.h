/* Integer and conversion arithmetic as the original's instructions do it.
 *
 * C leaves signed overflow and out-of-range float-to-int conversion
 * undefined; the original's IMUL, ADD, SUB and CVTTSS2SI define them. These
 * helpers give the instruction's result in every case.
 */
#ifndef SR_ENGINE_ARITH_H
#define SR_ENGINE_ARITH_H

#include <stdint.h>
#include <xmmintrin.h>
#include <emmintrin.h>

/* 32-bit IMUL, ADD and SUB: wrap on overflow. */
static inline int32_t multiply_int(int32_t a, int32_t b)
{
    return (int32_t)((uint32_t)a * (uint32_t)b);
}

static inline int32_t add_int(int32_t a, int32_t b)
{
    return (int32_t)((uint32_t)a + (uint32_t)b);
}

static inline int32_t subtract_int(int32_t a, int32_t b)
{
    return (int32_t)((uint32_t)a - (uint32_t)b);
}

/* float to int as CVTTSS2SI: toward zero, 0x80000000 when out of range. */
static inline int32_t truncate_float(float value)
{
    return _mm_cvtt_ss2si(_mm_set_ss(value));
}

/* Square root as SQRTSS computes it. */
static inline float sqrt_float(float value)
{
    return _mm_cvtss_f32(_mm_sqrt_ss(_mm_set_ss(value)));
}

/* Square root as SQRTSD computes it. */
static inline double sqrt_double(double value)
{
    return _mm_cvtsd_f64(_mm_sqrt_sd(_mm_setzero_pd(), _mm_set_sd(value)));
}

/* The original often tests a float against zero with UCOMISS and a plain
   JE/JNE, which also takes the "zero" branch when the value is not a
   number. A C comparison would not. */
static inline int is_zero_or_nan(float value)
{
    return !(value < 0.0f || value > 0.0f);
}

/* MINSS: the second operand unless the first is smaller (so the second
   when either is not a number). */
static inline float min_float(float a, float b)
{
    return _mm_cvtss_f32(_mm_min_ss(_mm_set_ss(a), _mm_set_ss(b)));
}

/* MAXSS: the first operand when it is the greater, else the second (so the
   second when either is not a number). */
static inline float max_float(float a, float b)
{
    return _mm_cvtss_f32(_mm_max_ss(_mm_set_ss(a), _mm_set_ss(b)));
}

#endif
