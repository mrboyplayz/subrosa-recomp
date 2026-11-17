/* Network stream + replication region (0x140127900, 0x14012AF00,
 * 0x14012C450, 0x140132990, 0x140132E30): the layer-0 mesh release over the
 * world block records (active flags, the 100-tagged voxel link mask, mesh
 * ids at the 1024 boundary, sub_1401941F0 releases), the outgoing packet
 * stream appends (the byte/bit pair of 5, the bit-writer boundary cases,
 * payload lengths 0..64, the 0x10000 skip) and the chdir pair through the
 * bound import.  */
// NC_WRAPPERS: 140127900 14012AF00 14012C450 140132990 140132E30
#include <stdint.h>
#include <string.h>
#include "nc.h"
#include "memory.h"
#include "world.h"
#include "record_slots.h"
#include "item.h"
#include "net_bits.h"

/* Prototypes of the port's routines (the native build never compiles the
 * port, so the suite declares the same signatures itself). */
int64_t net_stream_return_peer(int64_t stream, int64_t peer);
void net_stream_release_layer_meshes(void);
int64_t net_stream_chdir_directories(void);
void replication_read_players(void);
void net_stream_send_payload(int peer, uint16_t command, int64_t a3, const char *payload);

#ifdef NC_NATIVE
#define return_peer(a, b)       ((int64_t (*)(int64_t, int64_t))NC_ADDR(0x140127900))((int64_t)(a), (int64_t)(b))
#define release_layer_meshes()  ((void (*)(void))NC_ADDR(0x14012AF00))()
#define chdir_directories()     ((int64_t (*)(void))NC_ADDR(0x14012C450))()
#define read_players()          ((void (*)(void))NC_ADDR(0x140132E30))()
#define send_payload(peer, cmd, a3, p) \
    ((void (*)(int, uint16_t, int64_t, const char *))NC_ADDR(0x140132990))((peer), (uint16_t)(cmd), (int64_t)(a3), (p))
#elif defined(NC_CLIENT_WRAPPERS)
#define return_peer(a, b)       net_stream_return_peer((int64_t)(a), (int64_t)(b))
#define release_layer_meshes()  net_stream_release_layer_meshes()
#define chdir_directories()     net_stream_chdir_directories()
#define read_players()          replication_read_players()
#define send_payload(peer, cmd, a3, p) net_stream_send_payload((peer), (uint16_t)(cmd), (int64_t)(a3), (p))
#else
#define return_peer(a, b)       net_stream_return_peer((int64_t)(a), (int64_t)(b))
#define release_layer_meshes()  net_stream_release_layer_meshes()
#define chdir_directories()     net_stream_chdir_directories()
#define read_players()          replication_read_players()
#define send_payload(peer, cmd, a3, p) net_stream_send_payload((peer), (uint16_t)(cmd), (int64_t)(a3), (p))
#endif

/* The two directory names the client chdirs through, written by the fixture
 * (the original reads the bytes at 0x182A7D140 and 0x182A7D340). */
static char chdir_name_1[8] = "data";
static char chdir_name_2[8] = "mission";

/* The chdir goes through 0x14024C22C (crt_chdir) to SetCurrentDirectoryA;
 * both builds log the path instead of touching the working directory. */
static uint64_t chdir_hash;
static uint32_t chdir_calls;
static void rec_chdir(const char *path)
{
    chdir_calls++;
    chdir_hash = (chdir_hash ^ (uint64_t)(uintptr_t)path) * 0x100000001B3ULL;
}

static uint64_t release_hash;
static uint32_t release_calls;
static void rec_release(int channel, int mesh)
{
    release_calls++;
    release_hash = (release_hash ^ (uint32_t)channel ^ ((uint64_t)mesh << 32)) * 0x100000001B3ULL;
}

static uint64_t forward_hash;
static uint32_t forward_calls;
static void rec_forward(int peer, uint16_t command, int64_t a3)
{
    forward_calls++;
    forward_hash = (forward_hash ^ (uint32_t)peer ^ ((uint64_t)command << 16)
                    ^ ((uint64_t)a3 << 32)) * 0x100000001B3ULL;
}

/* The port reaches the unported crt_chdir through its absolute symbol; the
 * native build lands on the same jump. */
static void install_recorders(void)
{
    nc_redirect(0x14024C22C, rec_chdir);
    nc_redirect(0x1401941F0, rec_release);
    nc_redirect(0x140130350, rec_forward);
}

/* The world records (0x154161240, 4096 of 0x6C48 bytes) — 0x14012AF00 checks
 * the active flag of every record (its loop walks record_base + 0x3008 and
 * reads the flag at -0x3008). */
static WorldBlockRecord *layer_records(void)
{
    return &world_block_records[0];
}

static void randomize_records(void)
{
    WorldBlockRecord *record;

    for (record = layer_records(); record < &SR_GLOBAL(WorldBlockRecord, 0x15ADA9240ULL); ++record) {
        int k;

        record->active = nc_chance(70) ? (int32_t)nc_rand() : 0;
        for (k = 0; k < 512; k++) {
            uint32_t word = (uint32_t)nc_rand();

            if (nc_chance(12))
                word = (word & 0x1FFFFFFFu) | ((uint32_t)nc_rand_below(8) << 29);
            record->unknown_3008[k] = word;
            record->unknown_808[k] = (uint32_t)nc_rand();
        }
        for (k = 0; k < 4; k++) {
            static const uint32_t ids[] = {0, 1, 1023, 1024, 1025, 0x3FF, 0x400, 0x800, 0xC00,
                                           0xFFFFFFFFu, 0xFFFFF400u};
            record->meshes[k] = nc_chance(50) ? (int32_t)nc_rand() : -1;
            record->ids[k] = nc_chance(60) ? ids[nc_rand_below(sizeof ids / sizeof ids[0])]
                                           : (uint32_t)nc_rand();
        }
        record->unknown_6024 = (int32_t)nc_rand();
        record->unknown_602c = (int32_t)nc_rand();
    }
}

static void print_records(void)
{
    WorldBlockRecord *record;
    uint64_t act = 0, ids = 0, mes = 0;
    int n;

    nc_line("release %u %016llx", release_calls, (unsigned long long)release_hash);
    /* The full state of the first 32 records (the mutations land there),
       then a coarse check of the rest (active, meshes, ids). */
    nc_line("records %016llx",
            (unsigned long long)nc_hash(layer_records(), 32 * sizeof(WorldBlockRecord)));
    for (record = layer_records() + 32, n = 32; record < &SR_GLOBAL(WorldBlockRecord, 0x15ADAC248ULL);
         ++record, ++n) {
        if (record->active) {
            act = (act ^ (uint64_t)(uint32_t)n) * 0x100000001B3ULL;
            ids = (ids ^ (uint64_t)record->ids[0]) * 0x100000001B3ULL;
            mes = (mes ^ (uint64_t)(uint32_t)record->meshes[0]) * 0x100000001B3ULL;
        }
    }
    nc_line("records active %016llx", (unsigned long long)act);
    nc_line("records ids %016llx", (unsigned long long)ids);
    nc_line("records meshes %016llx", (unsigned long long)mes);
}

/* The 256 players (0x151620C60, 0x3834 bytes each), the 256 replication
 * snapshots (0x1A8E379E0, 0x50 bytes each) and the peer blocks (0x1A8E3DA20,
 * 0x2E1E0 bytes each: the player index word at +0x18, the cursor word as the
 * block's last word at 0x1A8E6BBFC). */
static void randomize_players(void)
{
    int i;
    int32_t peers = (int32_t)nc_rand_below(9);

    for (i = 0; i < 256; i++) {
        uint32_t *player = &SR_GLOBAL(uint32_t, 0x151620C60ULL + 0x3834ULL * (uint64_t)i);
        ReplicationSnapshotSlot *slot = &replication_snapshot_slots[i];
        int k;

        if (nc_chance(25)) {
            player[0x3C / 4] = 0xFFFFFFFFu;                  /* the snapshot word: no record */
        } else {
            player[0x3C / 4] = (uint32_t)nc_rand();
            if (i < 8)
                player[0x3C / 4] &= 0xFFu;                   /* keep it near the slot count */
        }
        /* The player region's own record words: the name bytes the slot
           copies, the second mask word and the type word at +0x30. */
        for (k = 0; k < 16; k++)
            player[k + 1] = (uint32_t)nc_rand();
        for (k = 0; k < 6; k++)
            player[4 + k] = (uint32_t)nc_rand();
        player[0x30 / 4] = nc_chance(10) ? 0xFFFFFFFFu : (uint32_t)nc_rand();
        slot->active = nc_chance(60) ? (uint32_t)nc_rand() : 0;
        slot->unknown_04[0] = nc_chance(15) ? (uint32_t)nc_rand_below(4) : (uint32_t)nc_rand();
        for (k = 0; k < 18; k++)
            slot->unknown_04[k] = (uint32_t)nc_rand();
    }
    /* The peer blocks the routine walks: the player index word at +0x18 and
       the cursor word (the block's last word at 0x1A8E6BBFC). */
    for (i = 0; i < 16; i++) {
        SR_GLOBAL(uint32_t, 0x1A8E3DA20ULL + 0x2E1E0ULL * (uint64_t)i + 0x18ULL) =
            nc_chance(20) ? 0xFFFFFFFFu : (uint32_t)nc_rand_below(300);
        SR_GLOBAL(uint32_t, 0x1A8E6BBFCULL + 0x2E1E0ULL * (uint64_t)i) =
            nc_chance(30) ? 0xFFFFFFFFu : (uint32_t)nc_rand_below(300);
    }
    item_link_peer_count = peers;
}

static void print_players(void)
{
    nc_line("forward %u %016llx", forward_calls, (unsigned long long)forward_hash);
    nc_line("players %016llx", (unsigned long long)nc_hash((void *)(uintptr_t)0x151620C60ULL, 0x1D9EC0ULL));
    nc_line("snapshots %016llx",
            (unsigned long long)nc_hash(&replication_snapshot_slots[0], 256 * 0x50));
    nc_line("peer count %d", item_link_peer_count);
}

static const char *make_payload(int n, int length)
{
    static char buffer[80];
    int i;

    for (i = 0; i < 64; i++)
        buffer[i] = (char)('A' + (i + n) % 26);
    buffer[length] = '\0';
    return buffer;
}

static void randomize_stream(int n)
{
    static const int32_t bytes[] = {0, 1, 4, 5, 6, 7, 8, 4096, 0xFFFE, 0xFFFF, 0x10000, 0x10001, -1};
    static const int32_t bits[] = {0, 1, 2, 3, 5, 6, 7, 8, -1};

    net_write_position = bytes[nc_rand_below(sizeof bytes / sizeof bytes[0])];
    net_write_bit = bits[nc_rand_below(sizeof bits / sizeof bits[0])];
    for (int i = 0; i < 32; i++)
        net_write_buffer[i] = (uint8_t)nc_rand();
    (void)n;
}

static void print_stream(void)
{
    nc_line("stream byte %d bit %d type %u", net_write_position, net_write_bit,
            SR_GLOBAL(uint32_t, 0x18539D408ULL));
    nc_line("stream bytes %016llx", (unsigned long long)nc_hash(net_write_buffer, 0x60));
}

int main(void)
{
    static const int lengths[] = {0, 1, 5, 6, 7, 62, 63, 64, 65, 100};
    int op;

    nc_map_image();
    install_recorders();
    /* State the routines read or write, put back before every case. */
    nc_save(layer_records(), 4096 * sizeof(WorldBlockRecord));
    nc_save((void *)(uintptr_t)0x151620C60ULL, 0x1D9EC0ULL);
    nc_save(&replication_snapshot_slots[0], 256 * 0x50);
    nc_save(&item_link_peer_count, 4);
    nc_save((void *)(uintptr_t)0x1A8E3DA20ULL, 0x2E1E0ULL * 9);
    nc_save(&net_write_position, 12);
    nc_save(net_write_buffer, 0x2000);
    nc_save((void *)(uintptr_t)0x182A7D140ULL, 0x400);
    nc_save((void *)(uintptr_t)0x18539D3A0ULL, 0x80);

    for (op = 0; op < 6; op++) for (int n = 0; n < nc_cases(200); n++) {
        nc_restore();
        nc_seed((uint64_t)op * 1000003u + (uint64_t)n);
        nc_set_mxcsr(0x1F80);
        chdir_calls = release_calls = forward_calls = 0;
        chdir_hash = release_hash = forward_hash = 0;

        switch (op) {
        case 0:                                       /* 0x140127900 */
            nc_line("peer %016llx", (unsigned long long)return_peer((int64_t)nc_rand(), (int64_t)nc_rand()));
            break;
        case 1:                                       /* 0x14012AF00 */
            randomize_records();
            release_layer_meshes();
            print_records();
            break;
        case 2:                                       /* 0x14012C450 */
            memcpy((void *)(uintptr_t)0x182A7D140ULL, chdir_name_1, sizeof chdir_name_1);
            memcpy((void *)(uintptr_t)0x182A7D340ULL, chdir_name_2, sizeof chdir_name_2);
            nc_line("chdir %d %u %016llx", (int)chdir_directories(), chdir_calls,
                    (unsigned long long)chdir_hash);
            break;
        case 3:                                       /* 0x140132E30 */
            randomize_players();
            read_players();
            print_players();
            break;
        case 4: {                                     /* 0x140132990 */
            int length = lengths[n % (sizeof lengths / sizeof lengths[0])];
            int peer = (int)nc_rand_below(9);
            uint16_t command = (uint16_t)nc_rand();
            int64_t a3 = (int64_t)nc_rand();

            randomize_stream(n);
            send_payload(peer, command, a3, make_payload(n, length));
            print_stream();
            nc_line("forwarded %u %016llx", forward_calls, (unsigned long long)forward_hash);
            break;
        }
        default: {                                    /* the whole stream at once */
            int length = lengths[nc_rand_below(sizeof lengths / sizeof lengths[0])];

            randomize_records();
            randomize_players();
            randomize_stream(n);
            send_payload((int)nc_rand_below(9), (uint16_t)nc_rand(), (int64_t)nc_rand(),
                         make_payload(n, length));
            release_layer_meshes();
            read_players();
            print_records();
            print_players();
            print_stream();
            break;
        }
        }
    }
    return 0;
}
