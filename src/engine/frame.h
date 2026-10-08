/* One pass of the client's main loop (0x14003B920): pacing, replay and pause
 * controls, one simulation tick when one is due, and the timers that count
 * down once per pass.
 *
 * The original this is taken from carries a small patch: the instructions at
 * 0x14003B945, 0x14003B9D7 and 0x14003BA50 jump to and from a block placed at
 * 0x1400403F0, which moves the four toggle keys ahead of the pacing test and
 * changes the pacing interval. game_frame follows the patched order.
 *
 * Most of the state here is not understood yet; such pieces are named after
 * their address in the original.
 */
#ifndef SR_ENGINE_FRAME_H
#define SR_ENGINE_FRAME_H

#include <stdint.h>
#include "memory.h"

/* Returns 0 when the pass came too soon after the previous one, else 1. */
int game_frame(int process_input);

/* ---- pacing ---------------------------------------------------------------- */

#define frame_slow_pacing        SR_GLOBAL(int32_t, 0x183EBFD50ULL)   /* 100 ms between passes instead of 16 */
#define frame_next_time          SR_GLOBAL(uint32_t, 0x183EBFD40ULL)  /* milliseconds */
#define frame_start_time         SR_GLOBAL(uint32_t, 0x16B27DF84ULL)
#define frame_duration_index     SR_GLOBAL(int32_t, 0x16B27E094ULL)
#define frame_durations          (&SR_GLOBAL(int32_t, 0x16B27E098ULL))  /* the last 32, milliseconds */
#define frame_duration_average   SR_GLOBAL(float, 0x16B27E198ULL)
#define frame_pass_count         SR_GLOBAL(int32_t, 0x183EBFD38ULL)

/* ---- keys: held now, and already acted on --------------------------------- */

#define key_held(address)        SR_GLOBAL(uint8_t, address)
#define key_latched(address)     SR_GLOBAL(uint8_t, address)

/* ---- game and replay state -------------------------------------------------- */

#define game_tick                SR_GLOBAL(int32_t, 0x183EBFD34ULL)
#define game_tick_seen           SR_GLOBAL(int32_t, 0x1A4D3BD30ULL)   /* tick of the last 0x140040490 */
#define game_tick_mark           SR_GLOBAL(int32_t, 0x183EBFD3CULL)   /* kept within 31 ticks of game_tick */
#define game_single_step         SR_GLOBAL(int32_t, 0x183EBFD4CULL)
#define game_paused              SR_GLOBAL(int32_t, 0x183EBFD48ULL)   /* single_step follows it in memory */
#define game_pause_pair          SR_GLOBAL(uint64_t, 0x183EBFD48ULL)
#define game_unknown_189f0eea0   SR_GLOBAL(int32_t, 0x189F0EEA0ULL)
#define game_connected           SR_GLOBAL(int32_t, 0x1AD04ADC0ULL)   /* the simulation runs locally when set */
#define game_state               SR_GLOBAL(uint32_t, 0x183EBFCCCULL)
#define game_state_time          SR_GLOBAL(int32_t, 0x183EBFCD8ULL)   /* passes spent in state 2 */
#define game_type                SR_GLOBAL(int32_t, 0x183EBFAACULL)
#define game_unknown_183f7ca41   SR_GLOBAL(uint8_t, 0x183F7CA41ULL)
#define game_unknown_183ebfcc8   SR_GLOBAL(int32_t, 0x183EBFCC8ULL)
#define game_unknown_1a4d2dce4   SR_GLOBAL(int32_t, 0x1A4D2DCE4ULL)
#define game_unknown_1a4d2dce0   SR_GLOBAL(int32_t, 0x1A4D2DCE0ULL)
#define game_unknown_16b165f70   SR_GLOBAL(int32_t, 0x16B165F70ULL)
#define game_unknown_16b1f5f74   SR_GLOBAL(int32_t, 0x16B1F5F74ULL)
#define game_day_time            SR_GLOBAL(int32_t, 0x16B2A2EC0ULL)   /* advances by 3 a tick */
#define game_sun_angle           SR_GLOBAL(float, 0x183EBFD54ULL)
#define game_unknown_183ebfd58   SR_GLOBAL(float, 0x183EBFD58ULL)
#define game_spin_angle          SR_GLOBAL(float, 0x18402CCA0ULL)     /* wraps at pi */

#define replay_active            SR_GLOBAL(int32_t, 0x144CBFAA4ULL)
#define replay_position          SR_GLOBAL(int32_t, 0x144CBFAB0ULL)
#define replay_length            SR_GLOBAL(int32_t, 0x144CBFAB4ULL)
#define replay_target_tick       SR_GLOBAL(int32_t, 0x144CBFAC0ULL)
#define replay_unknown_144cbfac8 SR_GLOBAL(int32_t, 0x144CBFAC8ULL)

/* Toggles of the four keys handled first. */
#define toggle_151e461d4         SR_GLOBAL(uint32_t, 0x151E461D4ULL)
#define toggle_151e461d0         SR_GLOBAL(uint32_t, 0x151E461D0ULL)
#define toggle_183f7c2fc         SR_GLOBAL(uint32_t, 0x183F7C2FCULL)
#define toggle_183f7aee0         SR_GLOBAL(uint32_t, 0x183F7AEE0ULL)

/* ---- players, humans, items ------------------------------------------------- */

#define local_player             SR_GLOBAL(int32_t, 0x183F7C540ULL)   /* -1: none */

/* Players: 0x151620C60, 256 of 0x3834 bytes. */
#define PLAYER_CAPACITY 256
#define player_field(index, offset) \
    SR_GLOBAL(int32_t, 0x151620C60ULL + 0x3834ULL * (uint64_t)(int64_t)(index) + (offset))
#define player_active(index)        player_field(index, 0x0)
#define player_human(index)         player_field(index, 0x9C)     /* -1: none */
#define player_flags(index)         player_field(index, 0x120)    /* 0x10: uses the other hand */
#define player_unknown_2d18(index)  player_field(index, 0x2D18)

/* Humans: 0x18329E308, 0x6FF8 bytes each (world.h). */
#define human_int(index, offset) \
    SR_GLOBAL(int32_t, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)(index) + (offset))
#define human_floats(index, offset) \
    (&SR_GLOBAL(float, 0x18329E308ULL + 0x6FF8ULL * (uint64_t)(int64_t)(index) + (offset)))
#define human_vehicle(index)        human_int(index, 0x28)        /* -1: on foot */
#define human_unknown_3c(index)     human_int(index, 0x3C)
#define human_unknown_78(index)     human_int(index, 0x78)
#define human_reach_origin(index)   human_floats(index, 0x5CC)
#define human_reach_direction(index) human_floats(index, 0x614)
#define human_hand_count(index, hand) human_int(index, 0x6AD0 + 0x28 * (hand))   /* items held */
#define human_hand_item(index, hand)  human_int(index, 0x6AD4 + 0x28 * (hand))
#define human_unknown_6d50(index)   human_int(index, 0x6D50)

/* Items: 0x182BBB180 (world.h). */
#define item_parent_human(index) \
    SR_GLOBAL(int32_t, 0x182BBB180ULL + 0x1B80ULL * (uint64_t)(int64_t)(index) + 0x24)
#define item_parent_item(index) \
    SR_GLOBAL(int32_t, 0x182BBB180ULL + 0x1B80ULL * (uint64_t)(int64_t)(index) + 0x28)

/* Whether an item of type `held` can take one of type `other`: 0x182A7E29C,
   one row of 1,268 per type (world.h's WorldItemType, offset 0x11C). */
#define item_type_accepts(held, other) \
    SR_GLOBAL(int32_t, 0x182A7E29CULL + 4ULL * (uint64_t)(0x4F4LL * (int64_t)(held) + (int64_t)(other)))

#define nearest_item             SR_GLOBAL(int32_t, 0x18399EB60ULL)   /* item the local human could pick up, -1: none */

/* ---- screen effects of the local human ------------------------------------- */

#define effect_previous_3c       SR_GLOBAL(int32_t, 0x183F79DF8ULL)
#define effect_flash             SR_GLOBAL(float, 0x183F79DFCULL)     /* set to 1 when human_unknown_3c drops */
#define effect_183f7aed8         SR_GLOBAL(float, 0x183F7AED8ULL)
#define effect_183f7aedc         SR_GLOBAL(float, 0x183F7AEDCULL)

/* ---- lists counted down every pass ---------------------------------------- */

/* 0x1A771F380: records of 0x94 bytes whose second word is the time they have left. */
typedef struct FrameTimedRecord {
    int32_t unknown_0;
    int32_t time_left;                   /* from 0xFFFF never expires */
    uint8_t unknown_8[0x94 - 8];
} FrameTimedRecord;

#define frame_timed_records      (&SR_GLOBAL(FrameTimedRecord, 0x1A771F380ULL))
#define frame_timed_record_count SR_GLOBAL(int32_t, 0x1A7971D80ULL)

/* 0x192E8F668: 128 records of 0x130 bytes with countdowns at 0 and 0x98. */
#define countdown_192e8f668(index, offset) \
    SR_GLOBAL(int32_t, 0x192E8F668ULL + 0x130ULL * (uint64_t)(index) + (offset))
/* 0x18399EF78: 32 countdowns, 0x20C bytes apart. */
#define countdown_18399ef78(index) SR_GLOBAL(int32_t, 0x18399EF78ULL + 0x20CULL * (uint64_t)(index))

#endif
