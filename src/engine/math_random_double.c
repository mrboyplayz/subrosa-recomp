#include <stdint.h>
#include "math_random_double.h"

/* Existing generator boundary; draw order is part of the shared RNG state. */
extern int64_t sub_14009DE80(void);

/* 0x14009E020: retain the original double constant and operation order. */
double math_random_double(void)
{
    uint32_t high = (uint32_t)sub_14009DE80() >> 5;
    uint32_t low = (uint32_t)sub_14009DE80() >> 6;
    return ((double)low + (double)high * 67108864.0) * 0x1p-53;
}

/* The native conversions zero-extend EAX before converting to double.
 * Hexadecimal constants preserve the executable's exact stored bits. */
/* 0x14009DFB0: [0, 1] */
double math_random_closed(void)
{
    return (double)(uint32_t)sub_14009DE80() * 0x1.00000001p-32;
}

/* 0x14009DFD0: [0, 1) */
double math_random_half_open(void)
{
    return (double)(uint32_t)sub_14009DE80() * 0x1p-32;
}

/* 0x14009DFF0: (0, 1) */
double math_random_open(void)
{
    return ((double)(uint32_t)sub_14009DE80() + 0.5) * 0x1p-32;
}
