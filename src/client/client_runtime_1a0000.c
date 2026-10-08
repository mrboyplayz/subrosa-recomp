#include "shared_client.h"


//----- (00000001401A0850) ----------------------------------------------------
__int64            sub_1401A0850(int a1)
{
  switch ( a1 )
  {
    case 8000:
      return 6;
    case 12000:
      return 4;
    case 16000:
      return 3;
    case 24000:
      return 2;
    default:
      return a1 == 48000;
  }
}


//----- (00000001401A08E0) ----------------------------------------------------
float *           sub_1401A08E0(__int64 a1, _WORD *a2, int a3, int a4, int a5, float *a6, float *a7, int a8)
{
  int i; // [rsp+20h] [rbp-38h]
  int j; // [rsp+20h] [rbp-38h]
  int k; // [rsp+20h] [rbp-38h]
  int m; // [rsp+20h] [rbp-38h]
  float v13; // [rsp+24h] [rbp-34h]
  float v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  float v16; // [rsp+30h] [rbp-28h]
  int v17; // [rsp+34h] [rbp-24h]
  int v18; // [rsp+38h] [rbp-20h]
  float v19; // [rsp+3Ch] [rbp-1Ch]
  float v20; // [rsp+40h] [rbp-18h]

  v19 = *a6;
  v13 = *a7;
  if ( a6[1] == 0.0 && a5 == 1 && !a8 )
  {
    for ( i = 0; i < a3; ++i )
    {
      v14 = *(float *)(a1 + 4LL * i * a4) * 32768.0;
      *(float *)&a2[2 * i] = v14 - v13;
      v13 = v19 * v14;
    }
    *a7 = v13;
    return a7;
  }
  else
  {
    v15 = a3 / a5;
    if ( a5 != 1 )
      sub_1401FCD30((void *)(uintptr_t)(a2), 0, 4LL * a3);
    for ( j = 0; j < v15; ++j )
      *(float *)&a2[2 * a5 * j] = *(float *)(a1 + 4LL * j * a4) * 32768.0;
    if ( a8 )
    {
      for ( k = 0; k < v15; ++k )
      {
        if ( *(float *)&a2[2 * a5 * k] <= 65536.0 )
          v16 = *(float *)&a2[2 * a5 * k];
        else
          v16 = 65536.0;
        if ( v16 >= -65536.0 )
        {
          if ( *(float *)&a2[2 * a5 * k] <= 65536.0 )
            v17 = *(_DWORD *)&a2[2 * a5 * k];
          else
            v17 = 1199570944;
          v18 = v17;
        }
        else
        {
          v18 = -947912704;
        }
        *(_DWORD *)&a2[2 * a5 * k] = v18;
      }
    }
    for ( m = 0; m < a3; ++m )
    {
      v20 = *(float *)&a2[2 * m];
      *(float *)&a2[2 * m] = v20 - v13;
      v13 = v19 * v20;
    }
    *a7 = v13;
    return a7;
  }
}


//----- (00000001401A0C20) ----------------------------------------------------
__m128i *           sub_1401A0C20(
        __m128i *a1,
             __m128i *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        int a8,
        int a9,
        __int64 a10,
        int a11)
{
  __m128i *result; // rax
  int i; // [rsp+40h] [rbp-58h]
  float v13; // [rsp+44h] [rbp-54h]
  float v14; // [rsp+48h] [rbp-50h]
  float v15; // [rsp+4Ch] [rbp-4Ch]
  float v16; // [rsp+50h] [rbp-48h]
  int v17; // [rsp+54h] [rbp-44h]
  int v18; // [rsp+58h] [rbp-40h]
  float v19; // [rsp+5Ch] [rbp-3Ch]
  float v20; // [rsp+60h] [rbp-38h]
  float v21; // [rsp+64h] [rbp-34h]
  float v22; // [rsp+68h] [rbp-30h]
  float v23; // [rsp+6Ch] [rbp-2Ch]
  float v24; // [rsp+70h] [rbp-28h]
  float v25; // [rsp+74h] [rbp-24h]
  float v26; // [rsp+78h] [rbp-20h]

  if ( a6 == 0.0 && a7 == 0.0 )
  {
    result = a1;
    if ( a2 != a1 )
      return sub_1401FC920(a1, a2, 4LL * a5);
  }
  else
  {
    if ( a3 <= 15 )
      v17 = 15;
    else
      v17 = a3;
    if ( a4 <= 15 )
      v18 = 15;
    else
      v18 = a4;
    v24 = a6 * flt_140279B90[3 * a8];
    v25 = a6 * flt_140279B90[3 * a8 + 1];
    v26 = a6 * flt_140279B90[3 * a8 + 2];
    v23 = a7 * flt_140279B90[3 * a9];
    v22 = a7 * flt_140279B90[3 * a9 + 1];
    v21 = a7 * flt_140279B90[3 * a9 + 2];
    v16 = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[1 - v18];
    v15 = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[-v18];
    v14 = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[-v18 - 1];
    v19 = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[-v18 - 2];
    if ( a6 == a7 && v17 == v18 && a8 == a9 )
      a11 = 0;
    for ( i = 0; i < a11; ++i )
    {
      v20 = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - v18 + 2];
      v13 = *(float *)(a10 + 4LL * i) * *(float *)(a10 + 4LL * i);
      *(float *)&SR_VEC_PTR_LANES(128, a1, i32)[i] = (float)((float)((float)((float)((float)(*(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i]
                                                                          + (float)((float)((float)(1.0 - v13) * v24)
                                                                                  * *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - v17]))
                                                                  + (float)((float)((float)(1.0 - v13) * v25)
                                                                          * (float)(*(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - v17 + 1]
                                                                                  + *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - v17 - 1])))
                                                          + (float)((float)((float)(1.0 - v13) * v26)
                                                                  * (float)(*(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - v17 + 2]
                                                                          + *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i - v17 - 2])))
                                                  + (float)((float)(v13 * v23) * v15))
                                          + (float)((float)(v13 * v22) * (float)(v16 + v14)))
                                  + (float)((float)(v13 * v21) * (float)(v20 + v19));
      SR_VEC_PTR_LANES(128, a1, i32)[i] = SR_VEC_PTR_LANES(128, a1, i32)[i];
      v19 = v14;
      v14 = v15;
      v15 = v16;
      v16 = v20;
    }
    if ( a7 == 0.0 )
    {
      result = a1;
      if ( a2 != a1 )
        return sub_1401FC920(
                 (__m128i *)((char *)a1 + 4 * a11),
                 (     __m128i *)((char *)a2 + 4 * a11),
                 4LL * (a5 - a11));
    }
    else
    {
      return (__m128i *)sub_1401AE1D0(
                          (__int64)SR_VEC_PTR_LANES(128, a1, i64) + 4 * i,
                          (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 4 * i,
                          v18,
                          a5 - i,
                          v23,
                          v22,
                          v21);
    }
  }
  return result;
}

// 140279B90: using guessed type float flt_140279B90[9];

//----- (00000001401A12E0) ----------------------------------------------------
__int64            sub_1401A12E0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( i >= (int)result )
      break;
    *(_DWORD *)(a2 + 4LL * i) = (((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1))
                                 - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a3)
                               * a4
                               * (*(unsigned __int8 *)(*(_QWORD *)(a1 + 152)
                                                     + i
                                                     + (a4 + 2 * a3 - 1) * *(_DWORD *)(a1 + 8))
                                + 64)) >> 2;
  }
  return result;
}


//----- (00000001401A13B0) ----------------------------------------------------
__int64 sub_1401A13B0()
{
  return 0;
}


//----- (00000001401A13C0) ----------------------------------------------------
void               sub_1401A13C0(__int64 a1, __int64 a2, CGlobalUtils *a3)
{
  int i; // [rsp+20h] [rbp-18h]
  float v5; // [rsp+24h] [rbp-14h]
  __int64 v6; // [rsp+28h] [rbp-10h]

  v5 = *(float *)(a1 + 4);
  for ( i = 0; i < *(_DWORD *)a1; ++i )
  {
    v6 = *(_QWORD *)(a2 + 8LL * i);
    *((float *)a3 + 2 * *(__int16 *)(*(_QWORD *)(a1 + 48) + 2LL * i)) = v5 * *(float *)&v6;
    *((float *)a3 + 2 * *(__int16 *)(*(_QWORD *)(a1 + 48) + 2LL * i) + 1) = v5 * *((float *)&v6 + 1);
  }
  sub_1401A15A0(a1, a3);
  return; /* void FFT wrapper */
}


//----- (00000001401A1490) ----------------------------------------------------
__int64            sub_1401A1490(unsigned int *a1, __int64 a2, CGlobalUtils *a3)
{
  __int64 result; // rax
  signed int i; // [rsp+20h] [rbp-18h]
  signed int j; // [rsp+20h] [rbp-18h]
  int k; // [rsp+20h] [rbp-18h]

  for ( i = 0; i < (int)*a1; ++i )
    *((_QWORD *)a3 + *(__int16 *)(*((_QWORD *)a1 + 6) + 2LL * i)) = *(_QWORD *)(a2 + 8LL * i);
  for ( j = 0; j < (int)*a1; ++j )
    *((float *)a3 + 2 * j + 1) = -*((float *)a3 + 2 * j + 1);
  sub_1401A15A0((__int64)a1, a3);
  for ( k = 0; ; ++k )
  {
    result = *a1;
    if ( k >= (int)result )
      break;
    *((float *)a3 + 2 * k + 1) = -*((float *)a3 + 2 * k + 1);
  }
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401A15A0) ----------------------------------------------------
void               sub_1401A15A0(__int64 a1, CGlobalUtils *a2)
{
  __int64 v3; // [rsp+0h] [rbp-98h] BYREF
  int i; // [rsp+30h] [rbp-68h]
  int v5; // [rsp+34h] [rbp-64h]
  unsigned int v6; // [rsp+38h] [rbp-60h]
  unsigned int v7; // [rsp+3Ch] [rbp-5Ch]
  int v8; // [rsp+40h] [rbp-58h]
  int v9; // [rsp+44h] [rbp-54h]
  int v10; // [rsp+48h] [rbp-50h]
  int v11; // [rsp+4Ch] [rbp-4Ch]
  __int64 v12; // [rsp+50h] [rbp-48h]
  __int64 v13; // [rsp+58h] [rbp-40h]
  __int64 v14; // [rsp+60h] [rbp-38h]
  _DWORD v15[8]; // [rsp+68h] [rbp-30h]
  __int64 v16; // [rsp+88h] [rbp-10h]

  if ( *(int *)(a1 + 8) <= 0 )
    v10 = 0;
  else
    v10 = *(_DWORD *)(a1 + 8);
  v9 = v10;
  v15[0] = 1;
  v5 = 0;
  do
  {
    v11 = *(__int16 *)(a1 + 4LL * v5 + 12);
    v6 = *(__int16 *)(a1 + 2LL * (2 * v5 + 1) + 12);
    v15[v5 + 1] = v11 * v15[v5];
    ++v5;
  }
  while ( v6 != 1 );
  v6 = *(__int16 *)(a1 + 2LL * (2 * v5 - 1) + 12);
  for ( i = v5 - 1; i >= 0; --i )
  {
    if ( i )
      v7 = *(__int16 *)(a1 + 2LL * (2 * i - 1) + 12);
    else
      v7 = 1;
    v8 = *(__int16 *)(a1 + 4LL * i + 12);
    switch ( v8 )
    {
      case 2:
        sub_1401B61A0((__int64)a2, v6, v15[i]);
        break;
      case 3:
        v13 = i;
        sub_1401B6FA0((__int64)a2, (int)(v15[i] << v9), a1, v6, v15[i], v7);
        break;
      case 4:
        v12 = i;
        CGlobalUtils__SetNewParent(a2, (struct CObList *)(int)(v15[i] << v9), (struct CWnd *)a1, v6, v15[i], v7);
        break;
      case 5:
        v14 = i;
        sub_1401B7510((__int64)a2, (int)(v15[i] << v9), a1, v6, v15[i], v7);
        break;
    }
    v6 = v7;
  }
  return; /* original void FFT stage */
}


//----- (00000001401A1860) ----------------------------------------------------
void               sub_1401A1860(__int64 a1, __int64 a2, float *a3, float *a4, int a5, int a6, int a7)
{
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  int i; // [rsp+20h] [rbp+0h] BYREF
  float *v13; // [rsp+28h] [rbp+8h]
  int v14; // [rsp+30h] [rbp+10h]
  int v15; // [rsp+34h] [rbp+14h]
  int v16; // [rsp+38h] [rbp+18h]
  float *v17; // [rsp+40h] [rbp+20h]
  float *v18; // [rsp+48h] [rbp+28h]
  float *v19; // [rsp+50h] [rbp+30h]
  float *v20; // [rsp+58h] [rbp+38h]
  float *v21; // [rsp+60h] [rbp+40h]
  __int64 v22; // [rsp+68h] [rbp+48h]
  float *v23; // [rsp+70h] [rbp+50h]
  float v24; // [rsp+78h] [rbp+58h]
  float v25; // [rsp+7Ch] [rbp+5Ch]
  float v26; // [rsp+80h] [rbp+60h]
  float v27; // [rsp+84h] [rbp+64h]
  float v28; // [rsp+88h] [rbp+68h]
  __int64 v29; // [rsp+90h] [rbp+70h]
  __int64 v30; // [rsp+98h] [rbp+78h]
  float v31; // [rsp+A0h] [rbp+80h]
  float v32; // [rsp+A4h] [rbp+84h]
  float v33; // [rsp+A8h] [rbp+88h]
  float v34; // [rsp+ACh] [rbp+8Ch]
  __int64 v35; // [rsp+B0h] [rbp+90h]
  CGlobalUtils *v36; // [rsp+B8h] [rbp+98h]
  float *v37; // [rsp+C0h] [rbp+A0h]
  float *v38; // [rsp+C8h] [rbp+A8h]
  int *p_i; // [rsp+D0h] [rbp+B0h]
  __int64 v40; // [rsp+D8h] [rbp+B8h]
  __int64 v41; // [rsp+E0h] [rbp+C0h]

  v35 = *(_QWORD *)(a1 + 8LL * a6 + 8);
  v28 = *(float *)(v35 + 4);
  v16 = *(_DWORD *)a1;
  v29 = *(_QWORD *)(a1 + 40);
  for ( i = 0; i < a6; ++i )
  {
    v16 >>= 1;
    v29 += 4LL * v16;
  }
  v15 = v16 >> 1;
  v14 = v16 >> 2;
  v7 = 4LL * (v16 >> 1) + 15;
  if ( v7 <= 4LL * (v16 >> 1) )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = (int *)v8;
  v9 = 8LL * v14 + 15;
  if ( v9 <= 8LL * v14 )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  v36 = (CGlobalUtils *)v10;
  v17 = (float *)(a2 + 4LL * (a5 >> 1));
  v18 = (float *)(a2 + 4LL * v15 + 4LL * (a5 >> 1) - 4);
  v13 = (float *)p_i;
  v19 = &a4[a5 >> 1];
  v20 = v19 - 1;
  for ( i = 0; i < (a5 + 3) >> 2; ++i )
  {
    *v13++ = (float)(*v20 * v17[v15]) + (float)(*v19 * *v18);
    *v13++ = (float)(*v19 * *v17) - (float)(*v20 * v18[-v15]);
    v17 += 2;
    v18 -= 2;
    v19 += 2;
    v20 -= 2;
  }
  v19 = a4;
  v20 = &a4[a5 - 1];
  while ( i < v14 - ((a5 + 3) >> 2) )
  {
    *v13++ = *v18;
    *v13++ = *v17;
    v17 += 2;
    v18 -= 2;
    ++i;
  }
  while ( i < v14 )
  {
    *v13++ = (float)(*v20 * *v18) - (float)(*v19 * v17[-v15]);
    *v13++ = (float)(*v20 * *v17) + (float)(*v19 * v18[v15]);
    v17 += 2;
    v18 -= 2;
    v19 += 2;
    v20 -= 2;
    ++i;
  }
  v21 = (float *)p_i;
  v40 = v29;
  for ( i = 0; i < v14; ++i )
  {
    v25 = *(float *)(v40 + 4LL * i);
    v27 = *(float *)(v40 + 4LL * (i + v14));
    v26 = *v21++;
    v24 = *v21++;
    v31 = (float)(v26 * v25) - (float)(v24 * v27);
    v32 = (float)(v24 * v25) + (float)(v26 * v27);
    *(float *)&v22 = v28 * v31;
    *((float *)&v22 + 1) = v28 * v32;
    *((_QWORD *)v36 + *(__int16 *)(*(_QWORD *)(v35 + 48) + 2LL * i)) = v22;
  }
  sub_1401A15A0(v35, v36);
  v23 = (float *)v36;
  v37 = a3;
  v38 = &a3[(v15 - 1) * a7];
  v30 = v29;
  for ( i = 0; i < v14; ++i )
  {
    v33 = (float)(v23[1] * *(float *)(v30 + 4LL * (i + v14))) - (float)(*v23 * *(float *)(v30 + 4LL * i));
    v34 = (float)(*v23 * *(float *)(v30 + 4LL * (i + v14))) + (float)(v23[1] * *(float *)(v30 + 4LL * i));
    *v37 = v33;
    *v38 = v34;
    v23 += 2;
    v37 += 2 * a7;
    v38 -= 2 * a7;
  }
  return; /* native void MDCT */
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401A1F50) ----------------------------------------------------
__int64            sub_1401A1F50(__int64 a1, float *a2, float *a3, float *a4, int a5, int a6, int a7)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-B8h]
  int j; // [rsp+20h] [rbp-B8h]
  int k; // [rsp+20h] [rbp-B8h]
  int m; // [rsp+20h] [rbp-B8h]
  int v12; // [rsp+24h] [rbp-B4h]
  int v13; // [rsp+28h] [rbp-B0h]
  float v14; // [rsp+2Ch] [rbp-ACh]
  float v15; // [rsp+2Ch] [rbp-ACh]
  float v16; // [rsp+30h] [rbp-A8h]
  float v17; // [rsp+30h] [rbp-A8h]
  float v18; // [rsp+34h] [rbp-A4h]
  float v19; // [rsp+38h] [rbp-A0h]
  float v20; // [rsp+38h] [rbp-A0h]
  int v21; // [rsp+3Ch] [rbp-9Ch]
  float v22; // [rsp+40h] [rbp-98h]
  float v23; // [rsp+44h] [rbp-94h]
  float *v24; // [rsp+48h] [rbp-90h]
  float *v25; // [rsp+50h] [rbp-88h]
  int v26; // [rsp+58h] [rbp-80h]
  float v27; // [rsp+5Ch] [rbp-7Ch]
  float v28; // [rsp+60h] [rbp-78h]
  float *v29; // [rsp+70h] [rbp-68h]
  float *v30; // [rsp+78h] [rbp-60h]
  __int64 v31; // [rsp+80h] [rbp-58h]
  float *v32; // [rsp+90h] [rbp-48h]
  float *v33; // [rsp+98h] [rbp-40h]
  float *v34; // [rsp+A0h] [rbp-38h]
  float *v35; // [rsp+A8h] [rbp-30h]
  float v36; // [rsp+B4h] [rbp-24h]
  __int16 *v37; // [rsp+B8h] [rbp-20h]
  float *v38; // [rsp+C0h] [rbp-18h]

  v13 = *(_DWORD *)a1;
  v31 = *(_QWORD *)(a1 + 40);
  for ( i = 0; i < a6; ++i )
  {
    v13 >>= 1;
    v31 += 4LL * v13;
  }
  v21 = v13 >> 1;
  v12 = v13 >> 2;
  v29 = a2;
  v30 = &a2[((v13 >> 1) - 1) * a7];
  v38 = &a3[a5 >> 1];
  v37 = *(__int16 **)(*(_QWORD *)(a1 + 8LL * a6 + 8) + 48LL);
  for ( j = 0; j < v12; ++j )
  {
    v26 = *v37++;
    v36 = (float)(*v29 * *(float *)(v31 + 4LL * j)) - (float)(*v30 * *(float *)(v31 + 4LL * (j + v12)));
    v38[2 * v26 + 1] = (float)(*v30 * *(float *)(v31 + 4LL * j)) + (float)(*v29 * *(float *)(v31 + 4LL * (j + v12)));
    v38[2 * v26] = v36;
    v29 += 2 * a7;
    v30 -= 2 * a7;
  }
  sub_1401A15A0(*(_QWORD *)(a1 + 8LL * a6 + 8), (CGlobalUtils *)&a3[a5 >> 1]);
  v24 = &a3[a5 >> 1];
  v25 = &v24[v21 - 2];
  for ( k = 0; k < (v12 + 1) >> 1; ++k )
  {
    v14 = v24[1];
    v19 = *(float *)(v31 + 4LL * k);
    v16 = *(float *)(v31 + 4LL * (k + v12));
    v22 = (float)(v14 * v19) + (float)(*v24 * v16);
    v23 = (float)(v14 * v16) - (float)(*v24 * v19);
    v15 = v25[1];
    v18 = *v25;
    *v24 = v22;
    v25[1] = v23;
    v20 = *(float *)(v31 + 4LL * (v12 - k - 1));
    v17 = *(float *)(v31 + 4LL * (v21 - k - 1));
    *v25 = (float)(v15 * v20) + (float)(v18 * v17);
    v24[1] = (float)(v15 * v17) - (float)(v18 * v20);
    v24 += 2;
    v25 -= 2;
  }
  v33 = &a3[a5 - 1];
  v32 = a3;
  v34 = a4;
  v35 = &a4[a5 - 1];
  for ( m = 0; ; ++m )
  {
    result = (unsigned int)(a5 / 2);
    if ( m >= (int)result )
      break;
    v28 = *v33;
    v27 = *v32;
    *v32 = (float)(*v35 * *v32) - (float)(*v34 * *v33);
    ++v32;
    *v33-- = (float)(*v34++ * v27) + (float)(*v35-- * v28);
  }
  return result;
}


//----- (00000001401A2600) ----------------------------------------------------
__int64 sub_1401A2600()
{
  return 0;
}


//----- (00000001401A2610) ----------------------------------------------------
_DWORD *           sub_1401A2610(__int64 a1, int a2, int a3, _DWORD *a4)
{
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+24h] [rbp-24h]
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  int v10; // [rsp+30h] [rbp-18h]

  if ( a2 >= a3 )
    v6 = a3;
  else
    v6 = a2;
  if ( a2 <= a3 )
    v7 = a3;
  else
    v7 = a2;
  if ( a2 >= a3 + 1 )
    v8 = a3 + 1;
  else
    v8 = a2;
  if ( a2 <= a3 + 1 )
    v9 = a3 + 1;
  else
    v9 = a2;
  v10 = *((_DWORD *)*(&off_14027E020 + v8) + v9) + *((_DWORD *)*(&off_14027E020 + v6) + v7);
  v4 = sub_1401B57D0(a2, a1);
  return sub_14019A5E0(a4, v4, v10);
}

// 14027E020: using guessed type _UNKNOWN *off_14027E020;

//----- (00000001401A2700) ----------------------------------------------------
float            sub_1401A2700(_DWORD *a1, int a2, int a3, unsigned int *a4)
{
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+24h] [rbp-14h]
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

  if ( a2 >= a3 )
    v6 = a3;
  else
    v6 = a2;
  if ( a2 <= a3 )
    v7 = a3;
  else
    v7 = a2;
  if ( a2 >= a3 + 1 )
    v8 = a3 + 1;
  else
    v8 = a2;
  if ( a2 <= a3 + 1 )
    v9 = a3 + 1;
  else
    v9 = a2;
  v4 = sub_14019B0A0(a4, *((_DWORD *)*(&off_14027E020 + v8) + v9) + *((_DWORD *)*(&off_14027E020 + v6) + v7));
  return sub_1401B5990(a2, a3, v4, a1);
}

// 14027E020: using guessed type _UNKNOWN *off_14027E020;

//----- (00000001401A27F0) ----------------------------------------------------
__int64            sub_1401A27F0(int a1)
{
  if ( a1 >= 8 )
    return (unsigned int)(((a1 & 7) + 8) << ((a1 >> 3) - 1));
  else
    return (unsigned int)a1;
}


//----- (00000001401A2830) ----------------------------------------------------
__int64            sub_1401A2830(__int64 a1, int a2, int a3, int a4)
{
  int v5; // [rsp+0h] [rbp-28h]
  int v6; // [rsp+4h] [rbp-24h]
  int i; // [rsp+8h] [rbp-20h]
  int v8; // [rsp+10h] [rbp-18h]
  unsigned __int8 *v9; // [rsp+18h] [rbp-10h]
  int v10; // [rsp+48h] [rbp+20h]

  v9 = (unsigned __int8 *)(*(_QWORD *)(a1 + 144)
                         + *(__int16 *)(*(_QWORD *)(a1 + 136) + 2LL * (a2 + *(_DWORD *)(a1 + 8) * (a3 + 1))));
  v5 = 0;
  v6 = *v9;
  v10 = a4 - 1;
  for ( i = 0; i < 6; ++i )
  {
    if ( v9[(v5 + v6 + 1) >> 1] < v10 )
      v5 = (v5 + v6 + 1) >> 1;
    else
      v6 = (v5 + v6 + 1) >> 1;
  }
  if ( v5 )
    v8 = v9[v5];
  else
    v8 = -1;
  if ( v10 - v8 > v9[v6] - v10 )
    return (unsigned int)v6;
  else
    return (unsigned int)v5;
}


//----- (00000001401A2960) ----------------------------------------------------
__int64            sub_1401A2960(__int64 a1, int a2, int a3, int a4)
{
  if ( a4 )
    return (unsigned int)(*(unsigned __int8 *)(*(_QWORD *)(a1 + 144)
                                             + *(__int16 *)(*(_QWORD *)(a1 + 136)
                                                          + 2LL * (a2 + *(_DWORD *)(a1 + 8) * (a3 + 1)))
                                             + a4)
                        + 1);
  else
    return 0;
}


//----- (00000001401A29F0) ----------------------------------------------------
int                sub_1401A29F0(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int *a7,
        int *a8,
        int a9,
        int *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        unsigned int *a16,
        int a17,
        int a18,
        int a19)
{
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  unsigned __int64 v21; // rcx
  void *v22; // rsp
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  unsigned __int64 v25; // rcx
  void *v26; // rsp
  int i; // [rsp+C0h] [rbp+0h] BYREF
  int v29; // [rsp+C4h] [rbp+4h]
  int v30; // [rsp+C8h] [rbp+8h]
  int v31; // [rsp+CCh] [rbp+Ch]
  int v32; // [rsp+D0h] [rbp+10h]
  int v33; // [rsp+D4h] [rbp+14h]
  int v34; // [rsp+D8h] [rbp+18h]
  int v35; // [rsp+DCh] [rbp+1Ch]
  int v36; // [rsp+E0h] [rbp+20h]
  int v37; // [rsp+E4h] [rbp+24h]
  int *v38; // [rsp+E8h] [rbp+28h]
  int v39; // [rsp+F0h] [rbp+30h]
  int v40; // [rsp+F4h] [rbp+34h]
  int v41; // [rsp+F8h] [rbp+38h]
  int v42; // [rsp+FCh] [rbp+3Ch]
  int v43; // [rsp+100h] [rbp+40h]
  int v44; // [rsp+104h] [rbp+44h]
  int v45; // [rsp+108h] [rbp+48h]
  int v46; // [rsp+10Ch] [rbp+4Ch]
  int v47; // [rsp+110h] [rbp+50h]
  int v48; // [rsp+114h] [rbp+54h]
  int v49; // [rsp+118h] [rbp+58h]
  int v50; // [rsp+11Ch] [rbp+5Ch]
  int v51; // [rsp+120h] [rbp+60h]
  int v52; // [rsp+124h] [rbp+64h]
  int v53; // [rsp+128h] [rbp+68h]
  int v54; // [rsp+12Ch] [rbp+6Ch]
  int v55; // [rsp+130h] [rbp+70h]
  int v56; // [rsp+134h] [rbp+74h]
  int v57; // [rsp+138h] [rbp+78h]
  int v58; // [rsp+13Ch] [rbp+7Ch]
  int *v59; // [rsp+140h] [rbp+80h]
  int *v60; // [rsp+148h] [rbp+88h]
  int *v61; // [rsp+150h] [rbp+90h]
  __int64 v62; // [rsp+158h] [rbp+98h]
  int v64; // [rsp+1B0h] [rbp+F0h]
  int v65; // [rsp+1B0h] [rbp+F0h]

  if ( a9 <= 0 )
    v53 = 0;
  else
    v53 = a9;
  v33 = *(_DWORD *)(a1 + 8);
  v52 = a2;
  if ( v53 < 8 )
    v40 = 0;
  else
    v40 = 8;
  v51 = v40;
  v64 = v53 - v40;
  v37 = 0;
  v36 = 0;
  if ( a14 == 2 )
  {
    v36 = byte_14027E388[a3 - a2];
    if ( v36 <= v64 )
    {
      v65 = v64 - v36;
      if ( v65 < 8 )
        v41 = 0;
      else
        v41 = 8;
      v37 = v41;
      v64 = v65 - v41;
    }
    else
    {
      v36 = 0;
    }
  }
  v19 = 4LL * v33 + 15;
  if ( v19 <= 4LL * v33 )
    v19 = 0xFFFFFFFFFFFFFF0LL;
  v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
  v61 = (int *)v20;
  v21 = 4LL * v33 + 15;
  if ( v21 <= 4LL * v33 )
    v21 = 0xFFFFFFFFFFFFFF0LL;
  v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
  v60 = (int *)v22;
  v23 = 4LL * v33 + 15;
  if ( v23 <= 4LL * v33 )
    v23 = 0xFFFFFFFFFFFFFF0LL;
  v24 = alloca(v23 & 0xFFFFFFFFFFFFFFF0uLL);
  v59 = (int *)v24;
  v25 = 4LL * v33 + 15;
  if ( v25 <= 4LL * v33 )
    v25 = 0xFFFFFFFFFFFFFF0LL;
  v26 = alloca(v25 & 0xFFFFFFFFFFFFFFF0uLL);
  v38 = (int *)v26;
  for ( i = a2; i < a3; ++i )
  {
    v58 = 3 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i));
    if ( 8 * a14 <= (8 * (v58 << a15)) >> 4 )
      v42 = (8
           * ((3 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i))) << a15)) >> 4;
    else
      v42 = 8 * a14;
    v59[i] = v42;
    v38[i] = ((1 << (a15 + 3))
            * (a3 - i - 1)
            * (a6 - 5 - a15)
            * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i))
            * a14) >> 6;
    if ( (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a15 == 1 )
      v38[i] -= 8 * a14;
  }
  v32 = 1;
  v34 = *(_DWORD *)(a1 + 52) - 1;
  do
  {
    v44 = 0;
    v35 = 0;
    v39 = (v34 + v32) >> 1;
    i = a3;
    while ( 1 )
    {
      v55 = i;
      v54 = a2;
      --i;
      if ( v55 <= a2 )
        break;
      v56 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i);
      v29 = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + i + v33 * v39) * v56 * a14) << a15 >> 2;
      if ( v29 > 0 )
      {
        if ( v38[i] + v29 >= 0 )
          v43 = v38[i] + v29;
        else
          v43 = 0;
        v29 = v43;
      }
      v29 += *(_DWORD *)(a4 + 4LL * i);
      if ( v29 >= v59[i] || v44 )
      {
        v44 = 1;
        if ( v29 >= *(_DWORD *)(a5 + 4LL * i) )
          v45 = *(_DWORD *)(a5 + 4LL * i);
        else
          v45 = v29;
        v35 += v45;
      }
      else if ( v29 >= 8 * a14 )
      {
        v35 += 8 * a14;
      }
    }
    if ( v35 <= v64 )
      v32 = v39 + 1;
    else
      v34 = v39 - 1;
  }
  while ( v32 <= v34 );
  v34 = v32--;
  for ( i = a2; i < a3; ++i )
  {
    v46 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i);
    v31 = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + i + v33 * v32) * v46 * a14) << a15 >> 2;
    if ( v34 < *(_DWORD *)(a1 + 52) )
      v47 = (*(unsigned __int8 *)(*(_QWORD *)(a1 + 56) + i + v33 * v34) * v46 * a14) << a15 >> 2;
    else
      v47 = *(_DWORD *)(a5 + 4LL * i);
    v30 = v47;
    if ( v31 > 0 )
    {
      if ( v38[i] + v31 >= 0 )
        v48 = v38[i] + v31;
      else
        v48 = 0;
      v31 = v48;
    }
    if ( v30 > 0 )
    {
      if ( v38[i] + v30 >= 0 )
        v49 = v38[i] + v30;
      else
        v49 = 0;
      v30 = v49;
    }
    if ( v32 > 0 )
      v31 += *(_DWORD *)(a4 + 4LL * i);
    v30 += *(_DWORD *)(a4 + 4LL * i);
    if ( *(int *)(a4 + 4LL * i) > 0 )
      v52 = i;
    if ( v30 - v31 >= 0 )
      v50 = v30 - v31;
    else
      v50 = 0;
    v30 = v50;
    v61[i] = v31;
    v60[i] = v30;
  }
  v57 = sub_1401B9070(
          a1,
          a2,
          a3,
          v52,
          (__int64)v61,
          (__int64)v60,
          (__int64)v59,
          a5,
          v64,
          a10,
          v51,
          a7,
          v36,
          a8,
          v37,
          a11,
          a12,
          a13,
          a14,
          a15,
          a16,
          a17,
          a18,
          a19);
  return v57; /* original result ABI */
}

// 14027E388: using guessed type unsigned __int8 byte_14027E388[24];

//----- (00000001401A32C0) ----------------------------------------------------
__int64            sub_1401A32C0(__int16 a1)
{
  __int16 v2; // [rsp+0h] [rbp-18h]

  v2 = (a1 * a1 + 4096) >> 13;
  return (unsigned int)((__int16)((((__int16)((((__int16)(((-626 * v2 + 0x4000) >> 15) + 8277) * v2 + 0x4000) >> 15)
                                            - 7651)
                                  * v2
                                  + 0x4000) >> 15)
                                + 0x7FFF
                                - v2)
                      + 1);
}


//----- (00000001401A3360) ----------------------------------------------------
__int64            sub_1401A3360(unsigned int a1, unsigned int a2)
{
  int v2; // eax
  int v4; // [rsp+20h] [rbp-18h]

  v4 = sub_14019A020(a2) + 1;
  v2 = sub_14019A020(a1);
  return (unsigned int)((((__int16)(((-2597 * (__int16)(a1 << (15 - (v2 + 1))) + 0x4000) >> 15) + 7932)
                        * (__int16)(a1 << (15 - (v2 + 1)))
                        + 0x4000) >> 15)
                      + ((v2 + 1 - v4) << 11)
                      - (((__int16)(((-2597 * (__int16)(a2 << (15 - v4)) + 0x4000) >> 15) + 7932)
                        * (__int16)(a2 << (15 - v4))
                        + 0x4000) >> 15));
}


//----- (00000001401A3450) ----------------------------------------------------
__int64            sub_1401A3450(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, char a6)
{
  float v6; // xmm0_4
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-38h]
  signed int v9; // [rsp+24h] [rbp-34h]
  int v10; // [rsp+28h] [rbp-30h]
  float v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = *(_QWORD *)(a1 + 32);
  v10 = *(_DWORD *)(a1 + 48) << a6;
  v9 = 0;
  do
  {
    for ( i = 0; i < a4; ++i )
    {
      v11 = sub_1401A9C00(
              a2 + 4LL * ((*(__int16 *)(v12 + 2LL * i) << a6) + v10 * v9),
              a2 + 4LL * ((*(__int16 *)(v12 + 2LL * i) << a6) + v10 * v9),
              (*(__int16 *)(v12 + 2LL * (i + 1)) - *(__int16 *)(v12 + 2LL * i)) << a6)
          + 1.0e-27;
      v6 = sqrt(v11);
      *(float *)(a3 + 4LL * (*(_DWORD *)(a1 + 8) * v9 + i)) = v6;
    }
    ++v9;
    result = a5;
  }
  while ( v9 < (int)a5 );
  return result;
}


//----- (00000001401A35F0) ----------------------------------------------------
__int64            sub_1401A35F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6, int a7)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  signed int v9; // [rsp+4h] [rbp-24h]
  int j; // [rsp+8h] [rbp-20h]
  int v11; // [rsp+Ch] [rbp-1Ch]
  float v12; // [rsp+10h] [rbp-18h]
  __int64 v13; // [rsp+18h] [rbp-10h]

  v13 = *(_QWORD *)(a1 + 32);
  v11 = *(_DWORD *)(a1 + 48) * a7;
  v9 = 0;
  do
  {
    for ( i = 0; i < a5; ++i )
    {
      v12 = 1.0 / (float)(*(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v9 + i)) + 1.0e-27);
      for ( j = *(__int16 *)(v13 + 2LL * i) * a7; j < *(__int16 *)(v13 + 2LL * (i + 1)) * a7; ++j )
        *(float *)(a3 + 4LL * (v11 * v9 + j)) = *(float *)(a2 + 4LL * (v11 * v9 + j)) * v12;
    }
    ++v9;
    result = a6;
  }
  while ( v9 < (int)a6 );
  return result;
}


//----- (00000001401A3740) ----------------------------------------------------
_WORD *           sub_1401A3740(__int64 a1, __int64 a2, float *a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  float v9; // xmm0_4
  int i; // [rsp+20h] [rbp-48h]
  int j; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+24h] [rbp-44h]
  int v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+2Ch] [rbp-3Ch]
  float *v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+38h] [rbp-30h]
  float v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+54h] [rbp-14h]
  float *v21; // [rsp+58h] [rbp-10h]

  v19 = *(_QWORD *)(a1 + 32);
  v15 = *(_DWORD *)(a1 + 48) * a7;
  v13 = *(__int16 *)(v19 + 2LL * a6) * a7;
  if ( a8 != 1 )
  {
    if ( v13 >= v15 / a8 )
      v17 = v15 / a8;
    else
      v17 = *(__int16 *)(v19 + 2LL * a6) * a7;
    v13 = v17;
  }
  if ( a9 )
  {
    v13 = 0;
    a6 = 0;
    a5 = 0;
  }
  v16 = a3;
  v21 = (float *)(a2 + 4LL * *(__int16 *)(v19 + 2LL * a5) * a7);
  for ( i = 0; i < *(__int16 *)(v19 + 2LL * a5) * a7; ++i )
    *v16++ = 0.0;
  for ( j = a5; j < a6; ++j )
  {
    v14 = *(__int16 *)(v19 + 2LL * j) * a7;
    v20 = *(__int16 *)(v19 + 2LL * (j + 1)) * a7;
    if ( (float)(*(float *)(a4 + 4LL * j) + flt_140282A10[j]) <= 32.0 )
      v18 = *(float *)(a4 + 4LL * j) + flt_140282A10[j];
    else
      v18 = 32.0;
    v9 = exp(0.6931471805599453 * v18);
    do
    {
      *v16++ = *v21++ * v9;
      ++v14;
    }
    while ( v14 < v20 );
  }
  return sub_1401FCD30((void *)(uintptr_t)(&a3[v13]), 0, 4LL * (v15 - v13));
}

// 140282A10: using guessed type float flt_140282A10[28];

//----- (00000001401A3A00) ----------------------------------------------------
__int64            sub_1401A3A00(
        __int64 a1,
        __int64 a2,
        int *a3,
        int a4,
        int *a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // [rsp+0h] [rbp-98h] BYREF
  signed int v13; // [rsp+20h] [rbp-78h]
  int v14; // [rsp+24h] [rbp-74h]
  int i; // [rsp+28h] [rbp-70h]
  signed int v16; // [rsp+2Ch] [rbp-6Ch]
  signed int j; // [rsp+30h] [rbp-68h]
  int v18; // [rsp+34h] [rbp-64h]
  int v19; // [rsp+38h] [rbp-60h]
  float v20; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v21; // [rsp+40h] [rbp-58h]
  BOOL v22; // [rsp+44h] [rbp-54h]
  BOOL v23; // [rsp+48h] [rbp-50h]
  BOOL v24; // [rsp+4Ch] [rbp-4Ch]
  int v25; // [rsp+50h] [rbp-48h]
  __int64 v26; // [rsp+58h] [rbp-40h]
  int v27; // [rsp+60h] [rbp-38h]
  __int64 v28; // [rsp+68h] [rbp-30h]
  int v29; // [rsp+70h] [rbp-28h]
  int v30; // [rsp+74h] [rbp-24h]
  int v31; // [rsp+78h] [rbp-20h]
  __int64 v32; // [rsp+80h] [rbp-18h]

  v14 = 0;
  v21 = 0;
  v26 = *(_QWORD *)(a1 + 32);
  v13 = 0;
  v27 = *(_DWORD *)(a1 + 48) * a10;
  if ( (*(__int16 *)(v26 + 2LL * a8) - *(__int16 *)(v26 + 2LL * (a8 - 1))) * a10 <= 8 )
    return 0; /* 0x1401A3AA8: xor eax, eax */
  {
    v18 = 0;
    do
    {
      for ( i = 0; i < a8; ++i )
      {
        v25 = 0;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v28 = a2 + 4LL * *(__int16 *)(v26 + 2LL * i) * a10 + 4LL * v27 * v18;
        v16 = (*(__int16 *)(v26 + 2LL * (i + 1)) - *(__int16 *)(v26 + 2LL * i)) * a10;
        if ( v16 > 8 )
        {
          for ( j = 0; j < v16; ++j )
          {
            v20 = (float)(*(float *)(v28 + 4LL * j) * *(float *)(v28 + 4LL * j)) * (float)v16;
            if ( v20 < 0.25 )
              ++v29;
            if ( v20 < 0.0625 )
              ++v30;
            if ( v20 < 0.015625 )
              ++v31;
          }
          if ( i > *(_DWORD *)(a1 + 8) - 4 )
            v13 += sub_14019A1A0(32 * (v29 + v30), v16);
          v23 = 2 * v31 >= v16;
          v22 = 2 * v30 >= v16;
          v24 = 2 * v29 >= v16;
          v25 = v24 + v22 + v23;
          v14 += *(_DWORD *)(a11 + 4LL * i) * v25;
          v21 += *(_DWORD *)(a11 + 4LL * i);
        }
      }
      ++v18;
    }
    while ( v18 < a9 );
    if ( a7 )
    {
      if ( v13 )
        v13 = sub_14019A1A0(v13, (a8 + 4 - *(_DWORD *)(a1 + 8)) * a9);
      *a5 = (v13 + *a5) >> 1;
      v13 = *a5;
      if ( *a6 == 2 )
      {
        v13 += 4;
      }
      else if ( !*a6 )
      {
        v13 -= 4;
      }
      if ( v13 <= 22 )
        *a6 = v13 > 18;
      else
        *a6 = 2;
    }
    v14 = (int)(*a3 + sub_14019A1A0(v14 << 8, v21)) >> 1;
    *a3 = v14;
    v14 = (3 * v14 + ((3 - a4) << 7) + 66) >> 2;
    if ( v14 >= 80 )
    {
      if ( v14 >= 256 )
        v19 = v14 < 384;
      else
        v19 = 2;
    }
    else
    {
      v19 = 3;
    }
  }
  return (unsigned int)v19; /* 0x1401A3EFB: mov eax, dword ptr [rsp + 0x38] */
}


//----- (00000001401A3F20) ----------------------------------------------------
__int64            sub_1401A3F20(__int64 a1, int a2, unsigned int a3)
{
  __int64 result; // rax
  int j; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  float v6; // [rsp+8h] [rbp-10h]
  float v7; // [rsp+Ch] [rbp-Ch]

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    for ( j = 0; j < a2 >> 1; ++j )
    {
      v6 = 0.70710677 * *(float *)(a1 + 4LL * (int)(i + j * 2 * a3));
      v7 = 0.70710677 * *(float *)(a1 + 4LL * (int)(i + (2 * j + 1) * a3));
      *(float *)(a1 + 4LL * (int)(i + j * 2 * a3)) = v6 + v7;
      *(float *)(a1 + 4LL * (int)(i + (2 * j + 1) * a3)) = v6 - v7;
    }
  }
  return result;
}


//----- (00000001401A4050) ----------------------------------------------------
void               sub_1401A4050(
        unsigned int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        int a15,
        int a16,
        void *a17,
        int a18,
        int a19,
        _DWORD *a20,
        int a21,
        int a22,
        int a23)
{
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  unsigned __int64 v25; // rcx
  void *v26; // rsp
  unsigned __int64 v27; // rcx
  void *v28; // rsp
  unsigned __int64 v29; // rcx
  void *v30; // rsp
  unsigned __int64 v31; // rcx
  void *v32; // rsp
  unsigned __int64 v33; // rcx
  void *v34; // rsp
  unsigned __int64 v35; // rcx
  void *v36; // rsp
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  int i; // [rsp+60h] [rbp+0h] BYREF
  int v43; // [rsp+64h] [rbp+4h]
  int v44; // [rsp+68h] [rbp+8h]
  int v45; // [rsp+6Ch] [rbp+Ch]
  unsigned int v46; // [rsp+70h] [rbp+10h]
  int v47; // [rsp+74h] [rbp+14h]
  __int64 v48; // [rsp+78h] [rbp+18h]
  int v49; // [rsp+80h] [rbp+20h]
  int *v50; // [rsp+88h] [rbp+28h]
  int v51; // [rsp+90h] [rbp+30h]
  BOOL v52; // [rsp+94h] [rbp+34h]
  int v53; // [rsp+98h] [rbp+38h]
  int v54; // [rsp+9Ch] [rbp+3Ch]
  int v55; // [rsp+A0h] [rbp+40h]
  void *v56; // [rsp+A8h] [rbp+48h]
  void *Src; // [rsp+B0h] [rbp+50h]
  int v58; // [rsp+B8h] [rbp+58h]
  int v59; // [rsp+BCh] [rbp+5Ch]
  int v60; // [rsp+C0h] [rbp+60h]
  int j; // [rsp+C4h] [rbp+64h]
  int v62; // [rsp+C8h] [rbp+68h]
  int v63; // [rsp+CCh] [rbp+6Ch]
  BOOL v64; // [rsp+D0h] [rbp+70h]
  int v65; // [rsp+D4h] [rbp+74h]
  __m128i *v66; // [rsp+D8h] [rbp+78h]
  int v67; // [rsp+E0h] [rbp+80h]
  BOOL v68; // [rsp+E4h] [rbp+84h]
  int v69; // [rsp+E8h] [rbp+88h]
  void *v70; // [rsp+F0h] [rbp+90h]
  void *v71; // [rsp+F8h] [rbp+98h]
  BOOL v72; // [rsp+100h] [rbp+A0h]
  int v73; // [rsp+104h] [rbp+A4h]
  int v74; // [rsp+108h] [rbp+A8h]
  int v75; // [rsp+10Ch] [rbp+ACh]
  int v76; // [rsp+110h] [rbp+B0h]
  int v77; // [rsp+114h] [rbp+B4h]
  int v78; // [rsp+118h] [rbp+B8h]
  int v79; // [rsp+11Ch] [rbp+BCh]
  int v80; // [rsp+120h] [rbp+C0h]
  int v81; // [rsp+124h] [rbp+C4h]
  unsigned int v82; // [rsp+128h] [rbp+C8h]
  int v83; // [rsp+12Ch] [rbp+CCh]
  BOOL v84; // [rsp+130h] [rbp+D0h]
  int v85; // [rsp+134h] [rbp+D4h]
  int v86; // [rsp+138h] [rbp+D8h]
  int v87; // [rsp+13Ch] [rbp+DCh]
  BOOL v88; // [rsp+140h] [rbp+E0h]
  BOOL v89; // [rsp+144h] [rbp+E4h]
  int v90; // [rsp+148h] [rbp+E8h]
  BOOL v91; // [rsp+14Ch] [rbp+ECh]
  int *v92; // [rsp+150h] [rbp+F0h]
  float v93; // [rsp+158h] [rbp+F8h] BYREF
  float v94; // [rsp+15Ch] [rbp+FCh]
  void *v95; // [rsp+160h] [rbp+100h]
  void *v96; // [rsp+168h] [rbp+108h]
  void *v97; // [rsp+170h] [rbp+110h]
  void *v98; // [rsp+178h] [rbp+118h]
  float v99; // [rsp+180h] [rbp+120h]
  float v100; // [rsp+184h] [rbp+124h]
  float v101; // [rsp+188h] [rbp+128h]
  unsigned int v102; // [rsp+18Ch] [rbp+12Ch]
  int v103; // [rsp+190h] [rbp+130h]
  int v104; // [rsp+194h] [rbp+134h]
  float v105; // [rsp+198h] [rbp+138h]
  float v106; // [rsp+19Ch] [rbp+13Ch]
  float v107; // [rsp+1A0h] [rbp+140h]
  int v108; // [rsp+1A4h] [rbp+144h]
  float v109; // [rsp+1A8h] [rbp+148h]
  float v110; // [rsp+1ACh] [rbp+14Ch]
  int *v111; // [rsp+1B0h] [rbp+150h]
  __m128i *v112; // [rsp+1B8h] [rbp+158h]
  int *v113; // [rsp+1C0h] [rbp+160h]
  __m128i *v114; // [rsp+1C8h] [rbp+168h]
  int *v115; // [rsp+1D0h] [rbp+170h]
  __m128i *v116; // [rsp+1D8h] [rbp+178h]
  int *v117; // [rsp+1E0h] [rbp+180h]
  __m128i *v118; // [rsp+1E8h] [rbp+188h]
  int *v119; // [rsp+1F0h] [rbp+190h]
  __m128i *v120; // [rsp+1F8h] [rbp+198h]
  int *v121; // [rsp+200h] [rbp+1A0h]
  __m128i *v122; // [rsp+208h] [rbp+1A8h]
  _QWORD v123[10]; // [rsp+210h] [rbp+1B0h] BYREF
  __m128i *v124; // [rsp+260h] [rbp+200h]
  int *v125; // [rsp+268h] [rbp+208h]
  _QWORD v126[7]; // [rsp+270h] [rbp+210h] BYREF
  _BYTE v127[56]; // [rsp+2A8h] [rbp+248h] BYREF
  _BYTE v128[80]; // [rsp+2E0h] [rbp+280h] BYREF
  _BYTE v129[80]; // [rsp+330h] [rbp+2D0h] BYREF
  __m128i v130[80]; // [rsp+380h] [rbp+320h] BYREF
  __int64 v131; // [rsp+880h] [rbp+820h]

  v48 = *(_QWORD *)(a2 + 32);
  v85 = 1;
  if ( a6 )
    v87 = 2;
  else
    v87 = 1;
  v60 = v87;
  v88 = a1 && a6 && !a12 && a21 >= 8;
  v68 = v88;
  v89 = !a1 || v68;
  v64 = v89;
  v104 = 1;
  v43 = 1 << a18;
  if ( a10 )
    v90 = v43;
  else
    v90 = 1;
  v53 = v90;
  v45 = *(__int16 *)(v48 + 2LL * a3) * v43;
  v23 = 4LL * (*(__int16 *)(v48 + 2LL * (*(_DWORD *)(a2 + 8) - 1)) * v43 - v45) * v60 + 15;
  if ( v23 <= 4LL * (*(__int16 *)(v48 + 2LL * (*(_DWORD *)(a2 + 8) - 1)) * v43 - v45) * v60 )
    v23 = 0xFFFFFFFFFFFFFF0LL;
  v24 = alloca(v23 & 0xFFFFFFFFFFFFFFF0uLL);
  v125 = (int *)v24;
  v50 = v125;
  v92 = v125 + *(__int16 *)(v48 + 2LL * (*(_DWORD *)(a2 + 8) - 1)) * v43 - v45;
  if ( a1 && v64 )
    v58 = (*(__int16 *)(v48 + 2LL * *(int *)(a2 + 8)) - *(__int16 *)(v48 + 2LL * (*(_DWORD *)(a2 + 8) - 1))) * v43;
  else
    v58 = 0;
  v25 = 4LL * v58 + 15;
  if ( v25 <= 4LL * v58 )
    v25 = 0xFFFFFFFFFFFFFF0LL;
  v26 = alloca(v25 & 0xFFFFFFFFFFFFFFF0uLL);
  v124 = (__m128i *)v26;
  if ( a1 && v64 )
    v66 = v124;
  else
    v66 = (__m128i *)(a5 + 4LL * *(__int16 *)(v48 + 2LL * (*(_DWORD *)(a2 + 8) - 1)) * v43);
  v27 = 4LL * v58 + 15;
  if ( v27 <= 4LL * v58 )
    v27 = 0xFFFFFFFFFFFFFF0LL;
  v28 = alloca(v27 & 0xFFFFFFFFFFFFFFF0uLL);
  v70 = (int *)v28;
  v29 = 4LL * v58 + 15;
  if ( v29 <= 4LL * v58 )
    v29 = 0xFFFFFFFFFFFFFF0LL;
  v30 = alloca(v29 & 0xFFFFFFFFFFFFFFF0uLL);
  v71 = (int *)v30;
  v31 = 4LL * v58 + 15;
  if ( v31 <= 4LL * v58 )
    v31 = 0xFFFFFFFFFFFFFF0LL;
  v32 = alloca(v31 & 0xFFFFFFFFFFFFFFF0uLL);
  v95 = (int *)v32;
  v33 = 4LL * v58 + 15;
  if ( v33 <= 4LL * v58 )
    v33 = 0xFFFFFFFFFFFFFF0LL;
  v34 = alloca(v33 & 0xFFFFFFFFFFFFFFF0uLL);
  v96 = (int *)v34;
  v35 = 4LL * v58 + 15;
  if ( v35 <= 4LL * v58 )
    v35 = 0xFFFFFFFFFFFFFF0LL;
  v36 = alloca(v35 & 0xFFFFFFFFFFFFFFF0uLL);
  v97 = (int *)v36;
  v59 = 0;
  v123[6] = a8;
  v123[4] = (uint64)(uintptr_t)(a17);
  v123[0] = __PAIR64__(v64, a1);
  HIDWORD(v123[2]) = a13;
  v123[1] = a2;
  LODWORD(v123[7]) = *a20;
  LODWORD(v123[3]) = a11;
  HIDWORD(v123[7]) = a22;
  HIDWORD(v123[8]) = a23;
  LODWORD(v123[8]) = 0;
  v91 = v53 > 1;
  LODWORD(v123[9]) = v91;
  for ( i = a3; i < a4; ++i )
  {
    v47 = -1;
    v67 = 0;
    LODWORD(v123[2]) = i;
    v72 = i == a4 - 1;
    v52 = v72;
    Src = (void *)(a5 + 4LL * *(__int16 *)(v48 + 2LL * i) * v43);
    if ( a6 )
      v56 = (void *)(a6 + 4LL * *(__int16 *)(v48 + 2LL * i) * v43);
    else
      v56 = nullptr;
    v44 = *(__int16 *)(v48 + 2LL * (i + 1)) * v43 - *(__int16 *)(v48 + 2LL * i) * v43;
    v69 = sub_14019A0E0((__int64)a17);
    if ( i != a3 )
      a16 -= v69;
    v51 = a15 - v69 - 1;
    LODWORD(v123[5]) = v51;
    if ( i > a19 - 1 )
    {
      v55 = 0;
    }
    else
    {
      if ( a19 - i <= 3 )
        v73 = a19 - i;
      else
        v73 = 3;
      v54 = sub_14019A1C0(a16, v73);
      if ( v51 + 1 >= v54 + *(_DWORD *)(a9 + 4LL * i) )
        v74 = v54 + *(_DWORD *)(a9 + 4LL * i);
      else
        v74 = v51 + 1;
      if ( v74 <= 0x3FFF )
      {
        if ( v51 + 1 >= v54 + *(_DWORD *)(a9 + 4LL * i) )
          v75 = v54 + *(_DWORD *)(a9 + 4LL * i);
        else
          v75 = v51 + 1;
        v76 = v75;
      }
      else
      {
        v76 = 0x3FFF;
      }
      if ( v76 >= 0 )
      {
        if ( v51 + 1 >= v54 + *(_DWORD *)(a9 + 4LL * i) )
          v86 = v54 + *(_DWORD *)(a9 + 4LL * i);
        else
          v86 = v51 + 1;
        if ( v86 <= 0x3FFF )
        {
          if ( v51 + 1 >= v54 + *(_DWORD *)(a9 + 4LL * i) )
            v77 = v54 + *(_DWORD *)(a9 + 4LL * i);
          else
            v77 = v51 + 1;
          v78 = v77;
        }
        else
        {
          v78 = 0x3FFF;
        }
        v79 = v78;
      }
      else
      {
        v79 = 0;
      }
      v55 = v79;
    }
    if ( v64
      && (*(__int16 *)(v48 + 2LL * i) * v43 - v44 >= *(__int16 *)(v48 + 2LL * a3) * v43 || i == a3 + 1)
      && (v85 || !v59) )
    {
      v59 = i;
    }
    if ( i == a3 + 1 )
      sub_1401AD210(a2, (__int64)v50, (__int64)v92, a3, v43, a12);
    v67 = *(_DWORD *)(a14 + 4LL * i);
    HIDWORD(v123[3]) = v67;
    if ( i >= *(_DWORD *)(a2 + 12) )
    {
      Src = v50;
      if ( a6 )
        v56 = v50;
      v66 = nullptr;
    }
    if ( v52 && !v68 )
      v66 = nullptr;
    if ( !v59 || a11 == 3 && v53 <= 1 && v67 >= 0 )
    {
      v103 = 1;
      v49 = (1 << v53) - 1;
      v46 = v49;
    }
    else
    {
      if ( *(__int16 *)(v48 + 2LL * v59) * v43 - v45 - v44 >= 0 )
        v80 = *(__int16 *)(v48 + 2LL * v59) * v43 - v45 - v44;
      else
        v80 = 0;
      v47 = v80;
      v65 = v59;
      do
        --v65;
      while ( *(__int16 *)(v48 + 2LL * v65) * v43 > v45 + v47 );
      v62 = v59 - 1;
      do
        ++v62;
      while ( v62 < i && *(__int16 *)(v48 + 2LL * v62) * v43 < v44 + v45 + v47 );
      v49 = 0;
      v46 = 0;
      v63 = v65;
      do
      {
        v46 |= *(unsigned __int8 *)(a7 + v60 * v63);
        v49 |= *(unsigned __int8 *)(a7 + v60 * v63++ + v60 - 1);
      }
      while ( v63 < v62 );
    }
    if ( a12 )
    {
      if ( i == a13 )
      {
        a12 = 0;
        if ( v64 )
        {
          for ( j = 0; j < *(__int16 *)(v48 + 2LL * i) * v43 - v45; ++j )
            *(float *)&v50[j] = 0.5 * (float)(*(float *)&v50[j] + *(float *)&v92[j]);
        }
      }
    }
    if ( a12 )
    {
      if ( v52 )
        v111 = nullptr;
      else
        v111 = &v50[*(__int16 *)(v48 + 2LL * i) * v43 - v45];
      if ( v47 == -1 )
        v112 = nullptr;
      else
        v112 = (__m128i *)&v50[v47];
      v46 = sub_1401AC060((int *)v123, (float *)Src, v44, v55 / 2, v53, v112, a18, v111, 1.0, v66, v46);
      if ( v52 )
        v113 = nullptr;
      else
        v113 = &v92[*(__int16 *)(v48 + 2LL * i) * v43 - v45];
      if ( v47 == -1 )
        v114 = nullptr;
      else
        v114 = (__m128i *)&v92[v47];
      v49 = sub_1401AC060((int *)v123, (float *)v56, v44, v55 / 2, v53, v114, a18, v113, 1.0, v66, v49);
    }
    else
    {
      if ( v56 )
      {
        if ( v68 && i < a13 )
        {
          sub_1401A9E10(*(float *)(a8 + 4LL * i), *(float *)(a8 + 4LL * (*(_DWORD *)(a2 + 8) + i)), &v93);
          v82 = v49 | v46;
          qmemcpy(v126, a17, sizeof(v126));
          qmemcpy(v128, v123, sizeof(v128));
          sub_1401FC920((__m128i *)v70, (     __m128i *)Src, 4LL * v44);
          sub_1401FC920((__m128i *)v71, (     __m128i *)v56, 4LL * v44);
          LODWORD(v123[8]) = -1;
          if ( v52 )
            v115 = nullptr;
          else
            v115 = &v50[*(__int16 *)(v48 + 2LL * i) * v43 - v45];
          if ( v47 == -1 )
            v116 = nullptr;
          else
            v116 = (__m128i *)&v50[v47];
          v46 = CGlobalUtils__CheckAlignment(
                  (__int64)v123,
                  (float *)Src,
                  (float *)v56,
                  v44,
                  v55,
                  v53,
                  v116,
                  a18,
                  v115,
                  v66,
                  v82);
          v105 = v93;
          v37 = sub_1401A9C00((__int64)v70, (__int64)Src, v44);
          v107 = v105 * v37;
          v106 = v94;
          v38 = sub_1401A9C00((__int64)v71, (__int64)v56, v44);
          v100 = v107 + (float)(v106 * v38);
          v102 = v46;
          qmemcpy(v127, a17, sizeof(v127));
          qmemcpy(v129, v123, sizeof(v129));
          sub_1401FC920((__m128i *)v95, (     __m128i *)Src, 4LL * v44);
          sub_1401FC920((__m128i *)v96, (     __m128i *)v56, 4LL * v44);
          if ( !v52 )
            sub_1401FC920(
              (__m128i *)v97,
              (     __m128i *)&v50[*(__int16 *)(v48 + 2LL * i) * v43 - v45],
              4LL * v44);
          v81 = HIDWORD(v126[3]);
          v108 = v126[1];
          v98 = (void *)(SHIDWORD(v126[3]) + v126[0]);
          v83 = LODWORD(v126[1]) - HIDWORD(v126[3]);
          sub_1401FC920(v130, (     __m128i *)v98, LODWORD(v126[1]) - HIDWORD(v126[3]));
          qmemcpy(a17, v126, 0x38u);
          qmemcpy(v123, v128, sizeof(v123));
          sub_1401FC920((__m128i *)Src, (     __m128i *)v70, 4LL * v44);
          sub_1401FC920((__m128i *)v56, (     __m128i *)v71, 4LL * v44);
          if ( i == a3 + 1 )
            sub_1401AD210(a2, (__int64)v50, (__int64)v92, a3, v43, 0);
          LODWORD(v123[8]) = 1;
          if ( v52 )
            v117 = nullptr;
          else
            v117 = &v50[*(__int16 *)(v48 + 2LL * i) * v43 - v45];
          if ( v47 == -1 )
            v118 = nullptr;
          else
            v118 = (__m128i *)&v50[v47];
          v46 = CGlobalUtils__CheckAlignment(
                  (__int64)v123,
                  (float *)Src,
                  (float *)v56,
                  v44,
                  v55,
                  v53,
                  v118,
                  a18,
                  v117,
                  v66,
                  v82);
          v109 = v93;
          v39 = sub_1401A9C00((__int64)v70, (__int64)Src, v44);
          v99 = v109 * v39;
          v110 = v94;
          v40 = sub_1401A9C00((__int64)v71, (__int64)v56, v44);
          v101 = v99 + (float)(v110 * v40);
          if ( v100 >= v101 )
          {
            v46 = v102;
            qmemcpy(a17, v127, 0x38u);
            qmemcpy(v123, v129, sizeof(v123));
            sub_1401FC920((__m128i *)Src, (     __m128i *)v95, 4LL * v44);
            sub_1401FC920((__m128i *)v56, (     __m128i *)v96, 4LL * v44);
            if ( !v52 )
              sub_1401FC920(
                (__m128i *)&v50[*(__int16 *)(v48 + 2LL * i) * v43 - v45],
                (     __m128i *)v97,
                4LL * v44);
            sub_1401FC920((__m128i *)v98, v130, v83);
          }
        }
        else
        {
          LODWORD(v123[8]) = 0;
          if ( v52 )
            v119 = nullptr;
          else
            v119 = &v50[*(__int16 *)(v48 + 2LL * i) * v43 - v45];
          if ( v47 == -1 )
            v120 = nullptr;
          else
            v120 = (__m128i *)&v50[v47];
          v46 = CGlobalUtils__CheckAlignment(
                  (__int64)v123,
                  (float *)Src,
                  (float *)v56,
                  v44,
                  v55,
                  v53,
                  v120,
                  a18,
                  v119,
                  v66,
                  v49 | v46);
        }
      }
      else
      {
        if ( v52 )
          v121 = nullptr;
        else
          v121 = &v50[*(__int16 *)(v48 + 2LL * i) * v43 - v45];
        if ( v47 == -1 )
          v122 = nullptr;
        else
          v122 = (__m128i *)&v50[v47];
        v46 = sub_1401AC060((int *)v123, (float *)Src, v44, v55, v53, v122, a18, v121, 1.0, v66, v49 | v46);
      }
      v49 = v46;
    }
    *(_BYTE *)(a7 + v60 * i) = v46;
    *(_BYTE *)(a7 + v60 * i + v60 - 1) = v49;
    a16 += v69 + *(_DWORD *)(a9 + 4LL * i);
    v84 = v55 > 8 * v44;
    v85 = v84;
    LODWORD(v123[9]) = 0;
  }
  *a20 = v123[7];
  return ; /* original result ABI */
}


//----- (00000001401A5710) ----------------------------------------------------
__int64            sub_1401A5710(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  __int64 result; // rax
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v18; // [rsp+24h] [rbp-64h]
  int v19; // [rsp+28h] [rbp-60h]
  float v20; // [rsp+2Ch] [rbp-5Ch]
  float v21; // [rsp+30h] [rbp-58h]
  int i; // [rsp+34h] [rbp-54h]
  signed int j; // [rsp+3Ch] [rbp-4Ch]
  signed int v24; // [rsp+40h] [rbp-48h]
  float v25; // [rsp+44h] [rbp-44h]
  float v26; // [rsp+48h] [rbp-40h]
  float v27; // [rsp+4Ch] [rbp-3Ch]
  float v28; // [rsp+50h] [rbp-38h]
  float v29; // [rsp+54h] [rbp-34h]
  float v30; // [rsp+58h] [rbp-30h]
  float v31; // [rsp+5Ch] [rbp-2Ch]
  int v32; // [rsp+60h] [rbp-28h]
  signed int v33; // [rsp+64h] [rbp-24h]
  float v34; // [rsp+68h] [rbp-20h]
  float *v35; // [rsp+78h] [rbp-10h]

  while ( 1 )
  {
    result = a8;
    if ( a7 >= (int)a8 )
      break;
    v24 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (a7 + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a7);
    v33 = (unsigned int)sub_14019A1A0(*(_DWORD *)(a12 + 4LL * a7) + 1, v24) >> a4;
    v14 = exp(0.6931471805599453 * (float)(-0.125 * (float)v33));
    v29 = 0.5 * v14;
    v15 = sqrt((double)(v24 << a4));
    v34 = 1.0 / v15;
    v19 = 0;
    do
    {
      v32 = 0;
      v20 = *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v19));
      v21 = *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v19));
      if ( a5 == 1 )
      {
        if ( v20 <= *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8))) )
          v25 = *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8)));
        else
          v25 = *(float *)(a10 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v19));
        v20 = v25;
        if ( v21 <= *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8))) )
          v26 = *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8)));
        else
          v26 = *(float *)(a11 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v19));
        v21 = v26;
      }
      if ( v21 <= v20 )
        v27 = v21;
      else
        v27 = v20;
      if ( (float)(*(float *)(a9 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v19)) - v27) >= 0.0 )
        v28 = *(float *)(a9 + 4LL * (a7 + *(_DWORD *)(a1 + 8) * v19)) - v27;
      else
        v28 = 0.0;
      v16 = exp(0.6931471805599453 * (float)-v28);
      v18 = 2.0 * v16;
      if ( a4 == 3 )
        v18 = v18 * 1.4142135;
      if ( v18 <= v29 )
        v30 = v18;
      else
        v30 = v29;
      v35 = (float *)(a2 + 4LL * a6 * v19 + 4LL * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a7) << a4));
      for ( i = 0; i < 1 << a4; ++i )
      {
        if ( ((1 << i) & *(unsigned __int8 *)(a3 + v19 + a5 * a7)) == 0 )
        {
          for ( j = 0; j < v24; ++j )
          {
            a13 = sub_1401A5C70(a13);
            if ( (a13 & 0x8000) != 0 )
              v31 = v30 * v34;
            else
              v31 = -(float)(v30 * v34);
            v35[i + (j << a4)] = v31;
          }
          v32 = 1;
        }
      }
      if ( v32 )
        sub_1401A6800(v35, v24 << a4, 1.0);
      ++v19;
    }
    while ( v19 < a5 );
    ++a7;
  }
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401A5C70) ----------------------------------------------------
__int64            sub_1401A5C70(int a1)
{
  return (unsigned int)(1664525 * a1 + 1013904223);
}


//----- (00000001401A5C90) ----------------------------------------------------
__int64            sub_1401A5C90(float a1, __int64 a2, __int64 a3, signed int a4, signed int a5)
{
  signed int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; i < a4 && *(float *)(a2 + 4LL * i) <= a1; ++i )
    ;
  if ( i > a5 && (float)(*(float *)(a2 + 4LL * a5) + *(float *)(a3 + 4LL * a5)) > a1 )
    i = a5;
  if ( i < a5 && a1 > (float)(*(float *)(a2 + 4LL * (a5 - 1)) - *(float *)(a3 + 4LL * (a5 - 1))) )
    return (unsigned int)a5;
  return (unsigned int)i;
}


//----- (00000001401A5D70) ----------------------------------------------------
__int64            sub_1401A5D70(__int64 a1, signed int a2, int a3, signed int a4, int a5, int a6)
{
  __int64 result; // rax
  float v7; // xmm0_4
  float v8; // xmm0_4
  int i; // [rsp+30h] [rbp-28h]
  signed int j; // [rsp+34h] [rbp-24h]
  float v11; // [rsp+38h] [rbp-20h]
  float v12; // [rsp+40h] [rbp-18h]
  float v13; // [rsp+44h] [rbp-14h]
  int v16; // [rsp+68h] [rbp+10h]

  i = 0;
  result = (unsigned int)(2 * a5);
  if ( (int)result < a2 && a6 )
  {
    v12 = (float)(1.0 * (float)a2) / (float)(a5 * dword_1402821F0[a6 - 1] + a2);
    v13 = 0.5 * (float)(v12 * v12);
    v7 = cos((float)(1.5707964 * v13));
    v11 = v7;
    v8 = cos((float)(1.5707964 * (float)(1.0 - v13)));
    if ( a2 >= 8 * a4 )
    {
      for ( i = 1; (a4 >> 2) + a4 * (i + i * i) < a2; ++i )
        ;
    }
    v16 = sub_14019A1A0(a2, a4);
    for ( j = 0; ; ++j )
    {
      result = (unsigned int)a4;
      if ( j >= a4 )
        break;
      if ( a3 >= 0 )
      {
        sub_1401BA120((float *)(a1 + 4LL * v16 * j), v16, 1, v11, -v8);
        if ( i )
          sub_1401BA120((float *)(a1 + 4LL * v16 * j), v16, i, v8, -v11);
      }
      else
      {
        if ( i )
          sub_1401BA120((float *)(a1 + 4LL * v16 * j), v16, i, v8, v11);
        sub_1401BA120((float *)(a1 + 4LL * v16 * j), v16, 1, v11, v8);
      }
    }
  }
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402821F0: using guessed type _DWORD dword_1402821F0[3];

//----- (00000001401A6000) ----------------------------------------------------
float            sub_1401A6000(float *a1, _DWORD *a2, int a3, int a4)
{
  unsigned __int64 v4; // rcx
  void *v5; // rsp
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  float v8; // xmm0_4
  double v9; // xmm0_8
  int v11; // [rsp+20h] [rbp+0h] BYREF
  float v12; // [rsp+24h] [rbp+4h]
  float v13; // [rsp+28h] [rbp+8h]
  int v14; // [rsp+2Ch] [rbp+Ch]
  int v15; // [rsp+30h] [rbp+10h]
  float v16; // [rsp+34h] [rbp+14h]
  float v17; // [rsp+38h] [rbp+18h]
  float *v18; // [rsp+40h] [rbp+20h]
  float v19; // [rsp+48h] [rbp+28h]
  float v20; // [rsp+4Ch] [rbp+2Ch]
  int i; // [rsp+50h] [rbp+30h]
  BOOL v22; // [rsp+54h] [rbp+34h]
  float v23; // [rsp+58h] [rbp+38h]
  float v24; // [rsp+5Ch] [rbp+3Ch]
  float v25; // [rsp+60h] [rbp+40h]
  int *v26; // [rsp+68h] [rbp+48h]
  __int64 v27; // [rsp+70h] [rbp+50h]

  v4 = 4LL * a4 + 15;
  if ( v4 <= 4LL * a4 )
    v4 = 0xFFFFFFFFFFFFFF0LL;
  v5 = alloca(v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v18 = (float *)&v11;
  v6 = 4LL * a4 + 15;
  if ( v6 <= 4LL * a4 )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
  v26 = &v11;
  v16 = 0.0;
  v11 = 0;
  do
  {
    v22 = a1[v11] < 0.0;
    v26[v11] = v22;
    v8 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(a1[v11]), u64);
    a1[v11] = v8;
    a2[v11] = 0;
    v18[v11++] = 0.0;
  }
  while ( v11 < a4 );
  v12 = 0.0;
  v17 = 0.0;
  v14 = a3;
  if ( a3 > a4 >> 1 )
  {
    v11 = 0;
    do
      v16 = v16 + a1[v11++];
    while ( v11 < a4 );
    if ( v16 <= 1.0e-15 || v16 >= 64.0 )
    {
      *a1 = 1.0;
      v11 = 1;
      do
        a1[v11++] = 0.0;
      while ( v11 < a4 );
      v16 = 1.0;
    }
    v25 = (float)((float)a3 + 0.80000001) * (float)(1.0 / v16);
    v11 = 0;
    do
    {
      v9 = floor((float)(v25 * a1[v11]));
      a2[v11] = (int)v9;
      v18[v11] = (float)(int)a2[v11];
      v12 = v12 + (float)(v18[v11] * v18[v11]);
      v17 = v17 + (float)(a1[v11] * v18[v11]);
      v18[v11] = v18[v11] * 2.0;
      v14 -= a2[v11++];
    }
    while ( v11 < a4 );
  }
  if ( v14 > a4 + 3 )
  {
    v20 = (float)v14;
    v12 = v12 + (float)((float)v14 * (float)v14);
    v12 = v12 + (float)((float)v14 * *v18);
    *a2 += v14;
    v14 = 0;
  }
  for ( i = 0; i < v14; ++i )
  {
    v15 = 0;
    v12 = v12 + 1.0;
    v13 = v17 + *a1;
    v19 = v12 + *v18;
    v13 = v13 * v13;
    v23 = v19;
    v24 = v13;
    v11 = 1;
    do
    {
      v13 = v17 + a1[v11];
      v19 = v12 + v18[v11];
      v13 = v13 * v13;
      if ( (float)(v23 * v13) > (float)(v19 * v24) )
      {
        v23 = v19;
        v24 = v13;
        v15 = v11;
      }
      ++v11;
    }
    while ( v11 < a4 );
    v17 = v17 + a1[v15];
    v12 = v12 + v18[v15];
    v18[v15] = v18[v15] + 2.0;
    ++a2[v15];
  }
  v11 = 0;
  do
  {
    a2[v11] = v26[v11] + (-v26[v11] ^ a2[v11]);
    ++v11;
  }
  while ( v11 < a4 );
  return v12; /* 0x1401A65AE: movss xmm0, dword ptr [rbp + 4] */
}


//----- (00000001401A65D0) ----------------------------------------------------
__int64            sub_1401A65D0(float *a1, unsigned int a2, int a3, int a4, int a5, _DWORD *a6, float a7, int a8)
{
  float v8; // xmm0_4
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  _DWORD *v12; // [rsp+30h] [rbp+0h] BYREF
  float v13; // [rsp+38h] [rbp+8h]
  int v14; // [rsp+3Ch] [rbp+Ch]
  __int64 v15; // [rsp+40h] [rbp+10h]

  v9 = 4LL * (int)(a2 + 3) + 15;
  if ( v9 <= 4LL * (int)(a2 + 3) )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  v12 = &v12;
  sub_1401A5D70((__int64)a1, a2, 1, a5, a3, a4);
  v13 = sub_1401A6000(a1, v12, a3, a2); /* 0x1401A6675: movss dword ptr [rbp + 8], xmm0 */
  sub_1401A2610((__int64)v12, a2, a3, a6);
  if ( a8 )
  {
    sub_1401BA2F0((__int64)v12, (__int64)a1, a2, v13, a7);
    sub_1401A5D70((__int64)a1, a2, -1, a5, a3, a4);
  }
  v14 = sub_1401BA3A0((__int64)v12, a2, a5);
  return (unsigned int)v14; /* 0x1401A66EC: mov eax, dword ptr [rbp + 0xc] */
}

// 1401A6675: variable 'v8' is possibly undefined

//----- (00000001401A6710) ----------------------------------------------------
__int64            sub_1401A6710(__int64 a1, signed int a2, int a3, int a4, int a5, unsigned int *a6, float a7)
{
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  float v10[2]; // [rsp+30h] [rbp+0h] BYREF
  float *v11; // [rsp+38h] [rbp+8h]
  __int64 v12; // [rsp+40h] [rbp+10h]

  v7 = 4LL * a2 + 15;
  if ( v7 <= 4LL * a2 )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
  v11 = v10;
  v10[0] = sub_1401A2700(v10, a2, a3, a6);
  sub_1401BA2F0((__int64)v11, a1, a2, v10[0], a7);
  sub_1401A5D70(a1, a2, -1, a5, a3, a4);
  LODWORD(v10[1]) = sub_1401BA3A0((__int64)v11, a2, a5);
  return (unsigned int)LODWORD(v10[1]); /* 0x1401A67E2: mov eax, dword ptr [rbp + 4] */
}


//----- (00000001401A6800) ----------------------------------------------------
__int64            sub_1401A6800(float *a1, int a2, float a3)
{
  float v3; // xmm0_4
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-28h]
  float v6; // [rsp+28h] [rbp-20h]
  float *v7; // [rsp+30h] [rbp-18h]

  v6 = sub_1401A9C00((__int64)a1, (__int64)a1, a2) + 1.0e-15;
  v3 = sqrt(v6);
  v7 = a1;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a2;
    if ( i >= a2 )
      break;
    *v7 = (float)((float)(1.0 / v3) * a3) * *v7;
    ++v7;
  }
  return result;
}


//----- (00000001401A68E0) ----------------------------------------------------
__int64            sub_1401A68E0(__int64 a1, __int64 a2, int a3, int a4)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  int i; // [rsp+20h] [rbp-28h]
  float v9; // [rsp+24h] [rbp-24h]
  float v10; // [rsp+28h] [rbp-20h]
  float v11; // [rsp+2Ch] [rbp-1Ch]
  float v12; // [rsp+30h] [rbp-18h]
  float v13; // [rsp+34h] [rbp-14h]

  v9 = 1.0e-15;
  v10 = 1.0e-15;
  if ( a3 )
  {
    for ( i = 0; i < a4; ++i )
    {
      v11 = *(float *)(a1 + 4LL * i) + *(float *)(a2 + 4LL * i);
      v12 = *(float *)(a1 + 4LL * i) - *(float *)(a2 + 4LL * i);
      v10 = v10 + (float)(v11 * v11);
      v9 = v9 + (float)(v12 * v12);
    }
  }
  else
  {
    v10 = sub_1401A9C00(a1, a1, a4) + 1.0e-15;
    v9 = sub_1401A9C00(a2, a2, a4) + 1.0e-15;
  }
  v4 = sqrt(v10);
  v13 = v4;
  v5 = sqrt(v9);
  v6 = sub_1401A6B90(v5, v13);
  return (unsigned int)(int)floor((float)((float)(10430.382 * v6) + 0.5));
}


//----- (00000001401A6AA0) ----------------------------------------------------
__int64            sub_1401A6AA0(__int64 a1)
{
  return sr_path_malloc(a1);
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);

//----- (00000001401A6AC0) ----------------------------------------------------
void            sub_1401A6AC0(void *a1)
{
  free(a1);
}


//----- (00000001401A6AE0) ----------------------------------------------------
__int64            sub_1401A6AE0(unsigned int a1)
{
  int v2; // [rsp+20h] [rbp-28h]
  unsigned int v3; // [rsp+24h] [rbp-24h]
  unsigned int v4; // [rsp+28h] [rbp-20h]
  unsigned int v5; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v6; // [rsp+50h] [rbp+8h]

  v6 = a1;
  v4 = 0;
  v2 = (int)sub_14019A020(a1) >> 1;
  v3 = 1 << v2;
  do
  {
    v5 = (v3 + 2 * v4) << v2;
    if ( v5 <= v6 )
    {
      v4 += v3;
      v6 -= v5;
    }
    v3 >>= 1;
    --v2;
  }
  while ( v2 >= 0 );
  return v4;
}


//----- (00000001401A6B90) ----------------------------------------------------
float            sub_1401A6B90(float a1, float a2)
{
  float v3; // [rsp+0h] [rbp-28h]
  float v4; // [rsp+4h] [rbp-24h]
  float v5; // [rsp+8h] [rbp-20h]
  float v6; // [rsp+Ch] [rbp-1Ch]
  float v7; // [rsp+10h] [rbp-18h]

  v4 = a2 * a2;
  v3 = a1 * a1;
  if ( (float)((float)(a2 * a2) + (float)(a1 * a1)) < 1.0e-18 )
    return 0.0;
  if ( v3 <= v4 )
  {
    if ( a1 >= 0.0 )
      v6 = 1.5707964;
    else
      v6 = -1.5707964;
    if ( (float)(a2 * a1) >= 0.0 )
      v7 = 1.5707964;
    else
      v7 = -1.5707964;
    return (float)((float)((float)((float)(a2 * a1) * (float)(v4 + (float)(0.43157974 * v3)))
                         / (float)((float)(v4 + (float)(0.67848402 * v3)) * (float)(v4 + (float)(0.085955419 * v3))))
                 + v6)
         - v7;
  }
  else
  {
    if ( a1 >= 0.0 )
      v5 = 1.5707964;
    else
      v5 = -1.5707964;
    return (float)((float)((float)((float)-a2 * a1) * (float)(v3 + (float)(0.43157974 * v4)))
                 / (float)((float)(v3 + (float)(0.67848402 * v4)) * (float)(v3 + (float)(0.085955419 * v4))))
         + v5;
  }
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401A6D80) ----------------------------------------------------
float            sub_1401A6D80(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-28h]
  float v4; // [rsp+4h] [rbp-24h]
  float v5; // [rsp+8h] [rbp-20h]
  float v6; // [rsp+Ch] [rbp-1Ch]
  float v7; // [rsp+10h] [rbp-18h]

  v4 = 0.0;
  v5 = 0.0;
  for ( i = 0; i < a2; ++i )
  {
    if ( v4 <= *(float *)(a1 + 4LL * i) )
      v6 = *(float *)(a1 + 4LL * i);
    else
      v6 = v4;
    v4 = v6;
    if ( *(float *)(a1 + 4LL * i) <= v5 )
      v7 = *(float *)(a1 + 4LL * i);
    else
      v7 = v5;
    v5 = v7;
  }
  if ( v4 <= (float)-v5 )
    return -v5;
  else
    return v4;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401A6EA0) ----------------------------------------------------
__int64            sub_1401A6EA0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, unsigned int a6)
{
  float v6; // xmm0_4
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-18h]
  int j; // [rsp+20h] [rbp-18h]
  signed int v10; // [rsp+24h] [rbp-14h]

  v10 = 0;
  do
  {
    for ( i = 0; i < a2; ++i )
    {
      v6 = 1.442695040888963 * log(*(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + i)));
      *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + i)) = v6 - flt_140282A10[i];
    }
    for ( j = a2; j < a3; ++j )
      *(_DWORD *)(a5 + 4LL * (j + *(_DWORD *)(a1 + 8) * v10)) = -1050673152;
    ++v10;
    result = a6;
  }
  while ( v10 < (int)a6 );
  return result;
}

// 140282A10: using guessed type float flt_140282A10[28];

//----- (00000001401A6FC0) ----------------------------------------------------
void               sub_1401A6FC0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __m128i *a6,
        int a7,
        __m128i *a8,
        _DWORD *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        float *a14,
        int a15,
        int a16,
        int a17)
{
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  void *v23; // rsp
  int v24; // eax
  __m128i v26; // [rsp+80h] [rbp+0h] BYREF
  int v27; // [rsp+90h] [rbp+10h]
  int v28; // [rsp+94h] [rbp+14h]
  int v29; // [rsp+98h] [rbp+18h]
  __m128i *v30; // [rsp+A0h] [rbp+20h]
  BOOL v31; // [rsp+A8h] [rbp+28h]
  __int32 v32; // [rsp+ACh] [rbp+2Ch]
  int v33; // [rsp+B0h] [rbp+30h]
  float v34; // [rsp+B4h] [rbp+34h]
       __m128i *v35; // [rsp+B8h] [rbp+38h]
       __m128i *v36; // [rsp+C0h] [rbp+40h]
  __m128i *v37; // [rsp+C8h] [rbp+48h]
  int v38; // [rsp+D0h] [rbp+50h]
  int v39; // [rsp+D4h] [rbp+54h]
  _BYTE v40[56]; // [rsp+D8h] [rbp+58h] BYREF
  _BYTE v41[56]; // [rsp+110h] [rbp+90h] BYREF
  __int64 v42; // [rsp+148h] [rbp+C8h]

  v28 = 0;
  v31 = a13 || !a15 && *a14 > (float)((a3 - a2) * 2 * a10) && a12 > a10 * (a3 - a2);
  SR_VEC_LANES(128, v26, i32)[0] = v31;
  v38 = (int)(float)((float)((float)((float)a7 * *a14) * (float)a16) / (float)(a10 << 9));
  v34 = sub_1401B88F0(a5, (__int64)a6, a2, a4, *(_DWORD *)(a1 + 8), a10);
  v27 = sub_14019A0A0((__int64)a9);
  if ( v27 + 3 > (unsigned int)a7 )
  {
    SR_VEC_LANES(128, v26, i32)[0] = 0;
    a15 = 0;
  }
  SR_VEC_LANES(128, v26, i32)[1] = 1098907648;
  if ( a3 - a2 > 10 )
  {
    if ( (float)(0.125 * (float)a12) <= *(float *)&SR_VEC_LANES(128, v26, i32)[1] )
      *(float *)&v32 = 0.125 * (float)a12;
    else
      v32 = SR_VEC_LANES(128, v26, i32)[1];
    SR_VEC_LANES(128, v26, i32)[1] = v32;
  }
  if ( a17 )
    SR_VEC_LANES(128, v26, i32)[1] = 1077936128;
  qmemcpy(v41, a9, sizeof(v41));
  v17 = 4LL * *(_DWORD *)(a1 + 8) * a10 + 15;
  if ( v17 <= 4LL * *(_DWORD *)(a1 + 8) * a10 )
    v17 = 0xFFFFFFFFFFFFFF0LL;
  v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
  v30 = (__m128i *)v18;
  v19 = 4LL * *(_DWORD *)(a1 + 8) * a10 + 15;
  if ( v19 <= 4LL * *(_DWORD *)(a1 + 8) * a10 )
    v19 = 0xFFFFFFFFFFFFFF0LL;
  v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
  v35 = (__m128i *)v20;
  sub_1401FC920(v30, a6, 4LL * *(_DWORD *)(a1 + 8) * a10);
  if ( a15 || SR_VEC_LANES(128, v26, i32)[0] )
    v28 = sub_1401B89F0(
            a1,
            a2,
            a3,
            a5,
            (__int64)v30,
            a7,
            v27,
            (__int64)&unk_140281FA0 + 84 * a11 + 42,
            (__int64)v35,
            a9,
            a10,
            a11,
            1,
            *(float *)&SR_VEC_LANES(128, v26, i32)[1],
            a17);
  if ( SR_VEC_LANES(128, v26, i32)[0] )
  {
    sub_1401FC920(a6, v30, 4LL * *(_DWORD *)(a1 + 8) * a10);
    sub_1401FC920(a8, v35, 4LL * *(_DWORD *)(a1 + 8) * a10);
  }
  else
  {
    v39 = sub_14019A0E0((__int64)a9);
    qmemcpy(v40, a9, sizeof(v40));
    SR_VEC_LANES(128, v26, i32)[2] = unknown_libname_995((__int64)v41);
    v29 = unknown_libname_995((__int64)v40);
    v21 = unknown_libname_996((__int64)v40);
    v37 = (__m128i *)(SR_VEC_LANES(128, v26, u32)[2] + v21);
    SR_VEC_LANES(128, v26, i32)[3] = v29 - SR_VEC_LANES(128, v26, i32)[2];
    if ( v29 == SR_VEC_LANES(128, v26, i32)[2] )
      SR_VEC_LANES(128, v26, i32)[3] = 0;
    v22 = SR_VEC_LANES(128, v26, u32)[3] + 15LL;
    if ( v22 <= SR_VEC_LANES(128, v26, u32)[3] )
      v22 = 0xFFFFFFFFFFFFFF0LL;
    v23 = alloca(v22 & 0xFFFFFFFFFFFFFFF0uLL);
    v36 = (__m128i *)v23;
    sub_1401FC920(v36, v37, (unsigned int)(v29 - SR_VEC_LANES(128, v26, i32)[2]));
    qmemcpy(a9, v41, 0x38u);
    v33 = sub_1401B89F0(
            a1,
            a2,
            a3,
            a5,
            (__int64)a6,
            a7,
            v27,
            (__int64)&unk_140281FA0 + 84 * a11 + 42 * SR_VEC_LANES(128, v26, i32)[0],
            (__int64)a8,
            a9,
            a10,
            a11,
            0,
            *(float *)&SR_VEC_LANES(128, v26, i32)[1],
            a17);
    if ( a15 )
    {
      if ( v28 < v33 || v28 == v33 && (v24 = sub_14019A0E0((__int64)a9), v38 + v24 > v39) )
      {
        qmemcpy(a9, v40, 0x38u);
        sub_1401FC920(v37, v36, (unsigned int)(v29 - SR_VEC_LANES(128, v26, i32)[2]));
        sub_1401FC920(a6, v30, 4LL * *(_DWORD *)(a1 + 8) * a10);
        sub_1401FC920(a8, v35, 4LL * *(_DWORD *)(a1 + 8) * a10);
        SR_VEC_LANES(128, v26, i32)[0] = 1;
      }
    }
  }
  if ( SR_VEC_LANES(128, v26, i32)[0] )
    *a14 = v34;
  else
    *a14 = (float)((float)(flt_14027E378[a11] * flt_14027E378[a11]) * *a14) + v34;
  return; /* original void energy quantizer */
}

// 14027E378: using guessed type float flt_14027E378[4];

//----- (00000001401A7710) ----------------------------------------------------
__int64            sub_1401A7710(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        int a8)
{
  __int64 result; // rax
  __int16 v9; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  float v13; // [rsp+30h] [rbp-18h]

  while ( 1 )
  {
    result = a3;
    if ( a2 >= (int)a3 )
      break;
    v9 = 1 << *(_DWORD *)(a6 + 4LL * a2);
    if ( *(int *)(a6 + 4LL * a2) > 0 )
    {
      v11 = 0;
      do
      {
        v12 = (int)floor((float)((float)(*(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v11 + a2)) + 0.5) * (float)v9));
        if ( v12 > v9 - 1 )
          v12 = v9 - 1;
        if ( v12 < 0 )
          v12 = 0;
        sub_14019A6D0(a7, v12, *(_DWORD *)(a6 + 4LL * a2));
        v13 = (float)((float)((float)((float)v12 + 0.5) * (float)(1 << (14 - *(_BYTE *)(a6 + 4LL * a2))))
                    * 0.000061035156)
            - 0.5;
        *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v11 + a2)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v11 + a2))
                                                                + v13;
        *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v11 + a2)) = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v11 + a2))
                                                                - v13;
        ++v11;
      }
      while ( v11 < a8 );
    }
    ++a2;
  }
  return result;
}


//----- (00000001401A7930) ----------------------------------------------------
__int64            sub_1401A7930(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9,
        int a10)
{
  __int64 result; // rax
  int j; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+24h] [rbp-24h]
  int i; // [rsp+28h] [rbp-20h]
  BOOL v14; // [rsp+30h] [rbp-18h]
  float v15; // [rsp+34h] [rbp-14h]

  for ( i = 0; i < 2; ++i )
  {
    for ( j = a2; j < a3 && a8 >= a10; ++j )
    {
      if ( *(int *)(a6 + 4LL * j) < 8 && *(_DWORD *)(a7 + 4LL * j) == i )
      {
        v12 = 0;
        do
        {
          v14 = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v12 + j)) >= 0.0;
          sub_14019A6D0(a9, v14, 1);
          v15 = (float)((float)((float)v14 - 0.5) * (float)(1 << (14 - *(_BYTE *)(a6 + 4LL * j) - 1))) * 0.000061035156;
          *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v12 + j)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v12 + j))
                                                                 + v15;
          *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v12 + j)) = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v12 + j))
                                                                 - v15;
          --a8;
          ++v12;
        }
        while ( v12 < a10 );
      }
    }
    result = (unsigned int)(i + 1);
  }
  return result;
}


//----- (00000001401A7B50) ----------------------------------------------------
__int64            sub_1401A7B50(__int64 a1, int a2, int a3, __int64 a4, int a5, _DWORD *a6, int a7, int a8)
{
  __int64 result; // rax
  int v9; // eax
  int v10; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+2Ch] [rbp-4Ch]
  int v14; // [rsp+30h] [rbp-48h]
  float v15; // [rsp+34h] [rbp-44h]
  int v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-38h]
  float v18; // [rsp+44h] [rbp-34h]
  float v19; // [rsp+48h] [rbp-30h]
  _DWORD v20[2]; // [rsp+50h] [rbp-28h]
  float v21; // [rsp+58h] [rbp-20h]
  char *v22; // [rsp+60h] [rbp-18h]

  v22 = (char *)&unk_140281FA0 + 84 * a8 + 42 * a5;
  v20[0] = 0;
  v20[1] = 0;
  if ( a5 )
  {
    v18 = 0.0;
    v19 = 0.1499939;
  }
  else
  {
    v19 = flt_14027E488[a8];
    v18 = flt_14027E378[a8];
  }
  v14 = 8 * a6[2];
  while ( 1 )
  {
    result = (unsigned int)a3;
    if ( a2 >= a3 )
      break;
    v10 = 0;
    do
    {
      v13 = sub_14019A0A0((__int64)a6);
      if ( v14 - v13 < 15 )
      {
        if ( v14 - v13 < 2 )
        {
          if ( v14 - v13 < 1 )
            v12 = -1;
          else
            v12 = -sub_14019AF20(a6, 1);
        }
        else
        {
          v9 = sub_14019AFE0(a6, (__int64)&unk_14027E374, 2);
          v12 = -(v9 & 1) ^ (v9 >> 1);
        }
      }
      else
      {
        if ( a2 >= 20 )
          v16 = 20;
        else
          v16 = a2;
        v12 = sub_1401B8170(a6, (unsigned __int8)v22[2 * v16] << 7, (unsigned __int8)v22[2 * v16 + 1] << 6);
      }
      v15 = (float)v12;
      if ( *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + a2)) >= -9.0 )
        v17 = *(_DWORD *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + a2));
      else
        v17 = -1055916032;
      *(_DWORD *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + a2)) = v17;
      v21 = (float)((float)(v18 * *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + a2))) + *(float *)&v20[v10]) + v15;
      *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + a2)) = v21;
      *(float *)&v20[v10] = (float)(*(float *)&v20[v10] + v15) - (float)(v19 * v15);
      ++v10;
    }
    while ( v10 < a7 );
    ++a2;
  }
  return result;
}

// 14027E378: using guessed type float flt_14027E378[4];
// 14027E488: using guessed type float flt_14027E488[4];

//----- (00000001401A7EC0) ----------------------------------------------------
__int64            sub_1401A7EC0(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 a5, _DWORD *a6, int a7)
{
  __int64 result; // rax
  int v9; // [rsp+24h] [rbp-24h]

  while ( 1 )
  {
    result = a3;
    if ( a2 >= (int)a3 )
      break;
    if ( *(int *)(a5 + 4LL * a2) > 0 )
    {
      v9 = 0;
      do
      {
        *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v9 + a2)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v9 + a2))
                                                               + (float)((float)((float)((float)((float)(int)sub_14019B1C0(a6, *(_DWORD *)(a5 + 4LL * a2))
                                                                                               + 0.5)
                                                                                       * (float)(1 << (14 - *(_BYTE *)(a5 + 4LL * a2))))
                                                                               * 0.000061035156)
                                                                       - 0.5);
        ++v9;
      }
      while ( v9 < a7 );
    }
    ++a2;
  }
  return result;
}


//----- (00000001401A8000) ----------------------------------------------------
void            sub_1401A8000(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _DWORD *a8,
        int a9)
{
  int j; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+24h] [rbp-24h]
  int i; // [rsp+28h] [rbp-20h]

  for ( i = 0; i < 2; ++i )
  {
    for ( j = a2; j < a3 && a7 >= a9; ++j )
    {
      if ( *(int *)(a5 + 4LL * j) < 8 && *(_DWORD *)(a6 + 4LL * j) == i )
      {
        v10 = 0;
        do
        {
          *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + j)) = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + j))
                                                                 + (float)((float)((float)((float)(int)sub_14019B1C0(a8, 1u)
                                                                                         - 0.5)
                                                                                 * (float)(1 << (14
                                                                                               - *(_BYTE *)(a5 + 4LL * j)
                                                                                               - 1)))
                                                                         * 0.000061035156);
          --a7;
          ++v10;
        }
        while ( v10 < a9 );
      }
    }
  }
}


//----- (00000001401A8190) ----------------------------------------------------
void               sub_1401A8190(_QWORD *a1, float *a2, int a3, int a4, int a5)
{
  _DWORD v6[16]; // [rsp+0h] [rbp-A8h] BYREF
  int i; // [rsp+40h] [rbp-68h]
  float v8; // [rsp+44h] [rbp-64h]
  float v9; // [rsp+48h] [rbp-60h]
  float v10[4]; // [rsp+50h] [rbp-58h] BYREF
  float v11[6]; // [rsp+60h] [rbp-48h] BYREF
  float v12[6]; // [rsp+78h] [rbp-30h] BYREF
  __int64 v13; // [rsp+90h] [rbp-18h]

  v9 = 1.0;
  v8 = 0.80000001f;
  for ( i = 1; i < a3 >> 1; ++i )
    a2[i] = 0.5f
          * (float)((float)(0.5f * (float)(*(float *)(*a1 + 4LL * (2 * i - 1)) + *(float *)(*a1 + 4LL * (2 * i + 1))))
                  + *(float *)(*a1 + 8LL * i));
  *a2 = 0.5f * (float)((float)(0.5f * *(float *)(*a1 + 4LL)) + *(float *)*a1);
  if ( a4 == 2 )
  {
    for ( i = 1; i < a3 >> 1; ++i )
      a2[i] = a2[i]
            + (float)(0.5f
                    * (float)((float)(0.5f
                                    * (float)(*(float *)(a1[1] + 4LL * (2 * i - 1))
                                            + *(float *)(a1[1] + 4LL * (2 * i + 1))))
                            + *(float *)(a1[1] + 8LL * i)));
    *a2 = *a2 + (float)(0.5f * (float)((float)(0.5f * *(float *)(a1[1] + 4LL)) + *(float *)a1[1]));
  }
  v6[12] = a5;
  sub_1401ADFA0(a2, (__int64)v11, 0, 0, 4, a3 >> 1);
  v11[0] = v11[0] * 1.0001f;
  for ( i = 1; i <= 4; ++i )
    v11[i] = v11[i] - (float)((float)(v11[i] * (float)(0.0080000004f * (float)i)) * (float)(0.0080000004f * (float)i));
  sub_1401AD490(v10, v11, 4);
  for ( i = 0; i < 4; ++i )
  {
    v9 = 0.89999998f * v9;
    v10[i] = v10[i] * v9;
  }
  v12[0] = v10[0] + 0.80000001f;
  v12[1] = v10[1] + (float)(v8 * v10[0]);
  v12[2] = v10[2] + (float)(v8 * v10[1]);
  v12[3] = v10[3] + (float)(v8 * v10[2]);
  v12[4] = v8 * v10[3];
  sub_1401B86A0((__int64)a2, v12, a3 >> 1);
  return; /* original void downsample/filter */
}


//----- (00000001401A8740) ----------------------------------------------------
void               sub_1401A8740(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  unsigned __int64 v5; // rcx
  void *v6; // rsp
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  int i; // [rsp+30h] [rbp+0h] BYREF
  int j; // [rsp+34h] [rbp+4h]
  int best_pitch[2]; /* native contiguous +8/+c pair */
  int v16; // [rsp+40h] [rbp+10h]
  int *v17; // [rsp+48h] [rbp+18h]
  float v18; // [rsp+50h] [rbp+20h]
  float v19; // [rsp+54h] [rbp+24h]
  int v20; // [rsp+58h] [rbp+28h]
  float v21; // [rsp+5Ch] [rbp+2Ch]
  int v22; // [rsp+60h] [rbp+30h]
  float v23; // [rsp+64h] [rbp+34h]
  int *v24; // [rsp+68h] [rbp+38h]
  float *v25; // [rsp+70h] [rbp+40h]
  __int64 v26; // [rsp+78h] [rbp+48h]

  best_pitch[0] = 0;
  best_pitch[1] = 0;
  v20 = a4 + a3;
  v5 = 4LL * (a3 >> 2) + 15;
  if ( v5 <= 4LL * (a3 >> 2) )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = alloca(v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v25 = (float *)v6;
  v7 = 4LL * (v20 >> 2) + 15;
  if ( v7 <= 4LL * (v20 >> 2) )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
  v24 = (int *)v8;
  v9 = 4LL * (a4 >> 1) + 15;
  if ( v9 <= 4LL * (a4 >> 1) )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  v17 = (int *)v10;
  for ( i = 0; i < a3 >> 2; ++i )
    v25[i] = *(float *)(a1 + 8LL * i);
  for ( i = 0; i < v20 >> 2; ++i )
    v24[i] = *(_DWORD *)(a2 + 8LL * i);
  sub_1401A9C80(v25, (__int64)v24, (__int64)v17, a3 >> 2, a4 >> 2);
  sub_1401B8330((__int64)v17, (__int64)v24, a3 >> 2, a4 >> 2, best_pitch);
  for ( j = 0; j < a4 >> 1; ++j )
  {
    v17[j] = 0;
    if ( abs(j - 2 * best_pitch[0]) <= 2 || abs(j - 2 * best_pitch[1]) <= 2 )
    {
      v21 = sub_1401A9C00(a1, a2 + 4LL * j, a3 >> 1);
      if ( v21 >= -1.0 )
        v22 = LODWORD(v21);
      else
        v22 = -1082130432;
      v17[j] = v22;
    }
  }
  sub_1401B8330((__int64)v17, a2, a3 >> 1, a4 >> 1, best_pitch);
  if ( best_pitch[0] <= 0 || best_pitch[0] >= (a4 >> 1) - 1 )
  {
    v16 = 0;
  }
  else
  {
    v18 = *(float *)&v17[best_pitch[0] - 1];
    v23 = *(float *)&v17[best_pitch[0]];
    v19 = *(float *)&v17[best_pitch[0] + 1];
    if ( (float)(v19 - v18) <= (float)(0.69999999f * (float)(v23 - v18)) )
    {
      if ( (float)(v18 - v19) <= (float)(0.69999999f * (float)(v23 - v19)) )
        v16 = 0;
      else
        v16 = -1;
    }
    else
    {
      v16 = 1;
    }
  }
  *a5 = 2 * best_pitch[0] - v16;
  return; /* original void pitch search */
}


//----- (00000001401A8B30) ----------------------------------------------------
float              sub_1401A8B30(__int64 a1, int a2, int a3, int a4, int *a5, int a6, float a7)
{
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  float v9; // xmm0_4
  int j; // [rsp+30h] [rbp+0h] BYREF
  float v12; // [rsp+34h] [rbp+4h]
  int v13; // [rsp+38h] [rbp+8h]
  int v14; // [rsp+3Ch] [rbp+Ch]
  float v15; // [rsp+40h] [rbp+10h]
  int i; // [rsp+44h] [rbp+14h]
  float v17; // [rsp+48h] [rbp+18h]
  float v18; // [rsp+4Ch] [rbp+1Ch] BYREF
  float v19; // [rsp+50h] [rbp+20h]
  int v20; // [rsp+54h] [rbp+24h]
  float v21; // [rsp+58h] [rbp+28h] BYREF
  float v22; // [rsp+5Ch] [rbp+2Ch]
  float v23; // [rsp+60h] [rbp+30h]
  float v24; // [rsp+64h] [rbp+34h]
  float v25; // [rsp+68h] [rbp+38h]
  int v26; // [rsp+6Ch] [rbp+3Ch]
  int v27; // [rsp+70h] [rbp+40h]
  float v28; // [rsp+74h] [rbp+44h]
  float v29; // [rsp+78h] [rbp+48h]
  float v30; // [rsp+7Ch] [rbp+4Ch]
  float v31; // [rsp+80h] [rbp+50h]
  float v32; // [rsp+84h] [rbp+54h]
  float v33; // [rsp+88h] [rbp+58h]
  int v34; // [rsp+8Ch] [rbp+5Ch]
  int *v35; // [rsp+90h] [rbp+60h]
  float v36; // [rsp+98h] [rbp+68h] BYREF
  float v37[4]; // [rsp+A0h] [rbp+70h]
  __int64 v38; // [rsp+B0h] [rbp+80h]
  __int64 v39; // [rsp+D0h] [rbp+A0h]
  int v40; // [rsp+D8h] [rbp+A8h]
  int v41; // [rsp+E0h] [rbp+B0h]
  int v42; // [rsp+E8h] [rbp+B8h]
  int v43; // [rsp+F8h] [rbp+C8h]

  v34 = a3;
  v40 = a2 / 2;
  v41 = a3 / 2;
  *a5 /= 2;
  v43 = a6 / 2;
  v42 = a4 / 2;
  v39 = a1 + 4LL * (a2 / 2);
  if ( *a5 >= a2 / 2 )
    *a5 = v40 - 1;
  v14 = *a5;
  v27 = v14;
  v7 = 4LL * (v40 + 1) + 15;
  if ( v7 <= 4LL * (v40 + 1) )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
  v35 = (int *)v8;
  sub_1401A9B20(v39, v39, v39 - 4LL * v14, v42, &v21, &v18);
  *(float *)v35 = v21;
  v12 = v21;
  for ( i = 1; i <= v40; ++i )
  {
    v12 = (float)(v12 + (float)(*(float *)(v39 + 4LL * -i) * *(float *)(v39 + 4LL * -i)))
        - (float)(*(float *)(v39 + 4LL * (v42 - i)) * *(float *)(v39 + 4LL * (v42 - i)));
    if ( v12 >= 0.0 )
      v28 = v12;
    else
      v28 = 0.0;
    *(float *)&v35[i] = v28;
  }
  v12 = *(float *)&v35[v14];
  v19 = v18;
  v24 = v12;
  LODWORD(v17) = SR_VEC_READ_LANES(128, sub_1401B8890(v18, v21, v12), u32)[0];
  v25 = v17;
  for ( j = 2; j <= 15; ++j )
  {
    v15 = 0.0;
    v13 = sub_14019A1A0(j + 2 * v14, 2 * j);
    if ( v13 < v41 )
      break;
    if ( j == 2 )
    {
      if ( v14 + v13 <= v40 )
        v20 = v13 + v14;
      else
        v20 = v14;
    }
    else
    {
      v20 = sub_14019A1A0(j + v14 * 2 * dword_140281F00[j], 2 * j);
    }
    sub_1401A9B20(v39, v39 + 4LL * -v13, v39 + 4LL * -v20, v42, &v18, &v36);
    v18 = 0.5f * (float)(v18 + v36);
    v12 = 0.5f * (float)(*(float *)&v35[v13] + *(float *)&v35[v20]);
    LODWORD(v32) = SR_VEC_READ_LANES(128, sub_1401B8890(v18, v21, v12), u32)[0];
    if ( abs(v13 - v43) > 1 )
    {
      if ( abs(v13 - v43) > 2 || j * 5 * j >= v14 )
        v15 = 0.0;
      else
        v15 = 0.5f * a7;
    }
    else
    {
      v15 = a7;
    }
    if ( (float)((float)(0.69999999f * v17) - v15) >= 0.30000001f )
      v29 = (float)(0.69999999f * v17) - v15;
    else
      v29 = 0.30000001f;
    v23 = v29;
    if ( v13 >= 3 * v41 )
    {
      if ( v13 < 2 * v41 )
      {
        if ( (float)((float)(0.89999998f * v17) - v15) >= 0.5f )
          v31 = (float)(0.89999998f * v17) - v15;
        else
          v31 = 0.5f;
        v23 = v31;
      }
    }
    else
    {
      if ( (float)((float)(0.85000002f * v17) - v15) >= 0.40000001f )
        v30 = (float)(0.85000002f * v17) - v15;
      else
        v30 = 0.40000001f;
      v23 = v30;
    }
    if ( v32 > v23 )
    {
      v19 = v18;
      v24 = v12;
      v27 = v13;
      v25 = v32;
    }
  }
  if ( v19 >= 0.0 )
    v33 = v19;
  else
    v33 = 0.0;
  v19 = v33;
  if ( v33 < v24 )
    v22 = v19 / (float)(v24 + 1.0f);
  else
    v22 = 1.0f;
  for ( j = 0; j < 3; ++j )
  {
    v9 = sub_1401A9C00(v39, v39 - 4LL * (v27 + j - 1), v42);
    v37[j] = v9;
  }
  if ( (float)(v37[2] - v37[0]) <= (float)(0.69999999f * (float)(v37[1] - v37[0])) )
  {
    if ( (float)(v37[0] - v37[2]) <= (float)(0.69999999f * (float)(v37[1] - v37[2])) )
      v26 = 0;
    else
      v26 = -1;
  }
  else
  {
    v26 = 1;
  }
  if ( v22 > v25 )
    v22 = v25;
  *a5 = v26 + 2 * v27;
  if ( *a5 < v34 )
    *a5 = v34;
  return v22; /* native XMM0 pitch gain */
}

// 140281F00: using guessed type _DWORD dword_140281F00[16];

//----- (00000001401A92A0) ----------------------------------------------------
__int64            sub_1401A92A0(float *a1, float *a2, float *a3, signed int a4)
{
  __int64 result; // rax
  float v5; // [rsp+0h] [rbp-48h]
  float v6; // [rsp+0h] [rbp-48h]
  float v7; // [rsp+0h] [rbp-48h]
  float v8; // [rsp+0h] [rbp-48h]
  int i; // [rsp+4h] [rbp-44h]
  int v10; // [rsp+4h] [rbp-44h]
  int v11; // [rsp+4h] [rbp-44h]
  float v12; // [rsp+8h] [rbp-40h]
  float v13; // [rsp+Ch] [rbp-3Ch]
  float v14; // [rsp+10h] [rbp-38h]
  float v15; // [rsp+10h] [rbp-38h]
  float v16; // [rsp+14h] [rbp-34h]
  float v17; // [rsp+18h] [rbp-30h]
  float v18; // [rsp+1Ch] [rbp-2Ch]
  float v19; // [rsp+20h] [rbp-28h]
  int v20; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+30h] [rbp-18h]
  float *v23; // [rsp+50h] [rbp+8h]
  float *v24; // [rsp+58h] [rbp+10h]
  float *v25; // [rsp+58h] [rbp+10h]

  v12 = 0.0;
  v13 = *a2;
  v14 = a2[1];
  v16 = a2[2];
  v24 = a2 + 3;
  for ( i = 0; i < a4 - 3; i += 4 )
  {
    v5 = *a1;
    v23 = a1 + 1;
    v12 = *v24;
    v25 = v24 + 1;
    *a3 = *a3 + (float)(v5 * v13);
    a3[1] = a3[1] + (float)(v5 * v14);
    a3[2] = a3[2] + (float)(v5 * v16);
    a3[3] = a3[3] + (float)(v5 * v12);
    v6 = *v23++;
    v13 = *v25++;
    *a3 = *a3 + (float)(v6 * v14);
    a3[1] = a3[1] + (float)(v6 * v16);
    a3[2] = a3[2] + (float)(v6 * v12);
    a3[3] = a3[3] + (float)(v6 * v13);
    v7 = *v23++;
    v14 = *v25++;
    *a3 = *a3 + (float)(v7 * v16);
    a3[1] = a3[1] + (float)(v7 * v12);
    a3[2] = a3[2] + (float)(v7 * v13);
    a3[3] = a3[3] + (float)(v7 * v14);
    v8 = *v23;
    a1 = v23 + 1;
    v16 = *v25;
    v24 = v25 + 1;
    *a3 = *a3 + (float)(v8 * v12);
    a3[1] = a3[1] + (float)(v8 * v13);
    a3[2] = a3[2] + (float)(v8 * v14);
    a3[3] = a3[3] + (float)(v8 * v16);
  }
  v20 = i;
  v10 = i + 1;
  if ( v20 < a4 )
  {
    v17 = *a1++;
    v12 = *v24++;
    *a3 = *a3 + (float)(v17 * v13);
    a3[1] = a3[1] + (float)(v17 * v14);
    a3[2] = a3[2] + (float)(v17 * v16);
    a3[3] = a3[3] + (float)(v17 * v12);
  }
  v21 = v10;
  v11 = v10 + 1;
  if ( v21 < a4 )
  {
    v18 = *a1++;
    v13 = *v24++;
    *a3 = *a3 + (float)(v18 * v14);
    a3[1] = a3[1] + (float)(v18 * v16);
    a3[2] = a3[2] + (float)(v18 * v12);
    a3[3] = a3[3] + (float)(v18 * v13);
  }
  result = (unsigned int)a4;
  if ( v11 < a4 )
  {
    v19 = *a1;
    v15 = *v24;
    *a3 = *a3 + (float)(*a1 * v16);
    a3[1] = a3[1] + (float)(v19 * v12);
    a3[2] = a3[2] + (float)(v19 * v13);
    a3[3] = a3[3] + (float)(v19 * v15);
    return 12;
  }
  return result;
}


//----- (00000001401A9B20) ----------------------------------------------------
float *           sub_1401A9B20(__int64 a1, __int64 a2, __int64 a3, int a4, float *a5, float *a6)
{
  int i; // [rsp+0h] [rbp-18h]
  float v8; // [rsp+4h] [rbp-14h]
  float v9; // [rsp+8h] [rbp-10h]

  v8 = 0.0;
  v9 = 0.0;
  for ( i = 0; i < a4; ++i )
  {
    v8 = v8 + (float)(*(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i));
    v9 = v9 + (float)(*(float *)(a1 + 4LL * i) * *(float *)(a3 + 4LL * i));
  }
  *a5 = v8;
  *a6 = v9;
  return a6;
}


//----- (00000001401A9C00) ----------------------------------------------------
float            sub_1401A9C00(__int64 a1, __int64 a2, int a3)
{
  int i; // [rsp+0h] [rbp-18h]
  float v5; // [rsp+4h] [rbp-14h]

  v5 = 0.0;
  for ( i = 0; i < a3; ++i )
    v5 = v5 + (float)(*(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i));
  return v5;
}


//----- (00000001401A9C80) ----------------------------------------------------
void               sub_1401A9C80(float *a1, __int64 a2, __int64 a3, signed int a4, int a5)
{
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  int i; // [rsp+20h] [rbp-28h]
  float v8; // [rsp+24h] [rbp-24h]
  float result4[4]; /* native contiguous +28..+37 result vector */
  __int64 v13; // [rsp+38h] [rbp-10h]

  for ( i = 0; i < a5 - 3; i += 4 )
  {
    result4[0] = result4[1] = result4[2] = result4[3] = 0.0f;
    sub_1401A92A0(a1, (float *)(a2 + 4LL * i), result4, a4);
    *(float *)(a3 + 4LL * i) = result4[0];
    *(float *)(a3 + 4LL * (i + 1)) = result4[1];
    *(float *)(a3 + 4LL * (i + 2)) = result4[2];
    *(float *)(a3 + 4LL * (i + 3)) = result4[3];
  }
  while ( i < a5 )
  {
    v8 = sub_1401A9C00((__int64)a1, a2 + 4LL * i, a4);
    *(float *)(a3 + 4LL * i++) = v8;
  }
  return; /* original void epilogue; compiler cookie is not a result */
}


//----- (00000001401A9E10) ----------------------------------------------------
__int64            sub_1401A9E10(float a1, float a2, float *a3)
{
  float v4; // [rsp+0h] [rbp-18h]

  if ( a2 <= a1 )
    v4 = a2;
  else
    v4 = a1;
  *a3 = a1 + (float)(v4 / 3.0);
  a3[1] = a2 + (float)(v4 / 3.0);
  return 4;
}


//----- (00000001401A9EE0) ----------------------------------------------------
__int64            sub_1401A9EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  float v6; // xmm0_4
  __int64 result; // rax
  signed int i; // [rsp+20h] [rbp-38h]
  float v9; // [rsp+24h] [rbp-34h]
  float v10; // [rsp+28h] [rbp-30h]

  v9 = *(float *)(a4 + 4LL * a5);
  v10 = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) + a5));
  v6 = sqrt((float)((float)((float)(v9 * v9) + 1.0e-15) + (float)(v10 * v10)));
  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    *(float *)(a2 + 4LL * i) = (float)((float)(v9 / (float)(v6 + 1.0e-15)) * *(float *)(a2 + 4LL * i))
                             + (float)((float)(v10 / (float)(v6 + 1.0e-15)) * *(float *)(a3 + 4LL * i));
  }
  return result;
}


//----- (00000001401AA030) ----------------------------------------------------
__int64            sub_1401AA030(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  float v5; // [rsp+4h] [rbp-14h]
  float v6; // [rsp+8h] [rbp-10h]

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    v6 = 0.70710677 * *(float *)(a1 + 4LL * i);
    v5 = 0.70710677 * *(float *)(a2 + 4LL * i);
    *(float *)(a1 + 4LL * i) = v6 + v5;
    *(float *)(a2 + 4LL * i) = v5 - v6;
  }
  return result;
}


//----- (00000001401AA0F0) ----------------------------------------------------
__m128i *           sub_1401AA0F0(     __m128i *a1, __m128i *a2, float a3, int a4)
{
  __m128i *result; // rax
  float v5; // xmm0_4
  float v6; // xmm0_4
  int i; // [rsp+30h] [rbp-38h]
  float v8; // [rsp+34h] [rbp-34h] BYREF
  float v9; // [rsp+38h] [rbp-30h]
  float v10; // [rsp+3Ch] [rbp-2Ch] BYREF
  float v11; // [rsp+40h] [rbp-28h]
  float v12; // [rsp+44h] [rbp-24h]
  float v13; // [rsp+48h] [rbp-20h]
  float v14; // [rsp+4Ch] [rbp-1Ch]
  float v15; // [rsp+50h] [rbp-18h]
  float v16; // [rsp+54h] [rbp-14h]
  float v17; // [rsp+58h] [rbp-10h]

  v8 = 0.0;
  v10 = 0.0;
  sub_1401A9B20((__int64)a2, (__int64)a1, (__int64)a2, a4, &v8, &v10);
  v8 = a3 * v8;
  v9 = a3;
  v12 = (float)((float)(v9 * v9) + v10) - (float)(2.0 * v8);
  v13 = (float)((float)(v9 * v9) + v10) + (float)(2.0 * v8);
  if ( v13 < 0.00060000003 || v12 < 0.00060000003 )
    return sub_1401FC920(a2, a1, 4LL * a4);
  v11 = v12;
  v5 = sqrt(v12);
  v16 = 1.0 / v5;
  v11 = v13;
  v6 = sqrt(v13);
  v17 = 1.0 / v6;
  for ( i = 0; ; ++i )
  {
    result = (__m128i *)(unsigned int)a4;
    if ( i >= a4 )
      break;
    v14 = a3 * *(float *)&SR_VEC_PTR_LANES(128, a1, i32)[i];
    v15 = *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i];
    *(float *)&SR_VEC_PTR_LANES(128, a1, i32)[i] = v16 * (float)(v14 - v15);
    *(float *)&SR_VEC_PTR_LANES(128, a2, i32)[i] = v17 * (float)(v14 + v15);
  }
  return result;
}


//----- (00000001401AA340) ----------------------------------------------------
__int64            sub_1401AA340(__m128i *a1, int a2, int a3, int a4)
{
  unsigned __int64 v4; // rcx
  void *v5; // rsp
  int i; // [rsp+20h] [rbp+0h] BYREF
  int j; // [rsp+24h] [rbp+4h]
  int v9; // [rsp+28h] [rbp+8h]
       __m128i *v10; // [rsp+30h] [rbp+10h]
  char *v11; // [rsp+38h] [rbp+18h]
  __int64 v12; // [rsp+40h] [rbp+20h]

  v9 = a3 * a2;
  v4 = 4LL * a3 * a2 + 15;
  if ( v4 <= 4LL * a3 * a2 )
    v4 = 0xFFFFFFFFFFFFFF0LL;
  v5 = alloca(v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v10 = (     __m128i *)&i;
  if ( a4 )
  {
    v11 = (char *)&unk_140282A80 + 4 * a3 - 8;
    for ( i = 0; i < a3; ++i )
    {
      for ( j = 0; j < a2; ++j )
        SR_VEC_PTR_LANES(128, v10, i32)[j + a2 * *(_DWORD *)&v11[4 * i]] = SR_VEC_PTR_LANES(128, a1, i32)[i + a3 * j];
    }
  }
  else
  {
    for ( i = 0; i < a3; ++i )
    {
      for ( j = 0; j < a2; ++j )
        SR_VEC_PTR_LANES(128, v10, i32)[j + a2 * i] = SR_VEC_PTR_LANES(128, a1, i32)[i + a3 * j];
    }
  }
  return sub_1401FC920(a1, v10, 4LL * v9); /* 0x1401AA4C0: the result of this call is still in rax at the exit */
}


//----- (00000001401AA4E0) ----------------------------------------------------
__int64            sub_1401AA4E0(__m128i *a1, int a2, int a3, int a4)
{
  unsigned __int64 v4; // rcx
  void *v5; // rsp
  int j; // [rsp+20h] [rbp+0h] BYREF
  int i; // [rsp+24h] [rbp+4h]
  int v9; // [rsp+28h] [rbp+8h]
       __m128i *v10; // [rsp+30h] [rbp+10h]
  char *v11; // [rsp+38h] [rbp+18h]
  __int64 v12; // [rsp+40h] [rbp+20h]

  v9 = a3 * a2;
  v4 = 4LL * a3 * a2 + 15;
  if ( v4 <= 4LL * a3 * a2 )
    v4 = 0xFFFFFFFFFFFFFF0LL;
  v5 = alloca(v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v10 = (     __m128i *)&j;
  if ( a4 )
  {
    v11 = (char *)&unk_140282A80 + 4 * a3 - 8;
    for ( i = 0; i < a3; ++i )
    {
      for ( j = 0; j < a2; ++j )
        SR_VEC_PTR_LANES(128, v10, i32)[i + a3 * j] = SR_VEC_PTR_LANES(128, a1, i32)[j + a2 * *(_DWORD *)&v11[4 * i]];
    }
  }
  else
  {
    for ( i = 0; i < a3; ++i )
    {
      for ( j = 0; j < a2; ++j )
        SR_VEC_PTR_LANES(128, v10, i32)[i + a3 * j] = SR_VEC_PTR_LANES(128, a1, i32)[j + a2 * i];
    }
  }
  return sub_1401FC920(a1, v10, 4LL * v9); /* 0x1401AA660: the result of this call is still in rax at the exit */
}


//----- (00000001401AA680) ----------------------------------------------------
__int64            sub_1401AA680(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+24h] [rbp-24h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  int v10; // [rsp+30h] [rbp-18h]

  v7 = 2 * a1 - 1;
  if ( a5 && a1 == 2 )
    v7 = 2;
  v6 = sub_14019A1C0(a3 * v7 + a2, v7);
  if ( a2 - a4 - 32 >= v6 )
    v9 = v6;
  else
    v9 = a2 - a4 - 32;
  if ( v9 <= 64 )
    v10 = v9;
  else
    v10 = 64;
  if ( v10 >= 4 )
    return (unsigned int)(2 * (((word_140282B58[v10 & 7] >> (14 - (v10 >> 3))) + 1) >> 1));
  else
    return 1;
}

// 140282B58: using guessed type __int16 word_140282B58[12];

//----- (00000001401AA790) ----------------------------------------------------
BOOL *           sub_1401AA790(
        int *a1,
        BOOL *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        char a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11)
{
  int v11; // eax
  int v13; // [rsp+30h] [rbp-D8h]
  signed int v14; // [rsp+34h] [rbp-D4h]
  int v15; // [rsp+38h] [rbp-D0h]
  int v16; // [rsp+3Ch] [rbp-CCh]
  int v17; // [rsp+44h] [rbp-C4h]
  BOOL v18; // [rsp+48h] [rbp-C0h]
  int v19; // [rsp+4Ch] [rbp-BCh]
  unsigned int v20; // [rsp+50h] [rbp-B8h]
  unsigned int v21; // [rsp+50h] [rbp-B8h]
  unsigned int v22; // [rsp+54h] [rbp-B4h]
  unsigned int v23; // [rsp+54h] [rbp-B4h]
  int v24; // [rsp+58h] [rbp-B0h]
  int v25; // [rsp+58h] [rbp-B0h]
  unsigned int *v26; // [rsp+60h] [rbp-A8h]
  int i; // [rsp+6Ch] [rbp-9Ch]
  int v28; // [rsp+74h] [rbp-94h]
  int v29; // [rsp+78h] [rbp-90h]
  int v30; // [rsp+7Ch] [rbp-8Ch]
  int v31; // [rsp+80h] [rbp-88h]
  int v32; // [rsp+84h] [rbp-84h]
  int v33; // [rsp+88h] [rbp-80h]
  __int16 v34; // [rsp+8Ch] [rbp-7Ch]
  int v35; // [rsp+90h] [rbp-78h]
  int v36; // [rsp+94h] [rbp-74h]
  int v37; // [rsp+98h] [rbp-70h]
  int v38; // [rsp+9Ch] [rbp-6Ch]
  int v39; // [rsp+A4h] [rbp-64h]
  int v40; // [rsp+ACh] [rbp-5Ch]
  int v41; // [rsp+B4h] [rbp-54h]
  BOOL v42; // [rsp+C0h] [rbp-48h]
  int v43; // [rsp+C4h] [rbp-44h]
  int v44; // [rsp+C8h] [rbp-40h]
  int v45; // [rsp+CCh] [rbp-3Ch]
  int v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  __int64 v48; // [rsp+F8h] [rbp-10h]

  v13 = 0;
  v18 = 0;
  v17 = *a1;
  v47 = *((_QWORD *)a1 + 1);
  v29 = a1[4];
  v45 = a1[5];
  v26 = *((unsigned int **)a1 + 4);
  v48 = *((_QWORD *)a1 + 6);
  if ( a10 && a5 == 2 )
    v44 = 16;
  else
    v44 = 4;
  v33 = *(__int16 *)(*(_QWORD *)(v47 + 64) + 2LL * v29) + 8 * a9;
  v14 = sub_1401AA680(a5, *a6, (v33 >> 1) - v44, v33, a10);
  if ( a10 && v29 >= v45 )
    v14 = 1;
  if ( v17 )
    v13 = sub_1401A68E0(a3, a4, a10, a5);
  v46 = sub_14019A0E0((__int64)v26);
  if ( v14 == 1 )
  {
    if ( a10 )
    {
      if ( v17 )
      {
        v42 = v13 > 0x2000 && !a1[17];
        v18 = v42;
        if ( v42 )
        {
          for ( i = 0; i < a5; ++i )
            *(float *)(a4 + 4LL * i) = -*(float *)(a4 + 4LL * i);
        }
        sub_1401A9EE0(v47, a3, a4, v48, v29, a5);
      }
      if ( *a6 <= 16 || a1[10] <= 16 )
      {
        v18 = 0;
      }
      else if ( v17 )
      {
        sub_14019A450(v26, v18, 2);
      }
      else
      {
        v18 = sub_14019AF20(v26, 2);
      }
      if ( a1[17] )
        v18 = 0;
      v13 = 0;
    }
  }
  else
  {
    if ( v17 )
    {
      if ( a10 && a1[16] )
      {
        if ( v13 <= 0x2000 )
          v35 = -32767 / v14;
        else
          v35 = 0x7FFF / v14;
        if ( (v35 + v14 * v13) >> 14 >= 0 )
          v36 = (v35 + v14 * v13) >> 14;
        else
          v36 = 0;
        if ( v14 - 1 >= v36 )
        {
          if ( (v35 + v14 * v13) >> 14 >= 0 )
            v37 = (v35 + v14 * v13) >> 14;
          else
            v37 = 0;
          v38 = v37;
        }
        else
        {
          v38 = v14 - 1;
        }
        if ( a1[16] >= 0 )
          v13 = v38 + 1;
        else
          v13 = v38;
      }
      else
      {
        v13 = (v14 * v13 + 0x2000) >> 14;
        if ( !a10 && a1[18] && v13 > 0 && v13 < v14 )
        {
          v34 = sub_14019A1A0(v13 << 14, v14);
          v20 = (__int16)sub_1401A32C0(v34);
          v22 = (__int16)sub_1401A32C0(0x4000 - v34);
          v24 = ((__int16)sub_1401A3360(v22, v20) * (__int16)(((_WORD)a5 - 1) << 7) + 0x4000) >> 15;
          if ( v24 <= *a6 )
          {
            if ( v24 < -*a6 )
              v13 = 0;
          }
          else
          {
            v13 = v14;
          }
        }
      }
    }
    if ( a10 && a5 > 2 )
    {
      v15 = v14 / 2;
      v31 = v14 / 2 + 3 * (v14 / 2 + 1);
      if ( v17 )
      {
        if ( v13 > v15 )
          v39 = 3 * (v15 + 1) + v13 - v15;
        else
          v39 = 3 * (v13 + 1);
        if ( v13 > v15 )
          sub_14019A290(v26, 3 * (v15 + 1) + v13 - 1 - v15, v39, v31);
        else
          sub_14019A290(v26, 3 * v13, v39, v31);
      }
      else
      {
        v30 = sub_14019AD20(v26, v31);
        if ( v30 >= 3 * (v15 + 1) )
          v16 = v15 + v30 - 3 * (v15 + 1) + 1;
        else
          v16 = v30 / 3;
        if ( v16 > v15 )
          v40 = 3 * (v15 + 1) + v16 - v15;
        else
          v40 = 3 * (v16 + 1);
        if ( v16 > v15 )
          sub_14019AE70(v26, 3 * (v15 + 1) + v16 - 1 - v15, v40, v31);
        else
          sub_14019AE70(v26, 3 * v16, v40, v31);
        v13 = v16;
      }
    }
    else if ( a8 > 1 || a10 )
    {
      if ( v17 )
        sub_14019A5E0(v26, v13, v14 + 1);
      else
        v13 = sub_14019B0A0(v26, v14 + 1);
    }
    else
    {
      v19 = ((v14 >> 1) + 1) * ((v14 >> 1) + 1);
      if ( v17 )
      {
        if ( v13 > v14 >> 1 )
          v41 = v14 + 1 - v13;
        else
          v41 = v13 + 1;
        if ( v13 > v14 >> 1 )
          v11 = v19 - (((v14 + 2 - v13) * (v14 + 1 - v13)) >> 1);
        else
          v11 = ((v13 + 1) * v13) >> 1;
        sub_14019A290(v26, v11, v41 + v11, v19);
      }
      else
      {
        v32 = sub_14019AD20(v26, v19);
        if ( v32 >= (((v14 >> 1) + 1) * (v14 >> 1)) >> 1 )
        {
          v13 = (2 * v14 + 2 - (unsigned int)sub_1401A6AE0(8 * (v19 - v32) - 7)) >> 1;
          v28 = v19 - (((v14 + 2 - v13) * (v14 + 1 - v13)) >> 1);
          sub_14019AE70(v26, v28, v14 + 1 - v13 + v28, v19);
        }
        else
        {
          v13 = ((unsigned int)sub_1401A6AE0(8 * v32 + 1) - 1) >> 1;
          sub_14019AE70(v26, ((v13 + 1) * v13) >> 1, v13 + 1 + (((v13 + 1) * v13) >> 1), v19);
        }
      }
    }
    v13 = sub_14019A1A0(v13 << 14, v14);
    if ( v17 && a10 )
    {
      if ( v13 )
        sub_1401AA030(a3, a4, a5);
      else
        sub_1401A9EE0(v47, a3, a4, v48, v29, a5);
    }
  }
  v43 = sub_14019A0E0((__int64)v26) - v46;
  *a6 -= v43;
  if ( v13 )
  {
    if ( v13 == 0x4000 )
    {
      v21 = 0;
      v23 = 0x7FFF;
      *a11 &= ((1 << a7) - 1) << a7;
      v25 = 0x4000;
    }
    else
    {
      v21 = (__int16)sub_1401A32C0(v13);
      v23 = (__int16)sub_1401A32C0(0x4000 - (unsigned __int16)v13);
      v25 = ((__int16)sub_1401A3360(v23, v21) * (__int16)(((_WORD)a5 - 1) << 7) + 0x4000) >> 15;
    }
  }
  else
  {
    v21 = 0x7FFF;
    v23 = 0;
    *a11 &= (1 << a7) - 1;
    v25 = -16384;
  }
  *a2 = v18;
  a2[1] = v21;
  a2[2] = v23;
  a2[3] = v25;
  a2[4] = v13;
  a2[5] = v43;
  return a2;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401AB360) ----------------------------------------------------
__int64            sub_1401AB360(int *a1, float *a2, float *a3, int a4, _DWORD *a5)
{
  int v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+24h] [rbp-34h]
  int v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+34h] [rbp-24h]
  BOOL v10; // [rsp+38h] [rbp-20h]
  float *v11; // [rsp+40h] [rbp-18h]
  _DWORD *v12; // [rsp+48h] [rbp-10h]

  v11 = a2;
  v9 = *a1;
  v12 = *((_DWORD **)a1 + 4);
  v10 = a3 != nullptr;
  v7 = 0;
  do
  {
    v6 = 0;
    if ( a1[10] >= 8 )
    {
      if ( v9 )
      {
        v6 = *v11 < 0.0;
        sub_14019A6D0(v12, v6, 1);
      }
      else
      {
        v6 = sub_14019B1C0(v12, 1u);
      }
      a1[10] -= 8;
      a4 -= 8;
    }
    if ( a1[1] )
    {
      if ( v6 )
        v8 = -1082130432;
      else
        v8 = 1065353216;
      *(_DWORD *)v11 = v8;
    }
    v11 = a3;
    ++v7;
  }
  while ( v7 < v10 + 1 );
  if ( a5 )
    *a5 = *(_DWORD *)a2;
  return 1;
}


//----- (00000001401AB510) ----------------------------------------------------
unsigned int       sub_1401AB510(__int64 a1, float *a2, int a3, int a4, int a5, __int64 a6, int a7, float a8, int a9)
{
  _DWORD v10[18]; // [rsp+0h] [rbp-128h] BYREF
  unsigned int v11; // [rsp+60h] [rbp-C8h]
  int v12; // [rsp+64h] [rbp-C4h]
  int i; // [rsp+68h] [rbp-C0h]
  int v14; // [rsp+6Ch] [rbp-BCh]
  int v15; // [rsp+70h] [rbp-B8h]
  int v16; // [rsp+74h] [rbp-B4h]
  int v17; // [rsp+78h] [rbp-B0h]
  int v18; // [rsp+7Ch] [rbp-ACh]
  int v19; // [rsp+80h] [rbp-A8h]
  int v20; // [rsp+84h] [rbp-A4h]
  int v21; // [rsp+88h] [rbp-A0h]
  float v22; // [rsp+8Ch] [rbp-9Ch]
  float v23; // [rsp+90h] [rbp-98h]
  float v24; // [rsp+94h] [rbp-94h]
  __int64 v25; // [rsp+98h] [rbp-90h]
  int v26; // [rsp+A0h] [rbp-88h]
  int v27; // [rsp+A4h] [rbp-84h]
  int v28; // [rsp+A8h] [rbp-80h]
  int v29; // [rsp+ACh] [rbp-7Ch]
  int v30; // [rsp+B0h] [rbp-78h]
  int v31; // [rsp+B4h] [rbp-74h]
  int v32; // [rsp+B8h] [rbp-70h]
  int v33; // [rsp+BCh] [rbp-6Ch]
  float v34; // [rsp+C0h] [rbp-68h]
  int v35; // [rsp+C4h] [rbp-64h]
  float *v36; // [rsp+C8h] [rbp-60h]
  int v37; // [rsp+D0h] [rbp-58h]
  int v38; // [rsp+D4h] [rbp-54h]
  int v39; // [rsp+D8h] [rbp-50h]
  __int64 v40; // [rsp+E0h] [rbp-48h]
  unsigned __int8 *v41; // [rsp+E8h] [rbp-40h]
  unsigned int *v42; // [rsp+F0h] [rbp-38h]
  int theta[6]; /* native contiguous output at frame F8..10C */
  __int64 v49; // [rsp+110h] [rbp-18h]
  int v53; // [rsp+140h] [rbp+18h]
  int v54; // [rsp+148h] [rbp+20h] BYREF

  v54 = a4;
  v35 = 0;
  v26 = 0;
  v18 = a5;
  v24 = 0.0;
  v23 = 0.0;
  v11 = 0;
  v36 = nullptr;
  v37 = *(_DWORD *)a1;
  v25 = *(_QWORD *)(a1 + 8);
  v20 = *(_DWORD *)(a1 + 16);
  v31 = *(_DWORD *)(a1 + 24);
  v42 = *(unsigned int **)(a1 + 32);
  v41 = (unsigned __int8 *)(*(_QWORD *)(v25 + 144)
                          + *(__int16 *)(*(_QWORD *)(v25 + 136) + 2LL * (v20 + *(_DWORD *)(v25 + 8) * (a7 + 1))));
  if ( a7 == -1 || v54 <= v41[*v41] + 12 || a3 <= 2 )
  {
    v16 = sub_1401A2830(v25, v20, a7, v54);
    v21 = sub_1401A2960(v25, v20, a7, v16);
    for ( *(_DWORD *)(a1 + 40) -= v21; *(int *)(a1 + 40) < 0 && v16 > 0; *(_DWORD *)(a1 + 40) -= v21 )
    {
      *(_DWORD *)(a1 + 40) += v21;
      v21 = sub_1401A2960(v25, v20, a7, --v16);
    }
    if ( v16 )
    {
      v32 = sub_1401A27F0(v16);
      if ( v37 )
      {
        v10[16] = *(_DWORD *)(a1 + 60);
        v11 = sub_1401A65D0(a2, a3, v32, v31, a5, v42, a8, *(_DWORD *)(a1 + 4));
      }
      else
      {
        v11 = sub_1401A6710((__int64)a2, a3, v32, v31, a5, v42, a8);
      }
    }
    else if ( *(_DWORD *)(a1 + 4) )
    {
      v38 = 1;
      v33 = (1 << a5) - 1;
      a9 &= v33;
      if ( a9 )
      {
        if ( a6 )
        {
          for ( i = 0; i < a3; ++i )
          {
            *(_DWORD *)(a1 + 56) = sub_1401A5C70(*(_DWORD *)(a1 + 56));
            v22 = 0.00390625;
            if ( (*(_DWORD *)(a1 + 56) & 0x8000) != 0 )
              v34 = v22;
            else
              v34 = -v22;
            v22 = v34;
            a2[i] = *(float *)(a6 + 4LL * i) + v34;
          }
          v11 = a9;
        }
        else
        {
          for ( i = 0; i < a3; ++i )
          {
            *(_DWORD *)(a1 + 56) = sub_1401A5C70(*(_DWORD *)(a1 + 56));
            a2[i] = (float)(*(int *)(a1 + 56) >> 20);
          }
          v11 = v33;
        }
        sub_1401A6800(a2, a3, a8);
      }
      else
      {
        sub_1401FCD30((void *)(uintptr_t)(a2), 0, 4LL * a3);
      }
    }
  }
  else
  {
    v40 = 0;
    v53 = a3 >> 1;
    v36 = &a2[a3 >> 1];
    --a7;
    if ( a5 == 1 )
      a9 = (2 * a9) | a9 & 1;
    a5 = (a5 + 1) >> 1;
    sub_1401AA790((int *)a1, &theta[0], (__int64)a2, (__int64)v36, v53, &v54, a5, v18, a7, 0, &a9);
    v35 = theta[1];
    v26 = theta[2];
    v12 = theta[3];
    v19 = theta[4];
    v39 = theta[5];
    v24 = 0x1p-15f * (float)theta[1];
    v23 = 0x1p-15f * (float)theta[2];
    if ( v18 > 1 && (v19 & 0x3FFF) != 0 )
    {
      if ( v19 <= 0x2000 )
      {
        if ( ((8 * v53) >> (5 - a7)) + v12 <= 0 )
          v27 = ((8 * v53) >> (5 - a7)) + v12;
        else
          v27 = 0;
        v12 = v27;
      }
      else
      {
        v12 -= v12 >> (4 - a7);
      }
    }
    if ( v54 >= (v54 - v12) / 2 )
      v28 = (v54 - v12) / 2;
    else
      v28 = v54;
    if ( v28 >= 0 )
    {
      if ( v54 >= (v54 - v12) / 2 )
        v29 = (v54 - v12) / 2;
      else
        v29 = v54;
      v30 = v29;
    }
    else
    {
      v30 = 0;
    }
    v15 = v30;
    v17 = v54 - v30;
    *(_DWORD *)(a1 + 40) -= v39;
    if ( a6 )
      v40 = a6 + 4LL * v53;
    v14 = *(_DWORD *)(a1 + 40);
    if ( v15 < v17 )
    {
      v11 = (unsigned int)sub_1401AB510(a1, v36, v53, v17, a5, v40, a7, a8 * v23, a9 >> a5) << (v18 >> 1);
      v14 = v17 - (v14 - *(_DWORD *)(a1 + 40));
      if ( v14 > 24 && v19 != 0x4000 )
        v15 = v15 + v14 - 24;
      v11 |= sub_1401AB510(a1, a2, v53, v15, a5, a6, a7, a8 * v24, a9);
    }
    else
    {
      v11 = sub_1401AB510(a1, a2, v53, v15, a5, a6, a7, a8 * v24, a9);
      v14 = v15 - (v14 - *(_DWORD *)(a1 + 40));
      if ( v14 > 24 && v19 )
        v17 = v17 + v14 - 24;
      v11 |= (unsigned int)sub_1401AB510(a1, v36, v53, v17, a5, v40, a7, a8 * v23, a9 >> a5) << (v18 >> 1);
    }
  }
  return v11; /* native EAX collapse mask */
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401AC060) ----------------------------------------------------
__int64            sub_1401AC060(
        int *a1,
        float *a2,
        int a3,
        int a4,
        int a5,
        __m128i *a6,
        int a7,
        _DWORD *a8,
        float a9,
        __m128i *a10,
        int a11)
{
  float v12; // xmm0_4
  int v13; // [rsp+50h] [rbp-58h]
  int j; // [rsp+50h] [rbp-58h]
  int i; // [rsp+54h] [rbp-54h]
  int k; // [rsp+54h] [rbp-54h]
  int m; // [rsp+54h] [rbp-54h]
  int v18; // [rsp+58h] [rbp-50h]
  unsigned int v19; // [rsp+60h] [rbp-48h]
  int v20; // [rsp+64h] [rbp-44h]
  int n; // [rsp+68h] [rbp-40h]
  int v22; // [rsp+6Ch] [rbp-3Ch]
  BOOL v23; // [rsp+70h] [rbp-38h]
  int v24; // [rsp+74h] [rbp-34h]
  int v30; // [rsp+D0h] [rbp+28h]
  int v31; // [rsp+D0h] [rbp+28h]

  v24 = 0;
  v18 = 0;
  v22 = *a1;
  v20 = a1[7];
  v23 = a5 == 1;
  v13 = sub_14019A1A0(a3, a5);
  if ( a3 == 1 )
    return sub_1401AB360(a1, a2, nullptr, a4, a8);
  if ( v20 > 0 )
    v18 = v20;
  if ( a10 && a6 && (v18 || (v13 & 1) == 0 && v20 < 0 || a5 > 1) )
  {
    sub_1401FC920(a10, a6, 4LL * a3);
    a6 = a10;
  }
  for ( i = 0; i < v18; ++i )
  {
    if ( v22 )
      sub_1401A3F20((__int64)a2, a3 >> i, 1 << i);
    if ( a6 )
      sub_1401A3F20((__int64)a6, a3 >> i, 1 << i);
    a11 = (4 * byte_140279B70[a11 >> 4]) | byte_140279B70[a11 & 0xF];
  }
  v30 = a5 >> v18;
  for ( j = v13 << v18; (j & 1) == 0 && v20 < 0; j >>= 1 )
  {
    if ( v22 )
      sub_1401A3F20((__int64)a2, j, v30);
    if ( a6 )
      sub_1401A3F20((__int64)a6, j, v30);
    a11 |= a11 << v30;
    v30 *= 2;
    ++v24;
    ++v20;
  }
  if ( v30 > 1 )
  {
    if ( v22 )
      sub_1401AA340((__m128i *)a2, j >> v18, v30 << v18, v23);
    if ( a6 )
      sub_1401AA340(a6, j >> v18, v30 << v18, v23);
  }
  v19 = sub_1401AB510((__int64)a1, a2, a3, a4, v30, (__int64)a6, a7, a9, a11);
  if ( a1[1] )
  {
    if ( v30 > 1 )
      sub_1401AA4E0((__m128i *)a2, j >> v18, v30 << v18, v23);
    for ( k = 0; k < v24; ++k )
    {
      v30 >>= 1;
      j *= 2;
      v19 |= v19 >> v30;
      sub_1401A3F20((__int64)a2, j, v30);
    }
    for ( m = 0; m < v18; ++m )
    {
      v19 = byte_140279B80[v19];
      sub_1401A3F20((__int64)a2, a3 >> m, 1 << m);
    }
    v31 = v30 << v18;
    if ( a8 )
    {
      v12 = sqrt((double)a3);
      for ( n = 0; n < a3; ++n )
        *(float *)&a8[n] = v12 * a2[n];
    }
    v19 &= (1 << v31) - 1;
  }
  return v19;
}

// 140279B70: using guessed type unsigned __int8 byte_140279B70[16];
// 140279B80: using guessed type unsigned __int8 byte_140279B80[16];

//----- (00000001401AC6B0) ----------------------------------------------------
__int64            CGlobalUtils__CheckAlignment(
        __int64 a1,
        float *a2,
        float *a3,
        int a4,
        int a5,
        int a6,
        __m128i *a7,
        int a8,
        _DWORD *a9,
        __m128i *a10,
        int a11)
{
  _DWORD v12[10]; // [rsp+0h] [rbp-118h] BYREF
  int v13; // [rsp+60h] [rbp-B8h]
  int v14; // [rsp+64h] [rbp-B4h]
  int v15; // [rsp+68h] [rbp-B0h]
  int v16; // [rsp+6Ch] [rbp-ACh]
  int v17; // [rsp+70h] [rbp-A8h]
  float v18; // [rsp+74h] [rbp-A4h]
  float v19; // [rsp+78h] [rbp-A0h]
  int v20; // [rsp+7Ch] [rbp-9Ch]
  int i; // [rsp+80h] [rbp-98h]
  int v22; // [rsp+84h] [rbp-94h]
  float v23; // [rsp+88h] [rbp-90h]
  int v24; // [rsp+8Ch] [rbp-8Ch]
  int v25; // [rsp+90h] [rbp-88h]
  BOOL v26; // [rsp+94h] [rbp-84h]
  BOOL v27; // [rsp+98h] [rbp-80h]
  BOOL v28; // [rsp+9Ch] [rbp-7Ch]
  int v29; // [rsp+A0h] [rbp-78h]
  int v30; // [rsp+A4h] [rbp-74h]
  int v31; // [rsp+A8h] [rbp-70h]
  int v32; // [rsp+ACh] [rbp-6Ch]
  BOOL v33; // [rsp+B0h] [rbp-68h]
  float *v34; // [rsp+B8h] [rbp-60h]
  float *v35; // [rsp+C0h] [rbp-58h]
  int v36; // [rsp+C8h] [rbp-50h]
  int v37; // [rsp+CCh] [rbp-4Ch]
  float *v38; // [rsp+D0h] [rbp-48h]
  float *v39; // [rsp+D8h] [rbp-40h]
  _DWORD *v40; // [rsp+E0h] [rbp-38h]
  BOOL v41; // [rsp+E8h] [rbp-30h] BYREF
  int v42; // [rsp+ECh] [rbp-2Ch]
  int v43; // [rsp+F0h] [rbp-28h]
  int v44; // [rsp+F4h] [rbp-24h]
  int v45; // [rsp+F8h] [rbp-20h]
  int v46; // [rsp+FCh] [rbp-1Ch]
  __int64 v47; // [rsp+100h] [rbp-18h]

  v24 = 0;
  v25 = 0;
  v33 = 0;
  v23 = 0.0;
  v19 = 0.0;
  v16 = 0;
  v36 = *(_DWORD *)a1;
  v40 = *(_DWORD **)(a1 + 32);
  if ( a4 == 1 )
  {
    return sub_1401AB360((int *)a1, a2, a3, a5, a9); /* 0x1401AC777: the call's result stays in rax */
  }
  else
  {
    v37 = a11;
    sub_1401AA790((int *)a1, &v41, (__int64)a2, (__int64)a3, a4, &a5, a6, a6, a8, 1, &a11);
    v33 = v41;
    v24 = v42;
    v25 = v43;
    v22 = v44;
    v20 = v45;
    v32 = v46;
    v23 = 0.000030517578 * (float)v42;
    v19 = 0.000030517578 * (float)v43;
    if ( a4 == 2 )
    {
      v17 = 0;
      v14 = a5;
      v13 = 0;
      if ( v20 && v20 != 0x4000 )
        v13 = 8;
      v14 -= v13;
      v26 = v20 > 0x2000;
      v27 = v26;
      *(_DWORD *)(a1 + 40) -= v13 + v32;
      if ( v27 )
        v38 = a3;
      else
        v38 = a2;
      v34 = v38;
      if ( v27 )
        v39 = a2;
      else
        v39 = a3;
      v35 = v39;
      if ( v13 )
      {
        if ( v36 )
        {
          v28 = (float)((float)(*v34 * v35[1]) - (float)(v34[1] * *v35)) < 0.0;
          v17 = v28;
          sub_14019A6D0(v40, v28, 1);
        }
        else
        {
          v17 = sub_14019B1C0(v40, 1u);
        }
      }
      v17 = 1 - 2 * v17;
      v16 = sub_1401AC060((int *)a1, v34, 2, v14, a6, a7, a8, a9, 1.0, a10, v37);
      *v35 = (float)-v17 * v34[1];
      v35[1] = (float)v17 * *v34;
      if ( *(_DWORD *)(a1 + 4) )
      {
        *a2 = v23 * *a2;
        a2[1] = v23 * a2[1];
        *a3 = v19 * *a3;
        a3[1] = v19 * a3[1];
        v18 = *a2;
        *a2 = v18 - *a3;
        *a3 = v18 + *a3;
        v18 = a2[1];
        a2[1] = v18 - a3[1];
        a3[1] = v18 + a3[1];
      }
    }
    else
    {
      if ( a5 >= (a5 - v22) / 2 )
        v29 = (a5 - v22) / 2;
      else
        v29 = a5;
      if ( v29 >= 0 )
      {
        if ( a5 >= (a5 - v22) / 2 )
          v30 = (a5 - v22) / 2;
        else
          v30 = a5;
        v31 = v30;
      }
      else
      {
        v31 = 0;
      }
      v14 = v31;
      v13 = a5 - v31;
      *(_DWORD *)(a1 + 40) -= v32;
      v15 = *(_DWORD *)(a1 + 40);
      if ( v14 < v13 )
      {
        v16 = sub_1401AC060((int *)a1, a3, a4, v13, a6, nullptr, a8, nullptr, v19, nullptr, a11 >> a6);
        v15 = v13 - (v15 - *(_DWORD *)(a1 + 40));
        if ( v15 > 24 && v20 != 0x4000 )
          v14 = v14 + v15 - 24;
        v16 |= sub_1401AC060((int *)a1, a2, a4, v14, a6, a7, a8, a9, 1.0, a10, a11);
      }
      else
      {
        v16 = sub_1401AC060((int *)a1, a2, a4, v14, a6, a7, a8, a9, 1.0, a10, a11);
        v15 = v14 - (v15 - *(_DWORD *)(a1 + 40));
        if ( v15 > 24 && v20 )
          v13 = v13 + v15 - 24;
        v16 |= sub_1401AC060((int *)a1, a3, a4, v13, a6, nullptr, a8, nullptr, v19, nullptr, a11 >> a6);
      }
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      if ( a4 != 2 )
      {
        v12[8] = *(_DWORD *)(a1 + 60);
        sub_1401AA0F0((     __m128i *)a2, (__m128i *)a3, v23, a4);
      }
      if ( v33 )
      {
        for ( i = 0; i < a4; ++i )
          a3[i] = -a3[i];
      }
    }
  }
  return (unsigned int)v16; /* 0x1401AD1EE: mov eax, dword ptr [rsp + 0x6c] */
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401AD210) ----------------------------------------------------
__m128i *           sub_1401AD210(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __m128i *result; // rax
  int v7; // [rsp+20h] [rbp-28h]
  int v8; // [rsp+24h] [rbp-24h]
  __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = *(_QWORD *)(a1 + 32);
  v7 = (*(__int16 *)(v9 + 2LL * (a4 + 1)) - *(__int16 *)(v9 + 2LL * a4)) * a5;
  v8 = (*(__int16 *)(v9 + 2LL * (a4 + 2)) - *(__int16 *)(v9 + 2LL * (a4 + 1))) * a5;
  result = sub_1401FC920((__m128i *)(a2 + 4LL * v7), (     __m128i *)(a2 + 4LL * (2 * v7 - v8)), 4LL * (v8 - v7));
  if ( a6 )
    return sub_1401FC920((__m128i *)(a3 + 4LL * v7), (     __m128i *)(a3 + 4LL * (2 * v7 - v8)), 4LL * (v8 - v7));
  return result;
}


//----- (00000001401AD3B0) ----------------------------------------------------
__int64            sub_1401AD3B0(float a1)
{
  return (unsigned int)(int)a1;
}


//----- (00000001401AD3E0) ----------------------------------------------------
__int64            sub_1401AD3E0(float a1)
{
  float v2; // [rsp+20h] [rbp-18h]
  float v3; // [rsp+24h] [rbp-14h]

  if ( (float)(a1 * 32768.0) <= -32768.0 )
    v2 = -32768.0;
  else
    v2 = a1 * 32768.0;
  if ( v2 >= 32767.0 )
    v3 = 32767.0;
  else
    v3 = v2;
  return sub_1401AD3B0(v3);
}


//----- (00000001401AD490) ----------------------------------------------------
float            sub_1401AD490(_WORD *a1, float *a2, int a3)
{
  float result; // xmm0_4
  int j; // [rsp+20h] [rbp-38h]
  int k; // [rsp+20h] [rbp-38h]
  int i; // [rsp+24h] [rbp-34h]
  float v7; // [rsp+28h] [rbp-30h]
  float v8; // [rsp+2Ch] [rbp-2Ch]
  float v9; // [rsp+30h] [rbp-28h]
  float v10; // [rsp+34h] [rbp-24h]
  float v11; // [rsp+38h] [rbp-20h]

  v9 = *a2;
  sub_1401FCD30((void *)(uintptr_t)(a1), 0, 4LL * a3);
  result = *a2;
  if ( *a2 != 0.0 )
  {
    for ( i = 0; i < a3; ++i )
    {
      v7 = 0.0;
      for ( j = 0; j < i; ++j )
        v7 = v7 + (float)(*(float *)&a1[2 * j] * a2[i - j]);
      v8 = -(float)((float)(v7 + a2[i + 1]) / v9);
      *(float *)&a1[2 * i] = v8;
      for ( k = 0; k < (i + 1) >> 1; *(float *)&a1[2 * (i - 1 - k++)] = v11 + (float)(v8 * v10) )
      {
        v10 = *(float *)&a1[2 * k];
        v11 = *(float *)&a1[2 * (i - 1 - k)];
        *(float *)&a1[2 * k] = v10 + (float)(v8 * v11);
      }
      v9 = v9 - (float)((float)(v8 * v8) * v9);
      result = 0.001 * *a2;
      if ( result > v9 )
        break;
    }
  }
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401AD6F0) ----------------------------------------------------
__int64            sub_1401AD6F0(__int64 a1, __int64 a2, __int64 a3, signed int a4, signed int a5)
{
  unsigned __int64 v5; // rcx
  void *v6; // rsp
  signed int i; // [rsp+20h] [rbp+0h] BYREF
  signed int j; // [rsp+24h] [rbp+4h]
  float v10; // [rsp+28h] [rbp+8h]
  float *v11; // [rsp+30h] [rbp+10h]
  int v12; // [rsp+38h] [rbp+18h] BYREF
  int v13; // [rsp+3Ch] [rbp+1Ch]
  int v14; // [rsp+40h] [rbp+20h]
  int v15; // [rsp+44h] [rbp+24h]
  __int64 v16; // [rsp+48h] [rbp+28h]

  v5 = 4LL * a5 + 15;
  if ( v5 <= 4LL * a5 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = alloca(v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v11 = (float *)&i;
  for ( i = 0; i < a5; ++i )
    v11[i] = *(float *)(a2 + 4LL * (a5 - i - 1));
  for ( i = 0; i < a4 - 3; i += 4 )
  {
    v12 = *(_DWORD *)(a1 + 4LL * i);
    v13 = *(_DWORD *)(a1 + 4LL * (i + 1));
    v14 = *(_DWORD *)(a1 + 4LL * (i + 2));
    v15 = *(_DWORD *)(a1 + 4LL * (i + 3));
    sub_1401A92A0(v11, (float *)(a1 + 4LL * i - 4LL * a5), (float *)&v12, a5);
    *(_DWORD *)(a3 + 4LL * i) = v12;
    *(_DWORD *)(a3 + 4LL * (i + 1)) = v13;
    *(_DWORD *)(a3 + 4LL * (i + 2)) = v14;
    *(_DWORD *)(a3 + 4LL * (i + 3)) = v15;
  }
  while ( i < a4 )
  {
    v10 = *(float *)(a1 + 4LL * i);
    for ( j = 0; j < a5; ++j )
      v10 = v10 + (float)(v11[j] * *(float *)(a1 + 4LL * (j + i - a5)));
    *(float *)(a3 + 4LL * i++) = v10;
  }
  return 0; /* no caller reads the result */
}


//----- (00000001401AD990) ----------------------------------------------------
__int64            sub_1401AD990(__int64 a1, float *a2, __int64 a3, signed int a4, signed int a5, __int64 a6)
{
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  signed int i; // [rsp+20h] [rbp+0h] BYREF
  signed int *v12; // [rsp+28h] [rbp+8h]
  signed int j; // [rsp+30h] [rbp+10h]
  float v14; // [rsp+34h] [rbp+14h]
  float *v15; // [rsp+38h] [rbp+18h]
  float v16; // [rsp+40h] [rbp+20h] BYREF
  float v17; // [rsp+44h] [rbp+24h]
  float v18; // [rsp+48h] [rbp+28h]
  float v19; // [rsp+4Ch] [rbp+2Ch]
  __int64 v20; // [rsp+50h] [rbp+30h]

  v6 = 4LL * a5 + 15;
  if ( v6 <= 4LL * a5 )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
  v15 = (float *)&i;
  v8 = 4LL * (a5 + a4) + 15;
  if ( v8 <= 4LL * (a5 + a4) )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  v12 = &i;
  for ( i = 0; i < a5; ++i )
    v15[i] = a2[a5 - i - 1];
  for ( i = 0; i < a5; ++i )
    *(float *)&v12[i] = -*(float *)(a6 + 4LL * (a5 - i - 1));
  while ( i < a5 + a4 )
    v12[i++] = 0;
  for ( i = 0; i < a4 - 3; i += 4 )
  {
    v16 = *(float *)(a1 + 4LL * i);
    v17 = *(float *)(a1 + 4LL * (i + 1));
    v18 = *(float *)(a1 + 4LL * (i + 2));
    v19 = *(float *)(a1 + 4LL * (i + 3));
    sub_1401A92A0(v15, (float *)&v12[i], &v16, a5);
    *(float *)&v12[a5 + i] = -v16;
    *(float *)(a3 + 4LL * i) = v16;
    v17 = v17 + (float)(*(float *)&v12[a5 + i] * *a2);
    *(float *)&v12[i + 1 + a5] = -v17;
    *(float *)(a3 + 4LL * (i + 1)) = v17;
    v18 = v18 + (float)(*(float *)&v12[i + 1 + a5] * *a2);
    v18 = v18 + (float)(*(float *)&v12[a5 + i] * a2[1]);
    *(float *)&v12[i + 2 + a5] = -v18;
    *(float *)(a3 + 4LL * (i + 2)) = v18;
    v19 = v19 + (float)(*(float *)&v12[i + 2 + a5] * *a2);
    v19 = v19 + (float)(*(float *)&v12[i + 1 + a5] * a2[1]);
    v19 = v19 + (float)(*(float *)&v12[a5 + i] * a2[2]);
    *(float *)&v12[i + 3 + a5] = -v19;
    *(float *)(a3 + 4LL * (i + 3)) = v19;
  }
  while ( i < a4 )
  {
    v14 = *(float *)(a1 + 4LL * i);
    for ( j = 0; j < a5; ++j )
      v14 = v14 - (float)(v15[j] * *(float *)&v12[j + i]);
    *(float *)&v12[a5 + i] = v14;
    *(float *)(a3 + 4LL * i++) = v14;
  }
  for ( i = 0; i < a5; ++i )
    *(_DWORD *)(a6 + 4LL * i) = *(_DWORD *)(a3 + 4LL * (a4 - i - 1));
  return 0; /* no caller reads the result */
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401ADFA0) ----------------------------------------------------
void               sub_1401ADFA0(float *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  int i; // [rsp+30h] [rbp+0h] BYREF
  int j; // [rsp+34h] [rbp+4h]
  float v11; // [rsp+38h] [rbp+8h]
  signed int v12; // [rsp+3Ch] [rbp+Ch]
  float *v13; // [rsp+40h] [rbp+10h]
  float *v14; // [rsp+48h] [rbp+18h]
  int v15; // [rsp+50h] [rbp+20h]
  __int64 v16; // [rsp+58h] [rbp+28h]

  v12 = a6 - a5;
  v6 = 4LL * a6 + 15;
  if ( v6 <= 4LL * a6 )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
  v14 = (float *)v7; /* original dynamic allocation, not frame counter */
  if ( a4 )
  {
    for ( i = 0; i < a6; ++i )
      v14[i] = a1[i];
    for ( i = 0; i < a4; ++i )
    {
      v14[i] = a1[i] * *(float *)(a3 + 4LL * i);
      v14[a6 - i - 1] = a1[a6 - i - 1] * *(float *)(a3 + 4LL * i);
    }
    v13 = v14;
  }
  else
  {
    v13 = a1;
  }
  v15 = 0;
  sub_1401A9C80(v13, (__int64)v13, a2, v12, a5 + 1);
  for ( j = 0; j <= a5; ++j )
  {
    i = v12 + j;
    v11 = 0.0;
    while ( i < a6 )
    {
      v11 = v11 + (float)(v13[i] * v13[i - j]);
      ++i;
    }
    *(float *)(a2 + 4LL * j) = *(float *)(a2 + 4LL * j) + v11;
  }
  return; /* original void epilogue */
}


//----- (00000001401AE1D0) ----------------------------------------------------
__int64            sub_1401AE1D0(__int64 a1, __int64 a2, int a3, unsigned int a4, float a5, float a6, float a7)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  float v9; // [rsp+4h] [rbp-24h]
  float v10; // [rsp+8h] [rbp-20h]
  float v11; // [rsp+Ch] [rbp-1Ch]
  float v12; // [rsp+10h] [rbp-18h]
  float v13; // [rsp+14h] [rbp-14h]

  v12 = *(float *)(a2 + 4LL * (-a3 - 2));
  v9 = *(float *)(a2 + 4LL * (-a3 - 1));
  v10 = *(float *)(a2 + 4LL * -a3);
  v11 = *(float *)(a2 + 4LL * (1 - a3));
  for ( i = 0; ; ++i )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    v13 = *(float *)(a2 + 4LL * (i - a3 + 2));
    *(float *)(a1 + 4LL * i) = (float)((float)(*(float *)(a2 + 4LL * i) + (float)(a5 * v10))
                                     + (float)(a6 * (float)(v11 + v9)))
                             + (float)(a7 * (float)(v13 + v12));
    *(_DWORD *)(a1 + 4LL * i) = *(_DWORD *)(a1 + 4LL * i);
    v12 = v9;
    v9 = v10;
    v10 = v11;
    v11 = v13;
  }
  return result;
}


//----- (00000001401AE360) ----------------------------------------------------
__int64            sub_1401AE360(__int64 a1, int a2)
{
  return (unsigned int)((a2 << 12) + 4 * (*(_DWORD *)(a1 + 4) * a2 - 1) + 256 + 4 * *(_DWORD *)(a1 + 8) * 4 * a2);
}


//----- (00000001401AE3C0) ----------------------------------------------------
__int64            sub_1401AE3C0(_DWORD *a1, __int64 a2, unsigned int a3, int a4)
{
  int v5; // eax
  __m128i *v6; // r8

  if ( a3 > 2 )
    return 0xFFFFFFFFLL;
  if ( !a1 || !a2 )
    return 4294967289LL;
  v5 = sub_1401AE360(a2, a3);
  sub_1401FCD30((void *)(uintptr_t)(a1), 0, v5);
  *(_QWORD *)a1 = a2;
  a1[2] = a3;
  a1[3] = a3;
  a1[8] = 1;
  a1[9] = 0;
  a1[10] = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  a1[13] = 1;
  a1[19] = a4;
  a1[14] = 1;
  a1[5] = 1;
  a1[11] = -1;
  a1[12] = 0;
  a1[4] = 0;
  a1[7] = 5;
  a1[16] = 24;
  sub_140199190(a1, 4028, v6);
  return 0;
}

// 1401AE4EF: variable 'v6' is possibly undefined

//----- (00000001401AE510) ----------------------------------------------------
int                sub_1401AE510(__int64 a1, int a2, int a3, float *a4, int *a5, int a6, _DWORD *a7)
{
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm0_4
  int j; // [rsp+20h] [rbp+0h] BYREF
  float v15; // [rsp+24h] [rbp+4h]
  int v16; // [rsp+28h] [rbp+8h]
  int *v17; // [rsp+30h] [rbp+10h]
  int v18; // [rsp+38h] [rbp+18h]
  int v19; // [rsp+3Ch] [rbp+1Ch]
  float v20; // [rsp+40h] [rbp+20h]
  int i; // [rsp+44h] [rbp+24h]
  float v22; // [rsp+48h] [rbp+28h]
  float v23; // [rsp+4Ch] [rbp+2Ch]
  float v24; // [rsp+50h] [rbp+30h]
  BOOL v25; // [rsp+54h] [rbp+34h]
  float v26; // [rsp+58h] [rbp+38h]
  float v27; // [rsp+5Ch] [rbp+3Ch]
  float v28; // [rsp+60h] [rbp+40h]
  float v29; // [rsp+64h] [rbp+44h]
  float v30; // [rsp+68h] [rbp+48h]
  float v31; // [rsp+6Ch] [rbp+4Ch]
  BOOL v32; // [rsp+70h] [rbp+50h]
  float v33; // [rsp+74h] [rbp+54h]
  float v34; // [rsp+78h] [rbp+58h]
  float v35; // [rsp+7Ch] [rbp+5Ch]
  int v36; // [rsp+80h] [rbp+60h]
  double v37; // [rsp+88h] [rbp+68h]
  double v38; // [rsp+90h] [rbp+70h]
  double v39; // [rsp+98h] [rbp+78h]
  double X; // [rsp+A0h] [rbp+80h]
  __int64 v41; // [rsp+A8h] [rbp+88h]

  v25 = 0;
  v19 = 0;
  v30 = 0.0625;
  v7 = 4LL * a2 + 15;
  if ( v7 <= 4LL * a2 )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
  v17 = (int *)v8;
  *a7 = 0;
  if ( a6 )
    v30 = 0.03125;
  v18 = a2 / 2;
  for ( i = 0; i < a3; ++i )
  {
    v16 = 0;
    v15 = 0.0;
    v28 = 0.0;
    for ( j = 0; j < a2; ++j )
    {
      v26 = *(float *)(a1 + 4LL * (a2 * i + j));
      v27 = v15 + v26;
      v15 = (float)(v28 + (float)(v15 + v26)) - (float)(2.0f * v26);
      v28 = v26 - (float)(0.5f * v27);
      *(float *)&v17[j] = v27;
    }
    sub_1401FCD30((void *)(uintptr_t)(v17), 0, 0x30u);
    v20 = 0.0;
    v15 = 0.0;
    for ( j = 0; j < v18; ++j )
    {
      v29 = (float)(*(float *)&v17[2 * j] * *(float *)&v17[2 * j])
          + (float)(*(float *)&v17[2 * j + 1] * *(float *)&v17[2 * j + 1]);
      v20 = v20 + v29;
      *(float *)&v17[j] = v15 + (float)(v30 * (float)(v29 - v15));
      v15 = *(float *)&v17[j];
    }
    v15 = 0.0;
    v22 = 0.0;
    for ( j = v18 - 1; j >= 0; --j )
    {
      *(float *)&v17[j] = v15 + (float)(0.125f * (float)(*(float *)&v17[j] - v15));
      v15 = *(float *)&v17[j];
      if ( v22 <= v15 )
        v31 = v15;
      else
        v31 = v22;
      v22 = v31;
    }
    v9 = sqrt((float)(v20 * v22) * 0.5 * (double)v18);
    v20 = v9;
    v23 = (float)v18 / (float)(v9 + 1.0e-15f);
    v16 = 0;
    for ( j = 12; j < v18 - 5; j += 4 )
    {
      if ( floor((float)((float)(64.0f * v23) * (float)(*(float *)&v17[j] + 1.0e-15f))) <= 127.0 )
        v37 = floor((float)((float)(64.0f * v23) * (float)(*(float *)&v17[j] + 1.0e-15f)));
      else
        v37 = 127.0;
      if ( v37 >= 0.0 )
      {
        if ( floor((float)((float)(64.0f * v23) * (float)(*(float *)&v17[j] + 1.0e-15f))) <= 127.0 )
          v38 = floor((float)((float)(64.0f * v23) * (float)(*(float *)&v17[j] + 1.0e-15f)));
        else
          v38 = 127.0;
        v39 = v38;
      }
      else
      {
        v39 = 0.0;
      }
      v36 = (int)v39;
      v16 += byte_140279C00[(int)v39];
    }
    v16 = (v16 << 8) / (6 * (v18 - 17));
    if ( v16 > v19 )
    {
      *a5 = i;
      v19 = v16;
    }
  }
  v32 = v19 > 200;
  v25 = v32;
  if ( a6 && v25 && v19 < 600 )
  {
    v25 = 0;
    *a7 = 1;
  }
  v10 = sqrt((double)(27 * v19));
  if ( (float)(v10 - 42.0f) >= 0.0 )
  {
    v11 = sqrt((double)(27 * v19));
    v33 = v11 - 42.0f;
  }
  else
  {
    v33 = 0.0;
  }
  v24 = v33;
  if ( v33 <= 163.0 )
    v34 = v24;
  else
    v34 = 163.0;
  if ( (float)(0.0068999999f * v34) - 0.139 >= 0.0 )
  {
    if ( v24 <= 163.0 )
      v35 = v24;
    else
      v35 = 163.0;
    X = (float)(0.0068999999f * v35) - 0.139;
  }
  else
  {
    X = 0.0;
  }
  v12 = sqrt(X);
  *a4 = v12;
  return v25; /* native EAX transient decision */
}

// 140279C00: using guessed type unsigned __int8 byte_140279C00[128];

//----- (00000001401AEB90) ----------------------------------------------------
__int64            sub_1401AEB90(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int i; // [rsp+0h] [rbp-D8h] BYREF
  int v8; // [rsp+4h] [rbp-D4h]
  float v9; // [rsp+8h] [rbp-D0h]
  float v10; // [rsp+Ch] [rbp-CCh]
  float v11; // [rsp+10h] [rbp-C8h]
  float v12; // [rsp+14h] [rbp-C4h]
  float v13; // [rsp+18h] [rbp-C0h]
  float v14; // [rsp+1Ch] [rbp-BCh]
  float v15; // [rsp+20h] [rbp-B8h]
  int v16; // [rsp+24h] [rbp-B4h]
  float v17; // [rsp+28h] [rbp-B0h]
  float v18; // [rsp+2Ch] [rbp-ACh]
  float v19; // [rsp+30h] [rbp-A8h]
  float v20; // [rsp+34h] [rbp-A4h]
  float v21; // [rsp+38h] [rbp-A0h]
  int v22; // [rsp+3Ch] [rbp-9Ch]
  BOOL v23; // [rsp+40h] [rbp-98h]
  float v24[28]; // [rsp+50h] [rbp-88h]
  __int64 v25; // [rsp+C0h] [rbp-18h]

  v9 = 0.0;
  if ( a6 == 1 )
  {
    v24[a4] = *(float *)(a2 + 4LL * a4);
    for ( i = a4 + 1; i < a5; ++i )
    {
      if ( (float)(v24[i - 1] - 1.0) <= *(float *)(a2 + 4LL * i) )
        v10 = *(float *)(a2 + 4LL * i);
      else
        v10 = v24[i - 1] - 1.0;
      v24[i] = v10;
    }
  }
  else
  {
    if ( *(float *)(a2 + 4LL * a4) <= *(float *)(a2 + 4LL * (a3 + a4)) )
      v11 = *(float *)(a2 + 4LL * (a3 + a4));
    else
      v11 = *(float *)(a2 + 4LL * a4);
    v24[a4] = v11;
    for ( i = a4 + 1; i < a5; ++i )
    {
      if ( *(float *)(a2 + 4LL * i) <= *(float *)(a2 + 4LL * (a3 + i)) )
        v12 = *(float *)(a2 + 4LL * (a3 + i));
      else
        v12 = *(float *)(a2 + 4LL * i);
      if ( (float)(v24[i - 1] - 1.0) <= v12 )
      {
        if ( *(float *)(a2 + 4LL * i) <= *(float *)(a2 + 4LL * (a3 + i)) )
          v13 = *(float *)(a2 + 4LL * (a3 + i));
        else
          v13 = *(float *)(a2 + 4LL * i);
        v14 = v13;
      }
      else
      {
        v14 = v24[i - 1] - 1.0;
      }
      v24[i] = v14;
    }
  }
  for ( i = a5 - 2; i >= a4; --i )
  {
    if ( v24[i] <= (float)(v24[i + 1] - 1.0) )
      v15 = v24[i + 1] - 1.0;
    else
      v15 = v24[i];
    v24[i] = v15;
  }
  v8 = 0;
  do
  {
    if ( a4 >= 2 )
      v16 = a4;
    else
      v16 = 2;
    for ( i = v16; i < a5 - 1; ++i )
    {
      if ( *(float *)(a1 + 4LL * (a3 * v8 + i)) >= 0.0 )
        v17 = *(float *)(a1 + 4LL * (a3 * v8 + i));
      else
        v17 = 0.0;
      v19 = v17;
      if ( v24[i] >= 0.0 )
        v18 = v24[i];
      else
        v18 = 0.0;
      v20 = v18;
      if ( (float)(v19 - v18) >= 0.0 )
        v21 = v19 - v20;
      else
        v21 = 0.0;
      v9 = v9 + v21;
    }
    ++v8;
  }
  while ( v8 < a6 );
  if ( a4 >= 2 )
    v22 = a4;
  else
    v22 = 2;
  v23 = (float)(v9 / (float)((a5 - 1 - v22) * a6)) > 1.0;
  return (unsigned int)v23; /* 0x1401AF0C8: mov eax, dword ptr [rsp + 0x40] */
}


//----- (00000001401AF0F0) ----------------------------------------------------
__int64            sub_1401AF0F0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  __int64 result; // rax
  int j; // [rsp+40h] [rbp-38h]
  int k; // [rsp+40h] [rbp-38h]
  int v11; // [rsp+44h] [rbp-34h]
  signed int v12; // [rsp+48h] [rbp-30h]
  signed int v13; // [rsp+48h] [rbp-30h]
  int v14; // [rsp+4Ch] [rbp-2Ch]
  int i; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+54h] [rbp-24h]
  int v17; // [rsp+58h] [rbp-20h]
  int v18; // [rsp+5Ch] [rbp-1Ch]

  v18 = *(_DWORD *)(a1 + 4);
  if ( a2 )
  {
    v11 = a2;
    v14 = *(_DWORD *)(a1 + 48);
    v17 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v11 = 1;
    v14 = *(_DWORD *)(a1 + 48) << a7;
    v17 = *(_DWORD *)(a1 + 40) - a7;
  }
  v12 = 0;
  do
  {
    for ( i = 0; i < v11; ++i )
      sub_1401A1860(
        a1 + 80,
        a3 + 4LL * (v18 + v14 * v11) * v12 + 4LL * v14 * i,
        (float *)(a4 + 4LL * (v11 * v14 * v12 + i)),
        *(float **)(a1 + 72),
        v18,
        v17,
        v11);
    ++v12;
    result = a6;
  }
  while ( v12 < (int)a6 );
  if ( a6 == 2 && a5 == 1 )
  {
    for ( j = 0; ; ++j )
    {
      result = (unsigned int)(v14 * v11);
      if ( j >= (int)result )
        break;
      *(float *)(a4 + 4LL * j) = (float)(0.5 * *(float *)(a4 + 4LL * j))
                               + (float)(0.5 * *(float *)(a4 + 4LL * (j + v14 * v11)));
    }
  }
  if ( a8 != 1 )
  {
    v13 = 0;
    do
    {
      v16 = v14 * v11 / a8;
      for ( k = 0; k < v16; ++k )
        *(float *)(a4 + 4LL * (k + v14 * v11 * v13)) = *(float *)(a4 + 4LL * (k + v14 * v11 * v13)) * (float)a8;
      sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a4 + 4LL * (v16 + v14 * v11 * v13++))), 0, 4LL * (v14 * v11 - v16));
      result = a5;
    }
    while ( v13 < (int)a5 );
  }
  return result;
}


//----- (00000001401AF440) ----------------------------------------------------
float            sub_1401AF440(__int64 a1, int a2, int a3, float a4)
{
  float v4; // xmm0_4
  float v6; // [rsp+20h] [rbp-18h]
  int i; // [rsp+24h] [rbp-14h]

  v6 = 0.0;
  for ( i = 0; i < a2; ++i )
  {
    v4 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(*(float *)(a1 + 4LL * i)), u64);
    v6 = v6 + v4;
  }
  return v6 + (float)((float)((float)a3 * a4) * v6);
}


//----- (00000001401AF4F0) ----------------------------------------------------
int                sub_1401AF4F0(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        float a9,
        int a10,
        __int64 a11)
{
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rsp
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  void *v18; // rsp
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  unsigned __int64 v21; // rcx
  void *v22; // rsp
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int i; // [rsp+20h] [rbp+0h] BYREF
  int v35; // [rsp+24h] [rbp+4h]
  int v36; // [rsp+28h] [rbp+8h]
  int j; // [rsp+2Ch] [rbp+Ch]
  int k; // [rsp+30h] [rbp+10h]
  int v39; // [rsp+34h] [rbp+14h]
  float v40; // [rsp+38h] [rbp+18h]
  int v41; // [rsp+3Ch] [rbp+1Ch]
  int *v42; // [rsp+40h] [rbp+20h]
  int v43; // [rsp+48h] [rbp+28h]
  int v44; // [rsp+4Ch] [rbp+2Ch]
  float v45; // [rsp+50h] [rbp+30h]
  int v46; // [rsp+54h] [rbp+34h]
  float v47; // [rsp+58h] [rbp+38h]
  BOOL v48; // [rsp+5Ch] [rbp+3Ch]
  __m128i *v49; // [rsp+60h] [rbp+40h]
  int v50; // [rsp+68h] [rbp+48h]
  BOOL v51; // [rsp+6Ch] [rbp+4Ch]
  int v52; // [rsp+70h] [rbp+50h]
  int v53; // [rsp+74h] [rbp+54h]
  int v54; // [rsp+78h] [rbp+58h]
  int v55; // [rsp+7Ch] [rbp+5Ch]
  int v56; // [rsp+80h] [rbp+60h]
  int v57; // [rsp+84h] [rbp+64h]
  int v58; // [rsp+88h] [rbp+68h]
  int v59; // [rsp+8Ch] [rbp+6Ch]
  BOOL v60; // [rsp+90h] [rbp+70h]
  float v61; // [rsp+94h] [rbp+74h]
  BOOL v62; // [rsp+98h] [rbp+78h]
  __m128i *v63; // [rsp+A0h] [rbp+80h]
  int v64; // [rsp+A8h] [rbp+88h]
  int v65; // [rsp+ACh] [rbp+8Ch]
  int v66; // [rsp+B0h] [rbp+90h]
  int v67; // [rsp+B4h] [rbp+94h]
  int v68; // [rsp+B8h] [rbp+98h]
  int v69; // [rsp+BCh] [rbp+9Ch]
  int *v70; // [rsp+C0h] [rbp+A0h]
  int *v71; // [rsp+C8h] [rbp+A8h]
  _DWORD v72[2]; // [rsp+D0h] [rbp+B0h]
  __int64 v73; // [rsp+D8h] [rbp+B8h]
  __int64 v74; // [rsp+E0h] [rbp+C0h]
  __int64 v75; // [rsp+E8h] [rbp+C8h]
  __int64 v76; // [rsp+F0h] [rbp+D0h]
  __int64 v77; // [rsp+F8h] [rbp+D8h]
  __int64 v78; // [rsp+100h] [rbp+E0h]
  __int64 v79; // [rsp+108h] [rbp+E8h]
  __int64 v80; // [rsp+110h] [rbp+F0h]
  __int64 v81; // [rsp+118h] [rbp+F8h]

  v41 = 0;
  if ( (float)(0.5 - a9) >= -0.25 )
    v61 = 0.5 - a9;
  else
    v61 = -0.25;
  v47 = 0.039999999 * v61;
  v11 = 4LL * a2 + 15;
  if ( v11 <= 4LL * a2 )
    v11 = 0xFFFFFFFFFFFFFF0LL;
  v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
  v42 = (int *)v12;
  v13 = 4LL
      * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (a2 - 1))) << a8);
  v14 = v13 + 15;
  if ( v13 + 15 <= v13 )
    v14 = 0xFFFFFFFFFFFFFF0LL;
  v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
  v49 = (__m128i *)v15;
  v16 = 4LL
      * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (a2 - 1))) << a8);
  v17 = v16 + 15;
  if ( v16 + 15 <= v16 )
    v17 = 0xFFFFFFFFFFFFFF0LL;
  v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
  v63 = (__m128i *)v18;
  v19 = 4LL * a2 + 15;
  if ( v19 <= 4LL * a2 )
    v19 = 0xFFFFFFFFFFFFFF0LL;
  v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
  v71 = (int *)v20;
  v21 = 4LL * a2 + 15;
  if ( v21 <= 4LL * a2 )
    v21 = 0xFFFFFFFFFFFFFF0LL;
  v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
  v70 = (int *)v22;
  for ( i = 0; i < a2; ++i )
  {
    v46 = 0;
    v39 = (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a8;
    v62 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) == 1;
    v48 = v62;
    v68 = a7 * a10;
    v69 = a7 * a10;
    sub_1401FC920(
      v49,
      (     __m128i *)(a6 + 4LL * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a8) + a7 * a10)),
      4LL * v39);
    if ( a3 )
      v50 = a8;
    else
      v50 = 0;
    v40 = sub_1401AF440((__int64)v49, v39, v50, v47);
    v45 = v40;
    if ( a3 )
    {
      if ( !v48 )
      {
        sub_1401FC920(v63, v49, 4LL * v39);
        v64 = 1;
        sub_1401A3F20((__int64)v63, v39 >> a8, 1 << a8);
        v40 = sub_1401AF440((__int64)v63, v39, a8 + 1, v47);
        if ( v45 > v40 )
        {
          v45 = v40;
          v46 = -1;
        }
      }
    }
    for ( j = 0; ; ++j )
    {
      v51 = !a3 && !v48;
      if ( j >= v51 + a8 )
        break;
      if ( a3 )
        v52 = a8 - j - 1;
      else
        v52 = j + 1;
      v65 = 1;
      sub_1401A3F20((__int64)v49, v39 >> j, 1 << j);
      v40 = sub_1401AF440((__int64)v49, v39, v52, v47);
      if ( v45 > v40 )
      {
        v45 = v40;
        v46 = j + 1;
      }
    }
    if ( a3 )
      v23 = 2 * v46;
    else
      v23 = -2 * v46;
    v42[i] = v23;
    if ( v48 && (!v42[i] || v42[i] == -2 * a8) )
      --v42[i];
  }
  v41 = 0;
  for ( k = 0; k < 2; ++k )
  {
    v73 = 0;
    v24 = abs(*v42 - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * k]);
    v35 = v24 * *(_DWORD *)(a11 + v73);
    if ( a3 )
      v53 = 0;
    else
      v53 = a5;
    v74 = 0;
    v25 = abs(*v42 - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * k]);
    v36 = v53 + v25 * *(_DWORD *)(a11 + v74);
    for ( i = 1; i < a2; ++i )
    {
      if ( v35 >= a5 + v36 )
        v54 = a5 + v36;
      else
        v54 = v35;
      v66 = v54;
      if ( a5 + v35 >= v36 )
        v55 = v36;
      else
        v55 = a5 + v35;
      v67 = v55;
      v75 = i;
      v26 = abs(v42[i] - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * k]);
      v35 = v26 * *(_DWORD *)(a11 + 4 * v75) + v66;
      v76 = i;
      v27 = abs(v42[i] - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * k]);
      v36 = v27 * *(_DWORD *)(a11 + 4 * v76) + v67;
    }
    if ( v35 >= v36 )
      v56 = v36;
    else
      v56 = v35;
    v35 = v56;
    v72[k] = v56;
  }
  if ( v72[1] < v72[0] && a3 )
    v41 = 1;
  v77 = 0;
  v28 = abs(*v42 - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * v41]);
  v35 = v28 * *(_DWORD *)(a11 + v77);
  if ( a3 )
    v57 = 0;
  else
    v57 = a5;
  v78 = 0;
  v29 = abs(*v42 - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * v41]);
  v36 = v57 + v29 * *(_DWORD *)(a11 + v78);
  for ( i = 1; i < a2; ++i )
  {
    v43 = v35;
    v44 = a5 + v36;
    if ( v35 >= a5 + v36 )
    {
      v58 = v44;
      v71[i] = 1;
    }
    else
    {
      v58 = v43;
      v71[i] = 0;
    }
    v43 = a5 + v35;
    v44 = v36;
    if ( a5 + v35 >= v36 )
    {
      v59 = v44;
      v70[i] = 1;
    }
    else
    {
      v59 = v43;
      v70[i] = 0;
    }
    v79 = i;
    v30 = abs(v42[i] - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * v41]);
    v35 = v30 * *(_DWORD *)(a11 + 4 * v79) + v58;
    v80 = i;
    v31 = abs(v42[i] - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * v41]);
    v36 = v31 * *(_DWORD *)(a11 + 4 * v80) + v59;
  }
  v60 = v35 >= v36;
  *(_DWORD *)(a4 + 4LL * (a2 - 1)) = v60;
  for ( i = a2 - 2; i >= 0; --i )
  {
    if ( *(_DWORD *)(a4 + 4LL * (i + 1)) == 1 )
      v32 = v70[i + 1];
    else
      v32 = v71[i + 1];
    *(_DWORD *)(a4 + 4LL * i) = v32;
  }
  return v41; /* original result ABI */
}


//----- (00000001401B0110) ----------------------------------------------------
__int64            sub_1401B0110(int a1, signed int a2, int a3, __int64 a4, int a5, int a6, _DWORD *a7)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-38h]
  int j; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+24h] [rbp-34h]
  unsigned int v11; // [rsp+28h] [rbp-30h]
  unsigned int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+2Ch] [rbp-2Ch]
  int v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+34h] [rbp-24h]
  int v16; // [rsp+38h] [rbp-20h]
  BOOL v17; // [rsp+3Ch] [rbp-1Ch]
  int v18; // [rsp+40h] [rbp-18h]

  v11 = 8 * a7[2];
  v15 = sub_14019A0A0((__int64)a7);
  if ( a3 )
    v16 = 2;
  else
    v16 = 4;
  v14 = v16;
  v17 = a5 > 0 && v15 + v16 + 1 <= v11;
  v12 = v11 - v17;
  v10 = 0;
  v13 = 0;
  for ( i = a1; i < a2; ++i )
  {
    if ( v14 + v15 > v12 )
    {
      *(_DWORD *)(a4 + 4LL * i) = v13;
    }
    else
    {
      sub_14019A450(a7, v13 ^ *(_DWORD *)(a4 + 4LL * i), v14);
      v15 = sub_14019A0A0((__int64)a7);
      v13 = *(_DWORD *)(a4 + 4LL * i);
      v10 |= v13;
    }
    if ( a3 )
      v18 = 4;
    else
      v18 = 5;
    v14 = v18;
  }
  if ( !v17 || byte_14027BB98[8 * a5 + 4 * a3 + v10] == byte_14027BB98[8 * a5 + 2 + 4 * a3 + v10] )
    a6 = 0;
  else
    sub_14019A450(a7, a6, 1);
  for ( j = a1; ; ++j )
  {
    result = (unsigned int)a2;
    if ( j >= a2 )
      break;
    *(_DWORD *)(a4 + 4LL * j) = byte_14027BB98[8 * a5 + 4 * a3 + 2 * a6 + *(_DWORD *)(a4 + 4LL * j)];
  }
  return result;
}


//----- (00000001401B0380) ----------------------------------------------------
__int64            sub_1401B0380(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        int a6,
        int a7,
        __int64 a8,
        float *a9,
        float a10,
        int a11,
        float a12,
        int a13)
{
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  int i; // [rsp+20h] [rbp-98h]
  int j; // [rsp+20h] [rbp-98h]
  int k; // [rsp+20h] [rbp-98h]
  float v27; // [rsp+24h] [rbp-94h]
  float v28; // [rsp+24h] [rbp-94h]
  float v29; // [rsp+28h] [rbp-90h]
  float v30; // [rsp+28h] [rbp-90h]
  float v31; // [rsp+2Ch] [rbp-8Ch]
  float v32; // [rsp+30h] [rbp-88h]
  float v33; // [rsp+30h] [rbp-88h]
  int v34; // [rsp+34h] [rbp-84h]
  float v35; // [rsp+38h] [rbp-80h]
  int v36; // [rsp+3Ch] [rbp-7Ch]
  float v37; // [rsp+40h] [rbp-78h]
  float v38; // [rsp+44h] [rbp-74h]
  float v39; // [rsp+48h] [rbp-70h]
  float v40; // [rsp+4Ch] [rbp-6Ch]
  float v41; // [rsp+50h] [rbp-68h]
  float v42; // [rsp+54h] [rbp-64h]
  float v43; // [rsp+60h] [rbp-58h]
  float v44; // [rsp+64h] [rbp-54h]
  float v45; // [rsp+68h] [rbp-50h]
  float v46; // [rsp+6Ch] [rbp-4Ch]
  float v47; // [rsp+70h] [rbp-48h]
  float v48; // [rsp+74h] [rbp-44h]
  int v49; // [rsp+78h] [rbp-40h]
  float v52; // [rsp+94h] [rbp-24h]

  v32 = 0.0;
  v27 = 5.0;
  if ( a13 >= 64000 )
  {
    if ( a13 < 80000 )
      v27 = (float)(0.0625 * (float)((a13 - 64000) >> 10)) + 4.0;
  }
  else
  {
    v27 = 4.0;
  }
  if ( a6 == 2 )
  {
    v29 = 0.0;
    for ( i = 0; i < 8; ++i )
      v29 = v29
          + sub_1401A9C00(
              a2 + 4LL * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a5),
              a2 + 4LL * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a5) + a7),
              (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a5);
    v30 = 0.125 * v29;
    v13 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v30), u64);
    if ( v13 <= 1.0 )
    {
      v14 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v30), u64);
      v37 = v14;
    }
    else
    {
      v37 = 1.0;
    }
    v31 = v37;
    for ( j = 8; j < a11; ++j )
    {
      v38 = sub_1401A9C00(
              a2 + 4LL * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) << a5),
              a2 + 4LL * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) << a5) + a7),
              (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (j + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j)) << a5);
      v15 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v38), u64);
      if ( v15 <= v31 )
      {
        v16 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v38), u64);
        v39 = v16;
      }
      else
      {
        v39 = v31;
      }
      v31 = v39;
    }
    v17 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v31), u64);
    if ( v17 <= 1.0 )
    {
      v18 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v31), u64);
      v40 = v18;
    }
    else
    {
      v40 = 1.0;
    }
    v19 = 1.442695040888963 * log((float)(1.001 - (float)(v37 * v37)));
    v35 = v19;
    v52 = 0.5 * v19;
    v20 = 1.442695040888963 * log((float)(1.001 - (float)(v40 * v40)));
    if ( v52 <= v20 )
    {
      v21 = 1.442695040888963 * log((float)(1.001 - (float)(v40 * v40)));
      v41 = v21;
    }
    else
    {
      v41 = 0.5 * v35;
    }
    if ( (float)(0.75 * v35) >= -4.0 )
      v42 = 0.75 * v35;
    else
      v42 = -4.0;
    v27 = v27 + v42;
    if ( (float)-(float)(0.5 * v41) <= (float)(*a9 + 0.25) )
      v22 = -(float)(0.5 * v41);
    else
      v22 = *a9 + 0.25;
    *a9 = v22;
  }
  v36 = 0;
  do
  {
    for ( k = 0; k < a4 - 1; ++k )
      v32 = v32 + (float)(*(float *)(a3 + 4LL * (*(_DWORD *)(a1 + 8) * v36 + k)) * (float)(2 * k + 2 - a4));
    ++v36;
  }
  while ( v36 < a6 );
  v33 = v32 / (float)((a4 - 1) * a6);
  if ( (float)((float)(v33 + 1.0) / 6.0) <= 2.0 )
    v43 = (float)(v33 + 1.0) / 6.0;
  else
    v43 = 2.0;
  if ( v43 >= -2.0 )
  {
    if ( (float)((float)(v33 + 1.0) / 6.0) <= 2.0 )
      v44 = (float)(v33 + 1.0) / 6.0;
    else
      v44 = 2.0;
    v45 = v44;
  }
  else
  {
    v45 = -2.0;
  }
  v28 = (float)((float)(v27 - v45) - a12) - (float)(2.0 * a10);
  if ( *(_DWORD *)a8 )
  {
    if ( (float)(2.0 * (float)(*(float *)(a8 + 8) + 0.050000001)) <= 2.0 )
      v46 = 2.0 * (float)(*(float *)(a8 + 8) + 0.050000001);
    else
      v46 = 2.0;
    if ( v46 >= -2.0 )
    {
      if ( (float)(2.0 * (float)(*(float *)(a8 + 8) + 0.050000001)) <= 2.0 )
        v47 = 2.0 * (float)(*(float *)(a8 + 8) + 0.050000001);
      else
        v47 = 2.0;
      v48 = v47;
    }
    else
    {
      v48 = -2.0;
    }
    v28 = v28 - v48;
  }
  v34 = (int)floor((float)(v28 + 0.5));
  if ( v34 <= 10 )
    v49 = v34;
  else
    v49 = 10;
  if ( v49 >= 0 )
  {
    if ( v34 <= 10 )
      return (unsigned int)v34;
    else
      return 10;
  }
  else
  {
    return 0;
  }
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401B0C90) ----------------------------------------------------
_BOOL8            sub_1401B0C90(__int64 a1, __int64 a2, int a3, int a4)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  int i; // [rsp+20h] [rbp-38h]
  int j; // [rsp+24h] [rbp-34h]
  float v11; // [rsp+28h] [rbp-30h]
  float v12; // [rsp+28h] [rbp-30h]
  float v13; // [rsp+2Ch] [rbp-2Ch]
  float v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+34h] [rbp-24h]
  float v16; // [rsp+38h] [rbp-20h]
  float v17; // [rsp+40h] [rbp-18h]
  float v18; // [rsp+4Ch] [rbp-Ch]

  v16 = 1.0e-15;
  v11 = 1.0e-15;
  for ( i = 0; i < 13; ++i )
  {
    for ( j = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a3;
          j < *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) << a3;
          ++j )
    {
      v13 = *(float *)(a2 + 4LL * j);
      v14 = *(float *)(a2 + 4LL * (j + a4));
      v4 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v13), u64);
      v17 = v4;
      v5 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(v14), u64);
      v16 = v16 + (float)(v17 + v5);
      v6 = *(double *)SR_VEC_READ_LANES(128, sub_140244390((float)(v13 + v14)), u64);
      v18 = v6;
      v7 = *(double *)SR_VEC_READ_LANES(128, sub_140244390((float)(v13 - v14)), u64);
      v11 = v11 + (float)(v18 + v7);
    }
  }
  v12 = 0.70710701 * v11;
  v15 = 13;
  if ( a3 <= 1 )
    v15 = 5;
  return (float)((float)(v15 + (*(__int16 *)(*(_QWORD *)(a1 + 32) + 26LL) << (a3 + 1))) * v12) > (float)((float)(*(__int16 *)(*(_QWORD *)(a1 + 32) + 26LL) << (a3 + 1)) * v16);
}


//----- (00000001401B0ED0) ----------------------------------------------------
float            sub_1401B0ED0(float *a1)
{
  float v2; // [rsp+0h] [rbp-38h]
  float v3; // [rsp+4h] [rbp-34h]
  float v4; // [rsp+8h] [rbp-30h]
  float v5; // [rsp+Ch] [rbp-2Ch]
  float v6; // [rsp+10h] [rbp-28h]
  float v11; // [rsp+28h] [rbp-10h]

  v5 = a1[2];
  if ( *a1 <= a1[1] )
  {
    v6 = *a1;
    v3 = a1[1];
  }
  else
  {
    v6 = a1[1];
    v3 = *a1;
  }
  if ( a1[3] <= a1[4] )
  {
    v2 = a1[3];
    v4 = a1[4];
  }
  else
  {
    v2 = a1[4];
    v4 = a1[3];
  }
  if ( v6 > v2 )
  {
    v2 = v6;
    v11 = v3;
    v3 = v4;
    v4 = v11;
  }
  if ( v5 <= v3 )
  {
    if ( v2 <= v5 )
    {
      if ( v4 <= v5 )
        return v4;
      else
        return a1[2];
    }
    else if ( v2 <= v3 )
    {
      return v2;
    }
    else
    {
      return v3;
    }
  }
  else if ( v2 <= v3 )
  {
    if ( v3 <= v4 )
      return v3;
    else
      return v4;
  }
  else if ( v2 <= v5 )
  {
    return v2;
  }
  else
  {
    return a1[2];
  }
}


//----- (00000001401B1160) ----------------------------------------------------
float            sub_1401B1160(float *a1)
{
  float v2; // [rsp+0h] [rbp-18h]
  float v3; // [rsp+4h] [rbp-14h]
  float v4; // [rsp+8h] [rbp-10h]

  if ( *a1 <= a1[1] )
  {
    v4 = *a1;
    v2 = a1[1];
  }
  else
  {
    v4 = a1[1];
    v2 = *a1;
  }
  v3 = a1[2];
  if ( v3 > v2 )
    return v2;
  if ( v3 <= v4 )
    return v4;
  return a1[2];
}


//----- (00000001401B1250) ----------------------------------------------------
float              sub_1401B1250(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _WORD *a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        int a12,
        __int64 a13,
        int a14,
        int a15,
        int *a16,
        int a17,
        __int64 a18,
        _DWORD *a19,
        __int64 a20,
        __int64 a21)
{
  unsigned __int64 v21; // rcx
  void *v22; // rsp
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  unsigned __int64 v25; // rcx
  void *v26; // rsp
  unsigned __int64 v27; // rcx
  void *v28; // rsp
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  double v34; // xmm0_8
  int i; // [rsp+20h] [rbp+0h] BYREF
  int v37; // [rsp+24h] [rbp+4h]
  int *v38; // [rsp+28h] [rbp+8h]
  float *v39; // [rsp+30h] [rbp+10h]
  float v40; // [rsp+38h] [rbp+18h]
       __m128i *p_i; // [rsp+40h] [rbp+20h]
  float v42; // [rsp+48h] [rbp+28h]
  int v43; // [rsp+4Ch] [rbp+2Ch]
  int v44; // [rsp+50h] [rbp+30h]
  int v45; // [rsp+54h] [rbp+34h]
  float v46; // [rsp+58h] [rbp+38h]
  float v47; // [rsp+5Ch] [rbp+3Ch]
  int v48; // [rsp+60h] [rbp+40h]
  int *v49; // [rsp+68h] [rbp+48h]
  float v50; // [rsp+70h] [rbp+50h]
  float v51; // [rsp+74h] [rbp+54h]
  float v52; // [rsp+78h] [rbp+58h]
  int v53; // [rsp+7Ch] [rbp+5Ch]
  int v54; // [rsp+80h] [rbp+60h]
  int v55; // [rsp+84h] [rbp+64h]
  float v56; // [rsp+88h] [rbp+68h]
  int v57; // [rsp+8Ch] [rbp+6Ch]
  float v58; // [rsp+90h] [rbp+70h]
  float v59; // [rsp+94h] [rbp+74h]
  float v60; // [rsp+98h] [rbp+78h]
  float v61; // [rsp+9Ch] [rbp+7Ch]
  float v62; // [rsp+A0h] [rbp+80h]
  float v63; // [rsp+A4h] [rbp+84h]
  float v64; // [rsp+A8h] [rbp+88h]
  float v65; // [rsp+ACh] [rbp+8Ch]
  int v66; // [rsp+B0h] [rbp+90h]
  float v67; // [rsp+B4h] [rbp+94h]
  float v68; // [rsp+B8h] [rbp+98h]
  float v69; // [rsp+BCh] [rbp+9Ch]
  float v70; // [rsp+C0h] [rbp+A0h]
  float v71; // [rsp+C4h] [rbp+A4h]
  int v72; // [rsp+C8h] [rbp+A8h]
  float v73; // [rsp+CCh] [rbp+ACh]
  int v74; // [rsp+D0h] [rbp+B0h]
  int v75; // [rsp+D4h] [rbp+B4h]
  int v76; // [rsp+D8h] [rbp+B8h]
  float v77; // [rsp+DCh] [rbp+BCh]
  __int32 v78; // [rsp+E0h] [rbp+C0h]
  __int32 v79; // [rsp+E4h] [rbp+C4h]
  __int32 v80; // [rsp+E8h] [rbp+C8h]
  int v81; // [rsp+ECh] [rbp+CCh]
  int v82; // [rsp+F0h] [rbp+D0h]
  float v83; // [rsp+F4h] [rbp+D4h]
  int v84; // [rsp+F8h] [rbp+D8h]
  __m128i *v85; // [rsp+100h] [rbp+E0h]
  __int64 v86; // [rsp+108h] [rbp+E8h]

  v44 = 0;
  v21 = 4LL * a3 * a6 + 15;
  if ( v21 <= 4LL * a3 * a6 )
    v21 = 0xFFFFFFFFFFFFFF0LL;
  v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
  v38 = (int *)v22;
  v23 = 4LL * a3 * a6 + 15;
  if ( v23 <= 4LL * a3 * a6 )
    v23 = 0xFFFFFFFFFFFFFF0LL;
  v24 = alloca(v23 & 0xFFFFFFFFFFFFFFF0uLL);
  v49 = (int *)v24;
  sub_1401FCD30((void *)(uintptr_t)(a7), 0, 4LL * a3);
  v42 = -31.9f;
  for ( i = 0; i < a5; ++i )
    *(float *)&v49[i] = (float)((float)((float)((float)(0.0625 * (float)*(__int16 *)(a9 + 2LL * i)) + 0.5)
                                      + (float)(9 - a8))
                              - flt_140282A10[i])
                      + (float)(0.0062000002f * (float)((i + 5) * (i + 5)));
  v37 = 0;
  do
  {
    for ( i = 0; i < a5; ++i )
    {
      if ( v42 <= (float)(*(float *)(a1 + 4LL * (i + a3 * v37)) - *(float *)&v49[i]) )
        v77 = *(float *)(a1 + 4LL * (i + a3 * v37)) - *(float *)&v49[i];
      else
        v77 = v42;
      v42 = v77;
    }
    ++v37;
  }
  while ( v37 < a6 );
  v25 = 4LL * a3 + 15;
  if ( v25 <= 4LL * a3 )
    v25 = 0xFFFFFFFFFFFFFF0LL;
  v26 = alloca(v25 & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = (__m128i *)v26;
  v27 = 4LL * a3 + 15;
  if ( v27 <= 4LL * a3 )
    v27 = 0xFFFFFFFFFFFFFF0LL;
  v28 = alloca(v27 & 0xFFFFFFFFFFFFFFF0uLL);
  v85 = (__m128i *)v28;
  for ( i = 0; i < a5; ++i )
    *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i] = *(float *)(a1 + 4LL * i) - *(float *)&v49[i];
  if ( a6 == 2 )
  {
    for ( i = 0; i < a5; ++i )
    {
      if ( *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i] <= (float)(*(float *)(a1 + 4LL * (i + a3)) - *(float *)&v49[i]) )
        *(float *)&v78 = *(float *)(a1 + 4LL * (i + a3)) - *(float *)&v49[i];
      else
        v78 = SR_VEC_PTR_LANES(128, p_i, i32)[i];
      SR_VEC_PTR_LANES(128, p_i, i32)[i] = v78;
    }
  }
  sub_1401FC920(v85, p_i, 4LL * a5);
  for ( i = 1; i < a5; ++i )
  {
    if ( *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i] <= (float)(*(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i - 1] - 2.0) )
      *(float *)&v79 = *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i - 1] - 2.0;
    else
      v79 = SR_VEC_PTR_LANES(128, p_i, i32)[i];
    SR_VEC_PTR_LANES(128, p_i, i32)[i] = v79;
  }
  for ( i = a5 - 2; i >= 0; --i )
  {
    if ( *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i] <= (float)(*(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i + 1] - 3.0) )
      *(float *)&v80 = *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i + 1] - 3.0;
    else
      v80 = SR_VEC_PTR_LANES(128, p_i, i32)[i];
    SR_VEC_PTR_LANES(128, p_i, i32)[i] = v80;
  }
  for ( i = 0; i < a5; ++i )
  {
    if ( (float)(v42 - 12.0) >= 0.0 )
      v50 = v42 - 12.0;
    else
      v50 = 0.0;
    if ( v50 <= *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i] )
    {
      v52 = *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i];
    }
    else
    {
      if ( (float)(v42 - 12.0) >= 0.0 )
        v51 = v42 - 12.0;
      else
        v51 = 0.0;
      v52 = v51;
    }
    v46 = *(float *)&SR_VEC_PTR_LANES(128, v85, i32)[i] - v52;
    if ( (int)floor((float)(v46 + 0.5)) <= 0 )
      v53 = -(int)floor((float)(v46 + 0.5));
    else
      v53 = 0;
    if ( v53 <= 5 )
    {
      if ( (int)floor((float)(v46 + 0.5)) <= 0 )
        v54 = -(int)floor((float)(v46 + 0.5));
      else
        v54 = 0;
      v55 = v54;
    }
    else
    {
      v55 = 5;
    }
    v81 = v55;
    v82 = 32;
    *(_DWORD *)(a21 + 4LL * i) = 32 >> v55;
  }
  if ( a15 <= 50 || a14 < 1 || a17 )
  {
    for ( i = a4; i < a5; ++i )
      *(_DWORD *)(a20 + 4LL * i) = 13;
  }
  else
  {
    v57 = 0;
    v37 = 0;
    do
    {
      v39 = (float *)&v38[a3 * v37];
      *v39 = *(float *)(a2 + 4LL * a3 * v37);
      for ( i = 1; i < a5; ++i )
      {
        if ( *(float *)(a2 + 4LL * (i + a3 * v37)) > (float)(*(float *)(a2 + 4LL * (a3 * v37 + i - 1)) + 0.5) )
          v57 = i;
        if ( *(float *)(a2 + 4LL * (i + a3 * v37)) <= (float)(v39[i - 1] + 1.5) )
          v56 = *(float *)(a2 + 4LL * (i + a3 * v37));
        else
          v56 = v39[i - 1] + 1.5;
        v39[i] = v56;
      }
      for ( i = v57 - 1; i >= 0; --i )
      {
        if ( *(float *)(a2 + 4LL * (i + a3 * v37)) <= (float)(v39[i + 1] + 2.0) )
          v58 = *(float *)(a2 + 4LL * (i + a3 * v37));
        else
          v58 = v39[i + 1] + 2.0;
        if ( v58 <= v39[i] )
        {
          if ( *(float *)(a2 + 4LL * (i + a3 * v37)) <= (float)(v39[i + 1] + 2.0) )
            v59 = *(float *)(a2 + 4LL * (i + a3 * v37));
          else
            v59 = v39[i + 1] + 2.0;
          v60 = v59;
        }
        else
        {
          v60 = v39[i];
        }
        v39[i] = v60;
      }
      v47 = 1.0;
      for ( i = 2; i < a5 - 2; ++i )
      {
        v83 = v39[i];
        v29 = sub_1401B0ED0((float *)(a2 + 4LL * (a3 * v37 + i - 2)));
        if ( v83 <= (float)(v29 - v47) )
        {
          v30 = sub_1401B0ED0((float *)(a2 + 4LL * (a3 * v37 + i - 2)));
          v61 = v30 - v47;
        }
        else
        {
          v61 = v39[i];
        }
        v39[i] = v61;
      }
      v31 = sub_1401B1160((float *)(a2 + 4LL * a3 * v37));
      v40 = v31 - v47;
      if ( *v39 <= (float)(v31 - v47) )
        v62 = v40;
      else
        v62 = *v39;
      *v39 = v62;
      if ( v39[1] <= v40 )
        v63 = v40;
      else
        v63 = v39[1];
      v39[1] = v63;
      v32 = sub_1401B1160((float *)(a2 + 4LL * (a3 * v37 + a5 - 3)));
      v40 = v32 - v47;
      if ( v39[a5 - 2] <= (float)(v32 - v47) )
        v64 = v40;
      else
        v64 = v39[a5 - 2];
      v39[a5 - 2] = v64;
      if ( v39[a5 - 1] <= v40 )
        v65 = v40;
      else
        v65 = v39[a5 - 1];
      v39[a5 - 1] = v65;
      for ( i = 0; i < a5; ++i )
      {
        if ( v39[i] <= *(float *)&v49[i] )
          v66 = v49[i];
        else
          v66 = LODWORD(v39[i]);
        LODWORD(v39[i]) = v66;
      }
      ++v37;
    }
    while ( v37 < a6 );
    if ( a6 == 2 )
    {
      for ( i = a4; i < a5; ++i )
      {
        if ( *(float *)&v38[i + a3] <= (float)(*(float *)&v38[i] - 4.0) )
          v67 = *(float *)&v38[i] - 4.0;
        else
          v67 = *(float *)&v38[i + a3];
        *(float *)&v38[i + a3] = v67;
        if ( *(float *)&v38[i] <= (float)(*(float *)&v38[i + a3] - 4.0) )
          v68 = *(float *)&v38[i + a3] - 4.0;
        else
          v68 = *(float *)&v38[i];
        *(float *)&v38[i] = v68;
        if ( (float)(*(float *)(a1 + 4LL * i) - *(float *)&v38[i]) >= 0.0 )
          v69 = *(float *)(a1 + 4LL * i) - *(float *)&v38[i];
        else
          v69 = 0.0;
        if ( (float)(*(float *)(a1 + 4LL * (i + a3)) - *(float *)&v38[i + a3]) >= 0.0 )
          v70 = *(float *)(a1 + 4LL * (i + a3)) - *(float *)&v38[i + a3];
        else
          v70 = 0.0;
        *(float *)&v38[i] = 0.5 * (float)(v69 + v70);
      }
    }
    else
    {
      for ( i = a4; i < a5; ++i )
      {
        if ( (float)(*(float *)(a1 + 4LL * i) - *(float *)&v38[i]) >= 0.0 )
          v71 = *(float *)(a1 + 4LL * i) - *(float *)&v38[i];
        else
          v71 = 0.0;
        *(float *)&v38[i] = v71;
      }
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( *(float *)&v38[i] <= *(float *)(a18 + 4LL * i) )
        v72 = *(_DWORD *)(a18 + 4LL * i);
      else
        v72 = v38[i];
      v38[i] = v72;
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( *(float *)&v38[i] >= 4.0 )
        v73 = 4.0;
      else
        v73 = *(float *)&v38[i];
      v33 = exp(0.6931471805599453 * v73);
      v34 = floor((float)((float)(13.0 * v33) + 0.5));
      *(_DWORD *)(a20 + 4LL * i) = (int)v34;
    }
    if ( (!a11 || a12) && !a10 )
    {
      for ( i = a4; i < a5; ++i )
        *(float *)&v38[i] = 0.5 * *(float *)&v38[i];
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( i < 8 )
        *(float *)&v38[i] = *(float *)&v38[i] * 2.0;
      if ( i >= 12 )
        *(float *)&v38[i] = 0.5 * *(float *)&v38[i];
    }
    if ( *a19 )
    {
      for ( i = a4; ; ++i )
      {
        v74 = a5 <= 19 ? a5 : 19;
        if ( i >= v74 )
          break;
        *(float *)&v38[i] = *(float *)&v38[i] + (float)(0.015625 * (float)*((unsigned __int8 *)a19 + i + 44));
      }
    }
    for ( i = a4; i < a5; ++i )
    {
      if ( *(float *)&v38[i] >= 4.0 )
        v75 = 1082130432;
      else
        v75 = v38[i];
      v38[i] = v75;
      v45 = ((*(__int16 *)(a13 + 2LL * (i + 1)) - *(__int16 *)(a13 + 2LL * i)) * a6) << a14;
      if ( v45 >= 6 )
      {
        if ( v45 <= 48 )
        {
          v43 = (int)(float)((float)(*(float *)&v38[i] * (float)v45) / 6.0);
          v48 = 48 * v43;
        }
        else
        {
          v43 = (int)(float)(*(float *)&v38[i] * 8.0);
          v48 = 8 * v45 * v43 / 8;
        }
      }
      else
      {
        v43 = (int)*(float *)&v38[i];
        v48 = 8 * v45 * v43;
      }
      if ( !a11 || a12 && !a10 )
      {
        v84 = (v48 + v44) >> 6;
        if ( v84 > 2 * a15 / 3 )
        {
          v76 = (2 * a15 / 3) << 6;
          *(_DWORD *)&a7[2 * i] = v76 - v44;
          v44 = v76;
          break;
        }
      }
      *(_DWORD *)&a7[2 * i] = v43;
      v44 += v48;
    }
  }
  *a16 = v44;
  return v42; /* native XMM0 maximum spectral level */
}

// 140282A10: using guessed type float flt_140282A10[28];

//----- (00000001401B2750) ----------------------------------------------------
__int64            sub_1401B2750(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        float *a8,
        int *a9,
        int a10,
        int a11,
        __int64 a12)
{
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  unsigned __int64 v14; // rcx
  void *v15; // rsp
  float v16; // xmm0_4
  int v17; // eax
  float v18; // xmm0_4
  float v19; // xmm1_4
       __m128i *v20; // rcx
       __m128i *v21; // rcx
       __m128i *v22; // rcx
  int v24; // [rsp+60h] [rbp+0h] BYREF
  int v25; // [rsp+64h] [rbp+4h]
  float v26; // [rsp+68h] [rbp+8h]
  float v27; // [rsp+6Ch] [rbp+Ch]
  int v28; // [rsp+70h] [rbp+10h] BYREF
  int v29; // [rsp+74h] [rbp+14h]
  int v30; // [rsp+78h] [rbp+18h]
  _QWORD v31[2]; // [rsp+80h] [rbp+20h] BYREF
  float v32; // [rsp+90h] [rbp+30h]
  int v33; // [rsp+94h] [rbp+34h]
  int v34; // [rsp+98h] [rbp+38h]
  int v35; // [rsp+9Ch] [rbp+3Ch]
  int v36; // [rsp+A0h] [rbp+40h]
  int v37; // [rsp+A4h] [rbp+44h]
  int *v38; // [rsp+A8h] [rbp+48h]
  __int64 v39; // [rsp+B0h] [rbp+50h]
  int *v40; // [rsp+B8h] [rbp+58h]
  __int64 v41; // [rsp+C0h] [rbp+60h]
  __m128i *v42; // [rsp+C8h] [rbp+68h]
  __m128i *v43; // [rsp+D0h] [rbp+70h]
  __m128i *v44; // [rsp+D8h] [rbp+78h]
  __m128i *v45; // [rsp+E0h] [rbp+80h]
  __m128i *v46; // [rsp+E8h] [rbp+88h]
  __m128i *v47; // [rsp+F0h] [rbp+90h]
  __m128i *v48; // [rsp+F8h] [rbp+98h]
  __int64 v49; // [rsp+100h] [rbp+A0h]

  v39 = *a1;
  v25 = *(_DWORD *)(v39 + 4);
  v12 = 4LL * (a5 + 1024) * a4 + 15;
  if ( v12 <= 4LL * (a5 + 1024) * a4 )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
  v40 = (int *)v13;
  v31[0] = (uint64)(uintptr_t)v40;
  v31[1] = (uint64)(uintptr_t)(v40 + a5 + 1024);
  v24 = 0;
  do
  {
    v41 = v24;
    sub_1401FC920((__m128i *)v31[v24], (     __m128i *)(a3 + 4LL * (v24 << 10)), 0x1000u);
    v42 = (__m128i *)(v31[v24] + 4096LL);
    sub_1401FC920(v42, (     __m128i *)(a2 + 4LL * (v25 + a5) * v24++ + 4LL * v25), 4LL * a5);
  }
  while ( v24 < a4 );
  if ( a10 )
  {
    v14 = 4LL * ((a5 + 1024) >> 1) + 15;
    if ( v14 <= 4LL * ((a5 + 1024) >> 1) )
      v14 = 0xFFFFFFFFFFFFFF0LL;
    v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
    v38 = (int *)v15;
    sub_1401A8190(v31, (float *)v38, a5 + 1024, a4, *((_DWORD *)a1 + 19));
    sub_1401A8740((__int64)(v38 + 512), (__int64)v38, a5, 979, &v28);
    v28 = 1024 - v28;
    v16 = *((float *)a1 + 28);
    v26 = sub_1401A8B30((__int64)v38, 1024, 15, a5, &v28, *((_DWORD *)a1 + 27), v16);
    if ( v28 > 1022 )
      v28 = 1022;
    v26 = 0.69999999 * v26;
    if ( *((int *)a1 + 15) > 2 )
      v26 = 0.5 * v26;
    if ( *((int *)a1 + 15) > 4 )
      v26 = 0.5 * v26;
    if ( *((int *)a1 + 15) > 8 )
      v26 = 0.0;
  }
  else
  {
    v26 = 0.0;
    v28 = 15;
  }
  if ( *(_DWORD *)a12 )
    v26 = v26 * *(float *)(a12 + 40);
  v27 = 0.2;
  v17 = abs(v28 - *((_DWORD *)a1 + 27));
  if ( 10 * v17 > v28 )
    v27 = v27 + 0.2;
  if ( a11 < 25 )
    v27 = v27 + 0.1;
  if ( a11 < 35 )
    v27 = v27 + 0.1;
  if ( *((float *)a1 + 28) > 0.40000001 )
    v27 = v27 - 0.1;
  if ( *((float *)a1 + 28) > 0.55000001 )
    v27 = v27 - 0.1;
  if ( v27 <= 0.2 )
    v32 = 0.2;
  else
    v32 = v27;
  v27 = v32;
  if ( v32 <= v26 )
  {
    v18 = *(double *)SR_VEC_READ_LANES(128, sub_140244390((float)(v26 - *((float *)a1 + 28))), u64);
    if ( v18 < 0.1 )
      v26 = *((float *)a1 + 28);
    v29 = (int)floor((float)((float)((float)(v26 * 32.0) / 3.0) + 0.5)) - 1;
    if ( v29 <= 7 )
      v33 = v29;
    else
      v33 = 7;
    if ( v33 >= 0 )
    {
      if ( v29 <= 7 )
        v34 = v29;
      else
        v34 = 7;
      v35 = v34;
    }
    else
    {
      v35 = 0;
    }
    v29 = v35;
    v26 = 0.09375 * (float)(v35 + 1);
    v37 = 1;
  }
  else
  {
    v26 = 0.0;
    v37 = 0;
    v29 = 0;
  }
  v24 = 0;
  do
  {
    v30 = *(_DWORD *)(v39 + 48) - v25;
    if ( *((int *)a1 + 27) <= 15 )
      v36 = 15;
    else
      v36 = *((_DWORD *)a1 + 27);
    *((_DWORD *)a1 + 27) = v36;
    v43 = (__m128i *)(a2 + 4LL * (v25 + a5) * v24);
    sub_1401FC920(v43, (     __m128i *)((char *)a1 + 4 * v25 * v24 + 252), 4LL * v25);
    if ( v30 )
      sub_1401A0C20(
        (__m128i *)(a2 + 4LL * (v25 + a5) * v24 + 4LL * v25),
        (     __m128i *)(v31[v24] + 4096LL),
        *((_DWORD *)a1 + 27),
        *((_DWORD *)a1 + 27),
        v30,
        -*((float *)a1 + 28),
        -*((float *)a1 + 28),
        *((_DWORD *)a1 + 29),
        *((_DWORD *)a1 + 29),
        0,
        0);
    v19 = -*((float *)a1 + 28);
    v20 = (     __m128i *)(v31[v24] + 4LL * v30 + 4096);
    v44 = (__m128i *)(a2 + 4LL * (v25 + a5) * v24 + 4LL * v25 + 4LL * v30);
    sub_1401A0C20(
      v44,
      v20,
      *((_DWORD *)a1 + 27),
      v28,
      a5 - v30,
      v19,
      -v26,
      *((_DWORD *)a1 + 29),
      a6,
      *(_QWORD *)(v39 + 72),
      v25);
    v45 = (__m128i *)((char *)a1 + 4 * v25 * v24 + 252);
    sub_1401FC920(v45, (     __m128i *)(a2 + 4LL * (v25 + a5) * v24 + 4LL * a5), 4LL * v25);
    if ( a5 <= 1024 )
    {
      v47 = (__m128i *)(a3 + 4LL * (v24 << 10));
      sub_1401FC920(v47, (__m128i *)((char *)v47 + 4 * a5), 4LL * (1024 - a5));
      v22 = (     __m128i *)(v31[v24] + 4096LL);
      v48 = (__m128i *)(a3 + 4LL * (v24 << 10) + 4096 - 4LL * a5);
      sub_1401FC920(v48, v22, 4LL * a5);
    }
    else
    {
      v21 = (     __m128i *)(v31[v24] + 4LL * a5);
      v46 = (__m128i *)(a3 + 4LL * (v24 << 10));
      sub_1401FC920(v46, v21, 0x1000u);
    }
    ++v24;
  }
  while ( v24 < a4 );
  *a8 = v26;
  *a7 = v28;
  *a9 = v29;
  return v37; /* native EAX filter-enabled result */
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401B32A0) ----------------------------------------------------
__int64            sub_1401B32A0(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        int a11,
        float a12,
        int a13,
        float a14,
        int a15,
        int a16,
        float a17,
        float a18)
{
  int v19; // [rsp+0h] [rbp-88h]
  int v20; // [rsp+0h] [rbp-88h]
  int v21; // [rsp+0h] [rbp-88h]
  int v22; // [rsp+4h] [rbp-84h]
  int v23; // [rsp+10h] [rbp-78h]
  int v24; // [rsp+14h] [rbp-74h]
  int v25; // [rsp+18h] [rbp-70h]
  int v26; // [rsp+1Ch] [rbp-6Ch]
  int v27; // [rsp+20h] [rbp-68h]
  float v28; // [rsp+28h] [rbp-60h]
  float v29; // [rsp+2Ch] [rbp-5Ch]
  float v30; // [rsp+30h] [rbp-58h]
  float v31; // [rsp+34h] [rbp-54h]
  int v32; // [rsp+3Ch] [rbp-4Ch]
  int v33; // [rsp+40h] [rbp-48h]
  int v34; // [rsp+44h] [rbp-44h]
  int v35; // [rsp+48h] [rbp-40h]
  int v36; // [rsp+4Ch] [rbp-3Ch]
  int v37; // [rsp+50h] [rbp-38h]
  int v38; // [rsp+54h] [rbp-34h]
  __int64 v40; // [rsp+60h] [rbp-28h]

  v33 = *(_DWORD *)(a1 + 8);
  v40 = *(_QWORD *)(a1 + 32);
  if ( a6 )
    v25 = a6;
  else
    v25 = *(_DWORD *)(a1 + 8);
  v22 = *(__int16 *)(v40 + 2LL * v25) << a4;
  if ( a7 == 2 )
  {
    if ( a8 >= v25 )
      v26 = v25;
    else
      v26 = a8;
    v22 += *(__int16 *)(v40 + 2LL * v26) << a4;
  }
  v19 = a3;
  if ( *(_DWORD *)a2 && *(float *)(a2 + 16) < 0.4 )
    v19 = a3 - (int)(float)((float)(8 * v22) * (float)(0.40000001 - *(float *)(a2 + 16)));
  if ( a7 == 2 )
  {
    if ( a8 >= v25 )
      v27 = v25;
    else
      v27 = a8;
    v23 = (*(__int16 *)(v40 + 2LL * v27) << a4) - v27;
    v29 = (float)(0.80000001 * (float)v23) / (float)v22;
    if ( a10 >= 1.0 )
      v28 = 1.0;
    else
      v28 = a10;
    if ( (float)((float)(v28 - 0.1) * (float)(8 * v23)) <= (float)(v29 * (float)v19) )
      v30 = (float)(v28 - 0.1) * (float)(8 * v23);
    else
      v30 = v29 * (float)v19;
    v19 -= (int)v30;
  }
  v20 = (int)(float)((float)(a12 - 0.044) * (float)(a11 - (19 << a4) + v19)) + a11 - (19 << a4) + v19;
  if ( *(_DWORD *)a2 && !a15 )
  {
    if ( (float)(*(float *)(a2 + 4) - 0.15000001) >= 0.0 )
      v31 = *(float *)(a2 + 4) - 0.15000001;
    else
      v31 = 0.0;
    v24 = (int)(float)((float)((float)(8 * v22) * 1.2) * (float)(v31 - 0.12)) + v20;
    if ( a13 )
      v24 += (int)(float)((float)(8 * v22) * 0.80000001);
    v20 = v24;
  }
  if ( a16 && !a15 )
  {
    if ( v20 / 4 <= (int)(float)(a17 * (float)(8 * v22)) + v20 )
      v32 = (int)(float)(a17 * (float)(8 * v22)) + v20;
    else
      v32 = v20 / 4;
    v20 = v32;
  }
  if ( (int)(float)((float)(8 * (*(__int16 *)(v40 + 2LL * (v33 - 2)) << a4) * a7) * a14) <= v20 >> 2 )
    v34 = v20 >> 2;
  else
    v34 = (int)(float)((float)(8 * (*(__int16 *)(v40 + 2LL * (v33 - 2)) << a4) * a7) * a14);
  if ( v20 >= v34 )
    v35 = v34;
  else
    v35 = v20;
  v21 = v35;
  if ( (!a16 || a15) && a9 )
    v21 = (int)(float)(0.67000002 * (float)(v35 - a3)) + a3;
  if ( !a16 && a12 < 0.2 )
  {
    if ( 96000 - a5 <= 32000 )
      v36 = 96000 - a5;
    else
      v36 = 32000;
    if ( v36 >= 0 )
    {
      if ( 96000 - a5 <= 32000 )
        v37 = 96000 - a5;
      else
        v37 = 32000;
      v38 = v37;
    }
    else
    {
      v38 = 0;
    }
    v21 += (int)(float)((float)(a18 * (float)(0.0000031 * (float)v38)) * (float)v21);
  }
  if ( 2 * a3 >= v21 )
    return (unsigned int)v21;
  else
    return (unsigned int)(2 * a3);
}


//----- (00000001401B38C0) ----------------------------------------------------
__int64            sub_1401B38C0(__int64 a1, int a2)
{
  return (unsigned int)(96 * a2 + 4 * ((*(_DWORD *)(a1 + 4) + 2048) * a2 - 1) + 104 + 32 * *(_DWORD *)(a1 + 8));
}


//----- (00000001401B3920) ----------------------------------------------------
__int64            sub_1401B3920(_DWORD *a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  int *v5; // r8

  if ( a3 > 2 )
    return 0xFFFFFFFFLL;
  if ( !a1 )
    return 4294967289LL;
  v4 = sub_1401B38C0(a2, a3);
  sub_1401FCD30((void *)(uintptr_t)(a1), 0, v4);
  *(_QWORD *)a1 = a2;
  a1[2] = *(_DWORD *)(a2 + 4);
  a1[3] = a3;
  a1[4] = a3;
  a1[5] = 1;
  a1[6] = 0;
  a1[7] = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  a1[8] = 1;
  a1[9] = a3 == 1;
  a1[10] = sub_1401A13B0();
  sub_140199AA0(a1, 4028, v5);
  return 0;
}

// 1401B3A24: variable 'v5' is possibly undefined

//----- (00000001401B3A40) ----------------------------------------------------
__int64            sub_1401B3A40(__int64 *a1, __int64 a2, int a3, float a4, float *a5)
{
  int i; // [rsp+0h] [rbp-38h]
  float v7; // [rsp+4h] [rbp-34h]
  float v8; // [rsp+8h] [rbp-30h]
  float v9; // [rsp+Ch] [rbp-2Ch]
  float v10; // [rsp+10h] [rbp-28h]
  __int64 v11; // [rsp+18h] [rbp-20h]
  __int64 v12; // [rsp+20h] [rbp-18h]

  v11 = *a1;
  v12 = a1[1];
  v7 = *a5;
  v8 = a5[1];
  for ( i = 0; i < a3; ++i )
  {
    v9 = (float)(*(float *)(v11 + 4LL * i) + 1.0e-30) + v7;
    v10 = (float)(*(float *)(v12 + 4LL * i) + 1.0e-30) + v8;
    v7 = a4 * v9;
    v8 = a4 * v10;
    *(float *)(a2 + 8LL * i) = v9 * 0.000030517578;
    *(float *)(a2 + 4LL * (2 * i + 1)) = v10 * 0.000030517578;
  }
  *a5 = v7;
  a5[1] = v8;
  return 4;
}


//----- (00000001401B3BD0) ----------------------------------------------------
__int64            sub_1401B3BD0(__int64 *a1, __int64 a2, int a3, int a4, int a5, float *a6, float *a7, int a8)
{
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  int i; // [rsp+30h] [rbp+0h] BYREF
  int v12; // [rsp+34h] [rbp+4h]
  float v13; // [rsp+38h] [rbp+8h]
  float v14; // [rsp+3Ch] [rbp+Ch]
  float v15; // [rsp+40h] [rbp+10h]
  float v16; // [rsp+44h] [rbp+14h]
  int v17; // [rsp+48h] [rbp+18h]
  int v18; // [rsp+4Ch] [rbp+1Ch]
  __int64 v19; // [rsp+50h] [rbp+20h]
  int *v20; // [rsp+58h] [rbp+28h]
  __int64 v21; // [rsp+60h] [rbp+30h]
  __int64 v22; // [rsp+68h] [rbp+38h]

  v17 = 0;
  if ( a5 == 1 && a4 == 2 && !a8 )
  {
    sub_1401B3A40(a1, a2, a3, *a6, a7);
  }
  else
  {
    v8 = 4LL * a3 + 15;
    if ( v8 <= 4LL * a3 )
      v8 = 0xFFFFFFFFFFFFFF0LL;
    v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
    v20 = &i;
    v15 = *a6;
    v18 = a3 / a5;
    v12 = 0;
    do
    {
      v13 = a7[v12];
      v19 = a1[v12];
      v21 = a2 + 4LL * v12;
      if ( a5 <= 1 )
      {
        for ( i = 0; i < a3; ++i )
        {
          v16 = (float)(*(float *)(v19 + 4LL * i) + 1.0e-30) + v13;
          v13 = v15 * v16;
          *(float *)(v21 + 4LL * a4 * i) = v16 * 0.000030517578;
        }
      }
      else
      {
        for ( i = 0; i < a3; ++i )
        {
          v14 = (float)(*(float *)(v19 + 4LL * i) + 1.0e-30) + v13;
          v13 = v15 * v14;
          *(float *)&v20[i] = v14;
        }
        v17 = 1;
      }
      a7[v12] = v13;
      if ( v17 )
      {
        for ( i = 0; i < v18; ++i )
          *(float *)(v21 + 4LL * a4 * i) = *(float *)&v20[a5 * i] * 0.000030517578;
      }
      ++v12;
    }
    while ( v12 < a4 );
  }
  return 0; /* no caller reads the result */
}


//----- (00000001401B3E40) ----------------------------------------------------
__int64            sub_1401B3E40(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  float *v14; // rax
  float *v15; // rax
  float *v16; // rax
  float *v17; // rax
  int i; // [rsp+50h] [rbp+0h] BYREF
  int j; // [rsp+54h] [rbp+4h]
  int v21; // [rsp+58h] [rbp+8h]
  int v22; // [rsp+5Ch] [rbp+Ch]
  int v23; // [rsp+60h] [rbp+10h]
  int v24; // [rsp+64h] [rbp+14h]
  int v25; // [rsp+68h] [rbp+18h]
  int v26; // [rsp+6Ch] [rbp+1Ch]
  int v27; // [rsp+70h] [rbp+20h]
  float *v28; // [rsp+78h] [rbp+28h]
  int v29; // [rsp+80h] [rbp+30h]
  int v30; // [rsp+84h] [rbp+34h]
  __m128i *v31; // [rsp+88h] [rbp+38h]
  float *v32; // [rsp+90h] [rbp+40h]
  __int64 v33; // [rsp+98h] [rbp+48h]
  __int64 v34; // [rsp+A0h] [rbp+50h]
  __int64 v35; // [rsp+A8h] [rbp+58h]
  __int64 v36; // [rsp+B0h] [rbp+60h]
  __int64 v37; // [rsp+B8h] [rbp+68h]
  __int64 v38; // [rsp+C0h] [rbp+70h]
  __int64 v39; // [rsp+C8h] [rbp+78h]
  __int64 v40; // [rsp+D0h] [rbp+80h]
  __int64 v41; // [rsp+D8h] [rbp+88h]

  v23 = *(_DWORD *)(a1 + 4);
  v29 = *(_DWORD *)(a1 + 8);
  v33 = a1;
  v24 = *(_DWORD *)(a1 + 48) << a10;
  v12 = 4LL * v24 + 15;
  if ( v12 <= 4LL * v24 )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
  v28 = (float *)&i;
  v30 = 1;
  v25 = 1 << a10;
  if ( a9 )
  {
    v22 = v25;
    v26 = *(_DWORD *)(a1 + 48);
    v27 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    v22 = 1;
    v34 = a1;
    v26 = *(_DWORD *)(a1 + 48) << a10;
    v27 = *(_DWORD *)(a1 + 40) - a10;
  }
  if ( a8 == 2 && a7 == 1 )
  {
    sub_1401A3740(a1, a2, v28, a4, a5, a6, v25, a11, a12);
    v35 = 8;
    v31 = (__m128i *)(a3[1] + 4LL * (v23 / 2));
    sub_1401FC920(v31, (     __m128i *)v28, 4LL * v24);
    for ( i = 0; i < v22; ++i )
    {
      v14 = (float *)(*a3 + 4LL * i * v26);
      v36 = a1 + 80;
      sub_1401A1F50(a1 + 80, (float *)&SR_VEC_PTR_LANES(128, v31, i32)[i], v14, *(float **)(a1 + 72), v23, v27, v22);
    }
    for ( i = 0; i < v22; ++i )
    {
      v15 = (float *)(a3[1] + 4LL * i * v26);
      v37 = a1 + 80;
      sub_1401A1F50(a1 + 80, &v28[i], v15, *(float **)(a1 + 72), v23, v27, v22);
    }
  }
  else if ( a8 == 1 && a7 == 2 )
  {
    v38 = 0;
    v32 = (float *)(*a3 + 4LL * (v23 / 2));
    sub_1401A3740(a1, a2, v28, a4, a5, a6, v25, a11, a12);
    sub_1401A3740(a1, a2 + 4LL * v24, v32, a4 + 4LL * v29, a5, a6, v25, a11, a12);
    for ( j = 0; j < v24; ++j )
      v28[j] = (float)(0.5 * v28[j]) + (float)(0.5 * v32[j]);
    for ( i = 0; i < v22; ++i )
    {
      v16 = (float *)(*a3 + 4LL * i * v26);
      v39 = a1 + 80;
      sub_1401A1F50(a1 + 80, &v28[i], v16, *(float **)(a1 + 72), v23, v27, v22);
    }
  }
  else
  {
    v21 = 0;
    do
    {
      sub_1401A3740(a1, a2 + 4LL * v24 * v21, v28, a4 + 4LL * v29 * v21, a5, a6, v25, a11, a12);
      for ( i = 0; i < v22; ++i )
      {
        v17 = (float *)(a3[v21] + 4LL * i * v26);
        v40 = a1 + 80;
        sub_1401A1F50(a1 + 80, &v28[i], v17, *(float **)(a1 + 72), v23, v27, v22);
      }
      ++v21;
    }
    while ( v21 < a8 );
  }
  v21 = 0;
  do
  {
    for ( j = 0; j < v24; ++j )
      *(_DWORD *)(a3[v21] + 4LL * j) = *(_DWORD *)(a3[v21] + 4LL * j);
    ++v21;
  }
  while ( v21 < a8 );
  return 0; /* no caller reads the result */
}


//----- (00000001401B4530) ----------------------------------------------------
__int64            sub_1401B4530(int a1, signed int a2, int a3, __int64 a4, int a5, _DWORD *a6)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-38h]
  int j; // [rsp+20h] [rbp-38h]
  int v9; // [rsp+24h] [rbp-34h]
  unsigned int v10; // [rsp+28h] [rbp-30h]
  unsigned int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+2Ch] [rbp-2Ch]
  int v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+34h] [rbp-24h]
  int v15; // [rsp+38h] [rbp-20h]
  BOOL v16; // [rsp+3Ch] [rbp-1Ch]
  int v17; // [rsp+40h] [rbp-18h]
  BOOL v18; // [rsp+48h] [rbp-10h]

  v10 = 8 * a6[2];
  v14 = sub_14019A0A0((__int64)a6);
  if ( a3 )
    v15 = 2;
  else
    v15 = 4;
  v12 = v15;
  v16 = a5 > 0 && v14 + v15 + 1 <= v10;
  v11 = v10 - v16;
  v9 = 0;
  v13 = 0;
  for ( i = a1; i < a2; ++i )
  {
    if ( v12 + v14 <= v11 )
    {
      v9 ^= sub_14019AF20(a6, v12);
      v14 = sub_14019A0A0((__int64)a6);
      v13 |= v9;
    }
    *(_DWORD *)(a4 + 4LL * i) = v9;
    if ( a3 )
      v17 = 4;
    else
      v17 = 5;
    v12 = v17;
  }
  v18 = 0;
  if ( v16 && byte_14027BB98[8 * a5 + 4 * a3 + v13] != byte_14027BB98[8 * a5 + 2 + 4 * a3 + v13] )
    v18 = sub_14019AF20(a6, 1);
  for ( j = a1; ; ++j )
  {
    result = (unsigned int)a2;
    if ( j >= a2 )
      break;
    *(_DWORD *)(a4 + 4LL * j) = byte_14027BB98[8 * a5 + 4 * a3 + 2 * v18 + *(_DWORD *)(a4 + 4LL * j)];
  }
  return result;
}


//----- (00000001401B4770) ----------------------------------------------------
__int64            sub_1401B4770(_QWORD *a1, int a2, int a3)
{
  void *v3; // rsp
  float v5[2048]; // [rsp+10h] [rbp-2000h] BYREF
  int v6; // [rsp+2010h] [rbp+0h] BYREF
  float *v7; // [rsp+2018h] [rbp+8h]
  __int64 v8; // [rsp+2020h] [rbp+10h]

  v3 = alloca(4096);
  v7 = v5;
  sub_1401A8190(a1, v5, 2048, a2, a3);
  sub_1401A8740((__int64)(v7 + 360), (__int64)v7, 1328, 620, &v6);
  v6 = 720 - v6;
  return (unsigned int)v6; /* 0x1401B4807: mov eax, dword ptr [rbp] */
}


//----- (00000001401B4830) ----------------------------------------------------
__int64            sub_1401B4830(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rcx
  void *v4; // rsp
       __m128i *v5; // rcx
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  void *v8; // rsp
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  float v11; // xmm0_4
  float v12; // xmm0_4
  _BYTE v14[8304]; // [rsp+50h] [rbp-20C0h] BYREF
  int v15; // [rsp+2100h] [rbp-10h]
  int i; // [rsp+2110h] [rbp+0h] BYREF
  int j; // [rsp+2114h] [rbp+4h]
  int v18; // [rsp+2118h] [rbp+8h]
  int v19; // [rsp+211Ch] [rbp+Ch]
  __m128i *v20; // [rsp+2120h] [rbp+10h]
  int v21; // [rsp+2128h] [rbp+18h]
  int v22; // [rsp+212Ch] [rbp+1Ch]
  signed int v23; // [rsp+2130h] [rbp+20h]
  int v24; // [rsp+2134h] [rbp+24h]
  int v25; // [rsp+2138h] [rbp+28h]
  float v26; // [rsp+213Ch] [rbp+2Ch]
  int v27; // [rsp+2140h] [rbp+30h]
  float v28; // [rsp+2144h] [rbp+34h]
  float v29; // [rsp+2148h] [rbp+38h]
  float v30; // [rsp+214Ch] [rbp+3Ch]
  float v31; // [rsp+2150h] [rbp+40h]
  signed int v32; // [rsp+2154h] [rbp+44h]
  int v33; // [rsp+2158h] [rbp+48h]
  int k; // [rsp+215Ch] [rbp+4Ch]
  int v35; // [rsp+2160h] [rbp+50h]
  __int64 v36; // [rsp+2168h] [rbp+58h]
  float *v37; // [rsp+2170h] [rbp+60h]
  signed int v38; // [rsp+2178h] [rbp+68h]
  float v39; // [rsp+217Ch] [rbp+6Ch]
  int v40; // [rsp+2180h] [rbp+70h]
  int v41; // [rsp+2184h] [rbp+74h]
  float v42; // [rsp+2188h] [rbp+78h]
  float v43; // [rsp+218Ch] [rbp+7Ch]
  int v44; // [rsp+2190h] [rbp+80h]
  int v45; // [rsp+2194h] [rbp+84h]
  int v46; // [rsp+2198h] [rbp+88h]
  int v47; // [rsp+219Ch] [rbp+8Ch]
  float v48; // [rsp+21A0h] [rbp+90h]
  float v49; // [rsp+21A4h] [rbp+94h]
  float v50; // [rsp+21A8h] [rbp+98h]
  int v51; // [rsp+21ACh] [rbp+9Ch]
  float v52; // [rsp+21B0h] [rbp+A0h]
  float v53; // [rsp+21B4h] [rbp+A4h]
  float v54; // [rsp+21B8h] [rbp+A8h]
  BOOL v55; // [rsp+21BCh] [rbp+ACh]
  int v56; // [rsp+21C0h] [rbp+B0h]
  int v57; // [rsp+21C4h] [rbp+B4h]
  __int64 v58; // [rsp+21C8h] [rbp+B8h]
  __int64 v59; // [rsp+21D0h] [rbp+C0h]
  __int64 v60; // [rsp+21D8h] [rbp+C8h]
  int v61; // [rsp+21E0h] [rbp+D0h]
  float v62; // [rsp+21E4h] [rbp+D4h]
  BOOL v63; // [rsp+21E8h] [rbp+D8h]
  __int64 v64; // [rsp+21F0h] [rbp+E0h]
  int *v65; // [rsp+21F8h] [rbp+E8h]
       __m128i *v66; // [rsp+2200h] [rbp+F0h]
  __m128i *p_i; // [rsp+2208h] [rbp+F8h]
  _QWORD v68[2]; // [rsp+2210h] [rbp+100h] BYREF
  __int64 v69; // [rsp+2220h] [rbp+110h]
  __int64 v70; // [rsp+2228h] [rbp+118h]
  __int64 v71; // [rsp+2230h] [rbp+120h]
  __int64 v72; // [rsp+2238h] [rbp+128h]
  _BYTE *v73; // [rsp+2240h] [rbp+130h]
  __int64 v74; // [rsp+2248h] [rbp+138h]
  _QWORD v75[2]; // [rsp+2250h] [rbp+140h] BYREF
  float v76[28]; // [rsp+2260h] [rbp+150h] BYREF
  _DWORD v77[24]; // [rsp+22D0h] [rbp+1C0h] BYREF
  __int64 v78; // [rsp+2330h] [rbp+220h]

  v19 = *(_DWORD *)(a1 + 12);
  v36 = *(_QWORD *)a1;
  v21 = *(_DWORD *)(v36 + 8);
  v18 = *(_DWORD *)(v36 + 4);
  v64 = *(_QWORD *)(v36 + 32);
  j = 0;
  do
  {
    v68[j] = a1 + 4LL * (v18 + 2048) * j + 96;
    v75[j] = v68[j] + 0x2000LL - 4LL * a2;
    ++j;
  }
  while ( j < v19 );
  v59 = a1 + 4LL * v19 * (v18 + 2048) + 96;
  v58 = v59 + 96LL * v19;
  v70 = v58 + 8LL * v21;
  v71 = v70 + 8LL * v21;
  v69 = v71 + 8LL * v21;
  v33 = *(_DWORD *)(a1 + 56);
  v25 = *(_DWORD *)(a1 + 24);
  v55 = v33 >= 5 || v25 || *(_DWORD *)(a1 + 60);
  v63 = v55;
  if ( v55 )
  {
    v27 = *(_DWORD *)(a1 + 28);
    if ( v27 >= *(_DWORD *)(v36 + 12) )
      v56 = *(_DWORD *)(v36 + 12);
    else
      v56 = v27;
    if ( v25 <= v56 )
    {
      if ( v27 >= *(_DWORD *)(v36 + 12) )
        v57 = *(_DWORD *)(v36 + 12);
      else
        v57 = v27;
      v40 = v57;
    }
    else
    {
      v40 = v25;
    }
    v46 = v40;
    v3 = 4LL * a2 * v19 + 15;
    if ( v3 <= 4LL * a2 * v19 )
      v3 = 0xFFFFFFFFFFFFFF0LL;
    v4 = alloca(v3 & 0xFFFFFFFFFFFFFFF0uLL);
    v65 = &i;
    if ( v33 )
      v41 = 1056964608;
    else
      v41 = 1069547520;
    v42 = *(float *)&v41;
    j = 0;
    do
    {
      for ( i = v25; i < v27; ++i )
      {
        if ( *(float *)(v69 + 4LL * (i + v21 * j)) <= (float)(*(float *)(v58 + 4LL * (i + v21 * j)) - v42) )
          v43 = *(float *)(v58 + 4LL * (i + v21 * j)) - v42;
        else
          v43 = *(float *)(v69 + 4LL * (i + v21 * j));
        *(float *)(v58 + 4LL * (i + v21 * j)) = v43;
      }
      ++j;
    }
    while ( j < v19 );
    v35 = *(_DWORD *)(a1 + 44);
    for ( j = 0; j < v19; ++j )
    {
      for ( i = v25; i < v46; ++i )
      {
        v61 = *(__int16 *)(v64 + 2LL * i);
        v44 = (v61 << a3) + j * a2;
        v45 = (*(__int16 *)(v64 + 2LL * (i + 1)) - *(__int16 *)(v64 + 2LL * i)) << a3;
        for ( k = 0; k < v45; ++k )
        {
          v35 = sub_1401A5C70(v35);
          *(float *)&v65[k + v44] = (float)(v35 >> 20);
        }
        sub_1401A6800((float *)&v65[v44], v45, 1.0);
      }
    }
    *(_DWORD *)(a1 + 44) = v35;
    j = 0;
    do
    {
      v5 = (     __m128i *)(v68[j] + 4LL * a2);
      v72 = j;
      sub_1401FC920((__m128i *)v68[j++], v5, 4LL * ((v18 >> 1) + 2048 - a2));
    }
    while ( j < v19 );
    v15 = *(_DWORD *)(a1 + 40);
    sub_1401B3E40(v36, (__int64)v65, v75, v58, v25, v46, v19, v19, 0, a3, *(_DWORD *)(a1 + 20), 0);
  }
  else
  {
    v49 = 1.0;
    if ( v33 )
    {
      v24 = *(_DWORD *)(a1 + 52);
      v49 = 0.80000001;
    }
    else
    {
      v24 = sub_1401B4770(v68, v19, *(_DWORD *)(a1 + 40));
      *(_DWORD *)(a1 + 52) = v24;
    }
    if ( 2 * v24 >= 1024 )
      v47 = 1024;
    else
      v47 = 2 * v24;
    v23 = v47;
    v6 = 4LL * v18 + 15;
    if ( v6 <= 4LL * v18 )
      v6 = 0xFFFFFFFFFFFFFF0LL;
    v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
    p_i = (__m128i *)&i;
    v8 = alloca(4192);
    v73 = v14;
    v9 = 4LL * v23 + 15;
    if ( v9 <= 4LL * v23 )
      v9 = 0xFFFFFFFFFFFFFF0LL;
    v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
    v66 = (     __m128i *)v14;
    v37 = (float *)(v73 + 96);
    v60 = *(_QWORD *)(v36 + 72);
    j = 0;
    do
    {
      v30 = 0.0;
      v20 = (__m128i *)v68[j];
      for ( i = 0; i < 1048; ++i )
        v37[i - 24] = *(float *)&SR_VEC_LANES(128, v20[250], i32)[i];
      if ( !v33 )
      {
        sub_1401ADFA0(v37, (__int64)v76, v60, v18, 24, 1024);
        v76[0] = v76[0] * 1.0001;
        for ( i = 1; i <= 24; ++i )
          v76[i] = v76[i] - (float)((float)((float)(v76[i] * 0.000064000007) * (float)i) * (float)i);
        sub_1401AD490((_WORD *)(v59 + 96LL * j), v76, 24);
      }
      sub_1401AD6F0((__int64)&v37[-v23 + 1024], v59 + 96LL * j, (__int64)v66, v23, 24);
      sub_1401FC920((__m128i *)&v37[-v23 + 1024], v66, 4LL * v23);
      v26 = 1.0;
      v29 = 1.0;
      v38 = v23 >> 1;
      for ( i = 0; i < v38; ++i )
      {
        v28 = v37[i + 1024 - v38];
        v26 = v26 + (float)(v28 * v28);
        v28 = v37[i + 1024 - 2 * v38];
        v29 = v29 + (float)(v28 * v28);
      }
      if ( v29 <= v26 )
        v48 = v29;
      else
        v48 = v26;
      v26 = v48;
      v11 = sqrt((float)(v48 / v29));
      v50 = v11;
      sub_1401FC920(v20, (__m128i *)((char *)v20 + 4 * a2), 4LL * (2048 - a2));
      v51 = 1024 - v24;
      v32 = v18 + a2;
      v39 = v49 * v50;
      v22 = 0;
      i = 0;
      while ( i < v32 )
      {
        if ( v22 >= v24 )
        {
          v22 -= v24;
          v39 = v39 * v50;
        }
        *(float *)&SR_VEC_PTR_LANES(128, v20, i32)[i + 2048 - a2] = v39 * v37[v22 + v51];
        v52 = *(float *)&SR_VEC_PTR_LANES(128, v20, i32)[v22 + v51 + 1024 - a2];
        v30 = v30 + (float)(v52 * v52);
        ++i;
        ++v22;
      }
      for ( i = 0; i < 24; ++i )
        v77[i] = SR_VEC_PTR_LANES(128, v20, i32)[2048 - a2 - 1 - i];
      v74 = (__int64)SR_VEC_LANES(128, v20[512], i64) - 4 * a2;
      sub_1401AD990(v74, (float *)(v59 + 96LL * j), v74, v32, 24, (__int64)v77);
      v31 = 0.0;
      for ( i = 0; i < v32; ++i )
      {
        v53 = *(float *)&SR_VEC_PTR_LANES(128, v20, i32)[i + 2048 - a2];
        v31 = v31 + (float)(v53 * v53);
      }
      if ( v30 > (float)(0.2 * v31) )
      {
        if ( v31 > v30 )
        {
          v12 = sqrt((float)((float)(v30 + 1.0) / (float)(v31 + 1.0)));
          v54 = v12;
          for ( i = 0; i < v18; ++i )
          {
            v62 = 1.0 - (float)(*(float *)(v60 + 4LL * i) * (float)(1.0 - v54));
            *(float *)&SR_VEC_PTR_LANES(128, v20, i32)[i + 2048 - a2] = v62 * *(float *)&SR_VEC_PTR_LANES(128, v20, i32)[i + 2048 - a2];
          }
          for ( i = v18; i < v32; ++i )
            *(float *)&SR_VEC_PTR_LANES(128, v20, i32)[i + 2048 - a2] = v54 * *(float *)&SR_VEC_PTR_LANES(128, v20, i32)[i + 2048 - a2];
        }
      }
      else
      {
        for ( i = 0; i < v32; ++i )
          SR_VEC_PTR_LANES(128, v20, i32)[i + 2048 - a2] = 0;
      }
      sub_1401A0C20(
        p_i,
        v20 + 512,
        *(_DWORD *)(a1 + 64),
        *(_DWORD *)(a1 + 64),
        v18,
        -*(float *)(a1 + 72),
        -*(float *)(a1 + 72),
        *(_DWORD *)(a1 + 80),
        *(_DWORD *)(a1 + 80),
        0,
        0);
      for ( i = 0; i < v18 / 2; ++i )
        *(float *)&SR_VEC_LANES(128, v20[512], i32)[i] = (float)(*(float *)(v60 + 4LL * i) * *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[v18 - 1 - i])
                                         + (float)(*(float *)(v60 + 4LL * (v18 - i - 1)) * *(float *)&SR_VEC_PTR_LANES(128, p_i, i32)[i]);
      ++j;
    }
    while ( j < v19 );
  }
  *(_DWORD *)(a1 + 56) = v33 + 1;
  return 0; /* no caller reads the result */
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401B57D0) ----------------------------------------------------
__int64            sub_1401B57D0(int a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-28h]
  int v4; // [rsp+24h] [rbp-24h]
  unsigned int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]
  int v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+3Ch] [rbp-Ch]

  v3 = a1 - 1;
  v5 = *(int *)(a2 + 4LL * (a1 - 1)) < 0;
  v4 = abs(*(_DWORD *)(a2 + 4LL * (a1 - 1)));
  do
  {
    --v3;
    if ( a1 - v3 >= v4 )
      v6 = v4;
    else
      v6 = a1 - v3;
    if ( a1 - v3 <= v4 )
      v7 = v4;
    else
      v7 = a1 - v3;
    v5 += *((_DWORD *)*(&off_14027E020 + v6) + v7);
    v4 += abs(*(_DWORD *)(a2 + 4LL * v3));
    if ( *(int *)(a2 + 4LL * v3) < 0 )
    {
      if ( a1 - v3 >= v4 + 1 )
        v8 = v4 + 1;
      else
        v8 = a1 - v3;
      if ( a1 - v3 <= v4 + 1 )
        v9 = v4 + 1;
      else
        v9 = a1 - v3;
      v5 += *((_DWORD *)*(&off_14027E020 + v8) + v9);
    }
  }
  while ( v3 > 0 );
  return v5;
}

// 14027E020: using guessed type _UNKNOWN *off_14027E020;

//----- (00000001401B5990) ----------------------------------------------------
float            sub_1401B5990(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  __int16 v5; // [rsp+0h] [rbp-38h]
  __int16 v6; // [rsp+0h] [rbp-38h]
  __int16 v7; // [rsp+0h] [rbp-38h]
  unsigned int v8; // [rsp+4h] [rbp-34h]
  unsigned int i; // [rsp+4h] [rbp-34h]
  unsigned int v10; // [rsp+4h] [rbp-34h]
  int v11; // [rsp+8h] [rbp-30h]
  int v12; // [rsp+8h] [rbp-30h]
  float v13; // [rsp+Ch] [rbp-2Ch]
  float v14; // [rsp+Ch] [rbp-2Ch]
  unsigned int v15; // [rsp+10h] [rbp-28h]
  __int16 v16; // [rsp+14h] [rbp-24h]
  __int16 v17; // [rsp+14h] [rbp-24h]
  __int64 v18; // [rsp+28h] [rbp-10h]
  unsigned int v21; // [rsp+48h] [rbp+10h]
  unsigned int v23; // [rsp+50h] [rbp+18h]
  unsigned int v24; // [rsp+50h] [rbp+18h]

  v13 = 0.0;
  while ( a1 > 2 )
  {
    if ( a2 < a1 )
    {
      v10 = *((_DWORD *)*(&off_14027E020 + a2) + a1);
      v15 = *((_DWORD *)*(&off_14027E020 + a2 + 1) + a1);
      if ( v10 <= a3 && a3 < v15 )
      {
        a3 -= v10;
        *a4++ = 0;
        goto LABEL_18;
      }
      v11 = -(a3 >= v15);
      v23 = a3 - (v11 & v15);
      v16 = a2;
      do
        i = *((_DWORD *)*(&off_14027E020 + --a2) + a1);
      while ( i > v23 );
    }
    else
    {
      v18 = (__int64)*(&off_14027E020 + a1);
      v8 = *(_DWORD *)(v18 + 4LL * (a2 + 1));
      v11 = -(a3 >= v8);
      v23 = a3 - (v11 & v8);
      v16 = a2;
      if ( *(_DWORD *)(v18 + 4LL * a1) <= v23 )
      {
        for ( i = *(_DWORD *)(v18 + 4LL * a2); i > v23; i = *(_DWORD *)(v18 + 4LL * a2) )
          --a2;
      }
      else
      {
        a2 = a1;
        do
          i = *((_DWORD *)*(&off_14027E020 + --a2) + a1);
        while ( i > v23 );
      }
    }
    a3 = v23 - i;
    v5 = v11 ^ (v11 + v16 - a2);
    *a4++ = v5;
    v13 = v13 + (float)((float)v5 * (float)v5);
LABEL_18:
    --a1;
  }
  v12 = -(a3 >= 2 * a2 + 1);
  v24 = a3 - (v12 & (2 * a2 + 1));
  v17 = a2;
  v21 = (v24 + 1) >> 1;
  if ( v21 )
    LOWORD(v24) = v24 - (2 * v21 - 1);
  v6 = v12 ^ (v12 + v17 - v21);
  *a4 = v6;
  v14 = v13 + (float)((float)v6 * (float)v6);
  v7 = -(__int16)v24 ^ (v21 - v24);
  a4[1] = v7;
  return v14 + (float)((float)v7 * (float)v7);
}

// 14027E020: using guessed type _UNKNOWN *off_14027E020;

//----- (00000001401B5DD0) ----------------------------------------------------
__int64            sub_1401B5DD0(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 28) >= *(_DWORD *)(a1 + 8) )
    return 0;
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 28))++);
}


//----- (00000001401B5E30) ----------------------------------------------------
__int64            sub_1401B5E30(__int64 a1)
{
  int v2; // [rsp+0h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 12) >= *(_DWORD *)(a1 + 8) )
  {
    return 0;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 12) + 1;
    *(_DWORD *)(a1 + 12) = v2;
    return *(unsigned __int8 *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 8) - v2));
  }
}


//----- (00000001401B5EA0) ----------------------------------------------------
_DWORD *           sub_1401B5EA0(_DWORD *a1)
{
  _DWORD *result; // rax
  int v2; // [rsp+20h] [rbp-18h]

  while ( 1 )
  {
    result = a1;
    if ( a1[8] > 0x800000u )
      break;
    a1[6] += 8;
    a1[8] <<= 8;
    v2 = a1[11];
    a1[11] = sub_1401B5DD0((__int64)a1);
    a1[9] = ((unsigned __int8)~((a1[11] | (v2 << 8)) >> 1) + (a1[9] << 8)) & 0x7FFFFFFF;
  }
  return result;
}


//----- (00000001401B5F50) ----------------------------------------------------
__int64            sub_1401B5F50(__int64 a1, char a2)
{
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 28)) >= *(_DWORD *)(a1 + 8) )
    return 0xFFFFFFFFLL;
  *(_BYTE *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 28))++) = a2;
  return 0;
}


//----- (00000001401B5FB0) ----------------------------------------------------
__int64            sub_1401B5FB0(__int64 a1, char a2)
{
  int v3; // [rsp+0h] [rbp-18h]

  if ( (unsigned int)(*(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 28)) >= *(_DWORD *)(a1 + 8) )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a1 + 12) + 1;
  *(_DWORD *)(a1 + 12) = v3;
  *(_BYTE *)(*(_QWORD *)a1 + (unsigned int)(*(_DWORD *)(a1 + 8) - v3)) = a2;
  return 0;
}


//----- (00000001401B6030) ----------------------------------------------------
__int64            sub_1401B6030(_DWORD *a1, int a2)
{
  __int64 result; // rax
  int v3; // [rsp+20h] [rbp-18h]
  int v4; // [rsp+24h] [rbp-14h]
  unsigned __int8 v6; // [rsp+48h] [rbp+10h]

  v6 = a2;
  if ( a2 == 255 )
  {
    result = (unsigned int)(a1[10] + 1);
    a1[10] = result;
  }
  else
  {
    v3 = a2 >> 8;
    if ( (int)a1[11] >= 0 )
      a1[12] |= sub_1401B5F50((__int64)a1, BYTE1(a2) + (unsigned __int8)a1[11]);
    if ( a1[10] )
    {
      do
      {
        a1[12] |= sub_1401B5F50((__int64)a1, (unsigned __int8)v3 - 1);
        v4 = a1[10] - 1;
        a1[10] = v4;
      }
      while ( v4 );
    }
    a1[11] = v6;
    return v6;
  }
  return result;
}


//----- (00000001401B6120) ----------------------------------------------------
_DWORD *           sub_1401B6120(_DWORD *a1)
{
  _DWORD *result; // rax

  while ( 1 )
  {
    result = a1;
    if ( a1[8] > 0x800000u )
      break;
    sub_1401B6030(a1, a1[9] >> 23);
    a1[9] = (a1[9] << 8) & 0x7FFFFFFF;
    a1[8] <<= 8;
    a1[6] += 8;
  }
  return result;
}


//----- (00000001401B61A0) ----------------------------------------------------
__int64            sub_1401B61A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int i; // [rsp+4h] [rbp-24h]
  __int64 v5; // [rsp+8h] [rbp-20h]

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    v5 = *(_QWORD *)(a1 + 32);
    *(float *)(a1 + 32) = *(float *)a1 - *(float *)&v5;
    *(float *)(a1 + 36) = *(float *)(a1 + 4) - *((float *)&v5 + 1);
    *(float *)a1 = *(float *)a1 + *(float *)&v5;
    *(float *)(a1 + 4) = *(float *)(a1 + 4) + *((float *)&v5 + 1);
    *(float *)&v5 = (float)(*(float *)(a1 + 40) + *(float *)(a1 + 44)) * 0.70710677;
    *((float *)&v5 + 1) = (float)(*(float *)(a1 + 44) - *(float *)(a1 + 40)) * 0.70710677;
    *(float *)(a1 + 40) = *(float *)(a1 + 8) - *(float *)&v5;
    *(float *)(a1 + 44) = *(float *)(a1 + 12) - *((float *)&v5 + 1);
    *(float *)(a1 + 8) = *(float *)(a1 + 8) + *(float *)&v5;
    *(float *)(a1 + 12) = *(float *)(a1 + 12) + *((float *)&v5 + 1);
    LODWORD(v5) = *(_DWORD *)(a1 + 52);
    *((float *)&v5 + 1) = -*(float *)(a1 + 48);
    *(float *)(a1 + 48) = *(float *)(a1 + 16) - *(float *)&v5;
    *(float *)(a1 + 52) = *(float *)(a1 + 20) - *((float *)&v5 + 1);
    *(float *)(a1 + 16) = *(float *)(a1 + 16) + *(float *)&v5;
    *(float *)(a1 + 20) = *(float *)(a1 + 20) + *((float *)&v5 + 1);
    *(float *)&v5 = (float)(*(float *)(a1 + 60) - *(float *)(a1 + 56)) * 0.70710677;
    *((float *)&v5 + 1) = (float)-(float)(*(float *)(a1 + 60) + *(float *)(a1 + 56)) * 0.70710677;
    *(float *)(a1 + 56) = *(float *)(a1 + 24) - *(float *)&v5;
    *(float *)(a1 + 60) = *(float *)(a1 + 28) - *((float *)&v5 + 1);
    *(float *)(a1 + 24) = *(float *)(a1 + 24) + *(float *)&v5;
    *(float *)(a1 + 28) = *(float *)(a1 + 28) + *((float *)&v5 + 1);
    a1 += 64;
  }
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401B6640) ----------------------------------------------------
void               CGlobalUtils__SetNewParent(
        CGlobalUtils *this,
        struct CObList *a2,
        struct CWnd *a3,
        int a4,
        int a5,
        int a6)
{
  int i; // [rsp+0h] [rbp-88h] BYREF
  int v8; // [rsp+4h] [rbp-84h]
  int v9; // [rsp+8h] [rbp-80h]
  float v10; // [rsp+10h] [rbp-78h]
  float v11; // [rsp+14h] [rbp-74h]
  int j; // [rsp+18h] [rbp-70h]
  float *v13; // [rsp+20h] [rbp-68h]
  float *v14; // [rsp+28h] [rbp-60h]
  float *v15; // [rsp+30h] [rbp-58h]
  float v16; // [rsp+38h] [rbp-50h]
  float v17; // [rsp+3Ch] [rbp-4Ch]
  CGlobalUtils *v18; // [rsp+40h] [rbp-48h]
  float v19; // [rsp+48h] [rbp-40h]
  float v20; // [rsp+4Ch] [rbp-3Ch]
  float v21; // [rsp+50h] [rbp-38h]
  float v22; // [rsp+54h] [rbp-34h]
  float v23; // [rsp+58h] [rbp-30h]
  float v24; // [rsp+5Ch] [rbp-2Ch]
  float v25; // [rsp+60h] [rbp-28h]
  float v26; // [rsp+64h] [rbp-24h]
  float v27; // [rsp+68h] [rbp-20h]
  float v28; // [rsp+6Ch] [rbp-1Ch]
  float v29; // [rsp+70h] [rbp-18h]
  float v30; // [rsp+74h] [rbp-14h]
  __int64 v31; // [rsp+78h] [rbp-10h]
  float *v32; // [rsp+90h] [rbp+8h]
  float *v33; // [rsp+90h] [rbp+8h]

  v32 = (float *)this;
  if ( a4 == 1 )
  {
    for ( i = 0; i < a5; ++i )
    {
      v16 = *v32 - v32[4];
      v17 = v32[1] - v32[5];
      *v32 = *v32 + v32[4];
      v32[1] = v32[1] + v32[5];
      v10 = v32[2] + v32[6];
      v11 = v32[3] + v32[7];
      v32[4] = *v32 - v10;
      v32[5] = v32[1] - v11;
      *v32 = *v32 + v10;
      v32[1] = v32[1] + v11;
      v10 = v32[2] - v32[6];
      v11 = v32[3] - v32[7];
      v32[2] = v16 + v11;
      v32[3] = v17 - v10;
      v32[6] = v16 - v11;
      v32[7] = v17 + v10;
      v32 += 8;
    }
  }
  else
  {
    v8 = 2 * a4;
    v9 = 3 * a4;
    v18 = this;
    for ( i = 0; i < a5; ++i )
    {
      v33 = (float *)((char *)v18 + 8 * a6 * i);
      v13 = *((float **)a3 + 7);
      v14 = v13;
      v15 = v13;
      for ( j = 0; j < a4; ++j )
      {
        v19 = (float)(v33[2 * a4] * *v13) - (float)(v33[2 * a4 + 1] * v13[1]);
        v20 = (float)(v33[2 * a4] * v13[1]) + (float)(v33[2 * a4 + 1] * *v13);
        v21 = (float)(v33[2 * v8] * *v14) - (float)(v33[2 * v8 + 1] * v14[1]);
        v22 = (float)(v33[2 * v8] * v14[1]) + (float)(v33[2 * v8 + 1] * *v14);
        v23 = (float)(v33[2 * v9] * *v15) - (float)(v33[2 * v9 + 1] * v15[1]);
        v24 = (float)(v33[2 * v9] * v15[1]) + (float)(v33[2 * v9 + 1] * *v15);
        v29 = *v33 - v21;
        v30 = v33[1] - v22;
        *v33 = *v33 + v21;
        v33[1] = v33[1] + v22;
        v25 = v19 + v23;
        v26 = v20 + v24;
        v27 = v19 - v23;
        v28 = v20 - v24;
        v33[2 * v8] = *v33 - (float)(v19 + v23);
        v33[2 * v8 + 1] = v33[1] - v26;
        v13 += 2 * (_QWORD)a2;
        v14 += 4 * (_QWORD)a2;
        v15 += 6 * (_QWORD)a2;
        *v33 = *v33 + v25;
        v33[1] = v33[1] + v26;
        v33[2 * a4] = v29 + v28;
        v33[2 * a4 + 1] = v30 - v27;
        v33[2 * v9] = v29 - v28;
        v33[2 * v9 + 1] = v30 + v27;
        v33 += 2;
      }
    }
  }
  return; /* original void FFT stage */
}


//----- (00000001401B6FA0) ----------------------------------------------------
void               sub_1401B6FA0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int i; // [rsp+0h] [rbp-78h] BYREF
  float *v8; // [rsp+8h] [rbp-70h]
  float *v9; // [rsp+10h] [rbp-68h]
  __int64 v10; // [rsp+18h] [rbp-60h]
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]
  float v14; // [rsp+38h] [rbp-40h]
  float v15; // [rsp+3Ch] [rbp-3Ch]
  float v16; // [rsp+40h] [rbp-38h]
  float v17; // [rsp+44h] [rbp-34h]
  float v18; // [rsp+48h] [rbp-30h]
  float v19; // [rsp+4Ch] [rbp-2Ch]
  float v20; // [rsp+50h] [rbp-28h]
  float v21; // [rsp+54h] [rbp-24h]
  __int64 v22; // [rsp+60h] [rbp-18h]
  float *v23; // [rsp+80h] [rbp+8h]

  v10 = 2 * a4;
  v13 = a1;
  v12 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * a4 * a2);
  for ( i = 0; i < a5; ++i )
  {
    v23 = (float *)(v13 + 8LL * a6 * i);
    v8 = *(float **)(a3 + 56);
    v9 = v8;
    v11 = a4;
    do
    {
      v16 = (float)(v23[2 * a4] * *v9) - (float)(v23[2 * a4 + 1] * v9[1]);
      v17 = (float)(v23[2 * a4] * v9[1]) + (float)(v23[2 * a4 + 1] * *v9);
      v18 = (float)(v23[2 * v10] * *v8) - (float)(v23[2 * v10 + 1] * v8[1]);
      v19 = (float)(v23[2 * v10] * v8[1]) + (float)(v23[2 * v10 + 1] * *v8);
      v20 = v16 + v18;
      v21 = v17 + v19;
      v14 = v16 - v18;
      v15 = v17 - v19;
      v9 += 2 * a2;
      v8 += 4 * a2;
      v23[2 * a4] = *v23 - (float)((float)(v16 + v18) * 0.5);
      v23[2 * a4 + 1] = v23[1] - (float)(v21 * 0.5);
      v14 = v14 * *((float *)&v12 + 1);
      v15 = v15 * *((float *)&v12 + 1);
      *v23 = *v23 + v20;
      v23[1] = v23[1] + v21;
      v23[2 * v10] = v23[2 * a4] + v15;
      v23[2 * v10 + 1] = v23[2 * a4 + 1] - v14;
      v23[2 * a4] = v23[2 * a4] - v15;
      v23[2 * a4 + 1] = v23[2 * a4 + 1] + v14;
      v23 += 2;
      --v11;
    }
    while ( v11 );
  }
  return; /* original void FFT stage */
}


//----- (00000001401B7510) ----------------------------------------------------
void               sub_1401B7510(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int j; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-E0h]
  float *v9; // [rsp+10h] [rbp-D8h]
  int i; // [rsp+18h] [rbp-D0h]
  __int64 v11; // [rsp+20h] [rbp-C8h]
  __int64 v12; // [rsp+28h] [rbp-C0h]
  float *v13; // [rsp+30h] [rbp-B8h]
  float *v14; // [rsp+38h] [rbp-B0h]
  float *v15; // [rsp+40h] [rbp-A8h]
  float *v16; // [rsp+48h] [rbp-A0h]
  __int64 v17; // [rsp+50h] [rbp-98h]
  __int64 v18; // [rsp+60h] [rbp-88h]
  float v19; // [rsp+68h] [rbp-80h]
  float v20; // [rsp+6Ch] [rbp-7Ch]
  float v21; // [rsp+70h] [rbp-78h]
  float v22; // [rsp+74h] [rbp-74h]
  float v23; // [rsp+78h] [rbp-70h]
  float v24; // [rsp+7Ch] [rbp-6Ch]
  float v25; // [rsp+80h] [rbp-68h]
  float v26; // [rsp+84h] [rbp-64h]
  float v27; // [rsp+88h] [rbp-60h]
  float v28; // [rsp+8Ch] [rbp-5Ch]
  float v29; // [rsp+90h] [rbp-58h]
  float v30; // [rsp+94h] [rbp-54h]
  float v31; // [rsp+98h] [rbp-50h]
  float v32; // [rsp+9Ch] [rbp-4Ch]
  float v33; // [rsp+A0h] [rbp-48h]
  float v34; // [rsp+A4h] [rbp-44h]
  float v35; // [rsp+A8h] [rbp-40h]
  float v36; // [rsp+ACh] [rbp-3Ch]
  float v37; // [rsp+B0h] [rbp-38h]
  float v38; // [rsp+B4h] [rbp-34h]
  float v39; // [rsp+B8h] [rbp-30h]
  float v40; // [rsp+BCh] [rbp-2Ch]
  float v41; // [rsp+C0h] [rbp-28h]
  float v42; // [rsp+C4h] [rbp-24h]
  __int64 v43; // [rsp+D0h] [rbp-18h]

  v17 = a1;
  v12 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * a4 * a2);
  v11 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * a4 * 2 * a2);
  v8 = *(_QWORD *)(a3 + 56);
  for ( i = 0; i < a5; ++i )
  {
    v9 = (float *)(v17 + 8LL * a6 * i);
    v13 = &v9[2 * a4];
    v14 = &v9[4 * a4];
    v15 = &v9[6 * a4];
    v16 = &v9[8 * a4];
    for ( j = 0; j < a4; ++j )
    {
      v18 = *(_QWORD *)v9;
      v19 = (float)(*v13 * *(float *)(v8 + 8 * a2 * j)) - (float)(v13[1] * *(float *)(v8 + 8 * a2 * j + 4));
      v20 = (float)(*v13 * *(float *)(v8 + 8 * a2 * j + 4)) + (float)(v13[1] * *(float *)(v8 + 8 * a2 * j));
      v21 = (float)(*v14 * *(float *)(v8 + 8 * a2 * 2 * j)) - (float)(v14[1] * *(float *)(v8 + 8 * a2 * 2 * j + 4));
      v22 = (float)(*v14 * *(float *)(v8 + 8 * a2 * 2 * j + 4)) + (float)(v14[1] * *(float *)(v8 + 8 * a2 * 2 * j));
      v23 = (float)(*v15 * *(float *)(v8 + 8 * a2 * 3 * j)) - (float)(v15[1] * *(float *)(v8 + 8 * a2 * 3 * j + 4));
      v24 = (float)(*v15 * *(float *)(v8 + 8 * a2 * 3 * j + 4)) + (float)(v15[1] * *(float *)(v8 + 8 * a2 * 3 * j));
      v25 = (float)(*v16 * *(float *)(v8 + 8 * a2 * 4 * j)) - (float)(v16[1] * *(float *)(v8 + 8 * a2 * 4 * j + 4));
      v26 = (float)(*v16 * *(float *)(v8 + 8 * a2 * 4 * j + 4)) + (float)(v16[1] * *(float *)(v8 + 8 * a2 * 4 * j));
      v31 = v19 + v25;
      v32 = v20 + v26;
      v37 = v19 - v25;
      v38 = v20 - v26;
      v33 = v21 + v23;
      v34 = v22 + v24;
      v35 = v21 - v23;
      v36 = v22 - v24;
      *v9 = *v9 + (float)((float)(v19 + v25) + (float)(v21 + v23));
      v9[1] = v9[1] + (float)(v32 + v34);
      v27 = *(float *)&v18 + (float)((float)(v31 * *(float *)&v12) + (float)(v33 * *(float *)&v11));
      v28 = *((float *)&v18 + 1) + (float)((float)(v32 * *(float *)&v12) + (float)(v34 * *(float *)&v11));
      v29 = (float)(v38 * *((float *)&v12 + 1)) + (float)(v36 * *((float *)&v11 + 1));
      v30 = -(float)((float)(v37 * *((float *)&v12 + 1)) + (float)(v35 * *((float *)&v11 + 1)));
      *v13 = v27 - v29;
      v13[1] = v28 - v30;
      *v16 = v27 + v29;
      v16[1] = v28 + v30;
      v39 = *(float *)&v18 + (float)((float)(v31 * *(float *)&v11) + (float)(v33 * *(float *)&v12));
      v40 = *((float *)&v18 + 1) + (float)((float)(v32 * *(float *)&v11) + (float)(v34 * *(float *)&v12));
      v41 = (float)(v36 * *((float *)&v12 + 1)) - (float)(v38 * *((float *)&v11 + 1));
      v42 = (float)(v37 * *((float *)&v11 + 1)) - (float)(v35 * *((float *)&v12 + 1));
      *v14 = v39 + v41;
      v14[1] = v40 + v42;
      *v15 = v39 - v41;
      v15[1] = v40 - v42;
      v9 += 2;
      v13 += 2;
      v14 += 2;
      v15 += 2;
      v16 += 2;
    }
  }
  return; /* original void FFT stage */
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401B7F80) ----------------------------------------------------
_DWORD *           sub_1401B7F80(_DWORD *a1, int *a2, int a3, int a4)
{
  int v5; // [rsp+20h] [rbp-38h]
  int v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+24h] [rbp-34h]
  int v8; // [rsp+24h] [rbp-34h]
  int i; // [rsp+2Ch] [rbp-2Ch]
  int v10; // [rsp+34h] [rbp-24h]
  int v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+3Ch] [rbp-1Ch]
  int v15; // [rsp+70h] [rbp+18h]
  int v16; // [rsp+70h] [rbp+18h]
  int v17; // [rsp+70h] [rbp+18h]

  v15 = a3;
  v7 = *a2;
  v5 = 0;
  if ( *a2 )
  {
    v10 = v7 < 0;
    v8 = -v10 ^ (v7 - v10);
    v6 = a3;
    v16 = sub_1401B82F0(a3, a4);
    for ( i = 1; v16 && i < v8; ++i )
    {
      v17 = 2 * v16;
      v6 += v17 + 2;
      v16 = (unsigned int)(a4 * v17) >> 15;
    }
    if ( v16 )
    {
      v15 = v16 + 1;
      v5 = ((v10 - 1) & v15) + v6;
    }
    else
    {
      if ( v8 - i >= ((0x8000 - v6 + v10) >> 1) - 1 )
        v11 = ((0x8000 - v6 + v10) >> 1) - 1;
      else
        v11 = v8 - i;
      v5 = 2 * v11 - v10 + 1 + v6;
      if ( v5 == 0x8000 || v5 == 32767 )
        v12 = 0x8000 - v5;
      else
        v12 = 1;
      v15 = v12;
      *a2 = -v10 ^ (v11 + i - v10);
    }
  }
  return sub_14019A360(a1, v5, v15 + v5, 15);
}


//----- (00000001401B8170) ----------------------------------------------------
__int64            sub_1401B8170(_DWORD *a1, unsigned int a2, int a3)
{
  int v4; // [rsp+20h] [rbp-28h]
  unsigned int v5; // [rsp+24h] [rbp-24h]
  unsigned int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+58h] [rbp+10h]

  v5 = 0;
  v6 = sub_14019ADB0(a1, 15);
  v4 = 0;
  if ( v6 >= a2 )
  {
    v5 = 1;
    v4 = a2;
    a2 = sub_1401B82F0(a2, a3) + 1;
    while ( a2 > 1 && v6 >= v4 + 2 * a2 )
    {
      v10 = 2 * a2;
      v4 += v10;
      a2 = ((unsigned int)(a3 * (v10 - 2)) >> 15) + 1;
      ++v5;
    }
    if ( a2 <= 1 )
    {
      v5 += (v6 - v4) >> 1;
      v4 += 2 * ((v6 - v4) >> 1);
    }
    if ( v6 >= a2 + v4 )
      v4 += a2;
    else
      v5 = -v5;
  }
  if ( a2 + v4 >= 0x8000 )
    v7 = 0x8000;
  else
    v7 = a2 + v4;
  sub_14019AE70(a1, v4, v7, 0x8000);
  return v5;
}


//----- (00000001401B82F0) ----------------------------------------------------
__int64            sub_1401B82F0(int a1, int a2)
{
  return (unsigned int)((0x4000 - a2) * (32736 - a1)) >> 15;
}


//----- (00000001401B8330) ----------------------------------------------------
__int64            sub_1401B8330(__int64 a1, __int64 a2, int a3, signed int a4, signed int *a5)
{
  __int64 result; // rax
  signed int j; // [rsp+0h] [rbp-38h]
  float v7; // [rsp+4h] [rbp-34h]
  float v8; // [rsp+4h] [rbp-34h]
  int i; // [rsp+8h] [rbp-30h]
  float v10; // [rsp+Ch] [rbp-2Ch]
  int v11; // [rsp+14h] [rbp-24h]
  float v12; // [rsp+18h] [rbp-20h]
  float v13; // [rsp+1Ch] [rbp-1Ch]
  float v14; // [rsp+20h] [rbp-18h]
  float v15; // [rsp+24h] [rbp-14h]

  v7 = 1.0;
  v12 = -1.0;
  v13 = -1.0;
  v14 = 0.0;
  v15 = 0.0;
  *a5 = 0;
  a5[1] = 1;
  for ( i = 0; i < a3; ++i )
    v7 = v7 + (float)(*(float *)(a2 + 4LL * i) * *(float *)(a2 + 4LL * i));
  for ( j = 0; ; ++j )
  {
    result = (unsigned int)a4;
    if ( j >= a4 )
      break;
    if ( *(float *)(a1 + 4LL * j) > 0.0 )
    {
      v10 = *(float *)(a1 + 4LL * j) * 1.0e-12;
      if ( (float)((float)(v10 * v10) * v15) > (float)(v13 * v7) )
      {
        if ( (float)((float)(v10 * v10) * v14) <= (float)(v12 * v7) )
        {
          v13 = v10 * v10;
          v15 = v7;
          a5[1] = j;
        }
        else
        {
          v13 = v12;
          v15 = v14;
          a5[1] = *a5;
          v12 = v10 * v10;
          v14 = v7;
          *a5 = j;
        }
      }
    }
    v8 = v7
       + (float)((float)(*(float *)(a2 + 4LL * (a3 + j)) * *(float *)(a2 + 4LL * (a3 + j)))
               - (float)(*(float *)(a2 + 4LL * j) * *(float *)(a2 + 4LL * j)));
    if ( v8 >= 1.0 )
      v11 = LODWORD(v8);
    else
      v11 = 1065353216;
    v7 = *(float *)&v11;
  }
  return result;
}


//----- (00000001401B86A0) ----------------------------------------------------
__int64            sub_1401B86A0(__int64 a1, float *a2, unsigned int a3)
{
  __int64 result; // rax
  float v4; // [rsp+0h] [rbp-38h]
  int i; // [rsp+4h] [rbp-34h]
  float v6; // [rsp+8h] [rbp-30h]
  float v7; // [rsp+Ch] [rbp-2Ch]
  float v8; // [rsp+10h] [rbp-28h]
  float v9; // [rsp+14h] [rbp-24h]
  float v10; // [rsp+18h] [rbp-20h]
  float v11; // [rsp+1Ch] [rbp-1Ch]
  float v12; // [rsp+20h] [rbp-18h]
  float v13; // [rsp+24h] [rbp-14h]
  float v14; // [rsp+28h] [rbp-10h]
  float v15; // [rsp+2Ch] [rbp-Ch]

  v11 = *a2;
  v12 = a2[1];
  v13 = a2[2];
  v14 = a2[3];
  v15 = a2[4];
  v9 = 0.0;
  v8 = 0.0;
  v7 = 0.0;
  v6 = 0.0;
  v10 = 0.0;
  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    v4 = (float)((float)((float)((float)(*(float *)(a1 + 4LL * i) + (float)(v11 * v9)) + (float)(v12 * v8))
                       + (float)(v13 * v7))
               + (float)(v14 * v6))
       + (float)(v15 * v10);
    v10 = v6;
    v6 = v7;
    v7 = v8;
    v8 = v9;
    v9 = *(float *)(a1 + 4LL * i);
    *(float *)(a1 + 4LL * i) = v4;
  }
  return result;
}


//----- (00000001401B8890) ----------------------------------------------------
__m128            sub_1401B8890(float a1, float a2, float a3)
{
  float v3; // xmm0_4
  __int128 v4; // xmm1

  v3 = sqrt((float)((float)(a2 * a3) + 1.0));
  v4 = LODWORD(a1);
  *(float *)&v4 = a1 / v3;
  return (__m128)v4;
}


//----- (00000001401B88F0) ----------------------------------------------------
float            sub_1401B88F0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int i; // [rsp+0h] [rbp-28h]
  int v8; // [rsp+4h] [rbp-24h]
  float v9; // [rsp+8h] [rbp-20h]
  float v10; // [rsp+Ch] [rbp-1Ch]

  v9 = 0.0;
  v8 = 0;
  do
  {
    for ( i = a3; i < a4; ++i )
    {
      v10 = *(float *)(a1 + 4LL * (a5 * v8 + i)) - *(float *)(a2 + 4LL * (a5 * v8 + i));
      v9 = v9 + (float)(v10 * v10);
    }
    ++v8;
  }
  while ( v8 < a6 );
  if ( v9 <= 200.0 )
    return v9;
  else
    return 200.0;
}


//----- (00000001401B89F0) ----------------------------------------------------
__int64            sub_1401B89F0(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        _DWORD *a10,
        int a11,
        int a12,
        int a13,
        float a14,
        int a15)
{
  int v16; // [rsp+20h] [rbp-88h] BYREF
  int i; // [rsp+24h] [rbp-84h]
  int v18; // [rsp+28h] [rbp-80h]
  float v19; // [rsp+2Ch] [rbp-7Ch]
  int v20; // [rsp+30h] [rbp-78h]
  float v21; // [rsp+34h] [rbp-74h]
  float v22; // [rsp+38h] [rbp-70h]
  unsigned int v23; // [rsp+3Ch] [rbp-6Ch]
  float v24; // [rsp+40h] [rbp-68h]
  float v25; // [rsp+44h] [rbp-64h]
  float v26; // [rsp+48h] [rbp-60h]
  int v27; // [rsp+4Ch] [rbp-5Ch]
  int v28; // [rsp+50h] [rbp-58h]
  int v29; // [rsp+54h] [rbp-54h]
  int v30; // [rsp+58h] [rbp-50h]
  int v31; // [rsp+5Ch] [rbp-4Ch]
  int v32; // [rsp+60h] [rbp-48h]
  int v33; // [rsp+64h] [rbp-44h]
  int v34; // [rsp+68h] [rbp-40h]
  int v35; // [rsp+6Ch] [rbp-3Ch]
  int v36; // [rsp+70h] [rbp-38h]
  float v37; // [rsp+74h] [rbp-34h]
  float v38; // [rsp+78h] [rbp-30h]
  float v39; // [rsp+7Ch] [rbp-2Ch]
  _DWORD v41[2]; // [rsp+88h] [rbp-20h]
  int v42; // [rsp+90h] [rbp-18h]
  float v43; // [rsp+94h] [rbp-14h]
  int v48; // [rsp+E0h] [rbp+38h]

  v23 = 0;
  v41[0] = 0;
  v41[1] = 0;
  if ( a7 + 3 <= a6 )
    sub_14019A450(a10, a13, 3);
  if ( a13 )
  {
    v21 = 0.0;
    v39 = 0.1499939;
  }
  else
  {
    v39 = flt_14027E488[a12];
    v21 = flt_14027E378[a12];
  }
  for ( i = a2; i < a3; ++i )
  {
    v18 = 0;
    do
    {
      v19 = *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i));
      if ( *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i)) >= -9.0 )
        v24 = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i));
      else
        v24 = -9.0;
      v38 = v24;
      v37 = (float)(v19 - (float)(v21 * v24)) - *(float *)&v41[v18];
      v16 = (int)floor((float)(v37 + 0.5));
      if ( *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i)) >= -28.0 )
        v25 = *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i));
      else
        v25 = -28.0;
      v26 = v25 - a14;
      if ( v16 < 0 && v26 > v19 )
      {
        v16 += (int)(float)(v26 - v19);
        if ( v16 > 0 )
          v16 = 0;
      }
      v42 = v16;
      v48 = sub_14019A0A0((__int64)a10);
      v20 = a6 - v48 - (a3 - i) * 3 * a11;
      if ( i != a2 && v20 < 30 )
      {
        if ( v20 < 24 )
        {
          if ( v16 <= 1 )
            v27 = v16;
          else
            v27 = 1;
          v16 = v27;
        }
        if ( v20 < 16 )
        {
          if ( v16 >= -1 )
            v28 = v16;
          else
            v28 = -1;
          v16 = v28;
        }
      }
      if ( a15 && i >= 2 )
      {
        if ( v16 >= 0 )
          v29 = 0;
        else
          v29 = v16;
        v16 = v29;
      }
      if ( a6 - v48 < 15 )
      {
        if ( a6 - v48 < 2 )
        {
          if ( a6 - v48 < 1 )
          {
            v16 = -1;
          }
          else
          {
            if ( v16 <= 0 )
              v36 = v16;
            else
              v36 = 0;
            v16 = v36;
            sub_14019A450(a10, -v36, 1);
          }
        }
        else
        {
          if ( v16 >= 1 )
            v32 = 1;
          else
            v32 = v16;
          if ( v32 >= -1 )
          {
            if ( v16 >= 1 )
              v33 = 1;
            else
              v33 = v16;
            v34 = v33;
          }
          else
          {
            v34 = -1;
          }
          v16 = v34;
          v35 = v34 < 0;
          sub_14019A4F0(a10, -v35 ^ (2 * v34), (__int64)&unk_14027E374, 2);
        }
      }
      else
      {
        if ( i >= 20 )
          v30 = 20;
        else
          v30 = i;
        v31 = 2 * v30;
        sub_1401B7F80(a10, &v16, *(unsigned __int8 *)(a8 + 2 * v30) << 7, *(unsigned __int8 *)(a8 + 2 * v30 + 1) << 6);
      }
      *(float *)(a9 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i)) = v37 - (float)v16;
      v23 += abs(v42 - v16);
      v22 = (float)v16;
      v43 = (float)((float)(v21 * v38) + *(float *)&v41[v18]) + (float)v16;
      *(float *)(a5 + 4LL * (*(_DWORD *)(a1 + 8) * v18 + i)) = v43;
      *(float *)&v41[v18] = (float)(*(float *)&v41[v18] + v22) - (float)(v39 * v22);
      ++v18;
    }
    while ( v18 < a11 );
  }
  if ( a15 )
    return 0;
  else
    return v23;
}

// 14027E378: using guessed type float flt_14027E378[4];
// 14027E488: using guessed type float flt_14027E488[4];

//----- (00000001401B9070) ----------------------------------------------------
__int64            sub_1401B9070(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int *a10,
        int a11,
        int *a12,
        int a13,
        int *a14,
        int a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        int a19,
        int a20,
        unsigned int *a21,
        int a22,
        int a23,
        int a24)
{
  int v25; // [rsp+20h] [rbp-D8h]
  int v26; // [rsp+20h] [rbp-D8h]
  int v27; // [rsp+20h] [rbp-D8h]
  int k; // [rsp+20h] [rbp-D8h]
  int m; // [rsp+20h] [rbp-D8h]
  int n; // [rsp+20h] [rbp-D8h]
  int j; // [rsp+24h] [rbp-D4h]
  int v32; // [rsp+28h] [rbp-D0h]
  int v33; // [rsp+28h] [rbp-D0h]
  int v34; // [rsp+28h] [rbp-D0h]
  int v35; // [rsp+2Ch] [rbp-CCh]
  int v36; // [rsp+2Ch] [rbp-CCh]
  int v37; // [rsp+30h] [rbp-C8h]
  int v38; // [rsp+34h] [rbp-C4h]
  int v39; // [rsp+38h] [rbp-C0h]
  int v40; // [rsp+3Ch] [rbp-BCh]
  unsigned int v41; // [rsp+40h] [rbp-B8h]
  int v42; // [rsp+44h] [rbp-B4h]
  int v43; // [rsp+48h] [rbp-B0h]
  int v44; // [rsp+48h] [rbp-B0h]
  int v45; // [rsp+4Ch] [rbp-ACh]
  int v46; // [rsp+50h] [rbp-A8h]
  int v47; // [rsp+50h] [rbp-A8h]
  int v48; // [rsp+54h] [rbp-A4h]
  int v49; // [rsp+58h] [rbp-A0h]
  int v50; // [rsp+5Ch] [rbp-9Ch]
  char v51; // [rsp+60h] [rbp-98h]
  int i; // [rsp+64h] [rbp-94h]
  int v53; // [rsp+68h] [rbp-90h]
  int v54; // [rsp+6Ch] [rbp-8Ch]
  int v55; // [rsp+70h] [rbp-88h]
  int v56; // [rsp+78h] [rbp-80h]
  int v57; // [rsp+7Ch] [rbp-7Ch]
  int v58; // [rsp+80h] [rbp-78h]
  int v59; // [rsp+84h] [rbp-74h]
  int v60; // [rsp+88h] [rbp-70h]
  int v61; // [rsp+8Ch] [rbp-6Ch]
  int v62; // [rsp+90h] [rbp-68h]
  int v63; // [rsp+94h] [rbp-64h]
  int v64; // [rsp+98h] [rbp-60h]
  int v65; // [rsp+9Ch] [rbp-5Ch]
  int v66; // [rsp+A4h] [rbp-54h]
  BOOL v67; // [rsp+A8h] [rbp-50h]
  int v68; // [rsp+ACh] [rbp-4Ch]
  int v69; // [rsp+B0h] [rbp-48h]
  int v70; // [rsp+B8h] [rbp-40h]
  int v71; // [rsp+BCh] [rbp-3Ch]
  int v72; // [rsp+C8h] [rbp-30h]
  int v73; // [rsp+D4h] [rbp-24h]
  int v74; // [rsp+DCh] [rbp-1Ch]

  v40 = 8 * a19;
  v51 = a19 > 1;
  v54 = 0;
  v57 = 64;
  for ( i = 0; i < 6; ++i )
  {
    v53 = (v57 + v54) >> 1;
    v32 = 0;
    v43 = 0;
    v25 = a3;
    while ( 1 )
    {
      v73 = v25--;
      if ( v73 <= a2 )
        break;
      v48 = *(_DWORD *)(a5 + 4LL * v25) + ((*(_DWORD *)(a6 + 4LL * v25) * v53) >> 6);
      if ( v48 >= *(_DWORD *)(a7 + 4LL * v25) || v43 )
      {
        v43 = 1;
        if ( v48 >= *(_DWORD *)(a8 + 4LL * v25) )
          v56 = *(_DWORD *)(a8 + 4LL * v25);
        else
          v56 = *(_DWORD *)(a5 + 4LL * v25) + ((*(_DWORD *)(a6 + 4LL * v25) * v53) >> 6);
        v32 += v56;
      }
      else if ( v48 >= v40 )
      {
        v32 += v40;
      }
    }
    if ( v32 <= a9 )
      v54 = (v57 + v54) >> 1;
    else
      v57 = (v57 + v54) >> 1;
  }
  v33 = 0;
  v44 = 0;
  v26 = a3;
  while ( 1 )
  {
    v74 = v26--;
    if ( v74 <= a2 )
      break;
    v39 = *(_DWORD *)(a5 + 4LL * v26) + ((*(_DWORD *)(a6 + 4LL * v26) * v54) >> 6);
    if ( v39 >= *(_DWORD *)(a7 + 4LL * v26) || v44 )
    {
      v44 = 1;
    }
    else if ( v39 < v40 )
    {
      v39 = 0;
    }
    else
    {
      v39 = 8 * a19;
    }
    if ( v39 >= *(_DWORD *)(a8 + 4LL * v26) )
      v58 = *(_DWORD *)(a8 + 4LL * v26);
    else
      v58 = v39;
    *(_DWORD *)(a16 + 4LL * v26) = v58;
    v33 += v58;
  }
  for ( j = a3; ; --j )
  {
    v27 = j - 1;
    if ( j - 1 <= a4 )
    {
      a9 += a11;
      goto LABEL_60;
    }
    v46 = sub_14019A1A0(
            a9 - v33,
            *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
    v35 = a9
        - v33
        - v46 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
    v59 = v35 - (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * v27) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2)) <= 0
        ? 0
        : v35 - (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * v27) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
    v63 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * v27);
    v45 = v59 + v63 * v46 + *(_DWORD *)(a16 + 4LL * v27);
    v60 = *(_DWORD *)(a7 + 4LL * v27) <= v40 + 8 ? v40 + 8 : *(_DWORD *)(a7 + 4LL * v27);
    if ( v45 >= v60 )
      break;
LABEL_55:
    v34 = v33 - (a13 + *(_DWORD *)(a16 + 4LL * v27));
    if ( a13 > 0 )
      a13 = byte_14027E388[v27 - a2];
    v33 = a13 + v34;
    if ( v45 < v40 )
    {
      *(_DWORD *)(a16 + 4LL * v27) = 0;
    }
    else
    {
      v33 += v40;
      *(_DWORD *)(a16 + 4LL * v27) = v40;
    }
  }
  if ( !a22 )
  {
    if ( sub_14019AF20(a21, 1) )
      goto LABEL_60;
    goto LABEL_54;
  }
  if ( j <= 17 )
  {
    v62 = 0;
  }
  else
  {
    if ( v27 >= a23 )
      v61 = 9;
    else
      v61 = 7;
    v62 = v61;
  }
  if ( j > a2 + 2 && (v45 <= (8 * ((v63 * v62) << a20)) >> 4 || v27 > a24) )
  {
    sub_14019A450(a21, 0, 1);
LABEL_54:
    v33 += 8;
    v45 -= 8;
    goto LABEL_55;
  }
  sub_14019A450(a21, 1, 1);
LABEL_60:
  if ( a13 <= 0 )
  {
    *a12 = 0;
  }
  else if ( a22 )
  {
    if ( *a12 >= j )
      v64 = j;
    else
      v64 = *a12;
    *a12 = v64;
    sub_14019A5E0(a21, *a12 - a2, j + 1 - a2);
  }
  else
  {
    *a12 = sub_14019B0A0(a21, j + 1 - a2) + a2;
  }
  if ( *a12 <= a2 )
  {
    a9 += a15;
    a15 = 0;
  }
  if ( a15 <= 0 )
  {
    *a14 = 0;
  }
  else if ( a22 )
  {
    sub_14019A450(a21, *a14, 1);
  }
  else
  {
    *a14 = sub_14019AF20(a21, 1);
  }
  v47 = sub_14019A1A0(
          a9 - v33,
          *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
  v36 = a9 - v33 - v47 * (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * j) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * a2));
  for ( k = a2; k < j; ++k )
    *(_DWORD *)(a16 + 4LL * k) += (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (k + 1))
                                 - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * k))
                                * v47;
  for ( m = a2; m < j; ++m )
  {
    if ( v36 >= *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (m + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * m) )
      v65 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (m + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * m);
    else
      v65 = v36;
    *(_DWORD *)(a16 + 4LL * m) += v65;
    v36 -= v65;
  }
  v50 = 0;
  for ( n = a2; n < j; ++n )
  {
    v49 = (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (n + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * n)) << a20;
    v42 = v50 + *(_DWORD *)(a16 + 4LL * n);
    if ( v49 <= 1 )
    {
      if ( v42 - 8 * a19 >= 0 )
        v70 = v42 - 8 * a19;
      else
        v70 = 0;
      v38 = v70;
      *(_DWORD *)(a16 + 4LL * n) = v42 - v70;
      *(_DWORD *)(a17 + 4LL * n) = 0;
      *(_DWORD *)(a18 + 4LL * n) = 1;
    }
    else
    {
      if ( v42 - *(_DWORD *)(a8 + 4LL * n) <= 0 )
        v66 = 0;
      else
        v66 = v42 - *(_DWORD *)(a8 + 4LL * n);
      v38 = v66;
      *(_DWORD *)(a16 + 4LL * n) = v42 - v66;
      v67 = a19 == 2 && v49 > 2 && !*a14 && n < *a12;
      v41 = v67 + v49 * a19;
      v55 = (8 * a20 + *(__int16 *)(*(_QWORD *)(a1 + 64) + 2LL * n)) * v41;
      v37 = (v55 >> 1) - 21 * v41;
      if ( v49 == 2 )
        v37 += (int)(8 * v41) >> 2;
      if ( v37 + *(_DWORD *)(a16 + 4LL * n) >= (int)(16 * v41) )
      {
        if ( v37 + *(_DWORD *)(a16 + 4LL * n) < (int)(24 * v41) )
          v37 += v55 >> 3;
      }
      else
      {
        v37 += v55 >> 2;
      }
      if ( (int)(v37 + *(_DWORD *)(a16 + 4LL * n) + 4 * v41) >= 0 )
        v68 = v37 + *(_DWORD *)(a16 + 4LL * n) + 4 * v41;
      else
        v68 = 0;
      *(_DWORD *)(a17 + 4LL * n) = v68;
      *(_DWORD *)(a17 + 4LL * n) = (unsigned int)sub_14019A1A0(*(_DWORD *)(a17 + 4LL * n), v41) >> 3;
      if ( *(_DWORD *)(a17 + 4LL * n) * a19 > *(int *)(a16 + 4LL * n) >> 3 )
        *(_DWORD *)(a17 + 4LL * n) = *(int *)(a16 + 4LL * n) >> v51 >> 3;
      if ( *(int *)(a17 + 4LL * n) >= 8 )
        v69 = 8;
      else
        v69 = *(_DWORD *)(a17 + 4LL * n);
      *(_DWORD *)(a17 + 4LL * n) = v69;
      *(_DWORD *)(a18 + 4LL * n) = (int)(8 * v41 * *(_DWORD *)(a17 + 4LL * n)) >= v37 + *(_DWORD *)(a16 + 4LL * n);
      *(_DWORD *)(a16 + 4LL * n) -= 8 * *(_DWORD *)(a17 + 4LL * n) * a19;
    }
    if ( v38 > 0 )
    {
      if ( v38 >> (v51 + 3) >= 8 - *(_DWORD *)(a17 + 4LL * n) )
        v71 = 8 - *(_DWORD *)(a17 + 4LL * n);
      else
        v71 = v38 >> (v51 + 3);
      *(_DWORD *)(a17 + 4LL * n) += v71;
      v72 = 8 * a19 * v71;
      *(_DWORD *)(a18 + 4LL * n) = v72 >= v38 - v50;
      v38 -= v72;
    }
    v50 = v38;
  }
  *a10 = v50;
  while ( n < a3 )
  {
    *(_DWORD *)(a17 + 4LL * n) = *(int *)(a16 + 4LL * n) >> v51 >> 3;
    *(_DWORD *)(a16 + 4LL * n) = 0;
    *(_DWORD *)(a18 + 4LL * n) = *(_DWORD *)(a17 + 4LL * n) < 1;
    ++n;
  }
  return (unsigned int)j;
}

// 14027E388: using guessed type unsigned __int8 byte_14027E388[24];

//----- (00000001401BA120) ----------------------------------------------------
__int64            sub_1401BA120(float *a1, int a2, int a3, float a4, float a5)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  int j; // [rsp+0h] [rbp-28h]
  float v8; // [rsp+4h] [rbp-24h]
  float v9; // [rsp+8h] [rbp-20h]
  float v10; // [rsp+Ch] [rbp-1Ch]
  float v11; // [rsp+10h] [rbp-18h]
  float v12; // [rsp+14h] [rbp-14h]
  float *v13; // [rsp+18h] [rbp-10h]
  float *v14; // [rsp+18h] [rbp-10h]

  v13 = a1;
  v11 = -a5;
  for ( i = 0; i < a2 - a3; ++i )
  {
    v8 = *v13;
    v9 = v13[a3];
    v13[a3] = (float)(a4 * v9) + (float)(a5 * *v13);
    *v13++ = (float)(a4 * v8) + (float)(v11 * v9);
  }
  v14 = &a1[a2 - 2 * a3 - 1];
  result = (unsigned int)(a2 - 2 * a3 - 1);
  for ( j = a2 - 2 * a3 - 1; j >= 0; --j )
  {
    v10 = *v14;
    v12 = v14[a3];
    v14[a3] = (float)(a4 * v12) + (float)(a5 * *v14);
    *v14-- = (float)(a4 * v10) + (float)(v11 * v12);
    result = (unsigned int)(j - 1);
  }
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401BA2F0) ----------------------------------------------------
__int64            sub_1401BA2F0(__int64 a1, __int64 a2, unsigned int a3, float a4, float a5)
{
  float v5; // xmm0_4
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-18h]

  v5 = sqrt(a4);
  v7 = 0;
  do
  {
    *(float *)(a2 + 4LL * v7) = (float)((float)(1.0 / v5) * a5) * (float)*(int *)(a1 + 4LL * v7);
    ++v7;
    result = a3;
  }
  while ( v7 < (int)a3 );
  return result;
}


//----- (00000001401BA3A0) ----------------------------------------------------
__int64            sub_1401BA3A0(__int64 a1, unsigned int a2, signed int a3)
{
  signed int v4; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+24h] [rbp-24h]
  int v6; // [rsp+28h] [rbp-20h]
  unsigned int v7; // [rsp+2Ch] [rbp-1Ch]
  int v8; // [rsp+30h] [rbp-18h]

  if ( a3 <= 1 )
    return 1;
  v8 = sub_14019A1A0(a2, a3);
  v7 = 0;
  v4 = 0;
  do
  {
    v6 = 0;
    v5 = 0;
    do
    {
      v6 |= *(_DWORD *)(a1 + 4LL * (v5 + v8 * v4));
      ++v5;
    }
    while ( v5 < v8 );
    v7 |= (v6 != 0) << v4++;
  }
  while ( v4 < a3 );
  return v7;
}


//----- (00000001401BA490) ----------------------------------------------------
__int64            sub_1401BA490(unsigned int a1)
{
  if ( a1 )
    return (unsigned int)(32 - (sub_14019A020(a1) + 1));
  else
    return 32;
}


//----- (00000001401BA4E0) ----------------------------------------------------
__int64            sub_1401BA4E0(__int64 a1, int a2, int a3, int a4)
{
  char v5; // [rsp+20h] [rbp-38h]

  sub_1401FCD30((void *)(uintptr_t)((_WORD *)a1), 0, 0x130u);
  if ( a4 )
  {
    if ( a2 != 8000 && a2 != 12000 && a2 != 16000 && a2 != 24000 && a2 != 48000
      || a3 != 8000 && a3 != 12000 && a3 != 16000 )
    {
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a1 + 292) = byte_1402821D0[3 * (((a2 >> 12) - (a2 > 16000)) >> (a2 > 24000))
                                         - 4
                                         + (((a3 >> 12) - (a3 > 16000)) >> (a3 > 24000))];
  }
  else
  {
    if ( a2 != 8000 && a2 != 12000 && a2 != 16000
      || a3 != 8000 && a3 != 12000 && a3 != 16000 && a3 != 24000 && a3 != 48000 )
    {
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a1 + 292) = byte_1402821E0[5 * (((a2 >> 12) - (a2 > 16000)) >> (a2 > 24000))
                                         - 6
                                         + (((a3 >> 12) - (a3 > 16000)) >> (a3 > 24000))];
  }
  *(_DWORD *)(a1 + 284) = a2 / 1000;
  *(_DWORD *)(a1 + 288) = a3 / 1000;
  *(_DWORD *)(a1 + 268) = 10 * *(_DWORD *)(a1 + 284);
  v5 = 0;
  if ( a3 <= a2 )
  {
    if ( a3 >= a2 )
    {
      *(_DWORD *)(a1 + 264) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 264) = 3;
      if ( 4 * a3 == 3 * a2 )
      {
        *(_DWORD *)(a1 + 280) = 3;
        *(_DWORD *)(a1 + 276) = 18;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_140282100);
      }
      else if ( 3 * a3 == 2 * a2 )
      {
        *(_DWORD *)(a1 + 280) = 2;
        *(_DWORD *)(a1 + 276) = 18;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_14027FFE8);
      }
      else if ( 2 * a3 == a2 )
      {
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 24;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_140282140);
      }
      else if ( 3 * a3 == a2 )
      {
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 36;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_140280058);
      }
      else if ( 4 * a3 == a2 )
      {
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 36;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_1402800C8);
      }
      else
      {
        if ( 6 * a3 != a2 )
          return 0xFFFFFFFFLL;
        *(_DWORD *)(a1 + 280) = 1;
        *(_DWORD *)(a1 + 276) = 36;
        *(_QWORD *)(a1 + 296) = (uint64)(uintptr_t)(&unk_140280138);
      }
    }
  }
  else if ( a3 == 2 * a2 )
  {
    *(_DWORD *)(a1 + 264) = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 264) = 2;
    v5 = 1;
  }
  for ( *(_DWORD *)(a1 + 272) = 4 * ((a2 << (v5 + 14)) / a3);
        (int)((a3 * (__int64)*(int *)(a1 + 272)) >> 16) < a2 << v5;
        ++*(_DWORD *)(a1 + 272) )
  {
    ;
  }
  return 0;
}


//----- (00000001401BAA30) ----------------------------------------------------
__int64            sub_1401BAA30(_DWORD *a1, __m128i *a2,      __m128i *a3, int a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+24h] [rbp-24h]

  v5 = a1[71] - a1[73];
  sub_1401FC920((__m128i *)((char *)a1 + 2 * a1[73] + 168), a3, 2LL * v5);
  v6 = a1[66];
  switch ( v6 )
  {
    case 1:
      sub_1401DD350(a1, (__int64)a2, (__int64)(a1 + 42), a1[71]);
      sub_1401DD350(a1, (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 2 * a1[72], (__int64)SR_VEC_PTR_LANES(128, a3, i64) + 2 * v5, a4 - a1[71]);
      break;
    case 2:
      sub_1401DCF80((__int64)a1, SR_VEC_PTR_LANES(128, a2, i16), (__int64)(a1 + 42), a1[71]);
      sub_1401DCF80((__int64)a1, &SR_VEC_PTR_LANES(128, a2, i16)[a1[72]], (__int64)SR_VEC_PTR_LANES(128, a3, i64) + 2 * v5, a4 - a1[71]);
      break;
    case 3:
      sub_1401DD130((__int64)a1, SR_VEC_PTR_LANES(128, a2, i16), (__int64)(a1 + 42), a1[71]);
      sub_1401DD130((__int64)a1, &SR_VEC_PTR_LANES(128, a2, i16)[a1[72]], (__int64)SR_VEC_PTR_LANES(128, a3, i64) + 2 * v5, a4 - a1[71]);
      break;
    default:
      sub_1401FC920(a2, (     __m128i *)(a1 + 42), 2LL * (int)a1[71]);
      sub_1401FC920(
        (__m128i *)((char *)a2 + 2 * a1[72]),
        (     __m128i *)((char *)a3 + 2 * v5),
        2LL * (a4 - a1[71]));
      break;
  }
  sub_1401FC920((__m128i *)(a1 + 42), (     __m128i *)((char *)a3 + 2 * (a4 - a1[73])), 2LL * (int)a1[73]);
  return 0;
}


//----- (00000001401BAD00) ----------------------------------------------------
__int64            sub_1401BAD00(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int v5; // [rsp+0h] [rbp-28h]
  int v6; // [rsp+0h] [rbp-28h]
  int i; // [rsp+4h] [rbp-24h]
  int v8; // [rsp+8h] [rbp-20h]
  int v9; // [rsp+8h] [rbp-20h]
  int v10; // [rsp+Ch] [rbp-1Ch]
  int v11; // [rsp+Ch] [rbp-1Ch]
  int v12; // [rsp+14h] [rbp-14h]
  __int16 v13; // [rsp+18h] [rbp-10h]
  int v14; // [rsp+1Ch] [rbp-Ch]

  v14 = a4 >> 1;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)v14;
    if ( i >= v14 )
      break;
    v10 = *(__int16 *)(a3 + 4LL * i) << 10;
    v8 = ((-25727LL * (v10 - *a1)) >> 16) + v10 - *a1;
    v5 = v8 + *a1;
    *a1 = v8 + v10;
    v11 = *(__int16 *)(a3 + 2LL * (2 * i + 1)) << 10;
    v9 = (9872LL * (v11 - a1[1])) >> 16;
    v6 = v9 + a1[1] + v5;
    a1[1] = v9 + v11;
    if ( ((v6 >> 10) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v6 >> 10) + 1) >> 1 >= -32768 )
        v12 = ((v6 >> 10) + 1) >> 1;
      else
        LOWORD(v12) = 0x8000;
      v13 = v12;
    }
    else
    {
      v13 = 0x7FFF;
    }
    *(_WORD *)(a2 + 2LL * i) = v13;
  }
  return result;
}


//----- (00000001401BAEE0) ----------------------------------------------------
__int64            sub_1401BAEE0(__m128i *a1, _WORD *a2, __int64 a3, int a4)
{
  void *v4; // rsp
  __m128i v6[118]; // [rsp-760h] [rbp-790h] BYREF
  int v7; // [rsp+30h] [rbp+0h] BYREF
  signed int v8; // [rsp+34h] [rbp+4h]
  __m128i *v9; // [rsp+38h] [rbp+8h]
  int i; // [rsp+40h] [rbp+10h]
  __m128i *v11; // [rsp+48h] [rbp+18h]
  signed int v12; // [rsp+50h] [rbp+20h]
  int v13; // [rsp+54h] [rbp+24h]
  int v14; // [rsp+58h] [rbp+28h]
  int v15; // [rsp+5Ch] [rbp+2Ch]
  int v16; // [rsp+60h] [rbp+30h]
  __int64 v17; // [rsp+68h] [rbp+38h]
  _WORD *v20; // [rsp+88h] [rbp+58h]

  v4 = alloca(1936);
  v11 = v6;
  sub_1401FC920(v6, a1, 0x10u);
  while ( 1 )
  {
    v12 = a4 >= 480 ? 480 : a4;
    v8 = v12;
    sub_1401DD7A0((__m128i *)SR_VEC_LANES(128, a1[1], i32), (__int64)SR_VEC_LANES(128, v11[1], i64), a3, word_140282160, v12);
    v9 = v11;
    for ( i = v8; i > 2; i -= 3 )
    {
      v7 = (unk_140282164 * (__int64)SR_VEC_PTR_LANES(128, v9, i32)[0]) >> 16;
      v7 += (unk_140282166 * (__int64)SR_VEC_PTR_LANES(128, v9, i32)[1]) >> 16;
      v7 += (unk_14028216A * (__int64)SR_VEC_PTR_LANES(128, v9, i32)[2]) >> 16;
      v7 += (unk_140282168 * (__int64)SR_VEC_PTR_LANES(128, v9, i32)[3]) >> 16;
      if ( ((v7 >> 5) + 1) >> 1 <= 0x7FFF )
      {
        if ( ((v7 >> 5) + 1) >> 1 >= -32768 )
          v13 = ((v7 >> 5) + 1) >> 1;
        else
          v13 = -32768;
        v14 = v13;
      }
      else
      {
        v14 = 0x7FFF;
      }
      *a2 = v14;
      v20 = a2 + 1;
      v7 = (unk_140282168 * (__int64)SR_VEC_PTR_LANES(128, v9, i32)[1]) >> 16;
      v7 += (unk_14028216A * (__int64)SR_VEC_PTR_LANES(128, v9, i32)[2]) >> 16;
      v7 += (unk_140282166 * (__int64)SR_VEC_PTR_LANES(128, v9, i32)[3]) >> 16;
      v7 += (unk_140282164 * (__int64)SR_VEC_LANES(128, v9[1], i32)[0]) >> 16;
      if ( ((v7 >> 5) + 1) >> 1 <= 0x7FFF )
      {
        if ( ((v7 >> 5) + 1) >> 1 >= -32768 )
          v15 = ((v7 >> 5) + 1) >> 1;
        else
          v15 = -32768;
        v16 = v15;
      }
      else
      {
        v16 = 0x7FFF;
      }
      *v20 = v16;
      a2 = v20 + 1;
      v9 = (__m128i *)((char *)v9 + 12);
    }
    a3 += 2LL * v8;
    a4 -= v8;
    if ( a4 <= 0 )
      break;
    sub_1401FC920(v11, (__m128i *)((char *)v11 + 4 * v8), 0x10u);
  }
  return sub_1401FC920(a1, (__m128i *)((char *)v11 + 4 * v8), 0x10u); /* 0x1401BB2A1: the result of this call is still in rax at the exit */
}

// 140282160: using guessed type __int16 word_140282160[2];

//----- (00000001401BB2C0) ----------------------------------------------------
__int64            sub_1401BB2C0(__int64 a1, int *a2, _DWORD *a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 result; // rax
  int v7; // [rsp+0h] [rbp-38h]
  signed int i; // [rsp+4h] [rbp-34h]
  __int16 v9; // [rsp+8h] [rbp-30h]
  int v10; // [rsp+Ch] [rbp-2Ch]
  __int16 v11; // [rsp+10h] [rbp-28h]
  int v12; // [rsp+14h] [rbp-24h]
  int v13; // [rsp+18h] [rbp-20h]
  int v14; // [rsp+1Ch] [rbp-1Ch]
  int v15; // [rsp+20h] [rbp-18h]

  v12 = -*a3 & 0x3FFF;
  v13 = -*a3 >> 14;
  v14 = -a3[1] & 0x3FFF;
  v15 = -a3[1] >> 14;
  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    v9 = *(_WORD *)(a1 + 2LL * i);
    v7 = 4 * (((v9 * (__int64)*a2) >> 16) + *a4);
    *a4 = a4[1] + ((((int)(((__int16)v12 * (__int64)v7) >> 16) >> 13) + 1) >> 1);
    *a4 += ((__int16)v13 * (__int64)v7) >> 16;
    *a4 += (v9 * (__int64)a2[1]) >> 16;
    a4[1] = (((int)(((__int16)v14 * (__int64)v7) >> 16) >> 13) + 1) >> 1;
    a4[1] += ((__int16)v15 * (__int64)v7) >> 16;
    a4[1] += (v9 * (__int64)a2[2]) >> 16;
    if ( (v7 + 0x3FFF) >> 14 <= 0x7FFF )
    {
      if ( (v7 + 0x3FFF) >> 14 >= -32768 )
        v10 = (v7 + 0x3FFF) >> 14;
      else
        LOWORD(v10) = 0x8000;
      v11 = v10;
    }
    else
    {
      v11 = 0x7FFF;
    }
    *(_WORD *)(a5 + 2LL * i) = v11;
  }
  return result;
}


//----- (00000001401BB590) ----------------------------------------------------
__int64            sub_1401BB590(__int64 a1, int *a2, _DWORD *a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 result; // rax
  signed int i; // [rsp+0h] [rbp-38h]
  int v8; // [rsp+8h] [rbp-30h]
  int v9; // [rsp+Ch] [rbp-2Ch]
  int v10; // [rsp+10h] [rbp-28h]
  int v11; // [rsp+14h] [rbp-24h]
  int v12; // [rsp+18h] [rbp-20h]
  int v13; // [rsp+1Ch] [rbp-1Ch]
  int v14; // [rsp+20h] [rbp-18h]
  __int16 v15; // [rsp+24h] [rbp-14h]
  int v16; // [rsp+28h] [rbp-10h]
  __int16 v17; // [rsp+2Ch] [rbp-Ch]

  v10 = -*a3 & 0x3FFF;
  v11 = -*a3 >> 14;
  v12 = -a3[1] & 0x3FFF;
  v13 = -a3[1] >> 14;
  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    v8 = 4 * (((*(__int16 *)(a1 + 4LL * i) * (__int64)*a2) >> 16) + *a4);
    v9 = 4 * (((*(__int16 *)(a1 + 2LL * (2 * i + 1)) * (__int64)*a2) >> 16) + a4[2]);
    *a4 = a4[1] + ((((int)(((__int16)v10 * (__int64)v8) >> 16) >> 13) + 1) >> 1);
    a4[2] = a4[3] + ((((int)(((__int16)v10 * (__int64)v9) >> 16) >> 13) + 1) >> 1);
    *a4 += ((__int16)v11 * (__int64)v8) >> 16;
    a4[2] += ((__int16)v11 * (__int64)v9) >> 16;
    *a4 += (*(__int16 *)(a1 + 4LL * i) * (__int64)a2[1]) >> 16;
    a4[2] += (*(__int16 *)(a1 + 2LL * (2 * i + 1)) * (__int64)a2[1]) >> 16;
    a4[1] = (((int)(((__int16)v12 * (__int64)v8) >> 16) >> 13) + 1) >> 1;
    a4[3] = (((int)(((__int16)v12 * (__int64)v9) >> 16) >> 13) + 1) >> 1;
    a4[1] += ((__int16)v13 * (__int64)v8) >> 16;
    a4[3] += ((__int16)v13 * (__int64)v9) >> 16;
    a4[1] += (*(__int16 *)(a1 + 4LL * i) * (__int64)a2[2]) >> 16;
    a4[3] += (*(__int16 *)(a1 + 2LL * (2 * i + 1)) * (__int64)a2[2]) >> 16;
    if ( (v8 + 0x3FFF) >> 14 <= 0x7FFF )
    {
      if ( (v8 + 0x3FFF) >> 14 >= -32768 )
        v14 = (v8 + 0x3FFF) >> 14;
      else
        LOWORD(v14) = 0x8000;
      v15 = v14;
    }
    else
    {
      v15 = 0x7FFF;
    }
    *(_WORD *)(a5 + 4LL * i) = v15;
    if ( (v9 + 0x3FFF) >> 14 <= 0x7FFF )
    {
      if ( (v9 + 0x3FFF) >> 14 >= -32768 )
        v16 = (v9 + 0x3FFF) >> 14;
      else
        LOWORD(v16) = 0x8000;
      v17 = v16;
    }
    else
    {
      v17 = 0x7FFF;
    }
    *(_WORD *)(a5 + 2LL * (2 * i + 1)) = v17;
  }
  return result;
}


//----- (00000001401BBB40) ----------------------------------------------------
_WORD *           sub_1401BBB40(_WORD *a1, __int64 a2, __int16 *a3, int a4, int a5)
{
  int v6; // [rsp+20h] [rbp-28h]
  int j; // [rsp+24h] [rbp-24h]
  int i; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  int v10; // [rsp+30h] [rbp-18h]
  __int16 v11; // [rsp+34h] [rbp-14h]
  __int16 *v12; // [rsp+38h] [rbp-10h]

  for ( i = a5; i < a4; ++i )
  {
    v12 = (__int16 *)(a2 + 2LL * (i - 1));
    v6 = a3[5] * *(v12 - 5)
       + a3[4] * *(v12 - 4)
       + a3[3] * *(v12 - 3)
       + a3[2] * *(v12 - 2)
       + a3[1] * *(v12 - 1)
       + *a3 * *v12;
    for ( j = 6; j < a5; j += 2 )
      v6 += a3[j + 1] * v12[-j - 1] + a3[j] * v12[-j];
    v9 = ((((v12[1] << 12) - v6) >> 11) + 1) >> 1;
    if ( v9 <= 0x7FFF )
    {
      if ( v9 >= -32768 )
        v10 = ((((v12[1] << 12) - v6) >> 11) + 1) >> 1;
      else
        LOWORD(v10) = 0x8000;
      v11 = v10;
    }
    else
    {
      v11 = 0x7FFF;
    }
    a1[i] = v11;
  }
  return sub_1401FCD30((void *)(uintptr_t)(a1), 0, 2LL * a5);
}


//----- (00000001401BBDE0) ----------------------------------------------------
__int64            sub_1401BBDE0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int v5; // [rsp+30h] [rbp+18h]

  v5 = a3;
  for ( i = 0; i < a2 - 1; ++i )
  {
    *(_WORD *)(a1 + 2LL * i) = (((*(__int16 *)(a1 + 2LL * i) * v5) >> 15) + 1) >> 1;
    v5 += ((((a3 - 0x10000) * v5) >> 15) + 1) >> 1;
  }
  result = (unsigned int)((((*(__int16 *)(a1 + 2LL * (a2 - 1)) * v5) >> 15) + 1) >> 1);
  *(_WORD *)(a1 + 2LL * (a2 - 1)) = result;
  return result;
}


//----- (00000001401BBEB0) ----------------------------------------------------
__int64            sub_1401BBEB0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int v5; // [rsp+30h] [rbp+18h]

  v5 = a3;
  for ( i = 0; i < a2 - 1; ++i )
  {
    *(_DWORD *)(a1 + 4LL * i) = (*(int *)(a1 + 4LL * i) * (__int64)v5) >> 16;
    v5 += ((((a3 - 0x10000) * v5) >> 15) + 1) >> 1;
  }
  result = (*(int *)(a1 + 4LL * (a2 - 1)) * (__int64)v5) >> 16;
  *(_DWORD *)(a1 + 4LL * (a2 - 1)) = result;
  return result;
}


//----- (00000001401BBF70) ----------------------------------------------------
__int64            sub_1401BBF70(__int64 a1, int a2)
{
  __int64 v3; // [rsp+0h] [rbp-A8h] BYREF
  int i; // [rsp+20h] [rbp-88h]
  int v5; // [rsp+24h] [rbp-84h]
  _DWORD v6[24]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v7; // [rsp+90h] [rbp-18h]

  v5 = 0;
  for ( i = 0; i < a2; ++i )
  {
    v5 += *(__int16 *)(a1 + 2LL * i);
    v6[i] = *(__int16 *)(a1 + 2LL * i) << 12;
  }
  if ( v5 < 4096 )
    return sub_1401DC4C0(v6, a2); /* 0x1401BC011: the call's result stays in rax */
  return 0; /* 0x1401BC001: xor eax, eax */
}


//----- (00000001401BC040) ----------------------------------------------------
__int64            sub_1401BC040(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-38h]
  int v7; // [rsp+4h] [rbp-34h]
  int v8; // [rsp+8h] [rbp-30h]
  int v9; // [rsp+Ch] [rbp-2Ch]
  int v10; // [rsp+Ch] [rbp-2Ch]
  int v11; // [rsp+10h] [rbp-28h]
  int v12; // [rsp+10h] [rbp-28h]
  int v13; // [rsp+18h] [rbp-20h]
  __int16 v14; // [rsp+1Ch] [rbp-1Ch]
  int v15; // [rsp+20h] [rbp-18h]
  __int16 v16; // [rsp+24h] [rbp-14h]
  int v17; // [rsp+28h] [rbp-10h]

  v17 = a5 >> 1;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)v17;
    if ( i >= v17 )
      break;
    v11 = *(__int16 *)(a1 + 4LL * i) << 10;
    v9 = ((word_140301FEC * (__int64)(v11 - *a2)) >> 16) + v11 - *a2;
    v7 = v9 + *a2;
    *a2 = v9 + v11;
    v12 = *(__int16 *)(a1 + 2LL * (2 * i + 1)) << 10;
    v10 = (word_140301FE8 * (__int64)(v12 - a2[1])) >> 16;
    v8 = v10 + a2[1];
    a2[1] = v10 + v12;
    if ( (((v7 + v8) >> 10) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((v7 + v8) >> 10) + 1) >> 1 >= -32768 )
        v13 = (((v7 + v8) >> 10) + 1) >> 1;
      else
        LOWORD(v13) = 0x8000;
      v14 = v13;
    }
    else
    {
      v14 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * i) = v14;
    if ( (((v8 - v7) >> 10) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((v8 - v7) >> 10) + 1) >> 1 >= -32768 )
        v15 = (((v8 - v7) >> 10) + 1) >> 1;
      else
        LOWORD(v15) = 0x8000;
      v16 = v15;
    }
    else
    {
      v16 = 0x7FFF;
    }
    *(_WORD *)(a4 + 2LL * i) = v16;
  }
  return result;
}

// 140301FE8: using guessed type __int16 word_140301FE8;
// 140301FEC: using guessed type __int16 word_140301FEC;

//----- (00000001401BC2A0) ----------------------------------------------------
__int64            sub_1401BC2A0(unsigned int a1)
{
  int v2; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v3[5]; // [rsp+24h] [rbp-14h] BYREF

  sub_1401BE460(a1, v3, &v2);
  return ((31 - v3[0]) << 7) + (unsigned int)((179LL * (128 - v2) * v2) >> 16) + v2;
}


//----- (00000001401BC300) ----------------------------------------------------
__int64            sub_1401BC300(int a1)
{
  if ( a1 >= 0 )
  {
    if ( a1 < 192 )
      return dword_140281F88[a1 >> 5] + (a1 & 0x1Fu) * word_1402801A8[2 * (a1 >> 5)];
    else
      return 0x7FFF;
  }
  else if ( -a1 < 192 )
  {
    return dword_140282200[-a1 >> 5] - (-(char)a1 & 0x1Fu) * word_1402801A8[2 * (-a1 >> 5)];
  }
  else
  {
    return 0;
  }
}

// 1402801A8: using guessed type __int16 word_1402801A8[12];
// 140281F88: using guessed type _DWORD dword_140281F88[6];
// 140282200: using guessed type _DWORD dword_140282200[6];

//----- (00000001401BC3D0) ----------------------------------------------------
__int64            sub_1401BC3D0(int a1)
{
  int v2; // eax
  int v3; // [rsp+0h] [rbp-18h]

  if ( a1 < 0 )
    return 0;
  if ( a1 >= 3967 )
    return 0x7FFFFFFF;
  v3 = 1 << (a1 >> 7);
  if ( a1 >= 2048 )
    v2 = (((-174LL * (__int16)(128 - (a1 & 0x7F)) * (a1 & 0x7F)) >> 16) + (a1 & 0x7F)) * (v3 >> 7);
  else
    v2 = (int)((((-174LL * (__int16)(128 - (a1 & 0x7F)) * (a1 & 0x7F)) >> 16) + (a1 & 0x7F)) * v3) >> 7;
  return (unsigned int)(v2 + v3);
}


//----- (00000001401BC4C0) ----------------------------------------------------
_DWORD *           sub_1401BC4C0(_DWORD *a1, _DWORD *a2, __int64 a3, signed int a4)
{
  int v4; // eax
  signed int i; // [rsp+20h] [rbp-28h]
  signed int j; // [rsp+20h] [rbp-28h]
  unsigned int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+2Ch] [rbp-1Ch]
  int v11; // [rsp+2Ch] [rbp-1Ch]

  v10 = 31 - sub_1401BA490(a4);
  v8 = a4;
  for ( i = 0; i < a4 - 1; i += 2 )
    v8 += (unsigned int)(*(__int16 *)(a3 + 2LL * (i + 1)) * *(__int16 *)(a3 + 2LL * (i + 1))
                       + *(__int16 *)(a3 + 2LL * i) * *(__int16 *)(a3 + 2LL * i)) >> v10;
  if ( i < a4 )
    v8 += (unsigned int)(*(__int16 *)(a3 + 2LL * i) * *(__int16 *)(a3 + 2LL * i)) >> v10;
  v4 = sub_1401BA490(v8);
  v11 = sub_1401BE420(0, v10 + 3 - v4);
  v9 = 0;
  for ( j = 0; j < a4 - 1; j += 2 )
    v9 += (unsigned int)(*(__int16 *)(a3 + 2LL * (j + 1)) * *(__int16 *)(a3 + 2LL * (j + 1))
                       + *(__int16 *)(a3 + 2LL * j) * *(__int16 *)(a3 + 2LL * j)) >> v11;
  if ( j < a4 )
    v9 += (unsigned int)(*(__int16 *)(a3 + 2LL * j) * *(__int16 *)(a3 + 2LL * j)) >> v11;
  *a2 = v11;
  *a1 = v9;
  return a1;
}


//----- (00000001401BC700) ----------------------------------------------------
__int64            sub_1401BC700(__int16 a1, char a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax
  signed int i; // [rsp+0h] [rbp-48h]
  int v7; // [rsp+4h] [rbp-44h]
  int v8; // [rsp+8h] [rbp-40h]
  int v9; // [rsp+Ch] [rbp-3Ch]
  int v10; // [rsp+10h] [rbp-38h]
  int v11; // [rsp+14h] [rbp-34h]
  int v12; // [rsp+18h] [rbp-30h]
  int v13; // [rsp+1Ch] [rbp-2Ch]
  int v14; // [rsp+20h] [rbp-28h]
  char *v15; // [rsp+28h] [rbp-20h]

  if ( a4 == 8 )
  {
    if ( a5 == 4 )
    {
      v15 = (char *)&unk_14027E290;
      v9 = 11;
    }
    else
    {
      v15 = (char *)&unk_14027BC14;
      v9 = 3;
    }
  }
  else if ( a5 == 4 )
  {
    v15 = byte_14027E2C0;
    v9 = 34;
  }
  else
  {
    v15 = (char *)&unk_14027CC28;
    v9 = 12;
  }
  v7 = 2 * (__int16)a4;
  v8 = 18 * (__int16)a4;
  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    *(_DWORD *)(a3 + 4LL * i) = v15[a2 + v9 * i] + a1 + 2 * (__int16)a4;
    if ( v7 <= v8 )
    {
      if ( *(_DWORD *)(a3 + 4LL * i) <= v8 )
      {
        if ( *(_DWORD *)(a3 + 4LL * i) >= v7 )
          v12 = *(_DWORD *)(a3 + 4LL * i);
        else
          v12 = 2 * (__int16)a4;
        v13 = v12;
      }
      else
      {
        v13 = 18 * (__int16)a4;
      }
      v14 = v13;
    }
    else
    {
      if ( *(_DWORD *)(a3 + 4LL * i) <= v7 )
      {
        if ( *(_DWORD *)(a3 + 4LL * i) >= v8 )
          v10 = *(_DWORD *)(a3 + 4LL * i);
        else
          v10 = 18 * (__int16)a4;
        v11 = v10;
      }
      else
      {
        v11 = 2 * (__int16)a4;
      }
      v14 = v11;
    }
    *(_DWORD *)(a3 + 4LL * i) = v14;
  }
  return result;
}


//----- (00000001401BC940) ----------------------------------------------------
__int64            sub_1401BC940(_WORD *a1, __int64 a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-118h] BYREF
  int v5; // [rsp+20h] [rbp-F8h]
  int j; // [rsp+24h] [rbp-F4h]
  int v7; // [rsp+28h] [rbp-F0h]
  int v8; // [rsp+2Ch] [rbp-ECh]
  int v9; // [rsp+30h] [rbp-E8h]
  int v10; // [rsp+34h] [rbp-E4h]
  int v11; // [rsp+38h] [rbp-E0h]
  int v12; // [rsp+3Ch] [rbp-DCh]
  int v13; // [rsp+40h] [rbp-D8h]
  _DWORD *v14; // [rsp+48h] [rbp-D0h]
  int v15; // [rsp+50h] [rbp-C8h]
  int i; // [rsp+54h] [rbp-C4h]
  int v17; // [rsp+58h] [rbp-C0h]
  int v18; // [rsp+5Ch] [rbp-BCh]
  int v19; // [rsp+60h] [rbp-B8h]
  int v20; // [rsp+64h] [rbp-B4h]
  int v21; // [rsp+68h] [rbp-B0h]
  int v22; // [rsp+6Ch] [rbp-ACh]
  int v23; // [rsp+70h] [rbp-A8h]
  int v24; // [rsp+74h] [rbp-A4h]
  int v25; // [rsp+78h] [rbp-A0h]
  _QWORD v26[2]; // [rsp+80h] [rbp-98h]
  _DWORD v27[14]; // [rsp+90h] [rbp-88h] BYREF
  _DWORD v28[14]; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v29; // [rsp+100h] [rbp-18h]

  v26[0] = (uint64)(uintptr_t)(v27);
  v26[1] = (uint64)(uintptr_t)(v28);
  v9 = a3 >> 1;
  sub_1401DC340(a2, (__int64)v27, (__int64)v28, a3 >> 1);
  v14 = v27;
  v7 = 0x2000;
  v5 = sub_1401DC160(v27, 0x2000, v9);
  if ( v5 >= 0 )
  {
    v8 = 0;
  }
  else
  {
    *a1 = 0;
    v14 = v28;
    v5 = sub_1401DC160(v28, v7, v9);
    v8 = 1;
  }
  j = 1;
  v17 = 0;
  v13 = 0;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        v12 = word_140282900[j];
        v11 = sub_1401DC160(v14, v12, v9);
        if ( (v5 > 0 || v11 < v13) && (v5 < 0 || v11 > -v13) )
          break;
        v13 = v11 == 0;
        v10 = -256;
        for ( i = 0; i < 3; ++i )
        {
          v18 = (((_BYTE)v12 + (_BYTE)v7) & 1) + ((v12 + v7) >> 1);
          v15 = sub_1401DC160(v14, v18, v9);
          if ( (v5 > 0 || v15 < 0) && (v5 < 0 || v15 > 0) )
          {
            v7 = v18;
            v5 = v15;
            v21 = 128;
            v10 += 128 >> i;
          }
          else
          {
            v12 = v18;
            v11 = v15;
          }
        }
        if ( v5 <= 0 )
          v20 = -v5;
        else
          v20 = v5;
        if ( v20 >= 0x10000 )
        {
          v23 = (v5 - v11) >> 5;
          v10 += v5 / v23;
        }
        else
        {
          v19 = v5 - v11;
          v22 = ((v5 - v11) >> 1) + 32 * v5;
          if ( v5 != v11 )
            v10 += v22 / v19;
        }
        a1[v8++] = sub_1401BE360(v10 + (j << 8), 0x7FFFu);
        if ( v8 >= a3 )
          return (unsigned int)a3; /* no result: rax still holds the loop bound from 0x1401BCC74 / 0x1401BCD56 */
        v14 = (_DWORD *)v26[v8 & 1];
        v7 = word_140282900[j - 1];
        v5 = (1 - (v8 & 2)) << 12;
      }
      ++j;
      v7 = v12;
      v5 = v11;
      v13 = 0;
    }
    while ( j <= 128 );
    if ( ++v17 > 16 )
      break;
    v25 = 1;
    sub_1401BBEB0(a2, a3, 0x10000 - (1 << v17));
    sub_1401DC340(a2, (__int64)v27, (__int64)v28, v9);
    v14 = v27;
    v7 = 0x2000;
    v5 = sub_1401DC160(v27, 0x2000, v9);
    if ( v5 >= 0 )
    {
      v8 = 0;
    }
    else
    {
      *a1 = 0;
      v14 = v28;
      v5 = sub_1401DC160(v28, v7, v9);
      v8 = 1;
    }
    j = 1;
  }
  v24 = a3 + 1;
  *a1 = 0x8000 / (a3 + 1);
  for ( j = 1; j < a3; ++j )
    a1[j] = *a1 + a1[j - 1];
  return (unsigned int)a3; /* no result: rax still holds the loop bound from 0x1401BCC74 / 0x1401BCD56 */
}

// 140282900: using guessed type __int16 word_140282900[136];

//----- (00000001401BCEC0) ----------------------------------------------------
__int64            CWinApp__ShowAppMessageBox(struct CWinApp *a1,      char *a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-1B8h] BYREF
  int i; // [rsp+30h] [rbp-188h]
  int j; // [rsp+34h] [rbp-184h]
  int v7; // [rsp+38h] [rbp-180h]
  int v8; // [rsp+3Ch] [rbp-17Ch]
  int v9; // [rsp+40h] [rbp-178h]
  int v10; // [rsp+44h] [rbp-174h]
  int v11; // [rsp+48h] [rbp-170h]
  int v12; // [rsp+4Ch] [rbp-16Ch]
  int v13; // [rsp+50h] [rbp-168h]
  int v14; // [rsp+54h] [rbp-164h]
  unsigned __int8 *v15; // [rsp+58h] [rbp-160h]
  unsigned __int8 *v16; // [rsp+60h] [rbp-158h]
  _DWORD v17[14]; // [rsp+68h] [rbp-150h] BYREF
  _DWORD v18[16]; // [rsp+A0h] [rbp-118h] BYREF
  _DWORD v19[24]; // [rsp+E0h] [rbp-D8h] BYREF
  int v20; // [rsp+140h] [rbp-78h] BYREF
  int v21[23]; // [rsp+144h] [rbp-74h] BYREF
  __int64 v22; // [rsp+1A0h] [rbp-18h]

  if ( a3 == 16 )
    v15 = (unsigned __int8 *)&unk_14027E788;
  else
    v15 = (unsigned __int8 *)&unk_1402820F0;
  v16 = v15;
  for ( i = 0; i < a3; ++i )
  {
    v7 = *(__int16 *)&a2[2 * i] >> 8;
    v13 = *(__int16 *)&a2[2 * i] - (v7 << 8);
    v9 = word_140282900[v7];
    v12 = word_140282900[v7 + 1] - v9;
    v21[v16[i] - 1] = (((v13 * v12 + (v9 << 8)) >> 3) + 1) >> 1;
  }
  v8 = a3 >> 1;
  sub_1401DCE10(v17, &v20, a3 >> 1);
  sub_1401DCE10(v18, v21, a3 >> 1);
  for ( i = 0; i < v8; ++i )
  {
    v10 = v17[i] + v17[i + 1];
    v11 = v18[i + 1] - v18[i];
    v19[i] = -v11 - v10;
    v19[a3 - i - 1] = v11 - v10;
  }
  sub_1401BD1D0((__int64)a1, (__int64)v19, 12, 17, a3);
  for ( j = 0; !(unsigned int)sub_1401BBF70((__int64)a1, a3) && j < 16; ++j )
  {
    v14 = 2;
    sub_1401BBEB0((__int64)v19, a3, 0x10000 - (2 << j));
    for ( i = 0; i < a3; ++i )
      *((_WORD *)a1 + i) = (((int)v19[i] >> 4) + 1) >> 1;
  }
  return 0; /* no result: rax is residue of the call at 0x1401BD117 */
}

// 140282900: using guessed type __int16 word_140282900[136];

//----- (00000001401BD1D0) ----------------------------------------------------
__int64            sub_1401BD1D0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 result; // rax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int j; // [rsp+20h] [rbp-48h]
  int k; // [rsp+20h] [rbp-48h]
  int m; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+24h] [rbp-44h]
  int i; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+2Ch] [rbp-3Ch]
  int v16; // [rsp+34h] [rbp-34h]
  int v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+3Ch] [rbp-2Ch]
  __int16 v19; // [rsp+4Ch] [rbp-1Ch]
  __int16 v20; // [rsp+50h] [rbp-18h]

  v18 = 0;
  for ( i = 0; i < 10; ++i )
  {
    v13 = 0;
    for ( j = 0; j < a5; ++j )
    {
      if ( *(int *)(a2 + 4LL * j) <= 0 )
        v15 = -*(_DWORD *)(a2 + 4LL * j);
      else
        v15 = *(_DWORD *)(a2 + 4LL * j);
      if ( v15 > v13 )
      {
        v13 = v15;
        v18 = j;
      }
    }
    v16 = a4 - a3 == 1 ? (v13 & 1) + (v13 >> 1) : ((v13 >> (a4 - a3 - 1)) + 1) >> 1;
    if ( v16 <= 0x7FFF )
      break;
    if ( v16 >= 163838 )
      v17 = 163838;
    else
      v17 = v16;
    sub_1401BBEB0(a2, a5, 65470 - ((v17 - 0x7FFF) << 14) / (((v18 + 1) * v17) >> 2));
  }
  if ( i == 10 )
  {
    for ( k = 0; ; ++k )
    {
      result = (unsigned int)a5;
      if ( k >= a5 )
        break;
      if ( a4 - a3 == 1 )
        v6 = (*(_DWORD *)(a2 + 4LL * k) & 1) + (*(int *)(a2 + 4LL * k) >> 1);
      else
        v6 = ((*(int *)(a2 + 4LL * k) >> (a4 - a3 - 1)) + 1) >> 1;
      if ( v6 <= 0x7FFF )
      {
        if ( a4 - a3 == 1 )
          v7 = (*(_DWORD *)(a2 + 4LL * k) & 1) + (*(int *)(a2 + 4LL * k) >> 1);
        else
          v7 = ((*(int *)(a2 + 4LL * k) >> (a4 - a3 - 1)) + 1) >> 1;
        if ( v7 >= -32768 )
        {
          if ( a4 - a3 == 1 )
            v8 = (*(_DWORD *)(a2 + 4LL * k) & 1) + (*(int *)(a2 + 4LL * k) >> 1);
          else
            v8 = ((*(int *)(a2 + 4LL * k) >> (a4 - a3 - 1)) + 1) >> 1;
          v19 = v8;
        }
        else
        {
          v19 = 0x8000;
        }
        v20 = v19;
      }
      else
      {
        v20 = 0x7FFF;
      }
      *(_WORD *)(a1 + 2LL * k) = v20;
      *(_DWORD *)(a2 + 4LL * k) = *(__int16 *)(a1 + 2LL * k) << (a4 - a3);
    }
  }
  else
  {
    for ( m = 0; ; ++m )
    {
      result = (unsigned int)a5;
      if ( m >= a5 )
        break;
      if ( a4 - a3 == 1 )
        v9 = (*(_DWORD *)(a2 + 4LL * m) & 1) + (*(int *)(a2 + 4LL * m) >> 1);
      else
        v9 = ((*(int *)(a2 + 4LL * m) >> (a4 - a3 - 1)) + 1) >> 1;
      *(_WORD *)(a1 + 2LL * m) = v9;
    }
  }
  return result;
}


//----- (00000001401BD610) ----------------------------------------------------
__int64            sub_1401BD610(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int k; // [rsp+0h] [rbp-18h]
  int n; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  int j; // [rsp+4h] [rbp-14h]
  int m; // [rsp+4h] [rbp-14h]
  int v10; // [rsp+8h] [rbp-10h]
  int v11; // [rsp+8h] [rbp-10h]

  for ( i = 0; i < a4; ++i )
    *(_DWORD *)(a2 + 4LL * i) = i;
  for ( j = 1; j < a4; ++j )
  {
    v10 = *(_DWORD *)(a1 + 4LL * j);
    for ( k = j - 1; k >= 0 && v10 < *(_DWORD *)(a1 + 4LL * k); --k )
    {
      *(_DWORD *)(a1 + 4LL * (k + 1)) = *(_DWORD *)(a1 + 4LL * k);
      *(_DWORD *)(a2 + 4LL * (k + 1)) = *(_DWORD *)(a2 + 4LL * k);
    }
    *(_DWORD *)(a1 + 4LL * (k + 1)) = v10;
    *(_DWORD *)(a2 + 4LL * (k + 1)) = j;
  }
  for ( m = a4; ; ++m )
  {
    result = (unsigned int)a3;
    if ( m >= a3 )
      break;
    v11 = *(_DWORD *)(a1 + 4LL * m);
    if ( v11 < *(_DWORD *)(a1 + 4LL * (a4 - 1)) )
    {
      for ( n = a4 - 2; n >= 0 && v11 < *(_DWORD *)(a1 + 4LL * n); --n )
      {
        *(_DWORD *)(a1 + 4LL * (n + 1)) = *(_DWORD *)(a1 + 4LL * n);
        *(_DWORD *)(a2 + 4LL * (n + 1)) = *(_DWORD *)(a2 + 4LL * n);
      }
      *(_DWORD *)(a1 + 4LL * (n + 1)) = v11;
      *(_DWORD *)(a2 + 4LL * (n + 1)) = m;
    }
  }
  return result;
}


//----- (00000001401BD810) ----------------------------------------------------
__int64            sub_1401BD810(__int64 a1, int a2)
{
  __int64 result; // rax
  int j; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  int v5; // [rsp+8h] [rbp-10h]

  for ( i = 1; ; ++i )
  {
    result = (unsigned int)a2;
    if ( i >= a2 )
      break;
    v5 = *(__int16 *)(a1 + 2LL * i);
    for ( j = i - 1; j >= 0 && v5 < *(__int16 *)(a1 + 2LL * j); --j )
      *(_WORD *)(a1 + 2LL * (j + 1)) = *(_WORD *)(a1 + 2LL * j);
    *(_WORD *)(a1 + 2LL * (j + 1)) = v5;
  }
  return result;
}


//----- (00000001401BD8C0) ----------------------------------------------------
void            sub_1401BD8C0(__int16 *a1, __int16 *a2, int a3)
{
  int v3; // [rsp+20h] [rbp-48h]
  int j; // [rsp+24h] [rbp-44h]
  int n; // [rsp+24h] [rbp-44h]
  int ii; // [rsp+24h] [rbp-44h]
  int k; // [rsp+28h] [rbp-40h]
  int m; // [rsp+28h] [rbp-40h]
  int v9; // [rsp+2Ch] [rbp-3Ch]
  int v10; // [rsp+2Ch] [rbp-3Ch]
  int v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+30h] [rbp-38h]
  int v13; // [rsp+38h] [rbp-30h]
  int i; // [rsp+3Ch] [rbp-2Ch]
  int v15; // [rsp+44h] [rbp-24h]
  __int16 v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+4Ch] [rbp-1Ch]
  __int16 v18; // [rsp+50h] [rbp-18h]
  __int16 v19; // [rsp+54h] [rbp-14h]
  __int16 v20; // [rsp+58h] [rbp-10h]
  __int16 v21; // [rsp+5Ch] [rbp-Ch]

  for ( i = 0; i < 20; ++i )
  {
    v13 = *a1 - *a2;
    v3 = 0;
    for ( j = 1; j <= a3 - 1; ++j )
    {
      if ( a1[j] - (a2[j] + a1[j - 1]) < v13 )
      {
        v13 = a1[j] - (a2[j] + a1[j - 1]);
        v3 = j;
      }
    }
    if ( 0x8000 - (a2[a3] + a1[a3 - 1]) < v13 )
    {
      v13 = 0x8000 - (a2[a3] + a1[a3 - 1]);
      v3 = a3;
    }
    if ( v13 >= 0 )
      return;
    if ( v3 )
    {
      if ( v3 == a3 )
      {
        a1[a3 - 1] = 0x8000 - a2[a3];
      }
      else
      {
        v11 = 0;
        for ( k = 0; k < v3; ++k )
          v11 += a2[k];
        v12 = (a2[v3] >> 1) + v11;
        v9 = 0x8000;
        for ( m = a3; m > v3; --m )
          v9 -= a2[m];
        v10 = v9 - (a2[v3] >> 1);
        if ( v12 <= v10 )
        {
          if ( (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1) <= v10 )
          {
            if ( (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1) >= v12 )
              v17 = (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1);
            else
              LOWORD(v17) = v12;
            v18 = v17;
          }
          else
          {
            v18 = v10;
          }
          v19 = v18;
        }
        else
        {
          if ( (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1) <= v12 )
          {
            if ( (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1) >= v10 )
              v15 = (((unsigned __int8)a1[v3] + (unsigned __int8)a1[v3 - 1]) & 1) + ((a1[v3] + a1[v3 - 1]) >> 1);
            else
              LOWORD(v15) = v10;
            v16 = v15;
          }
          else
          {
            v16 = v12;
          }
          v19 = v16;
        }
        a1[v3 - 1] = v19 - (a2[v3] >> 1);
        a1[v3] = a2[v3] + a1[v3 - 1];
      }
    }
    else
    {
      *a1 = *a2;
    }
  }
  if ( i == 20 )
  {
    sub_1401BD810((__int64)a1, a3);
    *a1 = sub_1401BE3A0(*a1, *a2);
    for ( n = 1; n < a3; ++n )
    {
      if ( a2[n] + a1[n - 1] <= 0x7FFF )
      {
        if ( a2[n] + a1[n - 1] >= -32768 )
          v20 = a2[n] + a1[n - 1];
        else
          v20 = 0x8000;
        v21 = v20;
      }
      else
      {
        v21 = 0x7FFF;
      }
      a1[n] = sub_1401BE3A0(a1[n], v21);
    }
    a1[a3 - 1] = sub_1401BE320(a1[a3 - 1], 0x8000 - a2[a3]);
    for ( ii = a3 - 2; ii >= 0; --ii )
      a1[ii] = sub_1401BE320(a1[ii], a1[ii + 1] - a2[ii + 1]);
  }
}


//----- (00000001401BDFF0) ----------------------------------------------------
__int64            sub_1401BDFF0(_WORD *a1, __int16 *a2, int a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+20h] [rbp-18h]
  int v6; // [rsp+20h] [rbp-18h]
  int i; // [rsp+24h] [rbp-14h]
  int v8; // [rsp+28h] [rbp-10h]

  v4 = 0x20000 / (int)sub_1401BE3A0(*a2, 1u);
  v8 = 0x20000 / (int)sub_1401BE3A0(a2[1] - *a2, 1u);
  *a1 = sub_1401BE320(v8 + v4, 0x7FFFu);
  for ( i = 1; i < a3 - 1; i += 2 )
  {
    v5 = 0x20000 / (int)sub_1401BE3A0(a2[i + 1] - a2[i], 1u);
    a1[i] = sub_1401BE320(v8 + v5, 0x7FFFu);
    v8 = 0x20000 / (int)sub_1401BE3A0(a2[i + 2] - a2[i + 1], 1u);
    a1[i + 1] = sub_1401BE320(v8 + v5, 0x7FFFu);
  }
  v6 = 0x20000 / (int)sub_1401BE3A0(0x8000 - a2[a3 - 1], 1u);
  result = sub_1401BE320(v8 + v6, 0x7FFFu);
  a1[a3 - 1] = result;
  return result;
}


//----- (00000001401BE210) ----------------------------------------------------
__int64            sub_1401BE210(__int64 a1, __int64 a2, char a3, int a4)
{
  int i; // [rsp+0h] [rbp-18h]
  unsigned int v6; // [rsp+4h] [rbp-14h]

  v6 = 0;
  for ( i = 0; i < a4; ++i )
    v6 += (*(__int16 *)(a2 + 2LL * i) * *(__int16 *)(a1 + 2LL * i)) >> a3;
  return v6;
}


//----- (00000001401BE290) ----------------------------------------------------
__int64            sub_1401BE290(unsigned int a1, int a2)
{
  if ( !a2 )
    return a1;
  if ( a2 >= 0 )
    return (unsigned int)__ROR4__(a1, a2);
  return (unsigned int)__ROL4__(a1, -(char)a2);
}


//----- (00000001401BE320) ----------------------------------------------------
__int64            sub_1401BE320(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 >= (int)a2 )
    return a2;
  else
    return a1;
}


//----- (00000001401BE360) ----------------------------------------------------
__int64            sub_1401BE360(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 >= (int)a2 )
    return a2;
  else
    return a1;
}


//----- (00000001401BE3A0) ----------------------------------------------------
__int64            sub_1401BE3A0(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 <= (int)a2 )
    return a2;
  else
    return a1;
}


//----- (00000001401BE3E0) ----------------------------------------------------
__int64            sub_1401BE3E0(unsigned __int16 a1, unsigned __int16 a2)
{
  if ( (__int16)a1 <= (__int16)a2 )
    return a2;
  else
    return a1;
}


//----- (00000001401BE420) ----------------------------------------------------
__int64            sub_1401BE420(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 <= (int)a2 )
    return a2;
  else
    return a1;
}


//----- (00000001401BE460) ----------------------------------------------------
__int64            sub_1401BE460(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-18h]

  v4 = sub_1401BA490(a1);
  *a2 = v4;
  result = sub_1401BE290(a1, 24 - v4) & 0x7F;
  *a3 = result;
  return result;
}


//----- (00000001401BE4C0) ----------------------------------------------------
__int64            sub_1401BE4C0(signed int a1)
{
  int v2; // [rsp+20h] [rbp-18h]
  int v3; // [rsp+24h] [rbp-14h] BYREF
  _DWORD v4[4]; // [rsp+28h] [rbp-10h] BYREF

  if ( a1 <= 0 )
    return 0;
  sub_1401BE460(a1, &v3, v4);
  if ( (v3 & 1) != 0 )
    v2 = 0x8000;
  else
    v2 = 46214;
  return (unsigned int)(((__int16)(213 * LOWORD(v4[0])) * (__int64)(v2 >> (v3 >> 1))) >> 16) + (v2 >> (v3 >> 1));
}


//----- (00000001401BE550) ----------------------------------------------------
__int64            sub_1401BE550(signed int a1, signed int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v6; // [rsp+20h] [rbp-68h]
  int v7; // [rsp+24h] [rbp-64h]
  int v8; // [rsp+24h] [rbp-64h]
  signed int v9; // [rsp+28h] [rbp-60h]
  int v10; // [rsp+38h] [rbp-50h]
  int v11; // [rsp+3Ch] [rbp-4Ch]
  int v12; // [rsp+44h] [rbp-44h]
  int v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+4Ch] [rbp-3Ch]
  int v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+54h] [rbp-34h]

  if ( a1 <= 0 )
    v3 = sub_1401BA490(-a1);
  else
    v3 = sub_1401BA490(a1);
  v11 = v3 - 1;
  v9 = a1 << (v3 - 1);
  if ( a2 <= 0 )
    v4 = sub_1401BA490(-a2);
  else
    v4 = sub_1401BA490(a2);
  v10 = 0x1FFFFFFF / (a2 << (v4 - 1) >> 16);
  v7 = ((__int16)v10 * (__int64)v9) >> 16;
  v8 = (((__int16)v10 * (__int64)(int)(v9 - 8 * ((unsigned __int64)(v7 * (__int64)(a2 << (v4 - 1))) >> 32))) >> 16) + v7;
  v6 = v11 + 29 - (v4 - 1) - a3;
  if ( v6 >= 0 )
  {
    if ( v6 >= 32 )
      return 0;
    else
      return (unsigned int)(v8 >> v6);
  }
  else
  {
    if ( (int)0x80000000 >> (a3 - (v11 + 29 - (v4 - 1))) <= 0x7FFFFFFF >> (a3 - (v11 + 29 - (v4 - 1))) )
    {
      if ( v8 <= 0x7FFFFFFF >> (a3 - (v11 + 29 - (v4 - 1))) )
      {
        if ( v8 >= (int)0x80000000 >> (a3 - (v11 + 29 - (v4 - 1))) )
          v14 = v8;
        else
          v14 = (int)0x80000000 >> (a3 - (v11 + 29 - (v4 - 1)));
        v15 = v14;
      }
      else
      {
        v15 = 0x7FFFFFFF >> (a3 - (v11 + 29 - (v4 - 1)));
      }
      v16 = v15;
    }
    else
    {
      if ( v8 <= (int)0x80000000 >> (a3 - (v11 + 29 - (v4 - 1))) )
      {
        if ( v8 >= 0x7FFFFFFF >> (a3 - (v11 + 29 - (v4 - 1))) )
          v12 = v8;
        else
          v12 = 0x7FFFFFFF >> (a3 - (v11 + 29 - (v4 - 1)));
        v13 = v12;
      }
      else
      {
        v13 = (int)0x80000000 >> (a3 - (v11 + 29 - (v4 - 1)));
      }
      v16 = v13;
    }
    return (unsigned int)(v16 << (a3 - (v11 + 29 - (v4 - 1))));
  }
}


//----- (00000001401BE820) ----------------------------------------------------
__int64            sub_1401BE820(signed int a1, int a2)
{
  int v2; // eax
  int v4; // [rsp+20h] [rbp-68h]
  int v5; // [rsp+24h] [rbp-64h]
  int v6; // [rsp+38h] [rbp-50h]
  int v7; // [rsp+3Ch] [rbp-4Ch]
  int v8; // [rsp+40h] [rbp-48h]
  int v9; // [rsp+44h] [rbp-44h]
  int v10; // [rsp+48h] [rbp-40h]

  if ( a1 <= 0 )
    v2 = sub_1401BA490(-a1);
  else
    v2 = sub_1401BA490(a1);
  v5 = ((0x1FFFFFFF
       / (a1 << (v2 - 1) >> 16)
       * (__int64)(int)(8 * (0x20000000 - ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16) * (__int64)(a1 << (v2 - 1))) >> 16)))) >> 16)
     + ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16)) << 16);
  v4 = 61 - (v2 - 1) - a2;
  if ( v4 > 0 )
  {
    if ( v4 >= 32 )
      return 0;
    else
      return (unsigned int)(v5 >> v4);
  }
  else
  {
    if ( (int)0x80000000 >> (a2 - (61 - (v2 - 1))) <= 0x7FFFFFFF >> (a2 - (61 - (v2 - 1))) )
    {
      if ( v5 <= 0x7FFFFFFF >> (a2 - (61 - (v2 - 1))) )
      {
        if ( v5 >= (int)0x80000000 >> (a2 - (61 - (v2 - 1))) )
          v8 = ((0x1FFFFFFF
               / (a1 << (v2 - 1) >> 16)
               * (__int64)(int)(8
                              * (0x20000000 - ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16) * (__int64)(a1 << (v2 - 1))) >> 16)))) >> 16)
             + ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16)) << 16);
        else
          v8 = (int)0x80000000 >> (a2 - (61 - (v2 - 1)));
        v9 = v8;
      }
      else
      {
        v9 = 0x7FFFFFFF >> (a2 - (61 - (v2 - 1)));
      }
      v10 = v9;
    }
    else
    {
      if ( v5 <= (int)0x80000000 >> (a2 - (61 - (v2 - 1))) )
      {
        if ( v5 >= 0x7FFFFFFF >> (a2 - (61 - (v2 - 1))) )
          v6 = ((0x1FFFFFFF
               / (a1 << (v2 - 1) >> 16)
               * (__int64)(int)(8
                              * (0x20000000 - ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16) * (__int64)(a1 << (v2 - 1))) >> 16)))) >> 16)
             + ((0x1FFFFFFF / (a1 << (v2 - 1) >> 16)) << 16);
        else
          v6 = 0x7FFFFFFF >> (a2 - (61 - (v2 - 1)));
        v7 = v6;
      }
      else
      {
        v7 = (int)0x80000000 >> (a2 - (61 - (v2 - 1)));
      }
      v10 = v7;
    }
    return (unsigned int)(v10 << (a2 - (61 - (v2 - 1))));
  }
}


//----- (00000001401BEA90) ----------------------------------------------------
_DWORD *           sub_1401BEA90(_DWORD *a1)
{
  a1[1049] = a1[582] << 7;
  a1[1067] = 0x10000;
  a1[1068] = 0x10000;
  a1[1071] = 20;
  a1[1070] = 2;
  return a1;
}


//----- (00000001401BEB10) ----------------------------------------------------
__int64            sub_1401BEB10(_DWORD *a1,      __m128i *a2, __int64 a3, int a4)
{
  __int64 result; // rax

  if ( a1[579] != a1[1069] )
  {
    sub_1401BEA90(a1);
    a1[1069] = a1[579];
  }
  if ( !a4 )
    return sub_1401D9A80((__int64)a1, a2);
  sub_1401D9E20((__int64)a1, (__int64)a2, a3);
  result = (unsigned int)(a1[1046] + 1);
  a1[1046] = result;
  return result;
}


//----- (00000001401BEBC0) ----------------------------------------------------
_DWORD *           sub_1401BEBC0(_DWORD *a1, __int64 a2, signed int a3)
{
  _DWORD *result; // rax
  char v4; // al
  int v5; // eax
  int v6; // [rsp+20h] [rbp-48h] BYREF
  _DWORD *v7; // [rsp+28h] [rbp-40h]
  signed int i; // [rsp+30h] [rbp-38h]
  int v9; // [rsp+34h] [rbp-34h]
  int v10; // [rsp+38h] [rbp-30h] BYREF
  int v11; // [rsp+3Ch] [rbp-2Ch]
  int v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+44h] [rbp-24h]
  signed int v14; // [rsp+48h] [rbp-20h]
  _DWORD *v15; // [rsp+50h] [rbp-18h]
  _DWORD *v16; // [rsp+58h] [rbp-10h]

  v7 = a1 + 1049;
  if ( a1[1046] )
  {
    sub_1401BC4C0(v7 + 15, v7 + 16, a2, a3);
    result = v7;
    v7[12] = 1;
  }
  else
  {
    if ( a1[1061] )
    {
      sub_1401BC4C0(&v6, &v10, a2, a3);
      if ( v10 <= v7[16] )
      {
        if ( v10 < v7[16] )
          v6 >>= v7[16] - v10;
      }
      else
      {
        v4 = v10 - v7[16];
        v15 = v7;
        v7[15] = (int)v7[15] >> v4;
      }
      if ( v6 > v7[15] )
      {
        v5 = sub_1401BA490(v7[15]);
        v11 = v5 - 1;
        v16 = v7;
        v7[15] <<= v5 - 1;
        v6 >>= sub_1401BE420(24 - v11, 0);
        if ( v6 <= 1 )
          v13 = 1;
        else
          v13 = v6;
        v14 = v7[15] / v13;
        v9 = 16 * sub_1401BE4C0(v14);
        v12 = 4 * ((0x10000 - v9) / a3);
        for ( i = 0; i < a3; ++i )
        {
          *(_WORD *)(a2 + 2LL * i) = (unsigned int)(*(__int16 *)(a2 + 2LL * i) * v9) >> 16;
          v9 += v12;
          if ( v9 > 0x10000 )
            break;
        }
      }
    }
    result = v7;
    v7[12] = 0;
  }
  return result;
}


//----- (00000001401BEE10) ----------------------------------------------------
__int64            sub_1401BEE10(
        __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        int *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  int i; // [rsp+30h] [rbp+0h] BYREF
  int v23; // [rsp+34h] [rbp+4h]
  int v24; // [rsp+38h] [rbp+8h] BYREF
  int v25; // [rsp+3Ch] [rbp+Ch]
  int v26; // [rsp+40h] [rbp+10h]
  void *v27; // [rsp+48h] [rbp+18h]
  int v28; // [rsp+50h] [rbp+20h]
  int v29; // [rsp+54h] [rbp+24h]
  int v30; // [rsp+58h] [rbp+28h]
  unsigned int v31; // [rsp+5Ch] [rbp+2Ch]
  int v32; // [rsp+60h] [rbp+30h]
  int v33; // [rsp+64h] [rbp+34h]
  int v34; // [rsp+68h] [rbp+38h]
  void *v35; // [rsp+70h] [rbp+40h]
  int v36; // [rsp+78h] [rbp+48h]
  int v37; // [rsp+7Ch] [rbp+4Ch]
  int v38; // [rsp+80h] [rbp+50h]
  BOOL v39; // [rsp+84h] [rbp+54h]
  int v40; // [rsp+88h] [rbp+58h]
  int v41; // [rsp+8Ch] [rbp+5Ch]
  int v42; // [rsp+90h] [rbp+60h]
  int v43; // [rsp+94h] [rbp+64h]
  int v44; // [rsp+98h] [rbp+68h]
  int v45; // [rsp+9Ch] [rbp+6Ch]
  int v46; // [rsp+A0h] [rbp+70h]
  int v47; // [rsp+A4h] [rbp+74h]
  int v48; // [rsp+A8h] [rbp+78h]
  int v49; // [rsp+ACh] [rbp+7Ch]
  BOOL v50; // [rsp+B0h] [rbp+80h]
  int v51; // [rsp+B4h] [rbp+84h]
  int v52; // [rsp+B8h] [rbp+88h]
  unsigned int v53; // [rsp+BCh] [rbp+8Ch]
  int v54; // [rsp+C0h] [rbp+90h] BYREF
  int v55[3]; // [rsp+C4h] [rbp+94h] BYREF
  int *v56; // [rsp+D0h] [rbp+A0h]
  int *p_i; // [rsp+D8h] [rbp+A8h]
  int *v58; // [rsp+E0h] [rbp+B0h]
  int *v59; // [rsp+E8h] [rbp+B8h]
  __int64 v60; // [rsp+F0h] [rbp+C0h]
  signed int v64; // [rsp+140h] [rbp+110h]

  v27 = (void *)(a2 - 4);
  v11 = 2LL * (a11 + 2) + 15;
  if ( v11 <= 2LL * (a11 + 2) )
    v11 = 0xFFFFFFFFFFFFFF0LL;
  v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
  v35 = &i;
  for ( i = 0; i < a11 + 2; ++i )
  {
    v23 = *(__int16 *)(a3 + 2LL * (i - 2)) + *(__int16 *)(a2 + 2LL * (i - 2));
    v28 = *(__int16 *)(a2 + 2LL * (i - 2)) - *(__int16 *)(a3 + 2LL * (i - 2));
    *((_WORD *)v27 + i) = (v23 & 1) + (v23 >> 1);
    if ( (v28 & 1) + (v28 >> 1) <= 0x7FFF )
    {
      if ( (v28 & 1) + (v28 >> 1) >= -32768 )
        v48 = (v28 & 1) + (v28 >> 1);
      else
        v48 = -32768;
      v49 = v48;
    }
    else
    {
      v49 = 0x7FFF;
    }
    *((_WORD *)v35 + i) = v49;
  }
  sub_1401FC920((__m128i *)v27, (     __m128i *)(a1 + 2), 4u);
  sub_1401FC920((__m128i *)v35, (     __m128i *)(a1 + 4), 4u);
  sub_1401FC920((__m128i *)(a1 + 2), (     __m128i *)((char *)v27 + 2 * a11), 4u);
  sub_1401FC920((__m128i *)(a1 + 4), (     __m128i *)((char *)v35 + 2 * a11), 4u);
  v13 = 2LL * a11 + 15;
  if ( v13 <= 2LL * a11 )
    v13 = 0xFFFFFFFFFFFFFF0LL;
  v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = &i;
  v15 = 2LL * a11 + 15;
  if ( v15 <= 2LL * a11 )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
  v59 = &i;
  for ( i = 0; i < a11; ++i )
  {
    v23 = (((*((__int16 *)v27 + i + 2) + *((__int16 *)v27 + i) + 2 * *((__int16 *)v27 + i + 1)) >> 1) + 1) >> 1;
    *((_WORD *)p_i + i) = v23;
    *((_WORD *)v59 + i) = *((_WORD *)v27 + i + 1) - v23;
  }
  v17 = 2LL * a11 + 15;
  if ( v17 <= 2LL * a11 )
    v17 = 0xFFFFFFFFFFFFFF0LL;
  v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
  v56 = &i;
  v19 = 2LL * a11 + 15;
  if ( v19 <= 2LL * a11 )
    v19 = 0xFFFFFFFFFFFFFF0LL;
  v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
  v58 = &i;
  for ( i = 0; i < a11; ++i )
  {
    v23 = (((*((__int16 *)v35 + i + 2) + *((__int16 *)v35 + i) + 2 * *((__int16 *)v35 + i + 1)) >> 1) + 1) >> 1;
    *((_WORD *)v56 + i) = v23;
    *((_WORD *)v58 + i) = *((_WORD *)v35 + i + 1) - v23;
  }
  v50 = a11 == 10 * a10;
  v39 = v50;
  if ( a11 == 10 * a10 )
    v37 = 328;
  else
    v37 = 655;
  v31 = ((__int16)v37 * (__int64)(a8 * a8)) >> 16;
  v24 = sub_1401C0320(&v54, (__int64)p_i, (__int64)v56, (signed int *)a1 + 3, a11, v31);
  v25 = sub_1401C0320(v55, (__int64)v59, (__int64)v58, (signed int *)a1 + 5, a11, v31);
  v30 = 3 * (__int16)v54 + v55[0];
  if ( v30 >= 0x10000 )
    v38 = 0x10000;
  else
    v38 = v30;
  v30 = v38;
  if ( v39 )
    v40 = 1200;
  else
    v40 = 600;
  v64 = a7 - v40;
  if ( v64 < 1 )
    v64 = 1;
  v29 = 600 * (__int16)a10 + 2000;
  v41 = 3 * v30;
  *a6 = sub_1401BE550(v64, 3 * v30 + 851968, 19);
  if ( *a6 >= v29 )
  {
    a6[1] = v64 - *a6;
    v26 = 0x4000;
  }
  else
  {
    *a6 = v29;
    a6[1] = v64 - *a6;
    v26 = sub_1401BE550(2 * a6[1] - v29, ((__int16)v29 * (__int64)(v41 + 0x10000)) >> 16, 16);
    if ( v26 <= 0x4000 )
    {
      if ( v26 >= 0 )
        v42 = v26;
      else
        v42 = 0;
      v43 = v42;
    }
    else
    {
      v43 = 0x4000;
    }
    v26 = v43;
  }
  a1[14] += (unsigned int)((__int16)v31 * (v26 - a1[14])) >> 16;
  *a5 = 0;
  if ( a9 )
  {
    v26 = 0;
    v24 = 0;
    v25 = 0;
    sub_1401C06A0(&v24, a4);
  }
  else if ( a1[15] || 8 * v64 >= 13 * v29 && (int)((a1[14] * (__int64)v30) >> 16) >= 819 )
  {
    if ( a1[15] && (8 * v64 < 11 * v29 || (int)((a1[14] * (__int64)v30) >> 16) < 328) )
    {
      v24 = ((__int16)v24 * a1[14]) >> 14;
      v25 = ((__int16)v25 * a1[14]) >> 14;
      sub_1401C06A0(&v24, a4);
      v26 = 0;
      v24 = 0;
      v25 = 0;
    }
    else if ( a1[14] <= 15565 )
    {
      v24 = ((__int16)v24 * a1[14]) >> 14;
      v25 = ((__int16)v25 * a1[14]) >> 14;
      sub_1401C06A0(&v24, a4);
      v26 = a1[14];
    }
    else
    {
      sub_1401C06A0(&v24, a4);
      v26 = 0x4000;
    }
  }
  else
  {
    v24 = ((__int16)v24 * a1[14]) >> 14;
    v25 = ((__int16)v25 * a1[14]) >> 14;
    sub_1401C06A0(&v24, a4);
    v26 = 0;
    v24 = 0;
    v25 = 0;
    *a6 = v64;
    a6[1] = 0;
    *a5 = 1;
  }
  if ( *a5 == 1 )
  {
    a1[16] += a11 - 8 * a10;
    if ( a1[16] >= 5 * a10 )
      a1[16] = 10000;
    else
      *a5 = 0;
  }
  else
  {
    a1[16] = 0;
  }
  if ( !*a5 && a6[1] < 1 )
  {
    a6[1] = 1;
    *a6 = sub_1401BE3A0(1u, v64 - a6[1]);
  }
  v33 = -*a1;
  v34 = -a1[1];
  v32 = a1[15] << 10;
  v55[1] = 8 * a10;
  v36 = 0x10000 / (8 * a10);
  v51 = -(((((__int16)v36 * (__int16)(v24 - *a1)) >> 15) + 1) >> 1);
  v52 = -(((((__int16)v36 * (__int16)(v25 - a1[1])) >> 15) + 1) >> 1);
  v53 = (unsigned int)(((__int16)v36 * (__int64)(v26 - a1[15])) >> 16) << 10;
  for ( i = 0; i < 8 * a10; ++i )
  {
    v33 += v51;
    v34 += v52;
    v32 += v53;
    v23 = (*((__int16 *)v27 + i + 2) + *((__int16 *)v27 + i) + 2 * *((__int16 *)v27 + i + 1)) << 9;
    v23 = (((__int16)v33 * (__int64)v23) >> 16) + ((*((__int16 *)v35 + i + 1) * (__int64)v32) >> 16);
    v23 += ((__int16)v34 * (__int64)(*((__int16 *)v27 + i + 1) << 11)) >> 16;
    if ( ((v23 >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v23 >> 7) + 1) >> 1 >= -32768 )
        v44 = ((v23 >> 7) + 1) >> 1;
      else
        v44 = -32768;
      v45 = v44;
    }
    else
    {
      v45 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * (i - 1)) = v45;
  }
  v33 = -v24;
  v34 = -v25;
  v32 = v26 << 10;
  for ( i = 8 * a10; i < a11; ++i )
  {
    v23 = (*((__int16 *)v27 + i + 2) + *((__int16 *)v27 + i) + 2 * *((__int16 *)v27 + i + 1)) << 9;
    v23 = (((__int16)v33 * (__int64)v23) >> 16) + ((*((__int16 *)v35 + i + 1) * (__int64)v32) >> 16);
    v23 += ((__int16)v34 * (__int64)(*((__int16 *)v27 + i + 1) << 11)) >> 16;
    if ( ((v23 >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v23 >> 7) + 1) >> 1 >= -32768 )
        v46 = ((v23 >> 7) + 1) >> 1;
      else
        v46 = -32768;
      v47 = v46;
    }
    else
    {
      v47 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * (i - 1)) = v47;
  }
  *a1 = v24;
  a1[1] = v25;
  a1[15] = v26;
  return 0; /* no caller reads the result */
}


//----- (00000001401BFD30) ----------------------------------------------------
__int64            sub_1401BFD30(__int16 *a1, __m128i *a2, __m128i *a3, _DWORD *a4, int a5, int a6)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-58h]
  int j; // [rsp+20h] [rbp-58h]
  int k; // [rsp+20h] [rbp-58h]
  int v10; // [rsp+24h] [rbp-54h]
  int v11; // [rsp+24h] [rbp-54h]
  int v12; // [rsp+24h] [rbp-54h]
  int v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+2Ch] [rbp-4Ch]
  int v16; // [rsp+2Ch] [rbp-4Ch]
  int v17; // [rsp+30h] [rbp-48h]
  int v18; // [rsp+34h] [rbp-44h]
  int v19; // [rsp+38h] [rbp-40h]
  __int16 v20; // [rsp+3Ch] [rbp-3Ch]
  int v21; // [rsp+40h] [rbp-38h]
  __int16 v22; // [rsp+44h] [rbp-34h]
  __int16 v23; // [rsp+48h] [rbp-30h]
  __int16 v24; // [rsp+4Ch] [rbp-2Ch]
  __int16 v25; // [rsp+50h] [rbp-28h]
  __int16 v26; // [rsp+54h] [rbp-24h]
  int v27; // [rsp+5Ch] [rbp-1Ch]
  int v28; // [rsp+60h] [rbp-18h]

  sub_1401FC920(a2, (     __m128i *)(a1 + 2), 4u);
  sub_1401FC920(a3, (     __m128i *)(a1 + 4), 4u);
  sub_1401FC920((__m128i *)(a1 + 2), (__m128i *)((char *)a2 + 2 * a6), 4u);
  sub_1401FC920((__m128i *)(a1 + 4), (__m128i *)((char *)a3 + 2 * a6), 4u);
  v13 = *a1;
  v15 = a1[1];
  v18 = 0x10000 / (8 * a5);
  v27 = ((((__int16)v18 * (__int16)(*a4 - *a1)) >> 15) + 1) >> 1;
  v28 = ((((__int16)v18 * (__int16)(a4[1] - a1[1])) >> 15) + 1) >> 1;
  for ( i = 0; i < 8 * a5; ++i )
  {
    v13 += v27;
    v15 += v28;
    v10 = (((__int16)v15 * (__int64)(SR_VEC_PTR_LANES(128, a2, i16)[i + 1] << 11)) >> 16)
        + (((__int16)v13 * (__int64)((SR_VEC_PTR_LANES(128, a2, i16)[i + 2] + SR_VEC_PTR_LANES(128, a2, i16)[i] + 2 * SR_VEC_PTR_LANES(128, a2, i16)[i + 1]) << 9)) >> 16)
        + (SR_VEC_PTR_LANES(128, a3, i16)[i + 1] << 8);
    if ( ((v10 >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v10 >> 7) + 1) >> 1 >= -32768 )
        v19 = ((v10 >> 7) + 1) >> 1;
      else
        LOWORD(v19) = 0x8000;
      v20 = v19;
    }
    else
    {
      v20 = 0x7FFF;
    }
    SR_VEC_PTR_LANES(128, a3, i16)[i + 1] = v20;
  }
  v14 = *a4;
  v16 = a4[1];
  for ( j = 8 * a5; j < a6; ++j )
  {
    v11 = (((__int16)v16 * (__int64)(SR_VEC_PTR_LANES(128, a2, i16)[j + 1] << 11)) >> 16)
        + (((__int16)v14 * (__int64)((SR_VEC_PTR_LANES(128, a2, i16)[j + 2] + SR_VEC_PTR_LANES(128, a2, i16)[j] + 2 * SR_VEC_PTR_LANES(128, a2, i16)[j + 1]) << 9)) >> 16)
        + (SR_VEC_PTR_LANES(128, a3, i16)[j + 1] << 8);
    if ( ((v11 >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v11 >> 7) + 1) >> 1 >= -32768 )
        v21 = ((v11 >> 7) + 1) >> 1;
      else
        LOWORD(v21) = 0x8000;
      v22 = v21;
    }
    else
    {
      v22 = 0x7FFF;
    }
    SR_VEC_PTR_LANES(128, a3, i16)[j + 1] = v22;
  }
  *a1 = *(_WORD *)a4;
  a1[1] = *((_WORD *)a4 + 2);
  for ( k = 0; ; ++k )
  {
    result = (unsigned int)a6;
    if ( k >= a6 )
      break;
    v12 = SR_VEC_PTR_LANES(128, a3, i16)[k + 1] + SR_VEC_PTR_LANES(128, a2, i16)[k + 1];
    v17 = SR_VEC_PTR_LANES(128, a2, i16)[k + 1] - SR_VEC_PTR_LANES(128, a3, i16)[k + 1];
    if ( v12 <= 0x7FFF )
    {
      if ( v12 >= -32768 )
        v23 = SR_VEC_PTR_LANES(128, a3, i16)[k + 1] + SR_VEC_PTR_LANES(128, a2, i16)[k + 1];
      else
        v23 = 0x8000;
      v24 = v23;
    }
    else
    {
      v24 = 0x7FFF;
    }
    SR_VEC_PTR_LANES(128, a2, i16)[k + 1] = v24;
    if ( v17 <= 0x7FFF )
    {
      if ( v17 >= -32768 )
        v25 = v17;
      else
        v25 = 0x8000;
      v26 = v25;
    }
    else
    {
      v26 = 0x7FFF;
    }
    SR_VEC_PTR_LANES(128, a3, i16)[k + 1] = v26;
  }
  return result;
}
