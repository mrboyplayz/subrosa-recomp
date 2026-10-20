/* Translation and rotation stage, 0x14012B220. The rotation boundary stays
 * shared with the full tick and the original client entry point. */
#include "physics.h"
extern void sr_physics_integrate_rotation(float *rotation, float *angular_momentum,
                          float *angular_velocity, float *inverse_inertia);

void physics_integrate_bodies(void)
{
    for (int index = 0; index < PHYSICS_BODY_CAPACITY; ++index) {
        PhysicsBody *body = &physics_bodies[index];
        if (!body->active || body->settled) continue;
        float vy = body->velocity[1] - 0.0027222224f;
        body->velocity[1] = vy;
        body->position[0] = body->velocity[0] + body->position[0];
        body->position[1] = vy + body->position[1];
        body->position[2] = body->velocity[2] + body->position[2];
        sr_physics_integrate_rotation(body->rotation, body->angular_momentum,
                     body->angular_velocity, body->inverse_inertia);
    }
}
