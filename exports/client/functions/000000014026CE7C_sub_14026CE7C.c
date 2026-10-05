/* Address: 0x14026ce7c | Name: sub_14026CE7C | Size: 125 bytes */
__int8 *__fastcall MEMORY[0x14026CE7C](__int64 a1, unsigned __int8 a2)
{
  __m128i *v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // r9
  __m128i v5; // xmm2
  __int64 v6; // rdx
  __int8 *v7; // rdx

  v2 = (__m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL);
  v3 = a2 | (a2 << 8);
  v4 = 0;
  v5 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v3), 0), 0);
  for ( LODWORD(v6) = (-1 << (a1 & 0xF))
                    & _mm_movemask_epi8(
                        _mm_or_si128(
                          _mm_cmpeq_epi8(v5, *(__m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL)),
                          _mm_cmpeq_epi8((__m128i)0LL, *(__m128i *)(a1 & 0xFFFFFFFFFFFFFFF0uLL))));
        !(_DWORD)v6;
        LODWORD(v6) = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi8(v5, *v2), _mm_cmpeq_epi8((__m128i)0LL, *v2))) )
  {
    ++v2;
  }
  _BitScanForward((unsigned int *)&v6, v6);
  v7 = &v2->m128i_i8[v6];
  if ( *v7 == (_BYTE)v3 )
    return v7;
  return (__int8 *)v4;
}

