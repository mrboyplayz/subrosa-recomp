/* The level's blocks. Getters: 0x140013020, 0x1400129D0, 0x140012B10,
 * 0x140016450, 0x140016590, 0x140012DE0, 0x140012CA0, 0x140016720. Setters:
 * 0x140017110, 0x140016E30, 0x140017260 (with the mesh release 0x140012940
 * behind the same recording stub in both builds), 0x1400173C0. Block event
 * 15: 0x1400516B0. Creating a chunk slot 0x140010020 and a block record
 * 0x140012490. */
#include <string.h>
#include "nc.h"
#include "frame.h"
#include "world.h"

typedef uint32_t (*get_fn)(uint32_t, uint32_t, uint32_t, uint32_t);
typedef uint32_t (*entry_fn)(uint32_t, uint32_t, uint32_t, uint32_t, int);
typedef void (*set_fn)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
#ifdef NC_NATIVE
#define record_at     ((get_fn)NC_ADDR(0x140013020))
#define get_8         ((get_fn)NC_ADDR(0x1400129D0))
#define get_8_origin  ((get_fn)NC_ADDR(0x140012B10))
#define get_3008      ((get_fn)NC_ADDR(0x140016450))
#define get_3008_origin ((get_fn)NC_ADDR(0x140016590))
#define get_1008      ((entry_fn)NC_ADDR(0x140012DE0))
#define get_1008_last ((get_fn)NC_ADDR(0x140012CA0))
#define get_3808      ((entry_fn)NC_ADDR(0x140016720))
#define set_gone      ((set_fn)NC_ADDR(0x140017110))
#define set_3008      ((set_fn)NC_ADDR(0x140016E30))
#define set_4808      ((set_fn)NC_ADDR(0x140017260))
#define mark(l, x, y, z) ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t))NC_ADDR(0x1400173C0))(l, x, y, z)
#define event(l, x, y, z, g, u) \
    ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))NC_ADDR(0x1400516B0))(l, x, y, z, g, u)
#define create_slot(l, x, y, z) ((uint32_t (*)(uint32_t, int, int, int))NC_ADDR(0x140010020))(l, x, y, z)
#define create_record(l, s, x, y, z) ((uint32_t (*)(uint32_t, uint32_t, int, int, int))NC_ADDR(0x140012490))(l, s, x, y, z)
#else
#define record_at(l, x, y, z) ((uint32_t)world_block_record_at(l, x, y, z))
#define get_8         world_block_unknown_8_at
#define get_8_origin  world_block_unknown_8_origin
#define get_3008      world_block_unknown_3008_at
#define get_3008_origin world_block_unknown_3008_origin
#define get_1008      world_block_unknown_1008_at
#define get_1008_last world_block_unknown_1008_last
#define get_3808      world_block_unknown_3808_at
#define set_gone      world_set_block_gone
#define set_3008      world_set_block_unknown_3008
#define set_4808      world_set_block_unknown_4808
#define mark          world_mark_block_record
#define event         world_event_block_gone
#define create_slot(l, x, y, z) ((uint32_t)world_create_chunk_slot(l, x, y, z))
#define create_record(l, s, x, y, z) ((uint32_t)world_create_block_record(l, s, x, y, z))
#endif

#define RECORDS 12
#define SLOTS 6
#define LAYERS 5                 /* a fifth layer's header too: the routines must not look at it */

static int32_t tables[LAYERS][27];

static void free_mesh(uint32_t record, int32_t quarter)
{
    uint64_t args[2] = {record, (uint32_t)quarter};
    nc_call("free_mesh", 2, args);
}

static uint32_t coordinate(int units, int size)
{
    switch (nc_rand_below(10)) {
    case 0: return (uint32_t)nc_rand();                          /* often negative or far out */
    case 1: return (uint32_t)(units * size - 1 + (int)nc_rand_below(nc_chance(50) ? 3 : 70));   /* at the edge */
    default: return nc_rand_below((uint32_t)(units * size));
    }
}

/* A link to a voxel up to 3 back along each axis (sometimes far). */
static uint32_t word(void)
{
    uint32_t value = (uint32_t)nc_rand();
    if (nc_chance(40)) {
        value = WORLD_BLOCK_LINK | (value & 0x1F000000u);
        if (nc_chance(80))
            value |= nc_rand_below(4) | nc_rand_below(4) << 8 | nc_rand_below(4) << 16;
        else
            value |= (uint32_t)nc_rand() & 0xFFFFFF;
    }
    return value;
}

int main(void)
{
    nc_map_image();
    nc_redirect(0x140012940, (void *)free_mesh);
    for (int layer = 0; layer < LAYERS; layer++) {
        WorldLevelLayer *level = &world_level_layers[layer];
        nc_save(level->chunks, sizeof level->chunks);
        nc_save(&level->chunk_table, sizeof level->chunk_table);
        nc_save(level->slots, sizeof(WorldChunkSlot) * SLOTS);
        nc_save(&level->slots[WORLD_CHUNK_SLOT_CAPACITY - 1], sizeof(WorldChunkSlot));
        nc_save(&level->record_count, sizeof level->record_count);
    }
    nc_save(world_block_records, sizeof(WorldBlockRecord) * (RECORDS + 1));
    nc_save(&world_block_records[WORLD_BLOCK_RECORD_CAPACITY - 1], sizeof(WorldBlockRecord));
    nc_save(&world_events[0], sizeof(WorldEvent) * 16);
    nc_save(&world_events[0xFFF0], sizeof(WorldEvent) * 16);
    int cases = nc_cases(4000);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        nc_restore();
        for (int layer = 0; layer < LAYERS; layer++) {
            WorldLevelLayer *level = &world_level_layers[layer];
            for (int axis = 0; axis < 3; axis++)
                level->chunks[axis] = 1 + (int)nc_rand_below(3);
            level->chunk_table = tables[layer];
            for (int c = 0; c < 27; c++)
                tables[layer][c] = nc_chance(15) ? -1 : (int)nc_rand_below(SLOTS);
            for (int s = 0; s < SLOTS; s++) {
                level->slots[s].used = nc_chance(80);
                for (int c = 0; c < 512; c++)
                    level->slots[s].cells[c] = nc_chance(15) ? -1 : (int)nc_rand_below(RECORDS);
            }
            level->record_count = (int32_t)nc_rand_below(100);
        }
        int which = (int)nc_rand_below(15);
        int full_slots = nc_chance(which == 13 ? 30 : 2), full_records = nc_chance(which == 14 ? 30 : 2);
        for (int r = 0; r <= RECORDS; r++) {
            WorldBlockRecord *record = &world_block_records[r];
            record->active = full_records || nc_chance(70);
            record->unknown_6030 = (int32_t)nc_rand();
            for (int v = 0; v < 512; v++) {
                record->unknown_808[v] = (uint32_t)nc_rand();
                record->gone[v] = (uint32_t)nc_rand();
            }
            for (int v = 0; v < 512; v++) {
                record->unknown_8[v] = word();
                record->unknown_3008[v] = word();
                for (int e = 0; e < 8; e++) {
                    record->unknown_1008[v][e] = (uint16_t)nc_rand();
                    record->unknown_3808[v][e] = (uint8_t)nc_rand();
                }
            }
            for (int q = 0; q < 4; q++)
                record->meshes[q] = nc_chance(50) ? -1 - (int)nc_rand_below(2) : (int)nc_rand_below(1024);
            if (nc_chance(10))
                record->meshes[nc_rand_below(4)] = (int32_t)0x80000000;
            record->gone_changed = (int32_t)nc_rand_below(3);
            record->unknown_6024 = (int32_t)nc_rand_below(3);
        }
        /* Full pools: everything taken, or only the last free. */
        if (full_slots)
            for (int layer = 0; layer < 4; layer++)
                for (int s = 0; s < WORLD_CHUNK_SLOT_CAPACITY; s++)
                    world_level_layers[layer].slots[s].used = s != WORLD_CHUNK_SLOT_CAPACITY - 1 || nc_chance(50);
        if (full_records)
            for (int r = 0; r < WORLD_BLOCK_RECORD_CAPACITY; r++)
                world_block_records[r].active = r != WORLD_BLOCK_RECORD_CAPACITY - 1 || nc_chance(50);
        if (!full_records)
            world_block_records[RECORDS].active = 0;   /* the latest the search can end */

        uint32_t layer = nc_chance(10) ? nc_rand_below(8) : nc_rand_below(LAYERS);
        int safe = layer < LAYERS ? (int)layer : 0;
        const int32_t *chunks = world_level_layers[safe].chunks;
        int size = which == 13 ? 1 : which == 14 ? 8 : 64;      /* units of the coordinates */
        uint32_t x = coordinate(chunks[0], size), y = coordinate(chunks[1], size), z = coordinate(chunks[2], size);
        uint32_t value = (uint32_t)nc_rand();
        int entry = nc_chance(90) ? (int)nc_rand_below(8) : (int)nc_rand_below(24) - 16;
        game_connected = nc_chance(80);
        game_tick = (int32_t)nc_rand();
        world_event_count = nc_chance(10) ? 0xFFFF : nc_chance(20) ? 0xFFF8 + (int)nc_rand_below(8) : (int)nc_rand_below(8);
        int start = world_event_count;

        uint32_t result = 0;
        switch (which) {
        case 0: set_gone(layer, x, y, z, value); break;
        case 1: set_3008(layer, x, y, z, value); break;
        case 2: set_4808(layer, x, y, z, value); break;
        case 3: mark(layer, x, y, z); break;
        case 4: event(layer, x, y, z, value, (uint32_t)nc_rand_below(3)); break;
        case 5: result = record_at(layer, x, y, z); break;
        case 6: result = get_8(layer, x, y, z); break;
        case 7: result = get_8_origin(layer, x, y, z); break;
        case 8: result = get_3008(layer, x, y, z); break;
        case 9: result = get_3008_origin(layer, x, y, z); break;
        case 10: result = get_1008(layer, x, y, z, entry); break;
        case 11: result = get_1008_last(layer, x, y, z); break;
        case 12: result = get_3808(layer, x, y, z, entry); break;
        case 13: result = create_slot(layer, (int)x, (int)y, (int)z); break;
        default: {
            uint32_t slot = nc_chance(85) ? nc_rand_below(SLOTS) : nc_chance(50) ? 0x1FF + nc_rand_below(2) : (uint32_t)nc_rand();
            if (slot == 0x1FF)
                world_level_layers[safe].slots[slot].used = 1;
            result = create_record(layer, slot, (int)x, (int)y, (int)z);
            break;
        }
        }
        nc_line("%d layer %u %08x %08x %08x %d result %08x", which, layer, x, y, z, entry, result);
        nc_line("records %016llx last %016llx", (unsigned long long)nc_hash(world_block_records, sizeof(WorldBlockRecord) * (RECORDS + 1)),
                (unsigned long long)nc_hash(&world_block_records[WORLD_BLOCK_RECORD_CAPACITY - 1], sizeof(WorldBlockRecord)));
        for (int l = 0; l < LAYERS; l++) {
            WorldLevelLayer *level = &world_level_layers[l];
            nc_line("layer %d tables %016llx slots %016llx last %016llx count %d", l,
                    (unsigned long long)nc_hash(tables[l], sizeof tables[l]),
                    (unsigned long long)nc_hash(level->slots, sizeof(WorldChunkSlot) * SLOTS),
                    (unsigned long long)nc_hash(&level->slots[WORLD_CHUNK_SLOT_CAPACITY - 1], sizeof(WorldChunkSlot)),
                    level->record_count);
        }
        nc_line("count %08x event %016llx", world_event_count,
                (unsigned long long)nc_hash(&world_events[start], sizeof(WorldEvent)));
        if (full_slots)
            for (int l = 0; l < 4; l++)
                for (int s = SLOTS; s < WORLD_CHUNK_SLOT_CAPACITY - 1; s++)
                    world_level_layers[l].slots[s].used = 0;
        if (full_records)
            for (int r = RECORDS; r < WORLD_BLOCK_RECORD_CAPACITY - 1; r++)
                world_block_records[r].active = 0;
    }
    return 0;
}
