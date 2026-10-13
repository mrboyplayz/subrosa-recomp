/* Grenade (13), in game state 2: pulling the pin starts a 240-tick fuse;
   at its end the grenade explodes. Part of the item update, 0x1400CC610;
   the blast is 0x1400A70B0. */
#include "../arith.h"
#include "items.h"

#define GRENADE_KILL_RADIUS_SQUARED 16.0f    /* within 4 units: killed */
#define GRENADE_PUSH_RADIUS_SQUARED 64.0f    /* within 8 units: thrown */
#define GRENADE_PUSH_RADIUS 8.0f

/* The blast (RosaServer: grenadeExplosion). Every human whose pelvis is
   within 4 units dies (the original takes this branch for a NaN distance
   too); the primer is charged team damage when the dead was on his team,
   and criminal rating. Every bone of a human within 8 units is thrown away
   from the grenade, the harder the nearer and the lighter the bone. */
void grenade_explode(int i)
{
    for (int h = 0; h < 256; h++) {
        WorldHuman *human = &world_humans[h];
        if (!human->active)
            continue;
        WorldItem *grenade = &world_items[i];
        const float *pelvis = human->bones[HUMAN_BONE_PELVIS].position;
        float dx = pelvis[0] - grenade->position[0];
        float dy = pelvis[1] - grenade->position[1];
        float dz = pelvis[2] - grenade->position[2];
        float distance_squared = dy * dy + dx * dx + dz * dz;
        if (!(distance_squared >= GRENADE_KILL_RADIUS_SQUARED)) {
            int32_t primer = grenade_primer(i);
            human_old_health(h) = 0;
            if (primer != -1 && human->player != -1 && primer != human->player &&
                player_team(human->player) == player_team(primer)) {
                player_team_damage(primer, 100);
                primer = grenade_primer(i);
            }
            if (primer != -1 && human->player != -1)
                player_raise_criminal_rating(primer, human->player, 100);
        } else if (distance_squared >= GRENADE_PUSH_RADIUS_SQUARED) {
            continue;
        }

        float centre[3] = {grenade->position[0], grenade->position[1], grenade->position[2]};
        for (int b = 0; b < HUMAN_BONE_COUNT; b++) {
            const HumanBone *bone = &human->bones[b];
            PhysicsBody *body = &physics_bodies[bone->body];
            float x = body->position[0] - centre[0];
            float y = body->position[1] - centre[1];
            float z = body->position[2] - centre[2];
            float distance = sqrt_float(y * y + x * x + z * z);
            float away[3] = {0.0f, 0.0f, 0.0f};
            if (!is_zero_or_nan_quiet(distance)) {
                float inverse = 1.0f / distance;
                away[0] = inverse * x;
                away[1] = inverse * y;
                away[2] = inverse * z;
            }
            float nearness = GRENADE_PUSH_RADIUS - distance;
            float lightness = max_float(GRENADE_PUSH_RADIUS / (bone->mass + GRENADE_PUSH_RADIUS), 0.125f);
            float push = lightness * nearness * (nearness * 0.01318359375f);
            for (int axis = 0; axis < 3; axis++)
                body->velocity[axis] = away[axis] * push + body->velocity[axis];
        }
    }
}

static void explode(int i, WorldItem *grenade)
{
    grenade->lifetime = 0;
    if (game_connected) {
        int32_t count = world_event_count;
        WorldEvent *event = &world_events[count];
        event->type = 20;
        event->tick = game_tick;
        event->a = 0;
        for (int axis = 0; axis < 3; axis++)
            event->vector_a[axis] = grenade->position[axis];
        world_event_count = (int32_t)(((uint32_t)count + 1u) & 0xFFFF);
    }
    grenade_explode(i);
}

void grenade_update(int i)
{
    WorldItem *grenade = &world_items[i];
    if (item_bullets(i) > 0) {
        if (item_pressed(i, 2)) {
            int32_t holder = grenade->holder;
            item_cooldown(i) = 240;
            item_bullets(i) = 0;
            if (holder != -1)
                grenade_primer(i) = world_humans[holder].player;
        }
        return;
    }
    int32_t fuse = item_cooldown(i);
    if (fuse <= 0)
        return;
    if (fuse == 240) {
        /* The fuse waits at 240 while held; pressing again puts the pin back. */
        if (item_pressed(i, 2)) {
            item_bullets(i) = 1;
            grenade_primer(i) = -1;
        } else if (grenade->holder == -1) {
            item_cooldown(i) = 239;
        }
        return;
    }
    fuse--;
    item_cooldown(i) = fuse;
    if (fuse == 1)
        explode(i, grenade);
}
