/* Netcode rotation encoding. See net_rotation.h.

   Encodes a rotation matrix's quaternion into packet integers: out[0] is
   the index of the dropped (largest) component, the following slots hold
   the quantized remaining three components. The largest component is found
   with strict comparisons that never update the index for a NaN operand
   (the original's seta/cmova after comisd), and the running maximum is
   MAXSD, whose second operand wins on NaN. */

#include <emmintrin.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>

#include "math3d.h"
#include "net_rotation.h"

/* MAXSD keeps its second operand when either input is NaN; C fmax() would
   return the non-NaN operand instead, so max through this helper. */
static double max_double(double a, double b)
{
    return _mm_cvtsd_f64(_mm_max_sd(_mm_set_sd(a), _mm_set_sd(b)));
}

void net_encode_rotation(int32_t out[4], const float matrix[9], int bits)
{
    const int32_t *order = net_rotation_order;
    float quaternion[4];
    double quantization_limit;
    double absolute_x;
    double absolute_y;
    double absolute_z;
    double absolute_w;
    double largest_xy_magnitude;
    double largest_xyz_magnitude;
    int largest_component_index;
    int encoded_count;

    math_quat_from_mat3(quaternion, matrix);

    absolute_y = fabs(quaternion[1]);
    absolute_z = fabs(quaternion[2]);
    absolute_x = fabs(quaternion[0]);

    largest_xy_magnitude = max_double(absolute_y, absolute_x);

    absolute_w = fabs(quaternion[3]);
    /* Strict comparisons: a NaN operand never updates the index, and the
       running maximum keeps its second operand on NaN (seta/cmova after
       comisd, MAXSD in the original). */
    largest_component_index = absolute_y > absolute_x ? 1 : 0;

    largest_xyz_magnitude = max_double(absolute_z, largest_xy_magnitude);

    if (absolute_z > largest_xy_magnitude)
        largest_component_index = 2;
    if (absolute_w > largest_xyz_magnitude)
        largest_component_index = 3;

    /* Canonical sign: negate the whole quaternion so the dropped component
       is non-negative. */
    if (quaternion[largest_component_index] < 0.0)
    {
        quaternion[0] = -quaternion[0];
        quaternion[1] = -quaternion[1];
        quaternion[2] = -quaternion[2];
        quaternion[3] = -quaternion[3];
    }

    encoded_count = 1;
    quantization_limit = (double)(1 << (bits - 1)) - 1.0;
    out[0] = largest_component_index;

    if (order[0] != largest_component_index)
    {
        encoded_count = 2;
        out[1] = (int32_t)(quaternion[order[0]] * 0.7071067811865476 * quantization_limit);
    }
    if (order[1] != largest_component_index)
        out[encoded_count++] = (int32_t)(quaternion[order[1]] * 0.7071067811865476 * quantization_limit);
    if (order[2] != largest_component_index)
        out[encoded_count++] = (int32_t)(quaternion[order[2]] * 0.7071067811865476 * quantization_limit);
    /* The final table entry writes without advancing the count. */
    if (order[3] != largest_component_index)
        out[encoded_count] = (int32_t)(quaternion[order[3]] * 0.7071067811865476 * quantization_limit);
}

void net_encode_rotation_13bit(int32_t out[4], const float matrix[9])
{
    const int32_t *order = net_rotation_order_13bit;
    float quaternion[4];
    double absolute_x;
    double absolute_y;
    double absolute_z;
    double absolute_w;
    double largest_xy_magnitude;
    double largest_xyz_magnitude;
    int largest_component_index;
    int encoded_count;

    math_quat_from_mat3(quaternion, matrix);

    absolute_y = fabs(quaternion[1]);
    absolute_z = fabs(quaternion[2]);
    absolute_x = fabs(quaternion[0]);

    largest_xy_magnitude = max_double(absolute_y, absolute_x);

    absolute_w = fabs(quaternion[3]);
    /* Strict comparisons: a NaN operand never updates the index, and the
       running maximum keeps its second operand on NaN (seta/cmova after
       comisd, MAXSD in the original). */
    largest_component_index = absolute_y > absolute_x ? 1 : 0;

    largest_xyz_magnitude = max_double(absolute_z, largest_xy_magnitude);

    if (absolute_z > largest_xy_magnitude)
        largest_component_index = 2;
    if (absolute_w > largest_xyz_magnitude)
        largest_component_index = 3;

    /* Canonical sign: negate the whole quaternion so the dropped component
       is non-negative. */
    if (quaternion[largest_component_index] < 0.0)
    {
        quaternion[0] = -quaternion[0];
        quaternion[1] = -quaternion[1];
        quaternion[2] = -quaternion[2];
        quaternion[3] = -quaternion[3];
    }

    encoded_count = 1;
    out[0] = largest_component_index;

    if (order[0] != largest_component_index)
    {
        encoded_count = 2;
        out[1] = (int32_t)(quaternion[order[0]] * 5791.911644699011);
    }
    if (order[1] != largest_component_index)
        out[encoded_count++] = (int32_t)(quaternion[order[1]] * 5791.911644699011);
    if (order[2] != largest_component_index)
        out[encoded_count++] = (int32_t)(quaternion[order[2]] * 5791.911644699011);
    /* The final table entry writes without advancing the count. */
    if (order[3] != largest_component_index)
        out[encoded_count] = (int32_t)(quaternion[order[3]] * 5791.911644699011);
}
