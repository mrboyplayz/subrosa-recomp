/* 2D drawing layer of the renderer: the vertex batch used for lines and
 * shapes, single rectangles, and sprites from a texture atlas. Everything the
 * HUD and menus draw goes through these functions.
 *
 * Each function is a rewrite of one routine of the original executable and
 * produces the same memory contents and the same OpenGL calls. The original
 * address is given next to every declaration.
 */
#ifndef SR_ENGINE_RENDERER_H
#define SR_ENGINE_RENDERER_H

#include <stdint.h>
#include "camera.h"
#include "memory.h"

/* ---- vertex batch -------------------------------------------------------- */

enum {
    RENDERER_BATCH_TRIANGLES = 0,
    RENDERER_BATCH_QUADS = 1,   /* four vertices per quad, drawn through the shared index buffer */
    RENDERER_BATCH_LINES = 2,
    RENDERER_BATCH_POINTS = 3
};

#define RENDERER_BATCH_CAPACITY 65536
#define RENDERER_BATCH_FLOATS_PER_VERTEX 9   /* position xyz, texcoord uv, colour rgba */

/* 0x1AD059440. A caller starts a batch by setting primitive, vertex_count = 0
   and floats_per_vertex = 9, sets colour and texcoord, adds vertices and ends
   with renderer_batch_flush(). */
typedef struct RendererBatch {
    int32_t primitive;
    int32_t unused_4;            /* not read or written by the batch functions */
    int32_t vertex_count;
    int32_t floats_per_vertex;
    float vertex_data[RENDERER_BATCH_CAPACITY * RENDERER_BATCH_FLOATS_PER_VERTEX];
    float color[4];              /* applied to vertices added from now on */
    float texcoord[2];
    uint32_t vertex_buffer;      /* GL buffer names */
    uint32_t index_buffer;
} RendererBatch;

#define renderer_batch (&SR_GLOBAL(RendererBatch, 0x1AD059440ULL))

void renderer_batch_vertex3f(float x, float y, float z);   /* 0x14007D420 */
void renderer_batch_vertex2f(float x, float y);            /* 0x14007D230 */
void renderer_batch_vertex3fv(const float *position);      /* 0x14007D520 */
void renderer_batch_vertex2fv(const float *position);      /* 0x14007D320 */
void renderer_batch_flush(void);                           /* 0x14006E0D0 */

/* Draws the batch like renderer_batch_flush() but with the program and
   uniforms the caller has set, for batches drawn with another shader.
   0x14006E2D0 */
void renderer_batch_draw(void);

/* ---- single rectangles and sprites --------------------------------------- */

/* How x, y relate to the rectangle. Without a flag they are its top-left corner. */
enum {
    RENDERER_ANCHOR_CENTER_X = 0x01,
    RENDERER_ANCHOR_RIGHT = 0x02,
    RENDERER_ANCHOR_CENTER_Y = 0x04,
    RENDERER_ANCHOR_BOTTOM = 0x08,
    RENDERER_RECT_FLIP_V = 0x80      /* textured rectangle only: v runs 0..1 downward instead of 1..0 */
};

/* 0x1A8BF79CC. Scratch vertices of the rectangle, sprite or text being drawn. */
typedef struct RendererQuadScratch {
    int32_t vertex_count;
    int32_t floats_per_vertex;
    float vertex_data[1000 * 4 * 5];   /* text: 1,000 glyphs of four 5-float vertices */
} RendererQuadScratch;

#define renderer_quad_scratch (&SR_GLOBAL(RendererQuadScratch, 0x1A8BF79CCULL))

/* Program, matrix and buffer shared by all 2D drawing. The matrix is the
   camera's current model-view-projection, set up by camera_begin_2d(). */
#define renderer_ui_program        SR_GLOBAL(uint32_t, 0x1ABD4AC00ULL)
#define renderer_ui_matrix_uniform SR_GLOBAL(int32_t, 0x1ABD4AC14ULL)
#define renderer_ui_matrix         (renderer_camera->model_view_projection)
#define renderer_quad_buffer       SR_GLOBAL(uint32_t, 0x1ABD4AC9CULL)

/* One image inside an atlas texture. 48 bytes. */
typedef struct RendererAtlasEntry {
    int32_t width, height;       /* pixels */
    float texcoord[4][2];        /* top-left, top-right, bottom-right, bottom-left */
    int32_t unknown_28[2];
} RendererAtlasEntry;

/* 0x1A7971DC0, 196,664 bytes each. */
typedef struct RendererAtlas {
    uint32_t texture;
    int32_t unknown_4[6];
    RendererAtlasEntry entries[4096];
    int32_t unknown_3001c[7];
} RendererAtlas;

#define renderer_atlases (&SR_GLOBAL(RendererAtlas, 0x1A7971DC0ULL))

/* Rectangle with the bound texture stretched over it. 0x14006CFF0 */
void renderer_draw_textured_rect(float x, float y, float width, float height, int flags,
                                 float red, float green, float blue, float alpha);

/* Rectangle whose texture coordinates are all zero, for flat colour with the
   white texture bound. 0x14006D660 */
void renderer_draw_flat_rect(float x, float y, float width, float height, int flags,
                             float red, float green, float blue, float alpha);

/* One atlas image. 0x14006D300 */
void renderer_draw_atlas_sprite(int atlas, int entry, float x, float y, float width, float height,
                                int flags, float red, float green, float blue, float alpha);

#endif
