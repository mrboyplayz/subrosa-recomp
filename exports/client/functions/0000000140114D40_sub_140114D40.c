/* Address: 0x140114d40 | Name: sub_140114D40 | Size: 334 bytes */
__int64 __fastcall sub_140114D40(_DWORD *a1, __int64 a2)
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
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __m128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h]

  sub_14010E370(&v17, a2);
  v3 = fabs(v17.m128_f32[1]);
  v4 = fabs(v17.m128_f32[2]);
  v5 = fabs(v17.m128_f32[0]);
  v6 = v3 < v5;
  v7 = v3 == v5;
  v8 = fmax(v3, v5);
  v9 = fabs(v17.m128_f32[3]);
  v10 = !v6 && !v7;
  v11 = v4 <= v8;
  v12 = fmax(v4, v8);
  if ( !v11 )
    v10 = 2;
  if ( v9 > v12 )
    v10 = 3;
  if ( v17.m128_f32[v10] < 0.0 )
    v17 = _mm_xor_ps(v17, (__m128)xmmword_140279870);
  v13 = dword_140301DC8;
  v14 = 1;
  *a1 = v10;
  if ( (_DWORD)v13 != (_DWORD)v10 )
  {
    v14 = 2;
    a1[1] = (int)(v17.m128_f32[v13] * 5791.911644699011);
  }
  if ( dword_140301DCC != (_DWORD)v10 )
    a1[v14++] = (int)(v17.m128_f32[dword_140301DCC] * 5791.911644699011);
  if ( dword_140301DD0 != (_DWORD)v10 )
    a1[v14++] = (int)(v17.m128_f32[dword_140301DD0] * 5791.911644699011);
  if ( dword_140301DD4 != (_DWORD)v10 )
    a1[v14] = (int)(v17.m128_f32[dword_140301DD4] * 5791.911644699011);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v16 ^ v18);
}

