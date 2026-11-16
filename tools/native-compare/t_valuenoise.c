/* Two-dimensional value noise with a wrapping lattice: coordinates that are
 * ordinary, negative, huge (out of int range, NaN, infinities), exactly on
 * the lattice and a hair off it; masks of all widths including 0, -1 and
 * ones that are not of the form 2^n - 1. All MXCSR rounding modes. */
// NC_WRAPPERS: 1401305F0
#include <string.h>
#include <xmmintrin.h>
#include "nc.h"
#include "math3d.h"

#ifdef NC_NATIVE
#define noise(x, y, m) ((__m128 (*)(float, float, int))NC_ADDR(0x1401305F0))(x, y, m)
static float run(float x, float y, int m) { return _mm_cvtss_f32(noise(x, y, m)); }
#elif defined(NC_CLIENT_WRAPPERS)
__m128 sub_1401305F0(float, float, int);
static float run(float x, float y, int m) { return _mm_cvtss_f32(sub_1401305F0(x, y, m)); }
#else
static float run(float x, float y, int m) { return math_value_noise_2d(x, y, m); }
#endif

static float coordinate(void)
{
    static const uint32_t special[] = {0, 0x80000000, 0x7F800000, 0xFF800000, 0x7FC00000, 0x4F000000, 0xCF000000,
                                       0x4EFFFFFF, 0x3F800000, 0xBF800000, 0x3F7FFFFF, 0x00000001, 0x4B000000};
    if (nc_chance(15)) {
        uint32_t word = special[nc_rand_below(sizeof special / sizeof special[0])];
        float value;
        memcpy(&value, &word, 4);
        return value;
    }
    if (nc_chance(25))
        return (float)(int)nc_rand_below(200) - 100.0f + (nc_chance(50) ? 0.0f : nc_float_plain(0, 1));
    return nc_float_plain(-5000, 5000);
}

int main(void)
{
    static const int masks[] = {0, 1, 3, 7, 15, 63, 255, 1023, 65535, -1, 5, 0x7FFFFFFF, INT32_MIN};
    nc_map_image();
    for (int n = 0; n < nc_cases(6000); n++) {
        nc_seed((uint64_t)n);
        float x = coordinate(), y = coordinate();
        int mask = nc_chance(85) ? masks[nc_rand_below(13)] : (int)nc_rand();
        unsigned mode = (unsigned)n % 4;
        nc_set_mxcsr(0x1F80 | (mode << 13));
        float result = run(x, y, mask);
        nc_set_mxcsr(0x1F80);
        uint32_t bits;
        memcpy(&bits, &result, 4);
        if ((bits & 0x7FFFFFFF) > 0x7F800000)
            bits = 0x7FC00000;      /* any NaN: the processor may pass either operand's */
        nc_line("n%d x %08x y %08x mask %08x -> %08x", n, *(uint32_t *)&x, *(uint32_t *)&y, mask, bits);
    }
    return 0;
}
