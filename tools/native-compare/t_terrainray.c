// NC_WRAPPERS: 1400D1830
/* Terrain raycast 0x1400D1830 (hit record, from, to): walks the 4 x 4
 * cells under the segment, skipping cells whose quarter-mask bit is clear,
 * and keeps the nearest triangle hit. */
#include <stdlib.h>
#include <string.h>
#include "nc.h"

#define G(T, a) (*(T *)(uintptr_t)(a))
#define W(idx) (*(uint32_t *)(uintptr_t)(0x140404A6CULL + 4ULL * (uint64_t)(idx)))
#define REC(c, k) W(3336LL * (c) + 272034677LL + (k))

#ifdef NC_NATIVE
#define ray(a, b, c) ((int (*)(void *, float *, float *))NC_ADDR(0x1400D1830))(a, b, c)
#else
int sub_1400D1830(unsigned long long, float *, float *);
#define ray(a, b, c) sub_1400D1830((unsigned long long)(uintptr_t)(a), b, c)
#endif

#define STRIDE 2049

int main(void)
{
    nc_map_image();
    float *heights = malloc(sizeof(float) * STRIDE * STRIDE);
    uint16_t *masks = malloc(2 * 1024 * 1024);
    int cases = nc_cases(400);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        if (n % 20 == 0) {
            float base = nc_float_plain(-5, 5), amp = nc_float_plain(0, 1.5f);
            for (int i = 0; i < STRIDE * STRIDE; i++) heights[i] = base + amp * nc_float_plain(-1, 1);
        }
        for (int i = 0; i < 1024 * 1024; i++) masks[i] = nc_chance(85) ? 0xFFFF : (uint16_t)nc_rand();
        G(float, 0x181290040ULL) = (float)(int)nc_float_plain(-2000, 2000);
        G(float, 0x181290044ULL) = (float)(int)nc_float_plain(-2000, 2000);
        for (int c = 0; c < 64; c++) {   /* tile origin: the grid origin plus the tile's offset */
            float f[3] = {G(float, 0x181290040ULL) + 2048.0f * (float)(c % 8), nc_float_plain(-2, 2),
                          G(float, 0x181290044ULL) + 2048.0f * (float)(c / 8)};
            memcpy(&REC(c, 0), f, 12);
            *(float **)(void *)&REC(c, 6) = heights;
        }
        G(float *, 0x181290050ULL) = (float *)masks;
        float ox = G(float, 0x181290040ULL), oz = G(float, 0x181290044ULL);
        float from[3], to[3];
        float span = nc_chance(50) ? 6.0f : 300.0f;
        from[0] = ox + nc_float_plain(0, 16000); from[1] = nc_float_plain(4, 30); from[2] = oz + nc_float_plain(0, 16000);
        to[0] = from[0] + nc_float_plain(-span, span); to[1] = nc_float_plain(-30, -4); to[2] = from[2] + nc_float_plain(-span, span);
        if (nc_chance(10)) { to[0] = from[0]; to[2] = from[2]; }
        if (nc_chance(5)) { to[0] = from[0]; to[1] = from[1]; to[2] = from[2]; }
        if (nc_chance(5)) from[0] = to[0] = ox + 2048.0f * (float)(int)nc_rand_below(8);
        float hit[8] = {7, 7, 7, 7, 7, 7, 7, 7};
        nc_line("case %d", n);
        int r = ray(hit, from, to);
        nc_line("ret %d", r);
        nc_floats("hit", hit, 8);
    }
    return 0;
}
