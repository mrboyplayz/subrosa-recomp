/* Address: 0x14012af00 | Name: sub_14012AF00 | Size: 305 bytes */
void sub_14012AF00()
{
  unsigned int *v0; // rbp
  __int64 v1; // r14
  unsigned __int64 v2; // rsi
  unsigned int *v3; // rax
  __int64 v4; // r8
  __int64 i; // rbx
  __int64 v6; // rdi

  v0 = &dword_140404A6C[83197431];
  v1 = 0;
  v2 = 0;
  do
  {
    if ( *(v0 - 3074) )
    {
      v3 = v0;
      v4 = 512;
      do
      {
        if ( (*v3 & 0xE0000000) == 0x80000000 )
          *v3 &= 0xFF00FFFF;
        v3[2560] = 0;
        ++v3;
        --v4;
      }
      while ( v4 );
      for ( i = 0; i < 4; ++i )
      {
        if ( v2 <= 0x6C413B8 )
        {
          v6 = (int)dword_140404A6C[v1 + 83200503 + i];
          dword_140404A6C[v1 + 83200503 + i] = -1;
          if ( (unsigned int)v6 <= 0x3FF )
          {
            dword_140404A6C[8969 * v6 + 73991662] = -1;
            sub_1401941F0(0, (unsigned int)v6);
            sub_1401941F0(3, (unsigned int)v6);
            sub_1401941F0(5, (unsigned int)v6);
          }
        }
      }
    }
    v2 += 27720LL;
    v0 += 6930;
    v1 += 6930;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[111582711] );
}

