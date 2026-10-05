/* Address: 0x1402583b4 | Name: sub_1402583B4 | Size: 152 bytes */
__int64 __fastcall sub_1402583B4(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 i; // rax
  unsigned __int64 v6; // rcx

  v2 = (__int64 *)unknown_libname_765();
  v3 = v2;
  if ( v2 && a1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( *(_WORD *)(a1 + 2 * v4) );
    for ( i = *v2; i; i = *v3 )
    {
      v6 = -1;
      do
        ++v6;
      while ( *(_WORD *)(i + 2 * v6) );
      if ( v6 > v4 && *(_WORD *)(i + 2 * v4) == 61 && !(unsigned int)wcsnicoll(i, a1, v4) )
        return *v3 + 2 * v4 + 2;
      ++v3;
    }
  }
  return 0;
}

