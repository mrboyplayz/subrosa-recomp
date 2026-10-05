/* Address: 0x1400503d0 | Name: sub_1400503D0 | Size: 43 bytes */
__int64 sub_1400503D0()
{
  unsigned int v0; // ecx
  _DWORD *v1; // rax

  v0 = 0;
  v1 = &unk_14B883320;
  while ( *v1 )
  {
    ++v0;
    v1 += 61;
    if ( (__int64)v1 >= (__int64)dword_14BC53320 )
      return 0xFFFFFFFFLL;
  }
  return v0;
}

