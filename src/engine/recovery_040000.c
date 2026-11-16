/* Shape builders for the mesh being built (see recovery_040000.h).
 *
 * The original's three routines are the same shape: they zero the mesh
 * build (the vertex count 0x16A7DBDA0, the triangle count 0x16A91BDA8,
 * the build cursors 0x16AC43DB0 and 0x16AD03DB4), write the leading
 * vertex and its normal through sub_140002D00 (the game's mesh builder,
 * which stores [a2, a3, a4] with negated a2/a3/a4 components in its
 * normal slots), zero-fill 24-byte records at 0x16AB13DB4 for the
 * triangle count the builder produced, and tail-call sub_1401449C0 with
 * the caller's first argument and 0.
 */
#include "recovery_040000.h"

/* The state words of the mesh build, named as client_state.h names them. */
#define mesh_vertex_count   SR_GLOBAL(uint32_t, 0x16A7DBDA0ULL)   /* vertices of the mesh being built */
#define mesh_triangle_count SR_GLOBAL(uint32_t, 0x16A91BDA8ULL)   /* triangles of the mesh being built */
#define g_16AC43DB0         SR_GLOBAL(uint32_t, 0x16AC43DB0ULL)
#define g_16AD03DB4         SR_GLOBAL(uint32_t, 0x16AD03DB4ULL)
/* The triangle records of the mesh being built, 24 bytes each. */
#define g_16AB13DB4         (&SR_GLOBAL(uint32_t, 0x16AB13DB4ULL))

/* The 0x140279870 sign-bit constant: -0.0f four times over. The negation
   the builders apply is an XOR with this constant's word, so it sees
   -0.0f unchanged and turns +0.0f into -0.0f. */
static const float recovery_signbit[4] = {-0.0f, -0.0f, -0.0f, -0.0f};

typedef union { float f; uint32_t u; } recovery_float_bits;

/* The zero-fill the three builders share: 24-byte records at
   0x16AB13DB4, one per triangle the builder produced, each cleared as
   three 8-byte stores at -4, +4 and +12 bytes into the record. */
static void recovery_mesh_clear_records(void)
{
    uint32_t *record = g_16AB13DB4;
    for (uint32_t i = 0; i < mesh_triangle_count; ++i) {
        *(uint64_t *)(record - 1) = 0;
        *(uint64_t *)(record + 1) = 0;
        *(uint64_t *)(record + 3) = 0;
        record += 6;
    }
}

/* 0x14005D4C0: the leading vertex is [0, 0, a4 ^ signbit] — the original
   zero-stores 8 bytes at rsp+20h and the flipped a4 at rsp+28h. The
   negation is the original's XOR of a4 with the 0x140279870 sign-bit
   constant (an xmm sign flip, not a subtract), which sees -0.0f unchanged
   and turns +0.0f into -0.0f. */
double recovery_mesh_builder_origin(int a1, float a2, float a3, float a4)
{
    float vec[3];
    recovery_float_bits flipped = { a4 };
    flipped.u ^= ((recovery_float_bits){ recovery_signbit[0] }).u;
    vec[2] = flipped.f;
    mesh_vertex_count = 0;
    mesh_triangle_count = 0;
    g_16AC43DB0 = 0;
    g_16AD03DB4 = 0;
    *(uint64_t *)&vec[0] = 0;
    sub_140002D00(vec, a2, a3, a4);
    recovery_mesh_clear_records();
    return sub_1401449C0(a1, 0);
}

/* 0x14005F370: when a2 is 1 the leading vertex is zeroed and the
   0x140278160 constant 0.019999999552965164f is passed over a2/a3/a4 as
   well; the leading vertex is not written at all otherwise. The triangle
   count the record clear walks is the builder's own (the original reads
   it back after the call). */
double recovery_mesh_builder_020(int a1, int a2)
{
    float vec[3];
    mesh_vertex_count = 0;
    mesh_triangle_count = 0;
    g_16AC43DB0 = 0;
    g_16AD03DB4 = 0;
    if (a2 == 1) {
        const float value = 0.019999999552965164f; /* 0x140278160 */
        *(uint64_t *)&vec[0] = 0;
        vec[2] = 0.0f;
        sub_140002D00(vec, value, value, value);
    }
    recovery_mesh_clear_records();
    return sub_1401449C0(a1, 0);
}

/* 0x1400521A0: the leading vertex is [0.0, -0.03125, a4 * -0.5], the
   0x140278B60 constant -0.03125f in the Y slot and 0x140278BD0's -0.5f
   multiplying a4. The Z slot is written after the first two counters are
   cleared, matching the original's store order. */
double recovery_mesh_builder_03125(int a1, float a2, float a3, float a4)
{
    float vec[3];
    vec[0] = 0.0f;
    vec[1] = -0.03125f; /* 0x140278B60 */
    mesh_vertex_count = 0;
    mesh_triangle_count = 0;
    g_16AC43DB0 = 0;
    vec[2] = a4 * -0.5f; /* 0x140278BD0 */
    g_16AD03DB4 = 0;
    sub_140002D00(vec, a2, a3, a4);
    recovery_mesh_clear_records();
    return sub_1401449C0(a1, 0);
}
