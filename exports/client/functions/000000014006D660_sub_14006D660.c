/* Address: 0x14006d660 | Name: sub_14006D660 | Size: 710 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_14006D660(double a1, double a2, __int64 a3, float a4, char a5, int a6, int a7, int a8, int a9)
{
  float v9; // xmm2_4
  __m128 v10; // xmm6
  float v11; // xmm8_4
  __m128 v12; // xmm7
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  _DWORD v16[10]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  int v19; // [rsp+40h] [rbp-58h]
  _DWORD v20[4]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]

  v10 = *(__m128 *)&a2;
  v11 = v9;
  v12 = *(__m128 *)&a1;
  v20[0] = a6;
  v20[1] = a7;
  v20[2] = a8;
  v20[3] = a9;
  if ( (a5 & 1) != 0 )
  {
    v12.m128_f32[0] = *(float *)&a1 + (float)(v9 * -0.5);
  }
  else if ( (a5 & 2) != 0 )
  {
    v12.m128_f32[0] = *(float *)&a1 - v9;
  }
  if ( (a5 & 4) != 0 )
  {
    v10.m128_f32[0] = *(float *)&a2 + (float)(a4 * -0.5);
  }
  else if ( (a5 & 8) != 0 )
  {
    v10.m128_f32[0] = *(float *)&a2 - a4;
  }
  v13 = v12;
  v13.m128_f32[0] = v12.m128_f32[0] + v11;
  v19 = 0;
  v14 = v10;
  v14.m128_f32[0] = v10.m128_f32[0] + a4;
  dword_140404A6C[438291425] = 0;
  dword_140404A6C[438291430] = 0;
  dword_140404A6C[438291435] = 0;
  dword_140404A6C[438291440] = 0;
  *(_QWORD *)&dword_140404A6C[438291423] = _mm_unpacklo_ps(v13, v10).m128_u64[0];
  *(_QWORD *)&dword_140404A6C[438291428] = _mm_unpacklo_ps(v13, v14).m128_u64[0];
  *(_QWORD *)&dword_140404A6C[438291433] = _mm_unpacklo_ps(v12, v10).m128_u64[0];
  *(_QWORD *)&dword_140404A6C[438291438] = _mm_unpacklo_ps(v13, v14).m128_u64[0];
  dword_140404A6C[438291445] = 0;
  v18 = 0;
  *(_QWORD *)&dword_140404A6C[438291443] = _mm_unpacklo_ps(v12, v14).m128_u64[0];
  dword_140404A6C[438291418] = v12.m128_i32[0];
  dword_140404A6C[438291419] = v10.m128_i32[0];
  dword_140404A6C[438291417] = 5;
  dword_140404A6C[438291420] = 0;
  *(_QWORD *)&dword_140404A6C[438291421] = 0;
  *(_QWORD *)&dword_140404A6C[438291426] = 0;
  *(_QWORD *)&dword_140404A6C[438291431] = 0;
  *(_QWORD *)&dword_140404A6C[438291436] = 0;
  *(_QWORD *)&dword_140404A6C[438291441] = 0;
  *(_QWORD *)&dword_140404A6C[438291446] = 0;
  dword_140404A6C[438291416] = 6;
  unk_140404170(34962, dword_140404A6C[451221644], a3);
  unk_140404190(34962, 4 * dword_140404A6C[438291416] * dword_140404A6C[438291417], &dword_140404A6C[438291418], 35040);
  unk_1404042E0(dword_140404A6C[451221605]);
  unk_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
  unk_140404238(0);
  unk_140404238(1);
  unk_1404044A8(0, 3, 5126);
  v17 = 12;
  v16[8] = 4 * dword_140404A6C[438291417];
  unk_1404044A8(1, 2, 5126);
  unk_140404470(2, v20);
  qword_140302FF8(4, 0, dword_140404A6C[438291416]);
  unk_140404230(0);
  unk_140404230(1);
  return MEMORY[0x1401F8B20]((unsigned __int64)v16 ^ v21);
}

