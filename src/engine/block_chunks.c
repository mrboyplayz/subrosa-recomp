#include "block_chunks.h"

uint32_t block_chunk_cell(int32_t layer, int32_t x, int32_t y, int32_t z)
{
    int32_t found = -1;
    int32_t count = block_chunk_count;
    for (int32_t i = 0; i < count; i++) {
        const BlockChunk *chunk = &block_chunks[i];
        if (chunk->layer == layer && chunk->x == x >> 3 && chunk->y == y >> 3 && chunk->z == z >> 3)
            found = i;
    }
    if (found == -1) return 0;
    return block_chunks[found].cells[64 * (y & 7) + 8 * (z & 7) + (x & 7)];
}
