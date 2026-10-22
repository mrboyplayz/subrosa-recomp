/* Position interpolation and normalized quaternion matrix blending. */
#include <string.h>
#include "arith.h"
#include "math3d.h"

void math_vec3_lerp(float out[3], const float from[3], const float to[3], float fraction)
{
    float dx = to[0] - from[0];
    float dy = to[1] - from[1];
    float dz = to[2] - from[2];
    /* Deltas are captured first, but each base component is read at its
       store. This also preserves partial input/output overlap. */
    out[0] = dx * fraction + from[0];
    out[1] = dy * fraction + from[1];
    out[2] = dz * fraction + from[2];
}

void math_mat3_nlerp(float out[9], const float from[9], const float to[9], float fraction)
{
    float first[4], second[4], blended[4];
    math_quat_from_mat3(first, from);
    math_quat_from_mat3(second, to);
    float dot = (first[3] * second[3] + first[2] * second[2])
              + (first[0] * second[0] + first[1] * second[1]);
    if (!(dot >= 0.0f)) {
        for (int i = 0; i < 4; i++)
            second[i] = -second[i];
    }
    float remaining = 1.0f - fraction;
    for (int i = 0; i < 4; i++)
        blended[i] = remaining * first[i] + fraction * second[i];

    float squared_length = (blended[3] * blended[3] + blended[2] * blended[2])
                         + (blended[0] * blended[0] + blended[1] * blended[1]);
    /* The native normalizer takes the square root and reciprocal in
       double precision, then rounds each scaled component back to float. */
    double length = sqrt_double((double)squared_length);
    if (length == 0.0 || __builtin_isnan(length)) {
        blended[0] = 0.0f;
        blended[1] = 0.0f;
        blended[2] = 0.0f;
        blended[3] = 1.0f;
    } else {
        double inverse = 1.0 / length;
        for (int i = 0; i < 4; i++)
            blended[i] = (float)((double)blended[i] * inverse);
    }
    math_mat3_from_quat(out, blended);
}
