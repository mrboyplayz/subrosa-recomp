/* The item tick: held/static bodies, world contacts and settling. */
#include "arith.h"
#include "item.h"
#include "physics.h"
#include "collision.h"
#include "frame.h"

extern void sr_item_solve_contacts(int item);
extern void sr_item_solve_human_contacts(int item);
extern int sub_140151190(float point[3], float normal[3], float *distance, int layer,
                       const float centre[3], float radius);
extern uint32_t sub_1400DC050(const float from[3], const float to[3], int mode);
extern void sr_physics_add_world_contact(int16_t body, const float offset[3], const float normal[3], float depth,
                         float friction, float damping, float stiffness);
extern uint64_t sr_item_break_block_part(uint32_t block, int part, int layer, int x, int y, int z);

static void freeze_body(PhysicsBody *body)
{
    for (int axis = 0; axis < 3; axis++) {
        body->velocity[axis] = 0.0f;
        body->angular_velocity[axis] = 0.0f;
        body->angular_momentum[axis] = 0.0f;
    }
    body->settled = 1;
}

static void break_hit_block_parts(void)
{
    if (item_hit_block_part == -1)
        return;
    /* A callback may change the shared hit; the native reloads it for
       every part and for the loop's limit. */
    for (int part = 0; part < item_block_part_count(item_hit_block); part++) {
        uint32_t block = item_hit_block + (item_hit_block_turn << 24);
        sr_item_break_block_part(block, part, item_hit_layer, item_hit_voxel[0], item_hit_voxel[1], item_hit_voxel[2]);
    }
}

static void solve_world_point(int body_index, PhysicsBody *body, const float endpoint[3])
{
    if (!sub_1400DC050(body->position, endpoint, 1))
        return;
    float dx = collision_hit.point[0] - endpoint[0];
    float dy = collision_hit.point[1] - endpoint[1];
    float dz = collision_hit.point[2] - endpoint[2];
    float depth = (collision_hit.normal[1] * dy + collision_hit.normal[0] * dx)
                  + collision_hit.normal[2] * dz;
    float offset[3];
    for (int axis = 0; axis < 3; axis++)
        offset[axis] = collision_hit.point[axis] - body->position[axis];
    sr_physics_add_world_contact((int16_t)body_index, offset, collision_hit.normal, depth, 0.6f, 0.015625f, 0.03125f);
    break_hit_block_parts();
}

static void solve_sphere(int index, int body_index, PhysicsBody *body)
{
    float point[3], normal[3], distance;
    sr_item_solve_human_contacts(index);
    collision_hit.fraction = 1.0f;
    collision_hit.distance = 65536.0f;
    item_hit_unknown_7c = -1;
    item_hit_block_part = -1;
    float closest = 65536.0f;
    for (int layer = 0; layer < 4; layer++) {
        if (!item_collision_layer_active(layer))
            continue;
        int hit = sub_140151190(point, normal, &distance, layer, body->position, 0.11f);
        closest = collision_hit.distance;
        if (hit && closest > distance) {
            closest = distance;
            for (int axis = 0; axis < 3; axis++) {
                collision_hit.point[axis] = point[axis];
                collision_hit.normal[axis] = normal[axis];
            }
            collision_hit.distance = distance;
            item_hit_layer = layer;
        }
    }
    /* Native JAE permits unordered distance. */
    if (!(closest >= 65536.0f)) {
        float offset[3];
        for (int axis = 0; axis < 3; axis++)
            offset[axis] = collision_hit.point[axis] - body->position[axis];
        float depth = 0.11f - closest;
        sr_physics_add_world_contact((int16_t)body_index, offset, collision_hit.normal, depth, 0.6f, 0.015625f, 0.03125f);
        for (int axis = 0; axis < 3; axis++)
            body->angular_momentum[axis] *= 0.9375f;
    }
}

void item_update_physics(void)
{
    for (int index = 0; index < WORLD_ITEM_CAPACITY; index++) {
        WorldItem *item = &world_items[index];
        if (!item->active)
            continue;
        int32_t type = item->type;
        if (item->position[1] < -32.0f)
            item->lifetime = 0;
        if (item->unknown_138 <= 0) {
            if (game_connected) {
                int32_t count = world_event_count;
                WorldEvent *event = &world_events[count];
                event->type = 1;
                event->tick = game_tick;
                for (int axis = 0; axis < 3; axis++) {
                    event->vector_a[axis] = item->position[axis];
                    event->vector_b[axis] = item->velocity[axis];
                }
                world_event_count = (int32_t)((uint32_t)count + 1u) & 0xFFFF;
                event->a = 0;
                event->b = 0;
            }
            item->lifetime = 0;
        }
        if (item_unknown_158(index) > 0)
            item_unknown_158(index)--;

        int32_t parent = item->parent, holder = item->holder;
        item_in_pocket(index) = 0;
        if (parent != -1) {
            const WorldItem *p = &world_items[parent];
            item_in_pocket(index) = p->type == 15 || (p->holder != -1 && p->slot > 2);
        }
        if (holder != -1 && (uint32_t)type - 25u > 1u && item->slot > 2)
            item_in_pocket(index) = 1;
        item->physics_simulated = 0;
        int32_t body_index = item->body;
        PhysicsBody *body = &physics_bodies[body_index];
        if (item_is_static(index)) {
            freeze_body(body);
        } else {
            if ((uint32_t)type - 39u <= 1u || (uint32_t)type - 42u <= 1u)
                item->unknown_8 = 1;
            if (parent != -1 || (holder != -1 && item->slot >= 2)) {
                for (int axis = 0; axis < 3; axis++) {
                    item->velocity[axis] = 0.0f;
                    item->angular_velocity[axis] = 0.0f;
                    if (holder != -1)
                        item->velocity[axis] = world_humans[holder].bones[0].velocity[axis];
                }
                for (int axis = 0; axis < 3; axis++) {
                    body->angular_momentum[axis] = 0.0f;
                    body->angular_velocity[axis] = 0.0f;
                    body->position[axis] = item->position[axis];
                    body->velocity[axis] = item->velocity[axis];
                }
                for (int k = 0; k < 9; k++)
                    body->rotation[k] = item->rotation[k];
                body->settled = 1;
                item->unknown_8 = 0;
                item_settled_timer(index) = 0;
            } else if (item->unknown_8) {
                freeze_body(body);
            } else {
                item->physics_simulated = 1;
                for (int axis = 0; axis < 3; axis++) {
                    item_previous_velocity(index)[axis] = item->velocity[axis];
                    item_previous_angular_velocity(index)[axis] = item->angular_velocity[axis];
                }
                body->settled = 0;
                const WorldItemType *definition = &world_item_types[type];
                if (definition->occupies_space)
                    sr_item_solve_contacts(index);
                if (item->type == 35)
                    solve_sphere(index, body_index, body);
                if (item->type == 44) {
                    for (int p = 0; p < definition->bound_point_count; p++) {
                        const float *v = definition->bound_points + 3 * p;
                        float endpoint[3];
                        for (int axis = 0; axis < 3; axis++)
                            endpoint[axis] = ((v[0] * body->rotation[axis] + body->position[axis])
                                             + v[1] * body->rotation[3 + axis]) + v[2] * body->rotation[6 + axis];
                        solve_world_point(body_index, body, endpoint);
                    }
                }
                uint32_t current_type = (uint32_t)item->type;
                if (current_type > 44u || !(0x100810000000ULL & (1ULL << current_type))) {
                    if (item->holder == -1 || world_humans[item->holder].vehicle == -1) {
                        for (int corner = 0; corner < 8; corner++) {
                            const float *half = item_type_bounds_half_size(type);
                            int quadrant = corner & 3;
                            float x = quadrant == 0 || quadrant == 3 ? -half[0] : half[0];
                            float y = corner < 4 ? -half[1] : half[1];
                            float z = quadrant < 2 ? -half[2] : half[2];
                            float endpoint[3];
                            for (int axis = 0; axis < 3; axis++)
                                endpoint[axis] = ((x * body->rotation[axis] + body->position[axis])
                                                 + y * body->rotation[3 + axis]) + z * body->rotation[6 + axis];
                            solve_world_point(body_index, body, endpoint);
                        }
                    }
                }
                const float *v = item->velocity, *w = item->angular_velocity;
                if (item->holder == -1 &&
                    !(sqrt_float((v[0] * v[0] + v[1] * v[1]) + v[2] * v[2]) >= 0.0041666669f) &&
                    !(sqrt_float((w[0] * w[0] + w[1] * w[1]) + w[2] * w[2]) >= 0.0041666669f)) {
                    int32_t timer = item_settled_timer(index);
                    if (timer < 60) {
                        timer = add_int(timer, 1);
                        item_settled_timer(index) = timer;
                    }
                    if (timer >= 60)
                        item->unknown_8 = 1;
                } else {
                    item_settled_timer(index) = 0;
                }
            }
        }
        for (int axis = 0; axis < 3; axis++)
            item->previous_position[axis] = item->position[axis];
    }
}
