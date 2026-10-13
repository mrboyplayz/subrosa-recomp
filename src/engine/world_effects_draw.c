/* Drawing the world effects: see effect.h. */
#include <string.h>
#include "arith.h"
#include "camera.h"
#include "effect.h"
#include "gl.h"
#include "renderer.h"

/* ---- state ------------------------------------------------------------------- */

/* The camera: where it is, then its side, up and view axes (camera_axes). */
#define camera_eye  (&SR_GLOBAL(float, 0x183F7C544ULL))
#define camera_side (&SR_GLOBAL(float, 0x183F7C550ULL))
#define camera_up   (&SR_GLOBAL(float, 0x183F7C55CULL))
#define camera_view (&SR_GLOBAL(float, 0x183F7C568ULL))

/* The light of the scene: the ambient colour (blood drops take a quarter of
   its red) and a second colour the lit shader reads. */
#define light_ambient (&SR_GLOBAL(float, 0x184178D40ULL))
#define light_second  (&SR_GLOBAL(float, 0x184178D50ULL))
#define light_unknown_18417de78 (&SR_GLOBAL(float, 0x18417DE78ULL))

/* GL names, as in world_particles.c. */
#define gl_buffer_name(index)  (&SR_GLOBAL(uint32_t, 0x183E9B0C0ULL))[2 * (index)]
#define gl_texture_name(index) SR_GLOBAL(uint32_t, 0x183F7CC2CULL + 176ULL * (uint64_t)(int64_t)(index))
#define renderer_white_texture SR_GLOBAL(uint32_t, 0x1ABD4AC94ULL)

/* Textures and the buffer used here. */
#define effect_texture          SR_GLOBAL(int32_t, 0x183EBE43CULL)   /* holes, drops and sparks */
#define mark_texture_choice     SR_GLOBAL(int32_t, 0x1A4CFF820ULL)
#define mark_texture(choice)    SR_GLOBAL(int32_t, 0x183EBC404ULL + 16ULL * (uint64_t)(int64_t)(choice))
#define shading_cube_map        SR_GLOBAL(int32_t, 0x183EBE42CULL)
#define effect_mesh_buffer      SR_GLOBAL(int32_t, 0x183E98C44ULL)

/* The lit shader the EFFECT_3 and EFFECT_4 pieces are drawn with. */
typedef struct LitProgram {
    uint32_t program;
    int32_t unknown_4[5];
    int32_t eye_uniform;                 /* +0x18 */
    int32_t unknown_1c[3];
    int32_t unknown_uniform_28;          /* +0x28 */
    int32_t unknown_2c[3];
    int32_t matrix_uniform;              /* +0x38 */
    int32_t ambient_uniform;             /* +0x3C */
    int32_t second_uniform;              /* +0x40 */
} LitProgram;

#define lit_program (&SR_GLOBAL(LitProgram, 0x1515AD1A0ULL))

/* The mesh of solid pieces goes into the batch's vertex memory: position
   and normal per vertex. */
#define MESH_FLOATS_PER_VERTEX 6
#define MESH_VERTEX_LIMIT 16376

/* ---- helpers ------------------------------------------------------------------- */

/* float to int as CVTTSS2SI with a 64-bit destination, of which the
   original keeps the low half. */
static int32_t truncate_float_64(float value)
{
    return (int32_t)_mm_cvttss_si64(_mm_set_ss(value));
}

/* An effect's depth along the camera's view, in 1/1024 units and offset by
   2^24 so that it is not negative; the effects are drawn in this order. */
static int32_t sort_key(const Effect *e)
{
    const float *p = e->position;
    float depth = (camera_view[0] * p[0] + camera_view[1] * p[1]) + camera_view[2] * p[2];
    return truncate_float_64(depth * 1024.0f + 16777216.0f);
}

static void set_color(float red, float green, float blue, float alpha)
{
    float *color = renderer_batch->color;
    color[0] = red;
    color[1] = green;
    color[2] = blue;
    color[3] = alpha;
}

static void set_texcoord(float u, float v)
{
    renderer_batch->texcoord[0] = u;
    renderer_batch->texcoord[1] = v;
}

/* Fades over the last 32 ticks. */
static float fade(const Effect *e)
{
    return min_float((float)e->lifetime * 0.03125f, 1.0f);
}

/* A spark: a yellowish quad facing the camera. */
static void add_spark(const Effect *e)
{
    const float *p = e->position;
    float s = e->size, corner[3];

    set_color(1.0f, 1.0f, 0.75f, fade(e));
    set_texcoord(0.0f, 1.0f);
    for (int k = 0; k < 3; k++)
        corner[k] = (camera_side[k] * -s + p[k]) + camera_up[k] * s;
    renderer_batch_vertex3fv(corner);
    set_texcoord(1.0f, 1.0f);
    for (int k = 0; k < 3; k++)
        corner[k] = (camera_side[k] * s + p[k]) + camera_up[k] * s;
    renderer_batch_vertex3fv(corner);
    for (int k = 0; k < 3; k++)
        corner[k] = (camera_side[k] * s + p[k]) + camera_up[k] * -s;
    set_texcoord(1.0f, 0.0f);
    renderer_batch_vertex3fv(corner);
    set_texcoord(0.0f, 0.0f);
    for (int k = 0; k < 3; k++)
        corner[k] = (camera_side[k] * -s + p[k]) + camera_up[k] * -s;
    renderer_batch_vertex3fv(corner);
}

/* A bullet hole (black) or blood drop (dark red): a quad along the effect's
   own side and up axes, which for a drop in flight are the camera's. */
static void add_hole_or_drop(const Effect *e)
{
    const float *p = e->position, *side = e->side, *up = e->up;
    float s = e->size, corner[3];

    if (e->type == EFFECT_BLOOD_DROP)
        set_color(light_ambient[0] * 0.25f, 0.0f, 0.0f, fade(e));
    else
        set_color(0.0f, 0.0f, 0.0f, fade(e));
    set_texcoord(0.0f, 1.0f);
    for (int k = 0; k < 3; k++)
        corner[k] = (-s * side[k] + p[k]) + s * up[k];
    renderer_batch_vertex3fv(corner);
    set_texcoord(1.0f, 1.0f);
    for (int k = 0; k < 3; k++)
        corner[k] = (side[k] + up[k]) * s + p[k];
    renderer_batch_vertex3fv(corner);
    set_texcoord(1.0f, 0.0f);
    for (int k = 0; k < 3; k++)
        corner[k] = (s * side[k] + p[k]) + -s * up[k];
    renderer_batch_vertex3fv(corner);
    set_texcoord(0.0f, 0.0f);
    for (int k = 0; k < 3; k++)
        corner[k] = (side[k] + up[k]) * -s + p[k];
    renderer_batch_vertex3fv(corner);
}

/* Appends one vertex of the solid mesh. */
static void add_mesh_vertex(const float position[3], const float normal[3])
{
    RendererBatch *batch = renderer_batch;
    float *out = &batch->vertex_data[batch->vertex_count * batch->floats_per_vertex];
    out[0] = position[0];
    out[1] = position[1];
    out[2] = position[2];
    out[3] = normal[0];
    out[4] = normal[1];
    out[5] = normal[2];
    batch->vertex_count++;
}

/* Turns a normal to face the camera (and a normal that is not a number,
   too: COMISS + JAE in the original). */
static void face_camera(const float point[3], float normal[3])
{
    float facing = ((point[1] - camera_eye[1]) * normal[1] + (point[0] - camera_eye[0]) * normal[0])
                   + (point[2] - camera_eye[2]) * normal[2];
    if (!(facing >= 0.0f)) {
        normal[0] = -normal[0];
        normal[1] = -normal[1];
        normal[2] = -normal[2];
    }
}

/* EFFECT_3: a quad along side and up, as two triangles. */
static void add_mesh_quad(const Effect *e)
{
    const float *p = e->position, *side = e->side, *up = e->up;
    float s = e->size, normal[3], back[3], front[3], over[3], under[3], corner[4][3];

    memcpy(normal, e->normal, sizeof normal);
    face_camera(p, normal);
    for (int k = 0; k < 3; k++) {
        back[k] = side[k] * -s + p[k];
        front[k] = side[k] * s + p[k];
        over[k] = up[k] * s;
        under[k] = up[k] * -s;
    }
    for (int k = 0; k < 3; k++) {
        corner[0][k] = over[k] + back[k];
        corner[1][k] = front[k] + over[k];
        corner[2][k] = under[k] + front[k];
        corner[3][k] = under[k] + back[k];
    }
    add_mesh_vertex(corner[0], normal);
    add_mesh_vertex(corner[1], normal);
    add_mesh_vertex(corner[2], normal);
    add_mesh_vertex(corner[0], normal);
    add_mesh_vertex(corner[2], normal);
    add_mesh_vertex(corner[3], normal);
}

/* EFFECT_4: its three corners as one triangle. */
static void add_mesh_triangle(const Effect *e)
{
    const float *a = e->points[0], *b = e->points[1], *c = e->points[2];
    float ab[3], ac[3], normal[3];

    for (int k = 0; k < 3; k++) {
        ab[k] = b[k] - a[k];
        ac[k] = c[k] - a[k];
    }
    normal[0] = ac[1] * ab[2] - ac[2] * ab[1];
    normal[1] = ac[2] * ab[0] - ac[0] * ab[2];
    normal[2] = ac[0] * ab[1] - ac[1] * ab[0];
    float length = sqrt_float((normal[0] * normal[0] + normal[1] * normal[1]) + normal[2] * normal[2]);
    if (is_zero_or_nan_quiet(length)) {
        normal[0] = normal[1] = normal[2] = 0.0f;
    } else {
        float inverse = 1.0f / length;
        normal[0] *= inverse;
        normal[1] *= inverse;
        normal[2] *= inverse;
    }
    face_camera(a, normal);
    add_mesh_vertex(a, normal);
    add_mesh_vertex(b, normal);
    add_mesh_vertex(c, normal);
}

/* A tracer: a white line from where the bullet was (kept in velocity) to
   where it is, fading out over its last ticks. */
static void add_tracer(const Effect *e)
{
    set_color(1.0f, 1.0f, 1.0f, max_float(min_float((float)(e->lifetime - 1) * 0.5f, 1.0f) * 0.5f, 0.0f));
    renderer_batch_vertex3fv(e->velocity);
    set_color(1.0f, 1.0f, 1.0f, min_float((float)e->lifetime * 0.5f, 1.0f) * 0.5f);
    renderer_batch_vertex3fv(e->position);
}

/* ---- drawing --------------------------------------------------------------------- */

void world_draw_effects(void)
{
    RendererBatch *batch = renderer_batch;
    int count = world_effect_count;

    for (int i = 0; i < count; i++)
        renderer_sort_keys[i] = (uint32_t)sort_key(&world_effects[i]);
    renderer_sort_count = count;
    renderer_sort();

    /* Holes, drops and sparks: textured quads, blended, not writing depth. */
    glDepthMask(GL_FALSE);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glDisable(GL_CULL_FACE);
    batch->vertex_count = 0;
    batch->floats_per_vertex = 6;
    glBindTexture(GL_TEXTURE_2D, gl_texture_name(effect_texture));
    batch->primitive = RENDERER_BATCH_QUADS;
    batch->vertex_count = 0;
    batch->floats_per_vertex = RENDERER_BATCH_FLOATS_PER_VERTEX;
    for (int i = 0; i < world_effect_count; i++) {
        const Effect *e = &world_effects[renderer_sort_order[i]];
        if (e->type == EFFECT_SPARK)
            add_spark(e);
        if ((uint32_t)e->type <= EFFECT_BLOOD_DROP)      /* an unsigned compare: no negative types */
            add_hole_or_drop(e);
    }
    renderer_batch_flush();

    /* EFFECT_3 and EFFECT_4 pieces: a lit mesh. */
    glBlendFunc(GL_ONE, GL_ONE_MINUS_SRC_ALPHA);
    glUseProgram(lit_program->program);
    glUniform3fv(lit_program->eye_uniform, 1, camera_eye);
    glUniform3fv(lit_program->unknown_uniform_28, 1, light_unknown_18417de78);
    glUniformMatrix4fv(lit_program->matrix_uniform, 1, GL_FALSE, renderer_camera->model_view_projection);
    glBindTexture(GL_TEXTURE_2D, gl_texture_name(mark_texture(mark_texture_choice)));
    glUniform3fv(lit_program->ambient_uniform, 1, light_ambient);
    glUniform3fv(lit_program->second_uniform, 1, light_second);
    glActiveTexture(GL_TEXTURE0 + 1);
    glBindTexture(GL_TEXTURE_CUBE_MAP, gl_texture_name(shading_cube_map));
    glActiveTexture(GL_TEXTURE0);
    batch->vertex_count = 0;
    batch->floats_per_vertex = MESH_FLOATS_PER_VERTEX;
    count = world_effect_count;
    for (int i = 0; i < count; i++) {
        const Effect *e;
        if (batch->vertex_count >= MESH_VERTEX_LIMIT)
            continue;
        e = &world_effects[renderer_sort_order[i]];
        if (e->type == EFFECT_3)
            add_mesh_quad(e);
        else if (e->type == EFFECT_4)
            add_mesh_triangle(e);
    }
    glBindBuffer(GL_ARRAY_BUFFER, gl_buffer_name(effect_mesh_buffer));
    glBufferSubData(GL_ARRAY_BUFFER, 0, (GLsizeiptr)multiply_int(multiply_int(batch->vertex_count, batch->floats_per_vertex), 4),
                    batch->vertex_data);
    glVertexAttrib2f(1, 0.5f, 0.5f);
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 4 * batch->floats_per_vertex, (const void *)0);
    glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, 4 * batch->floats_per_vertex, (const void *)12);
    glDrawArrays(GL_TRIANGLES, 0, batch->vertex_count);
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(2);

    /* Tracers: smooth lines. */
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glBindTexture(GL_TEXTURE_2D, renderer_white_texture);
    glEnable(GL_LINE_SMOOTH);
    batch->primitive = RENDERER_BATCH_LINES;
    batch->vertex_count = 0;
    batch->floats_per_vertex = RENDERER_BATCH_FLOATS_PER_VERTEX;
    for (int i = 0; i < world_effect_count; i++) {
        const Effect *e = &world_effects[renderer_sort_order[i]];
        if (e->type == EFFECT_TRACER)
            add_tracer(e);
    }
    renderer_batch_flush();
    glDisable(GL_LINE_SMOOTH);
}
