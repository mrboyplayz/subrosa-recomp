/* World asset loaders: block/*.sbl block tables.
 *
 * Recovered from src/client/client_world_assets.c and the original machine
 * code (the disassembly is the spec — the decompiled C wrote one read at the
 * wrong offset, see the mesh-group comment below).
 */
#include "world_assets.h"
#include "memory.h"
#include <stdio.h>

/* Existing client boundaries, with their original prototypes: sprintf
 * 0x140158AB0, fopen 0x14020B8D8, fclose 0x14020B9E8. */
extern void crt_sprintf(char *out, const char *format, ...);
extern long long crt_fopen(char *name, char *mode);
extern long long crt_fclose(long long file);

/* The original's read callback slot, 0x1862AE008: startup 0x1401550C0 stores
 * the address of its fread wrapper (fread_sr, 0x1402233C0) there and the
 * asset loaders call through it, so a save can redirect reads by replacing
 * that slot. The wrappers in src/client/ reach the same slot. */
#define SR_GLOBAL_READ_FN SR_GLOBAL(uintptr_t, 0x1862AE008ULL)
#define SR_READ(dst, size, count, file) \
    ((void (*)(void *, uint64_t, uint64_t, void *))(uintptr_t)SR_GLOBAL_READ_FN)( \
        (dst), (uint64_t)(size), (uint64_t)(count), (void *)(uintptr_t)(file))

/* Block header word block, 0x144FBFBA0..0x144FBFBC4: ten int32 words read
 * one by one from block/*.sbl, the last (0x144FBFBC4) is the mesh-group
 * count. */
typedef struct {
    int32_t word[10];
} block_header_words;

#define SR_BLOCK_HEADER_WORDS SR_GLOBAL(block_header_words, 0x144FBFBA0ULL)
#define SR_BLOCK_MESH_GROUP_COUNT SR_GLOBAL(int32_t, 0x144FBFBC4ULL)
#define SR_BLOCK_LIGHT_COUNT SR_GLOBAL(int32_t, 0x144FEB3C8ULL)

/* The block tables live in one flat region starting at 0x144FBFB60; the
 * header words sit at +0x40, so every record base is that region plus a
 * fixed offset plus the record stride times the index. */
#define SR_BLOCK_REGION SR_GLOBAL(unsigned char, 0x144FBFB60ULL)

/* Per-mesh-group records at 0x144FBFB60 + 0x15C * i. The decompiled C wrote
 * the second read as +0x78 again (dword 19852378, +0x74 relative to the
 * header words); the disassembly reads +0x74, +0x6C, +0x78, +0x70
 * (0x144FBFBCC..0x144FBFBD8), so the second read is the first word once
 * more, not 19852378. */
#define MESH_GROUP_STRIDE 0x15CULL
#define MESH_GROUP_COUNT_OFFSET 0x74ULL
#define MESH_GROUP_SECOND_OFFSET 0x6CULL
#define MESH_GROUP_THIRD_OFFSET 0x78ULL
#define MESH_GROUP_FIRST_OFFSET 0x70ULL
#define MESH_GROUP_NAME_OFFSET 0x1BCULL
#define MESH_GROUP_MATERIAL_OFFSET 0x1C0ULL
#define MESH_GROUP_BLOCK_BASE 0x1C4ULL
#define MESH_GROUP_VERTICES_BASE 0x7CULL
#define MESH_GROUP_VERTICES_OFFSET 0x13CULL
#define MESH_GROUP_VERTEX_STRIDE 0xCULL
#define MESH_GROUP_VERTEX_TEX_STRIDE 0x8ULL
#define MESH_GROUP_VERTEX_ROUNDS 4

/* Per-light records at 0x144FBFB60 + 0x2B86C + 0x7C * i. */
#define LIGHTS_BASE_OFFSET 0x2B86CULL
#define LIGHT_STRIDE 0x7CULL
#define LIGHT_VERTEX_STRIDE 0xCULL
#define LIGHT_VERTEX_ROUNDS 8
#define LIGHT_FLOATS_OFFSET 0x60ULL
#define LIGHT_FLOATS_STRIDE 0x4ULL
#define LIGHT_FLOAT_ROUNDS 6
#define LIGHT_INT_OFFSET 0xE4ULL

/* 0x1400E6E50. The recompiled stub returns 0, and no caller reads it. */
void sr_block_sbl_load(const char *a1)
{
    char file_name[512];
    long long file = 0;
    int version = 0;
    int group_index;
    int light_index;

    crt_sprintf(file_name, "block/%s.sbl", a1);
    file = crt_fopen(file_name, "rb");
    if (!file)
        return;
    SR_READ(&version, 4, 1, file);
    /* (unsigned int)(version - 1) <= 1 keeps the original's jump-below-or-
     * above test: exactly versions 1 and 2 pass. */
    if ((unsigned int)(version - 1) <= 1) {
        /* Ten words one by one, from 0x144FBFBA0 up to 0x144FBFBC4 (the last
         * is the mesh-group count). */
        int word_index;
        for (word_index = 0; word_index < 10; ++word_index)
            SR_READ(&SR_BLOCK_HEADER_WORDS.word[word_index], 4, 1, file);
        for (group_index = 0; group_index < SR_BLOCK_MESH_GROUP_COUNT; ++group_index) {
            unsigned char *group = &SR_BLOCK_REGION + MESH_GROUP_STRIDE * (uint64_t)(unsigned int)group_index;
            SR_READ(group + MESH_GROUP_COUNT_OFFSET, 4, 1, file);
            SR_READ(group + MESH_GROUP_SECOND_OFFSET, 4, 1, file);
            SR_READ(group + MESH_GROUP_THIRD_OFFSET, 4, 1, file);
            SR_READ(group + MESH_GROUP_FIRST_OFFSET, 4, 1, file);
            SR_READ(group + MESH_GROUP_NAME_OFFSET, 4, 1, file);
            SR_READ(group + MESH_GROUP_MATERIAL_OFFSET, 4, 1, file);
            {
                /* Four rounds of vertices; the read cursors advance without
                 * being reset between rounds. */
                unsigned char *positions = group + MESH_GROUP_VERTICES_BASE;
                unsigned char *texcoords = group + MESH_GROUP_VERTICES_OFFSET;
                int round;
                int j;
                for (round = 0; round < MESH_GROUP_VERTEX_ROUNDS; ++round)
                    for (j = 0; j < MESH_GROUP_VERTEX_ROUNDS; ++j) {
                        SR_READ(positions, 4, 3, file);
                        SR_READ(texcoords, 4, 2, file);
                        positions += MESH_GROUP_VERTEX_STRIDE;
                        texcoords += MESH_GROUP_VERTEX_TEX_STRIDE;
                    }
            }
        }
        SR_BLOCK_LIGHT_COUNT = 0;
        if (version >= 2) {
            SR_READ(&SR_BLOCK_LIGHT_COUNT, 4, 1, file);
            if (SR_BLOCK_LIGHT_COUNT > 0) {
                do {
                    unsigned char *light = &SR_BLOCK_REGION + LIGHTS_BASE_OFFSET
                        + LIGHT_STRIDE * (uint64_t)(unsigned int)light_index;
                    int j;
                    for (j = 0; j < LIGHT_VERTEX_ROUNDS; ++j) {
                        SR_READ(light, 4, 3, file);
                        light += LIGHT_VERTEX_STRIDE;
                    }
                    for (j = 0; j < LIGHT_FLOAT_ROUNDS; ++j) {
                        SR_READ(light, 4, 1, file);
                        light += LIGHT_FLOATS_STRIDE;
                    }
                    SR_READ(light, 4, 1, file);
                    ++light_index;
                } while (light_index < SR_BLOCK_LIGHT_COUNT);
            }
        }
    }
    /* The original closes the file on both paths (fclose at 0x1400E7244 in
     * the tail, reached when the version test fails too). */
    crt_fclose(file);
}
