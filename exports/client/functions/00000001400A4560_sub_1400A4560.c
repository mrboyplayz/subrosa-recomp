/* Address: 0x1400a4560 | Name: sub_1400A4560 | Size: 41 bytes */
__int64 sub_1400A4560()
{
  unsigned int v0; // ecx
  unsigned int *v1; // rax

  v0 = 0;
  v1 = &dword_140404A6C[278520517];
  while ( *v1 )
  {
    ++v0;
    v1 += 3;
    if ( (__int64)v1 >= (__int64)&dword_140404A6C[278521285] )
      return 0xFFFFFFFFLL;
  }
  return v0;
}

