/* Drawing one flying world particle piece: 0x140124840, on the lit pass
 * (0), the land-mask pass (1) and the stencil pass (2). Every OpenGL slot
 * it reaches is a recording stub in both builds; camera_set_model and the
 * matrix products run as the original machine code in the native build and
 * as their ported forms in the port build. */
// NC_WRAPPERS: 140124840
#include <string.h>
#include "nc.h"
#include "camera.h"
#include "particle.h"
#include "gl.h"

#ifdef NC_CLIENT_WRAPPERS
double sr_world_draw_particle_piece(int, unsigned int *, unsigned int *, int, int *, __int64);
#endif

static void gl_active_texture(GLenum t) { nc_line("glActiveTexture %#x", t); }
static void gl_bind_texture(GLenum t, GLuint n) { nc_line("glBindTexture %#x %u", t, n); }
static void gl_bind_buffer(GLenum t, GLuint n) { nc_line("glBindBuffer %#x %u", t, n); }
static void gl_enable_attrib(GLuint i) { nc_line("glEnableVertexAttribArray %u", i); }
static void gl_disable_attrib(GLuint i) { nc_line("glDisableVertexAttribArray %u", i); }
static void gl_draw_arrays(GLenum m, GLint first, GLsizei count) { nc_line("glDrawArrays %#x %d %d", m, first, count); }

static void gl_uniform_matrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *v)
{
    nc_line("glUniformMatrix4fv %d %d %u %p", location, count, transpose, (const void *)v);
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
    install(slot_glDrawArrays, gl_draw_arrays);
    install(slot_glActiveTexture, gl_active_texture);
    install(slot_glBindTexture, gl_bind_texture);
    install(slot_glBindBuffer, gl_bind_buffer);
    install(slot_glDisableVertexAttribArray, gl_disable_attrib);
    install(slot_glEnableVertexAttribArray, gl_enable_attrib);
    install(slot_glUniformMatrix4fv, gl_uniform_matrix4fv);
    install(slot_glVertexAttrib4fv, gl_vertex_attrib4fv);
    install(slot_glVertexAttribPointer, gl_vertex_attrib_pointer);
}

static void random_floats(float *f, int n, float lo, float hi)
{
    for (int k = 0; k < n; k++)
        f[k] = nc_float(lo, hi);
}

static void run_case(int n)
{
    float arena[64];
    int slot;

    nc_seed((uint64_t)n * 16 + (unsigned)n / 7);
    for (int k = 0; k < 8; k++) {
        world_meshes[k].stride = k ? 8 : 12;
        world_meshes[k].triangle_count = 1 + (int)nc_rand_below(33);
    }
    world_meshes[3 + n % 5].stride = 4 * (int)nc_rand_below(4);
    for (int k = 0; k < 12; k++)
        SR_GLOBAL(int32_t, 0x183E977C4ULL + 4ULL * k) = (int)nc_rand_below(16);
    for (int k = 0; k < 16; k++)
        SR_GLOBAL(uint32_t, 0x183E9B0C0ULL + 8ULL * k) = 2000 + k * 7 + nc_rand_below(5);
    for (int k = 0; k < 10; k++)
        SR_GLOBAL(uint32_t, 0x183F7CC2CULL + 176ULL * k) = 1000 + k * 7 + nc_rand_below(5);
    SR_GLOBAL(int32_t, 0x183EBE42CULL) = (int)nc_rand_below(10);
    SR_GLOBAL(int32_t, 0x1515AD2B4ULL) = 400 + (int)nc_rand_below(50);
    SR_GLOBAL(int32_t, 0x1515AD484ULL) = 500 + (int)nc_rand_below(50);
    for (int m = 0; m < 6; m++)
        random_floats(&renderer_camera->projection[16 * m], 16, -2.0f, 2.0f);

    random_floats(arena, 64, -4.0f, 4.0f);
    int mesh = (int)nc_rand_below(8);
    int pass = (int)nc_rand_below(4);
    if (nc_chance(6))
        pass = (int)nc_rand_below(8) - 1;          /* any nonzero pass takes the same else path */
    slot = (int)nc_rand_below(10);
    float *position = arena + 3, *rotation = arena + 13, *color = arena + 31;
    int *texture_slot = &slot;

    nc_line("case %d mesh %d pass %d slot %d", n, mesh, pass, slot);
    nc_set_mxcsr(0x1F80);
#ifdef NC_NATIVE
    ((void (*)(int, const float *, const float *, int, const int *, const float *))
     NC_ADDR(0x140124840))(mesh, position, rotation, pass, texture_slot, color);
#elif defined(NC_CLIENT_WRAPPERS)
    sr_world_draw_particle_piece(mesh, (unsigned int *)position, (unsigned int *)rotation, pass, texture_slot,
                                 (long long)color);
#else
    {
        extern void world_draw_particle_piece(int, const float *, const float *, int, const int *, const float *);
        world_draw_particle_piece(mesh, position, rotation, pass, texture_slot, color);
    }
#endif
    nc_line("mxcsr %08x", nc_get_mxcsr());
    nc_floats("arena", arena, 64 - 3);
    nc_floats("model", renderer_camera->model, 16);
    nc_floats("model_view", renderer_camera->model_view, 16);
    nc_floats("model_view_projection", renderer_camera->model_view_projection, 16);
}

int main(void)
{
    nc_map_image();
    install_gl();
    for (int n = 0; n < nc_cases(600); n++)
        run_case(n);
    return 0;
}
