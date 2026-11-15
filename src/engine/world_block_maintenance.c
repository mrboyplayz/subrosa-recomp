#include "world_block_maintenance.h"

/* Existing client boundaries. Keep the lookup's full return on the setter's
 * missing-record path; only its low word identifies a valid record. */
extern int64_t sr_world_block_record_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
extern void sub_1401941F0(int channel, int mesh);
extern void sub_14000C4C0(uint32_t record);

/* 0x140012F30 */
uint32_t world_block_unknown_808_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    int32_t record = (int32_t)sr_world_block_record_at(layer, x, y, z);
    if (record == -1)
        return 0;
    return world_block_records[record].unknown_808[WORLD_CELL_INDEX(x, y, z)];
}

/* 0x140017C40 */
uint64_t world_set_block_unknown_808(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    uint64_t result = (uint64_t)sr_world_block_record_at(layer, x, y, z);
    if ((int32_t)result == -1)
        return result;
    world_block_records[(int32_t)result].unknown_808[WORLD_CELL_INDEX(x, y, z)] = value;
    return value;
}

/* 0x140012940. Quarter is 0..3 at the callers. Detach both links before
 * releasing channels 0, 3 and 5, in that order. Invalid mesh IDs still
 * clear the record's link but do not release any channel. */
void world_release_block_mesh(uint32_t record, int32_t quarter)
{
    if (record >= WORLD_BLOCK_RECORD_CAPACITY)
        return;
    int32_t mesh = world_block_records[record].meshes[quarter];
    world_block_records[record].meshes[quarter] = -1;
    if ((uint32_t)mesh < 1024) {
        world_mesh_record_link((uint32_t)mesh) = -1;
        sub_1401941F0(0, mesh);
        sub_1401941F0(3, mesh);
        sub_1401941F0(5, mesh);
    }
}

/* 0x140017890. Preparation may change the record, so mesh links are read
 * afterwards. The active flag is checked only before preparation. */
void world_invalidate_block_meshes(uint32_t record)
{
    if (record >= WORLD_BLOCK_RECORD_CAPACITY || !world_block_records[record].active)
        return;
    sub_14000C4C0(record);
    for (int32_t quarter = 0; quarter < 4; ++quarter)
        world_release_block_mesh(record, quarter);
    world_block_records[record].unknown_6024 = 0;
    if (record == 1008)
        ++world_record_1008_counter;
}
