/* Address: 0x14016db80 | Name: sub_14016DB80 | Size: 498 bytes */
__m128i *__fastcall sub_14016DB80(__m128i *a1, unsigned __int8 *a2, const __m128i *a3, int a4)
{
  __int64 v5; // r14
  int v7; // r9d
  unsigned int v9; // edx
  unsigned int v10; // eax
  __m128i si128; // xmm5
  unsigned __int8 *v13; // r10
  __int64 v14; // r8
  __m128i *v15; // rbp
  unsigned int v16; // eax
  const __m128i *v17; // r11
  __int64 v18; // r15
  int v19; // eax
  __m128i v20; // xmm0
  __m128i v21; // xmm3
  __m128i v22; // xmm0
  __m128i v23; // xmm3
  __m128i v24; // xmm0
  __m128i v25; // xmm2
  __m128i v26; // xmm1
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rbx
  unsigned __int8 *v30; // r9
  __int64 v31; // r11
  __int8 *v32; // r10
  int v33; // ecx
  int v34; // r8d
  int v35; // eax

  v5 = a4;
  v7 = 0;
  v9 = a3->m128i_u8[0] + 3 * *a2;
  if ( (_DWORD)v5 == 1 )
  {
    v10 = (v9 + 2) >> 2;
    a1->m128i_i8[1] = v10;
    a1->m128i_i8[0] = v10;
    return a1;
  }
  else
  {
    if ( (int)v5 - 1 >= 0 && (((_DWORD)v5 - 1) & 0xFFFFFFF8) != 0 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_1402791C0);
      v13 = &a3->m128i_u8[8];
      v14 = a2 - (unsigned __int8 *)a3;
      v15 = a1;
      v16 = (((((_DWORD)v5 - 1) & 0xFFFFFFF8) - 1) >> 3) + 1;
      v17 = a3;
      v18 = v16;
      v7 = 8 * v16;
      do
      {
        v19 = v13[v14];
        ++v15;
        v20 = _mm_loadl_epi64((const __m128i *)((char *)v17 + v14));
        v13 += 8;
        v21 = _mm_loadl_epi64(v17);
        v17 = (const __m128i *)((char *)v17 + 8);
        v22 = _mm_unpacklo_epi8(v20, (__m128i)0LL);
        v23 = _mm_add_epi16(_mm_sub_epi16(_mm_unpacklo_epi8(v21, (__m128i)0LL), v22), _mm_slli_epi16(v22, 2u));
        v24 = _mm_add_epi16(_mm_slli_epi16(v23, 2u), si128);
        v25 = _mm_add_epi16(_mm_sub_epi16(_mm_insert_epi16(_mm_slli_si128(v23, 2), v9, 0), v23), v24);
        v26 = _mm_add_epi16(
                _mm_sub_epi16(_mm_insert_epi16(_mm_srli_si128(v23, 2), (unsigned int)*(v13 - 8) + 3 * v19, 7), v23),
                v24);
        v15[-1] = _mm_packus_epi16(
                    _mm_srli_epi16(_mm_unpacklo_epi16(v25, v26), 4u),
                    _mm_srli_epi16(_mm_unpackhi_epi16(v25, v26), 4u));
        v9 = *(v13 - 9) + 3 * v13[v14 - 9];
        --v18;
      }
      while ( v18 );
    }
    v27 = a3->m128i_u8[v7] + 3 * a2[v7];
    v28 = v7 + 1;
    a1[v7 / 8u].m128i_i8[0] = (v27 + v9 + 8 + 2 * v27) >> 4;
    if ( v7 + 1 < v5 )
    {
      v29 = a2 - (unsigned __int8 *)a3;
      v30 = &a3->m128i_u8[v28];
      v31 = v5 - v28;
      v32 = &a1->m128i_i8[2 * v28];
      do
      {
        v33 = *v30;
        v32 += 2;
        v34 = v27;
        v35 = (v30++)[v29];
        v27 = v33 + 3 * v35;
        *(v32 - 3) = (unsigned int)(v34 + v27 + 2 * (v34 + 4)) >> 4;
        *(v32 - 2) = (unsigned int)(v27 + v34 + 2 * (v27 + 4)) >> 4;
        --v31;
      }
      while ( v31 );
    }
    a1->m128i_i8[2 * (int)v5 - 1] = (unsigned int)(v27 + 2) >> 2;
    return a1;
  }
}

