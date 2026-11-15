/* Rotation-to-quaternion network encoders: the largest quaternion
 * component is excluded, sign-normalized first, and the others quantized
 * (0x140114D40 at 13 bits, 0x140114E90 at a caller-provided width), the
 * component order coming from four words of state. Rotation and general
 * matrices alike, zero/negative/NaN/huge/tiny lanes, degenerate bit
 * counts, seeded order words, and output overlapping the matrix. */
// NC_WRAPPERS: 140114D40 140114E90
#include <math.h>
#include <string.h>
#include "nc.h"
#include "net_rotation.h"

#ifdef NC_NATIVE
#define encode13(out, m) \
    ((uint64_t (*)(uint32_t *, const float *))NC_ADDR(0x140114D40))(out, m)
#define encodebits(out, m, b) \
    ((uint64_t (*)(uint32_t *, const float *, int))NC_ADDR(0x140114E90))(out, m, b)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_net_encode_rotation_13bit(uint32_t *, float *);
long long sr_net_encode_rotation(uint32_t *, float *, char);
#define encode13(out, m) sr_net_encode_rotation_13bit(out, m)
#define encodebits(out, m, b) sr_net_encode_rotation(out, m, (char)(b))
#else
#define encode13(out, m) net_encode_rotation_13bit(out, m)
#define encodebits(out, m, b) net_encode_rotation(out, m, b)
#endif

static const int bits_table[] = {1, 2, 3, 5, 8, 13, 16, 31, 32, 33, 0, 40, 100, -1, 7, 64};

/* Hand-made matrices cycling the branches of quat_from_mat3 and the
   zero/equality/NaN edges of the largest-component selection. */
static const float specials[][9] = {
    {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f},
    {NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN, NAN},
    {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f},
    {-1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f},
    {0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f},
    {2.0f, 0.0f, 0.0f, 0.0f, 2.0f, 0.0f, 0.0f, 0.0f, 2.0f},
    {1e30f, 0.0f, 0.0f, 0.0f, -1e30f, 0.0f, 0.0f, 0.0f, 1e30f},
    {0.0f, 0.0f, NAN, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f},
    {-0.0f, -0.0f, -0.0f, -0.0f, -0.0f, -0.0f, -0.0f, -0.0f, -0.0f},
    {0.5f, 0.0f, 0.0f, 0.0f, 0.5f, 0.0f, 0.0f, 0.0f, 0.5f},
    {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f},
};
#define NSPECIALS (sizeof specials / sizeof specials[0])

/* A rotation matrix of a random unit quaternion. */
static void make_rotation(float *m)
{
    double q[4], norm = 0.0;
    for (int i = 0; i < 4; ++i) {
        q[i] = (double)nc_float_plain(-1.0f, 1.0f);
        norm += q[i] * q[i];
    }
    norm = sqrt(norm);
    if (norm < 1e-8) {
        q[0] = 0.0;
        q[1] = 0.0;
        q[2] = 0.0;
        q[3] = 1.0;
        norm = 1.0;
    }
    for (int i = 0; i < 4; ++i)
        q[i] /= norm;
    float x = (float)q[0], y = (float)q[1], z = (float)q[2], w = (float)q[3];
    m[0] = 1.0f - 2.0f * (y * y + z * z);
    m[1] = 2.0f * (x * y - z * w);
    m[2] = 2.0f * (x * z + y * w);
    m[3] = 2.0f * (x * y + z * w);
    m[4] = 1.0f - 2.0f * (x * x + z * z);
    m[5] = 2.0f * (y * z - x * w);
    m[6] = 2.0f * (x * z - y * w);
    m[7] = 2.0f * (y * z + x * w);
    m[8] = 1.0f - 2.0f * (x * x + y * y);
}

static void run_case(int n, int op)
{
    static float matrix_pool[16];    /* the matrix at a varying offset */
    static uint32_t output_pool[16]; /* slack past the four written words */
    int bits = bits_table[n % 16];
    uint32_t *out;
    float *matrix;
    uint64_t result;

    nc_seed((uint64_t)n * 2 + (uint64_t)op);
    int kind = (int)nc_rand_below(6);

    for (int i = 0; i < 16; ++i)
        matrix_pool[i] = nc_float_plain(-3.0f, 3.0f);
    matrix = matrix_pool + (int)nc_rand_below(3); /* float alignment 0/4/8 */
    switch (kind) {
    case 0:
        make_rotation(matrix);
        break;
    case 1:
        make_rotation(matrix);
        for (int i = 0; i < 9; ++i)
            matrix[i] += nc_float_plain(-0.05f, 0.05f);
        break;
    case 2:
        for (int i = 0; i < 9; ++i) matrix[i] = nc_float(-2.0f, 2.0f);
        break;
    case 3:
        for (int i = 0; i < 9; ++i) matrix[i] = nc_float_plain(-1e12f, 1e12f);
        break;
    case 4:
        for (int i = 0; i < 9; ++i) matrix[i] = nc_float(-1e-8f, 1e-8f);
        break;
    default:
        memcpy(matrix, &specials[(n / 6) % NSPECIALS], sizeof specials[0]);
        break;
    }

    /* The component-order words: 0..3, often equal to the largest index. */
    dword_140301DC8 = (int32_t)nc_rand_below(4);
    dword_140301DCC = (int32_t)nc_rand_below(4);
    dword_140301DD0 = (int32_t)nc_rand_below(4);
    dword_140301DD4 = (int32_t)nc_rand_below(4);
    dword_140301DE8 = (int32_t)nc_rand_below(4);
    dword_140301DEC = (int32_t)nc_rand_below(4);
    dword_140301DF0 = (int32_t)nc_rand_below(4);
    dword_140301DF4 = (int32_t)nc_rand_below(4);

    /* Sometimes the output is written over the matrix, consumed already. */
    out = nc_chance(10) ? (uint32_t *)(void *)matrix
                        : output_pool + (int)nc_rand_below(10);

    nc_set_mxcsr(0x1F80);
    if (op == 0)
        result = encode13(out, matrix);
    else
        result = encodebits(out, matrix, bits);

    nc_line("case %d op %d kind %d bits %d", n, op, kind, bits);
    nc_line("out %08x %08x %08x %08x %08x %08x ret %016llx",
            out[0], out[1], out[2], out[3], out[4], out[5],
            (unsigned long long)result);
    nc_line("order %d %d %d %d | %d %d %d %d",
            dword_140301DC8, dword_140301DCC, dword_140301DD0, dword_140301DD4,
            dword_140301DE8, dword_140301DEC, dword_140301DF0, dword_140301DF4);
    nc_line("matrix %016llx output %016llx",
            (unsigned long long)nc_hash(matrix_pool, sizeof matrix_pool),
            (unsigned long long)nc_hash(output_pool, sizeof output_pool));
}

int main(void)
{
    nc_map_image();
    for (int n = 0; n < nc_cases(4000); n++)
        for (int op = 0; op < 2; op++)
            run_case(n, op);
    return 0;
}
