/* Address: 0x140132e00 | Name: sub_140132E00 | Size: 41 bytes */
__int64 sub_140132E00()
{
  unsigned int v0; // ecx
  unsigned int *v1; // rax

  v0 = 0;
  v1 = &dword_140404A6C[438881245];
  while ( *v1 )
  {
    ++v0;
    v1 += 20;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[438886365] )
      return 0xFFFFFFFFLL;
  }
  return v0;
}

