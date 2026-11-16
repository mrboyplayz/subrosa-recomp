/* The fixed-function render-pass state setups: every GL call they issue,
   recorded through the game's own GL pointer slots. */
// NC_WRAPPERS: 1400A6DF0 1400A6E90 1400A6F30 1400A6FB0
#include <string.h>
#include "nc.h"
#include "memory.h"
#include "gl.h"
#include "renderer_state.h"

#ifdef NC_NATIVE
#define notequal_state() ((uint64_t (*)(void))NC_ADDR(0x1400A6DF0))()
#define equal_state()    ((uint64_t (*)(void))NC_ADDR(0x1400A6E90))()
#define opaque_state()   ((uint64_t (*)(void))NC_ADDR(0x1400A6F30))()
#define shadow_state()   ((uint64_t (*)(void))NC_ADDR(0x1400A6FB0))()
#elif defined(NC_CLIENT_WRAPPERS)
long long sub_1400A6DF0(void);
long long sub_1400A6E90(void);
long long sub_1400A6F30(void);
long long sub_1400A6FB0(void);
#define notequal_state() sub_1400A6DF0()
#define equal_state() sub_1400A6E90()
#define opaque_state() sub_1400A6F30()
#define shadow_state() sub_1400A6FB0()
#else
#define notequal_state() renderer_stencil_notequal_state()
#define equal_state() renderer_stencil_equal_state()
#define opaque_state() renderer_opaque_state()
#define shadow_state() renderer_shadow_volume_state()
#endif

static void args4(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t *out)
{
    out[0] = a; out[1] = b; out[2] = c; out[3] = d;
}

static void rec_glEnable(GLenum cap)
{
    nc_call("glEnable", 1, (const uint64_t[]){cap});
}

static void rec_glDisable(GLenum cap)
{
    nc_call("glDisable", 1, (const uint64_t[]){cap});
}

static void rec_glColorMask(GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
    uint64_t v[4]; args4(r, g, b, a, v);
    nc_call("glColorMask", 4, v);
}

static void rec_glDepthMask(GLboolean flag)
{
    nc_call("glDepthMask", 1, (const uint64_t[]){flag});
}

static void rec_glFrontFace(GLenum mode)
{
    nc_call("glFrontFace", 1, (const uint64_t[]){mode});
}

static void rec_glStencilMask(GLuint mask)
{
    nc_call("glStencilMask", 1, (const uint64_t[]){mask});
}

static void rec_glDepthFunc(GLenum func)
{
    nc_call("glDepthFunc", 1, (const uint64_t[]){func});
}

static void rec_glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    uint64_t v[4]; args4(func, ref, mask, 0, v);
    nc_call("glStencilFunc", 3, v);
}

static void rec_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    uint64_t v[4]; args4(fail, zfail, zpass, 0, v);
    nc_call("glStencilOp", 3, v);
}

static void rec_glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask)
{
    uint64_t v[4]; args4(face, func, ref, mask, v);
    nc_call("glStencilFuncSeparate", 4, v);
}

static void rec_glStencilMaskSeparate(GLenum face, GLuint mask)
{
    uint64_t v[4]; args4(face, mask, 0, 0, v);
    nc_call("glStencilMaskSeparate", 2, v);
}

static void rec_glStencilOpSeparate(GLenum face, GLenum fail, GLenum zfail, GLenum zpass)
{
    uint64_t v[4]; args4(face, fail, zfail, zpass, v);
    nc_call("glStencilOpSeparate", 4, v);
}

/* Point every GL slot the state setups reach at a recorder. The slots live
   in the mapped image: the loaded-function table in the shared region and
   the client's static import block. */
static void install_recorders(void)
{
    SR_GLOBAL(void *, 0x144980D68ULL) = (void *)rec_glEnable;
    SR_GLOBAL(void *, 0x144980D60ULL) = (void *)rec_glDisable;
    SR_GLOBAL(void *, 0x144980D50ULL) = (void *)rec_glColorMask;
    SR_GLOBAL(void *, 0x144980D58ULL) = (void *)rec_glDepthMask;
    SR_GLOBAL(void *, 0x144980CC0ULL) = (void *)rec_glFrontFace;
    SR_GLOBAL(void *, 0x144980D48ULL) = (void *)rec_glStencilMask;
    glDepthFunc = rec_glDepthFunc;
    glStencilFunc = rec_glStencilFunc;
    glStencilOp = rec_glStencilOp;
    glStencilFuncSeparate = rec_glStencilFuncSeparate;
    glStencilMaskSeparate = rec_glStencilMaskSeparate;
    glStencilOpSeparate = rec_glStencilOpSeparate;
}

int main(void)
{
    nc_map_image();
    install_recorders();
    for (int n = 0; n < nc_cases(1000); n++) {
        /* The shadow-volume pass picks its depth function from this word.
           Alternate it per pass of four, so that pass sees both values. */
        uint32_t reversed = (uint32_t)((n / 4) & 1);
        SR_GLOBAL(uint32_t, 0x151E46194ULL) = reversed;
        switch (n % 4) {
        case 0: notequal_state(); break;
        case 1: equal_state(); break;
        case 2: opaque_state(); break;
        case 3: shadow_state(); break;
        }
        nc_line("state %d reversed %u", n, (unsigned)reversed);
    }
    return 0;
}
