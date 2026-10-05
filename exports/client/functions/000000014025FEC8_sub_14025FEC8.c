/* Address: 0x14025fec8 | Name: sub_14025FEC8 | Size: 159 bytes */
__m128i *sub_14025FEC8()
{
  __int64 v0; // rax
  __m128i *v1; // rsi
  const __m128i *v2; // rbx
  char *v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  __m128i *v6; // rax
  __m128i *v7; // rdi

  v0 = ((__int64 (*)(void))GetEnvironmentStringsW)();
  v1 = nullptr;
  v2 = (const __m128i *)v0;
  if ( v0 )
  {
    v3 = (char *)v0;
    if ( *(_WORD *)v0 )
    {
      do
      {
        v4 = -1;
        do
          ++v4;
        while ( *(_WORD *)&v3[2 * v4] );
        v3 += 2 * v4 + 2;
      }
      while ( *(_WORD *)v3 );
    }
    v5 = 2 * ((v3 - (char *)v2 + 2) >> 1);
    v6 = (__m128i *)malloc_base(v5);
    v7 = v6;
    if ( v6 )
    {
      MEMORY[0x1401FC920](v6, v2, v5);
      v1 = v7;
    }
    free_base(nullptr);
    ((void (__fastcall *)(const __m128i *))FreeEnvironmentStringsW)(v2);
  }
  return v1;
}

