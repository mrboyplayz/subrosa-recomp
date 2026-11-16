/* Setting a tagged block value with its block-hit event: the guards (layer,
 * sign, tag bits, bit 16 of the flag word), the event with optional position
 * and velocity (a half-word flag, the packed layer/x and y/z words, the world
 * event ring wrapping at 0x10000) and the unknown_3008 write with a shift
 * count taken mod 32. The level, the records and the event ring are hashed
 * after every call. The mesh release the setter reaches is a recording stub
 * in both builds. */
// NC_WRAPPERS: 14000B7D0
#include <string.h>
#include "nc.h"
#include "frame.h"
#include "world.h"

#ifdef NC_NATIVE
#define tagged(l, x, y, z, t, b, p, v)     ((uint64_t (*)(uint32_t, int32_t, uint32_t, uint32_t, uint32_t, int32_t, const float *, const float *))NC_ADDR(0x14000B7D0))(l, x, y, z, t, b, p, v)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_14000B7D0(unsigned, int, unsigned, unsigned, unsigned, int, const float *, const float *);
#define tagged(l, x, y, z, t, b, p, v) ((uint64_t)sub_14000B7D0(l, x, y, z, t, b, p, v))
#else
#define tagged world_set_block_tagged
#endif

#define RECORDS 12
#define SLOTS 6
#define LAYERS 5

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
    nc_save(&world_events[0xFFF0], sizeof(WorldEvent) * 16);
    nc_save(&world_events[0], sizeof(WorldEvent) * 16);
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
        int full_slots = nc_chance(3), full_records = nc_chance(3);
        for (int r = 0; r <= RECORDS; r++) {
            WorldBlockRecord *record = &world_block_records[r];
            uint32_t *flags = (uint32_t *)(void *)record->unknown_6034;
            record->active = full_records || nc_chance(70);
            record->unknown_6030 = (int32_t)nc_rand();
            for (int v = 0; v < 512; v++) {
                record->unknown_8[v] = (uint32_t)nc_rand();
                record->unknown_3008[v] = (uint32_t)nc_rand();
                record->gone[v] = (uint32_t)nc_rand();
                record->unknown_808[v] = (uint32_t)nc_rand();
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
            flags[768] = (uint32_t)nc_rand_below(3);
            for (int q = 0; q < 4; q++)
                flags[769 + q] = (uint32_t)nc_rand_below(3);
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

        uint32_t layer = nc_chance(10) ? 4 : nc_chance(8) ? (uint32_t)nc_rand() : nc_rand_below(4);
        const int32_t *chunks = world_level_layers[layer & 3].chunks;
        int32_t x = nc_chance(10) ? (int32_t)nc_rand() : (int32_t)coordinate(chunks[0], 64);
        uint32_t y = coordinate(chunks[1], 64), z = coordinate(chunks[2], 64);
        uint32_t tag = nc_chance(65) ? 0x80000000u | ((uint32_t)nc_rand() & 0x1FFFFFFFu) : (uint32_t)nc_rand();
        int32_t bit = nc_chance(65) ? (int32_t)(0x10000u | (uint32_t)nc_rand_below(70)) : (int32_t)nc_rand();
        float position[3], velocity[3];
        for (int k = 0; k < 3; k++) {
            position[k] = nc_float(-100, 100);
            velocity[k] = nc_float(-100, 100);
        }
        game_connected = nc_chance(75);
        game_tick = (int32_t)nc_rand();
        world_event_count = nc_chance(15) ? 0xFFF8 + (int)nc_rand_below(8) : (int)nc_rand_below(8);
        int start = world_event_count & 0xFFFF;
        nc_set_mxcsr(0x1F80);
        uint64_t result = tagged(layer, x, y, z, tag, bit, nc_chance(80) ? position : NULL, nc_chance(80) ? velocity : NULL);
        nc_line("layer %u x %08x y %08x z %08x tag %08x bit %08x -> %llu count %08x", layer, (uint32_t)x, y, z, tag,
                (uint32_t)bit, (unsigned long long)result, world_event_count);
        nc_line("event %016llx wrap %016llx", (unsigned long long)nc_hash(&world_events[start], sizeof(WorldEvent)),
                (unsigned long long)nc_hash(&world_events[0xFFF0], sizeof(WorldEvent) * 16));
        nc_line("records %016llx", (unsigned long long)nc_hash(world_block_records, sizeof(WorldBlockRecord) * (RECORDS + 1)));
        for (int l = 0; l < LAYERS; l++) {
            WorldLevelLayer *level = &world_level_layers[l];
            nc_line("layer %d slots %016llx count %d", l, (unsigned long long)nc_hash(level->slots, sizeof(WorldChunkSlot) * SLOTS),
                    level->record_count);
        }
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
