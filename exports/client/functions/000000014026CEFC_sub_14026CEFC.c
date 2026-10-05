/* Address: 0x14026cefc | Name: sub_14026CEFC | Size: 121 bytes */
const __m128i *__fastcall MEMORY[0x14026CEFC](const __m128i *a1, unsigned __int16 a2)
{
  __int64 v3; // r9
  __m128i v4; // xmm2
  __m128i v5; // xmm0
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  _WORD *v9; // r8

  v3 = 0;
  v4 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(a2), 0), 0);
  while ( ((unsigned __int16)a1 & 0xFFFu) > 0xFF0uLL )
  {
    if ( a1->m128i_i16[0] == a2 )
      return a1;
    if ( !a1->m128i_i16[0] )
      return nullptr;
    v7 = 2;
LABEL_8:
    a1 = (const __m128i *)((char *)a1 + v7);
  }
  v5 = _mm_loadu_si128(a1);
  v6 = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi16((__m128i)0LL, v5), _mm_cmpeq_epi16(v5, v4)));
  if ( !v6 )
  {
    v7 = 16;
    goto LABEL_8;
  }
  _BitScanForward((unsigned int *)&v8, v6);
  v9 = (__int16 *)((char *)a1->m128i_i16 + v8);
  if ( *v9 == a2 )
    return (const __m128i *)v9;
  return (const __m128i *)v3;
}

