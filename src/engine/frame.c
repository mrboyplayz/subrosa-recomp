/* One pass of the client's main loop (0x14003B920). See frame.h. */
#include <string.h>
#include "arith.h"
#include "effect.h"
#include "frame.h"
#include "math3d.h"
#include "world.h"

/* Recompiled code this pass calls. Where the original passes nothing and the
   recompiled prototype has parameters, they are unused residue. */
extern int64_t sub_140198F9B(void);                      /* SDL_GetTicks */
extern int64_t sub_140104EA0(int which, int64_t unused_1, double unused_2);
extern void sub_140127300(void);                         /* replay: read the next record */
extern int64_t sr_ResetGame(int64_t unused_0, int64_t unused_1, int64_t unused_2);   /* 0x140127910 */
extern int64_t sub_140026E70(void);
extern int64_t sub_140010110(void);
extern int64_t sub_1400E65F0(void);
extern void asset_load_building_sbb_candidate(char *building, char *name, int flags);   /* 0x140026830 */
extern int64_t sub_140028BD0(void);
extern int64_t sub_140029120(void);
extern int64_t sub_140023AC0(int a1, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7,
                             unsigned int a8, int a9);
extern int64_t sub_1401178F0(int player);
extern void sub_140132F90(void);
extern int64_t sub_140133090(void);
extern void sub_14011B2A0(void);
extern void sr_physics_tick(void);                         /* physics_tick */
extern unsigned int *sub_1400F5820(int64_t unused_0, int64_t unused_1, double unused_2);
extern void sub_140136450(void);
extern void sub_14008F1B0(void);
extern void sub_14008F050(void);
extern void sub_140044920(void);
extern int64_t sub_140042930(int64_t unused_0, int64_t unused_1, int64_t unused_2);
extern int64_t sub_14002B9C0(void);
extern uint64_t sub_1400C2210(void);
extern void sub_1400CF160(void);
extern int64_t sr_world_update_effects(void);
extern int64_t sr_world_update_particles(void);
extern int64_t sr_world_expire_bullets(void);
extern int64_t sub_140040490(void);

#define frame_building         ((char *)&SR_GLOBAL(char, 0x1AD2C94A0ULL))
#define frame_building_name    ((char *)&SR_GLOBAL(char, 0x1ABD4ACA0ULL))
#define frame_building_int(offset) SR_GLOBAL(int32_t, 0x1AD2C94A0ULL + (offset))
#define frame_unknown_1ae1c94f8 (&SR_GLOBAL(int32_t, 0x1AE1C94F8ULL))

static uint32_t ticks(void)
{
    return (uint32_t)sub_140198F9B();
}

/* A key that was pressed since it was last acted on. */
static int key_pressed(uint64_t held, uint64_t latched)
{
    return SR_GLOBAL(uint8_t, held) != 0 && SR_GLOBAL(uint8_t, latched) == 0;
}

/* Replay and editor keys. Returns 1 when the pass ends here. */
static int handle_keys(void)
{
    uint8_t latched = SR_GLOBAL(uint8_t, 0x183F7C79EULL);
    uint8_t held = SR_GLOBAL(uint8_t, 0x183F7C99EULL);

    if (replay_active != 0) {
        /* Rewind by 5, 15 or 30 seconds; the longest pressed wins. */
        int seconds = 0;

        if (key_pressed(0x183F7C975ULL, 0x183F7C775ULL)) {
            seconds = 5;
            SR_GLOBAL(uint8_t, 0x183F7C775ULL) = 1;
        }
        if (key_pressed(0x183F7C977ULL, 0x183F7C777ULL)) {
            seconds = 15;
            SR_GLOBAL(uint8_t, 0x183F7C777ULL) = 1;
        }
        if (key_pressed(0x183F7C97CULL, 0x183F7C77CULL)) {
            seconds = 30;
            SR_GLOBAL(uint8_t, 0x183F7C77CULL) = 1;
        }
        if (seconds != 0) {
            int32_t target = subtract_int(game_tick, seconds * 60);

            replay_target_tick = target < 0 ? 0 : target;
        } else if (held != 0 && latched == 0) {
            replay_target_tick = 0;
        }
        if (seconds != 0 || (held != 0 && latched == 0)) {
            replay_position = 0;
            sub_140127300();
            sr_ResetGame(0, 0, 0);
            return 1;
        }
    }

    if (game_connected != 0 && held != 0 && latched == 0) {
        if (game_type == 1 && game_unknown_183f7ca41 == 0) {
            sub_140026E70();
            sub_140010110();
            sub_1400E65F0();
            asset_load_building_sbb_candidate(frame_building, frame_building_name, 0);
            sub_140028BD0();
            sub_140029120();
            sub_140023AC0(0, (unsigned int)subtract_int(36, frame_building_int(0x4C)),
                          subtract_int(6, frame_building_int(0x50)),
                          (unsigned int)subtract_int(36, frame_building_int(0x54)),
                          frame_unknown_1ae1c94f8[0], frame_unknown_1ae1c94f8[1], frame_unknown_1ae1c94f8[2], 0, 0);
        } else {
            sr_ResetGame(0, 0, 0);
        }
    }
    return 0;
}

/* Advances the game by one tick: locally, from a replay, or from the network. */
static void advance_game(void)
{
    game_unknown_16b165f70 = 0;
    game_unknown_16b1f5f74 = 0;

    if (game_connected != 0) {
        game_tick = add_int(game_tick, 1);
        if (game_state == 2) {
            for (int player = 0; player < PLAYER_CAPACITY; player++)
                if (player_active(player) != 0 && player_unknown_2d18(player) != 0)
                    sub_1401178F0(player);
        }
        sub_140132F90();
        sub_140133090();
        sub_14011B2A0();
        if (game_state <= 2)
            sr_physics_tick();
        sub_1400F5820(0, 0, 0.0);
        sub_140136450();
        if (game_type != 4)
            game_day_time = add_int(game_day_time, 3);
    } else if (replay_active != 0) {
        if (game_state != 3) {
            sub_140127300();
            while (replay_position < replay_length && replay_unknown_144cbfac8 == 0)
                sub_140127300();
            if (replay_target_tick > 0 && replay_position < replay_length && game_tick < replay_target_tick) {
                /* Catch up to the tick asked for, one record at a time. */
                while (game_tick < subtract_int(replay_target_tick, 1)) {
                    sub_140127300();
                    if (replay_position >= replay_length)
                        break;
                }
                sub_14008F1B0();
                sub_14008F050();
                sub_140127300();
            }
        }
        if (game_state == 2)
            game_state_time = add_int(game_state_time, 1);
    } else {
        sub_140044920();
        sub_140042930(0, 0, 0);
        if (game_state == 2)
            game_state_time = add_int(game_state_time, 1);
        if (game_unknown_1a4d2dce4 != game_unknown_183ebfcc8)
            sr_ResetGame(0, 0, 0);
    }
}

/* Counts the effects' lifetimes down and removes the expired ones, moving the
   last effect into each gap. */
static void expire_effects(void)
{
    int32_t count = world_effect_count;
    int32_t index = 0;

    if (count <= 0)
        return;
    while (index < count) {
        Effect *effect = &world_effects[index];
        int32_t left = effect->lifetime;

        if (left < 0xFFFF) {
            left = subtract_int(left, 1);
            effect->lifetime = left;
        }
        if (left > 0) {
            index++;
            continue;
        }
        count--;
        if (index == count)
            break;
        memcpy(effect, &world_effects[count], sizeof *effect);
    }
    world_effect_count = count;
}

/* Finds the loose item nearest the local human's reach, within half a unit. */
static void find_nearest_item(void)
{
    int32_t player = local_player;
    int32_t human, hand, held_count, nearest;
    float reach_end[3];
    const float *origin, *direction;
    float best = 0.5f;

    nearest_item = -1;
    if (player == -1)
        return;
    human = player_human(player);
    if (human == -1 || human_vehicle(human) != -1)
        return;

    hand = (player_flags(player) & 0x10) != 0;
    held_count = human_hand_count(human, hand);
    if (held_count > 0 && human_hand_count(human, !hand) > 0)
        return;                                  /* both hands full */

    origin = human_reach_origin(human);
    direction = human_reach_direction(human);
    reach_end[0] = origin[0] - direction[0] * 1.5f;
    reach_end[1] = origin[1] - direction[1] * 1.5f;
    reach_end[2] = origin[2] - direction[2] * 1.5f;

    nearest = -1;
    for (int index = 0; index < WORLD_ITEM_CAPACITY; index++) {
        int32_t parent;
        float distance;

        if (world_items[index].active == 0 || item_parent_human(index) != -1)
            continue;
        parent = item_parent_item(index);
        if (parent != -1 && item_parent_human(parent) != -1)
            continue;
        distance = math_point_segment_distance(origin, reach_end, world_items[index].position);
        if (!(distance >= best)) {
            nearest = index;
            best = distance;
        }
    }
    nearest_item = nearest;

    /* With something in the hand, only an item it accepts counts. */
    if (nearest != -1 && held_count > 0) {
        int32_t held_type = world_items[human_hand_item(human, hand)].type;

        if (item_type_accepts(held_type, world_items[nearest].type) == 0)
            nearest = -1;
        nearest_item = nearest;
    }
}

/* The local human, or -1. */
static int32_t local_human(void)
{
    int32_t player = local_player;

    return player == -1 ? -1 : player_human(player);
}

static void update_effects(void)
{
    int32_t human = local_human();
    float flash, level, fade;
    int32_t value;

    flash = effect_flash;
    if (human != -1) {
        value = human_unknown_3c(human);
        if (value < effect_previous_3c)
            flash = 1.0f;
        effect_previous_3c = value;
    } else {
        effect_previous_3c = 0;
    }
    effect_flash = flash > 0.0625f ? flash + -0.0625f : 0.0f;

    if (human != -1 && (value = human_unknown_78(human)) > 0) {
        level = (float)value * 0.015625f;
        effect_183f7aed8 = level;
        if (level > 0.75f) {
            effect_183f7aed8 = 0.75f;
            level = 0.75f;
        }
    } else {
        effect_183f7aed8 = 0.0f;
        level = 0.0f;
    }

    if (human != -1 && (value = human_unknown_6d50(human)) < 75) {
        float low = (float)add_int(value, -50) * 0.04f;

        low = low > 0.0f ? low : 0.0f;
        low = low < 1.0f ? low : 1.0f;
        level = 1.0f - low;
        effect_183f7aed8 = level;
        if (level > 0.875f)
            effect_183f7aed8 = 0.875f;
        else if (level > 1.0f)
            effect_183f7aed8 = 1.0f;
    } else if (level > 1.0f) {
        effect_183f7aed8 = 1.0f;
    }

    fade = effect_183f7aedc;
    effect_183f7aedc = fade > 0.0f ? fade + -0.016666668f : 0.0f;
}

/* Everything a due tick does. */
static void run_tick(void)
{
    float angle;

    advance_game();

    angle = (float)((double)game_spin_angle + 0.02617993877991494);
    game_spin_angle = angle;
    if ((double)angle > 3.141592653589793)
        game_spin_angle = (float)((double)angle - 6.283185307179586);
    game_unknown_1a4d2dce0 = add_int(game_unknown_1a4d2dce0, 1);

    if (game_state <= 2)
        sub_14002B9C0();
    sub_14008F1B0();
    sub_14008F050();
    if (game_connected == 0 || replay_active != 0) {
        sub_1400C2210();
        sub_1400CF160();
    }
    if (game_state <= 2) {
        sr_world_update_effects();
        sr_world_update_particles();
        sr_world_expire_bullets();
        expire_effects();
        find_nearest_item();
    }

    if (game_tick != game_tick_seen)
        sub_140040490();
    frame_pass_count = add_int(frame_pass_count, 1);
    if ((uint32_t)subtract_int(game_tick, game_tick_mark) > 31)
        game_tick_mark = subtract_int(game_tick, 1);

    update_effects();
}

static void count_down(int32_t *timer)
{
    if (*timer > 0)
        *timer = *timer - 1;
}

int game_frame(int process_input)
{
    uint32_t interval = frame_slow_pacing != 0 ? 100 : 16;
    uint32_t now, elapsed;
    int due;
    float lanes[2][4] = { { 0.0f, 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f, 0.0f } };
    double day;

    /* The four toggle keys (see frame.h about their place). */
    if (key_pressed(0x183F7C9A4ULL, 0x183F7C7A4ULL)) {
        toggle_151e461d4 ^= 1;
        SR_GLOBAL(uint8_t, 0x183F7C7A4ULL) = 1;
    }
    if (key_pressed(0x183F7C99AULL, 0x183F7C79AULL)) {
        toggle_151e461d0 ^= 1;
        SR_GLOBAL(uint8_t, 0x183F7C79AULL) = 1;
    }
    if (key_pressed(0x183F7C99CULL, 0x183F7C79CULL)) {
        toggle_183f7c2fc ^= 1;
        SR_GLOBAL(uint8_t, 0x183F7C79CULL) = 1;
    }
    if (key_pressed(0x183F7C99DULL, 0x183F7C79DULL))
        toggle_183f7aee0 ^= 1;
    SR_GLOBAL(uint8_t, 0x183F7C79DULL) = 1;

    /* A replay plays at 16 ms a pass, 3 ms or unpaced while its speed keys are down. */
    if (replay_active != 0) {
        interval = 16;
        if (SR_GLOBAL(uint8_t, 0x183F7C969ULL) != 0)
            interval = 3;
        if (SR_GLOBAL(uint8_t, 0x183F7C96AULL) != 0)
            interval = 0;
    }

    now = ticks();
    elapsed = now - frame_next_time;
    if (elapsed < interval)
        return 0;
    frame_next_time = elapsed < 250 ? frame_next_time + interval : now;
    frame_start_time = ticks();

    if (process_input) {
        if (local_player == -1)
            sub_140104EA0(0, 0, 0.0);
        if (game_unknown_189f0eea0 != 0)
            sub_140104EA0(2, 0, 0.0);
        if (handle_keys())
            return 1;
    }

    /* A tick is due unless paused; a replay also runs until it reaches its target tick. */
    if (game_single_step != 0) {
        game_paused = 0;
        due = 1;
    } else {
        due = game_paused == 0;
    }
    if (due && game_unknown_189f0eea0 != 0)
        due = 0;
    if (!due && replay_active != 0 && game_tick < replay_target_tick)
        due = 1;
    if (due)
        run_tick();

    for (int index = 0; index < 128; index++) {
        count_down(&countdown_192e8f668(index, 0x0));
        count_down(&countdown_192e8f668(index, 0x98));
    }
    for (int index = 0; index < 32; index++)
        count_down(&countdown_18399ef78(index));

    day = (double)(float)game_day_time;
    game_unknown_183ebfd58 = 0.5f;
    game_sun_angle = (float)(day * 1.2120342027739198e-06 + 3.14159265359);
    if (game_type == 4)
        game_sun_angle = (float)(day * 1.1188008025605413e-06 + 3.14159265359);

    if (game_single_step != 0)
        game_pause_pair = 1;             /* paused again, single step used up */

    /* Duration of this pass and the average of the last 32, summed in the original's lanes. */
    frame_durations[frame_duration_index] = (int32_t)(ticks() - frame_start_time);
    frame_duration_average = 0.0f;
    frame_duration_index = (frame_duration_index + 1) & 31;
    for (int block = 0; block < 4; block++)
        for (int lane = 0; lane < 4; lane++) {
            lanes[0][lane] += (float)frame_durations[block * 8 + lane];
            lanes[1][lane] += (float)frame_durations[block * 8 + 4 + lane];
        }
    for (int lane = 0; lane < 4; lane++)
        lanes[0][lane] += lanes[1][lane];
    frame_duration_average = ((lanes[0][2] + lanes[0][0]) + (lanes[0][3] + lanes[0][1])) * 0.03125f;
    return 1;
}
