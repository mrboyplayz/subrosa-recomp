// NC_WRAPPERS: 1400D3340
/* Terrain flatten pass 0x1400D3340 (record index): follows a record's
 * neighbour links, blends the 4096-wide height samples into the tile grids
 * through 0x1400D2DB0 and into a scratch workspace. Records, links, samples
 * and the workspace are filled with small random values so most cases pass
 * the link checks; the tile grids (one shared buffer), the workspace and
 * the number of samples written are compared. */
#include <stdlib.h>
#include <string.h>
#include "nc.h"

#define G(T, a) (*(T *)(uintptr_t)(a))
#define W(idx) (*(uint32_t *)(uintptr_t)(0x140404A6CULL + 4ULL * (uint64_t)(idx)))
#define GRID(c) (*(float **)(void *)&W(3336LL * (c) + 272034683LL))

#ifdef NC_NATIVE
#define flatten(a) ((void (*)(int))NC_ADDR(0x1400D3340))(a)
#else
void sub_1400D3340(int);
#define flatten(a) sub_1400D3340(a)
#endif

#define STRIDE 2049
#define WORK 0x144AFA9A0ULL
#define SAMPLES 0x17CE6F5F8ULL

static int stub_calls;
static uint64_t put_hash;
static void put_stub(int x, int y, float h)
{
    uint32_t rec[3] = {(uint32_t)x, (uint32_t)y, *(uint32_t *)&h};
    put_hash = put_hash * 1099511628211ULL ^ nc_hash(rec, 12);
    if (stub_calls++ < 40) nc_line("put %d %d %08x", x, y, *(uint32_t *)&h);
}

static uint32_t link_or_small(void)
{
    return nc_chance(8) ? (uint32_t)-1 : nc_rand_below(10);
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x1400D2DB0ULL, put_stub);
#ifdef NC_NATIVE
    if (getenv("PASSES")) *(uint32_t *)(uintptr_t)0x1400D3A29ULL = (uint32_t)atoi(getenv("PASSES"));
#endif
    float *grid = malloc(sizeof(float) * STRIDE * STRIDE);
    float *shadow = malloc(sizeof(float) * STRIDE * STRIDE);
    int cases = nc_cases(300);
    int writes_total = 0;
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        for (int c = 0; c < 64; c++) GRID(c) = grid;
        for (int i = 0; i < STRIDE * STRIDE; i++) grid[i] = 0.0f;
        /* 4096 x 4096 height samples: mostly positive so the blend runs */
        for (unsigned i = 0; i < 4096u * 4096u; i++)
            G(float, SAMPLES + 4ULL * i) = nc_chance(95) ? nc_float_plain(0.1f, 30.0f) : nc_float_plain(-5.0f, 30.0f);
        for (int i = 0; i < 64; i++) {
            uint64_t r = 0x175FD1464ULL + 136ULL * i;
            for (int k = 0; k < 34; k++) G(uint32_t, r + 4ULL * k) = nc_rand_below(10);
            for (int k = 6; k < 10; k++) G(uint32_t, r + 4ULL * k) = link_or_small();
            G(uint32_t, r + 0x24) = nc_rand_below(10);
            G(uint32_t, 0x175FF3490ULL + 1584ULL * i) = nc_rand_below(64);
        }
        /* the record under test starts at the grid origin; the others span a few quarter cells */
        int a = (int)nc_rand_below(64);
        for (int i = 0; i < 64; i++) {
            uint64_t r = 0x175FD1464ULL + 136ULL * i;
            int small = i == a;
            G(uint32_t, r + 0) = small ? 0 : 3 + nc_rand_below(6);
            G(uint32_t, r + 8) = small ? 0 : 3 + nc_rand_below(6);
            G(uint32_t, r + 40) = small ? 0 : nc_rand_below(2);
            G(uint32_t, r + 44) = small ? 0 : nc_rand_below(2);
        }
        for (int i = 0; i < 64; i++) G(uint32_t, 0x175FD147CULL + 136ULL * i) = link_or_small() < 64 ? nc_rand_below(64) : (uint32_t)-1;
        for (unsigned o = 0; o < 49160 * 4; o += 4) G(uint32_t, WORK + o) = 0;
        nc_line("case %d record %d", n, a);
        nc_floats("v0", &G(float, SAMPLES), 4);
        stub_calls = 0; put_hash = 0;
        flatten(a);
        nc_line("puts %d %016llx", stub_calls, (unsigned long long)put_hash);
        for (int row = 0; row < 40; row++)
            for (int col = 0; col < 256; col++) {
                uint32_t *c = &G(uint32_t, WORK + 28ULL * (row * 256 + col));
                if (c[0]) nc_line("cell r%d c%d n%u  (%d,%d,%08x) (%d,%d,%08x)", row, col, c[0],
                                  (int)c[1], (int)c[2], c[3], (int)c[4], (int)c[5], c[6]);
            }
        nc_line("work %016llx", (unsigned long long)nc_hash((void *)(uintptr_t)WORK, 49160 * 4));
        int changed = 0;
        for (int i = 0; i < STRIDE * STRIDE; i++) changed += grid[i] != 0.0f;
        writes_total += stub_calls;
        nc_line("changed %d grid %016llx", changed, (unsigned long long)nc_hash(grid, sizeof(float) * STRIDE * STRIDE));
    }
    (void)shadow;
    nc_line("total changed %d", writes_total);
    return 0;
}
