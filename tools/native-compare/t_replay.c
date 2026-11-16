/* The replay playback read (0x140127300) against the installed executable.
 * Both builds run the same recorded-stream cases: header frames and state
 * frames over a randomised replay buffer, refills of the net read buffer,
 * the world event spawn loop (its callees are redirected to a recorder),
 * and the live-record count. The net readers themselves (net_bits.h) are
 * the same proven code in both builds. */
// NC_WRAPPERS: 140127300
#include <string.h>
#include "nc.h"
#include "memory.h"
#include "net_bits.h"
#include "frame.h"
#include "round_update.h"
#include "world.h"
#include "world_streets.h"
#include "replay.h"

#ifdef NC_NATIVE
#define read_frame() ((void (*)(void))NC_ADDR(0x140127300))()
#elif defined(NC_CLIENT_WRAPPERS)
void sub_140127300(void);
#define read_frame() sub_140127300()
#else
#define read_frame() replay_read_frame()
#endif

/* The replay buffer points into the fixture, one 64 KiB in, so that refill
 * reads from a negative cursor stay inside it (both builds see the same
 * bytes). The redirect stubs keep a call log instead of running the world
 * event routines. */
static uint8_t replay_data[NET_BUFFER_SIZE * 3];
static uint64_t spawn_hash;
static uint32_t spawn_calls, reset_calls;

static void rec_world_spawn(int event)
{
    spawn_calls++;
    spawn_hash = (spawn_hash ^ (uint32_t)event) * 0x100000001B3ULL;
}

static void rec_world_reset(void)
{
    reset_calls++;
}

static void install_recorders(void)
{
    nc_redirect(0x14018F1B0, rec_world_reset);
    nc_redirect(0x14018DBF0, rec_world_spawn);
}

static void random_bytes(uint8_t *p, size_t n)
{
    for (size_t k = 0; k < n; k++) p[k] = (uint8_t)nc_rand();
}

int main(void)
{
    static const int32_t positions[] = {0, 1, 2, 17, 32, 33, 65518, 65534, 65535, 65536, -1, -65536};
    static const int32_t lengths[] = {0, 1, 2, 63, 64, 65, 4096, 65535, 65536, 100000, -1};
    static const uint32_t caps[] = {0, 1, 0x10000, 0x10001, 0x400000, 0x80000000u, 0xFFFFFFFFu};
    static const int read_lens[] = {1, 2, 3, 14, 15, 31, 32, 33, 63, 64, 65, NET_BUFFER_SIZE};
    static const int types[] = {5, 6, 7, 0, 0xFF};

    nc_map_image();
    install_recorders();
    /* State the routine reads or writes, put back before every case. */
    nc_save(&net_read_length, 12);
    nc_save(net_read_buffer, NET_BUFFER_SIZE);
    nc_save(&replay_buffer_capacity, 44);
    nc_save(&game_type, 4);
    nc_save(world_map_name, 32);
    nc_save(&game_state, 4);
    nc_save(&round_timer, 4);
    nc_save(&game_tick, 4);
    nc_save(&game_day_time, 4);
    nc_save(&world_event_count, 4);
    nc_save((uint32_t *)replay_record - 4, 0x4004);

    for (int op = 0; op < 8; op++) for (int n = 0; n < nc_cases(600); n++) {
        nc_restore();
        nc_seed((uint64_t)op * 1000003u + (uint64_t)n);
        nc_set_mxcsr(0x1F80);

        /* Drawn independently: moduli of n would correlate the choices and
           leave combinations (a 32-byte stream with a header frame) unseen. */
        int32_t position = positions[nc_rand_below(sizeof positions / sizeof positions[0])];
        int32_t length = lengths[nc_rand_below(sizeof lengths / sizeof lengths[0])];
        uint32_t cap = caps[nc_rand_below(sizeof caps / sizeof caps[0])];
        int read_len = read_lens[nc_rand_below(sizeof read_lens / sizeof read_lens[0])];
        int type = types[nc_rand_below(sizeof types / sizeof types[0])];
        int refills = position < length && (uint32_t)(position + NET_BUFFER_SIZE) < cap;
        /* A state frame in a stream under 14 bytes fails a read and the
           original then observes uninitialized stack: only headers there. */
        if (!refills && read_len < 14) type = 6;

        random_bytes(replay_data, sizeof replay_data);
        random_bytes(net_read_buffer, NET_BUFFER_SIZE);
        replay_buffer = replay_data + NET_BUFFER_SIZE;
        replay_buffer_capacity = cap;
        replay_position = position;
        replay_length = length;
        net_read_length = read_len;
        net_read_position = (int)nc_rand_below(64);
        net_read_bit = op == 3 ? 1 + n % 7 : n % 2;
        /* The frame type comes from the refilled buffer at the replay cursor,
           or from the stale packet byte when the refill was skipped. */
        replay_data[NET_BUFFER_SIZE + position] = (uint8_t)type;
        net_read_buffer[0] = (uint8_t)type;
        /* The event count is the 16 bits after the type byte and 58 bits of
           state: byte 8, bit 2 on. Half the cases get a count of zero or one
           (random bits make zero a 1-in-65536 event). */
        if (nc_chance(50)) {
            uint8_t count = (uint8_t)nc_rand_below(2);
            uint8_t *streams[2] = {replay_data + NET_BUFFER_SIZE + position, net_read_buffer};
            for (int s = 0; s < 2; s++) {
                streams[s][8] = (uint8_t)((streams[s][8] & 0x03) | (count << 2));
                streams[s][9] = 0;
                streams[s][10] &= 0xFC;
            }
        }

        game_type = (int32_t)nc_rand();
        game_state = (uint32_t)nc_rand();
        round_timer = (int32_t)nc_rand();
        game_tick = (int32_t)nc_rand();
        game_day_time = (int32_t)nc_rand();
        world_event_count = (int32_t)nc_rand();
        uint32_t *record = (uint32_t *)replay_record;
        int records = 0x4004 / 4;
        if (op == 6) {                     /* no live records */
            for (int k = -4; k < records - 4; k++) record[k] = 0;
        } else if (op == 7) {              /* every dword live */
            for (int k = -4; k < records - 4; k++) record[k] = 0xFFFFFFFFu;
        } else {
            /* Half of the dwords are zero, so a miscounted stride or a
               skipped dword changes the total. */
            for (int k = -4; k < records - 4; k++)
                record[k] = nc_chance(50) ? 0 : (uint32_t)nc_rand();
            if (n % 5 == 1) {              /* each checked offset carries the flag in turn */
                for (int k = 0; k < REPLAY_RECORD_BLOCKS; k++) {
                    record[16 * k - 4 + 4 * (int)(n % 4)] = 1;
                }
            }
        }
        spawn_hash = 0; spawn_calls = 0; reset_calls = 0;

        read_frame();

        nc_line("op %d n %d net len %d pos %d bit %d | replay pos %d len %d count %d",
                op, n, net_read_length, net_read_position, net_read_bit,
                replay_position, replay_length, replay_unknown_144cbfac8);
        nc_line("  type %d tick %d gstate %u timer %d day %d events %d spawns %u/%016llx resets %u",
                game_type, game_tick, game_state, round_timer, game_day_time, world_event_count,
                spawn_calls, (unsigned long long)spawn_hash, reset_calls);
        nc_line("  readbuf %016llx mapname %016llx",
                (unsigned long long)nc_hash(net_read_buffer, NET_BUFFER_SIZE),
                (unsigned long long)nc_hash(world_map_name, 32));
    }
    return 0;
}
