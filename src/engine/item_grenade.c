/* A grenade going off (0x1400A70B0). See item.h. */
#include "arith.h"
#include "frame.h"
#include "human.h"
#include "item.h"
#include "physics.h"

/* ---- still recompiled code ------------------------------------------------- */

/* Charges a player for harming a team mate (amount 100 here). */
extern void sub_14011B7F0(int player, int amount);
/* Credits a kill: killer, victim, amount; the original also leaves the
   killer in R9. */
extern void sub_140116D80(int killer, int victim, int amount, int killer_again);

#define BLAST_KILL_SQUARED 16.0f        /* 4 units */
#define BLAST_REACH 8.0f
#define BLAST_REACH_SQUARED 64.0f

/* The push on one bone's body: away from the blast, (8 - d)^2 * 27/2048
   scaled by 8 / (mass + 8), but by no less than 1/8. */
static void push(PhysicsBody *body, float mass, float cx, float cy, float cz)
{
    float dx = body->position[0] - cx;
    float dy = body->position[1] - cy;
    float dz = body->position[2] - cz;
    float distance = sqrt_float((dy * dy + dx * dx) + dz * dz);
    float ux = 0.0f, uy = 0.0f, uz = 0.0f;
    if (!is_zero_or_nan_quiet(distance)) {
        float inverse = 1.0f / distance;
        ux = inverse * dx;
        uy = inverse * dy;
        uz = inverse * dz;
    }
    float near = BLAST_REACH - distance;
    float strength = (max_float(BLAST_REACH / (mass + BLAST_REACH), 0.125f) * near) * (near * 0.01318359375f);
    body->velocity[0] = ux * strength + body->velocity[0];
    body->velocity[1] = uy * strength + body->velocity[1];
    body->velocity[2] = uz * strength + body->velocity[2];
}

void item_grenade_explode(int index)
{
    const WorldItem *item = &world_items[index];

    for (int h = 0; h < 256; h++) {
        WorldHuman *human = &world_humans[h];
        if (!human->active)
            continue;
        const float *at = human->bones[0].position;
        float dx = at[0] - item->position[0];
        float dy = at[1] - item->position[1];
        float dz = at[2] - item->position[2];
        float squared = (dy * dy + dx * dx) + dz * dz;

        if (!(squared >= BLAST_KILL_SQUARED)) {         /* a NaN distance kills too */
            int32_t thrower = item_player(index);
            human->unknown_3c = 0;
            if (thrower != -1 && human->player != -1 && thrower != human->player
                && player_team(thrower) == player_team(human->player)) {
                sub_14011B7F0(thrower, 100);
                thrower = item_player(index);
            }
            if (thrower != -1 && human->player != -1)
                sub_140116D80(thrower, human->player, 100, thrower);
        } else if (squared >= BLAST_REACH_SQUARED) {
            continue;
        }

        float cx = item->position[0], cy = item->position[1], cz = item->position[2];
        for (int b = 0; b < HUMAN_BONE_COUNT; b++)
            push(&physics_bodies[human->bones[b].body], human->bones[b].mass, cx, cy, cz);
    }
}
