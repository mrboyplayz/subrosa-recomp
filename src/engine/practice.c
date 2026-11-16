#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "practice.h"
#include "memory.h"

/*---- shared state (addresses as they appear in the original executable) ---*/

/* Spawn-slot records for the current map (383 dwords each). */
#define world_spawn_slots (&SR_GLOBAL(WorldSpawnSlot, 0x175FF3468ULL))

/* Live spawn-slot cursor / record counter (the spawn allocator's index). */
#define world_spawn_count SR_GLOBAL(int32_t, 0x15FD16260ULL)

/* Renderer view origin: world position that screen-space helpers subtract. */
#define view_origin_x SR_GLOBAL(float, 0x1402F6188ULL)
#define view_origin_y SR_GLOBAL(float, 0x1402F618CULL)
#define view_origin_z SR_GLOBAL(float, 0x1402F6190ULL)

/* Height the engine clamps the ragdoll to when the placement ray hits
 * something solid. */
#define ragdoll_height_clamp SR_GLOBAL(float, 0x151A84884ULL)

/*
 * Externs for internal game routines that we don't port yet but need to call.
 */
extern int sub_1400DC050(float *pos, float *out_pos, int flags);
extern void sub_140008E40(int32_t slot, int32_t side, int32_t flip, int32_t rand1, int32_t rand2);
extern void sr_math_mat3_rotate_rows(uint32_t *mat, float *axis, float angle);

/*
 * (000000014012CEB0)
 * Allocate the next spawn slot for a practice-range marker: pick an edge
 * position from the map's precomputed edge table, drop it onto the world
 * with a height probe, fill the spawn record, and rotate its orientation
 * matrix. Returns the spawn index that was consumed.
 */
uint32_t sr_engine_practice_place_spawn(int32_t view_mode,
                                        uint32_t marker_flags,
                                        int32_t edge_side,
                                        int32_t flip_side,
                                        int32_t edge_offset,
                                        float reach)
{
    uint64_t rb_offset = 396ULL * (uint64_t)edge_side;
    uint32_t tv = SR_GLOBAL(uint32_t, 0x140404A6CULL + rb_offset + 225426061ULL);
    float ws_a = SR_GLOBAL(float, 0x140404A6CULL + rb_offset + 225426175ULL);
    float ws_b = SR_GLOBAL(float, 0x140404A6CULL + rb_offset + 225426176ULL);
    float ws_c = SR_GLOBAL(float, 0x140404A6CULL + rb_offset + 225426174ULL);
    uint32_t tv2 = SR_GLOBAL(uint32_t, 0x140404A6CULL + rb_offset + 225426057ULL);

    int32_t shifted_bits = 0;
    if ((tv >> 1) - edge_offset - 1 >= 0) {
        shifted_bits = (tv >> 1) - edge_offset - 1;
    }
    int32_t saved_shifted = tv - 1;
    if (shifted_bits <= tv - 1) {
        saved_shifted = shifted_bits;
    }

    float px, py, pz, dx, dy;
    if (flip_side) {
        ws_c = -ws_c;
        ws_a = -ws_a;
        ws_b = -ws_b;
        uint64_t scaled = rb_offset * 4 + 28LL * saved_shifted;
        px = SR_GLOBAL(float, 0x175FF34A8ULL + scaled);
        py = SR_GLOBAL(float, 0x175FF34B0ULL + scaled);
        pz = SR_GLOBAL(float, 0x175FF34B4ULL + scaled);
        dx = SR_GLOBAL(float, 0x175FF34B8ULL + scaled);
        dy = SR_GLOBAL(float, 0x175FF34BULL + scaled); 
    } else {
        uint64_t scaled = rb_offset * 4 + 28LL * (tv - saved_shifted);
        px = SR_GLOBAL(float, 0x175FF348CULL + scaled);
        py = SR_GLOBAL(float, 0x175FF3490ULL + scaled);
        pz = SR_GLOBAL(float, 0x175FF3494ULL + scaled);
        dx = SR_GLOBAL(float, 0x175FF3498ULL + scaled);
        dy = SR_GLOBAL(float, 0x175FF34A0ULL + scaled);
    }

    float comp_delta = -1.5707964f;
    float sqrt_val = reach * sqrtf((dy - pz) * (dy - pz) + (dx - px) * (dx - px));
    if (!SR_GLOBAL(uint32_t, 0x140404A6CULL + rb_offset + 225426058ULL)) {
        comp_delta = -3.1415927f;
    }
    if (!flip_side) {
        comp_delta = comp_delta + 3.14159265359f;
    }

    float w_sum_9 = (ws_a * sqrt_val) + py;
    float w_sum_10 = (ws_c * sqrt_val) + px;
    float w_sum_11 = SR_GLOBAL(float, 0x140404A6CULL + 34 * SR_GLOBAL(uint32_t, 0x140404A6CULL + rb_offset + 225426056ULL) + 225391234ULL);
    float w_sum_12 = (ws_b * sqrt_val) + pz;

    if (w_sum_9 < w_sum_11) w_sum_9 = w_sum_11;
    if (w_sum_9 < SR_GLOBAL(float, 0x140404A6CULL + 34 * tv2 + 225391234ULL)) {
        w_sum_9 = SR_GLOBAL(float, 0x140404A6CULL + 34 * tv2 + 225391234ULL);
    }

    float comp_sum = w_sum_9 + 2.0f;
    float f_buf[3];
    f_buf[0] = w_sum_10 - (view_origin_x * 128.0f);
    f_buf[1] = (w_sum_9 + 2.0f) - (view_origin_y * 128.0f);
    f_buf[2] = w_sum_12 - (view_origin_z * 128.0f);

    float final_sum;
    if (sub_1400DC050(&w_sum_10, f_buf, 0)) {
        final_sum = ragdoll_height_clamp;
    } else {
        final_sum = comp_sum;
    }

    uint32_t current_count = world_spawn_count;
    uint64_t scaled_idx = 383LL * (int64_t)current_count;
    uint32_t *slot = (uint32_t *)((uint8_t *)world_spawn_slots - 0x175FF3468ULL + 0x15FD16264ULL + scaled_idx);
    
    memset(slot, 0, 0x5F8);
    
    slot[1] = *(uint32_t *)&w_sum_10;
    slot[2] = *(uint32_t *)&final_sum;
    slot[0] = view_mode;
    slot[3] = *(uint32_t *)&w_sum_12;
    
    uint32_t table_val_3 = SR_GLOBAL(uint32_t, 0x140404A6CULL + rb_offset + 225426059ULL);
    int32_t int_diff = flip_side ? (table_val_3 - edge_offset - 1) : (edge_offset + table_val_3);
    
    slot[0x1A4] = int_diff;
    slot[0x1A5] = int_diff;
    slot[0x1A1] = edge_side;
    slot[0x1A2] = flip_side;
    slot[0x1A3] = -1;
    slot[0x1A7] = 0;
    
    *(float *)&slot[11] = comp_delta;
    slot[124] = marker_flags;
    slot[149] = 1080033280;
    slot[150] = -1090519040;
    slot[151] = 1077936128;
    slot[156] = 1;
    
    int32_t r1 = rand() % SR_GLOBAL(int32_t, 0x175FF3464ULL);
    int32_t r2 = rand();
    sub_140008E40(current_count, slot[0x1A1], flip_side, r1, r2 & 1);
    
    uint32_t *mat = &slot[12];
    mat[0] = 1065353216;
    mat[1] = 0;
    mat[2] = 1065353216;
    mat[3] = 0;
    mat[8] = 1065353216;
    
    sr_math_mat3_rotate_rows(mat, (float *)&slot[12], (float)(comp_delta + 1.570796326795f));
    
    world_spawn_count++;
    return current_count;
}
