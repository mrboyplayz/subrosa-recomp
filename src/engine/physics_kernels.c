#include "physics_kernels.h"
#include "arith.h"

const float *physics_apply_inverse_inertia(float out[3], const float vector[3],
                                          const float basis[9], const float diagonal[3])
{
    out[0] = out[1] = out[2] = 0.0f;
    float row_x = basis[0];
    float weight = ((basis[1] * vector[1] + row_x * vector[0]) + vector[2] * basis[2]) * diagonal[0];
    float x = row_x * weight;
    out[0] = x;
    float y = weight * basis[1];
    out[1] = y;
    float z = weight * basis[2];
    out[2] = z;

    row_x = basis[3];
    weight = ((basis[4] * vector[1] + row_x * vector[0]) + basis[5] * vector[2]) * diagonal[1];
    x = row_x * weight + x;
    out[0] = x;
    y = weight * basis[4] + y;
    out[1] = y;
    z = weight * basis[5] + z;
    out[2] = z;

    row_x = basis[6];
    weight = ((basis[7] * vector[1] + row_x * vector[0]) + basis[8] * vector[2]) * diagonal[2];
    out[0] = row_x * weight + x;
    out[1] = weight * basis[7] + y;
    out[2] = weight * basis[8] + z;
    return diagonal;
}

const float *physics_apply_inverse_inertia4(float out[4], const float vector[4],
                                           const float basis[10], const float diagonal[4])
{
    __m128 row0 = _mm_loadu_ps(basis);
    __m128 row1 = _mm_loadu_ps(basis + 3);
    __m128 row2 = _mm_loadu_ps(basis + 6);
    __m128 pair = _mm_unpacklo_ps(row0, row1);
    __m128 v = _mm_load_ps(vector);
    __m128 x = _mm_mul_ps(_mm_shuffle_ps(v, v, 0), _mm_movelh_ps(pair, row2));
    __m128 y = _mm_mul_ps(_mm_shuffle_ps(v, v, 85), _mm_shuffle_ps(pair, row2, 30));
    __m128 z = _mm_mul_ps(_mm_shuffle_ps(v, v, 170),
                         _mm_shuffle_ps(_mm_unpackhi_ps(row0, row1), row2, 36));
    __m128 weights = _mm_mul_ps(_mm_add_ps(_mm_add_ps(y, x), z), _mm_load_ps(diagonal));
    __m128 a = _mm_mul_ps(_mm_shuffle_ps(weights, weights, 0), row0);
    __m128 b = _mm_mul_ps(_mm_shuffle_ps(weights, weights, 85), row1);
    __m128 c = _mm_mul_ps(_mm_shuffle_ps(weights, weights, 170), row2);
    _mm_store_ps(out, _mm_add_ps(_mm_add_ps(b, a), c));
    return diagonal;
}

float physics_sphere_exit_distance(const float offset[3], const float direction[3], float radius)
{
    float x = offset[0], y = offset[1], z = offset[2];
    float along = (y * direction[1] + x * direction[0]) + z * direction[2];
    float squared = (x * x + y * y) + z * z;
    return sqrt_float(radius * radius - (squared - along * along)) - along;
}

__m128 physics_sphere_entry_distance(const float offset[3], const float direction[3], float radius)
{
    float x = offset[0], y = offset[1], z = offset[2];
    float along = -((y * direction[1] + x * direction[0]) + z * direction[2]);
    float squared = (x * x + y * y) + z * z;
    float distance = along - sqrt_float(radius * radius - (squared - along * along));
    return _mm_move_ss(_mm_set1_ps(-0.0f), _mm_set_ss(distance));
}
