/* A sparse table of 8 x 8 x 8 block cells keyed by a layer word and a
 * chunk position, up to 4,096 records of 0x3810 bytes. The renderer asks
 * it whether a block's neighbours are filled. 0x1726DA088, 0x1726DA08C */
#ifndef SR_ENGINE_BLOCK_CHUNKS_H
#define SR_ENGINE_BLOCK_CHUNKS_H
#include "memory.h"

typedef struct BlockChunk {
    int32_t layer;
    int32_t x, y, z;              /* block coordinates >> 3 */
    uint32_t cells[8 * 8 * 8];    /* [y & 7][z & 7][x & 7] */
    uint8_t unknown_810[0x3810 - 0x810];
} BlockChunk;
_Static_assert(sizeof(BlockChunk) == 0x3810, "block chunk stride");
#define block_chunk_count SR_GLOBAL(int32_t, 0x1726DA088ULL)
#define block_chunks (&SR_GLOBAL(BlockChunk, 0x1726DA08CULL))

/* The cell of the block, from the last record that matches; 0 when none
 * does. 0x1400D5950 */
uint32_t block_chunk_cell(int32_t layer, int32_t x, int32_t y, int32_t z);
#endif
