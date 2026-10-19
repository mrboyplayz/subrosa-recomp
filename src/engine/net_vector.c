#include <math.h>
#include "net_bits.h"
#include "arith.h"

static uint32_t magnitude_word(float value, float units, uint32_t sign)
{
    float magnitude = fabsf(value) * units;
    uint32_t word = (uint32_t)_mm_cvttss_si64(_mm_set_ss(magnitude));
    if (word > sign - 1u) word = sign - 1u;
    /* Native COMISS/JAE takes the sign path for unordered values too. */
    if (!(value >= 0.0f)) word |= sign;
    return word;
}

double net_write_magnitude(const float *value, float range, int bits)
{
    uint32_t sign = (1u << ((uint32_t)bits & 31u)) >> 1;
    float input = *value;
    float units = (float)(uint64_t)sign / range;
    uint32_t word = magnitude_word(input, units, sign);
    net_write_bits(&word, bits);
    return 0.0;
}

void net_write_vector_delta(const float value[3], const float reference[3], float range, int bits)
{
    uint32_t sign = (1u << ((uint32_t)bits & 31u)) >> 1;
    float units = (float)(uint64_t)sign / range;
    for (int i = 0; i < 3; ++i) {
        float difference = value[i] - reference[i];
        uint32_t word = magnitude_word(difference, units, sign);
        net_write_bits(&word, bits);
    }
}

uint64_t net_encode_direction(uint32_t out[3], const float value[3], int bits)
{
    unsigned major = fabsf(value[1]) > fabsf(value[0]) ? 1 : 0;
    if (fabsf(value[2]) > fabsf(value[major])) major = 2;
    out[0] = major;
    if (0.0f > value[major]) out[0] = major | 4u;
    uint32_t mask = (1u << ((uint32_t)bits & 31u)) - 1u;
    double units = (double)(int32_t)mask;
    unsigned at = 1;
    uint64_t result = 0;
    for (unsigned i = 0; i < 3; ++i) {
        if (i == major) continue;
        float ratio = value[i] / value[major];
        double magnitude = (double)fabsf(ratio) * units;
        result = (uint64_t)_mm_cvttsd_si64(_mm_set_sd(magnitude));
        uint32_t word = (uint32_t)result * 2u;
        out[at] = word;
        if (0.0f > value[i]) out[at] = word | 1u;
        ++at;
    }
    return result;
}
