/* Address: 0x14007d710 | Name: sub_14007D710 | Size: 429 bytes */
__int64 sub_14007D710()
{
  int v0; // eax
  unsigned int *v1; // rcx
  int i; // ebx
  int v3; // r8d
  unsigned int *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // r8d
  int v13; // edx
  __int64 result; // rax
  int v15; // r10d
  unsigned int *v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx

  v0 = 0;
  if ( (int)dword_140404A6C[436668493] > 0 )
  {
    v1 = &dword_140404A6C[436668494];
    do
      *v1++ = v0++;
    while ( v0 < (int)dword_140404A6C[436668493] );
  }
  for ( i = 0; i < 4; ++i )
  {
    MEMORY[0x1401FCD30](&dword_140404A6C[437717070], 0, 1024);
    v3 = 0;
    if ( (int)dword_140404A6C[436668493] > 0 )
    {
      v4 = &dword_140404A6C[436668494];
      do
      {
        v5 = (int)*v4;
        v4[0x40000] = v5;
        ++v4;
        ++v3;
        v6 = (unsigned __int8)(dword_140404A6C[v5 + 437192782] >> (8 * i));
        ++dword_140404A6C[v6 + 437717070];
      }
      while ( v3 < (int)dword_140404A6C[436668493] );
    }
    dword_140404A6C[437717326] = 0;
    v7 = &dword_140404A6C[437717326];
    v8 = 0;
    do
    {
      v9 = *(v7 - 256) + v8;
      v7[1] = v9;
      v10 = v9 + *(v7 - 255);
      v7[2] = v10;
      v11 = v10 + *(v7 - 254);
      v7[3] = v11;
      v12 = v11 + *(v7 - 253);
      v7[4] = v12;
      v13 = *(v7 - 252);
      v7 += 5;
      v8 = v12 + v13;
      *v7 = v8;
    }
    while ( (__int64)v7 < (__int64)&dword_140404A6C[437717581] );
    LODWORD(result) = dword_140404A6C[436668493];
    v15 = 0;
    if ( (int)dword_140404A6C[436668493] > 0 )
    {
      v16 = &dword_140404A6C[436930638];
      do
      {
        v17 = (int)*v16++;
        ++v15;
        v18 = (unsigned __int8)(dword_140404A6C[v17 + 437192782] >> (8 * i));
        dword_140404A6C[dword_140404A6C[v18 + 437717326]++ + 436668494] = v17;
        LODWORD(result) = dword_140404A6C[436668493];
      }
      while ( v15 < (int)dword_140404A6C[436668493] );
    }
  }
  result = (int)result;
  dword_140404A6C[(int)result + 436668494] = -1;
  return result;
}

