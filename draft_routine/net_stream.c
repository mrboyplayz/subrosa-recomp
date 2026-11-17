/* DRAFT, NOT COMPILED, NOT VERIFIED. Network stream + replication region:
 * 0x140127900, 0x14012AF00, 0x14012C450, 0x140132990, 0x140132E30.
 * Read from the disassembly (draft_routine/disasm_14012*.txt,
 * disasm_140132*.txt); the decompiled siblings are
 * src/client/client_recovery_120000.c lines 84, 90, 274, 1595 and 1662.
 *
 * To finish: move each routine into src/engine/net_stream.c (+ net_stream.h),
 * rewire sub_140XXXXXX in src/client/client_recovery_120000.c, move
 * t_netstream.c + netstream.mutations to tools/native-compare, prove plain
 * (and --client-wrappers where noted), then mutate.
 *
 * Notes for the suite (draft_routine/t_netstream.c moves with the port):
 *  - nc_save these ranges: 0x154161240 size 0x2A060C8 (the world block
 *    records; layer 0 spans 0x154164248..0x15ADAC248), 0x151620C60 size
 *    0x1D9EC0 (256 players of 0x3834), 0x1A8E379E0 size 0xC800 (256
 *    replication snapshots of 0x50), 0x1AD04ADA0 (item_link_peer_count),
 *    0x18539D3A0 size 0x80 (packet stream header: byte, bit, buffer,
 *    g_18539D408), 0x182A7D140 size 0x400 (both chdir names).
 *  - nc_bind_import both "KERNEL32.DLL!SetCurrentDirectoryA" and
 *    "KERNEL32.DLL!GetCurrentDirectoryA" (0x14012C450's chdir goes through
 *    0x14024C22C -> GetCurrentDirectoryA); log both arguments.
 *  - callees to nc_redirect and log: 0x1401941F0(channel, mesh) and
 *    0x140130350(peer, command, a3) — 0x140132990 tail-calls it.
 *  - the 0x14012AF00 invalid-mesh branch (>= 1024, unsigned) must be
 *    exercised: seed the ids with 0, 1023, 1024, -1, 0x400/0x800/0xC00 tag
 *    bits, 0xFFFFFFFF.
 */
#include <stdint.h>
#include <string.h>
#include "memory.h"
#include "world.h"
#include "world_block_maintenance.h"
#include "record_slots.h"
#include "item.h"
#include "net_bits.h"

/* The packet stream's fields live above the state base; SR_GLOBAL reaches
 * them (dword_1402B2658 is the stream's data pointer, itself the copy of
 * the stream buffer in the client's data tables). */
#define packet_out_data_word SR_GLOBAL(uint32_t, 0x18539D404ULL)  /* dword_1402B2658 */
#define packet_stream_type   SR_GLOBAL(uint8_t, 0x18539D408ULL)
#define PACKET_STREAM_MAX_BYTES 0x10000

extern void sub_1401941F0(int channel, int mesh);              /* 0x1401941F0 */
extern void sub_140130350(int peer, uint16_t command, int64_t a3); /* 0x140130350 */

/* The names 0x14012C450 chdirs through (0x182A7D140 then 0x182A7D340). */
#define STREAM_CHDIR_NAME_1 (&SR_GLOBAL(const char, 0x182A7D140ULL))
#define STREAM_CHDIR_NAME_2 (&SR_GLOBAL(const char, 0x182A7D340ULL))

/* Chdirs into "data" then "mission"; returns the second chdir's result.
 * 0x14012C450 */
int64_t net_stream_chdir_directories(void)
{
    extern int64_t crt_chdir(const char *path);                /* 0x14024C22C */

    crt_chdir(STREAM_CHDIR_NAME_1);
    return crt_chdir(STREAM_CHDIR_NAME_2);
}

/* 0x140127900: writes nothing, touches no state; it returns its second
 * argument unchanged (the compiler kept no frame). */
int64_t net_stream_return_peer(int64_t stream, int64_t peer)
{
    return peer;
}

/* Releases every mesh of every active record of layer 0 (one loop of 4096
 * records, the range 0x154164248..0x15ADAC248): masks the event-16 word to
 * 0x00FFFFFF when its top bits are the 100-tagged voxel link, clears the
 * word at +0x2800, then detaches each mesh link and releases channels 0, 3
 * and 5 exactly as world_release_block_mesh does. 0x14012AF00 */
void net_stream_release_layer_meshes(void)
{
    WorldBlockRecord *record;

    for (record = &world_block_records[8];       /* 0x154164248: layer 0 */
         record < &SR_GLOBAL(WorldBlockRecord, 0x15ADAC248ULL);
         ++record) {
        uint32_t *word;
        int quarter;

        if (!record->active)
            continue;
        for (word = record->unknown_3008;
             word < record->unknown_3008 + WORLD_CHUNK_SLOT_CAPACITY; ++word) {
            if ((*word & WORLD_BLOCK_LINK_MASK) == WORLD_BLOCK_LINK)
                *word &= 0xFF00FFFFu;
            word[WORLD_CHUNK_SLOT_CAPACITY] = 0;                /* +0x2800 */
        }
        for (quarter = 0; quarter < 4; ++quarter) {
            int32_t mesh = record->meshes[quarter];

            record->meshes[quarter] = -1;
            if ((uint32_t)mesh < 1024) {
                world_mesh_record_link((uint32_t)mesh) = -1;    /* 0x151E46224 + 0x8C24*mesh */
                sub_1401941F0(0, mesh);
                sub_1401941F0(3, mesh);
                sub_1401941F0(5, mesh);
            }
        }
    }
}

/* Reads every peer's player record into the replication snapshot slots. The
 * peer's snapshot word at +0x3C must not be 0xFFFFFFFF; a slot without an
 * active word and without the player's own written word in it is looked up
 * free (or taken), then the player name, the two 16-byte mask words at +4
 * and +0x14, the 3600 and the type word at +0x30 land in the slot.
 * 0x140132E30 */
void replication_read_players(void)
{
    uint32_t i;
    int32_t peers = item_link_peer_count;
    uint32_t *cursor;

    for (i = 0; i < 256; ++i) {
        ReplicationSnapshotSlot *slot = &replication_snapshot_slots[i];

        if (slot->active != 0 && --slot->unknown_04[0] == 0xFFFFFFFFu)
            slot->active = 0;
    }
    if (peers <= 0)
        return;
    for (cursor = &SR_GLOBAL(uint32_t, 0x1A8E6BBFCULL); peers; peers--, cursor += 47224) {
        int32_t player = (int32_t)*(cursor - 47217);
        int32_t slot_index;
        uint32_t type_word;
        uint32_t *slot;

        if (player == -1)
            continue;
        type_word = SR_GLOBAL(uint32_t, 0x151620C9CULL + 0x3834ULL * (uint64_t)player);
        if (type_word == 0xFFFFFFFFu)
            continue;
        if ((int32_t)*cursor != -1) {
            slot_index = (int32_t)*cursor;
            if (slot_index == -1)
                continue;                        /* not reachable: *cursor != -1 */
        } else {
            uint32_t walk;

            for (walk = 1; walk < 256; ++walk) {
                ReplicationSnapshotSlot *scan = &replication_snapshot_slots[walk];

                if (scan->active == 0 || *(uint32_t *)scan == type_word) {
                    slot_index = (int32_t)walk - 1;
                    *cursor = (uint32_t)slot_index;
                    break;
                }
            }
            if (walk >= 256) {
                slot_index = (int32_t)replication_snapshot_find_free_slot();
                *cursor = (uint32_t)slot_index;
            }
            if (slot_index == -1)
                continue;
        }
        slot = &SR_GLOBAL(uint32_t, 0x1A8E379E8ULL + 40ULL * (uint64_t)(int64_t)slot_index);
        slot[0] = 1;                             /* the snapshot slot's active word */
        memcpy(slot + 1, &SR_GLOBAL(uint32_t, 0x151620C64ULL + 0x3834ULL * (uint64_t)player), 16);
        memcpy(slot + 5, &SR_GLOBAL(uint32_t, 0x151620C78ULL + 0x3834ULL * (uint64_t)player), 16);
        slot[9] = 3600;
        slot[10] = type_word;
        slot[16] = SR_GLOBAL(uint32_t, 0x151620C90ULL + 0x3834ULL * (uint64_t)player);
    }
}


/* Appends a NUL-terminated payload to the outgoing packet stream (the
 * original writes the byte/bit pair as one 64-bit store of 5) and forwards
 * the stream to sub_140130350. The payload may be up to 63 bytes; the write
 * is skipped when the stream's byte cursor reaches 0x10000. 0x140132990 */
void net_stream_send_payload(int peer, uint16_t command, int64_t a3, const char *payload)
{
    int32_t length = 0;
    uint32_t bits;
    uint32_t room;
    int32_t byte;

    length = 0;
    while (payload[length] != '\0')
        ++length;
    if (length > 63)
        length = 63;
    /* The original writes the byte/bit pair as one 64-bit store of 5
     * (byte 5, bit 0), then the type byte 3. */
    net_write_position = 5;
    net_write_bit = 0;
    packet_stream_type = 3;
    packet_out_data_word = packet_out_data_word;      /* the original reloads the pointer */
    bits = (uint32_t)length & 0x3F;
    byte = 5;
    room = 6;
    for (;;) {
        uint32_t free_bits = 8 - (uint32_t)net_write_bit;
        int32_t previous_byte = net_write_position;

        net_write_buffer[byte] &= (uint8_t)(0xFFu << room);
        net_write_buffer[previous_byte] |= (uint8_t)(bits << net_write_bit);
        if (room < free_bits)
            break;
        net_write_bit = 0;
        if (room == free_bits) {
            byte = ++net_write_position;
            goto emit;
        }
        bits >>= free_bits;
        room -= free_bits;
        net_write_position = byte + 1;
        byte = net_write_position;
        if ((int32_t)room <= 0)
            goto emit;
        net_write_bit += (int32_t)room;          /* the original never stores this */
    }
    net_write_bit += (int32_t)room;              /* room + the original bit */
emit:
    if (byte < PACKET_STREAM_MAX_BYTES) {
        if (net_write_bit > 0) {
            ++byte;
            net_write_bit = 0;
            net_write_position = byte;
        }
        memcpy(net_write_buffer + byte, payload, (size_t)length);
        net_write_position += length;
    }
    sub_140130350(peer, command, a3);
}
