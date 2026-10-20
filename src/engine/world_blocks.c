/* The level's blocks: reading and setting a voxel's words, block parts broken
   loose by bodies, and human bounds. See world.h. */
#include <string.h>
#include "arith.h"
#include "frame.h"
#include "physics.h"
#include "world.h"

/* Whether something moving from one point to the other passes through the
   level; still recompiled code. */
extern int sub_1400DC050(float *from, float *to, int unknown);

/* Still recompiled code. */
/* Turns one part of a block into an item; its index, or -1. */
extern int64_t sr_item_break_block_part(uint32_t block, int32_t part, int32_t layer, int32_t x, int32_t y, int32_t z);
/* Frees the mesh of one quarter of a block record. */
extern void sub_140012940(uint32_t record, int32_t quarter);

/* The chunk slot of the chunk holding voxel x, y, z, or -1. */
static int32_t chunk_slot(const WorldLevelLayer *level, uint32_t x, uint32_t y, uint32_t z)
{
    int32_t cx = (int32_t)(x >> 6), cy = (int32_t)(y >> 6), cz = (int32_t)(z >> 6);

    if (cx >= level->chunks[0] || cy >= level->chunks[1] || cz >= level->chunks[2])
        return -1;
    return level->chunk_table[add_int(multiply_int(add_int(multiply_int(level->chunks[2], cy), cz),
                                                   level->chunks[0]), cx)];
}

/* The block record of the cell holding voxel x, y, z, or -1. */
static int32_t record_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    const WorldLevelLayer *level;
    int32_t slot;

    if (layer > 3 || (int32_t)x < 0 || (int32_t)y < 0 || (int32_t)z < 0)
        return -1;
    level = &world_level_layers[layer];
    slot = chunk_slot(level, x, y, z);
    if (slot == -1)
        return -1;
    return level->slots[slot].cells[WORLD_CELL_INDEX(x >> 3, y >> 3, z >> 3)];
}

/* The block record holding voxel x, y, z and the voxel's index in it, or
   NULL. */
static WorldBlockRecord *voxel_record(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t *voxel)
{
    int32_t record = record_at(layer, x, y, z);

    if (record == -1)
        return 0;
    *voxel = WORLD_CELL_INDEX(x, y, z);
    return &world_block_records[record];
}

int32_t world_block_record_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    return record_at(layer, x, y, z);
}

uint32_t world_block_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    const WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);
    return record ? record->ids[voxel] : 0;
}

uint32_t world_block_gone_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    const WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);
    return record ? record->gone[voxel] : 0;
}

uint32_t world_block_unknown_8_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    const WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);
    return record ? record->unknown_8[voxel] : 0;
}

uint32_t world_block_unknown_3008_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    const WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);
    return record ? record->unknown_3008[voxel] : 0;
}

/* The value itself, or for a link what get() reads at the voxel it names. */
static uint32_t follow_link(uint32_t value, uint32_t layer, uint32_t x, uint32_t y, uint32_t z,
                            uint32_t (*get)(uint32_t, uint32_t, uint32_t, uint32_t))
{
    if ((value & WORLD_BLOCK_LINK_MASK) != WORLD_BLOCK_LINK)
        return value;
    return get(layer, x - (value & 0xFF), y - ((value >> 16) & 0xFF), z - ((value >> 8) & 0xFF));
}

uint32_t world_block_unknown_8_origin(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    const WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);
    if (!record)
        return 0;
    return follow_link(record->unknown_8[voxel], layer, x, y, z, world_block_unknown_8_at);
}

uint32_t world_block_unknown_3008_origin(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    const WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);
    if (!record)
        return 0;
    return follow_link(record->unknown_3008[voxel], layer, x, y, z, world_block_unknown_3008_at);
}

/* The entry is added to the voxel's first entry index in 32 bits, as the
   original does, and not checked. */
uint32_t world_block_unknown_1008_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int entry)
{
    uint32_t voxel;
    const WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);
    if (!record)
        return UINT32_MAX;
    return (&record->unknown_1008[0][0])[add_int(entry, (int32_t)(voxel * 8))];
}

uint32_t world_block_unknown_1008_last(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    const WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);
    return record ? record->unknown_1008[voxel][7] : UINT32_MAX;
}

uint32_t world_block_unknown_3808_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int entry)
{
    uint32_t voxel;
    const WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);
    if (!record)
        return UINT32_MAX;
    return (&record->unknown_3808[0][0])[add_int(entry, (int32_t)(voxel * 8))];
}

void world_set_block_gone(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t gone)
{
    uint32_t voxel;
    WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);

    if (!record)
        return;
    record->gone[voxel] = gone;
    record->gone_changed = 1;
}

void world_set_block_unknown_3008(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    uint32_t voxel;
    WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);

    if (record)
        record->unknown_3008[voxel] = value;
}

void world_set_block_unknown_4808(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value)
{
    uint32_t voxel;
    WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);
    int32_t quarter = (int32_t)((y >> 1) & 3);

    if (!record)
        return;
    record->unknown_4808[voxel] = value;
    if (record->meshes[quarter] >= 0)
        sub_140012940((uint32_t)(record - world_block_records), quarter);
}

void world_mark_block_record(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    WorldBlockRecord *record = voxel_record(layer, x, y, z, &voxel);

    if (record)
        record->unknown_6024 = 1;
}

int32_t world_create_chunk_slot(uint32_t layer, int32_t cx, int32_t cy, int32_t cz)
{
    WorldLevelLayer *level;
    int32_t slot;

    if (layer > 3 || cx < 0 || cy < 0 || cz < 0)
        return -1;
    level = &world_level_layers[layer];
    if (cx >= level->chunks[0] || cy >= level->chunks[1] || cz >= level->chunks[2])
        return -1;
    for (slot = 0; level->slots[slot].used; slot++)
        if (slot == WORLD_CHUNK_SLOT_CAPACITY - 1)
            return -1;
    level->chunk_table[add_int(multiply_int(add_int(multiply_int(level->chunks[2], cy), cz), level->chunks[0]), cx)] = slot;
    level->slots[slot].used = 1;
    memset(level->slots[slot].cells, 0xFF, sizeof level->slots[slot].cells);
    return slot;
}

int32_t world_create_block_record(uint32_t layer, uint32_t slot, int32_t x, int32_t y, int32_t z)
{
    WorldLevelLayer *level;
    WorldBlockRecord *record;
    int32_t index;

    if (layer > 3 || slot > WORLD_CHUNK_SLOT_CAPACITY - 1 || x < 0 || y < 0 || z < 0)
        return -1;
    level = &world_level_layers[layer];
    if ((int32_t)((uint32_t)x >> 3) >= level->chunks[0] || (int32_t)((uint32_t)y >> 3) >= level->chunks[1]
        || (int32_t)((uint32_t)z >> 3) >= level->chunks[2])
        return -1;
    for (index = 0; world_block_records[index].active; index++)
        if (index == WORLD_BLOCK_RECORD_CAPACITY - 1)
            return -1;

    record = &world_block_records[index];
    record->active = 1;
    record->layer = (int32_t)layer;
    record->cell[0] = x;
    record->cell[1] = y;
    record->cell[2] = z;
    level->slots[slot].cells[WORLD_CELL_INDEX(x, y, z)] = index;
    memset(record->unknown_8, 0, sizeof record->unknown_8);
    memset(record->unknown_808, 0, sizeof record->unknown_808);
    memset(record->unknown_3008, 0, sizeof record->unknown_3008);
    memset(record->unknown_4808, 0, sizeof record->unknown_4808);
    memset(record->ids, 0, sizeof record->ids);
    level->record_count++;
    record->unknown_6030 = 0;
    for (int quarter = 0; quarter < 4; quarter++)
        record->meshes[quarter] = -1;
    return index;
}

void world_event_block_gone(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t gone, uint32_t update)
{
    int32_t count;
    WorldEvent *event;

    if (!game_connected)
        return;
    count = world_event_count;
    event = &world_events[count];
    event->type = WORLD_EVENT_BLOCK_GONE;
    event->tick = game_tick;
    event->a = (int32_t)(layer + (x << 16));
    event->b = (int32_t)(y + (z << 16));
    event->c = (int32_t)gone;
    event->unknown_2c = (int32_t)update;
    world_event_count = (int32_t)((uint32_t)count + 1u) & 0xFFFF;
}

void world_break_blocks(const int32_t voxel_min[3], const int32_t voxel_max[3])
{
    for (int y = voxel_min[1]; y <= voxel_max[1]; y++) {
        for (int z = voxel_min[2]; z <= voxel_max[2]; z++) {
            for (int x = voxel_min[0]; x <= voxel_max[0]; x++) {
                uint32_t block = world_block_at(0, (uint32_t)x, (uint32_t)y, (uint32_t)z);
                uint32_t gone;

                if (!block)
                    continue;
                gone = world_block_gone_at(0, (uint32_t)x, (uint32_t)y, (uint32_t)z);
                for (int part = 0; part < world_block_part_count(block & 0x3FF); part++) {
                    int32_t item;

                    /* Parts from the 33rd on share the bits of the first 32. */
                    if (gone >> (part & 31) & 1)
                        continue;
                    item = (int32_t)sr_item_break_block_part(block, part, 0, x, y, z);
                    if (item != -1) {
                        world_items[item].unknown_8 = 1;
                        world_items[item].physics_simulated = 1;
                    }
                }
            }
        }
    }
}

void world_update_human_bounds(void)
{
    for (int index = 0; index < WORLD_HUMAN_CAPACITY; index++) {
        WorldHuman *human = &world_humans[index];

        if (!human->active)
            continue;

        for (int i = 0; i < 3; i++) {
            human->bounds_min[i] = 65536.0f;
            human->bounds_max[i] = -65536.0f;
        }
        for (int b = 0; b < HUMAN_BONE_COUNT; b++) {
            HumanBone *bone = &human->bones[b];
            PhysicsBody *body = &physics_bodies[bone->body];
            const HumanSkeletonBone *skeleton = &human_skeleton[b];
            const float *axis;
            float back, front, radius;

            for (int i = 0; i < 3; i++)
                bone->previous_position[i] = bone->position[i];
            for (int i = 0; i < 3; i++)
                bone->position[i] = body->position[i];
            for (int i = 0; i < 3; i++)
                bone->velocity[i] = body->velocity[i];
            for (int i = 0; i < 9; i++)
                bone->rotation[i] = body->rotation[i];
            for (int i = 0; i < 3; i++)
                bone->angular_velocity[i] = body->angular_velocity[i];

            /* The pelvis, stomach, chest and head keep only part of a move
               through the level. */
            if (b <= 3 && sub_1400DC050(bone->previous_position, bone->position, 1)) {
                float part = world_unknown_151a84898 * 0.975f;
                float x = (bone->position[0] - bone->previous_position[0]) * part + bone->previous_position[0];
                float y = (bone->position[1] - bone->previous_position[1]) * part + bone->previous_position[1];
                float z = (bone->position[2] - bone->previous_position[2]) * part + bone->previous_position[2];

                bone->position[0] = x;
                body->position[0] = x;
                bone->position[1] = y;
                body->position[1] = y;
                bone->position[2] = z;
                body->position[2] = z;
            }

            back = skeleton->length * -0.5f;
            front = skeleton->length * 0.5f;
            axis = &bone->rotation[3 * skeleton->axis_row];
            for (int i = 0; i < 3; i++)
                bone->segment[0][i] = back * axis[i] + bone->position[i];
            for (int i = 0; i < 3; i++)
                bone->segment[1][i] = front * axis[i] + bone->position[i];

            /* A coordinate that is not a number leaves the minimum alone
               and becomes the maximum. */
            radius = skeleton->radius;
            for (int i = 0; i < 3; i++) {
                for (int end = 0; end < 2; end++) {
                    float low = bone->segment[end][i] - radius, high = bone->segment[end][i] + radius;
                    if (human->bounds_min[i] > low)
                        human->bounds_min[i] = low;
                    if (!(human->bounds_max[i] >= high))
                        human->bounds_max[i] = high;
                }
            }
        }

        /* Voxels are four units wide; the box reaches a little below the feet. */
        human->bounds_min[1] = human->bounds_min[1] - 0.25f;
        for (int i = 0; i < 3; i++) {
            human->voxel_min[i] = truncate_float(human->bounds_min[i] * 0.25f);
            human->voxel_max[i] = truncate_float(human->bounds_max[i] * 0.25f);
        }
        world_break_blocks(human->voxel_min, human->voxel_max);
    }
}
