/* Address: 0x140081da0 | Name: sub_140081DA0 | Size: 379 bytes */
void __fastcall sub_140081DA0(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  float v7; // xmm0_4
  float v8; // xmm7_4
  __m128d v9; // xmm0
  float v10; // xmm9_4
  __int64 v11; // rdx
  __int64 v12; // r8
  double v13; // xmm6_8
  __int64 v14; // rbx
  double v15; // xmm8_8
  double v16; // xmm7_8
  unsigned int v17; // xmm1_4
  __int64 v18; // rcx
  double v19; // xmm0_8
  unsigned int v20; // xmm1_4
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-68h] BYREF
  int v25; // [rsp+24h] [rbp-64h]
  int v26; // [rsp+28h] [rbp-60h]

  v8 = v7;
  *(float *)&dword_140404A6C[456807033] = a4;
  dword_140404A6C[456807034] = a5;
  v9 = 0;
  v10 = 0.0;
  dword_140404A6C[456807035] = a6;
  dword_140404A6C[456807036] = a7;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  v9.m128d_f64[0] = MEMORY[0x1401F8A50](a1);
  v13 = a3;
  v26 = 0;
  v14 = 64;
  v15 = a2;
  v16 = v8;
  *(float *)&v17 = v9.m128d_f64[0] * a3 + v16;
  *(float *)v9.m128d_f64 = v15 - _mm_shuffle_pd(v9, v9, 1).m128d_f64[0] * a3;
  v24 = v17;
  v25 = LODWORD(v9.m128d_f64[0]);
  do
  {
    sub_14007D520(&v24, v11, v12);
    v10 = v10 + 0.098174773;
    v19 = MEMORY[0x1401F8A50](v18);
    *(float *)&v20 = v19 * v13 + v16;
    v24 = v20;
    *(float *)&v19 = v15
                   - _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v19, (__m128d)*(unsigned __int64 *)&v19, 1).m128d_f64[0]
                   * v13;
    v25 = LODWORD(v19);
    sub_14007D520(&v24, v21, v22);
    --v14;
  }
  while ( v14 );
  sub_14006E0D0(v23, v11, v12);
}

