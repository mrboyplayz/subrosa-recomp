/* A random direction of random length: 0x1400A56B0 (and the vector
 * normalization 0x14007A240 it calls). */
#include "nc.h"
#include "human.h"

#ifdef NC_NATIVE
#define random_direction(v, l, a) ((void (*)(float *, float, float))NC_ADDR(0x1400A56B0))(v, l, a)
#else
#define random_direction human_random_direction
#endif

#define noise_seed SR_GLOBAL(uint32_t, 0x1602E12C0ULL)

int main(void)
{
    nc_map_image();
    int cases = nc_cases(20000);
    for (int n = 0; n < cases; n++) {
        float v[3] = {7, 7, 7};
        nc_seed(n);
        noise_seed = nc_chance(10) ? (uint32_t)nc_rand_below(16) - 8u : (uint32_t)nc_rand();
        float length = nc_float(-2.0f, 2.0f), add = nc_float(-1.0f, 1.0f);
        nc_set_mxcsr(0x1F80);
        random_direction(v, length, add);
        nc_floats("v", v, 3);
        nc_line("seed %08x mxcsr %08x", noise_seed, nc_get_mxcsr());
    }
    return 0;
}
