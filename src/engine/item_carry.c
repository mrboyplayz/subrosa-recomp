/* Items carried on a human's body (0x1401380F0). See item.h. */
#include "human.h"
#include "item.h"
#include "physics.h"

#define HUMAN_BONE_PELVIS 0
#define HUMAN_BONE_CHEST 2

void item_follow_body(int index, int human)
{
    WorldItem *item = &world_items[index];
    if ((uint32_t)item->slot <= 1u)
        return;

    const WorldHuman *h = &world_humans[human];
    const HumanBone *chest = &h->bones[HUMAN_BONE_CHEST];
    const HumanBone *pelvis = &h->bones[HUMAN_BONE_PELVIS];
    const float *r = chest->rotation;

    item->rotation[0] = r[0];
    item->rotation[1] = r[1];
    item->rotation[2] = r[2];
    item->rotation[3] = -r[6];
    item->rotation[4] = -r[7];
    item->rotation[5] = -r[8];
    item->rotation[6] = r[3];
    item->rotation[7] = r[4];
    item->rotation[8] = r[5];

    for (int axis = 0; axis < 3; axis++)
        item->position[axis] = chest->position[axis] - item->rotation[3 + axis] * 0.25f;
    for (int axis = 0; axis < 3; axis++)
        item->position[axis] = item->rotation[axis] * 0.125f + item->position[axis];

    for (int axis = 0; axis < 3; axis++)
        item->previous_position[axis] = pelvis->position[axis];
    if (h->vehicle != -1)
        for (int axis = 0; axis < 3; axis++)
            item->previous_position[axis] = physics_vehicles[h->vehicle].position[axis];

    PhysicsBody *body = &physics_bodies[item->body];
    for (int axis = 0; axis < 3; axis++) {
        item->velocity[axis] = pelvis->velocity[axis];
        body->velocity[axis] = pelvis->velocity[axis];
        body->angular_momentum[axis] = 0.0f;
        body->angular_velocity[axis] = 0.0f;
    }
}
