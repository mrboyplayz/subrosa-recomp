/* Address: 0x1400ea7c0 | Name: sub_1400EA7C0 | Size: 572 bytes */
double __fastcall sub_1400EA7C0(int a1)
{
  int v1; // r10d
  signed int i; // edx
  __int64 v3; // r8
  int v4; // ecx
  char v5; // r9
  unsigned int v6; // eax
  signed int v7; // r10d
  __int64 v8; // r8
  signed int v9; // ecx
  char v10; // r9
  unsigned int v11; // eax
  signed int v12; // r10d
  __int64 v13; // r8
  signed int v14; // eax
  char v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  double result; // xmm0_8

  if ( a1 )
  {
    v16 = MEMORY[0x14020B8D8]("debugconfig.txt", "wb");
    v17 = v16;
    if ( v16 )
    {
      sub_1400920F0(v16, "%s%d\r\n", "startposition0=", dword_140404A6C[179992048]);
      sub_1400920F0(v17, "%s%d\r\n", "startposition1=", dword_140404A6C[179992049]);
      sub_1400920F0(v17, "%s%d\r\n", "startposition2=", dword_140404A6C[179992050]);
      return sub_14020B9E8(v17);
    }
  }
  else
  {
    dword_140404A6C[179992048] = 1508;
    dword_140404A6C[179992049] = 62;
    dword_140404A6C[179992050] = 1472;
    sub_1400ED940("debugconfig.txt");
    v1 = dword_140404A6C[293250413];
    for ( i = dword_140404A6C[293250414]; v1 < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++v1 )
    {
      v3 = 0;
      if ( v1 < (int)dword_140404A6C[293250414] )
      {
        v4 = v1;
        do
        {
          v5 = MEMORY[0x140273B60][v3];
          if ( !v5 )
            break;
          if ( v5 != *((_BYTE *)&dword_140404A6C[293250415] + v4) )
            break;
          ++v4;
          ++v3;
        }
        while ( v4 < (int)dword_140404A6C[293250414] );
      }
      if ( !MEMORY[0x140273B60][v3] )
        break;
    }
    dword_140404A6C[293250413] = v1 + 15;
    if ( v1 + 15 < (int)dword_140404A6C[293250414] )
    {
      v6 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[179992048] = v6;
    }
    v7 = 0;
    for ( dword_140404A6C[293250413] = 0; v7 < i; dword_140404A6C[293250413] = ++v7 )
    {
      v8 = 0;
      if ( v7 < i )
      {
        v9 = v7;
        do
        {
          v10 = MEMORY[0x140273B70][v8];
          if ( !v10 )
            break;
          if ( v10 != *((_BYTE *)&dword_140404A6C[293250415] + v9) )
            break;
          ++v9;
          ++v8;
        }
        while ( v9 < i );
      }
      if ( !MEMORY[0x140273B70][v8] )
        break;
    }
    dword_140404A6C[293250413] = v7 + 15;
    if ( v7 + 15 < i )
    {
      v11 = sub_1400A3D70();
      i = dword_140404A6C[293250414];
      dword_140404A6C[179992049] = v11;
    }
    v12 = 0;
    for ( dword_140404A6C[293250413] = 0; v12 < i; dword_140404A6C[293250413] = ++v12 )
    {
      v13 = 0;
      if ( v12 < i )
      {
        v14 = v12;
        do
        {
          v15 = MEMORY[0x140273B80][v13];
          if ( !v15 )
            break;
          if ( v15 != *((_BYTE *)&dword_140404A6C[293250415] + v14) )
            break;
          ++v14;
          ++v13;
        }
        while ( v14 < i );
      }
      if ( !MEMORY[0x140273B80][v13] )
        break;
    }
    dword_140404A6C[293250413] = v12 + 15;
    if ( v12 + 15 < i )
      dword_140404A6C[179992050] = sub_1400A3D70();
    dword_140404A6C[293250413] = 0;
  }
  return result;
}

