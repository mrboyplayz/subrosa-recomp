/* The wire box: 0x14007DDF0. */
// NC_WRAPPERS: 14007DDF0
#include <string.h>
#include "nc.h"
#include "memory.h"
#include "gl.h"
#include "renderer.h"

#ifdef NC_NATIVE
#define draw_wire_box() ((void (*)(const float *, const float *))NC_ADDR(0x14007DDF0))
#elif defined(NC_CLIENT_WRAPPERS)
extern void sr_renderer_draw_wire_box(float *a, float *b);
#define draw_wire_box() sr_renderer_draw_wire_box
#else
#define draw_wire_box renderer_draw_wire_box
#endif

static void rec_glUseProgram(GLuint prog) { nc_call("glUseProgram", 1, (const uint64_t[]){prog}); }
static void rec_glUniformMatrix4fv(GLint loc, GLsizei count, GLboolean transpose, const GLfloat *val) {
    uint64_t v[4]; v[0]=loc; v[1]=count; v[2]=transpose; v[3]=(uintptr_t)val;
    nc_call("glUniformMatrix4fv", 4, v);
}
static void rec_glEnableVertexAttribArray(GLuint index) { nc_call("glEnableVertexAttribArray", 1, (const uint64_t[]){index}); }
static void rec_glDisableVertexAttribArray(GLuint index) { nc_call("glDisableVertexAttribArray", 1, (const uint64_t[]){index}); }
static void rec_glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean norm, GLsizei stride, const void *ptr) {
    uint64_t v[6]; v[0]=index; v[1]=size; v[2]=type; v[3]=norm; v[4]=stride; v[5]=(uintptr_t)ptr;
    nc_call("glVertexAttribPointer", 6, v);
}
static void rec_glBindBuffer(GLenum target, GLuint buffer) { nc_call("glBindBuffer", 2, (const uint64_t[]){target, buffer}); }
static void rec_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void *data) {
    uint64_t v[4]; v[0]=target; v[1]=offset; v[2]=size; v[3]=(uintptr_t)data;
    nc_call("glBufferSubData", 4, v);
}
static void rec_glDrawArrays(GLenum mode, GLint first, GLsizei count) {
    uint64_t v[3]; v[0]=mode; v[1]=first; v[2]=count;
    nc_call("glDrawArrays", 3, v);
}

static void install_recorders(void) {
    SR_GLOBAL(void *, 0x1404042E0ULL) = (void *)rec_glUseProgram;
    SR_GLOBAL(void *, 0x140404378ULL) = (void *)rec_glUniformMatrix4fv;
    SR_GLOBAL(void *, 0x140404238ULL) = (void *)rec_glEnableVertexAttribArray;
    SR_GLOBAL(void *, 0x140404230ULL) = (void *)rec_glDisableVertexAttribArray;
    SR_GLOBAL(void *, 0x1404044A8ULL) = (void *)rec_glVertexAttribPointer;
    SR_GLOBAL(void *, 0x140404170ULL) = (void *)rec_glBindBuffer;
    SR_GLOBAL(void *, 0x140404198ULL) = (void *)rec_glBufferSubData;
    SR_GLOBAL(void *, 0x140302FF8ULL) = (void *)rec_glDrawArrays;
}

int main(void) {
    nc_map_image();
    install_recorders();
    for (int n = 0; n < nc_cases(1000); n++) {
        float a[3] = { nc_float(-100, 100), nc_float(-100, 100), nc_float(-100, 100) };
        float b[3] = { nc_float(-100, 100), nc_float(-100, 100), nc_float(-100, 100) };
        if (a[0] > b[0]) { float t = a[0]; a[0] = b[0]; b[0] = t; }
        if (a[1] > b[1]) { float t = a[1]; a[1] = b[1]; b[1] = t; }
        if (a[2] > b[2]) { float t = a[2]; a[2] = b[2]; b[2] = t; }
        draw_wire_box()(a, b);
        nc_line("case %d", n);
        nc_bytes("batch_data", renderer_batch->vertex_data, 24 * 9 * 4);
    }
    return 0;
}
