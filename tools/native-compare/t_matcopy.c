// NC_WRAPPERS: 140105770 140105840 14011C080
/* The three matrix-copy twins: the staged 3x3 and 4x4 products and the
   transposed 3x3 product. Matrix entries include NaN, infinity and negative
   zero bit patterns, every MXCSR rounding mode plus independent DAZ/FTZ
   controls, and output offsets across a 128-float arena so the output
   overlaps either input partially or completely (the original stages its
   inputs before writing; the port must observe the same). The entry points'
   compatibility returns are unspecified and are not compared. */
#include <string.h>
#include "nc.h"
#include "math3d.h"

#ifdef NC_CLIENT_WRAPPERS
void sr_math_mat3_multiply_copy(void *, void *, void *);
void sr_math_mat4_multiply_copy(void *, void *, void *);
void sr_math_mat3_multiply_transposed_alt(void *, void *, void *);
#endif

static float float_from_bits(uint32_t bits)
{
    float f;
    memcpy(&f, &bits, sizeof(f));
    return f;
}

static void build_entries(float *m, int count, int n)
{
    /* quiet NaN, negative quiet NaN, +inf, -inf, -0.0, largest finite, 0, 1 */
    static const uint32_t patterns[8] = {
        0x7FC00000u, 0xFFC00000u, 0x7F800000u, 0xFF800000u,
        0x80000000u, 0x7F7FFFFFu, 0x00000000u, 0x3F800000u
    };
    int kind = (n / 3) % 5;
    int i;
    if (kind == 0) {
        for (i = 0; i < count; i++)
            m[i] = nc_float(-4.0f, 4.0f);
    } else if (kind == 1) {
        for (i = 0; i < count; i++)
            m[i] = float_from_bits(patterns[(n + i) % 8]);
    } else if (kind == 2) {
        for (i = 0; i < count; i++)
            m[i] = (i + n) % 2 ? float_from_bits(patterns[(n / 5 + i) % 8])
                               : nc_float(-4.0f, 4.0f);
    } else if (kind == 3) {
        int slot = (n / 7) % count;
        for (i = 0; i < count; i++)
            m[i] = i == slot ? float_from_bits(patterns[(n + i) % 8])
                             : nc_float(-4.0f, 4.0f);
    } else {
        for (i = 0; i < count; i++)
            m[i] = i % 4 == 0 ? float_from_bits(patterns[(n / 3 + i) % 8])
                              : nc_float(-4.0f, 4.0f);
    }
}

static void run_case(int op, int n)
{
    static const int offsets[] = {0, 8, 16, 17, 18, 20, 24, 32, 40, 44,
                                  48, 49, 52, 56, 60, 64, 72, 80, 96, 112};
    float arena[128];
    int count = op == 1 ? 16 : 9;
    float *a = arena + 16;
    float *b = arena + 48;
    float *out;
    int i;

    nc_seed((uint64_t)op * 1000003 + n);
    nc_set_mxcsr(0x1F80u);
    for (i = 0; i < 128; i++)
        arena[i] = nc_float(-4.0f, 4.0f);
    build_entries(a, count, n);
    build_entries(b, count, n / 2 + 1);
    if (n % 11 == 0)
        b = a + (n / 11 % 8);
    out = arena + offsets[(n + op) % 20];
    nc_set_mxcsr(0x1F80u | ((unsigned)(n % 4) << 13)
                 | ((n / 4) % 2 ? 0x40u : 0u) | ((n / 8) % 2 ? 0x8000u : 0u));
    if (op == 0) {
#ifdef NC_NATIVE
        ((void (*)(void *, void *, void *))NC_ADDR(0x140105770))(out, a, b);
#elif defined(NC_CLIENT_WRAPPERS)
        sr_math_mat3_multiply_copy(out, a, b);
#else
        math_mat3_multiply(out, a, b);
#endif
    } else if (op == 1) {
#ifdef NC_NATIVE
        ((void (*)(void *, void *, void *))NC_ADDR(0x140105840))(out, a, b);
#elif defined(NC_CLIENT_WRAPPERS)
        sr_math_mat4_multiply_copy(out, a, b);
#else
        math_mat4_multiply(out, a, b);
#endif
    } else {
#ifdef NC_NATIVE
        ((void (*)(void *, void *, void *))NC_ADDR(0x14011C080))(out, a, b);
#elif defined(NC_CLIENT_WRAPPERS)
        sr_math_mat3_multiply_transposed_alt(out, a, b);
#else
        math_mat3_multiply_transposed(out, a, b);
#endif
    }
    /* A NaN product's payload may differ across builds; normalize the
       computed outputs before hashing so only real differences show. */
    for (i = 0; i < count; i++)
        if (out[i] != out[i])
            out[i] = float_from_bits(0x7FC00000u);
    nc_line("matcopy op%d n%d dim%d out%03d csr%08x", op, n, count,
            (int)(out - arena), nc_get_mxcsr());
    nc_floats("out", out, count);
    nc_line("arena %016llx", (unsigned long long)nc_hash(arena, sizeof(arena)));
}

int main(void)
{
    nc_map_image();
    for (int op = 0; op < 3; op++)
        for (int n = 0; n < nc_cases(3000); n++)
            run_case(op, n);
    return 0;
}
