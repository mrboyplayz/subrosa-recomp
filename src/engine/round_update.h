/* The round mode (game type 3) update, run once per tick by the game update
 * dispatcher (0x1400F5820). game_state selects the phase:
 *
 *   1  lobby: players on a corporation are spawned once the timer is below
 *      5400; when everyone is ready the timer jumps to 5400, which sets up
 *      the round (vehicles, phones, manager announcements); at 0 the doors
 *      open and the round starts with round_settings->round_minutes * 3600
 *      ticks.
 *   2  round: hourly resets, faster time while every human waits in its
 *      corporation or every valuable is in a vault, doors opened for
 *      corporations without a living player, and the end when the timer
 *      runs out.
 *   3  round over: announcements at fixed ticks, then each corporation's
 *      richest player becomes its manager and the game is reset.
 *
 * Fields whose purpose is not established are named after their offset.
 */
#ifndef SR_ENGINE_ROUND_UPDATE_H
#define SR_ENGINE_ROUND_UPDATE_H

#include <stdint.h>
#include "frame.h"

/* Ticks left in the current phase. */
#define round_timer               SR_GLOBAL(int32_t, 0x183EBFCD4ULL)
/* Lobby tick at which the doors close. */
#define round_door_close_tick     SR_GLOBAL(int32_t, 0x183EBFCDCULL)
/* Length of the round-over phase, ticks. */
#define round_over_ticks          SR_GLOBAL(int32_t, 0x183EBFD30ULL)
/* 1: winners are ranked by bank account instead of cash and shares (set
   from round_settings->weekly by 0x140095B00). */
#define round_weekly              SR_GLOBAL(int32_t, 0x183EBFCB0ULL)

/* Players (frame.h): fields read and written here. */
#define player_ready(p)           player_field(p, 0x48)    /* the lobby waits for all of them */
#define player_money(p)           player_field(p, 0x4C)
#define player_account(p)         player_field(p, 0x3C)    /* bank account record, -1: none */
#define player_unknown_68(p)      player_field(p, 0x68)    /* cleared every in-game hour */
#define player_unknown_6c(p)      player_field(p, 0x6C)    /* counted down every in-game hour */
#define player_unknown_70(p)      player_field(p, 0x70)    /* cleared every in-game hour */
#define player_unknown_88(p)      player_field(p, 0x88)    /* counted down every tick */
#define player_shares(p)          player_field(p, 0x8C)
#define player_is_manager(p)      player_field(p, 0x90)
#define player_unknown_164(p)     player_field(p, 0x164)   /* cleared on spawning */
#define player_is_bot(p)          player_field(p, 0x2D18)
#define player_model(p)           player_field(p, 0x37C0)
#define player_suit_color(p)      player_field(p, 0x37C4)
#define player_tie_color(p)       player_field(p, 0x37C8)
#define player_name(p)            (&SR_GLOBAL(char, 0x151620C64ULL + 0x3834ULL * (uint64_t)(int64_t)(p)))

/* Bank account records, 0x70 bytes from 0x160361350. */
#define account_money(a)          SR_GLOBAL(int32_t, 0x160361384ULL + 0x70ULL * (uint64_t)(int64_t)(a))

/* Corporations: three records of 0x5BC4 bytes from 0x183EBFD60 (the
   interior and vault bounds are in area_bounds.h, missions in events.h). */
#define CORPORATION_COUNT 3
#define corporation_int(c, offset) \
    SR_GLOBAL(int32_t, 0x183EBFD60ULL + 0x5BC4ULL * (uint64_t)(int64_t)(c) + (offset))
#define corporation_floats(c, offset) \
    (&SR_GLOBAL(float, 0x183EBFD60ULL + 0x5BC4ULL * (uint64_t)(int64_t)(c) + (offset)))
#define corporation_angle(c)          (*corporation_floats(c, 0x30))
#define corporation_phone_position(c) corporation_floats(c, 0x34)
#define corporation_spawn_position(c) corporation_floats(c, 0x40)
#define corporation_member_count(c)   corporation_int(c, 0x54)
#define corporation_door_open(c)      corporation_int(c, 0x60)
#define corporation_manager(c)        corporation_int(c, 0x64)    /* player, -1: none */
#define corporation_unknown_58bc(c)   corporation_int(c, 0x58BC)  /* cleared when the manager changes */
#define corporation_mission_active(c, m) corporation_int(c, 0x19C + 0x45C * (m))
#define CORPORATION_MISSIONS 16
/* Parking spots for the round's vehicles: a used flag, a position and a
   rotation, 0x34 bytes each. */
#define corporation_spot_count(c)      corporation_int(c, 0x4BB8)
#define corporation_spot_used(c, s)    corporation_int(c, 0x4BBC + 0x34 * (s))
#define corporation_spot_position(c, s) corporation_floats(c, 0x4BC0 + 0x34 * (s))
#define corporation_spot_rotation(c, s) corporation_floats(c, 0x4BCC + 0x34 * (s))

/* Eight 16-byte records refilled when a round is set up: active, a type,
   a random 0..5 and a value taken from a per-type table. Their use is not
   established. */
#define ROUND_RECORD_COUNT 8
#define round_record(i)           (&SR_GLOBAL(int32_t, 0x19021F244ULL + 0x10ULL * (uint64_t)(i)))
#define round_record_type_value(t) SR_GLOBAL(int32_t, 0x192E9A6B4ULL + 0x185C0ULL * (uint64_t)(int64_t)(t))

/* Fields of other records written while setting up. */
#define human_unknown_98(h)       SR_GLOBAL(float, 0x18329E3A0ULL + 0x6FF8ULL * (uint64_t)(int64_t)(h))
#define vehicle_unknown_3648(v)   SR_GLOBAL(int32_t, 0x15F2DC848ULL + 0x5168ULL * (uint64_t)(int64_t)(v))
#define unknown_15fd16260_7c(i)   SR_GLOBAL(int32_t, 0x15FD162DCULL + 0x5FCULL * (uint64_t)(int64_t)(i))
#define unknown_15fd16260_8(i)    SR_GLOBAL(int32_t, 0x15FD16268ULL + 0x5FCULL * (uint64_t)(int64_t)(i))
#define item_unknown_160(i)       SR_GLOBAL(int32_t, 0x182BBB2E0ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))  /* a phone's number */
#define item_unknown_278(i)       SR_GLOBAL(int32_t, 0x182BBB3F8ULL + 0x1B80ULL * (uint64_t)(int64_t)(i))

/* 0x1400F6C50 */
void round_update(void);
#endif
