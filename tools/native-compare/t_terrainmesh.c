// NC_WRAPPERS: 1400D00F0
/* Terrain mesh vertex builder 0x1400D00F0: heights of 8x8 chunks in, the
 * 2050x2050 vertex buffer (position + normal) out. GL buffer calls are
 * recording stubs. */
#include <stdlib.h>
#include <string.h>
#include "nc.h"
#include "gl.h"

#define W(idx) (*(uint32_t *)(uintptr_t)(0x140404A6CULL + 4ULL * (uint64_t)(idx)))
#define REC(c, k) W(3336LL * (c) + 272034677LL + (k))

#ifdef NC_NATIVE
#define build(a) ((long long (*)(int))NC_ADDR(0x1400D00F0))(a)
#else
long long sub_1400D00F0(int);
#define build(a) sub_1400D00F0(a)
#endif

static void gl_bind_buffer(GLenum t, GLuint n) { nc_line("glBindBuffer %#x %u", t, n); }
static void gl_buffer_data(GLenum t, GLsizeiptr size, const void *data, GLenum usage)
{
    nc_line("glBufferData %#x %lld %#x", t, (long long)size, usage);
    nc_line("  data %016llx", (unsigned long long)nc_hash(data, (size_t)size));
}

static float *heights;
#define STRIDE 2049

int main(void)
{
    nc_map_image();
    *(void **)(void *)slot_glBindBuffer = (void *)gl_bind_buffer;
    *(void **)(void *)slot_glBufferData = (void *)gl_buffer_data;
    heights = malloc(sizeof(float) * STRIDE * STRIDE);
    int cases = nc_cases(12);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        float base = nc_float_plain(-50.0f, 50.0f), amp = nc_float_plain(0.0f, 40.0f);
        for (int i = 0; i < STRIDE * STRIDE; i++)
            heights[i] = base + amp * nc_float_plain(-1.0f, 1.0f);
        for (int c = 0; c < 64; c++) {
            REC(c, 0) = 0; REC(c, 1) = 0; REC(c, 2) = 0;
            float f[3] = {nc_float_plain(-1000, 1000), nc_float_plain(-10, 10), nc_float_plain(-1000, 1000)};
            memcpy(&REC(c, 0), f, 12);
            REC(c, 3) = c % 8;
            REC(c, 4) = c / 8;
            *(float **)(void *)&REC(c, 6) = heights;
        }
        int cell = n % 64;
        if (n < 4) cell = (int[]){0, 7, 56, 63}[n];     /* corners: neighbours outside the 8x8 grid */
        W(283791496LL + cell) = nc_rand_below(16);
        for (int k = 0; k < 16; k++) W(283793813LL + 2 * k) = 500 + k;
        nc_line("case %d cell %d", n, cell);
        nc_bytes("ret", (long long[]){build(cell)}, 8);
    }
    return 0;
}
