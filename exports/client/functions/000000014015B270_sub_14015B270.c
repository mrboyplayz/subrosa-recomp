/* Address: 0x14015b270 | Name: sub_14015B270 | Size: 661 bytes */
__int64 __fastcall sub_14015B270(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v7; // r8d
  __m128i si128; // xmm5
  __m128i v9; // xmm7
  __m128i v10; // xmm8
  __m128i v11; // xmm9
  __m128i v12; // xmm10
  __m128i v13; // xmm11
  __int64 v14; // rax
  __m128i v15; // xmm2
  __m128i v16; // xmm4
  __m128i v17; // xmm1
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm1
  __m128i v21; // xmm3
  __int64 result; // rax
  __int8 *v23; // r11
  __int64 v24; // rbp
  __int64 v25; // rsi
  unsigned __int8 *v26; // rbx
  __int64 v27; // rdi
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  int v31; // r10d
  int v32; // edx
  char v33; // cl
  char v34; // cl
  unsigned int v35; // ecx

  v7 = 0;
  if ( a6 == 4 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_140279880);
    v9 = _mm_load_si128((const __m128i *)&xmmword_140279240);
    v10 = _mm_load_si128((const __m128i *)&xmmword_140279970);
    v11 = _mm_load_si128((const __m128i *)&xmmword_140279990);
    v12 = _mm_load_si128((const __m128i *)&xmmword_140279250);
    v13 = _mm_load_si128((const __m128i *)&xmmword_1402791D0);
    if ( a5 > 7 )
    {
      do
      {
        v14 = v7;
        v7 += 8;
        v15 = _mm_unpacklo_epi8((__m128i)0LL, _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(v14 + a4)), si128));
        v16 = _mm_unpacklo_epi8((__m128i)0LL, _mm_xor_si128(_mm_loadl_epi64((const __m128i *)(v14 + a3)), si128));
        v17 = _mm_srli_epi16(_mm_unpacklo_epi8(si128, _mm_loadl_epi64((const __m128i *)(v14 + a2))), 4u);
        v18 = _mm_packus_epi16(
                _mm_srai_epi16(_mm_add_epi16(_mm_mulhi_epi16(v15, v9), v17), 4u),
                _mm_srai_epi16(_mm_add_epi16(_mm_mulhi_epi16(v16, v12), v17), 4u));
        v19 = _mm_packus_epi16(
                _mm_srai_epi16(
                  _mm_add_epi16(_mm_add_epi16(_mm_mulhi_epi16(v16, v11), v17), _mm_mulhi_epi16(v15, v10)),
                  4u),
                v13);
        v20 = _mm_unpacklo_epi8(v18, v19);
        v21 = _mm_unpackhi_epi8(v18, v19);
        *a1 = _mm_unpacklo_epi16(v20, v21);
        a1[1] = _mm_unpackhi_epi16(v20, v21);
        a1 += 2;
      }
      while ( v7 + 7 < a5 );
    }
  }
  result = v7;
  if ( v7 < (__int64)a5 )
  {
    v23 = &a1->m128i_i8[2];
    v24 = a2 - a4;
    v25 = a3 - a4;
    v26 = (unsigned __int8 *)(v7 + a4);
    v27 = a5 - (__int64)v7;
    do
    {
      v28 = *v26;
      v29 = v26[v25];
      v30 = (v26[v24] << 20) + 0x80000;
      v31 = (v30 + 1470208 * (v28 - 128)) >> 20;
      v32 = (int)(v30 + ((360960 * (128 - v29)) & 0xFFFF0000) + 748800 * (128 - v28)) >> 20;
      result = (unsigned int)((v30 + 1858048 * (v29 - 128)) >> 20);
      if ( (unsigned int)v31 > 0xFF )
      {
        v33 = -1;
        if ( v31 < 0 )
          v33 = 0;
        LOBYTE(v31) = v33;
      }
      if ( (unsigned int)v32 > 0xFF )
      {
        v34 = -1;
        if ( v32 < 0 )
          v34 = 0;
        LOBYTE(v32) = v34;
      }
      if ( (unsigned int)result > 0xFF )
      {
        v35 = 255;
        if ( (int)result < 0 )
          v35 = 0;
        result = v35;
      }
      *(v23 - 2) = v31;
      ++v26;
      *(v23 - 1) = v32;
      *v23 = result;
      v23[1] = -1;
      v23 += a6;
      --v27;
    }
    while ( v27 );
  }
  return result;
}

