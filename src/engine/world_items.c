/* Items in the world. See world.h. */
#include "arith.h"
#include "physics.h"
#include "world.h"

/* Whether something moving from one point to the other passes through the
   level; still recompiled code. */
extern int sub_1400DC050(float *from, float *to, int unknown);

void world_update_item_bounds(void)
{
    for (int index = 0; index < WORLD_ITEM_CAPACITY; index++) {
        WorldItem *item = &world_items[index];
        PhysicsBody *body;
        const WorldItemType *type;

        if (!item->active || !item->physics_simulated)
            continue;

        for (int i = 0; i < 3; i++)
            item->previous_position[i] = item->position[i];
        body = &physics_bodies[item->body];
        for (int i = 0; i < 3; i++)
            item->position[i] = body->position[i];
        for (int i = 0; i < 3; i++)
            item->velocity[i] = body->velocity[i];
        for (int i = 0; i < 9; i++)
            item->rotation[i] = body->rotation[i];
        for (int i = 0; i < 3; i++)
            item->angular_velocity[i] = body->angular_velocity[i];

        /* An item that went through the level keeps only part of the way. */
        if (sub_1400DC050(item->previous_position, item->position, 1)) {
            float dx = item->position[0] - item->previous_position[0];
            float dy = item->position[1] - item->previous_position[1];
            float dz = item->position[2] - item->previous_position[2];
            float part = world_unknown_151a84898 * 0.975f;
            float x = dx * part + item->previous_position[0];
            float y = dy * part + item->previous_position[1];
            float z = dz * part + item->previous_position[2];

            item->position[0] = x;
            body->position[0] = x;
            item->position[1] = y;
            body->position[1] = y;
            item->position[2] = z;
            body->position[2] = z;
        }

        for (int i = 0; i < 3; i++) {
            item->bounds_min[i] = 65536.0f;
            item->bounds_max[i] = -65536.0f;
        }
        type = &world_item_types[item->type];
        for (int point = 0; point < type->bound_point_count; point++) {
            const float *p = &type->bound_points[point * 3];
            const float *r = item->rotation;
            float world[3];

            world[0] = ((p[0] * r[0] + item->position[0]) + p[1] * r[3]) + p[2] * r[6];
            world[1] = ((p[0] * r[1] + item->position[1]) + p[1] * r[4]) + p[2] * r[7];
            world[2] = ((p[0] * r[2] + item->position[2]) + p[1] * r[5]) + p[2] * r[8];
            /* A coordinate that is not a number leaves the minimum alone
               and becomes the maximum. */
            for (int i = 0; i < 3; i++) {
                if (item->bounds_min[i] > world[i])
                    item->bounds_min[i] = world[i];
                if (!(item->bounds_max[i] >= world[i]))
                    item->bounds_max[i] = world[i];
            }
        }

        /* Voxels are four units wide. */
        for (int i = 0; i < 3; i++) {
            item->voxel_min[i] = truncate_float(item->bounds_min[i] * 0.25f);
            item->voxel_max[i] = truncate_float(item->bounds_max[i] * 0.25f);
        }
    }
}
