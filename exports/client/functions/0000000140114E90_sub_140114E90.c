/* Address: 0x140114e90 | Name: sub_140114E90 | Size: 391 bytes */
__int64 __fastcall sub_140114E90(_DWORD *a1, __int64 a2, char a3)
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
  __int64 v18; // [rsp+0h] [rbp-58h] BYREF
  __m128 v19; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-20h]

  v4 = 1;
  v5 = (double)(1 << (a3 - 1)) - 1.0;
  sub_14010E370(&v19, a2);
  v6 = fabs(v19.m128_f32[1]);
  v7 = fabs(v19.m128_f32[2]);
  v8 = fabs(v19.m128_f32[0]);
  v9 = v6 < v8;
  v10 = v6 == v8;
  v11 = fmax(v6, v8);
  v12 = fabs(v19.m128_f32[3]);
  v13 = !v9 && !v10;
  v14 = v7 <= v11;
  v15 = fmax(v7, v11);
  if ( !v14 )
    v13 = 2;
  if ( v12 > v15 )
    v13 = 3;
  if ( v19.m128_f32[v13] < 0.0 )
    v19 = _mm_xor_ps(v19, (__m128)xmmword_140279870);
  v16 = dword_140301DE8;
  *a1 = v13;
  if ( (_DWORD)v16 != (_DWORD)v13 )
  {
    v4 = 2;
    a1[1] = (int)(v19.m128_f32[v16] * 0.7071067811865476 * v5);
  }
  if ( dword_140301DEC != (_DWORD)v13 )
    a1[v4++] = (int)(v19.m128_f32[dword_140301DEC] * 0.7071067811865476 * v5);
  if ( dword_140301DF0 != (_DWORD)v13 )
    a1[v4++] = (int)(v19.m128_f32[dword_140301DF0] * 0.7071067811865476 * v5);
  if ( dword_140301DF4 != (_DWORD)v13 )
    a1[v4] = (int)(v19.m128_f32[dword_140301DF4] * 0.7071067811865476 * v5);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v18 ^ v20);
}

