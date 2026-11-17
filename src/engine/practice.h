#ifndef SR_ENGINE_PRACTICE_H
#define SR_ENGINE_PRACTICE_H

#include <stdint.h>

typedef struct {
    uint32_t record[383];
} WorldSpawnSlot;

uint32_t sr_practice_place_spawn(int32_t view_mode, uint32_t marker_flags, int32_t edge_side, int32_t flip_side, int32_t edge_offset, float reach);
void sr_practice_place_spawn_at(int32_t view_mode, uint32_t marker_flags, int32_t edge_side, int32_t flip_side, int32_t edge_offset, float pos_x, float pos_y, float pos_z, float drop_height, float spawn_height, float reach, int32_t record_edge_count);

#endif
