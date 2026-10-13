/* 2D drawing layer of the renderer. See renderer.h. */
#include <string.h>
#include "renderer.h"
#include "gl.h"

/* ---- vertex batch -------------------------------------------------------- */

/* Returns where the next vertex goes, drawing what is queued first when the
   batch is full. */
static float *batch_next_vertex(int capacity)
{
    RendererBatch *batch = renderer_batch;

    if (batch->vertex_count >= capacity) {
        renderer_batch_flush();
        batch->vertex_count = 0;
        batch->floats_per_vertex = RENDERER_BATCH_FLOATS_PER_VERTEX;
    }
    return &batch->vertex_data[batch->vertex_count * batch->floats_per_vertex];
}

static void batch_finish_vertex(float *vertex)
{
    RendererBatch *batch = renderer_batch;

    vertex[3] = batch->texcoord[0];
    vertex[4] = batch->texcoord[1];
    vertex[5] = batch->color[0];
    vertex[6] = batch->color[1];
    vertex[7] = batch->color[2];
    vertex[8] = batch->color[3];
    batch->vertex_count++;
}

void renderer_batch_vertex3f(float x, float y, float z)
{
    float *vertex = batch_next_vertex(RENDERER_BATCH_CAPACITY);

    vertex[0] = x;
    vertex[1] = y;
    vertex[2] = z;
    batch_finish_vertex(vertex);
}

void renderer_batch_vertex2f(float x, float y)
{
    float *vertex = batch_next_vertex(RENDERER_BATCH_CAPACITY);

    vertex[0] = x;
    vertex[1] = y;
    vertex[2] = 0.0f;
    batch_finish_vertex(vertex);
}

void renderer_batch_vertex3fv(const float *position)
{
    float *vertex = batch_next_vertex(RENDERER_BATCH_CAPACITY);

    vertex[0] = position[0];
    vertex[1] = position[1];
    vertex[2] = position[2];
    batch_finish_vertex(vertex);
}

void renderer_batch_vertex2fv(const float *position)
{
    /* A triangle batch is cut four vertices early so that it never splits a
       triangle (65,532 is a multiple of three). */
    int capacity = renderer_batch->primitive == RENDERER_BATCH_TRIANGLES
                       ? RENDERER_BATCH_CAPACITY - 4 : RENDERER_BATCH_CAPACITY;
    float *vertex = batch_next_vertex(capacity);

    vertex[0] = position[0];
    vertex[1] = position[1];
    vertex[2] = 0.0f;
    batch_finish_vertex(vertex);
}

static void upload_batch(void)
{
    RendererBatch *batch = renderer_batch;

    glBindBuffer(GL_ARRAY_BUFFER, batch->vertex_buffer);
    glBufferSubData(GL_ARRAY_BUFFER, 0, 4 * batch->vertex_count * batch->floats_per_vertex,
                    batch->vertex_data);
}

/* Draws the uploaded batch with the current program. */
static void draw_uploaded_batch(void)
{
    RendererBatch *batch = renderer_batch;
    GLsizei stride;

    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glEnableVertexAttribArray(2);
    stride = 4 * batch->floats_per_vertex;
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, stride, (const void *)0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, stride, (const void *)12);
    glVertexAttribPointer(2, 4, GL_FLOAT, GL_FALSE, stride, (const void *)20);

    switch (batch->primitive) {
    case RENDERER_BATCH_TRIANGLES:
        glDrawArrays(GL_TRIANGLES, 0, batch->vertex_count);
        break;
    case RENDERER_BATCH_QUADS: {
        /* The shared index buffer holds two triangles for each of 16,384 quads. */
        GLsizei index_count = 6 * (batch->vertex_count / 4);
        if (index_count > 98304)
            index_count = 98304;
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, batch->index_buffer);
        glDrawElements(GL_TRIANGLES, index_count, GL_UNSIGNED_SHORT, NULL);
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
        break;
    }
    case RENDERER_BATCH_LINES:
        glDrawArrays(GL_LINES, 0, batch->vertex_count);
        break;
    case RENDERER_BATCH_POINTS:
        glDrawArrays(GL_POINTS, 0, batch->vertex_count);
        break;
    }

    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
    glDisableVertexAttribArray(2);
}

void renderer_batch_flush(void)
{
    if (renderer_batch->vertex_count == 0)
        return;
    upload_batch();
    glUseProgram(renderer_ui_program);
    glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, GL_FALSE, renderer_ui_matrix);
    draw_uploaded_batch();
}

void renderer_batch_draw(void)
{
    if (renderer_batch->vertex_count == 0)
        return;
    upload_batch();
    draw_uploaded_batch();
}

/* ---- single rectangles and sprites --------------------------------------- */

/* Left and top edge of a rectangle given its anchor flags. */
static float anchored_left(float x, float width, int flags)
{
    if (flags & RENDERER_ANCHOR_CENTER_X)
        return x + width * -0.5f;
    if (flags & RENDERER_ANCHOR_RIGHT)
        return x - width;
    return x;
}

static float anchored_top(float y, float height, int flags)
{
    if (flags & RENDERER_ANCHOR_CENTER_Y)
        return y + height * -0.5f;
    if (flags & RENDERER_ANCHOR_BOTTOM)
        return y - height;
    return y;
}

/* Uploads the scratch vertices and draws them with the 2D program. Texture
   coordinates follow the position in each vertex. */
static void draw_quad_scratch(GLenum primitive, int position_floats, const float color[4])
{
    RendererQuadScratch *scratch = renderer_quad_scratch;
    GLsizei stride = 4 * scratch->floats_per_vertex;

    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(0, position_floats, GL_FLOAT, GL_FALSE, stride, (const void *)0);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, stride,
                          (const void *)(intptr_t)(4 * position_floats));
    glVertexAttrib4fv(2, color);
    glDrawArrays(primitive, 0, scratch->vertex_count);
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
}

static void upload_quad_scratch(void)
{
    RendererQuadScratch *scratch = renderer_quad_scratch;

    glBindBuffer(GL_ARRAY_BUFFER, renderer_quad_buffer);
    glBufferData(GL_ARRAY_BUFFER, 4 * scratch->vertex_count * scratch->floats_per_vertex,
                 scratch->vertex_data, GL_STREAM_DRAW);
}

static void set_vertex5(float *vertex, float x, float y, float u, float v)
{
    vertex[0] = x;
    vertex[1] = y;
    vertex[2] = 0.0f;
    vertex[3] = u;
    vertex[4] = v;
}

void renderer_draw_textured_rect(float x, float y, float width, float height, int flags,
                                 float red, float green, float blue, float alpha)
{
    RendererQuadScratch *scratch = renderer_quad_scratch;
    float color[4] = { red, green, blue, alpha };
    float left = anchored_left(x, width, flags);
    float top = anchored_top(y, height, flags);
    float right = left + width;
    float bottom = top + height;
    float v_top = (flags & RENDERER_RECT_FLIP_V) ? 0.0f : 1.0f;
    float v_bottom = (flags & RENDERER_RECT_FLIP_V) ? 1.0f : 0.0f;

    scratch->floats_per_vertex = 5;
    set_vertex5(&scratch->vertex_data[0], left, top, 0.0f, v_top);
    set_vertex5(&scratch->vertex_data[5], right, top, 1.0f, v_top);
    set_vertex5(&scratch->vertex_data[10], left, bottom, 0.0f, v_bottom);
    set_vertex5(&scratch->vertex_data[15], right, bottom, 1.0f, v_bottom);
    scratch->vertex_count = 4;

    upload_quad_scratch();
    glUseProgram(renderer_ui_program);
    glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, GL_FALSE, renderer_ui_matrix);
    draw_quad_scratch(GL_TRIANGLE_STRIP, 3, color);
}

void renderer_draw_flat_rect(float x, float y, float width, float height, int flags,
                             float red, float green, float blue, float alpha)
{
    RendererQuadScratch *scratch = renderer_quad_scratch;
    float color[4] = { red, green, blue, alpha };
    float left = anchored_left(x, width, flags);
    float top = anchored_top(y, height, flags);
    float right = left + width;
    float bottom = top + height;

    scratch->floats_per_vertex = 5;
    set_vertex5(&scratch->vertex_data[0], left, top, 0.0f, 0.0f);
    set_vertex5(&scratch->vertex_data[5], right, top, 0.0f, 0.0f);
    set_vertex5(&scratch->vertex_data[10], right, bottom, 0.0f, 0.0f);
    set_vertex5(&scratch->vertex_data[15], left, top, 0.0f, 0.0f);
    set_vertex5(&scratch->vertex_data[20], right, bottom, 0.0f, 0.0f);
    set_vertex5(&scratch->vertex_data[25], left, bottom, 0.0f, 0.0f);
    scratch->vertex_count = 6;

    upload_quad_scratch();
    glUseProgram(renderer_ui_program);
    glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, GL_FALSE, renderer_ui_matrix);
    draw_quad_scratch(GL_TRIANGLES, 3, color);
}

static void set_vertex4(float *vertex, float x, float y, const float texcoord[2])
{
    vertex[0] = x;
    vertex[1] = y;
    vertex[2] = texcoord[0];
    vertex[3] = texcoord[1];
}

void renderer_draw_atlas_sprite(int atlas_index, int entry_index, float x, float y,
                                float width, float height, int flags,
                                float red, float green, float blue, float alpha)
{
    RendererQuadScratch *scratch = renderer_quad_scratch;
    const RendererAtlas *atlas = &renderer_atlases[atlas_index];
    const RendererAtlasEntry *entry = &atlas->entries[entry_index];
    float color[4] = { red, green, blue, alpha };
    float left = anchored_left(x, width, flags);
    float top = anchored_top(y, height, flags);
    float right = left + width;
    float bottom = top + height;

    scratch->floats_per_vertex = 4;
    scratch->vertex_count = 6;
    set_vertex4(&scratch->vertex_data[0], left, top, entry->texcoord[0]);
    set_vertex4(&scratch->vertex_data[4], right, top, entry->texcoord[1]);
    set_vertex4(&scratch->vertex_data[8], right, bottom, entry->texcoord[2]);
    set_vertex4(&scratch->vertex_data[12], left, top, entry->texcoord[0]);
    set_vertex4(&scratch->vertex_data[16], right, bottom, entry->texcoord[2]);
    set_vertex4(&scratch->vertex_data[20], left, bottom, entry->texcoord[3]);

    glUseProgram(renderer_ui_program);
    glBindTexture(GL_TEXTURE_2D, atlas->texture);
    glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, GL_FALSE, renderer_ui_matrix);
    upload_quad_scratch();
    draw_quad_scratch(GL_TRIANGLES, 2, color);
    glUseProgram(0);
}

/* ---- depth sort ------------------------------------------------------------ */

/* Working memory of the sort: the order before the current pass, and the
   count and first slot of each byte value. */
#define sort_previous (&SR_GLOBAL(int32_t, 0x1A86C6BA4ULL))
#define sort_counts   (&SR_GLOBAL(int32_t, 0x1A89C6BA4ULL))
#define sort_starts   (&SR_GLOBAL(int32_t, 0x1A89C6FA4ULL))

void renderer_sort(void)
{
    int count = renderer_sort_count;
    int32_t *order = renderer_sort_order;

    for (int i = 0; i < count; i++)
        order[i] = i;
    for (int pass = 0; pass < 4; pass++) {
        int shift = 8 * pass;
        memset(sort_counts, 0, 256 * sizeof *sort_counts);
        for (int i = 0; i < count; i++) {
            int item = order[i];
            sort_previous[i] = item;
            sort_counts[(renderer_sort_keys[item] >> shift) & 0xFF]++;
        }
        sort_starts[0] = 0;
        for (int value = 0; value < 255; value++)
            sort_starts[value + 1] = sort_starts[value] + sort_counts[value];
        for (int i = 0; i < count; i++) {
            int item = sort_previous[i];
            order[sort_starts[(renderer_sort_keys[item] >> shift) & 0xFF]++] = item;
        }
    }
    order[count] = -1;
}
