// NC_WRAPPERS: 140038130
/* Allocating the collision grid's block of a 64-unit cell: 0x140038130, the
 * cold path of the insert (0x140037DE0). The cell pointers, the block count
 * and the block table come from the game state; the count's 32-bit wrap
 * (a count of -1 runs the memset over the count and the cell pointers, just
 * below the block table) and the ids at the table's end are driven directly. */
#include <string.h>
#include "nc.h"
#include "world.h"

#define WINDOW 16384            /* safe cell indices either side of centre */
#define STATE_FROM 0x1800       /* below the block table: the wrap's memset */
#define STATE_PAST 0x110000     /* the table, the leaf count, and past it */

static int32_t cells[WORLD_GRID_LAYERS][2 * WINDOW];

/* Cell sizes up to 6; layer->chunks[1] is not read by the routine and is
 * filled with a different draw so using it instead of the z size shows. */
static int32_t size(void)
{
    if (nc_rand_below(10) < 7)
        return (int32_t)nc_rand_below(4);
    return 4 + (int32_t)nc_rand_below(3);
}

static int32_t coordinate(int32_t size)
{
    switch (nc_rand_below(10)) {
    case 0: case 1: return -(int32_t)(1 + nc_rand_below(8));   /* below the first cell */
    case 2: return size + (int32_t)nc_rand_below(2);           /* just past the last */
    case 3: return (int32_t)(nc_rand() & 0x7F) - 64;           /* wider either side */
    default: return (int32_t)nc_rand_below((uint32_t)(size > 0 ? size : 1));
    }
}

/* The next block index: an early count, the table's end (the last block the
 * table holds and the first that spills past it), and the 32-bit wrap. */
static int32_t count_value(void)
{
    switch (nc_rand_below(10)) {
    case 0: case 1: return (int32_t)(0xFFFFFFFEu + nc_rand_below(2));
    case 2: case 3: return 480 + (int32_t)nc_rand_below(33);
    case 4: return 512 + (int32_t)nc_rand_below(17);
    default: return (int32_t)nc_rand_below(64);
    }
}

int main(void)
{
    nc_map_image();
    for (int layer = 0; layer < WORLD_GRID_LAYERS; layer++)
        nc_save(world_level_layers[layer].chunks, sizeof world_level_layers[layer].chunks);
    nc_save((char *)world_grid_blocks - STATE_FROM, STATE_FROM + STATE_PAST);
    for (int n = 0; n < nc_cases(1000); n++) {
        nc_seed(n);
        nc_restore();
        for (int layer = 0; layer < WORLD_GRID_LAYERS; layer++) {
            world_grid_size_x(layer) = size();
            world_grid_size_y(layer) = size();
            world_grid_size_z(layer) = size();
            world_grid_cells(layer) = &cells[layer][WINDOW];
            for (int i = 0; i < 2 * WINDOW; i++)
                cells[layer][i] = (int32_t)nc_rand();
        }
        int layer = (int)nc_rand_below(WORLD_GRID_LAYERS);
        int32_t cx = coordinate(world_grid_size_x(layer));
        int32_t cy = coordinate(world_grid_size_y(layer));
        int32_t cz = coordinate(world_grid_size_z(layer));
        int32_t count = count_value();
        world_grid_block_count = count;
        nc_line("case %d layer %d %d %d %d count %08x", n, layer, cx, cy, cz, (uint32_t)count);

#ifdef NC_NATIVE
        uint32_t id = ((uint32_t (*)(int, int, int, int))NC_ADDR(0x140038130))(layer, cx, cy, cz);
#elif defined(NC_CLIENT_WRAPPERS)
        extern __int64 sr_world_grid_alloc_cell_block(int a1, int a2, int a3, int a4);
        uint32_t id = (uint32_t)sr_world_grid_alloc_cell_block(layer, cx, cy, cz);
#else
        uint32_t id = (uint32_t)world_grid_alloc_cell_block(layer, cx, cy, cz);
#endif
        nc_line("id %08x count %08x", id, (uint32_t)world_grid_block_count);
        /* The cell pointers point into this program's own array, whose address
         * differs between the two builds: report them relative to it. */
        for (int l = 0; l < WORLD_GRID_LAYERS; l++)
            if (world_grid_cells(l) == &cells[l][WINDOW])
                world_grid_cells(l) = (int32_t *)(intptr_t)(0x100 + l);
        nc_line("cells %016llx %016llx %016llx %016llx",
                (unsigned long long)nc_hash(cells[0], sizeof cells[0]),
                (unsigned long long)nc_hash(cells[1], sizeof cells[1]),
                (unsigned long long)nc_hash(cells[2], sizeof cells[2]),
                (unsigned long long)nc_hash(cells[3], sizeof cells[3]));
        nc_line("chunks %016llx %016llx %016llx %016llx",
                (unsigned long long)nc_hash(world_level_layers[0].chunks, 12),
                (unsigned long long)nc_hash(world_level_layers[1].chunks, 12),
                (unsigned long long)nc_hash(world_level_layers[2].chunks, 12),
                (unsigned long long)nc_hash(world_level_layers[3].chunks, 12));
        unsigned char *chunk = (unsigned char *)world_grid_blocks + 2048LL * (int64_t)(int32_t)id;
        nc_bytes("chunk", chunk, 0x40);
        nc_line("chunk %016llx state %016llx",
                (unsigned long long)nc_hash(chunk, 0x800),
                (unsigned long long)nc_hash((char *)world_grid_blocks - STATE_FROM, STATE_FROM + STATE_PAST));
    }
    return 0;
}
