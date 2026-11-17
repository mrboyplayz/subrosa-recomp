#include "shared_client.h"
#include "../engine/menu.h"
#include "../engine/audio.h"
#include "../engine/math3d.h"
#include "../engine/collision.h"
#include "../engine/net_bits.h"
#include "../engine/text_helpers.h"

//----- (000000014006D930) ----------------------------------------------------
__int64            sr_CSDrawText(char *a1, float a2, unsigned int *a3, float a4)
{
  /* The original is variadic: (format, x, y, size, flags, red, green, blue,
     alpha, ...). The decompiler gave its callers only the first four
     arguments, passing y as float bits in a3. Until those callers are
     recovered with the full argument list, they draw unanchored white text
     with zeroed format arguments instead of reading uninitialized stack.
     Fully recovered callers use sr_text_draw_recovered(). */
  extern void text_draw(const char *format, float x, float y, float size, int flags,
                        float red, float green, float blue, float alpha, const unsigned long long *arguments);
  static const unsigned long long no_arguments[8];
  text_draw(a1, a2, sr_text_bits_float((unsigned)(uintptr_t)a3), a4, 0, 1.0f, 1.0f, 1.0f, 1.0f, no_arguments);
  return 0;
}
#undef unused_macro_alias
#undef unused_macro_alias_2
#undef unused_macro_alias_3
#undef unused_macro_alias_4
#undef unused_macro_alias_5
#undef unused_macro_alias_6
#undef unused_macro_alias_7
#undef unused_macro_alias_8

//----- (000000014006DB90) ----------------------------------------------------
void sr_text_draw_glyphs(_BYTE *a1, float a2, _BYTE *a3, float a4, int a5, int a6, int a7, int a8, int a9)
{
  extern void text_draw_glyphs(const char *text, float x, float y, float size,
                               float red, float green, float blue, float alpha, int flip_vertical);
  /* Recompiled callers pass y and the colour as float bits in integer arguments. */
  text_draw_glyphs((const char *)a1, a2, sr_text_bits_float((unsigned)(uintptr_t)a3), a4,
                   sr_text_bits_float((unsigned)a5), sr_text_bits_float((unsigned)a6),
                   sr_text_bits_float((unsigned)a7), sr_text_bits_float((unsigned)a8), a9);
}
#undef unused_macro_alias
#undef unused_macro_alias_2
#undef unused_macro_alias_3
#undef unused_macro_alias_4

//----- (000000014006E530) ----------------------------------------------------
__int64            sr_text_format(_BYTE *a1, _BYTE *a2, int a3, __int64 a4)
{
  extern int text_format(char *out, const char *format, int capacity, const unsigned long long *arguments);
  return text_format((char *)a1, (const char *)a2, a3, (const unsigned long long *)(uintptr_t)a4);
}

//----- (000000014006F060) ----------------------------------------------------
float            sr_text_width(int a1, _BYTE *a2, float a3)
{
  extern float text_width(int font, const char *text, float size);
  return text_width(a1, (const char *)a2, a3);
}

//----- (000000014007C920) ----------------------------------------------------
_BYTE *sub_14007C920(_BYTE *a1, _BYTE *a2, ...)
{
  va_list va;

  va_start(va, a2);
  sr_text_format(a1, a2, 1024, (__int64)va);
  return a1;
}

