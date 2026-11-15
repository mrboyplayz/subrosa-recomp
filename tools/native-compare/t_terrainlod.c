// NC_WRAPPERS: 1400D0C10
/* Terrain LOD chunk mesh 0x1400D0C10 (cell x, y, lod): vertex block built
 * from heights, ring slot picked, glBufferSubData recorded. */
#include <stdlib.h>
#include <string.h>
#include "nc.h"
#include "gl.h"

#define G(T, a) (*(T *)(uintptr_t)(a))
#define W(idx) (*(uint32_t *)(uintptr_t)(0x140404A6CULL + 4ULL * (uint64_t)(idx)))
#define REC(c, k) W(3336LL * (c) + 272034677LL + (k))

#ifdef NC_NATIVE
#define build(a, b, c) ((double (*)(int, int, int))NC_ADDR(0x1400D0C10))(a, b, c)
#else
double sub_1400D0C10(int, int, int);
#define build(a, b, c) sub_1400D0C10(a, b, c)
#endif

static void gl_bind_buffer(GLenum t, GLuint n) { nc_line("glBindBuffer %#x %u", t, n); }
static void gl_buffer_sub(GLenum t, GLintptr off, GLsizeiptr size, const void *data)
{
    nc_line("glBufferSubData %#x %lld %lld", t, (long long)off, (long long)size);
    nc_line("  data %016llx", (unsigned long long)nc_hash(data, (size_t)size));
}

#define STRIDE 2049

int main(void)
{
    nc_map_image();
    *(void **)(void *)slot_glBindBuffer = (void *)gl_bind_buffer;
    *(void **)(void *)slot_glBufferSubData = (void *)gl_buffer_sub;
    float *heights = malloc(sizeof(float) * STRIDE * STRIDE);
    int cases = nc_cases(24);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        for (int i = 0; i < STRIDE * STRIDE; i++)
            heights[i] = nc_float_plain(-30.0f, 30.0f);
        for (int c = 0; c < 64; c++) {
            float f[3] = {nc_float_plain(-1000, 1000), nc_float_plain(-10, 10), nc_float_plain(-1000, 1000)};
            memcpy(&REC(c, 0), f, 12);
            REC(c, 3) = c % 8;
            REC(c, 4) = c / 8;
            *(float **)(void *)&REC(c, 6) = heights;
            for (int s = 0; s < 3336; s++) if (s >= 13 && 0) REC(c, s) = 0;
            for (int k = 0; k < 13 * 256; k++) W(3336LL * c + 272034690LL + k) = (uint32_t)-1;
        }
        int cell = (int)nc_rand_below(64), slot = (int)nc_rand_below(256), lod = (int)nc_rand_below(5);
        if (n < 4) cell = (int[]){0, 7, 56, 63}[n];
        G(float, 0x181290040ULL) = (float)(int)nc_float_plain(-100, 100);
        G(float, 0x181290048ULL) = (float)(int)nc_float_plain(-100, 100);
        for (unsigned o = 0; o < 64 * 13344 + 52 * 256 + 64; o += 4)
            G(uint32_t, 0x1811BF86CULL + o) = nc_rand_below(15);
        uint64_t b = 98328ULL * lod;
        int cnt = 1 << (1 + nc_rand_below(4));
        G(uint32_t, 0x1810FF788ULL + b) = cnt;
        G(uint32_t, 0x1810FF794ULL + b) = nc_rand_below(cnt);
        G(uint32_t, 0x1810FF790ULL + b) = 24 * 131 * 131;
        for (int i = 0; i < cnt; i++) {
            if (nc_chance(2)) {   /* occupied ring slots, some pointing at a cell to evict */
                W(271838029LL + 24582 * lod + 3 * i) = nc_rand_below(6);
                W(271838027LL + 3 * (i + 8194LL * lod)) = nc_rand_below(70);
                W(271838028LL + 3 * (i + 8194LL * lod)) = nc_rand_below(300);
            }
        }
        for (int k = 0; k < 16; k++) { W(283791752LL + k) = k; W(283793813LL + 2 * k) = 500 + k; }
        nc_line("case %d cell %d slot %d lod %d cnt %d", n, cell, slot, lod, cnt);
        if (nc_chance(8)) W(3336LL * cell + 272034690LL + 13 * slot + lod) = 2;
        build(cell, slot, lod);
        nc_bytes("ring", (void *)(uintptr_t)(0x140404A6CULL + 4 * 271838027ULL + 12 * 8194ULL * lod), 12 * (size_t)cnt);
        nc_bytes("idx", &W(3336LL * cell + 272034690LL + 13 * slot + lod), 4);
        nc_bytes("ringpos", (void *)(uintptr_t)(0x1810FF794ULL + b), 4);
    }
    return 0;
}
