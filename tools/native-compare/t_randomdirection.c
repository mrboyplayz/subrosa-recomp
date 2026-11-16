/* A random point of the unit circle, scaled: three draws of the noise
 * generator, normalization with the zero-length case, the length and the
 * offset. The seed takes ordinary values, values around the point where the
 * hash wraps and the top bit; lengths and offsets include zero, negative,
 * infinite and NaN. All MXCSR rounding modes. The seed afterwards (three
 * more than before) is compared too. */
// NC_WRAPPERS: 1400A5510
#include <string.h>
#include "nc.h"
#include "memory.h"
#include "math3d.h"

#define seed SR_GLOBAL(uint32_t, 0x1602E12C0ULL)

#ifdef NC_NATIVE
#define direction(o, l, a) ((void (*)(float *, float, float))NC_ADDR(0x1400A5510))(o, l, a)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1400A5510(float *, float, float);
#define direction(o, l, a) sub_1400A5510(o, l, a)
#else
#define direction math_random_direction_2d
#endif

static float value(void)
{
    static const uint32_t special[] = {0, 0x80000000, 0x7F800000, 0xFF800000, 0x7FC00000, 0x3F800000, 0xBF800000,
                                       0x00000001, 0x4B000000};
    if (nc_chance(20)) {
        uint32_t word = special[nc_rand_below(sizeof special / sizeof special[0])];
        float v;
        memcpy(&v, &word, 4);
        return v;
    }
    return nc_float_plain(-8, 8);
}

int main(void)
{
    nc_map_image();
    nc_save(&seed, 4);
    for (int n = 0; n < nc_cases(6000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        seed = nc_chance(30) ? (uint32_t)nc_rand() : nc_chance(50) ? (uint32_t)nc_rand_below(100000) : 0xFFFFFFF0u + nc_rand_below(32);
        float out[4] = {value(), value(), value(), value()};
        unsigned mode = (unsigned)n % 4;
        nc_set_mxcsr(0x1F80 | (mode << 13));
        direction(out, value(), value());
        nc_set_mxcsr(0x1F80);
        uint32_t bits[4];
        memcpy(bits, out, 16);
        for (int k = 0; k < 4; k++)
            if ((bits[k] & 0x7FFFFFFF) > 0x7F800000)
                bits[k] = 0x7FC00000;
        nc_line("n%d out %08x %08x %08x %08x seed %08x", n, bits[0], bits[1], bits[2], bits[3], seed);
    }
    return 0;
}
