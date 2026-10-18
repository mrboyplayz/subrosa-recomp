#include "shared_client.h"

//----- (0000000140158610) ----------------------------------------------------
__int64            sub_140158610(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7, float *a8)
{
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v17;
  float v18[4];

  v11 = a2[1];
  v12 = a2[2];
  v13 = (float)((float)((float)(a4[1] - a6[1]) * v11) + (float)((float)(*a4 - *a6) * *a2))
      + (float)((float)(a4[2] - a6[2]) * v12);
  if ( v13 > a5 )
    return 0;
  if ( v13 < 0.0 )
    return 0;
  v14 = (float)(v11 * (float)-a5) + a4[1];
  v15 = (float)(v12 * (float)-a5) + a4[2];
  v18[0] = (float)(*a2 * (float)-a5) + *a4;
  v18[1] = v14;
  v18[2] = v15;
  if ( !sub_140077FA0(a1, a2, &a5, a4, v18, a6, a7, a8) )
    return 0;
  v17 = a1[2] - a4[2];
  *a3 = fsqrt(
          (float)((float)((float)(a1[1] - a4[1]) * (float)(a1[1] - a4[1]))
                + (float)((float)(*a1 - *a4) * (float)(*a1 - *a4)))
        + (float)(v17 * v17));
  return 1;
}

//----- (0000000140158760) ----------------------------------------------------
_BOOL8            sub_140158760(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7, float *a8)
{
  float *v8;
  float v11;
  float v13;
  float v14;
  float v15;
  float v17;
  float v18;
  float v19;
  float v20;
  float *v21;
  float *v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  int v30;
  float v31;
  float v32;
  float v33;
  float v34;
  int v35;
  float v36;
  float v37;
  float v38;
  float v39;
  int v40;
  float v41;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140158760[112];
#define v43 (*(float (*))(void *)(sr_frame_140158760 + 0)) /* [rsp+48h] */
#define v44 (*(float (*))(void *)(sr_frame_140158760 + 4)) /* [rsp+4Ch] */
#define v45 (*(float (*))(void *)(sr_frame_140158760 + 8)) /* [rsp+50h] */
#define v46 (*(int (*))(void *)(sr_frame_140158760 + 16)) /* [rsp+58h] */
#define v47 (*(float (*))(void *)(sr_frame_140158760 + 20)) /* [rsp+5Ch] */
#define v48 (*(float (*))(void *)(sr_frame_140158760 + 24)) /* [rsp+60h] */
#define v49 (*(float (*)[20])(void *)(sr_frame_140158760 + 32)) /* [rsp+68h] */

  v8 = a6;
  *a3 = 65536.0;
  v11 = *a4;
  v13 = a4[1];
  v14 = a4[2];
  v15 = *a2;
  v17 = a5;
  v18 = a2[1];
  v19 = a2[2];
  v20 = (float)((float)((float)(v13 - v8[1]) * v18) + (float)((float)(*a4 - *v8) * *a2))
      + (float)((float)(v14 - v8[2]) * v19);
  if ( v20 > a5 || v20 < 0.0 )
    return 0;
  v21 = a7;
  v22 = a8;
  v46 = *(_DWORD *)a2;
  v47 = v18;
  v48 = v19;
  v49[0] = (float)(v15 * (float)-a5) + v11;
  v49[1] = (float)(v18 * (float)-a5) + v13;
  v49[2] = (float)(v19 * (float)-a5) + v14;
  if ( sub_140077FA0(&v43, (float *)&v46, &a5, a4, v49, v8, a7, a8) )
  {
    v23 = v43;
    v24 = v44;
    v25 = v45;
    a1[1] = v44;
    *a1 = v23;
    a1[2] = v25;
    *a2 = v15;
    a2[1] = v18;
    a2[2] = v19;
    v26 = fsqrt(
            (float)((float)((float)(v24 - a4[1]) * (float)(v24 - a4[1]))
                  + (float)((float)(v23 - *a4) * (float)(v23 - *a4)))
          + (float)((float)(v25 - a4[2]) * (float)(v25 - a4[2])));
    *a3 = v26;
  }
  else
  {
    v26 = *a3;
  }
  if ( v26 == 65536.0 )
  {
    if ( (unsigned int)sub_140154200(&v43, (float *)&v46, &a5, a4, v17, v8, v21) )
    {
      v27 = a5;
      if ( v26 > a5 )
      {
        v28 = v44;
        *a1 = v43;
        v29 = v45;
        a1[1] = v28;
        v30 = v46;
        a1[2] = v29;
        v31 = v47;
        *(_DWORD *)a2 = v30;
        a2[2] = v48;
        a2[1] = v31;
        *a3 = v27;
      }
    }
    if ( (unsigned int)sub_140154200(&v43, (float *)&v46, &a5, a4, v17, v21, v22) )
    {
      v32 = a5;
      if ( a5 < *a3 )
      {
        v33 = v44;
        *a1 = v43;
        v34 = v45;
        a1[1] = v33;
        v35 = v46;
        a1[2] = v34;
        v36 = v47;
        *(_DWORD *)a2 = v35;
        a2[2] = v48;
        a2[1] = v36;
        *a3 = v32;
      }
    }
    if ( (unsigned int)sub_140154200(&v43, (float *)&v46, &a5, a4, v17, v22, v8) )
    {
      v37 = a5;
      if ( a5 < *a3 )
      {
        v38 = v44;
        *a1 = v43;
        v39 = v45;
        a1[1] = v38;
        v40 = v46;
        a1[2] = v39;
        v41 = v47;
        *(_DWORD *)a2 = v40;
        a2[2] = v48;
        a2[1] = v41;
        *a3 = v37;
      }
    }
  }
  return *a3 < 65536.0;
}
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49

//----- (0000000140158AB0) ----------------------------------------------------
void crt_sprintf(_BYTE *a1,      char *a2, ...)
{
  unsigned int *v4;
  va_list va;

  va_start(va, a2);
  v4 = sub_140001BB0();
  sub_1402250AC(*(_QWORD *)v4 | 1LL, a1, -1, (__int64)a2, nullptr, (__int64)va);
}

//----- (0000000140158B10) ----------------------------------------------------
void            format_with_thousands(_BYTE *a1, unsigned int a2)
{
  if ( (int)a2 < 1000000000 )
  {
    if ( (int)a2 < 1000000 )
    {
      if ( (int)a2 < 1000 )
        crt_sprintf(a1, "%d", a2);
      else
        crt_sprintf(a1, "%d,%03d", a2 / 0x3E8, a2 % 0x3E8);
    }
    else
    {
      crt_sprintf(a1, "%d,%03d,%03d", a2 / 0xF4240, (int)(a2 / 0x3E8) % 1000, a2 % 0x3E8);
    }
  }
  else
  {
    crt_sprintf(
      a1,
      "%d,%03d,%03d,%03d",
      a2 / 0x3B9ACA00,
      (int)(a2 / 0xF4240) % 1000,
      (int)(a2 / 0x3E8) % 1000,
      a2 % 0x3E8);
  }
}

//----- (0000000140158C70) ----------------------------------------------------
__int64 sub_140158C70(_BYTE *a1, __int64 a2, __int64 a3, ...)
{
  __int64 *v6;
  __int64 result;
  va_list va;

  va_start(va, a3);
  v6 = (__int64 *)sub_140001BB0();
  result = sub_1402250BC(*v6, a1, a2, a3, nullptr, (__int64)va);
  if ( (int)result < 0 )
    return 0xFFFFFFFFLL;
  return result;
}

//----- (000000014015AE10) ----------------------------------------------------
__int64            sub_14015AE10(int a1, _DWORD *a2, int a3)
{
  __int64 v3;
  signed int v4;
  unsigned int v6;
  unsigned int j;
  unsigned int v8;
  unsigned int v9;
  int v10;
  char v11;
  char v12;
  unsigned int i;
  unsigned int v14;

  v3 = 16388LL * a1;
  v4 = dword_140404A6C[v3 + 291021661];
  if ( v4 + (a3 >> 8) >= 0x10000 )
    return 0;
  if ( dword_140404A6C[v3 + 291021664] )
  {
    v10 = 0;
    v11 = 0;
    if ( a3 > 0 )
    {
      v12 = dword_140404A6C[v3 + 291021662];
      for ( i = dword_140404A6C[v3 + 291021662]; ; i = 0 )
      {
        v14 = 8 - i;
        v10 |= (~(-1 << a3) & (*((unsigned __int8 *)&dword_140404A6C[v3 + 291021665] + v4) >> v12)) << v11;
        if ( a3 < 8 - i )
          break;
        *(_QWORD *)&dword_140404A6C[v3 + 291021661] = (unsigned int)++v4;
        if ( a3 == v14 )
          goto LABEL_18;
        a3 -= v14;
        v11 += v14;
        if ( a3 <= 0 )
          goto LABEL_18;
        v12 = 0;
      }
      dword_140404A6C[v3 + 291021662] = i + a3;
    }
LABEL_18:
    *a2 = v10;
    return 1;
  }
  v6 = *a2 & ~(-1 << a3);
  if ( a3 <= 0 )
    return 1;
  for ( j = dword_140404A6C[v3 + 291021662]; ; LOBYTE(j) = 0 )
  {
    *((_BYTE *)&dword_140404A6C[v3 + 291021665] + v4) &= ~(((1 << a3) - 1) << j);
    *((_BYTE *)&dword_140404A6C[v3 + 291021665] + (int)dword_140404A6C[v3 + 291021661]) |= (_BYTE)v6 << dword_140404A6C[v3 + 291021662];
    v8 = dword_140404A6C[v3 + 291021662];
    v9 = 8 - v8;
    if ( a3 < 8 - v8 )
      break;
    v4 = dword_140404A6C[v3 + 291021661] + 1;
    *(_QWORD *)&dword_140404A6C[v3 + 291021661] = (unsigned int)v4;
    if ( a3 == v9 )
      return 1;
    a3 -= v9;
    v6 >>= v9;
    if ( a3 <= 0 )
      return 1;
  }
  dword_140404A6C[v3 + 291021662] = a3 + v8;
  return 1;
}

//----- (000000014015AFD0) ----------------------------------------------------
__int64            sub_14015AFD0(int a1,      __m128i *a2, int a3, int a4)
{
  __int64 v4;
       __m128i *v5;
  __int64 v6;
  int v7;
  __m128i *v9;

  v4 = 16388LL * a1;
  v5 = a2;
  if ( (int)dword_140404A6C[v4 + 291021662] > 0 )
  {
    ++dword_140404A6C[v4 + 291021661];
    dword_140404A6C[v4 + 291021662] = 0;
  }
  v6 = (int)dword_140404A6C[v4 + 291021661];
  v7 = a4 * a3;
  if ( (int)v6 + a4 * a3 >= 0x10000 )
    return 0;
  if ( dword_140404A6C[v4 + 291021664] )
  {
    a2 = (     __m128i *)((char *)&dword_140404A6C[v4 + 291021665] + v6);
    v9 = (__m128i *)v5;
  }
  else
  {
    v9 = (__m128i *)((char *)&dword_140404A6C[v4 + 291021665] + v6);
  }
  crt_memcpy(v9, a2, v7);
  dword_140404A6C[v4 + 291021661] += v7;
  return 1;
}

//----- (000000014015B070) ----------------------------------------------------
__int64 crt_sscanf(__int64 a1,      char *a2, ...)
{
  __int64 *v4;
  va_list va;

  va_start(va, a2);
  v4 = (__int64 *)sub_140001BC0();
  return sub_140236BF4(*v4, a1, -1, (__int64)a2, nullptr, (__int64)va);
}

//----- (000000014015B0D0) ----------------------------------------------------
__int64 crt_sscanf_s(__int64 a1,      char *a2, ...)
{
  unsigned int *v4;
  va_list va;

  va_start(va, a2);
  v4 = sub_140001BC0();
  return sub_140236BF4(*(_QWORD *)v4 | 1LL, a1, -1, (__int64)a2, nullptr, (__int64)va);
}

//----- (000000014015B140) ----------------------------------------------------
void            sub_14015B140(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5, int a6)
{
  __int64 v6;
  unsigned __int8 *v7;
  _BYTE *v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  char v17;
  char v18;
  char v19;

  v6 = a5;
  v7 = a4;
  if ( a5 > 0 )
  {
    v8 = (_BYTE *)(a1 + 2);
    v9 = a2 - (_QWORD)a4;
    v10 = a3 - (_QWORD)a4;
    do
    {
      v11 = *v7;
      v12 = v7[v10];
      v13 = (v7[v9] << 20) + 0x80000;
      v14 = (v13 + 1470208 * (v11 - 128)) >> 20;
      v15 = (int)(v13 + ((360960 * (128 - v12)) & 0xFFFF0000) + 748800 * (128 - v11)) >> 20;
      v16 = (v13 + 1858048 * (v12 - 128)) >> 20;
      if ( (unsigned int)v14 > 0xFF )
      {
        v17 = -1;
        if ( v14 < 0 )
          v17 = 0;
        LOBYTE(v14) = v17;
      }
      if ( (unsigned int)v15 > 0xFF )
      {
        v18 = -1;
        if ( v15 < 0 )
          v18 = 0;
        LOBYTE(v15) = v18;
      }
      if ( (unsigned int)v16 > 0xFF )
      {
        v19 = -1;
        if ( v16 < 0 )
          v19 = 0;
        LOBYTE(v16) = v19;
      }
      *(v8 - 2) = v14;
      ++v7;
      *(v8 - 1) = v15;
      *v8 = v16;
      v8[1] = -1;
      v8 += a6;
      --v6;
    }
    while ( v6 );
  }
}

//----- (000000014015B270) ----------------------------------------------------
__int64            sub_14015B270(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v7;
  __m128i si128;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __int64 v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __int64 result;
  __int8 *v23;
  __int64 v24;
  __int64 v25;
  unsigned __int8 *v26;
  __int64 v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  char v33;
  char v34;
  unsigned int v35;

  v7 = 0;
  if ( a6 == 4 )
  {
    si128 = _mm_load_si128((     __m128i *)&xmmword_140279880);
    v9 = _mm_load_si128((     __m128i *)&xmmword_140279240);
    v10 = _mm_load_si128((     __m128i *)&xmmword_140279970);
    v11 = _mm_load_si128((     __m128i *)&xmmword_140279990);
    v12 = _mm_load_si128((     __m128i *)&xmmword_140279250);
    v13 = _mm_load_si128((     __m128i *)&xmmword_1402791D0);
    if ( a5 > 7 )
    {
      do
      {
        v14 = v7;
        v7 += 8;
        v15 = _mm_unpacklo_epi8(_mm_cvtsi32_si128((int)(0LL)), _mm_xor_si128(_mm_loadl_epi64((     __m128i *)(v14 + a4)), si128));
        v16 = _mm_unpacklo_epi8(_mm_cvtsi32_si128((int)(0LL)), _mm_xor_si128(_mm_loadl_epi64((     __m128i *)(v14 + a3)), si128));
        v17 = _mm_srli_epi16(_mm_unpacklo_epi8(si128, _mm_loadl_epi64((     __m128i *)(v14 + a2))), 4u);
        v18 = _mm_packus_epi16(
                _mm_srai_epi16(_mm_add_epi16(_mm_mulhi_epi16(v15, v9), v17), 4u),
                _mm_srai_epi16(_mm_add_epi16(_mm_mulhi_epi16(v16, v12), v17), 4u));
        v19 = _mm_packus_epi16(
                _mm_srai_epi16(
                  _mm_add_epi16(_mm_add_epi16(_mm_mulhi_epi16(v16, v11), v17), _mm_mulhi_epi16(v15, v10)),
                  4u),
                v13);
        v20 = _mm_unpacklo_epi8(v18, v19);
        v21 = _mm_unpackhi_epi8(v18, v19);
        *a1 = _mm_unpacklo_epi16(v20, v21);
        a1[1] = _mm_unpackhi_epi16(v20, v21);
        a1 += 2;
      }
      while ( v7 + 7 < a5 );
    }
  }
  result = v7;
  if ( v7 < (__int64)a5 )
  {
    v23 = &SR_VEC_PTR_LANES(128, a1, i8)[2];
    v24 = a2 - a4;
    v25 = a3 - a4;
    v26 = (unsigned __int8 *)(v7 + a4);
    v27 = a5 - (__int64)v7;
    do
    {
      v28 = *v26;
      v29 = v26[v25];
      v30 = (v26[v24] << 20) + 0x80000;
      v31 = (v30 + 1470208 * (v28 - 128)) >> 20;
      v32 = (int)(v30 + ((360960 * (128 - v29)) & 0xFFFF0000) + 748800 * (128 - v28)) >> 20;
      result = (unsigned int)((v30 + 1858048 * (v29 - 128)) >> 20);
      if ( (unsigned int)v31 > 0xFF )
      {
        v33 = -1;
        if ( v31 < 0 )
          v33 = 0;
        LOBYTE(v31) = v33;
      }
      if ( (unsigned int)v32 > 0xFF )
      {
        v34 = -1;
        if ( v32 < 0 )
          v34 = 0;
        LOBYTE(v32) = v34;
      }
      if ( (unsigned int)result > 0xFF )
      {
        v35 = 255;
        if ( (int)result < 0 )
          v35 = 0;
        result = v35;
      }
      *(v23 - 2) = v31;
      ++v26;
      *(v23 - 1) = v32;
      *v23 = result;
      v23[1] = -1;
      v23 += a6;
      --v27;
    }
    while ( v27 );
  }
  return result;
}

//----- (000000014015B530) ----------------------------------------------------
__int64            sub_14015B530(__int64 a1)
{
  __int64 result;

  if ( !*(_QWORD *)(a1 + 16) )
    return *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200);
  result = (*(__int64 (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40));
  if ( !(_DWORD)result )
    return result;
  return !*(_DWORD *)(a1 + 48) || *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200);
}

//----- (000000014015B580) ----------------------------------------------------
__int64            sub_14015B580(int a1, int a2)
{
  char v2;
  int v4;
  int v5;
  unsigned int v6;

  v2 = a2;
  if ( a2 > 16 )
    crt_assert((char *)L"bits <= 16", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0xFA6u);
  v4 = a1;
  v5 = 2 * (a1 & 0x5555);
  v6 = (16 * ((4 * (v5 & 0x3333 | (v4 >> 1) & 0x1111)) & 0xF0F | ((v5 | (v4 >> 1) & 0x5555u) >> 2) & 0x303))
     | (((4 * (v5 & 0x3333 | (v4 >> 1) & 0x1111)) | ((v5 | (v4 >> 1) & 0x5555u) >> 2) & 0x3333) >> 4) & 0xF0F;
  return (int)((v6 >> 8) | ((unsigned __int8)v6 << 8)) >> (16 - v2);
}

//----- (000000014015B6D0) ----------------------------------------------------
__int64            sub_14015B6D0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14015B6D0[32];
#define v9 (*(_DWORD (*)[6])(void *)(sr_frame_14015B6D0 + 0)) /* [rsp+20h] */
#define v10 (*(int (*))(void *)(sr_frame_14015B6D0 + 24)) /* [rsp+38h] */
#define v11 (*(int (*))(void *)(sr_frame_14015B6D0 + 28)) /* [rsp+3Ch] */

  v11 = 255;
  result = sub_14015C5E0(a1, (__int64)v9);
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  if ( result )
  {
    if ( a2 )
      *a2 = *(_DWORD *)a1;
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 4);
    if ( a4 )
    {
      if ( v9[0] == 24 && v10 == -16777216 )
        *a4 = 3;
      else
        *a4 = (v10 != 0) + 3;
    }
    return 1;
  }
  return result;
}
#undef v9
#undef v10
#undef v11

//----- (000000014015B780) ----------------------------------------------------
__int64            sub_14015B780(unsigned int *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  signed int v12;
  __int64 v13;
       char *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  char *v21;
  char *v22;
  signed int v23;
  int v24;
  char *v25;
  __int64 v26;
  int v27;
  unsigned __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  char v32;
  char v33;
  char *v34;
  unsigned int v35;
  int v36;
  int v37;
  __int64 v38;
  unsigned __int8 *v39;
  int v40;
  unsigned __int8 v41;
  unsigned __int8 *v42;
  int v43;
  signed int v44;
  __int64 i;
  unsigned __int8 *v46;
  unsigned __int8 v47;
  unsigned __int8 *v48;
  signed int v49;
  signed int v50;
  int v51;
  unsigned __int8 *v52;
  unsigned __int8 v53;
  unsigned __int8 *v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  int v62;
  unsigned __int8 v63;
  unsigned __int8 *v64;
  __int64 v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  signed int v70;
  int v71;
  unsigned int v72;
  int v73;
  __int64 v74;
  unsigned int v75;
  unsigned int v76;
  unsigned int v77;
  unsigned int v78;
  unsigned int v79;
  unsigned int v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  int v84;
  int v85;
  int v86;
  unsigned __int8 *v87;
  unsigned __int8 *v88;
  unsigned __int64 v89;
  unsigned __int8 v90;
  unsigned __int8 *v91;
  unsigned __int8 v92;
  unsigned __int8 *v93;
  unsigned __int8 v94;
  unsigned __int8 *v95;
  unsigned __int8 v96;
  unsigned __int8 *v97;
  signed int v98;
  char *v99;
  int v100;
  unsigned int v101;
  unsigned int v102;
  char v103;
  int v104;
  unsigned int v105;
  int v106;
  char v107;
  int v108;
  unsigned int v109;
  int v110;
  char v111;
  int v112;
  int v113;
  signed int v114;
  signed int v115;
  __int64 k;
  int v117;
  int v118;
  signed int v119;
  __int64 v120;
  __int64 v121;
  char *v122;
  __int64 v123;
  char v124;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14015B780[1248];
#define v126 (*(__int64 (*))(void *)(sr_frame_14015B780 + 0)) /* [rsp+0h] */
#define j (*(unsigned int (*))(void *)(sr_frame_14015B780 + 48)) /* [rsp+30h] */
#define v128 (*(int (*))(void *)(sr_frame_14015B780 + 52)) /* [rsp+34h] */
#define v129 (*(int (*))(void *)(sr_frame_14015B780 + 56)) /* [rsp+38h] */
#define v130 (*(__int64 (*))(void *)(sr_frame_14015B780 + 60)) /* [rsp+3Ch] */
#define v131 (*(int (*))(void *)(sr_frame_14015B780 + 68)) /* [rsp+44h] */
#define v132 (*(int (*))(void *)(sr_frame_14015B780 + 72)) /* [rsp+48h] */
#define v133 (*(signed int (*))(void *)(sr_frame_14015B780 + 76)) /* [rsp+4Ch] */
#define v134 (*(int (*))(void *)(sr_frame_14015B780 + 80)) /* [rsp+50h] */
#define v135 (*(int (*))(void *)(sr_frame_14015B780 + 84)) /* [rsp+54h] */
#define v136 (*(unsigned int (*))(void *)(sr_frame_14015B780 + 88)) /* [rsp+58h] */
#define v137 (*(int (*))(void *)(sr_frame_14015B780 + 92)) /* [rsp+5Ch] */
#define v138 (*(unsigned int (*))(void *)(sr_frame_14015B780 + 96)) /* [rsp+60h] */
#define v139 (*(int (*))(void *)(sr_frame_14015B780 + 100)) /* [rsp+64h] */
#define v140 (*(int (*))(void *)(sr_frame_14015B780 + 104)) /* [rsp+68h] */
#define v141 (*(int (*))(void *)(sr_frame_14015B780 + 108)) /* [rsp+6Ch] */
#define v142 (*(int (*))(void *)(sr_frame_14015B780 + 112)) /* [rsp+70h] */
#define v143 (*(int (*))(void *)(sr_frame_14015B780 + 116)) /* [rsp+74h] */
#define v144 (*(int (*))(void *)(sr_frame_14015B780 + 120)) /* [rsp+78h] */
#define v145 (*(__int64 (*))(void *)(sr_frame_14015B780 + 128)) /* [rsp+80h] */
#define v146 (*(char * (*))(void *)(sr_frame_14015B780 + 136)) /* [rsp+88h] */
#define v147 (*(int (*))(void *)(sr_frame_14015B780 + 144)) /* [rsp+90h] */
#define v148 (*(int (*))(void *)(sr_frame_14015B780 + 148)) /* [rsp+94h] */
#define v149 (*(int (*))(void *)(sr_frame_14015B780 + 152)) /* [rsp+98h] */
#define v150 (*(unsigned int (*))(void *)(sr_frame_14015B780 + 156)) /* [rsp+9Ch] */
#define v151 (*(int (*))(void *)(sr_frame_14015B780 + 160)) /* [rsp+A0h] */
#define v152 (*(int (*))(void *)(sr_frame_14015B780 + 164)) /* [rsp+A4h] */
#define v153 (*(__int64 (*))(void *)(sr_frame_14015B780 + 168)) /* [rsp+A8h] */
#define v154 (*(int (*))(void *)(sr_frame_14015B780 + 176)) /* [rsp+B0h] */
#define v155 (*(_DWORD * (*))(void *)(sr_frame_14015B780 + 184)) /* [rsp+B8h] */
#define v156 (*(_DWORD * (*))(void *)(sr_frame_14015B780 + 192)) /* [rsp+C0h] */
#define v157 (*(_DWORD * (*))(void *)(sr_frame_14015B780 + 200)) /* [rsp+C8h] */
#define v158 (*(_BYTE (*)[1024])(void *)(sr_frame_14015B780 + 208)) /* [rsp+D0h] */
#define v159 (*(__int64 (*))(void *)(sr_frame_14015B780 + 1232)) /* [rsp+4D0h] */

  v155 = a2;
  v6 = 0;
  v157 = a4;
  v156 = a3;
  v143 = a5;
  HIDWORD(v153) = 255;
  if ( !sub_14015C5E0((__int64)a1, (__int64)&v147) )
    return 0; /* 0x14015B7DC: je -> xor eax, eax */
  v144 = a1[1];
  v7 = abs32(v144);
  a1[1] = v7;
  if ( v7 > 0x1000000 || *a1 > 0x1000000 )
    goto LABEL_213;
  v8 = v149;
  v9 = v148;
  v10 = v153;
  v11 = v147;
  j = v150;
  v131 = v151;
  v135 = v152;
  v128 = v154;
  v130 = v153;
  v132 = v148;
  v129 = v149;
  v134 = v147;
  if ( v149 == 12 )
  {
    if ( v147 < 24 )
    {
      v6 = (v148 - v154 - 24) / 3;
      goto LABEL_9;
    }
  }
  else if ( v147 < 16 )
  {
    v6 = (v148 - v154 - v149) >> 2;
LABEL_9:
    if ( v6 )
      goto LABEL_14;
  }
  v12 = a1[46];
  if ( v148 != v12 + a1[48] - a1[52] )
  {
    crt_assert(
      (char *)L"info.offset == s->callback_already_read + (int) (s->img_buffer - s->img_buffer_original)",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x1515u);
    v12 = a1[46];
  }
  if ( v9 != *((_QWORD *)a1 + 24) - 56LL + v12 - (_QWORD)a1 )
  {
    v13 = sr_client_static_tls();
    v14 = "bad offset";
LABEL_214:
    *(_QWORD *)(v13 + 16) = (uint64)(uintptr_t)(v14);
    return 0; /* 0x14015C5B7: xor eax, eax */
  }
LABEL_14:
  if ( v11 == 24 && v10 == -16777216 )
    v15 = 3;
  else
    v15 = (v10 != 0) + 3;
  v16 = v143;
  a1[2] = v15;
  v17 = *a1;
  v18 = a1[1];
  v19 = *a1;
  if ( v16 >= 3 )
    v15 = v16;
  if ( v19 < 0
    || v19 && v15 > 0x7FFFFFFF / v19
    || (v20 = v15 * v19, v20 < 0)
    || v18 < 0
    || v18 && v20 > 0x7FFFFFFF / v18 )
  {
LABEL_213:
    v13 = sr_client_static_tls();
    v14 = "too large";
    goto LABEL_214;
  }
  if ( v17 && v15 > 0x7FFFFFFF / v17
    || v18 && v20 > 0x7FFFFFFF / v18
    || (v21 = (char *)sr_path_malloc((int)(v18 * v15 * *a1)), v146 = v21, (v22 = v21) == nullptr) )
  {
    v13 = sr_client_static_tls();
    v14 = "outofmem";
    goto LABEL_214;
  }
  if ( v11 >= 16 )
  {
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v132 = 0;
    v71 = 0;
    v136 = 0;
    v138 = 0;
    v140 = 0;
    v142 = 0;
    sub_14016E0F0((__int64)a1, v9 - v128 - v8);
    if ( v11 == 24 )
    {
      v72 = 3 * *a1;
    }
    else if ( v11 == 16 )
    {
      v72 = 2 * *a1;
    }
    else
    {
      v72 = 0;
    }
    v73 = -v72 & 3;
    v128 = v73;
    if ( v11 == 24 )
    {
      v74 = 1;
      v145 = 1;
      goto LABEL_145;
    }
    if ( v11 == 32 && v135 == 255 && v131 == 65280 && j == 16711680 )
    {
      if ( (_DWORD)v130 == -16777216 )
      {
        v74 = 2;
        v145 = 2;
        goto LABEL_145;
      }
    }
    else if ( !j || !v131 || !v135 )
    {
      goto LABEL_211;
    }
    v137 = sub_140162FB0(j) - 7;
    v136 = (unsigned __int8)(((unsigned __int16)(((((j & 0x5555) + ((j >> 1) & 0x5555)) & 0x3333)
                                                + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x3333)
                                                + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + (((((j & 0x55) + ((j >> 1) & 0x55)) & 0x33)
                             + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33)
                             + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                               + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + ((((((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)
                                + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                               + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((j & 0x55555555) + ((j >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((j & 0x55555555) + ((j >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16));
    v139 = sub_140162FB0(v75) - 7;
    v77 = (unsigned __int8)(((unsigned __int16)(((((v76 & 0x5555) + ((v76 >> 1) & 0x5555)) & 0x3333)
                                               + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x3333)
                                               + (((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                                                 + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                              & 0xF0F) >> 8)
                          + (((((v76 & 0x55) + ((v76 >> 1) & 0x55)) & 0x33)
                            + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33)
                            + (((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                              + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                           & 0xF)
                          + ((((((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F) >> 8)
                            + (((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                              + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                              + (((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) & 0x33333333)
                                + ((((v76 & 0x55555555) + ((v76 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                             & 0xF0F0F0F)) >> 16));
    v138 = v77;
    v141 = sub_140162FB0(v78) - 7;
    v140 = (unsigned __int8)(((unsigned __int16)(((((v79 & 0x5555) + ((v79 >> 1) & 0x5555)) & 0x3333)
                                                + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x3333)
                                                + (((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + (((((v79 & 0x55) + ((v79 >> 1) & 0x55)) & 0x33)
                             + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33)
                             + (((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + ((((((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                                + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                                + (((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + (((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)
                               + (((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((v79 & 0x55555555) + ((v79 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16));
    v132 = sub_140162FB0(v80) - 7;
    v83 = (((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) & 0x33333333)
        + ((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) >> 2) & 0x33333333);
    v142 = (unsigned __int8)(((unsigned __int16)((v83 + (v83 >> 4)) & 0xF0F) >> 8)
                           + ((v83 + (v83 >> 4)) & 0xF)
                           + (((((v83 + (v83 >> 4)) & 0xF0F0F0F) >> 8) + ((v83 + (v83 >> 4)) & 0xF0F0F0F)) >> 16));
    if ( v136 <= 8 && v77 <= 8 && v82 <= 8 )
    {
      v74 = 0;
      v145 = 0;
      if ( (unsigned __int8)(((unsigned __int16)((v83
                                                + (((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) & 0x33333333)
                                                  + ((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                                               & 0xF0F) >> 8)
                           + ((v83
                             + (((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) & 0x33333333)
                               + ((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                            & 0xF)
                           + (((((v83
                                + (((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) & 0x33333333)
                                  + ((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                               & 0xF0F0F0F) >> 8)
                             + ((v83
                               + (((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) & 0x33333333)
                                 + ((((v81 & 0x55555555) + ((v81 >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4))
                              & 0xF0F0F0F)) >> 16)) <= 8u )
      {
        v73 = v128;
LABEL_145:
        v36 = a1[1];
        v84 = 0;
        v129 = 0;
        v24 = v15;
        if ( v36 <= 0 )
          goto LABEL_195;
        while ( 1 )
        {
          v85 = *a1;
          if ( v74 )
          {
            v86 = 0;
            if ( v85 > 0 )
            {
              v87 = *((unsigned __int8 **)a1 + 24);
              v88 = (unsigned __int8 *)&v22[v71];
              while ( 1 )
              {
                v89 = *((_QWORD *)a1 + 25);
                if ( (unsigned __int64)v87 >= v89 )
                {
                  if ( !a1[12] )
                  {
                    v88[2] = 0;
                    goto LABEL_156;
                  }
                  stbi_refill_buffer((__int64)a1);
                  v91 = *((unsigned __int8 **)a1 + 24);
                  v90 = *v91;
                  v87 = v91 + 1;
                  v89 = *((_QWORD *)a1 + 25);
                }
                else
                {
                  v90 = *v87++;
                }
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v87);
                v88[2] = v90;
                if ( (unsigned __int64)v87 < v89 )
                {
                  v92 = *v87++;
                  goto LABEL_158;
                }
LABEL_156:
                if ( !a1[12] )
                {
                  v88[1] = 0;
                  goto LABEL_161;
                }
                stbi_refill_buffer((__int64)a1);
                v93 = *((unsigned __int8 **)a1 + 24);
                v92 = *v93;
                v87 = v93 + 1;
                v89 = *((_QWORD *)a1 + 25);
LABEL_158:
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v87);
                v88[1] = v92;
                if ( (unsigned __int64)v87 < v89 )
                {
                  v94 = *v87++;
                  *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v87);
                  goto LABEL_164;
                }
LABEL_161:
                if ( a1[12] )
                {
                  stbi_refill_buffer((__int64)a1);
                  v95 = *((unsigned __int8 **)a1 + 24);
                  v94 = *v95;
                  v87 = v95 + 1;
                  *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v95 + 1);
                }
                else
                {
                  v94 = 0;
                }
LABEL_164:
                *v88 = v94;
                v71 += 3;
                v88 += 3;
                if ( v74 == 2 )
                {
                  if ( (unsigned __int64)v87 >= *((_QWORD *)a1 + 25) )
                  {
                    if ( a1[12] )
                    {
                      stbi_refill_buffer((__int64)a1);
                      v97 = *((unsigned __int8 **)a1 + 24);
                      v96 = *v97;
                      v87 = v97 + 1;
                      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v97 + 1);
                    }
                    else
                    {
                      v96 = 0;
                    }
                  }
                  else
                  {
                    v96 = *v87++;
                    *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v87);
                  }
                }
                else
                {
                  v96 = -1;
                }
                HIDWORD(v130) |= v96;
                if ( v24 == 4 )
                {
                  ++v71;
                  *v88++ = v96;
                }
                if ( ++v86 >= (int)*a1 )
                  goto LABEL_187;
              }
            }
          }
          else
          {
            v98 = 0;
            v133 = 0;
            if ( v85 > 0 )
            {
              v99 = &v22[v71];
              v100 = v134;
              do
              {
                v101 = sub_1401605B0((__int64)a1);
                if ( v100 == 16 )
                {
                  v102 = v101;
                }
                else
                {
                  v102 = v101 + ((unsigned int)sub_1401605B0((__int64)a1) << 16);
                  v98 = v133;
                }
                v103 = sub_14016E050(j & v102, v137, v136);
                v104 = v138;
                v105 = v131 & v102;
                v106 = v139;
                *v99 = v103;
                v107 = sub_14016E050(v105, v106, v104);
                v108 = v140;
                v109 = v135 & v102;
                v110 = v141;
                v99[1] = v107;
                v111 = sub_14016E050(v109, v110, v108);
                v112 = v130;
                v71 += 3;
                v99[2] = v111;
                v99 += 3;
                if ( v112 )
                  v113 = sub_14016E050(v112 & v102, v132, v142);
                else
                  v113 = 255;
                HIDWORD(v130) |= v113;
                if ( v24 == 4 )
                {
                  ++v71;
                  *v99++ = v113;
                }
                v133 = ++v98;
              }
              while ( v98 < (int)*a1 );
              v22 = v146;
              v74 = v145;
LABEL_187:
              v73 = v128;
            }
            v84 = v129;
          }
          if ( v73 )
          {
            if ( *((_QWORD *)a1 + 2) && (v114 = a1[50] - a1[48], v114 < v73) )
            {
              *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
              (*((void (           **)(_QWORD, _QWORD))a1 + 3))(*((_QWORD *)a1 + 5), (unsigned int)(v73 - v114));
              v73 = v128;
            }
            else
            {
              *((_QWORD *)a1 + 24) += (unsigned int)v73;
            }
          }
          v36 = a1[1];
          v129 = ++v84;
          if ( v84 >= v36 )
            goto LABEL_195;
        }
      }
    }
LABEL_211:
    free(v22);
    v13 = sr_client_static_tls();
    v14 = "bad masks";
    goto LABEL_214;
  }
  v23 = 0;
  v133 = 0;
  if ( !v6 || v6 > 256 )
  {
    free(v21);
    v13 = sr_client_static_tls();
    v14 = "invalid";
    goto LABEL_214;
  }
  v24 = v15;
  if ( v6 <= 0 )
    goto LABEL_58;
  v25 = *((char **)a1 + 24);
  v26 = 0;
  v27 = v129;
  do
  {
    v28 = *((_QWORD *)a1 + 25);
    if ( (unsigned __int64)v25 < v28 )
      goto LABEL_40;
    if ( a1[12] )
    {
      stbi_refill_buffer((__int64)a1);
      v25 = *((char **)a1 + 24);
      v28 = *((_QWORD *)a1 + 25);
LABEL_40:
      v29 = *v25;
      v30 = 4 * v26;
      ++v25;
      v158[4 * v26 + 2] = v29;
      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v25);
      v31 = 4 * v26;
      if ( (unsigned __int64)v25 < v28 )
        goto LABEL_45;
      goto LABEL_43;
    }
    v30 = 4 * v26;
    v158[4 * v26 + 2] = 0;
    v31 = 4 * v26;
LABEL_43:
    if ( !a1[12] )
    {
      v158[v31 + 1] = 0;
      goto LABEL_48;
    }
    stbi_refill_buffer((__int64)a1);
    v25 = *((char **)a1 + 24);
    v28 = *((_QWORD *)a1 + 25);
LABEL_45:
    v32 = *v25++;
    *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v25);
    v158[v30 + 1] = v32;
    if ( (unsigned __int64)v25 < v28 )
    {
      v33 = *v25++;
      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v25);
      goto LABEL_51;
    }
LABEL_48:
    if ( a1[12] )
    {
      stbi_refill_buffer((__int64)a1);
      v34 = *((char **)a1 + 24);
      v33 = *v34;
      v25 = v34 + 1;
      *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v25);
    }
    else
    {
      v33 = 0;
    }
LABEL_51:
    v158[v30] = v33;
    if ( v27 != 12 )
    {
      if ( (unsigned __int64)v25 >= *((_QWORD *)a1 + 25) )
      {
        if ( a1[12] )
        {
          stbi_refill_buffer((__int64)a1);
          v25 = (char *)++*((_QWORD *)a1 + 24);
        }
      }
      else
      {
        *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(++v25);
      }
    }
    ++v26;
    v158[v30 + 3] = -1;
  }
  while ( v26 < v6 );
  v23 = v133;
  v22 = v146;
  v11 = v134;
LABEL_58:
  sub_14016E0F0((__int64)a1, v132 - v6 * ((v129 != 12) + 3) - v128 - v129);
  if ( v11 != 1 )
  {
    if ( v11 == 4 )
    {
      v35 = (*a1 + 1) >> 1;
      goto LABEL_64;
    }
    if ( v11 == 8 )
    {
      v35 = *a1;
      goto LABEL_64;
    }
    free(v22);
    v13 = sr_client_static_tls();
    v14 = "bad bpp";
    goto LABEL_214;
  }
  v35 = (*a1 + 7) >> 3;
LABEL_64:
  v36 = a1[1];
  v37 = -v35 & 3;
  if ( v11 == 1 )
  {
    LODWORD(v130) = 0;
    if ( v36 > 0 )
    {
      v38 = 0;
      do
      {
        v39 = *((unsigned __int8 **)a1 + 24);
        v40 = 7;
        if ( (unsigned __int64)v39 >= *((_QWORD *)a1 + 25) )
        {
          if ( a1[12] )
          {
            stbi_refill_buffer((__int64)a1);
            v42 = *((unsigned __int8 **)a1 + 24);
            v41 = *v42;
            *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v42 + 1);
          }
          else
          {
            v41 = 0;
          }
        }
        else
        {
          v41 = *v39;
          *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v39 + 1);
        }
        v43 = *a1;
        v44 = 0;
        for ( i = v41; v44 < (int)*a1; v43 = *a1 )
        {
          v22[v38] = v158[4 * (((int)i >> v40) & 1)];
          v22[v38 + 1] = v158[4 * (((int)i >> v40) & 1) + 1];
          v22[v38 + 2] = v158[4 * (((int)i >> v40) & 1) + 2];
          v38 += 3;
          if ( v24 == 4 )
            v22[v38++] = -1;
          if ( ++v44 == v43 )
            break;
          if ( --v40 < 0 )
          {
            v46 = *((unsigned __int8 **)a1 + 24);
            v40 = 7;
            if ( (unsigned __int64)v46 >= *((_QWORD *)a1 + 25) )
            {
              if ( a1[12] )
              {
                stbi_refill_buffer((__int64)a1);
                v48 = *((unsigned __int8 **)a1 + 24);
                v47 = *v48;
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v48 + 1);
              }
              else
              {
                v47 = 0;
              }
            }
            else
            {
              v47 = *v46;
              *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v46 + 1);
            }
            i = v47;
          }
        }
        if ( v37 )
        {
          if ( *((_QWORD *)a1 + 2) && (v49 = a1[50] - a1[48], v49 < v37) )
          {
            *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
            (*((void (           **)(_QWORD, _QWORD, __int64))a1 + 3))(
              *((_QWORD *)a1 + 5),
              (unsigned int)(v37 - v49),
              i);
          }
          else
          {
            *((_QWORD *)a1 + 24) += (unsigned int)v37;
          }
        }
        v36 = a1[1];
        LODWORD(v130) = v130 + 1;
      }
      while ( (int)v130 < v36 );
    }
  }
  else
  {
    v50 = 0;
    for ( j = 0; v50 < v36; j = v50 )
    {
      v51 = 0;
      if ( (int)*a1 > 0 )
      {
        do
        {
          v52 = *((unsigned __int8 **)a1 + 24);
          if ( (unsigned __int64)v52 >= *((_QWORD *)a1 + 25) )
          {
            if ( a1[12] )
            {
              stbi_refill_buffer((__int64)a1);
              v54 = *((unsigned __int8 **)a1 + 24);
              v53 = *v54;
              v52 = v54 + 1;
              *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v54 + 1);
            }
            else
            {
              v53 = 0;
            }
          }
          else
          {
            v53 = *v52++;
            *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v52);
          }
          v55 = 0;
          v56 = v53;
          if ( v11 == 4 )
          {
            v55 = v53 & 0xF;
            v56 = v53 >> 4;
          }
          v57 = v23;
          v58 = v23 + 1;
          v22[v57] = v158[4 * v56];
          v59 = v58++;
          v22[v59] = v158[4 * v56 + 1];
          v60 = v58;
          v23 = v58 + 1;
          v22[v60] = v158[4 * v56 + 2];
          if ( v24 == 4 )
          {
            v61 = v23++;
            v22[v61] = -1;
          }
          v62 = *a1;
          if ( v51 + 1 == *a1 )
            break;
          if ( v11 == 8 )
          {
            if ( (unsigned __int64)v52 >= *((_QWORD *)a1 + 25) )
            {
              if ( a1[12] )
              {
                stbi_refill_buffer((__int64)a1);
                v64 = *((unsigned __int8 **)a1 + 24);
                v63 = *v64;
                *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v64 + 1);
                v62 = *a1;
              }
              else
              {
                v63 = 0;
              }
            }
            else
            {
              v63 = *v52;
              *((_QWORD *)a1 + 24) = (uint64)(uintptr_t)(v52 + 1);
            }
            v55 = v63;
          }
          v65 = v23;
          v66 = v23 + 1;
          v22[v65] = v158[4 * v55];
          v67 = v66++;
          v22[v67] = v158[4 * v55 + 1];
          v68 = v66;
          v23 = v66 + 1;
          v22[v68] = v158[4 * v55 + 2];
          if ( v24 == 4 )
          {
            v69 = v23++;
            v22[v69] = -1;
          }
          v51 += 2;
        }
        while ( v51 < v62 );
        v50 = j;
      }
      if ( v37 )
      {
        if ( *((_QWORD *)a1 + 2) && (v70 = a1[50] - a1[48], v70 < v37) )
        {
          *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 25);
          (*((void (           **)(_QWORD, _QWORD))a1 + 3))(*((_QWORD *)a1 + 5), (unsigned int)(v37 - v70));
        }
        else
        {
          *((_QWORD *)a1 + 24) += (unsigned int)v37;
        }
        v50 = j;
      }
      v36 = a1[1];
      ++v50;
    }
  }
LABEL_195:
  if ( v24 == 4 && !HIDWORD(v130) )
  {
    v115 = 4 * *a1 * v36 - 1;
    for ( k = v115; k >= 0; k -= 4 )
      v22[k] = -1;
  }
  if ( v144 > 0 )
  {
    v117 = a1[1];
    v118 = 0;
    if ( v117 >= 0 && (v117 & 0xFFFFFFFE) != 0 )
    {
      do
      {
        v119 = 0;
        v120 = v24 * *a1 * (v117 - v118 - 1);
        v121 = (unsigned int)v120;
        v122 = &v22[v120];
        if ( (int)(v24 * *a1) > 0 )
        {
          v123 = v24 * v118 * *a1 - v121;
          do
          {
            ++v119;
            v124 = v122[v123];
            v122[v123] = *v122;
            *v122++ = v124;
          }
          while ( v119 < (int)(v24 * *a1) );
        }
        v117 = a1[1];
        ++v118;
      }
      while ( v118 < v117 >> 1 );
    }
  }
  if ( v143 && v143 != v24 )
  {
    v22 = (char *)sub_14015D7E0(v22, v24, v143, *a1, a1[1]); /* 0x14015C525: mov rsi, rax */
    if ( !v22 )
      return 0; /* 0x14015C52A: je -> xor eax, eax */
  }
  {
    *v155 = *a1;
    *v156 = a1[1];
    if ( v157 )
      *v157 = a1[2];
  }
  return (__int64)v22; /* 0x14015C54F: mov rax, rsi */
}
#undef v126
#undef j
#undef v128
#undef v129
#undef v130
#undef v131
#undef v132
#undef v133
#undef v134
#undef v135
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef v143
#undef v144
#undef v145
#undef v146
#undef v147
#undef v148
#undef v149
#undef v150
#undef v151
#undef v152
#undef v153
#undef v154
#undef v155
#undef v156
#undef v157
#undef v158
#undef v159

//----- (000000014015C5E0) ----------------------------------------------------
__int64            sub_14015C5E0(__int64 a1, __int64 a2)
{
  char *v2;
  char v5;
  char *v6;
  char v7;
  int v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
       char *v14;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;

  v2 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_42;
    stbi_refill_buffer(a1);
    v2 = *(char **)(a1 + 192);
  }
  v5 = *v2;
  v6 = v2 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v6);
  if ( v5 != 66 )
    goto LABEL_42;
  if ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 200) )
    goto LABEL_8;
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_42:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not BMP");
    return 0;
  }
  stbi_refill_buffer(a1);
  v6 = *(char **)(a1 + 192);
LABEL_8:
  v7 = *v6;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v6 + 1);
  if ( v7 != 77 )
    goto LABEL_42;
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  v8 = sub_1401605B0(a1);
  *(_DWORD *)(a2 + 4) = v8 + ((unsigned int)sub_1401605B0(a1) << 16);
  v9 = sub_1401605B0(a1);
  v10 = sub_1401605B0(a1);
  *(_DWORD *)(a2 + 32) = 14;
  *(_QWORD *)(a2 + 20) = 0;
  v11 = (unsigned int)(v9 + (v10 << 16));
  *(_QWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = v11;
  if ( *(int *)(a2 + 4) < 0 )
    goto LABEL_40;
  if ( (unsigned int)v11 > 0x38 || (v12 = 0x100010000001000LL, !_bittest64(&v12, v11)) )
  {
    if ( (_DWORD)v11 != 108 && (_DWORD)v11 != 124 )
    {
      v13 = sr_client_static_tls();
      v14 = "unknown BMP";
LABEL_15:
      *(_QWORD *)(v13 + 16) = (uint64)(uintptr_t)(v14);
      return 0;
    }
  }
  if ( (_DWORD)v11 == 12 )
  {
    *(_DWORD *)a1 = sub_1401605B0(a1);
    v16 = sub_1401605B0(a1);
  }
  else
  {
    *(_DWORD *)a1 = sub_1401606A0(a1);
    v16 = sub_1401606A0(a1);
  }
  *(_DWORD *)(a1 + 4) = v16;
  if ( (unsigned int)sub_1401605B0(a1) != 1 )
    goto LABEL_40;
  *(_DWORD *)a2 = sub_1401605B0(a1);
  if ( (_DWORD)v11 == 12 )
    return 1;
  v17 = sub_1401606A0(a1);
  if ( (unsigned int)(v17 - 1) <= 1 )
  {
    v13 = sr_client_static_tls();
    v14 = "BMP RLE";
    goto LABEL_15;
  }
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  sub_1401606A0(a1);
  if ( (_DWORD)v11 != 40 )
  {
    if ( (_DWORD)v11 != 56 )
    {
      if ( (((_DWORD)v11 - 108) & 0xFFFFFFEF) == 0 )
      {
        *(_DWORD *)(a2 + 12) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 16) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 20) = sub_1401606A0(a1);
        *(_DWORD *)(a2 + 24) = sub_1401606A0(a1);
        sub_1401606A0(a1);
        v18 = 12;
        do
        {
          sub_1401605B0(a1);
          sub_1401605B0(a1);
          --v18;
        }
        while ( v18 );
        if ( (_DWORD)v11 == 124 )
        {
          sub_1401606A0(a1);
          sub_1401606A0(a1);
          sub_1401606A0(a1);
          sub_1401606A0(a1);
        }
        return 1;
      }
LABEL_40:
      v13 = sr_client_static_tls();
      v14 = "bad BMP";
      goto LABEL_15;
    }
    sub_1401606A0(a1);
    sub_1401606A0(a1);
    sub_1401606A0(a1);
    sub_1401606A0(a1);
  }
  if ( ((*(_DWORD *)a2 - 16) & 0xFFFFFFEF) != 0 )
    return 1;
  if ( v17 )
  {
    if ( v17 == 3 )
    {
      *(_DWORD *)(a2 + 12) = sub_1401606A0(a1);
      *(_DWORD *)(a2 + 16) = sub_1401606A0(a1);
      v19 = sub_1401606A0(a1);
      *(_DWORD *)(a2 + 32) += 12;
      v20 = *(_DWORD *)(a2 + 16);
      *(_DWORD *)(a2 + 20) = v19;
      if ( *(_DWORD *)(a2 + 12) != v20 || v20 != v19 )
        return 1;
    }
    goto LABEL_40;
  }
  if ( *(_DWORD *)a2 == 32 )
  {
    *(_DWORD *)(a2 + 24) = -16777216;
    *(_DWORD *)(a2 + 28) = 0;
    *(_DWORD *)(a2 + 12) = 16711680;
    *(_DWORD *)(a2 + 16) = 65280;
    *(_DWORD *)(a2 + 20) = 255;
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 31744;
    *(_DWORD *)(a2 + 16) = 992;
    *(_DWORD *)(a2 + 20) = 31;
  }
  return 1;
}

//----- (000000014015C9B0) ----------------------------------------------------
__int64            sub_14015C9B0(__int64 a1)
{
  char *v1;
  char v3;
  char *v4;
  char v5;
  int v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 result;

  v1 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_14;
    stbi_refill_buffer(a1);
    v1 = *(char **)(a1 + 192);
  }
  v3 = *v1;
  v4 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4);
  if ( v3 != 66 )
    goto LABEL_14;
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v4 = *(char **)(a1 + 192);
      goto LABEL_8;
    }
LABEL_14:
    result = 0;
    goto LABEL_15;
  }
LABEL_8:
  v5 = *v4;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4 + 1);
  if ( v5 != 77 )
    goto LABEL_14;
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  v6 = sub_1401605B0(a1);
  v7 = v6 + ((unsigned int)sub_1401605B0(a1) << 16);
  if ( (unsigned int)v7 > 0x38 || (v8 = 0x100010000001000LL, !_bittest64(&v8, v7)) )
  {
    if ( (_DWORD)v7 != 108 && (_DWORD)v7 != 124 )
      goto LABEL_14;
  }
  result = 1;
LABEL_15:
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return result;
}

//----- (000000014015CAD0) ----------------------------------------------------
__int64            sub_14015CAD0(__int64 a1)
{
  char *v1;
  char v3;
  char *v4;
  char v5;
  int v6;
  unsigned __int64 v7;
  __int64 v8;

  v1 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      return 0;
    stbi_refill_buffer(a1);
    v1 = *(char **)(a1 + 192);
  }
  v3 = *v1;
  v4 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4);
  if ( v3 == 66 )
  {
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        return 0;
      stbi_refill_buffer(a1);
      v4 = *(char **)(a1 + 192);
    }
    v5 = *v4;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4 + 1);
    if ( v5 == 77 )
    {
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      sub_1401605B0(a1);
      v6 = sub_1401605B0(a1);
      v7 = v6 + ((unsigned int)sub_1401605B0(a1) << 16);
      if ( (unsigned int)v7 <= 0x38 )
      {
        v8 = 0x100010000001000LL;
        if ( _bittest64(&v8, v7) )
          return 1;
      }
      if ( (_DWORD)v7 == 108 || (_DWORD)v7 == 124 )
        return 1;
    }
  }
  return 0;
}

//----- (000000014015CBD0) ----------------------------------------------------
__int16            sub_14015CBD0(_WORD *a1, unsigned __int8 *a2)
{
  int v2;
  unsigned __int8 *v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;

  v2 = 0;
  v4 = a2;
  do
  {
    v5 = *v4;
    *a1 = 0;
    if ( (_BYTE)v5 != 0xFF )
    {
      v6 = a2[v5 + 1280];
      v7 = a2[v5 + 1024] >> 4;
      v8 = a2[v5 + 1024] & 0xF;
      if ( v8 )
      {
        LOWORD(v5) = v6 + v8;
        if ( (unsigned int)(v6 + v8) <= 9 )
        {
          LODWORD(v5) = ((v2 << v6) & 0x1FF) >> (9 - v8);
          if ( (int)v5 < 1 << (v8 - 1) )
            LODWORD(v5) = 1 - (1 << v8) + v5;
          if ( (unsigned int)(v5 + 128) <= 0xFF )
          {
            LOWORD(v5) = v6 + v8 + 16 * (v7 + 16 * v5);
            *a1 = v5;
          }
        }
      }
    }
    ++v2;
    ++v4;
    ++a1;
  }
  while ( v2 < 512 );
  return v5;
}

//----- (000000014015CCB0) ----------------------------------------------------
__int64            sub_14015CCB0(_WORD *a1, int *a2)
{
  int v2;
  int v4;
  int v5;
  __int64 v6;
  int v7;
  char *v8;
  __int64 v9;
  unsigned int *v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  int i;
  unsigned __int8 *v16;
  _WORD *v17;
  unsigned int v18;
  unsigned int v19;
  unsigned __int8 *v20;
  unsigned __int16 *v21;
  unsigned int v22;
  char v23;
  int v24;

  v2 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = 0;
    if ( *a2 > 0 )
    {
      v8 = (char *)a1 + v6 + 1280;
      do
      {
        *v8++ = v5 + 1;
        ++v4;
        ++v6;
        ++v7;
      }
      while ( v7 < *a2 );
    }
    ++v5;
    ++a2;
  }
  while ( v5 < 16 );
  v9 = v4;
  v10 = (unsigned int *)(a1 + 772);
  v11 = 1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  *((_BYTE *)a1 + v9 + 1280) = 0;
  for ( i = 15; i >= 0; --i )
  {
    v16 = (unsigned __int8 *)a1 + v14 + 1280;
    v10[18] = v13 - v12;
    if ( *v16 == v11 )
    {
      v17 = &a1[v14 + 256];
      do
      {
        *v17 = v12;
        ++v16;
        ++v17;
        v18 = v12;
        ++v13;
        ++v14;
        ++v12;
      }
      while ( *v16 == v11 );
      if ( v18 >= 1 << v11 )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad code lengths");
        return 0;
      }
    }
    v19 = v12 << i;
    v12 *= 2;
    *v10 = v19;
    ++v11;
    ++v10;
  }
  *(_DWORD *)&a1[2 * v11 + 770] = -1;
  crt_memset((void *)(uintptr_t)(a1), 0xFFu, 0x200u);
  if ( v13 > 0 )
  {
    v20 = (unsigned __int8 *)(a1 + 640);
    v21 = a1 + 256;
    do
    {
      v22 = *v20;
      if ( v22 <= 9 )
      {
        v23 = 9 - v22;
        v24 = 1 << (9 - v22);
        if ( v24 > 0 )
          crt_memset((void *)(uintptr_t)((_WORD *)((char *)a1 + (*v21 << v23))), v2, v24);
      }
      ++v2;
      ++v21;
      ++v20;
    }
    while ( v2 < v13 );
  }
  return 1;
}

//----- (000000014015CE80) ----------------------------------------------------
__int64            sub_14015CE80(__int64 a1)
{
  __int64 v2;
  char *v3;
  unsigned char v4;
  char *v5;

  v2 = 0;
  while ( 1 )
  {
    v3 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        v5 = *(char **)(a1 + 192);
        v4 = *v5;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      v4 = *v3;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v3 + 1);
    }
    if ( v4 != byte_14026E760[v2] )
      break;
    if ( ++v2 >= 8 )
      return 1;
  }
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad png sig");
  return 0;
}

//----- (000000014015CF70) ----------------------------------------------------
__int64            sub_14015CF70(__int64 a1)
{
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  int v7;
  int v8;
  unsigned int v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  char v19;
  unsigned __int64 v20;
  unsigned __int8 *v21;
  unsigned __int8 v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  unsigned __int64 v27;
  unsigned int v28;
  int v29;
  unsigned __int8 *v30;
  unsigned __int8 v31;
  unsigned int v32;
  unsigned int v33;
  int v34;
  int v35;
  unsigned __int8 v36;
  int v37;
  unsigned int v38;
  int v39;
  unsigned __int64 v40;
  unsigned __int8 *v41;
  unsigned __int8 v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  __int64 v51;
  int v52;
  int v53;
  _WORD v54[1016];
  unsigned char v55[19];
  __int16 v56;
  char v57;
  unsigned __int8 v59[464];
  __int64 v60;

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 < 5 )
  {
    sub_140160350(a1);
    v2 = *(_DWORD *)(a1 + 16);
  }
  v3 = v2 - 5;
  v4 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 16) = v3;
  v5 = v4 & 0x1F;
  v6 = v4 >> 5;
  *(_DWORD *)(a1 + 20) = v6;
  v7 = v5 + 257;
  v53 = v5 + 257;
  if ( v3 < 5 )
  {
    sub_140160350(a1);
    v3 = *(_DWORD *)(a1 + 16);
    v6 = *(_DWORD *)(a1 + 20);
  }
  v8 = v3 - 5;
  v9 = v6 >> 5;
  v10 = (v6 & 0x1F) + 1;
  *(_DWORD *)(a1 + 20) = v9;
  *(_DWORD *)(a1 + 16) = v3 - 5;
  if ( v3 - 5 < 4 )
  {
    sub_140160350(a1);
    v9 = *(_DWORD *)(a1 + 20);
    v8 = *(_DWORD *)(a1 + 16);
  }
  v11 = v9 >> 4;
  v12 = v8 - 4;
  *(_DWORD *)(a1 + 20) = v9 >> 4;
  *(_DWORD *)(a1 + 16) = v12;
  v13 = 0;

  v14 = (v9 & 0xF) + 4;
  v52 = v10 + v7;
  memset(v55,0,sizeof(v55));
  v15 = 0;
  v16 = v12;
  do
  {
    v17 = v11;
    if ( v12 < 3 )
    {
      v18 = v11;
      v19 = v12;
      if ( v11 >= 1 << v12 )
      {
LABEL_16:
        v17 = v11;
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v20 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v21 = *(unsigned __int8 **)a1;
          if ( *(_QWORD *)a1 < v20 )
          {
            v22 = *v21;
            *(_QWORD *)a1 = (uint64)(uintptr_t)(v21 + 1);
          }
          else
          {
            v22 = 0;
          }
          v16 = v12 + 8;
          *(_DWORD *)(a1 + 16) = v12 + 8;
          v17 = v18 | (v22 << v19);
          *(_DWORD *)(a1 + 20) = v17;
          if ( v12 + 8 > 24 )
            break;
          v19 = v12 + 8;
          v11 = v17;
          v12 += 8;
          v18 = v17;
          if ( v17 >= 1 << v16 )
            goto LABEL_16;
        }
      }
    }
    v23 = byte_14026FED0[v15];
    v16 -= 3;
    *(_DWORD *)(a1 + 16) = v16;
    v11 = v17 >> 3;
    ++v15;
    *(_DWORD *)(a1 + 20) = v17 >> 3;
    *((_BYTE *)&v55 + v23) = v17 & 7;
    v12 = v16;
  }
  while ( v15 < v14 );
  v24 = v52;
  v25 = v53;
  if ( (unsigned int)sub_14016F730((__int64)v54, (unsigned __int8 *)&v55, 19) )
  {
    do
    {
      v26 = *(_DWORD *)(a1 + 16);
      if ( v26 < 16 )
      {
        v27 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)a1 >= v27 )
          goto LABEL_60;
        v28 = *(_DWORD *)(a1 + 20);
        v29 = *(_DWORD *)(a1 + 16);
        if ( v28 >= 1 << v26 )
        {
LABEL_27:
          *(_QWORD *)a1 = v27;
        }
        else
        {
          while ( 1 )
          {
            v30 = *(unsigned __int8 **)a1;
            if ( *(_QWORD *)a1 < v27 )
            {
              v31 = *v30;
              *(_QWORD *)a1 = (uint64)(uintptr_t)(v30 + 1);
            }
            else
            {
              v31 = 0;
            }
            v26 = v29 + 8;
            *(_DWORD *)(a1 + 16) = v29 + 8;
            v28 |= v31 << v29;
            *(_DWORD *)(a1 + 20) = v28;
            if ( v29 + 8 > 24 )
              break;
            v29 += 8;
            if ( v28 >= 1 << v26 )
              goto LABEL_27;
          }
        }
      }
      v32 = (unsigned __int16)v54[*(_DWORD *)(a1 + 20) & 0x1FF];
      if ( v54[*(_DWORD *)(a1 + 20) & 0x1FF] )
      {
        v33 = v32 >> 9;
        *(_DWORD *)(a1 + 20) >>= v32 >> 9;
        v34 = v32 & 0x1FF;
        *(_DWORD *)(a1 + 16) = v26 - v33;
      }
      else
      {
        v34 = sub_14016FB90(a1, (__int64)v54);
      }
      if ( (unsigned int)v34 > 0x12 )
        goto LABEL_60;
      if ( v34 >= 16 )
      {
        v36 = 0;
        if ( v34 == 16 )
        {
          v37 = *(_DWORD *)(a1 + 16);
          if ( v37 < 2 )
          {
            v38 = *(_DWORD *)(a1 + 20);
            v39 = *(_DWORD *)(a1 + 16);
            if ( v38 >= 1 << v37 )
            {
LABEL_43:
              *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
            }
            else
            {
              v40 = *(_QWORD *)(a1 + 8);
              while ( 1 )
              {
                v41 = *(unsigned __int8 **)a1;
                if ( *(_QWORD *)a1 < v40 )
                {
                  v42 = *v41;
                  *(_QWORD *)a1 = (uint64)(uintptr_t)(v41 + 1);
                }
                else
                {
                  v42 = 0;
                }
                v37 = v39 + 8;
                *(_DWORD *)(a1 + 16) = v39 + 8;
                v38 |= v42 << v39;
                *(_DWORD *)(a1 + 20) = v38;
                if ( v39 + 8 > 24 )
                  break;
                v39 += 8;
                if ( v38 >= 1 << v37 )
                  goto LABEL_43;
              }
            }
          }
          v43 = *(_DWORD *)(a1 + 20) & 3;
          *(_DWORD *)(a1 + 20) >>= 2;
          v35 = v43 + 3;
          *(_DWORD *)(a1 + 16) = v37 - 2;
          if ( !v13 )
            goto LABEL_60;
          v36 = v59[v13 - 1];
        }
        else
        {
          if ( v34 == 17 )
          {
            v44 = *(_DWORD *)(a1 + 16);
            if ( v44 < 3 )
            {
              sub_140160350(a1);
              v44 = *(_DWORD *)(a1 + 16);
            }
            v45 = *(_DWORD *)(a1 + 20) & 7;
            *(_DWORD *)(a1 + 20) >>= 3;
            v35 = v45 + 3;
            v46 = v44 - 3;
          }
          else
          {
            v47 = *(_DWORD *)(a1 + 16);
            if ( v47 < 7 )
            {
              sub_140160350(a1);
              v47 = *(_DWORD *)(a1 + 16);
            }
            v48 = *(_DWORD *)(a1 + 20) & 0x7F;
            *(_DWORD *)(a1 + 20) >>= 7;
            v35 = v48 + 11;
            v46 = v47 - 7;
          }
          *(_DWORD *)(a1 + 16) = v46;
        }
        if ( v24 - v13 < v35 )
          goto LABEL_60;
        crt_memset((void *)(uintptr_t)(&v59[v13]), v36, (unsigned int)v35);
      }
      else
      {
        v35 = 1;
        v59[v13] = v34;
      }
      v49 = v35 + v13;
      v13 = v49;
    }
    while ( v49 < v24 );
    if ( v49 != v24 )
    {
LABEL_60:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad codelengths");
      return 0;
    }
    if (!(unsigned int)sub_14016F730(a1 + 52, v59, v25)) return 0;
    if (!(unsigned int)sub_14016F730(a1 + 2072, &v59[v25], v10)) return 0;
    return 1;
  }
  return 0;
}

// 14015D05E: conditional instruction was optimized away because eax.4<10u
// 14015D307: conditional instruction was optimized away because eax.4==12

//----- (000000014015D400) ----------------------------------------------------
__int64            sub_14015D400(_QWORD *a1, _BYTE *a2, int a3)
{
  _BYTE *v4;
  unsigned int v5;
  _BYTE *v6;
  __int64 v7;
  __int64 v8;
  char v9;
  bool v10;

  v4 = (_BYTE *)a1[3];
  v5 = *(_DWORD *)*a1 * *(_DWORD *)(*a1 + 4LL);
  if ( a3 == 2 )
  {
    if ( v5 )
    {
      v8 = v5;
      do
      {
        v9 = -1;
        v10 = *v4 == *a2;
        v4 += 2;
        if ( v10 )
          v9 = 0;
        *(v4 - 1) = v9;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    if ( a3 != 4 )
      crt_assert(
        (char *)L"out_n == 2 || out_n == 4",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
        0x12C3u);
    if ( v5 )
    {
      v6 = v4 + 2;
      v7 = v5;
      do
      {
        if ( *(v6 - 2) == *a2 && *(v6 - 1) == a2[1] && *v6 == a2[2] )
          v6[1] = 0;
        v6 += 4;
        --v7;
      }
      while ( v7 );
    }
  }
  return 1;
}

//----- (000000014015D4C0) ----------------------------------------------------
__int64            sub_14015D4C0(_QWORD *a1, _WORD *a2, int a3)
{
  _WORD *v4;
  unsigned int v5;
  _WORD *v6;
  __int64 v7;
  __int64 v8;
  __int16 v9;
  bool v10;

  v4 = (_WORD *)a1[3];
  v5 = *(_DWORD *)*a1 * *(_DWORD *)(*a1 + 4LL);
  if ( a3 == 2 )
  {
    if ( v5 )
    {
      v8 = v5;
      do
      {
        v9 = -1;
        v10 = *v4 == *a2;
        v4 += 2;
        if ( v10 )
          v9 = 0;
        *(v4 - 1) = v9;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    if ( a3 != 4 )
      crt_assert(
        (char *)L"out_n == 2 || out_n == 4",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
        0x12DCu);
    if ( v5 )
    {
      v6 = v4 + 2;
      v7 = v5;
      do
      {
        if ( *(v6 - 2) == *a2 && *(v6 - 1) == a2[1] && *v6 == a2[2] )
          v6[1] = 0;
        v6 += 4;
        --v7;
      }
      while ( v7 );
    }
  }
  return 1;
}

//----- (000000014015D5D0) ----------------------------------------------------
__int64            sub_14015D5D0(char *Block, int a2, int a3, int a4)
{
  int v5;
  __int64 v6;
  __int64 v7;
  int v9;
  int v10;
  __int64 v11;
  char *v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __int64 i;

  v5 = a4 * a3 * a2;
  v6 = v5;
  v7 = sr_path_malloc(v5);
  if ( v7 )
  {
    v9 = 0;
    if ( v5 >= 32 )
    {
      v10 = v5 - (v5 & 0x1F);
      v11 = v7 + 16;
      v12 = Block + 32;
      v13 = _mm_cvtsi32_si128(8u);
      do
      {
        v14 = _mm_loadu_si128((     __m128i *)v12 - 2);
        v11 += 32;
        v9 += 32;
        v15 = _mm_loadu_si128((     __m128i *)v12 - 1);
        v12 += 64;
        v16 = _mm_and_si128(_mm_srl_epi16(v14, v13), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        v17 = _mm_and_si128(_mm_srl_epi16(v15, v13), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_QWORD *)(v11 - 48) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v16, v16), u64)[0];
        *(_QWORD *)(v11 - 40) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v17, v17), u64)[0];
        v18 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128((     __m128i *)v12 - 4), v13), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        v19 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128((     __m128i *)v12 - 3), v13), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_QWORD *)(v11 - 32) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v18, v18), u64)[0];
        *(_QWORD *)(v11 - 24) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v19, v19), u64)[0];
      }
      while ( -16 - v7 + v11 < v10 );
    }
    for ( i = v9; i < v6; ++i )
      *(_BYTE *)(i + v7) = Block[2 * i + 1];
    free(Block);
    return v7;
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
}

// 14015D648: conditional instruction was optimized away because ebx.4>=20
// 14015D643: mask 0x8000001F is shortened because ebx.4 <= 0x7FFFFFFF

//----- (000000014015D730) ----------------------------------------------------
__int64            sub_14015D730(unsigned __int8 *Block, int a2, int a3, int a4)
{
  int v5;
  __int64 v6;
  __int64 i;

  v5 = a4 * a3 * a2;
  v6 = sr_path_malloc(2 * v5);
  if ( v6 )
  {
    if ( v5 > 0 )
    {
      for ( i = 0; i < v5; ++i )
        *(_WORD *)(v6 + 2 * i) = 257 * Block[i];
    }
    free(Block);
    return v6;
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
}

//----- (000000014015D7E0) ----------------------------------------------------
char *sub_14015D7E0(char *Block,int source_channels,int channels,int width,int height)
{
  extern unsigned char *image_convert_channels(unsigned char *pixels, int source_channels, int channels,
                                               unsigned int width, unsigned int height, const char **failure);
  /* src/engine/image_convert.c; the failure reason is the decoder's thread-local one. */
  return (char *)image_convert_channels((unsigned char *)Block, source_channels, channels, width, height,
      (const char **)(*(_QWORD *)(__readgsqword(0x58)+8LL*g_144CBE4C4)+16));
}

//----- (000000014015DD00) ----------------------------------------------------
char *           sub_14015DD00(char *Block, int a2, int a3, int a4, int a5)
{
  char *v10;
  int v11;
  char *v12;
  char *v13;
  int i;
  int j;
  __int16 v16;
  int k;
  __int16 v18;
  int m;
  int n;
  __int16 v21;
  int ii;
  __int16 v23;
  int mm;
  __int16 v25;
  int jj;
  int v27;
  int v28;
  int kk;
  int v30;
  int v31;
  int v32;
  int v33;
  int nn;
  int v35;
  int v36;
  int i1;
  int v38;
  int v39;
  int i2;
  __int16 v41;

  if ( a3 == a2 )
    return Block;
  if ( (unsigned int)(a3 - 1) > 3 )
    crt_assert(
      (char *)L"req_comp >= 1 && req_comp <= 4",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x6DDu);
  v10 = (char *)sr_path_malloc((unsigned int)(2 * a5 * a4 * a3));
  if ( v10 )
  {
    v11 = 0;
    if ( a5 > 0 )
    {
      while ( 2 )
      {
        v12 = &Block[2 * a4 * a2 * v11];
        v13 = &v10[2 * a4 * a3 * v11];
        switch ( a3 + 8 * a2 - 10 )
        {
          case 0:
            for ( i = a4 - 1; i >= 0; v13 += 4 )
            {
              --i;
              *(_WORD *)v13 = *(_WORD *)v12;
              v12 += 2;
              *((_WORD *)v13 + 1) = -1;
            }
            goto LABEL_44;
          case 1:
            for ( j = a4 - 1; j >= 0; v13 += 6 )
            {
              --j;
              v16 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 2;
              *((_WORD *)v13 + 1) = v16;
              *(_WORD *)v13 = v16;
            }
            goto LABEL_44;
          case 2:
            for ( k = a4 - 1; k >= 0; v13 += 8 )
            {
              --k;
              v18 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 2;
              *((_WORD *)v13 + 1) = v18;
              *(_WORD *)v13 = v18;
              *((_WORD *)v13 + 3) = -1;
            }
            goto LABEL_44;
          case 7:
            for ( m = a4 - 1; m >= 0; v12 += 4 )
            {
              --m;
              *(_WORD *)v13 = *(_WORD *)v12;
              v13 += 2;
            }
            goto LABEL_44;
          case 9:
            for ( n = a4 - 1; n >= 0; v13 += 6 )
            {
              --n;
              v21 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 4;
              *((_WORD *)v13 + 1) = v21;
              *(_WORD *)v13 = v21;
            }
            goto LABEL_44;
          case 10:
            for ( ii = a4 - 1; ii >= 0; *((_WORD *)v13 - 1) = *((_WORD *)v12 - 1) )
            {
              --ii;
              v23 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 4;
              *((_WORD *)v13 + 1) = v23;
              *(_WORD *)v13 = v23;
              v13 += 8;
            }
            goto LABEL_44;
          case 15:
            for ( jj = a4 - 1;
                  jj >= 0;
                  *((_WORD *)v13 - 1) = (77 * (unsigned int)*((unsigned __int16 *)v12 - 3) + 29 * v28 + v27) >> 8 )
            {
              v13 += 2;
              v27 = 150 * *((unsigned __int16 *)v12 + 1);
              v28 = *((unsigned __int16 *)v12 + 2);
              v12 += 6;
              --jj;
            }
            goto LABEL_44;
          case 16:
            for ( kk = a4 - 1; kk >= 0; *((_WORD *)v13 - 2) = (unsigned int)(77 * v33 + v32 + v30) >> 8 )
            {
              v13 += 4;
              v30 = 150 * *((unsigned __int16 *)v12 + 1);
              v31 = *((unsigned __int16 *)v12 + 2);
              v12 += 6;
              v32 = 29 * v31;
              v33 = *((unsigned __int16 *)v12 - 3);
              *((_WORD *)v13 - 1) = -1;
              --kk;
            }
            goto LABEL_44;
          case 18:
            for ( mm = a4 - 1; mm >= 0; *((_WORD *)v13 - 1) = -1 )
            {
              --mm;
              *(_WORD *)v13 = *(_WORD *)v12;
              v13 += 8;
              v25 = *((_WORD *)v12 + 1);
              v12 += 6;
              *((_WORD *)v13 - 3) = v25;
              *((_WORD *)v13 - 2) = *((_WORD *)v12 - 1);
            }
            goto LABEL_44;
          case 23:
            for ( nn = a4 - 1;
                  nn >= 0;
                  *((_WORD *)v13 - 1) = (77 * (unsigned int)*((unsigned __int16 *)v12 - 4) + 29 * v36 + v35) >> 8 )
            {
              v13 += 2;
              v35 = 150 * *((unsigned __int16 *)v12 + 1);
              v36 = *((unsigned __int16 *)v12 + 2);
              v12 += 8;
              --nn;
            }
            goto LABEL_44;
          case 24:
            for ( i1 = a4 - 1; i1 >= 0; *((_WORD *)v13 - 1) = *((_WORD *)v12 - 1) )
            {
              v13 += 4;
              v38 = 150 * *((unsigned __int16 *)v12 + 1);
              v39 = *((unsigned __int16 *)v12 + 2);
              v12 += 8;
              --i1;
              *((_WORD *)v13 - 2) = (77 * (unsigned int)*((unsigned __int16 *)v12 - 4) + 29 * v39 + v38) >> 8;
            }
            goto LABEL_44;
          case 25:
            for ( i2 = a4 - 1; i2 >= 0; *((_WORD *)v13 - 1) = *((_WORD *)v12 - 2) )
            {
              --i2;
              *(_WORD *)v13 = *(_WORD *)v12;
              v13 += 6;
              v41 = *((_WORD *)v12 + 1);
              v12 += 8;
              *((_WORD *)v13 - 2) = v41;
            }
LABEL_44:
            if ( ++v11 >= a5 )
              break;
            continue;
          default:
            crt_assert((char *)L"0", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x6FAu);
            free(Block);
            free(v10);
            *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported");
            return nullptr;
        }
        break;
      }
    }
    free(Block);
    return v10;
  }
  else
  {
    free(Block);
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return nullptr;
  }
}

//----- (000000014015E240)
__int64 sub_14015E240(void) { return sr_client_cpu_leaf1_edx(); }

//----- (000000014015E260) ----------------------------------------------------
__int64            sub_14015E260(__int64 a1, unsigned __int8 *a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int8 *v7;
  int *v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  void *v15;
  int v16;
  __int64 v17;
  int *v18;
  unsigned int v19;
  unsigned __int32 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  unsigned int v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14015E260[288];
#define v35 (*(__int64 (*))(void *)(sr_frame_14015E260 + 0)) /* [rsp+0h] */
#define v36 (*(unsigned int (*))(void *)(sr_frame_14015E260 + 64)) /* [rsp+40h] */
#define v37 (*(int (*))(void *)(sr_frame_14015E260 + 68)) /* [rsp+44h] */
#define v38 (*(int (*))(void *)(sr_frame_14015E260 + 72)) /* [rsp+48h] */
#define v39 (*(int (*))(void *)(sr_frame_14015E260 + 76)) /* [rsp+4Ch] */
#define Block (*(void * (*))(void *)(sr_frame_14015E260 + 80)) /* [rsp+50h] */
#define v41 (*(int (*))(void *)(sr_frame_14015E260 + 88)) /* [rsp+58h] */
#define v42 (*(unsigned int (*))(void *)(sr_frame_14015E260 + 92)) /* [rsp+5Ch] */
#define v43 (*(int (*))(void *)(sr_frame_14015E260 + 96)) /* [rsp+60h] */
#define v44 (*(unsigned int (*))(void *)(sr_frame_14015E260 + 100)) /* [rsp+64h] */
#define v45 (*(int (*))(void *)(sr_frame_14015E260 + 104)) /* [rsp+68h] */
#define v46 (*(int (*))(void *)(sr_frame_14015E260 + 108)) /* [rsp+6Ch] */
#define v47 (*(unsigned int (*))(void *)(sr_frame_14015E260 + 112)) /* [rsp+70h] */
#define v48 (*(int (*))(void *)(sr_frame_14015E260 + 116)) /* [rsp+74h] */
#define v49 (*(int (*))(void *)(sr_frame_14015E260 + 120)) /* [rsp+78h] */
#define v50 (*(unsigned int (*))(void *)(sr_frame_14015E260 + 124)) /* [rsp+7Ch] */
#define v51 (*(unsigned __int8 * (*))(void *)(sr_frame_14015E260 + 128)) /* [rsp+80h] */
#define v52 (*(__int64 (*))(void *)(sr_frame_14015E260 + 136)) /* [rsp+88h] */
#define v53 (*(__m128i (*))(void *)(sr_frame_14015E260 + 144)) /* [rsp+90h] */
#define v54 (*(int (*))(void *)(sr_frame_14015E260 + 160)) /* [rsp+A0h] */
#define v55 (*(int (*))(void *)(sr_frame_14015E260 + 164)) /* [rsp+A4h] */
#define v56 (*(int (*))(void *)(sr_frame_14015E260 + 168)) /* [rsp+A8h] */
#define si128 (*(__m128i (*))(void *)(sr_frame_14015E260 + 176)) /* [rsp+B0h] */
#define v58 (*(int (*))(void *)(sr_frame_14015E260 + 192)) /* [rsp+C0h] */
#define v59 (*(__int64 (*))(void *)(sr_frame_14015E260 + 196)) /* [rsp+C4h] */
#define v60 (*(__m128i (*))(void *)(sr_frame_14015E260 + 208)) /* [rsp+D0h] */
#define v61 (*(int (*))(void *)(sr_frame_14015E260 + 224)) /* [rsp+E0h] */
#define v62 (*(int (*))(void *)(sr_frame_14015E260 + 228)) /* [rsp+E4h] */
#define v63 (*(int (*))(void *)(sr_frame_14015E260 + 232)) /* [rsp+E8h] */
#define v64 (*(__m128i (*))(void *)(sr_frame_14015E260 + 240)) /* [rsp+F0h] */
#define v65 (*(__int64 (*))(void *)(sr_frame_14015E260 + 256)) /* [rsp+100h] */
#define v66 (*(int (*))(void *)(sr_frame_14015E260 + 264)) /* [rsp+108h] */
#define v67 (*(__int64 (*))(void *)(sr_frame_14015E260 + 272)) /* [rsp+110h] */

  v51 = a2;
  v41 = a4;
  v7 = a2;
  v36 = a3;
  v9 = *(int **)a1;
  v10 = a3;
  v11 = a4 * ((a5 == 16) + 1);
  if ( a7 )
  {
    v12 = v9[1];
    v13 = *v9;
    if ( v13 < 0
      || v12 < 0
      || v12 && v13 > 0x7FFFFFFF / v12
      || (v14 = v12 * v13, v14 < 0)
      || v11 < 0
      || v11 && v14 > 0x7FFFFFFF / v11 )
    {
      Block = nullptr;
    }
    else
    {
      v15 = (void *)sr_path_malloc(v11 * v14);
      v10 = v36;
      Block = v15;
    }
    v16 = 0;
    v39 = 0;
    v17 = 0;
    v52 = 0;
    while ( 1 )
    {
      v18 = *(int **)a1;
      si128 = _mm_load_si128((     __m128i *)&xmmword_140278F00);
      v54 = 2;
      v64 = _mm_load_si128((     __m128i *)&xmmword_140278E00);
      v55 = 2;
      v53 = _mm_load_si128((     __m128i *)&xmmword_140278F70);
      v56 = 1;
      v19 = *(unsigned __int32 *)((char *)SR_VEC_LANES(128, v53, u32) + v17);
      v58 = 0;
      v59 = 1;
      v20 = v19 - *(__int32 *)((char *)SR_VEC_LANES(128, si128, i32) + v17);
      v45 = *(__int32 *)((char *)SR_VEC_LANES(128, si128, i32) + v17);
      v21 = *v18 - 1;
      v61 = 4;
      v62 = 2;
      v22 = (v20 + v21) / v19;
      v60 = _mm_load_si128((     __m128i *)&xmmword_140278F90);
      v23 = v22;
      v63 = 2;
      v44 = v19;
      v24 = *(unsigned __int32 *)((char *)SR_VEC_LANES(128, v60, u32) + v17);
      v47 = v22;
      v65 = 2;
      v66 = 1;
      v42 = v24;
      if ( v22 )
      {
        v25 = v18[1] - *(__int32 *)((char *)SR_VEC_LANES(128, v64, i32) + v17);
        v43 = *(__int32 *)((char *)SR_VEC_LANES(128, v64, i32) + v17);
        v48 = (v25 + v24 - 1) / v24;
        v26 = v48;
        if ( v48 )
        {
          v27 = v48 * (((int)(a5 * v22 * v18[2] + 7) >> 3) + 1);
          v50 = v27;
          if ( !(unsigned int)sub_14015E5F0((_QWORD *)a1, v7, v10, v41, v22, v48, a5, a6) )
          {
            free(Block);
            return 0;
          }
          v28 = 0;
          v37 = 0;
          if ( v48 > 0 )
          {
            v29 = 0;
            v30 = v11 * v23;
            v38 = 0;
            v49 = v11 * v23;
            do
            {
              if ( (int)v23 > 0 )
              {
                v31 = v29;
                v32 = v43 + v28 * v42;
                v46 = v32;
                v33 = v11 * v45;
                do
                {
                  crt_memcpy(
                    (__m128i *)((char *)Block + (unsigned int)(v11 * v32 * **(_DWORD **)a1) + v33),
                    (     __m128i *)(*(_QWORD *)(a1 + 24) + v31),
                    v11);
                  v32 = v46;
                  v31 += v11;
                  v33 += v11 * v44;
                  --v23;
                }
                while ( v23 );
                v28 = v37;
                v29 = v38;
                v23 = v47;
                v26 = v48;
                v30 = v49;
              }
              ++v28;
              v29 += v30;
              v37 = v28;
              v38 = v29;
            }
            while ( v28 < v26 );
            v27 = v50;
            v17 = v52;
          }
          free(*(void **)(a1 + 24));
          v10 = v36 - v27;
          v16 = v39;
          v7 = &v51[v27];
          v36 -= v27;
          v51 = v7;
        }
      }
      ++v16;
      v17 += 4;
      v39 = v16;
      v52 = v17;
      if ( v16 >= 7 )
      {
        *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(Block);
        return 1;
      }
    }
  }
  return sub_14015E5F0((_QWORD *)a1, a2, a3, a4, *v9, v9[1], a5, a6);
}
#undef v35
#undef v36
#undef v37
#undef v38
#undef v39
#undef Block
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47
#undef v48
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef si128
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62
#undef v63
#undef v64
#undef v65
#undef v66
#undef v67

//----- (000000014015E5F0) ----------------------------------------------------
__int64            sub_14015E5F0(
        _QWORD *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  unsigned int v8;
  unsigned int v10;
  int v11;
  _QWORD *v12;
  int v13;
  int v14;
  int v15;
  __int64 v17;
  _QWORD *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  __int64 v24;
       char *v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int8 *v31;
  unsigned __int8 *v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int8 *v36;
  __int64 v37;
  __int64 v38;
  unsigned __int8 v39;
  unsigned __int8 v40;
  unsigned __int8 v41;
       __m128i *v42;
  char *v43;
  __m128i *v44;
  unsigned __int8 *v45;
  unsigned __int8 *v46;
  unsigned int v47;
  __int64 v48;
  __m128i *v49;
  __int64 v50;
  __int64 v51;
  unsigned __int8 *v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  signed __int64 v58;
  signed __int64 v59;
  unsigned __int8 *v60;
  __m128i v61;
  __m128i v62;
  __m128i v63;
  __m128i v64;
  __m128i v65;
  __m128i v66;
  __m128i v67;
  __m128i v68;
  __m128i v69;
  __m128i v70;
  __m128i v71;
  unsigned __int8 *v72;
  __int64 v73;
  __int64 v74;
  char *v75;
  __int64 v76;
  int v77;
  int v78;
  __int64 v79;
  __int8 *v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int8 *v85;
  signed __int64 v86;
  char *v87;
  signed __int64 v88;
  unsigned __int8 *v89;
  int v90;
  int v91;
  int v92;
  signed int v93;
  signed int v94;
  signed int v95;
  __int64 v96;
  unsigned __int8 *v97;
  __int64 v98;
  unsigned __int8 v99;
  __int64 v100;
  unsigned __int8 *v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  int v105;
  __int64 v106;
       __m128i *v107;
  signed __int64 v108;
  signed __int64 v109;
  signed __int64 v110;
  __int64 v111;
  char *v112;
  signed __int64 v113;
  __int64 v114;
  signed __int64 v115;
       __m128i *v116;
  __m128i v117;
  __m128i v118;
  __m128i v119;
  __m128i v120;
  __m128i v121;
  __m128i v122;
  __m128i v123;
  __m128i v124;
  __m128i v125;
  __m128i v126;
  __m128i v127;
  signed __int64 v128;
       __m128i *v129;
  signed __int64 v130;
  __int64 v131;
  signed __int64 v132;
  signed __int64 v133;
  signed __int64 v134;
  int v135;
  int v136;
  __m128i *v137;
  signed __int64 v138;
  char *v139;
  __int8 *v140;
  int v141;
  int v142;
  int v143;
  signed int v144;
  signed int v145;
  signed int v146;
       __m128i *v147;
  signed __int64 v148;
  signed __int64 v149;
  unsigned __int8 v150;
       __m128i *v151;
  signed __int64 v152;
  signed __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  char *v159;
  _BYTE *v160;
  char v161;
  int v162;
  unsigned __int64 v163;
  char v164;
  int v165;
  unsigned __int64 v166;
  char v167;
  char v168;
  int v169;
  unsigned __int64 v170;
  char v171;
  __int64 v172;
  __int64 i;
  __int64 v174;
  _BYTE *v175;
  _BYTE *v176;
  char v177;
  unsigned __int8 *v179;
  unsigned __int8 *v180;
  unsigned int v181;
  __int64 v182;
  __int16 v183;
  __int16 v184;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14015E5F0[144];
#define v185 (*(int (*))(void *)(sr_frame_14015E5F0 + 0)) /* [rsp+20h] */
#define v186 (*(__m128i * (*))(void *)(sr_frame_14015E5F0 + 8)) /* [rsp+28h] */
#define v187 (*(int (*))(void *)(sr_frame_14015E5F0 + 8)) /* [rsp+28h] */
#define v188 (*(int (*))(void *)(sr_frame_14015E5F0 + 16)) /* [rsp+30h] */
#define v189 (*(unsigned int (*))(void *)(sr_frame_14015E5F0 + 20)) /* [rsp+34h] */
#define v190 (*(int (*))(void *)(sr_frame_14015E5F0 + 24)) /* [rsp+38h] */
#define v191 (*(unsigned int (*))(void *)(sr_frame_14015E5F0 + 28)) /* [rsp+3Ch] */
#define v192 (*(unsigned int (*))(void *)(sr_frame_14015E5F0 + 32)) /* [rsp+40h] */
#define v193 (*(char * (*))(void *)(sr_frame_14015E5F0 + 40)) /* [rsp+48h] */
#define v194 (*(int (*))(void *)(sr_frame_14015E5F0 + 48)) /* [rsp+50h] */
#define v195 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 56)) /* [rsp+58h] */
#define v196 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 64)) /* [rsp+60h] */
#define v197 (*(__int8 * (*))(void *)(sr_frame_14015E5F0 + 72)) /* [rsp+68h] */
#define v198 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 80)) /* [rsp+70h] */
#define v199 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 88)) /* [rsp+78h] */
#define v200 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 96)) /* [rsp+80h] */
#define v201 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 120)) /* [rsp+98h] */
#define v202 (*(__int64 (*))(void *)(sr_frame_14015E5F0 + 128)) /* [rsp+A0h] */

  v8 = 0;
  v10 = a6;
  v11 = *(_DWORD *)(*a1 + 8LL);
  v12 = a1;
  v185 = v11;
  v188 = a5;
  v13 = a4 * ((a7 == 16) + 1);
  v14 = ((a7 == 16) + 1) * v11;
  v15 = a4;
  v190 = v14;
  v192 = a5 * v13;
  if ( a4 != v11 && a4 != v11 + 1 )
  {
    crt_assert(
      (char *)L"out_n == s->img_n || out_n == s->img_n+1",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x11C8u);
    v12 = a1;
  }
  if ( a5 < 0
    || (a6 & 0x80000000) != 0
    || a6 && a5 > (int)(0x7FFFFFFF / a6)
    || ((a6 * a5) & 0x80000000) != 0
    || v13 < 0
    || v13 && (int)(a6 * a5) > 0x7FFFFFFF / v13 )
  {
    v12[3] = 0;
    goto LABEL_235;
  }
  v17 = sr_path_malloc((int)(a6 * a5 * v13));
  v18 = a1;
  a1[3] = v17;
  if ( !v17 )
  {
LABEL_235:
    v24 = sr_client_static_tls();
    v25 = "outofmem";
    goto LABEL_236;
  }
  v19 = v185;
  if ( v185 < 0
    || (v20 = a5) != 0 && v185 > (int)(0x7FFFFFFFu / a5)
    || (v21 = a5 * v185, v194 = a5 * v185, a5 * v185 < 0)
    || (v22 = a7, a7 < 0)
    || a7 && v21 > (int)(0x7FFFFFFFu / a7)
    || a7 * v21 > 2147483640 )
  {
    v24 = sr_client_static_tls();
    v25 = "too large";
    goto LABEL_236;
  }
  v23 = (unsigned int)(a7 * v21 + 7) >> 3;
  v191 = v23;
  if ( a3 >= a6 * (v23 + 1) )
  {
    v26 = 0;
    v189 = 0;
    if ( !a6 )
      goto LABEL_175;
    v27 = v14;
    v28 = v13;
    v195 = v14;
    v200 = v13;
    while ( 1 )
    {
      v29 = v18[3];
      v30 = *a2;
      v31 = a2 + 1;
      v32 = v31;
      v33 = v192 * v26 + v29;
      v202 = v192 * v26;
      if ( (unsigned int)v30 > 4 )
      {
        v24 = sr_client_static_tls();
        v25 = "invalid filter";
        goto LABEL_236;
      }
      if ( a7 < 8 )
      {
        if ( v23 > v20 )
        {
          v24 = sr_client_static_tls();
          v25 = "invalid width";
          goto LABEL_236;
        }
        v14 = 1;
        v27 = 1;
        v190 = 1;
        v195 = 1;
        v188 = v23;
        v33 += v20 * a4 - v23;
      }
      v34 = v33 - v192;
      if ( !v26 )
        LODWORD(v30) = byte_140301848[v30];
      if ( v27 > 0 )
      {
        v35 = v34 - (_QWORD)v31;
        v36 = v31;
        v37 = v33 - (_QWORD)v31;
        v38 = v27;
        while ( 2 )
        {
          switch ( (int)v30 )
          {
            case 0:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 1:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 2:
              do
              {
                v36[v37] = *v36 + v36[v35];
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 3:
              do
              {
                v39 = (v36++)[v35];
                v36[v37 - 1] = *(v36 - 1) + (v39 >> 1);
                --v38;
              }
              while ( v38 );
              break;
            case 4:
              do
              {
                v40 = (v36++)[v35];
                v41 = 0;
                if ( v40 )
                  v41 = v40;
                v36[v37 - 1] = *(v36 - 1) + v41;
                --v38;
              }
              while ( v38 );
              break;
            case 5:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              break;
            case 6:
              do
              {
                v36[v37] = *v36;
                ++v36;
                --v38;
              }
              while ( v38 );
              v28 = v200;
              break;
            default:
              ++v36;
              if ( --v38 )
                continue;
              break;
          }
          break;
        }
        v19 = v185;
      }
      if ( a7 == 8 )
      {
        if ( v19 != a4 )
          *(_BYTE *)(v19 + v33) = -1;
        v42 = (     __m128i *)&v31[v19];
        v43 = (char *)(a4 + v34);
        v44 = (__m128i *)(a4 + v33);
        v193 = v43;
        v186 = v44;
        v45 = (unsigned __int8 *)v42;
      }
      else if ( a7 == 16 )
      {
        if ( v19 != a4 )
          *(_WORD *)(v27 + v33) = -1;
        v43 = (char *)(v28 + v34);
        v42 = (     __m128i *)&v31[v14];
        v193 = v43;
        v44 = (__m128i *)(v28 + v33);
        v45 = &v32[v14];
        v186 = v44;
      }
      else
      {
        v42 = (     __m128i *)(v31 + 1);
        v43 = (char *)(v34 + 1);
        v45 = (unsigned __int8 *)v42;
        v44 = (__m128i *)(v33 + 1);
        v193 = v43;
        v186 = v44;
        if ( a7 < 8 )
          break;
      }
      if ( v19 == a4 )
        break;
      if ( v19 + 1 != a4 )
        crt_assert((char *)L"img_n+1 == out_n", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x121Cu);
      v46 = (unsigned __int8 *)v42;
      a2 = v45;
      switch ( (int)v30 )
      {
        case 0:
          v47 = a5;
          if ( a5 != 1 )
          {
            v48 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v49 = v44;
                v50 = v27;
                do
                {
                  SR_VEC_PTR_LANES(128, v49, i8)[0] = SR_VEC_PTR_LANES(128, v49, i8)[a2 - (unsigned __int8 *)v44];
                  v49 = (__m128i *)((char *)v49 + 1);
                  --v50;
                }
                while ( v50 );
              }
              SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
              a2 += v14;
              v44 = (__m128i *)((char *)v44 + v28);
              --v48;
            }
            while ( v48 );
            break;
          }
          goto LABEL_127;
        case 1:
          v47 = a5;
          if ( a5 != 1 )
          {
            v51 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v52 = a2;
                v53 = v27;
                do
                {
                  v52[(char *)v44 - (char *)a2] = *v52 + v52[(char *)v44 - v28 - (char *)a2];
                  ++v52;
                  --v53;
                }
                while ( v53 );
              }
              SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
              a2 += v14;
              v44 = (__m128i *)((char *)v44 + v28);
              --v51;
            }
            while ( v51 );
            break;
          }
          goto LABEL_127;
        case 2:
          v47 = a5;
          if ( a5 != 1 )
          {
            v54 = (unsigned int)(a5 - 1);
            do
            {
              v55 = 0;
              if ( v14 >= 64 )
              {
                v56 = v14 - 1;
                v57 = (unsigned __int64)SR_VEC_PTR_LANES(128, v44, u64) + v56;
                if ( (v44 > (__m128i *)&a2[v56] || v57 < (unsigned __int64)a2)
                  && (v44 > (__m128i *)&v43[v56] || v57 < (unsigned __int64)v43) )
                {
                  v58 = v43 - (char *)a2;
                  v59 = (char *)v44 - (char *)a2;
                  v60 = a2 + 16;
                  do
                  {
                    v61 = _mm_loadu_si128((     __m128i *)v60 - 1);
                    v55 += 64;
                    v62 = _mm_loadu_si128((     __m128i *)&v60[v58 - 16]);
                    v63 = _mm_loadu_si128((     __m128i *)&v60[v58]);
                    v60 += 64;
                    v64 = _mm_add_epi8(v62, v61);
                    v65 = _mm_loadu_si128((     __m128i *)v60 - 4);
                    { __m128i sr_png_store = v64; __builtin_memcpy((void *)(&v60[v59 - 80]), &sr_png_store, 16); }
                    v66 = _mm_add_epi8(v63, v65);
                    v67 = _mm_loadu_si128((     __m128i *)v60 - 3);
                    v68 = _mm_loadu_si128((     __m128i *)&v60[v58 - 48]);
                    { __m128i sr_png_store = v66; __builtin_memcpy((void *)(&v60[v59 - 64]), &sr_png_store, 16); }
                    v69 = _mm_add_epi8(v68, v67);
                    v70 = _mm_loadu_si128((     __m128i *)v60 - 2);
                    v71 = _mm_loadu_si128((     __m128i *)&v60[v58 - 32]);
                    { __m128i sr_png_store = v69; __builtin_memcpy((void *)(&v60[v59 - 48]), &sr_png_store, 16); }
                    { __m128i sr_png_store = _mm_add_epi8(v71, v70); __builtin_memcpy((void *)(&v60[v59 - 32]), &sr_png_store, 16); }
                  }
                  while ( v55 < v14 - (v14 & 0x3F) );
                }
              }
              if ( v55 < v27 )
              {
                v72 = &a2[v55];
                v73 = v27 - v55;
                do
                {
                  v72[(char *)v44 - (char *)a2] = *v72 + v72[v43 - (char *)a2];
                  ++v72;
                  --v73;
                }
                while ( v73 );
              }
              SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
              a2 += v14;
              v44 = (__m128i *)((char *)v44 + v28);
              v43 += v28;
              --v54;
            }
            while ( v54 );
            break;
          }
          goto LABEL_127;
        case 3:
          v47 = a5;
          if ( a5 != 1 )
          {
            v74 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v75 = v43;
                v76 = v27;
                do
                {
                  v77 = (unsigned __int8)v75[(char *)v44 - v28 - v43];
                  v78 = (unsigned __int8)*v75++;
                  v75[(char *)v44 - v43 - 1] = v75[a2 - (unsigned __int8 *)v43 - 1] + ((unsigned int)(v78 + v77) >> 1);
                  --v76;
                }
                while ( v76 );
              }
              SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
              a2 += v14;
              v44 = (__m128i *)((char *)v44 + v28);
              v43 += v28;
              --v74;
            }
            while ( v74 );
            break;
          }
          goto LABEL_127;
        case 4:
          v79 = (unsigned int)(a5 - 1);
          if ( a5 != 1 )
          {
            v80 = &SR_VEC_PTR_LANES(128, v44, i8)[v27];
            v196 = v14;
            v81 = v28 + v27;
            v82 = v14;
            v83 = v28 - (_QWORD)v44;
            v197 = &SR_VEC_PTR_LANES(128, v44, i8)[v27];
            v198 = v28 - (_QWORD)v44;
            v201 = v28 + v27;
            v199 = (unsigned int)(a5 - 1);
            do
            {
              if ( v27 > 0 )
              {
                v84 = v27;
                v85 = &v80[-v81];
                v86 = v43 - (char *)v44;
                v87 = &v43[v83];
                v88 = v86;
                v89 = &a2[v83];
                do
                {
                  v90 = (unsigned __int8)*v85;
                  v91 = (unsigned __int8)v85[v88];
                  v92 = (unsigned __int8)v85[(_QWORD)v87];
                  v93 = abs32(v92 - v91);
                  v94 = abs32(v90 - v91);
                  v95 = abs32(v90 - v91 + v92 - v91);
                  if ( v93 > v94 || v93 > v95 )
                  {
                    LOBYTE(v90) = v85[v88];
                    if ( v94 <= v95 )
                      LOBYTE(v90) = v85[(_QWORD)v87];
                  }
                  v85[v28] = v90 + v85[(_QWORD)v89];
                  ++v85;
                  --v84;
                }
                while ( v84 );
                v44 = v186;
                v43 = v193;
                v27 = v195;
                v83 = v198;
                v80 = v197;
                v79 = v199;
                v82 = v196;
                v81 = v201;
              }
              v44 = (__m128i *)((char *)v44 + v28);
              *v80 = -1;
              v80 += v28;
              v186 = v44;
              v83 -= v28;
              v197 = v80;
              v43 += v28;
              v198 = v83;
              a2 += v82;
              v193 = v43;
              v199 = --v79;
            }
            while ( v79 );
          }
          break;
        case 5:
          v47 = a5;
          if ( a5 == 1 )
            goto LABEL_127;
          v96 = (unsigned int)(a5 - 1);
          do
          {
            if ( v27 > 0 )
            {
              v97 = a2;
              v98 = v27;
              do
              {
                v99 = (v97++)[(char *)v44 - v28 - (char *)a2];
                v97[(char *)v44 - (char *)a2 - 1] = *(v97 - 1) + (v99 >> 1);
                --v98;
              }
              while ( v98 );
            }
            SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
            a2 += v14;
            v44 = (__m128i *)((char *)v44 + v28);
            --v96;
          }
          while ( v96 );
          break;
        case 6:
          v47 = a5;
          if ( a5 == 1 )
            goto LABEL_127;
          v100 = (unsigned int)(a5 - 1);
          do
          {
            if ( v27 > 0 )
            {
              v101 = a2;
              v102 = v27;
              do
              {
                v101[(char *)v44 - (char *)a2] = *v101 + v101[(char *)v44 - v28 - (char *)a2];
                ++v101;
                --v102;
              }
              while ( v102 );
            }
            SR_VEC_PTR_LANES(128, v44, i8)[v27] = -1;
            a2 += v14;
            v44 = (__m128i *)((char *)v44 + v28);
            --v100;
          }
          while ( v100 );
          break;
        default:
          a2 = v46;
          break;
      }
      v47 = a5;
LABEL_127:
      v22 = a7;
      v18 = a1;
      if ( a7 == 16 )
      {
        v103 = a1[3] + v202;
        if ( v47 )
        {
          v104 = v47;
          do
          {
            *(_BYTE *)(v27 + v103 + 1) = -1;
            v103 += v28;
            --v104;
          }
          while ( v104 );
        }
LABEL_169:
        v22 = a7;
      }
      v8 = 0;
      v20 = a5;
      v26 = v189 + 1;
      v23 = v191;
      v189 = v26;
      if ( v26 >= a6 )
      {
        v15 = a4;
        v10 = a6;
LABEL_175:
        if ( v22 >= 8 )
        {
          if ( v22 == 16 )
          {
            v179 = (unsigned __int8 *)v18[3];
            v180 = v179;
            v181 = v10 * v20 * v15;
            if ( v181 )
            {
              v182 = v181;
              do
              {
                v183 = *v179;
                v179 += 2;
                v184 = v180[1];
                v180 += 2;
                *((_WORD *)v180 - 1) = v184 | (v183 << 8);
                --v182;
              }
              while ( v182 );
            }
          }
        }
        else if ( v10 )
        {
          v154 = (unsigned int)(v20 * v15);
          v155 = v20;
          v156 = v23;
          while ( 1 )
          {
            v157 = v18[3];
            v158 = v192 * v8;
            v159 = (char *)(v158 + v157 + v154 - v156);
            v160 = (_BYTE *)(v157 + v158);
            if ( a8 )
              v161 = 1;
            else
              v161 = byte_14026E768[v22];
            if ( v22 == 4 )
            {
              v162 = a5 * v185;
              if ( v194 >= 2 )
              {
                v163 = (unsigned __int64)(unsigned int)v194 >> 1;
                v162 = v194 - 2 * ((unsigned int)v194 >> 1);
                do
                {
                  *v160 = v161 * ((unsigned __int8)*v159 >> 4);
                  v164 = *v159++;
                  v160[1] = v161 * (v164 & 0xF);
                  v160 += 2;
                  --v163;
                }
                while ( v163 );
              }
              if ( v162 > 0 )
                *v160 = v161 * ((unsigned __int8)*v159 >> 4);
            }
            else
            {
              if ( v22 == 2 )
              {
                v165 = a5 * v185;
                if ( v194 >= 4 )
                {
                  v166 = (unsigned __int64)(unsigned int)v194 >> 2;
                  v165 = v194 - 4 * ((unsigned int)v194 >> 2);
                  do
                  {
                    *v160 = v161 * ((unsigned __int8)*v159 >> 6);
                    v160[1] = v161 * (((unsigned __int8)*v159 >> 4) & 3);
                    v160[2] = v161 * (((unsigned __int8)*v159 >> 2) & 3);
                    v167 = *v159++;
                    v160[3] = v161 * (v167 & 3);
                    v160 += 4;
                    --v166;
                  }
                  while ( v166 );
                }
                if ( v165 > 0 )
                  *v160++ = v161 * ((unsigned __int8)*v159 >> 6);
                if ( v165 > 1 )
                  *v160++ = v161 * (((unsigned __int8)*v159 >> 4) & 3);
                if ( v165 <= 2 )
                  goto LABEL_216;
                v168 = ((unsigned __int8)*v159 >> 2) & 3;
              }
              else
              {
                if ( v22 != 1 )
                  goto LABEL_216;
                v169 = a5 * v185;
                if ( v194 >= 8 )
                {
                  v170 = (unsigned __int64)(unsigned int)v194 >> 3;
                  v169 = v194 - 8 * ((unsigned int)v194 >> 3);
                  do
                  {
                    *v160 = v161 * ((unsigned __int8)*v159 >> 7);
                    v160[1] = v161 * ((*v159 & 0x40) != 0);
                    v160[2] = v161 * ((*v159 & 0x20) != 0);
                    v160[3] = v161 * ((*v159 & 0x10) != 0);
                    v160[4] = v161 * ((*v159 & 8) != 0);
                    v160[5] = v161 * ((*v159 & 4) != 0);
                    v160[6] = v161 * ((*v159 & 2) != 0);
                    v171 = *v159++;
                    v160[7] = v161 * (v171 & 1);
                    v160 += 8;
                    --v170;
                  }
                  while ( v170 );
                }
                if ( v169 > 0 )
                  *v160++ = v161 * ((unsigned __int8)*v159 >> 7);
                if ( v169 > 1 )
                  *v160++ = v161 * ((*v159 & 0x40) != 0);
                if ( v169 > 2 )
                  *v160++ = v161 * ((*v159 & 0x20) != 0);
                if ( v169 > 3 )
                  *v160++ = v161 * ((*v159 & 0x10) != 0);
                if ( v169 > 4 )
                  *v160++ = v161 * ((*v159 & 8) != 0);
                if ( v169 > 5 )
                  *v160++ = v161 * ((*v159 & 4) != 0);
                if ( v169 <= 6 )
                  goto LABEL_216;
                v168 = (*v159 & 2) != 0;
              }
              *v160 = v161 * v168;
            }
LABEL_216:
            if ( v185 != a4 )
            {
              v172 = v158 + a1[3];
              if ( v185 == 1 )
              {
                for ( i = v155 - 1; i >= 0; --i )
                {
                  *(_BYTE *)(v172 + 2 * i + 1) = -1;
                  *(_BYTE *)(v172 + 2 * i) = *(_BYTE *)(i + v172);
                }
              }
              else
              {
                if ( v185 != 3 )
                  crt_assert(
                    (char *)L"img_n == 3",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                    0x1275u);
                v174 = v155 - 1;
                if ( v155 - 1 >= 0 )
                {
                  v175 = (_BYTE *)(v155 + v172 + 2 * (v155 - 1));
                  v176 = (_BYTE *)(v172 + 4 * v174 + 2);
                  do
                  {
                    --v174;
                    v176[1] = -1;
                    v177 = v175[1];
                    v175 -= 3;
                    *v176 = v177;
                    v176 -= 4;
                    v176[3] = v175[3];
                    v176[2] = v175[2];
                  }
                  while ( v174 >= 0 );
                }
              }
            }
            v22 = a7;
            ++v8;
            v18 = a1;
            if ( v8 >= a6 )
              return 1;
          }
        }
        return 1;
      }
      v14 = v190;
      v19 = v185;
    }
    v105 = v14 * (v188 - 1);
    v187 = v105;
    v106 = v105;
    switch ( (int)v30 )
    {
      case 0:
        crt_memcpy(v44, v42, v105);
        break;
      case 1:
        if ( v105 > 0 )
        {
          v107 = v42;
          v108 = (char *)v44 - v27 - (char *)v42;
          v109 = (char *)v44 - (char *)v42;
          do
          {
            SR_VEC_PTR_LANES(128, v107, i8)[v109] = SR_VEC_PTR_LANES(128, v107, i8)[0] + SR_VEC_PTR_LANES(128, v107, i8)[v108];
            v107 = (     __m128i *)((char *)v107 + 1);
            --v106;
          }
          while ( v106 );
        }
        break;
      case 2:
        v110 = 0;
        if ( v105 >= 64 )
        {
          v111 = v105 - 1;
          v112 = &SR_VEC_PTR_LANES(128, v44, i8)[v111];
          if ( (v44 > (__m128i *)&SR_VEC_PTR_LANES(128, v42, i8)[v111] || v112 < (char *)v42)
            && (v44 > (__m128i *)&v43[v111] || v112 < v43) )
          {
            v113 = v43 - (char *)v42;
            v114 = v105 - (v105 & 0x3F);
            v115 = (char *)v44 - (char *)v42;
            v116 = v42 + 1;
            do
            {
              v117 = _mm_loadu_si128(v116 - 1);
              v110 += 64LL;
              v118 = _mm_loadu_si128((     __m128i *)((char *)v116 + v113 - 16));
              v119 = _mm_loadu_si128((     __m128i *)((char *)v116 + v113));
              v116 += 4;
              v120 = _mm_add_epi8(v118, v117);
              v121 = _mm_loadu_si128(v116 - 4);
              { __m128i sr_png_store = v120; __builtin_memcpy((void *)(((char *)v116 + v115 - 80)), &sr_png_store, 16); }
              v122 = _mm_add_epi8(v119, v121);
              v123 = _mm_loadu_si128(v116 - 3);
              v124 = _mm_loadu_si128((     __m128i *)((char *)v116 + v113 - 48));
              { __m128i sr_png_store = v122; __builtin_memcpy((void *)(((char *)v116 + v115 - 64)), &sr_png_store, 16); }
              v125 = _mm_add_epi8(v124, v123);
              v126 = _mm_loadu_si128(v116 - 2);
              v127 = _mm_loadu_si128((     __m128i *)((char *)v116 + v113 - 32));
              { __m128i sr_png_store = v125; __builtin_memcpy((void *)(((char *)v116 + v115 - 48)), &sr_png_store, 16); }
              { __m128i sr_png_store = _mm_add_epi8(v127, v126); __builtin_memcpy((void *)(((char *)&v116[-2] + v115)), &sr_png_store, 16); }
            }
            while ( v110 < v114 );
          }
        }
        if ( v110 < v106 )
        {
          v128 = v43 - (char *)v42;
          v129 = &v42[(unsigned __int64)v110 / 0x10];
          v130 = (char *)v44 - (char *)v42;
          v131 = v106 - v110;
          do
          {
            SR_VEC_PTR_LANES(128, v129, i8)[v130] = SR_VEC_PTR_LANES(128, v129, i8)[0] + SR_VEC_PTR_LANES(128, v129, i8)[v128];
            v129 = (     __m128i *)((char *)v129 + 1);
            --v131;
          }
          while ( v131 );
        }
        break;
      case 3:
        if ( v105 > 0 )
        {
          v132 = (char *)v42 - v43;
          v133 = (char *)v44 - v27 - v43;
          v134 = (char *)v44 - v43;
          do
          {
            v135 = (unsigned __int8)v43[v133];
            v136 = (unsigned __int8)*v43++;
            v43[v134 - 1] = v43[v132 - 1] + ((unsigned int)(v136 + v135) >> 1);
            --v106;
          }
          while ( v106 );
        }
        break;
      case 4:
        if ( v105 > 0 )
        {
          v137 = (__m128i *)((char *)v44 - v27);
          v138 = v43 - (char *)v44;
          v139 = &v43[v27 - (_QWORD)v44];
          v140 = &SR_VEC_PTR_LANES(128, v42, i8)[v27 - (_QWORD)v44];
          do
          {
            v141 = SR_VEC_PTR_LANES(128, v137, u8)[0];
            v142 = SR_VEC_PTR_LANES(128, v137, u8)[v138];
            v143 = SR_VEC_PTR_LANES(128, v137, u8)[(_QWORD)v139];
            v144 = abs32(v143 - v142);
            v145 = abs32(v141 - v142);
            v146 = abs32(v143 + v141 - v142 - v142);
            if ( v144 > v145 || v144 > v146 )
            {
              LOBYTE(v141) = SR_VEC_PTR_LANES(128, v137, i8)[v138];
              if ( v145 <= v146 )
                LOBYTE(v141) = SR_VEC_PTR_LANES(128, v137, i8)[(_QWORD)v139];
            }
            SR_VEC_PTR_LANES(128, v137, i8)[v27] = v141 + v140[(_QWORD)v137];
            v137 = (__m128i *)((char *)v137 + 1);
            --v106;
          }
          while ( v106 );
          v28 = v200;
        }
        break;
      case 5:
        if ( v105 > 0 )
        {
          v147 = v42;
          v148 = (char *)v44 - v27 - (char *)v42;
          v149 = (char *)v44 - (char *)v42;
          do
          {
            v150 = SR_VEC_PTR_LANES(128, v147, u8)[v148];
            v147 = (     __m128i *)((char *)v147 + 1);
            SR_VEC_PTR_LANES(128, v147, i8)[v149 - 1] = SR_VEC_LANES(128, v147[-1], i8)[15] + (v150 >> 1);
            --v106;
          }
          while ( v106 );
        }
        break;
      case 6:
        if ( v105 > 0 )
        {
          v151 = v42;
          v152 = (char *)v44 - v27 - (char *)v42;
          v153 = (char *)v44 - (char *)v42;
          do
          {
            SR_VEC_PTR_LANES(128, v151, i8)[v153] = SR_VEC_PTR_LANES(128, v151, i8)[0] + SR_VEC_PTR_LANES(128, v151, i8)[v152];
            v151 = (     __m128i *)((char *)v151 + 1);
            --v106;
          }
          while ( v106 );
        }
        break;
      default:
        break;
    }
    v18 = a1;
    a2 = &SR_VEC_PTR_LANES(128, v42, u8)[v187];
    goto LABEL_169;
  }
  v24 = sr_client_static_tls();
  v25 = "not enough pixels";
LABEL_236:
  *(_QWORD *)(v24 + 16) = (uint64)(uintptr_t)(v25);
  return 0;
}
#undef v185
#undef v186
#undef v187
#undef v188
#undef v189
#undef v190
#undef v191
#undef v192
#undef v193
#undef v194
#undef v195
#undef v196
#undef v197
#undef v198
#undef v199
#undef v200
#undef v201
#undef v202

// 14015EB9E: conditional instruction was optimized away because r13d.4>=40
// 14015EFFB: conditional instruction was optimized away because r10d.4>=40
// 14015EB98: mask 0x8000003F is shortened because r13d.4 <= 0x7FFFFFFF
// 14015EFF5: mask 0x8000003F is shortened because r10d.4 <= 0x7FFFFFFF

//----- (000000014015F820) ----------------------------------------------------
__int64            sub_14015F820(__int64 *a1)
{
  __int64 result;
  _BYTE *v2;
  unsigned int v3;
  int v4;
  __int64 v5;
  char v6;
  unsigned __int8 *v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  int v11;
  unsigned int v12;
  __int64 v13;
  char v14;

  result = *a1;
  v2 = (_BYTE *)a1[3];
  v3 = *(_DWORD *)*a1 * *(_DWORD *)(*a1 + 4);
  v4 = *(_DWORD *)(*a1 + 12);
  if ( v4 == 3 )
  {
    if ( v3 )
    {
      v5 = v3;
      do
      {
        v6 = *v2;
        result = (unsigned __int8)v2[2];
        *v2 = result;
        v2[2] = v6;
        v2 += 3;
        --v5;
      }
      while ( v5 );
    }
  }
  else
  {
    if ( v4 != 4 )
      result = crt_assert(
                 (char *)L"s->img_out_n == 4",
                 (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                 0x132Du);
    if ( v3 )
    {
      if ( g_144980DB8 )
      {
        v7 = v2 + 2;
        v8 = v3;
        do
        {
          v9 = v7[1];
          v10 = *(v7 - 2);
          v11 = *v7;
          if ( (_BYTE)v9 )
          {
            *(v7 - 1) = ((v9 >> 1) + 255 * *(v7 - 1)) / v9;
            v12 = ((v9 >> 1) + 255 * v10) / v9;
            result = ((v9 >> 1) + 255 * v11) / v9;
          }
          else
          {
            LOBYTE(v12) = *(v7 - 2);
            result = (unsigned __int8)v11;
          }
          *(v7 - 2) = result;
          *v7 = v12;
          v7 += 4;
          --v8;
        }
        while ( v8 );
      }
      else
      {
        v13 = v3;
        do
        {
          v14 = *v2;
          result = (unsigned __int8)v2[2];
          *v2 = result;
          v2[2] = v14;
          v2 += 4;
          --v13;
        }
        while ( v13 );
      }
    }
  }
  return result;
}

//----- (000000014015F960) ----------------------------------------------------
_BOOL8            sub_14015F960(__int64 *a1, int a2)
{
  int v2;
  int v6;
  __int64 v7;

  v2 = 0;
  *((_DWORD *)a1 + 4627) = -1;
  *((_DWORD *)a1 + 4626) = 0;
  *((_BYTE *)a1 + 18472) = -1;
  if ( sub_140160790(a1) != -40 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOI");
    return 0;
  }
  if ( a2 == 1 )
    return 1;
  v6 = (unsigned __int8)sub_140160790(a1);
  if ( v6 == 192 )
  {
LABEL_14:
    LOBYTE(v2) = v6 == 194;
    *((_DWORD *)a1 + 4620) = v2;
    return (unsigned int)sub_14016AEA0((__int64)a1, a2) != 0;
  }
  while ( 1 )
  {
    if ( (unsigned int)(v6 - 193) <= 1 )
      goto LABEL_14;
    if ( !(unsigned int)sub_14016BB40(a1, v6) )
      return 0;
    v6 = (unsigned __int8)sub_140160790(a1);
    if ( v6 == 255 )
      break;
LABEL_13:
    if ( v6 == 192 )
      goto LABEL_14;
  }
  while ( 1 )
  {
    v7 = *a1;
    if ( !*(_QWORD *)(*a1 + 16) )
      break;
    if ( (*(unsigned int (           **)(_QWORD))(v7 + 32))(*(_QWORD *)(v7 + 40)) )
    {
      if ( !*(_DWORD *)(v7 + 48) )
        goto LABEL_17;
      break;
    }
LABEL_12:
    v6 = (unsigned __int8)sub_140160790(a1);
    if ( v6 != 255 )
      goto LABEL_13;
  }
  if ( *(_QWORD *)(v7 + 192) < *(_QWORD *)(v7 + 200) )
    goto LABEL_12;
LABEL_17:
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOF");
  return 0;
}

//----- (000000014015FAD0) ----------------------------------------------------
__int64            sub_14015FAD0(_QWORD *a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  char *v6;
  int v7;
  char v8;
  __int64 v9;
  char *v10;
  char v11;
  char *v12;
  char v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int8 *v16;
  unsigned __int8 v17;
  unsigned __int8 *v18;
  int v19;
  unsigned __int8 v20;
  unsigned __int8 *v21;
  __int64 v22;
  int v23;
  unsigned __int64 v24;
  unsigned __int8 *v25;
  unsigned __int8 v26;
  unsigned __int8 *v27;
  int v28;
  unsigned __int8 v29;
  unsigned __int8 *v30;
  int v31;
  _QWORD *v32;
  int v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char *v40;
  __int16 v41;
  __int16 v42;

  v1 = 0;
  a1[2267] = 0;
  a1[2268] = 0;
  a1[2279] = 0;
  a1[2280] = 0;
  a1[2291] = 0;
  a1[2292] = 0;
  a1[2303] = 0;
  a1[2304] = 0;
  *((_DWORD *)a1 + 4634) = 0;
  if ( !sub_14015F960(a1, 0) )
    return 0;
  v3 = (unsigned __int8)sub_140160790(a1);
  if ( (unsigned __int8)v3 == 217 )
    goto LABEL_47;
  do
  {
    if ( v3 != 218 )
    {
      if ( v3 != 220 )
      {
        if ( (unsigned int)sub_14016BB40(a1, v3) )
          goto LABEL_46;
        return 0;
      }
      v14 = *a1;
      v15 = *(_QWORD *)(*a1 + 200LL);
      v16 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)v16 >= v15 )
      {
        if ( !*(_DWORD *)(v14 + 48) )
        {
          v19 = 0;
          goto LABEL_30;
        }
        stbi_refill_buffer(*a1);
        v16 = *(unsigned __int8 **)(v14 + 192);
        v15 = *(_QWORD *)(v14 + 200);
      }
      v17 = *v16;
      v18 = v16 + 1;
      *(_QWORD *)(v14 + 192) = (uint64)(uintptr_t)(v18);
      v19 = v17;
      if ( (unsigned __int64)v18 < v15 )
      {
        v20 = *v18;
        *(_QWORD *)(v14 + 192) = (uint64)(uintptr_t)(v18 + 1);
        goto LABEL_33;
      }
LABEL_30:
      if ( *(_DWORD *)(v14 + 48) )
      {
        stbi_refill_buffer(v14);
        v21 = *(unsigned __int8 **)(v14 + 192);
        v20 = *v21;
        *(_QWORD *)(v14 + 192) = (uint64)(uintptr_t)(v21 + 1);
      }
      else
      {
        v20 = 0;
      }
LABEL_33:
      v22 = *a1;
      v23 = (v19 << 8) + v20;
      v24 = *(_QWORD *)(*a1 + 200LL);
      v25 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)v25 >= v24 )
      {
        if ( !*(_DWORD *)(v22 + 48) )
        {
          v28 = 0;
          goto LABEL_39;
        }
        stbi_refill_buffer(*a1);
        v25 = *(unsigned __int8 **)(v22 + 192);
        v24 = *(_QWORD *)(v22 + 200);
      }
      v26 = *v25;
      v27 = v25 + 1;
      *(_QWORD *)(v22 + 192) = (uint64)(uintptr_t)(v27);
      v28 = v26;
      if ( (unsigned __int64)v27 < v24 )
      {
        v29 = *v27;
        *(_QWORD *)(v22 + 192) = (uint64)(uintptr_t)(v27 + 1);
LABEL_42:
        if ( v23 != 4 )
        {
          *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DNL len");
          return 0;
        }
        if ( v29 + (v28 << 8) == *(_DWORD *)(*a1 + 4LL) )
        {
          v1 = 0;
          goto LABEL_46;
        }
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DNL height");
        return 0;
      }
LABEL_39:
      if ( *(_DWORD *)(v22 + 48) )
      {
        stbi_refill_buffer(v22);
        v30 = *(unsigned __int8 **)(v22 + 192);
        v29 = *v30;
        *(_QWORD *)(v22 + 192) = (uint64)(uintptr_t)(v30 + 1);
      }
      else
      {
        v29 = 0;
      }
      goto LABEL_42;
    }
    if ( !(unsigned int)sub_14016C320(a1) || !(unsigned int)sub_140167230((__int64)a1) )
      return 0;
    if ( *((_BYTE *)a1 + 18472) != 0xFF )
      goto LABEL_46;
    while ( 1 )
    {
      v4 = *a1;
      if ( *(_QWORD *)(*a1 + 16LL) )
      {
        if ( !(*(unsigned int (           **)(_QWORD))(v4 + 32))(*(_QWORD *)(v4 + 40)) )
          goto LABEL_11;
        if ( !*(_DWORD *)(v4 + 48) )
          goto LABEL_46;
      }
      if ( *(_QWORD *)(v4 + 192) >= *(_QWORD *)(v4 + 200) )
        goto LABEL_46;
LABEL_11:
      v5 = *a1;
      v6 = *(char **)(*a1 + 192LL);
      if ( (unsigned __int64)v6 < *(_QWORD *)(*a1 + 200LL) )
        goto LABEL_17;
      if ( *(_DWORD *)(v5 + 48) )
      {
        v7 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(v5 + 16))(
               *(_QWORD *)(v5 + 40),
               v5 + 56,
               *(unsigned int *)(v5 + 52));
        *(_DWORD *)(v5 + 184) += *(_DWORD *)(v5 + 192) - *(_DWORD *)(v5 + 208);
        *(_QWORD *)(v5 + 192) = v5 + 56;
        if ( v7 )
        {
          *(_QWORD *)(v5 + 200) = v7 + v5 + 56;
        }
        else
        {
          *(_DWORD *)(v5 + 48) = 0;
          *(_QWORD *)(v5 + 200) = v5 + 57;
          *(_BYTE *)(v5 + 56) = 0;
        }
        v6 = *(char **)(v5 + 192);
LABEL_17:
        v8 = *v6;
        *(_QWORD *)(v5 + 192) = (uint64)(uintptr_t)(v6 + 1);
        if ( v8 == -1 )
          break;
      }
    }
    v9 = *a1;
    v10 = *(char **)(*a1 + 192LL);
    if ( (unsigned __int64)v10 >= *(_QWORD *)(*a1 + 200LL) )
    {
      if ( *(_DWORD *)(v9 + 48) )
      {
        stbi_refill_buffer(*a1);
        v12 = *(char **)(v9 + 192);
        v13 = *v12;
        *(_QWORD *)(v9 + 192) = (uint64)(uintptr_t)(v12 + 1);
        *((_BYTE *)a1 + 18472) = v13;
      }
      else
      {
        *((_BYTE *)a1 + 18472) = 0;
      }
    }
    else
    {
      v11 = *v10;
      *(_QWORD *)(v9 + 192) = (uint64)(uintptr_t)(v10 + 1);
      *((_BYTE *)a1 + 18472) = v11;
    }
LABEL_46:
    v3 = (unsigned __int8)sub_140160790(a1);
  }
  while ( (unsigned __int8)v3 != 217 );
LABEL_47:
  if ( *((_DWORD *)a1 + 4620) )
  {
    v31 = 0;
    if ( *(int *)(*a1 + 8LL) > 0 )
    {
      v32 = a1 + 2270;
      do
      {
        v33 = 0;
        v34 = (*((_DWORD *)v32 - 13) + 7) >> 3;
        v35 = (*((_DWORD *)v32 - 12) + 7) >> 3;
        if ( v35 > 0 )
        {
          do
          {
            v36 = 0;
            if ( v34 > 0 )
            {
              do
              {
                v37 = 16;
                v38 = *v32 + 2LL * ((v36 + v33 * *((_DWORD *)v32 + 2)) << 6);
                v39 = v38 + 2;
                v40 = (char *)&a1[16 * (__int64)*((int *)v32 - 17) + 1681] - v38;
                do
                {
                  v41 = *(_WORD *)&v40[v39 - 2];
                  v42 = *(_WORD *)(v39 - 2);
                  v39 += 8;
                  *(_WORD *)(v39 - 10) = v41 * v42;
                  *(_WORD *)(v39 - 8) *= *(_WORD *)&v40[v39 - 8];
                  *(_WORD *)(v39 - 6) *= *(_WORD *)&v40[v39 - 6];
                  *(_WORD *)(v39 - 4) *= *(_WORD *)&v40[v39 - 4];
                  --v37;
                }
                while ( v37 );
                ((void (           *)(__int64))a1[2318])(*(v32 - 4) + v1 + 8 * v33 * *((_DWORD *)v32 - 11));
                ++v36;
                v1 += 8;
              }
              while ( v36 < v34 );
              v1 = 0;
            }
            ++v33;
          }
          while ( v33 < v35 );
        }
        ++v31;
        v32 += 12;
      }
      while ( v31 < *(_DWORD *)(*a1 + 8LL) );
    }
  }
  return 1;
}

//----- (000000014015FFC0) ----------------------------------------------------
char *           sub_14015FFC0(int **a1, int *a2, _DWORD *a3, _DWORD *a4, unsigned int a5, int *a6)
{
  char *v10;
  int v11;
  int *v12;
  int v13;
  int v14;
  int v15;
  char *v16;
  int *v17;
  int *v18;
  __int64 v20;
       char *v21;

  v10 = nullptr;
  if ( a5 > 4 )
  {
    v20 = sr_client_static_tls();
    v21 = "bad req_comp";
    goto LABEL_17;
  }
  if ( !(unsigned int)sub_140167D10((__int64)a1, 0, a5) )
  {
LABEL_14:
    free(a1[3]);
    v17 = a1[2];
    a1[3] = nullptr;
    free(v17);
    v18 = a1[1];
    a1[2] = nullptr;
    free(v18);
    a1[1] = nullptr;
    return v10;
  }
  v11 = *((_DWORD *)a1 + 8);
  if ( v11 <= 8 )
  {
    v11 = 8;
    goto LABEL_6;
  }
  if ( v11 != 16 )
  {
    v20 = sr_client_static_tls();
    v21 = "bad bits_per_channel";
LABEL_17:
    *(_QWORD *)(v20 + 16) = (uint64)(uintptr_t)(v21);
    return nullptr;
  }
LABEL_6:
  *a6 = v11;
  v10 = (char *)a1[3];
  a1[3] = nullptr;
  if ( !a5
    || (v12 = *a1, v13 = (*a1)[3], a5 == v13)
    || ((v14 = v12[1], v15 = *v12, *a6 != 8)
      ? (v16 = sub_14015DD00(v10, v13, a5, v15, v14))
      : (v16 = sub_14015D7E0(v10, v13, a5, v15, v14)),
        v10 = v16,
        (*a1)[3] = a5,
        v16) )
  {
    *a2 = **a1;
    *a3 = (*a1)[1];
    if ( a4 )
      *a4 = (*a1)[2];
    goto LABEL_14;
  }
  return nullptr;
}
//----- (0000000140160180) ----------------------------------------------------
__int64            sub_140160180(void **a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int8 *v5;
  int v8;
  __int64 v9;
  void *v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v5 = (unsigned __int8 *)a1[3];
  v8 = *(_DWORD *)*a1 * *((_DWORD *)*a1 + 1);
  if ( v8 < 0
    || a4 < 0
    || a4 && v8 > (int)(0x7FFFFFFFu / a4)
    || (v9 = sr_path_malloc(a4 * v8), (v10 = (void *)v9) == nullptr) )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  else
  {
    if ( v8 )
    {
      v11 = (unsigned int)v8;
      v12 = v9 + 2;
      if ( a4 == 3 )
      {
        do
        {
          v13 = *v5;
          v12 += 3;
          ++v5;
          *(_BYTE *)(v12 - 5) = *(_BYTE *)(a2 + 4 * v13);
          *(_BYTE *)(v12 - 4) = *(_BYTE *)(a2 + 4 * v13 + 1);
          *(_BYTE *)(v12 - 3) = *(_BYTE *)(a2 + 4 * v13 + 2);
          --v11;
        }
        while ( v11 );
      }
      else
      {
        do
        {
          v14 = *v5;
          v12 += 4;
          ++v5;
          *(_BYTE *)(v12 - 6) = *(_BYTE *)(a2 + 4 * v14);
          *(_BYTE *)(v12 - 5) = *(_BYTE *)(a2 + 4 * v14 + 1);
          *(_BYTE *)(v12 - 4) = *(_BYTE *)(a2 + 4 * v14 + 2);
          *(_BYTE *)(v12 - 3) = *(_BYTE *)(a2 + 4 * v14 + 3);
          --v11;
        }
        while ( v11 );
      }
    }
    free(a1[3]);
    a1[3] = v10;
    return 1;
  }
}

//----- (00000001401602C0) ----------------------------------------------------
__int64            sub_1401602C0(__int64 a1, int a2)
{
  __int64 v2;
  int v4;
  int v5;
  int v6;
  int v7;

  v2 = a2;
  if ( *(_DWORD *)(a1 + 18468) < a2 )
    sub_140161D20((_QWORD *)a1);
  v4 = *(_DWORD *)(a1 + 18464);
  v5 = __ROL4__(v4, v2);
  if ( (unsigned int)v2 > 0x10 )
    return 0;
  *(_DWORD *)(a1 + 18468) -= v2;
  v6 = dword_14026FC40[v2] & ~(v4 >> 31);
  v7 = v5 & dword_14026FBF0[v2];
  *(_DWORD *)(a1 + 18464) = v5 & ~dword_14026FBF0[v2];
  return (unsigned int)(v7 + v6);
}

//----- (0000000140160350) ----------------------------------------------------
__int64            sub_140160350(__int64 a1)
{
  unsigned int v1;
  __int64 result;
  int v3;
  unsigned __int64 v4;
  unsigned __int8 *v5;
  unsigned __int8 v6;
  int v7;

  v1 = *(_DWORD *)(a1 + 20);
  result = a1;
  v3 = *(_DWORD *)(a1 + 16);
  if ( v1 >= 1 << v3 )
  {
LABEL_8:
    *(_QWORD *)result = *(_QWORD *)(result + 8);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 8);
    while ( 1 )
    {
      v5 = *(unsigned __int8 **)result;
      if ( *(_QWORD *)result < v4 )
      {
        v6 = *v5;
        *(_QWORD *)result = (uint64)(uintptr_t)(v5 + 1);
      }
      else
      {
        v6 = 0;
      }
      v7 = v6 << v3;
      v3 += 8;
      v1 |= v7;
      *(_DWORD *)(result + 16) = v3;
      *(_DWORD *)(result + 20) = v1;
      if ( v3 > 24 )
        break;
      if ( v1 >= 1 << v3 )
        goto LABEL_8;
    }
  }
  return result;
}

//----- (00000001401603C0) ----------------------------------------------------
void sub_1401603C0(__m128i *a1, unsigned int *a2, unsigned int *a3, int *a4, int a5)
{
  __int64 v6;
  __int64 result;
  int v8;

  v6 = sr_client_static_tls();
  if ( *(_DWORD *)(v6 + 8) )
    result = *(unsigned int *)(v6 + 12);
  else
    result = g_144980DAC;
  if ( (_DWORD)result && a1 )
  {
    v8 = a5;
    if ( !a5 )
      v8 = *a4;
    sub_14016F470(a1, *a2, *a3, 4 * v8);
    return;
  }
  return;
}

//----- (0000000140160430) ----------------------------------------------------
__int64            sub_140160430(char *a1, char *a2)
{
  int v2;
  __int64 v3;
  __int64 v5;

  v2 = sub_14020B8E4(&v5, a1, a2);
  v3 = v5;
  if ( v2 )
    return 0;
  return v3;
}

//----- (0000000140160460) ----------------------------------------------------
__int64            sub_140160460(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4;
  __int64 v5;
  void *v6;
  void *v7;

  if ( a2 > 0 )
  {
    v4 = a1 + 18136;
    v5 = (unsigned int)a2;
    do
    {
      if ( *(_QWORD *)v4 )
      {
        free(*(void **)v4);
        *(_QWORD *)v4 = 0;
        *(_QWORD *)(v4 - 8) = 0;
      }
      v6 = *(void **)(v4 + 8);
      if ( v6 )
      {
        free(v6);
        *(_QWORD *)(v4 + 8) = 0;
        *(_QWORD *)(v4 + 24) = 0;
      }
      v7 = *(void **)(v4 + 16);
      if ( v7 )
      {
        free(v7);
        *(_QWORD *)(v4 + 16) = 0;
      }
      v4 += 96;
      --v5;
    }
    while ( v5 );
  }
  return a3;
}

//----- (00000001401604F0) ----------------------------------------------------
__int64            sub_1401604F0(__int64 a1)
{
  unsigned __int8 *v1;
  unsigned __int64 v3;
  unsigned __int8 v4;
  unsigned __int8 *v5;
  int v6;
  unsigned __int8 v7;
  unsigned __int8 *v9;
  unsigned __int8 v10;

  v1 = *(unsigned __int8 **)(a1 + 192);
  v3 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v1 >= v3 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v6 = 0;
      goto LABEL_7;
    }
    stbi_refill_buffer(a1);
    v1 = *(unsigned __int8 **)(a1 + 192);
    v3 = *(_QWORD *)(a1 + 200);
  }
  v4 = *v1;
  v5 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5);
  v6 = v4;
  if ( (unsigned __int64)v5 < v3 )
  {
    v7 = *v5;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
    return (v4 << 8) + (unsigned int)v7;
  }
LABEL_7:
  if ( !*(_DWORD *)(a1 + 48) )
    return (unsigned int)(v6 << 8);
  stbi_refill_buffer(a1);
  v9 = *(unsigned __int8 **)(a1 + 192);
  v10 = *v9;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v9 + 1);
  return (v6 << 8) + (unsigned int)v10;
}

//----- (00000001401605B0) ----------------------------------------------------
__int64            sub_1401605B0(__int64 a1)
{
  unsigned __int8 *v1;
  unsigned __int64 v3;
  unsigned __int8 v4;
  unsigned __int8 *v5;
  unsigned int v6;
  unsigned __int8 v7;
  unsigned __int8 *v9;
  unsigned __int8 v10;

  v1 = *(unsigned __int8 **)(a1 + 192);
  v3 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v1 >= v3 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v6 = 0;
      goto LABEL_7;
    }
    stbi_refill_buffer(a1);
    v1 = *(unsigned __int8 **)(a1 + 192);
    v3 = *(_QWORD *)(a1 + 200);
  }
  v4 = *v1;
  v5 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5);
  v6 = v4;
  if ( (unsigned __int64)v5 < v3 )
  {
    v7 = *v5;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
    return v4 + (v7 << 8);
  }
LABEL_7:
  if ( !*(_DWORD *)(a1 + 48) )
    return v6;
  stbi_refill_buffer(a1);
  v9 = *(unsigned __int8 **)(a1 + 192);
  v10 = *v9;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v9 + 1);
  return v6 + (v10 << 8);
}

//----- (0000000140160670) ----------------------------------------------------
__int64            sub_140160670(__int64 a1)
{
  int v2;

  v2 = sub_1401604F0(a1);
  return (v2 << 16) + (unsigned int)sub_1401604F0(a1);
}

//----- (00000001401606A0) ----------------------------------------------------
__int64            sub_1401606A0(__int64 a1)
{
  int v2;

  v2 = sub_1401605B0(a1);
  return v2 + ((unsigned int)sub_1401605B0(a1) << 16);
}

//----- (00000001401606D0) ----------------------------------------------------
char            sub_1401606D0(__int64 a1)
{
  char *v1;
  char result;
  char *v4;

  v1 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v4 = *(char **)(a1 + 192);
      result = *v4;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4 + 1);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    result = *v1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v1 + 1);
  }
  return result;
}

//----- (0000000140160730) ----------------------------------------------------
unsigned __int64            sub_140160730(__int64 a1)
{
  int v2;
  unsigned int v3;
  int v4;

  v2 = sub_1401604F0(a1);
  v3 = sub_1401604F0(a1) + (v2 << 16);
  v4 = sub_1401604F0(a1);
  return v3 | ((unsigned __int64)((v4 << 16) + (unsigned int)sub_1401604F0(a1)) << 32);
}

//----- (0000000140160790) ----------------------------------------------------
char            sub_140160790(_BYTE *a1)
{
  char result;
  __int64 v3;
  char *v4;
  char v5;
  __int64 v6;
  char *v7;
  char v8;

  result = a1[18472];
  if ( result != -1 )
  {
    a1[18472] = -1;
    return result;
  }
  v3 = *(_QWORD *)a1;
  v4 = *(char **)(*(_QWORD *)a1 + 192LL);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(*(_QWORD *)a1 + 200LL) )
  {
    if ( !*(_DWORD *)(v3 + 48) )
      return -1;
    stbi_refill_buffer(*(_QWORD *)a1);
    v4 = *(char **)(v3 + 192);
  }
  v5 = *v4;
  *(_QWORD *)(v3 + 192) = (uint64)(uintptr_t)(v4 + 1);
  if ( v5 == -1 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)a1;
      v7 = *(char **)(*(_QWORD *)a1 + 192LL);
      if ( (unsigned __int64)v7 >= *(_QWORD *)(*(_QWORD *)a1 + 200LL) )
      {
        if ( !*(_DWORD *)(v6 + 48) )
          return 0;
        stbi_refill_buffer(*(_QWORD *)a1);
        v7 = *(char **)(v6 + 192);
      }
      v8 = *v7;
      *(_QWORD *)(v6 + 192) = (uint64)(uintptr_t)(v7 + 1);
      if ( v8 != -1 )
        return v8;
    }
  }
  return -1;
}

//----- (0000000140160860) ----------------------------------------------------
_BOOL8            sub_140160860(__int64 a1, __m128i *a2, int a3)
{
  __int64 v4;
  int v6;
  unsigned int v7;
  int v8;
       __m128i *v10;

  v4 = a3;
  if ( *(_QWORD *)(a1 + 16) && (v6 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v6 < a3) )
  {
    crt_memcpy(a2, *(     __m128i **)(a1 + 192), v6);
    v7 = v4 - v6;
    v8 = (*(__int64 (           **)(_QWORD, __int8 *, _QWORD))(a1 + 16))(*(_QWORD *)(a1 + 40), &SR_VEC_PTR_LANES(128, a2, i8)[v6], v7);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    return v8 == v7;
  }
  else
  {
    v10 = *(     __m128i **)(a1 + 192);
    if ( (unsigned __int64)SR_VEC_PTR_LANES(128, v10, u64) + a3 > *(_QWORD *)(a1 + 200) )
    {
      return 0;
    }
    else
    {
      crt_memcpy(a2, v10, a3);
      *(_QWORD *)(a1 + 192) += v4;
      return 1;
    }
  }
}

//----- (0000000140160930) ----------------------------------------------------
__int64            sub_140160930(__int64 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char *v4;
  char v9;
  char *v10;
  char v11;
  char *v12;
  char v13;
  char *v14;
  char v15;
  char *v16;
  char v17;
  char *v18;
  char v19;
  _QWORD *v20;
  unsigned __int8 *v21;
  unsigned __int8 v22;
  unsigned __int8 *v23;
  unsigned __int8 *v24;
  unsigned __int8 v25;
  unsigned __int8 *v26;
  unsigned __int8 *v27;
  unsigned __int8 v28;
  unsigned __int8 *v29;
  bool v30;
  int v31;

  v4 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    stbi_refill_buffer(a1);
    v4 = *(char **)(a1 + 192);
  }
  v9 = *v4;
  v10 = v4 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v10);
  if ( v9 != 71 )
    goto LABEL_49;
  if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    stbi_refill_buffer(a1);
    v10 = *(char **)(a1 + 192);
  }
  v11 = *v10;
  v12 = v10 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12);
  if ( v11 != 73 )
    goto LABEL_49;
  if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    stbi_refill_buffer(a1);
    v12 = *(char **)(a1 + 192);
  }
  v13 = *v12;
  v14 = v12 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v14);
  if ( v13 != 70 )
    goto LABEL_49;
  if ( (unsigned __int64)v14 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    stbi_refill_buffer(a1);
    v14 = *(char **)(a1 + 192);
  }
  v15 = *v14;
  v16 = v14 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v16);
  if ( v15 != 56 )
    goto LABEL_49;
  if ( (unsigned __int64)v16 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_49;
    stbi_refill_buffer(a1);
    v16 = *(char **)(a1 + 192);
  }
  v17 = *v16;
  v18 = v16 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v18);
  if ( ((v17 - 55) & 0xFD) != 0 )
    goto LABEL_49;
  if ( (unsigned __int64)v18 < *(_QWORD *)(a1 + 200) )
    goto LABEL_24;
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_49:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not GIF");
    return 0;
  }
  stbi_refill_buffer(a1);
  v18 = *(char **)(a1 + 192);
LABEL_24:
  v19 = *v18;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v18 + 1);
  if ( v19 != 97 )
    goto LABEL_49;
  v20 = (_QWORD *)(sr_client_static_tls() + 16LL);
  *v20 = (uint64)(uintptr_t)(Parameters);
  *a2 = sub_1401605B0(a1);
  a2[1] = sub_1401605B0(a1);
  v21 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v21 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v23 = *(unsigned __int8 **)(a1 + 192);
      v22 = *v23;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v23 + 1);
    }
    else
    {
      v22 = 0;
    }
  }
  else
  {
    v22 = *v21;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v21 + 1);
  }
  a2[8] = v22;
  v24 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v24 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v26 = *(unsigned __int8 **)(a1 + 192);
      v25 = *v26;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v26 + 1);
    }
    else
    {
      v25 = 0;
    }
  }
  else
  {
    v25 = *v24;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v24 + 1);
  }
  a2[9] = v25;
  v27 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v27 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v29 = *(unsigned __int8 **)(a1 + 192);
      v28 = *v29;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v29 + 1);
    }
    else
    {
      v28 = 0;
    }
  }
  else
  {
    v28 = *v27;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v27 + 1);
  }
  v30 = *a2 <= 0x1000000;
  a2[10] = v28;
  a2[11] = -1;
  if ( v30 && (int)a2[1] <= 0x1000000 )
  {
    if ( a3 )
      *a3 = 4;
    if ( !a4 )
    {
      v31 = a2[8];
      if ( (v31 & 0x80u) != 0 )
        sub_140161A30(a1, (__int64)(a2 + 13), 2 << (v31 & 7), -1);
    }
    return 1;
  }
  else
  {
    *v20 = (uint64)(uintptr_t)("too large");
    return 0;
  }
}

//----- (0000000140160CA0) ----------------------------------------------------
__int64            sub_140160CA0(_QWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v8;

  v8 = (_DWORD *)sr_path_malloc(34928);
  if ( (unsigned int)sub_140160930((__int64)a1, v8, a4, 1) )
  {
    if ( a2 )
      *a2 = *v8;
    if ( a3 )
      *a3 = v8[1];
    free(v8);
    return 1;
  }
  else
  {
    free(v8);
    a1[24] = a1[26];
    a1[25] = a1[27];
    return 0;
  }
}

//----- (0000000140160D50) ----------------------------------------------------
__int64            sub_140160D50(_QWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v8;

  v8 = (_DWORD *)sr_path_malloc(34928);
  if ( (unsigned int)sub_140160930((__int64)a1, v8, a4, 1) )
  {
    if ( a2 )
      *a2 = *v8;
    if ( a3 )
      *a3 = v8[1];
    free(v8);
    return 1;
  }
  else
  {
    free(v8);
    a1[24] = a1[26];
    a1[25] = a1[27];
    return 0;
  }
}

//----- (0000000140160E00) ----------------------------------------------------
__int64            sub_140160E00(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4)
{
  unsigned int v4;
  __int64 v9;
  char *v10;
  int v12;
  int v13;
  __int64 v14;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140160E00[35040];
#define v15 (*(int (*)[2])(void *)(sr_frame_140160E00 + 0)) /* [rsp+10h] */
#define Block (*(void * (*))(void *)(sr_frame_140160E00 + 8)) /* [rsp+18h] */
#define v17 (*(void * (*))(void *)(sr_frame_140160E00 + 16)) /* [rsp+20h] */
#define v18 (*(void * (*))(void *)(sr_frame_140160E00 + 24)) /* [rsp+28h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_140160E00 + 34928)) /* [rsp+8880h] */
#define v20 (*(unsigned int (*))(void *)(sr_frame_140160E00 + 35024)) /* [rsp+88E0h] */

  v4 = v20;
  crt_memset((void *)(uintptr_t)(v15), 0, 0x8870u);
  v9 = sub_140160EF0(a1, v15, a4, v4, 0);
  v10 = (char *)v9;
  if ( v9 == a1 || !v9 )
  {
    v10 = nullptr; /* 0x140160E70: xor ebx, ebx */
    if ( Block )
      free(Block);
  }
  else
  {
    v12 = v15[0];
    v13 = v15[1];
    *a2 = v15[0];
    *a3 = v13;
    if ( (v4 & 0xFFFFFFFB) != 0 )
      v10 = (char *)sub_14015D7E0(v10, 4, v4, v12, v13); /* 0x140160EE7: mov rbx, rax */
  }
  free(v18);
  free(v17);
  return (__int64)v10; /* 0x140160E95: mov rax, rbx */
}
#undef v15
#undef Block
#undef v17
#undef v18
#undef v19
#undef v20

//----- (0000000140160EF0) ----------------------------------------------------
__int64            sub_140160EF0(__int64 a1, int *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  __int64 v13;
  _WORD *v14;
  __int64 v15;
       char *v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 i;
  __int64 j;
  char *v22;
  int v23;
  char v24;
  unsigned __int8 *v25;
  int v26;
  unsigned __int8 v27;
  unsigned __int8 *v28;
  unsigned __int8 *v29;
  unsigned __int64 v30;
  unsigned __int8 v31;
  unsigned __int8 *v32;
  __int64 v33;
  unsigned __int8 v34;
  unsigned __int8 *v35;
  unsigned __int64 v36;
  unsigned __int8 *v37;
  unsigned __int8 v38;
  unsigned __int8 *v39;
  int v40;
  unsigned __int8 v41;
  unsigned __int8 *v42;
  __int64 v43;
  unsigned __int8 *v44;
  unsigned __int8 v45;
  unsigned __int8 *v46;
  unsigned __int64 v47;
  unsigned __int8 *v48;
  unsigned __int8 v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  unsigned __int8 *v54;
  __int64 v55;
  int v56;
  __int64 v57;
  unsigned __int64 v59;
  unsigned __int8 v60;
  unsigned __int8 *v61;
  int v62;
  int v63;
  unsigned __int8 v64;
  unsigned __int8 *v65;
  unsigned __int8 v66;
  unsigned __int8 *v67;
  int v68;
  int v69;
  unsigned __int8 v70;
  unsigned __int8 *v71;
  unsigned __int8 v72;
  unsigned __int8 *v73;
  int v74;
  int v75;
  int v76;
  unsigned __int8 v77;
  unsigned __int8 *v78;
  unsigned __int8 *v79;
  int v80;
  unsigned __int8 v81;
  unsigned __int8 *v82;
  int v83;
  int v84;
  int v85;
  char *v86;
  char v87;
  char *v88;
  int v89;
  int v90;
  int v91;
  int v92;
  char *v93;
  int v94;
  __int64 v95;
  char *v96;
  char v97;
  char *v98;
  char *v99;
  char v100;
  char *v101;
  char *v102;
  char v103;
  char *v104;
  char v105;
  __int64 v106;
  __int64 v107;
  int v108;
  int v109;

  v5 = 0;
  v109 = 0;
  if ( *((_QWORD *)a2 + 1) )
  {
    v17 = a2[1] * *a2;
    v18 = (a2[12] >> 2) & 7;
    if ( v18 != 3 || a5 )
    {
      v19 = v17;
      if ( v18 == 3 )
      {
        if ( v17 > 0 )
        {
          for ( i = 0; i < v17; ++i )
          {
            if ( *(_BYTE *)(i + *((_QWORD *)a2 + 3)) )
              *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * i) = *(_DWORD *)(a5 + 4 * i);
          }
        }
        goto LABEL_33;
      }
      if ( v18 != 2 )
      {
LABEL_33:
        crt_memcpy(*((__m128i **)a2 + 2), *((     __m128i **)a2 + 1), 4 * a2[1] * *a2);
        goto LABEL_34;
      }
    }
    else
    {
      v19 = v17;
    }
    if ( v19 > 0 )
    {
      for ( j = 0; j < v19; ++j )
      {
        if ( *(_BYTE *)(j + *((_QWORD *)a2 + 3)) )
          *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * j) = *(_DWORD *)(*((_QWORD *)a2 + 2) + 4 * j);
      }
    }
    goto LABEL_33;
  }
  if ( !(unsigned int)sub_140160930(a1, a2, a3, 0) )
    return 0;
  v8 = *a2;
  v9 = a2[1];
  if ( *a2 < 0 )
    goto LABEL_16;
  if ( v8 )
  {
    if ( 0x7FFFFFFF / v8 < 4 )
      goto LABEL_16;
    v10 = 4 * v8;
    if ( (v8 & 0x20000000) != 0 )
      goto LABEL_16;
  }
  else
  {
    v10 = 0;
  }
  if ( v9 < 0 || v9 && v10 > 0x7FFFFFFF / v9 )
  {
LABEL_16:
    v15 = sr_client_static_tls();
    v16 = "too large";
    goto LABEL_186;
  }
  v11 = v9 * v8;
  v12 = 4 * v11;
  *((_QWORD *)a2 + 1) = sr_path_malloc(v12);
  *((_QWORD *)a2 + 2) = sr_path_malloc(v12);
  v13 = sr_path_malloc(v11);
  v14 = *((_WORD **)a2 + 1);
  *((_QWORD *)a2 + 3) = v13;
  if ( !v14 || !*((_QWORD *)a2 + 2) || !v13 )
  {
    v15 = sr_client_static_tls();
    v16 = "outofmem";
LABEL_186:
    *(_QWORD *)(v15 + 16) = (uint64)(uintptr_t)(v16);
    return 0;
  }
  crt_memset((void *)(uintptr_t)(v14), 0, v12);
  crt_memset((void *)(uintptr_t)(*((_WORD **)a2 + 2)), 0, v12);
  crt_memset((void *)(uintptr_t)(*((_WORD **)a2 + 3)), 0, v11);
  v109 = 1;
LABEL_34:
  crt_memset((void *)(uintptr_t)(*((_WORD **)a2 + 3)), 0, a2[1] * *a2);
  while ( 1 )
  {
    v22 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v22 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_185;
      v23 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v23 )
      {
        *(_QWORD *)(a1 + 200) = v23 + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      v22 = *(char **)(a1 + 192);
    }
    v24 = *v22;
    v25 = (unsigned __int8 *)(v22 + 1);
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v25);
    if ( v24 != 33 )
      break;
    if ( (unsigned __int64)v25 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_78;
      v26 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v26 )
      {
        *(_QWORD *)(a1 + 200) = v26 + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      v25 = *(unsigned __int8 **)(a1 + 192);
    }
    v27 = *v25;
    v28 = v25 + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v28);
    v29 = v28;
    if ( v27 != 0xF9 )
      goto LABEL_78;
    v30 = *(_QWORD *)(a1 + 200);
    if ( (unsigned __int64)v28 >= v30 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        v32 = *(unsigned __int8 **)(a1 + 192);
        v30 = *(_QWORD *)(a1 + 200);
        v31 = *v32;
        v29 = v32 + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v32 + 1);
      }
      else
      {
        v31 = 0;
      }
    }
    else
    {
      v31 = *v28;
      v29 = v28 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v28 + 1);
    }
    v33 = v31;
    if ( v31 == 4 )
    {
      if ( (unsigned __int64)v29 >= v30 )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v35 = *(unsigned __int8 **)(a1 + 192);
          v34 = *v35;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v35 + 1);
        }
        else
        {
          v34 = 0;
        }
      }
      else
      {
        v34 = *v29;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v29 + 1);
      }
      a2[12] = v34;
      v36 = *(_QWORD *)(a1 + 200);
      v37 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v37 >= v36 )
      {
        if ( !*(_DWORD *)(a1 + 48) )
        {
          v40 = 0;
LABEL_66:
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            v42 = *(unsigned __int8 **)(a1 + 192);
            v41 = *v42;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v42 + 1);
          }
          else
          {
            v41 = 0;
          }
          goto LABEL_69;
        }
        stbi_refill_buffer(a1);
        v37 = *(unsigned __int8 **)(a1 + 192);
        v36 = *(_QWORD *)(a1 + 200);
      }
      v38 = *v37;
      v39 = v37 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v39);
      v40 = v38;
      if ( (unsigned __int64)v39 >= v36 )
        goto LABEL_66;
      v41 = *v39;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v39 + 1);
LABEL_69:
      a2[8730] = 10 * (v40 + (v41 << 8));
      v43 = a2[11];
      if ( (int)v43 >= 0 )
        HIBYTE(a2[v43 + 13]) = -1;
      if ( (a2[12] & 1) != 0 )
      {
        v44 = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)v44 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            v46 = *(unsigned __int8 **)(a1 + 192);
            v45 = *v46;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v46 + 1);
          }
          else
          {
            v45 = 0;
          }
        }
        else
        {
          v45 = *v44;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v44 + 1);
        }
        a2[11] = v45;
        HIBYTE(a2[v45 + 13]) = 0;
      }
      else if ( *(_QWORD *)(a1 + 16) && (v50 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v50 < 1) )
      {
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(1 - v50));
        a2[11] = -1;
      }
      else
      {
        ++*(_QWORD *)(a1 + 192);
        a2[11] = -1;
      }
      while ( 1 )
      {
LABEL_78:
        v47 = *(_QWORD *)(a1 + 200);
        v48 = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)v48 >= v47 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            v53 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52));
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( v53 )
            {
              v47 = v53 + a1 + 56;
              *(_QWORD *)(a1 + 200) = v47;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
              v47 = *(_QWORD *)(a1 + 200);
            }
            v54 = *(unsigned __int8 **)(a1 + 192);
            v49 = *v54;
            v48 = v54 + 1;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v54 + 1);
          }
          else
          {
            v49 = 0;
          }
        }
        else
        {
          v49 = *v48++;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v48);
        }
        v55 = v49;
        if ( !v49 )
          break;
        if ( *(_QWORD *)(a1 + 16) && (v56 = v47 - (_DWORD)v48, (int)v47 - (int)v48 < (int)v55) )
        {
          v57 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 192) = v47;
          (*(void (           **)(__int64, _QWORD))(a1 + 24))(v57, (unsigned int)(v55 - v56));
        }
        else
        {
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(&v48[v55]);
        }
      }
    }
    else if ( v31 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v51 = v30 - (_DWORD)v29, (int)v30 - (int)v29 < (int)v33) )
      {
        v52 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = v30;
        (*(void (           **)(__int64, _QWORD))(a1 + 24))(v52, (unsigned int)(v33 - v51));
      }
      else
      {
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(&v29[v33]);
      }
    }
  }
  if ( v24 != 44 )
  {
    if ( v24 == 59 )
      return a1;
LABEL_185:
    v15 = sr_client_static_tls();
    v16 = "unknown code";
    goto LABEL_186;
  }
  v59 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v25 >= v59 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v25 = *(unsigned __int8 **)(a1 + 192);
      v59 = *(_QWORD *)(a1 + 200);
      goto LABEL_106;
    }
    v62 = 0;
    v63 = 0;
LABEL_109:
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v61 = *(unsigned __int8 **)(a1 + 192);
      v59 = *(_QWORD *)(a1 + 200);
      goto LABEL_111;
    }
LABEL_116:
    v68 = 0;
    v69 = 0;
    goto LABEL_117;
  }
LABEL_106:
  v60 = *v25;
  v61 = v25 + 1;
  v62 = v60;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v61);
  v63 = v60;
  if ( (unsigned __int64)v61 >= v59 )
    goto LABEL_109;
LABEL_111:
  v64 = *v61;
  v65 = v61 + 1;
  v63 = v62 + (v64 << 8);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v65);
  if ( (unsigned __int64)v65 >= v59 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_116;
    stbi_refill_buffer(a1);
    v65 = *(unsigned __int8 **)(a1 + 192);
    v59 = *(_QWORD *)(a1 + 200);
  }
  v66 = *v65;
  v67 = v65 + 1;
  v68 = v66;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v67);
  v69 = v66;
  if ( (unsigned __int64)v67 >= v59 )
  {
LABEL_117:
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v67 = *(unsigned __int8 **)(a1 + 192);
      v59 = *(_QWORD *)(a1 + 200);
      goto LABEL_119;
    }
LABEL_124:
    v74 = 0;
    v75 = 0;
LABEL_125:
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v73 = *(unsigned __int8 **)(a1 + 192);
      v59 = *(_QWORD *)(a1 + 200);
      goto LABEL_127;
    }
    v76 = v75;
    goto LABEL_130;
  }
LABEL_119:
  v70 = *v67;
  v71 = v67 + 1;
  v69 = v68 + (v70 << 8);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v71);
  if ( (unsigned __int64)v71 < v59 )
    goto LABEL_122;
  if ( !*(_DWORD *)(a1 + 48) )
    goto LABEL_124;
  stbi_refill_buffer(a1);
  v71 = *(unsigned __int8 **)(a1 + 192);
  v59 = *(_QWORD *)(a1 + 200);
LABEL_122:
  v72 = *v71;
  v73 = v71 + 1;
  v74 = v72;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v73);
  v75 = v72;
  if ( (unsigned __int64)v73 >= v59 )
    goto LABEL_125;
LABEL_127:
  v75 = v74 + (*v73 << 8);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v73 + 1);
  v76 = v75;
  if ( (unsigned __int64)(v73 + 1) < v59 )
  {
    v77 = v73[1];
    v78 = v73 + 2;
    goto LABEL_132;
  }
LABEL_130:
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    v79 = *(unsigned __int8 **)(a1 + 192);
    v59 = *(_QWORD *)(a1 + 200);
    v77 = *v79;
    v78 = v79 + 1;
LABEL_132:
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v78);
    v80 = v77;
    if ( (unsigned __int64)v78 < v59 )
    {
      v81 = *v78;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v78 + 1);
      goto LABEL_138;
    }
  }
  else
  {
    v80 = 0;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    v82 = *(unsigned __int8 **)(a1 + 192);
    v81 = *v82;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v82 + 1);
  }
  else
  {
    v81 = 0;
  }
LABEL_138:
  v83 = v80 + (v81 << 8);
  if ( v63 + v76 > *a2 || v83 + v69 > a2[1] )
  {
    v15 = sr_client_static_tls();
    v16 = "bad Image Descriptor";
    goto LABEL_186;
  }
  v84 = 4 * *a2;
  a2[8729] = v84;
  a2[8723] = 4 * v63;
  a2[8725] = 4 * v63 + 4 * v76;
  v85 = v69 * v84;
  a2[8727] = 4 * v63;
  a2[8724] = v69 * v84;
  if ( !v75 )
    v85 = v83 * v84 + v69 * v84;
  a2[8726] = v83 * v84 + v69 * v84;
  a2[8728] = v85;
  v86 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v86 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v88 = *(char **)(a1 + 192);
      v87 = *v88;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v88 + 1);
    }
    else
    {
      v87 = 0;
    }
  }
  else
  {
    v87 = *v86;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v86 + 1);
  }
  v89 = a2[8729];
  a2[8722] = (unsigned __int8)v87;
  v90 = v87 & 0x40;
  v91 = 8 * v89;
  if ( !v90 )
    v91 = v89;
  a2[8721] = v91;
  a2[8720] = v90 != 0 ? 3 : 0;
  if ( v87 >= 0 )
  {
    if ( *((char *)a2 + 32) >= 0 )
    {
      v15 = sr_client_static_tls();
      v16 = "missing color table";
      goto LABEL_186;
    }
    v106 = 13;
  }
  else
  {
    if ( (a2[12] & 1) != 0 )
      v92 = a2[11];
    else
      v92 = -1;
    v93 = (char *)a2 + 1077;
    v94 = 0;
    v95 = 2 << (v87 & 7);
    do
    {
      v96 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v96 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v98 = *(char **)(a1 + 192);
          v97 = *v98;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v98 + 1);
        }
        else
        {
          v97 = 0;
        }
      }
      else
      {
        v97 = *v96;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v96 + 1);
      }
      v93[1] = v97;
      v99 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v99 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v101 = *(char **)(a1 + 192);
          v100 = *v101;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v101 + 1);
        }
        else
        {
          v100 = 0;
        }
      }
      else
      {
        v100 = *v99;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v99 + 1);
      }
      *v93 = v100;
      v102 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v102 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v104 = *(char **)(a1 + 192);
          v103 = *v104;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v104 + 1);
        }
        else
        {
          v103 = 0;
        }
      }
      else
      {
        v103 = *v102;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v102 + 1);
      }
      *(v93 - 1) = v103;
      v105 = -1;
      if ( v92 == v94 )
        v105 = 0;
      ++v94;
      v93[2] = v105;
      v93 += 4;
      --v95;
    }
    while ( v95 );
    v106 = 269;
  }
  *((_QWORD *)a2 + 4359) = (uint64)(uintptr_t)(&a2[v106]);
  v107 = sub_14016B5F0(a1, (__int64)a2);
  if ( !v107 )
    return 0;
  if ( v109 )
  {
    if ( a2[9] > 0 )
    {
      v108 = a2[1] * *a2;
      if ( v108 > 0 )
      {
        do
        {
          if ( !*(_BYTE *)(v5 + *((_QWORD *)a2 + 3)) )
          {
            HIBYTE(a2[a2[9] + 13]) = -1;
            *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * v5) = a2[a2[9] + 13];
          }
          ++v5;
        }
        while ( v5 < v108 );
      }
    }
  }
  return v107;
}

//----- (0000000140161A30) ----------------------------------------------------
void            sub_140161A30(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4;
  __int64 v5;
  _BYTE *v7;
  char *v9;
  char v10;
  char *v11;
  char *v12;
  char v13;
  char *v14;
  char *v15;
  char v16;
  char *v17;
  char v18;

  if ( a3 > 0 )
  {
    v4 = 0;
    v5 = a3;
    v7 = (_BYTE *)(a2 + 1);
    do
    {
      v9 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v11 = *(char **)(a1 + 192);
          v10 = *v11;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v11 + 1);
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = *v9;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v9 + 1);
      }
      v7[1] = v10;
      v12 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v14 = *(char **)(a1 + 192);
          v13 = *v14;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v14 + 1);
        }
        else
        {
          v13 = 0;
        }
      }
      else
      {
        v13 = *v12;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12 + 1);
      }
      *v7 = v13;
      v15 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v17 = *(char **)(a1 + 192);
          v16 = *v17;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v17 + 1);
        }
        else
        {
          v16 = 0;
        }
      }
      else
      {
        v16 = *v15;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15 + 1);
      }
      *(v7 - 1) = v16;
      v18 = -1;
      if ( a4 == v4 )
        v18 = 0;
      ++v4;
      v7[2] = v18;
      v7 += 4;
      --v5;
    }
    while ( v5 );
  }
}

//----- (0000000140161B80) ----------------------------------------------------
__int64            sub_140161B80(_QWORD *a1)
{
  __int64 result;

  result = sub_140161BB0((__int64)a1);
  a1[24] = a1[26];
  a1[25] = a1[27];
  return result;
}

//----- (0000000140161BB0) ----------------------------------------------------
__int64            sub_140161BB0(__int64 a1)
{
  char *v1;
  char v3;
  char *v4;
  char v5;
  char *v6;
  char v7;
  char *v8;
  char v9;
  char *v10;
  char v11;
  char *v12;
  char v13;

  v1 = *(char **)(a1 + 192);
  if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      return 0;
    stbi_refill_buffer(a1);
    v1 = *(char **)(a1 + 192);
  }
  v3 = *v1;
  v4 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4);
  if ( v3 == 71 )
  {
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        return 0;
      stbi_refill_buffer(a1);
      v4 = *(char **)(a1 + 192);
    }
    v5 = *v4;
    v6 = v4 + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v6);
    if ( v5 == 73 )
    {
      if ( (unsigned __int64)v6 >= *(_QWORD *)(a1 + 200) )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          return 0;
        stbi_refill_buffer(a1);
        v6 = *(char **)(a1 + 192);
      }
      v7 = *v6;
      v8 = v6 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8);
      if ( v7 == 70 )
      {
        if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 200) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            return 0;
          stbi_refill_buffer(a1);
          v8 = *(char **)(a1 + 192);
        }
        v9 = *v8;
        v10 = v8 + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v10);
        if ( v9 == 56 )
        {
          if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 200) )
          {
            if ( !*(_DWORD *)(a1 + 48) )
              return 0;
            stbi_refill_buffer(a1);
            v10 = *(char **)(a1 + 192);
          }
          v11 = *v10;
          v12 = v10 + 1;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12);
          if ( v11 != 57 && v11 != 55 )
            return 0;
          if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 200) )
          {
            if ( !*(_DWORD *)(a1 + 48) )
              return 0;
            stbi_refill_buffer(a1);
            v12 = *(char **)(a1 + 192);
          }
          v13 = *v12;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12 + 1);
          if ( v13 == 97 )
            return 1;
        }
      }
    }
  }
  return 0;
}

//----- (0000000140161D20) ----------------------------------------------------
__int64            sub_140161D20(_QWORD *a1)
{
  int v2;
  __int64 v3;
  unsigned __int8 *v4;
  unsigned __int8 v5;
  unsigned __int8 *v6;
  __int64 v7;
  unsigned __int8 *v8;
  unsigned __int8 v9;
  unsigned __int8 *v10;
  __int64 result;
  __int64 v12;
  unsigned __int8 *v13;
  unsigned __int8 v14;
  int v15;
  unsigned __int8 *v16;
  int v17;

  while ( *((_DWORD *)a1 + 4619) )
  {
    v2 = 0;
LABEL_25:
    v17 = *((_DWORD *)a1 + 4617);
    *((_DWORD *)a1 + 4616) |= v2 << (24 - v17);
    result = (unsigned int)(v17 + 8);
    *((_DWORD *)a1 + 4617) = result;
    if ( (int)result > 24 )
      return result;
  }
  v3 = *a1;
  v4 = *(unsigned __int8 **)(*a1 + 192LL);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(*a1 + 200LL) )
  {
    if ( *(_DWORD *)(v3 + 48) )
    {
      stbi_refill_buffer(*a1);
      v6 = *(unsigned __int8 **)(v3 + 192);
      v5 = *v6;
      *(_QWORD *)(v3 + 192) = (uint64)(uintptr_t)(v6 + 1);
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = *v4;
    *(_QWORD *)(v3 + 192) = (uint64)(uintptr_t)(v4 + 1);
  }
  v2 = v5;
  if ( v5 != 255 )
    goto LABEL_25;
  v7 = *a1;
  v8 = *(unsigned __int8 **)(*a1 + 192LL);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(*a1 + 200LL) )
  {
    if ( *(_DWORD *)(v7 + 48) )
    {
      stbi_refill_buffer(*a1);
      v10 = *(unsigned __int8 **)(v7 + 192);
      v9 = *v10;
      *(_QWORD *)(v7 + 192) = (uint64)(uintptr_t)(v10 + 1);
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = *v8;
    *(_QWORD *)(v7 + 192) = (uint64)(uintptr_t)(v8 + 1);
  }
  result = v9;
  if ( v9 == 255 )
  {
    do
    {
      v12 = *a1;
      v13 = *(unsigned __int8 **)(*a1 + 192LL);
      if ( (unsigned __int64)v13 >= *(_QWORD *)(*a1 + 200LL) )
      {
        if ( *(_DWORD *)(v12 + 48) )
        {
          v15 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(v12 + 16))(
                  *(_QWORD *)(v12 + 40),
                  v12 + 56,
                  *(unsigned int *)(v12 + 52));
          *(_DWORD *)(v12 + 184) += *(_DWORD *)(v12 + 192) - *(_DWORD *)(v12 + 208);
          *(_QWORD *)(v12 + 192) = v12 + 56;
          if ( v15 )
          {
            *(_QWORD *)(v12 + 200) = v15 + v12 + 56;
          }
          else
          {
            *(_DWORD *)(v12 + 48) = 0;
            *(_QWORD *)(v12 + 200) = v12 + 57;
            *(_BYTE *)(v12 + 56) = 0;
          }
          v16 = *(unsigned __int8 **)(v12 + 192);
          v14 = *v16;
          *(_QWORD *)(v12 + 192) = (uint64)(uintptr_t)(v16 + 1);
        }
        else
        {
          v14 = 0;
        }
      }
      else
      {
        v14 = *v13;
        *(_QWORD *)(v12 + 192) = (uint64)(uintptr_t)(v13 + 1);
      }
      result = v14;
    }
    while ( v14 == 255 );
  }
  if ( !(_DWORD)result )
    goto LABEL_25;
  *((_BYTE *)a1 + 18472) = result;
  *((_DWORD *)a1 + 4619) = 1;
  return result;
}

//----- (0000000140161F00) ----------------------------------------------------
__int64            sub_140161F00(__int64 a1, unsigned __int8 *a2, int a3)
{
  __int64 result;
  float v7;

  result = a2[3];
  if ( (_BYTE)result )
  {
    v7 = sub_14020B23C(1.0, result - 136); /* 0x140161F3A: cvtsd2ss xmm2, xmm0 */
    if ( a3 > 2 )
    {
      *(float *)a1 = (float)*a2 * v7;
      *(float *)(a1 + 4) = (float)a2[1] * v7;
      result = a2[2];
      *(float *)(a1 + 8) = (float)a2[2] * v7;
      if ( a3 == 4 )
        *(_DWORD *)(a1 + 12) = 1065353216;
    }
    else
    {
      result = *a2;
      *(float *)a1 = (float)((float)(*a2 + a2[1] + a2[2]) * v7) * 0.33333334;
      if ( a3 == 2 )
        *(_DWORD *)(a1 + 4) = 1065353216;
    }
    return result;
  }
  if ( a3 == 1 )
  {
LABEL_14:
    *(_DWORD *)a1 = 0;
    return 0;
  }
  if ( a3 == 2 )
  {
    *(_DWORD *)(a1 + 4) = 1065353216;
    goto LABEL_14;
  }
  if ( a3 != 3 )
  {
    if ( a3 != 4 )
      return result;
    *(_DWORD *)(a1 + 12) = 1065353216;
  }
  *(_QWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  return 0;
}

//----- (0000000140162030) ----------------------------------------------------
__int64            sub_140162030(__int64 a1, __int64 a2)
{
  char *v2;
  int v5;
  char v6;
  char *v7;
  __int64 v8;
  char *v9;
  int v10;
  char *v11;
  char *v12;
  unsigned __int64 v13;
  char v14;

  v2 = *(char **)(a1 + 192);
  v5 = 0;
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v7 = *(char **)(a1 + 192);
      v6 = *v7;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v7 + 1);
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = *v2;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v2 + 1);
  }
  v8 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_11;
      if ( !*(_DWORD *)(a1 + 48) )
        break;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      break;
LABEL_11:
    if ( v6 == 10 )
      break;
    *(_BYTE *)(v8 + a2) = v6;
    ++v5;
    if ( ++v8 == 1023 )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_25;
        if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          break;
        v12 = *(char **)(a1 + 192);
        v13 = *(_QWORD *)(a1 + 200);
LABEL_26:
        if ( (unsigned __int64)v12 < v13 )
        {
LABEL_29:
          v14 = *v12;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12 + 1);
          if ( v14 == 10 )
            goto LABEL_30;
        }
        else if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v12 = *(char **)(a1 + 192);
          goto LABEL_29;
        }
      }
      if ( !*(_DWORD *)(a1 + 48) )
        break;
LABEL_25:
      v12 = *(char **)(a1 + 192);
      v13 = *(_QWORD *)(a1 + 200);
      if ( (unsigned __int64)v12 >= v13 )
        break;
      goto LABEL_26;
    }
    v9 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v10 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                *(_QWORD *)(a1 + 40),
                a1 + 56,
                *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v10 )
        {
          *(_QWORD *)(a1 + 200) = v10 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v11 = *(char **)(a1 + 192);
        v6 = *v11;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v11 + 1);
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      v6 = *v9;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v9 + 1);
    }
  }
LABEL_30:
  *(_BYTE *)(v5 + a2) = 0;
  return a2;
}

//----- (0000000140162220) ----------------------------------------------------
__int64            sub_140162220(_QWORD *a1, char *a2, char *a3, char *a4)
{
  int v4;
  char *v5;
  char *v6;
  char *v7;
       char *v9;
  int v10;
  _BYTE *v11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140162220[1088];
#define v13 (*(__int64 (*))(void *)(sr_frame_140162220 + 0)) /* [rsp+0h] */
#define v14 (*(_BYTE * (*))(void *)(sr_frame_140162220 + 32)) /* [rsp+20h] */
#define v15 (*(char (*))(void *)(sr_frame_140162220 + 40)) /* [rsp+28h] */
#define v16 (*(_BYTE (*)[1024])(void *)(sr_frame_140162220 + 48)) /* [rsp+30h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140162220 + 1072)) /* [rsp+430h] */

  v4 = 0;
  v5 = &v15;
  v6 = &v15;
  v7 = &v15;
  if ( a2 )
    v5 = a2;
  if ( a3 )
    v6 = a3;
  if ( a4 )
    v7 = a4;
  if ( (unsigned int)sub_140162BB0((__int64)a1) )
  {
    v9 = (     char *)sub_140162030((__int64)a1, (__int64)v16);
    v14 = v9;
    if ( !*v9 )
      goto LABEL_19;
    do
    {
      if ( !strcmp_sr(v9, "FORMAT=32-bit_rle_rgbe") )
        v4 = 1;
      v9 = (     char *)sub_140162030((__int64)a1, (__int64)v16);
      v14 = v9;
    }
    while ( *v9 );
    if ( !v4 )
      goto LABEL_19;
    v14 = (_BYTE *)sub_140162030((__int64)a1, (__int64)v16);
    if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v14), (const char *)(uintptr_t)("-Y "), 3) )
      goto LABEL_19;
    v14 += 3;
    v10 = sub_14023CCCC((__int64)v14, (__int64 *)&v14, 0xAu);
    v11 = v14;
    for ( *(_DWORD *)v6 = v10; *v11 == 32; v14 = v11 )
      ++v11;
    if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(v11), (const char *)(uintptr_t)("+X "), 3) )
    {
      v14 += 3;
      *(_DWORD *)v5 = sub_14023CCCC((__int64)v14, nullptr, 0xAu);
      *(_DWORD *)v7 = 3;
    }
    else
    {
LABEL_19:
      a1[24] = a1[26];
      a1[25] = a1[27];
    }
  }
  else
  {
    a1[24] = a1[26];
    a1[25] = a1[27];
  }
  return 0; /* the function has no caller */
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17

//----- (00000001401623E0) ----------------------------------------------------
__int64            sub_1401623E0(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4, unsigned int a5)
{
  int v9;
       char *v10;
  __int64 v11;
  char v12;
       char *v13;
  __int32 v14;
  _BYTE *v15;
  int v16;
  __int64 v17;
  __int64 v18;
  char *v19;
  char *v20;
  unsigned __int64 v21;
  unsigned __int8 v22;
  int v23;
  unsigned __int8 v24;
  int v25;
  char v26;
  char *v27;
  int v28;
  unsigned __int8 v29;
  unsigned __int8 *v30;
  __int64 v31;
  int v32;
  __int64 v33;
  unsigned int v34;
  unsigned __int8 *v35;
  unsigned __int8 v36;
  char *v37;
  char v38;
  char *v39;
  unsigned __int8 v40;
  char *v41;
  __int64 v42;
  __int64 v43;
  char *v44;
  __int64 v45;
  char *v46;
  char v47;
  char *v48;
  unsigned __int8 *v49;
  __int64 v50;
  int v51;
  __int64 v52;
  char *v53;
  __int64 v54;
       char *v55;
  char v57;
  char *v58;
  int v59;
  int v60;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401623E0[1136];
#define v61 (*(__int64 (*))(void *)(sr_frame_1401623E0 + 8)) /* [rsp+0h] */
#define v62 (*(int (*))(void *)(sr_frame_1401623E0 + 56)) /* [rsp+30h] */
#define v63 (*(_BYTE * (*))(void *)(sr_frame_1401623E0 + 64)) /* [rsp+38h] */
#define Block (*(void * (*))(void *)(sr_frame_1401623E0 + 72)) /* [rsp+40h] */
#define v65 (*(__m128i (*))(void *)(sr_frame_1401623E0 + 80)) /* [rsp+48h] */
#define v66 (*(__int64 (*))(void *)(sr_frame_1401623E0 + 96)) /* [rsp+58h] */
#define v67 (*(_BYTE (*)[1024])(void *)(sr_frame_1401623E0 + 104)) /* [rsp+60h] */
#define v68 (*(__int64 (*))(void *)(sr_frame_1401623E0 + 1128)) /* [rsp+460h] */

  v9 = 0;
  v10 = (     char *)sub_140162030(a1, (__int64)v67);
  if ( !strcmp_sr(v10, "#?RADIANCE") )
  {
LABEL_5:
    v13 = (     char *)sub_140162030(a1, (__int64)v67);
    v63 = v13;
    if ( !*v13 )
      goto LABEL_111;
    do
    {
      if ( !strcmp_sr(v13, "FORMAT=32-bit_rle_rgbe") )
        v9 = 1;
      v13 = (     char *)sub_140162030(a1, (__int64)v67);
      v63 = v13;
    }
    while ( *v13 );
    if ( !v9 )
    {
LABEL_111:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported format");
      return 0; /* 0x140162503: xor eax, eax */
    }
    v63 = (_BYTE *)sub_140162030(a1, (__int64)v67);
    if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v63), (const char *)(uintptr_t)("-Y "), 3) )
      goto LABEL_11;
    v63 += 3;
    v14 = sub_14023CCCC((__int64)v63, (__int64 *)&v63, 0xAu);
    v15 = v63;
    v16 = v14;
    for ( SR_VEC_LANES(128, v65, i32)[2] = v14; *v15 == 32; v63 = v15 )
      ++v15;
    if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v15), (const char *)(uintptr_t)("+X "), 3) )
    {
LABEL_11:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported data layout");
      return 0; /* 0x14016252D: xor eax, eax */
    }
    v63 += 3;
    v17 = (unsigned int)sub_14023CCCC((__int64)v63, nullptr, 0xAu);
    if ( v16 > 0x1000000 || (int)v17 > 0x1000000 )
      goto LABEL_110;
    *a2 = v17;
    v18 = 3;
    *a3 = v16;
    if ( a4 )
      *a4 = 3;
    if ( a5 )
      v18 = a5;
    if ( (v66 = v18, (int)v17 < 0)
      || v16 < 0
      || v16 && (int)v17 > 0x7FFFFFFF / v16
      || v16 * (int)v17 < 0
      || (int)v18 < 0
      || v16 * (int)v17 > 0x7FFFFFFF / (int)v18
      || (SR_VEC_LANES(128, v65, i32)[0] = v17 * v18, (unsigned int)(v16 * v17 * v18) >= 0x20000000) )
    {
LABEL_110:
      v54 = sr_client_static_tls();
      v55 = "too large";
LABEL_94:
      *(_QWORD *)(v54 + 16) = (uint64)(uintptr_t)(v55);
      return 0; /* 0x1401629F8: xor eax, eax */
    }
    Block = (void *)sub_140167010(v17, v16, v18, 4, 0);
    if ( !Block )
    {
LABEL_93:
      v54 = sr_client_static_tls();
      v55 = "outofmem";
      goto LABEL_94;
    }
    if ( (unsigned int)(v17 - 8) > 0x7FF7 )
    {
      v59 = 0;
      goto LABEL_105;
    }
    v19 = nullptr;
    SR_VEC_LANES(128, v65, i32)[1] = 0;
    if ( v16 <= 0 )
      return (__int64)Block; /* 0x1401629C4: mov rax, qword ptr [rsp + 0x40] */
    v62 = 0;
LABEL_34:
    v20 = *(char **)(a1 + 192);
    v21 = *(_QWORD *)(a1 + 200);
    if ( (unsigned __int64)v20 >= v21 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v22 = 0;
        v23 = 0;
LABEL_40:
        if ( !*(_DWORD *)(a1 + 48) )
        {
          v24 = 0;
          v25 = 0;
          goto LABEL_45;
        }
        stbi_refill_buffer(a1);
        v20 = *(char **)(a1 + 192);
        v21 = *(_QWORD *)(a1 + 200);
LABEL_42:
        v24 = *v20++;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20);
        v25 = v24;
        if ( (unsigned __int64)v20 < v21 )
        {
          v26 = *v20++;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20);
LABEL_48:
          if ( v23 != 2 || v25 != 2 || v26 < 0 )
          {
            LOBYTE(v62) = v22;
            BYTE1(v62) = v24;
            BYTE2(v62) = v26;
            if ( (unsigned __int64)v20 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                stbi_refill_buffer(a1);
                v58 = *(char **)(a1 + 192);
                v57 = *v58;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v58 + 1);
              }
              else
              {
                v57 = 0;
              }
            }
            else
            {
              v57 = *v20;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20 + 1);
            }
            LODWORD(v18) = v66;
            HIBYTE(v62) = v57;
            sub_140161F00((__int64)Block, (unsigned __int8 *)&v62, v66);
            v59 = 0;
            free(v19);
            v60 = 1;
            while ( 1 )
            {
              sub_140160860(a1, &v65, 4);
              sub_140161F00(
                (__int64)Block + 4 * v60 * (int)v18 + 4 * (__int64)((int)v17 * v59 * (int)v18),
                (unsigned __int8 *)&v65,
                v18);
              ++v60;
              while ( v60 >= (int)v17 )
              {
                v16 = SR_VEC_LANES(128, v65, i32)[2];
                ++v59;
LABEL_105:
                if ( v59 >= v16 )
                  return (__int64)Block; /* 0x1401629C4: mov rax, qword ptr [rsp + 0x40] */
                v60 = 0;
              }
            }
          }
          v28 = (unsigned __int8)v26 << 8;
          if ( (unsigned __int64)v20 >= *(_QWORD *)(a1 + 200) )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              stbi_refill_buffer(a1);
              v30 = *(unsigned __int8 **)(a1 + 192);
              v29 = *v30;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v30 + 1);
            }
            else
            {
              v29 = 0;
            }
          }
          else
          {
            v29 = *v20;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20 + 1);
          }
          if ( (v28 | v29) != (_DWORD)v17 )
          {
            free(Block);
            free(v19);
            v54 = sr_client_static_tls();
            v55 = "invalid decoded scanline length";
            goto LABEL_94;
          }
          if ( !v19 )
          {
            v19 = (char *)sr_path_malloc(4 * (int)v17);
            if ( !v19 )
            {
              free(Block);
              goto LABEL_93;
            }
          }
          v31 = 0;
LABEL_60:
          v32 = 0;
          v33 = 0;
          v34 = v17;
          while ( 1 )
          {
            v35 = *(unsigned __int8 **)(a1 + 192);
            if ( (unsigned __int64)v35 >= *(_QWORD *)(a1 + 200) )
            {
              if ( !*(_DWORD *)(a1 + 48) )
              {
                v36 = 0;
                goto LABEL_76;
              }
              stbi_refill_buffer(a1);
              v35 = *(unsigned __int8 **)(a1 + 192);
            }
            v36 = *v35;
            v37 = (char *)(v35 + 1);
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v37);
            if ( v36 > 0x80u )
            {
              if ( (unsigned __int64)v37 >= *(_QWORD *)(a1 + 200) )
              {
                if ( *(_DWORD *)(a1 + 48) )
                {
                  stbi_refill_buffer(a1);
                  v39 = *(char **)(a1 + 192);
                  v38 = *v39;
                  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v39 + 1);
                }
                else
                {
                  v38 = 0;
                }
              }
              else
              {
                v38 = *v37;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v37 + 1);
              }
              v40 = v36 + 0x80;
              if ( v40 > v34 )
              {
LABEL_96:
                free(Block);
                free(v19);
                v54 = sr_client_static_tls();
                v55 = "corrupt";
                goto LABEL_94;
              }
              if ( v40 )
              {
                v32 += v40;
                v41 = &v19[4 * v33 + v31];
                v42 = v40;
                v33 += v40;
                do
                {
                  *v41 = v38;
                  v41 += 4;
                  --v42;
                }
                while ( v42 );
              }
              goto LABEL_85;
            }
LABEL_76:
            v43 = v36;
            if ( v36 > v34 )
              goto LABEL_96;
            if ( v36 )
            {
              v32 += v36;
              v44 = &v19[4 * v33 + v31];
              v45 = (unsigned int)v43;
              v33 += v43;
              do
              {
                v46 = *(char **)(a1 + 192);
                if ( (unsigned __int64)v46 >= *(_QWORD *)(a1 + 200) )
                {
                  if ( *(_DWORD *)(a1 + 48) )
                  {
                    stbi_refill_buffer(a1);
                    v48 = *(char **)(a1 + 192);
                    v47 = *v48;
                    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v48 + 1);
                  }
                  else
                  {
                    v47 = 0;
                  }
                }
                else
                {
                  v47 = *v46;
                  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v46 + 1);
                }
                *v44 = v47;
                v44 += 4;
                --v45;
              }
              while ( v45 );
            }
LABEL_85:
            v34 = v17 - v32;
            if ( (int)v17 - v32 <= 0 )
            {
              if ( ++v31 < 4 )
                goto LABEL_60;
              v49 = (unsigned __int8 *)v19;
              v50 = v17;
              v51 = v66;
              v52 = 4LL * (int)v66;
              v53 = (char *)Block + 4 * v62;
              do
              {
                sub_140161F00((__int64)v53, v49, v51);
                v53 += v52;
                v49 += 4;
                --v50;
              }
              while ( v50 );
              v62 += SR_VEC_LANES(128, v65, i32)[0];
              if ( ++SR_VEC_LANES(128, v65, i32)[1] >= SR_VEC_LANES(128, v65, i32)[2] )
              {
                free(v19);
                return (__int64)Block; /* 0x1401629C4: mov rax, qword ptr [rsp + 0x40] */
              }
              goto LABEL_34;
            }
          }
        }
LABEL_45:
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v27 = *(char **)(a1 + 192);
          v26 = *v27;
          v20 = v27 + 1;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20);
        }
        else
        {
          v26 = 0;
        }
        goto LABEL_48;
      }
      stbi_refill_buffer(a1);
      v20 = *(char **)(a1 + 192);
      v21 = *(_QWORD *)(a1 + 200);
    }
    v22 = *v20++;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v20);
    v23 = v22;
    if ( (unsigned __int64)v20 < v21 )
      goto LABEL_42;
    goto LABEL_40;
  }
  v11 = 0;
  while ( 1 )
  {
    v12 = v10[v11++];
    if ( v12 != sr_mem_140272dc4[v11 - 1] )
      break;
    if ( v11 == 7 )
      goto LABEL_5;
  }
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not HDR");
  return 0; /* 0x140162BA8: xor eax, eax */
}
#undef v61
#undef v62
#undef v63
#undef Block
#undef v65
#undef v66
#undef v67
#undef v68

// 140162620: conditional instruction was optimized away because r15d.4>=1
// 1401627FB: conditional instruction was optimized away because r13d.4 is in (8..7FFF)
// 14016295E: conditional instruction was optimized away because r13d.4 is in (8..7FFF)
// 1401629BA: conditional instruction was optimized away because r12.8!=0

//----- (0000000140162BB0) ----------------------------------------------------
__int64            sub_140162BB0(__int64 a1)
{
  unsigned __int8 **v2;
       char *v3;
  unsigned __int8 *v4;
  unsigned __int8 v5;
  __int64 result;
  __int64 v7;

  v2 = (unsigned __int8 **)(a1 + 192);
  v3 = "#?RADIANCE\n";
  while ( 1 )
  {
    v4 = *v2;
    if ( (unsigned __int64)*v2 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        v5 = *(*v2)++;
      }
      else
      {
        v5 = 0;
      }
    }
    else
    {
      v5 = *v4;
      *v2 = v4 + 1;
    }
    if ( v5 != *v3 )
      break;
    if ( !*++v3 )
    {
      result = 1;
      goto LABEL_11;
    }
  }
  *v2 = *(unsigned __int8 **)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  result = sub_140162C90(a1, "#?RGBE\n");
LABEL_11:
  v7 = *(_QWORD *)(a1 + 216);
  *v2 = *(unsigned __int8 **)(a1 + 208);
  *(_QWORD *)(a1 + 200) = v7;
  return result;
}

//----- (0000000140162C90) ----------------------------------------------------
__int64            sub_140162C90(__int64 a1, char *a2)
{
  char *v2;
  unsigned __int8 *v4;
  unsigned __int8 v5;
  unsigned __int8 *v6;

  v2 = a2;
  if ( *a2 )
  {
    while ( 1 )
    {
      v4 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v6 = *(unsigned __int8 **)(a1 + 192);
          v5 = *v6;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v6 + 1);
        }
        else
        {
          v5 = 0;
        }
      }
      else
      {
        v5 = *v4;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4 + 1);
      }
      if ( v5 != *v2 )
        return 0;
      if ( !*++v2 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 1;
  }
}

//----- (0000000140162D40) ----------------------------------------------------
__int64            sub_140162D40(void *Block, int a2, int a3, int a4)
{
  __int64 v4;
  void *v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  float *v13;
  float v14;
  __int64 v15;
  float v16;
  __int64 v17;
  int v18;
  __int64 v19;
  float *v20;
  float v21;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140162D40[32];
#define v23 (*(int (*))(void *)(sr_frame_140162D40 + 0)) /* [rsp+20h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_140162D40 + 8)) /* [rsp+28h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_140162D40 + 16)) /* [rsp+30h] */

  v4 = a4;
  v5 = Block;
  if ( !Block )
    return 0;
  if ( a2 < 0
    || a3 < 0
    || a3 && a2 > (int)(0x7FFFFFFFu / a3)
    || (v6 = a3 * a2, a3 * a2 < 0)
    || a4 < 0
    || a4 && v6 > (int)(0x7FFFFFFFu / a4)
    || (v25 = sr_path_malloc(a4 * v6), (v7 = v25) == 0) )
  {
    free(v5);
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  v8 = v4;
  if ( (v4 & 1) == 0 )
    v8 = v4 - 1;
  v23 = v8;
  if ( v6 > 0 )
  {
    v9 = 4 * v4;
    v10 = v4;
    v11 = 0;
    v12 = v25;
    v13 = (float *)v5;
    v14 = flt_140301840;
    v15 = (unsigned int)v6;
    v16 = *(float *)&dword_140301844;
    v17 = v8;
    v24 = (unsigned int)v6;
    do
    {
      v18 = 0;
      if ( v17 > 0 )
      {
        v19 = 0;
        v20 = v13;
        v18 = v8;
        do
        {
          v21 = powf(v16 * *v20++, v14);
          *(_BYTE *)(v12 + v19++) = (int)fminf(fmaxf((float)(v21 * 255.0) + 0.5, 0.0), 255.0);
        }
        while ( v19 < v17 );
        v15 = v24;
        v10 = v4;
        v5 = Block;
        v7 = v25;
        v9 = 4 * v4;
      }
      if ( v18 < (int)v4 )
        *(_BYTE *)(v18 + v11 + v7) = (int)fminf(fmaxf((float)(*((float *)v5 + v18 + v11) * 255.0) + 0.5, 0.0), 255.0);
      v8 = v23;
      v11 += v4;
      v13 = (float *)((char *)v13 + v9);
      v12 += v10;
      v24 = --v15;
    }
    while ( v15 );
  }
  free(v5);
  return v25;
}
#undef v23
#undef v24
#undef v25

//----- (0000000140162FB0) ----------------------------------------------------
__int64            sub_140162FB0(unsigned int a1)
{
  __int64 result;
  unsigned int v3;
  int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v3 = HIWORD(a1);
  v4 = 16;
  if ( a1 < 0x10000 )
  {
    v3 = a1;
    v4 = 0;
  }
  if ( v3 >= 0x100 )
  {
    v4 += 8;
    v3 >>= 8;
  }
  v5 = v4 + 4;
  v6 = v3 >> 4;
  if ( v3 < 0x10 )
  {
    v5 = v4;
    v6 = v3;
  }
  v7 = v5 + 2;
  if ( v6 < 4 )
    v7 = v5;
  v8 = v6 >> 2;
  if ( v6 < 4 )
    v8 = v6;
  result = v7 + 1;
  if ( v8 < 2 )
    return v7;
  return result;
}

//----- (0000000140163020) ----------------------------------------------------
__int64            sub_140163020(__int64 a1, int a2, __int64 a3)
{
  int *v3;
  __int16 *v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  __int64 *v73;
  _BYTE *v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  __int64 v109;
  bool v110;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140163020[304];
#define v112 (*(int (*))(void *)(sr_frame_140163020 + 0)) /* [rsp+0h] */
#define v113 (*(__int64 (*))(void *)(sr_frame_140163020 + 8)) /* [rsp+8h] */
#define v114 (*(__int64 (*))(void *)(sr_frame_140163020 + 16)) /* [rsp+10h] */
#define v115 (*(int (*))(void *)(sr_frame_140163020 + 24)) /* [rsp+18h] */
#define v116 (*(__int64 (*))(void *)(sr_frame_140163020 + 56)) /* [rsp+38h] */
#define v117 (*(_QWORD (*)[29])(void *)(sr_frame_140163020 + 64)) /* [rsp+40h] */

  v115 = a2;
  v3 = (int *)v117;
  v114 = a1;
  v4 = (__int16 *)(a3 + 32);
  v113 = 4;
  do
  {
    v5 = *(v4 - 8);
    if ( __PAIR32__(*(v4 - 8), v5) == (unsigned __int16)*v4
      && v4[8] == (_WORD)v5
      && v4[16] == (_WORD)v5
      && v4[24] == (_WORD)v5
      && v4[32] == (_WORD)v5
      && v4[40] == (_WORD)v5 )
    {
      v6 = 4 * *(v4 - 16);
      v3[48] = v6;
      v7 = v6;
      v3[40] = v6;
      v8 = v6;
      v3[8] = v6;
      *v3 = v6;
      *(v3 - 8) = v6;
    }
    else
    {
      v9 = v4[8];
      v10 = *v4;
      v11 = v4[32];
      v12 = v4[40];
      v13 = v4[24];
      v14 = *(v4 - 16);
      v15 = 2217 * (v11 + v10);
      v16 = 7567 * v11;
      v17 = 3135 * v10;
      v18 = v13 + v5;
      v19 = v15 - v16;
      v20 = v4[16];
      v21 = v15 + v17;
      v22 = (v20 + v14) << 12;
      v23 = (v14 - v20) << 12;
      v24 = v19 + v23;
      v112 = v22 - v21;
      v25 = v23 - v19;
      v26 = v5;
      v27 = 4816 * (v13 + v5 + v12 + v9);
      v28 = v22 + v21 + 512;
      v24 += 512;
      v25 += 512;
      v29 = v27 - 3685 * (v12 + v5);
      v30 = -1597 * v18;
      v31 = v27 - 10497 * (v13 + v9);
      v32 = -8034 * (v12 + v9);
      v33 = v32 + 12586 * v9;
      v34 = v32 + v29 + 1223 * v12;
      v35 = v29 + v30 + 6149 * v26;
      v36 = v31 + v33;
      v37 = v31 + v30 + 8410 * v13;
      v38 = v112 + 512;
      *(v3 - 8) = (v28 + v35) >> 10;
      *v3 = (v24 + v36) >> 10;
      v3[8] = (v37 + v25) >> 10;
      v6 = (v38 + v34) >> 10;
      v7 = (v25 - v37) >> 10;
      v8 = (v38 - v34) >> 10;
      v3[48] = (v28 - v35) >> 10;
      v3[40] = (v24 - v36) >> 10;
    }
    v3[24] = v8;
    v3[32] = v7;
    v3[16] = v6;
    v39 = *(v4 - 7);
    if ( __PAIR32__(*(v4 - 7), v39) == (unsigned __int16)v4[1]
      && v4[9] == (_WORD)v39
      && v4[17] == (_WORD)v39
      && v4[25] == (_WORD)v39
      && v4[33] == (_WORD)v39
      && v4[41] == (_WORD)v39 )
    {
      v40 = 4 * *(v4 - 15);
      v3[49] = v40;
      v41 = v40;
      v3[41] = v40;
      v42 = v40;
      v3[9] = v40;
      v3[1] = v40;
      *(v3 - 7) = v40;
    }
    else
    {
      v43 = v4[9];
      v44 = v4[1];
      v45 = v4[33];
      v46 = v4[41];
      v47 = v4[25];
      v48 = *(v4 - 15);
      v49 = 2217 * (v45 + v44);
      v50 = 7567 * v45;
      v51 = 3135 * v44;
      v52 = v47 + v39;
      v53 = v49 - v50;
      v54 = v4[17];
      v55 = v49 + v51;
      v56 = (v54 + v48) << 12;
      v57 = (v48 - v54) << 12;
      v58 = v53 + v57;
      v112 = v56 - v55;
      v59 = v57 - v53;
      v60 = v39;
      v61 = 4816 * (v47 + v39 + v46 + v43);
      v62 = v56 + v55 + 512;
      v58 += 512;
      v59 += 512;
      v63 = v61 - 3685 * (v46 + v39);
      v64 = -1597 * v52;
      v65 = v61 - 10497 * (v47 + v43);
      v66 = -8034 * (v46 + v43);
      v67 = v66 + 12586 * v43;
      v68 = v66 + v63 + 1223 * v46;
      v69 = v63 + v64 + 6149 * v60;
      v70 = v65 + v67;
      v71 = v65 + v64 + 8410 * v47;
      v72 = v112 + 512;
      *(v3 - 7) = (v62 + v69) >> 10;
      v3[1] = (v58 + v70) >> 10;
      v3[9] = (v71 + v59) >> 10;
      v40 = (v72 + v68) >> 10;
      v41 = (v59 - v71) >> 10;
      v42 = (v72 - v68) >> 10;
      v3[49] = (v62 - v69) >> 10;
      v3[41] = (v58 - v70) >> 10;
    }
    v3[25] = v42;
    v4 += 2;
    v3[33] = v41;
    v3[17] = v40;
    v3 += 2;
    --v113;
  }
  while ( v113 );
  v73 = &v116;
  v113 = (__int64)&v116;
  v74 = (_BYTE *)(v114 + 1);
  v114 = 8;
  do
  {
    v75 = *((_DWORD *)v73 - 4);
    v76 = *((_DWORD *)v73 + 1);
    v77 = *((_DWORD *)v73 - 1);
    v78 = *((_DWORD *)v73 - 3);
    v79 = *((_DWORD *)v73 - 6);
    v80 = 2217 * (*(_DWORD *)v73 + v75) - 7567 * *(_DWORD *)v73;
    v81 = *((_DWORD *)v73 - 2);
    v82 = 2217 * (*(_DWORD *)v73 + v75) + 3135 * v75;
    v83 = v81 + v79;
    v84 = (v79 - v81) << 12;
    v83 <<= 12;
    v85 = v84 + v80;
    v86 = v84 - v80;
    v87 = *((_DWORD *)v73 - 5);
    v88 = v83 + v82 + 16842752;
    v89 = v85 + 16842752;
    v90 = v86 + 16842752;
    v91 = v83 - v82 + 16842752;
    v92 = 4816 * (v77 + v87 + v76 + v78) - 3685 * (v76 + v87);
    v93 = -1597 * (v77 + v87);
    v94 = 4816 * (v77 + v87 + v76 + v78) - 10497 * (v77 + v78);
    v95 = -8034 * (v76 + v78);
    v96 = v94 + v93 + 8410 * v77;
    v112 = v92 + v93 + 6149 * v87;
    v97 = v95 + v92 + 1223 * v76;
    v98 = v95 + 12586 * v78;
    v99 = v112;
    v100 = v94 + v98;
    v101 = (v112 + v88) >> 17;
    if ( (unsigned int)v101 > 0xFF )
    {
      if ( v101 >= 0 )
        LOBYTE(v101) = -1;
      else
        LOBYTE(v101) = 0;
    }
    *(v74 - 1) = v101;
    v102 = (v88 - v99) >> 17;
    if ( (unsigned int)v102 > 0xFF )
    {
      if ( v102 >= 0 )
        LOBYTE(v102) = -1;
      else
        LOBYTE(v102) = 0;
    }
    v74[6] = v102;
    v103 = (v89 + v100) >> 17;
    if ( (unsigned int)v103 > 0xFF )
    {
      if ( v103 >= 0 )
        LOBYTE(v103) = -1;
      else
        LOBYTE(v103) = 0;
    }
    *v74 = v103;
    v104 = (v89 - v100) >> 17;
    if ( (unsigned int)v104 > 0xFF )
    {
      if ( v104 >= 0 )
        LOBYTE(v104) = -1;
      else
        LOBYTE(v104) = 0;
    }
    v74[5] = v104;
    v105 = (v90 + v96) >> 17;
    if ( (unsigned int)v105 > 0xFF )
    {
      if ( v105 >= 0 )
        LOBYTE(v105) = -1;
      else
        LOBYTE(v105) = 0;
    }
    v74[1] = v105;
    v106 = (v90 - v96) >> 17;
    if ( (unsigned int)v106 > 0xFF )
    {
      if ( v106 >= 0 )
        LOBYTE(v106) = -1;
      else
        LOBYTE(v106) = 0;
    }
    v74[4] = v106;
    v107 = (v91 + v97) >> 17;
    if ( (unsigned int)v107 > 0xFF )
    {
      if ( v107 >= 0 )
        LOBYTE(v107) = -1;
      else
        LOBYTE(v107) = 0;
    }
    v74[2] = v107;
    v108 = (v91 - v97) >> 17;
    if ( (unsigned int)v108 > 0xFF )
    {
      if ( v108 >= 0 )
        LOBYTE(v108) = -1;
      else
        LOBYTE(v108) = 0;
    }
    v109 = v115;
    v73 = (__int64 *)(v113 + 32);
    v74[3] = v108;
    v74 += v109;
    v110 = v114-- == 1;
    v113 = (__int64)v73;
  }
  while ( !v110 );
  return 0; /* no result: rax is residue at 0x140163608 */
}
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117

// 1401634D2: conditional instruction was optimized away because eax.4>=100
// 1401634F6: conditional instruction was optimized away because ebp.4>=100
// 14016351A: conditional instruction was optimized away because eax.4>=100
// 140163543: conditional instruction was optimized away because r12d.4>=100
// 140163567: conditional instruction was optimized away because eax.4>=100
// 140163590: conditional instruction was optimized away because r14d.4>=100
// 1401635B4: conditional instruction was optimized away because eax.4>=100
// 1401635DD: conditional instruction was optimized away because r15d.4>=100

//----- (0000000140163640) ----------------------------------------------------
__int64            sub_140163640(_QWORD *a1, int a2,      __m128i *a3)
{
  __m128i v3;
  __m128i v4;
  __m128i v5;
  __m128i v6;
  __m128i v7;
  __m128i v8;
  __m128i v9;
  __m128i v10;
  __m128i v11;
  __m128i v12;
  __m128i v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __m128i v28;
  __m128i v29;
  __m128i v30;
  __m128i v31;
  __m128i v32;
  __m128i v33;
  __m128i v34;
  __m128i v35;
  __m128i v36;
  __m128i v37;
  __m128i si128;
  __m128i v39;
  __m128i v40;
  __m128i v41;
  __m128i v42;
  __m128i v43;
  __m128i v44;
  __m128i v45;
  __m128i v46;
  __m128i v47;
  __m128i v48;
  __m128i v49;
  __m128i v50;
  __m128i v51;
  __m128i v52;
  __m128i v53;
  __m128i v54;
  __m128i v55;
  __m128i v56;
  __m128i v57;
  __m128i v58;
  __m128i v59;
  __m128i v60;
  __m128i v61;
  __m128i v62;
  __m128i v63;
  __m128i v64;
  __m128i v65;
  __m128i v66;
  __m128i v67;
  __m128i v68;
  __m128i v69;
  __m128i v70;
  __m128i v71;
  __m128i v72;
  __m128i v73;
  __m128i v74;
  __m128i v75;
  __m128i v76;
  __m128i v77;
  __m128i v78;
  __m128i v79;
  __m128i v80;
  __m128i v81;
  __m128i v82;
  __m128i v83;
  __m128i v84;
  __m128i v85;
  __m128i v86;
  __m128i v87;
  __m128i v88;
  __m128i v89;
  __m128i v90;
  __m128i v91;
  __m128i v92;
  __m128i v93;
  __m128i v94;
  __m128i v95;
  __m128i v96;
  __m128i v97;
  __m128i v98;
  __m128i v99;
  __m128i v100;
  __m128i v101;
  __m128i v102;
  __m128i v103;
  __m128i v104;
  __m128i v105;
  __m128i v106;
  __m128i v107;
  __m128i v108;
  __m128i v109;
  __m128i v110;
  __m128i v111;
  __m128i v112;
  __m128i v113;
  __m128i v114;
  __m128i v115;
  __m128i v116;
  __m128i v117;
  __m128i v118;
  __m128i v119;
  __m128i v120;
  __m128i v121;
  __m128i v122;
  __m128i v123;
  __m128i v124;
  __m128i v125;
  __m128i v126;
  __m128i v127;
  __m128i v128;
  __m128i v130;
  __m128i v131;
  __m128i v132;
  __m128i v133;
  __m128i v134;
  __m128i v135;
  __m128i v136;
  __m128i v137;
  __m128i v138;
  __m128i v139;
  _QWORD *v140;
  __m128i v141;
  __m128i v142;
  __m128i v143;
  __m128i v144;
  _QWORD *v145;
  _QWORD *v146;
  _QWORD *v147;
  _QWORD *v148;
  _QWORD *v149;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140163640[128];
#define v150 (*(__m128i (*))(void *)(sr_frame_140163640 + 0)) /* [rsp+0h] */
#define v151 (*(__m128i (*))(void *)(sr_frame_140163640 + 16)) /* [rsp+10h] */
#define v152 (*(__m128i (*))(void *)(sr_frame_140163640 + 32)) /* [rsp+20h] */
#define v153 (*(__m128i (*))(void *)(sr_frame_140163640 + 48)) /* [rsp+30h] */
#define v154 (*(__m128i (*))(void *)(sr_frame_140163640 + 64)) /* [rsp+40h] */
#define v155 (*(__m128i (*))(void *)(sr_frame_140163640 + 80)) /* [rsp+50h] */
#define v156 (*(__m128i (*))(void *)(sr_frame_140163640 + 96)) /* [rsp+60h] */
#define v157 (*(__m128i (*))(void *)(sr_frame_140163640 + 112)) /* [rsp+70h] */

  v3 = _mm_loadu_si128(a3 + 1);
  v4 = _mm_loadu_si128(a3 + 5);
  v5 = _mm_loadu_si128(a3 + 3);
  v6 = _mm_loadu_si128(a3);
  v7 = _mm_loadu_si128(a3 + 2);
  v8 = _mm_unpackhi_epi16(v7, a3[6]);
  v9 = _mm_unpacklo_epi16(v7, a3[6]);
  v10 = _mm_loadu_si128(a3 + 7);
  v156 = _mm_madd_epi16(v8, _mm_load_si128((const __m128i *)&xmmword_140279960));
  v11 = v10;
  v12 = _mm_add_epi16(v10, v3);
  v13 = _mm_add_epi16(_mm_loadu_si128(a3 + 4), v6);
  v14 = _mm_unpacklo_epi16(v10, v5);
  v15 = _mm_sub_epi16(v6, a3[4]);
  v16 = v9;
  v17 = _mm_madd_epi16(v14, _mm_load_si128((const __m128i *)&xmmword_140279940));
  v153 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), v13), 4u);
  v155 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), v15), 4u);
  v18 = _mm_srai_epi32(_mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), v13), 4u);
  v19 = _mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), v15);
  v152 = _mm_madd_epi16(v9, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  v20 = _mm_unpacklo_epi16(v4, v3);
  v154 = _mm_madd_epi16(v8, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  v21 = _mm_unpackhi_epi16(v4, v3);
  v22 = _mm_add_epi16(v4, v5);
  v23 = _mm_unpacklo_epi16(v12, v22);
  v24 = _mm_unpackhi_epi16(v11, v5);
  v25 = _mm_unpackhi_epi16(v12, v22);
  v26 = _mm_madd_epi16(v25, _mm_load_si128((const __m128i *)&xmmword_140279230));
  v27 = _mm_madd_epi16(v25, _mm_load_si128((const __m128i *)&xmmword_140279950));
  v151 = v18;
  v28 = v23;
  v29 = _mm_madd_epi16(v23, _mm_load_si128((const __m128i *)&xmmword_140279950));
  v30 = _mm_madd_epi16(v28, _mm_load_si128((const __m128i *)&xmmword_140279230));
  v31 = _mm_add_epi32(_mm_madd_epi16(v24, _mm_load_si128((const __m128i *)&xmmword_140279940)), v26);
  v157 = _mm_madd_epi16(v16, _mm_load_si128((const __m128i *)&xmmword_140279960));
  v32 = _mm_add_epi32(_mm_madd_epi16(v21, _mm_load_si128((const __m128i *)&xmmword_140279980)), v27);
  v33 = _mm_srai_epi32(v19, 4u);
  v34 = _mm_add_epi32(_mm_madd_epi16(v20, _mm_load_si128((const __m128i *)&xmmword_140279980)), v29);
  v35 = _mm_add_epi32(_mm_madd_epi16(v14, _mm_load_si128((const __m128i *)&xmmword_140279210)), v29);
  v36 = _mm_add_epi32(v17, v30);
  v37 = _mm_add_epi32(_mm_madd_epi16(v24, _mm_load_si128((const __m128i *)&xmmword_140279210)), v27);
  si128 = _mm_load_si128((     __m128i *)&xmmword_1402791A0);
  v39 = _mm_add_epi32(_mm_madd_epi16(v20, _mm_load_si128((const __m128i *)&xmmword_140279220)), v30);
  v40 = _mm_add_epi32(_mm_add_epi32(_mm_load_si128(&v153), v152), si128);
  v41 = _mm_add_epi32(_mm_madd_epi16(v21, _mm_load_si128((const __m128i *)&xmmword_140279220)), v26);
  v42 = _mm_add_epi32(_mm_add_epi32(_mm_load_si128(&v151), v154), si128);
  v43 = _mm_srai_epi32(_mm_add_epi32(v40, v39), 0xAu);
  v44 = _mm_sub_epi32(v40, v39);
  v45 = _mm_load_si128(&v155);
  v46 = _mm_sub_epi32(v45, v157);
  v47 = _mm_add_epi32(_mm_add_epi32(v45, v157), si128);
  v150 = _mm_packs_epi32(v43, _mm_srai_epi32(_mm_add_epi32(v42, v41), 0xAu));
  v48 = _mm_add_epi32(v46, si128);
  v49 = _mm_add_epi32(_mm_sub_epi32(_mm_load_si128(&v153), v152), _mm_load_si128((const __m128i *)&xmmword_1402791A0));
  v50 = _mm_packs_epi32(_mm_srai_epi32(v44, 0xAu), _mm_srai_epi32(_mm_sub_epi32(v42, v41), 0xAu));
  v51 = _mm_add_epi32(_mm_add_epi32(v33, v156), si128);
  v52 = _mm_add_epi32(_mm_sub_epi32(v33, v156), si128);
  v53 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(v47, v35), 0xAu), _mm_srai_epi32(_mm_add_epi32(v51, v37), 0xAu));
  v54 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(v47, v35), 0xAu), _mm_srai_epi32(_mm_sub_epi32(v51, v37), 0xAu));
  v55 = _mm_add_epi32(v52, v32);
  v56 = _mm_sub_epi32(v52, v32);
  v57 = _mm_add_epi32(_mm_sub_epi32(_mm_load_si128(&v151), v154), _mm_load_si128((const __m128i *)&xmmword_1402791A0));
  v58 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(v48, v34), 0xAu), _mm_srai_epi32(v55, 0xAu));
  v59 = _mm_packs_epi32(_mm_srai_epi32(_mm_add_epi32(v49, v36), 0xAu), _mm_srai_epi32(_mm_add_epi32(v57, v31), 0xAu));
  v60 = _mm_load_si128(&v150);
  v61 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(v49, v36), 0xAu), _mm_srai_epi32(_mm_sub_epi32(v57, v31), 0xAu));
  v62 = _mm_unpacklo_epi16(v60, v61);
  v63 = _mm_packs_epi32(_mm_srai_epi32(_mm_sub_epi32(v48, v34), 0xAu), _mm_srai_epi32(v56, 0xAu));
  v150 = _mm_unpackhi_epi16(v60, v61);
  v64 = _mm_unpacklo_epi16(v59, v50);
  v65 = _mm_unpacklo_epi16(v58, v54);
  v66 = _mm_unpacklo_epi16(v53, v63);
  v67 = _mm_unpackhi_epi16(v59, v50);
  v68 = _mm_unpackhi_epi16(v53, v63);
  v69 = _mm_unpacklo_epi16(v62, v65);
  v70 = _mm_unpackhi_epi16(v62, v65);
  v71 = _mm_unpacklo_epi16(v66, v64);
  v72 = _mm_unpackhi_epi16(v66, v64);
  v73 = _mm_unpacklo_epi16(v68, v67);
  v74 = _mm_unpackhi_epi16(v68, v67);
  v75 = _mm_unpacklo_epi16(v69, v71);
  v76 = _mm_unpackhi_epi16(v69, v71);
  v77 = _mm_unpacklo_epi16(v70, v72);
  v78 = _mm_unpackhi_epi16(v70, v72);
  v79 = _mm_unpackhi_epi16(v58, v54);
  v80 = _mm_load_si128(&v150);
  v81 = _mm_unpackhi_epi16(v80, v79);
  v82 = _mm_unpacklo_epi16(v80, v79);
  v83 = _mm_unpacklo_epi16(v81, v74);
  v84 = _mm_unpacklo_epi16(v82, v73);
  v85 = _mm_unpacklo_epi16(v77, v83);
  v86 = _mm_unpackhi_epi16(v77, v83);
  v87 = _mm_madd_epi16(v85, _mm_load_si128((const __m128i *)&xmmword_140279960));
  v88 = _mm_madd_epi16(v85, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  v89 = _mm_add_epi16(v84, v75);
  v90 = _mm_sub_epi16(v75, v84);
  v91 = _mm_unpackhi_epi16(v81, v74);
  v92 = _mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), v89);
  v93 = _mm_unpackhi_epi16(v82, v73);
  v153 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), v90), 4u);
  v94 = _mm_add_epi16(v91, v76);
  v152 = _mm_srai_epi32(_mm_unpacklo_epi16(_mm_cvtsi32_si128((int)(0LL)), v89), 4u);
  v95 = _mm_add_epi16(v93, v78);
  v151 = _mm_srai_epi32(_mm_unpackhi_epi16(_mm_cvtsi32_si128((int)(0LL)), v90), 4u);
  v96 = _mm_unpacklo_epi16(v94, v95);
  v97 = _mm_madd_epi16(v86, _mm_load_si128((const __m128i *)&xmmword_140279960));
  v98 = _mm_madd_epi16(v96, _mm_load_si128((const __m128i *)&xmmword_140279230));
  v99 = _mm_madd_epi16(v86, _mm_load_si128((const __m128i *)&xmmword_1402791F0));
  v100 = _mm_madd_epi16(v96, _mm_load_si128((const __m128i *)&xmmword_140279950));
  v101 = _mm_unpackhi_epi16(v94, v95);
  v102 = _mm_srai_epi32(v92, 4u);
  v103 = _mm_madd_epi16(v101, _mm_load_si128((const __m128i *)&xmmword_140279230));
  v104 = _mm_unpacklo_epi16(v91, v78);
  v105 = _mm_unpacklo_epi16(v93, v76);
  v106 = _mm_unpackhi_epi16(v91, v78);
  v107 = _mm_madd_epi16(v106, _mm_load_si128((const __m128i *)&xmmword_140279210));
  v108 = _mm_unpackhi_epi16(v93, v76);
  v150 = _mm_madd_epi16(v101, _mm_load_si128((const __m128i *)&xmmword_140279950));
  v109 = _mm_add_epi32(_mm_madd_epi16(v106, _mm_load_si128((const __m128i *)&xmmword_140279940)), v103);
  v154 = _mm_add_epi32(_mm_madd_epi16(v108, _mm_load_si128((const __m128i *)&xmmword_140279220)), v103);
  v110 = _mm_add_epi32(_mm_madd_epi16(v104, _mm_load_si128((const __m128i *)&xmmword_140279940)), v98);
  v111 = _mm_add_epi32(_mm_madd_epi16(v108, _mm_load_si128((const __m128i *)&xmmword_140279980)), v150);
  v112 = v105;
  v113 = _mm_load_si128(&v153);
  v114 = _mm_sub_epi32(v113, v87);
  v115 = _mm_add_epi32(v113, v87);
  v155 = _mm_add_epi32(v107, v150);
  v116 = _mm_sub_epi32(_mm_load_si128(&v151), v97);
  v156 = _mm_add_epi32(_mm_madd_epi16(v104, _mm_load_si128((const __m128i *)&xmmword_140279210)), v100);
  v117 = _mm_load_si128(&v151);
  v118 = _mm_add_epi32(_mm_madd_epi16(v105, _mm_load_si128((const __m128i *)&xmmword_140279220)), v98);
  v119 = _mm_load_si128((     __m128i *)&xmmword_1402791E0);
  v120 = _mm_add_epi32(_mm_madd_epi16(v112, _mm_load_si128((const __m128i *)&xmmword_140279980)), v100);
  v121 = _mm_load_si128(&v152);
  v151 = _mm_add_epi32(v116, v119);
  v122 = _mm_add_epi32(v115, v119);
  v157 = v118;
  v153 = _mm_add_epi32(v114, v119);
  v152 = _mm_add_epi32(_mm_sub_epi32(v121, v88), v119);
  v123 = _mm_add_epi32(_mm_add_epi32(v121, v88), v119);
  v124 = _mm_add_epi32(_mm_add_epi32(v102, v99), v119);
  v125 = _mm_add_epi32(_mm_add_epi32(v117, v97), v119);
  v126 = _mm_add_epi32(_mm_sub_epi32(v102, v99), v119);
  v127 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(v123, v157), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(v124, v154), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(v122, v156), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(v125, v155), 0x11u)));
  v128 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(v153, v120), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(_mm_load_si128(&v151), v111), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_add_epi32(_mm_load_si128(&v152), v110), 0x11u),
             _mm_srai_epi32(_mm_add_epi32(v126, v109), 0x11u)));
  v130 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(v122, v156), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(v125, v155), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(v123, v157), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(v124, v154), 0x11u)));
  v131 = _mm_packus_epi16(
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&v152), v110), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(v126, v109), 0x11u)),
           _mm_packs_epi32(
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&v153), v120), 0x11u),
             _mm_srai_epi32(_mm_sub_epi32(_mm_load_si128(&v151), v111), 0x11u)));
  v132 = _mm_unpacklo_epi8(v128, v130);
  v133 = _mm_unpacklo_epi8(v127, v131);
  v134 = _mm_unpackhi_epi8(v127, v131);
  v135 = _mm_unpacklo_epi8(v133, v132);
  v136 = _mm_unpackhi_epi8(v133, v132);
  v137 = _mm_unpackhi_epi8(v128, v130);
  v138 = _mm_unpacklo_epi8(v134, v137);
  v139 = _mm_unpacklo_epi8(v135, v138);
  *a1 = SR_VEC_LANES(128, v139, i64)[0];
  v140 = (_QWORD *)((char *)a1 + a2);
  v141 = _mm_unpackhi_epi8(v135, v138);
  v142 = _mm_unpackhi_epi8(v134, v137);
  v143 = _mm_unpacklo_epi8(v136, v142);
  v144 = _mm_unpackhi_epi8(v136, v142);
  *v140 = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(v139, 78), u64)[0];
  v145 = (_QWORD *)((char *)v140 + a2);
  *v145 = SR_VEC_LANES(128, v141, i64)[0];
  v146 = (_QWORD *)((char *)v145 + a2);
  *v146 = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(v141, 78), u64)[0];
  v147 = (_QWORD *)((char *)v146 + a2);
  *v147 = SR_VEC_LANES(128, v143, i64)[0];
  v148 = (_QWORD *)((char *)v147 + a2);
  *v148 = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(v143, 78), u64)[0];
  v149 = (_QWORD *)((char *)v148 + a2);
  *v149 = SR_VEC_LANES(128, v144, i64)[0];
  *(_QWORD *)((char *)v149 + a2) = SR_VEC_READ_LANES(128, _mm_shuffle_epi32(v144, 78), u64)[0];
  return a2;
}
#undef v150
#undef v151
#undef v152
#undef v153
#undef v154
#undef v155
#undef v156
#undef v157

//----- (0000000140163E70) ----------------------------------------------------
__int64            sub_140163E70(__int64 a1, char *a2, char *a3, unsigned int *a4)
{
  int *v7;
  __int64 *v8;
  int *v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int *v13;
  _QWORD *v14;
  __int64 *v15;
  __int64 v16;
  int *v17;
  char *v18;
  unsigned int *v19;
  int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  int v25;
  int *v26;
  char *v27;
  unsigned int *v28;
       char *v29;
  int v30;
  _DWORD *i;
  int v32;
  __int64 v33;
  unsigned int v34;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140163E70[1168];
#define v36 (*(__int64 (*))(void *)(sr_frame_140163E70 + 0)) /* [rsp+0h] */
#define v37 (*(char (*))(void *)(sr_frame_140163E70 + 32)) /* [rsp+20h] */
#define v38 (*(_DWORD * (*))(void *)(sr_frame_140163E70 + 40)) /* [rsp+28h] */
#define v39 (*(int * (*))(void *)(sr_frame_140163E70 + 48)) /* [rsp+30h] */
#define v40 (*(_DWORD * (*))(void *)(sr_frame_140163E70 + 56)) /* [rsp+38h] */
#define v41 (*(char * (*))(void *)(sr_frame_140163E70 + 64)) /* [rsp+40h] */
#define v42 (*(unsigned int * (*))(void *)(sr_frame_140163E70 + 72)) /* [rsp+48h] */
#define v43 (*(_QWORD (*)[3])(void *)(sr_frame_140163E70 + 80)) /* [rsp+50h] */
#define v44 (*(int (*))(void *)(sr_frame_140163E70 + 104)) /* [rsp+68h] */
#define v45 (*(int (*))(void *)(sr_frame_140163E70 + 108)) /* [rsp+6Ch] */
#define v46 (*(_BYTE (*)[1024])(void *)(sr_frame_140163E70 + 128)) /* [rsp+80h] */
#define v47 (*(__int64 (*))(void *)(sr_frame_140163E70 + 1152)) /* [rsp+480h] */

  v41 = a2;
  v7 = (int *)a2;
  v8 = (__int64 *)sr_path_malloc(18568);
  *v8 = a1;
  if ( sub_14015F960(v8, 2) )
  {
    if ( v7 )
      *v7 = *(_DWORD *)*v8;
    if ( a3 )
      *(_DWORD *)a3 = *(_DWORD *)(*v8 + 4);
    if ( a4 )
    {
      v34 = 1;
      if ( *(int *)(*v8 + 8) >= 3 )
        v34 = 3;
      *a4 = v34;
    }
    free(v8);
  }
  else
  {
    v9 = (int *)*v8;
    v10 = *(_QWORD *)(*v8 + 216);
    *((_QWORD *)v9 + 24) = *(_QWORD *)(*v8 + 208);
    *((_QWORD *)v9 + 25) = v10;
    free(v8);
    v43[0] = a1;
    v11 = sub_140167D10((__int64)v43, 2, 0);
    v12 = v43[0];
    if ( v11 )
    {
      if ( v7 )
        *v7 = *(_DWORD *)v43[0];
      if ( a3 )
        *(_DWORD *)a3 = *(_DWORD *)(v12 + 4);
      if ( a4 )
        *a4 = *(_DWORD *)(v12 + 8);
    }
    else
    {
      *(_QWORD *)(v43[0] + 192LL) = *(_QWORD *)(v43[0] + 208LL);
      *(_QWORD *)(v12 + 200) = *(_QWORD *)(v12 + 216);
      v13 = (int *)sr_path_malloc(34928);
      if ( (unsigned int)sub_140160930(a1, v13, a4, 1) )
      {
        if ( v7 )
          *v7 = *v13;
        if ( a3 )
          *(_DWORD *)a3 = v13[1];
        free(v13);
      }
      else
      {
        free(v13);
        v14 = (_QWORD *)(a1 + 208);
        v45 = 255;
        v15 = (__int64 *)(a1 + 216);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        v16 = sub_14015C5E0(a1, (__int64)v43);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        if ( v16 )
        {
          if ( v7 )
            *v7 = *(_DWORD *)a1;
          if ( a3 )
            *(_DWORD *)a3 = *(_DWORD *)(a1 + 4);
          if ( a4 )
          {
            if ( LODWORD(v43[0]) == 24 && v44 == -16777216 )
              *a4 = 3;
            else
              *a4 = (v44 != 0) + 3;
          }
        }
        else
        {
          v17 = (int *)&v37;
          if ( v7 )
            v17 = v7;
          v39 = v17;
          v18 = &v37;
          if ( a3 )
            v18 = a3;
          v38 = v18;
          v19 = (unsigned int *)&v37;
          if ( a4 )
            v19 = a4;
          v40 = v19;
          v20 = sub_1401604F0(a1);
          if ( (v20 << 16) + (unsigned int)sub_1401604F0(a1) != 943870035 || (unsigned int)sub_1401604F0(a1) != 1 )
            goto LABEL_21;
          if ( *(_QWORD *)(a1 + 16) && (v21 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v21 < 6) )
          {
            *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
            (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v21));
          }
          else
          {
            *(_QWORD *)(a1 + 192) += 6LL;
          }
          if ( (unsigned int)sub_1401604F0(a1) <= 0x10
            && (v22 = sub_140160670(a1),
                *v38 = v22,
                v23 = sub_140160670(a1),
                *v39 = v23,
                (((unsigned int)sub_1401604F0(a1) - 8) & 0xFFFFFFF7) == 0)
            && (unsigned int)sub_1401604F0(a1) == 3 )
          {
            *v40 = 4;
          }
          else
          {
LABEL_21:
            v24 = *v15;
            *(_QWORD *)(a1 + 192) = *v14;
            *(_QWORD *)(a1 + 200) = v24;
            if ( !(unsigned int)sub_1401691A0(a1, v7, (int *)a3, (char *)a4)
              && !(unsigned int)sub_14016A7D0(a1, (char *)v7, a3, (int *)a4) )
            {
              v25 = 0;
              v26 = (int *)&v37;
              if ( v7 )
                v26 = v7;
              v39 = v26;
              v27 = &v37;
              if ( a3 )
                v27 = a3;
              v40 = v27;
              v28 = (unsigned int *)&v37;
              if ( a4 )
                v28 = a4;
              v42 = v28;
              if ( !(unsigned int)sub_140162BB0(a1) )
                goto LABEL_40;
              v29 = (     char *)sub_140162030(a1, (__int64)v46);
              v38 = v29;
              if ( !*v29 )
                goto LABEL_40;
              do
              {
                if ( !strcmp_sr(v29, "FORMAT=32-bit_rle_rgbe") )
                  v25 = 1;
                v29 = (     char *)sub_140162030(a1, (__int64)v46);
                v38 = v29;
              }
              while ( *v29 );
              v7 = (int *)v41;
              if ( !v25 )
                goto LABEL_40;
              v38 = (_DWORD *)sub_140162030(a1, (__int64)v46);
              if ( (unsigned int)strncmp_sr((const char *)(uintptr_t)(v38), (const char *)(uintptr_t)("-Y "), 3) )
                goto LABEL_40;
              v38 = (_DWORD *)((char *)v38 + 3);
              v30 = sub_14023CCCC((__int64)v38, (__int64 *)&v38, 0xAu);
              *v40 = v30;
              for ( i = v38; *(_BYTE *)i == 32; v38 = i )
                i = (_DWORD *)((char *)i + 1);
              if ( !(unsigned int)strncmp_sr((const char *)(uintptr_t)(i), (const char *)(uintptr_t)("+X "), 3) )
              {
                v38 = (_DWORD *)((char *)v38 + 3);
                v32 = sub_14023CCCC((__int64)v38, nullptr, 0xAu);
                *v39 = v32;
                *v42 = 3;
              }
              else
              {
LABEL_40:
                v33 = *v15;
                *(_QWORD *)(a1 + 192) = *v14;
                *(_QWORD *)(a1 + 200) = v33;
                if ( !(unsigned int)sub_14016E370(a1, v7, (int *)a3, a4) )
                  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown image type");
              }
            }
          }
        }
      }
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v36
#undef v37
#undef v38
#undef v39
#undef v40
#undef v41
#undef v42
#undef v43
#undef v44
#undef v45
#undef v46
#undef v47

//----- (00000001401643B0) ----------------------------------------------------
__int64            sub_1401643B0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  _QWORD *v5;
  int v6;
  __int64 v7;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401643B0[48];
#define v9 (*(__int64 (*)[4])(void *)(sr_frame_1401643B0 + 0)) /* [rsp+20h] */
#define v10 (*(int (*))(void *)(sr_frame_1401643B0 + 32)) /* [rsp+40h] */

  v9[0] = a1;
  if ( (unsigned int)sub_140167D10((__int64)v9, 2, 0) )
  {
    if ( v10 == 16 )
      return 1;
    v3 = v9[0];
    *(_QWORD *)(v9[0] + 192) = *(_QWORD *)(v9[0] + 208);
    *(_QWORD *)(v3 + 200) = *(_QWORD *)(v3 + 216);
  }
  else
  {
    v2 = v9[0];
    *(_QWORD *)(v9[0] + 192) = *(_QWORD *)(v9[0] + 208);
    *(_QWORD *)(v2 + 200) = *(_QWORD *)(v2 + 216);
  }
  v4 = sub_1401604F0(a1);
  if ( (v4 << 16) + (unsigned int)sub_1401604F0(a1) != 943870035 || (unsigned int)sub_1401604F0(a1) != 1 )
  {
    v5 = (_QWORD *)(a1 + 192);
LABEL_14:
    v7 = *(_QWORD *)(a1 + 216);
    *v5 = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = v7;
    return 0;
  }
  v5 = (_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(a1 + 16) && (v6 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v5, v6 < 6) )
  {
    *v5 = *(_QWORD *)(a1 + 200);
    (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v6));
  }
  else
  {
    *v5 += 6LL;
  }
  if ( (unsigned int)sub_1401604F0(a1) > 0x10 )
    goto LABEL_14;
  sub_140160670(a1);
  sub_140160670(a1);
  if ( (unsigned int)sub_1401604F0(a1) != 16 )
    goto LABEL_14;
  return 1;
}
#undef v9
#undef v10

//----- (0000000140164500) ----------------------------------------------------
__int64            sub_140164500(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, int a6, _WORD *a7)
{
  unsigned int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  signed int v16;
  unsigned int *v17;
  int i;
  int v19;
  __int64 v20;
  __int64 v21;
  signed int v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  int v32;
  unsigned int v33;
  unsigned __int64 v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  unsigned int v39;
  unsigned __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  int v45;
  int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int *v49;
  int v50;
  __int64 j;
  int v52;
  unsigned int v53;
  __int64 v54;
  int v55;
  __int64 v56;
  int v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  __int16 v62;

  if ( *(int *)(a1 + 18468) < 16 )
  {
    sub_140161D20((_QWORD *)a1);
    if ( *(int *)(a1 + 18468) < 16 )
      sub_140161D20((_QWORD *)a1);
  }
  v11 = *(_DWORD *)(a1 + 18464);
  v12 = *(unsigned __int8 *)(((unsigned __int64)v11 >> 23) + a3);
  if ( (_BYTE)v12 != 0xFF )
  {
    v13 = *(_DWORD *)(a1 + 18468);
    v14 = *(unsigned __int8 *)(((unsigned __int64)*(unsigned int *)(a1 + 18464) >> 23) + a3);
    v15 = *(unsigned __int8 *)(v12 + a3 + 1280);
    if ( v15 > v13 )
      goto LABEL_48;
    *(_DWORD *)(a1 + 18464) = v11 << v15;
    *(_DWORD *)(a1 + 18468) = v13 - v15;
    v16 = *(unsigned __int8 *)(v14 + a3 + 1024);
    goto LABEL_16;
  }
  v17 = (unsigned int *)(a3 + 1580);
  for ( i = 10; HIWORD(v11) >= *v17; ++v17 )
    ++i;
  v19 = *(_DWORD *)(a1 + 18468);
  if ( i != 17 )
  {
    if ( i > v19 )
      goto LABEL_48;
    v20 = (int)(*(_DWORD *)(a3 + 4LL * i + 1612) + (dword_14026FBF0[i] & (v11 >> (32 - i))));
    v21 = v20 + a3;
    if ( (dword_14026FBF0[*(unsigned __int8 *)(v20 + a3 + 1280)] & (v11 >> (32 - *(_BYTE *)(v20 + a3 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * v20 + 512) )
    {
      crt_assert(
        (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
        (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
        0x81Au);
      v19 = *(_DWORD *)(a1 + 18468);
      v11 = *(_DWORD *)(a1 + 18464);
    }
    *(_DWORD *)(a1 + 18464) = v11 << i;
    *(_DWORD *)(a1 + 18468) = v19 - i;
    v16 = *(unsigned __int8 *)(v21 + 1024);
LABEL_16:
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    a2[5] = 0;
    a2[6] = 0;
    a2[7] = 0;
    if ( !v16 )
      goto LABEL_21;
    v22 = *(_DWORD *)(a1 + 18468);
    if ( v22 < v16 )
    {
      sub_140161D20((_QWORD *)a1);
      v22 = *(_DWORD *)(a1 + 18468);
    }
    v23 = *(_DWORD *)(a1 + 18464);
    v24 = __ROL4__(v23, v16);
    if ( (unsigned int)v16 < 0x11 )
    {
      *(_DWORD *)(a1 + 18468) = v22 - v16;
      v25 = v16;
      v26 = dword_14026FC40[v25] & ~(v23 >> 31);
      v27 = v24 & dword_14026FBF0[v25];
      *(_DWORD *)(a1 + 18464) = v24 & ~dword_14026FBF0[v25];
      v28 = v27 + v26;
    }
    else
    {
LABEL_21:
      v28 = 0;
    }
    v29 = 1;
    v30 = 96LL * a6;
    v31 = v28 + *(_DWORD *)(v30 + a1 + 18104);
    *(_DWORD *)(v30 + a1 + 18104) = v31;
    *(_WORD *)a2 = *a7 * v31;
    while ( 1 )
    {
      v32 = *(_DWORD *)(a1 + 18468);
      if ( v32 < 16 )
      {
        sub_140161D20((_QWORD *)a1);
        v32 = *(_DWORD *)(a1 + 18468);
      }
      v33 = *(_DWORD *)(a1 + 18464);
      v34 = (unsigned __int64)v33 >> 23;
      v35 = *(__int16 *)(a5 + 2 * v34);
      if ( *(_WORD *)(a5 + 2 * v34) )
      {
        v36 = v35 & 0xF;
        v37 = ((v35 >> 4) & 0xF) + v29;
        *(_DWORD *)(a1 + 18464) = v33 << v36;
        v38 = v37;
        v29 = v37 + 1;
        *(_DWORD *)(a1 + 18468) = v32 - v36;
        *((_WORD *)a2 + byte_14026FC80[v38]) = (v35 >> 8) * a7[byte_14026FC80[v38]];
      }
      else
      {
        v39 = *(_DWORD *)(a1 + 18464);
        if ( v32 < 16 )
        {
          sub_140161D20((_QWORD *)a1);
          v33 = *(_DWORD *)(a1 + 18464);
          v39 = v33;
        }
        v40 = (unsigned __int64)v39 >> 23;
        v41 = *(unsigned __int8 *)(v40 + a4);
        if ( (_BYTE)v41 == 0xFF )
        {
          v48 = HIWORD(v39);
          v49 = (unsigned int *)(a4 + 1580);
          v50 = 10;
          for ( j = 10; v48 >= *v49; ++j )
          {
            ++v50;
            ++v49;
          }
          v52 = *(_DWORD *)(a1 + 18468);
          if ( v50 == 17 )
          {
            *(_DWORD *)(a1 + 18468) = v52 - 16;
            goto LABEL_48;
          }
          if ( v50 > v52 )
            goto LABEL_48;
          v53 = v33;
          v54 = (int)(*(_DWORD *)(a4 + 4 * j + 1612) + (dword_14026FBF0[j] & (v33 >> (32 - v50))));
          if ( (dword_14026FBF0[*(unsigned __int8 *)(v54 + a4 + 1280)] & (v33 >> (32 - *(_BYTE *)(v54 + a4 + 1280)))) != *(unsigned __int16 *)(a4 + 2 * v54 + 512) )
          {
            crt_assert(
              (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x81Au);
            v52 = *(_DWORD *)(a1 + 18468);
            v53 = *(_DWORD *)(a1 + 18464);
          }
          v46 = v52 - v50;
          v45 = v53 << v50;
          *(_DWORD *)(a1 + 18464) = v45;
          *(_DWORD *)(a1 + 18468) = v46;
          v47 = *(unsigned __int8 *)(v54 + a4 + 1024);
        }
        else
        {
          v42 = *(_DWORD *)(a1 + 18468);
          v43 = *(unsigned __int8 *)(v40 + a4);
          v44 = *(unsigned __int8 *)(v41 + a4 + 1280);
          if ( v44 > v42 )
            goto LABEL_48;
          v45 = v39 << v44;
          v46 = v42 - v44;
          *(_DWORD *)(a1 + 18464) = v45;
          *(_DWORD *)(a1 + 18468) = v46;
          v47 = *(unsigned __int8 *)(v43 + a4 + 1024);
        }
        v55 = v46;
        v56 = v47 & 0xF;
        if ( (v47 & 0xF) != 0 )
        {
          v57 = (v47 >> 4) + v29;
          v58 = v57;
          v29 = v57 + 1;
          v59 = byte_14026FC80[v58];
          if ( v46 < (int)v56 )
          {
            sub_140161D20((_QWORD *)a1);
            v45 = *(_DWORD *)(a1 + 18464);
            v55 = *(_DWORD *)(a1 + 18468);
          }
          *(_DWORD *)(a1 + 18468) = v55 - v56;
          v60 = __ROL4__(v45, v56);
          v61 = dword_14026FBF0[v56];
          v62 = ~(unsigned __int16)(v45 >> 31) & dword_14026FC40[v56];
          *(_DWORD *)(a1 + 18464) = v60 & ~v61;
          *((_WORD *)a2 + v59) = ((v60 & v61) + v62) * a7[v59];
        }
        else
        {
          if ( v47 != 240 )
            return 1;
          v29 += 16;
        }
      }
      if ( v29 >= 64 )
        return 1;
    }
  }
  *(_DWORD *)(a1 + 18468) = v19 - 16;
LABEL_48:
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad huffman code");
  return 0;
}

//----- (0000000140164A80) ----------------------------------------------------
__int64            sub_140164A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v7;
  int v10;
  int v11;
  int v12;
  unsigned int v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  unsigned int v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int *v30;
  int v31;
  __int64 i;
  int v33;
  __int64 v34;
  char v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  unsigned __int16 v50;
  unsigned __int8 *v51;
  __int16 *v52;
  int v53;
  int v54;
  __int16 v55;
  __int16 v56;
  __int64 v57;
  unsigned int v58;
  unsigned __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  int v63;
  int v64;
  int v65;
  unsigned int v66;
  unsigned int *v67;
  int v68;
  __int64 j;
  int v70;
  __int64 v71;
  char v72;
  __int64 v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  bool v79;
  __int64 v80;
  __int16 *v81;
  int v82;
  int v83;
  __int16 v84;
  __int16 v85;

  v4 = *(int *)(a1 + 18484);
  v7 = a2;
  if ( !(_DWORD)v4 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't merge dc and ac");
    return 0;
  }
  v10 = *(_DWORD *)(a1 + 18500);
  v11 = *(_DWORD *)(a1 + 18496);
  if ( !*(_DWORD *)(a1 + 18492) )
  {
    if ( v10 )
    {
      *(_DWORD *)(a1 + 18500) = v10 - 1;
      return 1;
    }
    while ( 1 )
    {
      v12 = *(_DWORD *)(a1 + 18468);
      if ( v12 < 16 )
      {
        sub_140161D20((_QWORD *)a1);
        v12 = *(_DWORD *)(a1 + 18468);
        v7 = a2;
      }
      v13 = *(_DWORD *)(a1 + 18464);
      v14 = (unsigned __int64)v13 >> 23;
      v15 = *(__int16 *)(a4 + 2 * v14);
      if ( *(_WORD *)(a4 + 2 * v14) )
      {
        v16 = v15 & 0xF;
        v17 = ((v15 >> 4) & 0xF) + v4;
        v18 = v17;
        LODWORD(v4) = v17 + 1;
        *(_DWORD *)(a1 + 18464) = v13 << v16;
        *(_DWORD *)(a1 + 18468) = v12 - v16;
        *(_WORD *)(v7 + 2LL * byte_14026FC80[v18]) = (unsigned __int16)(v15 >> 8) << v11;
      }
      else
      {
        v19 = *(_DWORD *)(a1 + 18464);
        if ( v12 < 16 )
        {
          sub_140161D20((_QWORD *)a1);
          v13 = *(_DWORD *)(a1 + 18464);
          v19 = v13;
        }
        v20 = (unsigned __int64)v19 >> 23;
        v21 = *(unsigned __int8 *)(v20 + a3);
        if ( (_BYTE)v21 == 0xFF )
        {
          v29 = HIWORD(v19);
          v30 = (unsigned int *)(a3 + 1580);
          v31 = 10;
          for ( i = 10; v29 >= *v30; ++i )
          {
            ++v31;
            ++v30;
          }
          v33 = *(_DWORD *)(a1 + 18468);
          if ( v31 == 17 )
          {
            v49 = v33 - 16;
            goto LABEL_94;
          }
          if ( v31 > v33 )
            goto LABEL_95;
          v34 = (int)(*(_DWORD *)(a3 + 4 * i + 1612) + (dword_14026FBF0[i] & (v13 >> (32 - v31))));
          if ( (dword_14026FBF0[*(unsigned __int8 *)(a3 + v34 + 1280)] & (v13 >> (32 - *(_BYTE *)(a3 + v34 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * v34 + 512) )
          {
            crt_assert(
              (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x81Au);
            v33 = *(_DWORD *)(a1 + 18468);
            v13 = *(_DWORD *)(a1 + 18464);
          }
          v26 = v33 - v31;
          v27 = v13 << v31;
          *(_DWORD *)(a1 + 18464) = v27;
          v25 = v27;
          *(_DWORD *)(a1 + 18468) = v26;
          v28 = *(unsigned __int8 *)(a3 + v34 + 1024);
        }
        else
        {
          v22 = *(_DWORD *)(a1 + 18468);
          v23 = *(unsigned __int8 *)(v20 + a3);
          v24 = *(unsigned __int8 *)(v21 + a3 + 1280);
          if ( v24 > v22 )
            goto LABEL_95;
          v25 = v19 << v24;
          v26 = v22 - v24;
          *(_DWORD *)(a1 + 18464) = v25;
          *(_DWORD *)(a1 + 18468) = v26;
          v27 = v25;
          v28 = *(unsigned __int8 *)(v23 + a3 + 1024);
        }
        v35 = v28;
        v36 = v26;
        v37 = v28 >> 4;
        v38 = v35 & 0xF;
        if ( v38 )
        {
          v39 = v37 + v4;
          v40 = v39;
          LODWORD(v4) = v39 + 1;
          v41 = byte_14026FC80[v40];
          if ( v26 < v38 )
          {
            sub_140161D20((_QWORD *)a1);
            v27 = *(_DWORD *)(a1 + 18464);
            v36 = *(_DWORD *)(a1 + 18468);
          }
          v7 = a2;
          v42 = __ROL4__(v27, v38);
          v43 = dword_14026FBF0[v38];
          v44 = dword_14026FC40[v38] & ~(v27 >> 31);
          *(_DWORD *)(a1 + 18468) = v36 - v38;
          *(_DWORD *)(a1 + 18464) = v42 & ~v43;
          *(_WORD *)(a2 + 2 * v41) = (((unsigned __int16)v42 & (unsigned __int16)v43) + (_WORD)v44) << v11;
        }
        else
        {
          if ( (unsigned int)v37 < 0xF )
          {
            v45 = 1 << v37;
            *(_DWORD *)(a1 + 18500) = 1 << v37;
            if ( (_DWORD)v37 )
            {
              v46 = 1 << v37;
              if ( v26 < (int)v37 )
              {
                sub_140161D20((_QWORD *)a1);
                v26 = *(_DWORD *)(a1 + 18468);
                v46 = *(_DWORD *)(a1 + 18500);
                v25 = *(_DWORD *)(a1 + 18464);
              }
              v47 = dword_14026FBF0[v37];
              *(_DWORD *)(a1 + 18468) = v26 - v37;
              v48 = __ROL4__(v25, v37);
              *(_DWORD *)(a1 + 18464) = v48 & ~v47;
              v45 = v46 + (v48 & v47);
            }
            *(_DWORD *)(a1 + 18500) = v45 - 1;
            return 1;
          }
          v7 = a2;
          LODWORD(v4) = v4 + 16;
        }
      }
      if ( (int)v4 > *(_DWORD *)(a1 + 18488) )
        return 1;
    }
  }
  v50 = 1 << v11;
  if ( !v10 )
  {
    v57 = *(int *)(a1 + 18484);
    while ( 1 )
    {
      if ( *(int *)(a1 + 18468) < 16 )
        sub_140161D20((_QWORD *)a1);
      v58 = *(_DWORD *)(a1 + 18464);
      v59 = (unsigned __int64)v58 >> 23;
      v60 = *(unsigned __int8 *)(v59 + a3);
      if ( (_BYTE)v60 == 0xFF )
      {
        v67 = (unsigned int *)(a3 + 1580);
        v68 = 10;
        for ( j = 10; HIWORD(v58) >= *v67; ++j )
        {
          ++v68;
          ++v67;
        }
        v70 = *(_DWORD *)(a1 + 18468);
        if ( v68 == 17 )
        {
          v49 = v70 - 16;
LABEL_94:
          *(_DWORD *)(a1 + 18468) = v49;
LABEL_95:
          *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad huffman code");
          return 0;
        }
        if ( v68 > v70 )
          goto LABEL_95;
        v71 = (int)(*(_DWORD *)(a3 + 4 * j + 1612) + (dword_14026FBF0[j] & (v58 >> (32 - v68))));
        if ( (dword_14026FBF0[*(unsigned __int8 *)(a3 + v71 + 1280)] & (v58 >> (32 - *(_BYTE *)(a3 + v71 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * v71 + 512) )
        {
          crt_assert(
            (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
            (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
            0x81Au);
          v70 = *(_DWORD *)(a1 + 18468);
          v58 = *(_DWORD *)(a1 + 18464);
        }
        v65 = v70 - v68;
        v64 = v58 << v68;
        *(_DWORD *)(a1 + 18464) = v64;
        *(_DWORD *)(a1 + 18468) = v65;
        v66 = *(unsigned __int8 *)(a3 + v71 + 1024);
      }
      else
      {
        v61 = *(_DWORD *)(a1 + 18468);
        v62 = *(unsigned __int8 *)(v59 + a3);
        v63 = *(unsigned __int8 *)(v60 + a3 + 1280);
        if ( v63 > v61 )
          goto LABEL_95;
        v64 = v58 << v63;
        v65 = v61 - v63;
        *(_DWORD *)(a1 + 18464) = v64;
        *(_DWORD *)(a1 + 18468) = v65;
        v66 = *(unsigned __int8 *)(v62 + a3 + 1024);
      }
      v72 = v66;
      v73 = v66 >> 4;
      v74 = v72 & 0xF;
      if ( v74 )
      {
        if ( v74 != 1 )
          goto LABEL_95;
        if ( v65 < 1 )
        {
          sub_140161D20((_QWORD *)a1);
          v65 = *(_DWORD *)(a1 + 18468);
          v64 = *(_DWORD *)(a1 + 18464);
        }
        LOWORD(v74) = v50;
        *(_DWORD *)(a1 + 18464) = 2 * v64;
        *(_DWORD *)(a1 + 18468) = v65 - 1;
        if ( v64 >= 0 )
          v74 = -(__int16)v50;
      }
      else if ( (unsigned int)v73 < 0xF )
      {
        v75 = (1 << v73) - 1;
        *(_DWORD *)(a1 + 18500) = v75;
        if ( (_DWORD)v73 )
        {
          if ( v65 < (int)v73 )
          {
            sub_140161D20((_QWORD *)a1);
            v65 = *(_DWORD *)(a1 + 18468);
            v75 = *(_DWORD *)(a1 + 18500);
            v64 = *(_DWORD *)(a1 + 18464);
          }
          v76 = __ROL4__(v64, v73);
          v77 = dword_14026FBF0[v73];
          *(_DWORD *)(a1 + 18468) = v65 - v73;
          *(_DWORD *)(a1 + 18464) = v76 & ~v77;
          *(_DWORD *)(a1 + 18500) = v75 + (v76 & v77);
        }
        LODWORD(v73) = 64;
      }
      v78 = *(_DWORD *)(a1 + 18488);
      v79 = (int)v4 <= v78;
      if ( (int)v4 > v78 )
        goto LABEL_91;
      v80 = a2;
      while ( 1 )
      {
        LODWORD(v4) = v4 + 1;
        v81 = (__int16 *)(v80 + 2LL * byte_14026FC80[v57++]);
        if ( *v81 )
        {
          v82 = *(_DWORD *)(a1 + 18468);
          if ( v82 < 1 )
          {
            sub_140161D20((_QWORD *)a1);
            v82 = *(_DWORD *)(a1 + 18468);
            v80 = a2;
          }
          v83 = *(_DWORD *)(a1 + 18464);
          *(_DWORD *)(a1 + 18464) = 2 * v83;
          *(_DWORD *)(a1 + 18468) = v82 - 1;
          if ( v83 < 0 )
          {
            v84 = *v81;
            if ( ((unsigned __int16)*v81 & v50) == 0 )
            {
              if ( v84 <= 0 )
                v85 = v84 - v50;
              else
                v85 = v50 + v84;
              *v81 = v85;
            }
          }
          goto LABEL_88;
        }
        if ( !(_DWORD)v73 )
          break;
        LODWORD(v73) = v73 - 1;
LABEL_88:
        if ( (int)v4 > *(_DWORD *)(a1 + 18488) )
          return 1;
      }
      *v81 = v74;
      v79 = (int)v4 <= *(_DWORD *)(a1 + 18488);
LABEL_91:
      if ( !v79 )
        return 1;
    }
  }
  *(_DWORD *)(a1 + 18500) = v10 - 1;
  if ( (int)v4 > *(_DWORD *)(a1 + 18488) )
    return 1;
  v51 = &byte_14026FC80[v4];
  do
  {
    v52 = (__int16 *)(v7 + 2LL * *v51);
    if ( *v52 )
    {
      v53 = *(_DWORD *)(a1 + 18468);
      if ( v53 < 1 )
      {
        sub_140161D20((_QWORD *)a1);
        v53 = *(_DWORD *)(a1 + 18468);
        v7 = a2;
      }
      v54 = *(_DWORD *)(a1 + 18464);
      *(_DWORD *)(a1 + 18464) = 2 * v54;
      *(_DWORD *)(a1 + 18468) = v53 - 1;
      if ( v54 < 0 )
      {
        v55 = *v52;
        if ( ((unsigned __int16)*v52 & v50) == 0 )
        {
          if ( v55 <= 0 )
            v56 = v55 - v50;
          else
            v56 = v50 + v55;
          *v52 = v56;
        }
      }
    }
    LODWORD(v4) = v4 + 1;
    ++v51;
  }
  while ( (int)v4 <= *(_DWORD *)(a1 + 18488) );
  return 1;
}

//----- (0000000140165200) ----------------------------------------------------
__int64            sub_140165200(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5;
  unsigned int v9;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  signed int v16;
  signed int v17;
  unsigned int *v18;
  int i;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;

  v5 = a4;
  if ( *(_DWORD *)(a1 + 18488) )
    goto LABEL_2;
  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1);
  if ( *(_DWORD *)(a1 + 18492) )
  {
    v29 = *(_DWORD *)(a1 + 18468);
    if ( v29 < 1 )
    {
      sub_140161D20((_QWORD *)a1);
      v29 = *(_DWORD *)(a1 + 18468);
    }
    v30 = *(_DWORD *)(a1 + 18464);
    *(_DWORD *)(a1 + 18464) = 2 * v30;
    *(_DWORD *)(a1 + 18468) = v29 - 1;
    if ( v30 < 0 )
      *(_WORD *)a2 += 1 << *(_DWORD *)(a1 + 18496);
    return 1;
  }
  *(_OWORD *)a2 = 0;
  *(_OWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  *(_OWORD *)(a2 + 64) = 0;
  *(_OWORD *)(a2 + 80) = 0;
  *(_OWORD *)(a2 + 96) = 0;
  *(_OWORD *)(a2 + 112) = 0;
  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1);
  v9 = *(_DWORD *)(a1 + 18464);
  v10 = (unsigned __int64)v9 >> 23;
  v11 = *(unsigned __int8 *)(v10 + a3);
  if ( (_BYTE)v11 == 0xFF )
  {
    v18 = (unsigned int *)(a3 + 1580);
    for ( i = 10; HIWORD(v9) >= *v18; ++v18 )
      ++i;
    v20 = *(_DWORD *)(a1 + 18468);
    if ( i == 17 )
    {
      *(_DWORD *)(a1 + 18468) = v20 - 16;
    }
    else if ( i <= v20 )
    {
      v21 = (int)(*(_DWORD *)(a3 + 4LL * i + 1612) + (dword_14026FBF0[i] & (v9 >> (32 - i))));
      v22 = v21 + a3;
      if ( (dword_14026FBF0[*(unsigned __int8 *)(v21 + a3 + 1280)] & (v9 >> (32 - *(_BYTE *)(v21 + a3 + 1280)))) != *(unsigned __int16 *)(a3 + 2 * v21 + 512) )
      {
        crt_assert(
          (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
          (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
          0x81Au);
        v20 = *(_DWORD *)(a1 + 18468);
        v9 = *(_DWORD *)(a1 + 18464);
      }
      v16 = v20 - i;
      v15 = v9 << i;
      *(_DWORD *)(a1 + 18464) = v15;
      *(_DWORD *)(a1 + 18468) = v16;
      v17 = *(unsigned __int8 *)(v22 + 1024);
      goto LABEL_20;
    }
LABEL_2:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't merge dc and ac");
    return 0;
  }
  v12 = *(_DWORD *)(a1 + 18468);
  v13 = *(unsigned __int8 *)(v10 + a3);
  v14 = *(unsigned __int8 *)(v11 + a3 + 1280);
  if ( v14 > v12 )
    goto LABEL_2;
  v15 = v9 << v14;
  v16 = v12 - v14;
  *(_DWORD *)(a1 + 18464) = v15;
  *(_DWORD *)(a1 + 18468) = v16;
  v17 = *(unsigned __int8 *)(v13 + a3 + 1024);
LABEL_20:
  if ( !v17 )
    goto LABEL_25;
  if ( v16 < v17 )
  {
    sub_140161D20((_QWORD *)a1);
    v15 = *(_DWORD *)(a1 + 18464);
  }
  v23 = __ROL4__(v15, v17);
  if ( (unsigned int)v17 <= 0x10 )
  {
    *(_DWORD *)(a1 + 18468) -= v17;
    v24 = v17;
    v25 = ~(v15 >> 31) & dword_14026FC40[v24];
    v26 = v23 & dword_14026FBF0[v24];
    *(_DWORD *)(a1 + 18464) = v23 & ~dword_14026FBF0[v24];
    v27 = v26 + v25;
  }
  else
  {
LABEL_25:
    v27 = 0;
  }
  v28 = v27 + *(_DWORD *)(96 * v5 + a1 + 18104);
  *(_DWORD *)(96 * v5 + a1 + 18104) = v28;
  *(_WORD *)a2 = (_WORD)v28 << *(_DWORD *)(a1 + 18496);
  return 1;
}

//----- (0000000140165570) ----------------------------------------------------
void            sub_140165570(_DWORD *a1)
{
  int v2;
  _DWORD *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char *v12;
  __int16 v13;
  __int16 v14;

  if ( a1[4620] )
  {
    v2 = 0;
    if ( *(int *)(*(_QWORD *)a1 + 8LL) > 0 )
    {
      v3 = a1 + 4540;
      do
      {
        v4 = 0;
        v5 = (*(v3 - 13) + 7) >> 3;
        v6 = (*(v3 - 12) + 7) >> 3;
        if ( v6 > 0 )
        {
          do
          {
            v7 = 0;
            if ( v5 > 0 )
            {
              v8 = 0;
              do
              {
                v9 = 16;
                v10 = *(_QWORD *)v3 + 2LL * ((v7 + v4 * v3[2]) << 6);
                v11 = v10 + 2;
                v12 = (char *)&a1[32 * (__int64)(int)*(v3 - 17) + 3362] - v10;
                do
                {
                  v13 = *(_WORD *)&v12[v11 - 2];
                  v14 = *(_WORD *)(v11 - 2);
                  v11 += 8;
                  *(_WORD *)(v11 - 10) = v13 * v14;
                  *(_WORD *)(v11 - 8) *= *(_WORD *)&v12[v11 - 8];
                  *(_WORD *)(v11 - 6) *= *(_WORD *)&v12[v11 - 6];
                  *(_WORD *)(v11 - 4) *= *(_WORD *)&v12[v11 - 4];
                  --v9;
                }
                while ( v9 );
                (*((void (           **)(__int64))a1 + 2318))(*((_QWORD *)v3 - 4) + v8 + 8 * v4 * *(v3 - 11));
                ++v7;
                v8 += 8;
              }
              while ( v7 < v5 );
            }
            ++v4;
          }
          while ( v4 < v6 );
        }
        ++v2;
        v3 += 24;
      }
      while ( v2 < *(_DWORD *)(*(_QWORD *)a1 + 8LL) );
    }
  }
}

//----- (0000000140165700) ----------------------------------------------------
__int64            sub_140165700(__int64 a1)
{
  int v1;
  int v3;
  int v4;

  v1 = *(_DWORD *)(a1 + 18468);
  if ( v1 < 1 )
  {
    sub_140161D20((_QWORD *)a1);
    v1 = *(_DWORD *)(a1 + 18468);
  }
  v3 = *(_DWORD *)(a1 + 18464);
  v4 = 2 * v3;
  *(_DWORD *)(a1 + 18464) = v4;
  *(_DWORD *)(a1 + 18468) = v1 - 1;
  return v3 & 0x80000000;
}

//----- (0000000140165750) ----------------------------------------------------
__int64            sub_140165750(__int64 a1, int a2)
{
  int v2;
  __int64 v4;
  int v5;
  int v6;

  v2 = *(_DWORD *)(a1 + 18468);
  v4 = a2;
  if ( v2 < a2 )
  {
    sub_140161D20((_QWORD *)a1);
    v2 = *(_DWORD *)(a1 + 18468);
  }
  v5 = __ROL4__(*(_DWORD *)(a1 + 18464), v4);
  *(_DWORD *)(a1 + 18468) = v2 - v4;
  v6 = dword_14026FBF0[v4];
  *(_DWORD *)(a1 + 18464) = v5 & ~v6;
  return v5 & (unsigned int)v6;
}

//----- (00000001401657B0) ----------------------------------------------------
__int64            sub_1401657B0(__int64 a1, __int64 a2)
{
  unsigned int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  unsigned int *v10;
  int i;
  int v12;
  __int64 v13;
  __int64 v14;

  if ( *(int *)(a1 + 18468) < 16 )
    sub_140161D20((_QWORD *)a1);
  v4 = *(_DWORD *)(a1 + 18464);
  v5 = *(unsigned __int8 *)(((unsigned __int64)v4 >> 23) + a2);
  if ( (_BYTE)v5 != 0xFF )
  {
    v6 = *(_DWORD *)(a1 + 18468);
    v7 = *(unsigned __int8 *)(((unsigned __int64)*(unsigned int *)(a1 + 18464) >> 23) + a2);
    v8 = *(unsigned __int8 *)(v5 + a2 + 1280);
    if ( v8 <= v6 )
    {
      *(_DWORD *)(a1 + 18464) = v4 << v8;
      *(_DWORD *)(a1 + 18468) = v6 - v8;
      return *(unsigned __int8 *)(v7 + a2 + 1024);
    }
    return 0xFFFFFFFFLL;
  }
  v10 = (unsigned int *)(a2 + 1580);
  for ( i = 10; HIWORD(v4) >= *v10; ++v10 )
    ++i;
  v12 = *(_DWORD *)(a1 + 18468);
  if ( i == 17 )
  {
    *(_DWORD *)(a1 + 18468) = v12 - 16;
    return 0xFFFFFFFFLL;
  }
  if ( i > v12 )
    return 0xFFFFFFFFLL;
  v13 = (int)(*(_DWORD *)(a2 + 4LL * i + 1612) + (dword_14026FBF0[i] & (v4 >> (32 - i))));
  v14 = v13 + a2;
  if ( (dword_14026FBF0[*(unsigned __int8 *)(v13 + a2 + 1280)] & (v4 >> (32 - *(_BYTE *)(v13 + a2 + 1280)))) != *(unsigned __int16 *)(a2 + 2 * v13 + 512) )
  {
    crt_assert(
      (char *)L"(((j->code_buffer) >> (32 - h->size[c])) & stbi__bmask[h->size[c]]) == h->code[c]",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x81Au);
    v12 = *(_DWORD *)(a1 + 18468);
    v4 = *(_DWORD *)(a1 + 18464);
  }
  *(_DWORD *)(a1 + 18468) = v12 - i;
  *(_DWORD *)(a1 + 18464) = v4 << i;
  return *(unsigned __int8 *)(v14 + 1024);
}

//----- (0000000140165940) ----------------------------------------------------
__int64            sub_140165940(__int64 a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  __int64 *v8;
  _QWORD *v9;
  unsigned int v10;
  int v11;

  v8 = (__int64 *)sr_path_malloc(18568);
  *v8 = a1;
  if ( sub_14015F960(v8, 2) )
  {
    if ( a2 )
      *a2 = *(_DWORD *)*v8;
    if ( a3 )
      *a3 = *(_DWORD *)(*v8 + 4);
    v10 = 1;
    if ( a4 )
    {
      v11 = 1;
      if ( *(int *)(*v8 + 8) >= 3 )
        v11 = 3;
      *a4 = v11;
    }
  }
  else
  {
    v9 = (_QWORD *)*v8;
    v10 = 0;
    v9[24] = *(_QWORD *)(*v8 + 208);
    v9[25] = v9[27];
  }
  free(v8);
  return v10;
}

//----- (0000000140165A10) ----------------------------------------------------
__int64            sub_140165A10(__int64 *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  _QWORD *v8;
  int v10;

  if ( sub_14015F960(a1, 2) )
  {
    if ( a2 )
      *a2 = *(_DWORD *)*a1;
    if ( a3 )
      *a3 = *(_DWORD *)(*a1 + 4);
    if ( a4 )
    {
      v10 = 1;
      if ( *(int *)(*a1 + 8) >= 3 )
        v10 = 3;
      *a4 = v10;
    }
    return 1;
  }
  else
  {
    v8 = (_QWORD *)*a1;
    v8[24] = *(_QWORD *)(*a1 + 208);
    v8[25] = v8[27];
    return 0;
  }
}

//----- (0000000140165AC0) ----------------------------------------------------
__int64            sub_140165AC0(__int64 a1, int *a2, _DWORD *a3, int *a4, unsigned int a5)
{
  _QWORD *v9;
  __int64 v10;

  v9 = (_QWORD *)sr_path_malloc(18568);
  *v9 = a1;
  sub_14016DFD0(v9);
  v10 = sub_1400E54D0(v9, a2, a3, a4, a5);
  free(v9);
  return v10;
}

//----- (0000000140165BB0) ----------------------------------------------------
__int64            sub_140165BB0(_QWORD *a1)
{
  __int64 v2;
  unsigned int v3;

  v2 = sr_path_malloc(18568);
  *(_QWORD *)v2 = (uint64)(uintptr_t)(a1);
  sub_14016DFD0((_QWORD *)v2);
  v3 = 0;
  *(_DWORD *)(v2 + 18508) = -1;
  *(_DWORD *)(v2 + 18504) = 0;
  *(_BYTE *)(v2 + 18472) = -1;
  if ( sub_140160790((_BYTE *)v2) == -40 )
    v3 = 1;
  else
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOI");
  a1[24] = a1[26];
  a1[25] = a1[27];
  free((void *)v2);
  return v3;
}

//----- (0000000140165C60) ----------------------------------------------------
__int64            sub_140165C60(char *Block, int a2, int a3, int a4)
{
  __int64 v4;
  char *v5;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  float v13;
  __int64 v14;
  char *v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  double v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char *v27;
  __int64 v28;
  float *v29;
  unsigned int v30;
  __int64 v31;
  unsigned int v32;
  float v33;
  __m128i v34;
  int v35;
  int v36;
  float *v37;
  char *v38;
  __int64 v39;
  int v40;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140165C60[32];
#define v41 (*(int (*))(void *)(sr_frame_140165C60 + 0)) /* [rsp+20h] */
#define v42 (*(__int64 (*))(void *)(sr_frame_140165C60 + 24)) /* [rsp+38h] */

  v4 = a4;
  v5 = Block;
  if ( !Block )
    return 0;
  if ( a2 < 0
    || a3 < 0
    || a3 && a2 > (int)(0x7FFFFFFFu / a3)
    || (v7 = a3 * a2, a3 * a2 < 0)
    || a4 < 0
    || a4 && v7 > (int)(0x7FFFFFFFu / a4)
    || (v8 = a4 * v7, a4 * v7 < 0)
    || v8 > 0x1FFFFFFF
    || (v42 = sr_path_malloc(4 * v8), (v9 = v42) == 0) )
  {
    free(v5);
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  else
  {
    v10 = v4;
    if ( (v4 & 1) == 0 )
      v10 = v4 - 1;
    v11 = 0;
    v41 = v10;
    if ( v7 > 0 )
    {
      v12 = 4 * v4;
      v13 = *(float *)&dword_140301838;
      v14 = v4;
      v15 = v5;
      v16 = *(float *)&dword_14030183C;
      v17 = v42;
      v18 = (unsigned int)v7;
      v19 = v10;
      do
      {
        if ( v19 > 0 )
        {
          v20 = 0;
          v21 = v17;
          do
          {
            v22 = pow((float)((float)(unsigned __int8)v15[v20] * 0.0039215689), v13);
            v21 += 4;
            ++v20;
            *(float *)&v22 = v22 * v16;
            *(_DWORD *)(v21 - 4) = LODWORD(v22);
          }
          while ( v20 < v19 );
          v14 = v4;
          v12 = 4 * v4;
        }
        v17 += v12;
        v15 += v14;
        --v18;
      }
      while ( v18 );
      LODWORD(v4) = a4;
      v11 = 0;
      v10 = v41;
      v5 = Block;
      v9 = v42;
    }
    if ( v10 < (int)v4 )
    {
      if ( v7 >= 4 )
      {
        v23 = 4 * (int)v4;
        v24 = v10 + 2 * (int)v4;
        v25 = v10 + (int)v4 - v24;
        v26 = (int)v4 + v10 + 2 * (int)v4 - v24;
        v27 = &v5[v24];
        v28 = v10 - v24;
        v29 = (float *)(v9 + 4 * v24);
        v30 = ((unsigned int)(v7 - 4) >> 2) + 1;
        v31 = v30;
        v11 = 4 * v30;
        do
        {
          v32 = (unsigned __int8)*v27;
          v33 = (float)(unsigned __int8)v27[v25];
          v29[v28] = (float)(unsigned __int8)v27[v28] * 0.0039215689;
          v34 = _mm_cvtsi32_si128(v32);
          v35 = (unsigned __int8)v27[v26];
          v27 += v23;
          v29[v25] = v33 * 0.0039215689;
          *v29 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v34), f32)[0] * 0.0039215689;
          v29[v26] = (float)v35 * 0.0039215689;
          v29 += v23;
          --v31;
        }
        while ( v31 );
      }
      if ( v11 < v7 )
      {
        v36 = v10 + v4 * v11;
        v37 = (float *)(v9 + 4LL * v36);
        v38 = &v5[v36];
        v39 = (unsigned int)(v7 - v11);
        do
        {
          v40 = (unsigned __int8)*v38;
          v38 += (int)v4;
          *v37 = (float)v40 * 0.0039215689;
          v37 += (int)v4;
          --v39;
        }
        while ( v39 );
      }
    }
    free(v5);
    return v9;
  }
}
#undef v41
#undef v42

//----- (0000000140165FD0) ----------------------------------------------------
__m128i *           sub_140165FD0(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  unsigned int v5;
  __m128i *result;
  __m128i *v10;
  int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  __m128i *v15;
  __int64 i;
  __int64 v17;
  unsigned int v18;
  int v19[4];

  v5 = a5;
  result = (__m128i *)sub_1401666B0(a1, a2, a3, a4, a5, v19, 16);
  v10 = result;
  if ( !result )
    return result;
  v11 = v19[0];
  if ( v19[0] == 8 )
    goto LABEL_5;
  if ( v19[0] != 16 )
  {
    crt_assert(
      (char *)L"ri.bits_per_channel == 8 || ri.bits_per_channel == 16",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x4D3u);
LABEL_5:
    if ( v11 != 16 )
    {
      if ( a5 )
        v12 = a5;
      else
        v12 = *a4;
      v13 = v12 * *a3 * *a2;
      v14 = sr_path_malloc(2 * v13);
      v15 = (__m128i *)v14;
      if ( v14 )
      {
        if ( v13 > 0 )
        {
          for ( i = 0; i < v13; ++i )
            *(_WORD *)(v14 + 2 * i) = 257 * SR_VEC_PTR_LANES(128, v10, u8)[i];
        }
        free(v10);
        v10 = v15;
      }
      else
      {
        v10 = nullptr;
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
      }
    }
  }
  v17 = sr_client_static_tls();
  if ( *(_DWORD *)(v17 + 8) )
    v18 = *(_DWORD *)(v17 + 12);
  else
    v18 = g_144980DAC;
  if ( v18 )
  {
    if ( !a5 )
      v5 = *a4;
    sub_14016F470(v10, *a2, *a3, 2 * v5);
  }
  return v10;
}

//----- (0000000140166160) ----------------------------------------------------
__m128i *           sub_140166160(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5;
  __m128i *result;
  __m128i *v10;
  unsigned int v11;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  int v18;
  unsigned __int64 v19;
  __m128i *v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  __int64 i;
  __int64 v29;
  unsigned int v30;
  int v31[14];

  v5 = a5;
  result = (__m128i *)sub_1401666B0(a1, a2, a3, (int *)a4, a5, v31, 8);
  v10 = result;
  if ( !result )
    return result;
  if ( v31[0] == 8 )
    goto LABEL_18;
  if ( v31[0] != 16 )
    crt_assert(
      (char *)L"ri.bits_per_channel == 8 || ri.bits_per_channel == 16",
      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
      0x4B9u);
  if ( a5 )
    v11 = a5;
  else
    v11 = *a4;
  v12 = v11 * *a3 * *a2;
  v13 = v12;
  v14 = sr_path_malloc(v12);
  if ( v14 )
  {
    v16 = 0;
    if ( v12 >= 32 )
    {
      v17 = v12 - 1;
      if ( v14 > (unsigned __int64)v10 + 2 * v17 || v17 + v14 < (unsigned __int64)v10 )
      {
        v18 = v12 - (v12 & 0x1F);
        v19 = v14 + 16;
        v20 = v10 + 2;
        v21 = _mm_cvtsi32_si128(8u);
        do
        {
          v22 = _mm_loadu_si128(v20 - 2);
          v19 += 32LL;
          v16 += 32;
          v23 = _mm_loadu_si128(v20 - 1);
          v20 += 4;
          v24 = _mm_and_si128(_mm_srl_epi16(v22, v21), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          v25 = _mm_and_si128(_mm_srl_epi16(v23, v21), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          *(_QWORD *)(v19 - 48) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v24, v24), u64)[0];
          *(_QWORD *)(v19 - 40) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v25, v25), u64)[0];
          v26 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128(v20 - 4), v21), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          v27 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128(v20 - 3), v21), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
          *(_QWORD *)(v19 - 32) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v26, v26), u64)[0];
          *(_QWORD *)(v19 - 24) = SR_VEC_READ_LANES(128, _mm_packus_epi16(v27, v27), u64)[0];
        }
        while ( (__int64)(-16LL - v14 + v19) < v18 );
      }
    }
    for ( i = v16; i < v13; ++i )
      *(_BYTE *)(i + v14) = SR_VEC_PTR_LANES(128, v10, i8)[2 * i + 1];
    free(v10);
    v10 = (__m128i *)v14;
LABEL_18:
    v15 = g_144CBE4C4;
    goto LABEL_19;
  }
  v15 = g_144CBE4C4;
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
  v10 = nullptr;
LABEL_19:
  v29 = sr_client_static_tls();
  if ( *(_DWORD *)(v29 + 8) )
    v30 = *(_DWORD *)(v29 + 12);
  else
    v30 = g_144980DAC;
  if ( v30 )
  {
    if ( !a5 )
      v5 = *a4;
    sub_14016F470(v10, *a2, *a3, v5);
  }
  return v10;
}

// 140166284: conditional instruction was optimized away because edi.4>=20
// 14016627F: mask 0x8000001F is shortened because edi.4 <= 0x7FFFFFFF

//----- (00000001401663E0) ----------------------------------------------------
__int64            sub_1401663E0(     __m128i *a1, __int64 *a2, _DWORD *a3, int *a4)
{
  _DWORD *v5;
  unsigned int v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  char *v12;
  int v13;
       __m128i *v14;
       __m128i *v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v21;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401663E0[35136];
#define v22 (*(unsigned int (*))(void *)(sr_frame_1401663E0 + 0)) /* [rsp+10h] */
#define v23 (*(_DWORD * (*))(void *)(sr_frame_1401663E0 + 8)) /* [rsp+18h] */
#define v24 (*(_DWORD * (*))(void *)(sr_frame_1401663E0 + 16)) /* [rsp+20h] */
#define v25 (*(int * (*))(void *)(sr_frame_1401663E0 + 24)) /* [rsp+28h] */
#define v26 (*(int * (*))(void *)(sr_frame_1401663E0 + 32)) /* [rsp+30h] */
#define v27 (*(int (*))(void *)(sr_frame_1401663E0 + 48)) /* [rsp+40h] */
#define v28 (*(int (*))(void *)(sr_frame_1401663E0 + 52)) /* [rsp+44h] */
#define Block (*(void * (*))(void *)(sr_frame_1401663E0 + 56)) /* [rsp+48h] */
#define v30 (*(void * (*))(void *)(sr_frame_1401663E0 + 64)) /* [rsp+50h] */
#define v31 (*(void * (*))(void *)(sr_frame_1401663E0 + 72)) /* [rsp+58h] */
#define v32 (*(int (*))(void *)(sr_frame_1401663E0 + 34968)) /* [rsp+88A8h] */
#define v33 (*(__int64 (*))(void *)(sr_frame_1401663E0 + 34976)) /* [rsp+88B0h] */
#define v34 (*(int * (*))(void *)(sr_frame_1401663E0 + 35104)) /* [rsp+8930h] */
#define v35 (*(_DWORD * (*))(void *)(sr_frame_1401663E0 + 35112)) /* [rsp+8938h] */
#define v36 (*(unsigned int (*))(void *)(sr_frame_1401663E0 + 35120)) /* [rsp+8940h] */

  v5 = v35;
  v7 = v36;
  v26 = v34;
  v23 = v35;
  v25 = a4;
  v24 = a3;
  v22 = v36;
  v8 = sub_140161BB0((__int64)a1);
  v9 = SR_VEC_LANES(128, a1[13], i64)[1];
  SR_VEC_LANES(128, a1[12], i64)[0] = SR_VEC_LANES(128, a1[13], i64)[0];
  SR_VEC_LANES(128, a1[12], i64)[1] = v9;
  if ( !v8 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not GIF");
    return 0; /* 0x14016669A: xor eax, eax */
  }
  v10 = 0;
  v11 = 0;
  v12 = nullptr;
  crt_memset((void *)(uintptr_t)(&v27), 0, 0x8870u);
  if ( a2 )
    *a2 = 0;
  while ( 1 )
  {
    v13 = v10;
    v14 = (     __m128i *)sub_140160EF0((__int64)a1, &v27, v5, v7, v11);
    v15 = v14;
    if ( v14 == a1 || !v14 )
      break;
    ++v10;
    v16 = v27;
    v17 = v28;
    *v24 = v27;
    *v25 = v17;
    v18 = 4 * v16 * v17;
    if ( !v12 )
    {
      v12 = (char *)sr_path_malloc(v10 * v18);
      if ( !a2 )
        goto LABEL_13;
      v19 = sr_path_malloc(4LL * v10);
      goto LABEL_12;
    }
    v12 = (char *)j__realloc_base_sr(v12, v10 * v18);
    if ( !v12 )
    {
      free(Block);
      free(v31);
      free(v30);
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
      return 0; /* 0x1401665DE: xor eax, eax */
    }
    if ( a2 )
    {
      v19 = j__realloc_base_sr(*a2, 4LL * v10);
LABEL_12:
      *a2 = v19;
    }
LABEL_13:
    crt_memcpy((__m128i *)&v12[v18 * v13], v15, v18);
    if ( v10 >= 2 )
      v11 = (__int64)&v12[-2 * v18];
    v7 = v22;
    v5 = v23;
    if ( a2 )
      *(_DWORD *)(*a2 + 4LL * (unsigned int)(v10 - 1)) = v32;
  }
  free(Block);
  free(v31);
  free(v30);
  if ( (v7 & 0xFFFFFFFB) != 0 )
    v12 = (char *)sub_14015D7E0(v12, 4, v7, v10 * v27, v28); /* 0x140166665: mov rbp, rax */
  *v26 = v10;
  return (__int64)v12; /* 0x14016666F: mov rax, rbp */
}
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef Block
#undef v30
#undef v31
#undef v32
#undef v33
#undef v34
#undef v35
#undef v36

//----- (00000001401666B0) ----------------------------------------------------
char *           sub_1401666B0(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5, int *a6, int a7)
{
  unsigned int v9;
  char *v10;
  __int64 v12;
  char **v13;
  unsigned __int64 *v14;
  __int64 *v15;
  __int64 v16;
  int v18;
  char *v19;
  unsigned __int64 v20;
  char *v21;
  int v22;
  int *v23;
  int v24;
  int v25;
  char *v26;
  char v27;
  char *v28;
  char v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  char *v37;
  unsigned __int64 v38;
  char v39;
  char *v40;
  char v41;
  void *v42;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401666B0[80];
#define v43 (*(int (*))(void *)(sr_frame_1401666B0 + 0)) /* [rsp+20h] */
#define v44 (*(_QWORD (*)[5])(void *)(sr_frame_1401666B0 + 32)) /* [rsp+40h] */

  int v49;

  v9 = a5;
  v10 = nullptr;
  *(_QWORD *)a6 = 8;
  a6[2] = 0;
  v12 = sr_path_malloc(18568);
  *(_QWORD *)v12 = a1;
  sub_14016DFD0((_QWORD *)v12);
  *(_DWORD *)(v12 + 18504) = 0;
  *(_DWORD *)(v12 + 18508) = -1;
  *(_BYTE *)(v12 + 18472) = -1;
  if ( sub_140160790((_BYTE *)v12) == -40 )
  {
    v49 = 1;
  }
  else
  {
    v49 = 0;
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no SOI");
  }
  v13 = (char **)(a1 + 192);
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  v14 = (unsigned __int64 *)(a1 + 200);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  free((void *)v12);
  if ( v49 )
  {
    v15 = (__int64 *)sr_path_malloc(18568);
    *v15 = a1;
    sub_14016DFD0(v15);
    v16 = sub_1400E54D0(v15, a2, a3, a4, a5);
    free(v15);
    return (char *)v16;
  }
  v18 = sub_14015CE80(a1);
  v19 = *(char **)(a1 + 208);
  v20 = *(_QWORD *)(a1 + 216);
  *v13 = v19;
  *v14 = v20;
  if ( !v18 )
  {
    if ( (unsigned __int64)v19 >= v20 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_41;
      stbi_refill_buffer(a1);
      v27 = **v13;
      v28 = *v13 + 1;
    }
    else
    {
      v27 = *v19;
      v28 = v19 + 1;
    }
    *v13 = v28;
    if ( v27 == 66 )
    {
      if ( (unsigned __int64)v28 >= *v14 )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_41;
        stbi_refill_buffer(a1);
        v28 = *v13;
      }
      v29 = *v28;
      *v13 = v28 + 1;
      if ( v29 == 77 )
      {
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        sub_1401605B0(a1);
        v30 = sub_1401605B0(a1);
        v31 = v30 + ((unsigned int)sub_1401605B0(a1) << 16);
        if ( (unsigned int)v31 <= 0x38 && (v32 = 0x100010000001000LL, _bittest64(&v32, v31))
          || (_DWORD)v31 == 108
          || (_DWORD)v31 == 124 )
        {
          LODWORD(v10) = 1;
        }
        *v13 = *(char **)(a1 + 208);
        *v14 = *(_QWORD *)(a1 + 216);
        if ( (_DWORD)v10 )
          return (char *)sub_14015B780((unsigned int *)a1, a2, a3, a4, a5);
LABEL_42:
        v33 = sub_140161BB0(a1);
        *v13 = *(char **)(a1 + 208);
        *v14 = *(_QWORD *)(a1 + 216);
        if ( v33 )
          return (char *)sub_140160E00(a1, a2, a3, a4);
        v34 = sub_1401604F0(a1);
        v35 = sub_1401604F0(a1);
        *v13 = *(char **)(a1 + 208);
        *v14 = *(_QWORD *)(a1 + 216);
        if ( v35 + (v34 << 16) == 943870035 )
          return sub_14016CB70(a1, a2, a3, a4, a5, a6, a7);
        if ( (unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
        {
          v36 = 84;
          do
          {
            if ( (unsigned __int64)*v13 >= *v14 )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                stbi_refill_buffer(a1);
                ++*v13;
              }
            }
            else
            {
              ++*v13;
            }
            --v36;
          }
          while ( v36 );
          if ( (unsigned int)sub_140169470(a1, (__int64)"PICT") )
          {
            *v13 = *(char **)(a1 + 208);
            *v14 = *(_QWORD *)(a1 + 216);
            return sub_140169510(a1, a2, a3, a4, a5);
          }
        }
        v37 = *(char **)(a1 + 208);
        v38 = *(_QWORD *)(a1 + 216);
        *v13 = v37;
        *v14 = v38;
        if ( (unsigned __int64)v37 >= v38 )
        {
          if ( !*(_DWORD *)(a1 + 48) )
          {
            v39 = 0;
            goto LABEL_60;
          }
          stbi_refill_buffer(a1);
          v37 = *v13;
          v38 = *v14;
        }
        v39 = *v37;
        v40 = v37 + 1;
        *v13 = v40;
        if ( (unsigned __int64)v40 < v38 )
        {
          v41 = *v40;
          *v13 = v40 + 1;
          goto LABEL_63;
        }
LABEL_60:
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v41 = *(*v13)++;
        }
        else
        {
          v41 = 0;
        }
LABEL_63:
        if ( v39 == 80 && (unsigned __int8)(v41 - 53) <= 1u )
          return sub_14016A9F0(a1, a2, a3, a4, a5);
        *v13 = *(char **)(a1 + 208);
        *v14 = *(_QWORD *)(a1 + 216);
        if ( (unsigned int)sub_140162BB0(a1) )
        {
          v42 = (void *)sub_1401623E0(a1, a2, a3, a4, a5);
          if ( !a5 )
            v9 = *a4;
          return (char *)sub_140162D40(v42, *a2, *a3, v9);
        }
        else if ( (unsigned int)sub_14016F1B0(a1) )
        {
          return sub_14016E7A0(a1, a2, a3, (unsigned int *)a4, a5);
        }
        else
        {
          *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown image type");
          return nullptr;
        }
      }
    }
LABEL_41:
    *v13 = *(char **)(a1 + 208);
    *v14 = *(_QWORD *)(a1 + 216);
    goto LABEL_42;
  }
  v44[0] = a1;
  v21 = nullptr;
  if ( a5 > 4 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad req_comp");
  }
  else
  {
    if ( !(unsigned int)sub_140167D10((__int64)v44, 0, a5) )
    {
      v10 = (*(char **)(void *)&v44[3]);
LABEL_22:
      free(v10);
      free((void *)v44[2]);
      free((void *)v44[1]);
      return v21;
    }
    v22 = (*(int *)(void *)&v44[4]);
    if ( (*(int *)(void *)&v44[4]) > 8 )
    {
      if ( (*(int *)(void *)&v44[4]) != 16 )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad bits_per_channel");
        return nullptr;
      }
    }
    else
    {
      v22 = 8;
    }
    *a6 = v22;
    v21 = (*(char **)(void *)&v44[3]);
    v23 = (int *)v44[0];
    if ( !a5
      || (v24 = *(_DWORD *)(v44[0] + 12LL), a5 == v24)
      || ((v25 = *(_DWORD *)v44[0], v43 = *(_DWORD *)(v44[0] + 4LL), v22 != 8)
        ? (v26 = sub_14015DD00((*(char **)(void *)&v44[3]), v24, a5, v25, v43))
        : (v26 = sub_14015D7E0((*(char **)(void *)&v44[3]), v24, a5, v25, v43)),
          v23[3] = a5,
          (v21 = v26) != nullptr) )
    {
      *a2 = *v23;
      *a3 = v23[1];
      if ( a4 )
        *a4 = v23[2];
      goto LABEL_22;
    }
  }
  return nullptr;
}
#undef v43
#undef v44

//----- (0000000140166D20) ----------------------------------------------------
__m128i *           sub_140166D20(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  int v9;
  __m128i *v10;
  __int64 v11;
  __m128i *v14;

  v9 = a5;
  if ( (unsigned int)sub_140162BB0(a1) )
  {
    v10 = (__m128i *)sub_1401623E0(a1, a2, a3, a4, a5);
    if ( v10 )
    {
      v11 = sr_client_static_tls();
      if ( *(_DWORD *)(v11 + 8) ? *(_DWORD *)(v11 + 12) : g_144980DAC )
      {
        if ( !a5 )
          v9 = *a4;
        sub_14016F470(v10, *a2, *a3, 4 * v9);
      }
    }
    return v10;
  }
  else
  {
    v14 = sub_140166160(a1, a2, a3, a4, a5);
    if ( v14 )
    {
      if ( !a5 )
        v9 = *a4;
      return (__m128i *)sub_140165C60(SR_VEC_PTR_LANES(128, v14, i8), *a2, *a3, v9);
    }
    else
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown image type");
      return nullptr;
    }
  }
}

//----- (0000000140166EE0) ----------------------------------------------------
_BOOL8            sub_140166EE0(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int v6;
  _BOOL8 result;

  result = false;
  if ( a1 >= 0 && a2 >= 0 && (!a2 || a1 <= (int)(0x7FFFFFFFu / a2)) )
  {
    v5 = a2 * a1;
    if ( v5 >= 0 && a3 >= 0 && (!a3 || v5 <= (int)(0x7FFFFFFFu / a3)) )
    {
      v6 = a3 * v5;
      if ( v6 >= 0 && a4 >= 0 && (!a4 || v6 <= (int)(0x7FFFFFFFu / a4)) && a5 >= 0 && a4 * v6 <= 0x7FFFFFFF - a5 )
        return true;
    }
  }
  return result;
}

//----- (0000000140167010) ----------------------------------------------------
__int64            sub_140167010(int a1, int a2, int a3, int a4, int a5)
{
  int v8;

  if ( sub_140166EE0(a1, a2, a3, a4, a5) )
    return sr_path_malloc(a5 + a4 * v8 * a2 * a1);
  else
    return 0;
}

//----- (00000001401670A0) ----------------------------------------------------
__int64            sub_1401670A0(__int64 a1, unsigned __int16 a2)
{
  __int64 v2;
  signed __int16 v4;
  __int64 result;
  int v6;
  _BYTE *v7;
  _BYTE *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;

  v2 = a2;
  v4 = *(_WORD *)(a1 + 4LL * a2 + 2100);
  if ( v4 >= 0 )
    result = sub_1401670A0(a1, v4);
  v6 = *(_DWORD *)(a1 + 34912);
  if ( v6 < *(_DWORD *)(a1 + 34904) )
  {
    v7 = (_BYTE *)(*(_QWORD *)(a1 + 8) + v6 + *(_DWORD *)(a1 + 34908));
    *(_BYTE *)((v6 + *(_DWORD *)(a1 + 34908)) / 4 + *(_QWORD *)(a1 + 24)) = 1;
    v8 = (_BYTE *)(*(_QWORD *)(a1 + 34872) + 4LL * *(unsigned __int8 *)(a1 + 4 * v2 + 2103));
    if ( v8[3] > 0x80u )
    {
      *v7 = v8[2];
      v7[1] = v8[1];
      v7[2] = *v8;
      v7[3] = v8[3];
    }
    *(_DWORD *)(a1 + 34908) += 4;
    result = *(unsigned int *)(a1 + 34908);
    if ( (int)result >= *(_DWORD *)(a1 + 34900) )
    {
      v9 = *(_DWORD *)(a1 + 34904);
      *(_DWORD *)(a1 + 34908) = *(_DWORD *)(a1 + 34892);
      result = *(unsigned int *)(a1 + 34884);
      *(_DWORD *)(a1 + 34912) += result;
      if ( *(_DWORD *)(a1 + 34912) >= v9 )
      {
        v10 = *(_DWORD *)(a1 + 34880);
        do
        {
          if ( v10 <= 0 )
            break;
          v11 = *(_DWORD *)(a1 + 34916) << v10;
          v12 = *(_DWORD *)(a1 + 34896);
          *(_DWORD *)(a1 + 34884) = v11;
          v13 = (v11 >> 1) + v12;
          --v10;
          *(_DWORD *)(a1 + 34912) = v13;
          *(_DWORD *)(a1 + 34880) = v10;
        }
        while ( v13 >= v9 );
      }
    }
  }
  return result;
}

//----- (00000001401671C0) ----------------------------------------------------
__int64            sub_1401671C0(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v4;
  signed int v5;
  signed int v6;
  signed int v7;

  v4 = a1 - a3 + a2 - a3;
  v5 = abs32(a2 - a3);
  v6 = abs32(a1 - a3);
  v7 = abs32(v4);
  if ( v5 <= v6 && v5 <= v7 )
    return a1;
  if ( v6 <= v7 )
    return a2;
  return a3;
}

//----- (0000000140167230) ----------------------------------------------------
__int64            sub_140167230(__int64 a1)
{
  int v2;
  int v3;
  bool v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v16;
  int v17;
  int v18;
  int *v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int *v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  int v46;
  int v47;
  int v48;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140167230[224];
#define v49 (*(__int64 (*))(void *)(sr_frame_140167230 + 0)) /* [rsp+0h] */
#define v50 (*(int (*))(void *)(sr_frame_140167230 + 64)) /* [rsp+40h] */
#define v51 (*(int (*))(void *)(sr_frame_140167230 + 68)) /* [rsp+44h] */
#define v52 (*(__int64 (*))(void *)(sr_frame_140167230 + 72)) /* [rsp+48h] */
#define v53 (*(_OWORD (*)[8])(void *)(sr_frame_140167230 + 80)) /* [rsp+50h] */
#define v54 (*(__int64 (*))(void *)(sr_frame_140167230 + 208)) /* [rsp+D0h] */

  *(_DWORD *)(a1 + 18392) = 0;
  *(_DWORD *)(a1 + 18296) = 0;
  *(_DWORD *)(a1 + 18200) = 0;
  *(_DWORD *)(a1 + 18104) = 0;
  v2 = *(_DWORD *)(a1 + 18536);
  *(_QWORD *)(a1 + 18464) = 0;
  *(_DWORD *)(a1 + 18476) = 0;
  *(_BYTE *)(a1 + 18472) = -1;
  v3 = 0x7FFFFFFF;
  if ( v2 )
    v3 = v2;
  *(_DWORD *)(a1 + 18500) = 0;
  v4 = *(_DWORD *)(a1 + 18480) == 0;
  v5 = *(_DWORD *)(a1 + 18516);
  *(_DWORD *)(a1 + 18540) = v3;
  if ( v4 )
  {
    if ( v5 == 1 )
    {
      v6 = *(int *)(a1 + 18520);
      v7 = 0;
      v8 = a1 + 96 * v6;
      v9 = (*(_DWORD *)(v8 + 18108) + 7) >> 3;
      v10 = (*(_DWORD *)(v8 + 18112) + 7) >> 3;
      if ( v10 > 0 )
      {
        while ( 1 )
        {
          v11 = 0;
          if ( v9 > 0 )
            break;
LABEL_17:
          if ( ++v7 >= v10 )
            return 1; /* 0x140167480: mov eax, 1 */
        }
        v12 = 0;
        while ( (unsigned int)sub_140164500(
                                a1,
                                v53,
                                1680LL * *(int *)(v8 + 18096) + a1 + 8,
                                1680LL * *(int *)(v8 + 18100) + a1 + 6728,
                                ((__int64)*(int *)(v8 + 18100) << 10) + a1 + 13960,
                                v6,
                                (_WORD *)(((__int64)*(int *)(v8 + 18092) << 7) + a1 + 13448)) )
        {
          (*(void (           **)(_QWORD, _QWORD, _OWORD *))(a1 + 18544))(
            v12 + *(_QWORD *)(v8 + 18128) + 8 * v7 * *(_DWORD *)(v8 + 18116),
            *(unsigned int *)(v8 + 18116),
            v53);
          if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
          {
            if ( *(int *)(a1 + 18468) < 24 )
              sub_140161D20((_QWORD *)a1);
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
              return 1; /* 0x140167480: mov eax, 1 */
            *(_DWORD *)(a1 + 18392) = 0;
            v13 = 0x7FFFFFFF;
            *(_DWORD *)(a1 + 18296) = 0;
            *(_DWORD *)(a1 + 18200) = 0;
            *(_DWORD *)(a1 + 18104) = 0;
            v14 = *(_DWORD *)(a1 + 18536);
            *(_QWORD *)(a1 + 18464) = 0;
            if ( v14 )
              v13 = v14;
            *(_DWORD *)(a1 + 18476) = 0;
            *(_DWORD *)(a1 + 18540) = v13;
            *(_BYTE *)(a1 + 18472) = -1;
            *(_DWORD *)(a1 + 18500) = 0;
          }
          ++v11;
          v12 += 8;
          if ( v11 >= v9 )
            goto LABEL_17;
        }
        return 0; /* 0x1401673A1: block decoder failed -> xor eax, eax */
      }
    }
    else
    {
      v16 = 0;
      v50 = 0;
      if ( *(int *)(a1 + 18068) > 0 )
      {
        while ( 1 )
        {
          v17 = 0;
          if ( *(int *)(a1 + 18064) > 0 )
            break;
LABEL_38:
          v50 = ++v16;
          if ( v16 >= *(_DWORD *)(a1 + 18068) )
            return 1; /* 0x140167480: mov eax, 1 */
        }
        while ( 1 )
        {
          v18 = 0;
          v51 = 0;
          if ( *(int *)(a1 + 18516) > 0 )
            break;
LABEL_30:
          if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
          {
            if ( *(int *)(a1 + 18468) < 24 )
              sub_140161D20((_QWORD *)a1);
            if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
              return 1; /* 0x140167480: mov eax, 1 */
            *(_DWORD *)(a1 + 18392) = 0;
            v26 = 0x7FFFFFFF;
            *(_DWORD *)(a1 + 18296) = 0;
            *(_DWORD *)(a1 + 18200) = 0;
            *(_DWORD *)(a1 + 18104) = 0;
            v27 = *(_DWORD *)(a1 + 18536);
            *(_QWORD *)(a1 + 18464) = 0;
            if ( v27 )
              v26 = v27;
            *(_DWORD *)(a1 + 18476) = 0;
            *(_DWORD *)(a1 + 18540) = v26;
            *(_BYTE *)(a1 + 18472) = -1;
            *(_DWORD *)(a1 + 18500) = 0;
          }
          v16 = v50;
          if ( ++v17 >= *(_DWORD *)(a1 + 18064) )
            goto LABEL_38;
        }
        v19 = (int *)(a1 + 18520);
        v52 = a1 + 18520;
        while ( 1 )
        {
          v20 = *v19;
          v21 = 0;
          v22 = a1 + 96 * v20;
          if ( *(int *)(v22 + 18088) > 0 )
            break;
LABEL_29:
          ++v18;
          v19 = (int *)(v52 + 4);
          v51 = v18;
          v52 += 4;
          if ( v18 >= *(_DWORD *)(a1 + 18516) )
            goto LABEL_30;
        }
        while ( 1 )
        {
          v23 = *(_DWORD *)(v22 + 18084);
          v24 = 0;
          if ( v23 > 0 )
            break;
LABEL_27:
          if ( ++v21 >= *(_DWORD *)(v22 + 18088) )
          {
            v18 = v51;
            goto LABEL_29;
          }
        }
        while ( 1 )
        {
          v25 = v21 + v16 * *(_DWORD *)(v22 + 18088);
          if ( !(unsigned int)sub_140164500(
                                a1,
                                v53,
                                1680LL * *(int *)(v22 + 18096) + a1 + 8,
                                1680LL * *(int *)(v22 + 18100) + a1 + 6728,
                                ((__int64)*(int *)(v22 + 18100) << 10) + a1 + 13960,
                                v20,
                                (_WORD *)(((__int64)*(int *)(v22 + 18092) << 7) + a1 + 13448)) )
            return 0; /* 0x1401675AE: block decoder failed -> xor eax, eax */
          (*(void (           **)(__int64, _QWORD, _OWORD *))(a1 + 18544))(
            *(_QWORD *)(v22 + 18128) + 8 * *(_DWORD *)(v22 + 18116) * v25 + (__int64)(8 * (v24 + v17 * v23)),
            *(unsigned int *)(v22 + 18116),
            v53);
          v23 = *(_DWORD *)(v22 + 18084);
          ++v24;
          v16 = v50;
          if ( v24 >= v23 )
            goto LABEL_27;
        }
      }
    }
  }
  else if ( v5 == 1 )
  {
    v28 = *(int *)(a1 + 18520);
    v29 = 0;
    v30 = 96 * v28;
    v31 = (*(_DWORD *)(96 * v28 + a1 + 18108) + 7) >> 3;
    v32 = (*(_DWORD *)(96 * v28 + a1 + 18112) + 7) >> 3;
    if ( v32 > 0 )
    {
      while ( 1 )
      {
        v33 = 0;
        if ( v31 > 0 )
          break;
LABEL_55:
        if ( ++v29 >= v32 )
          return 1; /* 0x140167480: mov eax, 1 */
      }
      while ( 1 )
      {
        v34 = *(_QWORD *)(v30 + a1 + 18160) + 2LL * ((v33 + v29 * *(_DWORD *)(v30 + a1 + 18168)) << 6);
        if ( !(*(_DWORD *)(a1 + 18484)
             ? sub_140164A80(
                 a1,
                 v34,
                 1680LL * *(int *)(a1 + v30 + 18100) + a1 + 6728,
                 ((__int64)*(int *)(a1 + v30 + 18100) << 10) + a1 + 13960)
             : (unsigned int)sub_140165200(a1, v34, 1680LL * *(int *)(a1 + v30 + 18096) + a1 + 8, v28)) )
          return 0; /* 0x1401677CF: block decoder failed -> xor eax, eax */
        if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
        {
          if ( *(int *)(a1 + 18468) < 24 )
            sub_140161D20((_QWORD *)a1);
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
            return 1; /* 0x140167480: mov eax, 1 */
          *(_DWORD *)(a1 + 18392) = 0;
          v36 = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 18296) = 0;
          *(_DWORD *)(a1 + 18200) = 0;
          *(_DWORD *)(a1 + 18104) = 0;
          v37 = *(_DWORD *)(a1 + 18536);
          *(_QWORD *)(a1 + 18464) = 0;
          if ( v37 )
            v36 = v37;
          *(_DWORD *)(a1 + 18476) = 0;
          *(_DWORD *)(a1 + 18540) = v36;
          *(_BYTE *)(a1 + 18472) = -1;
          *(_DWORD *)(a1 + 18500) = 0;
        }
        if ( ++v33 >= v31 )
          goto LABEL_55;
      }
    }
  }
  else
  {
    v38 = 0;
    if ( *(int *)(a1 + 18068) > 0 )
    {
      while ( 1 )
      {
        v39 = 0;
        if ( *(int *)(a1 + 18064) > 0 )
          break;
LABEL_75:
        if ( ++v38 >= *(_DWORD *)(a1 + 18068) )
          return 1; /* 0x140167480: mov eax, 1 */
      }
      while ( 1 )
      {
        v40 = 0;
        if ( *(int *)(a1 + 18516) > 0 )
          break;
LABEL_67:
        if ( (int)--*(_DWORD *)(a1 + 18540) <= 0 )
        {
          if ( *(int *)(a1 + 18468) < 24 )
            sub_140161D20((_QWORD *)a1);
          if ( (unsigned __int8)(*(_BYTE *)(a1 + 18472) + 48) > 7u )
            return 1; /* 0x140167480: mov eax, 1 */
          *(_DWORD *)(a1 + 18392) = 0;
          v47 = 0x7FFFFFFF;
          *(_DWORD *)(a1 + 18296) = 0;
          *(_DWORD *)(a1 + 18200) = 0;
          *(_DWORD *)(a1 + 18104) = 0;
          v48 = *(_DWORD *)(a1 + 18536);
          *(_QWORD *)(a1 + 18464) = 0;
          if ( v48 )
            v47 = v48;
          *(_DWORD *)(a1 + 18476) = 0;
          *(_DWORD *)(a1 + 18540) = v47;
          *(_BYTE *)(a1 + 18472) = -1;
          *(_DWORD *)(a1 + 18500) = 0;
        }
        if ( ++v39 >= *(_DWORD *)(a1 + 18064) )
          goto LABEL_75;
      }
      v41 = (int *)(a1 + 18520);
      v52 = a1 + 18520;
      while ( 1 )
      {
        v42 = *v41;
        v43 = 0;
        v44 = a1 + 96 * v42;
        if ( *(int *)(v44 + 18088) > 0 )
          break;
LABEL_66:
        ++v40;
        v41 = (int *)(v52 + 4);
        v52 += 4;
        if ( v40 >= *(_DWORD *)(a1 + 18516) )
          goto LABEL_67;
      }
      while ( 1 )
      {
        v45 = *(_DWORD *)(v44 + 18084);
        v46 = 0;
        if ( v45 > 0 )
          break;
LABEL_65:
        if ( ++v43 >= *(_DWORD *)(v44 + 18088) )
          goto LABEL_66;
      }
      while ( (unsigned int)sub_140165200(
                              a1,
                              *(_QWORD *)(v44 + 18160)
                            + 2LL
                            * ((v46 + *(_DWORD *)(v44 + 18168) * (v43 + *(_DWORD *)(v44 + 18088) * v38) + v39 * v45) << 6),
                              1680LL * *(int *)(v44 + 18096) + a1 + 8,
                              v42) )
      {
        v45 = *(_DWORD *)(v44 + 18084);
        if ( ++v46 >= v45 )
          goto LABEL_65;
      }
      return 0; /* 0x14016794E: block decoder failed -> xor eax, eax */
    }
  }
  return 1; /* 0x140167480: mov eax, 1 */
}
#undef v49
#undef v50
#undef v51
#undef v52
#undef v53
#undef v54

//----- (0000000140167A50) ----------------------------------------------------
__int64            sub_140167A50(__int64 a1)
{
  _BYTE *v1;
  unsigned int v3;
  __int64 v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  unsigned int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned __int8 *v18;
  char v19;

  v1 = *(_BYTE **)(a1 + 24);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(int *)(a1 + 16) < 16 )
      {
        if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
          goto LABEL_40;
        sub_140160350(a1);
      }
      v3 = *(_DWORD *)(a1 + 20);
      v4 = v3 & 0x1FF;
      v5 = *(unsigned __int16 *)(a1 + 2 * v4 + 52);
      if ( *(_WORD *)(a1 + 2 * v4 + 52) )
      {
        *(_DWORD *)(a1 + 16) -= v5 >> 9;
        *(_DWORD *)(a1 + 20) = v3 >> (v5 >> 9);
        v6 = v5 & 0x1FF;
      }
      else
      {
        v6 = sub_14016FB90(a1, a1 + 52);
      }
      if ( v6 >= 256 )
        break;
      if ( v6 < 0 )
        goto LABEL_40;
      if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 40) )
      {
        if ( !(unsigned int)sub_14016F9E0(a1, (__int64)v1, 1u) )
          return 0;
        v1 = *(_BYTE **)(a1 + 24);
      }
      *v1++ = v6;
    }
    if ( v6 == 256 )
      break;
    v7 = *(_DWORD *)(a1 + 16);
    v8 = sr_inflate_length_extra[v6 - 257];
    v9 = (unsigned int)sr_inflate_length_base[v6 - 257];
    if ( v8 )
    {
      if ( v7 < v8 )
      {
        sub_140160350(a1);
        v7 = *(_DWORD *)(a1 + 16);
      }
      v10 = *(_DWORD *)(a1 + 20);
      v7 -= v8;
      *(_DWORD *)(a1 + 20) = v10 >> v8;
      *(_DWORD *)(a1 + 16) = v7;
      v9 = (v10 & ((1 << v8) - 1)) + (unsigned int)v9;
    }
    if ( v7 < 16 )
    {
      if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
        goto LABEL_40;
      sub_140160350(a1);
    }
    v11 = *(_DWORD *)(a1 + 20);
    v12 = *(unsigned __int16 *)(a1 + 2LL * (v11 & 0x1FF) + 2072);
    if ( *(_WORD *)(a1 + 2LL * (v11 & 0x1FF) + 2072) )
    {
      *(_DWORD *)(a1 + 16) -= v12 >> 9;
      *(_DWORD *)(a1 + 20) = v11 >> (v12 >> 9);
      v13 = v12 & 0x1FF;
    }
    else
    {
      v13 = sub_14016FB90(a1, a1 + 2072);
    }
    if ( v13 < 0 )
    {
LABEL_40:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad huffman code");
      return 0;
    }
    v14 = dword_14026FE50[v13];
    v15 = dword_14026FDD0[v13];
    if ( v14 )
    {
      v16 = *(_DWORD *)(a1 + 16);
      if ( v16 < v14 )
      {
        sub_140160350(a1);
        v16 = *(_DWORD *)(a1 + 16);
      }
      v17 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v17 >> v14;
      *(_DWORD *)(a1 + 16) = v16 - v14;
      v15 += v17 & ((1 << v14) - 1);
    }
    if ( (__int64)&v1[-*(_QWORD *)(a1 + 32)] < v15 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad dist");
      return 0;
    }
    if ( (unsigned __int64)&v1[(int)v9] > *(_QWORD *)(a1 + 40) )
    {
      if ( !(unsigned int)sub_14016F9E0(a1, (__int64)v1, v9) )
        return 0;
      v1 = *(_BYTE **)(a1 + 24);
    }
    v18 = &v1[-v15];
    if ( v15 == 1 )
    {
      if ( (_DWORD)v9 )
      {
        crt_memset((void *)(uintptr_t)(v1), *v18, v9);
        v1 += v9;
      }
    }
    else
    {
      for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
      {
        v19 = *v18++;
        *v1++ = v19;
      }
    }
  }
  *(_QWORD *)(a1 + 24) = (uint64)(uintptr_t)(v1);
  return 1;
}

//----- (0000000140167D10) ----------------------------------------------------
__int64            sub_140167D10(__int64 a1, int a2, int a3)
{
  _DWORD *v4;
  unsigned int v5;
  int v6;
  unsigned int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  char *v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  int v21;
  unsigned int v22;
  unsigned __int8 *v23;
  unsigned __int8 v24;
  unsigned __int8 *v25;
  unsigned int v26;
  int v27;
  char *v28;
  unsigned __int8 v29;
  unsigned __int8 *v30;
  unsigned int v31;
  char v32;
  char v33;
  char v34;
  unsigned __int8 v35;
  unsigned __int8 *v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  unsigned int v41;
  __int64 v42;
  unsigned int v43;
  char *v44;
  char v45;
  char *v46;
  __int64 v47;
  int v48;
  int v49;
  _WORD *v50;
  __int16 *v51;
  unsigned int v52;
  char *v53;
  unsigned __int64 v54;
  char v55;
  char *v56;
  int v57;
  int v58;
  char v59;
  char *v60;
  char v61;
  char *v62;
  __int64 v63;
  __int64 v64;
  char *v65;
  void *v66;
  unsigned int v67;
  int v68;
  unsigned __int8 v69;
  int v70;
  char v71;
  int v72;
  int v73;
  _WORD *v74;
  unsigned int v75;
  __int16 v76;
  _WORD *v77;
  __int16 v78;
  __int16 v79;
  __int64 v80;
  unsigned __int16 v81;
  __int64 v82;
  bool v83;
  __int16 v84;
  char v85;
  _BYTE *v86;
  char v87;
  char v88;
  __int64 v89;
  unsigned __int8 v90;
  __int64 v91;
  char v92;
  _BYTE *v93;
  __int64 v94;
  int v95;
  __int64 v96;
  char v97;
  unsigned __int8 *v98;
  unsigned int v99;
  int v100;
  int v101;
  unsigned int v102;
  unsigned int v103;
  __int64 v104;
  char v105;
  int v106;
  int v107;
  unsigned __int8 *v108;
  int v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v118;
  sr_png_inflate_context sr_inflate;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140167D10[10464];
#define i (*(unsigned __int8 (*))(void *)(sr_frame_140167D10 + 0)) /* [rsp+20h] */
#define v120 (*(char (*))(void *)(sr_frame_140167D10 + 1)) /* [rsp+21h] */
#define v121 (*(__int16 (*))(void *)(sr_frame_140167D10 + 4)) /* [rsp+24h] */
#define v122 (*(char (*))(void *)(sr_frame_140167D10 + 6)) /* [rsp+26h] */
#define v123 (*(int (*))(void *)(sr_frame_140167D10 + 8)) /* [rsp+28h] */
#define v124 (*(int (*))(void *)(sr_frame_140167D10 + 12)) /* [rsp+2Ch] */
#define v125 (*(signed int (*))(void *)(sr_frame_140167D10 + 16)) /* [rsp+30h] */
#define v126 (*(int (*))(void *)(sr_frame_140167D10 + 20)) /* [rsp+34h] */
#define v127 (*(int (*))(void *)(sr_frame_140167D10 + 24)) /* [rsp+38h] */
#define v128 (*(int (*))(void *)(sr_frame_140167D10 + 28)) /* [rsp+3Ch] */
#define v129 (*(int (*))(void *)(sr_frame_140167D10 + 32)) /* [rsp+40h] */
#define v130 (*(unsigned int (*))(void *)(sr_frame_140167D10 + 40)) /* [rsp+48h] */
#define v131 (*(int (*))(void *)(sr_frame_140167D10 + 44)) /* [rsp+4Ch] */
#define v137 (*(_WORD (*)[520])(void *)(sr_frame_140167D10 + 9408)) /* [rsp+24E0h] */
#define v138 (*(__int64 (*))(void *)(sr_frame_140167D10 + 10448)) /* [rsp+28F0h] */

  v129 = a3;
  v124 = a2;
  v125 = 0;
  v127 = 0;
  v4 = *(_DWORD **)a1;
  v5 = 0;
  v6 = 0;
  v128 = 0;
  v126 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v120 = 0;
  v8 = 0;
  i = 0;
  v121 = 0;
  v122 = 0;
  v123 = 1;
  if ( !(unsigned int)sub_14015CE80((__int64)v4) || a2 == 1 )
    return 0;
  while ( 1 )
  {
    v9 = sub_1401604F0((__int64)v4);
    v10 = sub_1401604F0((__int64)v4) + (v9 << 16);
    v130 = v10;
    v11 = sub_1401604F0((__int64)v4);
    v12 = sub_1401604F0((__int64)v4);
    v13 = v11 << 16;
    v14 = v13 + v12;
    v131 = v13 + v12;
    if ( (unsigned int)(v13 + v12) <= 0x49484452 )
      break;
    if ( v131 == 1347179589 )
    {
      if ( v123 )
        goto LABEL_9;
      if ( v10 > 0x300 || (v8 = v10 / 3, 3 * (v10 / 3) != v10) )
      {
        v15 = sr_client_static_tls();
        v16 = "invalid PLTE";
        goto LABEL_234;
      }
      v52 = 0;
      if ( !v8 )
        goto LABEL_128;
      v53 = *((char **)v4 + 24);
      while ( 2 )
      {
        v54 = *((_QWORD *)v4 + 25);
        if ( (unsigned __int64)v53 < v54 )
        {
          v55 = *v53++;
          goto LABEL_116;
        }
        if ( v4[12] )
        {
          stbi_refill_buffer((__int64)v4);
          v56 = *((char **)v4 + 24);
          v54 = *((_QWORD *)v4 + 25);
          v55 = *v56;
          v53 = v56 + 1;
LABEL_116:
          *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v53);
          v57 = 4 * v52;
          LOBYTE(v137[2 * v52 + 8]) = v55;
          v58 = 4 * v52;
          if ( (unsigned __int64)v53 < v54 )
          {
            v59 = *v53++;
            goto LABEL_121;
          }
        }
        else
        {
          v57 = 4 * v52;
          LOBYTE(v137[2 * v52 + 8]) = 0;
          v58 = 4 * v52;
        }
        if ( v4[12] )
        {
          stbi_refill_buffer((__int64)v4);
          v60 = *((char **)v4 + 24);
          v54 = *((_QWORD *)v4 + 25);
          v59 = *v60;
          v53 = v60 + 1;
LABEL_121:
          *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v53);
          *((_BYTE *)&v137[8] + (unsigned int)(v57 + 1)) = v59;
          if ( (unsigned __int64)v53 < v54 )
          {
            v61 = *v53++;
            *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v53);
            goto LABEL_127;
          }
        }
        else
        {
          *((_BYTE *)&v137[8] + (unsigned int)(v58 + 1)) = 0;
        }
        if ( v4[12] )
        {
          stbi_refill_buffer((__int64)v4);
          v62 = *((char **)v4 + 24);
          v61 = *v62;
          v53 = v62 + 1;
          *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v62 + 1);
        }
        else
        {
          v61 = 0;
        }
LABEL_127:
        ++v52;
        *((_BYTE *)&v137[8] + (unsigned int)(v57 + 2)) = v61;
        *((_BYTE *)&v137[8] + (unsigned int)(v57 + 3)) = -1;
        if ( v52 >= v8 )
          goto LABEL_128;
        continue;
      }
    }
    if ( v131 != 1951551059 )
      goto LABEL_73;
    if ( v123 )
      goto LABEL_9;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v15 = sr_client_static_tls();
      v16 = "tRNS after IDAT";
      goto LABEL_234;
    }
    if ( i )
    {
      if ( v124 == 2 )
      {
        v4[2] = 4;
      return 1;
      }
      if ( !v8 )
      {
        v15 = sr_client_static_tls();
        v16 = "tRNS before PLTE";
        goto LABEL_234;
      }
      if ( v10 > v8 )
        goto LABEL_227;
      v43 = 0;
      for ( i = 4; v43 < v10; *((_BYTE *)&v137[8] + v47) = v45 )
      {
        v44 = *((char **)v4 + 24);
        if ( (unsigned __int64)v44 >= *((_QWORD *)v4 + 25) )
        {
          if ( v4[12] )
          {
            stbi_refill_buffer((__int64)v4);
            v46 = *((char **)v4 + 24);
            v45 = *v46;
            *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v46 + 1);
          }
          else
          {
            v45 = 0;
          }
        }
        else
        {
          v45 = *v44;
          *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v44 + 1);
        }
        v47 = 4 * v43++ + 3;
      }
    }
    else
    {
      v48 = v4[2];
      if ( (v48 & 1) == 0 )
      {
        v15 = sr_client_static_tls();
        v16 = "tRNS with alpha";
LABEL_234:
        *(_QWORD *)(v15 + 16) = (uint64)(uintptr_t)(v16);
        return 0;
      }
      if ( v10 != 2 * v48 )
      {
LABEL_227:
        v15 = sr_client_static_tls();
        v16 = "bad tRNS len";
        goto LABEL_234;
      }
      v49 = 0;
      v120 = 1;
      if ( *(_DWORD *)(a1 + 32) == 16 )
      {
        if ( v48 > 0 )
        {
          v50 = v137;
          do
          {
            ++v49;
            *v50++ = sub_1401604F0((__int64)v4);
          }
          while ( v49 < v4[2] );
        }
      }
      else if ( v48 > 0 )
      {
        v51 = &v121;
        do
        {
          v51 = (__int16 *)((char *)v51 + 1);
          ++v49;
          *((_BYTE *)v51 - 1) = byte_14026E768[*(int *)(a1 + 32)] * sub_1401604F0((__int64)v4);
        }
        while ( v49 < v4[2] );
        v6 = v127;
      }
    }
LABEL_128:
    sub_1401604F0((__int64)v4);
    sub_1401604F0((__int64)v4);
  }
  if ( v13 + v12 == 1229472850 )
  {
    if ( !v123 )
    {
      v15 = sr_client_static_tls();
      v16 = "multiple IHDR";
      goto LABEL_234;
    }
    v123 = 0;
    if ( v10 != 13 )
    {
      v15 = sr_client_static_tls();
      v16 = "bad IHDR len";
      goto LABEL_234;
    }
    v20 = sub_1401604F0((__int64)v4);
    *v4 = (v20 << 16) + sub_1401604F0((__int64)v4);
    v21 = sub_1401604F0((__int64)v4);
    v22 = sub_1401604F0((__int64)v4) + (v21 << 16);
    v4[1] = v22;
    if ( v22 > 0x1000000 || *v4 > 0x1000000u )
    {
LABEL_70:
      v15 = sr_client_static_tls();
      v16 = "too large";
      goto LABEL_234;
    }
    v23 = *((unsigned __int8 **)v4 + 24);
    if ( (unsigned __int64)v23 >= *((_QWORD *)v4 + 25) )
    {
      if ( v4[12] )
      {
        stbi_refill_buffer((__int64)v4);
        v25 = *((unsigned __int8 **)v4 + 24);
        v24 = *v25;
        *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v25 + 1);
      }
      else
      {
        v24 = 0;
      }
    }
    else
    {
      v24 = *v23;
      *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v23 + 1);
    }
    v26 = v24;
    *(_DWORD *)(a1 + 32) = v24;
    if ( v24 != 1 )
    {
      if ( v24 > 0x10u || (v27 = 65812, !_bittest(&v27, v26)) )
      {
        v15 = sr_client_static_tls();
        v16 = "1/2/4/8/16-bit only";
        goto LABEL_234;
      }
    }
    v28 = *((char **)v4 + 24);
    if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
    {
      if ( v4[12] )
      {
        stbi_refill_buffer((__int64)v4);
        v30 = *((unsigned __int8 **)v4 + 24);
        v29 = *v30;
        v28 = (char *)(v30 + 1);
        *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v28);
      }
      else
      {
        v29 = 0;
      }
    }
    else
    {
      v29 = *v28++;
      *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v28);
    }
    v31 = v29;
    v128 = v29;
    if ( v29 > 6u )
    {
LABEL_219:
      v15 = sr_client_static_tls();
      v16 = "bad ctype";
      goto LABEL_234;
    }
    if ( v29 == 3 )
    {
      if ( *(_DWORD *)(a1 + 32) == 16 )
        goto LABEL_219;
      v32 = 3;
      i = 3;
    }
    else
    {
      if ( (v29 & 1) != 0 )
        goto LABEL_219;
      v32 = i;
    }
    if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
    {
      if ( !v4[12] )
        goto LABEL_53;
      stbi_refill_buffer((__int64)v4);
      v28 = *((char **)v4 + 24);
    }
    v33 = *v28++;
    *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v28);
    if ( v33 )
    {
      v15 = sr_client_static_tls();
      v16 = "bad comp method";
      goto LABEL_234;
    }
LABEL_53:
    if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
    {
      if ( !v4[12] )
      {
LABEL_57:
        if ( (unsigned __int64)v28 >= *((_QWORD *)v4 + 25) )
        {
          if ( v4[12] )
          {
            stbi_refill_buffer((__int64)v4);
            v36 = *((unsigned __int8 **)v4 + 24);
            v35 = *v36;
            *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v36 + 1);
          }
          else
          {
            v35 = 0;
          }
        }
        else
        {
          v35 = *v28;
          *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v28 + 1);
        }
        v6 = v35;
        v127 = v35;
        if ( v35 > 1u )
        {
          v15 = sr_client_static_tls();
          v16 = "bad interlace method";
          goto LABEL_234;
        }
        if ( !*v4 || (v37 = v4[1]) == 0 )
        {
          v15 = sr_client_static_tls();
          v16 = "0-pixel image";
          goto LABEL_234;
        }
        v38 = 0x40000000u / *v4;
        if ( v32 )
        {
          v4[2] = 1;
          if ( v38 >> 2 < v37 )
            goto LABEL_70;
        }
        else
        {
          v39 = (v31 & 2 | 1) + ((v31 >> 2) & 1);
          v4[2] = v39;
          if ( v38 / v39 < v37 )
            goto LABEL_70;
          if ( v124 == 2 )
            return 1;
        }
        goto LABEL_128;
      }
      stbi_refill_buffer((__int64)v4);
      v28 = *((char **)v4 + 24);
    }
    v34 = *v28++;
    *((_QWORD *)v4 + 24) = (uint64)(uintptr_t)(v28);
    if ( v34 )
    {
      v15 = sr_client_static_tls();
      v16 = "bad filter method";
      goto LABEL_234;
    }
    goto LABEL_57;
  }
  if ( v131 == 1130840649 )
  {
    v126 = 1;
LABEL_75:
    if ( v10 )
    {
      if ( (v10 & 0x80000000) == 0 )
      {
        if ( *((_QWORD *)v4 + 2) && (v40 = v4[50] - v4[48], v40 < (int)v10) )
        {
          v41 = v10 - v40;
          v42 = *((_QWORD *)v4 + 5);
          *((_QWORD *)v4 + 24) = *((_QWORD *)v4 + 25);
          (*((void (           **)(__int64, _QWORD))v4 + 3))(v42, v41);
        }
        else
        {
          *((_QWORD *)v4 + 24) += (int)v10;
        }
      }
      else
      {
        *((_QWORD *)v4 + 24) = *((_QWORD *)v4 + 25);
      }
    }
    goto LABEL_128;
  }
  if ( v131 == 1229209940 )
  {
    if ( v123 )
      goto LABEL_9;
    if ( i && !v8 )
    {
      v15 = sr_client_static_tls();
      v16 = "no PLTE";
      goto LABEL_234;
    }
    if ( v124 == 2 )
    {
      v4[2] = i;
      return 1;
    }
    v17 = v125;
    v18 = v10 + v125;
    if ( (int)(v10 + v125) < v125 )
      return 0;
    if ( v18 > v5 )
    {
      if ( !v5 )
      {
        v5 = 4096;
        if ( v10 > 0x1000 )
          v5 = v10;
      }
      for ( ; v18 > v5; v5 *= 2 )
        ;
      v19 = j__realloc_base_sr(*(_QWORD *)(a1 + 8), v5);
      if ( !v19 )
        goto LABEL_210;
      *(_QWORD *)(a1 + 8) = v19;
      v17 = v125;
    }
    if ( !sub_140160860((__int64)v4, (__m128i *)(*(_QWORD *)(a1 + 8) + v17), v10) )
    {
      v15 = sr_client_static_tls();
      v16 = "outofdata";
      goto LABEL_234;
    }
    v125 = v18;
    goto LABEL_128;
  }
  if ( v131 != 1229278788 )
  {
LABEL_73:
    if ( v123 )
      goto LABEL_9;
    if ( (v14 & 0x20000000) == 0 )
    {
      byte_140301850 = (unsigned int)(v13 + v12) >> 24;
      byte_140301851 = (unsigned int)(v13 + v12) >> 16;
      byte_140301853 = v131;
      v116 = 0; /* compiler TLS slot access recovered below */
      byte_140301852 = BYTE1(v14);
      v15 = sr_client_static_tls();
      v16 = &byte_140301850;
      goto LABEL_234;
    }
    goto LABEL_75;
  }
  if ( v123 )
  {
LABEL_9:
    v15 = sr_client_static_tls();
    v16 = "first not IHDR";
    goto LABEL_234;
  }
  if (v124) return 1;
  if ( !v124 )
  {
    v63 = *(_QWORD *)(a1 + 8);
    if ( !v63 )
    {
      v15 = sr_client_static_tls();
      v16 = "no IDAT";
      goto LABEL_234;
    }
    v64 = (int)(v4[1] * (v4[2] * ((unsigned int)(*(_DWORD *)(a1 + 32) * *v4 + 7) >> 3) + 1));
    v65 = (char *)sr_path_malloc(v64);
    if ( v65 )
    {
      sr_inflate.output_start = v65;
      sr_inflate.input_end = v63 + v125;
      sr_inflate.output = v65;
      sr_inflate.input = v63;
      sr_inflate.output_end = &v65[v64];
      sr_inflate.expandable = 1;
      if ( (unsigned int)sub_140168E00((__int64)(uintptr_t)&sr_inflate, v126 == 0) )
      {
        v66 = sr_inflate.output_start;
        v67 = (_DWORD)sr_inflate.output - (_DWORD)sr_inflate.output_start;
        *(_QWORD *)(a1 + 16) = (uint64)(uintptr_t)(sr_inflate.output_start);
        if ( v66 )
        {
          free(*(void **)(a1 + 8));
          v68 = v129;
          v69 = i;
          *(_QWORD *)(a1 + 8) = 0;
          v70 = v4[2] + 1;
          if ( v68 != v70 || v68 == 3 || v69 )
          {
            v71 = v120;
            if ( !v120 )
              v70 = v4[2];
          }
          else
          {
            v71 = v120;
          }
          v72 = v128;
          v4[3] = v70;
          if ( (unsigned int)sub_14015E260(a1, *(unsigned __int8 **)(a1 + 16), v67, v70, *(_DWORD *)(a1 + 32), v72, v6) )
          {
            if ( v71 )
            {
              v73 = v4[3];
              v74 = *(_WORD **)(a1 + 24);
              v75 = **(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL);
              if ( *(_DWORD *)(a1 + 32) == 16 )
              {
                if ( v73 == 2 )
                {
                  if ( v75 )
                  {
                    v81 = v137[0];
                    v82 = v75;
                    do
                    {
                      v83 = *v74 == v81;
                      v74 += 2;
                      v84 = -1;
                      if ( v83 )
                        v84 = 0;
                      *(v74 - 1) = v84;
                      --v82;
                    }
                    while ( v82 );
                  }
                }
                else
                {
                  if ( v73 != 4 )
                    crt_assert(
                      (char *)L"out_n == 2 || out_n == 4",
                      (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                      0x12DCu);
                  if ( v75 )
                  {
                    v76 = v137[2];
                    v77 = v74 + 2;
                    v78 = v137[1];
                    v79 = v137[0];
                    v80 = v75;
                    do
                    {
                      if ( *(v77 - 2) == v79 && *(v77 - 1) == v78 && *v77 == v76 )
                        v77[1] = 0;
                      v77 += 4;
                      --v80;
                    }
                    while ( v80 );
                    v69 = i;
                  }
                }
              }
              else if ( v73 == 2 )
              {
                if ( v75 )
                {
                  v90 = v121;
                  v91 = v75;
                  do
                  {
                    v83 = *(_BYTE *)v74++ == v90;
                    v92 = -1;
                    if ( v83 )
                      v92 = 0;
                    *((_BYTE *)v74 - 1) = v92;
                    --v91;
                  }
                  while ( v91 );
                }
              }
              else
              {
                if ( v73 != 4 )
                  crt_assert(
                    (char *)L"out_n == 2 || out_n == 4",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                    0x12C3u);
                if ( v75 )
                {
                  v85 = v122;
                  v86 = v74 + 1;
                  v87 = HIBYTE(v121);
                  v88 = v121;
                  v89 = v75;
                  do
                  {
                    if ( *(v86 - 2) == v88 && *(v86 - 1) == v87 && *v86 == v85 )
                      v86[1] = 0;
                    v86 += 4;
                    --v89;
                  }
                  while ( v89 );
                }
              }
            }
            if ( v126 && g_144980DBC && (int)v4[3] > 2 )
            {
              v93 = *(_BYTE **)(a1 + 24);
              v94 = (unsigned int)(**(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL));
              v95 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
              if ( v95 == 3 )
              {
                if ( (_DWORD)v94 )
                {
                  v96 = (unsigned int)v94;
                  do
                  {
                    v97 = *v93;
                    *v93 = v93[2];
                    v93[2] = v97;
                    v93 += 3;
                    --v96;
                  }
                  while ( v96 );
                }
              }
              else
              {
                if ( v95 != 4 )
                  crt_assert(
                    (char *)L"s->img_out_n == 4",
                    (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
                    0x132Du);
                if ( (_DWORD)v94 )
                {
                  if ( g_144980DB8 )
                  {
                    v98 = v93 + 1;
                    do
                    {
                      v99 = v98[2];
                      v100 = *(v98 - 1);
                      v101 = v98[1];
                      if ( (_BYTE)v99 )
                      {
                        *v98 = ((v99 >> 1) + 255 * *v98) / v99;
                        v102 = ((v99 >> 1) + 255 * v100) / v99;
                        v103 = ((v99 >> 1) + 255 * v101) / v99;
                      }
                      else
                      {
                        LOBYTE(v102) = *(v98 - 1);
                        LOBYTE(v103) = v98[1];
                      }
                      *(v98 - 1) = v103;
                      v98[1] = v102;
                      v98 += 4;
                      --v94;
                    }
                    while ( v94 );
                  }
                  else
                  {
                    v104 = (unsigned int)v94;
                    do
                    {
                      v105 = *v93;
                      *v93 = v93[2];
                      v93[2] = v105;
                      v93 += 4;
                      --v104;
                    }
                    while ( v104 );
                  }
                }
              }
            }
            if ( v69 )
            {
              v106 = v129;
              v107 = v69;
              v4[2] = v69;
              v4[3] = v69;
              if ( v106 >= 3 )
              {
                v4[3] = v106;
                v107 = v106;
              }
              v108 = *(unsigned __int8 **)(a1 + 24);
              v109 = **(_DWORD **)a1 * *(_DWORD *)(*(_QWORD *)a1 + 4LL);
              if ( v109 < 0 || v109 > 0x7FFFFFFF / v107 || (v110 = sr_path_malloc(v109 * v107), (v111 = v110) == 0) )
              {
LABEL_210:
                v15 = sr_client_static_tls();
                v16 = "outofmem";
                goto LABEL_234;
              }
              if ( v109 )
              {
                v112 = (unsigned int)v109;
                v113 = v110 + 2;
                if ( v107 == 3 )
                {
                  do
                  {
                    v114 = *v108;
                    v113 += 3;
                    ++v108;
                    *(_BYTE *)(v113 - 5) = v137[2 * v114 + 8];
                    *(_BYTE *)(v113 - 4) = HIBYTE(v137[2 * v114 + 8]);
                    *(_BYTE *)(v113 - 3) = v137[2 * v114 + 9];
                    --v112;
                  }
                  while ( v112 );
                }
                else
                {
                  do
                  {
                    v115 = *v108;
                    v113 += 4;
                    ++v108;
                    *(_BYTE *)(v113 - 6) = v137[2 * v115 + 8];
                    *(_BYTE *)(v113 - 5) = HIBYTE(v137[2 * v115 + 8]);
                    *(_BYTE *)(v113 - 4) = v137[2 * v115 + 9];
                    *(_BYTE *)(v113 - 3) = HIBYTE(v137[2 * v115 + 9]);
                    --v112;
                  }
                  while ( v112 );
                }
              }
              free(*(void **)(a1 + 24));
              *(_QWORD *)(a1 + 24) = v111;
            }
            else if ( v71 )
            {
              ++v4[2];
            }
            free(*(void **)(a1 + 16));
            *(_QWORD *)(a1 + 16) = 0;
            sub_140160670((__int64)v4);
            return 1;
          }
        }
      }
      else
      {
        free(sr_inflate.output_start);
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  return 0;
}
#undef i
#undef v120
#undef v121
#undef v122
#undef v123
#undef v124
#undef v125
#undef v126
#undef v127
#undef v128
#undef v129
#undef v130
#undef v131
#undef v137
#undef v138

// 1401688D3: conditional instruction was optimized away because esi.4>=1
// 1401688D9: conditional instruction was optimized away because esi.4>=1

//----- (0000000140168C80) ----------------------------------------------------
__int64            sub_140168C80(char **a1)
{
  unsigned char sr_stored_header[4]; /* native RSP+30..33 */
  int v1;
  int v3;
  int v4;
  int v5;
  bool v6;
  unsigned int v7;
  unsigned __int8 *v8;
  int v9;
  __int64 v11;
  char *v12;
  char *v13;
  char v14;
  __int64 v15;
  unsigned __int64 v16;
  char *v17;

  v1 = *((_DWORD *)a1 + 4);
  v3 = v1;
  v4 = v1 & 7;
  if ( (v1 & 7) != 0 )
  {
    if ( v1 < v4 )
    {
      sub_140160350((__int64)a1);
      v1 = *((_DWORD *)a1 + 4);
    }
    *((_DWORD *)a1 + 5) >>= v4;
    v1 -= v4;
    *((_DWORD *)a1 + 4) = v1;
    v3 = v1;
  }
  v5 = 0;
  v6 = v1 < 0;
  if ( v1 > 0 )
  {
    v7 = *((_DWORD *)a1 + 5);
    v8 = &sr_stored_header[0];
    do
    {
      ++v5;
      *v8++ = *((_BYTE *)a1 + 20);
      v9 = v3 - 8;
      v7 >>= 8;
      *((_DWORD *)a1 + 5) = v7;
      v3 = v9;
      v6 = v9 < 0;
    }
    while ( v9 > 0 );
    *((_DWORD *)a1 + 4) = v9;
  }
  if ( v6 )
    goto LABEL_10;
  v11 = v5;
  if ( v5 < 4LL )
  {
    v12 = a1[1];
    v13 = *a1;
    do
    {
      if ( v13 < v12 )
      {
        v14 = *v13++;
        *a1 = v13;
      }
      else
      {
        v14 = 0;
      }
      *(&sr_stored_header[0] + v11++) = v14;
    }
    while ( v11 < 4 );
  }
  v15 = sr_stored_header[0] + (sr_stored_header[1] << 8);
  if ( sr_stored_header[2] + (sr_stored_header[3] << 8) != ((sr_stored_header[0] + (sr_stored_header[1] << 8)) ^ 0xFFFF) )
  {
LABEL_10:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("zlib corrupt");
    return 0;
  }
  v16 = (unsigned int)v15;
  if ( &(*a1)[(unsigned int)v15] > a1[1] )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("read past buffer");
    return 0;
  }
  v17 = a1[3];
  if ( &v17[v15] > a1[5] && !(unsigned int)sub_14016F9E0((__int64)a1, (__int64)v17, v15) )
    return 0;
  crt_memcpy((__m128i *)a1[3], (     __m128i *)*a1, v16);
  *a1 += v16;
  a1[3] += v16;
  return 1;
}

//----- (0000000140168E00) ----------------------------------------------------
__int64            sub_140168E00(__int64 a1, int a2)
{
  char *v3;
  unsigned __int64 v4;
  int v5;
  unsigned __int8 *v6;
  int v7;
  unsigned __int8 *v8;
  int v10;
  unsigned int v11;
  int v12;
  unsigned __int64 v13;
  char *v14;
  unsigned __int8 v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  unsigned __int64 v21;
  char *v22;
  unsigned __int8 v23;
  int v24;
  int v25;
  int v26;

  if ( a2 )
  {
    v3 = *(char **)a1;
    v4 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int64)v3 >= v4
      || (v5 = (unsigned __int8)*v3, v6 = (unsigned __int8 *)(v3 + 1), *(_QWORD *)a1 = (uint64)(uintptr_t)(v6), (unsigned __int64)v6 >= v4)
      || (v7 = *v6, v8 = v6 + 1, *(_QWORD *)a1 = (uint64)(uintptr_t)(v8), (unsigned __int64)v8 >= v4)
      || v7 + (v5 << 8) != 31 * ((v7 + (v5 << 8)) / 0x1Fu) )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad zlib header");
      return 0;
    }
    if ( (v7 & 0x20) != 0 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no preset dict");
      return 0;
    }
    if ( (v5 & 0xF) != 8 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad compression");
      return 0;
    }
  }
  *(_QWORD *)(a1 + 16) = 0;
  do
  {
    v10 = *(_DWORD *)(a1 + 16);
    if ( v10 < 1 )
    {
      v11 = *(_DWORD *)(a1 + 20);
      v12 = *(_DWORD *)(a1 + 16);
      if ( v11 >= 1 << v10 )
      {
LABEL_21:
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v14 = *(char **)a1;
          if ( *(_QWORD *)a1 < v13 )
          {
            v15 = *v14;
            *(_QWORD *)a1 = (uint64)(uintptr_t)(v14 + 1);
          }
          else
          {
            v15 = 0;
          }
          v10 = v12 + 8;
          *(_DWORD *)(a1 + 16) = v12 + 8;
          v11 |= v15 << v12;
          *(_DWORD *)(a1 + 20) = v11;
          if ( v12 + 8 > 24 )
            break;
          v12 += 8;
          if ( v11 >= 1 << v10 )
            goto LABEL_21;
        }
      }
    }
    v16 = *(_DWORD *)(a1 + 20) >> 1;
    v17 = *(_DWORD *)(a1 + 20) & 1;
    v18 = v10 - 1;
    *(_DWORD *)(a1 + 20) = v16;
    *(_DWORD *)(a1 + 16) = v18;
    if ( v18 < 2 )
    {
      v19 = v18;
      v20 = v16;
      if ( v16 >= 1 << v18 )
      {
LABEL_30:
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
      }
      else
      {
        v21 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v22 = *(char **)a1;
          if ( *(_QWORD *)a1 < v21 )
          {
            v23 = *v22;
            *(_QWORD *)a1 = (uint64)(uintptr_t)(v22 + 1);
          }
          else
          {
            v23 = 0;
          }
          v18 = v19 + 8;
          *(_DWORD *)(a1 + 16) = v19 + 8;
          v16 = v20 | (v23 << v19);
          *(_DWORD *)(a1 + 20) = v16;
          v20 = v16;
          if ( v19 + 8 > 24 )
            break;
          v19 += 8;
          if ( v16 >= 1 << v18 )
            goto LABEL_30;
        }
      }
    }
    *(_DWORD *)(a1 + 20) = v16 >> 2;
    *(_DWORD *)(a1 + 16) = v18 - 2;
    v24 = v16 & 3;
    if ( (v16 & 3) != 0 )
    {
      if ( v24 == 3 )
        return 0;
      if ( v24 == 1 )
      {
        if ( !(unsigned int)sub_14016F730(a1 + 52, byte_14026FEF0, 288) )
          return 0;
        v26 = sub_14016F730(a1 + 2072, byte_140270010, 32);
      }
      else
      {
        v26 = sub_14015CF70(a1);
      }
      if ( !v26 )
        return 0;
      v25 = sub_140167A50(a1);
    }
    else
    {
      v25 = sub_140168C80((char **)a1);
    }
    if ( !v25 )
      return 0;
  }
  while ( !v17 );
  return 1;
}

//----- (00000001401691A0) ----------------------------------------------------
__int64            sub_1401691A0(__int64 a1, int *a2, int *a3, char *a4)
{
  __int64 v4;
  int *v5;
  int *v6;
  char *v7;
  unsigned __int64 *v9;
  char v10;
  int v11;
  int v12;
  char *v13;
  char *v14;
  char *v15;
  unsigned __int64 v16;
  char v17;
  char *v18;
  char v19;
  unsigned __int64 v20;
  char *v21;
  char v22;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401691A0[96];
#define v24 (*(__int64 (*))(void *)(sr_frame_1401691A0 + 0)) /* [rsp+0h] */
#define v25 (*(char (*))(void *)(sr_frame_1401691A0 + 32)) /* [rsp+20h] */
#define v26 (*(char * (*))(void *)(sr_frame_1401691A0 + 40)) /* [rsp+28h] */
#define v27 (*(char (*))(void *)(sr_frame_1401691A0 + 48)) /* [rsp+30h] */
#define v28 (*(__int64 (*))(void *)(sr_frame_1401691A0 + 80)) /* [rsp+50h] */

  v4 = 0;
  v5 = (int *)&v25;
  v6 = (int *)&v25;
  v7 = &v25;
  if ( a2 )
    v5 = a2;
  v9 = (unsigned __int64 *)(a1 + 192);
  v10 = 0;
  if ( a3 )
    v6 = a3;
  if ( a4 )
    v7 = a4;
  v26 = v7;
  if ( !(unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
    goto LABEL_8;
  if ( *(_QWORD *)(a1 + 16) && (v11 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v9, v11 < 88) )
  {
    *v9 = *(_QWORD *)(a1 + 200);
    (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(88 - v11));
  }
  else
  {
    *v9 += 88LL;
  }
  *v5 = sub_1401604F0(a1);
  *v6 = sub_1401604F0(a1);
  if ( !*(_QWORD *)(a1 + 16) )
  {
LABEL_16:
    if ( *v9 >= *(_QWORD *)(a1 + 200) )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_8;
    goto LABEL_16;
  }
LABEL_17:
  if ( !*v5 || 0x10000000 / *v5 >= *v6 )
  {
    if ( *(_QWORD *)(a1 + 16) && (v12 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v9, v12 < 8) )
    {
      *v9 = *(_QWORD *)(a1 + 200);
      (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(8 - v12));
    }
    else
    {
      *v9 += 8LL;
    }
    v13 = &v27;
    while ( 1 )
    {
      if ( v4 == 10 )
        return 0; /* 0x1401692F4: -> xor eax, eax */
      v14 = (char *)*v9;
      v15 = v13;
      v16 = *(_QWORD *)(a1 + 200);
      v13 += 3;
      ++v4;
      if ( *v9 >= v16 )
      {
        if ( !*(_DWORD *)(a1 + 48) )
        {
          v17 = 0;
          goto LABEL_32;
        }
        stbi_refill_buffer(a1);
        v17 = *(_BYTE *)*v9;
        v18 = (char *)(*v9 + 1);
        v16 = *(_QWORD *)(a1 + 200);
      }
      else
      {
        v17 = *v14;
        v18 = v14 + 1;
      }
      *v9 = (unsigned __int64)v18;
      if ( (unsigned __int64)v18 < v16 )
      {
        v19 = *v18;
        v20 = (unsigned __int64)(v18 + 1);
        goto LABEL_34;
      }
LABEL_32:
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v19 = 0;
        goto LABEL_37;
      }
      stbi_refill_buffer(a1);
      v19 = *(_BYTE *)*v9;
      v20 = *v9 + 1;
      v16 = *(_QWORD *)(a1 + 200);
LABEL_34:
      *v9 = v20;
      if ( v20 < v16 )
      {
        v21 = (char *)(v20 + 1);
        goto LABEL_39;
      }
LABEL_37:
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v15[1] = 0;
        goto LABEL_42;
      }
      stbi_refill_buffer(a1);
      v16 = *(_QWORD *)(a1 + 200);
      v21 = (char *)(*v9 + 1);
LABEL_39:
      *v9 = (unsigned __int64)v21;
      if ( (unsigned __int64)v21 < v16 )
      {
        v22 = *v21;
        *v9 = (unsigned __int64)(v21 + 1);
        goto LABEL_45;
      }
LABEL_42:
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        v22 = *(_BYTE *)(*v9)++;
      }
      else
      {
        v22 = 0;
      }
LABEL_45:
      v10 |= v22;
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          goto LABEL_49;
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_52;
      }
      if ( *v9 >= *(_QWORD *)(a1 + 200) )
        goto LABEL_52;
LABEL_49:
      if ( v19 != 8 )
      {
LABEL_52:
        *v9 = *(_QWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
        return 0; /* 0x14016943D: xor eax, eax */
      }
      if ( !v17 )
      {
        *(_DWORD *)v26 = ((v10 & 0x10) != 0) + 3;
        return 1; /* 0x14016941E: mov eax, 1 */
      }
    }
  }
LABEL_8:
  *v9 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0; /* 0x14016921E: xor eax, eax */
}
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28

//----- (0000000140169470) ----------------------------------------------------
__int64            sub_140169470(__int64 a1, __int64 a2)
{
  __int64 v4;
  char *v5;
  char v6;
  char *v7;

  v4 = 0;
  while ( 1 )
  {
    v5 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        v7 = *(char **)(a1 + 192);
        v6 = *v7;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v7 + 1);
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      v6 = *v5;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
    }
    if ( v6 != *(_BYTE *)(v4 + a2) )
      break;
    if ( ++v4 >= 4 )
      return 1;
  }
  return 0;
}

//----- (0000000140169510) ----------------------------------------------------
char *           sub_140169510(__int64 a1, int *a2, int *a3, int *a4, int a5)
{
  int *v5;
  __int64 v9;
  unsigned __int64 v10;
  int v11;
  int v12;
  int v14;
  _WORD *v15;
  int v16;
  int v17;
  char v18;

  v5 = (int *)&v18;
  if ( a4 )
    v5 = a4;
  v9 = 92;
  do
  {
    v10 = *(_QWORD *)(a1 + 192);
    if ( v10 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        ++*(_QWORD *)(a1 + 192);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = v10 + 1;
    }
    --v9;
  }
  while ( v9 );
  v11 = sub_1401604F0(a1);
  v12 = sub_1401604F0(a1);
  if ( v12 > 0x1000000 || v11 > 0x1000000 )
    goto LABEL_32;
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
      goto LABEL_17;
    if ( !*(_DWORD *)(a1 + 48) )
    {
LABEL_16:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad file");
      return nullptr;
    }
  }
  if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
    goto LABEL_16;
LABEL_17:
  if ( v11 < 0 || v12 < 0 || v12 && v11 > 0x7FFFFFFF / v12 || (v14 = v11 * v12, v11 * v12 < 0) || v14 > 0x1FFFFFFF )
  {
LABEL_32:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too large");
    return nullptr;
  }
  sub_1401604F0(a1);
  sub_1401604F0(a1);
  sub_1401604F0(a1);
  sub_1401604F0(a1);
  if ( v12 && v11 > 0x7FFFFFFF / v12 )
  {
    v15 = nullptr;
    v16 = 4 * v14;
  }
  else
  {
    v16 = 4 * v14;
    v15 = (_WORD *)sr_path_malloc(v16);
  }
  crt_memset((void *)(uintptr_t)(v15), 0xFFu, v16);
  if ( !sub_140169770(a1, v11, v12, v5, (__int64)v15) )
  {
    free(v15);
    v15 = nullptr;
  }
  v17 = a5;
  *a2 = v11;
  *a3 = v12;
  if ( !v17 )
    v17 = *v5;
  return sub_14015D7E0((char *)v15, 4, v17, v11, v12);
}

//----- (0000000140169770) ----------------------------------------------------
__int64            sub_140169770(__int64 a1, int a2, int a3, _DWORD *a4, __int64 a5)
{
  _QWORD *v5;
  char v6;
  __int64 v7;
  char *v10;
  unsigned __int64 v11;
  _BYTE *v12;
  int v13;
  char v14;
  char *v15;
  int v16;
  char v17;
  char *v18;
  int v19;
  char v20;
  char *v21;
  char v22;
  int v23;
  char *v24;
  int v25;
  int v26;
  __int64 v27;
  int v28;
  _BYTE *v29;
  __int64 v30;
  _BYTE *v31;
  int v32;
  int v33;
  unsigned __int8 *v34;
  unsigned __int8 *v35;
  unsigned __int8 v36;
  unsigned __int8 *v37;
  unsigned int v38;
  unsigned __int8 *v39;
  unsigned __int64 v40;
  unsigned __int8 v41;
  unsigned __int8 *v42;
  int v43;
  unsigned __int8 v44;
  int v45;
  unsigned __int8 *v46;
  unsigned __int8 v47;
  int v48;
  int v49;
  __int64 v50;
  char *v51;
  unsigned __int64 v52;
  char v53;
  char *v54;
  char v55;
  char v56;
  char v57;
  char v58;
  __int64 v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  char *v64;
  unsigned __int64 v65;
  char v66;
  char *v67;
  int v68;
  unsigned __int8 *v69;
  unsigned __int8 *v70;
  unsigned __int8 v71;
  unsigned __int8 *v72;
  int v73;
  int v74;
  unsigned __int8 v75;
  __int64 j;
  char *v77;
  unsigned __int64 v78;
  char v79;
  char *v80;
  char v81;
  __int64 v82;
  char v83;
  char v84;
  char v85;
  int v86;
  int v87;
  int v88;
  __int64 i;
  char *v90;
  unsigned __int64 v91;
  char v92;
  int v93;
  char *v94;
       char *v95;
  __int64 v96;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140169770[144];
#define v98 (*(__int64 (*))(void *)(sr_frame_140169770 + 0)) /* [rsp+0h] */
#define v99 (*(int (*))(void *)(sr_frame_140169770 + 32)) /* [rsp+20h] */
#define v100 (*(_BYTE (*)[4])(void *)(sr_frame_140169770 + 36)) /* [rsp+24h] */
#define v101 (*(_BYTE (*)[4])(void *)(sr_frame_140169770 + 40)) /* [rsp+28h] */
#define v102 (*(int (*))(void *)(sr_frame_140169770 + 44)) /* [rsp+2Ch] */
#define v103 (*(int (*))(void *)(sr_frame_140169770 + 48)) /* [rsp+30h] */
#define v104 (*(int (*))(void *)(sr_frame_140169770 + 52)) /* [rsp+34h] */
#define v105 (*(__int64 * (*))(void *)(sr_frame_140169770 + 56)) /* [rsp+38h] */
#define v106 (*(char * (*))(void *)(sr_frame_140169770 + 64)) /* [rsp+40h] */
#define v107 (*(__int64 (*))(void *)(sr_frame_140169770 + 72)) /* [rsp+48h] */
#define v108 (*(__int64 (*))(void *)(sr_frame_140169770 + 80)) /* [rsp+50h] */
#define v109 (*(__int64 (*))(void *)(sr_frame_140169770 + 88)) /* [rsp+58h] */
#define v110 (*(_BYTE * (*))(void *)(sr_frame_140169770 + 96)) /* [rsp+60h] */
#define v111 (*(_QWORD (*)[5])(void *)(sr_frame_140169770 + 104)) /* [rsp+68h] */

  v5 = v111;
  v6 = 0;
  v7 = 0;
  v108 = a5;
  v102 = a3;
  v99 = a2;
  do
  {
    if ( v7 == 10 )
      goto LABEL_190;
    v10 = *(char **)(a1 + 192);
    ++v7;
    v11 = *(_QWORD *)(a1 + 200);
    v12 = v5;
    v5 = (_QWORD *)((char *)v5 + 3);
    v109 = v7;
    if ( (unsigned __int64)v10 >= v11 )
    {
      if ( !*(_DWORD *)(a1 + 48) )
      {
        v14 = 0;
        goto LABEL_12;
      }
      v13 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v13 )
      {
        v11 = v13 + a1 + 56;
        *(_QWORD *)(a1 + 200) = v11;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
        v11 = *(_QWORD *)(a1 + 200);
      }
      v10 = *(char **)(a1 + 192);
    }
    v14 = *v10;
    v15 = v10 + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15);
    if ( (unsigned __int64)v15 < v11 )
      goto LABEL_17;
LABEL_12:
    if ( *(_DWORD *)(a1 + 48) )
    {
      v16 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v16 )
      {
        v11 = v16 + a1 + 56;
        *(_QWORD *)(a1 + 200) = v11;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
        v11 = *(_QWORD *)(a1 + 200);
      }
      v15 = *(char **)(a1 + 192);
LABEL_17:
      v17 = *v15;
      v18 = v15 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v18);
      *v12 = v17;
      if ( (unsigned __int64)v18 < v11 )
        goto LABEL_25;
      goto LABEL_20;
    }
    *v12 = 0;
LABEL_20:
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v12[1] = 0;
      goto LABEL_28;
    }
    v19 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
            *(_QWORD *)(a1 + 40),
            a1 + 56,
            *(unsigned int *)(a1 + 52));
    *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 192) = a1 + 56;
    if ( v19 )
    {
      v11 = v19 + a1 + 56;
      *(_QWORD *)(a1 + 200) = v11;
    }
    else
    {
      *(_DWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 200) = a1 + 57;
      *(_BYTE *)(a1 + 56) = 0;
      v11 = *(_QWORD *)(a1 + 200);
    }
    v18 = *(char **)(a1 + 192);
LABEL_25:
    v20 = *v18;
    v21 = v18 + 1;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v21);
    v12[1] = v20;
    if ( (unsigned __int64)v21 < v11 )
    {
      v22 = *v21;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v21 + 1);
      goto LABEL_34;
    }
LABEL_28:
    if ( *(_DWORD *)(a1 + 48) )
    {
      v23 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
              *(_QWORD *)(a1 + 40),
              a1 + 56,
              *(unsigned int *)(a1 + 52));
      *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
      *(_QWORD *)(a1 + 192) = a1 + 56;
      if ( v23 )
      {
        *(_QWORD *)(a1 + 200) = v23 + a1 + 56;
      }
      else
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 200) = a1 + 57;
        *(_BYTE *)(a1 + 56) = 0;
      }
      v24 = *(char **)(a1 + 192);
      v22 = *v24;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v24 + 1);
    }
    else
    {
      v22 = 0;
    }
LABEL_34:
    v6 |= v22;
    v12[2] = v22;
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_38;
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_189;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      goto LABEL_189;
LABEL_38:
    if ( *v12 != 8 )
      goto LABEL_190;
  }
  while ( v14 );
  v25 = 0;
  v104 = 0;
  *a4 = ((v6 & 0x10) != 0) + 3;
  if ( v102 <= 0 )
    return v108; /* 0x14016A145: mov rax, qword ptr [rsp + 0x50] */
  v26 = v102;
  uint64 sr_local_image_tls=sr_client_static_tls();
  v105 = (__int64 *)&sr_local_image_tls;
  while ( 1 )
  {
    v27 = 0;
    v103 = 0;
    v107 = 0;
    if ( v7 > 0 )
      break;
LABEL_184:
    v104 = ++v25;
    if ( v25 >= v26 )
      return v108; /* 0x14016A145: mov rax, qword ptr [rsp + 0x50] */
  }
  v28 = v99;
  v29 = (_BYTE *)(v108 + 4 * v25 * v99);
  v110 = v29;
LABEL_44:
  v30 = 3 * v27;
  v31 = v29;
  v32 = *((unsigned __int8 *)v111 + 3 * v27 + 1);
  if ( !v32 )
  {
    v86 = 0;
    if ( v28 <= 0 )
      goto LABEL_182;
    v87 = *((unsigned __int8 *)v111 + v30 + 2);
    while ( 1 )
    {
      v88 = 128;
      for ( i = 0; i < 4; ++i )
      {
        if ( (v88 & v87) == 0 )
          goto LABEL_177;
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_167;
        if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
LABEL_167:
          v90 = *(char **)(a1 + 192);
          v91 = *(_QWORD *)(a1 + 200);
          if ( (unsigned __int64)v90 >= v91 )
          {
LABEL_188:
            v95 = "bad file";
            v96 = *v105;
LABEL_191:
            *(_QWORD *)(v96 + 16) = (uint64)(uintptr_t)(v95);
            return 0; /* 0x14016A1D0: xor eax, eax */
          }
          goto LABEL_168;
        }
        v90 = *(char **)(a1 + 192);
        v91 = *(_QWORD *)(a1 + 200);
LABEL_168:
        if ( (unsigned __int64)v90 >= v91 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            v93 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52));
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( v93 )
            {
              *(_QWORD *)(a1 + 200) = v93 + a1 + 56;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
            }
            v94 = *(char **)(a1 + 192);
            v92 = *v94;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v94 + 1);
          }
          else
          {
            v92 = 0;
          }
        }
        else
        {
          v92 = *v90;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v90 + 1);
        }
        v31[i] = v92;
LABEL_177:
        v88 >>= 1;
      }
      if ( !v31 )
        return 0; /* 0x14016A1D0: xor eax, eax */
      ++v86;
      v31 += 4;
      if ( v86 >= v28 )
      {
LABEL_182:
        ++v103;
        v27 = v107 + 1;
        v7 = v109;
        v29 = v110;
        v107 = v27;
        if ( v27 >= v109 )
        {
          v25 = v104;
          v26 = v102;
          goto LABEL_184;
        }
        goto LABEL_44;
      }
    }
  }
  v33 = v32 - 1;
  if ( !v33 )
  {
    v68 = v28;
    if ( v28 <= 0 )
      goto LABEL_182;
    v69 = (unsigned __int8 *)v111 + v30 + 2;
    while ( 1 )
    {
      v70 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v70 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v72 = *(unsigned __int8 **)(a1 + 192);
          v71 = *v72;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v72 + 1);
        }
        else
        {
          v71 = 0;
        }
      }
      else
      {
        v71 = *v70;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v70 + 1);
      }
      if ( !*(_QWORD *)(a1 + 16) )
        goto LABEL_129;
      if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        break;
LABEL_130:
      v73 = *v69;
      v74 = 128;
      v75 = v68;
      if ( v71 <= (unsigned int)v68 )
        v75 = v71;
      for ( j = 0; j < 4; ++j )
      {
        if ( (v74 & v73) == 0 )
          goto LABEL_145;
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_138;
        if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        {
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
LABEL_138:
          v77 = *(char **)(a1 + 192);
          v78 = *(_QWORD *)(a1 + 200);
          if ( (unsigned __int64)v77 >= v78 )
            goto LABEL_188;
          goto LABEL_139;
        }
        v77 = *(char **)(a1 + 192);
        v78 = *(_QWORD *)(a1 + 200);
LABEL_139:
        if ( (unsigned __int64)v77 >= v78 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            v80 = *(char **)(a1 + 192);
            v79 = *v80;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v80 + 1);
          }
          else
          {
            v79 = 0;
          }
        }
        else
        {
          v79 = *v77;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v77 + 1);
        }
        v101[j] = v79;
LABEL_145:
        v74 >>= 1;
      }
      if ( v75 )
      {
        v81 = v101[0];
        v82 = v75;
        v83 = v101[3];
        v84 = v101[2];
        v85 = v101[1];
        do
        {
          if ( (v73 & 0x80u) != 0 )
            *v31 = v81;
          if ( (v73 & 0x40) != 0 )
            v31[1] = v85;
          if ( (v73 & 0x20) != 0 )
            v31[2] = v84;
          if ( (v73 & 0x10) != 0 )
            v31[3] = v83;
          v31 += 4;
          --v82;
        }
        while ( v82 );
      }
      v68 -= v75;
      if ( v68 <= 0 )
      {
        v28 = v99;
        goto LABEL_182;
      }
    }
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_189;
LABEL_129:
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      goto LABEL_189;
    goto LABEL_130;
  }
  if ( v33 != 1 )
  {
LABEL_190:
    v96 = sr_client_static_tls();
    v95 = "bad format";
    goto LABEL_191;
  }
  if ( v99 <= 0 )
  {
    v28 = v99;
    goto LABEL_182;
  }
  v34 = (unsigned __int8 *)v111 + v30 + 2;
  v106 = (char *)v111 + v30 + 2;
  while ( 2 )
  {
    v35 = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)v35 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        v37 = *(unsigned __int8 **)(a1 + 192);
        v36 = *v37;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v37 + 1);
      }
      else
      {
        v36 = 0;
      }
    }
    else
    {
      v36 = *v35;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v35 + 1);
    }
    v38 = v36;
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( (*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
      {
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_189;
        goto LABEL_57;
      }
    }
    else
    {
LABEL_57:
      if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
        goto LABEL_189;
    }
    if ( v38 >= 0x80 )
    {
      if ( v38 == 128 )
      {
        v39 = *(unsigned __int8 **)(a1 + 192);
        v40 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)v39 < v40 )
          goto LABEL_63;
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v39 = *(unsigned __int8 **)(a1 + 192);
          v40 = *(_QWORD *)(a1 + 200);
LABEL_63:
          v41 = *v39;
          v42 = v39 + 1;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v42);
          v43 = v41;
          if ( (unsigned __int64)v42 < v40 )
          {
            v44 = *v42;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v42 + 1);
            v45 = v44 + (v41 << 8);
            goto LABEL_70;
          }
        }
        else
        {
          v43 = 0;
        }
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v46 = *(unsigned __int8 **)(a1 + 192);
          v47 = *v46;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v46 + 1);
          v45 = v47 + (v43 << 8);
        }
        else
        {
          v45 = v43 << 8;
        }
      }
      else
      {
        v45 = v38 - 127;
      }
LABEL_70:
      if ( v45 > v28 )
        goto LABEL_189;
      v48 = *v34;
      v49 = 128;
      v50 = 0;
LABEL_72:
      if ( (v49 & v48) != 0 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          {
            v51 = *(char **)(a1 + 192);
            v52 = *(_QWORD *)(a1 + 200);
            goto LABEL_78;
          }
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
        }
        v51 = *(char **)(a1 + 192);
        v52 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)v51 >= v52 )
          goto LABEL_188;
LABEL_78:
        if ( (unsigned __int64)v51 >= v52 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            v54 = *(char **)(a1 + 192);
            v53 = *v54;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v54 + 1);
          }
          else
          {
            v53 = 0;
          }
        }
        else
        {
          v53 = *v51;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v51 + 1);
        }
        v100[v50] = v53;
      }
      ++v50;
      v49 >>= 1;
      if ( v50 >= 4 )
      {
        if ( v45 > 0 )
        {
          v55 = v100[0];
          v56 = v100[3];
          v57 = v100[2];
          v58 = v100[1];
          v59 = (unsigned int)v45;
          do
          {
            if ( (v48 & 0x80u) != 0 )
              *v31 = v55;
            if ( (v48 & 0x40) != 0 )
              v31[1] = v58;
            if ( (v48 & 0x20) != 0 )
              v31[2] = v57;
            if ( (v48 & 0x10) != 0 )
              v31[3] = v56;
            v31 += 4;
            --v59;
          }
          while ( v59 );
        }
LABEL_116:
        v34 = (unsigned __int8 *)v106;
LABEL_117:
        v28 -= v45;
        if ( v28 <= 0 )
        {
          v28 = v99;
          goto LABEL_182;
        }
        continue;
      }
      goto LABEL_72;
    }
    break;
  }
  v45 = v38 + 1;
  if ( v45 > (unsigned int)v28 )
  {
LABEL_189:
    v96 = sr_client_static_tls();
    v95 = "bad file";
    goto LABEL_191;
  }
  v60 = 0;
  if ( !v45 )
    goto LABEL_117;
  v61 = *v34;
  while ( 2 )
  {
    v62 = 128;
    v63 = 0;
    while ( 2 )
    {
      if ( (v62 & v61) != 0 )
      {
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          {
            v64 = *(char **)(a1 + 192);
            v65 = *(_QWORD *)(a1 + 200);
            goto LABEL_107;
          }
          if ( !*(_DWORD *)(a1 + 48) )
            goto LABEL_188;
        }
        v64 = *(char **)(a1 + 192);
        v65 = *(_QWORD *)(a1 + 200);
        if ( (unsigned __int64)v64 >= v65 )
          goto LABEL_188;
LABEL_107:
        if ( (unsigned __int64)v64 >= v65 )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            v67 = *(char **)(a1 + 192);
            v66 = *v67;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v67 + 1);
          }
          else
          {
            v66 = 0;
          }
        }
        else
        {
          v66 = *v64;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v64 + 1);
        }
        v31[v63] = v66;
      }
      ++v63;
      v62 >>= 1;
      if ( v63 < 4 )
        continue;
      break;
    }
    if ( v31 )
    {
      ++v60;
      v31 += 4;
      if ( v60 >= v45 )
        goto LABEL_116;
      continue;
    }
    return 0; /* 0x14016A1D0: xor eax, eax */
  }
}
#undef v98
#undef v99
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111

//----- (000000014016A210) ----------------------------------------------------
_BOOL8            sub_14016A210(__int64 a1)
{
  BOOL v2;
  __int64 v3;
  unsigned __int64 v4;

  if ( (unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
  {
    v3 = 84;
    do
    {
      v4 = *(_QWORD *)(a1 + 192);
      if ( v4 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          ++*(_QWORD *)(a1 + 192);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 192) = v4 + 1;
      }
      --v3;
    }
    while ( v3 );
    v2 = sub_140169470(a1, (__int64)"PICT") != 0;
  }
  else
  {
    v2 = 0;
  }
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return v2;
}

//----- (000000014016A2C0) ----------------------------------------------------
_BOOL8            sub_14016A2C0(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;

  if ( !(unsigned int)sub_140169470(a1, (__int64)&unk_140272D00) )
    return 0;
  v2 = 84;
  do
  {
    v3 = *(_QWORD *)(a1 + 192);
    if ( v3 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        ++*(_QWORD *)(a1 + 192);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = v3 + 1;
    }
    --v2;
  }
  while ( v2 );
  return (unsigned int)sub_140169470(a1, (__int64)"PICT") != 0;
}

//----- (000000014016A360) ----------------------------------------------------
__int64            sub_14016A360(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v7;
  __int64 v8;
  _QWORD v10[7];

  v10[0] = a1;
  v7 = sub_140167D10((__int64)v10, 2, 0);
  v8 = v10[0];
  if ( v7 )
  {
    if ( a2 )
      *a2 = *(_DWORD *)v10[0];
    if ( a3 )
      *a3 = *(_DWORD *)(v8 + 4);
    if ( a4 )
      *a4 = *(_DWORD *)(v8 + 8);
    return 1;
  }
  else
  {
    *(_QWORD *)(v10[0] + 192LL) = *(_QWORD *)(v10[0] + 208LL);
    *(_QWORD *)(v8 + 200) = *(_QWORD *)(v8 + 216);
    return 0;
  }
}

//----- (000000014016A400) ----------------------------------------------------
__int64            sub_14016A400(_DWORD **a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v8;

  if ( (unsigned int)sub_140167D10((__int64)a1, 2, 0) )
  {
    if ( a2 )
      *a2 = **a1;
    if ( a3 )
      *a3 = (*a1)[1];
    if ( a4 )
      *a4 = (*a1)[2];
    return 1;
  }
  else
  {
    v8 = *a1;
    v8[24] = *((_QWORD *)*a1 + 26);
    v8[25] = v8[27];
    return 0;
  }
}

//----- (000000014016A4A0) ----------------------------------------------------
__int64            sub_14016A4A0(__int64 a1)
{
  __int64 v1;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016A4A0[48];
#define v3 (*(_QWORD (*)[4])(void *)(sr_frame_14016A4A0 + 0)) /* [rsp+20h] */
#define v4 (*(int (*))(void *)(sr_frame_14016A4A0 + 32)) /* [rsp+40h] */

  v3[0] = a1;
  if ( (unsigned int)sub_140167D10((__int64)v3, 2, 0) && v4 == 16 )
    return 1;
  v1 = v3[0];
  *(_QWORD *)(v3[0] + 192LL) = *(_QWORD *)(v3[0] + 208LL);
  *(_QWORD *)(v1 + 200) = *(_QWORD *)(v1 + 216);
  return 0;
}
#undef v3
#undef v4

//----- (000000014016A500) ----------------------------------------------------
char *           sub_14016A500(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, unsigned int a5, int *a6)
{
  char *v6;
  char *v10;
  int v11;
  _DWORD *v12;
  int v13;
  int v14;
  char *v15;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016A500[64];
#define v17 (*(int (*))(void *)(sr_frame_14016A500 + 0)) /* [rsp+20h] */
#define v18 (*(_QWORD (*)[3])(void *)(sr_frame_14016A500 + 16)) /* [rsp+30h] */
#define v19 (*(char * (*))(void *)(sr_frame_14016A500 + 40)) /* [rsp+48h] */
#define v20 (*(int (*))(void *)(sr_frame_14016A500 + 48)) /* [rsp+50h] */

  v6 = nullptr;
  v18[0] = a1;
  v10 = nullptr;
  if ( a5 > 4 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad req_comp");
    return nullptr;
  }
  if ( !(unsigned int)sub_140167D10((__int64)v18, 0, a5) )
  {
    v6 = v19;
LABEL_18:
    free(v6);
    free((void *)v18[2]);
    free((void *)v18[1]);
    return v10;
  }
  v11 = v20;
  if ( v20 <= 8 )
  {
    v11 = 8;
    goto LABEL_6;
  }
  if ( v20 == 16 )
  {
LABEL_6:
    *a6 = v11;
    v10 = v19;
    v12 = (_DWORD *)v18[0];
    if ( !a5
      || (v13 = *(_DWORD *)(v18[0] + 12LL), a5 == v13)
      || ((v14 = *(_DWORD *)v18[0], v17 = *(_DWORD *)(v18[0] + 4LL), v11 != 8)
        ? (v15 = sub_14015DD00(v19, v13, a5, v14, v17))
        : (v15 = sub_14015D7E0(v19, v13, a5, v14, v17)),
          v12[3] = a5,
          (v10 = v15) != nullptr) )
    {
      *a2 = *v12;
      *a3 = v12[1];
      if ( a4 )
        *a4 = v12[2];
      goto LABEL_18;
    }
    return nullptr;
  }
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad bits_per_channel");
  return nullptr;
}
#undef v17
#undef v18
#undef v19
#undef v20

//----- (000000014016A670) ----------------------------------------------------
__int64            sub_14016A670(_QWORD *a1)
{
  __int64 result;

  result = sub_14015CE80((__int64)a1);
  a1[24] = a1[26];
  a1[25] = a1[27];
  return result;
}

//----- (000000014016A6A0) ----------------------------------------------------
__int64            sub_14016A6A0(__int64 a1, _BYTE *a2)
{
  unsigned int v2;
  char *v5;
  char v6;
  int v7;
  char *v8;
  char v9;

  v2 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_6;
      if ( !*(_DWORD *)(a1 + 48) )
        return v2;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      return v2;
LABEL_6:
    if ( (unsigned __int8)(*a2 - 48) > 9u )
      return v2;
    v5 = *(char **)(a1 + 192);
    v2 = (char)*a2 + 2 * (5 * v2 - 24);
    if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v7 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
               *(_QWORD *)(a1 + 40),
               a1 + 56,
               *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v7 )
        {
          *(_QWORD *)(a1 + 200) = v7 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v8 = *(char **)(a1 + 192);
        v9 = *v8;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8 + 1);
        *a2 = v9;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      v6 = *v5;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
      *a2 = v6;
    }
  }
}

//----- (000000014016A7D0) ----------------------------------------------------
__int64            sub_14016A7D0(__int64 a1, char *a2, char *a3, int *a4)
{
  char *v4;
  char *v5;
  char *v7;
  unsigned __int64 v8;
  int *v9;
  char v10;
  char *v11;
  char v12;
  char *v13;
  int v14;
  char *v15;
  char v16;
  char *v17;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016A7D0[16];
#define v19 (*(char (*))(void *)(sr_frame_14016A7D0 + 0)) /* [rsp+40h] */
#define v20 (*(char (*))(void *)(sr_frame_14016A7D0 + 8)) /* [rsp+48h] */

  v4 = *(char **)(a1 + 208);
  v5 = &v20;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4);
  v7 = &v20;
  v8 = *(_QWORD *)(a1 + 216);
  v9 = (int *)&v20;
  if ( a2 )
    v5 = a2;
  if ( a3 )
    v7 = a3;
  *(_QWORD *)(a1 + 200) = v8;
  if ( a4 )
    v9 = a4;
  if ( (unsigned __int64)v4 >= v8 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v10 = 0;
      goto LABEL_13;
    }
    stbi_refill_buffer(a1);
    v4 = *(char **)(a1 + 192);
    v8 = *(_QWORD *)(a1 + 200);
  }
  v10 = *v4;
  v11 = v4 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v11);
  if ( (unsigned __int64)v11 < v8 )
  {
    v12 = *v11;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v11 + 1);
    goto LABEL_16;
  }
LABEL_13:
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    v13 = *(char **)(a1 + 192);
    v12 = *v13;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v13 + 1);
  }
  else
  {
    v12 = 0;
  }
LABEL_16:
  if ( v10 == 80 && (unsigned __int8)(v12 - 53) <= 1u )
  {
    v14 = 1;
    if ( v12 == 54 )
      v14 = 3;
    *v9 = v14;
    v15 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        v17 = *(char **)(a1 + 192);
        v16 = *v17;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v17 + 1);
      }
      else
      {
        v16 = 0;
      }
    }
    else
    {
      v16 = *v15;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15 + 1);
    }
    v19 = v16;
    sub_14016ABA0(a1, &v19);
    *(_DWORD *)v5 = sub_14016A6A0(a1, &v19);
    sub_14016ABA0(a1, &v19);
    *(_DWORD *)v7 = sub_14016A6A0(a1, &v19);
    sub_14016ABA0(a1, &v19);
    if ( (int)sub_14016A6A0(a1, &v19) <= 255 )
      return 1;
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("max value > 255");
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  }
  return 0;
}
#undef v19
#undef v20

//----- (000000014016A9F0) ----------------------------------------------------
char *           sub_14016A9F0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v9;
  int v10;
  int v11;
  int v12;
  __m128i *v13;
  char *v14;
  int v15;
  __int64 v17;
       char *v18;

  if ( !(unsigned int)sub_14016A7D0(a1, (char *)a1, (char *)(a1 + 4), (int *)(a1 + 8)) )
    return nullptr;
  if ( *(_DWORD *)(a1 + 4) > 0x1000000u || *(_DWORD *)a1 > 0x1000000u )
    goto LABEL_24;
  *a2 = *(_DWORD *)a1;
  *a3 = *(_DWORD *)(a1 + 4);
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 8);
  if ( (v9 = *(_DWORD *)(a1 + 8), v10 = *(_DWORD *)(a1 + 4), v11 = *(_DWORD *)a1, v9 < 0)
    || v11 < 0
    || v11 && v9 > 0x7FFFFFFF / v11
    || (v12 = v11 * v9, v11 * v9 < 0)
    || v10 < 0
    || v10 && v12 > 0x7FFFFFFF / v10 )
  {
LABEL_24:
    v17 = sr_client_static_tls();
    v18 = "too large";
    goto LABEL_25;
  }
  if ( v11 && v9 > 0x7FFFFFFF / v11
    || v10 && v12 > 0x7FFFFFFF / v10
    || (v13 = (__m128i *)sr_path_malloc(v10 * v12), (v14 = (char *)v13) == nullptr) )
  {
    v17 = sr_client_static_tls();
    v18 = "outofmem";
LABEL_25:
    *(_QWORD *)(v17 + 16) = (uint64)(uintptr_t)(v18);
    return nullptr;
  }
  sub_140160860(a1, v13, *(_DWORD *)(a1 + 8) * *(_DWORD *)(a1 + 4) * *(_DWORD *)a1);
  if ( !a5 )
    return v14;
  v15 = *(_DWORD *)(a1 + 8);
  if ( a5 == v15 )
    return v14;
  v14 = sub_14015D7E0(v14, v15, a5, *(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  if ( v14 )
    return v14;
  return nullptr;
}

//----- (000000014016ABA0) ----------------------------------------------------
unsigned __int64            sub_14016ABA0(__int64 a1, _BYTE *a2)
{
  char *v4;
  char v5;
  int v6;
  char *v7;
  char v8;
  unsigned __int64 result;
  char *v10;
  char v11;
  int v12;
  char *v13;
  char v14;

  while ( 1 )
  {
LABEL_1:
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_5;
      if ( !*(_DWORD *)(a1 + 48) )
        break;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      break;
LABEL_5:
    if ( *a2 != 32 && (unsigned __int8)(*a2 - 9) > 4u )
      break;
    v4 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v6 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
               *(_QWORD *)(a1 + 40),
               a1 + 56,
               *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v6 )
        {
          *(_QWORD *)(a1 + 200) = v6 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v7 = *(char **)(a1 + 192);
        v8 = *v7;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v7 + 1);
        *a2 = v8;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      v5 = *v4;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v4 + 1);
      *a2 = v5;
    }
  }
  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_18;
  result = (*(__int64 (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40));
  if ( !(_DWORD)result )
  {
LABEL_19:
    if ( *a2 != 35 )
      return result;
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          goto LABEL_24;
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_1;
      }
      if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
        goto LABEL_1;
LABEL_24:
      if ( *a2 == 10 || *a2 == 13 )
        goto LABEL_1;
      v10 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          v12 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                  *(_QWORD *)(a1 + 40),
                  a1 + 56,
                  *(unsigned int *)(a1 + 52));
          *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 192) = a1 + 56;
          if ( v12 )
          {
            *(_QWORD *)(a1 + 200) = v12 + a1 + 56;
          }
          else
          {
            *(_DWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 200) = a1 + 57;
            *(_BYTE *)(a1 + 56) = 0;
          }
          v13 = *(char **)(a1 + 192);
          v14 = *v13;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v13 + 1);
          *a2 = v14;
        }
        else
        {
          *a2 = 0;
        }
      }
      else
      {
        v11 = *v10;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v10 + 1);
        *a2 = v11;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
LABEL_18:
    result = *(_QWORD *)(a1 + 200);
    if ( *(_QWORD *)(a1 + 192) < result )
      goto LABEL_19;
  }
  return result;
}

//----- (000000014016ADD0) ----------------------------------------------------
__int64            sub_14016ADD0(__int64 a1)
{
  char *v1;
  unsigned __int64 v3;
  char v4;
  char *v5;
  char v6;
  char *v7;

  v1 = *(char **)(a1 + 192);
  v3 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v1 >= v3 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v4 = 0;
      goto LABEL_7;
    }
    stbi_refill_buffer(a1);
    v1 = *(char **)(a1 + 192);
    v3 = *(_QWORD *)(a1 + 200);
  }
  v4 = *v1;
  v5 = v1 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5);
  if ( (unsigned __int64)v5 < v3 )
  {
    v6 = *v5;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 1);
    goto LABEL_10;
  }
LABEL_7:
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    v7 = *(char **)(a1 + 192);
    v6 = *v7;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v7 + 1);
  }
  else
  {
    v6 = 0;
  }
LABEL_10:
  if ( v4 == 80 && (unsigned __int8)(v6 - 53) <= 1u )
    return 1;
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}

//----- (000000014016AEA0) ----------------------------------------------------
__int64            sub_14016AEA0(__int64 a1, int a2)
{
  __int64 v2;
  int v4;
  int v6;
  int v7;
  char *v9;
  char v10;
  int v11;
  unsigned int v12;
  _BYTE *v13;
  __int64 v14;
  _BYTE *v15;
  int v16;
  _QWORD *v17;
  int v18;
  int v19;
  _BYTE *v20;
  unsigned int *v21;
  unsigned __int8 *v22;
  unsigned __int8 v23;
  unsigned __int8 *v24;
  unsigned __int8 *v25;
  unsigned __int8 v26;
  unsigned __int8 *v27;
  unsigned __int8 v28;
  unsigned int v29;
  unsigned int v30;
  unsigned __int8 *v31;
  unsigned __int8 v32;
  unsigned __int8 *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  int v42;
  __int64 i;
  int v44;
  int v45;
  int v46;
  int v47;
  __int64 v48;
  int v49;
  int v50;
  unsigned int v51;
  __int64 v52;
  __int64 v53;
       char *v54;

  v2 = *(_QWORD *)a1;
  v4 = 1;
  v6 = 1;
  v7 = sub_1401604F0(*(_QWORD *)a1);
  if ( v7 < 11 )
  {
LABEL_2:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad SOF len");
    return 0;
  }
  v9 = *(char **)(v2 + 192);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(v2 + 200) )
  {
    if ( !*(_DWORD *)(v2 + 48) )
    {
LABEL_96:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("only 8-bit");
      return 0;
    }
    stbi_refill_buffer(v2);
    v9 = *(char **)(v2 + 192);
  }
  v10 = *v9;
  *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v9 + 1);
  if ( v10 != 8 )
    goto LABEL_96;
  v11 = sub_1401604F0(v2);
  *(_DWORD *)(v2 + 4) = v11;
  if ( !v11 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no header height");
    return 0;
  }
  v12 = sub_1401604F0(v2);
  *(_DWORD *)v2 = v12;
  if ( !v12 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("0 width");
    return 0;
  }
  if ( *(_DWORD *)(v2 + 4) > 0x1000000u || v12 > 0x1000000 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too large");
    return 0;
  }
  v13 = *(_BYTE **)(v2 + 192);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(v2 + 200) )
  {
    if ( *(_DWORD *)(v2 + 48) )
    {
      stbi_refill_buffer(v2);
      v15 = *(_BYTE **)(v2 + 192);
      LOBYTE(v14) = *v15;
      *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v15 + 1);
    }
    else
    {
      LOBYTE(v14) = 0;
    }
  }
  else
  {
    LOBYTE(v14) = *v13;
    *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v13 + 1);
  }
  v16 = (unsigned __int8)v14;
  if ( (((unsigned __int8)v14 - 1) & 0xFFFFFFFC) != 0 || (unsigned __int8)v14 == 2 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad component count");
    return 0;
  }
  else
  {
    *(_DWORD *)(v2 + 8) = (unsigned __int8)v14;
    v14 = (unsigned __int8)v14;
    if ( (_BYTE)v14 )
    {
      v17 = (_QWORD *)(a1 + 18152);
      do
      {
        *(v17 - 3) = 0;
        *v17 = 0;
        v17 += 12;
        --v14;
      }
      while ( v14 );
      v16 = *(_DWORD *)(v2 + 8);
    }
    if ( v7 != v16 + 2 * (v16 + 4) )
      goto LABEL_2;
    *(_DWORD *)(a1 + 18512) = 0;
    v18 = *(_DWORD *)(v2 + 8);
    v19 = 0;
    if ( v18 > 0 )
    {
      v20 = &unk_14026E7E4;
      v21 = (unsigned int *)(a1 + 18084);
      while ( 1 )
      {
        v22 = *(unsigned __int8 **)(v2 + 192);
        if ( (unsigned __int64)v22 >= *(_QWORD *)(v2 + 200) )
        {
          if ( *(_DWORD *)(v2 + 48) )
          {
            stbi_refill_buffer(v2);
            v24 = *(unsigned __int8 **)(v2 + 192);
            v23 = *v24;
            *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v24 + 1);
          }
          else
          {
            v23 = 0;
          }
        }
        else
        {
          v23 = *v22;
          *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v22 + 1);
        }
        *(v21 - 1) = v23;
        if ( *(_DWORD *)(v2 + 8) == 3 && v23 == (unsigned __int8)*v20 )
          ++*(_DWORD *)(a1 + 18512);
        v25 = *(unsigned __int8 **)(v2 + 192);
        if ( (unsigned __int64)v25 >= *(_QWORD *)(v2 + 200) )
        {
          if ( *(_DWORD *)(v2 + 48) )
          {
            stbi_refill_buffer(v2);
            v27 = *(unsigned __int8 **)(v2 + 192);
            v26 = *v27;
            *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v27 + 1);
          }
          else
          {
            v26 = 0;
          }
        }
        else
        {
          v26 = *v25;
          *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v25 + 1);
        }
        v28 = v26;
        v29 = v26 >> 4;
        *v21 = v29;
        if ( !v29 || v29 > 4 )
          break;
        v30 = v28 & 0xF;
        v21[1] = v30;
        if ( !v30 || v30 > 4 )
        {
          v53 = sr_client_static_tls();
          v54 = "bad V";
          goto LABEL_87;
        }
        v31 = *(unsigned __int8 **)(v2 + 192);
        if ( (unsigned __int64)v31 >= *(_QWORD *)(v2 + 200) )
        {
          if ( *(_DWORD *)(v2 + 48) )
          {
            stbi_refill_buffer(v2);
            v33 = *(unsigned __int8 **)(v2 + 192);
            v32 = *v33;
            *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v33 + 1);
          }
          else
          {
            v32 = 0;
          }
        }
        else
        {
          v32 = *v31;
          *(_QWORD *)(v2 + 192) = (uint64)(uintptr_t)(v31 + 1);
        }
        v21[2] = v32;
        if ( v32 > 3u )
        {
          v53 = sr_client_static_tls();
          v54 = "bad TQ";
          goto LABEL_87;
        }
        v18 = *(_DWORD *)(v2 + 8);
        ++v19;
        ++v20;
        v21 += 24;
        if ( v19 >= v18 )
          goto LABEL_52;
      }
      v53 = sr_client_static_tls();
      v54 = "bad H";
      goto LABEL_87;
    }
LABEL_52:
    if ( a2 )
      return 1;
    v34 = *(_DWORD *)v2;
    v35 = *(_DWORD *)(v2 + 4);
    if ( *(int *)v2 < 0
      || v35 < 0
      || v35 && v34 > 0x7FFFFFFF / v35
      || (v36 = v35 * v34, v36 < 0)
      || v18 < 0
      || v18 && v36 > 0x7FFFFFFF / v18 )
    {
      v53 = sr_client_static_tls();
      v54 = "too large";
LABEL_87:
      *(_QWORD *)(v53 + 16) = (uint64)(uintptr_t)(v54);
      return 0;
    }
    v37 = *(_DWORD *)(v2 + 8);
    if ( v37 > 0 )
    {
      v38 = a1 + 18088;
      v39 = (unsigned int)v37;
      do
      {
        v40 = v4;
        v4 = *(_DWORD *)(v38 - 4);
        v38 += 96;
        v41 = v6;
        v6 = *(_DWORD *)(v38 - 96);
        if ( v4 <= v40 )
          v4 = v40;
        if ( v6 <= v41 )
          v6 = v41;
        --v39;
      }
      while ( v39 );
    }
    *(_DWORD *)(a1 + 18056) = v4;
    *(_DWORD *)(a1 + 18060) = v6;
    *(_DWORD *)(a1 + 18072) = 8 * v4;
    *(_DWORD *)(a1 + 18076) = 8 * v6;
    v42 = 0;
    *(_DWORD *)(a1 + 18064) = (8 * v4 + *(_DWORD *)v2 - 1) / (unsigned int)(8 * v4);
    *(_DWORD *)(a1 + 18068) = (8 * v6 + *(_DWORD *)(v2 + 4) - 1) / (unsigned int)(8 * v6);
    if ( *(int *)(v2 + 8) <= 0 )
    {
      return 1;
    }
    else
    {
      for ( i = a1 + 18108; ; i += 96 )
      {
        v44 = *(_DWORD *)(i - 20);
        *(_DWORD *)i = (v4 + *(_DWORD *)v2 * *(_DWORD *)(i - 24) - 1) / (unsigned int)v4;
        *(_DWORD *)(i + 4) = (v6 + v44 * *(_DWORD *)(v2 + 4) - 1) / (unsigned int)v6;
        v45 = 8 * *(_DWORD *)(i - 24) * *(_DWORD *)(a1 + 18064);
        *(_DWORD *)(i + 8) = v45;
        v46 = *(_DWORD *)(a1 + 18068) * v44;
        *(_QWORD *)(i + 52) = 0;
        *(_QWORD *)(i + 36) = 0;
        *(_QWORD *)(i + 44) = 0;
        v47 = 8 * v46;
        *(_DWORD *)(i + 12) = v47;
        if ( v45 < 0 || v47 < 0 || v47 && v45 > 0x7FFFFFFF / v47 )
          break;
        v48 = sr_path_malloc(v47 * v45 + 15);
        *(_QWORD *)(i + 28) = v48;
        if ( !v48 )
          goto LABEL_92;
        *(_QWORD *)(i + 20) = (v48 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( *(_DWORD *)(a1 + 18480) )
        {
          v49 = *(_DWORD *)(i + 8);
          v50 = *(_DWORD *)(i + 12);
          *(_DWORD *)(i + 60) = v49 / 8;
          *(_DWORD *)(i + 64) = v50 / 8;
          if ( v49 < 0
            || v50 < 0
            || v50 && v49 > 0x7FFFFFFF / v50
            || (v51 = v50 * v49, v51 >= 0x40000000)
            || (int)(2 * v51) > 2147483632 )
          {
            *(_QWORD *)(i + 36) = 0;
            goto LABEL_92;
          }
          v52 = sr_path_malloc((int)(2 * v51 + 15));
          *(_QWORD *)(i + 36) = v52;
          if ( !v52 )
            goto LABEL_92;
          *(_QWORD *)(i + 52) = (v52 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
        }
        if ( ++v42 >= *(_DWORD *)(v2 + 8) )
          return 1;
      }
      *(_QWORD *)(i + 28) = 0;
LABEL_92:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
      return sub_140160460(a1, v42 + 1, 0);
    }
  }
}

//----- (000000014016B5F0) ----------------------------------------------------
__int64            sub_14016B5F0(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2;
  __int64 v3;
  unsigned __int8 v5;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  _BYTE *v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  unsigned __int8 *v21;
  unsigned __int8 v22;
  unsigned __int8 *v23;
  unsigned __int8 *v24;
  unsigned __int8 v25;
  int v26;
  unsigned __int8 *v27;
  int v28;
  int v29;
  __int64 v30;
  char v31;
  int v32;
  int v33;
  unsigned int v34;
  __int64 v35;
  unsigned __int8 *v36;
  unsigned __int8 v37;
  int v38;
  int v39;
  unsigned __int8 *v40;
  int v41;
  __int64 v42;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016B5F0[144];
#define i (*(int (*))(void *)(sr_frame_14016B5F0 + 0)) /* [rsp+20h] */
#define v44 (*(int (*))(void *)(sr_frame_14016B5F0 + 4)) /* [rsp+24h] */
#define v45 (*(int (*))(void *)(sr_frame_14016B5F0 + 8)) /* [rsp+28h] */
#define v46 (*(__int64 (*))(void *)(sr_frame_14016B5F0 + 16)) /* [rsp+30h] */
#define v47 (*(int (*))(void *)(sr_frame_14016B5F0 + 112)) /* [rsp+90h] */
#define v49 (*(int (*))(void *)(sr_frame_14016B5F0 + 128)) /* [rsp+A0h] */
#define v50 (*(int (*))(void *)(sr_frame_14016B5F0 + 136)) /* [rsp+A8h] */

  v2 = *(unsigned __int8 **)(a1 + 192);
  v3 = a2;
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v5 = 0;
      goto LABEL_7;
    }
    stbi_refill_buffer(a1);
    v2 = *(unsigned __int8 **)(a1 + 192);
  }
  v5 = *v2;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v2 + 1);
  if ( v5 > 0xCu )
    return 0;
LABEL_7:
  v7 = 1;
  LODWORD(v8) = 0;
  v9 = 1 << v5;
  v44 = v5 + 1;
  v10 = 0;
  v11 = v44;
  v50 = v9;
  v12 = 1 << (v5 + 1);
  v13 = 0;
  v49 = 1;
  v45 = v12 - 1;
  v14 = v12 - 1;
  v47 = 0;
  if ( v9 > 0 )
  {
    v15 = (_BYTE *)(v3 + 2102);
    do
    {
      *v15 = v13;
      v15[1] = v13++;
      *((_WORD *)v15 - 1) = -1;
      v15 += 4;
    }
    while ( v13 < v9 );
  }
  v16 = v9 + 2;
  v17 = -1;
  v18 = v9 + 2;
  v19 = 0;
  v20 = v9 + 2;
  v46 = v20;
  for ( i = v9 + 2; ; v16 = i )
  {
    while ( 1 )
    {
      while ( v10 < v11 )
      {
        if ( !v19 )
        {
          v21 = *(unsigned __int8 **)(a1 + 192);
          if ( (unsigned __int64)v21 >= *(_QWORD *)(a1 + 200) )
          {
            if ( *(_DWORD *)(a1 + 48) )
            {
              stbi_refill_buffer(a1);
              v23 = *(unsigned __int8 **)(a1 + 192);
              LODWORD(v8) = v47;
              v22 = *v23;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v23 + 1);
            }
            else
            {
              v22 = 0;
            }
          }
          else
          {
            v22 = *v21;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v21 + 1);
          }
          v19 = v22;
          if ( !v22 )
            return *(_QWORD *)(v3 + 8);
        }
        v24 = *(unsigned __int8 **)(a1 + 192);
        --v19;
        if ( (unsigned __int64)v24 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            v26 = (*(__int64 (           **)(_QWORD, __int64, _QWORD, __int64))(a1 + 16))(
                    *(_QWORD *)(a1 + 40),
                    a1 + 56,
                    *(unsigned int *)(a1 + 52),
                    v20);
            *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
            *(_QWORD *)(a1 + 192) = a1 + 56;
            if ( v26 )
            {
              *(_QWORD *)(a1 + 200) = v26 + a1 + 56;
            }
            else
            {
              *(_DWORD *)(a1 + 48) = 0;
              *(_QWORD *)(a1 + 200) = a1 + 57;
              *(_BYTE *)(a1 + 56) = 0;
            }
            v27 = *(unsigned __int8 **)(a1 + 192);
            v3 = a2;
            LODWORD(v8) = v47;
            v25 = *v27;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v27 + 1);
          }
          else
          {
            v25 = 0;
          }
        }
        else
        {
          v25 = *v24;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v24 + 1);
        }
        v9 = v50;
        v20 = v46;
        v7 = v49;
        LODWORD(v8) = (v25 << v10) | v8;
        v16 = i;
        v47 = v8;
        v10 += 8;
      }
      v28 = v8;
      v8 = (unsigned int)((int)v8 >> v11);
      v29 = v14 & v28;
      v10 -= v11;
      v47 = v8;
      if ( v29 != v9 )
        break;
      v11 = v44;
      v18 = v16;
      v14 = v45;
      v17 = -1;
      v20 = v9 + 2LL;
      v7 = 0;
      v46 = v20;
      v49 = 0;
    }
    if ( v29 == v9 + 1 )
      break;
    if ( v29 > v18 )
      goto LABEL_46;
    if ( v7 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("no clear code");
      return 0;
    }
    if ( v17 < 0 )
    {
      if ( v29 == v18 )
      {
LABEL_46:
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("illegal code in raster");
        return 0;
      }
    }
    else
    {
      v30 = v3 + 4 * v20;
      ++v18;
      v46 = v20 + 1;
      if ( v18 > 0x2000 )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too many codes");
        return 0;
      }
      *(_WORD *)(v30 + 2100) = v17;
      v31 = *(_BYTE *)(v3 + 4LL * v17 + 2102);
      *(_BYTE *)(v30 + 2102) = v31;
      if ( v29 != v18 )
        v31 = *(_BYTE *)(v3 + 4LL * v29 + 2102);
      *(_BYTE *)(v30 + 2103) = v31;
    }
    sub_1401670A0(v3, v29);
    if ( (v18 & v14) == 0 && v18 <= 4095 )
      v14 = (1 << ++v11) - 1;
    v9 = v50;
    v17 = v32;
    LODWORD(v8) = v47;
    v20 = v46;
  }
  if ( v19 )
  {
    if ( v19 >= 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v33 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v33 < v19) )
      {
        v34 = v19 - v33;
        v35 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(__int64, _QWORD, __int64, __int64))(a1 + 24))(v35, v34, v8, v20);
      }
      else
      {
        *(_QWORD *)(a1 + 192) += v19;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    }
  }
  while ( 1 )
  {
    v36 = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)v36 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v39 = (*(__int64 (           **)(_QWORD, __int64, _QWORD, __int64))(a1 + 16))(
                *(_QWORD *)(a1 + 40),
                a1 + 56,
                *(unsigned int *)(a1 + 52),
                v20);
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v39 )
        {
          *(_QWORD *)(a1 + 200) = v39 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v40 = *(unsigned __int8 **)(a1 + 192);
        v37 = *v40;
        v36 = v40 + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v40 + 1);
      }
      else
      {
        v37 = 0;
      }
      v38 = (int)v36;
    }
    else
    {
      v37 = *v36;
      v38 = (_DWORD)v36 + 1;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(++v36);
    }
    if ( !v37 )
      break;
    if ( *(_QWORD *)(a1 + 16) && (v41 = *(_DWORD *)(a1 + 200) - v38, v41 < v37) )
    {
      v42 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
      (*(void (           **)(__int64, _QWORD))(a1 + 24))(v42, (unsigned int)v37 - v41);
    }
    else
    {
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(&v36[v37]);
    }
  }
  return *(_QWORD *)(a2 + 8);
}
#undef i
#undef v44
#undef v45
#undef v46
#undef v47
#undef v49
#undef v50

//----- (000000014016BB40) ----------------------------------------------------
__int64            sub_14016BB40(__int64 *a1, int a2)
{
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  char *v10;
  char v11;
  char *v12;
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  char *v18;
  char v19;
  char *v20;
  int v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int8 *v25;
  unsigned __int8 v26;
  int v27;
  __int64 v28;
  unsigned __int8 *v29;
  unsigned __int8 v30;
  unsigned __int8 *v31;
  unsigned int v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int16 v36;
  _BYTE *v37;
  _BYTE *v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  unsigned __int8 *v44;
  unsigned __int8 v45;
  unsigned __int8 *v46;
  unsigned int v47;
  unsigned int v48;
  int *v49;
  __int64 v50;
  __int64 v51;
  unsigned __int8 *v52;
  unsigned __int8 v53;
  unsigned __int8 *v54;
  __int64 v55;
  __int64 *v56;
  __int64 v57;
  __int64 v58;
  __int64 *v59;
  __int64 i;
  __int64 v61;
  char *v62;
  char v63;
  char *v64;
  __int64 *v65;
  unsigned __int8 *v66;
  int j;
  __int64 v68;
  int v69;
  int v70;
  int v71;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016BB40[128];
#define v73 (*(__int64 (*))(void *)(sr_frame_14016BB40 + 0)) /* [rsp+0h] */
#define v74 (*(int (*))(void *)(sr_frame_14016BB40 + 32)) /* [rsp+20h] */
#define v75 (*(int (*))(void *)(sr_frame_14016BB40 + 36)) /* [rsp+24h] */
#define v76 (*(int (*)[16])(void *)(sr_frame_14016BB40 + 48)) /* [rsp+30h] */
#define v77 (*(__int64 (*))(void *)(sr_frame_14016BB40 + 112)) /* [rsp+70h] */

  switch ( a2 )
  {
    case 196:
      v41 = sub_1401604F0(*a1) - 2;
      if ( v41 > 0 )
      {
        while ( 1 )
        {
          v42 = *a1;
          v43 = 0;
          v44 = *(unsigned __int8 **)(*a1 + 192);
          if ( (unsigned __int64)v44 >= *(_QWORD *)(*a1 + 200) )
          {
            if ( *(_DWORD *)(v42 + 48) )
            {
              stbi_refill_buffer(*a1);
              v46 = *(unsigned __int8 **)(v42 + 192);
              v45 = *v46;
              *(_QWORD *)(v42 + 192) = (uint64)(uintptr_t)(v46 + 1);
            }
            else
            {
              v45 = 0;
            }
          }
          else
          {
            v45 = *v44;
            *(_QWORD *)(v42 + 192) = (uint64)(uintptr_t)(v44 + 1);
          }
          v47 = v45 & 0xF;
          v48 = v45 >> 4;
          if ( v48 > 1 || v47 > 3 )
            break;
          v49 = v76;
          v50 = 16;
          do
          {
            v51 = *a1;
            v52 = *(unsigned __int8 **)(*a1 + 192);
            if ( (unsigned __int64)v52 >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(v51 + 48) )
              {
                stbi_refill_buffer(*a1);
                v54 = *(unsigned __int8 **)(v51 + 192);
                v53 = *v54;
                *(_QWORD *)(v51 + 192) = (uint64)(uintptr_t)(v54 + 1);
              }
              else
              {
                v53 = 0;
              }
            }
            else
            {
              v53 = *v52;
              *(_QWORD *)(v51 + 192) = (uint64)(uintptr_t)(v52 + 1);
            }
            *v49 = v53;
            v43 += v53;
            ++v49;
            --v50;
          }
          while ( v50 );
          v74 = v43;
          v75 = v41 - 17;
          v55 = v47;
          v56 = &a1[210 * v47];
          if ( v48 )
          {
            if ( !(unsigned int)sub_14015CCB0((_WORD *)v56 + 3364, v76) )
              return 0; /* 0x14016C13B: -> xor eax, eax */
            v57 = 969;
          }
          else
          {
            if ( !(unsigned int)sub_14015CCB0((_WORD *)v56 + 4, v76) )
              return 0; /* 0x14016C157: -> xor eax, eax */
            v57 = 129;
          }
          v58 = v74;
          v59 = &v56[v57];
          for ( i = 0; i < v58; *((_BYTE *)v59 + i++) = v63 )
          {
            v61 = *a1;
            v62 = *(char **)(*a1 + 192);
            if ( (unsigned __int64)v62 >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(v61 + 48) )
              {
                stbi_refill_buffer(*a1);
                v64 = *(char **)(v61 + 192);
                v63 = *v64;
                *(_QWORD *)(v61 + 192) = (uint64)(uintptr_t)(v64 + 1);
              }
              else
              {
                v63 = 0;
              }
            }
            else
            {
              v63 = *v62;
              *(_QWORD *)(v61 + 192) = (uint64)(uintptr_t)(v62 + 1);
            }
          }
          if ( v48 )
          {
            v65 = &a1[128 * v55 + 1745];
            v66 = (unsigned __int8 *)(v56 + 841);
            for ( j = 0; j < 512; ++j )
            {
              v68 = *v66;
              *(_WORD *)v65 = 0;
              if ( (_BYTE)v68 != 0xFF )
              {
                v69 = *((unsigned __int8 *)v56 + v68 + 8008);
                v70 = *((_BYTE *)v56 + v68 + 7752) & 0xF;
                if ( v70 )
                {
                  if ( (unsigned int)(v69 + v70) <= 9 )
                  {
                    v71 = ((j << v69) & 0x1FF) >> (9 - v70);
                    if ( v71 < 1 << (v70 - 1) )
                      v71 += 1 - (1 << v70);
                    if ( (unsigned int)(v71 + 128) <= 0xFF )
                      *(_WORD *)v65 = v69 + v70 + 16 * ((*((unsigned __int8 *)v56 + v68 + 7752) >> 4) + 16 * v71);
                  }
                }
              }
              ++v66;
              v65 = (__int64 *)((char *)v65 + 2);
            }
          }
          v41 = v75 - v74;
          if ( v75 - v74 <= 0 )
            return v41 == 0; /* 0x14016C2BE: test r12d, r12d; sete r13b; mov eax, r13d */
        }
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DHT header");
        return 0; /* 0x14016C319: xor eax, eax */
      }
      return v41 == 0; /* 0x14016C02D -> 0x14016C2BE: test r12d, r12d; sete r13b */
    case 219:
      v27 = sub_1401604F0(*a1) - 2;
      if ( v27 > 0 )
      {
        while ( 1 )
        {
          v28 = *a1;
          v29 = *(unsigned __int8 **)(*a1 + 192);
          if ( (unsigned __int64)v29 >= *(_QWORD *)(*a1 + 200) )
          {
            if ( *(_DWORD *)(v28 + 48) )
            {
              stbi_refill_buffer(*a1);
              v31 = *(unsigned __int8 **)(v28 + 192);
              v30 = *v31;
              *(_QWORD *)(v28 + 192) = (uint64)(uintptr_t)(v31 + 1);
            }
            else
            {
              v30 = 0;
            }
          }
          else
          {
            v30 = *v29;
            *(_QWORD *)(v28 + 192) = (uint64)(uintptr_t)(v29 + 1);
          }
          v32 = v30 >> 4;
          if ( v32 > 1 )
            break;
          if ( (v30 & 0xFu) > 3 )
          {
            *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DQT table");
            return 0; /* 0x14016C015: xor eax, eax */
          }
          v33 = 0;
          v34 = (unsigned __int64)(v30 & 0xF) << 6;
          do
          {
            v35 = *a1;
            if ( v32 )
            {
              v36 = sub_1401604F0(*a1);
            }
            else
            {
              v37 = *(_BYTE **)(v35 + 192);
              if ( (unsigned __int64)v37 >= *(_QWORD *)(v35 + 200) )
              {
                if ( *(_DWORD *)(v35 + 48) )
                {
                  stbi_refill_buffer(*a1);
                  v38 = *(_BYTE **)(v35 + 192);
                  LOBYTE(v36) = *v38;
                  *(_QWORD *)(v35 + 192) = (uint64)(uintptr_t)(v38 + 1);
                }
                else
                {
                  LOBYTE(v36) = 0;
                }
              }
              else
              {
                LOBYTE(v36) = *v37;
                *(_QWORD *)(v35 + 192) = (uint64)(uintptr_t)(v37 + 1);
              }
              v36 = (unsigned __int8)v36;
            }
            v39 = byte_14026FC80[v33++];
            *((_WORD *)a1 + v34 + v39 + 6724) = v36;
          }
          while ( v33 < 64 );
          v40 = 65;
          if ( v32 )
            v40 = 129;
          v27 -= v40;
          if ( v27 <= 0 )
            return v27 == 0; /* 0x14016C2C1: sete r13b; mov eax, r13d */
        }
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DQT type");
        return 0; /* 0x14016BE79: xor eax, eax */
      }
      return v27 == 0; /* 0x14016BEAA -> 0x14016C2C1: sete r13b */
    case 221:
      if ( (unsigned int)sub_1401604F0(*a1) == 4 )
      {
        *((_DWORD *)a1 + 4634) = sub_1401604F0(*a1);
        return 1; /* 0x14016BE8E: mov eax, 1 */
      }
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad DRI len");
      return 0; /* 0x14016BE42: xor eax, eax */
    case 255:
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("expected marker");
      return 0; /* 0x14016BBD2: xor eax, eax */
    default:
      if ( (unsigned int)(a2 - 224) > 0xF && a2 != 254 )
      {
        *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unknown marker");
        return 0; /* 0x14016BC26: xor eax, eax */
      }
      v4 = sub_1401604F0(*a1);
      if ( v4 < 2 )
      {
        v5 = sr_client_static_tls();
        if ( a2 == 254 )
          *(_QWORD *)(v5 + 16) = (uint64)(uintptr_t)("bad COM len");
        else
          *(_QWORD *)(v5 + 16) = (uint64)(uintptr_t)("bad APP len");
        return 0; /* 0x14016BC14: xor eax, eax */
      }
      v6 = v4 - 2;
      if ( a2 == 224 )
      {
        if ( v6 >= 5 )
        {
          v7 = 0;
          v8 = 1;
          do
          {
            v9 = *a1;
            v10 = *(char **)(*a1 + 192);
            if ( (unsigned __int64)v10 >= *(_QWORD *)(*a1 + 200) )
            {
              if ( *(_DWORD *)(v9 + 48) )
              {
                stbi_refill_buffer(*a1);
                v12 = *(char **)(v9 + 192);
                v11 = *v12;
                *(_QWORD *)(v9 + 192) = (uint64)(uintptr_t)(v12 + 1);
              }
              else
              {
                v11 = 0;
              }
            }
            else
            {
              v11 = *v10;
              *(_QWORD *)(v9 + 192) = (uint64)(uintptr_t)(v10 + 1);
            }
            v13 = 0;
            if ( v11 == sr_mem_14026e908[v7] )
              v13 = v8;
            ++v7;
            v8 = v13;
          }
          while ( v7 < 5 );
          v6 -= 5;
          if ( v13 )
          {
            v14 = *a1;
            *((_DWORD *)a1 + 4626) = 1;
            sub_14016E0F0(v14, v6);
            return 1; /* 0x14016BCE2: mov eax, 1 */
          }
        }
LABEL_47:
        sub_14016E0F0(*a1, v6);
        return 1; /* 0x14016BE15: mov eax, 1 */
      }
      if ( a2 != 238 || v6 < 12 )
        goto LABEL_47;
      v15 = 0;
      v16 = 1;
      do
      {
        v17 = *a1;
        v18 = *(char **)(*a1 + 192);
        if ( (unsigned __int64)v18 >= *(_QWORD *)(*a1 + 200) )
        {
          if ( *(_DWORD *)(v17 + 48) )
          {
            stbi_refill_buffer(*a1);
            v20 = *(char **)(v17 + 192);
            v19 = *v20;
            *(_QWORD *)(v17 + 192) = (uint64)(uintptr_t)(v20 + 1);
          }
          else
          {
            v19 = 0;
          }
        }
        else
        {
          v19 = *v18;
          *(_QWORD *)(v17 + 192) = (uint64)(uintptr_t)(v18 + 1);
        }
        v21 = 0;
        if ( v19 == byte_14026E9C8[v15] )
          v21 = v16;
        ++v15;
        v16 = v21;
      }
      while ( v15 < 6 );
      v6 -= 6;
      if ( !v21 )
        goto LABEL_47;
      v22 = *a1;
      v23 = *(_QWORD *)(*a1 + 192);
      if ( v23 >= *(_QWORD *)(*a1 + 200) )
      {
        if ( *(_DWORD *)(v22 + 48) )
        {
          stbi_refill_buffer(*a1);
          ++*(_QWORD *)(v22 + 192);
        }
      }
      else
      {
        *(_QWORD *)(v22 + 192) = v23 + 1;
      }
      sub_1401604F0(*a1);
      sub_1401604F0(*a1);
      v24 = *a1;
      v25 = *(unsigned __int8 **)(*a1 + 192);
      if ( (unsigned __int64)v25 >= *(_QWORD *)(*a1 + 200) )
      {
        if ( !*(_DWORD *)(v24 + 48) )
        {
          v26 = 0;
          goto LABEL_46;
        }
        stbi_refill_buffer(*a1);
        v25 = *(unsigned __int8 **)(v24 + 192);
      }
      v26 = *v25;
      *(_QWORD *)(v24 + 192) = (uint64)(uintptr_t)(v25 + 1);
LABEL_46:
      v6 -= 6;
      *((_DWORD *)a1 + 4627) = v26;
      goto LABEL_47;
  }
  return 0; /* not reached: every case returns */
}
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77

//----- (000000014016C320) ----------------------------------------------------
__int64            sub_14016C320(__int64 *a1)
{
  int v2;
  __int64 v3;
  int v4;
  unsigned __int8 *v5;
  unsigned __int8 v6;
  unsigned __int8 *v7;
  int v9;
  __int64 *v10;
  __int64 v11;
  unsigned __int8 *v12;
  unsigned __int8 v13;
  unsigned __int8 *v14;
  __int64 v15;
  int v16;
  unsigned __int8 *v17;
  unsigned __int8 v18;
  unsigned __int8 *v19;
  int v20;
  unsigned int v21;
  __int64 v22;
  int v23;
  __int64 *v24;
  unsigned int v25;
  __int64 v26;
  unsigned __int8 *v27;
  unsigned __int8 v28;
  unsigned __int8 *v29;
  __int64 v30;
  unsigned __int8 *v31;
  unsigned __int8 v32;
  unsigned __int8 *v33;
  __int64 v34;
  unsigned __int8 *v35;
  unsigned __int8 v36;
  unsigned __int8 *v37;
  int v38;
  unsigned int v39;
  unsigned int v40;
  bool v41;
  int v42;
  __int64 v43;
       char *v44;

  v2 = sub_1401604F0(*a1);
  v3 = *a1;
  v4 = v2;
  v5 = *(unsigned __int8 **)(*a1 + 192);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(*a1 + 200) )
  {
    if ( *(_DWORD *)(v3 + 48) )
    {
      stbi_refill_buffer(*a1);
      v7 = *(unsigned __int8 **)(v3 + 192);
      v6 = *v7;
      *(_QWORD *)(v3 + 192) = (uint64)(uintptr_t)(v7 + 1);
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = *v5;
    *(_QWORD *)(v3 + 192) = (uint64)(uintptr_t)(v5 + 1);
  }
  *((_DWORD *)a1 + 4629) = v6;
  if ( !v6 || v6 > 4u || v6 > *(int *)(*a1 + 8) )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad SOS component count");
    return 0;
  }
  if ( v4 != 2 * v6 + 6 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad SOS len");
    return 0;
  }
  v9 = 0;
  v10 = a1 + 2315;
  do
  {
    v11 = *a1;
    v12 = *(unsigned __int8 **)(*a1 + 192);
    if ( (unsigned __int64)v12 >= *(_QWORD *)(*a1 + 200) )
    {
      if ( *(_DWORD *)(v11 + 48) )
      {
        stbi_refill_buffer(*a1);
        v14 = *(unsigned __int8 **)(v11 + 192);
        v13 = *v14;
        *(_QWORD *)(v11 + 192) = (uint64)(uintptr_t)(v14 + 1);
      }
      else
      {
        v13 = 0;
      }
    }
    else
    {
      v13 = *v12;
      *(_QWORD *)(v11 + 192) = (uint64)(uintptr_t)(v12 + 1);
    }
    v15 = *a1;
    v16 = v13;
    v17 = *(unsigned __int8 **)(*a1 + 192);
    if ( (unsigned __int64)v17 >= *(_QWORD *)(*a1 + 200) )
    {
      if ( *(_DWORD *)(v15 + 48) )
      {
        stbi_refill_buffer(*a1);
        v19 = *(unsigned __int8 **)(v15 + 192);
        v18 = *v19;
        *(_QWORD *)(v15 + 192) = (uint64)(uintptr_t)(v19 + 1);
      }
      else
      {
        v18 = 0;
      }
    }
    else
    {
      v18 = *v17;
      *(_QWORD *)(v15 + 192) = (uint64)(uintptr_t)(v17 + 1);
    }
    v20 = 0;
    v21 = v18;
    v22 = 0;
    v23 = *(_DWORD *)(*a1 + 8);
    if ( v23 <= 0 )
    {
LABEL_26:
      if ( v20 == v23 )
        return 0;
    }
    else
    {
      v24 = a1 + 2260;
      while ( *(_DWORD *)v24 != v16 )
      {
        ++v20;
        ++v22;
        v24 += 12;
        if ( v20 >= v23 )
          goto LABEL_26;
      }
    }
    LODWORD(a1[12 * v22 + 2262]) = v21 >> 4;
    if ( v21 >> 4 > 3 )
    {
      v43 = sr_client_static_tls();
      v44 = "bad DC huff";
      goto LABEL_52;
    }
    v25 = v21 & 0xF;
    HIDWORD(a1[12 * v22 + 2262]) = v25;
    if ( v25 > 3 )
    {
      v43 = sr_client_static_tls();
      v44 = "bad AC huff";
      goto LABEL_52;
    }
    *(_DWORD *)v10 = v20;
    ++v9;
    v10 = (__int64 *)((char *)v10 + 4);
  }
  while ( v9 < *((_DWORD *)a1 + 4629) );
  v26 = *a1;
  v27 = *(unsigned __int8 **)(*a1 + 192);
  if ( (unsigned __int64)v27 >= *(_QWORD *)(*a1 + 200) )
  {
    if ( *(_DWORD *)(v26 + 48) )
    {
      stbi_refill_buffer(*a1);
      v29 = *(unsigned __int8 **)(v26 + 192);
      v28 = *v29;
      *(_QWORD *)(v26 + 192) = (uint64)(uintptr_t)(v29 + 1);
    }
    else
    {
      v28 = 0;
    }
  }
  else
  {
    v28 = *v27;
    *(_QWORD *)(v26 + 192) = (uint64)(uintptr_t)(v27 + 1);
  }
  v30 = *a1;
  *((_DWORD *)a1 + 4621) = v28;
  v31 = *(unsigned __int8 **)(v30 + 192);
  if ( (unsigned __int64)v31 >= *(_QWORD *)(v30 + 200) )
  {
    if ( *(_DWORD *)(v30 + 48) )
    {
      stbi_refill_buffer(v30);
      v33 = *(unsigned __int8 **)(v30 + 192);
      v32 = *v33;
      *(_QWORD *)(v30 + 192) = (uint64)(uintptr_t)(v33 + 1);
    }
    else
    {
      v32 = 0;
    }
  }
  else
  {
    v32 = *v31;
    *(_QWORD *)(v30 + 192) = (uint64)(uintptr_t)(v31 + 1);
  }
  v34 = *a1;
  *((_DWORD *)a1 + 4622) = v32;
  v35 = *(unsigned __int8 **)(v34 + 192);
  if ( (unsigned __int64)v35 >= *(_QWORD *)(v34 + 200) )
  {
    if ( *(_DWORD *)(v34 + 48) )
    {
      stbi_refill_buffer(v34);
      v37 = *(unsigned __int8 **)(v34 + 192);
      v36 = *v37;
      *(_QWORD *)(v34 + 192) = (uint64)(uintptr_t)(v37 + 1);
    }
    else
    {
      v36 = 0;
    }
  }
  else
  {
    v36 = *v35;
    *(_QWORD *)(v34 + 192) = (uint64)(uintptr_t)(v35 + 1);
  }
  v38 = *((_DWORD *)a1 + 4621);
  v39 = v36 & 0xF;
  v40 = v36 >> 4;
  v41 = *((_DWORD *)a1 + 4620) == 0;
  *((_DWORD *)a1 + 4623) = v40;
  *((_DWORD *)a1 + 4624) = v39;
  if ( v41 )
  {
    if ( !v38 && !v40 && !v39 )
    {
      *((_DWORD *)a1 + 4622) = 63;
      return 1;
    }
LABEL_51:
    v43 = sr_client_static_tls();
    v44 = "bad SOS";
LABEL_52:
    *(_QWORD *)(v43 + 16) = (uint64)(uintptr_t)(v44);
    return 0;
  }
  if ( v38 > 63 )
    goto LABEL_51;
  v42 = *((_DWORD *)a1 + 4622);
  if ( v42 > 63 || v38 > v42 || v40 > 0xD || v39 > 0xD )
    goto LABEL_51;
  return 1;
}

//----- (000000014016C720) ----------------------------------------------------
__int64            sub_14016C720(__int64 a1, _BYTE *a2, int a3)
{
  int v6;
  int v7;
  unsigned __int8 *v8;
  unsigned __int8 v9;
  int v10;
  unsigned __int8 *v11;
  unsigned int v12;
  char *v13;
  char v14;
  int v15;
  char *v16;
  int v17;
  char v18;
  char *v19;

  v6 = 0;
  v7 = a3;
  if ( a3 <= 0 )
    return 1;
  while ( 1 )
  {
    v8 = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v10 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                *(_QWORD *)(a1 + 40),
                a1 + 56,
                *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v10 )
        {
          *(_QWORD *)(a1 + 200) = v10 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v11 = *(unsigned __int8 **)(a1 + 192);
        v9 = *v11;
        v8 = v11 + 1;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8);
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v9 = *v8++;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8);
    }
    if ( v9 == 128 )
      goto LABEL_33;
    if ( v9 >= 0x80u )
      break;
    v12 = v9 + 1;
    if ( v12 > v7 )
      return 0;
    v6 += v12;
    do
    {
      v13 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          v15 = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                  *(_QWORD *)(a1 + 40),
                  a1 + 56,
                  *(unsigned int *)(a1 + 52));
          *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 192) = a1 + 56;
          if ( v15 )
          {
            *(_QWORD *)(a1 + 200) = v15 + a1 + 56;
          }
          else
          {
            *(_DWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 200) = a1 + 57;
            *(_BYTE *)(a1 + 56) = 0;
          }
          v16 = *(char **)(a1 + 192);
          v14 = *v16;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v16 + 1);
        }
        else
        {
          v14 = 0;
        }
      }
      else
      {
        v14 = *v13;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v13 + 1);
      }
      *a2 = v14;
      a2 += 4;
      --v12;
    }
    while ( v12 );
LABEL_33:
    v7 = a3 - v6;
    if ( a3 - v6 <= 0 )
      return 1;
  }
  if ( v9 <= 0x80u )
    goto LABEL_33;
  v17 = 257 - v9;
  if ( v17 <= v7 )
  {
    if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        stbi_refill_buffer(a1);
        v19 = *(char **)(a1 + 192);
        v18 = *v19;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v19 + 1);
      }
      else
      {
        v18 = 0;
      }
    }
    else
    {
      v18 = *v8;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8 + 1);
    }
    for ( v6 += v17; v17; --v17 )
    {
      *a2 = v18;
      a2 += 4;
    }
    goto LABEL_33;
  }
  return 0;
}

//----- (000000014016C960) ----------------------------------------------------
__int64            sub_14016C960(__int64 a1, char *a2, char *a3, char *a4)
{
  char *v4;
  char *v5;
  char *v7;
  int v8;
  _QWORD *v9;
  int v10;
  char v12;

  v4 = &v12;
  v5 = &v12;
  if ( a2 )
    v4 = a2;
  v7 = &v12;
  if ( a3 )
    v5 = a3;
  if ( a4 )
    v7 = a4;
  v8 = sub_1401604F0(a1);
  if ( (v8 << 16) + (unsigned int)sub_1401604F0(a1) == 943870035 && (unsigned int)sub_1401604F0(a1) == 1 )
  {
    v9 = (_QWORD *)(a1 + 192);
    if ( *(_QWORD *)(a1 + 16) && (v10 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v9, v10 < 6) )
    {
      *v9 = *(_QWORD *)(a1 + 200);
      (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v10));
    }
    else
    {
      *v9 += 6LL;
    }
    if ( (unsigned int)sub_1401604F0(a1) <= 0x10 )
    {
      *(_DWORD *)v5 = sub_140160670(a1);
      *(_DWORD *)v4 = sub_140160670(a1);
      if ( (((unsigned int)sub_1401604F0(a1) - 8) & 0xFFFFFFF7) == 0 && (unsigned int)sub_1401604F0(a1) == 3 )
      {
        *(_DWORD *)v7 = 4;
        return 1;
      }
    }
    *v9 = *(_QWORD *)(a1 + 208);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  }
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}

//----- (000000014016CA90) ----------------------------------------------------
__int64            sub_14016CA90(__int64 a1)
{
  int v2;
  _QWORD *v3;
  int v4;

  v2 = sub_1401604F0(a1);
  if ( (v2 << 16) + (unsigned int)sub_1401604F0(a1) == 943870035 && (unsigned int)sub_1401604F0(a1) == 1 )
  {
    v3 = (_QWORD *)(a1 + 192);
    if ( *(_QWORD *)(a1 + 16) && (v4 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v3, v4 < 6) )
    {
      *v3 = *(_QWORD *)(a1 + 200);
      (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v4));
    }
    else
    {
      *v3 += 6LL;
    }
    if ( (unsigned int)sub_1401604F0(a1) <= 0x10 )
    {
      sub_140160670(a1);
      sub_140160670(a1);
      if ( (unsigned int)sub_1401604F0(a1) == 16 )
        return 1;
    }
    *v3 = *(_QWORD *)(a1 + 208);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  }
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}

//----- (000000014016CB70) ----------------------------------------------------
char *           sub_14016CB70(__int64 a1, int *a2, int *a3, _DWORD *a4, int a5, _DWORD *a6, int a7)
{
  int v8;
  char **v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  _DWORD *v25;
  char *v26;
  __int64 v27;
  __int64 v28;
       char *v29;
  __int64 v30;
  signed int v31;
  char *v32;
  char v33;
  __int64 v34;
  signed int v35;
  int v36;
  __int64 v37;
  _BYTE *v38;
  __int16 v39;
  __int16 *v40;
  __int64 v41;
  char v42;
  char *v43;
  __int64 v44;
  _WORD *v45;
  __int64 v46;
  _BYTE *v47;
  __int64 v48;
  __int64 v49;
  char *v50;
  char v51;
  unsigned __int16 *v52;
  unsigned __int64 v53;
  int v54;
  float v55;
  float v56;
  int v57;
  float v58;
  float v59;
  int v60;
  float v61;
  float v62;
  int v63;
  float v64;
  float v65;
  char *v66;
  __int64 v67;
  int v68;
  float v69;
  float v70;
  unsigned __int8 *v71;
  unsigned __int64 v72;
  int v73;
  float v74;
  float v75;
  int v76;
  float v77;
  float v78;
  int v79;
  float v80;
  float v81;
  int v82;
  float v83;
  float v84;
  char *v85;
  __int64 v86;
  int v87;
  float v88;
  float v89;
  char *v90;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016CB70[32];
#define v91 (*(unsigned int (*))(void *)(sr_frame_14016CB70 + 0)) /* [rsp+30h] */
#define v92 (*(int (*))(void *)(sr_frame_14016CB70 + 4)) /* [rsp+34h] */
#define v93 (*(int (*))(void *)(sr_frame_14016CB70 + 8)) /* [rsp+38h] */
#define v94 (*(__int64 (*))(void *)(sr_frame_14016CB70 + 16)) /* [rsp+40h] */
#define v95 (*(char * (*))(void *)(sr_frame_14016CB70 + 24)) /* [rsp+48h] */

  v8 = sub_1401604F0(a1);
  if ( (v8 << 16) + (unsigned int)sub_1401604F0(a1) != 943870035 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("not PSD");
    return nullptr;
  }
  if ( (unsigned int)sub_1401604F0(a1) != 1 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("wrong version");
    return nullptr;
  }
  v10 = (char **)(a1 + 192);
  if ( *(_QWORD *)(a1 + 16) && (v11 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v10, v11 < 6) )
  {
    *v10 = *(char **)(a1 + 200);
    (*(void (           **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v11));
  }
  else
  {
    *v10 += 6;
  }
  v91 = sub_1401604F0(a1);
  v12 = v91;
  if ( v91 > 0x10 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("wrong channel count");
    return nullptr;
  }
  v92 = sub_140160670(a1);
  v13 = sub_140160670(a1);
  v93 = v13;
  v14 = v13;
  if ( v92 > 0x1000000 || v13 > 0x1000000 )
    goto LABEL_12;
  v15 = sub_1401604F0(a1);
  v16 = v15;
  if ( ((v15 - 8) & 0xFFFFFFF7) != 0 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("unsupported bit depth");
    return nullptr;
  }
  if ( (unsigned int)sub_1401604F0(a1) != 3 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("wrong color format");
    return nullptr;
  }
  v17 = sub_140160670(a1);
  sub_14016E0F0(a1, v17);
  v18 = sub_140160670(a1);
  sub_14016E0F0(a1, v18);
  v19 = sub_140160670(a1);
  sub_14016E0F0(a1, v19);
  v20 = sub_1401604F0(a1);
  if ( v20 > 1 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad compression");
    return nullptr;
  }
  if ( v14 < 0 )
    goto LABEL_12;
  if ( v14 )
  {
    if ( 0x7FFFFFFF / v14 < 4 )
      goto LABEL_12;
    v21 = 4 * v14;
    if ( (v14 & 0x20000000) != 0 )
      goto LABEL_12;
  }
  else
  {
    v21 = 0;
  }
  if ( v92 < 0 || v92 && v21 > 0x7FFFFFFF / v92 )
  {
LABEL_12:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("too large");
    return nullptr;
  }
  v22 = v92 * v14;
  if ( v20 || (_DWORD)v16 != 16 || a7 != 16 )
  {
    v27 = sr_path_malloc(4 * v22);
    v25 = a6;
    v26 = (char *)v27;
    v95 = (char *)v27;
    goto LABEL_39;
  }
  if ( v14 )
  {
    if ( 0x7FFFFFFF / v14 < 8 )
      goto LABEL_37;
    v23 = 8 * v14;
    if ( (v14 & 0x10000000) != 0 )
      goto LABEL_37;
  }
  else
  {
    v23 = 0;
  }
  if ( v92 && v23 > 0x7FFFFFFF / v92 )
  {
LABEL_37:
    v25 = a6;
    v26 = nullptr;
    v95 = nullptr;
    *a6 = 16;
    goto LABEL_39;
  }
  v24 = sr_path_malloc(8 * v22);
  v25 = a6;
  v26 = (char *)v24;
  v95 = (char *)v24;
  *a6 = 16;
LABEL_39:
  if ( !v26 )
  {
    v28 = sr_client_static_tls();
    v29 = "outofmem";
    goto LABEL_41;
  }
  if ( v20 )
  {
    sub_14016E0F0(a1, 2 * v91 * v92);
    v30 = 0;
    v31 = 0;
    while ( 1 )
    {
      v32 = &v26[v31];
      if ( v31 < (int)v91 )
      {
        if ( !(unsigned int)sub_14016C720(a1, v32, v22) )
        {
          free(v26);
          v28 = sr_client_static_tls();
          v29 = "corrupt";
LABEL_41:
          *(_QWORD *)(v28 + 16) = (uint64)(uintptr_t)(v29);
          return nullptr;
        }
      }
      else if ( v22 > 0 )
      {
        v33 = 0;
        v34 = (unsigned int)v22;
        if ( v31 == 3 )
          v33 = -1;
        do
        {
          *v32 = v33;
          v32 += 4;
          --v34;
        }
        while ( v34 );
      }
      if ( ++v31 >= 4 )
        goto LABEL_94;
    }
  }
  v35 = v91;
  v30 = 0;
  v36 = 0;
  v94 = v16;
  v37 = v16;
  v38 = v26;
  do
  {
    if ( v36 < v35 )
    {
      if ( *v25 == 16 )
      {
        v45 = v26;
        if ( v22 <= 0 )
          goto LABEL_92;
        v46 = (unsigned int)v22;
        do
        {
          *v45 = sub_1401604F0(a1);
          v45 += 4;
          --v46;
        }
        while ( v46 );
      }
      else
      {
        v47 = v38;
        if ( v37 == 16 )
        {
          if ( v22 <= 0 )
            goto LABEL_92;
          v48 = (unsigned int)v22;
          do
          {
            *v47 = (unsigned __int16)sub_1401604F0(a1) >> 8;
            v47 += 4;
            --v48;
          }
          while ( v48 );
        }
        else
        {
          if ( v22 <= 0 )
            goto LABEL_92;
          v49 = (unsigned int)v22;
          do
          {
            v50 = *v10;
            if ( (unsigned __int64)*v10 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                stbi_refill_buffer(a1);
                v51 = *(*v10)++;
              }
              else
              {
                v51 = 0;
              }
            }
            else
            {
              v51 = *v50;
              *v10 = v50 + 1;
            }
            *v47 = v51;
            v47 += 4;
            --v49;
          }
          while ( v49 );
        }
      }
      v30 = 0;
    }
    else if ( v37 == 16 && a7 == 16 )
    {
      v39 = 0;
      v40 = (__int16 *)v26;
      if ( v36 == 3 )
        v39 = -1;
      if ( v22 <= 0 )
        goto LABEL_91;
      v41 = (unsigned int)v22;
      do
      {
        *v40 = v39;
        v40 += 4;
        --v41;
      }
      while ( v41 );
    }
    else
    {
      v42 = 0;
      v43 = v38;
      if ( v36 == 3 )
        v42 = -1;
      if ( v22 <= 0 )
        goto LABEL_91;
      v44 = (unsigned int)v22;
      do
      {
        *v43 = v42;
        v43 += 4;
        --v44;
      }
      while ( v44 );
    }
    v35 = v91;
LABEL_91:
    v37 = v94;
    v25 = a6;
LABEL_92:
    ++v36;
    v26 += 2;
    ++v38;
  }
  while ( v36 < 4 );
  v12 = v91;
  v26 = v95;
  v14 = v93;
LABEL_94:
  if ( v12 >= 4 )
  {
    if ( *a6 == 16 )
    {
      if ( v22 >= 4LL )
      {
        v52 = (unsigned __int16 *)(v26 + 10);
        v53 = ((unsigned __int64)(v22 - 4LL) >> 2) + 1;
        v30 = 4 * v53;
        do
        {
          v54 = *(v52 - 2);
          if ( (unsigned __int16)(v54 - 1) <= 0xFFFDu )
          {
            v55 = 65535.0 / (float)v54;
            v56 = (float)(1.0 - v55) * 65535.0;
            *(v52 - 5) = (int)(float)((float)((float)*(v52 - 5) * v55) + v56);
            *(v52 - 4) = (int)(float)((float)((float)*(v52 - 4) * v55) + v56);
            *(v52 - 3) = (int)(float)((float)((float)*(v52 - 3) * v55) + v56);
          }
          v57 = v52[2];
          if ( (unsigned __int16)(v57 - 1) <= 0xFFFDu )
          {
            v58 = 65535.0 / (float)v57;
            v59 = (float)(1.0 - v58) * 65535.0;
            *(v52 - 1) = (int)(float)((float)((float)*(v52 - 1) * v58) + v59);
            *v52 = (int)(float)((float)((float)*v52 * v58) + v59);
            v52[1] = (int)(float)((float)((float)v52[1] * v58) + v59);
          }
          v60 = v52[6];
          if ( (unsigned __int16)(v60 - 1) <= 0xFFFDu )
          {
            v61 = 65535.0 / (float)v60;
            v62 = (float)(1.0 - v61) * 65535.0;
            v52[3] = (int)(float)((float)((float)v52[3] * v61) + v62);
            v52[4] = (int)(float)((float)((float)v52[4] * v61) + v62);
            v52[5] = (int)(float)((float)((float)v52[5] * v61) + v62);
          }
          v63 = v52[10];
          if ( (unsigned __int16)(v63 - 1) <= 0xFFFDu )
          {
            v64 = 65535.0 / (float)v63;
            v65 = (float)(1.0 - v64) * 65535.0;
            v52[7] = (int)(float)((float)((float)v52[7] * v64) + v65);
            v52[8] = (int)(float)((float)((float)v52[8] * v64) + v65);
            v52[9] = (int)(float)((float)((float)v52[9] * v64) + v65);
          }
          v52 += 16;
          --v53;
        }
        while ( v53 );
      }
      if ( v30 < v22 )
      {
        v66 = &v26[8 * v30 + 2];
        v67 = v22 - v30;
        do
        {
          v68 = *((unsigned __int16 *)v66 + 2);
          if ( (unsigned __int16)(v68 - 1) <= 0xFFFDu )
          {
            v69 = 65535.0 / (float)v68;
            v70 = (float)(1.0 - v69) * 65535.0;
            *((_WORD *)v66 - 1) = (int)(float)((float)((float)*((unsigned __int16 *)v66 - 1) * v69) + v70);
            *(_WORD *)v66 = (int)(float)((float)((float)*(unsigned __int16 *)v66 * v69) + v70);
            *((_WORD *)v66 + 1) = (int)(float)((float)((float)*((unsigned __int16 *)v66 + 1) * v69) + v70);
          }
          v66 += 8;
          --v67;
        }
        while ( v67 );
      }
    }
    else
    {
      if ( v22 >= 4LL )
      {
        v71 = (unsigned __int8 *)(v26 + 5);
        v72 = ((unsigned __int64)(v22 - 4LL) >> 2) + 1;
        v30 = 4 * v72;
        do
        {
          v73 = *(v71 - 2);
          if ( (unsigned __int8)(v73 - 1) <= 0xFDu )
          {
            v74 = 254.99998 / (float)v73;
            v75 = (float)(1.0 - v74) * 255.0;
            *(v71 - 5) = (int)(float)((float)((float)*(v71 - 5) * v74) + v75);
            *(v71 - 4) = (int)(float)((float)((float)*(v71 - 4) * v74) + v75);
            *(v71 - 3) = (int)(float)((float)((float)*(v71 - 3) * v74) + v75);
          }
          v76 = v71[2];
          if ( (unsigned __int8)(v76 - 1) <= 0xFDu )
          {
            v77 = 254.99998 / (float)v76;
            v78 = (float)(1.0 - v77) * 255.0;
            *(v71 - 1) = (int)(float)((float)((float)*(v71 - 1) * v77) + v78);
            *v71 = (int)(float)((float)((float)*v71 * v77) + v78);
            v71[1] = (int)(float)((float)((float)v71[1] * v77) + v78);
          }
          v79 = v71[6];
          if ( (unsigned __int8)(v79 - 1) <= 0xFDu )
          {
            v80 = 254.99998 / (float)v79;
            v81 = (float)(1.0 - v80) * 255.0;
            v71[3] = (int)(float)((float)((float)v71[3] * v80) + v81);
            v71[4] = (int)(float)((float)((float)v71[4] * v80) + v81);
            v71[5] = (int)(float)((float)((float)v71[5] * v80) + v81);
          }
          v82 = v71[10];
          if ( (unsigned __int8)(v82 - 1) <= 0xFDu )
          {
            v83 = 254.99998 / (float)v82;
            v84 = (float)(1.0 - v83) * 255.0;
            v71[7] = (int)(float)((float)((float)v71[7] * v83) + v84);
            v71[8] = (int)(float)((float)((float)v71[8] * v83) + v84);
            v71[9] = (int)(float)((float)((float)v71[9] * v83) + v84);
          }
          v71 += 16;
          --v72;
        }
        while ( v72 );
      }
      if ( v30 < v22 )
      {
        v85 = &v26[4 * v30 + 1];
        v86 = v22 - v30;
        do
        {
          v87 = (unsigned __int8)v85[2];
          if ( (unsigned __int8)(v87 - 1) <= 0xFDu )
          {
            v88 = 254.99998 / (float)v87;
            v89 = (float)(1.0 - v88) * 255.0;
            *(v85 - 1) = (int)(float)((float)((float)(unsigned __int8)*(v85 - 1) * v88) + v89);
            *v85 = (int)(float)((float)((float)(unsigned __int8)*v85 * v88) + v89);
            v85[1] = (int)(float)((float)((float)(unsigned __int8)v85[1] * v88) + v89);
          }
          v85 += 4;
          --v86;
        }
        while ( v86 );
      }
    }
  }
  if ( (a5 & 0xFFFFFFFB) != 0 )
  {
    v90 = *a6 == 16 ? sub_14015DD00(v26, 4, a5, v14, v92) : sub_14015D7E0(v26, 4, a5, v14, v92);
    v26 = v90;
    if ( !v90 )
      return nullptr;
  }
  if ( a4 )
    *a4 = 4;
  *a3 = v92;
  *a2 = v14;
  return v26;
}
#undef v91
#undef v92
#undef v93
#undef v94
#undef v95

//----- (000000014016D7A0) ----------------------------------------------------
_BOOL8            sub_14016D7A0(_QWORD *a1)
{
  int v2;
  int v3;

  v2 = sub_1401604F0((__int64)a1);
  v3 = sub_1401604F0((__int64)a1);
  a1[24] = a1[26];
  a1[25] = a1[27];
  return (v2 << 16) + v3 == 943870035;
}

//----- (000000014016D800) ----------------------------------------------------
__int64            sub_14016D800(__int64 a1, int a2, __int64 a3)
{
  int v6;
  __int64 v7;
  char *v8;
  unsigned __int64 v9;
  char v10;
  char *v11;

  v6 = 128;
  v7 = 0;
  while ( (v6 & a2) == 0 )
  {
LABEL_14:
    ++v7;
    v6 >>= 1;
    if ( v7 >= 4 )
      return a3;
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( !(*(unsigned int (           **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
    {
      v8 = *(char **)(a1 + 192);
      v9 = *(_QWORD *)(a1 + 200);
LABEL_8:
      if ( (unsigned __int64)v8 >= v9 )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v11 = *(char **)(a1 + 192);
          v10 = *v11;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v11 + 1);
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = *v8;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v8 + 1);
      }
      *(_BYTE *)(v7 + a3) = v10;
      goto LABEL_14;
    }
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_16;
  }
  v8 = *(char **)(a1 + 192);
  v9 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v8 < v9 )
    goto LABEL_8;
LABEL_16:
  *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad file");
  return 0;
}

//----- (000000014016D910) ----------------------------------------------------
__int64            stbi_refill_buffer(__int64 a1)
{
  _BYTE *v1;
  __int64 result;

  v1 = (_BYTE *)(a1 + 56);
  LODWORD(result) = (*(__int64 (           **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                      *(_QWORD *)(a1 + 40),
                      a1 + 56,
                      *(unsigned int *)(a1 + 52));
  *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v1);
  if ( (_DWORD)result )
  {
    result = (int)result;
    *(_QWORD *)(a1 + 200) = (int)result + a1 + 56;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 200) = a1 + 57;
    *v1 = 0;
    return a1 + 57;
  }
  return result;
}

//----- (000000014016D990) ----------------------------------------------------
__int64            sub_14016D990(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5;
  __int64 v6;

  if ( (int)a4 > 0 )
  {
    v5 = a1;
    a4 = (unsigned int)a4;
    do
    {
      if ( a5 > 0LL )
      {
        v6 = 0;
        do
          *(_BYTE *)(v5 + v6++) = *a2;
        while ( v6 < a5 );
      }
      v5 += a5;
      ++a2;
      --a4;
    }
    while ( a4 );
  }
  return a1;
}

//----- (000000014016D9D0) ----------------------------------------------------
_BYTE *           sub_14016D9D0(_BYTE *a1, unsigned __int8 *a2, __int64 a3, int a4)
{
  char v4;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  _BYTE *v12;
  unsigned __int8 *v13;
  int v14;
  int v15;
  __int64 v16;

  v4 = *a2;
  *a1 = *a2;
  if ( a4 == 1 )
  {
    a1[1] = v4;
    return a1;
  }
  else
  {
    v8 = a4;
    v9 = 1;
    a1[1] = (3 * *a2 + (unsigned int)a2[1] + 2) >> 2;
    v10 = a4 - 1LL;
    if ( v10 > 1 )
    {
      v11 = a4 - 2LL;
      v9 = v10;
      v12 = a1 + 2;
      v13 = a2 + 2;
      do
      {
        v14 = *(v13 - 1);
        v12 += 2;
        ++v13;
        v15 = v14 + 2 * (v14 + 1);
        *(v12 - 2) = (v15 + (unsigned int)*(v13 - 3)) >> 2;
        *(v12 - 1) = (v15 + (unsigned int)*(v13 - 1)) >> 2;
        --v11;
      }
      while ( v11 );
    }
    v16 = 2 * v9;
    a1[v16] = (3 * a2[v8 - 2] + (unsigned int)a2[v10] + 2) >> 2;
    a1[v16 + 1] = a2[v10];
    return a1;
  }
}

//----- (000000014016DAC0) ----------------------------------------------------
_BYTE *           sub_14016DAC0(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  __int64 v5;
  int v6;
  unsigned int v7;
  __int64 v9;
  unsigned __int8 *v10;
  __int64 v11;
  _BYTE *v12;
  int v13;
  int v14;
  int v15;

  v5 = a4;
  v6 = *a3 + 3 * *a2;
  if ( a4 == 1 )
  {
    v7 = (unsigned int)(v6 + 2) >> 2;
    a1[1] = v7;
    *a1 = v7;
    return a1;
  }
  else
  {
    *a1 = (unsigned int)(v6 + 2) >> 2;
    if ( a4 > 1LL )
    {
      v9 = a2 - a3;
      v10 = a3 + 1;
      v11 = v5 - 1;
      v12 = a1 + 2;
      do
      {
        v13 = *v10;
        v12 += 2;
        v14 = v6;
        v15 = (v10++)[v9];
        v6 = v13 + 3 * v15;
        *(v12 - 3) = (unsigned int)(v14 + v6 + 2 * (v14 + 4)) >> 4;
        *(v12 - 2) = (unsigned int)(v6 + v14 + 2 * (v6 + 4)) >> 4;
        --v11;
      }
      while ( v11 );
    }
    a1[2 * (int)v5 - 1] = (unsigned int)(v6 + 2) >> 2;
    return a1;
  }
}

//----- (000000014016DB80) ----------------------------------------------------
__m128i *           sub_14016DB80(__m128i *a1, unsigned __int8 *a2,      __m128i *a3, int a4)
{
  __int64 v5;
  unsigned int v7;
  unsigned int v9;
  unsigned int v10;
  __m128i si128;
  __int64 *v13;
  __int64 v14;
  __m128i *v15;
  unsigned int v16;
       __m128i *v17;
  __int64 v18;
  int v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  int v27;
  signed int v28;
  __int64 v29;
  unsigned __int8 *v30;
  __int64 v31;
  __int8 *v32;
  int v33;
  int v34;
  int v35;

  v5 = a4;
  v7 = 0;
  v9 = SR_VEC_PTR_LANES(128, a3, u8)[0] + 3 * *a2;
  if ( (_DWORD)v5 == 1 )
  {
    v10 = (v9 + 2) >> 2;
    SR_VEC_PTR_LANES(128, a1, i8)[1] = v10;
    SR_VEC_PTR_LANES(128, a1, i8)[0] = v10;
    return a1;
  }
  else
  {
    if ( (int)v5 - 1 >= 0 && (((_DWORD)v5 - 1) & 0xFFFFFFF8) != 0 )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_1402791C0);
      v13 = &SR_VEC_PTR_LANES(128, a3, i64)[1];
      v14 = a2 - (unsigned __int8 *)a3;
      v15 = a1;
      v16 = (((((_DWORD)v5 - 1) & 0xFFFFFFF8) - 1) >> 3) + 1;
      v17 = a3;
      v18 = v16;
      v7 = 8 * v16;
      do
      {
        v19 = *((unsigned __int8 *)v13 + v14);
        ++v15;
        v20 = _mm_loadl_epi64((     __m128i *)((char *)v17 + v14));
        ++v13;
        v21 = _mm_loadl_epi64(v17);
        v17 = (     __m128i *)((char *)v17 + 8);
        v22 = _mm_unpacklo_epi8(v20, _mm_cvtsi32_si128((int)(0LL)));
        v23 = _mm_add_epi16(_mm_sub_epi16(_mm_unpacklo_epi8(v21, _mm_cvtsi32_si128((int)(0LL))), v22), _mm_slli_epi16(v22, 2u));
        v24 = _mm_add_epi16(_mm_slli_epi16(v23, 2u), si128);
        v25 = _mm_add_epi16(_mm_sub_epi16(_mm_insert_epi16(_mm_slli_si128(v23, 2), v9, 0), v23), v24);
        v26 = _mm_add_epi16(
                _mm_sub_epi16(
                  _mm_insert_epi16(_mm_srli_si128(v23, 2), (unsigned int)*((unsigned __int8 *)v13 - 8) + 3 * v19, 7),
                  v23),
                v24);
        v15[-1] = _mm_packus_epi16(
                    _mm_srli_epi16(_mm_unpacklo_epi16(v25, v26), 4u),
                    _mm_srli_epi16(_mm_unpackhi_epi16(v25, v26), 4u));
        v9 = *((unsigned __int8 *)v13 - 9) + 3 * *((unsigned __int8 *)v13 + v14 - 9);
        --v18;
      }
      while ( v18 );
    }
    v27 = SR_VEC_PTR_LANES(128, a3, u8)[v7] + 3 * a2[v7];
    v28 = v7 + 1;
    SR_VEC_PTR_LANES(128, a1, i8)[2 * v7] = (v27 + v9 + 8 + 2 * v27) >> 4;
    if ( (int)(v7 + 1) < v5 )
    {
      v29 = a2 - (unsigned __int8 *)a3;
      v30 = &SR_VEC_PTR_LANES(128, a3, u8)[v28];
      v31 = v5 - v28;
      v32 = &SR_VEC_PTR_LANES(128, a1, i8)[2 * v28];
      do
      {
        v33 = *v30;
        v32 += 2;
        v34 = v27;
        v35 = (v30++)[v29];
        v27 = v33 + 3 * v35;
        *(v32 - 3) = (unsigned int)(v34 + v27 + 2 * (v34 + 4)) >> 4;
        *(v32 - 2) = (unsigned int)(v27 + v34 + 2 * (v27 + 4)) >> 4;
        --v31;
      }
      while ( v31 );
    }
    SR_VEC_PTR_LANES(128, a1, i8)[2 * (int)v5 - 1] = (unsigned int)(v27 + 2) >> 2;
    return a1;
  }
}

//----- (000000014016DD80) ----------------------------------------------------
unsigned __int64            sub_14016DD80(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  int v4;
  __int64 v7;
  unsigned __int64 v8;
  __m128i si128;
  __int64 v10;
  __m128i v11;
  __int64 v12;
  __int64 v13;
  __m128i v14;
  __m128i v15;
  __m128i v16;
  __m128i v17;
  __m128i v18;
  __m128i v19;
  __m128i v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __int64 v26;
  unsigned __int8 *v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;

  v4 = 0;
  if ( a4 >= 16 && dword_140302080 >= 2 )
  {
    v7 = a4 - 1LL;
    v8 = v7 + a1;
    if ( (a1 > v7 + a3 || v8 < a3) && (a1 > v7 + a2 || v8 < a2) )
    {
      si128 = _mm_load_si128((     __m128i *)&xmmword_140278F60);
      v10 = a3 + 4;
      v11 = _mm_load_si128((     __m128i *)&xmmword_140278F10);
      v12 = a2 - a3;
      v13 = a1 - a3;
      v14 = _mm_cvtsi32_si128(2u);
      do
      {
        v15 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 4));
        v10 += 16;
        v4 += 16;
        v16 = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(v15), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 20)))),
                      v11),
                    v14),
                  216),
                216);
        v17 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 16));
        v18 = _mm_and_si128(_mm_shuffle_epi32(v16, 216), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(v13 + v10 - 20) = _mm_cvtsi128_si32(_mm_packus_epi16(v18, v18));
        v19 = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(v17), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 16)))),
                      v11),
                    v14),
                  216),
                216);
        v20 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 12));
        v21 = _mm_and_si128(_mm_shuffle_epi32(v19, 216), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(v13 + v10 - 16) = _mm_cvtsi128_si32(_mm_packus_epi16(v21, v21));
        v22 = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(v20), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 12)))),
                      v11),
                    v14),
                  216),
                216);
        v23 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 8));
        v24 = _mm_and_si128(_mm_shuffle_epi32(v22, 216), _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(v13 + v10 - 12) = _mm_cvtsi128_si32(_mm_packus_epi16(v24, v24));
        v25 = _mm_and_si128(
                _mm_shuffle_epi32(
                  _mm_shufflehi_epi16(
                    _mm_shufflelo_epi16(
                      _mm_sra_epi32(
                        _mm_add_epi32(
                          _mm_add_epi32(
                            _mm_mullo_epi32(_mm_cvtepu8_epi32(v23), si128),
                            _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 8)))),
                          v11),
                        v14),
                      216),
                    216),
                  216),
                _mm_load_si128((const __m128i *)&xmmword_1402791D0));
        *(_DWORD *)(v13 + v10 - 8) = _mm_cvtsi128_si32(_mm_packus_epi16(v25, v25));
      }
      while ( (__int64)(-4LL - a3 + v10) < (__int64)(a4 & 0xFFFFFFFFFFFFFFF0uLL) );
    }
  }
  v26 = v4;
  if ( v4 < (__int64)a4 )
  {
    v27 = (unsigned __int8 *)(v4 + a3);
    v28 = a1 - a3;
    v29 = a2 - a3;
    v30 = a4 - v26;
    do
    {
      v31 = v27[v29];
      v32 = *v27++;
      v27[v28 - 1] = (unsigned int)(3 * v31 + v32 + 2) >> 2;
      --v30;
    }
    while ( v30 );
  }
  return a1;
}

//----- (000000014016DFD0) ----------------------------------------------------
__m128i *(           *           sub_14016DFD0(
        _QWORD *a1))(__m128i *a1, unsigned __int8 *a2,      __m128i *a3, int a4)
{
  unsigned __int64 _RAX = 0, _RBX = 0, _RCX = 0, _RDX = 0;
  __m128i *(           *result)(__m128i *, unsigned __int8 *,      __m128i *, int);

  a1[2318] = (uintptr_t)sub_140163020;
  a1[2319] = (uintptr_t)sub_14015B140;
  a1[2320] = (uintptr_t)sub_14016DAC0;
  _RAX = 1;
  _RCX = 0;
  __asm__ volatile("cpuid" : "+a"(_RAX), "+b"(_RBX), "+c"(_RCX), "+d"(_RDX));
  if ( (_RDX & 0x4000000) != 0 )
  {
    a1[2318] = (uintptr_t)sub_140163640;
    a1[2319] = (uintptr_t)sub_14015B270;
    a1[2320] = (uintptr_t)sub_14016DB80;
    return sub_14016DB80;
  }
  return result;
}

//----- (000000014016E050) ----------------------------------------------------
__int64            sub_14016E050(unsigned int a1, int a2, int a3)
{
  __int64 v3;
  unsigned int v4;
  unsigned int v5;

  v3 = a3;
  if ( a2 >= 0 )
    v4 = a1 >> a2;
  else
    v4 = a1 << -(char)a2;
  if ( v4 >= 0x100 )
    crt_assert((char *)L"v < 256", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x148Eu);
  v5 = v4 >> (8 - v3);
  if ( (unsigned int)v3 > 8 )
    crt_assert((char *)L"bits >= 0 && bits <= 8", (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 0x1490u);
  return (unsigned int)((int)(v5 * dword_140301870[v3]) >> dword_140301870[v3 + 10]);
}

//----- (000000014016E0F0) ----------------------------------------------------
__int64            sub_14016E0F0(__int64 a1, int a2)
{
  __int64 result;
  int v4;
  __int64 v5;
  __int64 v6;

  if ( a2 )
  {
    if ( a2 >= 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v4 = *(_DWORD *)(a1 + 200) - *(_DWORD *)(a1 + 192), v4 < a2) )
      {
        v5 = (unsigned int)(a2 - v4);
        v6 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        return (*(__int64 (           **)(__int64, __int64))(a1 + 24))(v6, v5);
      }
      else
      {
        *(_QWORD *)(a1 + 192) += a2;
        return a2;
      }
    }
    else
    {
      result = *(_QWORD *)(a1 + 200);
      *(_QWORD *)(a1 + 192) = result;
    }
  }
  return result;
}

//----- (000000014016E150)
__int64 sub_14016E150(void) { return sr_client_cpu_sse2_probe(); }

//----- (000000014016E170) ----------------------------------------------------
__int64            sub_14016E170(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result;

  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 52) = 128;
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = a1 + 56;
  *(_QWORD *)(a1 + 192) = a1 + 56;
  stbi_refill_buffer(a1);
  result = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 216) = result;
  return result;
}

//----- (000000014016E1E0) ----------------------------------------------------
__int64            sub_14016E1E0(__int64 a1, __int64 a2)
{
  __int64 result;

  *(_OWORD *)(a1 + 16) = *(_OWORD *)&off_140301820;
  *(_QWORD *)(a1 + 32) = (uint64)(uintptr_t)(off_140301830);
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 52) = 128;
  *(_DWORD *)(a1 + 48) = 1;
  *(_DWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = a1 + 56;
  *(_QWORD *)(a1 + 192) = a1 + 56;
  stbi_refill_buffer(a1);
  result = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 216) = result;
  return result;
}

//----- (000000014016E2A0) ----------------------------------------------------
__int64            sub_14016E2A0(unsigned __int64 (           **a1)(__int64, __int64, int), char *a2)
{
  int v3;
  __int64 (           *v4)(__int64, __int64, int);
  unsigned int v5;
  __int64 (           *v7)(__int64, __int64, int);

  v3 = sub_14020B8E4((__int64 *)&v7, a2, "wb");
  v4 = v7;
  v5 = 0;
  *a1 = (uintptr_t)sub_14016E2F0;
  if ( v3 )
    v4 = nullptr;
  a1[1] = (unsigned __int64 (           *)(__int64, __int64, int))v4;
  LOBYTE(v5) = v4 != nullptr;
  return v5;
}

//----- (000000014016E2F0) ----------------------------------------------------
unsigned __int64            sub_14016E2F0(__int64 a1, __int64 a2, int a3)
{
  return crt_fread(a2, 1, a3, a1);
}

//----- (000000014016E370) ----------------------------------------------------
__int64            sub_14016E370(__int64 a1, int *a2, int *a3, unsigned int *a4)
{
  unsigned __int8 *v5;
  unsigned __int64 v6;
  unsigned __int8 v7;
  unsigned __int8 *v8;
  char v10;
  char *v11;
  int v12;
  int v13;
  __int64 v14;
  unsigned __int8 *v15;
  unsigned __int8 v16;
  int v17;
  unsigned __int8 *v18;
  unsigned __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  unsigned __int8 *v27;
  unsigned __int64 v28;
  unsigned __int8 v29;
  _BYTE *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  unsigned int v37;

  v5 = *(unsigned __int8 **)(a1 + 192);
  v6 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v5 >= v6 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_11;
    stbi_refill_buffer(a1);
    v5 = (unsigned __int8 *)++*(_QWORD *)(a1 + 192);
    v6 = *(_QWORD *)(a1 + 200);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(++v5);
  }
  if ( (unsigned __int64)v5 < v6 )
  {
    v7 = *v5++;
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  stbi_refill_buffer(a1);
  v8 = *(unsigned __int8 **)(a1 + 192);
  v7 = *v8;
  v5 = v8 + 1;
LABEL_9:
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5);
  if ( v7 > 1u )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
LABEL_12:
  if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v11 = *(char **)(a1 + 192);
      v10 = *v11;
      v5 = (unsigned __int8 *)(v11 + 1);
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    v10 = *v5++;
  }
  v12 = 0;
  if ( v7 == 1 )
  {
    if ( ((v10 - 1) & 0xF7) == 0 )
    {
      if ( *(_QWORD *)(a1 + 16) && (v13 = *(_DWORD *)(a1 + 200) - (_DWORD)v5, v13 < 4) )
      {
        v14 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(__int64, _QWORD))(a1 + 24))(v14, (unsigned int)(4 - v13));
        v15 = *(unsigned __int8 **)(a1 + 192);
      }
      else
      {
        v15 = v5 + 4;
        *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15);
      }
      if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v18 = *(unsigned __int8 **)(a1 + 192);
          v16 = *v18;
          v15 = v18 + 1;
        }
        else
        {
          v16 = 0;
        }
        v17 = (int)v15;
      }
      else
      {
        v16 = *v15;
        v17 = (_DWORD)v15++ + 1;
      }
      v19 = v16;
      if ( v16 <= 0x20u )
      {
        v20 = 0x101018100LL;
        if ( _bittest64(&v20, v19) )
        {
          if ( *(_QWORD *)(a1 + 16) && (v21 = *(_DWORD *)(a1 + 200) - v17, v21 < 4) )
          {
            v22 = *(_QWORD *)(a1 + 40);
            *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
            (*(void (           **)(__int64, _QWORD))(a1 + 24))(v22, (unsigned int)(4 - v21));
          }
          else
          {
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15 + 4);
          }
          goto LABEL_42;
        }
      }
    }
LABEL_36:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  if ( ((v10 - 2) & 0xF6) != 0 )
    goto LABEL_36;
  if ( *(_QWORD *)(a1 + 16) && (v23 = *(_DWORD *)(a1 + 200) - (_DWORD)v5, v23 < 9) )
  {
    v24 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
    (*(void (           **)(__int64, _QWORD))(a1 + 24))(v24, (unsigned int)(9 - v23));
  }
  else
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v5 + 9);
  }
  LODWORD(v19) = 0;
LABEL_42:
  v25 = sub_1401605B0(a1);
  if ( v25 < 1 )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  v26 = sub_1401605B0(a1);
  if ( v26 < 1 )
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  v27 = *(unsigned __int8 **)(a1 + 192);
  v28 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v27 >= v28 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v31 = 0;
      v32 = 0;
      goto LABEL_52;
    }
    stbi_refill_buffer(a1);
    v27 = *(unsigned __int8 **)(a1 + 192);
    v28 = *(_QWORD *)(a1 + 200);
  }
  v29 = *v27;
  v30 = v27 + 1;
  v31 = v29;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v30);
  v32 = v29;
  if ( (unsigned __int64)v30 < v28 )
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v30 + 1);
    goto LABEL_54;
  }
LABEL_52:
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    ++*(_QWORD *)(a1 + 192);
  }
LABEL_54:
  if ( !(_DWORD)v19 )
  {
    if ( v10 == 3 || v10 == 11 )
      v12 = 1;
    v33 = v32 - 8;
    if ( v33 )
    {
      v34 = v33 - 7;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 8;
          if ( v36 && v36 != 8 )
            goto LABEL_72;
          LODWORD(v19) = v31;
          goto LABEL_71;
        }
        if ( v12 )
        {
          v37 = 2;
          goto LABEL_77;
        }
      }
LABEL_75:
      v37 = 3;
      goto LABEL_77;
    }
LABEL_76:
    v37 = 1;
    goto LABEL_77;
  }
  if ( ((v31 - 8) & 0xFFFFFFF7) != 0 )
  {
LABEL_72:
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
    return 0;
  }
  if ( (_DWORD)v19 == 8 )
    goto LABEL_76;
  if ( (_DWORD)v19 == 15 || (_DWORD)v19 == 16 )
    goto LABEL_75;
  if ( (_DWORD)v19 != 24 && (_DWORD)v19 != 32 )
    goto LABEL_72;
LABEL_71:
  v37 = (unsigned int)v19 >> 3;
  if ( !v37 )
    goto LABEL_72;
LABEL_77:
  if ( a2 )
    *a2 = v25;
  if ( a3 )
    *a3 = v26;
  if ( a4 )
    *a4 = v37;
  return 1;
}

//----- (000000014016E7A0) ----------------------------------------------------
char *           sub_14016E7A0(__int64 a1, _DWORD *a2, int *a3, unsigned int *a4, int a5)
{
  unsigned __int8 *v5;
  unsigned __int64 v7;
  int v8;
  unsigned __int8 v9;
  unsigned __int8 *v10;
  unsigned __int8 v11;
  unsigned __int8 *v12;
  int v13;
  unsigned __int8 v14;
  unsigned __int8 *v15;
  int v16;
  unsigned __int8 *v17;
  unsigned __int8 v18;
  unsigned __int8 *v19;
  unsigned int v20;
  int v21;
  unsigned __int64 v22;
  unsigned __int8 *v23;
  unsigned __int8 v24;
  unsigned __int8 *v25;
  unsigned int v26;
  int v27;
  unsigned __int8 v28;
  unsigned __int8 *v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  __int32 v34;
  int v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  __int64 v40;
       char *v41;
  unsigned __int32 v42;
  unsigned int v43;
  int v44;
  int v45;
  char *v46;
  __int64 v47;
  int v48;
  __m128i *v49;
  __m128i *v50;
  __m128i *v51;
  __m128i *v52;
  __m128i *v53;
  __m128i *v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  int v60;
  unsigned __int8 *v61;
  unsigned __int8 v62;
  unsigned __int8 *v63;
  unsigned __int8 *v64;
  unsigned __int8 v65;
  int v66;
  unsigned __int8 *v67;
  unsigned __int8 v68;
  unsigned __int16 v69;
  __int64 v70;
  __int8 *v71;
  __int8 v72;
  __int8 *v73;
  __int64 v74;
  __int8 *v75;
  __int64 v76;
  int v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;
  char *v82;
  char v83;
  char *v84;
  __int64 v85;
  char v86;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016E7A0[176];
#define v88 (*(int (*))(void *)(sr_frame_14016E7A0 + 8)) /* [rsp+30h] */
#define v89 (*(unsigned int (*))(void *)(sr_frame_14016E7A0 + 8)) /* [rsp+30h] */
#define v90 (*(int (*))(void *)(sr_frame_14016E7A0 + 12)) /* [rsp+34h] */
#define v91 (*(__m128i (*))(void *)(sr_frame_14016E7A0 + 16)) /* [rsp+38h] */
#define v92 (*(int (*))(void *)(sr_frame_14016E7A0 + 32)) /* [rsp+48h] */
#define v93 (*(int (*))(void *)(sr_frame_14016E7A0 + 36)) /* [rsp+4Ch] */
#define v94 (*(int (*))(void *)(sr_frame_14016E7A0 + 40)) /* [rsp+50h] */
#define v95 (*(int (*))(void *)(sr_frame_14016E7A0 + 48)) /* [rsp+58h] */
#define v96 (*(int (*))(void *)(sr_frame_14016E7A0 + 52)) /* [rsp+5Ch] */
#define v97 (*(int (*))(void *)(sr_frame_14016E7A0 + 56)) /* [rsp+60h] */
#define v98 (*(void * (*))(void *)(sr_frame_14016E7A0 + 64)) /* [rsp+68h] */
#define v99 (*(__int64 (*))(void *)(sr_frame_14016E7A0 + 72)) /* [rsp+70h] */
#define v100 (*(int (*))(void *)(sr_frame_14016E7A0 + 168)) /* [rsp+D0h] */
#define v101 (*(unsigned __int8 (*))(void *)(sr_frame_14016E7A0 + 168)) /* [rsp+D0h] */

  v5 = *(unsigned __int8 **)(a1 + 192);
  v7 = *(_QWORD *)(a1 + 200);
  v8 = 0;
  if ( (unsigned __int64)v5 < v7 )
  {
LABEL_4:
    v9 = *v5;
    v10 = v5 + 1;
    v100 = v9;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v10);
    if ( (unsigned __int64)v10 < v7 )
      goto LABEL_9;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    v5 = *(unsigned __int8 **)(a1 + 192);
    v7 = *(_QWORD *)(a1 + 200);
    goto LABEL_4;
  }
  v100 = 0;
LABEL_7:
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v11 = 0;
    v13 = 0;
LABEL_12:
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v15 = *(unsigned __int8 **)(a1 + 192);
      v14 = *v15;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v15 + 1);
    }
    else
    {
      v14 = 0;
    }
    goto LABEL_15;
  }
  stbi_refill_buffer(a1);
  v10 = *(unsigned __int8 **)(a1 + 192);
  v7 = *(_QWORD *)(a1 + 200);
LABEL_9:
  v11 = *v10;
  v12 = v10 + 1;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12);
  v13 = v11;
  if ( (unsigned __int64)v12 >= v7 )
    goto LABEL_12;
  v14 = *v12;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v12 + 1);
LABEL_15:
  SR_VEC_LANES(128, v91, i32)[1] = v14;
  v88 = sub_1401605B0(a1);
  v16 = sub_1401605B0(a1);
  v17 = *(unsigned __int8 **)(a1 + 192);
  v95 = v16;
  if ( (unsigned __int64)v17 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v19 = *(unsigned __int8 **)(a1 + 192);
      v18 = *v19;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v19 + 1);
    }
    else
    {
      v18 = 0;
    }
  }
  else
  {
    v18 = *v17;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v17 + 1);
  }
  v20 = v18;
  sub_1401605B0(a1);
  sub_1401605B0(a1);
  v94 = sub_1401605B0(a1);
  v21 = sub_1401605B0(a1);
  v22 = *(_QWORD *)(a1 + 200);
  v93 = v21;
  v23 = *(unsigned __int8 **)(a1 + 192);
  if ( (unsigned __int64)v23 >= v22 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v26 = 0;
      v27 = 0;
      goto LABEL_26;
    }
    stbi_refill_buffer(a1);
    v23 = *(unsigned __int8 **)(a1 + 192);
    v22 = *(_QWORD *)(a1 + 200);
  }
  v24 = *v23;
  v25 = v23 + 1;
  v26 = v24;
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v25);
  v27 = v24;
  if ( (unsigned __int64)v25 < v22 )
  {
    v28 = *v25;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v25 + 1);
    goto LABEL_29;
  }
LABEL_26:
  if ( *(_DWORD *)(a1 + 48) )
  {
    stbi_refill_buffer(a1);
    v29 = *(unsigned __int8 **)(a1 + 192);
    v28 = *v29;
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v29 + 1);
  }
  else
  {
    v28 = 0;
  }
LABEL_29:
  v30 = v93;
  v31 = 1;
  v32 = v28;
  v98 = nullptr;
  SR_VEC_LANES(128, v91, i32)[0] = 0;
  v92 = 0;
  if ( v93 > 0x1000000 || (v33 = v94, v94 > 0x1000000) )
  {
LABEL_149:
    v40 = sr_client_static_tls();
    v41 = "too large";
    goto LABEL_150;
  }
  v90 = 0;
  v34 = SR_VEC_LANES(128, v91, i32)[1] - 8;
  if ( SR_VEC_LANES(128, v91, i32)[1] < 8u )
    v34 = SR_VEC_LANES(128, v91, i32)[1];
  v96 = 1 - ((v32 >> 5) & 1);
  if ( !v13 )
  {
    v35 = v27 - 8;
    if ( v35 )
    {
      v36 = v35 - 7;
      if ( v36 )
      {
        v37 = v36 - 1;
        if ( v37 )
        {
          v38 = v37 - 8;
          if ( v38 && v38 != 8 )
            goto LABEL_47;
          v20 = v26;
          goto LABEL_46;
        }
        if ( v34 == 3 )
        {
          v39 = 2;
          goto LABEL_52;
        }
      }
LABEL_50:
      v39 = 3;
      v90 = 1;
      goto LABEL_52;
    }
LABEL_51:
    v39 = 1;
    goto LABEL_52;
  }
  if ( v20 == 8 )
    goto LABEL_51;
  if ( v20 == 15 || v20 == 16 )
    goto LABEL_50;
  if ( v20 != 24 && v20 != 32 )
    goto LABEL_47;
LABEL_46:
  v39 = v20 >> 3;
  if ( !v39 )
  {
LABEL_47:
    v40 = sr_client_static_tls();
    v41 = "bad format";
LABEL_150:
    *(_QWORD *)(v40 + 16) = (uint64)(uintptr_t)(v41);
    return nullptr;
  }
LABEL_52:
  *a2 = v94;
  *a3 = v30;
  if ( a4 )
    *a4 = v39;
  if ( v33 < 0 || v30 < 0 || v30 && v33 > 0x7FFFFFFF / v30 )
    goto LABEL_149;
  v97 = v33 * v30;
  if ( v33 * v30 < 0 || v33 * v30 > (int)(0x7FFFFFFF / v39) )
    goto LABEL_149;
  if ( v30 && v33 > 0x7FFFFFFF / v30 )
    goto LABEL_148;
  SR_VEC_LANES(128, v91, i64)[1] = sr_path_malloc((int)(v33 * v30 * v39));
  if ( !SR_VEC_LANES(128, v91, i64)[1] )
    goto LABEL_148;
  sub_14016E0F0(a1, v100);
  if ( v13 )
  {
    if ( !v95 )
    {
      v51 = (__m128i *)SR_VEC_LANES(128, v91, i64)[1];
LABEL_76:
      free(v51);
      v40 = sr_client_static_tls();
      v41 = "bad palette";
      goto LABEL_150;
    }
    sub_14016E0F0(a1, v88);
    if ( v95 >= 0 && v95 <= (int)(0x7FFFFFFF / v39) )
    {
      v52 = (__m128i *)sr_path_malloc((int)(v95 * v39));
      v98 = v52;
      v53 = v52;
      if ( v52 )
      {
        if ( v90 )
        {
          v54 = v52;
          if ( v39 != 3 )
            crt_assert(
              (char *)L"tga_comp == STBI_rgb",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x1691u);
          v55 = (unsigned int)v95;
          v89 = v26;
          v101 = v11;
          do
          {
            sub_14016F120(a1, v54);
            v54 = (__m128i *)((char *)v54 + v39);
            --v55;
          }
          while ( v55 );
          v31 = 1;
        }
        else
        {
          v89 = v26;
          v101 = v11;
          if ( !sub_140160860(a1, v52, v95 * v39) )
          {
            free((void *)SR_VEC_LANES(128, v91, i64)[1]);
            v51 = v53;
            goto LABEL_76;
          }
        }
        v42 = SR_VEC_LANES(128, v91, u32)[1];
        v43 = v26;
LABEL_87:
        if ( v97 <= 0 )
        {
LABEL_127:
          v45 = v93;
          if ( v96 && v93 > 0 )
          {
            v76 = SR_VEC_LANES(128, v91, i64)[1];
            v77 = v94 * v39;
            v78 = 0;
            v79 = v94 * v39 * (v93 - 1);
            do
            {
              v80 = v77;
              if ( v77 > 0 )
              {
                v81 = v79 - (__int64)v78;
                v82 = (char *)(v78 + v76);
                do
                {
                  --v80;
                  v83 = *v82;
                  *v82 = v82[v81];
                  (v82++)[v81] = v83;
                }
                while ( v80 > 0 );
              }
              v78 += v77;
              v79 -= v77;
              v8 += 2;
            }
            while ( v8 < v45 );
          }
          if ( v98 )
            free(v98);
          v46 = (char *)SR_VEC_LANES(128, v91, i64)[1];
          goto LABEL_137;
        }
        v56 = SR_VEC_LANES(128, v91, i64)[1] - (_QWORD)&v91;
        v57 = v39;
        v58 = (unsigned int)v97;
        v99 = (unsigned int)v97;
        v59 = 0;
        v60 = 0;
        while ( 1 )
        {
          if ( v42 < 8 )
            goto LABEL_101;
          if ( !v59 )
            break;
          if ( !v60 || v31 )
            goto LABEL_101;
LABEL_124:
          v74 = 0;
          do
          {
            v75 = &SR_VEC_LANES(128, v91, i8)[v74++];
            v75[v56] = *v75;
          }
          while ( v74 < v39 );
          v43 = v89;
          --v59;
          v42 = SR_VEC_LANES(128, v91, u32)[1];
          v56 += v57;
          --v58;
          v92 = v59;
          v99 = v58;
          if ( !v58 )
            goto LABEL_127;
        }
        v61 = *(unsigned __int8 **)(a1 + 192);
        if ( (unsigned __int64)v61 >= *(_QWORD *)(a1 + 200) )
        {
          if ( *(_DWORD *)(a1 + 48) )
          {
            stbi_refill_buffer(a1);
            v63 = *(unsigned __int8 **)(a1 + 192);
            v62 = *v63;
            *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v63 + 1);
          }
          else
          {
            v62 = 0;
          }
        }
        else
        {
          v62 = *v61;
          *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v61 + 1);
        }
        v60 = v62 >> 7;
        v92 = (v62 & 0x7F) + 1;
LABEL_101:
        if ( v101 )
        {
          if ( v43 == 8 )
          {
            v64 = *(unsigned __int8 **)(a1 + 192);
            if ( (unsigned __int64)v64 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                stbi_refill_buffer(a1);
                v67 = *(unsigned __int8 **)(a1 + 192);
                v68 = *v67;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v67 + 1);
                v66 = v68;
              }
              else
              {
                v66 = 0;
              }
            }
            else
            {
              v65 = *v64;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v64 + 1);
              v66 = v65;
            }
          }
          else
          {
            v66 = sub_1401605B0(a1);
          }
          if ( v66 >= v95 )
            v66 = 0;
          crt_memcpy(&v91, (     __m128i *)((char *)v98 + (int)(v39 * v66)), v39);
        }
        else if ( v90 )
        {
          if ( v39 != 3 )
            crt_assert(
              (char *)L"tga_comp == STBI_rgb",
              (char *)L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h",
              0x16C2u);
          v69 = sub_1401605B0(a1);
          SR_VEC_LANES(128, v91, i8)[0] = (char)-((v69 >> 10) & 0x1F) / 31;
          SR_VEC_LANES(128, v91, i8)[1] = (char)-((v69 >> 5) & 0x1F) / 31;
          SR_VEC_LANES(128, v91, i8)[2] = 255 * (v69 & 0x1F) / 31;
        }
        else
        {
          v70 = 0;
          do
          {
            v71 = *(__int8 **)(a1 + 192);
            if ( (unsigned __int64)v71 >= *(_QWORD *)(a1 + 200) )
            {
              if ( *(_DWORD *)(a1 + 48) )
              {
                stbi_refill_buffer(a1);
                v73 = *(__int8 **)(a1 + 192);
                v72 = *v73;
                *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v73 + 1);
              }
              else
              {
                v72 = 0;
              }
            }
            else
            {
              v72 = *v71;
              *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v71 + 1);
            }
            SR_VEC_LANES(128, v91, i8)[v70++] = v72;
          }
          while ( v70 < v39 );
        }
        v59 = v92;
        v31 = 0;
        v58 = v99;
        v57 = v39;
        goto LABEL_124;
      }
    }
    free((void *)SR_VEC_LANES(128, v91, i64)[1]);
LABEL_148:
    v40 = sr_client_static_tls();
    v41 = "outofmem";
    goto LABEL_150;
  }
  v42 = SR_VEC_LANES(128, v91, u32)[1];
  v43 = v26;
  v89 = v26;
  v101 = v11;
  if ( SR_VEC_LANES(128, v91, i32)[1] >= 8u )
    goto LABEL_87;
  v44 = v90;
  v89 = v26;
  v101 = v11;
  if ( v90 )
    goto LABEL_87;
  v45 = v93;
  v46 = (char *)SR_VEC_LANES(128, v91, i64)[1];
  if ( v93 <= 0 )
    goto LABEL_138;
  v47 = (unsigned int)v93;
  v48 = v39 * v94;
  if ( v96 )
  {
    v49 = (__m128i *)(SR_VEC_LANES(128, v91, i64)[1] + (int)(v94 * v39 * (v93 - 1)));
    do
    {
      sub_140160860(a1, v49, v48);
      v49 = (__m128i *)((char *)v49 - v48);
      --v47;
    }
    while ( v47 );
  }
  else
  {
    v50 = (__m128i *)SR_VEC_LANES(128, v91, i64)[1];
    do
    {
      sub_140160860(a1, v50, v48);
      v50 = (__m128i *)((char *)v50 + v48);
      --v47;
    }
    while ( v47 );
  }
LABEL_137:
  v44 = v90;
LABEL_138:
  if ( v39 >= 3 && !v44 )
  {
    v84 = v46;
    if ( v97 > 0 )
    {
      v85 = (unsigned int)v97;
      do
      {
        v86 = *v84;
        *v84 = v84[2];
        v84[2] = v86;
        v84 += v39;
        --v85;
      }
      while ( v85 );
    }
  }
  if ( a5 )
  {
    if ( a5 != v39 )
      return sub_14015D7E0(v46, v39, a5, v94, v45);
  }
  return v46;
}
#undef v88
#undef v89
#undef v90
#undef v91
#undef v92
#undef v93
#undef v94
#undef v95
#undef v96
#undef v97
#undef v98
#undef v99
#undef v100
#undef v101

// 14016EE37: conditional instruction was optimized away because r14d.4!=0
// 14016EF06: conditional instruction was optimized away because r14d.4!=0
// 14016EF76: conditional instruction was optimized away because r14d.4!=0
// 14016ECB0: conditional instruction was optimized away because %var_70.4>=1

//----- (000000014016F120) ----------------------------------------------------
__int64            sub_14016F120(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v3;
  int v4;

  v3 = sub_1401605B0(a1);
  *a2 = (char)-((v3 >> 10) & 0x1F) / 31;
  v4 = 255 * (v3 & 0x1F);
  a2[1] = (char)-((v3 >> 5) & 0x1F) / 31;
  a2[2] = v4 / 31;
  return (unsigned int)((unsigned __int64)(2216757315LL * v4) >> 32) >> 31;
}

//----- (000000014016F1B0) ----------------------------------------------------
__int64            sub_14016F1B0(__int64 a1)
{
  unsigned int v2;
  unsigned __int8 *v3;
  unsigned __int64 v4;
  unsigned __int8 v5;
  unsigned __int8 *v6;
  unsigned __int8 v7;
  char v8;
  char *v9;
  int v10;
  int v11;
  __int64 v12;
  unsigned __int8 *v13;
  unsigned __int8 v14;
  int v15;
  _BYTE *v16;
  unsigned __int8 *v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  _BYTE *v21;
  int v22;
  __int64 v23;
  unsigned __int8 *v24;
  unsigned __int8 v25;

  v2 = 0;
  v3 = *(unsigned __int8 **)(a1 + 192);
  v4 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v3 >= v4 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_11;
    stbi_refill_buffer(a1);
    v3 = (unsigned __int8 *)++*(_QWORD *)(a1 + 192);
    v4 = *(_QWORD *)(a1 + 200);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(++v3);
  }
  if ( (unsigned __int64)v3 < v4 )
  {
    v5 = *v3++;
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_11:
    v5 = 0;
    v7 = 0;
    goto LABEL_12;
  }
  stbi_refill_buffer(a1);
  v6 = *(unsigned __int8 **)(a1 + 192);
  v5 = *v6;
  v3 = v6 + 1;
LABEL_9:
  *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v3);
  v7 = v5;
  if ( v5 > 1u )
    goto LABEL_56;
LABEL_12:
  if ( (unsigned __int64)v3 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      stbi_refill_buffer(a1);
      v9 = *(char **)(a1 + 192);
      v8 = *v9;
      v3 = (unsigned __int8 *)(v9 + 1);
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v8 = *v3++;
  }
  v10 = 16875776;
  if ( v7 != 1 )
  {
    if ( (((v8 - 2) & 0xF6) != 0 || v8 == 11) && v8 != 11 )
      goto LABEL_56;
    if ( *(_QWORD *)(a1 + 16) )
    {
      v22 = *(_DWORD *)(a1 + 200) - (_DWORD)v3;
      if ( v22 < 9 )
      {
        v23 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (           **)(__int64, _QWORD))(a1 + 24))(v23, (unsigned int)(9 - v22));
        goto LABEL_42;
      }
    }
    v21 = v3 + 9;
LABEL_41:
    *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v21);
LABEL_42:
    if ( (int)sub_1401605B0(a1) >= 1 && (int)sub_1401605B0(a1) >= 1 )
    {
      v24 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v24 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          stbi_refill_buffer(a1);
          v25 = **(_BYTE **)(a1 + 192);
        }
        else
        {
          v25 = 0;
        }
      }
      else
      {
        v25 = *v24;
      }
      if ( v5 != 1 )
        goto LABEL_54;
      if ( v25 == 8 )
      {
LABEL_55:
        v2 = 1;
        goto LABEL_56;
      }
      if ( v25 == 16 )
      {
LABEL_54:
        if ( v25 <= 0x18u && _bittest(&v10, v25) || v25 == 32 )
          goto LABEL_55;
      }
    }
    goto LABEL_56;
  }
  if ( ((v8 - 1) & 0xF7) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) && (v11 = *(_DWORD *)(a1 + 200) - (_DWORD)v3, v11 < 4) )
    {
      v12 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
      (*(void (           **)(__int64, _QWORD))(a1 + 24))(v12, (unsigned int)(4 - v11));
      v13 = *(unsigned __int8 **)(a1 + 192);
    }
    else
    {
      v13 = v3 + 4;
      *(_QWORD *)(a1 + 192) = (uint64)(uintptr_t)(v13);
    }
    if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_56;
      stbi_refill_buffer(a1);
      v17 = *(unsigned __int8 **)(a1 + 192);
      v14 = *v17;
      v16 = v17 + 1;
      v15 = (_DWORD)v17 + 1;
    }
    else
    {
      v14 = *v13;
      v15 = (_DWORD)v13 + 1;
      v16 = v13 + 1;
    }
    if ( v14 <= 0x18u && _bittest(&v10, v14) || v14 == 32 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v18 = *(_DWORD *)(a1 + 200) - v15;
        if ( v18 < 4 )
        {
          v19 = 4 - v18;
          v20 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
          (*(void (           **)(__int64, _QWORD, _BYTE *))(a1 + 24))(v20, v19, v16);
          goto LABEL_42;
        }
      }
      v21 = v16 + 4;
      goto LABEL_41;
    }
  }
LABEL_56:
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return v2;
}

//----- (000000014016F470) ----------------------------------------------------
void sub_14016F470(__m128i *a1, int a2, int a3, int a4)
{
  __m128i *v4;
  __int64 v5;
  __m128i *v6;
  __int64 v7;
  __m128i *v8;
  __m128i *v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016F470[2096];
#define v13 (*(__int64 (*))(void *)(sr_frame_14016F470 + 0)) /* [rsp+0h] */
#define v14 (*(__m128i (*)[128])(void *)(sr_frame_14016F470 + 32)) /* [rsp+20h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_14016F470 + 2080)) /* [rsp+820h] */

  v4 = a1;
  v5 = a2 * (__int64)a4;
  if ( a3 >> 1 > 0 )
  {
    v6 = (__m128i *)((char *)a1 + v5 * (a3 - 1));
    v7 = (unsigned int)(a3 >> 1);
    do
    {
      v8 = v4;
      v9 = v6;
      v10 = v5;
      if ( v5 )
      {
        do
        {
          v11 = 2048;
          if ( v10 < 0x800 )
            v11 = v10;
          crt_memcpy(v14, v8, v11);
          crt_memcpy(v8, v9, v11);
          crt_memcpy(v9, v14, v11);
          v8 = (__m128i *)((char *)v8 + v11);
          v9 = (__m128i *)((char *)v9 + v11);
          v10 -= v11;
        }
        while ( v10 );
      }
      v4 = (__m128i *)((char *)v4 + v5);
      v6 = (__m128i *)((char *)v6 - v5);
      --v7;
    }
    while ( v7 );
  }
  return;
}
#undef v13
#undef v14
#undef v15

//----- (000000014016F590) ----------------------------------------------------
void            sub_14016F590(__m128i *a1, int a2, int a3, int a4, int a5)
{
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __m128i *v11;
  __m128i *v12;
  __m128i *v13;
  __m128i *v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016F590[2128];
#define v17 (*(__int64 (*))(void *)(sr_frame_14016F590 + 0)) /* [rsp+0h] */
#define v18 (*(int (*))(void *)(sr_frame_14016F590 + 32)) /* [rsp+20h] */
#define v19 (*(int (*))(void *)(sr_frame_14016F590 + 36)) /* [rsp+24h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_14016F590 + 40)) /* [rsp+28h] */
#define v21 (*(__m128i * (*))(void *)(sr_frame_14016F590 + 48)) /* [rsp+30h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_14016F590 + 56)) /* [rsp+38h] */
#define v23 (*(__m128i (*)[128])(void *)(sr_frame_14016F590 + 64)) /* [rsp+40h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_14016F590 + 2112)) /* [rsp+840h] */

  if ( a4 > 0 )
  {
    v5 = a5 * a2 * a3;
    v6 = a5 * (__int64)a2;
    v20 = v5;
    v7 = (unsigned int)a4;
    v8 = v5;
    v9 = a3 >> 1;
    v22 = v7;
    v19 = a3;
    v21 = a1;
    v18 = a3 >> 1;
    do
    {
      if ( v9 > 0 )
      {
        v10 = (unsigned int)v9;
        v11 = a1;
        v12 = (__m128i *)((char *)a1 + v6 * (a3 - 1));
        do
        {
          v13 = v11;
          v14 = v12;
          v15 = v6;
          if ( v6 )
          {
            do
            {
              v16 = 2048;
              if ( v15 < 0x800 )
                v16 = v15;
              crt_memcpy(v23, v13, v16);
              crt_memcpy(v13, v14, v16);
              crt_memcpy(v14, v23, v16);
              v13 = (__m128i *)((char *)v13 + v16);
              v14 = (__m128i *)((char *)v14 + v16);
              v15 -= v16;
            }
            while ( v15 );
          }
          v11 = (__m128i *)((char *)v11 + v6);
          v12 = (__m128i *)((char *)v12 - v6);
          --v10;
        }
        while ( v10 );
        a1 = v21;
        v9 = v18;
        v7 = v22;
        a3 = v19;
        v8 = v20;
      }
      a1 = (__m128i *)((char *)a1 + v8);
      --v7;
      v21 = a1;
      v22 = v7;
    }
    while ( v7 );
  }
}
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24

//----- (000000014016F730) ----------------------------------------------------
__int64            sub_14016F730(__int64 a1, unsigned __int8 *a2, int a3)
{
  int v5;
  __int16 v6;
  unsigned __int8 *v8;
  __int64 v9;
  __int64 v10;
  int i;
  int v12;
  int v13;
  int j;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  int *v19;
  int v20;
  __int64 v21;
  unsigned int v22;
  int k;
  __int64 v24;
  __int64 v26;
  unsigned int v27[17];
  int v28;
  _DWORD v29[16];
  __int64 v30;

  v5 = 0;

  v6 = 0;
  memset(v27, 0, sizeof(v27));
  crt_memset((void *)(uintptr_t)((_WORD *)a1), 0, 0x400u);
  if ( a3 > 0 )
  {
    v8 = a2;
    v9 = (unsigned int)a3;
    do
    {
      v10 = *v8++;
      ++*((_DWORD *)v27 + v10);
      --v9;
    }
    while ( v9 );
  }
  v27[0] = 0;
  for ( i = 1; i < 16; ++i )
  {
    if ( *((_DWORD *)v27 + (unsigned int)i) > 1 << i )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad sizes");
      return 0;
    }
  }
  v12 = 1;
  v13 = 0;
  for ( j = 15; j > 0; --j )
  {
    v15 = *((_DWORD *)v27 + v12);
    v29[v12] = v13;
    *(_WORD *)(a1 + 2LL * v12 + 1024) = v13;
    v16 = v15 + v13;
    *(_WORD *)(a1 + 2LL * v12 + 1124) = v6;
    if ( v15 && v16 - 1 >= 1 << v12 )
    {
      *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("bad codelengths");
      return 0;
    }
    v17 = v16 << j;
    v13 = 2 * v16;
    v6 += v15;
    *(_DWORD *)(a1 + 4LL * v12++ + 1056) = v17;
  }
  *(_DWORD *)(a1 + 1120) = 0x10000;
  if ( a3 > 0 )
  {
    do
    {
      v18 = *a2;
      if ( *a2 )
      {
        v19 = &v29[v18];
        v20 = *v19;
        v21 = *v19 + *(unsigned __int16 *)(a1 + 2 * v18 + 1124) - *(unsigned __int16 *)(a1 + 2 * v18 + 1024);
        *(_BYTE *)(v21 + a1 + 1156) = v18;
        *(_WORD *)(a1 + 2 * v21 + 1444) = v5;
        if ( (unsigned int)v18 <= 9 )
        {
          v22 = (16
               * ((4 * ((2 * (v20 & 0x5555)) & 0x3333 | (v20 >> 1) & 0x1111)) & 0xF0F
                | (((2 * (v20 & 0x5555)) | (v20 >> 1) & 0x5555u) >> 2) & 0x303))
              | (((4 * ((2 * (v20 & 0x5555)) & 0x3333 | (v20 >> 1) & 0x1111))
                | (((2 * (v20 & 0x5555)) | (v20 >> 1) & 0x5555u) >> 2) & 0x3333) >> 4)
              & 0xF0F;
          for ( k = (((unsigned __int8)v22 << 8) | BYTE1(v22)) >> (16 - v18);
                k < 512;
                *(_WORD *)(a1 + 2 * v24) = v5 | ((_WORD)v18 << 9) )
          {
            v24 = k;
            k += 1 << v18;
          }
        }
        *v19 = v20 + 1;
      }
      ++v5;
      ++a2;
    }
    while ( v5 < a3 );
  }
  return 1;
}

//----- (000000014016F9E0) ----------------------------------------------------
__int64            sub_14016F9E0(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;

  v3 = *(_DWORD *)(a1 + 48) == 0;
  *(_QWORD *)(a1 + 24) = a2;
  if ( v3 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("output buffer limit");
    return 0;
  }
  v6 = a2 - *(_DWORD *)(a1 + 32);
  v7 = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 32);
  if ( ~v6 < a3 )
    goto LABEL_9;
  if ( v6 + a3 > v7 )
  {
    while ( v7 <= 0x7FFFFFFF )
    {
      v7 *= 2;
      if ( v6 + a3 <= v7 )
        goto LABEL_8;
    }
    goto LABEL_9;
  }
LABEL_8:
  v8 = v7;
  v9 = j__realloc_base_sr(*(_QWORD *)(a1 + 32), v7);
  if ( !v9 )
  {
LABEL_9:
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("outofmem");
    return 0;
  }
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 24) = v9 + v6;
  *(_QWORD *)(a1 + 40) = v8 + v9;
  return 1;
}

//----- (000000014016FB20) ----------------------------------------------------
__int64            sub_14016FB20(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned int v5;
  unsigned int v6;

  v3 = a1;
  if ( *(int *)(a1 + 16) < 16 )
  {
    if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
      return 0xFFFFFFFFLL;
    sub_140160350(a1);
  }
  v5 = *(_DWORD *)(v3 + 20);
  v6 = *(unsigned __int16 *)(a2 + 2LL * (v5 & 0x1FF));
  if ( !*(_WORD *)(a2 + 2LL * (v5 & 0x1FF)) )
    return sub_14016FB90(v3, a2);
  *(_DWORD *)(v3 + 16) -= v6 >> 9;
  *(_DWORD *)(v3 + 20) = v5 >> (v6 >> 9);
  return v6 & 0x1FF;
}

//----- (000000014016FB90) ----------------------------------------------------
__int64            sub_14016FB90(__int64 a1, __int64 a2)
{
  int v2;
  unsigned int v5;
  unsigned int v6;
  int *v7;
  int v8;
  int v9;
  int v10;

  v2 = *(_DWORD *)(a1 + 20);
  v5 = (2 * (v2 & 0x5555)) | (v2 >> 1) & 0x5555;
  v6 = (16 * ((4 * (v5 & 0x3333)) & 0xF0F | (v5 >> 2) & 0x303))
     | (((4 * (v5 & 0x3333)) | (v5 >> 2) & 0x3333) >> 4) & 0xF0F;
  v7 = (int *)(a2 + 1096);
  v8 = (v6 >> 8) | ((unsigned __int8)v6 << 8);
  v9 = 10;
  if ( v8 >= *(_DWORD *)(a2 + 1096) )
  {
    do
    {
      ++v9;
      ++v7;
    }
    while ( v8 >= *v7 );
    if ( v9 >= 16 )
      return 0xFFFFFFFFLL;
  }
  v10 = (v8 >> (16 - v9)) - *(unsigned __int16 *)(a2 + 2LL * v9 + 1024) + *(unsigned __int16 *)(a2 + 2LL * v9 + 1124);
  if ( (unsigned int)v10 >= 0x120 || *(unsigned __int8 *)(v10 + a2 + 1156) != v9 )
    return 0xFFFFFFFFLL;
  *(_DWORD *)(a1 + 16) -= v9;
  *(_DWORD *)(a1 + 20) = (unsigned int)v2 >> v9;
  return *(unsigned __int16 *)(a2 + 2LL * v10 + 1444);
}

//----- (000000014016FC70) ----------------------------------------------------
__int64            sub_14016FC70(__int64 a1, int a2)
{
  int v2;
  __int64 v4;
  unsigned int v5;

  v2 = *(_DWORD *)(a1 + 16);
  v4 = a1;
  if ( v2 < a2 )
  {
    sub_140160350(a1);
    v2 = *(_DWORD *)(v4 + 16);
  }
  v5 = *(_DWORD *)(v4 + 20);
  *(_DWORD *)(v4 + 20) = v5 >> a2;
  *(_DWORD *)(v4 + 16) = v2 - a2;
  return v5 & ((1 << a2) - 1);
}

//----- (000000014016FD50) ----------------------------------------------------
__int64            sub_14016FD50(char *a1, char *a2, char *a3, unsigned int *a4)
{
  int v7;
  FILE *v8;
  int v9;
  int v10;
  char *v11;
  __int64 (           *v17)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016FD50[288];
#define v13 (*(__int64 (*))(void *)(sr_frame_14016FD50 + 0)) /* [rsp+0h] */
#define Stream (*(FILE * (*))(void *)(sr_frame_14016FD50 + 32)) /* [rsp+20h] */
#define v15 (*(_BYTE (*)[16])(void *)(sr_frame_14016FD50 + 48)) /* [rsp+30h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_14016FD50 + 64)) /* [rsp+40h] */
#define v18 (*(FILE * (*))(void *)(sr_frame_14016FD50 + 88)) /* [rsp+58h] */
#define v19 (*(int (*))(void *)(sr_frame_14016FD50 + 96)) /* [rsp+60h] */
#define v20 (*(int (*))(void *)(sr_frame_14016FD50 + 100)) /* [rsp+64h] */
#define v21 (*(char (*))(void *)(sr_frame_14016FD50 + 104)) /* [rsp+68h] */
#define v22 (*(char (*))(void *)(sr_frame_14016FD50 + 105)) /* [rsp+69h] */
#define v23 (*(int (*))(void *)(sr_frame_14016FD50 + 232)) /* [rsp+E8h] */
#define v24 (*(char * (*))(void *)(sr_frame_14016FD50 + 240)) /* [rsp+F0h] */
#define v25 (*(char * (*))(void *)(sr_frame_14016FD50 + 248)) /* [rsp+F8h] */
#define v26 (*(char * (*))(void *)(sr_frame_14016FD50 + 256)) /* [rsp+100h] */
#define v27 (*(char * (*))(void *)(sr_frame_14016FD50 + 264)) /* [rsp+108h] */
#define v28 (*(__int64 (*))(void *)(sr_frame_14016FD50 + 272)) /* [rsp+110h] */

  v7 = sub_14020B8E4((__int64 *)&Stream, a1, "rb");
  v8 = Stream;
  if ( v7 )
    v8 = nullptr;
  Stream = v8;
  if ( v8 )
  {
    v9 = ftell_sr(v8);
    v26 = &v21;
    v16 = *(_OWORD *)&off_140301820;
    v24 = &v21;
    v17 = off_140301830;
    v18 = v8;
    v20 = 128;
    v19 = 1;
    v23 = 0;
    v10 = off_140301820(v8, &v21, 128);
    v23 += (_DWORD)v24 - (_DWORD)v26;
    if ( v10 )
    {
      v24 = &v21;
      v11 = &v21 + v10;
    }
    else
    {
      v19 = 0;
      v24 = &v21;
      v11 = &v22;
      v21 = 0;
    }
    v25 = v11;
    v27 = v11;
    sub_140163E70((__int64)v15, a2, a3, a4);
    sub_14020C4A8((__int64)v8, v9, 0);
    crt_fclose((__int64)v8);
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  return 0; /* the function has no caller */
}
#undef v13
#undef Stream
#undef v15
#undef v16
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28

//----- (000000014016FED0) ----------------------------------------------------
__int64            sub_14016FED0(__int128 *a1, __int64 a2, char *a3, char *a4, unsigned int *a5)
{
  __int128 v5;
  __int64 v6;
  int v9;
  char *v10;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016FED0[272];
#define v12 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 0)) /* [rsp+0h] */
#define v13 (*(_BYTE (*)[16])(void *)(sr_frame_14016FED0 + 32)) /* [rsp+20h] */
#define v14 (*(__int128 (*))(void *)(sr_frame_14016FED0 + 48)) /* [rsp+30h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 72)) /* [rsp+48h] */
#define v17 (*(int (*))(void *)(sr_frame_14016FED0 + 80)) /* [rsp+50h] */
#define v18 (*(int (*))(void *)(sr_frame_14016FED0 + 84)) /* [rsp+54h] */
#define v19 (*(char (*))(void *)(sr_frame_14016FED0 + 88)) /* [rsp+58h] */
#define v20 (*(char (*))(void *)(sr_frame_14016FED0 + 89)) /* [rsp+59h] */
#define v21 (*(int (*))(void *)(sr_frame_14016FED0 + 216)) /* [rsp+D8h] */
#define v22 (*(char * (*))(void *)(sr_frame_14016FED0 + 224)) /* [rsp+E0h] */
#define v23 (*(char * (*))(void *)(sr_frame_14016FED0 + 232)) /* [rsp+E8h] */
#define v24 (*(char * (*))(void *)(sr_frame_14016FED0 + 240)) /* [rsp+F0h] */
#define v25 (*(char * (*))(void *)(sr_frame_14016FED0 + 248)) /* [rsp+F8h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14016FED0 + 256)) /* [rsp+100h] */

  v5 = *a1;
  v6 = *((_QWORD *)a1 + 2);
  v16 = a2;
  v24 = &v19;
  v14 = v5;
  v22 = &v19;
  v15 = v6;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v9 = ((__int64 (           *)(__int64, char *, __int64))v5)(a2, &v19, 128);
  v21 += (_DWORD)v22 - (_DWORD)v24;
  if ( v9 )
  {
    v22 = &v19;
    v10 = &v19 + v9;
  }
  else
  {
    v17 = 0;
    v22 = &v19;
    v10 = &v20;
    v19 = 0;
  }
  v23 = v10;
  v25 = v10;
  return sub_140163E70((__int64)v13, a3, a4, a5); /* 0x14016FFA1: the result of this call is still in rax at the exit */
}
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

//----- (000000014016FFD0) ----------------------------------------------------
__int64            sub_14016FFD0(FILE *a1, char *a2, char *a3, unsigned int *a4)
{
  int v8;
  int v9;
  char *v10;
  __int64 (           *v15)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14016FFD0[272];
#define v12 (*(__int64 (*))(void *)(sr_frame_14016FFD0 + 0)) /* [rsp+0h] */
#define v13 (*(_BYTE (*)[16])(void *)(sr_frame_14016FFD0 + 32)) /* [rsp+20h] */
#define v14 (*(__int128 (*))(void *)(sr_frame_14016FFD0 + 48)) /* [rsp+30h] */
#define v16 (*(FILE * (*))(void *)(sr_frame_14016FFD0 + 72)) /* [rsp+48h] */
#define v17 (*(int (*))(void *)(sr_frame_14016FFD0 + 80)) /* [rsp+50h] */
#define v18 (*(int (*))(void *)(sr_frame_14016FFD0 + 84)) /* [rsp+54h] */
#define v19 (*(char (*))(void *)(sr_frame_14016FFD0 + 88)) /* [rsp+58h] */
#define v20 (*(char (*))(void *)(sr_frame_14016FFD0 + 89)) /* [rsp+59h] */
#define v21 (*(int (*))(void *)(sr_frame_14016FFD0 + 216)) /* [rsp+D8h] */
#define v22 (*(char * (*))(void *)(sr_frame_14016FFD0 + 224)) /* [rsp+E0h] */
#define v23 (*(char * (*))(void *)(sr_frame_14016FFD0 + 232)) /* [rsp+E8h] */
#define v24 (*(char * (*))(void *)(sr_frame_14016FFD0 + 240)) /* [rsp+F0h] */
#define v25 (*(char * (*))(void *)(sr_frame_14016FFD0 + 248)) /* [rsp+F8h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_14016FFD0 + 256)) /* [rsp+100h] */

  v8 = ftell_sr(a1);
  v24 = &v19;
  v14 = *(_OWORD *)&off_140301820;
  v22 = &v19;
  v15 = off_140301830;
  v16 = a1;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v9 = off_140301820(a1, &v19, 128);
  v21 += (_DWORD)v22 - (_DWORD)v24;
  if ( v9 )
  {
    v22 = &v19;
    v10 = &v19 + v9;
  }
  else
  {
    v17 = 0;
    v22 = &v19;
    v10 = &v20;
    v19 = 0;
  }
  v23 = v10;
  v25 = v10;
  sub_140163E70((__int64)v13, a2, a3, a4);
  sub_14020C4A8((__int64)a1, v8, 0);
  return 0; /* the function has no caller */
}
#undef v12
#undef v13
#undef v14
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

//----- (00000001401700F0) ----------------------------------------------------
__int64            sub_1401700F0(__int64 a1, int a2, char *a3, char *a4, unsigned int *a5)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401700F0[272];
#define v6 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 0)) /* [rsp+0h] */
#define v7 (*(_BYTE (*)[16])(void *)(sr_frame_1401700F0 + 32)) /* [rsp+20h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 48)) /* [rsp+30h] */
#define v9 (*(int (*))(void *)(sr_frame_1401700F0 + 80)) /* [rsp+50h] */
#define v10 (*(int (*))(void *)(sr_frame_1401700F0 + 216)) /* [rsp+D8h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 224)) /* [rsp+E0h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 232)) /* [rsp+E8h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 240)) /* [rsp+F0h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 248)) /* [rsp+F8h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1401700F0 + 256)) /* [rsp+100h] */

  v13 = a1;
  v11 = a1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v14 = a2 + a1;
  v12 = v14;
  return sub_140163E70((__int64)v7, a3, a4, a5); /* 0x14017015A: the result of this call is still in rax at the exit */
}
#undef v6
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15

//----- (0000000140170180) ----------------------------------------------------
__int64            sub_140170180(char *a1)
{
  int v1;
  FILE *v2;
  int v3;
  int v4;
  char *v5;
  __int64 (           *v11)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170180[288];
#define v7 (*(__int64 (*))(void *)(sr_frame_140170180 + 0)) /* [rsp+0h] */
#define Stream (*(FILE * (*))(void *)(sr_frame_140170180 + 32)) /* [rsp+20h] */
#define v9 (*(_BYTE (*)[16])(void *)(sr_frame_140170180 + 48)) /* [rsp+30h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_140170180 + 64)) /* [rsp+40h] */
#define v12 (*(FILE * (*))(void *)(sr_frame_140170180 + 88)) /* [rsp+58h] */
#define v13 (*(int (*))(void *)(sr_frame_140170180 + 96)) /* [rsp+60h] */
#define v14 (*(int (*))(void *)(sr_frame_140170180 + 100)) /* [rsp+64h] */
#define v15 (*(char (*))(void *)(sr_frame_140170180 + 104)) /* [rsp+68h] */
#define v16 (*(char (*))(void *)(sr_frame_140170180 + 105)) /* [rsp+69h] */
#define v17 (*(int (*))(void *)(sr_frame_140170180 + 232)) /* [rsp+E8h] */
#define v18 (*(char * (*))(void *)(sr_frame_140170180 + 240)) /* [rsp+F0h] */
#define v19 (*(char * (*))(void *)(sr_frame_140170180 + 248)) /* [rsp+F8h] */
#define v20 (*(char * (*))(void *)(sr_frame_140170180 + 256)) /* [rsp+100h] */
#define v21 (*(char * (*))(void *)(sr_frame_140170180 + 264)) /* [rsp+108h] */
#define v22 (*(__int64 (*))(void *)(sr_frame_140170180 + 272)) /* [rsp+110h] */

  v1 = sub_14020B8E4((__int64 *)&Stream, a1, "rb");
  v2 = Stream;
  if ( v1 )
    v2 = nullptr;
  Stream = v2;
  if ( v2 )
  {
    v3 = ftell_sr(v2);
    v20 = &v15;
    v10 = *(_OWORD *)&off_140301820;
    v18 = &v15;
    v11 = off_140301830;
    v12 = v2;
    v14 = 128;
    v13 = 1;
    v17 = 0;
    v4 = off_140301820(v2, &v15, 128);
    v17 += (_DWORD)v18 - (_DWORD)v20;
    if ( v4 )
    {
      v18 = &v15;
      v5 = &v15 + v4;
    }
    else
    {
      v13 = 0;
      v18 = &v15;
      v5 = &v16;
      v15 = 0;
    }
    v19 = v5;
    v21 = v5;
    sub_1401643B0((__int64)v9);
    sub_14020C4A8((__int64)v2, v3, 0);
    crt_fclose((__int64)v2);
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  return 0; /* the function has no caller */
}
#undef v7
#undef Stream
#undef v9
#undef v10
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22

//----- (00000001401702F0) ----------------------------------------------------
__int64            sub_1401702F0(__int128 *a1, __int64 a2)
{
  __int128 v2;
  __int64 v3;
  int v4;
  char *v5;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401702F0[272];
#define v7 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 0)) /* [rsp+0h] */
#define v8 (*(_BYTE (*)[16])(void *)(sr_frame_1401702F0 + 32)) /* [rsp+20h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_1401702F0 + 48)) /* [rsp+30h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 64)) /* [rsp+40h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 72)) /* [rsp+48h] */
#define v12 (*(int (*))(void *)(sr_frame_1401702F0 + 80)) /* [rsp+50h] */
#define v13 (*(int (*))(void *)(sr_frame_1401702F0 + 84)) /* [rsp+54h] */
#define v14 (*(char (*))(void *)(sr_frame_1401702F0 + 88)) /* [rsp+58h] */
#define v15 (*(char (*))(void *)(sr_frame_1401702F0 + 89)) /* [rsp+59h] */
#define v16 (*(int (*))(void *)(sr_frame_1401702F0 + 216)) /* [rsp+D8h] */
#define v17 (*(char * (*))(void *)(sr_frame_1401702F0 + 224)) /* [rsp+E0h] */
#define v18 (*(char * (*))(void *)(sr_frame_1401702F0 + 232)) /* [rsp+E8h] */
#define v19 (*(char * (*))(void *)(sr_frame_1401702F0 + 240)) /* [rsp+F0h] */
#define v20 (*(char * (*))(void *)(sr_frame_1401702F0 + 248)) /* [rsp+F8h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_1401702F0 + 256)) /* [rsp+100h] */

  v2 = *a1;
  v11 = a2;
  v3 = *((_QWORD *)a1 + 2);
  v9 = v2;
  v19 = &v14;
  v10 = v3;
  v17 = &v14;
  v13 = 128;
  v12 = 1;
  v16 = 0;
  v4 = ((__int64 (           *)(__int64, char *, __int64))v2)(a2, &v14, 128);
  v16 += (_DWORD)v17 - (_DWORD)v19;
  if ( v4 )
  {
    v17 = &v14;
    v5 = &v14 + v4;
  }
  else
  {
    v12 = 0;
    v17 = &v14;
    v5 = &v15;
    v14 = 0;
  }
  v18 = v5;
  v20 = v5;
  return sub_1401643B0((__int64)v8); /* 0x1401703A8: the result of this call is still in rax at the exit */
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21

//----- (00000001401703D0) ----------------------------------------------------
__int64            sub_1401703D0(FILE *a1)
{
  int v2;
  int v3;
  char *v4;
  __int64 (           *v9)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401703D0[272];
#define v6 (*(__int64 (*))(void *)(sr_frame_1401703D0 + 0)) /* [rsp+0h] */
#define v7 (*(_BYTE (*)[16])(void *)(sr_frame_1401703D0 + 32)) /* [rsp+20h] */
#define v8 (*(__int128 (*))(void *)(sr_frame_1401703D0 + 48)) /* [rsp+30h] */
#define v10 (*(FILE * (*))(void *)(sr_frame_1401703D0 + 72)) /* [rsp+48h] */
#define v11 (*(int (*))(void *)(sr_frame_1401703D0 + 80)) /* [rsp+50h] */
#define v12 (*(int (*))(void *)(sr_frame_1401703D0 + 84)) /* [rsp+54h] */
#define v13 (*(char (*))(void *)(sr_frame_1401703D0 + 88)) /* [rsp+58h] */
#define v14 (*(char (*))(void *)(sr_frame_1401703D0 + 89)) /* [rsp+59h] */
#define v15 (*(int (*))(void *)(sr_frame_1401703D0 + 216)) /* [rsp+D8h] */
#define v16 (*(char * (*))(void *)(sr_frame_1401703D0 + 224)) /* [rsp+E0h] */
#define v17 (*(char * (*))(void *)(sr_frame_1401703D0 + 232)) /* [rsp+E8h] */
#define v18 (*(char * (*))(void *)(sr_frame_1401703D0 + 240)) /* [rsp+F0h] */
#define v19 (*(char * (*))(void *)(sr_frame_1401703D0 + 248)) /* [rsp+F8h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_1401703D0 + 256)) /* [rsp+100h] */

  v2 = ftell_sr(a1);
  v18 = &v13;
  v8 = *(_OWORD *)&off_140301820;
  v16 = &v13;
  v9 = off_140301830;
  v10 = a1;
  v12 = 128;
  v11 = 1;
  v15 = 0;
  v3 = off_140301820(a1, &v13, 128);
  v15 += (_DWORD)v16 - (_DWORD)v18;
  if ( v3 )
  {
    v16 = &v13;
    v4 = &v13 + v3;
  }
  else
  {
    v11 = 0;
    v16 = &v13;
    v4 = &v14;
    v13 = 0;
  }
  v17 = v4;
  v19 = v4;
  sub_1401643B0((__int64)v7);
  sub_14020C4A8((__int64)a1, v2, 0);
  return 0; /* the function has no caller */
}
#undef v6
#undef v7
#undef v8
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20

//----- (00000001401704E0) ----------------------------------------------------
__int64            sub_1401704E0(__int64 a1, int a2)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401704E0[272];
#define v3 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 0)) /* [rsp+0h] */
#define v4 (*(_BYTE (*)[16])(void *)(sr_frame_1401704E0 + 32)) /* [rsp+20h] */
#define v5 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 48)) /* [rsp+30h] */
#define v6 (*(int (*))(void *)(sr_frame_1401704E0 + 80)) /* [rsp+50h] */
#define v7 (*(int (*))(void *)(sr_frame_1401704E0 + 216)) /* [rsp+D8h] */
#define v8 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 224)) /* [rsp+E0h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 232)) /* [rsp+E8h] */
#define v10 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 240)) /* [rsp+F0h] */
#define v11 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 248)) /* [rsp+F8h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_1401704E0 + 256)) /* [rsp+100h] */

  v5 = 0;
  v6 = 0;
  v10 = a1;
  v8 = a1;
  v7 = 0;
  v11 = a2 + a1;
  v9 = v11;
  return sub_1401643B0((__int64)v4); /* 0x140170526: the result of this call is still in rax at the exit */
}
#undef v3
#undef v4
#undef v5
#undef v6
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12

//----- (0000000140170550) ----------------------------------------------------
__int64            sub_140170550(char *a1)
{
  int v1;
  FILE *v2;
  unsigned int v3;
  FILE *Stream;

  v1 = sub_14020B8E4((__int64 *)&Stream, a1, "rb");
  v2 = Stream;
  if ( v1 )
    v2 = nullptr;
  Stream = v2;
  if ( !v2 )
    return 0;
  v3 = sub_1401707E0(v2);
  crt_fclose((__int64)v2);
  return v3;
}

//----- (00000001401705B0) ----------------------------------------------------
__int64            sub_1401705B0(__int128 *a1, __int64 a2)
{
  __int128 v2;
  __int64 v3;
  int v4;
  char *v5;
  char *v6;
       char *v7;
  int v8;
  char *v9;
       char *v10;
  char *v11;
  int v12;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401705B0[272];
#define v14 (*(__int64 (*))(void *)(sr_frame_1401705B0 + 0)) /* [rsp+0h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_1401705B0 + 48)) /* [rsp+30h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_1401705B0 + 64)) /* [rsp+40h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_1401705B0 + 72)) /* [rsp+48h] */
#define v18 (*(int (*))(void *)(sr_frame_1401705B0 + 80)) /* [rsp+50h] */
#define v19 (*(unsigned int (*))(void *)(sr_frame_1401705B0 + 84)) /* [rsp+54h] */
#define v20 (*(char (*))(void *)(sr_frame_1401705B0 + 88)) /* [rsp+58h] */
#define v21 (*(_BYTE (*)[127])(void *)(sr_frame_1401705B0 + 89)) /* [rsp+59h] */
#define v22 (*(int (*))(void *)(sr_frame_1401705B0 + 216)) /* [rsp+D8h] */
#define v23 (*(char * (*))(void *)(sr_frame_1401705B0 + 224)) /* [rsp+E0h] */
#define v24 (*(char * (*))(void *)(sr_frame_1401705B0 + 232)) /* [rsp+E8h] */
#define v25 (*(char * (*))(void *)(sr_frame_1401705B0 + 240)) /* [rsp+F0h] */
#define v26 (*(char * (*))(void *)(sr_frame_1401705B0 + 248)) /* [rsp+F8h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_1401705B0 + 256)) /* [rsp+100h] */

  v2 = *a1;
  v17 = a2;
  v3 = *((_QWORD *)a1 + 2);
  v15 = v2;
  v25 = &v20;
  v16 = v3;
  v23 = &v20;
  v19 = 128;
  v18 = 1;
  v22 = 0;
  v4 = ((__int64 (           *)(__int64, char *, __int64))v2)(a2, &v20, 128);
  v5 = &v20;
  v22 += (_DWORD)v23 - (_DWORD)v25;
  v23 = &v20;
  if ( v4 )
  {
    v6 = &v21[v4 - 1];
  }
  else
  {
    v18 = 0;
    v6 = v21;
    v20 = 0;
  }
  v24 = v6;
  v7 = "#?RADIANCE\n";
  v26 = v6;
  while ( 1 )
  {
    if ( v5 >= v6 )
    {
      if ( v18 )
      {
        v8 = ((__int64 (           *)(__int64, char *, _QWORD))v15)(v17, &v20, v19);
        v22 += (_DWORD)v23 - (_DWORD)v25;
        if ( v8 )
        {
          v6 = &v21[v8 - 1];
          v5 = v21;
          LOBYTE(v8) = v20;
          v24 = v6;
          v23 = v21;
        }
        else
        {
          v6 = v21;
          v18 = 0;
          v5 = v21;
          v24 = v21;
          v23 = v21;
          v20 = 0;
        }
      }
      else
      {
        LOBYTE(v8) = 0;
      }
    }
    else
    {
      LOBYTE(v8) = *v5++;
      v23 = v5;
    }
    if ( (unsigned __int8)v8 != *v7 )
      break;
    if ( !*++v7 )
      return 0; /* the function has no caller */
  }
  v9 = v25;
  v10 = "#?RGBE\n";
  v11 = v26;
  v23 = v25;
  v24 = v26;
  do
  {
    if ( v9 >= v11 )
    {
      if ( v18 )
      {
        v12 = ((__int64 (           *)(__int64, char *, _QWORD))v15)(v17, &v20, v19);
        v22 += (_DWORD)v23 - (_DWORD)v25;
        if ( v12 )
        {
          v11 = &v21[v12 - 1];
          v9 = v21;
          LOBYTE(v12) = v20;
          v24 = v11;
          v23 = v21;
        }
        else
        {
          v11 = v21;
          v18 = 0;
          v9 = v21;
          v24 = v21;
          v23 = v21;
          v20 = 0;
        }
      }
      else
      {
        LOBYTE(v12) = 0;
      }
    }
    else
    {
      LOBYTE(v12) = *v9++;
      v23 = v9;
    }
    if ( (unsigned __int8)v12 != *v10 )
      break;
    ++v10;
  }
  while ( *v10 );
  return 0; /* the function has no caller */
}
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27

//----- (00000001401707E0) ----------------------------------------------------
__int64            sub_1401707E0(FILE *a1)
{
  int v2;
  int v3;
  char *v4;
  char *v5;
       char *v6;
  int v7;
  char *v8;
       char *v9;
  char *v10;
  int v11;
  __int64 (           *v15)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401707E0[272];
  int sr_matched = 1; /* edi: 0x140170836 mov edi, 1 */
#define v13 (*(__int64 (*))(void *)(sr_frame_1401707E0 + 0)) /* [rsp+0h] */
#define v14 (*(__int128 (*))(void *)(sr_frame_1401707E0 + 48)) /* [rsp+30h] */
#define v16 (*(FILE * (*))(void *)(sr_frame_1401707E0 + 72)) /* [rsp+48h] */
#define v17 (*(int (*))(void *)(sr_frame_1401707E0 + 80)) /* [rsp+50h] */
#define v18 (*(unsigned int (*))(void *)(sr_frame_1401707E0 + 84)) /* [rsp+54h] */
#define v19 (*(char (*))(void *)(sr_frame_1401707E0 + 88)) /* [rsp+58h] */
#define v20 (*(_BYTE (*)[127])(void *)(sr_frame_1401707E0 + 89)) /* [rsp+59h] */
#define v21 (*(int (*))(void *)(sr_frame_1401707E0 + 216)) /* [rsp+D8h] */
#define v22 (*(char * (*))(void *)(sr_frame_1401707E0 + 224)) /* [rsp+E0h] */
#define v23 (*(char * (*))(void *)(sr_frame_1401707E0 + 232)) /* [rsp+E8h] */
#define v24 (*(char * (*))(void *)(sr_frame_1401707E0 + 240)) /* [rsp+F0h] */
#define v25 (*(char * (*))(void *)(sr_frame_1401707E0 + 248)) /* [rsp+F8h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_1401707E0 + 256)) /* [rsp+100h] */

  v2 = ftell_sr(a1);
  v24 = &v19;
  v14 = *(_OWORD *)&off_140301820;
  v22 = &v19;
  v15 = off_140301830;
  v16 = a1;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v3 = off_140301820(a1, &v19, 128);
  v4 = &v19;
  v21 += (_DWORD)v22 - (_DWORD)v24;
  v22 = &v19;
  if ( v3 )
  {
    v5 = &v20[v3 - 1];
  }
  else
  {
    v17 = 0;
    v5 = v20;
    v19 = 0;
  }
  v23 = v5;
  v6 = "#?RADIANCE\n";
  v25 = v5;
  while ( 1 )
  {
    if ( v4 >= v5 )
    {
      if ( v17 )
      {
        v7 = ((__int64 (           *)(FILE *, char *, _QWORD))v14)(v16, &v19, v18);
        v21 += (_DWORD)v22 - (_DWORD)v24;
        if ( v7 )
        {
          v5 = &v20[v7 - 1];
          v4 = v20;
          LOBYTE(v7) = v19;
          v23 = v5;
          v22 = v20;
        }
        else
        {
          v5 = v20;
          v17 = 0;
          v4 = v20;
          v23 = v20;
          v22 = v20;
          v19 = 0;
        }
      }
      else
      {
        LOBYTE(v7) = 0;
      }
    }
    else
    {
      LOBYTE(v7) = *v4++;
      v22 = v4;
    }
    if ( (unsigned __int8)v7 != *v6 )
      break;
    if ( !*++v6 )
    {
      v22 = v24;
      v23 = v25;
      goto LABEL_26;
    }
  }
  v8 = v24;
  v9 = "#?RGBE\n";
  v10 = v25;
  v22 = v24;
  v23 = v25;
  do
  {
    if ( v8 >= v10 )
    {
      if ( v17 )
      {
        v11 = ((__int64 (           *)(FILE *, char *, _QWORD))v14)(v16, &v19, v18);
        v21 += (_DWORD)v22 - (_DWORD)v24;
        if ( v11 )
        {
          v10 = &v20[v11 - 1];
          v8 = v20;
          LOBYTE(v11) = v19;
          v23 = v10;
          v22 = v20;
        }
        else
        {
          v10 = v20;
          v17 = 0;
          v8 = v20;
          v23 = v20;
          v22 = v20;
          v19 = 0;
        }
      }
      else
      {
        LOBYTE(v11) = 0;
      }
    }
    else
    {
      LOBYTE(v11) = *v8++;
      v22 = v8;
    }
    if ( (unsigned __int8)v11 != *v9 )
    {
      sr_matched = 0; /* 0x1401709FE: mov edi, r15d */
      break;
    }
    ++v9;
  }
  while ( *v9 );
  v22 = v24;
  v23 = v25;
LABEL_26:
  sub_14020C4A8((__int64)a1, v2, 0);
  return sr_matched; /* 0x140170A1F: mov eax, edi */
}
#undef v13
#undef v14
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

//----- (0000000140170A50) ----------------------------------------------------
__int64            sub_140170A50(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2;
       char *v3;
  unsigned __int8 *v4;
  unsigned __int8 v5;
  unsigned __int8 *v6;
       char *v7;
  unsigned __int8 v8;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170A50[272];
#define v10 (*(_QWORD (*)[9])(void *)(sr_frame_140170A50 + 0)) /* [rsp+0h] */
#define v11 (*(int (*))(void *)(sr_frame_140170A50 + 80)) /* [rsp+50h] */
#define v12 (*(int (*))(void *)(sr_frame_140170A50 + 216)) /* [rsp+D8h] */
#define v13 (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 224)) /* [rsp+E0h] */
#define v14 (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 232)) /* [rsp+E8h] */
#define v15 (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 240)) /* [rsp+F0h] */
#define v16 (*(unsigned __int8 * (*))(void *)(sr_frame_140170A50 + 248)) /* [rsp+F8h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140170A50 + 256)) /* [rsp+100h] */

  v11 = 0;
  v2 = &a1[a2];
  v10[6] = 0;
  v16 = v2;
  v3 = "#?RADIANCE\n";
  v14 = v2;
  v4 = a1;
  v12 = 0;
  v15 = a1;
  v13 = a1;
  while ( 1 )
  {
    if ( v4 >= v2 )
    {
      v5 = 0;
    }
    else
    {
      v5 = *v4++;
      v13 = v4;
    }
    if ( v5 != *v3 )
      break;
    if ( !*++v3 )
      return 0; /* the function has no caller */
  }
  v6 = v15;
  v7 = "#?RGBE\n";
  v13 = v15;
  v14 = v16;
  do
  {
    if ( v6 >= v16 )
    {
      v8 = 0;
    }
    else
    {
      v8 = *v6++;
      v13 = v6;
    }
    if ( v8 != *v7 )
      break;
    ++v7;
  }
  while ( *v7 );
  return 0; /* the function has no caller */
}
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17

//----- (0000000140170C30) ----------------------------------------------------
__int64 sub_140170C30(char *a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  __int64 file;
  __int64 decoded;
  sr_image_reader reader;
  int opened = sub_14020B8E4(&file, a1, "rb");
  if (opened) file=0;
  if (!file) {
    *(_QWORD *)(sr_client_static_tls()+16LL) =
      (uint64)(uintptr_t)("can't fopen");
    return 0;
  }
  reader.read=(int (*)(void *,char *,int))sub_1400012A0;
  reader.skip=(void (*)(void *,int))sub_1400012C0;
  reader.eof=(int (*)(void *))sub_140001300;
  reader.user=(void *)(uintptr_t)file;
  reader.capacity=128;
  reader.active=1;
  reader.consumed=0;
  reader.current=reader.original=reader.buffer;
  int count=reader.read(reader.user,reader.buffer,128);
  if (!count) {
    reader.active=0;
    reader.buffer[0]=0;
    count=1;
  }
  reader.end=reader.original_end=reader.buffer+count;
  decoded=(__int64)(uintptr_t)sub_140166160((__int64)(uintptr_t)&reader,a2,a3,a4,a5);
  if (decoded)
    sub_14020C4A8(file,(unsigned int)((uintptr_t)reader.current-(uintptr_t)reader.end),1u);
  crt_fclose(file);
  return decoded;
}

//----- (0000000140170DC0) ----------------------------------------------------
__int64            sub_140170DC0(char *a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  int v8;
  __int64 v9;
  int v10;
  char *v11;
  __int64 (           *v17)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170DC0[304];
#define v13 (*(__int64 (*))(void *)(sr_frame_140170DC0 + 0)) /* [rsp+0h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140170DC0 + 48)) /* [rsp+30h] */
#define v15 (*(_BYTE (*)[16])(void *)(sr_frame_140170DC0 + 64)) /* [rsp+40h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_140170DC0 + 80)) /* [rsp+50h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_140170DC0 + 104)) /* [rsp+68h] */
#define v19 (*(int (*))(void *)(sr_frame_140170DC0 + 112)) /* [rsp+70h] */
#define v20 (*(int (*))(void *)(sr_frame_140170DC0 + 116)) /* [rsp+74h] */
#define v21 (*(char (*))(void *)(sr_frame_140170DC0 + 120)) /* [rsp+78h] */
#define v22 (*(char (*))(void *)(sr_frame_140170DC0 + 121)) /* [rsp+79h] */
#define v23 (*(int (*))(void *)(sr_frame_140170DC0 + 248)) /* [rsp+F8h] */
#define v24 (*(char * (*))(void *)(sr_frame_140170DC0 + 256)) /* [rsp+100h] */
#define v25 (*(char * (*))(void *)(sr_frame_140170DC0 + 264)) /* [rsp+108h] */
#define v26 (*(char * (*))(void *)(sr_frame_140170DC0 + 272)) /* [rsp+110h] */
#define v27 (*(char * (*))(void *)(sr_frame_140170DC0 + 280)) /* [rsp+118h] */
#define v28 (*(__int64 (*))(void *)(sr_frame_140170DC0 + 288)) /* [rsp+120h] */

  v8 = sub_14020B8E4(&v14, a1, "rb");
  v9 = v14;
  if ( v8 )
    v9 = 0;
  v14 = v9;
  if ( v9 )
  {
    v26 = &v21;
    v16 = *(_OWORD *)&off_140301820;
    v24 = &v21;
    v17 = off_140301830;
    v18 = v9;
    v20 = 128;
    v19 = 1;
    v23 = 0;
    v10 = off_140301820(v9, &v21, 128);
    v23 += (_DWORD)v24 - (_DWORD)v26;
    if ( v10 )
    {
      v24 = &v21;
      v11 = &v21 + v10;
    }
    else
    {
      v19 = 0;
      v24 = &v21;
      v11 = &v22;
      v21 = 0;
    }
    v25 = v11;
    v27 = v11;
    if ( sub_140165FD0((__int64)v15, a2, a3, a4, a5) )
      sub_14020C4A8(v9, (_DWORD)v24 - (_DWORD)v25, 1u);
    crt_fclose(v9);
  }
  else
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  return 0; /* the function has no caller */
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28

//----- (0000000140170F50) ----------------------------------------------------
__int64            sub_140170F50(__int128 *a1, __int64 a2, int *a3, int *a4, int *a5, unsigned int a6)
{
  __int128 v6;
  __int64 v7;
  int v10;
  char *v11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140170F50[288];
#define v13 (*(__int64 (*))(void *)(sr_frame_140170F50 + 0)) /* [rsp+0h] */
#define v14 (*(_BYTE (*)[16])(void *)(sr_frame_140170F50 + 48)) /* [rsp+30h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140170F50 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140170F50 + 80)) /* [rsp+50h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140170F50 + 88)) /* [rsp+58h] */
#define v18 (*(int (*))(void *)(sr_frame_140170F50 + 96)) /* [rsp+60h] */
#define v19 (*(int (*))(void *)(sr_frame_140170F50 + 100)) /* [rsp+64h] */
#define v20 (*(char (*))(void *)(sr_frame_140170F50 + 104)) /* [rsp+68h] */
#define v21 (*(char (*))(void *)(sr_frame_140170F50 + 105)) /* [rsp+69h] */
#define v22 (*(int (*))(void *)(sr_frame_140170F50 + 232)) /* [rsp+E8h] */
#define v23 (*(char * (*))(void *)(sr_frame_140170F50 + 240)) /* [rsp+F0h] */
#define v24 (*(char * (*))(void *)(sr_frame_140170F50 + 248)) /* [rsp+F8h] */
#define v25 (*(char * (*))(void *)(sr_frame_140170F50 + 256)) /* [rsp+100h] */
#define v26 (*(char * (*))(void *)(sr_frame_140170F50 + 264)) /* [rsp+108h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_140170F50 + 272)) /* [rsp+110h] */

  v6 = *a1;
  v7 = *((_QWORD *)a1 + 2);
  v25 = &v20;
  v17 = a2;
  v23 = &v20;
  v15 = v6;
  v16 = v7;
  v19 = 128;
  v18 = 1;
  v22 = 0;
  v10 = ((__int64 (           *)(__int64, char *, __int64))v6)(a2, &v20, 128);
  v22 += (_DWORD)v23 - (_DWORD)v25;
  if ( v10 )
  {
    v23 = &v20;
    v11 = &v20 + v10;
  }
  else
  {
    v18 = 0;
    v23 = &v20;
    v11 = &v21;
    v20 = 0;
  }
  v24 = v11;
  v26 = v11;
  return sub_140165FD0((__int64)v14, a3, a4, a5, a6); /* 0x140171030: the result of this call is still in rax at the exit */
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27

//----- (0000000140171060) ----------------------------------------------------
__int64            sub_140171060(__int64 a1, int a2, int *a3, int *a4, int *a5, unsigned int a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171060[288];
#define v7 (*(__int64 (*))(void *)(sr_frame_140171060 + 0)) /* [rsp+0h] */
#define v8 (*(_BYTE (*)[16])(void *)(sr_frame_140171060 + 48)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_140171060 + 64)) /* [rsp+40h] */
#define v10 (*(int (*))(void *)(sr_frame_140171060 + 96)) /* [rsp+60h] */
#define v11 (*(int (*))(void *)(sr_frame_140171060 + 232)) /* [rsp+E8h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_140171060 + 240)) /* [rsp+F0h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_140171060 + 248)) /* [rsp+F8h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140171060 + 256)) /* [rsp+100h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_140171060 + 264)) /* [rsp+108h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140171060 + 272)) /* [rsp+110h] */

  v14 = a1;
  v12 = a1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v15 = a2 + a1;
  v13 = v15;
  return sub_140165FD0((__int64)v8, a3, a4, a5, a6); /* 0x1401710D9: the result of this call is still in rax at the exit */
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16

//----- (0000000140171100) ----------------------------------------------------
__int64            sub_140171100(__int128 *a1, __int64 a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  __int128 v6;
  __int64 v7;
  int v10;
  char *v11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171100[288];
#define v13 (*(__int64 (*))(void *)(sr_frame_140171100 + 0)) /* [rsp+0h] */
#define v14 (*(_BYTE (*)[16])(void *)(sr_frame_140171100 + 48)) /* [rsp+30h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140171100 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140171100 + 80)) /* [rsp+50h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140171100 + 88)) /* [rsp+58h] */
#define v18 (*(int (*))(void *)(sr_frame_140171100 + 96)) /* [rsp+60h] */
#define v19 (*(int (*))(void *)(sr_frame_140171100 + 100)) /* [rsp+64h] */
#define v20 (*(char (*))(void *)(sr_frame_140171100 + 104)) /* [rsp+68h] */
#define v21 (*(char (*))(void *)(sr_frame_140171100 + 105)) /* [rsp+69h] */
#define v22 (*(int (*))(void *)(sr_frame_140171100 + 232)) /* [rsp+E8h] */
#define v23 (*(char * (*))(void *)(sr_frame_140171100 + 240)) /* [rsp+F0h] */
#define v24 (*(char * (*))(void *)(sr_frame_140171100 + 248)) /* [rsp+F8h] */
#define v25 (*(char * (*))(void *)(sr_frame_140171100 + 256)) /* [rsp+100h] */
#define v26 (*(char * (*))(void *)(sr_frame_140171100 + 264)) /* [rsp+108h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_140171100 + 272)) /* [rsp+110h] */

  v6 = *a1;
  v7 = *((_QWORD *)a1 + 2);
  v25 = &v20;
  v17 = a2;
  v23 = &v20;
  v15 = v6;
  v16 = v7;
  v19 = 128;
  v18 = 1;
  v22 = 0;
  v10 = ((__int64 (           *)(__int64, char *, __int64))v6)(a2, &v20, 128);
  v22 += (_DWORD)v23 - (_DWORD)v25;
  if ( v10 )
  {
    v23 = &v20;
    v11 = &v20 + v10;
  }
  else
  {
    v18 = 0;
    v23 = &v20;
    v11 = &v21;
    v20 = 0;
  }
  v24 = v11;
  v26 = v11;
  return sub_140166160((__int64)v14, a3, a4, a5, a6); /* 0x1401711E0: the result of this call is still in rax at the exit */
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27

//----- (0000000140171210) ----------------------------------------------------
__int64            sub_140171210(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  int v9;
  char *v10;
  __int64 (           *v15)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171210[288];
#define v12 (*(__int64 (*))(void *)(sr_frame_140171210 + 0)) /* [rsp+0h] */
#define v13 (*(_BYTE (*)[16])(void *)(sr_frame_140171210 + 48)) /* [rsp+30h] */
#define v14 (*(__int128 (*))(void *)(sr_frame_140171210 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140171210 + 88)) /* [rsp+58h] */
#define v17 (*(int (*))(void *)(sr_frame_140171210 + 96)) /* [rsp+60h] */
#define v18 (*(int (*))(void *)(sr_frame_140171210 + 100)) /* [rsp+64h] */
#define v19 (*(char (*))(void *)(sr_frame_140171210 + 104)) /* [rsp+68h] */
#define v20 (*(char (*))(void *)(sr_frame_140171210 + 105)) /* [rsp+69h] */
#define v21 (*(int (*))(void *)(sr_frame_140171210 + 232)) /* [rsp+E8h] */
#define v22 (*(char * (*))(void *)(sr_frame_140171210 + 240)) /* [rsp+F0h] */
#define v23 (*(char * (*))(void *)(sr_frame_140171210 + 248)) /* [rsp+F8h] */
#define v24 (*(char * (*))(void *)(sr_frame_140171210 + 256)) /* [rsp+100h] */
#define v25 (*(char * (*))(void *)(sr_frame_140171210 + 264)) /* [rsp+108h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140171210 + 272)) /* [rsp+110h] */

  v24 = &v19;
  v14 = *(_OWORD *)&off_140301820;
  v22 = &v19;
  v15 = off_140301830;
  v16 = a1;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v9 = off_140301820(a1, &v19, 128);
  v21 += (_DWORD)v22 - (_DWORD)v24;
  if ( v9 )
  {
    v22 = &v19;
    v10 = &v19 + v9;
  }
  else
  {
    v17 = 0;
    v22 = &v19;
    v10 = &v20;
    v19 = 0;
  }
  v23 = v10;
  v25 = v10;
  if ( sub_140166160((__int64)v13, a2, a3, a4, a5) )
    sub_14020C4A8(a1, (_DWORD)v22 - (_DWORD)v23, 1u);
  return 0; /* the function has no caller */
}
#undef v12
#undef v13
#undef v14
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

//----- (0000000140171340) ----------------------------------------------------
__int64            sub_140171340(__int64 a1, int *a2, int *a3, int *a4, unsigned int a5)
{
  int v9;
  char *v10;
  __int64 (           *v15)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171340[288];
#define v12 (*(__int64 (*))(void *)(sr_frame_140171340 + 0)) /* [rsp+0h] */
#define v13 (*(_BYTE (*)[16])(void *)(sr_frame_140171340 + 48)) /* [rsp+30h] */
#define v14 (*(__int128 (*))(void *)(sr_frame_140171340 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140171340 + 88)) /* [rsp+58h] */
#define v17 (*(int (*))(void *)(sr_frame_140171340 + 96)) /* [rsp+60h] */
#define v18 (*(int (*))(void *)(sr_frame_140171340 + 100)) /* [rsp+64h] */
#define v19 (*(char (*))(void *)(sr_frame_140171340 + 104)) /* [rsp+68h] */
#define v20 (*(char (*))(void *)(sr_frame_140171340 + 105)) /* [rsp+69h] */
#define v21 (*(int (*))(void *)(sr_frame_140171340 + 232)) /* [rsp+E8h] */
#define v22 (*(char * (*))(void *)(sr_frame_140171340 + 240)) /* [rsp+F0h] */
#define v23 (*(char * (*))(void *)(sr_frame_140171340 + 248)) /* [rsp+F8h] */
#define v24 (*(char * (*))(void *)(sr_frame_140171340 + 256)) /* [rsp+100h] */
#define v25 (*(char * (*))(void *)(sr_frame_140171340 + 264)) /* [rsp+108h] */
#define v26 (*(__int64 (*))(void *)(sr_frame_140171340 + 272)) /* [rsp+110h] */

  v24 = &v19;
  v14 = *(_OWORD *)&off_140301820;
  v22 = &v19;
  v15 = off_140301830;
  v16 = a1;
  v18 = 128;
  v17 = 1;
  v21 = 0;
  v9 = off_140301820(a1, &v19, 128);
  v21 += (_DWORD)v22 - (_DWORD)v24;
  if ( v9 )
  {
    v22 = &v19;
    v10 = &v19 + v9;
  }
  else
  {
    v17 = 0;
    v22 = &v19;
    v10 = &v20;
    v19 = 0;
  }
  v23 = v10;
  v25 = v10;
  if ( sub_140165FD0((__int64)v13, a2, a3, a4, a5) )
    sub_14020C4A8(a1, (_DWORD)v22 - (_DWORD)v23, 1u);
  return 0; /* the function has no caller */
}
#undef v12
#undef v13
#undef v14
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26

//----- (0000000140171470) ----------------------------------------------------
__int64            sub_140171470(__int64 a1, int a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171470[288];
#define v7 (*(__int64 (*))(void *)(sr_frame_140171470 + 0)) /* [rsp+0h] */
#define v8 (*(_BYTE (*)[16])(void *)(sr_frame_140171470 + 48)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_140171470 + 64)) /* [rsp+40h] */
#define v10 (*(int (*))(void *)(sr_frame_140171470 + 96)) /* [rsp+60h] */
#define v11 (*(int (*))(void *)(sr_frame_140171470 + 232)) /* [rsp+E8h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_140171470 + 240)) /* [rsp+F0h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_140171470 + 248)) /* [rsp+F8h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140171470 + 256)) /* [rsp+100h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_140171470 + 264)) /* [rsp+108h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_140171470 + 272)) /* [rsp+110h] */

  v14 = a1;
  v12 = a1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v15 = a2 + a1;
  v13 = v15;
  return sub_140166160((__int64)v8, a3, a4, a5, a6); /* 0x1401714E9: the result of this call is still in rax at the exit */
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16

//----- (0000000140171510) ----------------------------------------------------
__int64            sub_140171510(
        __int64 a1,
        int a2,
        __int64 *a3,
        int *a4,
        int *a5,
        unsigned int *a6,
        int *a7,
        unsigned int a8)
{
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  int v12;
  int v13;
  int v14;
  __m128i *v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171510[304];
#define v21 (*(_QWORD (*)[6])(void *)(sr_frame_140171510 + 0)) /* [rsp+0h] */
#define v22 (*(unsigned int (*))(void *)(sr_frame_140171510 + 48)) /* [rsp+30h] */
#define v23 (*(__m128i (*))(void *)(sr_frame_140171510 + 64)) /* [rsp+40h] */
#define v24 (*(__int64 (*))(void *)(sr_frame_140171510 + 80)) /* [rsp+50h] */
#define v25 (*(int (*))(void *)(sr_frame_140171510 + 112)) /* [rsp+70h] */
#define v26 (*(int (*))(void *)(sr_frame_140171510 + 248)) /* [rsp+F8h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_140171510 + 256)) /* [rsp+100h] */
#define v28 (*(__int64 (*))(void *)(sr_frame_140171510 + 264)) /* [rsp+108h] */
#define v29 (*(__int64 (*))(void *)(sr_frame_140171510 + 272)) /* [rsp+110h] */
#define v30 (*(__int64 (*))(void *)(sr_frame_140171510 + 280)) /* [rsp+118h] */
#define v31 (*(__int64 (*))(void *)(sr_frame_140171510 + 288)) /* [rsp+120h] */

  v24 = 0;
  v25 = 0;
  v22 = a8;
  v29 = a1;
  v27 = a1;
  v26 = 0;
  v21[5] = (uint64)(uintptr_t)(a7);
  v30 = a2 + a1;
  v28 = v30;
  v21[4] = (uint64)(uintptr_t)(a6);
  v9 = sub_1401663E0(&v23, a3, a4, a5);
  v10 = sr_client_static_tls();
  if ( *(_DWORD *)(v10 + 8) )
    v11 = *(_DWORD *)(v10 + 12);
  else
    v11 = g_144980DAC;
  if ( v11 )
  {
    v12 = *a4;
    v13 = *a4;
    v14 = *a7;
    v15 = (__m128i *)v9;
    v16 = *a5;
    v17 = *a7 * *a5 * v13;
    if ( (int)*a6 > 0 )
    {
      v18 = *a6;
      v19 = v17;
      do
      {
        sub_14016F470(v15, v12, v16, v14);
        v15 = (__m128i *)((char *)v15 + v19);
        --v18;
      }
      while ( v18 );
    }
  }
  return 0; /* the function has no caller */
}
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27
#undef v28
#undef v29
#undef v30
#undef v31

//----- (0000000140171670) ----------------------------------------------------
__int64            sub_140171670(char *a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  __int64 v8;
  int v9;
  char *v10;
  __int64 (           *v16)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171670[304];
#define v12 (*(__int64 (*))(void *)(sr_frame_140171670 + 0)) /* [rsp+0h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_140171670 + 48)) /* [rsp+30h] */
#define v14 (*(_BYTE (*)[16])(void *)(sr_frame_140171670 + 64)) /* [rsp+40h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140171670 + 80)) /* [rsp+50h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_140171670 + 104)) /* [rsp+68h] */
#define v18 (*(int (*))(void *)(sr_frame_140171670 + 112)) /* [rsp+70h] */
#define v19 (*(int (*))(void *)(sr_frame_140171670 + 116)) /* [rsp+74h] */
#define v20 (*(char (*))(void *)(sr_frame_140171670 + 120)) /* [rsp+78h] */
#define v21 (*(char (*))(void *)(sr_frame_140171670 + 121)) /* [rsp+79h] */
#define v22 (*(int (*))(void *)(sr_frame_140171670 + 248)) /* [rsp+F8h] */
#define v23 (*(char * (*))(void *)(sr_frame_140171670 + 256)) /* [rsp+100h] */
#define v24 (*(char * (*))(void *)(sr_frame_140171670 + 264)) /* [rsp+108h] */
#define v25 (*(char * (*))(void *)(sr_frame_140171670 + 272)) /* [rsp+110h] */
#define v26 (*(char * (*))(void *)(sr_frame_140171670 + 280)) /* [rsp+118h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_140171670 + 288)) /* [rsp+120h] */

  if ( (unsigned int)sub_14020B8E4(&v13, a1, "rb") || (v8 = v13) == 0 )
  {
    *(_QWORD *)(sr_client_static_tls() + 16LL) = (uint64)(uintptr_t)("can't fopen");
  }
  else
  {
    v22 = 0;
    v25 = &v20;
    v15 = *(_OWORD *)&off_140301820;
    v23 = &v20;
    v16 = off_140301830;
    v17 = v13;
    v19 = 128;
    v18 = 1;
    v9 = off_140301820(v13, &v20, 128);
    v22 += (_DWORD)v23 - (_DWORD)v25;
    if ( v9 )
    {
      v23 = &v20;
      v10 = &v20 + v9;
    }
    else
    {
      v18 = 0;
      v23 = &v20;
      v10 = &v21;
      v20 = 0;
    }
    v24 = v10;
    v26 = v10;
    sub_140166D20((__int64)v14, a2, a3, a4, a5);
    crt_fclose(v8);
  }
  return 0; /* the function has no caller */
}
#undef v12
#undef v13
#undef v14
#undef v15
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27

//----- (00000001401717D0) ----------------------------------------------------
__int64            sub_1401717D0(__int128 *a1, __int64 a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  __int128 v6;
  __int64 v7;
  int v10;
  char *v11;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401717D0[288];
#define v13 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 0)) /* [rsp+0h] */
#define v14 (*(_BYTE (*)[16])(void *)(sr_frame_1401717D0 + 48)) /* [rsp+30h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_1401717D0 + 64)) /* [rsp+40h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 80)) /* [rsp+50h] */
#define v17 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 88)) /* [rsp+58h] */
#define v18 (*(int (*))(void *)(sr_frame_1401717D0 + 96)) /* [rsp+60h] */
#define v19 (*(int (*))(void *)(sr_frame_1401717D0 + 100)) /* [rsp+64h] */
#define v20 (*(char (*))(void *)(sr_frame_1401717D0 + 104)) /* [rsp+68h] */
#define v21 (*(char (*))(void *)(sr_frame_1401717D0 + 105)) /* [rsp+69h] */
#define v22 (*(int (*))(void *)(sr_frame_1401717D0 + 232)) /* [rsp+E8h] */
#define v23 (*(char * (*))(void *)(sr_frame_1401717D0 + 240)) /* [rsp+F0h] */
#define v24 (*(char * (*))(void *)(sr_frame_1401717D0 + 248)) /* [rsp+F8h] */
#define v25 (*(char * (*))(void *)(sr_frame_1401717D0 + 256)) /* [rsp+100h] */
#define v26 (*(char * (*))(void *)(sr_frame_1401717D0 + 264)) /* [rsp+108h] */
#define v27 (*(__int64 (*))(void *)(sr_frame_1401717D0 + 272)) /* [rsp+110h] */

  v6 = *a1;
  v7 = *((_QWORD *)a1 + 2);
  v25 = &v20;
  v17 = a2;
  v23 = &v20;
  v15 = v6;
  v16 = v7;
  v19 = 128;
  v18 = 1;
  v22 = 0;
  v10 = ((__int64 (           *)(__int64, char *, __int64))v6)(a2, &v20, 128);
  v22 += (_DWORD)v23 - (_DWORD)v25;
  if ( v10 )
  {
    v23 = &v20;
    v11 = &v20 + v10;
  }
  else
  {
    v18 = 0;
    v23 = &v20;
    v11 = &v21;
    v20 = 0;
  }
  v24 = v11;
  v26 = v11;
  return sub_140166D20((__int64)v14, a3, a4, a5, a6); /* 0x1401718B0: the result of this call is still in rax at the exit */
}
#undef v13
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25
#undef v26
#undef v27

//----- (00000001401718E0) ----------------------------------------------------
__int64            sub_1401718E0(__int64 a1, int *a2, int *a3, unsigned int *a4, unsigned int a5)
{
  int v8;
  char *v9;
  __int64 (           *v14)();
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401718E0[288];
#define v11 (*(__int64 (*))(void *)(sr_frame_1401718E0 + 0)) /* [rsp+0h] */
#define v12 (*(_BYTE (*)[16])(void *)(sr_frame_1401718E0 + 48)) /* [rsp+30h] */
#define v13 (*(__int128 (*))(void *)(sr_frame_1401718E0 + 64)) /* [rsp+40h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1401718E0 + 88)) /* [rsp+58h] */
#define v16 (*(int (*))(void *)(sr_frame_1401718E0 + 96)) /* [rsp+60h] */
#define v17 (*(int (*))(void *)(sr_frame_1401718E0 + 100)) /* [rsp+64h] */
#define v18 (*(char (*))(void *)(sr_frame_1401718E0 + 104)) /* [rsp+68h] */
#define v19 (*(char (*))(void *)(sr_frame_1401718E0 + 105)) /* [rsp+69h] */
#define v20 (*(int (*))(void *)(sr_frame_1401718E0 + 232)) /* [rsp+E8h] */
#define v21 (*(char * (*))(void *)(sr_frame_1401718E0 + 240)) /* [rsp+F0h] */
#define v22 (*(char * (*))(void *)(sr_frame_1401718E0 + 248)) /* [rsp+F8h] */
#define v23 (*(char * (*))(void *)(sr_frame_1401718E0 + 256)) /* [rsp+100h] */
#define v24 (*(char * (*))(void *)(sr_frame_1401718E0 + 264)) /* [rsp+108h] */
#define v25 (*(__int64 (*))(void *)(sr_frame_1401718E0 + 272)) /* [rsp+110h] */

  v23 = &v18;
  v13 = *(_OWORD *)&off_140301820;
  v21 = &v18;
  v14 = off_140301830;
  v15 = a1;
  v17 = 128;
  v16 = 1;
  v20 = 0;
  v8 = off_140301820(a1, &v18, 128);
  v20 += (_DWORD)v21 - (_DWORD)v23;
  if ( v8 )
  {
    v21 = &v18;
    v9 = &v18 + v8;
  }
  else
  {
    v16 = 0;
    v21 = &v18;
    v9 = &v19;
    v18 = 0;
  }
  v22 = v9;
  v24 = v9;
  return sub_140166D20((__int64)v12, a2, a3, a4, a5); /* 0x1401719B9: the result of this call is still in rax at the exit */
}
#undef v11
#undef v12
#undef v13
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20
#undef v21
#undef v22
#undef v23
#undef v24
#undef v25

//----- (00000001401719E0) ----------------------------------------------------
__int64            sub_1401719E0(__int64 a1, int a2, int *a3, int *a4, unsigned int *a5, unsigned int a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401719E0[288];
#define v7 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 0)) /* [rsp+0h] */
#define v8 (*(_BYTE (*)[16])(void *)(sr_frame_1401719E0 + 48)) /* [rsp+30h] */
#define v9 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 64)) /* [rsp+40h] */
#define v10 (*(int (*))(void *)(sr_frame_1401719E0 + 96)) /* [rsp+60h] */
#define v11 (*(int (*))(void *)(sr_frame_1401719E0 + 232)) /* [rsp+E8h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 240)) /* [rsp+F0h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 248)) /* [rsp+F8h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 256)) /* [rsp+100h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 264)) /* [rsp+108h] */
#define v16 (*(__int64 (*))(void *)(sr_frame_1401719E0 + 272)) /* [rsp+110h] */

  v14 = a1;
  v12 = a1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v15 = a2 + a1;
  v13 = v15;
  return sub_140166D20((__int64)v8, a3, a4, a5, a6); /* 0x140171A59: the result of this call is still in rax at the exit */
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14
#undef v15
#undef v16

//----- (0000000140171AD0) ----------------------------------------------------
__int64            sub_140171AD0(char *a1, int a2, int a3, int a4, __int64 a5)
{
  int v8;
  __int64 v9;
  unsigned __int64 (           *v13)(__int64, __int64, int);
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171AD0[176];
#define v11 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 0)) /* [rsp+0h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 48)) /* [rsp+30h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 72)) /* [rsp+48h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140171AD0 + 80)) /* [rsp+50h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_140171AD0 + 96)) /* [rsp+60h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_140171AD0 + 112)) /* [rsp+70h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140171AD0 + 128)) /* [rsp+80h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 144)) /* [rsp+90h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140171AD0 + 160)) /* [rsp+A0h] */

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  v8 = sub_14020B8E4(&v12, a1, "wb");
  v9 = v12;
  v13 = sub_14016E2F0;
  if ( v8 )
    v9 = 0;
  v14 = v9;
  if ( v9 )
  {
    sub_140171BB0((__int64)&v13, a2, a3, a4, a5);
    crt_fclose(v14);
  }
  return 0; /* the function has no caller */
}
#undef v11
#undef v12
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20

//----- (0000000140171BB0) ----------------------------------------------------
__int64            sub_140171BB0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171BB0[96];
#define v6 (*(int (*))(void *)(sr_frame_140171BB0 + 0)) /* [rsp+58h] */
#define v7 (*(int (*))(void *)(sr_frame_140171BB0 + 8)) /* [rsp+60h] */
#define v8 (*(int (*))(void *)(sr_frame_140171BB0 + 16)) /* [rsp+68h] */
#define v9 (*(int (*))(void *)(sr_frame_140171BB0 + 40)) /* [rsp+80h] */
#define v10 (*(int (*))(void *)(sr_frame_140171BB0 + 48)) /* [rsp+88h] */
#define v13 (*(int (*))(void *)(sr_frame_140171BB0 + 72)) /* [rsp+A0h] */
#define v14 (*(int (*))(void *)(sr_frame_140171BB0 + 80)) /* [rsp+A8h] */

  v14 = 24;
  v13 = 1;
  v10 = 40;
  v9 = 54;
  v8 = a3 * (a2 + (a2 & 3) + 2 * a2) + 54;
  v7 = 77;
  v6 = 66;
  return sub_140176DF0(
           a1,
           -1,
           -1,
           a2,
           a3,
           a4,
           1,
           a5,
           0,
           a2 & 3,
           "11 4 22 44 44 22 444444",
           v6,
           v7,
           v8,
           0,
           0,
           v9,
           v10,
           a2,
           a3,
           v13,
           v14,
           0,
           0,
           0,
           0,
           0,
           0);
}
#undef v6
#undef v7
#undef v8
#undef v9
#undef v10
#undef v13
#undef v14

//----- (0000000140171C80) ----------------------------------------------------
__int64            sub_140171C80(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171C80[160];
#define v7 (*(__int64 (*))(void *)(sr_frame_140171C80 + 0)) /* [rsp+0h] */
#define v8 (*(_QWORD (*)[2])(void *)(sr_frame_140171C80 + 48)) /* [rsp+30h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_140171C80 + 64)) /* [rsp+40h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_140171C80 + 80)) /* [rsp+50h] */
#define v11 (*(__int128 (*))(void *)(sr_frame_140171C80 + 96)) /* [rsp+60h] */
#define v12 (*(__int128 (*))(void *)(sr_frame_140171C80 + 112)) /* [rsp+70h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_140171C80 + 128)) /* [rsp+80h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140171C80 + 144)) /* [rsp+90h] */

  v8[0] = a1;
  v8[1] = a2;
  v13 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  return sub_140171BB0((__int64)v8, a3, a4, a5, a6); /* 0x140171CEB: the result of this call is still in rax at the exit */
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13
#undef v14

//----- (0000000140171D10) ----------------------------------------------------
__int64            sub_140171D10(char *a1, int a2, int a3, int a4, __int64 a5)
{
  int v8;
  __int64 v9;
  unsigned int v10;
  unsigned __int64 (           *v13)(__int64, __int64, int);
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171D10[112];
#define v12 (*(__int64 (*))(void *)(sr_frame_140171D10 + 0)) /* [rsp+30h] */
#define v14 (*(__int64 (*))(void *)(sr_frame_140171D10 + 24)) /* [rsp+48h] */
#define v15 (*(__int128 (*))(void *)(sr_frame_140171D10 + 32)) /* [rsp+50h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_140171D10 + 48)) /* [rsp+60h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_140171D10 + 64)) /* [rsp+70h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140171D10 + 80)) /* [rsp+80h] */
#define v19 (*(__int64 (*))(void *)(sr_frame_140171D10 + 96)) /* [rsp+90h] */

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  v8 = sub_14020B8E4(&v12, a1, "wb");
  v9 = v12;
  v13 = sub_14016E2F0;
  if ( v8 )
    v9 = 0;
  v14 = v9;
  if ( !v9 )
    return 0;
  v10 = sub_140171DD0((__int64)&v13, a2, a3, a4, a5);
  crt_fclose(v14);
  return v10;
}
#undef v12
#undef v14
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19

//----- (0000000140171DD0) ----------------------------------------------------
__int64            sub_140171DD0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  _BYTE *v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171DD0[272];
#define v15 (*(__int64 (*))(void *)(sr_frame_140171DD0 + 0)) /* [rsp+0h] */
#define v16 (*(char (*)[80])(void *)(sr_frame_140171DD0 + 48)) /* [rsp+30h] */
#define v17 (*(_DWORD (*)[24])(void *)(sr_frame_140171DD0 + 128)) /* [rsp+80h] */
#define v18 (*(__int64 (*))(void *)(sr_frame_140171DD0 + 256)) /* [rsp+100h] */

  if ( !(a3 > 0 && a2 > 0 && a5) )
    return 0; /* 0x140171F2D: xor eax, eax */
  {
    v9 = (_BYTE *)sr_path_malloc(4 * a2);
    strcpy(v16, "#?RADIANCE\n# Written by stb_image_write.h\nFORMAT=32-bit_rle_rgbe\n");
    (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), v16, 65);
    v10 = sub_140158C70(v17, 128, (__int64)"EXPOSURE=          1.0000000000000\n\n-Y %d +X %d\n", a3, a2);
    (*(void (           **)(_QWORD, _DWORD *, _QWORD))a1)(*(_QWORD *)(a1 + 8), v17, v10);
    v11 = 0;
    v12 = a3 - 1;
    do
    {
      v13 = v11;
      if ( g_1449815C0 )
        v13 = v12;
      sub_1401772C0(a1, a2, a4, v9, (float *)(a5 + 4LL * a2 * a4 * v13));
      ++v11;
      --v12;
    }
    while ( v11 < a3 );
    free(v9);
  }
  return 1; /* 0x140171F16: mov eax, 1 */
}
#undef v15
#undef v16
#undef v17
#undef v18

//----- (0000000140171F50) ----------------------------------------------------
__int64            sub_140171F50(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171F50[96];
#define v7 (*(_QWORD (*)[2])(void *)(sr_frame_140171F50 + 0)) /* [rsp+30h] */
#define v8 (*(__int128 (*))(void *)(sr_frame_140171F50 + 16)) /* [rsp+40h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_140171F50 + 32)) /* [rsp+50h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_140171F50 + 48)) /* [rsp+60h] */
#define v11 (*(__int128 (*))(void *)(sr_frame_140171F50 + 64)) /* [rsp+70h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_140171F50 + 80)) /* [rsp+80h] */

  v7[0] = a1;
  v7[1] = a2;
  v12 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  return sub_140171DD0((__int64)v7, a3, a4, a5, a6);
}
#undef v7
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12

//----- (0000000140171FC0) ----------------------------------------------------
__int64            sub_140171FC0(char *a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  int v9;
  __int64 v10;
  unsigned int v11;
  unsigned __int64 (           *v14)(__int64, __int64, int);
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140171FC0[112];
#define v13 (*(__int64 (*))(void *)(sr_frame_140171FC0 + 0)) /* [rsp+30h] */
#define v15 (*(__int64 (*))(void *)(sr_frame_140171FC0 + 24)) /* [rsp+48h] */
#define v16 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 32)) /* [rsp+50h] */
#define v17 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 48)) /* [rsp+60h] */
#define v18 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 64)) /* [rsp+70h] */
#define v19 (*(__int128 (*))(void *)(sr_frame_140171FC0 + 80)) /* [rsp+80h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_140171FC0 + 96)) /* [rsp+90h] */

  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v19 = 0;
  v9 = sub_14020B8E4(&v13, a1, "wb");
  v10 = v13;
  v14 = sub_14016E2F0;
  if ( v9 )
    v10 = 0;
  v15 = v10;
  if ( !v10 )
    return 0;
  v11 = sub_140172080((__int64)&v14, a2, a3, a4, a5, a6);
  crt_fclose(v15);
  return v11;
}
#undef v13
#undef v15
#undef v16
#undef v17
#undef v18
#undef v19
#undef v20

//----- (0000000140172080) ----------------------------------------------------
__int64            sub_140172080(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int16 v7;
  int v10;
  int v11;
  int v12;
  __int64 i;
  int v14;
  __int64 v15;
  int v16;
  int v17;
  float *v18;
  __int64 v19;
  float v20;
  __int64 v21;
  unsigned int v22;
  float v23;
  float v24;
  __m128i v25;
  unsigned int v26;
  __int64 v27;
  float v28;
  __m128i v29;
  unsigned int v30;
  float v31;
  __m128i v32;
  unsigned int v33;
  __int64 v34;
  float v35;
  __m128i v36;
  unsigned int v37;
  float v38;
  __m128i v39;
  unsigned int v40;
  __int64 v41;
  float v42;
  __m128i v43;
  unsigned int v44;
  float v45;
  __m128i v46;
  unsigned int v47;
  __int64 v48;
  float v49;
  __m128i v50;
  int v51;
  float v52;
  unsigned int v53;
  __int64 v54;
  float v55;
  __m128i v56;
  unsigned int v57;
  float v58;
  __m128i v59;
  unsigned int v60;
  __int64 v61;
  float v62;
  __m128i v63;
  unsigned int v64;
  float v65;
  __m128i v66;
  int v67;
  char v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  __int64 v74;
  __int64 v75;
  int v76;
  __int64 v77;
  int k;
  __int64 v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  __int64 v88;
  float v89;
  __m128i v90;
  unsigned int v91;
  int v92;
  float v93;
  __m128i v94;
  float v95;
  __int64 v96;
  int v97;
  float v98;
  float v99;
  int v100;
  float v101;
  float v102;
  __m128i v103;
  int v104;
  float v105;
  __int64 v106;
  int v107;
  float v108;
  float v109;
  int v110;
  float v111;
  float v112;
  float v113;
  __int64 v114;
  int v115;
  int v116;
  int v117;
  int v118;
  __int64 v119;
  __int64 v120;
  float v121;
  float v122;
  float v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float v137;
  float v138;
  float v139;
  float v140;
  float v141;
  float v142;
  int v143;
  int j;
  __int64 v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  __int64 v154;
  float v155;
  __m128i v156;
  unsigned int v157;
  int v158;
  float v159;
  __m128i v160;
  float v161;
  __int64 v162;
  int v163;
  float v164;
  float v165;
  int v166;
  float v167;
  float v168;
  __m128i v169;
  int v170;
  float v171;
  __int64 v172;
  int v173;
  float v174;
  float v175;
  int v176;
  float v177;
  float v178;
  float v179;
  __int64 v180;
  int v181;
  __int64 v182;
  int v183;
  unsigned __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v190;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140172080[8416];
#define v191 (*(char (*)[8])(void *)(sr_frame_140172080 + 0)) /* [rsp+30h] */
#define v192 (*(int (*))(void *)(sr_frame_140172080 + 8)) /* [rsp+38h] */
#define v193 (*(int (*))(void *)(sr_frame_140172080 + 12)) /* [rsp+3Ch] */
#define v194 (*(int (*))(void *)(sr_frame_140172080 + 16)) /* [rsp+40h] */
#define v195 (*(int (*))(void *)(sr_frame_140172080 + 20)) /* [rsp+44h] */
#define v196 (*(int (*))(void *)(sr_frame_140172080 + 24)) /* [rsp+48h] */
#define v197 (*(int (*))(void *)(sr_frame_140172080 + 28)) /* [rsp+4Ch] */
#define v198 (*(int (*))(void *)(sr_frame_140172080 + 32)) /* [rsp+50h] */
#define v199 (*(int (*))(void *)(sr_frame_140172080 + 36)) /* [rsp+54h] */
#define v200 (*(int (*))(void *)(sr_frame_140172080 + 40)) /* [rsp+58h] */
#define v201 (*(int (*))(void *)(sr_frame_140172080 + 44)) /* [rsp+5Ch] */
#define v202 (*(__int64 (*))(void *)(sr_frame_140172080 + 4384)) /* [rsp+1150h] */
#define v203 (*(_DWORD (*)[64])(void *)(sr_frame_140172080 + 4400)) /* [rsp+1160h] */
#define v204 (*(_DWORD (*)[64])(void *)(sr_frame_140172080 + 4656)) /* [rsp+1260h] */
#define v205 (*(_DWORD (*)[64])(void *)(sr_frame_140172080 + 4912)) /* [rsp+1360h] */
#define v206 (*(_DWORD (*)[512])(void *)(sr_frame_140172080 + 5168)) /* [rsp+1460h] */
#define v207 (*(_DWORD (*)[8])(void *)(sr_frame_140172080 + 7216)) /* [rsp+1C60h] */
#define v208 (*(char (*)[480])(void *)(sr_frame_140172080 + 7248)) /* [rsp+1C80h] */
#define v209 (*(char (*)[32])(void *)(sr_frame_140172080 + 7728)) /* [rsp+1E60h] */
#define v210 (*(char (*)[480])(void *)(sr_frame_140172080 + 7760)) /* [rsp+1E80h] */
#define v211 (*(int (*))(void *)(sr_frame_140172080 + 8240)) /* [rsp+2060h] */
#define v212 (*(char (*))(void *)(sr_frame_140172080 + 8244)) /* [rsp+2064h] */
#define v213 (*(char (*))(void *)(sr_frame_140172080 + 8245)) /* [rsp+2065h] */
#define v214 (*(char (*))(void *)(sr_frame_140172080 + 8246)) /* [rsp+2066h] */
#define v215 (*(char (*))(void *)(sr_frame_140172080 + 8247)) /* [rsp+2067h] */
#define v216 (*(char (*))(void *)(sr_frame_140172080 + 8248)) /* [rsp+2068h] */
#define v217 (*(__int16 (*))(void *)(sr_frame_140172080 + 8249)) /* [rsp+2069h] */
#define v218 (*(char (*))(void *)(sr_frame_140172080 + 8251)) /* [rsp+206Bh] */
#define v219 (*(int (*))(void *)(sr_frame_140172080 + 8252)) /* [rsp+206Ch] */
#define v220 (*(int (*))(void *)(sr_frame_140172080 + 8256)) /* [rsp+2070h] */
#define v221 (*(int (*))(void *)(sr_frame_140172080 + 8260)) /* [rsp+2074h] */
#define v222 (*(_BYTE (*)[64])(void *)(sr_frame_140172080 + 8272)) /* [rsp+2080h] */
#define v223 (*(_BYTE (*)[64])(void *)(sr_frame_140172080 + 8336)) /* [rsp+20C0h] */
#define v224 (*(__int64 (*))(void *)(sr_frame_140172080 + 8400)) /* [rsp+2100h] */

  v192 = a3;
  v7 = a3;
  v202 = a1;
  if ( !(a5 && a2 && a3 && (unsigned int)(a4 - 1) <= 3) )
    return 0; /* 0x1401737CD: xor eax, eax */
  {
    v10 = 90;
    if ( a6 )
      v10 = a6;
    if ( v10 >= 1 )
    {
      v12 = v10;
      if ( v10 > 100 )
        v12 = 100;
      if ( v12 >= 50 )
        v11 = 2 * (100 - v12);
      else
        v11 = 5000 / v12;
    }
    else
    {
      v11 = 5000;
    }
    for ( i = 0; i < 64; ++i )
    {
      v14 = (v11 * dword_14026F9D0[i] + 50) / 100;
      if ( v14 >= 1 )
      {
        if ( v14 > 255 )
          LOBYTE(v14) = -1;
      }
      else
      {
        LOBYTE(v14) = 1;
      }
      v15 = byte_14026E780[i];
      v16 = v11 * dword_14026FAD0[i];
      v222[v15] = v14;
      v17 = (v16 + 50) / 100;
      if ( v17 >= 1 )
      {
        if ( v17 > 255 )
          LOBYTE(v17) = -1;
      }
      else
      {
        LOBYTE(v17) = 1;
      }
      v223[v15] = v17;
    }
    v18 = (float *)&unk_14026E8E8;
    v19 = 0;
    do
    {
      v20 = *v18;
      v21 = byte_14026E780[v19 + 1];
      v22 = (unsigned __int8)v222[v21];
      v23 = (float)(unsigned __int8)v223[byte_14026E780[v19]];
      *(float *)&v204[v19] = 0.35355338 / (float)((float)(unsigned __int8)v222[byte_14026E780[v19]] * *v18);
      v24 = 0.35355338 / (float)(v23 * v20);
      v25 = _mm_cvtsi32_si128(v22);
      v26 = (unsigned __int8)v223[v21];
      v27 = byte_14026E780[v19 + 2];
      *(float *)&v205[v19] = v24;
      v28 = 0.25489777 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v25), f32)[0] * v20);
      v29 = _mm_cvtsi32_si128(v26);
      v30 = (unsigned __int8)v222[v27];
      *(float *)&v204[v19 + 1] = v28;
      v31 = 0.25489777 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v29), f32)[0] * v20);
      v32 = _mm_cvtsi32_si128(v30);
      v33 = (unsigned __int8)v223[v27];
      v34 = byte_14026E780[v19 + 3];
      *(float *)&v205[v19 + 1] = v31;
      v35 = 0.27059805 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v32), f32)[0] * v20);
      v36 = _mm_cvtsi32_si128(v33);
      v37 = (unsigned __int8)v222[v34];
      *(float *)&v204[v19 + 2] = v35;
      v38 = 0.27059805 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v36), f32)[0] * v20);
      v39 = _mm_cvtsi32_si128(v37);
      v40 = (unsigned __int8)v223[v34];
      v41 = byte_14026E780[v19 + 4];
      *(float *)&v205[v19 + 2] = v38;
      v42 = 0.30067247 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v39), f32)[0] * v20);
      v43 = _mm_cvtsi32_si128(v40);
      v44 = (unsigned __int8)v222[v41];
      *(float *)&v204[v19 + 3] = v42;
      v45 = 0.30067247 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v43), f32)[0] * v20);
      v46 = _mm_cvtsi32_si128(v44);
      v47 = (unsigned __int8)v223[v41];
      v48 = byte_14026E780[v19 + 5];
      *(float *)&v205[v19 + 3] = v45;
      v49 = 0.35355338 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v46), f32)[0] * v20);
      v50 = _mm_cvtsi32_si128(v47);
      v51 = (unsigned __int8)v222[v48];
      *(float *)&v204[v19 + 4] = v49;
      v52 = 0.35355338 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v50), f32)[0] * v20);
      *(float *)SR_VEC_LANES(128, v50, i32) = (float)v51;
      *(float *)&v205[v19 + 4] = v52;
      v53 = (unsigned __int8)v223[v48];
      v54 = byte_14026E780[v19 + 6];
      v19 += 8;
      v55 = 0.4499881 / (float)(*(float *)SR_VEC_LANES(128, v50, i32) * v20);
      ++v18;
      v56 = _mm_cvtsi32_si128(v53);
      v57 = (unsigned __int8)v222[v54];
      *(float *)&v203[v19 + 61] = v55;
      v58 = 0.4499881 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v56), f32)[0] * v20);
      v59 = _mm_cvtsi32_si128(v57);
      v60 = (unsigned __int8)v223[v54];
      v61 = (unsigned __int8)byte_14026E768[v19 + 23];
      *(float *)&v204[v19 + 61] = v58;
      v62 = 0.65328151 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v59), f32)[0] * v20);
      v63 = _mm_cvtsi32_si128(v60);
      v64 = (unsigned __int8)v222[v61];
      *(float *)&v203[v19 + 62] = v62;
      v65 = 0.65328151 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v63), f32)[0] * v20);
      v66 = _mm_cvtsi32_si128(v64);
      v67 = (unsigned __int8)v223[v61];
      *(float *)&v204[v19 + 62] = v65;
      *(float *)&v203[v19 + 63] = 1.2814577 / (float)(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v66), f32)[0] * v20);
      *(float *)&v204[v19 + 63] = 1.2814577 / (float)((float)v67 * v20);
    }
    while ( (__int64)v18 < (__int64)"JFIF" );
    v213 = HIBYTE(v7);
    v215 = BYTE1(a2);
    v68 = 17;
    if ( v10 <= 90 )
      v68 = 34;
    v69 = *(_QWORD *)(a1 + 8);
    v218 = v68;
    v211 = 285262079;
    v212 = 8;
    v214 = v7;
    v216 = a2;
    v217 = 259;
    v219 = 17891840;
    v220 = -16707325;
    v221 = 10617284;
    (*(void (           **)(__int64, void *, __int64,      char *))a1)(v69, &unk_14026FBD0, 25, "JFIF");
    (*(void (           **)(_QWORD, _BYTE *, __int64))a1)(*(_QWORD *)(a1 + 8), v222, 64);
    v70 = *(_QWORD *)(a1 + 8);
    v191[0] = 1;
    (*(void (           **)(__int64, char *, __int64))a1)(v70, v191, 1);
    (*(void (           **)(_QWORD, _BYTE *, __int64))a1)(*(_QWORD *)(a1 + 8), v223, 64);
    (*(void (           **)(_QWORD, int *, __int64))a1)(*(_QWORD *)(a1 + 8), &v211, 24);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E7C1, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E7D8, 12);
    v71 = *(_QWORD *)(a1 + 8);
    v191[0] = 16;
    (*(void (           **)(__int64, char *, __int64))a1)(v71, v191, 1);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E7E9, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E800, 162);
    v72 = *(_QWORD *)(a1 + 8);
    v191[0] = 1;
    (*(void (           **)(__int64, char *, __int64))a1)(v72, v191, 1);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E8A9, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E8C0, 12);
    v191[0] = 17;
    (*(void (           **)(_QWORD, char *, __int64))a1)(*(_QWORD *)(a1 + 8), v191, 1);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E8D1, 16);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E910, 162);
    (*(void (           **)(_QWORD, void *, __int64))a1)(*(_QWORD *)(a1 + 8), &unk_14026E9B8, 14);
    v73 = v192;
    v197 = 0;
    v198 = 0;
    v199 = 0;
    v74 = 0;
    v194 = 0;
    v75 = a5 + (a4 > 2);
    v193 = 0;
    if ( a4 > 2 )
      v74 = 2;
    v76 = 0;
    v77 = a5 + v74;
    v195 = 0;
    if ( v10 > 90 )
    {
      if ( v192 > 0 )
      {
        do
        {
          if ( a2 > 0 )
          {
            j = 8;
            v196 = 8;
            do
            {
              v145 = 0;
              v200 = j;
              v146 = v76;
              if ( !sr_export_ofsub32((uint32_t)v76, (uint32_t)v76 + 8u) )
              {
                do
                {
                  v147 = v146;
                  v148 = j - 8;
                  if ( v146 >= v73 )
                    v147 = v73 - 1;
                  if ( g_1449815C0 )
                    v147 = v73 - v147 - 1;
                  v149 = a2 * v147;
                  if ( v148 < j )
                  {
                    v150 = j - 6;
                    v151 = j - 3;
                    v152 = a2 - 1;
                    do
                    {
                      v153 = v148;
                      if ( v148 >= a2 )
                      {
                        v152 = a2 - 1;
                        v153 = a2 - 1;
                      }
                      v154 = a4 * (v149 + v153);
                      v155 = (float)*(unsigned __int8 *)(v154 + a5);
                      v156 = _mm_cvtsi32_si128(*(unsigned __int8 *)(v154 + v75));
                      v157 = *(unsigned __int8 *)(v154 + v77);
                      v158 = v152;
                      v159 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v156), f32)[0];
                      v160 = _mm_cvtsi32_si128(v157);
                      if ( v150 - 1 < a2 )
                        v158 = v150 - 1;
                      v161 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v160), f32)[0];
                      v162 = a4 * (v158 + v149);
                      v163 = *(unsigned __int8 *)(v162 + a5);
                      *(float *)&v207[v145] = (float)((float)((float)(v159 * 0.58700001) + (float)(v155 * 0.29899999))
                                                    + (float)(v161 * 0.114))
                                            - 128.0;
                      *(float *)&v203[v145] = (float)(v161 * 0.5)
                                            - (float)((float)(v155 * 0.16874) + (float)(v159 * 0.33126));
                      *(float *)&v206[v145] = (float)((float)(v155 * 0.5) - (float)(v159 * 0.41869))
                                            - (float)(v161 * 0.081309997);
                      v164 = (float)*(unsigned __int8 *)(v162 + v77);
                      v165 = (float)*(unsigned __int8 *)(v162 + v75);
                      *(float *)&v207[v145 + 1] = (float)((float)((float)(v165 * 0.58700001)
                                                                + (float)((float)v163 * 0.29899999))
                                                        + (float)(v164 * 0.114))
                                                - 128.0;
                      *(float *)&v203[v145 + 1] = (float)(v164 * 0.5)
                                                - (float)((float)((float)v163 * 0.16874) + (float)(v165 * 0.33126));
                      *(float *)&v206[v145 + 1] = (float)((float)((float)v163 * 0.5) - (float)(v165 * 0.41869))
                                                - (float)(v164 * 0.081309997);
                      if ( v150 >= a2 )
                      {
                        v166 = v152;
                      }
                      else
                      {
                        v166 = v150;
                        v152 = a2 - 1;
                      }
                      v167 = (float)*(unsigned __int8 *)(a4 * (v149 + v166) + a5);
                      v168 = (float)*(unsigned __int8 *)(a4 * (v149 + v166) + v75);
                      v169 = _mm_cvtsi32_si128(*(unsigned __int8 *)(a4 * (v149 + v166) + v77));
                      v170 = v150 + 1;
                      if ( v150 + 1 >= a2 )
                        v170 = v152;
                      v148 += 4;
                      v171 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v169), f32)[0];
                      v150 += 4;
                      v172 = a4 * (v149 + v170);
                      v173 = *(unsigned __int8 *)(v172 + a5);
                      *(float *)&v207[v145 + 2] = (float)((float)((float)(v168 * 0.58700001) + (float)(v167 * 0.29899999))
                                                        + (float)(v171 * 0.114))
                                                - 128.0;
                      *(float *)&v203[v145 + 2] = (float)(v171 * 0.5)
                                                - (float)((float)(v167 * 0.16874) + (float)(v168 * 0.33126));
                      *(float *)&v206[v145 + 2] = (float)((float)(v167 * 0.5) - (float)(v168 * 0.41869))
                                                - (float)(v171 * 0.081309997);
                      v174 = (float)*(unsigned __int8 *)(v172 + v75);
                      v175 = (float)*(unsigned __int8 *)(v172 + v77);
                      *(float *)&v207[v145 + 3] = (float)((float)((float)(v174 * 0.58700001)
                                                                + (float)((float)v173 * 0.29899999))
                                                        + (float)(v175 * 0.114))
                                                - 128.0;
                      *(float *)&v203[v145 + 3] = (float)(v175 * 0.5)
                                                - (float)((float)((float)v173 * 0.16874) + (float)(v174 * 0.33126));
                      *(float *)&v206[v145 + 3] = (float)((float)((float)v173 * 0.5) - (float)(v174 * 0.41869))
                                                - (float)(v175 * 0.081309997);
                      v145 += 4;
                    }
                    while ( v148 < v151 );
                    for ( j = v196; v148 < j; ++v145 )
                    {
                      v176 = v148;
                      if ( v148 >= a2 )
                        v176 = v152;
                      ++v148;
                      v177 = (float)*(unsigned __int8 *)(a4 * (v149 + v176) + a5);
                      v178 = (float)*(unsigned __int8 *)(a4 * (v149 + v176) + v75);
                      v179 = (float)*(unsigned __int8 *)(a4 * (v149 + v176) + v77);
                      *(float *)&v207[v145] = (float)((float)((float)(v178 * 0.58700001) + (float)(v177 * 0.29899999))
                                                    + (float)(v179 * 0.114))
                                            - 128.0;
                      *(float *)&v203[v145] = (float)(v179 * 0.5)
                                            - (float)((float)(v177 * 0.16874) + (float)(v178 * 0.33126));
                      *(float *)&v206[v145] = (float)((float)(v177 * 0.5) - (float)(v178 * 0.41869))
                                            - (float)(v179 * 0.081309997);
                    }
                    v73 = v192;
                  }
                  ++v146;
                }
                while ( v146 < v195 + 8 );
              }
              v180 = v202;
              v197 = CMFCVisualManager__OnDrawTab(
                       v202,
                       &v194,
                       &v193,
                       (__int64)v207,
                       8,
                       (__int64)v204,
                       v197,
                       word_14026E9D0,
                       word_14026F1D0);
              v198 = CMFCVisualManager__OnDrawTab(
                       v180,
                       &v194,
                       &v193,
                       (__int64)v203,
                       8,
                       (__int64)v205,
                       v198,
                       word_14026EDD0,
                       word_14026F5D0);
              v181 = CMFCVisualManager__OnDrawTab(
                       v180,
                       &v194,
                       &v193,
                       (__int64)v206,
                       8,
                       (__int64)v205,
                       v199,
                       word_14026EDD0,
                       word_14026F5D0);
              v73 = v192;
              j += 8;
              v76 = v195;
              v199 = v181;
              v196 = j;
            }
            while ( v200 < a2 );
          }
          v76 += 8;
          v195 = v76;
        }
        while ( v76 < v73 );
      }
    }
    else if ( v192 > 0 )
    {
      do
      {
        if ( a2 > 0 )
        {
          k = 16;
          v196 = 16;
          do
          {
            v79 = 0;
            v201 = k;
            v80 = v76;
            if ( !sr_export_ofsub32((uint32_t)v76, (uint32_t)v76 + 16u) )
            {
              do
              {
                v81 = v80;
                v82 = k - 16;
                if ( v80 >= v73 )
                  v81 = v73 - 1;
                if ( g_1449815C0 )
                  v81 = v73 - v81 - 1;
                v83 = a2 * v81;
                if ( v82 < k )
                {
                  v84 = k - 14;
                  v85 = k - 3;
                  v86 = a2 - 1;
                  do
                  {
                    v87 = v82;
                    if ( v82 >= a2 )
                    {
                      v86 = a2 - 1;
                      v87 = a2 - 1;
                    }
                    v88 = a4 * (v83 + v87);
                    v89 = (float)*(unsigned __int8 *)(v88 + a5);
                    v90 = _mm_cvtsi32_si128(*(unsigned __int8 *)(v88 + v75));
                    v91 = *(unsigned __int8 *)(v88 + v77);
                    v92 = v86;
                    v93 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v90), f32)[0];
                    v94 = _mm_cvtsi32_si128(v91);
                    if ( v84 - 1 < a2 )
                      v92 = v84 - 1;
                    v95 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v94), f32)[0];
                    v96 = a4 * (v83 + v92);
                    v97 = *(unsigned __int8 *)(v96 + a5);
                    *(float *)&v207[v79] = (float)((float)((float)(v89 * 0.29899999) + (float)(v93 * 0.58700001))
                                                 + (float)(v95 * 0.114))
                                         - 128.0;
                    *(float *)&v206[v79] = (float)(v95 * 0.5) - (float)((float)(v89 * 0.16874) + (float)(v93 * 0.33126));
                    *(float *)&v206[v79 + 256] = (float)((float)(v89 * 0.5) - (float)(v93 * 0.41869))
                                               - (float)(v95 * 0.081309997);
                    v98 = (float)*(unsigned __int8 *)(v96 + v77);
                    v99 = (float)*(unsigned __int8 *)(v96 + v75);
                    *(float *)&v207[v79 + 1] = (float)((float)((float)((float)v97 * 0.29899999)
                                                             + (float)(v99 * 0.58700001))
                                                     + (float)(v98 * 0.114))
                                             - 128.0;
                    *(float *)&v206[v79 + 1] = (float)(v98 * 0.5)
                                             - (float)((float)((float)v97 * 0.16874) + (float)(v99 * 0.33126));
                    *(float *)&v206[v79 + 257] = (float)((float)((float)v97 * 0.5) - (float)(v99 * 0.41869))
                                               - (float)(v98 * 0.081309997);
                    if ( v84 >= a2 )
                    {
                      v100 = v86;
                    }
                    else
                    {
                      v100 = v84;
                      v86 = a2 - 1;
                    }
                    v101 = (float)*(unsigned __int8 *)(a4 * (v83 + v100) + a5);
                    v102 = (float)*(unsigned __int8 *)(a4 * (v83 + v100) + v75);
                    v103 = _mm_cvtsi32_si128(*(unsigned __int8 *)(a4 * (v83 + v100) + v77));
                    v104 = v84 + 1;
                    if ( v84 + 1 >= a2 )
                      v104 = v86;
                    v82 += 4;
                    v105 = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v103), f32)[0];
                    v84 += 4;
                    v106 = a4 * (v83 + v104);
                    v107 = *(unsigned __int8 *)(v106 + a5);
                    *(float *)&v207[v79 + 2] = (float)((float)((float)(v101 * 0.29899999) + (float)(v102 * 0.58700001))
                                                     + (float)(v105 * 0.114))
                                             - 128.0;
                    *(float *)&v206[v79 + 2] = (float)(v105 * 0.5)
                                             - (float)((float)(v101 * 0.16874) + (float)(v102 * 0.33126));
                    *(float *)&v206[v79 + 258] = (float)((float)(v101 * 0.5) - (float)(v102 * 0.41869))
                                               - (float)(v105 * 0.081309997);
                    v108 = (float)*(unsigned __int8 *)(v106 + v75);
                    v109 = (float)*(unsigned __int8 *)(v106 + v77);
                    *(float *)&v207[v79 + 3] = (float)((float)((float)((float)v107 * 0.29899999)
                                                             + (float)(v108 * 0.58700001))
                                                     + (float)(v109 * 0.114))
                                             - 128.0;
                    *(float *)&v206[v79 + 3] = (float)(v109 * 0.5)
                                             - (float)((float)((float)v107 * 0.16874) + (float)(v108 * 0.33126));
                    *(float *)&v206[v79 + 259] = (float)((float)((float)v107 * 0.5) - (float)(v108 * 0.41869))
                                               - (float)(v109 * 0.081309997);
                    v79 += 4;
                  }
                  while ( v82 < v85 );
                  for ( k = v196; v82 < k; ++v79 )
                  {
                    v110 = v82;
                    if ( v82 >= a2 )
                      v110 = v86;
                    ++v82;
                    v111 = (float)*(unsigned __int8 *)(a4 * (v83 + v110) + a5);
                    v112 = (float)*(unsigned __int8 *)(a4 * (v83 + v110) + v75);
                    v113 = (float)*(unsigned __int8 *)(a4 * (v83 + v110) + v77);
                    *(float *)&v207[v79] = (float)((float)((float)(v111 * 0.29899999) + (float)(v112 * 0.58700001))
                                                 + (float)(v113 * 0.114))
                                         - 128.0;
                    *(float *)&v206[v79] = (float)(v113 * 0.5)
                                         - (float)((float)(v111 * 0.16874) + (float)(v112 * 0.33126));
                    *(float *)&v206[v79 + 256] = (float)((float)(v111 * 0.5) - (float)(v112 * 0.41869))
                                               - (float)(v113 * 0.081309997);
                  }
                  v73 = v192;
                }
                ++v80;
              }
              while ( v80 < v195 + 16 );
            }
            v114 = v202;
            v115 = CMFCVisualManager__OnDrawTab(
                     v202,
                     &v194,
                     &v193,
                     (__int64)v207,
                     16,
                     (__int64)v204,
                     v197,
                     word_14026E9D0,
                     word_14026F1D0);
            v116 = CMFCVisualManager__OnDrawTab(
                     v114,
                     &v194,
                     &v193,
                     (__int64)v208,
                     16,
                     (__int64)v204,
                     v115,
                     word_14026E9D0,
                     word_14026F1D0);
            v117 = CMFCVisualManager__OnDrawTab(
                     v114,
                     &v194,
                     &v193,
                     (__int64)v209,
                     16,
                     (__int64)v204,
                     v116,
                     word_14026E9D0,
                     word_14026F1D0);
            v118 = CMFCVisualManager__OnDrawTab(
                     v114,
                     &v194,
                     &v193,
                     (__int64)v210,
                     16,
                     (__int64)v204,
                     v117,
                     word_14026E9D0,
                     word_14026F1D0);
            v119 = 0;
            v197 = v118;
            v120 = 0;
            do
            {
              v121 = (float)(*(float *)&v206[v120 + 273] + *(float *)&v206[v120 + 272])
                   + (float)(*(float *)&v206[v120 + 257] + *(float *)&v206[v120 + 256]);
              v122 = *(float *)&v206[v120 + 3] + *(float *)&v206[v120 + 2];
              *(float *)&v203[v119] = (float)((float)(*(float *)&v206[v120 + 17] + *(float *)&v206[v120 + 16])
                                            + (float)(*(float *)&v206[v120 + 1] + *(float *)&v206[v120]))
                                    * 0.25;
              v123 = (float)(*(float *)&v206[v120 + 19] + *(float *)&v206[v120 + 18]) + v122;
              *(float *)&v207[v119] = v121 * 0.25;
              v124 = (float)(*(float *)&v206[v120 + 275] + *(float *)&v206[v120 + 274])
                   + (float)(*(float *)&v206[v120 + 259] + *(float *)&v206[v120 + 258]);
              *(float *)&v203[v119 + 1] = v123 * 0.25;
              v125 = (float)(*(float *)&v206[v120 + 21] + *(float *)&v206[v120 + 20])
                   + (float)(*(float *)&v206[v120 + 4] + *(float *)&v206[v120 + 5]);
              *(float *)&v207[v119 + 1] = v124 * 0.25;
              v126 = (float)(*(float *)&v206[v120 + 277] + *(float *)&v206[v120 + 276])
                   + (float)(*(float *)&v206[v120 + 260] + *(float *)&v206[v120 + 261]);
              *(float *)&v203[v119 + 2] = v125 * 0.25;
              v127 = (float)(*(float *)&v206[v120 + 23] + *(float *)&v206[v120 + 22])
                   + (float)(*(float *)&v206[v120 + 6] + *(float *)&v206[v120 + 7]);
              *(float *)&v207[v119 + 2] = v126 * 0.25;
              v128 = (float)(*(float *)&v206[v120 + 279] + *(float *)&v206[v120 + 278])
                   + (float)(*(float *)&v206[v120 + 262] + *(float *)&v206[v120 + 263]);
              *(float *)&v203[v119 + 3] = v127 * 0.25;
              v129 = (float)(*(float *)&v206[v120 + 25] + *(float *)&v206[v120 + 24])
                   + (float)(*(float *)&v206[v120 + 8] + *(float *)&v206[v120 + 9]);
              *(float *)&v207[v119 + 3] = v128 * 0.25;
              v130 = (float)(*(float *)&v206[v120 + 281] + *(float *)&v206[v120 + 280])
                   + (float)(*(float *)&v206[v120 + 264] + *(float *)&v206[v120 + 265]);
              *(float *)&v203[v119 + 4] = v129 * 0.25;
              v131 = (float)(*(float *)&v206[v120 + 27] + *(float *)&v206[v120 + 26])
                   + (float)(*(float *)&v206[v120 + 10] + *(float *)&v206[v120 + 11]);
              *(float *)&v207[v119 + 4] = v130 * 0.25;
              v132 = *(float *)&v206[v120 + 283] + *(float *)&v206[v120 + 282];
              v133 = *(float *)&v206[v120 + 266] + *(float *)&v206[v120 + 267];
              *(float *)&v203[v119 + 5] = v131 * 0.25;
              v134 = v132 + v133;
              v135 = (float)(*(float *)&v206[v120 + 29] + *(float *)&v206[v120 + 28])
                   + (float)(*(float *)&v206[v120 + 12] + *(float *)&v206[v120 + 13]);
              v136 = *(float *)&v206[v120 + 268] + *(float *)&v206[v120 + 269];
              *(float *)&v207[v119 + 5] = v134 * 0.25;
              v137 = (float)(*(float *)&v206[v120 + 285] + *(float *)&v206[v120 + 284]) + v136;
              *(float *)&v203[v119 + 6] = v135 * 0.25;
              v138 = *(float *)&v206[v120 + 14] + *(float *)&v206[v120 + 15];
              v139 = *(float *)&v206[v120 + 31] + *(float *)&v206[v120 + 30];
              *(float *)&v207[v119 + 6] = v137 * 0.25;
              v140 = v139 + v138;
              v141 = *(float *)&v206[v120 + 287] + *(float *)&v206[v120 + 286];
              v142 = *(float *)&v206[v120 + 270] + *(float *)&v206[v120 + 271];
              v120 += 32;
              *(float *)&v203[v119 + 7] = v140 * 0.25;
              *(float *)&v207[v119 + 7] = (float)(v141 + v142) * 0.25;
              v119 += 8;
            }
            while ( v120 < 256 );
            v198 = CMFCVisualManager__OnDrawTab(
                     v114,
                     &v194,
                     &v193,
                     (__int64)v203,
                     8,
                     (__int64)v205,
                     v198,
                     word_14026EDD0,
                     word_14026F5D0);
            v143 = CMFCVisualManager__OnDrawTab(
                     v114,
                     &v194,
                     &v193,
                     (__int64)v207,
                     8,
                     (__int64)v205,
                     v199,
                     word_14026EDD0,
                     word_14026F5D0);
            v73 = v192;
            k += 16;
            v76 = v195;
            v199 = v143;
            v196 = k;
          }
          while ( v201 < a2 );
        }
        v76 += 16;
        v195 = v76;
      }
      while ( v76 < v73 );
    }
    v182 = v202;
    v183 = v194 | (127 << (24 - (v193 + 7)));
    if ( v193 + 7 >= 8 )
    {
      v184 = (unsigned __int64)(unsigned int)(v193 + 7) >> 3;
      do
      {
        v185 = *(_QWORD *)(v182 + 8);
        v191[0] = BYTE2(v183);
        (*(void (           **)(__int64, char *, __int64))v182)(v185, v191, 1);
        if ( BYTE2(v183) == 0xFF )
        {
          v186 = *(_QWORD *)(v182 + 8);
          v191[0] = 0;
          (*(void (           **)(__int64, char *, __int64))v182)(v186, v191, 1);
        }
        v183 <<= 8;
        --v184;
      }
      while ( v184 );
    }
    v187 = *(_QWORD *)(v182 + 8);
    v191[0] = -1;
    (*(void (           **)(__int64, char *, __int64))v182)(v187, v191, 1);
    v188 = *(_QWORD *)(v182 + 8);
    v191[0] = -39;
    (*(void (           **)(__int64, char *, __int64))v182)(v188, v191, 1);
  }
  return 1; /* 0x1401737C6: mov eax, 1 */
}
#undef v191
#undef v192
#undef v193
#undef v194
#undef v195
#undef v196
#undef v197
#undef v198
#undef v199
#undef v200
#undef v201
#undef v202
#undef v203
#undef v204
#undef v205
#undef v206
#undef v207
#undef v208
#undef v209
#undef v210
#undef v211
#undef v212
#undef v213
#undef v214
#undef v215
#undef v216
#undef v217
#undef v218
#undef v219
#undef v220
#undef v221
#undef v222
#undef v223
#undef v224

//----- (00000001401737F0) ----------------------------------------------------
__int64            sub_1401737F0(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401737F0[96];
#define v8 (*(_QWORD (*)[2])(void *)(sr_frame_1401737F0 + 0)) /* [rsp+30h] */
#define v9 (*(__int128 (*))(void *)(sr_frame_1401737F0 + 16)) /* [rsp+40h] */
#define v10 (*(__int128 (*))(void *)(sr_frame_1401737F0 + 32)) /* [rsp+50h] */
#define v11 (*(__int128 (*))(void *)(sr_frame_1401737F0 + 48)) /* [rsp+60h] */
#define v12 (*(__int128 (*))(void *)(sr_frame_1401737F0 + 64)) /* [rsp+70h] */
#define v13 (*(__int64 (*))(void *)(sr_frame_1401737F0 + 80)) /* [rsp+80h] */

  v8[0] = a1;
  v8[1] = a2;
  v13 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  return sub_140172080((__int64)v8, a3, a4, a5, a6, a7);
}
#undef v8
#undef v9
#undef v10
#undef v11
#undef v12
#undef v13

//----- (0000000140173860) ----------------------------------------------------
__int64            sub_140173860(char *a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  void *v7;
  int v8;
  __int64 v9;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140173860[16];
#define v11 (*(int (*))(void *)(sr_frame_140173860 + 0)) /* [rsp+30h] */
#define v12 (*(__int64 (*))(void *)(sr_frame_140173860 + 8)) /* [rsp+38h] */

  v7 = (void *)sub_140173990(a5, a6, a2, a3, a4, (__int64)&v11);
  if ( !v7 )
    return 0;
  v8 = sub_14020B8E4(&v12, a1, "wb");
  v9 = v12;
  if ( v8 )
    v9 = 0;
  v12 = v9;
  if ( !v9 )
  {
    free(v7);
    return 0;
  }
  crt_fread((__int64)v7, 1, v11, v9);
  crt_fclose(v9);
  free(v7);
  return 1;
}
#undef v11
#undef v12

//----- (0000000140173910) ----------------------------------------------------
__int64            sub_140173910(
        void (           *a1)(__int64, __int64, _QWORD),
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7)
{
  __int64 result;
  void *v10;
  _DWORD v11[6];

  result = sub_140173990(a6, a7, a3, a4, a5, (__int64)v11);
  v10 = (void *)result;
  if ( result )
  {
    a1(a2, result, v11[0]);
    free(v10);
    return 1;
  }
  return result;
}

//----- (0000000140173990) ----------------------------------------------------
__int64            sub_140173990(__int64 a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  __m128i *v11;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __m128i v21;
  __m128i v22;
  __m128i v23;
  __m128i v24;
  __m128i v25;
  __m128i v26;
  __m128i v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  _BYTE *v33;
  _BYTE *v34;
  __m128i *v35;
  unsigned __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int *v41;
  __int64 v42;
  unsigned int v43;
  unsigned int v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  unsigned int v48;
  unsigned int v49;
  unsigned int v50;
  unsigned int v51;
  unsigned int v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  unsigned int v59;
  int v60;
  unsigned __int64 v61;
  unsigned int v62;
  unsigned __int64 v63;
  int v64;
  int v65;
  unsigned int v66;
  unsigned int v67;
  int v68;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140173990[176];
#define v69 (*(__int64 (*))(void *)(sr_frame_140173990 + 0)) /* [rsp+0h] */
#define v70 (*(int (*))(void *)(sr_frame_140173990 + 64)) /* [rsp+40h] */
#define v71 (*(int (*))(void *)(sr_frame_140173990 + 68)) /* [rsp+44h] */
#define v72 (*(int (*))(void *)(sr_frame_140173990 + 72)) /* [rsp+48h] */
#define v73 (*(int (*))(void *)(sr_frame_140173990 + 76)) /* [rsp+4Ch] */
#define v74 (*(int (*))(void *)(sr_frame_140173990 + 80)) /* [rsp+50h] */
#define v75 (*(int (*))(void *)(sr_frame_140173990 + 84)) /* [rsp+54h] */
#define v76 (*(__int64 (*))(void *)(sr_frame_140173990 + 88)) /* [rsp+58h] */
#define v77 (*(_BYTE * (*))(void *)(sr_frame_140173990 + 96)) /* [rsp+60h] */
#define Block (*(void * (*))(void *)(sr_frame_140173990 + 104)) /* [rsp+68h] */
#define v79 (*(__int64 (*))(void *)(sr_frame_140173990 + 112)) /* [rsp+70h] */
#define v80 (*(__int64 (*))(void *)(sr_frame_140173990 + 120)) /* [rsp+78h] */
#define si128 (*(__m128i (*))(void *)(sr_frame_140173990 + 128)) /* [rsp+80h] */
#define v82 (*(int (*))(void *)(sr_frame_140173990 + 144)) /* [rsp+90h] */
#define v83 (*(__int64 (*))(void *)(sr_frame_140173990 + 152)) /* [rsp+98h] */
#define v84 (*(__int64 (*))(void *)(sr_frame_140173990 + 160)) /* [rsp+A0h] */

  v39 = 0; /* failure paths: 0x140173A83 xor eax, eax */
  v6 = a5;
  v7 = a3;
  v8 = a2;
  v9 = a3 * a5;
  v80 = a6;
  v10 = dword_1402B2BD0;
  v70 = a4;
  v72 = a3;
  v71 = a2;
  v76 = a1;
  v73 = a5;
  v82 = 6;
  v83 = 0xA1A0A0D474E5089LL;
  si128 = _mm_load_si128((     __m128i *)&xmmword_140278F30);
  if ( !a2 )
  {
    v8 = a3 * a5;
    v71 = a3 * a5;
  }
  if ( dword_1402B2BD0 >= 5 )
    v10 = -1;
  v74 = v10;
  v75 = a4 * (v9 + 1);
  Block = (void *)sr_path_malloc(v75);
  if ( Block )
  {
    v11 = (__m128i *)sr_path_malloc(v9);
    if ( v11 )
    {
      v13 = v70;
      v14 = 0;
      v15 = 0;
      if ( v70 > 0 )
      {
        v79 = v9 + 1;
        v77 = Block;
        do
        {
          if ( v74 <= -1 )
          {
            v17 = 0;
            v18 = 0x7FFFFFFF;
            v16 = 0;
            do
            {
              sub_140175EB0(v76, v71, v72, v13, v15, v73, v16, v11);
              v19 = 0;
              v20 = 0;
              if ( v9 >= 8 && dword_140302080 >= 2 )
              {
                v21 = _mm_cvtsi64_si128((long long)(0));
                v22 = _mm_cvtsi64_si128((long long)(0));
                do
                {
                  v23 = _mm_cvtsi32_si128(*(unsigned __int32 *)((char *)&SR_VEC_PTR_LANES(128, v11, u32)[1] + v20));
                  v24 = _mm_add_epi32(
                          _mm_abs_epi32(_mm_cvtepi8_epi32(_mm_cvtsi32_si128(*(unsigned __int32 *)((char *)SR_VEC_PTR_LANES(128, v11, u32)
                                                                                                + v20)))),
                          v21);
                  v20 += 8;
                  v21 = v24;
                  v25 = _mm_add_epi32(_mm_abs_epi32(_mm_cvtepi8_epi32(v23)), v22);
                  v22 = v25;
                }
                while ( v20 < (int)(v9 - (v9 & 0x80000007)) );
                v26 = _mm_add_epi32(v21, v25);
                v27 = _mm_add_epi32(v26, _mm_srli_si128(v26, 8));
                v19 = _mm_cvtsi128_si32(_mm_add_epi32(v27, _mm_srli_si128(v27, 4)));
              }
              v28 = 0;
              v29 = 0;
              if ( v20 < v9 )
              {
                if ( v9 - v20 < 2 )
                  goto LABEL_23;
                do
                {
                  v28 += abs8(SR_VEC_PTR_LANES(128, v11, i8)[v20]);
                  v30 = SR_VEC_PTR_LANES(128, v11, i8)[v20 + 1];
                  v31 = (unsigned __int64)SR_VEC_PTR_LANES(128, v11, i8)[v20 + 1] >> 32;
                  v20 += 2;
                  v29 += (v31 ^ v30) - v31;
                }
                while ( v20 < v9 - 1LL );
                if ( v20 < v9 )
LABEL_23:
                  v19 += abs8(SR_VEC_PTR_LANES(128, v11, i8)[v20]);
                v19 += v29 + v28;
              }
              v32 = v16;
              if ( v19 >= v18 )
                v32 = v17;
              ++v16;
              v17 = v32;
              v13 = v70;
              if ( v19 >= v18 )
                v19 = v18;
              v18 = v19;
            }
            while ( v16 < 5 );
            v8 = v71;
            if ( v16 != v17 )
            {
              sub_140175EB0(v76, v71, v72, v70, v15, v73, v17, v11);
              LOBYTE(v16) = v17;
            }
            v7 = v72;
          }
          else
          {
            LOBYTE(v16) = v74;
            sub_140175EB0(v76, v8, v7, v13, v15, v73, v74, v11);
          }
          v33 = v77;
          *v77 = v16;
          v34 = v33;
          crt_memcpy((__m128i *)(v33 + 1), v11, v9);
          ++v15;
          v13 = v70;
          v77 = &v34[v79];
        }
        while ( v15 < v70 );
        v6 = v73;
      }
      free(v11);
      v35 = sub_140174680((__int64)Block, v75, &v74, dword_1402B2918);
      free(Block);
      if ( v35 )
      {
        v36 = v74;
        v37 = v74 + 57;
        v38 = sr_path_malloc(v74 + 57);
        v39 = v38;
        if ( v38 )
        {
          v40 = v70;
          *(_QWORD *)v38 = v83;
          v41 = (int *)v80;
          *(_BYTE *)(v38 + 16) = HIBYTE(v7);
          *(_BYTE *)(v38 + 17) = BYTE2(v7);
          *(_BYTE *)(v38 + 18) = BYTE1(v7);
          *(_BYTE *)(v38 + 20) = HIBYTE(v40);
          *(_BYTE *)(v38 + 21) = BYTE2(v40);
          *(_BYTE *)(v38 + 22) = BYTE1(v40);
          *(_BYTE *)(v38 + 23) = v40;
          *(_BYTE *)(v38 + 19) = v7;
          *(_DWORD *)(v38 + 8) = 218103808;
          *(_DWORD *)(v38 + 12) = 1380206665;
          *(_BYTE *)(v38 + 24) = 8;
          *(_WORD *)(v38 + 26) = 0;
          *(_BYTE *)(v38 + 28) = 0;
          *v41 = v37;
          v42 = SR_VEC_LANES(128, si128, u8)[4 * v6];
          *(_BYTE *)(v38 + 25) = v42;
          v43 = ((dword_140301980[(unsigned __int8)~*(_BYTE *)(v38 + 12)] ^ 0xFFFFFFu) >> 8)
              ^ dword_140301980[*(unsigned __int8 *)(v38 + 13)
                              ^ (unsigned __int64)(unsigned __int8)~LOBYTE(dword_140301980[(unsigned __int8)~*(_BYTE *)(v38 + 12)])];
          v44 = (v43 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 14) ^ (unsigned __int64)(unsigned __int8)v43];
          v45 = (v44 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 15) ^ (unsigned __int64)(unsigned __int8)v44];
          v46 = (v45 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 16) ^ (unsigned __int64)(unsigned __int8)v45];
          v47 = (v46 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 17) ^ (unsigned __int64)(unsigned __int8)v46];
          v48 = (v47 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 18) ^ (unsigned __int64)(unsigned __int8)v47];
          v49 = (v48 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 19) ^ (unsigned __int64)(unsigned __int8)v48];
          v50 = (v49 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 20) ^ (unsigned __int64)(unsigned __int8)v49];
          v51 = (v50 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 21) ^ (unsigned __int64)(unsigned __int8)v50];
          v52 = (v51 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v38 + 22) ^ (unsigned __int64)(unsigned __int8)v51];
          v53 = *(unsigned __int8 *)(v38 + 23) ^ (unsigned __int64)(unsigned __int8)v52;
          v54 = *(unsigned __int8 *)(v38 + 24);
          *(_BYTE *)(v39 + 36) = v36;
          *(_DWORD *)(v39 + 37) = 1413563465;
          v55 = (v52 >> 8) ^ dword_140301980[v53];
          v56 = (v55 >> 8) ^ dword_140301980[v54 ^ (unsigned __int8)v55];
          v57 = (v56 >> 8) ^ dword_140301980[v42 ^ (unsigned __int8)v56];
          v58 = (v57 >> 8) ^ dword_140301980[(unsigned __int8)v57];
          v59 = (v58 >> 8) ^ dword_140301980[(unsigned __int8)v58];
          v60 = ~((v59 >> 8) ^ dword_140301980[(unsigned __int8)v59]);
          *(_BYTE *)(v39 + 32) = v60;
          *(_BYTE *)(v39 + 29) = HIBYTE(v60);
          *(_BYTE *)(v39 + 30) = BYTE2(v60);
          *(_BYTE *)(v39 + 31) = BYTE1(v60);
          *(_BYTE *)(v39 + 33) = BYTE3(v36);
          *(_BYTE *)(v39 + 34) = BYTE2(v36);
          *(_BYTE *)(v39 + 35) = BYTE1(v36);
          crt_memcpy((__m128i *)(v39 + 41), v35, v36);
          v61 = v36 + v39 + 41;
          free(v35);
          v62 = -1;
          if ( (int)v36 + 4 > 0 )
          {
            do
            {
              v63 = *(unsigned __int8 *)(v14 + v39 + 41 - 4);
              ++v14;
              v62 = (v62 >> 8) ^ dword_140301980[(unsigned __int8)v62 ^ v63];
            }
            while ( v14 < (int)v36 + 4 );
          }
          v64 = dword_140301C58;
          v65 = ~v62;
          *(_BYTE *)(v61 + 3) = v65;
          *(_BYTE *)v61 = HIBYTE(v65);
          *(_BYTE *)(v61 + 1) = BYTE2(v65);
          *(_BYTE *)(v61 + 2) = BYTE1(v65);
          *(_DWORD *)(v61 + 4) = 0;
          *(_DWORD *)(v61 + 8) = 1145980233;
          v66 = ((v64 ^ 0xFFFFFFu) >> 8)
              ^ dword_140301980[*(unsigned __int8 *)(v61 + 9) ^ (unsigned __int64)(unsigned __int8)~(_BYTE)v64];
          v67 = (v66 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v61 + 10) ^ (unsigned __int64)(unsigned __int8)v66];
          v68 = ~((v67 >> 8) ^ dword_140301980[*(unsigned __int8 *)(v61 + 11) ^ (unsigned __int64)(unsigned __int8)v67]);
          *(_BYTE *)(v61 + 15) = v68;
          *(_BYTE *)(v61 + 12) = HIBYTE(v68);
          *(_BYTE *)(v61 + 14) = BYTE1(v68);
          *(_BYTE *)(v61 + 13) = BYTE2(v68);
          if ( v61 + 16 != v39 + *v41 )
            crt_assert(
              (char *)L"o == out + *out_len",
              (char *)L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h",
              0x49Bu);
        }
      }
    }
    else
    {
      free(Block);
    }
  }
  return v39; /* 0x140174096: mov rax, r14 */
}
#undef v69
#undef v70
#undef v71
#undef v72
#undef v73
#undef v74
#undef v75
#undef v76
#undef v77
#undef Block
#undef v79
#undef v80
#undef si128
#undef v82
#undef v83
#undef v84

// 140173B8E: conditional instruction was optimized away because ebp.4>=8

