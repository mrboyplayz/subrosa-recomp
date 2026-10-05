/* Address: 0x14004d750 | Name: sub_14004D750 | Size: 763 bytes */
__int64 __fastcall sub_14004D750(int a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // ebx
  int v4; // r8d
  unsigned int *v5; // rax
  int v6; // edx
  unsigned int v7; // edi
  unsigned int *v8; // rcx
  bool v9; // zf
  unsigned int v10; // eax
  unsigned int *v12; // rcx
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned int *v18; // r11
  __int64 v19; // rax
  signed int v20; // ecx
  signed int v21; // r8d
  __int64 v22; // r10
  unsigned int *v23; // rax
  signed int v24; // r8d
  signed int v25; // ecx
  unsigned int v26; // r10d
  unsigned int *v27; // rax
  __int64 v28; // rdx

  v2 = dword_140404A6C[456202733];
  v3 = -1;
  v4 = 0;
  if ( (int)dword_140404A6C[456202733] <= 0 )
    return 4294967294LL;
  v5 = &dword_140404A6C[456202739];
  do
  {
    if ( *(v5 - 4) == a1 && *v5 == a2 )
      v3 = v4;
    ++v4;
    v5 += 14;
  }
  while ( v4 < (int)dword_140404A6C[456202733] );
  if ( v3 == -1 )
    return 4294967294LL;
  v6 = 0;
  v7 = -1;
  if ( (int)dword_140404A6C[134050358] <= 0 )
    goto LABEL_14;
  v8 = &dword_140404A6C[134050361];
  do
  {
    v9 = dword_140404A6C[14 * v3 + 456202735] == *v8;
    v8 += 28;
    v10 = v6;
    if ( !v9 )
      v10 = v7;
    ++v6;
    v7 = v10;
  }
  while ( v6 < (int)dword_140404A6C[134050358] );
  if ( v10 == -1 )
  {
LABEL_14:
    if ( (int)dword_140404A6C[134050358] >= 0x7FFF )
      return 0xFFFFFFFFLL;
    v7 = dword_140404A6C[134050358];
    v12 = &dword_140404A6C[28 * dword_140404A6C[134050358] + 134050359];
    *(_OWORD *)v12 = 0;
    *((_OWORD *)v12 + 1) = 0;
    *((_OWORD *)v12 + 2) = 0;
    *((_OWORD *)v12 + 3) = 0;
    *((_OWORD *)v12 + 4) = 0;
    *((_OWORD *)v12 + 5) = 0;
    *((_OWORD *)v12 + 6) = 0;
    dword_140404A6C[28 * dword_140404A6C[134050358] + 134050374] = 1000;
    v9 = dword_140404A6C[283831312] == 4;
    dword_140404A6C[28 * dword_140404A6C[134050358] + 134050375] = 1000;
    if ( v9 )
      dword_140404A6C[28 * dword_140404A6C[134050358] + 134050374] = dword_140404A6C[284022495];
    dword_140404A6C[28 * dword_140404A6C[134050358] + 134050380] = rand() % 3;
    dword_140404A6C[28 * dword_140404A6C[134050358] + 134050381] = rand() & 7;
    v13 = rand();
    v2 = dword_140404A6C[456202733];
    dword_140404A6C[28 * dword_140404A6C[134050358]++ + 134050382] = v13 & 3;
  }
  v14 = 14LL * v3;
  v15 = 28LL * (int)v7;
  v16 = *(_OWORD *)&dword_140404A6C[v14 + 456202740];
  v17 = *(_OWORD *)&dword_140404A6C[v14 + 456202744];
  v18 = &dword_140404A6C[v14 + 456202735];
  dword_140404A6C[v15 + 134050361] = dword_140404A6C[v14 + 456202735];
  dword_140404A6C[v15 + 134050362] = dword_140404A6C[v14 + 456202736];
  v19 = *(_QWORD *)&dword_140404A6C[v14 + 456202737];
  v20 = 0;
  *(_OWORD *)&dword_140404A6C[v15 + 134050365] = v16;
  *(_QWORD *)&dword_140404A6C[v15 + 134050363] = v19;
  *(_OWORD *)&dword_140404A6C[v15 + 134050369] = v17;
  v21 = dword_140404A6C[134967863];
  if ( (int)dword_140404A6C[134967863] > 0 )
  {
    v22 = v19;
    v23 = &dword_140404A6C[134967865];
    do
    {
      if ( v22 == *(_QWORD *)v23 )
      {
        dword_140404A6C[v15 + 134050385] = 100000000;
        v21 = dword_140404A6C[134967863];
      }
      ++v20;
      v23 += 2;
    }
    while ( v20 < v21 );
  }
  v24 = dword_140404A6C[135033401];
  v25 = 0;
  if ( (int)dword_140404A6C[135033401] > 0 )
  {
    v26 = dword_140404A6C[v15 + 134050362];
    v27 = &dword_140404A6C[135033402];
    do
    {
      if ( v26 == *v27 )
      {
        dword_140404A6C[v15 + 134050386] = 1;
        dword_140404A6C[v15 + 134050385] = 0;
        v24 = dword_140404A6C[135033401];
      }
      ++v25;
      ++v27;
    }
    while ( v25 < v24 );
  }
  dword_140404A6C[456202733] = v2 - 1;
  v28 = 14LL * (int)(v2 - 1);
  *(_OWORD *)v18 = *(_OWORD *)&dword_140404A6C[v28 + 456202735];
  *((_OWORD *)v18 + 1) = *(_OWORD *)&dword_140404A6C[v28 + 456202739];
  *((_OWORD *)v18 + 2) = *(_OWORD *)&dword_140404A6C[v28 + 456202743];
  *((_QWORD *)v18 + 6) = *(_QWORD *)&dword_140404A6C[v28 + 456202747];
  return v7;
}

