// NC_WRAPPERS: 1400D22E0 1400D2B90
/* Terrain draw 0x1400D22E0 (both modes): every GL slot it touches records
 * its arguments, so uniforms, texture units, buffers and draw calls compare. */
#include <string.h>
#include "nc.h"
#include "gl.h"

#define G(T, a) (*(T *)(uintptr_t)(a))
#define W(idx) (*(uint32_t *)(uintptr_t)(0x140404A6CULL + 4ULL * (uint64_t)(idx)))

#ifdef NC_NATIVE
#define draw(a) ((double (*)(int))NC_ADDR(0x1400D22E0))(a)
#else
double sub_1400D22E0(int);
#define draw(a) sub_1400D22E0(a)
#endif

static void s_active(GLenum t) { nc_line("glActiveTexture %#x", t); }
static void s_bindtex(GLenum t, GLuint n) { nc_line("glBindTexture %#x %u", t, n); }
static void s_bindbuf(GLenum t, GLuint n) { nc_line("glBindBuffer %#x %u", t, n); }
static void s_enable(GLuint i) { nc_line("glEnableVertexAttribArray %u", i); }
static void s_disable(GLuint i) { nc_line("glDisableVertexAttribArray %u", i); }
static void s_uniform1i(GLint l, GLint v) { nc_line("glUniform1i %d %d", l, v); }
static void s_uniform3fv(GLint l, GLsizei c, const GLfloat *v) { nc_line("glUniform3fv %d %d", l, c); nc_floats("  ", v, 3); }
static void s_uniformm(GLint l, GLsizei c, GLboolean t, const GLfloat *v) { nc_line("glUniformMatrix4fv %d %d %u", l, c, t); nc_floats("  ", v, 16); }
static void s_useprog(GLuint p) { nc_line("glUseProgram %u", p); }
static void s_attrib4fv(GLuint i, const GLfloat *v) { nc_line("glVertexAttrib4fv %u", i); nc_floats("  ", v, 4); }
static void s_attribptr(GLuint i, GLint s, GLenum t, GLboolean n, GLsizei st, const void *p)
{ nc_line("glVertexAttribPointer %u %d %#x %u %d %lld", i, s, t, n, st, (long long)(intptr_t)p); }
static void s_drawbase(GLenum m, GLsizei c, GLenum t, const void *p, GLint b)
{ nc_line("glDrawElementsBaseVertex %#x %d %#x %lld %d", m, c, t, (long long)(intptr_t)p, b); }
static void s_draw(GLenum m, GLsizei c, GLenum t, const void *p)
{ nc_line("glDrawElements %#x %d %#x %lld", m, c, t, (long long)(intptr_t)p); }
static void s_unexpected(void) { nc_line("unexpected GL call"); }

#define SLOT(a, f) (*(void **)(uintptr_t)(a) = (void *)(f))

int main(void)
{
    nc_map_image();
    for (uint64_t a = 0x140404000ULL; a < 0x140404900ULL; a += 8) SLOT(a, s_unexpected);
    SLOT(0x140404098ULL, s_active);  SLOT(0x140404050ULL, s_bindtex); SLOT(0x140404170ULL, s_bindbuf);
    SLOT(0x140404238ULL, s_enable);  SLOT(0x140404230ULL, s_disable); SLOT(0x140404308ULL, s_uniform1i);
    SLOT(0x140404338ULL, s_uniform3fv); SLOT(0x140404378ULL, s_uniformm); SLOT(0x1404042E0ULL, s_useprog);
    SLOT(0x1404044A8ULL, s_attribptr); SLOT(0x1404047F0ULL, s_drawbase);
    SLOT(0x140384000ULL + 4ULL * 131076, s_draw);
    for (uint64_t a = 0x140404000ULL; a < 0x140404900ULL; a += 8)   /* the unnamed slot for glVertexAttrib4fv */
        if (*(void **)(uintptr_t)a == (void *)s_unexpected && a == 0x140404488ULL) SLOT(a, s_attrib4fv);
    int cases = nc_cases(40);
    for (int n = 0; n < cases; n++) {
        nc_seed(n);
        for (unsigned o = 0; o < 64 * 257 * 4 + 64; o += 4) G(uint32_t, 0x180E6F61CULL + o) = nc_rand_below(8);
        for (int c = 0; c < 64; c++) G(uint32_t, 0x180E6F620ULL + 4 * 257ULL * c) = nc_chance(60);
        for (unsigned k = 0; k < 64 * 3336; k++) W(272034690ULL + k) = nc_chance(99) ? (uint32_t)-1 : nc_rand_below(40);
        for (int k = 0; k < 16; k++) {
            W(283791480LL + k) = nc_rand_below(8); W(283791496LL + k) = nc_rand_below(8); W(283791752LL + k) = nc_rand_below(8);
        }
        for (int k = 0; k < 40; k++) W(283793813LL + k) = 600 + k;
        for (int l = 0; l < 7; l++) for (int k = 0; k < 8; k++) W(271838021ULL + 24582ULL * l + k) = 1 + nc_rand_below(100);
        for (int k = 0; k < 20 * 44; k++) W(284024944ULL + k) = 900 + k;
        G(int, 0x183EBF154ULL) = nc_rand_below(20); G(int, 0x183EBF158ULL) = nc_rand_below(20);
        G(int, 0x183EBF15CULL) = nc_rand_below(20); G(int, 0x183EBF164ULL) = nc_rand_below(20);
        G(int, 0x183EBE408ULL) = nc_rand_below(20);
        W(71738165) = 77; W(71738205) = 5; for (int k = 0; k < 6; k++) W(71738166 + k) = 10 + k;
        for (int k = 0; k < 8; k++) G(float, 0x184178D40ULL + 4 * k) = nc_float_plain(0, 1);
        for (int k = 0; k < 3; k++) { G(float, 0x18417DE78ULL + 4 * k) = nc_float_plain(-1, 1); G(float, 0x183F7C544ULL + 4 * k) = nc_float_plain(-9, 9); }
        for (int k = 0; k < 16; k++) G(float, 0x1A724E6C0ULL + 4 * k) = nc_float_plain(-2, 2);
        G(uint32_t, 0x1811477CCULL) = 50;
        nc_line("case %d", n);
        draw(0);
        nc_line("--");
        draw(1);
    }
    return 0;
}
