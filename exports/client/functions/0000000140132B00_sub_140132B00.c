/* Address: 0x140132b00 | Name: sub_140132B00 | Size: 756 bytes */
__int64 sub_140132B00()
{
  int v0; // ebx
  unsigned int v1; // edi
  int v2; // edx
  __m128i v3; // xmm5
  __m128i v4; // xmm4
  __m128i si128; // xmm6
  __int64 v6; // rcx
  __m128i v7; // xmm7
  unsigned int *v8; // rax
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __m128i v11; // xmm2
  __m128i v12; // xmm3
  __m128i v13; // xmm3
  __m128i v14; // xmm3
  __m128i v15; // xmm0
  __m128i v16; // xmm4
  __m128i v17; // xmm4
  unsigned int *v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // kr00_4
  unsigned int v21; // ebp
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned int *v24; // rdi
  unsigned int v25; // r8d
  unsigned int v26; // ecx
  const char *v27; // r9
  unsigned int v28; // edx

  v0 = 0;
  v1 = 0;
  v2 = 0;
  if ( (int)dword_140404A6C[134050358] >= 8 )
  {
    v3 = 0;
    v4 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_140279930);
    v6 = 0;
    v7 = _mm_cvtsi32_si128(3u);
    v8 = &dword_140404A6C[134050434];
    do
    {
      v9 = _mm_cvtsi32_si128(v8[28]);
      v2 += 8;
      v10 = _mm_cvtsi32_si128(*(v8 - 28));
      v6 += 8;
      v11 = _mm_cvtsi32_si128(*v8);
      v12 = _mm_cvtsi32_si128(*(v8 - 56));
      v8 += 224;
      v13 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v12, v10), _mm_unpacklo_epi32(v11, v9));
      v3 = _mm_add_epi32(
             _mm_srl_epi32(
               (__m128i)_mm_shuffle_ps(
                          (__m128)_mm_mul_epu32(_mm_unpacklo_epi32(v13, v13), si128),
                          (__m128)_mm_mul_epu32(_mm_unpackhi_epi32(v13, v13), si128),
                          221),
               v7),
             v3);
      v14 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v8 - 168)), _mm_cvtsi32_si128(*(v8 - 140))),
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(v8 - 112)), _mm_cvtsi32_si128(*(v8 - 84))));
      v15 = _mm_add_epi32(
              _mm_srl_epi32(
                (__m128i)_mm_shuffle_ps(
                           (__m128)_mm_mul_epu32(_mm_unpacklo_epi32(v14, v14), si128),
                           (__m128)_mm_mul_epu32(_mm_unpackhi_epi32(v14, v14), si128),
                           221),
                v7),
              v4);
      v4 = v15;
    }
    while ( v6 < dword_140404A6C[134050358] - (signed int)dword_140404A6C[134050358] % 8 );
    v16 = _mm_add_epi32(v15, v3);
    v17 = _mm_add_epi32(v16, _mm_srli_si128(v16, 8));
    v1 = _mm_cvtsi128_si32(_mm_add_epi32(v17, _mm_srli_si128(v17, 4)));
  }
  if ( v2 < (int)dword_140404A6C[134050358] )
  {
    v18 = &dword_140404A6C[28 * v2 + 134050378];
    v19 = dword_140404A6C[134050358] - v2;
    do
    {
      v20 = *v18;
      v18 += 28;
      v1 += v20 / 0xA;
      --v19;
    }
    while ( v19 );
  }
  v21 = 0;
  if ( (int)dword_140404A6C[134050358] > 0 )
    v21 = v1 / dword_140404A6C[134050358];
  sub_14024C22C(&dword_140404A6C[278520373]);
  v22 = MEMORY[0x14020B8D8]("stats.txt", "w");
  v23 = v22;
  if ( v22 )
  {
    sub_1400920F0(v22, "numofmissions=%d\r\n", dword_140404A6C[283785906]);
    sub_1400920F0(v23, "numofbullets=%d\r\n", dword_140404A6C[283785905]);
    sub_1400920F0(v23, "users=%d\r\n", dword_140404A6C[134050358]);
    sub_1400920F0(v23, "totaltime=%d\r\n", v1);
    sub_1400920F0(v23, "averagetime=%d\r\n", v21);
    sub_1400920F0(v23, "\r\n");
    if ( (int)dword_140404A6C[134050358] > 0 )
    {
      v24 = &dword_140404A6C[134050361];
      do
      {
        v25 = v24[24];
        v26 = *v24;
        v27 = (const char *)&dword_140404A6C[28 * v0 + 134050365];
        v28 = v24[17] / 0xA;
        if ( v25 )
          sub_1400920F0(v23, "%d:%s:%d (%d) BANNED %d\r\n", v0, v27, v28, v26, v25);
        else
          sub_1400920F0(v23, "%d:%s:%d (%d)\r\n", v0, v27, v28, v26);
        ++v0;
        v24 += 28;
      }
      while ( v0 < (int)dword_140404A6C[134050358] );
    }
    sub_14020B9E8(v23);
  }
  return sub_14024C22C(&dword_140404A6C[278520245]);
}

