/* Address: 0x140088000 | Name: sub_140088000 | Size: 292 bytes */
void __fastcall sub_140088000(
        float a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v11; // xmm9_4
  __int64 v12; // rcx
  unsigned __int64 v13; // xmm0_8
  unsigned int v14; // xmm1_4
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // [rsp+20h] [rbp-58h] BYREF
  float v21; // [rsp+24h] [rbp-54h]
  int v22; // [rsp+28h] [rbp-50h]

  dword_140404A6C[456807033] = a5;
  v11 = v8;
  dword_140404A6C[456807034] = a6;
  v21 = v8;
  v22 = 0;
  dword_140404A6C[456807035] = a7;
  dword_140404A6C[456807036] = a8;
  v20 = LODWORD(a1);
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  sub_14007D520(&v20, a2, a3);
  *(double *)&v13 = MEMORY[0x1401F8A50](v12);
  *(float *)&v14 = *(double *)&v13 * v9 + a1;
  v21 = v11 - _mm_shuffle_pd((__m128d)v13, (__m128d)v13, 1).m128d_f64[0] * v9;
  v20 = v14;
  sub_14007D520(&v20, v15, v16);
  sub_14006E0D0(v18, v17, v19);
}

