#include "item.h"
#include "physics.h"
#include "collision.h"
#include "arith.h"

extern long long sr_physics_add_contact(int body_a, int body_b, const float offset_a[3], const float offset_b[3],
                             const float normal[3], float depth, float friction, float damping, float stiffness);

void item_solve_human_contacts(int index)
{
    for (int h = 0; h < WORLD_HUMAN_CAPACITY; h++) {
        const WorldHuman *human = &world_humans[h];
        if (!human->active)
            continue;
        for (int b = 0; b < HUMAN_BONE_COUNT; b++) {
            if (b == 5 || b == 6 || b == 8 || b == 9)
                continue;
            const HumanBone *bone = &human->bones[b];
            const WorldItem *item = &world_items[index];
            float x = item->position[0], y = item->position[1], z = item->position[2];
            float dx = x - bone->position[0], dy = y - bone->position[1], dz = z - bone->position[2];
            float distance = sqrt_float((dx * dx + dy * dy) + dz * dz);
            if (distance >= 0.36000001f)
                continue;
            float depth = 0.36000001f - distance;
            float nx = 0.0f, ny = 0.0f, nz = 0.0f;
            if (!is_zero_or_nan(distance)) {
                nx = dx / distance;
                ny = dy / distance;
                nz = dz / distance;
            }
            collision_hit.point[0] = x - nx * 0.11f;
            collision_hit.point[1] = y - ny * 0.11f;
            collision_hit.point[2] = z - nz * 0.11f;
            collision_hit.normal[0] = -nx;
            collision_hit.normal[1] = -ny;
            collision_hit.normal[2] = -nz;
            const PhysicsBody *a = &physics_bodies[bone->body], *other = &physics_bodies[item->body];
            float offset_a[3], offset_b[3];
            for (int axis = 0; axis < 3; axis++) {
                offset_a[axis] = collision_hit.point[axis] - a->position[axis];
                offset_b[axis] = collision_hit.point[axis] - other->position[axis];
            }
            sr_physics_add_contact(bone->body, item->body, offset_a, offset_b, collision_hit.normal,
                         depth, 0.4f, 0.03125f, 0.0625f);
        }
    }
}

/* The grid query's count and 256 pairs: only each pair's first word (the
   item index) is used here. The second word's meaning is still unknown. */
typedef struct ItemContactCandidates {
    int32_t count;
    uint32_t unknown_4;
    struct { int32_t item; uint32_t unknown_4; } entries[256];
} ItemContactCandidates;

extern void sr_world_grid_query_items(void *candidates, const int32_t minimum[3], const int32_t maximum[3]);
extern uint32_t sub_14004A7A0(int32_t body_a, int32_t body_b, const void *mesh_a, const void *mesh_b,
                            const float position_a[3], const float rotation_a[9],
                            const float position_b[3], const float rotation_b[9]);

void item_solve_contacts(int index)
{
    WorldItem *item = &world_items[index];
    ItemContactCandidates candidates;

    if (!world_item_types[item->type].occupies_space)
        return;
    sr_world_grid_query_items(&candidates, item->voxel_min, item->voxel_max);
    for (int n = 0; n < candidates.count; n++) {
        int other_index = candidates.entries[n].item;
        WorldItem *other;

        if (other_index == index)
            continue;
        other = &world_items[other_index];
        if (other_index <= index && !other->unknown_8)
            continue;

        /* COMISS+JA rejects greater values, allowing NaN on the minimum
           side; COMISS+JB rejects smaller AND unordered maximum values.
           Axis order (x, z, y) and short circuiting match the original. */
        if (other->bounds_min[0] > item->bounds_max[0] ||
            !(other->bounds_max[0] >= item->bounds_min[0]) ||
            other->bounds_min[2] > item->bounds_max[2] ||
            !(other->bounds_max[2] >= item->bounds_min[2]) ||
            other->bounds_min[1] > item->bounds_max[1] ||
            !(other->bounds_max[1] >= item->bounds_min[1]))
            continue;

        if (sub_14004A7A0(item->body, other->body,
                         &world_item_types[item->type].bound_point_count,
                         &world_item_types[other->type].bound_point_count,
                         item->position, item->rotation, other->position, other->rotation) &&
            (item_settled_timer(other_index) < 60 || item_settled_timer(index) < 60)) {
            item->unknown_8 = 0;
            other->unknown_8 = 0;
        }
    }
}
