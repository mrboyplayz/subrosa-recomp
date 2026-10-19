#include <math.h>
#include "net_bits.h"
#include "arith.h"

int net_write_angle(const float *angle, int bits)
{
    uint32_t sign = (1u << ((uint32_t)bits & 31u)) >> 1;
    double units = (double)(float)(uint64_t)sign * 0.15915494309188485;
    double magnitude = (double)fabsf(*angle) * units;
    uint32_t value = (uint32_t)_mm_cvttsd_si64(_mm_set_sd(magnitude)) & (sign - 1u);
    /* COMISS/JAE treats a NaN as negative here. */
    if (!(*angle >= 0.0f))
        value |= sign;
    return net_write_bits(&value, bits);
}
