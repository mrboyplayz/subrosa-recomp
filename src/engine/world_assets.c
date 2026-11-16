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

/* The write callback slot, 0x1862AE010: the twin of the read slot, holding
 * the original's fwrite wrapper (0x14020CE0C). */
#define SR_GLOBAL_WRITE_FN SR_GLOBAL(uintptr_t, 0x1862AE010ULL)
#define SR_WRITE(dst, size, count, file) \
    ((void (*)(void *, uint64_t, uint64_t, void *))(uintptr_t)SR_GLOBAL_WRITE_FN)( \
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

/* The read callback slot's counterpart, 0x14020CE0C: the original's fwrite
 * wrapper, reached through the write slot 0x1862AE010 the same way. */

/* City-state globals the city serializer touches, 0x175EEA08C downwards and
 * up to 0x175FBB094. */
#define SR_CITY_BUILDING_COUNT SR_GLOBAL(int32_t, 0x175EEA08CULL)
#define SR_CITY_BUILDING_NAMES SR_GLOBAL(unsigned char, 0x175EEA090ULL)
#define SR_CITY_WORLD_COUNT SR_GLOBAL(int32_t, 0x16E486878ULL)
#define SR_CITY_WORLD_BASE SR_GLOBAL(unsigned char, 0x16E486840ULL)
#define SR_CITY_COMPANY_COUNT SR_GLOBAL(int32_t, 0x16E48987CULL)
#define SR_CITY_ZONE_COUNT SR_GLOBAL(int32_t, 0x16E492084ULL)
#define SR_CITY_BLOCK_COUNT SR_GLOBAL(int32_t, 0x1726DA088ULL)
#define SR_CITY_ROAD_COUNT SR_GLOBAL(int32_t, 0x175FBB094ULL)

/* asset_save_city_sbc_candidate, 0x1400D62A0: writes data/%s/city2.sbc with
 * file version 12 (the decompiled C reuses the loader's fread names, but the
 * original calls the write wrapper 0x14020CE0C and stores 12 first). */
void sr_city_sbc_save(const char *city_name)
{
    char file_name[256];
    long long file = 0;
    int version = 12;
    int name_index;
    int world_index;
    int company_index;
    int zone_index;
    int block_index;
    int road_index;

    crt_sprintf(file_name, "data/%s/city2.sbc", city_name);
    file = crt_fopen(file_name, "wb");
    if (!file)
        return;
    SR_WRITE(&version, 4, 1, file);
    SR_WRITE(&SR_CITY_BUILDING_COUNT, 4, 1, file);
    for (name_index = 0; name_index < SR_CITY_BUILDING_COUNT; ++name_index)
        SR_WRITE(&SR_CITY_BUILDING_NAMES + 64 * (uint64_t)(unsigned int)name_index, 1, 64, file);
    SR_WRITE(&SR_CITY_WORLD_COUNT, 4, 1, file);
    for (world_index = 0; world_index < SR_CITY_WORLD_COUNT; ++world_index) {
        unsigned char *world = &SR_CITY_WORLD_BASE + 0xCULL * (uint64_t)(unsigned int)world_index;
        SR_WRITE(world + 0x3C, 4, 1, file);
        SR_WRITE(world + 0x40, 4, 1, file);
        SR_WRITE(world + 0x44, 4, 1, file);
    }
    SR_WRITE(&SR_CITY_COMPANY_COUNT, 4, 1, file);
    for (company_index = 0; company_index < SR_CITY_COMPANY_COUNT; ++company_index) {
        unsigned char *company = &SR_CITY_WORLD_BASE + 0x3040ULL + 0x34ULL * (uint64_t)(unsigned int)company_index;
        SR_WRITE(company + 0x0, 4, 1, file);
        SR_WRITE(company + 0x4, 4, 1, file);
        SR_WRITE(company + 0x8, 4, 1, file);
        SR_WRITE(company + 0xC, 4, 1, file);
        SR_WRITE(company + 0x10, 4, 1, file);
        SR_WRITE(company + 0x14, 1, 32, file);
    }
    SR_WRITE(&SR_CITY_BUILDING_COUNT, 4, 1, file);
    for (name_index = 0; name_index < SR_CITY_BUILDING_COUNT; ++name_index) {
        unsigned char *building = &SR_CITY_WORLD_BASE + 0x7A74858ULL + 0x60ULL * (uint64_t)(unsigned int)name_index;
        SR_WRITE(building, 1, 64, file);
        SR_WRITE(building + 0x40, 4, 1, file);
        SR_WRITE(building + 0x44, 4, 1, file);
        SR_WRITE(building + 0x48, 4, 1, file);
        SR_WRITE(building + 0x4C, 4, 1, file);
    }
    SR_WRITE(&SR_CITY_ZONE_COUNT, 4, 1, file);
    for (zone_index = 0; zone_index < SR_CITY_ZONE_COUNT; ++zone_index) {
        /* Names from 0x16E486840 + 0xB848, the entry-count word at +0xB88C
         * (name + 0x44) and the entries at 0x16E4920D0 (count + 4): the
         * record stride is 0x4248 and each entry is eight 64-byte chunks. */
        unsigned char *zone_state = (unsigned char *)&SR_GLOBAL(uint32_t, 0x16E4920CCULL)
            + 0x4248ULL * (uint64_t)(unsigned int)zone_index;
        unsigned char *zone_name = &SR_CITY_WORLD_BASE + 0xB848ULL
            + 0x4248ULL * (uint64_t)(unsigned int)zone_index;
        int32_t *zone_entry_count = (int32_t *)(void *)zone_state;
        unsigned char *zone_entries = zone_state + 4;
        int entry_index;
        SR_WRITE(zone_name, 1, 64, file);
        SR_WRITE(zone_entry_count, 4, 1, file);
        for (entry_index = 0; entry_index < *zone_entry_count; ++entry_index) {
            unsigned char *entry = zone_entries + 0x210ULL * (uint64_t)(unsigned int)entry_index;
            int chunk;
            for (chunk = 0; chunk < 8; ++chunk)
                SR_WRITE(entry + 0x40ULL * (uint64_t)chunk, 1, 64, file);
        }
    }
    SR_WRITE(&SR_CITY_BLOCK_COUNT, 4, 1, file);
    for (block_index = 0; block_index < SR_CITY_BLOCK_COUNT; ++block_index) {
        /* The record stride is 0x3810: four words (0x425384C..0x4253858 from
         * the world base), then two arrays of 512 words at +0x2210 and
         * +0x3010; the decompiled C wrote a 64-byte name here, the original
         * writes none. */
        unsigned char *block = &SR_CITY_WORLD_BASE + 0x425384CULL + 0x3810ULL * (uint64_t)(unsigned int)block_index;
        int word;
        SR_WRITE(block + 0x0, 4, 1, file);
        SR_WRITE(block + 0x4, 4, 1, file);
        SR_WRITE(block + 0x8, 4, 1, file);
        SR_WRITE(block + 0xC, 4, 1, file);
        for (word = 0; word < 512; ++word)
            SR_WRITE(block + 0x2210ULL + 4 * (uint64_t)word, 4, 1, file);
        for (word = 0; word < 512; ++word)
            SR_WRITE(block + 0x3010ULL + 4 * (uint64_t)word, 4, 1, file);
    }
    SR_WRITE(&SR_CITY_ROAD_COUNT, 4, 1, file);
    for (road_index = 0; road_index < SR_CITY_ROAD_COUNT; ++road_index) {
        /* Twelve bytes per road, written as one 4x3 read-sized call: the
         * original's lea 0xf6690b(%rax),%rcx; lea (%rax,%rcx,2),%rcx;
         * lea (%r15,%rcx,4) chain works out to 0x175EEA08C + 0xBB34858 +
         * 12 * i (0x181A1E8E4), not the name base the decompiled C shows. */
        uint32_t index = (uint32_t)road_index;
        SR_WRITE(&SR_GLOBAL(unsigned char, 0x181A1E8E4ULL) + 12ULL * index, 4, 3, file);
    }
    crt_fclose(file);
}
