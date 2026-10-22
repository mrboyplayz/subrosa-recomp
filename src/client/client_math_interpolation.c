#include "shared_client.h"
#include "../engine/math3d.h"

//----- (00000001400C2F90) ----------------------------------------------------
_UNKNOWN **sr_math_mat3_nlerp(float *out, float *from, float *to, double fraction_lane)
{
    /* Existing callers carry the native XMM3 float word in a double. */
    float fraction;
    memcpy(&fraction, &fraction_lane, sizeof fraction);
    math_mat3_nlerp(out, from, to, fraction);
    return (_UNKNOWN **)out; /* retain the pre-restoration compatibility result */
}

//----- (00000001400C30E0) ----------------------------------------------------
void sr_math_vec3_lerp(float *out, float *from, float *to, float fraction)
{
    math_vec3_lerp(out, from, to, fraction);
}
