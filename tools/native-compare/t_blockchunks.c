// NC_WRAPPERS: 1400D5950
#include "nc.h"
#include "block_chunks.h"

#ifdef NC_NATIVE
#define cell(layer, x, y, z) ((uint64_t (*)(int, int, int, int))NC_ADDR(0x1400D5950))(layer, x, y, z)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1400D5950(int, int, int, int);
#define cell(layer, x, y, z) ((uint64_t)sub_1400D5950(layer, x, y, z))
#else
#define cell(layer, x, y, z) ((uint64_t)block_chunk_cell(layer, x, y, z))
#endif

int main(void)
{
    static const int32_t counts[] = {0, 1, 2, 6, 24, 64, -1};
    nc_map_image();
    for (int n = 0; n < nc_cases(3000); ++n) {
        nc_seed(n);
        int32_t count = counts[n % 7];
        block_chunk_count = count;
        /* Few distinct keys, so records repeat and the last match decides. */
        for (int i = 0; i < 64; ++i) {
            BlockChunk *chunk = &block_chunks[i];
            chunk->layer = (int32_t)nc_rand_below(3);
            chunk->x = (int32_t)nc_rand_below(4) - 2;
            chunk->y = (int32_t)nc_rand_below(4) - 2;
            chunk->z = (int32_t)nc_rand_below(4) - 2;
            for (int c = 0; c < 512; ++c) chunk->cells[c] = nc_chance(30) ? 0 : (uint32_t)nc_rand();
        }
        int32_t layer = (int32_t)nc_rand_below(3);
        int32_t x = (int32_t)nc_rand_below(32) - 16;
        int32_t y = (int32_t)nc_rand_below(32) - 16;
        int32_t z = (int32_t)nc_rand_below(32) - 16;
        if (nc_chance(5)) x = (int32_t)nc_rand();
        uint64_t result = cell(layer, x, y, z);
        nc_line("cell %d count %d at %d %d %d %d result %016llx", n, count, layer, x, y, z,
                (unsigned long long)result);
    }
    return 0;
}
