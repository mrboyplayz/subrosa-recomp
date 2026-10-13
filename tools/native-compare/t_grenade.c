/* A grenade going off: 0x1400A70B0. */
#include <string.h>
#include "nc.h"
#include "frame.h"
#include "human.h"
#include "item.h"
#include "physics.h"

#ifdef NC_NATIVE
#define explode(i) ((void (*)(int))NC_ADDR(0x1400A70B0))(i)
#else
#define explode item_grenade_explode
#endif

static uint64_t args[4];

static void team_harm(int player, int amount)
{
    args[0] = (uint32_t)player;
    args[1] = (uint32_t)amount;
    nc_call("team_harm", 2, args);
    if (nc_chance(30))                      /* the routine reads the thrower again afterwards */
        item_player(0) = (int)nc_rand_below(6) - 1;
}

static void kill_credit(int killer, int victim, int amount, int again)
{
    args[0] = (uint32_t)killer;
    args[1] = (uint32_t)victim;
    args[2] = (uint32_t)amount;
    args[3] = (uint32_t)again;
    nc_call("kill", 4, args);
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x14011B7F0, (void *)team_harm);
    nc_redirect(0x140116D80, (void *)kill_credit);
    int cases = nc_cases(500);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        WorldItem *item = &world_items[0];
        for (int k = 0; k < 3; k++)
            item->position[k] = nc_float(-10.0f, 10.0f);
        item_player(0) = (int)nc_rand_below(6) - 1;
        for (int p = 0; p < 8; p++)
            player_team(p) = (int)nc_rand_below(3);
        for (int h = 0; h < 256; h++) {
            WorldHuman *human = &world_humans[h];
            human->active = nc_chance(h < 24 ? 80 : 3);
            human->player = (int)nc_rand_below(7) - 1;
            human->unknown_3c = (int)nc_rand_below(100);
            float reach = nc_chance(40) ? 4.0f : nc_chance(60) ? 8.0f : 12.0f;
            for (int k = 0; k < 3; k++)
                human->bones[0].position[k] = item->position[k] + nc_float(-reach, reach) * 0.6f;
            for (int b = 0; b < HUMAN_BONE_COUNT; b++) {
                HumanBone *bone = &human->bones[b];
                bone->body = (int)nc_rand_below(64) + 64 * (h & 63);
                bone->mass = nc_chance(5) ? nc_float(-10.0f, 10.0f) : nc_float_plain(0.5f, 20.0f);
                PhysicsBody *body = &physics_bodies[bone->body];
                for (int k = 0; k < 3; k++) {
                    body->position[k] = human->bones[0].position[k] + nc_float(-1.5f, 1.5f);
                    body->velocity[k] = nc_float(-2.0f, 2.0f);
                }
                if (nc_chance(2))
                    memcpy(body->position, item->position, sizeof body->position);
            }
        }

        nc_set_mxcsr(0x1F80);
        explode(0);
        nc_line("humans %016llx bodies %016llx mxcsr %08x",
                (unsigned long long)nc_hash(world_humans, sizeof(WorldHuman) * 256),
                (unsigned long long)nc_hash(physics_bodies, sizeof(PhysicsBody) * 4096), nc_get_mxcsr());
    }
    return 0;
}
