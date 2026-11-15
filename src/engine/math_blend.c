/* Cosine-interpolated blend of two values: a and b mixed by the fraction
 * (1 - cos(pi*t))/2, which eases in and out between the endpoints. This is
 * the scalar cosine interpolation behind the value-noise family: the same
 * math is inlined in the 2D value-noise routine 0x1400384F0 next door, and
 * the spatial-grid helpers 0x140037DE0/0x140038230/0x140038130 are its
 * neighbours. The routine itself has no callers in the current build (no
 * call sites and no data references to its address in the original image).
 *
 * The result is bit for bit the routine of the original executable named
 * below; the order of the floating-point operations is part of that and
 * must not be rearranged (src/engine/README.md, verified by the cosblend
 * native suite). The fraction is computed in double (t promoted once, one
 * rounding to float), the weight 1 - fraction is a float subtraction like
 * the original's subss, and the two products add in the original's order.
 * 0x140038480 */
#include <math.h>

float math_cos_blend(float a, float b, float t)
{
    float cosine = (float)((1.0 - cos((double)t * 3.14159265359)) * 0.5);
    float weight = 1.0f - cosine;
    return weight * a + b * cosine;
}
