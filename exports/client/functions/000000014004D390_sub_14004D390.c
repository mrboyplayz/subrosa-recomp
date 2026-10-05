/* Address: 0x14004d390 | Name: sub_14004D390 | Size: 960 bytes */
__int64 __fastcall sub_14004D390(int a1)
{
  int v1; // edx
  __int64 v2; // r10
  __int64 v3; // r9
  unsigned int *v4; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm1
  unsigned int *v10; // rcx
  __int64 v11; // r14
  unsigned int *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // ebp
  __int64 v16; // rax
  signed int v17; // ecx
  int v18; // ebx
  __int64 v19; // rsi
  char *v20; // rax
  bool v21; // zf
  __int128 v22; // xmm1
  __int64 v23; // rcx
  _BYTE v24[32]; // [rsp+0h] [rbp-78h] BYREF
  char v25[32]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h]

  v1 = 0;
  v2 = a1;
  if ( (int)dword_140404A6C[134050358] > 0 )
  {
    v3 = 3597LL * a1;
    v4 = &dword_140404A6C[134050359];
    while ( dword_140404A6C[v3 + 71856262] != *v4 )
    {
      ++v1;
      v4 += 28;
      if ( v1 >= (int)dword_140404A6C[134050358] )
        goto LABEL_5;
    }
    v6 = 28LL * v1;
    if ( dword_140404A6C[v3 + 71856263] == dword_140404A6C[v6 + 134050360] )
    {
      if ( dword_140404A6C[v6 + 134050373] )
      {
        v9 = *(_OWORD *)&dword_140404A6C[v6 + 134050369];
        *(_OWORD *)&dword_140404A6C[v3 + 71856254] = *(_OWORD *)&dword_140404A6C[v6 + 134050365];
        *(_OWORD *)&dword_140404A6C[v3 + 71856258] = v9;
      }
      else
      {
        v7 = *(_OWORD *)&dword_140404A6C[v3 + 71856254];
        dword_140404A6C[v6 + 134050373] = 5;
        v8 = *(_OWORD *)&dword_140404A6C[v3 + 71856258];
        *(_OWORD *)&dword_140404A6C[v6 + 134050365] = v7;
        *(_OWORD *)&dword_140404A6C[v6 + 134050369] = v8;
      }
    }
    return MEMORY[0x1401F8B20]((unsigned __int64)v24 ^ v26);
  }
LABEL_5:
  if ( (int)dword_140404A6C[134050358] >= 0x7FFF )
    return MEMORY[0x1401F8B20]((unsigned __int64)v24 ^ v26);
  v10 = &dword_140404A6C[28 * dword_140404A6C[134050358] + 134050359];
  v11 = 3597 * v2;
  *(_OWORD *)v10 = 0;
  *((_OWORD *)v10 + 1) = 0;
  *((_OWORD *)v10 + 2) = 0;
  *((_OWORD *)v10 + 3) = 0;
  *((_OWORD *)v10 + 4) = 0;
  *((_OWORD *)v10 + 5) = 0;
  *((_OWORD *)v10 + 6) = 0;
  dword_140404A6C[28 * dword_140404A6C[134050358] + 134050359] = dword_140404A6C[3597 * v2 + 71856262];
  v12 = &dword_140404A6C[3597 * v2 + 71856254];
  dword_140404A6C[28 * dword_140404A6C[134050358] + 134050360] = dword_140404A6C[3597 * v2 + 71856263];
  v13 = -1;
  do
    ++v13;
  while ( *((_BYTE *)v12 + v13) );
  if ( (int)v13 > 24 )
    LODWORD(v13) = 24;
  v14 = (int)v13;
  v15 = 1;
  while ( 1 )
  {
    v16 = -1;
    do
      ++v16;
    while ( *((_BYTE *)v12 + v16) );
    if ( (int)v16 > 24 )
      LODWORD(v16) = 24;
    v17 = dword_140404A6C[134050358];
    v18 = 0;
    if ( (int)dword_140404A6C[134050358] <= 0 )
      break;
    v19 = (int)v16;
    while ( (unsigned int)strncmp(v12, &dword_140404A6C[28 * v18 + 134050365], v19) )
    {
      v17 = dword_140404A6C[134050358];
      if ( ++v18 >= (int)dword_140404A6C[134050358] )
        goto LABEL_29;
    }
    *((_BYTE *)&dword_140404A6C[v11 + 71856254] + v14) = 0;
    sub_140158AB0(v25, "(%d)", v15);
    v20 = (char *)v12 - 1;
    do
      v21 = *++v20 == 0;
    while ( !v21 );
    strcpy(v20, v25);
    ++v15;
    HIBYTE(dword_140404A6C[v11 + 71856261]) = 0;
    if ( v15 >= 1000 )
    {
      v17 = dword_140404A6C[134050358];
      break;
    }
  }
LABEL_29:
  v22 = *((_OWORD *)v12 + 1);
  v23 = 28LL * v17;
  *(_OWORD *)&dword_140404A6C[v23 + 134050365] = *(_OWORD *)v12;
  *(_OWORD *)&dword_140404A6C[v23 + 134050369] = v22;
  v21 = dword_140404A6C[283831312] == 4;
  dword_140404A6C[28 * dword_140404A6C[134050358] + 134050374] = 1000;
  if ( v21 )
    dword_140404A6C[28 * dword_140404A6C[134050358] + 134050374] = dword_140404A6C[284022495];
  dword_140404A6C[28 * dword_140404A6C[134050358] + 134050380] = rand() % 3;
  dword_140404A6C[28 * dword_140404A6C[134050358] + 134050381] = rand() & 7;
  dword_140404A6C[28 * dword_140404A6C[134050358]++ + 134050382] = rand() & 3;
  return MEMORY[0x1401F8B20]((unsigned __int64)v24 ^ v26);
}

