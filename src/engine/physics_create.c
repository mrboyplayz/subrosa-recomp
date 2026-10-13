/* Making bodies and the bonds that hold two bodies together. See
   physics_create.h. */
#include "physics_create.h"
#include <string.h>

int physics_create_body(int type, const float position[3], const float rotation[9], const float velocity[3],
                        float mass, const float inertia[3])
{
    PhysicsBody *body;
    int index = 0;

    while (physics_bodies[index].active) {
        if (++index >= PHYSICS_BODY_CAPACITY)
            return -1;
    }
    body = &physics_bodies[index];
    memset(&body->type, 0, sizeof *body - sizeof body->active);
    body->mass = mass;
    body->active = 1;
    body->type = type;
    body->unknown_ac[0] = 0.5f;
    body->unknown_ac[1] = 0.25f;
    body->unknown_ac[2] = 0.5f;
    memcpy(body->position, position, sizeof body->position);
    memcpy(body->rotation, rotation, sizeof body->rotation);
    if (velocity)
        memcpy(body->velocity, velocity, sizeof body->velocity);
    memcpy(body->inertia, inertia, sizeof body->inertia);
    for (int k = 0; k < 3; k++)
        body->inverse_inertia[k] = body->inertia[k] > 0.0f ? 1.0f / body->inertia[k] : 0.0f;
    /* The smallest of the three. */
    body->least_inertia = body->inertia[0];
    if (body->least_inertia > body->inertia[1])
        body->least_inertia = body->inertia[1];
    if (body->least_inertia > body->inertia[2])
        body->least_inertia = body->inertia[2];
    return index;
}

/* The first free bond, cleared and set up as a lasting bond of the given
   type between two bodies; -1 when all are taken. */
static int create_body_bond(int type, int body, int other_body, float stiffness, float damping)
{
    PhysicsBond *bond;
    int index = 0;

    while (physics_bonds[index].active) {
        if (++index >= PHYSICS_BOND_CAPACITY)
            return -1;
    }
    bond = &physics_bonds[index];
    memset(&bond->type, 0, sizeof *bond - sizeof bond->active);
    bond->active = 1;
    bond->type = type;
    bond->lifetime = 0x10000;
    bond->pass_mask = 0;
    bond->other_body = other_body;
    bond->body = body;
    bond->unknown_a0 = -1;
    bond->stiffness = stiffness;
    bond->damping = damping;
    memset(&physics_constraints[index], 0, sizeof physics_constraints[index]);
    return index;
}

int physics_create_rotation_bond(int body, int other_body)
{
    return create_body_bond(PHYSICS_BOND_ROTATION, body, other_body, 0.0625f, 0.125f);
}

int physics_create_point_bond(int body, int other_body, const float local_point[3], const float other_local_point[3])
{
    int index = create_body_bond(PHYSICS_BOND_BODIES, body, other_body, 0.25f, 0.375f);

    if (index != -1) {
        memcpy(physics_bonds[index].local_point, local_point, 3 * sizeof(float));
        memcpy(physics_bonds[index].other_local_point, other_local_point, 3 * sizeof(float));
    }
    return index;
}
