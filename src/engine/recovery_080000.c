#include "arith.h"
#include "recovery_080000.h"
#include <math.h>

float sr_recovery_080081CC0(const float v[3], const float c[3], float a3, float a4, float a5)
{
    // (0000000140081CC0)
    // Original: sqrtss over ((x1*x1 + x0*x0) + x2*x2); on UCOMISS/JE the
    // components are zeroed (xorps) and the computation FALLS THROUGH, so a
    // NaN input propagates NaN through the tail rather than returning 0.
    float sq = (v[0] * v[0] + v[1] * v[1]) + v[2] * v[2];
    float r = sqrt_float(sq);

    float scale = 1.0f / r;   // real divss against constant 1.0 (0x1402783f4)
    float x0 = v[0] * scale;
    float x1 = v[1] * scale;
    float x2 = v[2] * scale;

    if (is_zero_or_nan_quiet(r)) {
        x0 = 0.0f;
        x1 = 0.0f;
        x2 = 0.0f;
    }

    // x1 term FIRST, then x0, then x2 (mulss order in the disassembly).
    float weighted = (x1 * c[1] + x0 * c[0]) + x2 * c[2];
    float val = (weighted * a3 * a4 * -0.75f * sq) / a5;

    // Clamp constants: K1=0x140278b90 -> -0.125f, K2=0x140278224 -> 0.125f.
    // MAXSS(val, r*K1) first, then MINSS(., r*K2).
    return min_float(max_float(val, r * -0.125f), r * 0.125f);
}
