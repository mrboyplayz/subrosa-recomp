/* Terrain tile grids: the level is 8 x 8 tiles, each a 2049 x 2049 float
 * grid (the extra row and column repeat the neighbour's edge so a tile can
 * be meshed alone). See terrain.h. */
#include <stdint.h>
#include "terrain.h"

#define TILE_SIZE 2048
#define GRID_STRIDE 2049

/* Records are 13344 bytes apart; the tile's grid pointer sits 0x1811BF858
   into the first. */
static inline float *tile_grid(int tile)
{
    return SR_GLOBAL(float *, 0x1811BF858ULL + 13344ULL * (unsigned)tile);
}

static inline void grid_put(int x, int y, float height)
{
    int tile_x = x >> 11, tile_y = y >> 11;
    if ((unsigned)tile_x > 7 || (unsigned)tile_y > 7)
        return;
    int tile = tile_x + 8 * tile_y;
    int local_x = x & 0x7FF, local_y = y & 0x7FF;
    tile_grid(tile)[local_y * GRID_STRIDE + local_x] = height;

    /* A sample on a tile's first column or row is also the neighbour's last. */
    if (local_x == 0 && tile_x > 0) {
        if (local_y == 0 && tile_y > 0)
            tile_grid(tile - 9)[TILE_SIZE * GRID_STRIDE + TILE_SIZE] = height;
        tile_grid(tile - 1)[local_y * GRID_STRIDE + TILE_SIZE] = height;
    }
    if (local_y == 0 && tile_y > 0)
        tile_grid(tile - 8)[TILE_SIZE * GRID_STRIDE + local_x] = height;
}

void terrain_grid_put(int x, int y, float height)
{
    grid_put(x, y, height);
}

/* The original runs these before and after the spread; kept in the client. */
extern void sub_1400D3340(int kind);
extern int64_t sub_1400D00F0(int chunk);

/* Source heights: 2049 x 2049 floats starting one word before 0x16D482830. */
#define SOURCE(i) SR_GLOBAL(float, 0x16D48282CULL + 4ULL * (uint64_t)(i))

static const int flatten_kinds[] = {2, 40, 32, 46, 45, 47, 28, 10, 33, 42, 35, 13, 59, 31,
                                    52, 48, 50, 19, 22, 58, 62, 61, 41, 36, 43, 44, 38, 39};

/* Six lists of 12-byte entries: count at +0, a cursor at +12, entries from
   +16 (each entry's first word is the one that is reset). */
static const uint64_t entry_lists[] = {0x1810FF788ULL, 0x1811177A0ULL, 0x18112F7B8ULL, 0x1811477D0ULL,
                                       0x18115F7E8ULL, 0x181177800ULL, 0x18118F818ULL};

unsigned int *terrain_init(void)
{
    /* Bilinear spread of each source sample over its 8 x 8 cells. Only a
       block on a tile's first row or column can reach a neighbour's grid;
       every other block is plain stores into its own tile. */
    float weight[8];
    for (int k = 0; k < 8; k++)
        weight[k] = (float)k * 0.125f;
    for (int block_y = 0; block_y < 2048; block_y++) {
        for (int block_x = 0; block_x < 2048; block_x++) {
            int at = block_x + GRID_STRIDE * block_y;
            float h00 = SOURCE(at), h10 = SOURCE(at + 1);
            float h01 = SOURCE(at + GRID_STRIDE), h11 = SOURCE(at + GRID_STRIDE + 1);
            int x0 = block_x * 8, y0 = block_y * 8;
            int on_edge = (x0 & 0x7FF) == 0 || (y0 & 0x7FF) == 0;
            float *cell = tile_grid((x0 >> 11) + 8 * (y0 >> 11)) + (y0 & 0x7FF) * GRID_STRIDE + (x0 & 0x7FF);
            for (int v = 0; v < 8; v++, cell += GRID_STRIDE) {
                float inv_v = 1.0f - weight[v];
                float left = inv_v * h00 + h01 * weight[v];
                float right = inv_v * h10 + h11 * weight[v];
                if (on_edge) {
                    for (int u = 0; u < 8; u++)
                        grid_put(x0 + u, y0 + v, (1.0f - weight[u]) * left + right * weight[u]);
                } else {
                    for (int u = 0; u < 8; u++)
                        cell[u] = (1.0f - weight[u]) * left + right * weight[u];
                }
            }
        }
    }

    if (!terrain_frozen)
        for (unsigned k = 0; k < sizeof flatten_kinds / sizeof *flatten_kinds; k++)
            sub_1400D3340(flatten_kinds[k]);
    for (int chunk = 0; chunk < 64; chunk++)
        sub_1400D00F0(chunk);

    /* Per tile, 256 cell slots of 52 bytes begin with seven words set to -1. */
    for (int tile = 0; tile < 64; tile++) {
        uint32_t *slot = &SR_GLOBAL(uint32_t, 0x1811BF874ULL + 13344ULL * (unsigned)tile);
        for (int cell = 0; cell < 256; cell++, slot += 13)
            for (int k = 0; k < 7; k++)
                slot[k] = 0xFFFFFFFFu;
    }

    unsigned int *result = NULL;
    for (unsigned list = 0; list < sizeof entry_lists / sizeof *entry_lists; list++) {
        uint64_t base = entry_lists[list];
        int32_t *count = &SR_GLOBAL(int32_t, base);
        int32_t *entry = &SR_GLOBAL(int32_t, base + 16);
        SR_GLOBAL(int32_t, base + 12) = 0;
        int done = 0;
        /* The count is re-read each time, as the original does. */
        while (done < *count) {
            *entry = -1;
            entry += 3;
            done++;
        }
        /* What the original leaves in its result register: the iteration
           count after the sixth list, the advanced entry pointer after the
           last when it has entries. */
        if (list == 5)
            result = (unsigned int *)(uintptr_t)(unsigned)done;
        else if (list == 6 && done > 0)
            result = (unsigned int *)entry;
    }
    return result;
}
