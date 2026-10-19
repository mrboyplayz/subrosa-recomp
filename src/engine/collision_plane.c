#include "collision.h"
#include "arith.h"

uint32_t collision_segment_plane(float point[3], const float normal[3], float *fraction,
                                  const float from[3], const float to[3], const float plane[3])
{
    float start_distance = ((plane[0] - from[0]) * normal[0]
                           + (plane[1] - from[1]) * normal[1])
                           + (plane[2] - from[2]) * normal[2];
    /* Native computes this distance before any same-side early exit. */
    volatile float end_distance = ((plane[1] - to[1]) * normal[1]
                                  + (plane[0] - to[0]) * normal[0])
                                  + (plane[2] - to[2]) * normal[2];
    if (!(start_distance > 0.0f)) {
        if (!(start_distance >= 0.0f) && !(end_distance >= 0.0f)) return 0;
    } else if (end_distance > 0.0f) return 0;
    *fraction = start_distance;
    float dx = to[0] - from[0], dy = to[1] - from[1], dz = to[2] - from[2];
    float denominator = (dy * normal[1] + dx * normal[0]) + dz * normal[2];
    if (is_zero_or_nan_quiet(denominator)) return 0;
    float t = start_distance / denominator;
    *fraction = t;
    point[0] = t * dx + from[0];
    point[1] = t * dy + from[1];
    point[2] = t * dz + from[2];
    return 1;
}
