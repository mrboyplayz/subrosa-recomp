/* Address: 0x140258328 | Name: sub_140258328 | Size: 137 bytes */
unsigned __int64 __fastcall sub_140258328(__int64 a1)
{
  __int64 *v2; // rax
  __int64 *v3; // rdi
  unsigned __int64 v4; // rbx
  __int64 i; // rax
  unsigned __int64 v6; // rcx

  v2 = (__int64 *)unknown_libname_764();
  v3 = v2;
  if ( v2 && a1 )
  {
    v4 = -1;
    do
      ++v4;
    while ( *(_BYTE *)(a1 + v4) );
    for ( i = *v2; i; i = *v3 )
    {
      v6 = -1;
      do
        ++v6;
      while ( *(_BYTE *)(i + v6) );
      if ( v6 > v4 && *(_BYTE *)(i + v4) == 61 && !(unsigned int)strnicoll(i, a1, v4) )
        return v4 + *v3 + 1;
      ++v3;
    }
  }
  return 0;
}

