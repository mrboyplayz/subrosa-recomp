/* Block record words set with the chunk slot and record made when missing:
 * the unknown_8 word 0x140017AC0, the unknown_3008 word 0x140016C80 (with
 * the quarter mesh release 0x140012940 behind the same recording stub in
 * both builds), the block id with its gone mask cleared 0x140016F60, and a
 * record's trailing mesh flags 0x14011C510. The chunk slot 0x140010020, the
 * block record 0x140012490 and the record mark 0x1400173C0 they reach are
 * the already-ported engine functions. */
// NC_WRAPPERS: 140017AC0 140016C80 140016F60 14011C510
#include "nc.h"
#include "world.h"

typedef void (*set_fn)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
typedef void (*flags_fn)(int, int32_t, int32_t, int32_t);
#ifdef NC_NATIVE
#define set_8(l, x, y, z, v)    ((set_fn)NC_ADDR(0x140017AC0))(l, x, y, z, v)
#define set_3008(l, x, y, z, v) ((set_fn)NC_ADDR(0x140016C80))(l, x, y, z, v)
#define set_id(l, x, y, z, v)   ((set_fn)NC_ADDR(0x140016F60))(l, x, y, z, v)
#define mark_flags(l, x, y, z)  ((flags_fn)NC_ADDR(0x14011C510))(l, x, y, z)
#elif defined(NC_CLIENT_WRAPPERS)
void sub_140017AC0(signed int, unsigned int, unsigned int, unsigned int, unsigned int);
void sub_140016C80(signed int, unsigned int, unsigned int, unsigned int, unsigned int);
void sub_140016F60(signed int, unsigned int, unsigned int, unsigned int, unsigned int);
void sub_14011C510(int, int, int, int);
#define set_8(l, x, y, z, v)    sub_140017AC0((signed int)(l), x, y, z, v)
#define set_3008(l, x, y, z, v) sub_140016C80((signed int)(l), x, y, z, v)
#define set_id(l, x, y, z, v)   sub_140016F60((signed int)(l), x, y, z, v)
#define mark_flags(l, x, y, z)  sub_14011C510((int)(l), (int32_t)(x), (int32_t)(y), (int32_t)(z))
#else
void blocks_set_voxel_unknown_8(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void blocks_set_voxel_unknown_3008(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void blocks_set_voxel_id(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void blocks_mark_voxel_record_flags(int, int32_t, int32_t, int32_t);
#define set_8      blocks_set_voxel_unknown_8
#define set_3008   blocks_set_voxel_unknown_3008
#define set_id     blocks_set_voxel_id
#define mark_flags blocks_mark_voxel_record_flags
#endif

#define RECORDS 12
#define SLOTS 6
#define LAYERS 5                 /* a fifth layer's header too: the flags routine does not check the layer */

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
        int which = (int)nc_rand_below(4);
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

        uint32_t layer = nc_chance(8) ? LAYERS - 1 : nc_rand_below(LAYERS - 1);
        const int32_t *chunks = world_level_layers[layer].chunks;
        uint32_t x = coordinate(chunks[0], 64), y = coordinate(chunks[1], 64), z = coordinate(chunks[2], 64);
        uint32_t value = (uint32_t)nc_rand();
        nc_set_mxcsr(0x1F80);
        switch (which) {
        case 0: set_8(layer, x, y, z, value); break;
        case 1: set_3008(layer, x, y, z, value); break;
        case 2: set_id(layer, x, y, z, value); break;
        default: mark_flags((int)layer, (int32_t)x, (int32_t)y, (int32_t)z); break;
        }
        nc_line("%d layer %u %08x %08x %08x %08x", which, layer, x, y, z, value);
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
