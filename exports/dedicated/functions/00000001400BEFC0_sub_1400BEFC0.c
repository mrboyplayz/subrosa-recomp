/* Address: 0x1400befc0 | Name: sub_1400BEFC0 | Size: 759 bytes */
int sub_1400BEFC0()
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
  FILE *v22; // rax
  FILE *v23; // rsi
  int *v24; // rdi
  int v25; // r8d
  int v26; // ecx
  const char *v27; // r9
  unsigned int v28; // edx

  v0 = 0;
  v1 = 0;
  v2 = 0;
  if ( dword_16DDCBA24 >= 8 )
  {
    v3 = 0;
    v4 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1400F8000);
    v6 = 0;
    v7 = _mm_cvtsi32_si128(3u);
    v8 = (unsigned int *)&unk_16DDCBB54;
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
    while ( v6 < dword_16DDCBA24 - dword_16DDCBA24 % 8 );
    v16 = _mm_add_epi32(v15, v3);
    v17 = _mm_add_epi32(v16, _mm_srli_si128(v16, 8));
    v1 = _mm_cvtsi128_si32(_mm_add_epi32(v17, _mm_srli_si128(v17, 4)));
  }
  if ( v2 < dword_16DDCBA24 )
  {
    v18 = (unsigned int *)((char *)&unk_16DDCBA74 + 112 * v2);
    v19 = (unsigned int)(dword_16DDCBA24 - v2);
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
  if ( dword_16DDCBA24 > 0 )
    v21 = v1 / dword_16DDCBA24;
  _chdir(byte_196ABD6C0);
  v22 = fopen("stats.txt", "w");
  v23 = v22;
  if ( v22 )
  {
    sub_14004F330(v22, "numofmissions=%d\r\n", dword_191536C14);
    sub_14004F330(v23, "numofbullets=%d\r\n", dword_191536C10);
    sub_14004F330(v23, "users=%d\r\n", dword_16DDCBA24);
    sub_14004F330(v23, "totaltime=%d\r\n", v1);
    sub_14004F330(v23, "averagetime=%d\r\n", v21);
    sub_14004F330(v23, "\r\n");
    if ( dword_16DDCBA24 > 0 )
    {
      v24 = (int *)&unk_16DDCBA30;
      do
      {
        v25 = v24[24];
        v26 = *v24;
        v27 = (char *)&unk_16DDCBA40 + 112 * v0;
        v28 = v24[17] / 0xAu;
        if ( v25 )
          sub_14004F330(v23, "%d:%s:%d (%d) BANNED %d\r\n", v0, v27, v28, v26, v25);
        else
          sub_14004F330(v23, "%d:%s:%d (%d)\r\n", v0, v27, v28, v26);
        ++v0;
        v24 += 28;
      }
      while ( v0 < dword_16DDCBA24 );
    }
    fclose(v23);
  }
  return _chdir(DstBuf);
}

