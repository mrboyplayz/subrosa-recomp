/* Address: 0x140081f20 | Name: sub_140081F20 | Size: 485 bytes */
void __fastcall sub_140081F20(
        float a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __m128d v8; // xmm0
  float v9; // xmm6_4
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  double v13; // xmm9_8
  __int64 v14; // rbx
  float v15; // xmm7_4
  float v16; // xmm8_4
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // xmm0_8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  float v24; // [rsp+20h] [rbp-A8h] BYREF
  float v25; // [rsp+24h] [rbp-A4h]
  int v26; // [rsp+28h] [rbp-A0h]

  unk_140404050(3553, dword_140404A6C[451221642]);
  dword_140404A6C[456807036] = a7;
  v8 = 0;
  *(float *)&dword_140404A6C[456807033] = a4;
  dword_140404A6C[456807034] = a5;
  v9 = 0.0;
  dword_140404A6C[456807035] = a6;
  dword_140404A6C[456217205] = 0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  v26 = 0;
  v8.m128d_f64[0] = MEMORY[0x1401F8A50](v10);
  v13 = a3;
  v14 = 64;
  v15 = v8.m128d_f64[0] * a3 + a1;
  v16 = a2 - _mm_shuffle_pd(v8, v8, 1).m128d_f64[0] * a3;
  do
  {
    v24 = a1;
    v25 = a2;
    sub_14007D520((unsigned int *)&v24, v11, v12);
    v24 = v15;
    v25 = v16;
    sub_14007D520((unsigned int *)&v24, v17, v18);
    v9 = v9 + 0.098174773;
    *(double *)&v20 = MEMORY[0x1401F8A50](v19);
    v15 = *(double *)&v20 * v13 + a1;
    v24 = v15;
    v16 = a2 - _mm_shuffle_pd((__m128d)v20, (__m128d)v20, 1).m128d_f64[0] * v13;
    v25 = v16;
    sub_14007D520((unsigned int *)&v24, v21, v22);
    --v14;
  }
  while ( v14 );
  sub_14006E0D0(v23, v11, v12);
}

