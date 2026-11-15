// NC_WRAPPERS: 1400D2DB0
/* Terrain height write 0x1400D2DB0 (cell x, y, height): the sample goes into
 * its 2049 x 2049 tile grid and, on a tile edge, into the neighbours' grids.
 * Grids are checked at their four corners' neighbourhoods. */
#include <stdlib.h>
#include <string.h>
#include "nc.h"

#define W(idx) (*(uint32_t *)(uintptr_t)(0x140404A6CULL + 4ULL * (uint64_t)(idx)))
#define GRID(c) (*(float **)(void *)&W(3336LL * (c) + 272034683LL))

#ifdef NC_NATIVE
#define put(a, b, c) ((void (*)(int, int, float))NC_ADDR(0x1400D2DB0))(a, b, c)
#else
void sub_1400D2DB0(int, int, float);
#define put(a, b, c) sub_1400D2DB0(a, b, c)
#endif

#define STRIDE 2049

int main(void)
{
    nc_map_image();
    float *grids[64];
    for (int c = 0; c < 64; c++) grids[c] = calloc((size_t)STRIDE * STRIDE, sizeof(float));
    int cases = nc_cases(2000);
    static const int edge[] = {0, 1, 2047, 2048, 2049, 4095, 4096};
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        for (int c = 0; c < 64; c++) GRID(c) = grids[c];
        int x, y;
        if (nc_chance(70)) {
            x = 2048 * (int)nc_rand_below(9) + edge[nc_rand_below(7)] * (nc_chance(50) ? 0 : 1) - (nc_chance(10) ? 2048 : 0);
            y = 2048 * (int)nc_rand_below(9) + edge[nc_rand_below(7)] * (nc_chance(50) ? 0 : 1) - (nc_chance(10) ? 2048 : 0);
            if (nc_chance(30)) x = 2048 * (int)nc_rand_below(9);
            if (nc_chance(30)) y = 2048 * (int)nc_rand_below(9);
        } else {
            x = (int)nc_rand_below(17000) - 300;
            y = (int)nc_rand_below(17000) - 300;
        }
        float h = nc_float_plain(-100, 100);
        nc_line("case %d x %d y %d", n, x, y);
        put(x, y, h);
        for (int c = 0; c < 64; c++) {
            float s[16];
            int k = 0;
            static const int rc[4] = {0, 1, 2047, 2048};
            for (int r = 0; r < 4; r++)
                for (int q = 0; q < 4; q++) s[k++] = grids[c][rc[r] * STRIDE + rc[q]];
            int any = 0;
            for (k = 0; k < 16; k++) if (s[k] != 0.0f) any = 1;
            if (any) {
                nc_line("tile %d", c);
                nc_floats("  ", s, 16);
                for (k = 0; k < 16; k++) grids[c][rc[k / 4] * STRIDE + rc[k % 4]] = 0.0f;
            }
        }
        /* clear the written cell too (non-edge cell) */
        if ((unsigned)(x >> 11) <= 7 && (unsigned)(y >> 11) <= 7)
            grids[(x >> 11) + 8 * (y >> 11)][(y & 0x7FF) * STRIDE + (x & 0x7FF)] = 0.0f;
    }
    return 0;
}
