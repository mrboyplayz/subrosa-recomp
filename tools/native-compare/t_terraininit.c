// NC_WRAPPERS: 1400D12E0 1400D00F0 1400D2DB0
/* Terrain init 0x1400D12E0: the 2049 x 2049 source heights are bilinearly
 * spread over the tile grids (0x1400D2DB0), every chunk mesh is built
 * (0x1400D00F0), and the cell, ring and quarter tables are reset to -1.
 * The flatten pass (0x1400D3340) is skipped by the frozen flag in half the
 * cases and finds no record (-1) in the others. All tiles share one grid
 * buffer; it, the reset tables and the GL calls are compared. */
#include <stdlib.h>
#include <string.h>
#include "nc.h"
#include "gl.h"

#define G(T, a) (*(T *)(uintptr_t)(a))
#define W(idx) (*(uint32_t *)(uintptr_t)(0x140404A6CULL + 4ULL * (uint64_t)(idx)))
#define REC(c, k) W(3336LL * (c) + 272034677LL + (k))

#ifdef NC_NATIVE
#define init() ((void *(*)(void))NC_ADDR(0x1400D12E0))()
#else
void *sub_1400D12E0(void);
#define init() sub_1400D12E0()
#endif

static void gl_bind_buffer(GLenum t, GLuint n) { nc_line("glBindBuffer %#x %u", t, n); }
static void gl_buffer_data(GLenum t, GLsizeiptr size, const void *data, GLenum usage)
{
    nc_line("glBufferData %#x %lld %#x", t, (long long)size, usage);
    nc_line("  data %016llx", (unsigned long long)nc_hash(data, (size_t)size));
}

#define STRIDE 2049

int main(void)
{
    nc_map_image();
    *(void **)(void *)slot_glBindBuffer = (void *)gl_bind_buffer;
    *(void **)(void *)slot_glBufferData = (void *)gl_buffer_data;
    float *heights = malloc(sizeof(float) * STRIDE * STRIDE);
    int cases = nc_cases(3);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        for (unsigned o = 0; o < 0x181290080ULL - 0x1810FF780ULL; o += 4) G(uint32_t, 0x1810FF780ULL + o) = nc_rand_below(7);
        float *src = (float *)(uintptr_t)0x16D482830ULL;
        for (int i = 0; i < STRIDE * STRIDE + 1; i++) src[i - 1] = nc_float_plain(-20.0f, 60.0f);
        memset(heights, 0, sizeof(float) * STRIDE * STRIDE);
        for (int c = 0; c < 64; c++) {
            float f[3] = {nc_float_plain(-1000, 1000), nc_float_plain(-10, 10), nc_float_plain(-1000, 1000)};
            memcpy(&REC(c, 0), f, 12);
            REC(c, 3) = c % 8;
            REC(c, 4) = c / 8;
            *(float **)(void *)&REC(c, 6) = heights;
        }
        for (int k = 0; k < 64; k++) W(283791496LL + k) = nc_rand_below(16);
        for (int k = 0; k < 16; k++) W(283793813LL + 2 * k) = 500 + k;
        for (int a = 0; a < 64; a++) G(int, 0x175FD147CULL + 136ULL * a) = -1;
        G(int, 0x1810FF788ULL) = 5; G(int, 0x1811177A0ULL) = 3; G(int, 0x18112F7B8ULL) = 4;
        G(int, 0x1811477D0ULL) = 2; G(int, 0x18115F7E8ULL) = 6; G(int, 0x181177800ULL) = 7; G(int, 0x18118F818ULL) = 1;
        G(uint32_t, 0x183F7CB60ULL) = n & 1 ? 0 : 1;
        nc_line("case %d frozen %u", n, G(uint32_t, 0x183F7CB60ULL));
        void *r = init();
        nc_bytes("ret", &r, 8);
        nc_line("grid %016llx", (unsigned long long)nc_hash(heights, sizeof(float) * STRIDE * STRIDE));
        for (int c = 0; c < 64; c++) *(float **)(void *)&REC(c, 6) = NULL;   /* heap address differs per run */
        for (unsigned o = 0; o < 0x181290080ULL - 0x1810FF780ULL; o += 4096)
            nc_line("t %x %016llx", o, (unsigned long long)nc_hash((void *)(uintptr_t)(0x1810FF780ULL + o), 4096));
        for (unsigned k = 0; k < 60; k++)
            nc_line("w %u %d", k, (int)G(uint32_t, 0x1811BF874ULL + 4 * k));
        nc_line("tables %016llx", (unsigned long long)nc_hash((void *)(uintptr_t)0x1810FF780ULL, 0x181290080ULL - 0x1810FF780ULL));
    }
    return 0;
}
