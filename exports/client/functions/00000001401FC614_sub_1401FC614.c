/* Address: 0x1401fc614 | Name: sub_1401FC614 | Size: 506 bytes */
const __m128i *__fastcall sub_1401FC614(const __m128i *a1, const __m128i *a2)
{
  int v2; // edi
  const __m128i *v4; // r8
  __m128i v6; // xmm3
  __m128i v7; // xmm1
  __int64 v8; // rax
  const __m128i *v9; // rdx
  const __m128i *i; // r9
  __m128i v11; // xmm0
  unsigned int v12; // eax
  __int64 v13; // rcx
  __m128i inserted; // xmm0
  const __m128i *v15; // rcx
  __int8 v16; // dl
  __int64 v17; // r9
  __int8 v18; // si
  const __m128i *v19; // rax
  __m128i v20; // xmm1
  unsigned __int8 v21; // cf
  const __m128i *v22; // rdx
  const __m128i *j; // r9
  __m128i v24; // xmm1
  __m128i v25; // xmm2
  unsigned __int8 v26; // sf
  __int64 v27; // rax

  v2 = a2->m128i_u8[0];
  v4 = a1;
  if ( !(_BYTE)v2 )
    return a1;
  if ( dword_140302080 < 2 )
  {
    v6 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v2 | (unsigned int)(v2 << 8)), 0), 0);
    while ( 1 )
    {
      if ( ((unsigned __int16)v4 & 0xFFFu) > 0xFF0uLL )
        goto LABEL_9;
      v7 = _mm_loadu_si128(v4);
      LODWORD(v8) = _mm_movemask_epi8(_mm_or_si128(_mm_cmpeq_epi8(v7, (__m128i)0LL), _mm_cmpeq_epi8(v7, v6)));
      if ( (_DWORD)v8 )
      {
        _BitScanForward((unsigned int *)&v8, v8);
        v4 = (const __m128i *)((char *)v4 + v8);
LABEL_9:
        if ( !v4->m128i_i8[0] )
          return nullptr;
        if ( (_BYTE)v2 == v4->m128i_i8[0] )
        {
          v9 = v4;
          for ( i = a2; ; i = (const __m128i *)((char *)i + 1) )
          {
            while ( 2 )
            {
              if ( ((unsigned __int16)i & 0xFFFu) <= 0xFF0uLL && ((unsigned __int16)v9 & 0xFFFu) <= 0xFF0uLL )
              {
                v11 = _mm_loadu_si128(i);
                v12 = _mm_movemask_epi8(
                        _mm_or_si128(
                          _mm_cmpeq_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v9), v11), (__m128i)0LL),
                          _mm_cmpeq_epi8(v11, (__m128i)0LL)));
                if ( !v12 )
                {
                  ++v9;
                  ++i;
                  continue;
                }
                _BitScanForward((unsigned int *)&v13, v12);
                v9 = (const __m128i *)((char *)v9 + v13);
                i = (const __m128i *)((char *)i + v13);
              }
              break;
            }
            if ( !i->m128i_i8[0] )
              return v4;
            if ( v9->m128i_i8[0] != i->m128i_i8[0] )
              break;
            v9 = (const __m128i *)((char *)v9 + 1);
          }
        }
        v4 = (const __m128i *)((char *)v4 + 1);
      }
      else
      {
        ++v4;
      }
    }
  }
  if ( ((unsigned __int16)a2 & 0xFFFu) > 0xFF0uLL )
  {
    inserted = 0;
    v15 = a2;
    v16 = a2->m128i_i8[0];
    v17 = 16;
    do
    {
      v18 = v16;
      inserted = _mm_insert_epi8(_mm_srli_si128(inserted, 1), v16, 15);
      if ( v16 )
        v16 = v15->m128i_i8[1];
      v19 = (const __m128i *)&v15->m128i_i8[1];
      if ( !v18 )
        v19 = v15;
      v15 = v19;
      --v17;
    }
    while ( v17 );
  }
  else
  {
    inserted = _mm_loadu_si128(a2);
  }
  while ( 1 )
  {
    while ( ((unsigned __int16)v4 & 0xFFFu) > 0xFF0uLL )
    {
      if ( !v4->m128i_i8[0] )
        return nullptr;
      if ( v4->m128i_i8[0] == (_BYTE)v2 )
        goto LABEL_35;
LABEL_43:
      v4 = (const __m128i *)((char *)v4 + 1);
    }
    v20 = _mm_loadu_si128(v4);
    v21 = _mm_cmpistrc(inserted, v20, 12);
    if ( v21 | _mm_cmpistrz(inserted, v20, 12) )
      break;
    ++v4;
  }
  if ( v21 )
  {
    v4 = (const __m128i *)((char *)v4 + _mm_cmpistri(inserted, v20, 12));
LABEL_35:
    v22 = v4;
    for ( j = a2; ; j = (const __m128i *)((char *)j + v27) )
    {
      if ( ((unsigned __int16)v22 & 0xFFFu) > 0xFF0uLL || ((unsigned __int16)j & 0xFFFu) > 0xFF0uLL )
      {
        if ( !j->m128i_i8[0] )
          return v4;
        if ( v22->m128i_i8[0] != j->m128i_i8[0] )
          goto LABEL_43;
        v27 = 1;
      }
      else
      {
        v24 = _mm_loadu_si128(v22);
        v25 = _mm_loadu_si128(j);
        v26 = _mm_cmpistrs(v25, v24, 12);
        if ( !_mm_cmpistro(v25, v24, 12) )
          goto LABEL_43;
        if ( v26 )
          return v4;
        v27 = 16;
      }
      v22 = (const __m128i *)((char *)v22 + v27);
    }
  }
  return nullptr;
}

