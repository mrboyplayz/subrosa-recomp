/* The near/far factor between two points. See distance_class.h.
 *
 * The original at 0x140019000, instruction for instruction:
 *
 *   d = sqrtss((to[1]-from[1])^2 + (to[0]-from[0])^2 + (to[2]-from[2])^2)
 *   comiss d, 128.0
 *   jbe near
 *   return 0.5
 * near:
 *   return level_line_test(from, to, 0) ? 0.5 : 1.0
 *
 * The squares are summed in the order (x + y) + z with single-precision
 * adds, which is why the adds are written out rather than folded.
 *
 * JBE after COMISS is taken when CF or ZF is set. A NaN operand sets CF, so
 * an unordered distance takes the NEAR branch. The decompiled C in
 * src/client compared with `<=`, which is false for NaN and would take the
 * far branch instead; this port follows the flags, not that. */
#include "arith.h"
#include "distance_class.h"

/* The level's line test (0x1400DC050), resolved at its original address by
   the comparison harness and linked in the client build. */
extern int sub_1400DC050(float *from, float *to, int unknown);

#define NEAR_FACTOR 1.0f
#define FAR_FACTOR 0.5f
#define NEAR_LIMIT 128.0f

float distance_class_factor(const float *from, const float *to)
{
    float delta_x = to[0] - from[0];
    float delta_y = to[1] - from[1];
    float delta_z = to[2] - from[2];
    float distance;

    /* sqrtss of the scalar sum: sqrt_float is the same instruction. */
    distance = sqrt_float((float)((float)(delta_y * delta_y) + (float)(delta_x * delta_x))
                          + (float)(delta_z * delta_z));

    /* Not `distance > NEAR_LIMIT` inverted by hand: an ordered > is false
       for NaN, so the negated form puts NaN on the near branch, as JBE
       does. */
    if (!(distance > NEAR_LIMIT))
        return sub_1400DC050((float *)from, (float *)to, 0) ? FAR_FACTOR : NEAR_FACTOR;
    return FAR_FACTOR;
}
