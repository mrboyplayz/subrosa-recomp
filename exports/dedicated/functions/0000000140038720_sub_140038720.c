/* Address: 0x140038720 | Name: sub_140038720 | Size: 812 bytes */
__int64 __fastcall sub_140038720(int a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r13
  int v10; // r9d
  int v11; // esi
  int v12; // edx
  int *v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  int v16; // edx
  int *v17; // r8
  __int64 v18; // rcx
  int v19; // eax
  _DWORD *v20; // rax
  __int64 v22; // r14
  __int128 *v23; // rax
  int v24; // eax
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
  if ( a2 >= dword_16E54CAF0 )
    return 0xFFFFFFFFLL;
  if ( a3 < 0 )
    return 0xFFFFFFFFLL;
  if ( a3 >= dword_16E54CAF0 )
    return 0xFFFFFFFFLL;
  v7 = 60LL * a2;
  v8 = dword_16E18CB30[v7];
  if ( (int)v8 >= 31 )
    return 0xFFFFFFFFLL;
  v9 = 60LL * a3;
  v10 = dword_16E18CB30[v9];
  if ( v10 >= 31 || (_DWORD)v6 != -1 && dword_16E6A4054[5210 * v6] >= 127 )
    return 0xFFFFFFFFLL;
  v11 = 0;
  v12 = 0;
  if ( (int)v8 > 0 )
  {
    v13 = &dword_16E18CB34[v7];
    do
    {
      v14 = 244LL * *v13;
      v15 = *(_DWORD *)((char *)&unk_14B883320 + v14 + 24);
      if ( (_DWORD)v5 == v15 && (_DWORD)v4 == *(_DWORD *)((char *)&unk_14B883320 + v14 + 28) )
        return 0xFFFFFFFFLL;
      if ( (_DWORD)v5 == *(_DWORD *)((char *)&unk_14B883320 + v14 + 28) && (_DWORD)v4 == v15 )
        return 0xFFFFFFFFLL;
      ++v12;
      ++v13;
    }
    while ( v12 < (int)v8 );
  }
  v16 = 0;
  if ( v10 > 0 )
  {
    v17 = &dword_16E18CB34[v9];
    do
    {
      v18 = 244LL * *v17;
      v19 = *(_DWORD *)((char *)&unk_14B883320 + v18 + 24);
      if ( (_DWORD)v5 == v19 && (_DWORD)v4 == *(_DWORD *)((char *)&unk_14B883320 + v18 + 28) )
        return 0xFFFFFFFFLL;
      if ( (_DWORD)v5 == *(_DWORD *)((char *)&unk_14B883320 + v18 + 28) && (_DWORD)v4 == v19 )
        return 0xFFFFFFFFLL;
      ++v16;
      ++v17;
    }
    while ( v16 < v10 );
  }
  v20 = &unk_14B883320;
  while ( *v20 )
  {
    ++v11;
    v20 += 61;
    if ( (__int64)v20 >= (__int64)dword_14BC53320 )
      return 0xFFFFFFFFLL;
  }
  if ( v11 == -1 )
    return 0xFFFFFFFFLL;
  v22 = 244LL * v11;
  memset((char *)&unk_14B883324 + v22, 0, 0xF0u);
  *(_QWORD *)((char *)&unk_14B883320 + v22) = 1;
  *(_DWORD *)((char *)&unk_14B883320 + v22 + 12) = 0x10000;
  *(_DWORD *)((char *)&unk_14B883320 + v22 + 20) = 2;
  v23 = &xmmword_14B6432E0[9 * v11];
  *(_DWORD *)((char *)&unk_14B883320 + v22 + 8) = a1;
  *(_DWORD *)((char *)&unk_14B883320 + v22 + 24) = v5;
  *(_DWORD *)((char *)&unk_14B883320 + v22 + 28) = v4;
  *v23 = 0;
  *(_DWORD *)((char *)&unk_14B883320 + v22 + 16) = 3;
  v23[1] = 0;
  *(_DWORD *)((char *)&unk_14B883320 + v22 + 112) = 1048576000;
  v23[2] = 0;
  *(_DWORD *)((char *)&unk_14B883320 + v22 + 116) = 1048576000;
  v23[3] = 0;
  v23[4] = 0;
  v23[5] = 0;
  v23[6] = 0;
  v23[7] = 0;
  v23[8] = 0;
  v24 = *(_DWORD *)((char *)&unk_14B883320 + v22 + 16);
  if ( a1 == 1 )
    v24 = 0;
  v25 = *(float *)&dword_16E18CAFC[60 * v4] - *(float *)&dword_16E18CAFC[v7];
  v26 = *(float *)&dword_16E18CAF8[60 * v4] - *(float *)&dword_16E18CAF8[v7];
  v27 = *(float *)&dword_16E18CAF4[60 * v4] - *(float *)&dword_16E18CAF4[v7];
  *(_DWORD *)((char *)&unk_14B883320 + v22 + 16) = v24;
  dword_16E18CB34[60 * v5 + v8] = v11;
  ++dword_16E18CB30[v7];
  dword_16E18CB34[60 * v4 + dword_16E18CB30[60 * v4]++] = v11;
  *(float *)((char *)&unk_14B883320 + v22 + 100) = fsqrt(
                                                     (float)((float)(v26 * v26) + (float)(v27 * v27))
                                                   + (float)(v25 * v25));
  if ( (_DWORD)v6 != -1 )
  {
    *((_DWORD *)&unk_14B883320 + 61 * v11 + (*(_DWORD *)((char *)&unk_14B883320 + v22 + 148))++ + 38) = v6;
    dword_16E6A4058[5210 * v6 + dword_16E6A4054[5210 * v6]++] = v11;
  }
  return (unsigned int)v11;
}

