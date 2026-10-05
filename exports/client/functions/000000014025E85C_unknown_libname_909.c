/* Address: 0x14025e85c | Name: unknown_libname_909 | Size: 199 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_909(__int64 *a1)
{
  __int64 v1; // rsi
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax

  v1 = a1[2];
  if ( a1[1] != v1 )
    return 0;
  v4 = 0;
  if ( !*a1 )
  {
    *a1 = calloc_base(4u, 8u);
    free_base(nullptr);
    v5 = *a1;
    if ( *a1 )
    {
      a1[1] = v5;
      a1[2] = v5 + 32;
      return 0;
    }
    return 12;
  }
  v6 = (v1 - *a1) >> 3;
  if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
    return 12;
  v7 = recalloc_base(*a1, 2 * v6, 8);
  if ( v7 )
  {
    *a1 = v7;
    a1[1] = v7 + 8 * v6;
    a1[2] = v7 + 16 * v6;
  }
  else
  {
    v4 = 12;
  }
  free_base(nullptr);
  return v4;
}

