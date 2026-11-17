// NC_WRAPPERS: 140187270
/* Cubic spline evaluation: the folded degree-3 tail of the curve point
   (0x140187270; the twin entry begins at 0x140187180). Degrees other than 3
   leave the original's result register holding the low word of its homed
   first-parameter stack slot, an uninitialized float no game caller
   observes — the clean engine returns a defined zero and the driver stays
   inside degree 3, as the game's curve records do. */
#include <string.h>
#include "nc.h"
#include "recovery_180000.h"

#ifdef NC_CLIENT_WRAPPERS
float sub_140187270(int, float, float, float, float, float);
#define spline_180000_evaluate(degree, t, a2, a3, a4, a5) \
    sub_140187270((degree), (t), (a2), (a3), (a4), (a5))
#elif defined(NC_NATIVE)
#define spline_180000_evaluate(degree, t, a2, a3, a4, a5) \
    ((float (*)(int, float, float, float, float, float))NC_ADDR(0x140187270)) \
        ((degree), (t), (a2), (a3), (a4), (a5))
#endif

static const uint32_t special[] = {
    0,0x80000000,0x00000001,0x007fffff,0x00800000,
    0x3f000000,0x3f7fffff,0x3f800000,0x3f800001,
    0xbf800000,0xbf800001,0x7f800000,0xff800000,
    0x7fc00001,0x7f800001
};

int main(void)
{
    nc_map_image();
    int cases = nc_cases(300);
    for (int n = 0; n < cases; n++) {
        float lane[5]; /* t, point0, point1, point2, point3 */
        nc_set_mxcsr(0x1F80);
        nc_seed((uint64_t)n * 3 + 1);
        for (int i = 0; i < 5; i++)
            lane[i] = nc_float(-4,4);
        if (n % 3) {
            for (int i = 0; i < 1 + n % 3; i++) {
                uint32_t word = special[nc_rand_below(sizeof special / sizeof special[0])];
                memcpy(lane + nc_rand_below(5), &word, sizeof word);
            }
            /* identical parameters: exact cancellation and reused operands */
            if (n % 7 == 0) lane[n / 7 % 5] = lane[0];
            if (n % 5 == 0) lane[n / 5 % 5] = lane[4 - n / 5 % 5];
        }
        /* degree 3 only: other degrees return the original's uninitialized
           result register and no game caller observes them */
        int degree = 3;
        unsigned mode = (unsigned)n / 3 % 16;
        nc_set_mxcsr(0x1F80 | ((mode & 3) << 13)
                     | ((mode & 4) ? 0x40 : 0) | ((mode & 8) ? 0x8000 : 0));
        float result = -123.0f;
        result = spline_180000_evaluate(degree, lane[0], lane[1], lane[2], lane[3], lane[4]);
        uint32_t csr = nc_get_mxcsr();
        nc_line("spline %d csr %08x", n, csr);
        nc_floats("result", &result, 1);
    }
    return 0;
}
