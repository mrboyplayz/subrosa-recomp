#include "shared_client.h"
#include "../engine/math3d.h"

/* ABI entry points; the readable implementations are checked against the
   installed executable by the rotationangles native comparison suite. */

//----- (000000014002D050) ----------------------------------------------------
float sr_math_mat3_relative_axis_angle(float *axis, float *left, float *right)
{
    return math_mat3_relative_axis_angle(axis, left, right);
}

//----- (00000001400ACD90) ----------------------------------------------------
void sr_math_mat3_relative_rotation_vector(float *out, float *from, float *to)
{
    math_mat3_relative_rotation_vector(out, from, to);
}

//----- (000000014011C300) ----------------------------------------------------
float sr_math_quat_to_axis_angle(__int64 axis, float *quaternion)
{
    return math_quat_to_axis_angle((float *)axis, quaternion);
}

//----- (000000014011C490) ----------------------------------------------------
void sr_math_quat_to_rotation_vector(float *out, float *quaternion)
{
    math_quat_to_rotation_vector(out, quaternion);
}
