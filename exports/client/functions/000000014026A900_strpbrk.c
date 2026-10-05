/* Address: 0x14026a900 | Name: strpbrk | Size: 992 bytes */
char *__cdecl strpbrk(const char *Str, const char *Control)
{
  __int64 v2; // r11
  const __m128i *v3; // rdi
  char *v4; // r8
  __m128i v5; // xmm1
  unsigned int v6; // eax
  unsigned int v7; // r9d
  BOOL v8; // r10d
  __m128i v9; // xmm2
  unsigned int v10; // eax
  unsigned int v12; // ecx
  char v13; // al
  __m128i v14; // xmm0
  __m128i v15; // xmm0

  v2 = (unsigned __int8)Control & 0xF;
  v3 = (const __m128i *)&Control[-v2];
  v4 = (char *)Str;
  v5 = _mm_loadu_si128((const __m128i *)&Control[-v2]);
  switch ( (unsigned __int8)Control & 0xF )
  {
    case 1:
      v5 = _mm_srli_si128(v5, 1);
      break;
    case 2:
      v5 = _mm_srli_si128(v5, 2);
      break;
    case 3:
      v5 = _mm_srli_si128(v5, 3);
      break;
    case 4:
      v5 = _mm_srli_si128(v5, 4);
      break;
    case 5:
      v5 = _mm_srli_si128(v5, 5);
      break;
    case 6:
      v5 = _mm_srli_si128(v5, 6);
      break;
    case 7:
      v5 = _mm_srli_si128(v5, 7);
      break;
    case 8:
      v5 = _mm_srli_si128(v5, 8);
      break;
    case 9:
      v5 = _mm_srli_si128(v5, 9);
      break;
    case 0xA:
      v5 = _mm_srli_si128(v5, 10);
      break;
    case 0xB:
      v5 = _mm_srli_si128(v5, 11);
      break;
    case 0xC:
      v5 = _mm_srli_si128(v5, 12);
      break;
    case 0xD:
      v5 = _mm_srli_si128(v5, 13);
      break;
    case 0xE:
      v5 = _mm_srli_si128(v5, 14);
      break;
    case 0xF:
      v5 = _mm_srli_si128(v5, 15);
      break;
    default:
      break;
  }
  v6 = _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, v5));
  if ( v6 )
  {
    _BitScanForward(&v7, v6);
    v8 = ((unsigned __int8)Control & 0xF) == 0 || v7 < (unsigned __int64)(16 - v2);
    if ( 15 - v7 <= 0xF )
    {
      switch ( 15 - v7 )
      {
        case 0u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 1), 1);
          break;
        case 1u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 2), 2);
          break;
        case 2u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 3), 3);
          break;
        case 3u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 4), 4);
          break;
        case 4u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 5), 5);
          break;
        case 5u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 6), 6);
          break;
        case 6u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 7), 7);
          break;
        case 7u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 8), 8);
          break;
        case 8u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 9), 9);
          break;
        case 9u:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 10), 10);
          break;
        case 0xAu:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 11), 11);
          break;
        case 0xBu:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 12), 12);
          break;
        case 0xCu:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 13), 13);
          break;
        case 0xDu:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 14), 14);
          break;
        case 0xEu:
          v5 = _mm_srli_si128(_mm_slli_si128(v5, 15), 15);
          break;
        case 0xFu:
          v5 = 0;
          break;
      }
    }
    if ( !v8 )
      goto LABEL_40;
  }
  else
  {
    if ( ((unsigned __int8)Control & 0xF) != 0 )
    {
LABEL_40:
      v9 = _mm_loadu_si128(v3 + 1);
      v10 = _mm_movemask_epi8(_mm_cmpeq_epi8(v9, (__m128i)0LL));
      if ( !v10 )
        return (char *)unknown_libname_943(v4, (unsigned __int8 *)Control);
      _BitScanForward(&v12, v10);
      if ( (unsigned __int64)v12 - v2 < 0xFFFFFFFFFFFFFFF0uLL && v12 - v2 != 0 )
        return (char *)unknown_libname_943(v4, (unsigned __int8 *)Control);
      switch ( 15 - v12 )
      {
        case 0u:
          v9 = _mm_slli_si128(v9, 1);
          break;
        case 1u:
          v9 = _mm_slli_si128(v9, 2);
          break;
        case 2u:
          v9 = _mm_slli_si128(v9, 3);
          break;
        case 3u:
          v9 = _mm_slli_si128(v9, 4);
          break;
        case 4u:
          v9 = _mm_slli_si128(v9, 5);
          break;
        case 5u:
          v9 = _mm_slli_si128(v9, 6);
          break;
        case 6u:
          v9 = _mm_slli_si128(v9, 7);
          break;
        case 7u:
          v9 = _mm_slli_si128(v9, 8);
          break;
        case 8u:
          v9 = _mm_slli_si128(v9, 9);
          break;
        case 9u:
          v9 = _mm_slli_si128(v9, 10);
          break;
        case 0xAu:
          v9 = _mm_slli_si128(v9, 11);
          break;
        case 0xBu:
          v9 = _mm_slli_si128(v9, 12);
          break;
        case 0xCu:
          v9 = _mm_slli_si128(v9, 13);
          break;
        case 0xDu:
          v9 = _mm_slli_si128(v9, 14);
          break;
        case 0xEu:
          v9 = _mm_slli_si128(v9, 15);
          break;
        case 0xFu:
          v9 = 0;
          break;
        default:
          break;
      }
      v5 = _mm_or_si128(v9, v5);
      goto LABEL_64;
    }
    if ( v3->m128i_i8[1] )
      return (char *)unknown_libname_943(Str, (unsigned __int8 *)Control);
  }
LABEL_64:
  v13 = *v4;
  if ( !*v4 )
    return nullptr;
  while ( 1 )
  {
    v14 = _mm_cvtsi32_si128(v13);
    v15 = _mm_unpacklo_epi8(v14, v14);
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi8(v15, v15), 0), v5)) )
      break;
    v13 = *++v4;
    if ( !v13 )
      return nullptr;
  }
  return v4;
}

