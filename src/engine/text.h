/* Text layer of the renderer: the game's own format strings, measuring a
 * string, and drawing it with a bitmap font.
 *
 * Format strings use '/' where printf uses '%'. Every directive consumes one
 * 8-byte argument slot, as a Windows x64 variadic call lays them out:
 *
 *   //   a '/'                         /i  int, "%d"
 *   /u   unsigned int, "%u"            /x  unsigned int, "%X"
 *   /l   64-bit int, "%I64d"           /L  64-bit unsigned, "%I64u"
 *   /f   double, "%.3f"                /h  double, "%.7f"
 *   /s   string                        /c  one character; 0 writes nothing
 *   /b   unsigned int as 32 binary digits
 *   /I   int with thousands separated by ','  (1,234,567)
 *
 * A '/' before any other character is dropped and the character kept.
 *
 * Each function is a rewrite of one routine of the original executable and
 * produces the same memory contents and the same OpenGL calls. The original
 * address is given next to every declaration.
 */
#ifndef SR_ENGINE_TEXT_H
#define SR_ENGINE_TEXT_H

#include <stdint.h>
#include "camera.h"
#include "memory.h"

/* ---- fonts ----------------------------------------------------------------- */

/* Parts of a RendererFont (camera.h). Characters index these tables as
   signed chars, so bytes 0x80-0xFF read the 128 entries before each table,
   as in the original. */
#define TEXT_FONT_ADVANCES  0x20     /* float per character: pen advance per unit size */
#define TEXT_FONT_TEXCOORDS 0x420    /* four (u, v) pairs per character: 32 bytes */
#define TEXT_FONT_BOXES     0x2820   /* four floats per character: 16 bytes, see text.c */

static inline const uint8_t *text_font_bytes(int font)
{
    return (const uint8_t *)&SR_GLOBAL(uint8_t, 0x1519A4060ULL) + (intptr_t)font * 0x3820;
}

/* ---- functions ----------------------------------------------------------- */

/* Expands format into out, consuming one argument slot per directive from
   arguments. Stops before a directive once capacity characters are written
   (a directive may still run past it). Returns the length written.
   0x14006E530 */
int text_format(char *out, const char *format, int capacity, const uint64_t *arguments);

/* Width of text in a font at a size: the sum of its characters' advances,
   at most 65,535 of them. 0 when the font is not loaded. 0x14006F060 */
float text_width(int font, const char *text, float size);

/* Draws at most 1,000 characters of text in the current font with its top-left
   corner at x, y. flip_vertical turns each glyph upside down. 0x14006DB90 */
void text_draw_glyphs(const char *text, float x, float y, float size,
                      float red, float green, float blue, float alpha, int flip_vertical);

/* How sr_CSDrawText places and decorates a string. */
enum {
    TEXT_CENTER_X = 0x01,
    TEXT_RIGHT = 0x02,
    TEXT_CENTER_Y = 0x04,
    TEXT_BOTTOM = 0x08,
    TEXT_SHADOW = 0x20,       /* black copy offset by size/16 down and right */
    TEXT_UNFORMATTED = 0x40,  /* draw format as it is */
    TEXT_FLIP_VERTICAL = 0x80
};

/* Formats and draws a string in the current font: the original's
   sr_CSDrawText, with its variadic arguments passed as a pointer to their
   8-byte slots. 0x14006D930 */
void text_draw(const char *format, float x, float y, float size, int flags,
               float red, float green, float blue, float alpha, const uint64_t *arguments);

/* The same with the arguments given directly, as the original is called. */
void text_draw_variadic(const char *format, float x, float y, float size, int flags,
                        float red, float green, float blue, float alpha, ...);

#endif
