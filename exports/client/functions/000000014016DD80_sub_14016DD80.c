/* Address: 0x14016dd80 | Name: sub_14016DD80 | Size: 555 bytes */
unsigned __int64 __fastcall sub_14016DD80(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  int v4; // ebx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __m128i si128; // xmm3
  __int64 v10; // rdi
  __m128i v11; // xmm4
  __int64 v12; // rcx
  __int64 v13; // rdx
  __m128i v14; // xmm5
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm2
  __m128i v22; // xmm1
  __m128i v23; // xmm0
  __m128i v24; // xmm2
  __m128i v25; // xmm2
  __int64 v26; // rcx
  unsigned __int8 *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // r10
  __int64 v30; // r9
  int v31; // ecx
  int v32; // r8d

  v4 = 0;
  if ( a4 >= 16 && dword_140302080 >= 2 )
  {
    v7 = a4 - 1LL;
    v8 = v7 + a1;
    if ( (a1 > v7 + a3 || v8 < a3) && (a1 > v7 + a2 || v8 < a2) )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_140278F60);
      v10 = a3 + 4;
      v11 = _mm_load_si128((const __m128i *)&xmmword_140278F10);
      v12 = a2 - a3;
      v13 = a1 - a3;
      v14 = _mm_cvtsi32_si128(2u);
      do
      {
        v15 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 4));
        v10 += 16;
        v4 += 16;
        v16 = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(v15), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 20)))),
                      v11),
                    v14),
                  216),
                216);
        v17 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 16));
        v18 = _mm_and_si128(_mm_shuffle_epi32(v16, 216), (__m128i)xmmword_1402791D0);
        *(_DWORD *)(v13 + v10 - 20) = _mm_cvtsi128_si32(_mm_packus_epi16(v18, v18));
        v19 = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(v17), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 16)))),
                      v11),
                    v14),
                  216),
                216);
        v20 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 12));
        v21 = _mm_and_si128(_mm_shuffle_epi32(v19, 216), (__m128i)xmmword_1402791D0);
        *(_DWORD *)(v13 + v10 - 16) = _mm_cvtsi128_si32(_mm_packus_epi16(v21, v21));
        v22 = _mm_shufflehi_epi16(
                _mm_shufflelo_epi16(
                  _mm_sra_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_mullo_epi32(_mm_cvtepu8_epi32(v20), si128),
                        _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 12)))),
                      v11),
                    v14),
                  216),
                216);
        v23 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + v10 - 8));
        v24 = _mm_and_si128(_mm_shuffle_epi32(v22, 216), (__m128i)xmmword_1402791D0);
        *(_DWORD *)(v13 + v10 - 12) = _mm_cvtsi128_si32(_mm_packus_epi16(v24, v24));
        v25 = _mm_and_si128(
                _mm_shuffle_epi32(
                  _mm_shufflehi_epi16(
                    _mm_shufflelo_epi16(
                      _mm_sra_epi32(
                        _mm_add_epi32(
                          _mm_add_epi32(
                            _mm_mullo_epi32(_mm_cvtepu8_epi32(v23), si128),
                            _mm_cvtepu8_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v10 - 8)))),
                          v11),
                        v14),
                      216),
                    216),
                  216),
                (__m128i)xmmword_1402791D0);
        *(_DWORD *)(v13 + v10 - 8) = _mm_cvtsi128_si32(_mm_packus_epi16(v25, v25));
      }
      while ( (__int64)(-4LL - a3 + v10) < (__int64)(a4 & 0xFFFFFFFFFFFFFFF0uLL) );
    }
  }
  v26 = v4;
  if ( v4 < (__int64)a4 )
  {
    v27 = (unsigned __int8 *)(v4 + a3);
    v28 = a1 - a3;
    v29 = a2 - a3;
    v30 = a4 - v26;
    do
    {
      v31 = v27[v29];
      v32 = *v27++;
      v27[v28 - 1] = (unsigned int)(3 * v31 + v32 + 2) >> 2;
      --v30;
    }
    while ( v30 );
  }
  return a1;
}

