/* A human's health for a tick: death, recovery and bleeding.
 *
 * Health, blood and the six body parts each run from 0 to 100. The field
 * names follow RosaServer's Human where the code agrees with them.
 */
#include "arith.h"
#include "frame.h"
#include "human.h"
#include "world.h"

/* ---- still recompiled code ------------------------------------------------- */

extern int rand(void);                   /* the original's own, 0x14023B1B0 */

/* ---- state ------------------------------------------------------------------- */

/* A field of the player (0x3834 bytes each) that, when set, lets its human
   die from health below 50 alone. Meaning not settled. 0x151623978 */
#define player_unknown_151623978(player) SR_GLOBAL(int32_t, 0x151623978ULL + 0x3834ULL * (uint64_t)(int64_t)(player))

#define GAME_TYPE_6 6                    /* humans die below 50 health; bleeding stops by chance */
#define WORLD_EVENT_BLEED 1

static const float up[3] = {0.0f, 1.0f, 0.0f};

static void heal(int32_t *value)
{
    if (*value < 100)
        *value = *value + 1;
}

void human_update_health(int human)
{
    WorldHuman *h = &world_humans[human];
    int32_t type = game_type;
    int32_t immortal, bleeding, mask, chest;
    uint32_t tick;

    if (type == GAME_TYPE_6 && h->health < 50)
        h->unknown_3c = 0;
    if (h->player != -1 && player_unknown_151623978(h->player) && h->health < 50)
        h->unknown_3c = 0;

    if (h->immortal) {
        if (h->unknown_44 > 0)
            h->unknown_44--;
        if (h->health < 50)
            h->unknown_44 = 1800;
    } else if (h->health < 75) {
        /* Hurt: the joints go loose for up to a second. */
        int32_t ticks = (75 - h->health) * 2;
        if (ticks > 60)
            ticks = 60;
        if (h->unknown_78 < ticks)
            h->unknown_78 = ticks;
    }

    if (h->unknown_3c <= 0) {
        h->bleeding = 0;
        h->health = 0;
        return;
    }

    if (h->health < 0)
        h->health = 0;
    for (int part = 0; part < HUMAN_PART_COUNT; part++) {
        if (h->parts[part].health < 0)
            h->parts[part].health = 0;
    }
    chest = h->parts[HUMAN_PART_CHEST].health;

    immortal = h->immortal;
    bleeding = h->bleeding;
    mask = bleeding ? 63 : 31;
    if (immortal) {
        mask = 7;
    } else {
        if (chest <= 0)
            h->unknown_3c = 0;
        if (h->parts[HUMAN_PART_HEAD].health <= 0)
            h->unknown_3c = 0;
    }

    /* Recovery: health every 32 ticks (64 while bleeding), blood every 256
       and the parts every 64 unless bleeding. */
    tick = (uint32_t)game_tick;
    if (((uint32_t)mask & tick) == 0)
        heal(&h->health);
    if (!bleeding || immortal) {
        if ((tick & 0xFF) == 0)
            heal(&h->blood);
        if ((tick & (immortal ? 15u : 63u)) == 0) {
            for (int part = 0; part < HUMAN_PART_COUNT; part++)
                heal(&h->parts[part].health);
        }
    }

    if (h->bleeding) {
        int32_t blood;

        if (type == GAME_TYPE_6) {
            int chance = rand();
            tick = (uint32_t)game_tick;
            if ((chance & 0x1FF) == 0)
                h->bleeding = 0;
        }
        /* Little blood caps health; a drop of 3 every 256 ticks, at a tick
           that differs from human to human. */
        blood = h->blood;
        if (blood < 20) {
            int32_t cap = blood * 2 + 10;
            if (h->health > cap)
                h->health = cap;
        }
        if (blood > 0 && (uint8_t)((uint32_t)multiply_int(multiply_int(human, human), human) ^ tick) == 0) {
            float x, y, z;

            if (!h->immortal)
                h->blood = blood - 3;
            x = up[0] * 0.5f + h->bones[HUMAN_BONE_STOMACH].position[0];
            y = up[1] * 0.5f + h->bones[HUMAN_BONE_STOMACH].position[1];
            z = up[2] * 0.5f + h->bones[HUMAN_BONE_STOMACH].position[2];
            if (game_connected) {
                int32_t count = world_event_count;
                WorldEvent *event = &world_events[count];

                world_event_count = (count + 1) & 0xFFFF;
                event->type = WORLD_EVENT_BLEED;
                event->tick = (int32_t)tick;
                event->vector_a[0] = x;
                event->vector_a[1] = y;
                event->vector_a[2] = z;
                event->vector_b[0] = x;
                event->vector_b[1] = y;
                event->vector_b[2] = z;
                event->a = 0;
                event->b = 3;
            }
        }
    }
    if (!h->immortal && h->blood <= 10)
        h->unknown_3c = 0;
}
