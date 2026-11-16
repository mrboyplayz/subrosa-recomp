#include "arith.h"
#include "recovery_080000.h"
#include "crt.h"
#include "math3d.h"
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

void sr_recovery_08009E7D0(float out[3], const float src[9])
{
    // (000000014009E7D0)
    // Euler-angle decomposition: out[0]=yaw from (src[1],src[4]);
    // out[1]=pitch from (-src[7], r) with r=sqrt(src[6]*src[6]+src[8]*src[8])
    // (the sign flip on src[7] is a real xorps against the sign mask
    // 0x80000000 at 0x140279870); out[2]=roll from the yaw-rotated row pair.
    // NOTE arg order: movss 0x4(%rdx),%xmm0 loads src[1] into the FIRST
    // atan2 argument (y), 0x10(%rdx) loads src[4] into the second (x).
    float yaw = crt_atan2f(src[1], src[4]);
    out[0] = yaw;

    float r = sqrt_float(src[6] * src[6] + src[8] * src[8]);
    out[1] = crt_atan2f(-src[7], r);

    float sine, cosine;
    math_sine_cosine(yaw, &sine, &cosine);
    out[2] = crt_atan2f(sine * src[5] - cosine * src[2],
                        cosine * src[0] - sine * src[3]);
}

int sr_recovery_08009E880(float out[3], const float m[9])
{
    // (000000014009E880)
    // Works on a local copy of the 3x3 matrix because the two rotate_rows
    // calls mutate it in place (the callee gets the same pointer as the
    // matrix argument in the disassembly: lea 0x20(%rsp) twice).
    float axis[9];
    for (int i = 0; i < 9; ++i) {
        axis[i] = m[i];
    }

    out[0] = crt_atan2f(m[5], m[4]);
    math_mat3_rotate_rows(axis, axis, out[0]);
    out[2] = crt_atan2f(-axis[3], axis[4]);
    math_mat3_rotate_rows(axis, axis + 6, out[2]);
    out[1] = crt_atan2f(axis[6], axis[8]);
    return 0; /* the function has no caller */
}
