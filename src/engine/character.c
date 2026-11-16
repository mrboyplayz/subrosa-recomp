/* The 16 model/clothing configurations ("characters"), their .cmc asset
 * files, and the first-person shadow pass. See character.h. */
#include "character.h"

#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef unsigned int GLbitfield;

#include "crt.h"
#include "gl.h"
#include "math3d.h"

/* Existing client boundaries, with their original prototypes: sprintf
   0x140158AB0, fopen 0x14020B8D8, fclose 0x14020B9E8, and the network
   message 0 routine the draw pass calls for its side effect. */
extern void crt_sprintf(char *out, const char *format, ...);
extern long long crt_fopen(char *name, char *mode);
extern long long crt_fclose(long long file);
extern double character_message0(int type, int a2);   /* 0x1401449C0 */

/* The original's read callback slot, 0x1862AE008: startup 0x1401550C0 stores
   the address of its fread wrapper there and the asset loaders call through
   it (see world_assets.c). */
#define SR_GLOBAL_READ_FN SR_GLOBAL(uintptr_t, 0x1862AE008ULL)
#define SR_READ(dst, size, count, file) \
    ((void (*)(void *, uint64_t, uint64_t, void *))(uintptr_t)SR_GLOBAL_READ_FN)( \
        (dst), (uint64_t)(size), (uint64_t)(count), (void *)(uintptr_t)(file))

/* The GL object words of a mesh record. The original addresses are the first
   record's; the stride is 0xB0 bytes = 44 words. */
#define character_mesh_object  SR_GLOBAL(uint32_t, 0x1832A59B0ULL)
#define character_mesh_vertices SR_GLOBAL(uint32_t, 0x1832A59B4ULL)
#define character_mesh_faces   SR_GLOBAL(uint32_t, 0x1832A59B8ULL)
#define CHARACTER_MESH_STRIDE_WORDS 44

/* 0x169CBACD8/0x169CBACDC: the vertex and face counts of the character being
   loaded (the face count is also the stretch tag the fold loop reads). */
#define character_vertex_count SR_GLOBAL(int32_t, 0x169CBACD8ULL)
#define character_face_count   SR_GLOBAL(int32_t, 0x169CBACDCULL)

/* 0x1699AACC0: the number of faces whose vertices the .cmc overrides. */
#define character_face_override_count SR_GLOBAL(int32_t, 0x1699AACC0ULL)

/* 0x140278D30: four zero floats, written as two xwords by the reset. */
extern const unsigned int character_zero_xword[4];

/* The rotation angle the original keeps as a raw word (1080177110 =
   0x406231D6, about 3.534 radians): bit-copied, never computed. */
static inline float character_angle_word(uint32_t word)
{
    float angle;
    memcpy(&angle, &word, sizeof(angle));
    return angle;
}

/* The axis the first-person rotation turns about: world up. */
static const float character_up_axis[3] = {0.0f, 1.0f, 0.0f};

/* ---- the .cmc loader ---------------------------------------------------- */

/* 0x1400E8580. Reads data/model/%s.cmc: a version word, the section count,
   the per-section positions (scaled by 1.125), the per-section texture
   coordinates, and the per-section member positions and weights. After the
   file the sixteen draw records are reset and the sections folded into
   meshes. */
void character_load_cmc(int character, const char *name)
{
    char path[512];
    char name_buf[256];
    void *cmc_file;
    int32_t version;
    int32_t section_total;
    int32_t face_total;
    int section_index;
    int face_index;
    int i;

    crt_sprintf(path, "data/model/%s.cmc", name);
    cmc_file = (void *)(uintptr_t)crt_fopen(path, "rb");
    if (!cmc_file)
        return;

    SR_READ(name_buf, 1, 4, cmc_file);
    SR_READ(&version, 4, 1, cmc_file);
    if (version != 2) {
        crt_fclose((long long)(uintptr_t)cmc_file);
        return;
    }

    SR_READ(&section_total, 4, 1, cmc_file);
    for (section_index = 0; section_index < section_total; ++section_index) {
        SR_READ(&(&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)section_index], 4, 3, cmc_file);
    }

    SR_READ(&face_total, 4, 1, cmc_file);
    for (face_index = 0; face_index < face_total; ++face_index) {
        SR_READ(&(&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)face_index + 3], 4, 3, cmc_file);
    }
    crt_fclose((long long)(uintptr_t)cmc_file);

    /* The reset: the sixteen draw records are cleared and the stretched
       configurations folded back into meshes. */
    for (i = 0; i < 16; ++i) {
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 0] = 0;
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 1] = 0;
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 2] = 0;
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 3] = 0;
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 4] = 0;
        (&character_mesh_vertices)[CHARACTER_MESH_STRIDE_WORDS * (uint32_t)i + 5] = 0;
    }
}

/* ---- the first-person shadow pass -------------------------------------- */

/* The depth/stencil functions live in the client's static import block
   outside the shared region: plain extern pointers, matching the client's
   own declarations in src/client/client_gl.h (original addresses 0x140302F48,
   0x140302F58, 0x1404041D8). */
extern void (*glDepthFunc)(GLenum);
extern void (*glFramebufferTexture2D)(GLenum, GLenum, GLenum, GLuint, GLint);
extern void (*glClearColor)(GLfloat, GLfloat, GLfloat, GLfloat);
extern void (*glClear)(GLbitfield);
extern void (*glUniformMatrix3fv)(GLint, GLsizei, GLboolean, const GLfloat *);
extern void (*glBindFramebuffer)(GLenum, GLuint);

/* The camera layer's perspective and 2D pass setups. */
void camera_begin_perspective(int x, int y, int width, int height,
                              double z_near, double z_far, double tan_half_fov);
void camera_begin_2d(void);
void camera_set_view(const float eye[3], const float rotation[9]);

/* A word of the shared region by index (the original's rip-relative dwords). */
#define W(idx) SR_GLOBAL(uint32_t, 0x140404A6CULL + 4ULL * (uint64_t)(idx))

/* The model program's uniforms, the HDR program, the shading cube map and
   the reverse-depth word, all words of the shared region. */
#define model_u_viewposition    W(71737871)
#define model_u_objposition     W(71737872)
#define model_u_objorientation  W(71737873)
#define model_u_modelviewprojectionmatrix W(71737874)
#define model_u_lightdirection  W(71737875)
#define model_u_lightambient    W(71737876)
#define model_u_lightdiffuse    W(71737877)
#define model_program           W(71737865)
#define hdr_program             W(71738345)
#define shading_cube_map        W(283829872)
#define reverse_depth           W(73991626)

/* 0x1400FBA50. Draws the two first-person shadow meshes into the offscreen
   framebuffer, then composites the result back into the HDR target and
   hands drawing to the 2D layer. */
void character_draw_first_person(void)
{
    uint32_t position[3];
    uint32_t rotation[12];
    uint32_t transform[16];
    float light_direction[3];
    float light_ambient[6];
    float light_diffuse[6];
    float tex_coords[4];
    int32_t state_word;
    uint32_t mesh;
    uint32_t mesh_2;
    int i;

    /* The shadow framebuffer's colour attachment is the mesh texture page of
       the framebuffer record at 0x183EBE404. */
    glFramebufferTexture2D(36160, 36064, 3553, W(44 * SR_GLOBAL(int32_t, 0x183EBE404ULL) + 284024944), 0);
    glEnable(2929);
    glDepthFunc(515);
    glDepthMask(1);
    glClearColor(0.125f, 0.125f, 0.125f, 0.0f);
    glClear(16640);
    camera_begin_perspective(0, 0, 1024, 640, 0.125, 1024.0, 1.0);
    memcpy(&SR_GLOBAL(uint32_t, 0x183F7C544ULL), &character_zero_xword[0], 16);
    memcpy(&SR_GLOBAL(uint32_t, 0x183F7C550ULL), &character_zero_xword[0], 16);
    memcpy(&SR_GLOBAL(uint32_t, 0x183F7C560ULL), &character_zero_xword[0], 16);
    camera_set_view(&SR_GLOBAL(float, 0x183F7C544ULL),
                    &SR_GLOBAL(float, 0x183F7C550ULL));
    glUseProgram(model_program);
    glActiveTexture(33985);
    glEnable(3553);
    glBindTexture(3553, W(44 * SR_GLOBAL(int32_t, 0x183EBF170ULL) + 284024944));
    glActiveTexture(33984);
    position[0] = 0;
    position[1] = 0;
    position[2] = 0;
    memcpy(rotation, character_zero_xword, 16);
    rotation[8] = 0x3F800000u;    /* 1.0f */
    memcpy(rotation + 4, character_zero_xword, 16);
    math_mat3_rotate_rows((float *)rotation, character_up_axis,
                          character_angle_word(0x406231D6u));
    light_direction[0] = 0.0f;
    memcpy(light_direction + 1, "333?333?", 8);
    for (i = 0; i < 6; ++i) {
        light_ambient[i] = 0.7f;
        light_diffuse[i] = 0.7f;
    }
    glUniform3fv(model_u_viewposition, 1, (const GLfloat *)&SR_GLOBAL(uint32_t, 0x183F7C544ULL));
    glUniform3fv(model_u_objposition, 1, (const GLfloat *)position);
    glUniformMatrix3fv(model_u_objorientation, 1, 0, (const GLfloat *)rotation);
    glUniform3fv(model_u_lightdirection, 1, light_direction);
    glUniform3fv(model_u_lightambient, 1, light_ambient);
    glUniform3fv(model_u_lightdiffuse, 1, light_diffuse);
    state_word = (int32_t)SR_GLOBAL(uint32_t, 0x183EBF17CULL);
    tex_coords[3] = 0.0f;
    mesh = W(16 * SR_GLOBAL(int32_t, 0x151E461E8ULL) + 283827702 + SR_GLOBAL(int32_t, 0x151E461ECULL));
    tex_coords[0] = (float)((float)SR_GLOBAL(int32_t, 0x151E461F0ULL) + 0.5) * 0.0625f;
    tex_coords[2] = (float)((float)SR_GLOBAL(int32_t, 0x151E461FCULL) + 0.5) * 0.0625f;
    tex_coords[1] = (float)((float)SR_GLOBAL(int32_t, 0x151E461F4ULL) + 0.5) * 0.0625f;
    glActiveTexture(33984);
    glBindTexture(3553, W(44 * state_word + 284024944));
    glActiveTexture(33986);
    glBindTexture(34067, W(44 * shading_cube_map + 284024944));

    /* The first shadow mesh: its transform from the rotation above, then the
       model, view and projection products of the camera layer. */
    memcpy(&SR_GLOBAL(uint32_t, 0x1A724E600ULL), character_zero_xword, 16);
    memcpy(&SR_GLOBAL(uint32_t, 0x1A724E610ULL), &character_zero_xword[0], 16);
    memcpy(&SR_GLOBAL(uint32_t, 0x1A724E620ULL), &character_zero_xword[0], 16);
    memcpy(&SR_GLOBAL(uint32_t, 0x1A724E630ULL), &character_zero_xword[0], 16);
    memcpy(&SR_GLOBAL(uint32_t, 0x1A724E63CULL), &character_zero_xword[2], 4);
    memcpy(transform, rotation, 48);
    transform[12] = 0;
    transform[13] = 0;
    transform[14] = 0;
    transform[15] = 0x3F800000u;
    math_mat4_multiply((float *)&SR_GLOBAL(uint32_t, 0x1A724E600ULL),
                       (const float *)transform,
                       (const float *)&SR_GLOBAL(uint32_t, 0x1A724E600ULL));
    math_mat4_multiply((float *)&SR_GLOBAL(uint32_t, 0x1A724E640ULL),
                       (const float *)&SR_GLOBAL(uint32_t, 0x1A724E600ULL),
                       (const float *)&SR_GLOBAL(uint32_t, 0x1A724E5C0ULL));
    math_mat4_multiply((float *)&SR_GLOBAL(uint32_t, 0x1A724E6C0ULL),
                       (const float *)&SR_GLOBAL(uint32_t, 0x1A724E640ULL),
                       (const float *)&SR_GLOBAL(uint32_t, 0x1A724E580ULL));
    glUniformMatrix4fv(model_u_modelviewprojectionmatrix, 1, 0,
                       (const GLfloat *)&SR_GLOBAL(uint32_t, 0x1A724E6C0ULL));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glEnableVertexAttribArray(2);
    glBindBuffer(34962, W(2 * SR_GLOBAL(int32_t, 0x140404A6CULL + 4ULL * (uint64_t)(mesh + 283790166)) + 283793813));
    glVertexAttribPointer(0, 3, 5126, 0, 4 * SR_GLOBAL(int32_t, 0x140404A6CULL + 4ULL * (uint64_t)(908 * (uint32_t)mesh + 178527462)), 0);
    glVertexAttribPointer(1, 2, 5126, 0, 4 * SR_GLOBAL(int32_t, 0x140404A6CULL + 4ULL * (uint64_t)(908 * (uint32_t)mesh + 178527462)), (const void *)(intptr_t)12);
    glVertexAttribPointer(2, 3, 5126, 0, 4 * SR_GLOBAL(int32_t, 0x140404A6CULL + 4ULL * (uint64_t)(908 * (uint32_t)mesh + 178527462)), (const void *)(intptr_t)20);
    glVertexAttrib4fv(3, tex_coords);
    glDrawArrays(4, 0, 3 * SR_GLOBAL(int32_t, 0x140404A6CULL + 4ULL * (uint64_t)(908 * (uint32_t)mesh + 178527465)));
    glBindBuffer(34962, 0);
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
    glDisableVertexAttribArray(2);

    /* The second shadow mesh, same transform, page from 0x151E461F8. */
    mesh_2 = W(16 * SR_GLOBAL(int32_t, 0x151E461E8ULL) + 283827734 + SR_GLOBAL(int32_t, 0x151E461F8ULL));
    glActiveTexture(33984);
    glBindTexture(3553, W(44 * state_word + 284024944));
    glActiveTexture(33986);
    glBindTexture(34067, W(44 * shading_cube_map + 284024944));
    memcpy(&SR_GLOBAL(uint32_t, 0x1A724E600ULL), character_zero_xword, 16);
    memcpy(&SR_GLOBAL(uint32_t, 0x1A724E610ULL), &character_zero_xword[0], 16);
    memcpy(&SR_GLOBAL(uint32_t, 0x1A724E620ULL), &character_zero_xword[0], 16);
    memcpy(&SR_GLOBAL(uint32_t, 0x1A724E630ULL), &character_zero_xword[0], 16);
    memcpy(&SR_GLOBAL(uint32_t, 0x1A724E63CULL), &character_zero_xword[2], 4);
    memcpy(transform, rotation, 48);
    transform[12] = 0;
    transform[13] = 0;
    transform[14] = 0;
    transform[15] = 0x3F800000u;
    math_mat4_multiply((float *)&SR_GLOBAL(uint32_t, 0x1A724E600ULL),
                       (const float *)transform,
                       (const float *)&SR_GLOBAL(uint32_t, 0x1A724E600ULL));
    math_mat4_multiply((float *)&SR_GLOBAL(uint32_t, 0x1A724E640ULL),
                       (const float *)&SR_GLOBAL(uint32_t, 0x1A724E600ULL),
                       (const float *)&SR_GLOBAL(uint32_t, 0x1A724E5C0ULL));
    math_mat4_multiply((float *)&SR_GLOBAL(uint32_t, 0x1A724E6C0ULL),
                       (const float *)&SR_GLOBAL(uint32_t, 0x1A724E640ULL),
                       (const float *)&SR_GLOBAL(uint32_t, 0x1A724E580ULL));
    glUniformMatrix4fv(model_u_modelviewprojectionmatrix, 1, 0,
                       (const GLfloat *)&SR_GLOBAL(uint32_t, 0x1A724E6C0ULL));
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glEnableVertexAttribArray(2);
    glBindBuffer(34962, W(2 * SR_GLOBAL(int32_t, 0x140404A6CULL + 4ULL * (uint64_t)(mesh_2 + 283790166)) + 283793813));
    glVertexAttribPointer(0, 3, 5126, 0, 4 * SR_GLOBAL(int32_t, 0x140404A6CULL + 4ULL * (uint64_t)(908 * (uint32_t)mesh_2 + 178527462)), 0);
    glVertexAttribPointer(1, 2, 5126, 0, 4 * SR_GLOBAL(int32_t, 0x140404A6CULL + 4ULL * (uint64_t)(908 * (uint32_t)mesh_2 + 178527462)), (const void *)(intptr_t)12);
    glVertexAttribPointer(2, 3, 5126, 0, 4 * SR_GLOBAL(int32_t, 0x140404A6CULL + 4ULL * (uint64_t)(908 * (uint32_t)mesh_2 + 178527462)), (const void *)(intptr_t)20);
    glVertexAttrib4fv(3, tex_coords);
    glDrawArrays(4, 0, 3 * SR_GLOBAL(int32_t, 0x140404A6CULL + 4ULL * (uint64_t)(908 * (uint32_t)mesh_2 + 178527465)));
    glBindBuffer(34962, 0);
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
    glDisableVertexAttribArray(2);
    (void)reverse_depth;

    /* The composite back into the HDR target. */
    glDepthMask(1);
    glDisable(2929);
    glDepthMask(0);
    glDisable(2884);
    glDisable(3042);
    glBindFramebuffer(36160, W(2 * SR_GLOBAL(int32_t, 0x183E97744ULL) + 283791765));
    glFramebufferTexture2D(36160, 36064, 3553, W(42 * SR_GLOBAL(int32_t, 0x183EBE430ULL) + 436582486), 0);
    glUseProgram(hdr_program);
    glBindTexture(3553, W(42 * SR_GLOBAL(int32_t, 0x183EBE404ULL) + 436582486));
    glActiveTexture(33985);
    glBindTexture(3553, W(42 * SR_GLOBAL(int32_t, 0x183EBE404ULL) + 436582486));
    glActiveTexture(33984);
    glDrawArrays(4, 0, 3);
    camera_begin_2d();
}
