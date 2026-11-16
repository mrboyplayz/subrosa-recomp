// NC_WRAPPERS: 140125270
/* Drawing a mesh at a position: the camera's model set and scaled, the matrix
 * uniform, the buffer bind, the attribute setup, the draw, and the tail that
 * puts the model back to the identity and retakes the products. The size is
 * the fifth argument, so the native call is made through a prototype with
 * the same argument count as the original's. Everything is reached through
 * the engine's accessors, so the port build reads the arrays it links. */
#include <string.h>
#include "nc.h"
#include "camera.h"
#include "gl.h"
#include "model_draw.h"

static void gl_uniform_matrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *v)
{
    nc_line("glUniformMatrix4fv %d %d %u", location, count, transpose);
    nc_floats("  ", v, 16);
}
static void gl_bind_buffer(GLenum target, GLuint buffer) { nc_line("glBindBuffer %#x %u", target, buffer); }
static void gl_enable_attrib(GLuint index) { nc_line("glEnableVertexAttribArray %u", index); }
static void gl_disable_attrib(GLuint index) { nc_line("glDisableVertexAttribArray %u", index); }
static void gl_vertex_attrib_pointer(GLuint i, GLint size, GLenum type, GLboolean norm, GLsizei stride, const void *p)
{
    nc_line("glVertexAttribPointer %u %d %#x %u %d %p", i, size, type, norm, stride, p);
}
static void gl_draw_arrays(GLenum mode, GLint first, GLsizei count) { nc_line("glDrawArrays %#x %d %d", mode, first, count); }

/* The slots live in the state region, which the original reads: the stubs are
 * installed after every restore. */
static void install_gl(void)
{
    *(void **)slot_glUniformMatrix4fv = (void *)gl_uniform_matrix4fv;
    *(void **)slot_glBindBuffer = (void *)gl_bind_buffer;
    *(void **)slot_glEnableVertexAttribArray = (void *)gl_enable_attrib;
    *(void **)slot_glDisableVertexAttribArray = (void *)gl_disable_attrib;
    *(void **)slot_glVertexAttribPointer = (void *)gl_vertex_attrib_pointer;
    *(void **)slot_glDrawArrays = (void *)gl_draw_arrays;
}

#ifdef NC_NATIVE
/* The original takes (model, position, rotation, unused, size). */
typedef int64_t (*DrawFn)(int, const float *, const float *, int64_t, float);
#define draw(m, p, r, s) ((DrawFn)NC_ADDR(0x140125270))(m, p, r, 0, s)
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_140125270(int, unsigned *, unsigned *, long long, float);
#define draw(m, p, r, s) sub_140125270(m, (unsigned *)(p), (unsigned *)(r), 0, s)
#else
#define draw model_draw_at
#endif

int main(void)
{
    nc_map_image();
    install_gl();
    nc_save(renderer_camera, sizeof(RendererCamera));
    nc_save(model_meshes, sizeof(ModelMesh) * 3);
    nc_save(model_table, 4);
    nc_save(model_buffers, 0x20);
    for (int n = 0; n < nc_cases(2000); n++) {
        nc_seed((uint64_t)n);
        nc_restore();
        install_gl();
        for (size_t k = 0; k < sizeof(RendererCamera); k++)
            ((uint8_t *)renderer_camera)[k] = (uint8_t)nc_rand();
        for (size_t k = 0; k < sizeof(ModelMesh) * 3; k++)
            ((uint8_t *)model_meshes)[k] = (uint8_t)nc_rand();
        for (size_t k = 0; k < 0x20 / 4; k++)
            model_buffers[k] = (int32_t)nc_rand_below(8);
        int model = (int)nc_rand_below(2);
        /* The table's word indexes the buffer table: keep it in range. */
        model_table[model] = (int32_t)nc_rand_below(3);
        float position[3], rotation[9];
        for (int k = 0; k < 3; k++)
            position[k] = nc_float(-50, 50);
        for (int k = 0; k < 9; k++)
            rotation[k] = nc_float(-1, 1);
        float size = nc_float(-4, 4);
        draw(model, position, rotation, size);
        /* NaN payloads may differ (the processor may pass either operand's);
           every NaN hashes the same. */
        uint32_t words[96];
        memcpy(words, renderer_camera, sizeof words);
        for (int k = 0; k < 96; k++)
            if ((words[k] & 0x7FFFFFFF) > 0x7F800000) words[k] = 0x7FC00000;
        nc_line("n%d model %d tbl %d buf %d camera %016llx", n, model, model_mesh(model), model_vertex_buffer(model),
                (unsigned long long)nc_hash(words, sizeof words));
    }
    return 0;
}
