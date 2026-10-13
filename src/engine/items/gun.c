/* Guns: every type whose item type is a gun (Auto 5, AK-47, M-16, Magnum,
   MP5, Uzi, 9mm). One routine serves them all; what differs is in the item
   type (fire rate, bullet type, velocity, spread) and two exceptions: the
   9mm and the Magnum fire once per pull of the trigger, the Magnum on the
   sixth tick it is held. 0x1400CF670 */
#include "items.h"

/* The muzzle, from the gun's centre: a little along its second row and
   forward (against its third). The recoil turns the gun about it. */
#define GUN_MUZZLE_UP 0.03125f
#define GUN_MUZZLE_FORWARD 0.625f

/* Moves a round from the magazine (the gun's first attached item) into the
   chamber, if the magazine has one. */
static void chamber_round(int i, WorldItem *gun, int32_t rounds)
{
    if (gun->child_count <= 0 || item_bullets(gun->children[0]) <= 0)
        return;
    item_bullets(i) = rounds;
    item_bullets(gun->children[0])--;
}

static void fire(int i, WorldItem *gun, int32_t type, int32_t holder)
{
    PhysicsBody *body = &physics_bodies[gun->body];

    /* The bullet leaves along the barrel at the type's velocity, plus the
       gun's own velocity and a random spread. */
    float gun_velocity[3] = {body->velocity[0], body->velocity[1], body->velocity[2]};
    float barrel[3] = {body->rotation[6], body->rotation[7], body->rotation[8]};
    float speed = -item_type_bullet_velocity(type);
    float spread[3];
    human_random_direction(spread, item_type_bullet_spread(type), 0.0f);
    float velocity[3];
    for (int axis = 0; axis < 3; axis++)
        velocity[axis] = barrel[axis] * speed + gun_velocity[axis] + spread[axis];
    float position[3] = {body->position[0], body->position[1], body->position[2]};
    bullet_create(item_type_bullet_type(type), position, velocity, world_humans[holder].player);

    if (game_connected) {
        int32_t count = world_event_count;
        WorldEvent *event = &world_events[count];
        world_event_count = (int32_t)(((uint32_t)count + 1u) & 0xFFFF);
        event->type = 0;                 /* a bullet */
        event->tick = game_tick;
        for (int axis = 0; axis < 3; axis++) {
            event->vector_a[axis] = body->position[axis] - body->velocity[axis];
            event->vector_b[axis] = velocity[axis];
        }
        event->a = item_type_bullet_type(type);
        event->b = i;
    }

    /* The recoil: the bullet's momentum, twice over, against the gun, with
       a spread of its own; it pushes the body back and turns it about the
       muzzle. */
    human_random_direction(spread, item_type_bullet_spread(type) + item_type_bullet_spread(type), 0.0f);
    float kick[3] = {spread[0] + velocity[0], velocity[1] + spread[1], velocity[2] + spread[2]};
    int32_t rounds = item_bullets(i);
    float mass = bullet_type_mass(item_type_bullet_type(type));
    item_cooldown(i) = item_type_fire_rate(type);
    item_bullets(i) = rounds - 1;
    float push = (mass + mass) / item_mass(i);
    float back = -push;
    for (int axis = 0; axis < 3; axis++)
        body->velocity[axis] = back * kick[axis] + body->velocity[axis];
    float muzzle[3];
    for (int axis = 0; axis < 3; axis++)
        muzzle[axis] = body->rotation[3 + axis] * GUN_MUZZLE_UP - body->rotation[6 + axis] * GUN_MUZZLE_FORWARD;
    body->angular_momentum[0] = (muzzle[1] * kick[2] - muzzle[2] * kick[1]) * push + body->angular_momentum[0];
    body->angular_momentum[1] = (kick[0] * muzzle[2] - muzzle[0] * kick[2]) * push + body->angular_momentum[1];
    body->angular_momentum[2] = (muzzle[0] * kick[1] - kick[0] * muzzle[1]) * push + body->angular_momentum[2];

    if (rounds - 1 == 0)
        chamber_round(i, gun, rounds);
}

void gun_update(int i)
{
    WorldItem *gun = &world_items[i];
    int32_t type = gun->type;
    if (item_cooldown(i) > 0)
        item_cooldown(i)--;
    int32_t holder = gun->holder;
    if (holder == -1 || game_state != 2)
        return;

    /* The trigger counts the ticks it is held. An automatic fires each time
       the count reaches 2 and its cooldown is over; it stays at 2 while
       held. The 9mm and the Magnum count on, so they fire once per pull,
       and are ready again as soon as the trigger is let go. */
    int trigger = item_input_flags(i) & 1;
    int single_shot = type == ITEM_9MM || type == ITEM_MAGNUM;
    int32_t fires_at = type == ITEM_MAGNUM ? 6 : 2;
    if (!trigger)
        item_trigger_ticks(i) = 0;
    if (single_shot && !trigger)
        item_cooldown(i) = 0;
    else if (trigger && (item_trigger_ticks(i) < fires_at || single_shot))
        item_trigger_ticks(i) = (int32_t)((uint32_t)item_trigger_ticks(i) + 1u);

    if (item_bullets(i) == 0)
        chamber_round(i, gun, 1);
    if (item_cooldown(i) > 0 || item_trigger_ticks(i) != fires_at || item_bullets(i) <= 0)
        return;
    fire(i, gun, type, holder);
}
