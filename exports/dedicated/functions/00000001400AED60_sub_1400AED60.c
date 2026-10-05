/* Address: 0x1400aed60 | Name: sub_1400AED60 | Size: 334 bytes */
__int64 __fastcall sub_1400AED60(_DWORD *a1, float *a2)
{
  double v3; // xmm1_8
  double v4; // xmm4_8
  double v5; // xmm2_8
  bool v6; // cf
  bool v7; // zf
  double v8; // xmm3_8
  double v9; // xmm1_8
  __int64 v10; // rdx
  bool v11; // cc
  double v12; // xmm4_8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  __m128 v16; // [rsp+20h] [rbp-28h] BYREF

  sub_1400A8390(v16.m128_f32, a2);
  v3 = fabs(v16.m128_f32[1]);
  v4 = fabs(v16.m128_f32[2]);
  v5 = fabs(v16.m128_f32[0]);
  v6 = v3 < v5;
  v7 = v3 == v5;
  v8 = fmax(v3, v5);
  v9 = fabs(v16.m128_f32[3]);
  v10 = !v6 && !v7;
  v11 = v4 <= v8;
  v12 = fmax(v4, v8);
  if ( !v11 )
    v10 = 2;
  if ( v9 > v12 )
    v10 = 3;
  if ( v16.m128_f32[v10] < 0.0 )
    v16 = _mm_xor_ps(v16, (__m128)xmmword_1400F7F50);
  v13 = dword_140148130;
  v14 = 1;
  *a1 = v10;
  if ( (_DWORD)v13 != (_DWORD)v10 )
  {
    v14 = 2;
    a1[1] = (int)(v16.m128_f32[v13] * 5791.911644699011);
  }
  if ( dword_140148134 != (_DWORD)v10 )
    a1[v14++] = (int)(v16.m128_f32[dword_140148134] * 5791.911644699011);
  if ( dword_140148138 != (_DWORD)v10 )
    a1[v14++] = (int)(v16.m128_f32[dword_140148138] * 5791.911644699011);
  result = dword_14014813C;
  if ( dword_14014813C != (_DWORD)v10 )
  {
    result = (unsigned int)(int)(v16.m128_f32[dword_14014813C] * 5791.911644699011);
    a1[v14] = result;
  }
  return result;
}

