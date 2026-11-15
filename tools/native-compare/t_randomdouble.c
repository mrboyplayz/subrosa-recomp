// NC_WRAPPERS: 14009E020 14009DFB0 14009DFD0 14009DFF0
#include <string.h>
#include "nc.h"
#include "math_random_double.h"

#ifdef NC_NATIVE
static double (*functions[])(void) = {
    (void *)0x14009E020ULL, (void *)0x14009DFB0ULL,
    (void *)0x14009DFD0ULL, (void *)0x14009DFF0ULL};
#elif defined(NC_CLIENT_WRAPPERS)
double sub_14009E020(void), sub_14009DFB0(void), sub_14009DFD0(void), sub_14009DFF0(void);
static double (*functions[])(void) = {sub_14009E020, sub_14009DFB0, sub_14009DFD0, sub_14009DFF0};
#else
static double (*functions[])(void) = {math_random_double, math_random_closed, math_random_half_open, math_random_open};
#endif
static uint64_t draws[2];
static unsigned calls;
static int64_t draw(void)
{
    unsigned i = calls++;
    nc_line("draw %u %016llx", i, (unsigned long long)draws[i & 1]);
    return (int64_t)draws[i & 1];
}

int main(void)
{
    static const uint32_t edges[] = {0, 1, 31, 32, 63, 64, 0x7fffffff, 0x80000000, 0xfffffffe, 0xffffffff};
    nc_map_image();
    nc_redirect(0x14009DE80, draw);
    for (int n = 0; n < nc_cases(4096); ++n) {
        nc_seed(n);
        draws[0] = n < 400 ? edges[n % 10] : nc_rand();
        draws[1] = n < 400 ? edges[(n / 10) % 10] : nc_rand();
        for (int f = 0; f < 4; ++f) {
            calls = 0;
            nc_set_mxcsr(0x1f80u | (((unsigned)n / 100 & 3u) << 13));
            double result = functions[f]();
            uint32_t status = nc_get_mxcsr();
            uint64_t bits;
            memcpy(&bits, &result, 8);
            nc_set_mxcsr(0x1f80);
            nc_line("random %d %d %u %016llx %08x", n, f, calls, (unsigned long long)bits, status);
        }
    }
    return 0;
}
