/* DRAFT, NOT COMPILED, NOT VERIFIED.
 *
 * To finish: move into src/engine/world_blocks.c, rewire in src/client/client_blocks.c,
 * add t_blockstate.c + .mutations, prove plain and --client-wrappers, then mutate.
 */

#include <string.h>
#include "world.h"
#include "arith.h"

/* Engine helper not in header */
extern void blocks_set_voxel_unknown_8(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value);

/* 0x140012670. If the voxel's unknown_8 word is a link, update the links of its 6
   neighbors by ORing their tags with a direction-specific bit. Finally, clear the
   voxel's unknown_8 and unknown_4808 words and mark the record. */
void blocks_update_neighbor_links(uint32_t layer, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t voxel;
    int32_t record_idx = world_block_record_at(layer, x, y, z);
    if (record_idx == -1)
        return;

    WorldBlockRecord *record = &world_block_records[record_idx];
    voxel = WORLD_CELL_INDEX(x, y, z);
    uint32_t value = record->unknown_8[voxel];

    if ((value & WORLD_BLOCK_LINK_MASK) == WORLD_BLOCK_LINK) {
        uint32_t val;

        // y - 1
        val = world_block_unknown_8_at(layer, x, y - 1, z);
        if ((val & WORLD_BLOCK_LINK_MASK) == WORLD_BLOCK_LINK)
            blocks_set_voxel_unknown_8(layer, x, y - 1, z, val | 0x20);

        // y + 1
        val = world_block_unknown_8_at(layer, x, y + 1, z);
        if ((val & WORLD_BLOCK_LINK_MASK) == WORLD_BLOCK_LINK)
            blocks_set_voxel_unknown_8(layer, x, y + 1, z, val | 0x1);

        // z + 1
        val = world_block_unknown_8_at(layer, x, y, z + 1);
        if ((val & WORLD_BLOCK_LINK_MASK) == WORLD_BLOCK_LINK)
            blocks_set_voxel_unknown_8(layer, x, y, z + 1, val | 0x8);

        // z - 1
        val = world_block_unknown_8_at(layer, x, y, z - 1);
        if ((val & WORLD_BLOCK_LINK_MASK) == WORLD_BLOCK_LINK)
            blocks_set_voxel_unknown_8(layer, x, y, z - 1, val | 0x2);

        // x - 1
        val = world_block_unknown_8_at(layer, x - 1, y, z);
        if ((val & WORLD_BLOCK_LINK_MASK) == WORLD_BLOCK_LINK)
            blocks_set_voxel_unknown_8(layer, x - 1, y, z, val | 0x10);

        // x + 1
        val = world_block_unknown_8_at(layer, x + 1, y, z);
        if ((val & WORLD_BLOCK_LINK_MASK) == WORLD_BLOCK_LINK)
            blocks_set_voxel_unknown_8(layer, x + 1, y, z, val | 0x4);
    }

    record->unknown_8[voxel] = 0;
    record->unknown_4808[voxel] = 0;
    world_mark_block_record(layer, x, y, z);
}

/* 0x140016AF0. Clears a voxel's state in a specialized lookup table if it matches
   certain criteria. */
void blocks_clear_voxel_state_entry(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, int value)
{
    if (layer > 3 || (int32_t)x < 0 || (int32_t)y < 0 || (int32_t)z < 0)
        return;

    uint64_t block_record_offset = 263004ULL * layer;
    uint32_t cx = x >> 6;
    uint32_t cy = y >> 6;
    uint32_t cz = z >> 6;

    int32_t table_x = SR_GLOBAL(int32_t, 0x140404A6CULL + 111579650 + block_record_offset);
    if (cx < (uint32_t)table_x) {
        int32_t table_y = SR_GLOBAL(int32_t, 0x140404A6CULL + 111579651 + block_record_offset);
        if (cy < (uint32_t)table_y) {
            int32_t table_z = SR_GLOBAL(int32_t, 0x140404A6CULL + 111579652 + block_record_offset);
            if (cz < (uint32_t)table_z) {
                uint64_t base_ptr = SR_GLOBAL(uint64_t, 0x140404A6CULL + 111579655 + block_record_offset);
                int32_t shifted_bits = *(int *)(base_ptr + 4LL * (cx + table_x * (cz + table_z * cy)));
                if (shifted_bits != -1) {
                    int32_t shifted_bits_2 = SR_GLOBAL(int32_t, 0x140404A6CULL + 111579985 + block_record_offset + 513LL * shifted_bits + ((x >> 3) & 7) + 8 * (((z >> 3) & 7) + 8 * ((y >> 3) & 7)));
                    if (shifted_bits_2 != -1) {
                        int32_t shifted_bits_3 = SR_GLOBAL(int32_t, 0x140404A6CULL + 83200503 + 6930LL * shifted_bits_2 + ((y & 6) >> 1));
                        if (shifted_bits_3 != -1) {
                            uint64_t scaled_index = 8969ULL * shifted_bits_3;
                            int32_t count = SR_GLOBAL(int32_t, 0x140404A6CULL + 73995254 + scaled_index);
                            if (count > 0) {
                                uint32_t *state_address = (uint32_t *)&SR_GLOBAL(uint32_t, 0x140404A6CULL + 73995258 + scaled_index);
                                for (int i = 0; i < count; i++) {
                                    if (state_address[i*21 - 1] == (x & 7) && state_address[i*21] == (y & 7) && state_address[i*21 + 1] == (z & 7) && state_address[i*21 + 2] == (uint32_t)value) {
                                        state_address[i*21 - 3] = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

/* 0x140017910. If a block record's gone-changed flag is set, copy the current 
   gone masks into the record's mesh-shaping arrays. */
void blocks_update_gone_masks(int32_t record_idx)
{
    if ((uint32_t)record_idx > 0xFFF)
        return;

    uint64_t record_offset = 6930ULL * record_idx;
    if (SR_GLOBAL(uint32_t, 0x140404A6CULL + 83194357 + record_offset)) {
        extern void sub_14000C4C0(int a);
        sub_14000C4C0(record_idx);

        int32_t indices[4];
        for (int i = 0; i < 4; i++) {
            indices[i] = SR_GLOBAL(int32_t, 0x140404A6CULL + 83200503 + record_offset + i);
        }

        for (int i = 0; i < 4; i++) {
            int32_t idx = indices[i];
            if (idx == -1) continue;

            uint64_t scaled_index = 8969ULL * idx;
            int32_t count = SR_GLOBAL(int32_t, 0x140404A6CULL + 73993587 + scaled_index);
            if (count > 0) {
                uint32_t *state_address = (uint32_t *)&SR_GLOBAL(uint32_t, 0x140404A6CULL + 73993590 + scaled_index);
                for (int j = 0; j < count; j++) {
                    uint32_t voxel_idx = state_address[j * 7];
                    state_address[j * 7] = SR_GLOBAL(uint32_t, 0x140404A6CULL + 83199991 + record_offset + voxel_idx);
                }
            }
        }
        SR_GLOBAL(uint32_t, 0x140404A6CULL + 83200511 + record_offset) = 0;
    }
}

/* 0x14001B390. Checks for similar blocks and updates flags based on matching
   voxel data across different records. */
uint32_t blocks_compare_records(int a, int b, int c, int d)
{
    uint64_t record_offset_a = 58ULL * a;
    uint32_t option_flags = SR_GLOBAL(uint32_t, 0x140404A6CULL + 20074625 + record_offset_a + b) & c;
    
    int count_a = SR_GLOBAL(int32_t, 0x140404A6CULL + 20074624 + record_offset_a);
    if (count_a > 0) {
        uint32_t *buffer_a = (uint32_t *)&SR_GLOBAL(uint32_t, 0x140404A6CULL + 20074637 + record_offset_a);
        uint64_t record_offset_d = 58ULL * d;

        for (int i = 0; i < count_a; i++) {
            if (buffer_a[i] == (uint32_t)b) {
                int count_d = SR_GLOBAL(int32_t, 0x140404A6CULL + 20074624 + record_offset_d);
                if (count_d > 0) {
                    uint32_t *buffer_d = (uint32_t *)&SR_GLOBAL(uint32_t, 0x140404A6CULL + 20074637 + record_offset_d);
                    for (int j = 0; j < count_d; j++) {
                        if (buffer_d[j] == (5 - b)) {
                            for (int k = 0; k < 3; k++) {
                                uint64_t m_a = SR_GLOBAL(uint64_t, 0x140404A6CULL + 20074631 + record_offset_a);
                                uint64_t m_d = SR_GLOBAL(uint64_t, 0x140404A6CULL + 20074631 + record_offset_d);
                                uint64_t m_a_alt = SR_GLOBAL(uint64_t, 0x140404A6CULL + 20074615 + record_offset_a);
                                uint64_t m_d_alt = SR_GLOBAL(uint64_t, 0x140404A6CULL + 20074615 + record_offset_d);

                                float *f_a = (float *)m_a_alt; 
                                float *f_d = (float *)m_d_alt;

                                if (f_d[k] != f_a[k]) {
                                    break;
                                }
                            }
                            option_flags |= (1 << (i % 32)); 
                            break;
                        }
                    }
                }
            }
        }
    }
    return option_flags;
}

/* 0x14001A050. Two passes over the corner pair at 0x14500A5C0: each pass
   writes the point (x, y) into its side of the pair, turns the corner table
   (tag 0x60000, then 0x20000), and pushes a curve record into the table at
   0x14500A680; the second push's code is the answer.
   Then mutate: add the mutations in cornercurve.mutations to the landed
   file and run
   python tools/native-compare/mutate.py <suite> <file> <mutations>. */

/* Unported: 0x140001F20 pushes a curve record built from the corner pair
   into the record table; returns the record code. */
extern uint64_t sub_140001F20(void *pair, void *record_table, int, int, int, int, uint32_t code);

/* 0x14001A050 */
uint64_t corner_curve_point(int32_t corner_index, float x, float y)
{
    uint32_t *pair = &SR_GLOBAL(uint32_t, 0x14500A5C0ULL);
    float *f = (float *)pair;

    /* Side 1: the point, 0.0/1.0 bookkeeping. */
    f[0] = x;
    f[2] = y;
    f[11] = y;       /* g_14500A5EC */
    f[47] = y;       /* g_14500A67C */
    f[38] = y;       /* g_14500A658 */
    f[45] = x;       /* g_14500A674 */
    f[0] = 0.0f;
    f[1] = 1.0f;
    f[10] = 1.0f;    /* g_14500A5E8 */
    f[46] = 0.0f;    /* g_14500A678 */
    *(uint64_t *)(pair + 36) = 0;  /* g_14500A650, g_14500A654 */

    /* Turn side 1 one face step, and push its curve record. */
    uint32_t tag = corner_table_rotate((int)corner_index, 0x60000u);
    sub_140001F20((void *)pair, (void *)(pair + 48), 1, 1, 1, 1,
                  tag | ((uint32_t)corner_index + 1));

    /* Side 2: the point, 1.0/1.0 bookkeeping. */
    f[0] = x;
    f[2] = y;
    f[9] = x;        /* g_14500A5E4 */
    f[45] = x;       /* g_14500A674 */
    f[36] = x;       /* g_14500A650 */
    f[38] = y;       /* g_14500A658 */
    f[1] = 1.0f;
    *(uint64_t *)(pair + 10) = 0x3F8000003F800000ULL;  /* g_14500A5E8, g_14500A5EC */
    *(uint64_t *)(pair + 46) = 0;                      /* g_14500A678, g_14500A67C */
    f[37] = 0.0f;    /* g_14500A654 */

    /* Turn side 2 (one quarter face), and push its curve record. */
    tag = corner_table_rotate((int)corner_index, 0x20000u);
    return sub_140001F20((void *)pair, (void *)(pair + 48), 1, 1, 1, 1,
                         tag | (((uint32_t)corner_index - 1) & 3u + 1));
}
