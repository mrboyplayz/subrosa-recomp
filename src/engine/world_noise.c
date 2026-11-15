/* World noise: the cosine fade between two values and the 2D value noise
 * over the unit square around a point. Both are pure routines; the shapes
 * below are the original's, verified by the worldnoise native suite: the
 * fade computes its cosine weight in double precision and everything after
 * it in float, and the noise truncates its coordinates (only the +1
 * coordinates are also masked with the seed), hashes each corner, scales
 * every corner's word into [0, 2) and mixes the four complements with
 * double-precision cosine weights.
 */
#include <stdint.h>
#include <emmintrin.h>
#include "arith.h"
#include "crt.h"

/* The cosine weight of the fade, in double precision; the caller's
   remaining arithmetic is float. 0x140038480 */
float noise_cosine_mix(float from, float to, float lane)
{
    double cosine = (1.0 - crt_cos((double)lane * 3.14159265359)) * 0.5;
    float mix = (float)cosine;
    return (1.0f - mix) * from + to * mix;
}

/* One corner's random value: the integer hash of 57*y + x, squared twice
   with the original's constants (0x3D73, 0xC0AE5, 0x2DF722F3), its sign bit
   cleared, and the word scaled by 2^-30 into [0, 2). */
static float noise_corner_random(uint32_t tx, uint32_t ty)
{
    uint32_t mixed = 57u * ty + tx;
    mixed ^= mixed << 13;
    uint32_t scaled = mixed * mixed * 15731u + 789221u;
    scaled = scaled * scaled - 771171059u;
    return (float)(int32_t)(scaled & 0x7FFFFFFFu) * 0x1p-30f;
}

/* The value noise: one random value per corner of the unit square, mixed
   with the double-precision cosine weights of the fractional parts.
   Returns the value in lane 0 and zeroes in the other three lanes, as the
   original's XMM return does. 0x1400384F0 */
__m128 noise_value_2d(float x, float y, int seed)
{
    uint32_t s = (uint32_t)seed;
    int xi = truncate_float(x);
    int yi = truncate_float(y);
    uint32_t x1 = ((uint32_t)xi + 1u) & s;
    uint32_t y1 = ((uint32_t)yi + 1u) & s;

    float frac_x = x - (float)xi;
    float frac_y = y - (float)yi;
    float wx = (float)((1.0 - crt_cos((double)frac_x * 3.14159265359)) * 0.5);
    float wy = (float)((1.0 - crt_cos((double)frac_y * 3.14159265359)) * 0.5);

    float r00 = noise_corner_random((uint32_t)xi, (uint32_t)yi);
    float r10 = noise_corner_random(x1, (uint32_t)yi);
    float r01 = noise_corner_random((uint32_t)xi, y1);
    float r11 = noise_corner_random(x1, y1);

    float top = (1.0f - r10) * wx + (1.0f - r00) * (1.0f - wx);
    top *= 1.0f - wy;
    float bottom = (1.0f - r11) * wx + (1.0f - r01) * (1.0f - wx);
    bottom *= wy;
    float value = top + bottom;
    return _mm_set_ps(0.0f, 0.0f, 0.0f, value);
}
