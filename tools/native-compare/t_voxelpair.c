/* Two voxels listed in a record, each set to (value << 10) | 6 or cleared and its
 * block record marked. The level, the records and the event ring are hashed
 * after every call. The mesh release the setter reaches is a recording stub
 * in both builds. */
// NC_WRAPPERS: 140023A20
#include <string.h>
#include "nc.h"
#include "frame.h"
#include "world.h"

#ifdef NC_NATIVE
#define pair(r, c) ((void (*)(int, int))NC_ADDR(0x140023A20))(r, c)
#elif defined(NC_CLIENT_WRAPPERS)
void sub_140023A20(int, int);
#define pair sub_140023A20
#else
#define pair world_set_marked_voxel_pair
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

        int record = (int)nc_rand_below(3);
        uint32_t *words = &SR_GLOBAL(uint32_t, 0x183EBFEE0ULL + 0x5BC4ULL * (uint64_t)record);
        const int32_t *chunks = world_level_layers[0].chunks;
        for (int k = 0; k < 2; k++) {
            words[4 * k - 1] = coordinate(chunks[0], 64);
            words[4 * k] = coordinate(chunks[1], 64);
            words[4 * k + 1] = coordinate(chunks[2], 64);
            words[4 * k + 2] = (uint32_t)nc_rand();
        }
        int clear = (int)nc_rand_below(3) == 0 ? 0 : (int)nc_rand_below(2);
        nc_set_mxcsr(0x1F80);
        pair(record, clear);
        nc_line("record %d clear %d", record, clear);
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
