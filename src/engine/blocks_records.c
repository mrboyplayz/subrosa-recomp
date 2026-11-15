/* Block record words set with the chunk slot and block record made when
   they are missing: the unknown_8 word, the unknown_3008 word (freeing the
   quarter's mesh) and the block id (with the voxel's gone mask cleared);
   and a record's trailing mesh flags. See world.h for the record's layout. */
#include "arith.h"
#include "world.h"

/* Frees the mesh of one quarter of a block record; still recompiled code. */
extern void sub_140012940(uint32_t record, int32_t quarter);

/* The trailing words of a block record: one at 0x6C34 and one per quarter
   from 0x6C38. Their meaning is not settled; 0x14011C510 sets the first
   word and the word of the quarter the voxel's bits 1-2 of y name. */
static uint32_t *record_flags(WorldBlockRecord *record)
{
    return (uint32_t *)(void *)(record->unknown_6034 + 0xC00);
}

/* The record of the cell holding voxel x, y, z, making the chunk slot and
   the block record when either is missing, or NULL. */
static WorldBlockRecord *record_making(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    WorldLevelLayer *level;
    int32_t cx, cy, cz, slot, record;

    if (layer > 3 || (int32_t)x < 0 || (int32_t)y < 0 || (int32_t)z < 0)
        return 0;
    level = &world_level_layers[layer];
    cx = (int32_t)(x >> 6);
    if (cx >= level->chunks[0])
        return 0;
    cy = (int32_t)(y >> 6);
    if (cy >= level->chunks[1])
        return 0;
    cz = (int32_t)(z >> 6);
    if (cz >= level->chunks[2])
        return 0;
    slot = level->chunk_table[add_int(cx, multiply_int(level->chunks[0],
                                   add_int(cz, multiply_int(cy, level->chunks[2]))))];
    if (slot == -1) {
        slot = world_create_chunk_slot(layer, cx, cy, cz);
        if (slot == -1)
            return 0;
    }
    record = level->slots[slot].cells[WORLD_CELL_INDEX(x >> 3, y >> 3, z >> 3)];
    if (record == -1) {
        record = world_create_block_record(layer, (uint32_t)slot, (int32_t)(x >> 3),
                                           (int32_t)(y >> 3), (int32_t)(z >> 3));
        if (record == -1)
            return 0;
    }
    return &world_block_records[record];
}

/* 0x140017AC0. Sets the unknown_8 word of the voxel, making its chunk slot
   and block record when either is missing, and marks the record. Nothing
   happens outside the level or when all 512 slots or records are taken. */
void blocks_set_voxel_unknown_8(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    WorldBlockRecord *record = record_making(layer, x, y, z);

    if (!record)
        return;
    record->unknown_8[WORLD_CELL_INDEX(x, y, z)] = value;
    world_mark_block_record(layer, x, y, z);
}

/* 0x140016C80. Sets the unknown_3008 word of the voxel, making its chunk
   slot and block record when either is missing, frees the mesh of the
   quarter of the record the voxel's bits 1-2 of y name when it has one, and
   marks the record. Nothing happens outside the level or when all 512 slots
   or records are taken. */
void blocks_set_voxel_unknown_3008(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    WorldBlockRecord *record = record_making(layer, x, y, z);
    int32_t quarter;

    if (!record)
        return;
    record->unknown_3008[WORLD_CELL_INDEX(x, y, z)] = value;
    quarter = (int32_t)((y >> 1) & 3);
    if (record->meshes[quarter] >= 0)
        sub_140012940((uint32_t)(record - world_block_records), quarter);
    world_mark_block_record(layer, x, y, z);
}

/* 0x140016F60. Sets the block id of the voxel and clears its gone mask,
   making its chunk slot and block record when either is missing, and frees
   the mesh of the quarter of the record the voxel's bits 1-2 of y name when
   it has one. Nothing happens outside the level or when all 512 slots or
   records are taken. */
void blocks_set_voxel_id(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    WorldBlockRecord *record = record_making(layer, x, y, z);
    uint32_t voxel;
    int32_t quarter;

    if (!record)
        return;
    voxel = WORLD_CELL_INDEX(x, y, z);
    record->ids[voxel] = value;
    record->gone[voxel] = 0;
    quarter = (int32_t)((y >> 1) & 3);
    if (record->meshes[quarter] >= 0)
        sub_140012940((uint32_t)(record - world_block_records), quarter);
}

/* 0x14011C510. Sets the first trailing word of the record holding voxel
   x, y, z and the word of its quarter (the voxel's bits 1-2 of y). The
   layer is not checked; the voxel must lie in the layer's size in voxels
   and the chunk and cell must hold anything. */
void blocks_mark_voxel_record_flags(int layer, int32_t x, int32_t y, int32_t z)
{
    WorldLevelLayer *level;
    WorldBlockRecord *record;
    int32_t cx, cy, cz, slot, cell;

    if (x < 0)
        return;
    level = &world_level_layers[layer];
    if (x >= (int32_t)((uint32_t)level->chunks[0] << 6))
        return;
    if (y < 0 || y >= (int32_t)((uint32_t)level->chunks[1] << 6))
        return;
    if (z < 0 || z >= (int32_t)((uint32_t)level->chunks[2] << 6))
        return;
    cx = (int32_t)((uint32_t)x >> 6);
    cy = (int32_t)((uint32_t)y >> 6);
    cz = (int32_t)((uint32_t)z >> 6);
    slot = level->chunk_table[add_int(cx, multiply_int(level->chunks[0],
                                   add_int(cz, multiply_int(level->chunks[2], cy))))];
    if (slot == -1)
        return;
    cell = level->slots[slot].cells[WORLD_CELL_INDEX(x >> 3, y >> 3, z >> 3)];
    if (cell == -1)
        return;
    record = &world_block_records[cell];
    record_flags(record)[0] = 1;
    record_flags(record)[1 + ((y & 6) >> 1)] = 1;
}
