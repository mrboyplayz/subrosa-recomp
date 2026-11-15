// NC_WRAPPERS: 140114E90 140114D40 140115D20 140115BD0
/* Quaternion encoders (variable-bits and 13-bit) and the signed-bits /
   optional-index readers: quat-from-mat3 agreement, largest-component
   selection and sign negation (NaN operands never update the index, the
   running maximum keeps its second operand), the original order tables at
   0x140301DC8 and 0x140301DE8 (restored per case and deterministically
   mutated in bounds), quantization limits for bits {1,2,3,7,8,13,14,16,31,32,33,-1,0}, NaN/inf/-0.0 matrices,
   rounding modes plus flush-to-zero, overlapping output arenas, and sign
   extension / all-ones-to-minus-1 decoding from the packet bit stream. */
#include <string.h>
#include "nc.h"
#include "net_bits.h"
#include "net_rotation.h"

#ifdef NC_NATIVE
/* The port's encoders return void, so the original's int64 return cannot be
   compared across builds; every build normalizes it to the same value. */
static long long encode_rotation(int32_t *out, const float *matrix, int bits)
{
    ((long long (*)(int32_t *, const float *, char))NC_ADDR(0x140114E90))(out, matrix, (char)bits);
    return 1;
}

static long long encode_rotation_13(int32_t *out, const float *matrix)
{
    ((long long (*)(int32_t *, const float *))NC_ADDR(0x140114D40))(out, matrix);
    return 1;
}

#define read_signed_bits(v, b) ((long long (*)(int32_t *, int))NC_ADDR(0x140115D20))(v, b)
#define read_optional_index(v, b) ((long long (*)(int32_t *, int))NC_ADDR(0x140115BD0))(v, b)
#elif defined(NC_CLIENT_WRAPPERS)
long long sr_net_encode_rotation(int32_t *, float *, char);
long long sr_net_encode_rotation_13bit(int32_t *, float *);
long long sr_net_read_signed_bits(int32_t *, int);
long long sr_net_read_optional_index(int32_t *, int);

static long long encode_rotation(int32_t *out, const float *matrix, int bits)
{
    sr_net_encode_rotation(out, matrix, (char)bits);
    return 1;
}

static long long encode_rotation_13(int32_t *out, const float *matrix)
{
    sr_net_encode_rotation_13bit(out, matrix);
    return 1;
}

#define read_signed_bits sr_net_read_signed_bits
#define read_optional_index sr_net_read_optional_index
#else
static long long encode_rotation(int32_t *out, const float *matrix, int bits)
{
    net_encode_rotation(out, matrix, bits);
    return 1;
}

static long long encode_rotation_13(int32_t *out, const float *matrix)
{
    net_encode_rotation_13bit(out, matrix);
    return 1;
}

#define read_signed_bits net_read_signed_bits
#define read_optional_index net_read_optional_index
#endif

static float float_from_bits(uint32_t bits)
{
    float f;
    memcpy(&f, &bits, sizeof(f));
    return f;
}

static void build_matrix(float *m, int n)
{
    static const float rot[11][9] = {
        {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f},
        {1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 0.0f, -1.0f},
        {-1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, -1.0f},
        {-1.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, 0.0f, 1.0f},
        {1.0f, 0.0f, 0.0f, 0.0f, 0.0f, -1.0f, 0.0f, 1.0f, 0.0f},
        {1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, -1.0f, 0.0f},
        {0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, -1.0f, 0.0f, 0.0f},
        {0.0f, 0.0f, -1.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, 0.0f},
        {0.0f, -1.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f},
        {0.0f, 1.0f, 0.0f, -1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f},
        {0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f}
    };
    static const uint32_t patterns[8] = {
        0x7FC00000u, 0xFFC00000u, 0x7F800000u, 0xFF800000u,
        0x80000000u, 0x7F7FFFFFu, 0x00000000u, 0x3F800000u
    };
    int kind = (n / 3) % 16;
    int i;
    if (kind < 11) {
        memcpy(m, rot[kind], sizeof(rot[kind]));
    } else if (kind == 11) {
        for (i = 0; i < 9; i++)
            m[i] = nc_float(-4.0f, 4.0f);
    } else if (kind == 12) {
        for (i = 0; i < 9; i++)
            m[i] = float_from_bits((i & 1) ? 0xFFC00000u : 0x7FC00000u);
    } else if (kind == 13) {
        int slot = (n / 9) % 9;
        for (i = 0; i < 9; i++)
            m[i] = i == slot ? float_from_bits(0x7FC00000u) : nc_float(-4.0f, 4.0f);
    } else if (kind == 14) {
        for (i = 0; i < 9; i++)
            m[i] = (i + n) % 3 == 0 ? float_from_bits(patterns[(n + i) % 8])
                                    : nc_float(-4.0f, 4.0f);
    } else {
        for (i = 0; i < 9; i++)
            m[i] = i % 2 == 0 ? float_from_bits(patterns[(n / 7 + i) % 8])
                              : nc_float(-4.0f, 4.0f);
    }
}

static void run_case(int op, int n)
{
    static const int bits_table[] = {1, 2, 3, 7, 8, 13, 14, 16, 31, 32, 33, -1, 0};
    static const int positions[] = {0, 1, 4, 32, 4096, 32768, 65530, 65531, 65532};
    static const int offsets[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 13, 31, 32, -1};
    static const int table_muts[4][4] = {
        {0, 1, 2, 3},
        {3, 2, 1, 0},
        {0, 0, 1, 1},
        {3, 3, 3, 3}
    };
    nc_seed((uint64_t)op * 1000000 + n);
    nc_set_mxcsr(0x1F80u);
    if (op < 2) {
        void *table = op == 0 ? (void *)0x140301DE8 : (void *)0x140301DC8;
        int tbl[4];
        float matrix[9];
        int32_t arena[16];
        long long ret;
        int bits, off, i;
        nc_restore();
        if (n % 4 == 0)
            memcpy(table, table_muts[(n / 4) % 4], 16);
        memcpy(tbl, table, 16);
        build_matrix(matrix, n);
        bits = op == 1 ? 13 : bits_table[n % 13];
        for (i = 0; i < 16; i++)
            arena[i] = (int32_t)nc_rand();
        off = n % 6;
        nc_floats("matrix", matrix, 9);
        nc_set_mxcsr(0x1F80u | ((unsigned)(n % 4) << 13) | ((n / 4) % 2 ? 0x8000u : 0u));
        if (op == 0)
            ret = encode_rotation(&arena[off], matrix, bits);
        else
            ret = encode_rotation_13(&arena[off], matrix);
        nc_line("op%d n%d bits%d ret%016llx big%d tbl %d %d %d %d out %08x %08x %08x %08x csr%08x",
                op, n, bits, (unsigned long long)ret, arena[off],
                tbl[0], tbl[1], tbl[2], tbl[3],
                (unsigned)arena[off], (unsigned)arena[off + 1],
                (unsigned)arena[off + 2], (unsigned)arena[off + 3], nc_get_mxcsr());
        nc_line("arena %016llx", (unsigned long long)nc_hash(arena, sizeof(arena)));
    } else {
        int bits = bits_table[n % 13];
        int start = positions[(n / 13) % 9];
        int bit = offsets[(n / 117) % 14];
        int32_t value_local;
        int32_t *value;
        long long result;
        int i;
        if (n % 97 == 0) {
            for (i = 0; i < NET_BUFFER_SIZE + 16; i++)
                net_read_buffer[i] = (uint8_t)nc_rand();
        } else if (n % 389 == 5) {
            memset(net_read_buffer, 0xFF, NET_BUFFER_SIZE + 16);
        }
        net_read_position = start;
        net_read_bit = bit;
        /* The readers always write *value: on a failed read the original
           stores its uninitialized stack slot, which no port can reproduce,
           so every case reads successfully. */
        net_read_length = NET_BUFFER_SIZE;
        value_local = (int32_t)nc_rand();
        value = &value_local;
        switch (n % 6) {
        case 1: value = (int32_t *)(void *)(net_read_buffer + 12); break;
        case 2: value = (int32_t *)(void *)(net_read_buffer + 12 + (n % 8) * 4); break;
        case 3: value = (int32_t *)(void *)&net_read_position; break;
        case 4: value = (int32_t *)(void *)&net_read_bit; break;
        case 5: value = (int32_t *)(void *)&net_read_length; break;
        default: break;
        }
        result = op == 2 ? read_signed_bits(value, bits) : read_optional_index(value, bits);
        nc_line("op%d n%d bits%d ret%016llx val%08x r%d/%d/%d csr%08x",
                op, n, bits, (unsigned long long)result, (unsigned)*value,
                net_read_position, net_read_bit, net_read_length, nc_get_mxcsr());
        nc_line("buffer %016llx", (unsigned long long)nc_hash(net_read_buffer, NET_BUFFER_SIZE + 16));
    }
}

int main(void)
{
    nc_map_image();
    nc_save((void *)0x140301DC8, 16);
    nc_save((void *)0x140301DE8, 16);
    for (int op = 0; op < 4; op++)
        for (int n = 0; n < nc_cases(4000); n++)
            run_case(op, n);
    return 0;
}
