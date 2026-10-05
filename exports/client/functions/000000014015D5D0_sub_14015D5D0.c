/* Address: 0x14015d5d0 | Name: sub_14015D5D0 | Size: 352 bytes */
__int64 __fastcall sub_14015D5D0(char *Block, int a2, int a3, int a4)
{
  int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // rdi
  int v9; // ecx
  int v10; // ebx
  __int64 v11; // rdx
  const __m128i *v12; // r9
  __m128i v13; // xmm2
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 i; // rax

  v5 = a4 * a3 * a2;
  v6 = v5;
  v7 = j__malloc_base(v5);
  if ( v7 )
  {
    v9 = 0;
    if ( v5 >= 32 )
    {
      v10 = v5 - (v5 & 0x1F);
      v11 = v7 + 16;
      v12 = (const __m128i *)(Block + 32);
      v13 = _mm_cvtsi32_si128(8u);
      do
      {
        v14 = _mm_loadu_si128(v12 - 2);
        v11 += 32;
        v9 += 32;
        v15 = _mm_loadu_si128(v12 - 1);
        v12 += 4;
        v16 = _mm_and_si128(_mm_srl_epi16(v14, v13), (__m128i)xmmword_1402791D0);
        v17 = _mm_and_si128(_mm_srl_epi16(v15, v13), (__m128i)xmmword_1402791D0);
        *(_QWORD *)(v11 - 48) = _mm_packus_epi16(v16, v16).m128i_u64[0];
        *(_QWORD *)(v11 - 40) = _mm_packus_epi16(v17, v17).m128i_u64[0];
        v18 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128(v12 - 4), v13), (__m128i)xmmword_1402791D0);
        v19 = _mm_and_si128(_mm_srl_epi16(_mm_loadu_si128(v12 - 3), v13), (__m128i)xmmword_1402791D0);
        *(_QWORD *)(v11 - 32) = _mm_packus_epi16(v18, v18).m128i_u64[0];
        *(_QWORD *)(v11 - 24) = _mm_packus_epi16(v19, v19).m128i_u64[0];
      }
      while ( -16 - v7 + v11 < v10 );
    }
    for ( i = v9; i < v6; ++i )
      *(_BYTE *)(i + v7) = Block[2 * i + 1];
    free(Block);
    return v7;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
    return 0;
  }
}

