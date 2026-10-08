/* Rotation of a body over one tick (0x14012B2D0). See physics.h. */
#include "arith.h"
#include "math3d.h"
#include "physics.h"

#define SMALLEST_TURN 0x1p-16f   /* angles up to this are not applied */
#define ONE_SIXTH     0x1.555556p-3f
#define ONE_36TH      0x1.c71c74p-6f

/* Angular velocity in world axes of a body with orientation m: the angular
   momentum taken into the body's axes, scaled by the inverse inertia about
   each, and taken back. */
static void angular_velocity_at(float out[3], const float m[9], const float momentum[3],
                                const float inverse_inertia[3])
{
    float a = ((m[1] * momentum[1] + m[0] * momentum[0]) + m[2] * momentum[2]) * inverse_inertia[0];
    float b = ((m[4] * momentum[1] + m[3] * momentum[0]) + m[5] * momentum[2]) * inverse_inertia[1];
    float c = ((m[7] * momentum[1] + m[6] * momentum[0]) + m[8] * momentum[2]) * inverse_inertia[2];

    out[0] = (m[0] * a + m[3] * b) + m[6] * c;
    out[1] = (m[4] * b + m[1] * a) + m[7] * c;
    out[2] = (m[5] * b + m[2] * a) + m[8] * c;
}

static float length(const float v[3])
{
    return sqrt_float((v[0] * v[0] + v[1] * v[1]) + v[2] * v[2]);
}

/* out = rotation turned by the given part of a tick at angular velocity w. */
static void turned(float out[9], const float rotation[9], const float w[3], float speed, float part)
{
    float axis[3], inverse;

    for (int i = 0; i < 9; i++)
        out[i] = rotation[i];
    if (!(speed > SMALLEST_TURN))
        return;
    inverse = 1.0f / speed;
    axis[0] = inverse * w[0];
    axis[1] = inverse * w[1];
    axis[2] = inverse * w[2];
    math_mat3_rotate_rows(out, axis, speed * part);
}

void physics_integrate_rotation(float rotation[9], const float angular_momentum[3],
                                float angular_velocity[3], const float inverse_inertia[3])
{
    float k1[3], k2[3], k3[3], w[3], step[3], sample[9];
    float speed, a, b, c;

    /* Fourth-order Runge-Kutta over the tick: the angular velocity at the
       start, twice at the middle and once at the end. */
    angular_velocity_at(k1, rotation, angular_momentum, inverse_inertia);
    turned(sample, rotation, k1, length(k1), 0.5f);
    angular_velocity_at(k2, sample, angular_momentum, inverse_inertia);
    turned(sample, rotation, k2, length(k2), 0.5f);
    angular_velocity_at(k3, sample, angular_momentum, inverse_inertia);
    turned(sample, rotation, k3, length(k3), 1.0f);

    /* The velocity at the end is summed together with the other three:
       k1 + 2 k2 + 2 k3 + k4, in this order. */
    a = ((sample[1] * angular_momentum[1] + sample[0] * angular_momentum[0]) + sample[2] * angular_momentum[2])
        * inverse_inertia[0];
    b = ((sample[4] * angular_momentum[1] + sample[3] * angular_momentum[0]) + sample[5] * angular_momentum[2])
        * inverse_inertia[1];
    c = ((sample[7] * angular_momentum[1] + sample[6] * angular_momentum[0]) + sample[8] * angular_momentum[2])
        * inverse_inertia[2];
    w[0] = ((sample[0] * a + sample[3] * b) + (sample[6] * c + k1[0])) + ((k3[0] + k3[0]) + (k2[0] + k2[0]));
    w[1] = ((sample[4] * b + sample[1] * a) + (sample[7] * c + k1[1])) + ((k3[1] + k3[1]) + (k2[1] + k2[1]));
    w[2] = ((sample[5] * b + sample[2] * a) + (sample[8] * c + k1[2])) + ((k3[2] + k3[2]) + (k2[2] + k2[2]));

    step[0] = w[0] * ONE_SIXTH;
    step[1] = w[1] * ONE_SIXTH;
    step[2] = w[2] * ONE_SIXTH;
    angular_velocity[0] = step[0];
    angular_velocity[1] = step[1];
    angular_velocity[2] = step[2];

    speed = sqrt_float(((w[1] * w[1] + w[0] * w[0]) + w[2] * w[2]) * ONE_36TH);
    if (speed > SMALLEST_TURN) {
        float axis[3], inverse = 1.0f / speed;

        axis[0] = inverse * step[0];
        axis[1] = inverse * step[1];
        axis[2] = inverse * step[2];
        math_mat3_rotate_rows(rotation, axis, speed);
    }
}
