#include "blocks.h"
#include "memory.h"
#include <stdint.h>
#include <math.h>

extern void sub_1400174D0(void *ctx, uint32_t layer, int *status, uint32_t value, float scale);
extern void sub_140018CA0(void *ctx, uint32_t layer, int *status, uint32_t value, float scale);

void blocks_render_voxels(void *ctx, uint32_t layer, const float *min, const float *max)
{
    uint64_t lb = 0x1416124ULL + (uint64_t)layer * 0x100B00ULL;
    
    int32_t chunks[3] = {
        SR_GLOBAL(int32_t, lb + 0x14 + 0), 
        SR_GLOBAL(int32_t, lb + 0x14 + 4),
        SR_GLOBAL(int32_t, lb + 0x14 + 8)
    };
    
    float scale = SR_GLOBAL(float, lb + 0x10);

    int32_t x_start = (int)ceilf(min[0]);
    int32_t x_end = (int)floorf(max[0]);
    int32_t y_start = (int)ceilf(min[1]);
    int32_t y_end = (int)floorf(max[1]);
    int32_t z_start = (int)ceilf(min[2]);
    int32_t z_end = (int)floorf(max[2]);

    for (int y = y_start; y <= y_end; ++y) {
        if (y < 0 || y >= (chunks[1] << 6)) continue;
        for (int z = z_start; z <= z_end; ++z) {
            if (z < 0 || z >= (chunks[2] << 6)) continue;
            for (int x = x_start; x <= x_end; ++x) {
                if (x < 0 || x >= (chunks[0] << 6)) continue;

                int cell_idx = (x >> 6) + chunks[0] * ((z >> 6) + chunks[2] * (y >> 6));
                uint32_t *chunk_table = (uint32_t *)SR_GLOBAL(uintptr_t, lb + 0x1C);
                int record_idx = chunk_table[cell_idx];

                if (record_idx == -1) continue;

                uint32_t voxel_idx = (x & 7) + 8 * ((z & 7) + 8 * (y & 7));
                uint32_t bit_idx = 6930 * record_idx + voxel_idx;
                
                uint32_t *table1 = (uint32_t *)0x14161248ULL;
                uint32_t *table2 = (uint32_t *)0x14164248ULL;

                uint32_t val1 = table1[bit_idx];
                if ((val1 & 0xE0000000) == 0x40000000) {
                    int status;
                    sub_1400174D0(ctx, layer, &status, val1, scale);
                } else if ((val1 & 0xE0000000) == 0x80000000) {
                    int status;
                    sub_140018CA0(ctx, layer, &status, val1, scale);
                }

                uint32_t val2 = table2[bit_idx];
                if ((val2 & 0xE0000000) == 0x40000000) {
                    int status;
                    sub_1400174D0(ctx, layer, &status, val2, scale);
                } else if ((val2 & 0xE0000000) == 0x80000000) {
                    int status;
                    sub_140018CA0(ctx, layer, &status, val2, scale);
                }
            }
        }
    }
}
