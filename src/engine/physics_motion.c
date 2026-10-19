/* Sliding limits and velocity at a point on a rigid body. See physics.h. */
#include "arith.h"
#include "physics.h"

static float limit_slide(float velocity[3], const float normal[3], float friction,
                         int capped, float max_slide)
{
    float x = velocity[0], y = velocity[1], z = velocity[2];
    float along = (y * normal[1] + normal[0] * x) + z * normal[2];

    /* Store the projection in the original order. normal may overlap
       velocity, so its later components must be read after these writes. */
    float px = normal[0] * along;
    velocity[0] = px;
    float tx = x - px;
    float py = along * normal[1];
    float ty = y - py;
    velocity[1] = py;
    float pz = along * normal[2];
    float tz = z - pz;
    velocity[2] = pz;

    float slide = sqrt_float((ty * ty + tx * tx) + tz * tz);
    /* COMISS/JBE in the original also stops here for NaN. The projection
       above has already been written, even on this early return. */
    if (!(slide > 0.0f))
        return 0.0f;

    float reciprocal = 1.0f / slide;
    tx = tx * reciprocal;
    ty = ty * reciprocal;
    tz = tz * reciprocal;
    float normal_speed = sqrt_float((px * px + py * py) + pz * pz);
    float friction_limit = normal_speed * friction;
    float work = 0.0f;
    if (slide > friction_limit) {
        work = ((slide - friction_limit) * normal_speed) * 480.0f;
        slide = friction_limit;
    }
    if (capped && slide > max_slide) {
        work = work + ((slide - max_slide) * normal_speed) * 480.0f;
        slide = max_slide;
    }
    velocity[0] = tx * slide + px;
    velocity[1] = ty * slide + py;
    velocity[2] = tz * slide + pz;
    return work;
}

float physics_limit_slide(float velocity[3], const float normal[3], float friction)
{
    return limit_slide(velocity, normal, friction, 0, 0.0f);
}

float physics_limit_slide_capped(float velocity[3], const float normal[3],
                                float friction, float max_slide)
{
    return limit_slide(velocity, normal, friction, 1, max_slide);
}

PhysicsBody *physics_apply_point_velocity(int index, const float offset[3], const float change[3])
{
    PhysicsBody *body = &physics_bodies[index];
    body->velocity[0] = body->velocity[0] + change[0];
    body->velocity[1] = body->velocity[1] + change[1];
    body->velocity[2] = body->velocity[2] + change[2];

    /* Both inputs may refer to the body. Read them after the linear change
       and keep all six components before writing angular momentum. */
    float ry = offset[1], rz = offset[2], rx = offset[0];
    float dy = change[1], dz = change[2], dx = change[0];
    float ax = rz * dy - ry * dz;
    float ay = rx * dz - rz * dx;
    float az = ry * dx - rx * dy;
    body->angular_momentum[0] = ax + body->angular_momentum[0];
    body->angular_momentum[1] = ay + body->angular_momentum[1];
    body->angular_momentum[2] = az + body->angular_momentum[2];
    return physics_bodies;
}

PhysicsBody *physics_point_velocity(float out[3], int index, const float offset[3])
{
    const PhysicsBody *body = &physics_bodies[index];
    float rz = offset[2], ry = offset[1], rx = offset[0];
    float wx = body->angular_velocity[0];
    float wy = body->angular_velocity[1];
    float wz = body->angular_velocity[2];
    float vx = ry * wz - rz * wy;
    float vy = wx * rz - rx * wz;
    float vz = rx * wy - wx * ry;

    /* The angular part is captured before any output; the body's linear
       velocity is read per component, including when out overlaps it. */
    out[0] = vx + body->velocity[0];
    out[1] = vy + body->velocity[1];
    out[2] = vz + body->velocity[2];
    return physics_bodies;
}
