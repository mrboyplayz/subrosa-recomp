/* Alternative encoder draft (shared body with a flag), cross-check only.
   The recommended port is net_rotation.c (draft A). Both are semantically
   identical; keep this file only to diff against draft A while reviewing. */

#include <emmintrin.h>
#include <math.h>
#include <stdint.h>

#include "math3d.h"
#include "net_rotation.h"

/*
 * x86 MAXSD semantics: when either operand is NaN the result is the SECOND
 * operand. C fmax() returns the non-NaN operand instead, which would change
 * behavior on NaN inputs, so the max must go through MAXSD.
 */
static double maxsd(double a, double b)
{
    return _mm_cvtsd_f64(_mm_max_sd(_mm_set_sd(a), _mm_set_sd(b)));
}

/*
 * Shared body of both variants. The general variant scales each component by
 * 1/sqrt(2) and then by the quantization limit (two multiplies, in that
 * order); the 13-bit variant applies its fixed multiplier in a single
 * multiply. The split is required: floating-point multiplies do not
 * associate, so a precombined scale would not be bit-exact.
 */
static void encode_rotation(int32_t out[4],
                            const float matrix[9],
                            const int32_t *order,
                            double multiplier,
                            double quantization_limit,
                            int use_quantization_limit)
{
    float quaternion[4];
    math_quat_from_mat3(quaternion, matrix);

    double absolute_quaternion_y = fabs((double)quaternion[1]);
    double absolute_quaternion_z = fabs((double)quaternion[2]);
    double absolute_quaternion_x = fabs((double)quaternion[0]);
    double absolute_quaternion_w = fabs((double)quaternion[3]);

    int y_is_smaller_than_x = absolute_quaternion_y < absolute_quaternion_x;
    int y_equals_x = absolute_quaternion_y == absolute_quaternion_x;
    double largest_xy_magnitude = maxsd(absolute_quaternion_y,
                                        absolute_quaternion_x);

    int largest_component_index = !y_is_smaller_than_x && !y_equals_x;

    int z_fits_xy_maximum = absolute_quaternion_z <= largest_xy_magnitude;
    double largest_xyz_magnitude = maxsd(absolute_quaternion_z,
                                         largest_xy_magnitude);

    if (!z_fits_xy_maximum)
        largest_component_index = 2;
    if (absolute_quaternion_w > largest_xyz_magnitude)
        largest_component_index = 3;

    /* The original XORs the sign bit of all four lanes at once; plain IEEE
       negation is exactly equivalent, -0.0 included. */
    if (quaternion[largest_component_index] < 0.0f) {
        for (int i = 0; i < 4; i++)
            quaternion[i] = -quaternion[i];
    }

    int encoded_component_count = 1;
    out[0] = largest_component_index;

    /* Every table slot whose entry differs from the largest component index
       contributes one encoded value. The final slot writes without bumping
       the count, exactly as in the original. */
    if (order[0] != largest_component_index) {
        double scaled = (double)quaternion[order[0]] * multiplier;
        if (use_quantization_limit)
            scaled = scaled * quantization_limit;
        encoded_component_count = 2;
        out[1] = (int32_t)scaled;
    }
    if (order[1] != largest_component_index) {
        double scaled = (double)quaternion[order[1]] * multiplier;
        if (use_quantization_limit)
            scaled = scaled * quantization_limit;
        out[encoded_component_count++] = (int32_t)scaled;
    }
    if (order[2] != largest_component_index) {
        double scaled = (double)quaternion[order[2]] * multiplier;
        if (use_quantization_limit)
            scaled = scaled * quantization_limit;
        out[encoded_component_count++] = (int32_t)scaled;
    }
    if (order[3] != largest_component_index) {
        double scaled = (double)quaternion[order[3]] * multiplier;
        if (use_quantization_limit)
            scaled = scaled * quantization_limit;
        out[encoded_component_count] = (int32_t)scaled;
    }
}

void net_encode_rotation(int32_t out[4], const float matrix[9], int bits)
{
    encode_rotation(out, matrix, net_rotation_order,
                    0.7071067811865476,
                    (double)(1 << (bits - 1)) - 1.0,
                    1);
}

void net_encode_rotation_13bit(int32_t out[4], const float matrix[9])
{
    encode_rotation(out, matrix, net_rotation_order_13bit,
                    5791.911644699011,
                    0.0,
                    0);
}
