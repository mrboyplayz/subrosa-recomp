/* Address: 0x14006cff0 | Name: sub_14006CFF0 | Size: 771 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall sub_14006CFF0(double a1, double a2, __int64 a3, float a4, char a5, int a6, int a7, int a8, int a9)
{
  float v9; // xmm2_4
  __m128 v10; // xmm7
  __m128 v11; // xmm6
  __m128 v12; // xmm1
  unsigned __int64 v13; // xmm0_8
  __int64 v14; // rax
  _DWORD v16[10]; // [rsp+8h] [rbp-61h] BYREF
  __int64 v17; // [rsp+30h] [rbp-39h]
  __int64 v18; // [rsp+38h] [rbp-31h]
  __int64 v19; // [rsp+40h] [rbp-29h]
  int v20; // [rsp+48h] [rbp-21h]
  _DWORD v21[4]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v22; // [rsp+60h] [rbp-9h]

  v10 = *(__m128 *)&a1;
  v11 = *(__m128 *)&a2;
  v21[0] = a6;
  v21[1] = a7;
  v21[2] = a8;
  v21[3] = a9;
  if ( (a5 & 1) != 0 )
  {
    v10.m128_f32[0] = *(float *)&a1 + (float)(v9 * -0.5);
  }
  else if ( (a5 & 2) != 0 )
  {
    v10.m128_f32[0] = *(float *)&a1 - v9;
  }
  if ( (a5 & 4) != 0 )
  {
    v11.m128_f32[0] = *(float *)&a2 + (float)(a4 * -0.5);
  }
  else if ( (a5 & 8) != 0 )
  {
    v11.m128_f32[0] = *(float *)&a2 - a4;
  }
  v12 = v10;
  dword_140404A6C[438291419] = v11.m128_i32[0];
  v12.m128_f32[0] = v10.m128_f32[0] + v9;
  v20 = 0;
  dword_140404A6C[438291418] = v10.m128_i32[0];
  dword_140404A6C[438291417] = 5;
  LODWORD(v18) = 0;
  dword_140404A6C[438291420] = 0;
  v13 = _mm_unpacklo_ps(v12, v11).m128_u64[0];
  v11.m128_f32[0] = v11.m128_f32[0] + a4;
  *(_QWORD *)&dword_140404A6C[438291423] = v13;
  dword_140404A6C[438291425] = 0;
  dword_140404A6C[438291430] = 0;
  *(float *)&v19 = v10.m128_f32[0] + v9;
  HIDWORD(v19) = v11.m128_i32[0];
  *(_QWORD *)&dword_140404A6C[438291428] = _mm_unpacklo_ps(v10, v11).m128_u64[0];
  if ( a5 < 0 )
  {
    *(_QWORD *)&dword_140404A6C[438291421] = (unsigned int)v18;
    *(_QWORD *)&dword_140404A6C[438291426] = 1065353216;
    v14 = 0x3F80000000000000LL;
    v18 = 0x3F8000003F800000LL;
  }
  else
  {
    HIDWORD(v18) = 1065353216;
    *(_QWORD *)&dword_140404A6C[438291421] = v18;
    *(_QWORD *)&dword_140404A6C[438291426] = 0x3F8000003F800000LL;
    v14 = 0;
    v18 = 1065353216;
  }
  *(_QWORD *)&dword_140404A6C[438291431] = v14;
  dword_140404A6C[438291435] = 0;
  *(_QWORD *)&dword_140404A6C[438291436] = v18;
  *(_QWORD *)&dword_140404A6C[438291433] = v19;
  dword_140404A6C[438291416] = 4;
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
  unk_140404470(2, v21);
  qword_140302FF8(5, 0, dword_140404A6C[438291416]);
  unk_140404230(0);
  unk_140404230(1);
  return MEMORY[0x1401F8B20]((unsigned __int64)v16 ^ v22);
}

