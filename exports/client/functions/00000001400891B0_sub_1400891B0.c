/* Address: 0x1400891b0 | Name: sub_1400891B0 | Size: 638 bytes */
void __fastcall sub_1400891B0(
        float a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        float a8)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  signed int v12; // ebx
  signed int v14; // edi
  double v15; // xmm9_8
  double v16; // xmm11_8
  double v17; // xmm12_8
  __m128i v18; // xmm0
  float v19; // xmm6_4
  __int64 v20; // rcx
  double v21; // xmm0_8
  double v22; // xmm2_8
  unsigned int v23; // xmm1_4
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __m128i v27; // xmm0
  float v28; // xmm6_4
  double v29; // xmm0_8
  double v30; // xmm2_8
  unsigned int v31; // xmm1_4
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // [rsp+20h] [rbp-B8h] BYREF
  float v36; // [rsp+24h] [rbp-B4h]
  int v37; // [rsp+28h] [rbp-B0h]

  unk_140404050(3553, dword_140404A6C[451221642]);
  v12 = 0;
  v14 = 63;
  v15 = a3;
  dword_140404A6C[456217205] = 0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  *(float *)&dword_140404A6C[456807033] = a4;
  dword_140404A6C[456807034] = a5;
  dword_140404A6C[456807035] = a6;
  dword_140404A6C[456807036] = a7;
  v37 = 0;
  v16 = a1;
  v17 = a2;
  do
  {
    if ( v12 >= 32 )
      v18 = _mm_cvtsi32_si128(v14 + 1);
    else
      v18 = _mm_cvtsi32_si128(v12);
    v35 = LODWORD(a1);
    v36 = a2;
    v19 = 1.75 - (float)(_mm_cvtepi32_ps(v18).m128_f32[0] * 0.25);
    sub_14007D520(&v35, v10, v11);
    v21 = MEMORY[0x1401F8A50](v20);
    v22 = fmaxf(v19, 1.0);
    *(float *)&v23 = v21 * v15 * v22 + v16;
    *(float *)&v21 = v17
                   - _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v21, (__m128d)*(unsigned __int64 *)&v21, 1).m128d_f64[0]
                   * v15
                   * v22;
    v35 = v23;
    v36 = *(float *)&v21;
    sub_14007D520(&v35, v24, v25);
    a8 = a8 + 0.098174773;
    if ( ++v12 >= 32 )
      v27 = _mm_cvtsi32_si128(v14);
    else
      v27 = _mm_cvtsi32_si128(v12);
    v28 = 1.75 - (float)(_mm_cvtepi32_ps(v27).m128_f32[0] * 0.25);
    v29 = MEMORY[0x1401F8A50](v26);
    v30 = fmaxf(v28, 1.0);
    *(float *)&v31 = v29 * v15 * v30 + v16;
    *(float *)&v29 = v17
                   - _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v29, (__m128d)*(unsigned __int64 *)&v29, 1).m128d_f64[0]
                   * v15
                   * v30;
    v35 = v31;
    v36 = *(float *)&v29;
    sub_14007D520(&v35, v32, v33);
    --v14;
  }
  while ( v14 > -1 );
  sub_14006E0D0(v34, v10, v11);
}

