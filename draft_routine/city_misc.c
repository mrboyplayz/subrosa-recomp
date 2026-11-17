/* DRAFT — city/block miscellaneous routines, verified against the original
 * machine code with tools/native-compare (suite t_citymisc.c).
 *
 * To finish: move into src/engine/city_misc.c (+ city_misc.h), rewire the
 * decompiled bodies in src/client/client_city.c / client_blocks.c with calls
 * into these ports, keep the suite as tools/native-compare/t_citymisc.c +
 * citymisc.mutations, prove plain and --client-wrappers, then mutate.
 * (mutate.py cannot run against a draft dir: it copies src/engine.)
 *
 * Notes for whoever lands this:
 *  - city_load_block_files (0x140026E70) and city_load_block_type
 *    (0x140027230) run CRT file I/O and directory listing; their suite binds
 *    KERNEL32!FindFirstFileExW / FindNextFileW / FindClose to stand-ins and
 *    redirects crt_fopen/crt_fread/crt_fclose via nc_redirect in BOTH builds
 *    (they are internal routines of the exe, not imports).
 *  - renderer_ui_init (0x140077710) issues real OpenGL calls; its suite
 *    points every GL slot it uses at recorders, like t_rendererstate.c, so
 *    both builds log identical calls.
 *  - item_grid_write_vertices (0x1401885C0) writes into a caller arena of
 *    1024 * 6 dwords; the suite supplies a mapped arena and drives the
 *    count directly, past the 1024 edge included.
 *  - city_clear_block_types (0x140037FE0) calls world_grid_insert (still
 *    unported) and world_grid_alloc_cell_block at their addresses; the port
 *    build links them over their names, both builds run the same code.
 */

#include <string.h>
#include "memory.h"
#include "arith.h"
#include "crt.h"
#include "world.h"
#include "city_misc.h"

/* ---- 0x1401885C0 --------------------------------------------------------- */

/* The item-vertex grid: 0x195AD08E0. Each cell of the 0x3C48-byte cell
 * array has words 0x18..0x24: three corner vertex indices, word 0x1C a
 * count and word 0x2C a capacity, words 0x3C.. three corner record indices
 * and words 0x603C.. three corner record "u" words. */
typedef struct ItemGridCell {
    uint8_t unknown_0[0x18];
    int32_t vertex_0;
    int32_t count;
    int32_t vertex_2;
    uint8_t unknown_28[0x2C - 0x28];
    int32_t capacity;
    uint8_t unknown_30[0x3C - 0x30];
    int32_t records[3];
    uint8_t unknown_48[0x603C - 0x48];
    int32_t u[3];
} ItemGridCell;

#define ITEM_GRID_STRIDE 0x3C48
#define ITEM_GRID_ARENA_CAPACITY 1024       /* 6 dwords per entry, in the caller's arena */

/* Copies one cell's triangle into the caller's vertex arena: three entries
 * of six dwords each (position xyz from the corner records, uv from the
 * cell), dropping the whole cell once the arena holds 1024 entries. Returns
 * the caller's spare dword; the original returns whatever its last call left
 * in rax and no caller reads it. */
uint64_t item_grid_write_vertices(int32_t *out, int cell, int32_t spare)
{
    ItemGridCell *c = (ItemGridCell *)(item_grid_cell_base(cell));
    uint64_t result = (uint32_t)spare;

    if (c->count < c->capacity) {
        int i = c->count;
        do {
            if (out[0] < ITEM_GRID_ARENA_CAPACITY) {
                int64_t vertex = 6LL * out[0];
                int64_t corner_0 = ITEM_GRID_STRIDE * (int64_t)cell
                                       + 4LL * (c->records[0] + 5144LL * (int64_t)cell);
                int64_t corner_1 = ITEM_GRID_STRIDE * (int64_t)cell
                                       + 4LL * (c->records[1] + 5144LL * (int64_t)cell);
                int64_t corner_2 = ITEM_GRID_STRIDE * (int64_t)cell
                                       + 4LL * (c->records[2] + 5144LL * (int64_t)cell);
                out[2 * vertex + 1] = (int32_t)corner_0;
                out[2 * vertex + 2] = (int32_t)(corner_0 + 4);
                out[2 * vertex + 3] = (int32_t)(corner_0 + 8);
                out[2 * vertex + 4] = (int32_t)corner_1;
                out[2 * vertex + 5] = (int32_t)(corner_1 + 4);
                out[2 * vertex + 6] = (int32_t)(corner_1 + 8);
                out[2 * vertex + 7] = (int32_t)corner_2;
                out[2 * vertex + 8] = (int32_t)(corner_2 + 4);
                out[2 * vertex + 9] = (int32_t)(corner_2 + 8);
                out[2 * vertex + 10] = c->u[0];
                out[2 * vertex + 11] = c->u[1];
                out[2 * vertex + 12] = c->u[2];
                out[0]++;
            }
            i++;
        } while (i < c->capacity);
    }
    return result;
}

/* ---- 0x140037FE0 --------------------------------------------------------- */

/* 0x182A7E18C: the "gun" word of each block type, 0x13D0 bytes apart. */
#define city_block_type_gun(type) SR_GLOBAL(int32_t, 0x182A7E18CULL + 0x13D0ULL * (uint64_t)(int64_t)(type))

/* Clears the voxel grid (every cell of every layer empty, the leaf count 0),
 * then enters every active item's whole voxel range into layer 0 with its
 * low 15 id bits tagged 0x8000, dropping items of types that are not marked
 * and ranges outside the grid. */
void city_clear_block_types(void)
{
    const WorldItem *items = &SR_GLOBAL(const WorldItem, 0x182BBB180ULL);
    int layer, y, z, item;

    for (layer = 0; layer < WORLD_LEVEL_LAYER_COUNT; layer++) {
        int32_t size_y = world_grid_size_y(layer);
        int32_t size_z, size_x;
        if (size_y <= 0)
            continue;
        size_z = world_grid_size_z(layer);
        size_x = world_grid_size_x(layer);
        for (y = 0; y < size_z; y++) {
            for (z = 0; z < size_y; z++) {
                int cx;
                for (cx = 0; cx < size_x; cx++)
                    world_grid_cells(layer)[cx + size_x * (y + size_z * z)] = -1;
            }
        }
    }
    world_grid_leaf_count = 0;

    for (item = 0; item < WORLD_ITEM_CAPACITY; item++) {
        if (items[item].physics_simulated && city_block_type_gun(items[item].type)) {
            int x, y, z;
            for (x = items[item].voxel_min[2]; x <= items[item].voxel_max[2]; x++)
                for (y = items[item].voxel_min[1]; y <= items[item].voxel_max[1]; y++)
                    for (z = items[item].voxel_min[0]; z <= items[item].voxel_max[0]; z++)
                        world_grid_insert(0, z, y, x, (uint16_t)(0x8000 | (item & 0x7FFF)));
        }
    }
}

/* ---- 0x140077710 --------------------------------------------------------- */

/* Shader sources of the 2D program: vertex at 0x1402B21B0, fragment at
 * 0x1402B2320 (both in .data). 35633 vertex, 35632 fragment; 6408 RGBA,
 * 5121 unsigned byte, 33071 clamp to edge, 9728 nearest; 2359296-byte
 * vertex buffer, 196608-byte index buffer of 16,384 strips. */
#define SR_MEM_1402B21B0 ((const char *)SR_GLOBAL(char, 0x1402B21B0ULL))
#define SR_MEM_1402B2320 ((const char *)SR_GLOBAL(char, 0x1402B2320ULL))
#define GL_VERTEX_SHADER_SRC   35633
#define GL_FRAGMENT_SHADER_SRC 35632
#define GL_RGBA                6408
#define GL_UNSIGNED_BYTE       5121
#define GL_CLAMP_TO_EDGE       33071
#define GL_NEAREST             9728
#define RENDERER_INDEX_STRIPS  0x4000
#define g_1AD299468 SR_GLOBAL(uint32_t, 0x1AD299468ULL)
#define g_1AD29946C SR_GLOBAL(uint32_t, 0x1AD29946CULL)
#define g_1AD299470 SR_GLOBAL(int16_t, 0x1AD299470ULL)
#define g_1AD059444 SR_GLOBAL(int32_t, 0x1AD059444ULL)
#define g_1ABD4AC04 SR_GLOBAL(uint32_t, 0x1ABD4AC04ULL)
#define g_1ABD4AC08 SR_GLOBAL(uint32_t, 0x1ABD4AC08ULL)
#define g_1ABD4AC34 SR_GLOBAL(uint32_t, 0x1ABD4AC34ULL)
#define g_1ABD4AC98 SR_GLOBAL(uint32_t, 0x1ABD4AC98ULL)

/* Builds the 2D UI program from the two compiled-in shader sources, its
 * uniforms, the vertex array, the quad and index buffers and the 1x1 white
 * RGBA texture, then fills the shared index buffer: for each of the 16,384
 * strips, 0,0 / 1,2 / 2,3 / 2,3... over the strip's base vertex (3 dwords
 * per strip, 0x30000 bytes). */
void renderer_ui_init(void)
{
    const char *sources[1];
    int i;

    renderer_ui_program = glCreateProgram();
    g_1ABD4AC04 = glCreateShader(GL_VERTEX_SHADER_SRC);
    g_1ABD4AC08 = glCreateShader(GL_FRAGMENT_SHADER_SRC);

    sources[0] = SR_MEM_1402B21B0;
    glShaderSource(g_1ABD4AC04, 1, (const char *const *)&sources, 0);
    glCompileShader(g_1ABD4AC04);
    glAttachShader(renderer_ui_program, g_1ABD4AC04);

    sources[0] = SR_MEM_1402B2320;
    glShaderSource(g_1ABD4AC08, 1, (const char *const *)&sources, 0);
    glCompileShader(g_1ABD4AC08);
    glAttachShader(renderer_ui_program, g_1ABD4AC08);

    glLinkProgram(renderer_ui_program);
    glUseProgram(renderer_ui_program);
    renderer_ui_matrix_uniform = glGetUniformLocation(renderer_ui_program, "modelviewprojectionmatrix");
    g_1ABD4AC34 = glGetUniformLocation(renderer_ui_program, "tex_color");
    glUniform1i(g_1ABD4AC34, 0);

    glGenVertexArrays(1, &g_1ABD4AC98);
    glGenBuffers(1, &renderer_quad_buffer);
    glGenTextures(1, &renderer_white_texture);
    glBindTexture(GL_TEXTURE_2D, renderer_white_texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    i = -1;
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, 1, 1, 0, GL_RGBA, GL_UNSIGNED_BYTE, &i);

    glGenBuffers(1, &g_1AD299468);
    glGenBuffers(1, &g_1AD29946C);
    glBindVertexArray(g_1ABD4AC98);
    glBindBuffer(GL_ARRAY_BUFFER, g_1AD299468);
    glBufferData(GL_ARRAY_BUFFER, 2359296, 0, GL_STREAM_DRAW);
    for (i = 0; i < RENDERER_INDEX_STRIPS; i++) {
        int16_t base = (int16_t)(4 * i);
        int16_t *strip = &g_1AD299470 + 6LL * (int64_t)i + 2;
        strip[0] = base;
        strip[3] = base;
        strip[1] = (int16_t)(base + 1);
        strip[2] = (int16_t)(base + 2);
        strip[5] = (int16_t)(base + 3);
        strip[4] = (int16_t)(base + 2);
    }
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, g_1AD29946C);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, 196608, &g_1AD299470, GL_STATIC_DRAW);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    g_1AD059444 = -1;
}

/* ---- 0x140026E70 --------------------------------------------------------- */

/* The city name table: 64-byte NUL-terminated names at 0x185E29578+... no:
 * the count lives at 0x18622DFE0, a sort order at 0x18622DFE4, and the name
 * slots follow the count in the mapped state region. */
#define CITY_NAME_TABLE ((unsigned char *)dword_140404A6C + (0x185E29578ULL - SR_STATE_BASE))
#define CITY_NAME_STRIDE 64
#define CITY_NAME_LIMIT 64
#define g_18622DFE0 SR_GLOBAL(uint32_t, 0x18622DFE0ULL)
#define g_18622DFE4 SR_GLOBAL(uint32_t, 0x18622DFE4ULL)

extern int crt_findfirst(const char *pattern, void *find_data);   /* 0x14023A198 */
extern int crt_findnext(int handle, void *find_data);             /* 0x14023A5C4 */
extern void crt_findclose(int handle);                            /* 0x140239CCC */
extern void sr_text_compare_bytes(void);                          /* 0x14004C4C0 */

/* Finds every *.sbl next to the client, copies each file name into the
 * 64-byte name table, sorts it with sr_text_compare_bytes, strips the ".sbl"
 * extension, and loads each block type. Returns 0; the original's result is
 * ignored by its callers. */
uint64_t city_load_block_files(void)
{
    uint8_t find_data[304];
    int chdir_result;
    int handle;
    int i;

    LOBYTE(g_1ABC89C00_byte()) = 0;
    chdir_result = crt_chdir("buildblock");
    handle = crt_findfirst("*.sbl", find_data);
    g_18622DFE0 = 0;
    if (handle != -1) {
        int count = 0;
        for (;;) {
            if (count >= 1024)
                break;
            if ((find_data[0] & 0x10) == 0) {
                const char *cursor = (const char *)find_data + 36;
                unsigned char *slot = CITY_NAME_TABLE + CITY_NAME_STRIDE * (int64_t)count;
                do {
                    *slot++ = *cursor++;
                } while (cursor[-1]);
                g_18622DFE0++;
            }
            if (crt_findnext(handle, find_data) == -1)
                break;
            count = (int)g_18622DFE0;
        }
    }
    *(unsigned char *)(CITY_NAME_TABLE + CITY_NAME_STRIDE * (int64_t)(int)g_18622DFE0) = 0;
    crt_findclose(handle);
    sr_sort_u32((unsigned int *)&g_18622DFE4, (int)g_18622DFE0, 0x40u, sr_text_compare_bytes);
    for (i = 0; i < (int)g_18622DFE0 && i < CITY_NAME_LIMIT; i++)
        city_strip_extension(CITY_NAME_TABLE + CITY_NAME_STRIDE * (int64_t)i);
    if (!chdir_result)
        crt_chdir("..");
    i = (int)g_18622DFE0;
    if (i > CITY_NAME_LIMIT)
        i = CITY_NAME_LIMIT;
    g_18622DFE0 = (uint32_t)i;
    for (i = 0; i < (int)g_18622DFE0; i++)
        city_load_block_type((char *)CITY_NAME_TABLE + CITY_NAME_STRIDE * (int64_t)i, i);
    return 0;
}

/* ---- 0x140027230 --------------------------------------------------------- */

/* The 0x3040-byte block-type table at 0x1ABC89C00: type counts at +0x64/
 * +0x74/+0x84/+0x94, vertex pools at +0x5C/+0x60/+0x64 and +0xBC/+0xC4/
 * +0xC8/+0xCC/+0xD0, a read-more flag at +0xB8. All inside the mapped state
 * region. */
#define city_type_counts(b) SR_GLOBAL(int32_t, 0x1ABC89C74ULL + 0x3040ULL * (uint64_t)(b) + 4ULL * (uint64_t)(b))
#define g_1ABC89C5C SR_GLOBAL(int32_t, 0x1ABC89C5CULL)
#define g_1ABC89C78 SR_GLOBAL(int32_t, 0x1ABC89C78ULL)
#define g_1ABC89DBC SR_GLOBAL(int32_t, 0x1ABC89DBCULL)
#define g_1862AE008 SR_GLOBAL(unsigned int, 0x1862AE008ULL)

extern long long crt_fopen(const char *name, const char *mode);   /* 0x14020B8D8 */
extern void crt_fread(unsigned int *slots, int size, int count, long long file); /* 0x14020CE0C */
extern void crt_fclose(long long file);                           /* 0x14020B9E8 */

/* Loads one block type's .sbl: the build count, then 16 groups of vertices
 * (5 words, then count x 3, then 1, then count x 5, then 1, then count x 5)
 * into the block-type tables, leaving the file open when the count is not
 * 1. The original returns void; the suite compares the tables it writes. */
void city_load_block_type(const char *name, int block)
{
    char path[96];
    long long file;
    int32_t count;

    crt_sprintf(path, "buildblock/%s.sbl", name);
    file = crt_fopen(path, "rb");
    if (file) {
        crt_fread((unsigned int *)&count, 4, 1, file);
        if (count == 1) {
            int g, k;
            for (g = 0; g < 16; g++) {
                int32_t *counts = &city_type_counts(0)[8 * (int64_t)block];
                for (k = 0; k < 5; k++)
                    crt_fread((unsigned int *)&counts[k - 5] - 94 + k, 4, 1, file);
            }
        }
        crt_fclose(file);
    }
}
