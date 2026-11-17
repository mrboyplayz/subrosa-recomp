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

/* 0x140027690: the name-matching pass the building loader runs after every
 * load, opened or not (already wrapped in src/client/client_city.c). */
extern void sub_140027690(void);

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

/* Building record globals: the record pointer itself (passed in) and the
 * offset of the version-14 table from it. */
#define BUILDING_VERSION_OFFSET 0x40ULL
#define BUILDING_WORD_20_OFFSET 0x44ULL
#define BUILDING_WORD_21_OFFSET 0x48ULL
#define BUILDING_WORD_22_OFFSET 0x4CULL
#define BUILDING_WORD_23_OFFSET 0x50ULL
#define BUILDING_WORD_24_OFFSET 0x54ULL
#define BUILDING_TILE_COUNT_OFFSET 0x2D006ACULL
#define BUILDING_TILE_NAMES_OFFSET 0x2D006B0ULL
#define BUILDING_MATERIAL_COUNT_OFFSET 0x2D056B0ULL
#define BUILDING_MATERIAL_NAMES_OFFSET 0x2D056B4ULL
#define BUILDING_OBJECT_COUNT_OFFSET 0x2D166B4ULL
#define BUILDING_OBJECT_NAMES_OFFSET 0x2D166B8ULL
#define BUILDING_PERSON_COUNT_OFFSET 0x2D17AB8ULL
#define BUILDING_PERSON_NAMES_OFFSET 0x2D17ABCULL
#define BUILDING_HIGHLIGHT_COUNT_OFFSET 0x2D28ABCULL
#define BUILDING_HIGHLIGHTS_OFFSET 0x2D28AC0ULL
#define BUILDING_HIGHLIGHT_STRIDE 0x404ULL

/* The five defaults the original stores before opening the file, as one
 * 64-bit store for the last two (its movq $4,0x4C): 24, 4, 4, 4, 24. */
typedef struct {
    int32_t word[2];
} building_word_pair;

#define SR_GLOBAL_BUILDING_DEFAULTS(record) do { \
    SR_GLOBAL(int32_t, (uintptr_t)(record) + BUILDING_WORD_20_OFFSET) = 24; \
    SR_GLOBAL(int32_t, (uintptr_t)(record) + BUILDING_WORD_21_OFFSET) = 4; \
    SR_GLOBAL(building_word_pair, (uintptr_t)(record) + BUILDING_WORD_22_OFFSET) = \
        (building_word_pair){{4, 24}}; \
} while (0)

/* asset_load_building_sbb_candidate, 0x140026830: reads building/%s.sbb into
 * the record at `building` (the tiles, materials, objects, people, per-tile
 * words, and in version 14+ the highlight table), then calls 0x140027690
 * after every load, opened or not. Accepts file versions 12-14; a3 != 0
 * loads only the header and the version 13+ words. The read callback slot is
 * 0x1862AE018 (0x14020C0C8). */
void sr_building_sbb_load(void *building, const char *building_name, int a3)
{
    unsigned char *record = (unsigned char *)building;
    char file_name[512];
    long long file = 0;
    int version = 0;
    int i;

    /* Defaults stored before the file is opened: 24, 4, 4, 4, 24 (the last
     * two via a single 8-byte store). */
    SR_GLOBAL_BUILDING_DEFAULTS(record);
    crt_sprintf(file_name, "building/%s.sbb", building_name);
    file = crt_fopen(file_name, "rb");
    if (!file) {
        /* The original calls 0x140027690 after every load, opened or not. */
        sub_140027690();
        return;
    }
    SR_READ(&version, 4, 1, file);
    if ((unsigned int)(version - 12) > 2) {
        /* Exactly versions 12-14 pass (the original's jump-above test). */
        crt_fclose(file);
        sub_140027690();
        return;
    }
    SR_READ(record, 1, 64, file);
    SR_READ(record + BUILDING_WORD_20_OFFSET, 4, 1, file);
    SR_READ(record + BUILDING_WORD_21_OFFSET, 4, 1, file);
    SR_READ(record + BUILDING_WORD_22_OFFSET, 4, 1, file);
    if (version >= 13) {
        SR_READ(record + BUILDING_WORD_22_OFFSET, 4, 1, file);
        SR_READ(record + BUILDING_WORD_23_OFFSET, 4, 1, file);
        SR_READ(record + BUILDING_WORD_24_OFFSET, 4, 1, file);
    }
    if (a3) {
        crt_fclose(file);
        sub_140027690();
        return;
    }
    SR_READ(record + BUILDING_TILE_COUNT_OFFSET, 4, 1, file);
    for (i = 0; i < SR_GLOBAL(int32_t, (uintptr_t)record + BUILDING_TILE_COUNT_OFFSET); ++i)
        SR_READ(&record[BUILDING_TILE_NAMES_OFFSET + 64ULL * (uint64_t)(unsigned int)i], 1, 64, file);
    SR_READ(record + BUILDING_MATERIAL_COUNT_OFFSET, 4, 1, file);
    for (i = 0; i < SR_GLOBAL(int32_t, (uintptr_t)record + BUILDING_MATERIAL_COUNT_OFFSET); ++i)
        SR_READ(&record[BUILDING_MATERIAL_NAMES_OFFSET + 64ULL * (uint64_t)(unsigned int)i], 1, 64, file);
    SR_READ(record + BUILDING_OBJECT_COUNT_OFFSET, 4, 1, file);
    for (i = 0; i < SR_GLOBAL(int32_t, (uintptr_t)record + BUILDING_OBJECT_COUNT_OFFSET); ++i)
        SR_READ(&record[BUILDING_OBJECT_NAMES_OFFSET + 64ULL * (uint64_t)(unsigned int)i], 1, 64, file);
    SR_READ(record + BUILDING_PERSON_COUNT_OFFSET, 4, 1, file);
    for (i = 0; i < SR_GLOBAL(int32_t, (uintptr_t)record + BUILDING_PERSON_COUNT_OFFSET); ++i)
        SR_READ(&record[BUILDING_PERSON_NAMES_OFFSET + 64ULL * (uint64_t)(unsigned int)i], 1, 64, file);
    {
        /* Per-tile words: 0x40 tiles per floor, each with six words and
         * fifteen half-words, floor by floor. */
        int32_t *floors = (int32_t *)(void *)(record + BUILDING_WORD_21_OFFSET);
        int32_t *tiles_per_floor = (int32_t *)(void *)(record + BUILDING_WORD_20_OFFSET);
        int floor_index = 0;
        while (floor_index < *floors) {
            int tile_index = 0;
            if (*tiles_per_floor >= 0) {
                do {
                    unsigned char *tile = record
                        + 0x1000ULL * ((uint64_t)(unsigned int)tile_index + ((uint64_t)(unsigned int)floor_index << 6))
                        + 0x3CULL * (uint64_t)(unsigned int)tile_index;
                    SR_READ(tile + 0x5C, 4, 1, file);
                    SR_READ(tile + 0x60, 4, 1, file);
                    SR_READ(tile + 0x58, 4, 1, file);
                    SR_READ(tile + 0x64, 4, 1, file);
                    SR_READ(tile + 0x68, 4, 1, file);
                    SR_READ(tile + 0x6C, 4, 1, file);
                    SR_READ(tile + 0x70, 2, 1, file);
                    SR_READ(tile + 0x72, 2, 1, file);
                    SR_READ(tile + 0x74, 2, 1, file);
                    SR_READ(tile + 0x76, 2, 1, file);
                    SR_READ(tile + 0x78, 2, 1, file);
                    SR_READ(tile + 0x7A, 2, 1, file);
                    SR_READ(tile + 0x7C, 2, 1, file);
                    SR_READ(tile + 0x7E, 2, 1, file);
                    SR_READ(tile + 0x80, 2, 1, file);
                    SR_READ(tile + 0x82, 2, 1, file);
                    SR_READ(tile + 0x84, 2, 1, file);
                    SR_READ(tile + 0x86, 2, 1, file);
                    SR_READ(tile + 0x88, 2, 1, file);
                    SR_READ(tile + 0x8A, 2, 1, file);
                    SR_READ(tile + 0x8C, 2, 1, file);
                    SR_READ(tile + 0x8E, 2, 1, file);
                    SR_READ(tile + 0x90, 4, 1, file);
                    ++tile_index;
                } while (tile_index <= *tiles_per_floor);
            }
            ++floor_index;
        }
    }
    if (version >= 14) {
        int32_t *highlight_count = (int32_t *)(void *)(record + BUILDING_HIGHLIGHT_COUNT_OFFSET);
        int highlight_index = 0;
        SR_READ(highlight_count, 4, 1, file);
        if (*highlight_count > 0) {
            do {
                unsigned char *highlight = record + BUILDING_HIGHLIGHTS_OFFSET
                    + BUILDING_HIGHLIGHT_STRIDE * (uint64_t)(unsigned int)highlight_index;
                int32_t *entry_count = (int32_t *)(void *)highlight;
                int entry_index;
                SR_READ(entry_count, 4, 1, file);
                for (entry_index = 0; entry_index < *entry_count; ++entry_index) {
                    SR_READ(highlight + 0x4 + 0x10ULL * (uint64_t)(unsigned int)entry_index, 4, 3, file);
                    SR_READ(highlight + 0x10 + 0x10ULL * (uint64_t)(unsigned int)entry_index, 4, 1, file);
                }
                ++highlight_index;
            } while (highlight_index < *highlight_count);
        }
    }
    crt_fclose(file);
    sub_140027690();
}
