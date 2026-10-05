/* Address: 0x1400aeeb0 | Name: sub_1400AEEB0 | Size: 391 bytes */
__int64 __fastcall sub_1400AEEB0(_DWORD *a1, float *a2, char a3)
{
  __int64 v4; // rbx
  double v5; // xmm6_8
  double v6; // xmm1_8
  double v7; // xmm4_8
  double v8; // xmm2_8
  bool v9; // cf
  bool v10; // zf
  double v11; // xmm3_8
  double v12; // xmm1_8
  __int64 v13; // rcx
  bool v14; // cc
  double v15; // xmm4_8
  __int64 v16; // rax
  __int64 result; // rax
  __m128 v18; // [rsp+20h] [rbp-38h] BYREF

  v4 = 1;
  v5 = (double)(1 << (a3 - 1)) - 1.0;
  sub_1400A8390(v18.m128_f32, a2);
  v6 = fabs(v18.m128_f32[1]);
  v7 = fabs(v18.m128_f32[2]);
  v8 = fabs(v18.m128_f32[0]);
  v9 = v6 < v8;
  v10 = v6 == v8;
  v11 = fmax(v6, v8);
  v12 = fabs(v18.m128_f32[3]);
  v13 = !v9 && !v10;
  v14 = v7 <= v11;
  v15 = fmax(v7, v11);
  if ( !v14 )
    v13 = 2;
  if ( v12 > v15 )
    v13 = 3;
  if ( v18.m128_f32[v13] < 0.0 )
    v18 = _mm_xor_ps(v18, (__m128)xmmword_1400F7F50);
  v16 = dword_140148150;
  *a1 = v13;
  if ( (_DWORD)v16 != (_DWORD)v13 )
  {
    v4 = 2;
    a1[1] = (int)(v18.m128_f32[v16] * 0.7071067811865476 * v5);
  }
  if ( dword_140148154 != (_DWORD)v13 )
    a1[v4++] = (int)(v18.m128_f32[dword_140148154] * 0.7071067811865476 * v5);
  if ( dword_140148158 != (_DWORD)v13 )
    a1[v4++] = (int)(v18.m128_f32[dword_140148158] * 0.7071067811865476 * v5);
  result = dword_14014815C;
  if ( dword_14014815C != (_DWORD)v13 )
  {
    result = (unsigned int)(int)(v18.m128_f32[dword_14014815C] * 0.7071067811865476 * v5);
    a1[v4] = result;
  }
  return result;
}

