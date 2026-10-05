/* Address: 0x14004de30 | Name: sub_14004DE30 | Size: 812 bytes */
__int64 __fastcall sub_14004DE30(unsigned int a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r13
  int v10; // r9d
  unsigned int v11; // esi
  int v12; // edx
  unsigned int *v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // edx
  unsigned int *v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int *v20; // rax
  __int64 v22; // r14
  unsigned int *v23; // rax
  unsigned int v24; // eax
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm1_4

  v4 = a3;
  v5 = a2;
  v6 = a4;
  if ( a2 == a3 )
    return 0xFFFFFFFFLL;
  if ( a2 < 0 )
    return 0xFFFFFFFFLL;
  if ( a2 >= (int)dword_140404A6C[73990061] )
    return 0xFFFFFFFFLL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a3 >= (int)dword_140404A6C[73990061] )
    return 0xFFFFFFFFLL;
  v7 = 60LL * a2;
  v8 = (int)dword_140404A6C[v7 + 73007041];
  if ( (int)v8 >= 31 )
    return 0xFFFFFFFFLL;
  v9 = 60LL * a3;
  v10 = dword_140404A6C[v9 + 73007041];
  if ( v10 >= 31 || (_DWORD)v6 != -1 && (int)dword_140404A6C[5210 * v6 + 129716962] >= 127 )
    return 0xFFFFFFFFLL;
  v11 = 0;
  v12 = 0;
  if ( (int)v8 > 0 )
  {
    v13 = &dword_140404A6C[v7 + 73007042];
    do
    {
      v14 = 61LL * (int)*v13;
      v15 = dword_140404A6C[v14 + 486149259];
      if ( (_DWORD)v5 == v15 && (_DWORD)v4 == dword_140404A6C[v14 + 486149260] )
        return 0xFFFFFFFFLL;
      if ( (_DWORD)v5 == dword_140404A6C[v14 + 486149260] && (_DWORD)v4 == v15 )
        return 0xFFFFFFFFLL;
      ++v12;
      ++v13;
    }
    while ( v12 < (int)v8 );
  }
  v16 = 0;
  if ( v10 > 0 )
  {
    v17 = &dword_140404A6C[v9 + 73007042];
    do
    {
      v18 = 61LL * (int)*v17;
      v19 = dword_140404A6C[v18 + 486149259];
      if ( (_DWORD)v5 == v19 && (_DWORD)v4 == dword_140404A6C[v18 + 486149260] )
        return 0xFFFFFFFFLL;
      if ( (_DWORD)v5 == dword_140404A6C[v18 + 486149260] && (_DWORD)v4 == v19 )
        return 0xFFFFFFFFLL;
      ++v16;
      ++v17;
    }
    while ( v16 < v10 );
  }
  v20 = &dword_140404A6C[486149253];
  while ( *v20 )
  {
    ++v11;
    v20 += 61;
    if ( (__int64)v20 >= (__int64)&dword_140404A6C[487148677] )
      return 0xFFFFFFFFLL;
  }
  if ( v11 == -1 )
    return 0xFFFFFFFFLL;
  v22 = 61LL * (int)v11;
  MEMORY[0x1401FCD30](&dword_140404A6C[v22 + 486149254], 0, 240);
  *(_QWORD *)&dword_140404A6C[v22 + 486149253] = 1;
  dword_140404A6C[v22 + 486149256] = 0x10000;
  dword_140404A6C[v22 + 486149258] = 2;
  v23 = &dword_140404A6C[36 * v11 + 485543029];
  dword_140404A6C[v22 + 486149255] = a1;
  dword_140404A6C[v22 + 486149259] = v5;
  dword_140404A6C[v22 + 486149260] = v4;
  *(_OWORD *)v23 = 0;
  dword_140404A6C[v22 + 486149257] = 3;
  *((_OWORD *)v23 + 1) = 0;
  dword_140404A6C[v22 + 486149281] = 1048576000;
  *((_OWORD *)v23 + 2) = 0;
  dword_140404A6C[v22 + 486149282] = 1048576000;
  *((_OWORD *)v23 + 3) = 0;
  *((_OWORD *)v23 + 4) = 0;
  *((_OWORD *)v23 + 5) = 0;
  *((_OWORD *)v23 + 6) = 0;
  *((_OWORD *)v23 + 7) = 0;
  *((_OWORD *)v23 + 8) = 0;
  v24 = dword_140404A6C[v22 + 486149257];
  if ( a1 == 1 )
    v24 = 0;
  v25 = *(float *)&dword_140404A6C[60 * v4 + 73007028] - *(float *)&dword_140404A6C[v7 + 73007028];
  v26 = *(float *)&dword_140404A6C[60 * v4 + 73007027] - *(float *)&dword_140404A6C[v7 + 73007027];
  v27 = *(float *)&dword_140404A6C[60 * v4 + 73007026] - *(float *)&dword_140404A6C[v7 + 73007026];
  dword_140404A6C[v22 + 486149257] = v24;
  dword_140404A6C[60 * v5 + 73007042 + v8] = v11;
  ++dword_140404A6C[v7 + 73007041];
  dword_140404A6C[60 * v4 + 73007042 + (int)dword_140404A6C[60 * v4 + 73007041]++] = v11;
  *(float *)&dword_140404A6C[v22 + 486149278] = fsqrt((float)((float)(v26 * v26) + (float)(v27 * v27)) + (float)(v25 * v25));
  if ( (_DWORD)v6 != -1 )
  {
    dword_140404A6C[61 * v11 + 486149291 + dword_140404A6C[v22 + 486149290]++] = v6;
    dword_140404A6C[5210 * v6 + 129716963 + (int)dword_140404A6C[5210 * v6 + 129716962]++] = v11;
  }
  return v11;
}

