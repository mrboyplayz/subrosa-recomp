/* Items in the world. See world.h. */
#include "arith.h"
#include "physics.h"
#include "frame.h"
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

/* Still recompiled code, run when an item is removed. */
extern long long sub_1400CDFF0(int item);

void world_remove_item(int index)
{
    WorldItem *item;
    int32_t connected;

    if ((uint32_t)index > 0x3FF)
        return;
    item = &world_items[index];
    if (item->unknown_318 && item->unknown_138 > 0)
        sub_1400CDFF0(index);
    if (item->type == WORLD_ITEM_TYPE_29)
        world_item_29_count = subtract_int(world_item_29_count, 1);
    if (item->holder != -1)
        world_take_item(index, item->holder, item->slot);

    connected = game_connected;
    while (item->child_count > 0) {
        int32_t child;

        item->child_count--;
        child = item->children[item->child_count];
        world_items[child].parent = -1;
        if (connected && (uint32_t)child <= 0x3FF)
            world_item_change_count(child) = add_int(world_item_change_count(child), 1);
    }
    if (item->parent != -1)
        world_detach_item(index, item->parent);

    for (int n = 0; n < 64; n++) {
        if (item->link_mask[n >> 5] & (1u << (n & 31)))
            world_unknown_1857bd740(item->links[n]) = 0;
    }
    if (item->type == WORLD_ITEM_TYPE_27) {
        int32_t vehicle = world_item_vehicle(index);
        if ((uint32_t)vehicle <= 0x1FF)
            world_vehicle_lifetime(vehicle) = 0;
    }
    if ((uint32_t)item->body < PHYSICS_BODY_CAPACITY)
        physics_bodies[item->body].active = 0;
    item->active = 0;
    if (connected)
        world_item_change_count(index) = add_int(world_item_change_count(index), 1);
}

void world_detach_item(int index, int parent)
{
    WorldItem *p = &world_items[parent];
    int32_t connected;
    int i = 0;

    if (p->child_count <= 0)
        return;
    connected = game_connected;
    do {
        if (p->children[i] == index) {
            int32_t last = p->child_count;
            p->child_count = last - 1;
            p->children[i] = p->children[last - 1];
            world_items[index].parent = -1;
            if (connected) {
                if ((uint32_t)index <= 0x3FF)
                    world_item_change_count(index) = add_int(world_item_change_count(index), 1);
                if ((uint32_t)parent <= 0x3FF)
                    world_item_change_count(parent) = add_int(world_item_change_count(parent), 1);
            }
        } else {
            i++;
        }
    } while (i < p->child_count);
}

void world_take_item(int index, int human_index, int slot)
{
    WorldItem *item;
    const WorldHuman *human;
    const HumanBone *chest;
    HumanHand *hand;
    int32_t connected;
    int i = 0;

    if (index == -1 || human_index == -1)
        return;
    item = &world_items[index];
    human = &world_humans[human_index];
    chest = &human->bones[HUMAN_BONE_CHEST];
    if (item->slot >= 2) {
        float x = chest->position[0] - chest->rotation[3] * 0.25f;
        float y = chest->position[1] - chest->rotation[4] * 0.25f;
        float z = chest->position[2] - chest->rotation[5] * 0.25f;
        PhysicsBody *body;

        item->position[0] = x;
        item->position[1] = y;
        item->position[2] = z;
        body = &physics_bodies[item->body];
        body->position[0] = x;
        body->position[1] = y;
        body->position[2] = z;
    }
    item->previous_position[0] = chest->position[0];
    item->previous_position[1] = chest->position[1];
    item->previous_position[2] = chest->position[2];

    hand = &world_humans[human_index].hands[slot];
    if (hand->count <= 0)
        return;
    connected = game_connected;
    do {
        if (hand->items[i] == index) {
            int32_t last = hand->count;
            item->holder = -1;
            hand->count = last - 1;
            hand->items[i] = hand->items[last - 1];
            if (connected && (uint32_t)index <= 0x3FF)
                world_item_change_count(index) = add_int(world_item_change_count(index), 1);
        } else {
            i++;
        }
    } while (i < hand->count);
}
