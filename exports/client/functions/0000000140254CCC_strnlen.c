/* Address: 0x140254ccc | Name: strnlen | Size: 336 bytes */
char *__fastcall strnlen(__m128i *a1, unsigned __int64 a2)
{
  __m128i *v4; // r9
  unsigned __int64 v5; // r10
  __m128i *v6; // rax
  __m128i *v7; // rcx
  _BYTE *v8; // rcx
  __m128i *v9; // r8
  unsigned __int64 v11; // r10
  __m128i *v12; // rax
  __m128i *v13; // rcx
  __m128i *v14; // r8
  __m128i *i; // rax

  v4 = a1;
  if ( dword_140302080 < 5 )
  {
    if ( dword_140302080 < 1 )
    {
      for ( i = (__m128i *)((char *)a1 + a2); a1 != i; a1 = (__m128i *)((char *)a1 + 1) )
      {
        if ( !a1->m128i_i8[0] )
          break;
      }
      return (char *)((char *)a1 - (char *)v4);
    }
    v11 = (16LL - ((unsigned __int8)a1 & 0xF)) & -(__int64)(((unsigned __int8)a1 & 0xF) != 0);
    v12 = a1;
    if ( a2 < v11 )
      v11 = a2;
    v13 = (__m128i *)((char *)a1 + v11);
    if ( v4 != (__m128i *)&v4->m128i_i8[v11] )
    {
      do
      {
        if ( !v12->m128i_i8[0] )
          break;
        v12 = (__m128i *)((char *)v12 + 1);
      }
      while ( v12 != v13 );
    }
    v8 = (_BYTE *)((char *)v12 - (char *)v4);
    if ( (char *)v12 - (char *)v4 == v11 )
    {
      a1 = v12;
      v14 = (__m128i *)((char *)v12 + ((a2 - v11) & 0xFFFFFFFFFFFFFFF0uLL));
      if ( v12 != v14 )
      {
        do
        {
          if ( _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *a1)) )
            break;
          ++a1;
        }
        while ( a1 != v14 );
      }
      while ( a1 != (__m128i *)&v4->m128i_i8[a2] && a1->m128i_i8[0] )
        a1 = (__m128i *)((char *)a1 + 1);
      return (char *)((char *)a1 - (char *)v4);
    }
  }
  else
  {
    v5 = (32LL - ((unsigned __int8)a1 & 0x1F)) & -(__int64)(((unsigned __int8)a1 & 0x1F) != 0);
    v6 = a1;
    if ( a2 < v5 )
      v5 = a2;
    v7 = (__m128i *)((char *)a1 + v5);
    if ( v4 != v7 )
    {
      do
      {
        if ( !v6->m128i_i8[0] )
          break;
        v6 = (__m128i *)((char *)v6 + 1);
      }
      while ( v6 != v7 );
    }
    v8 = (_BYTE *)((char *)v6 - (char *)v4);
    if ( (char *)v6 - (char *)v4 == v5 )
    {
      a1 = v6;
      v9 = (__m128i *)((char *)v6 + ((a2 - v5) & 0xFFFFFFFFFFFFFFE0uLL));
      if ( v6 != v9 )
      {
        do
        {
          __asm
          {
            vpxor   xmm1, xmm1, xmm1
            vpcmpeqb ymm1, ymm1, ymmword ptr [rcx]
            vpmovmskb eax, ymm1
          }
          __asm { vzeroupper }
          if ( _EAX )
            break;
          a1 += 2;
        }
        while ( a1 != v9 );
      }
      while ( a1 != (__m128i *)&v4->m128i_i8[a2] && a1->m128i_i8[0] )
        a1 = (__m128i *)((char *)a1 + 1);
      return (char *)((char *)a1 - (char *)v4);
    }
  }
  return v8;
}

