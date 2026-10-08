/* Text layer of the renderer. See text.h. */
#include <stdarg.h>
#include <string.h>
#include "arith.h"
#include "gl.h"
#include "renderer.h"
#include "text.h"

/* The original's sprintf (0x140158AB0, part of its C runtime, still
   recompiled code). Numbers must be formatted by it: another runtime may
   print a float's last digits differently. */
extern void sub_140158AB0(char *buffer, const char *format, ...);

/* ---- fonts ----------------------------------------------------------------- */

/* One character's entry in a font table. c is signed, as in the original. */
static const uint8_t *font_entry(int font, int table, int c, int size)
{
    return (const uint8_t *)((uintptr_t)text_font_bytes(font) + (intptr_t)table + (intptr_t)c * size);
}

static float font_advance(int font, int c)
{
    float advance;

    memcpy(&advance, font_entry(font, TEXT_FONT_ADVANCES, c, 4), 4);
    return advance;
}

static const RendererFont *current_font(void)
{
    return &renderer_fonts[renderer_current_font];
}

/* ---- formatting ------------------------------------------------------------ */

/* Appends the C string piece at out[*length], without its terminator. */
static void append(char *out, int *length, const char *piece)
{
    size_t size = strlen(piece);

    memcpy(out + *length, piece, size);
    *length += (int)size;
}

/* Whether a directive character takes an argument slot. */
static int takes_argument(char directive)
{
    switch (directive) {
    case 'I': case 'L': case 'b': case 'c': case 'f': case 'h':
    case 'i': case 'l': case 's': case 'u': case 'x':
        return 1;
    }
    return 0;
}

int text_format(char *out, const char *format, int capacity, const uint64_t *arguments)
{
    char piece[1024];
    int length = 0;
    int i = 0;

    if (format[0] == '\0') {
        out[0] = '\0';
        return 0;
    }

    do {
        char c;

        if (length >= capacity)
            break;
        c = format[i];
        if (c != '/') {
            out[length++] = c;
        } else {
            uint64_t argument = 0;
            char directive = format[i + 1];

            /* Every directive below takes the next argument slot. */
            if (takes_argument(directive))
                argument = *arguments++;

            switch (directive) {
            case '/':
                i++;
                out[length++] = '/';
                break;
            case 'i':
                i++;
                sub_140158AB0(piece, "%d", (int32_t)argument);
                append(out, &length, piece);
                break;
            case 'u':
                i++;
                sub_140158AB0(piece, "%u", (uint32_t)argument);
                append(out, &length, piece);
                break;
            case 'x':
                i++;
                sub_140158AB0(piece, "%X", (uint32_t)argument);
                append(out, &length, piece);
                break;
            case 'l':
                i++;
                sub_140158AB0(piece, "%I64d", (int64_t)argument);
                append(out, &length, piece);
                break;
            case 'L':
                i++;
                sub_140158AB0(piece, "%I64u", argument);
                append(out, &length, piece);
                break;
            case 'f':
            case 'h': {
                double value;

                i++;
                memcpy(&value, &argument, sizeof value);
                sub_140158AB0(piece, directive == 'f' ? "%.3f" : "%.7f", value);
                append(out, &length, piece);
                break;
            }
            case 's': {
                const char *string = (const char *)(uintptr_t)argument;

                i++;
                if (string) {
                    /* sprintf "%s" copies the string; copying it directly
                       also handles strings longer than the piece buffer,
                       which overflow the original's stack. */
                    append(out, &length, string);
                } else {
                    sub_140158AB0(piece, "%s", string);
                    append(out, &length, piece);
                }
                break;
            }
            case 'c':
                i++;
                if ((int32_t)argument != 0)
                    out[length++] = (char)argument;
                break;
            case 'b':
                i++;
                for (int bit = 0; bit < 32; bit++)
                    piece[bit] = (char)('0' + (((uint32_t)argument & (0x80000000u >> bit)) != 0));
                piece[32] = '\0';
                append(out, &length, piece);
                break;
            case 'I': {
                int32_t value = (int32_t)argument;

                i++;
                if (value >= 1000000) {
                    sub_140158AB0(piece, "%d", value / 1000000);
                    append(out, &length, piece);
                    out[length++] = ',';
                    sub_140158AB0(piece, "%.3d", value / 1000 % 1000);
                    append(out, &length, piece);
                    out[length++] = ',';
                    sub_140158AB0(piece, "%.3d", value % 1000);
                } else if (value >= 1000) {
                    sub_140158AB0(piece, "%d", value / 1000 % 1000);
                    append(out, &length, piece);
                    out[length++] = ',';
                    sub_140158AB0(piece, "%.3d", value % 1000);
                } else {
                    sub_140158AB0(piece, "%d", value);
                }
                append(out, &length, piece);
                break;
            }
            default:
                /* The '/' is dropped; the next character is copied on the
                   next pass. */
                break;
            }
        }
        i++;
    } while (format[i] != '\0');

    out[length] = '\0';
    return length;
}

/* ---- measuring ------------------------------------------------------------- */

float text_width(int font, const char *text, float size)
{
    const RendererFont *record = &renderer_fonts[font];
    const char *p = text;
    float width = 0.0f;

    if (!record->loaded || *p == '\0')
        return width;
    do {
        if (p - text >= 0xFFFF)
            break;
        width += size * font_advance(font, (signed char)*p++);
    } while (*p != '\0');
    return width;
}

/* ---- drawing --------------------------------------------------------------- */

/* Adds one vertex: position x, y, 0 and the texture coordinates at uv. */
static void add_glyph_vertex(float x, float y, const uint8_t *uv)
{
    RendererQuadScratch *scratch = renderer_quad_scratch;
    float *vertex = &scratch->vertex_data[multiply_int(scratch->floats_per_vertex, scratch->vertex_count)];

    vertex[0] = x;
    vertex[1] = y;
    vertex[2] = 0.0f;
    memcpy(&vertex[3], uv, 8);
    scratch->vertex_count++;
}

void text_draw_glyphs(const char *text, float x, float y, float size,
                      float red, float green, float blue, float alpha, int flip_vertical)
{
    RendererQuadScratch *scratch = renderer_quad_scratch;
    float color[4] = { red, green, blue, alpha };
    float pen = 0.0f;
    GLsizei stride;
    GLsizei index_count;

    if (!current_font()->loaded)
        return;

    scratch->vertex_count = 0;
    scratch->floats_per_vertex = 5;
    if (*text != '\0') {
        const char *p = text;

        while (p - text < 1000) {
            int font = renderer_current_font;
            int c = (signed char)*p;
            /* The glyph's box in units of size: width, then the offsets of
               its bottom and top from the pen, then its height. */
            float box[4];
            const uint8_t *uv = font_entry(font, TEXT_FONT_TEXCOORDS, c, 32);
            float left, right, near_edge, far_edge, top, bottom;

            memcpy(box, font_entry(font, TEXT_FONT_BOXES, c, 16), sizeof box);
            left = (size * box[2] + x) + pen;
            right = left + size * box[0];
            near_edge = box[3] * size;
            far_edge = (box[3] + box[1]) * size;
            top = flip_vertical ? far_edge : near_edge;
            bottom = flip_vertical ? near_edge : far_edge;

            add_glyph_vertex(left, y + top, uv);
            add_glyph_vertex(right, y + top, uv + 8);
            add_glyph_vertex(right, y + bottom, uv + 16);
            add_glyph_vertex(left, y + bottom, uv + 24);
            pen += size * font_advance(renderer_current_font, c);

            p++;
            if (*p == '\0')
                break;
        }
    }

    glBindBuffer(GL_ARRAY_BUFFER, renderer_quad_buffer);
    glBufferData(GL_ARRAY_BUFFER,
                 multiply_int(multiply_int(scratch->floats_per_vertex, scratch->vertex_count), 4),
                 scratch->vertex_data, GL_STREAM_DRAW);
    glUseProgram(renderer_ui_program);
    glUniformMatrix4fv(renderer_ui_matrix_uniform, 1, GL_FALSE, renderer_ui_matrix);
    glBindTexture(GL_TEXTURE_2D, current_font()->texture);
    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    stride = multiply_int(scratch->floats_per_vertex, 4);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, stride, (const void *)0);
    stride = multiply_int(scratch->floats_per_vertex, 4);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, stride, (const void *)12);
    glVertexAttrib4fv(2, color);

    /* Two triangles per glyph from the shared quad index buffer. */
    index_count = multiply_int(scratch->vertex_count / 4, 6);
    if (index_count > 98304)
        index_count = 98304;
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, renderer_batch->index_buffer);
    glDrawElements(GL_TRIANGLES, index_count, GL_UNSIGNED_SHORT, NULL);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void text_draw(const char *format, float x, float y, float size, int flags,
               float red, float green, float blue, float alpha, const uint64_t *arguments)
{
    /* The original formats into a 65,536-byte buffer on its stack. */
    char text[65536];
    int flip_vertical = (flags >> 7) & 1;

    if (flags & TEXT_UNFORMATTED) {
        /* Unbounded in the original; longer text overflowed its stack. */
        size_t length = 0;

        while (length < sizeof text - 1 && format[length] != '\0')
            length++;
        memcpy(text, format, length);
        text[length] = '\0';
    } else {
        text_format(text, format, 10000, arguments);
    }

    if (flags & TEXT_CENTER_X)
        x += text_width(renderer_current_font, text, size) * -0.5f;
    else if (flags & TEXT_RIGHT)
        x -= text_width(renderer_current_font, text, size);
    if (flags & TEXT_CENTER_Y)
        y += size * -0.5f;
    else if (flags & TEXT_BOTTOM)
        y -= size;

    if (flags & TEXT_SHADOW) {
        float offset = size * 0.0625f;
        text_draw_glyphs(text, offset + x, offset + y, size, 0.0f, 0.0f, 0.0f, alpha, flip_vertical);
    }
    text_draw_glyphs(text, x, y, size, red, green, blue, alpha, flip_vertical);
}

void text_draw_variadic(const char *format, float x, float y, float size, int flags,
                        float red, float green, float blue, float alpha, ...)
{
    /* On Windows x64 the variadic arguments are consecutive 8-byte slots and
       the argument list points at the first. */
#ifdef _WIN32
    va_list list;

    va_start(list, alpha);
    text_draw(format, x, y, size, flags, red, green, blue, alpha, (const uint64_t *)(void *)list);
    va_end(list);
#else
    __builtin_ms_va_list list;

    __builtin_ms_va_start(list, alpha);
    text_draw(format, x, y, size, flags, red, green, blue, alpha, (const uint64_t *)(void *)list);
    __builtin_ms_va_end(list);
#endif
}
