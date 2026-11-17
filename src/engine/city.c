/* City block tables: one block's slice of the .sbl tables the world asset
 * loader fills, written back out and redrawn per block. See city.h. */
#include "city.h"
#include "memory.h"
#include <stdio.h>

/* Existing client boundaries, with their original prototypes: sprintf
 * 0x140158AB0, fopen 0x14020B8D8, fclose 0x14020B9E8. */
extern void crt_sprintf(char *out, const char *format, ...);
extern long long crt_fopen(char *name, char *mode);
extern long long crt_fclose(long long file);

/* The original's read callback slot, 0x1862AE008: startup stores the address
 * of its fread wrapper there (see world_assets.c), so a test can redirect
 * reads by replacing that slot. The wrappers in src/client/ reach the same
 * slot. */
#define SR_GLOBAL_READ_FN SR_GLOBAL(uintptr_t, 0x1862AE008ULL)
#define SR_READ(dst, size, count, file) \
    ((void (*)(void *, uint64_t, uint64_t, void *))(uintptr_t)SR_GLOBAL_READ_FN)( \
        (dst), (uint64_t)(size), (uint64_t)(count), (void *)(uintptr_t)(file))

/* Block <block>'s slice of the tables: the region at 0x1ABC89C00 + 0x3040
 * (the world table's record stride) * block. The renderer reads the draw
 * records from here; the loader writes them. */
#define SR_CITY_BLOCK_REGION SR_GLOBAL(unsigned char, 0x1ABC89C00ULL)
#define SR_CITY_BLOCK_STRIDE 0x3040ULL
#define city_block(block) (&SR_CITY_BLOCK_REGION + SR_CITY_BLOCK_STRIDE * (uint64_t)(int64_t)(block))

/* The first word of a block's slice is the table version (the loader accepts
 * version 1 only); the rest of the layout is the world table's:
 *   +0x40: the mesh-group count
 *   +0x74: group 0's count words
 *   +0x1C4: group 0's vertices (rounds of 3 floats, 2 floats each)
 *   +0x2F8: group 0's face records (floats + a dword)
 *   +0x1B8: the light count; +0x1C8 the light records (floats + a dword)
 * with each later group and light following the last record of the one
 * before it. */
#define BLOCK_VERSION(block) SR_GLOBAL(int32_t, (block) + 0)
#define GROUP_COUNT_OFFSET 0x40ULL
#define GROUP_COUNT_WORDS 1ULL
#define GROUP_STRIDE 0x1B8ULL
#define GROUP_COUNT_OFFSET_IN_GROUP 0x74ULL
#define GROUP_LIGHT_COUNT_OFFSET_IN_GROUP 0x88ULL
#define GROUP_LIGHT_FLOATS_OFFSET_IN_GROUP 0x98ULL
#define GROUP_LIGHT_FLOATS_ROUNDS 6ULL
#define GROUP_LIGHT_LAST_FLOAT_OFFSET_IN_GROUP 0xB4ULL
#define GROUP_LIGHTS_OFFSET_IN_GROUP 0xC8ULL
#define GROUP_LIGHTS_ROUNDS 5ULL
#define GROUP_LIGHTS_VERTEX_STRIDE 0xCULL
#define GROUP_LIGHTS_FACE_STRIDE 0x18ULL
#define GROUP_LIGHTS_FACE_FLOATS_OFFSET 0xCULL
#define GROUP_LIGHTS_FACE_DWORD_OFFSET 0x18ULL
#define GROUP_LIGHTS_FACE_COUNT_OFFSET 0x50ULL
#define GROUP_LIGHTS_FACE_COUNT_STRIDE 0x60ULL
#define GROUP_LIGHTS_VERTEX_COUNT_OFFSET 0x74ULL
#define GROUP_LIGHTS_VERTEX_COUNT_STRIDE 0x60ULL
#define GROUP_LIGHTS_VERTEX_OFFSET 0x7CULL
#define GROUP_LIGHTS_VERTEX_COUNT 4ULL
#define GROUP_LIGHTS_TEX_STRIDE 0x10ULL
#define GROUP_LIGHTS_TEX_ROUNDS 2ULL
#define GROUP_LIGHTS_MATERIAL_OFFSET 0x1C0ULL
#define GROUP_LIGHTS_MATERIAL_STRIDE 0x4ULL
#define LIGHT_COUNT_OFFSET 0x1B8ULL
#define LIGHT_RECORDS_OFFSET 0x1C8ULL
#define LIGHT_STRIDE 0x1CULL
#define LIGHT_FLOATS_OFFSET 0x0ULL
#define LIGHT_FLOATS_STRIDE 0x4ULL
#define LIGHT_FLOAT_ROUNDS 6ULL
#define LIGHT_INT_OFFSET 0x18ULL

/* 0x140027230. The original walks the tables with running cursors it never
 * resets between groups: the group count words are read at +0x74 + 0x1B8 *
 * group, the vertex rounds at +0x1C4 + 0x1B8 * group (the cursor advances
 * 0xC per vertex, the texture cursor 0x8), the face records at +0x2F8 +
 * 0x1B8 * group (0x18 per face), and the lights at +0x1C8 + 0x1B8 * group
 * (0x1C per light, six floats and a dword). The read of a count word repeats
 * until the group's own count says otherwise, and the version word is read
 * once before all of it. */
void city_block_table_load(const char *name, int block)
{
    char path[512];
    void *file;
    int version;
    int group;
    unsigned char *region = city_block(block);

    crt_sprintf(path, "buildblock/%s.sbl", name);
    file = (void *)(uintptr_t)crt_fopen(path, "rb");
    if (!file)
        return;
    SR_READ(&version, 4, 1, file);
    if (version == 1) {
        unsigned char *group_counts = region + GROUP_COUNT_OFFSET_IN_GROUP;
        unsigned char *group_vertices = region + GROUP_LIGHTS_MATERIAL_OFFSET;
        unsigned char *group_faces = region + GROUP_LIGHTS_FACE_FLOATS_OFFSET;
        unsigned char *group_lights = region + GROUP_LIGHTS_VERTEX_OFFSET;
        int group_index;
        for (group_index = 0; group_index < GROUP_LIGHTS_ROUNDS; ++group_index) {
            int count;
            SR_READ(group_counts, 4, 1, file);
            SR_READ(group_counts + 4, 4, 1, file);
            SR_READ(group_counts + 8, 4, 1, file);
            SR_READ(group_counts + 0xC, 4, 1, file);
            SR_READ(group_counts + 0x10, 4, 1, file);
            SR_READ(group_counts + 0x14, 4, 1, file);
            count = *(int32_t *)(group_counts - 0x1C);
            if (count > 0) {
                int index;
                for (index = 0; index < count; ++index) {
                    unsigned char *vertex = region + 0x1B8 + 0x30 * (group_index * 4 + index);
                    SR_READ(vertex, 4, 1, file);
                    SR_READ(vertex + 4, 4, 1, file);
                    SR_READ(vertex + 8, 4, 1, file);
                }
                group_faces = region + 0x1B8 + 0x30 * (group_index * 4 + count);
            }
            SR_READ(group_counts + 0x2C, 4, 1, file);
            count = *(int32_t *)group_counts;
            if (count > 0) {
                int index;
                for (index = 0; index < count; ++index) {
                    unsigned char *face = region + 0x1B8 + 0x3C * index;
                    SR_READ(face, 4, 1, file);
                    SR_READ(face + 4, 4, 1, file);
                    SR_READ(face + 8, 4, 1, file);
                    SR_READ(face + 0xC, 4, 1, file);
                    SR_READ(face + 0x10, 4, 1, file);
                }
            }
            SR_READ(group_lights, 4, 1, file);
            count = *(int32_t *)(group_lights + 0x144);
            if (count > 0) {
                int index;
                for (index = 0; index < count; ++index) {
                    unsigned char *light = region + 0x1B8 + 0x60 * (group_index * 4 + index);
                    SR_READ(light, 4, 1, file);
                    SR_READ(light + 4, 4, 1, file);
                    SR_READ(light + 8, 4, 1, file);
                    SR_READ(light + 0xC, 4, 1, file);
                    SR_READ(light + 0x10, 4, 1, file);
                }
            }
        }
    }
    crt_fclose((long long)(uintptr_t)file);
}
