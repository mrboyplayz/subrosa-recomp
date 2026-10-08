/* Camera layer of the renderer. See camera.h. */
#include <string.h>
#include "arith.h"
#include "camera.h"
#include "gl.h"
#include "math3d.h"

static const float identity[16] = {
    1.0f, 0.0f, 0.0f, 0.0f,
    0.0f, 1.0f, 0.0f, 0.0f,
    0.0f, 0.0f, 1.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 1.0f
};

/* How far a size smaller than the window is inset to centre it. */
static int32_t centring_offset(int32_t window_size, int32_t size)
{
    return window_size > size ? subtract_int(window_size, size) / 2 : 0;
}

/* ---- window and letterbox ------------------------------------------------ */

void camera_update_letterbox(void)
{
    RendererDisplay *display = renderer_display;
    int32_t width = multiply_int(display->window_height, 16) / 9;
    int32_t height;

    if (display->window_width <= width)
        width = display->window_width;
    display->letterbox_width = width;
    /* 9/16 of the width, rounded to nearest */
    height = add_int(width, multiply_int(add_int(width, 1), 8)) / 16;
    display->letterbox_height = height;
    display->letterbox_x = centring_offset(display->window_width, width);
    display->letterbox_y = centring_offset(display->window_height, height);
}

/* Viewport covering a canvas rectangle. */
static void set_viewport(int32_t x, int32_t y, int32_t width, int32_t height)
{
    const RendererDisplay *display = renderer_display;
    float bottom = (float)add_int(y, height);
    float x_scale = 1.0f / renderer_canvas_width;
    float y_scale = 1.0f / renderer_canvas_height;
    /* Canvas y points down, window y up. */
    int32_t rows_below = truncate_float(renderer_canvas_height - bottom);

    if (!display->letterboxed) {
        glViewport(truncate_float((float)multiply_int(display->window_width, x) * x_scale),
                   truncate_float((float)multiply_int(rows_below, display->window_height) * y_scale),
                   truncate_float((float)multiply_int(display->window_width, width) * x_scale),
                   truncate_float((float)multiply_int(display->window_height, height) * y_scale));
    } else {
        int32_t box_width = display->letterbox_width;
        int32_t box_height = display->letterbox_height;

        glViewport(add_int(centring_offset(display->window_width, box_width),
                           truncate_float((float)multiply_int(box_width, x) * x_scale)),
                   add_int(centring_offset(display->window_height, box_height),
                           truncate_float((float)multiply_int(rows_below, box_height) * y_scale)),
                   truncate_float((float)multiply_int(box_width, width) * x_scale),
                   truncate_float((float)multiply_int(box_height, height) * y_scale));
    }
}

/* ---- matrices ------------------------------------------------------------ */

/* Recomputes the products after the matrices they depend on changed. */
static void update_model_view_projection(void)
{
    RendererCamera *camera = renderer_camera;

    math_mat4_multiply(camera->model_view, camera->model, camera->view);
    math_mat4_multiply(camera->model_view_projection, camera->model_view, camera->projection);
}

static void update_all_products(void)
{
    RendererCamera *camera = renderer_camera;

    math_mat4_multiply(camera->model_view, camera->model, camera->view);
    math_mat4_multiply(camera->view_projection, camera->view, camera->projection);
    math_mat4_multiply(camera->model_view_projection, camera->model_view, camera->projection);
}

static void reset_view_and_model(void)
{
    RendererCamera *camera = renderer_camera;

    memcpy(camera->view, identity, sizeof identity);
    memcpy(camera->model, identity, sizeof identity);
    update_all_products();
}

void camera_begin_2d(void)
{
    const RendererDisplay *display = renderer_display;
    const RendererFont *font;

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_DEPTH_TEST);
    glDepthMask(GL_FALSE);
    glDisable(GL_CULL_FACE);
    if (display->letterboxed)
        glViewport(display->letterbox_x, display->letterbox_y,
                   display->letterbox_width, display->letterbox_height);
    else
        glViewport(0, 0, display->render_width, display->render_height);

    math_mat4_ortho(renderer_camera->projection, 0.0f, renderer_canvas_width,
                    renderer_canvas_height, 0.0f, -1.0f, 1.0f);
    reset_view_and_model();

    font = &renderer_fonts[renderer_current_font];
    if (font->loaded)
        glBindTexture(GL_TEXTURE_2D, font->texture);
}

void camera_begin_orthographic(int x, int y, int width, int height,
                               float half_width, float half_height, float half_depth)
{
    set_viewport(x, y, width, height);
    math_mat4_ortho(renderer_camera->projection, -half_width, half_width,
                    -half_height, half_height, -half_depth, half_depth);
    reset_view_and_model();
}

void camera_begin_perspective(int x, int y, int width, int height,
                              float z_near, float z_far, float tan_half_fov)
{
    float *projection = renderer_camera->projection;
    float aspect = (float)height / (float)width;
    float z_scale;

    set_viewport(x, y, width, height);

    z_scale = 1.0f / (z_far - z_near);
    memset(projection, 0, 16 * sizeof *projection);
    projection[0] = z_near / (z_near * tan_half_fov);
    projection[5] = z_near / ((aspect * tan_half_fov) * z_near);
    projection[10] = -((z_near + z_far) * z_scale);
    projection[11] = -1.0f;
    projection[14] = (z_scale * z_near) * (z_far * -2.0f);
    reset_view_and_model();
}

void camera_set_view(const float eye[3], const float rotation[9])
{
    RendererCamera *camera = renderer_camera;
    float *view = camera->view;

    memcpy(view, identity, sizeof identity);
    if (rotation) {
        /* The inverse of a rotation is its transpose. */
        for (int row = 0; row < 3; row++)
            for (int column = 0; column < 3; column++)
                view[column * 4 + row] = rotation[row * 3 + column];
    }
    if (eye) {
        float translation[16];

        memcpy(translation, identity, sizeof identity);
        translation[12] = -eye[0];
        translation[13] = -eye[1];
        translation[14] = -eye[2];
        math_mat4_multiply(view, translation, view);
    }
    memcpy(camera->model, identity, sizeof identity);
    update_all_products();
}

void camera_set_model(const float position[3], const float rotation[9])
{
    float *model = renderer_camera->model;

    memcpy(model, identity, sizeof identity);
    if (position) {
        model[12] = position[0];
        model[13] = position[1];
        model[14] = position[2];
    }
    if (rotation) {
        float turn[16];

        memcpy(turn, identity, sizeof identity);
        for (int row = 0; row < 3; row++)
            for (int column = 0; column < 3; column++)
                turn[row * 4 + column] = rotation[row * 3 + column];
        math_mat4_multiply(model, turn, model);
    }
    update_model_view_projection();
}

void camera_scale_model(float x, float y, float z)
{
    float *model = renderer_camera->model;
    float scale[16];

    memcpy(scale, identity, sizeof identity);
    scale[0] = x;
    scale[5] = y;
    scale[10] = z;
    math_mat4_multiply(model, scale, model);
    update_model_view_projection();
}

void camera_set_scissor(float x, float y, float width, float height)
{
    const RendererDisplay *display = renderer_display;
    float bottom = y + height;
    float x_scale = 1.0f / renderer_canvas_width;
    float y_scale = 1.0f / renderer_canvas_height;
    float rows_below = renderer_canvas_height - bottom;

    if (!display->letterboxed) {
        float window_width = (float)display->window_width;
        float window_height = (float)display->window_height;

        glScissor(truncate_float((window_width * x) * x_scale),
                  truncate_float((rows_below * window_height) * y_scale),
                  truncate_float((window_width * width) * x_scale),
                  truncate_float((window_height * height) * y_scale));
    } else {
        float box_width = (float)display->letterbox_width;
        float box_height = (float)display->letterbox_height;

        glScissor(truncate_float((box_width * x) * x_scale + (float)display->letterbox_x),
                  truncate_float((rows_below * box_height) * y_scale + (float)display->letterbox_y),
                  truncate_float((box_width * width) * x_scale),
                  truncate_float((box_height * height) * y_scale));
    }
}
