/* A random point of the unit circle scaled by a random length, from the
 * shared noise generator (math_noise_next, three draws). The first two draws
 * are the point's coordinates, taken as numbers in (-1, 1] and normalized
 * (a zero length leaves zeros); the third scales the point to
 * ((n + 1) * length) * 0.5 + add. 0x1400A5510 */
#include "arith.h"
#include "math3d.h"

static float noise(void)
{
    return 1.0f - (float)math_noise_next() * 9.3132257e-10f;
}

void math_random_direction_2d(float out[2], float length, float add)
{
    float x, y, norm;

    out[0] = noise();
    y = noise();
    x = out[0];
    norm = sqrt_float(x * x + y * y);
    if (norm == 0.0f) {
        x = 0.0f;
        y = 0.0f;
    } else {
        float inverse = 1.0f / norm;
        y = y * inverse;
        x = x * inverse;
    }
    out[0] = x;
    out[1] = y;
    {
        float scale = ((noise() + 1.0f) * length) * 0.5f + add;
        out[1] = scale * out[1];
        out[0] = scale * out[0];
    }
}
