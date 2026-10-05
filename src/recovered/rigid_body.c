#include "rigid_body.h"
#include <string.h>

int32_t sr_rigid_body_create(SrRigidBody bodies[SR_RIGID_BODY_COUNT], uint32_t kind,
    const SrCVector3 *position, const SrCOrientation *orientation,
    const SrCVector3 *velocity, float mass, const SrCVector3 *scale) {
    int32_t index = 0;
    while (index < SR_RIGID_BODY_COUNT && bodies[index].active) ++index;
    if (index == SR_RIGID_BODY_COUNT) return -1;
    SrRigidBody *body = &bodies[index];
    memset((unsigned char *)body + 4, 0, sizeof(*body) - 4);
    body->mass = mass;
    body->active = 1;
    body->kind = kind;
    body->parameter_ac = 0.5f;
    body->parameter_b0 = 0.25f;
    body->parameter_b4 = 0.5f;
    body->position = *position;
    body->orientation = *orientation;
    if (velocity) body->velocity = *velocity;
    body->scale = *scale;
    /* COMISS/JBE in the executable takes the zero branch for unordered NaN
       as well as nonpositive values; IDA's <= pseudocode loses this case. */
    body->reciprocal_scale.x = body->scale.x > 0 ? 1.0f / body->scale.x : 0.0f;
    body->reciprocal_scale.y = body->scale.y > 0 ? 1.0f / body->scale.y : 0.0f;
    body->reciprocal_scale.z = body->scale.z > 0 ? 1.0f / body->scale.z : 0.0f;
    body->minimum_scale = body->scale.x;
    if (body->minimum_scale > body->scale.y) body->minimum_scale = body->scale.y;
    if (body->minimum_scale > body->scale.z) body->minimum_scale = body->scale.z;
    return index;
}
