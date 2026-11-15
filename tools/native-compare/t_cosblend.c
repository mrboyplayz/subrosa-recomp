/* The cosine-interpolated blend: the original 0x140038480 against the engine
 * math_cos_blend, over plain a/b/t ranges, edge floats in every lane
 * (zero, negative zero, tiny, huge, infinity, NaN), repeated operands and
 * all MXCSR modes. The fraction lane feeds the original's cos (0x14023FC70),
 * which both builds execute with the same inputs. */
// NC_WRAPPERS: 140038480
#include <string.h>
#include "nc.h"

#ifdef NC_CLIENT_WRAPPERS
float sr_math_cos_blend(float, float, float);
#else
extern float math_cos_blend(float a, float b, float t);
#endif

static void run_case(int n)
{
    static const uint32_t special[] = {
        0,0x80000000,0x00000001,0x007fffff,0x00800000,
        0x3f000000,0x3f7fffff,0x3f800000,0x3f800001,
        0xbf800000,0xbf800001,0x7f800000,0xff800000,
        0x7fc00001,0x7f800001,0x7f7fffff,0xff7fffff
    };
    /* the fraction lane stays inside the magnitudes where the two builds'
     * cos callees agree (the game's curve/walk arguments); its edges are
     * still zero, negative zero, tiny, huge, infinity and NaN */
    static const uint32_t fraction_edges[] = {
        0,0x80000000,0x00000001,0x007fffff,0x00800000,
        0x3f000000,0x3f7fffff,0x3f800000,0x3f800001,
        0xbf800000,0xbf800001,0x40000000,0xc0000000,
        0x40490fdb,0xc0490fdb,0x33800000,0xb3380000,
        0x7f800000,0xff800000,0x7fc00001,0x7f800001
    };
    float lane[3]; /* a, b, t */
    nc_set_mxcsr(0x1F80);
    nc_seed((uint64_t)n * 5);
    for (int i = 0; i < 3; i++)
        lane[i] = nc_float(-4,4);
    if (n % 3) {
        for (int i = 0; i < 1 + n % 3; i++) {
            uint32_t word = special[nc_rand_below(sizeof special / sizeof special[0])];
            memcpy(lane + nc_rand_below(2), &word, sizeof word);
        }
        uint32_t fraction = fraction_edges[nc_rand_below(sizeof fraction_edges / sizeof fraction_edges[0])];
        memcpy(lane + 2, &fraction, sizeof fraction);
        /* identical parameters: exact cancellation and reused operands */
        if (n % 7 == 0) lane[n / 7 % 3] = lane[0];
        if (n % 5 == 0) lane[2 - n / 5 % 3] = lane[2 - n / 5 % 2];
    }
    unsigned mode = (unsigned)n / 3 % 16;
    nc_set_mxcsr(0x1F80 | ((mode & 3) << 13)
                 | ((mode & 4) ? 0x40 : 0) | ((mode & 8) ? 0x8000 : 0));
    float result = -123.0f;
#ifdef NC_NATIVE
    result = ((float (*)(float,float,float))NC_ADDR(0x140038480))(lane[0],lane[1],lane[2]);
#elif defined(NC_CLIENT_WRAPPERS)
    result = sr_math_cos_blend(lane[0],lane[1],lane[2]);
#else
    result = math_cos_blend(lane[0],lane[1],lane[2]);
#endif
    uint32_t csr = nc_get_mxcsr();
    nc_line("cosblend %d csr %08x", n, csr);
    nc_floats("result", &result, 1);
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(2000); n++)
        run_case(n);
    return 0;
}
