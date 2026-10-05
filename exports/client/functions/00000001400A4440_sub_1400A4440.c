/* Address: 0x1400a4440 | Name: sub_1400A4440 | Size: 43 bytes */
__int64 sub_1400A4440()
{
  unsigned int v0; // ecx
  unsigned int *v1; // rax

  v0 = 0;
  v1 = &dword_140404A6C[486149253];
  while ( *v1 )
  {
    ++v0;
    v1 += 61;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  return v0;
}

