#ifndef SR_ENGINE_BLOCKS_H
#define SR_ENGINE_BLOCKS_H

#include <stdint.h>

/* 0x14000C180. Renders voxels within a volume for a given layer. */
void blocks_render_voxels(void *ctx, uint32_t layer, const float *min, const float *max);

/* 0x140012670. Clears a voxel and its neighbors' occlusion bits. */
void blocks_clear_voxel(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);

#endif
