/* Terrain drawing: the 64 chunk meshes behind the GL slots and the two
 * draw loops that issue them. See terrain.h.
 *
 * Everything below goes through the game's GL pointer table (gl.h): the
 * same slots the original calls through, so the harness can record every
 * call by planting a stub in a slot.
 */
#include <stdint.h>
#include "arith.h"
#include "terrain.h"
#include "gl.h"

/* The pointer table the client names after every function it holds
 * (src/client/client_gl.h); the chunk state lives inside it. Reads of the
 * table keep the original's addressing: an id is sign-extended and the
 * whole index wraps mod 2^64, so a negative id lands below the image base
 * exactly as the original's displacement does. */
#define TABLE(i) SR_GLOBAL(uint32_t, 0x140404A6CULL + 4ULL * (uint64_t)(int64_t)(i))

/* Per chunk: an element id, a vertex id and a 208-byte weight block whose
 * first words are the stride, the triangle count and the base vertex, 24582
 * words between records. 0x183E98C4C, 0x183E9908C, 0x1810FF780. */
#define chunk_element_id(idx)  TABLE(283791480ULL + 24582ULL * (int64_t)(idx))
#define chunk_vertex_id(idx)   TABLE(283791752ULL + 24582ULL * (int64_t)(idx))
#define chunk_weight(idx, k)   TABLE(271838021ULL + 24582ULL * (int64_t)(idx) + (k))
#define chunk_stride(idx)      chunk_weight(idx, 0)
#define chunk_count(idx)       chunk_weight(idx, 1)
#define chunk_base_vertex(idx) chunk_weight(idx, 3)

/* The chunk index and vertex buffers (two words per id, one past the id
 * tables). 0x183E9B0C0, 0x183E9B0C4. */
#define chunk_index_buffer(id)  TABLE(283793813ULL + 2ULL * (int64_t)(id))
#define chunk_vertex_buffer(id) TABLE(283793814ULL + 2ULL * (int64_t)(id))

/* The mesh ring: 64 chunks of 3336 words (256 cells of 13 words), the
 * weights indexed from 0x1811BF874 and written through 0x1810FF7A0. */
#define ring_cell(slot, cell)   TABLE(271166190ULL + 257ULL * (uint64_t)(slot) + (uint64_t)(cell))
#define ring_weight(idx, k)     TABLE(271838029ULL + 24582ULL * (int64_t)(idx) + 3ULL * (uint64_t)(k))
#define ring_marker(cell, j, slot) TABLE(272034690ULL + (int64_t)(cell) + 13ULL * (uint64_t)(j) \
                                         + 3336ULL * (uint64_t)(slot))

/* The GL 1.0 draw call, which lives inside the pointer table itself. */
extern float flt_140384000[];

/* One chunk of the ring: binds its buffers, points the two attributes and
 * draws its triangles, then records the weight of the triangle it drew.
 * Returns the weight word's offset in the ring; with a -1 weight the
 * original's result register is left over from earlier calls, so the port
 * returns 0 with the guard printed separately. 0x1400D2C90 */
int64_t terrain_draw_chunk(int64_t weight, int chunk)
{
    if (weight == -1)
        return 0;

    int64_t element = (int)chunk_element_id(chunk);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, chunk_index_buffer(element));
    glBindBuffer(GL_ARRAY_BUFFER, chunk_vertex_buffer(element));
    glVertexAttribPointer(0, 3, GL_FLOAT, 0, (int)(uint32_t)(4u * chunk_stride(chunk)),
                          (const void *)(intptr_t)0);
    glVertexAttribPointer(1, 3, GL_FLOAT, 0, (int)(uint32_t)(4u * chunk_stride(chunk)),
                          (const void *)(intptr_t)12);
    glDrawElementsBaseVertex(GL_TRIANGLES, (int32_t)(3u * chunk_count(chunk)), GL_UNSIGNED_INT,
                             NULL, (int32_t)(chunk_base_vertex(chunk) * (uint32_t)weight));
    int64_t record = weight + 8194 * chunk;
    ring_weight(chunk, record) = 4;
    return 3 * record;
}

/* One slot: its 256 sub-cells, the -1 cull marker read above the draw. */
static void draw_slot_chunks(uint32_t slot)
{
    for (uint32_t j = 0; j < 256; j++) {
        int cell = (int)ring_cell(slot, j);
        if (ring_marker(cell, j, slot) != 0xFFFFFFFFu)
            terrain_draw_chunk(ring_marker(cell, j, slot), cell);
    }
}

/* The terrain draw pass: uniforms, textures and the 64 chunk meshes of
 * every slot; a1 keeps the attributes bound when the shadows draw next.
 * The slot without chunk meshes falls back to its built-in LOD mesh
 * (sub_1400D2B90, unported). Returns 0.0 like the original. 0x1400D22E0 */
double terrain_draw(int a1)
{
    extern int64_t sub_1400D2B90(int slot);

    if (!a1) {
        glUseProgram(terrain_program);
        glUniform3fv(terrain_u_lightdirection, 1, (const GLfloat *)&SR_GLOBAL(float, 0x18417DE78ULL));
        glUniform3fv(terrain_u_lightambient, 1, (const GLfloat *)&SR_GLOBAL(float, 0x184178D40ULL));
        glUniform3fv(terrain_u_lightdiffuse, 1, (const GLfloat *)&SR_GLOBAL(float, 0x184178D50ULL));
        glUniform3fv(terrain_u_viewposition, 1, (const GLfloat *)&SR_GLOBAL(float, 0x183F7C544ULL));
        glUniformMatrix4fv(terrain_u_modelviewprojectionmatrix, 1, 0,
                           (const GLfloat *)&SR_GLOBAL(float, 0x1A724E6C0ULL));
        /* DIAG: native sets 1. The mask writer only clears bits into a
           0xFFFF-prefilled buffer, so wrong bit math keeps MORE, not less;
           not the black-frame cause. */
        glUniform1i(terrain_u_land_usemask, 1);
        glBindTexture(GL_TEXTURE_2D, TABLE(284024944ULL + 44ULL * SR_GLOBAL(int32_t, 0x183EBF15CULL)));
        glActiveTexture(GL_TEXTURE1);
        glBindTexture(GL_TEXTURE_2D, TABLE(284024944ULL + 44ULL * SR_GLOBAL(int32_t, 0x183EBF158ULL)));
        glActiveTexture(GL_TEXTURE2);
        glBindTexture(GL_TEXTURE_2D, TABLE(284024944ULL + 44ULL * SR_GLOBAL(int32_t, 0x183EBF15CULL)));
        glActiveTexture(GL_TEXTURE4);
        glBindTexture(GL_TEXTURE_2D, TABLE(284024944ULL + 44ULL * SR_GLOBAL(int32_t, 0x183EBE408ULL)));
    }
    glActiveTexture(GL_TEXTURE3);
    glBindTexture(GL_TEXTURE_2D, TABLE(284024944ULL + 44ULL * SR_GLOBAL(int32_t, 0x183EBF164ULL)));
    glActiveTexture(GL_TEXTURE0);
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);

    uint32_t slot = 0;
    do {
        if (TABLE(271166189ULL + 257ULL * slot))
            draw_slot_chunks(slot);
        else
            sub_1400D2B90((int)slot);
        slot++;
    } while (slot < 64);

    if (a1) {
        glDisableVertexAttribArray(0);
        glDisableVertexAttribArray(1);
    } else {
        glUniform1i(terrain_u_land_usemask, 0);
        glUseProgram(0);
        glDisableVertexAttribArray(0);
        glDisableVertexAttribArray(1);
    }
    return 0.0;
}
