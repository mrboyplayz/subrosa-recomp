/* Quaternion angles and relative matrix rotations. See math3d.h. */
#include "arith.h"
#include "crt.h"
#include "math3d.h"

static float rotation_angle(float scalar)
{
    double half_angle = crt_acos((double)min_float(max_float(scalar, -1.0f), 1.0f));
    return (float)(half_angle + half_angle);
}

static void scale_axis(float axis[3], float angle)
{
    float x = angle * axis[0];
    float y = angle * axis[1];
    float z = angle * axis[2];
    axis[0] = x;
    axis[1] = y;
    axis[2] = z;
}

float math_quat_to_axis_angle(float axis[3], const float quaternion[4])
{
    math_vec3_normalize(axis, quaternion);
    /* Read w after the axis stores: a partially overlapping output can
       overwrite it, and the original observes that write. */
    return rotation_angle(quaternion[3]);
}

void math_quat_to_rotation_vector(float out[3], const float quaternion[4])
{
    float angle = math_quat_to_axis_angle(out, quaternion);
    scale_axis(out, angle);
}

float math_mat3_relative_axis_angle(float axis[3], const float left[9], const float right[9])
{
    float first[4], second[4];
    math_quat_from_mat3(first, left);
    math_quat_from_mat3(second, right);

    /* Pick matching quaternion hemispheres, including the unordered branch
       of the original COMISS/JAE, then conjugate the second quaternion. */
    float dot = (first[3] * second[3] + first[2] * second[2])
              + (first[0] * second[0] + first[1] * second[1]);
    if (!(dot >= 0.0f)) {
        for (int i = 0; i < 4; i++)
            second[i] = -second[i];
    }
    float rx = -second[0], ry = -second[1], rz = -second[2], rw = second[3];
    float lx = first[0], ly = first[1], lz = first[2], lw = first[3];
    float x = ((rx * lw + rw * lx) + ry * lz) - rz * ly;
    float y = ((rw * ly - rx * lz) + ry * lw) + rz * lx;
    float z = ((rx * ly + rw * lz) - ry * lx) + rz * lw;
    float w = ((lw * rw - rx * lx) - ry * ly) - rz * lz;
    float length = sqrt_float((y * y + x * x) + z * z);
    if (is_zero_or_nan_quiet(length)) {
        x = 0.0f;
        y = 0.0f;
        z = 0.0f;
    } else {
        float inverse = 1.0f / length;
        x *= inverse;
        y *= inverse;
        z *= inverse;
    }
    axis[0] = x;
    axis[1] = y;
    axis[2] = z;
    return rotation_angle(w);
}

void math_mat3_relative_rotation_vector(float out[3], const float from[9], const float to[9])
{
    float angle = math_mat3_relative_axis_angle(out, to, from);
    scale_axis(out, angle);
}
