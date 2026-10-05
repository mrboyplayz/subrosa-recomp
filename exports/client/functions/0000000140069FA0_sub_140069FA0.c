/* Address: 0x140069fa0 | Name: sub_140069FA0 | Size: 407 bytes */
__int64 __fastcall sub_140069FA0(signed int a1, unsigned int *a2, float a3, float a4, unsigned int a5)
{
  __int64 v7; // rsi
  unsigned int *v8; // rax
  unsigned int v9; // edi
  __int64 v11; // rbx

  if ( !dword_140404A6C[7] )
    return 0xFFFFFFFFLL;
  v7 = 8LL * a1;
  if ( !dword_140404A6C[v7 + 18165777] )
    return 0xFFFFFFFFLL;
  v8 = &dword_140404A6C[327697];
  v9 = 0;
  while ( *v8 )
  {
    ++v9;
    v8 += 278720;
    if ( (__int64)v8 >= (__int64)&dword_140404A6C[15936017] )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 278720LL * (int)v9;
  MEMORY[0x1401FCD30](&dword_140404A6C[v11 + 327698], 0, 1114876);
  *(float *)&dword_140404A6C[v11 + 327699] = a3;
  *(_QWORD *)&dword_140404A6C[v11 + 327697] = 1;
  dword_140404A6C[v11 + 327772] = 0;
  dword_140404A6C[v11 + 589917] = 0;
  dword_140404A6C[v11 + 327708] = a5;
  *(float *)&dword_140404A6C[v11 + 327704] = a3;
  *(float *)&dword_140404A6C[v11 + 327705] = a3;
  *(float *)&dword_140404A6C[v11 + 327706] = a4;
  *(float *)&dword_140404A6C[v11 + 327707] = a4;
  dword_140404A6C[v11 + 327700] = 1;
  dword_140404A6C[v11 + 327702] = a1;
  *(_QWORD *)&dword_140404A6C[v7 + 18165781] = 0;
  dword_140404A6C[v11 + 606302] = *a2;
  dword_140404A6C[v11 + 606303] = a2[1];
  dword_140404A6C[v11 + 606304] = a2[2];
  dword_140404A6C[v11 + 606308] = dword_140404A6C[v7 + 18165783];
  dword_140404A6C[v11 + 606310] = 1;
  dword_140404A6C[v11 + 606414] = 0;
  return v9;
}

