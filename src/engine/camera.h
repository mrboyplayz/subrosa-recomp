/* Camera layer of the renderer: the window and its 16:9 letterbox, the
 * viewport and scissor rectangles, and the projection, view and model
 * matrices together with their products, which every shader reads.
 *
 * Rectangles passed in are in canvas units: the 2D coordinate system the HUD
 * and menus are laid out in (renderer_canvas_size, y pointing down). They are
 * converted to window pixels here.
 *
 * Each function is a rewrite of one routine of the original executable and
 * produces the same memory contents and the same OpenGL calls. The original
 * address is given next to every declaration.
 */
#ifndef SR_ENGINE_CAMERA_H
#define SR_ENGINE_CAMERA_H

#include <stdint.h>
#include "memory.h"

/* ---- window and letterbox ------------------------------------------------ */

/* 0x160FC47D8. */
typedef struct RendererDisplay {
    int32_t window_width, window_height;   /* set on every resize */
    int32_t unknown_8, unknown_c;
    int32_t render_width, render_height;   /* viewport of 2D drawing when not letterboxed */
    /* The largest 16:9 rectangle centred in the window. */
    int32_t letterbox_width, letterbox_height;
    int32_t letterbox_x, letterbox_y;
    int32_t letterboxed;                   /* non-zero: draw into the letterbox only */
} RendererDisplay;

#define renderer_display (&SR_GLOBAL(RendererDisplay, 0x160FC47D8ULL))

/* Size of the 2D canvas, 0x1A8BF79C4. */
#define renderer_canvas_width  SR_GLOBAL(float, 0x1A8BF79C4ULL)
#define renderer_canvas_height SR_GLOBAL(float, 0x1A8BF79C8ULL)

/* Fits the letterbox rectangle to the current window size. 0x14006C780 */
void camera_update_letterbox(void);

/* ---- matrices ------------------------------------------------------------ */

/* 0x1A724E580. Row vectors: a point p is drawn at p * model * view * projection. */
typedef struct RendererCamera {
    float projection[16];
    float view[16];
    float model[16];
    float model_view[16];             /* model * view */
    float view_projection[16];        /* view * projection */
    float model_view_projection[16];  /* model * view * projection */
} RendererCamera;

#define renderer_camera (&SR_GLOBAL(RendererCamera, 0x1A724E580ULL))

/* Font table, 0x1519A4060, 14,368 bytes each. Only what the camera layer uses
   is named so far. */
typedef struct RendererFont {
    int32_t loaded;
    uint32_t texture;
    uint8_t unknown_8[0x3820 - 8];  /* glyph advances and texture coordinates */
} RendererFont;

#define renderer_fonts        (&SR_GLOBAL(RendererFont, 0x1519A4060ULL))
#define renderer_current_font SR_GLOBAL(int32_t, 0x1A8BF79C0ULL)

/* Sets up 2D drawing over the whole canvas: alpha blending on, depth test,
   depth writes and face culling off, an orthographic projection with y
   pointing down, identity view and model, and the current font's texture
   bound. 0x14007BB00 */
void camera_begin_2d(void);

/* Sets the viewport to a canvas rectangle and an orthographic projection of
   the box +-half_width x +-half_height x +-half_depth around the eye.
   View and model become identity. 0x14007A2C0 */
void camera_begin_orthographic(int x, int y, int width, int height,
                               float half_width, float half_height, float half_depth);

/* Sets the viewport to a canvas rectangle and a perspective projection whose
   horizontal half-angle has tangent tan_half_fov; the vertical one follows
   from the rectangle's aspect ratio. View and model become identity.
   0x14007A570 */
void camera_begin_perspective(int x, int y, int width, int height,
                              float z_near, float z_far, float tan_half_fov);

/* View from eye with the given orientation (a 3x3 rotation, rows are the
   camera's axes); either may be NULL for none. Model becomes identity.
   0x14007BE20 */
void camera_set_view(const float eye[3], const float rotation[9]);

/* Model placed at position with the given orientation (3x3 rotation, rows);
   either may be NULL for none. 0x14007B990 */
void camera_set_model(const float position[3], const float rotation[9]);

/* Scales the model along its own axes. 0x14007B6F0 */
void camera_scale_model(float x, float y, float z);

/* Limits drawing to a canvas rectangle. 0x14007B7E0 */
void camera_set_scissor(float x, float y, float width, float height);

#endif
