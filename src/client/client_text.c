#include "shared_client.h"


//----- (000000014004C4C0) ----------------------------------------------------
__int64            sub_14004C4C0(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // al

  v2 = a2 - (_QWORD)a1;
  while ( 1 )
  {
    v3 = *a1;
    if ( *a1 != a1[v2] )
      break;
    ++a1;
    if ( !v3 )
      return 0;
  }
  return v3 < a1[v2] ? -1 : 1;
}


//----- (000000014006C980) ----------------------------------------------------
__int64            sub_14006C980(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // al

  v2 = a2 - (_QWORD)a1;
  while ( 1 )
  {
    v3 = *a1;
    if ( *a1 != a1[v2] )
      break;
    ++a1;
    if ( !v3 )
      return 0;
  }
  return v3 < a1[v2] ? -1 : 1;
}


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
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23

// 14006DB06: variable 'a3' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006DB90) ----------------------------------------------------
void sub_14006DB90(_BYTE *a1, float a2, _BYTE *a3, float a4, int a5, int a6, int a7, int a8, int a9)
{
  extern void text_draw_glyphs(const char *text, float x, float y, float size,
                               float red, float green, float blue, float alpha, int flip_vertical);
  /* Recompiled callers pass y and the colour as float bits in integer arguments. */
  text_draw_glyphs((const char *)a1, a2, sr_text_bits_float((unsigned)(uintptr_t)a3), a4,
                   sr_text_bits_float((unsigned)a5), sr_text_bits_float((unsigned)a6),
                   sr_text_bits_float((unsigned)a7), sr_text_bits_float((unsigned)a8), a9);
}
#undef v39
#undef v40
#undef v41
#undef v42

// 14006DBD5: variable 'v9' is possibly undefined
// 14006E03F: variable 'v34' is possibly undefined
// 14006E061: variable 'v36' is possibly undefined
// 14006E081: variable 'v37' is possibly undefined
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404470: using guessed type __int64 (__fastcall *unk_140404470)(_QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A8BF79CC: using guessed type unsigned int;
// 1A8BF79D0: using guessed type unsigned int;

//----- (000000014006E530) ----------------------------------------------------
__int64            sub_14006E530(_BYTE *a1, _BYTE *a2, int a3, __int64 a4)
{
  extern int text_format(char *out, const char *format, int capacity, const unsigned long long *arguments);
  return text_format((char *)a1, (const char *)a2, a3, (const unsigned long long *)(uintptr_t)a4);
}


//----- (000000014006F060) ----------------------------------------------------
float            sub_14006F060(int a1, _BYTE *a2, float a3)
{
  extern float text_width(int font, const char *text, float size);
  return text_width(a1, (const char *)a2, a3);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006F120) ----------------------------------------------------
// UI label copy helper. Copies text to widget label buffer and stops visible label at null or ## hidden-ID marker.
__int64            sub_14006F120(__int64 a1, char *a2)
{
  __int64 v3; // r8
  char v4; // al
  int v5; // edx
  _BYTE *v6; // rax
  __int64 v7; // r8
  char v8; // cl
  char v9; // cl
  char v10; // cl
  char v11; // cl

  v3 = a1 - (_QWORD)a2;
  do
  {
    v4 = *a2;
    a2[v3] = *a2;
    ++a2;
  }
  while ( v4 );
  v5 = 0;
  v6 = (_BYTE *)(a1 + 2);
  v7 = -2 - a1;
  do
  {
    v8 = *(v6 - 2);
    if ( !v8 || v8 == 35 && *(v6 - 1) == 35 )
      break;
    v9 = *(v6 - 1);
    ++v5;
    if ( !v9 || v9 == 35 && *v6 == 35 )
      break;
    ++v5;
    if ( !*v6 || *v6 == 35 && v6[1] == 35 )
      break;
    v10 = v6[1];
    ++v5;
    if ( !v10 || v10 == 35 && v6[2] == 35 )
      break;
    v11 = v6[2];
    ++v5;
    if ( !v11 || v11 == 35 && v6[3] == 35 )
      break;
    v6 += 5;
    ++v5;
  }
  while ( (__int64)&v6[v7] < 255 );
  *(_BYTE *)(v5 + a1) = 0;
  return v5;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;

//----- (000000014007C920) ----------------------------------------------------
_BYTE *sub_14007C920(_BYTE *a1, _BYTE *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  sub_14006E530(a1, a2, 1024, (__int64)va);
  return a1;
}


//----- (000000014008BE70) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__m128            sub_14008BE70(__int64 a1, double a2, double a3, double a4)
{
  __m128i v5; // xmm9
  __int128 v6; // xmm7
  __int64 v7; // rdi
  char *v8; // r8
  __int64 v9; // rbx
  char *v10; // rax
  char *v11; // rdx
  char v12; // cl
  char v13; // cl
  char v14; // cl
  char v15; // cl

  v5 = *(__m128i *)&a3;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( !*(_BYTE *)(v7 + a1) )
      break;
    v8 = (char *)&dword_140404A6C[18601421] - v7 - a1;
    v9 = 0;
    v10 = (char *)(v7 + a1 + 2);
    v11 = (char *)&dword_140404A6C[18601421] + -v7 - a1 + 1;
    do
    {
      v12 = *(v10 - 2);
      if ( !v12 || v12 == 10 )
        break;
      v10[(_QWORD)v8 - 2] = v12;
      v13 = *(v10 - 1);
      if ( !v13 || v13 == 10 )
      {
        ++v9;
        break;
      }
      v10[(_QWORD)v11 - 2] = v13;
      v14 = *v10;
      if ( !*v10 || v14 == 10 )
      {
        v9 += 2;
        break;
      }
      v10[(_QWORD)v8] = v14;
      v15 = v10[1];
      if ( !v15 || v15 == 10 )
      {
        v9 += 3;
        break;
      }
      v10[(_QWORD)v11] = v15;
      v9 += 4;
      v10 += 4;
    }
    while ( v9 < 1024 );
    if ( (unsigned __int64)v9 >= 0x400 )
      sub_1401F8694();
    *((_BYTE *)&dword_140404A6C[18601421] + v9) = 0;
    if ( *(_BYTE *)(v9 + v7 + a1) == 10 )
      ++v9;
    sr_text_draw_recovered((char *)&dword_140404A6C[18601421], *(float *)&a2, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v5))), *(float *)&a4, 64u, 0x0.0p+0f, 0x0.0p+0f, 0x0.0p+0f, 0x1.0000000000000p+0f, NULL) /* 0x14008BFC1 */;
    v7 += v9;
    *(float *)SR_VEC_LANES(128, v5, i32) = *(float *)SR_VEC_LANES(128, v5, i32) + *(float *)&a4;
    *(float *)&v6 = *(float *)&v6 + *(float *)&a4;
  }
  while ( v7 < 1024 );
  return (__m128)v6;
}

// 14008BE70: inconsistent variable size for 'xmm2_8.8'
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400920F0) ----------------------------------------------------
__int64 sub_1400920F0(__int64 a1,      char *a2, ...)
{
  __int64 *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  v4 = (__int64 *)sub_140001BB0();
  return sub_140224AEC(*v4, a1, (__int64)a2, 0, (__int64)va);
}


//----- (00000001400A5400) ----------------------------------------------------
__int64            sub_1400A5400(__int64 a1)
{
  int v1; // r10d
  _BYTE *v2; // r9
  __int64 i; // rdx
  char v4; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400A5400[576];
#define v6 (*(__int64 (*))(void *)(sr_frame_1400A5400 + 0)) /* [rsp+0h] */
#define v7 (*(int (*))(void *)(sr_frame_1400A5400 + 32)) /* [rsp+20h] */
#define v8 (*(_BYTE (*)[512])(void *)(sr_frame_1400A5400 + 48)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_1400A5400 + 560)) /* [rsp+230h] */

  v1 = 0;
  v2 = v8;
  for ( i = 0; i < 16; ++i )
  {
    v4 = *(_BYTE *)(i + a1);
    if ( !v4 )
      break;
    if ( (unsigned __int8)(v4 - 48) <= 9u )
    {
      ++v1;
      *v2++ = v4;
    }
  }
  if ( (unsigned __int64)v1 >= 0x200 )
    sub_1401F8694();
  v8[v1] = 0;
  sub_14015B070((__int64)v8, "%u", &v7);
  return (unsigned int)v7; /* 0x1400A546E: mov eax, dword ptr [rsp + 0x20] */
}
#undef v6
#undef v7
#undef v8
#undef v9


//----- (000000014011BD10) ----------------------------------------------------
__int64 sub_14011BD10(     char *a1, ...)
{
  char *v2; // rbx
  __int64 *v3; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, a1);
  v2 = sub_14020B528(1u);
  v3 = (__int64 *)sub_140001BB0();
  return sub_140224AEC(*v3, (__int64)v2, (__int64)a1, 0, (__int64)va);
}

// 14011BD10: using guessed type __int64 sub_14011BD10(const char *a1, ...);

//----- (0000000140194590) ----------------------------------------------------
__int64            sub_140194590(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v6; // rax

  v6 = sub_140001BC0();
  return sub_140236BF4(*(_QWORD *)v6 | 1LL, a1, -1, a2, nullptr, a3);
}


