/* Two-dimensional value noise on an integer lattice that wraps with a mask.
 * Each lattice corner has a pseudo-random value in (-1, 1] hashed from
 * 57 * y + x; the four corners blend with the smoothstep weight
 * (3 - 2f) * f * f of the fractional parts. The order of the floating-point
 * operations is the original's, which the valuenoise native suite checks bit
 * for bit. 0x1401305F0 */
#include "arith.h"
#include "math3d.h"

static float corner(int32_t n)
{
    uint32_t k = (uint32_t)n;
    k ^= k << 13;
    k *= k;
    k = k * 15731u + 789221u;
    k = k * k - 771171059u;
    return 1.0f - (float)(int32_t)(k & 0x7FFFFFFFu) * 9.3132257e-10f;
}

float math_value_noise_2d(float x, float y, int32_t mask)
{
    int32_t ix = truncate_float(x);
    int32_t iy = truncate_float(y);
    int32_t row0 = multiply_int(iy, 57);
    int32_t ix1 = add_int(ix, 1) & mask;
    int32_t row1 = multiply_int(add_int(iy, 1) & mask, 57);
    float fx = x - (float)ix;
    float fy = y - (float)iy;
    float sx = (3.0f - (fx + fx)) * (fx * fx);
    float sy = (3.0f - (fy + fy)) * (fy * fy);
    float wx = 1.0f - sx;
    float wy = 1.0f - sy;
    float v00 = corner(add_int(row0, ix));
    float v10 = corner(add_int(row0, ix1));
    float v01 = corner(add_int(row1, ix));
    float v11 = corner(add_int(row1, ix1));
    float top = v00 * wx + v10 * sx;
    float bottom = v01 * wx + v11 * sx;
    return top * wy + bottom * sy;
}
