/* Vector and matrix helpers. See math3d.h. */
#include <string.h>
#include <xmmintrin.h>
#include "arith.h"
#include "math3d.h"

/* The original's sine/cosine routine (0x1401F8AC0, part of its C runtime,
   still recompiled code). Takes the angle as a float in the low lane of XMM0
   and returns sine in lane 0 and cosine in lane 1. Results must come from
   this routine: another library's sin and cos differ in the last bit. */
extern __m128 sub_1401F8AC0(double angle_lane);

void math_sine_cosine(float angle, float *sine, float *cosine)
{
    double lane = 0.0;
    float result[4];

    memcpy(&lane, &angle, sizeof angle);
    _mm_storeu_ps(result, sub_1401F8AC0(lane));
    *sine = result[0];
    *cosine = result[1];
}

void math_vec3_normalize(float out[3], const float v[3])
{
    float x = v[0];
    float length = sqrt_float((x * x + v[1] * v[1]) + v[2] * v[2]);

    if (is_zero_or_nan_quiet(length)) {
        out[0] = 0.0f;
        out[1] = 0.0f;
        out[2] = 0.0f;
    } else {
        float scale = 1.0f / length;
        out[0] = x * scale;
        out[1] = scale * v[1];
        out[2] = scale * v[2];
    }
}

float math_angle_difference(float a, float b)
{
    if ((double)(b - a) >= 3.14159265359)
        a = (float)((double)a + 6.28318530718);
    if ((double)(a - b) >= 3.14159265359)
        b = (float)((double)b + 6.28318530718);
    return a - b;
}

void math_mat3_multiply(float out[9], const float a[9], const float b[9])
{
    float product[9];

    for (int row = 0; row < 3; row++)
        for (int column = 0; column < 3; column++)
            product[row * 3 + column] = (a[row * 3] * b[column] + a[row * 3 + 1] * b[column + 3])
                                        + a[row * 3 + 2] * b[column + 6];
    memcpy(out, product, sizeof product);
}

void math_mat3_multiply_transposed(float out[9], const float a[9], const float b[9])
{
    float product[9];

    for (int row = 0; row < 3; row++)
        for (int column = 0; column < 3; column++)
            product[row * 3 + column] = (b[row * 3] * a[column * 3] + b[row * 3 + 1] * a[column * 3 + 1])
                                        + b[row * 3 + 2] * a[column * 3 + 2];
    memcpy(out, product, sizeof product);
}

void math_mat4_multiply(float out[16], const float a[16], const float b[16])
{
    float product[16];

    for (int row = 0; row < 4; row++)
        for (int column = 0; column < 4; column++)
            product[row * 4 + column] = ((a[row * 4] * b[column] + a[row * 4 + 1] * b[column + 4])
                                         + a[row * 4 + 2] * b[column + 8])
                                        + a[row * 4 + 3] * b[column + 12];
    memcpy(out, product, sizeof product);
}

/* Rodrigues' formula: the part of (x, y, z) across the axis turns, the part
   along it stays. Shared by the row and single-vector rotations, which the
   original computes with the same operations in the same order. */
static void rotate_about_axis(float out[3], float x, float y, float z,
                              float ax, float ay, float az, float sine, float cosine)
{
    /* (x, y, z) x axis, and the part of (x, y, z) along the axis */
    float cx = az * y - z * ay;
    float cy = z * ax - x * az;
    float cz = x * ay - ax * y;
    float along = (x * ax + ay * y) + z * az;

    out[0] = ((cz * ay - cy * az) * cosine + ax * along) + sine * cx;
    out[1] = ((cx * az - cz * ax) * cosine + ay * along) + sine * cy;
    out[2] = ((cy * ax - cx * ay) * cosine + az * along) + sine * cz;
}

void math_mat3_rotate_rows(float matrix[9], const float axis[3], float angle)
{
    float sine, cosine;
    float ax, ay, az;

    math_sine_cosine(angle, &sine, &cosine);
    az = axis[2];
    ay = axis[1];
    ax = axis[0];

    for (int row = 0; row < 3; row++) {
        float *v = &matrix[row * 3];
        float r[3];
        float length;

        rotate_about_axis(r, v[0], v[1], v[2], ax, ay, az, sine, cosine);
        length = sqrt_float((r[0] * r[0] + r[1] * r[1]) + r[2] * r[2]);
        if (is_zero_or_nan(length)) {
            v[0] = 0.0f;
            v[1] = 0.0f;
            v[2] = 0.0f;
        } else {
            float scale = 1.0f / length;
            v[0] = r[0] * scale;
            v[1] = scale * r[1];
            v[2] = r[2] * scale;
        }
    }
}

void math_vec3_rotate(float v[3], const float axis[3], float angle)
{
    float ax = axis[0], ay = axis[1], az = axis[2];
    float sine, cosine;

    math_sine_cosine(angle, &sine, &cosine);
    rotate_about_axis(v, v[0], v[1], v[2], ax, ay, az, sine, cosine);
}

void math_vec3_multiply_mat3(float out[3], const float v[3], const float m[9])
{
    float x = v[0], y = v[1], z = v[2];

    /* Each element is written before the next is computed, as in the
       original; that matters when out is m. */
    out[0] = (y * m[3] + x * m[0]) + z * m[6];
    out[1] = (y * m[4] + x * m[1]) + z * m[7];
    out[2] = (y * m[5] + x * m[2]) + z * m[8];
}

void math_mat4_multiply_vec4(float out[4], const float m[16], const float v[4])
{
    float x = v[0], y = v[1], z = v[2], w = v[3];
    float product[4];

    for (int row = 0; row < 4; row++)
        product[row] = ((x * m[row * 4] + y * m[row * 4 + 1]) + z * m[row * 4 + 2])
                       + w * m[row * 4 + 3];
    memcpy(out, product, sizeof product);
}

void math_triangle_normal(float out[3], const float a[3], const float b[3], const float c[3])
{
    float cx = c[0] - a[0], cy = c[1] - a[1], cz = c[2] - a[2];
    float bx = b[0] - a[0], by = b[1] - a[1], bz = b[2] - a[2];

    out[0] = cy * bz - cz * by;
    out[2] = cx * by - cy * bx;
    out[1] = cz * bx - cx * bz;
    math_vec3_normalize(out, out);
}

float math_point_segment_distance(const float a[3], const float b[3], const float p[3])
{
    float dx = b[0] - a[0], dy = b[1] - a[1], dz = b[2] - a[2];
    float ex, ey, ez;

    /* Past b: the nearest point is b. */
    if (((p[1] - b[1]) * dy + (p[0] - b[0]) * dx) + (p[2] - b[2]) * dz >= 0.0f) {
        float x = b[0] - p[0], y = b[1] - p[1], z = b[2] - p[2];
        return sqrt_float((y * y + x * x) + z * z);
    }

    ex = p[0] - a[0];
    ey = p[1] - a[1];
    ez = p[2] - a[2];
    if ((ey * dy + ex * dx) + ez * dz > 0.0f) {
        /* Beside the segment: subtract the part of a - p along it. */
        float length = sqrt_float((dy * dy + dx * dx) + dz * dz);
        float along;
        float x, y, z;

        if (is_zero_or_nan(length)) {
            dx = 0.0f;
            dy = 0.0f;
            dz = 0.0f;
        } else {
            float scale = 1.0f / length;
            dx *= scale;
            dy *= scale;
            dz *= scale;
        }
        along = -((ey * dy + ex * dx) + ez * dz);
        x = a[0] - (dx * along + p[0]);
        y = a[1] - (dy * along + p[1]);
        z = a[2] - (dz * along + p[2]);
        return sqrt_float((y * y + x * x) + z * z);
    }

    /* Before a (or not a number): the nearest point is a. */
    {
        float x = a[0] - p[0], y = a[1] - p[1], z = a[2] - p[2];
        return sqrt_float((y * y + x * x) + z * z);
    }
}

void math_mat4_ortho(float out[16], float left, float right, float bottom, float top,
                     float z_near, float z_far)
{
    float x_scale = 1.0f / (right - left);
    float y_scale = 1.0f / (top - bottom);
    float z_scale = 1.0f / (z_far - z_near);

    memset(out, 0, 16 * sizeof *out);
    out[0] = x_scale + x_scale;
    out[5] = y_scale + y_scale;
    out[10] = z_scale * -2.0f;
    out[12] = -((left + right) * x_scale);
    out[13] = -((bottom + top) * y_scale);
    out[14] = -((z_near + z_far) * z_scale);
    out[15] = 1.0f;
}

void math_quat_multiply(float out[4], const float a[4], const float b[4])
{
    float ax = a[0], ay = a[1], az = a[2], aw = a[3];
    float bx = b[0], by = b[1], bz = b[2], bw = b[3];

    /* All eight inputs are read before out is written, so out may be a or b. */
    out[0] = ((bx * aw + ax * bw) + bz * ay) - by * az;
    out[1] = ((by * aw - bz * ax) + ay * bw) + az * bx;
    out[2] = ((bz * aw + by * ax) - ay * bx) + az * bw;
    out[3] = ((aw * bw - bx * ax) - by * ay) - az * bz;
}

void math_quat_from_mat3(float q[4], const float m[9])
{
    float m0 = m[0], m4 = m[4], m8 = m[8];
    float trace = (m0 + m4) + m8, t, s;
    double inverse;

    /* the largest of w, x, y, z is taken from the diagonal, the others from
       sums and differences of the off-diagonal elements */
    if (trace >= 0.0f) {
        s = (float)(sqrt_double((double)(trace + 1.0f)) * 2.0);
        inverse = s > 0x1p-16f ? (double)(1.0f / s) : 0.0;
        q[3] = s * 0.25f;
        q[0] = (float)((double)(m[7] - m[5]) * inverse);
        q[1] = (float)((double)(m[2] - m[6]) * inverse);
        q[2] = (float)((double)(m[3] - m[1]) * inverse);
    } else if (m0 > m4 && m0 > m8) {
        t = max_float((m0 - m4) - m8, -1.0f) + 1.0f;
        s = (float)(sqrt_double((double)t) * 2.0);
        inverse = s > 0x1p-16f ? (double)(1.0f / s) : 0.0;
        q[0] = s * 0.25f;
        q[3] = (float)((double)(m[7] - m[5]) * inverse);
        q[1] = (float)((double)(m[3] + m[1]) * inverse);
        q[2] = (float)((double)(m[6] + m[2]) * inverse);
    } else if (m4 > m8) {
        t = max_float((m4 - m0) - m8, -1.0f) + 1.0f;
        s = (float)(sqrt_double((double)t) * 2.0);
        inverse = s > 0x1p-16f ? (double)(1.0f / s) : 0.0;
        q[3] = (float)((double)(m[2] - m[6]) * inverse);
        q[1] = s * 0.25f;
        q[0] = (float)((double)(m[3] + m[1]) * inverse);
        q[2] = (float)((double)(m[7] + m[5]) * inverse);
    } else {
        t = max_float((m8 - m0) - m4, -1.0f) + 1.0f;
        s = (float)(sqrt_double((double)t) * 2.0);
        inverse = s > 0x1p-16f ? (double)(1.0f / s) : 0.0;
        q[3] = (float)((double)(m[3] - m[1]) * inverse);
        q[0] = (float)((double)(m[6] + m[2]) * inverse);
        q[1] = (float)((double)(m[7] + m[5]) * inverse);
        q[2] = s * 0.25f;
    }
}

void math_mat3_from_quat(float m[9], const float q[4])
{
    float x = q[0], y = q[1], z = q[2], w = q[3];
    float xz2 = z * x + z * x, xx2 = x * x + x * x, xy2 = y * x + y * x, xw2 = x * w + x * w;
    float yw2 = y * w + y * w, zw2 = z * w + z * w, zz = z * z, yy2 = y * y + y * y, yz2 = z * y + z * y;

    m[0] = 1.0f - ((zz + zz) + yy2);
    m[1] = xy2 - zw2;
    m[3] = xy2 + zw2;
    m[2] = xz2 + yw2;
    m[5] = yz2 - xw2;
    m[6] = xz2 - yw2;
    m[7] = yz2 + xw2;
    m[4] = 1.0f - ((zz + zz) + xx2);
    m[8] = 1.0f - (yy2 + xx2);
}
