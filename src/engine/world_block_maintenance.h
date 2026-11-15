#ifndef WORLD_BLOCK_MAINTENANCE_H
#define WORLD_BLOCK_MAINTENANCE_H
#include "world.h"

/* Mesh record back-link; the rest of each 0x8C24-byte mesh is untouched. */
#define world_mesh_record_link(mesh) SR_GLOBAL(int32_t, 0x151E46224ULL + (uint64_t)(mesh) * 0x8C24ULL)
/* The original increments this counter only when invalidating record 1008.
 * Its broader purpose is unknown. */
#define world_record_1008_counter SR_GLOBAL(uint32_t, 0x18402CC00ULL)

uint32_t world_block_unknown_808_at(uint32_t layer, uint32_t x, uint32_t y, uint32_t z);
uint64_t world_set_block_unknown_808(uint32_t layer, uint32_t x, uint32_t y, uint32_t z, uint32_t value);
void world_release_block_mesh(uint32_t record, int32_t quarter);
void world_invalidate_block_meshes(uint32_t record);
#endif
