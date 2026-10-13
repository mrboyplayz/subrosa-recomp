/* Guns: loading, firing and recoil (0x1400CF670). See item.h. */
#include "bullet.h"
#include "frame.h"
#include "human.h"
#include "item.h"
#include "physics.h"

/* ---- still recompiled code ------------------------------------------------- */

/* A random vector within `spread` (the second value is 0 here). */
extern void sub_1400A56B0(float *out, float spread, float unknown);
/* Spawns a bullet of a type at a point with a velocity, fired by a player. */
extern void sub_14004E8A0(int bullet, float *from, float *velocity, int player);

/* An empty gun takes a round from the magazine attached to it. */
static void load_round(int index, WorldItem *item)
{
    if (item_charges(index) != 0 || item->child_count <= 0 || item_charges(item->children[0]) <= 0)
        return;
    item_charges(index) = 1;
    item_charges(item->children[0])--;
}

/* holder and body as they were when the tick began, as the original keeps them. */
static void fire(int index, WorldItem *item, int32_t type, int32_t holder, int32_t body_index)
{
    PhysicsBody *body = &physics_bodies[body_index];
    float speed = -item_type_muzzle_speed(type);
    float vx = body->velocity[0], vy = body->velocity[1], vz = body->velocity[2];
    float fy = body->rotation[7], fz = body->rotation[8], fx = body->rotation[6];
    float spread[3], from[3], velocity[3];

    sub_1400A56B0(spread, item_type_spread(type), 0.0f);
    velocity[0] = (fx * speed + vx) + spread[0];
    velocity[1] = (fy * speed + vy) + spread[1];
    velocity[2] = (fz * speed + vz) + spread[2];
    from[0] = body->position[0];
    from[1] = body->position[1];
    from[2] = body->position[2];
    sub_14004E8A0(item_type_bullet(type), from, velocity, world_humans[holder].player);

    /* (The original passes the same buffer to the next spread, holding this.) */
    spread[0] = body->position[0] - body->velocity[0];
    spread[1] = body->position[1] - body->velocity[1];
    spread[2] = body->position[2] - body->velocity[2];
    if (game_connected) {
        int32_t count = world_event_count;
        WorldEvent *event = &world_events[count];
        world_event_count = (int32_t)((uint32_t)count + 1u) & 0xFFFF;
        event->type = 0;
        event->tick = game_tick;
        for (int axis = 0; axis < 3; axis++) {
            event->vector_a[axis] = spread[axis];
            event->vector_b[axis] = velocity[axis];
        }
        event->a = item_type_bullet(type);
        event->b = index;
    }

    /* Recoil: twice the bullet's momentum (its velocity with a second spread,
       twice as wide) over the gun's mass, pushing back through a lever 1/32
       along the gun's second row and 5/8 back along its third. */
    sub_1400A56B0(spread, item_type_spread(type) + item_type_spread(type), 0.0f);
    float ry = velocity[1] + spread[1];
    float rz = velocity[2] + spread[2];
    int32_t charges = item_charges(index);
    float rx = spread[0] + velocity[0];
    float mass = bullet_type_value(item_type_bullet(type));
    item_timer(index) = item_type_fire_delay(type);
    item_charges(index) = charges - 1;
    float k = (mass + mass) / item_mass(index);
    float back = -k;
    body->velocity[0] = back * rx + body->velocity[0];
    body->velocity[1] = back * ry + body->velocity[1];
    body->velocity[2] = back * rz + body->velocity[2];
    float lx = body->rotation[3] * 0.03125f - body->rotation[6] * 0.625f;
    float ly = body->rotation[4] * 0.03125f - body->rotation[7] * 0.625f;
    float lz = body->rotation[5] * 0.03125f - body->rotation[8] * 0.625f;
    body->angular_momentum[0] = (ly * rz - lz * ry) * k + body->angular_momentum[0];
    body->angular_momentum[1] = (rx * lz - lx * rz) * k + body->angular_momentum[1];
    body->angular_momentum[2] = (lx * ry - rx * ly) * k + body->angular_momentum[2];
    if (charges - 1 == 0)
        load_round(index, item);
}

void item_gun_tick(int index)
{
    WorldItem *item = &world_items[index];
    int32_t type = item->type;

    if (item_timer(index) > 0)
        item_timer(index)--;
    int32_t holder = item->holder;
    if (holder == -1 || game_state != 2)
        return;
    int32_t body = item->body;

    int held = item_input(index) & 1;
    if (!held)
        item_trigger_ticks(index) = 0;
    int automatic = type == 11 || type == 5;
    int32_t needed = type == 5 ? 6 : 2;
    if (automatic && !held) {
        item_timer(index) = 0;
    } else if (held) {
        int32_t ticks = item_trigger_ticks(index);
        if (ticks < needed || automatic)
            item_trigger_ticks(index) = ticks + 1;
    }
    load_round(index, item);
    if (item_timer(index) <= 0 && item_trigger_ticks(index) == needed && item_charges(index) > 0)
        fire(index, item, type, holder, body);
}
