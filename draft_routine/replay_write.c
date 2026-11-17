/* DRAFT, NOT COMPILED, NOT VERIFIED. Replay recording: 0x140127630.
 * Read from the disassembly; the sibling read is src/engine/replay.c.
 *
 * To finish: move into src/engine/replay.c (+ replay.h), rewire
 * sub_140127630 in src/client/client_replay.c (callers ignore its result:
 * client_humans.c), add t_replaywrite.c + .mutations, prove plain and
 * --client-wrappers (NC_WRAPPERS: 140127630), then mutate.
 *
 * Notes for the suite:
 *  - callees to redirect with nc_redirect: 0x140110D00(255, -1),
 *    0x140106160(255), 0x14010EFF0(cursor, 255); log their arguments.
 *  - the original returns the new replay_position/length in rax; no caller
 *    reads it.
 *  - the inline 16-bit write of the event backlog (0x1401277B3..0x14012784A)
 *    looks like net_write_bits(&value, 16); check that equivalence, including
 *    the net_write_position >= 0x10000 skip.
 *  - 0x144CBFAAC is NOT game_type (0x183EBFAAC): it is the replay's own
 *    world-event cursor (low 16 bits used), unnamed so far (g_144CBFAAC).
 */
#include <string.h>
#include "replay.h"
#include "net_bits.h"
#include "frame.h"
#include "round_update.h"
#include "world.h"
#include "world_streets.h"

extern void sub_140110D00(int a, int b);      /* 0x140110D00 */
extern int64_t sub_140106160(int a);          /* 0x140106160 */
extern void sub_14010EFF0(int cursor, int a); /* 0x14010EFF0 */

#define replay_event_cursor SR_GLOBAL(int32_t, 0x144CBFAACULL)   /* g_144CBFAAC */

/* Stores the replay header once (replay_position == 0), then one state frame:
   state, timer, day time, then every world event since the last frame. */
void replay_write_frame(void)
{
    int32_t position = replay_position;

    if (position == 0) {
        /* Header frame: type 6, game type, the 32-byte map name. */
        net_write_position = 1;
        net_write_bit = 0;                       /* one 64-bit store of 1 */
        net_write_buffer[0] = 6;
        net_write_bits((const uint32_t *)&game_type, 4);
        int32_t at = net_write_position;
        if (at < NET_BUFFER_SIZE) {
            if (net_write_bit > 0) {
                at++;
                net_write_bit = 0;
                net_write_position = at;
            }
            memcpy(net_write_buffer + at, world_map_name, 32);
            at = net_write_position + 32;
        }
        net_write_position = at + 1;
        if ((uint32_t)net_write_position < replay_buffer_capacity) {
            memcpy(replay_buffer, net_write_buffer, (size_t)net_write_position);
            position = replay_position + net_write_position;   /* re-read */
            replay_position = position;
        }
        replay_length = position;
    }

    /* State frame. */
    net_write_position = 1;
    net_write_bit = 0;
    net_write_buffer[0] = 5;
    net_write_bits(&game_state, 4);
    net_write_bits((const uint32_t *)&round_timer, 24);
    net_write_bits((const uint32_t *)&game_day_time, 30);
    SR_GLOBAL(uint64_t, 0x1ABC4D5E0ULL) = 0;
    SR_GLOBAL(uint32_t, 0x1ABC4D5E8ULL) = 0;
    sub_140110D00(255, -1);
    SR_GLOBAL(uint32_t, 0x1ABC2D894ULL) = SR_GLOBAL(uint32_t, 0x1AD04B20CULL);
    sub_140106160(255);
    SR_GLOBAL(uint32_t, 0x1ABC5B60CULL) = SR_GLOBAL(uint32_t, 0x1ABC5B604ULL);

    /* Events recorded since the cursor, wrapping at 16 bits. */
    int32_t cursor = replay_event_cursor;
    int32_t pending = world_event_count - cursor;
    if (world_event_count < cursor)
        pending += 0x10000;
    uint32_t pending16 = (uint16_t)pending;
    if (net_write_position < NET_BUFFER_SIZE)
        net_write_bits(&pending16, 16);          /* inlined in the original */
    net_write_bits((const uint32_t *)&replay_event_cursor, 16);
    if (pending > 0) {
        uint64_t remaining = (uint32_t)pending;
        for (;;) {
            sub_14010EFF0(cursor, 255);
            replay_event_cursor++;
            replay_event_cursor = (int32_t)(uint16_t)replay_event_cursor;
            if (--remaining == 0) break;
            cursor = replay_event_cursor;
        }
    }

    net_write_position += 1;
    int32_t at = replay_position;
    if ((uint32_t)(at + net_write_position) < replay_buffer_capacity) {
        memcpy(replay_buffer + at, net_write_buffer, (size_t)net_write_position);
        replay_position = at + net_write_position;
        replay_length = replay_position;
    } else {
        replay_length = at;
    }
}
