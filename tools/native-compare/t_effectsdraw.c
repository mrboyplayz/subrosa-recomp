/* Drawing the world effects: 0x140125DB0. Every OpenGL slot it reaches
 * (directly and through the renderer batch) is a recording stub in both
 * builds; the depth sort 0x14007D710 runs as the original in both. */
#include <string.h>
#include "nc.h"
#include "camera.h"
#include "effect.h"
#include "gl.h"
#include "renderer.h"

#ifdef NC_NATIVE
#define draw_effects() ((void (*)(void))NC_ADDR(0x140125DB0))()
#else
#define draw_effects world_draw_effects
#endif

#define MAX_EFFECTS 96

static void gl_depth_mask(GLboolean flag) { nc_line("glDepthMask %u", flag); }
static void gl_enable(GLenum cap) { nc_line("glEnable %#x", cap); }
static void gl_disable(GLenum cap) { nc_line("glDisable %#x", cap); }
static void gl_blend_func(GLenum s, GLenum d) { nc_line("glBlendFunc %#x %#x", s, d); }
static void gl_bind_texture(GLenum t, GLuint n) { nc_line("glBindTexture %#x %u", t, n); }
static void gl_active_texture(GLenum t) { nc_line("glActiveTexture %#x", t); }
static void gl_use_program(GLuint p) { nc_line("glUseProgram %u", p); }
static void gl_bind_buffer(GLenum t, GLuint n) { nc_line("glBindBuffer %#x %u", t, n); }
static void gl_enable_attrib(GLuint i) { nc_line("glEnableVertexAttribArray %u", i); }
static void gl_disable_attrib(GLuint i) { nc_line("glDisableVertexAttribArray %u", i); }
static void gl_draw_arrays(GLenum m, GLint first, GLsizei count) { nc_line("glDrawArrays %#x %d %d", m, first, count); }

static void gl_draw_elements(GLenum m, GLsizei count, GLenum type, const void *indices)
{
    nc_line("glDrawElements %#x %d %#x %p", m, count, type, indices);
}

static void gl_uniform3fv(GLint location, GLsizei count, const GLfloat *v)
{
    nc_line("glUniform3fv %d %d %p", location, count, (const void *)v);
    nc_floats("  ", v, 3);
}

static void gl_uniform_matrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *v)
{
    nc_line("glUniformMatrix4fv %d %d %u %p", location, count, transpose, (const void *)v);
}

static void gl_buffer_sub_data(GLenum target, GLintptr offset, GLsizeiptr size, const void *data)
{
    nc_line("glBufferSubData %#x %lld %lld %p", target, (long long)offset, (long long)size, data);
    if (size > 0 && size <= (GLsizeiptr)sizeof renderer_batch->vertex_data)
        nc_line("  data %016llx", (unsigned long long)nc_hash(data, (size_t)size));
}

static void gl_vertex_attrib2f(GLuint index, GLfloat x, GLfloat y)
{
    float v[2] = {x, y};
    nc_line("glVertexAttrib2f %u", index);
    nc_floats("  ", v, 2);
}

static void gl_vertex_attrib4fv(GLuint index, const GLfloat *v)
{
    nc_line("glVertexAttrib4fv %u", index);
    nc_floats("  ", v, 4);
}

static void gl_vertex_attrib_pointer(GLuint i, GLint size, GLenum type, GLboolean norm, GLsizei stride, const void *p)
{
    nc_line("glVertexAttribPointer %u %d %#x %u %d %p", i, size, type, norm, stride, p);
}

static void gl_unexpected(void) { nc_line("unexpected GL call"); }

static void install(void *slot, void *stub) { *(void **)slot = stub; }

static void install_gl(void)
{
    /* Anything not listed reports itself. */
    for (uint64_t a = 0x140404000ULL; a < 0x140404500ULL; a += 8)
        *(void **)(uintptr_t)a = (void *)gl_unexpected;
    install(qword_140302FF8, gl_draw_arrays);
    install(&flt_140384000[131076], gl_draw_elements);
    install(unk_140404098, gl_active_texture);
    install(qword_140404050, gl_bind_texture);
    install(qword_140404170, gl_bind_buffer);
    install(qword_140404198, gl_buffer_sub_data);
    install(qword_140404230, gl_disable_attrib);
    install(qword_140404238, gl_enable_attrib);
    install(qword_1404042E0, gl_use_program);
    install(qword_140404338, gl_uniform3fv);
    install(qword_140404378, gl_uniform_matrix4fv);
    install(unk_1404043C8, gl_vertex_attrib2f);
    install(unk_140404470, gl_vertex_attrib4fv);
    install(qword_1404044A8, gl_vertex_attrib_pointer);
    install(&SR_GLOBAL(void *, 0x144980D58ULL), gl_depth_mask);
    install(&SR_GLOBAL(void *, 0x144980D60ULL), gl_disable);
    install(&SR_GLOBAL(void *, 0x144980D68ULL), gl_enable);
    install(&SR_GLOBAL(void *, 0x144980D80ULL), gl_blend_func);
}

static void random_floats(float *f, int n, float lo, float hi)
{
    for (int k = 0; k < n; k++)
        f[k] = nc_float(lo, hi);
}

int main(void)
{
    nc_map_image();
    install_gl();
    int cases = nc_cases(300);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        int count = (int)nc_rand_below(MAX_EFFECTS);
        world_effect_count = count;
        for (int i = 0; i < count; i++) {
            Effect *e = &world_effects[i];
            random_floats(&e->gravity, (int)((sizeof *e - 8) / 4), -3.0f, 3.0f);
            e->type = nc_chance(5) ? -1 - (int)nc_rand_below(3) : (int)nc_rand_below(7);
            e->lifetime = nc_chance(30) ? (int)nc_rand_below(40) - 2 : (int)nc_rand_below(70000);
            e->size = nc_float(0.0f, 0.3f);
            if (e->type == EFFECT_4 && nc_chance(10))
                memcpy(e->points[1], e->points[0], 12);      /* a triangle with no area */
            if (e->type == EFFECT_4 && nc_chance(5))
                memcpy(e->points[2], e->points[0], 24 - 12);
        }
        random_floats(&SR_GLOBAL(float, 0x183F7C544ULL), 12, -5.0f, 5.0f);   /* eye and axes */
        random_floats(&SR_GLOBAL(float, 0x184178D40ULL), 8, 0.0f, 1.0f);      /* ambient, second */
        random_floats(&SR_GLOBAL(float, 0x18417DE78ULL), 3, -1.0f, 1.0f);
        random_floats(renderer_camera->model_view_projection, 16, -2.0f, 2.0f);
        random_floats(renderer_batch->color, 6, 0.0f, 1.0f);
        renderer_batch->primitive = (int)nc_rand_below(4);
        renderer_batch->vertex_count = 0;
        renderer_batch->vertex_buffer = 100 + nc_rand_below(50);
        renderer_batch->index_buffer = 200 + nc_rand_below(50);
        renderer_ui_program = 300 + nc_rand_below(50);
        renderer_ui_matrix_uniform = (int)nc_rand_below(10);
        SR_GLOBAL(int32_t, 0x183EBE43CULL) = (int)nc_rand_below(8);
        SR_GLOBAL(int32_t, 0x1A4CFF820ULL) = (int)nc_rand_below(4);
        for (int k = 0; k < 4; k++)
            SR_GLOBAL(int32_t, 0x183EBC404ULL + 16ULL * k) = (int)nc_rand_below(8);
        SR_GLOBAL(int32_t, 0x183EBE42CULL) = (int)nc_rand_below(8);
        SR_GLOBAL(int32_t, 0x183E98C44ULL) = (int)nc_rand_below(8);
        for (int k = 0; k < 8; k++) {
            SR_GLOBAL(uint32_t, 0x183F7CC2CULL + 176ULL * k) = 1000 + k * 7 + nc_rand_below(5);
            SR_GLOBAL(uint32_t, 0x183E9B0C0ULL + 8ULL * k) = 2000 + k * 7 + nc_rand_below(5);
        }
        SR_GLOBAL(uint32_t, 0x1ABD4AC94ULL) = 3000 + nc_rand_below(50);
        for (int k = 0; k < 17; k++)
            SR_GLOBAL(int32_t, 0x1515AD1A0ULL + 4ULL * k) = 400 + (int)nc_rand_below(50);

        /* Effects about 16,384 units behind the camera's view plane: their keys
           land near zero, where the key's rounding still shows. */
        const float *view = &SR_GLOBAL(float, 0x183F7C568ULL);
        float view_length2 = (view[0] * view[0] + view[1] * view[1]) + view[2] * view[2];
        for (int i = 0; i < count; i++) {
            if (view_length2 > 0.01f && view_length2 < 1e6f && nc_chance(25)) {
                float t = -16384.0f / view_length2 + nc_float_plain(-0.01f, 0.01f);
                for (int k = 0; k < 3; k++)
                    world_effects[i].position[k] = view[k] * t + nc_float_plain(-0.001f, 0.001f);
            }
        }
        nc_line("case %d count %d", n, count);
        nc_set_mxcsr(0x1F80);
        draw_effects();
        nc_line("mxcsr %08x batch %d %d %d", nc_get_mxcsr(), renderer_batch->primitive,
                renderer_batch->vertex_count, renderer_batch->floats_per_vertex);
        nc_floats("color", renderer_batch->color, 6);
        nc_bytes("keys", &SR_GLOBAL(int32_t, 0x1A87C6BA4ULL), 4 * (size_t)count);
        nc_bytes("order", &SR_GLOBAL(int32_t, 0x1A85C6BA0ULL), 4 + 4 * (size_t)count);
    }
    return 0;
}
