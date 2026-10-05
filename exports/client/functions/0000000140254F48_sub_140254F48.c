/* Address: 0x140254f48 | Name: sub_140254F48 | Size: 470 bytes */
__int64 __fastcall MEMORY[0x140254F48](__m128i *a1, unsigned __int64 a2)
{
  __m128i *v5; // rax
  __m128i *i; // rdx
  __m128i *v7; // rdx
  unsigned __int64 v8; // r11
  __m128i *v9; // rax
  __int64 v10; // rdx
  __m128i *v11; // r9
  __m128i *j; // rdx
  __m128i *v14; // rax
  __m128i *v15; // rdx
  unsigned __int64 v16; // r11
  __m128i *v17; // rax
  __m128i *v18; // rdx
  __m128i *v19; // rax

  if ( dword_140302080 < 5 )
  {
    if ( dword_140302080 < 1 )
    {
      v19 = (__m128i *)((char *)a1 + 2 * a2);
      for ( i = a1; i != v19; i = (__m128i *)((char *)i + 2) )
      {
        if ( !i->m128i_i16[0] )
          break;
      }
      return ((char *)i - (char *)a1) >> 1;
    }
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      v14 = (__m128i *)((char *)a1 + 2 * a2);
      for ( i = a1; i != v14; i = (__m128i *)((char *)i + 2) )
      {
        if ( !i->m128i_i16[0] )
          break;
      }
      return ((char *)i - (char *)a1) >> 1;
    }
    v15 = a1;
    v16 = ((16LL - ((unsigned __int8)a1 & 0xF)) & (unsigned __int64)-(__int64)(((unsigned __int8)a1 & 0xF) != 0)) >> 1;
    if ( a2 < v16 )
      v16 = a2;
    v17 = (__m128i *)((char *)a1 + 2 * v16);
    if ( a1 != v17 )
    {
      do
      {
        if ( !v15->m128i_i16[0] )
          break;
        v15 = (__m128i *)((char *)v15 + 2);
      }
      while ( v15 != v17 );
    }
    v10 = ((char *)v15 - (char *)a1) >> 1;
    if ( v10 == v16 )
    {
      v11 = (__m128i *)((char *)a1 + 2 * v10);
      v18 = (__m128i *)((char *)a1 + 2 * v10 + 2 * ((a2 - v16) & 0xFFFFFFFFFFFFFFF0uLL));
      while ( v11 != v18 && !_mm_movemask_epi8(_mm_cmpeq_epi16((__m128i)0LL, *v11)) )
        ++v11;
      while ( v11 != (__m128i *)((char *)a1 + 2 * a2) && v11->m128i_i16[0] )
        v11 = (__m128i *)((char *)v11 + 2);
LABEL_20:
      i = v11;
      return ((char *)i - (char *)a1) >> 1;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 1) != 0 )
    {
      v5 = (__m128i *)((char *)a1 + 2 * a2);
      for ( i = a1; i != v5; i = (__m128i *)((char *)i + 2) )
      {
        if ( !i->m128i_i16[0] )
          break;
      }
      return ((char *)i - (char *)a1) >> 1;
    }
    v7 = a1;
    v8 = ((32LL - ((unsigned __int8)a1 & 0x1F)) & (unsigned __int64)-(__int64)(((unsigned __int8)a1 & 0x1F) != 0)) >> 1;
    if ( a2 < v8 )
      v8 = a2;
    v9 = (__m128i *)((char *)a1 + 2 * v8);
    if ( a1 != v9 )
    {
      do
      {
        if ( !v7->m128i_i16[0] )
          break;
        v7 = (__m128i *)((char *)v7 + 2);
      }
      while ( v7 != v9 );
    }
    v10 = ((char *)v7 - (char *)a1) >> 1;
    if ( v10 == v8 )
    {
      v11 = (__m128i *)((char *)a1 + 2 * v10);
      for ( j = (__m128i *)((char *)a1 + 2 * v10 + 2 * ((a2 - v8) & 0xFFFFFFFFFFFFFFE0uLL)); v11 != j; v11 += 2 )
      {
        __asm
        {
          vpxor   xmm1, xmm1, xmm1
          vpcmpeqw ymm1, ymm1, ymmword ptr [r9]
          vpmovmskb eax, ymm1
        }
        __asm { vzeroupper }
        if ( _EAX )
          break;
      }
      while ( v11 != (__m128i *)((char *)a1 + 2 * a2) && v11->m128i_i16[0] )
        v11 = (__m128i *)((char *)v11 + 2);
      goto LABEL_20;
    }
  }
  return v10;
}

