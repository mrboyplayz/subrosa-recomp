#include "net_decode.h"
#include "arith.h"

/* Shift widths keep the original's x86 five-bit counts (see the masked
   shifts in net_bits.c): a bit count of 32 reads as a zero sign word and
   so a zero denominator. Each decoder keeps its decoded word in one slot;
   a bit read that fails leaves the slot's previous contents, which for
   the delta is a flag word the original observed the same way. The port
   starts the slot at zero, which a failed first read can show only where
   the original consumed an uninitialized slot. */

uint32_t net_read_angle(float *out, int bits)
{
    uint32_t decoded = 0;
    net_read_bits(&decoded, bits);
    uint32_t sign = (1u << ((uint32_t)bits & 31u)) >> 1;
    float magnitude = (float)(decoded & (sign - 1u)) * (6.28318530718 / (float)sign);
    *out = magnitude;
    uint32_t result = decoded & sign;
    if (result == sign)
        *out = -magnitude;
    return result;
}

uint32_t net_read_scaled_fraction(float *out, float scale, int bits)
{
    uint32_t decoded = 0;
    net_read_bits(&decoded, bits);
    uint32_t sign = (1u << ((uint32_t)bits & 31u)) >> 1;
    float ratio = (float)(decoded & (sign - 1u)) / ((float)sign / scale);
    *out = ratio;
    uint32_t result = decoded & sign;
    if (result == sign)
        *out = -ratio;
    return result;
}

uint32_t net_read_delta(uint32_t *out, int32_t base, int bits)
{
    uint32_t word = 0;
    net_read_bits(&word, 1);
    if (word == 0) {
        net_read_bits(&word, 4);
        uint32_t value = word & 8u ? word | 0xFFFFFFF0u : word;
        uint32_t result = (uint32_t)add_int((int32_t)value, base);
        *out = result;
        return result;
    }
    net_read_bits(&word, 1);
    if (word == 0) {
        net_read_bits(&word, 9);
        uint32_t value = word & 0x100u ? word | 0xFFFFFE00u : word;
        uint32_t result = (uint32_t)add_int((int32_t)value, base);
        *out = result;
        return result;
    }
    return (uint32_t)net_read_bits(out, bits);
}
