/* Replay playback, checked against the original executable
 * (tools/native-compare/t_replay.c). */
#include <string.h>

#include "replay.h"
#include "net_bits.h"
#include "frame.h"
#include "round_update.h"
#include "world.h"
#include "world_streets.h"

extern void sub_14018F1B0(void);        /* 0x14018F1B0 reset the world event ring */
extern void sub_14018DBF0(int event);   /* 0x14018DBF0 spawn one recorded world event */

/* 0x140127300. When the net read stream is too short for a read, the
   original observes uninitialized stack memory for the frame type and for
   the world event count; the port's zeros there are a documented limit (the
   suite keeps the length at 3 or more, where every read succeeds or fails
   before anything is observed). */
void replay_read_frame(void)
{
    const int32_t start = replay_position;
    if (start >= replay_length)
        return;

    /* Refill the net read buffer from the replay when the next 64 KiB fits. */
    if ((uint32_t)(start + NET_BUFFER_SIZE) < replay_buffer_capacity) {
        memcpy(net_read_buffer, replay_buffer + start, NET_BUFFER_SIZE);
        net_read_length = NET_BUFFER_SIZE;
    }
    net_read_position = 0;
    net_read_bit = 0;

    uint32_t event_count = 0;   /* the recorded world event count, and the
                                   stack dword the short-read type comes
                                   from: the original observes uninitialized
                                   stack memory there, the port's zero is
                                   the documented limit above */
    uint8_t type;
    if (net_read_length < 1)
        type = (uint8_t)event_count;
    else {
        type = net_read_buffer[0];
        net_read_position = 1;
    }

    if (type == 6) {
        /* The header frame: the recorded game type and the map name. */
        net_read_bits((uint32_t *)&game_type, 4);
        int32_t position = net_read_position;
        if (position < NET_BUFFER_SIZE && position + 32 <= net_read_length) {
            if (net_read_bit > 0) {
                net_read_position = position + 1;
                net_read_bit = 0;
                position = net_read_position;
            }
            memcpy(world_map_name, net_read_buffer + position, 32);
            position += 32;
        }
        net_read_position = position + 1;
        replay_position = start + net_read_position;
        return;
    }

    /* The state frame: one simulation tick of recorded state. */
    game_tick++;
    net_read_bits(&game_state, 4);
    net_read_bits((uint32_t *)&round_timer, 24);
    net_read_bits((uint32_t *)&game_day_time, 30);
    sub_14018F1B0();
    net_read_bits(&event_count, 16);
    net_read_bits((uint32_t *)&world_event_count, 16);
    if ((int32_t)event_count > 0) {
        uint32_t remaining = event_count;
        do {
            sub_14018DBF0(world_event_count);
            world_event_count = (int32_t)(uint16_t)(world_event_count + 1);
        } while (--remaining);
    }
    net_read_position = net_read_position + 1;
    replay_position += net_read_position;

    /* Count the live-record flags: four dwords of every 64-byte block. */
    uint32_t live = 0;
    const uint32_t *record = replay_record;
    for (int block = 0; block < REPLAY_RECORD_BLOCKS; block++, record += 16) {
        if (record[-4]) live++;
        if (record[0]) live++;
        if (record[4]) live++;
        if (record[8]) live++;
    }
    replay_unknown_144cbfac8 = (int32_t)live;
}
