/* Block parts broken loose by bodies, and human bounds. See world.h. */
#include <string.h>
#include "arith.h"
#include "physics.h"
#include "world.h"

/* Whether something moving from one point to the other passes through the
   level; still recompiled code. */
extern int sub_1400DC050(float *from, float *to, int unknown);

/* Still recompiled code. */
/* Turns one part of a block into an item; its index, or -1. */
extern int64_t sub_1400CDBD0(uint32_t block, int32_t part, int32_t layer, int32_t x, int32_t y, int32_t z);

/* The block record and voxel within it at x, y, z, or -1. */
static int32_t block_record(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t *voxel)
{
    int32_t cx, cy, cz, slot, record;
    const int32_t *table;

    if (layer > 3 || (int32_t)x < 0 || (int32_t)y < 0 || (int32_t)z < 0)
        return -1;
    cx = (int32_t)(x >> 6);
    cy = (int32_t)(y >> 6);
    cz = (int32_t)(z >> 6);
    if (cx >= world_level_chunks(layer, 0) || cy >= world_level_chunks(layer, 1) || cz >= world_level_chunks(layer, 2))
        return -1;
    memcpy(&table, world_level_chunk_table_address(layer), sizeof table);
    slot = table[add_int(multiply_int(add_int(multiply_int(world_level_chunks(layer, 2), cy), cz),
                                      world_level_chunks(layer, 0)), cx)];
    if (slot == -1)
        return -1;
    record = world_level_cells(layer, slot)[((x >> 3) & 7) + 8 * (((z >> 3) & 7) + 8 * ((y >> 3) & 7))];
    if (record == -1)
        return -1;
    *voxel = (x & 7) + 8 * ((z & 7) + 8 * (y & 7));
    return record;
}

uint32_t world_block_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    int32_t record = block_record(layer, x, y, z, &voxel);
    return record == -1 ? 0 : world_block_record_ids(record)[voxel];
}

uint32_t world_block_unknown_8_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    int32_t record = block_record(layer, x, y, z, &voxel);
    return record == -1 ? 0 : world_block_record_unknown_8(record)[voxel];
}

uint32_t world_block_layout_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    int32_t record = block_record(layer, x, y, z, &voxel);
    return record == -1 ? 0 : world_block_record_layout(record)[voxel];
}

uint32_t world_block_resolved_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t block = world_block_layout_at(layer, x, y, z);

    if ((block & 0xE0000000u) != 0xC0000000u)
        return block;
    return world_block_layout_at(layer, x - (block & 0xFF), y - (block >> 16 & 0xFF), z - (block >> 8 & 0xFF));
}

uint32_t world_block_gone_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    int32_t record = block_record(layer, x, y, z, &voxel);
    return record == -1 ? 0 : world_block_record_gone(record)[voxel];
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
                    item = (int32_t)sub_1400CDBD0(block, part, 0, x, y, z);
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

uint32_t world_block_unknown_8_resolved_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t block = world_block_unknown_8_at(layer, x, y, z);

    if ((block & 0xE0000000u) != 0xC0000000u)
        return block;
    return world_block_unknown_8_at(layer, x - (block & 0xFF), y - (block >> 16 & 0xFF), z - (block >> 8 & 0xFF));
}

/* A record's face words (record + 0x1008, 8 per voxel) and its bytes at
   record + 0x3808 (8 per voxel). */
#define record_face_words(record) (&SR_GLOBAL(uint16_t, 0x154162248ULL + 0x6C48ULL * (uint64_t)(int64_t)(record)))
#define record_unknown_3808(record) (&SR_GLOBAL(uint8_t, 0x154164A48ULL + 0x6C48ULL * (uint64_t)(int64_t)(record)))

uint32_t world_block_face_word_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int32_t index)
{
    uint32_t voxel;
    int32_t record = block_record(layer, x, y, z, &voxel);
    return record == -1 ? 0xFFFFFFFFu : record_face_words(record)[(int32_t)((uint32_t)index + 8 * voxel)];
}

uint32_t world_block_last_face_word_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    int32_t record = block_record(layer, x, y, z, &voxel);
    return record == -1 ? 0xFFFFFFFFu : record_face_words(record)[8 * voxel + 7];
}

uint32_t world_block_unknown_3808_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int32_t index)
{
    uint32_t voxel;
    int32_t record = block_record(layer, x, y, z, &voxel);
    return record == -1 ? 0xFFFFFFFFu : record_unknown_3808(record)[(int32_t)((uint32_t)index + 8 * voxel)];
}
