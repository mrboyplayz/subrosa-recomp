/* Draft recovery of block/.sbl loader, 0x1400E6E50 (src/client/client_world_assets.c). */

#include "nc.h"
#include "memory.h"

/* The original's read callback slot, 0x1862AE008: startup stores the address
 * of fread_sr (0x1402233C0) there and the asset loaders call through it. In
 * the harness both builds reach the same slot: startup 0x1401550C0 stores it
 * in the native build, the suite binds it in the port build. */
#define SR_GLOBAL_READ_FN SR_GLOBAL(uintptr_t, 0x1862AE008ULL)
#define SR_READ_FOOTER(dst, size, count, file) \
    ((void (*)(void *, uint64_t, uint64_t, void *))(uintptr_t)SR_GLOBAL_READ_FN)( \
        (dst), (uint64_t)(size), (uint64_t)(count), (file))

/* Block header word block, 0x144FBFBA0..0x144FBFBC4: eleven int32 words read
 * from block/*.sbl, the last (0x144FBFBC4) is the mesh-group count. */
typedef struct {
    int32_t word[11];
} block_header_words;

#define SR_BLOCK_HEADER_WORDS SR_GLOBAL(block_header_words, 0x144FBFBA0ULL)
#define SR_BLOCK_MESH_GROUP_COUNT SR_GLOBAL(int32_t, 0x144FBFBC4ULL)

/* Block mesh-group records, 0x144FBFB60 + 0x15C * i (straddles the header).
 * The decompiler wrote the +0x74 read as 19852378; the disassembly reads
 * +0x6C, +0x70, +0x74, +0x78 (0x144FBFBCC..0x144FBFBD8), so the second read
 * is the first word again, not 19852378. */
#define SR_BLOCK_MESH_GROUP_RECORDS(base, i) \
    ((unsigned char *)(base) + 0x15CULL * (uint64_t)(i))
#define MESH_GROUP_STRIDE 0x15CULL
#define MESH_GROUP_COUNT_OFFSET 0x74ULL
#define MESH_GROUP_SECOND_OFFSET 0x6CULL
#define MESH_GROUP_THIRD_OFFSET 0x78ULL
#define MESH_GROUP_FIRST_OFFSET 0x70ULL
#define MESH_GROUP_NAME_OFFSET 0x1BCULL
#define MESH_GROUP_MATERIAL_OFFSET 0x1C0ULL
#define MESH_GROUP_BLOCK_BASE 0x1C4ULL
#define MESH_GROUP_VERTICES_OFFSET 0x13CULL
#define MESH_GROUP_VERTICES_BASE 0x7CULL
#define MESH_GROUP_VERTEX_STRIDE 0xCULL
#define MESH_GROUP_VERTEX_TEX_STRIDE 0x8ULL
#define MESH_GROUP_VERTEX_ROUNDS 4
#define MESH_GROUP_VERTICES_ROUNDS 4

/* Block lights array, 0x144FBFB60 + 0x2B86C + 0x7C * i. */
#define LIGHTS_BASE_OFFSET 0x2B86CULL
#define LIGHT_STRIDE 0x7CULL
#define LIGHT_VERTEX_OFFSET 0x0ULL
#define LIGHT_VERTEX_STRIDE 0xCULL
#define LIGHT_VERTEX_ROUNDS 8
#define LIGHT_FLOATS_OFFSET 0x60ULL
#define LIGHT_FLOATS_STRIDE 0x4ULL
#define LIGHT_FLOAT_ROUNDS 6
#define LIGHT_FLOATS_EXTRA_COUNT 4
#define LIGHT_FLOATS_EXTRA_SIZE 1
#define LIGHT_FLOATS_EXTRA_BASE 4
#define LIGHT_INT_OFFSET 0xE4ULL

/* asset_load_block_sbl_candidate, 0x1400E6E50: reads block/%s.sbl, accepts
 * versions 1-2, fills the block header words, the per-mesh-group records and
 * (in version 2+) the block lights, then closes the file. Returns nothing
 * (the recompiled stub returns 0; every caller ignores it). */
void sr_block_sbl_load(const char *a1, FILE *sbl_file)
{
    FILE *file = sbl_file;
    int version = 0;
    int iteration_count = 0;
    int i;

    if (!file)
        return;
    SR_READ_FOOTER(&version, 4, 1, file);
    if ((unsigned int)(version - 1) <= 1) {
        SR_READ_FOOTER(&SR_BLOCK_HEADER_WORDS, 4, 1, file);
        SR_READ_FOOTER(&SR_BLOCK_MESH_GROUP_COUNT, 4, 1, file);
        for (i = 0; i < SR_BLOCK_MESH_GROUP_COUNT; ++i) {
            unsigned char *records =
                SR_BLOCK_MESH_GROUP_RECORDS(&SR_BLOCK_HEADER_WORDS, i);
            SR_READ_FOOTER(records + MESH_GROUP_COUNT_OFFSET, 4, 1, file);
            SR_READ_FOOTER(records + MESH_GROUP_SECOND_OFFSET, 4, 1, file);
            SR_READ_FOOTER(records + MESH_GROUP_THIRD_OFFSET, 4, 1, file);
            SR_READ_FOOTER(records + MESH_GROUP_FIRST_OFFSET, 4, 1, file);
            SR_READ_FOOTER(records + MESH_GROUP_NAME_OFFSET, 4, 1, file);
            SR_READ_FOOTER(records + MESH_GROUP_MATERIAL_OFFSET, 4, 1, file);
            for (int j = 0; j < MESH_GROUP_VERTEX_ROUNDS; ++j)
                for (int k = 0; k < MESH_GROUP_VERTICES_ROUNDS; ++k) {
                    SR_READ_FOOTER(records + MESH_GROUP_VERTICES_BASE + MESH_GROUP_VERTEX_STRIDE * (unsigned int)(j), 4, 3, file);
                    SR_READ_FOOTER(records + MESH_GROUP_VERTICES_BASE + MESH_GROUP_VERTEX_TEX_STRIDE * (unsigned int)(j), 4, 2, file);
                    (void)k;
                }
        }
        SR_BLOCK_LIGHT_COUNT = 0;
        if (version >= 2) {
            SR_READ_FOOTER(&SR_BLOCK_LIGHT_COUNT, 4, 1, file);
            if (SR_BLOCK_LIGHT_COUNT > 0) {
                do {
                    unsigned char *lights =
                        SR_BLOCK_LIGHT_RECORDS(&SR_BLOCK_HEADER_WORDS, iteration_count);
                    for (int j = 0; j < LIGHT_VERTEX_ROUNDS; ++j) {
                        SR_READ_FOOTER(lights + LIGHT_VERTEX_OFFSET + LIGHT_VERTEX_STRIDE * (unsigned int)(j), 4, 3, file);
                    }
                    for (int j = 0; j < LIGHT_FLOAT_ROUNDS; ++j) {
                        SR_READ_FOOTER(lights + LIGHT_FLOATS_OFFSET + LIGHT_FLOATS_STRIDE * (unsigned int)(j), 4, 1, file);
                    }
                    SR_READ_FOOTER(lights + LIGHT_INT_OFFSET, 4, 1, file);
                    ++iteration_count;
                } while (iteration_count < SR_BLOCK_LIGHT_COUNT);
            }
        }
    }
    fclose(file);
}
