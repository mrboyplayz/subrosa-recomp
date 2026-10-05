/* Address: 0x140105c20 | Name: sub_140105C20 | Size: 1138 bytes */
__int64 __fastcall sub_140105C20(int a1, float *a2)
{
  __int64 v3; // r15
  int v4; // edi
  unsigned int *v5; // rbx
  unsigned int *v6; // rsi
  __int64 v8; // r12
  __int64 v9; // r8
  signed int v10; // edi
  unsigned __int64 v11; // rbp
  int v12; // ebx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  signed int v18; // esi
  float *v19; // rbx
  unsigned __int64 v20; // rbp
  _DWORD *v21; // r15
  int v22; // edi
  __int64 v23; // r8
  __int64 result; // rax
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rdx

  v3 = 47224LL * a1;
  *(_OWORD *)&dword_140404A6C[19060685] = 0;
  *(_OWORD *)&dword_140404A6C[19060689] = 0;
  v4 = 0;
  v5 = &dword_140404A6C[v3 + 438920028];
  v6 = &dword_140404A6C[280651303];
  v8 = a1;
  do
  {
    if ( *(v5 - 1) )
    {
      if ( !*v5 )
      {
        v9 = (int)v5[1];
        dword_140404A6C[(v9 >> 5) + 19060685] |= 1 << (v5[1] & 0x1F);
        if ( !dword_140404A6C[7166 * v9 + 280651303] )
          sub_1401060F0((unsigned int)a1, (unsigned int)v4);
      }
    }
    ++v4;
    v5 += 4;
  }
  while ( v4 < 1024 );
  v10 = 0;
  v11 = 0;
  v12 = 1;
  do
  {
    if ( *v6 && (v12 & dword_140404A6C[(v11 >> 5) + 19060685]) == 0 )
      sub_140105AB0(a1, 0, 0, v10);
    ++v10;
    v12 = __ROL4__(v12, 1);
    ++v11;
    v6 += 7166;
  }
  while ( v10 < 256 );
  v13 = 0;
  *(_OWORD *)&dword_140404A6C[19060685] = 0;
  v14 = 0;
  *(_OWORD *)&dword_140404A6C[19060689] = 0;
  *(_OWORD *)&dword_140404A6C[19060693] = 0;
  *(_OWORD *)&dword_140404A6C[19060697] = 0;
  *(_OWORD *)&dword_140404A6C[19060701] = 0;
  *(_OWORD *)&dword_140404A6C[19060705] = 0;
  *(_OWORD *)&dword_140404A6C[19060709] = 0;
  *(_OWORD *)&dword_140404A6C[19060713] = 0;
  do
  {
    if ( dword_140404A6C[47224 * v8 + 438920027 + 4 * v14] )
    {
      if ( dword_140404A6C[47224 * v8 + 438920028 + 4 * v14] == 1 )
      {
        v15 = (int)dword_140404A6C[47224 * v8 + 438920029 + 4 * v14];
        dword_140404A6C[(v15 >> 5) + 19060685] |= 1 << (v15 & 0x1F);
        if ( !dword_140404A6C[1760 * v15 + 278845893]
          || dword_140404A6C[1760 * v15 + 278845905]
          || a1 != 255
          && (float)((float)((float)((float)(*(float *)&dword_140404A6C[1760 * v15 + 278845917] - a2[1])
                                   * (float)(*(float *)&dword_140404A6C[1760 * v15 + 278845917] - a2[1]))
                           + (float)((float)(*(float *)&dword_140404A6C[1760 * v15 + 278845916] - *a2)
                                   * (float)(*(float *)&dword_140404A6C[1760 * v15 + 278845916] - *a2)))
                   + (float)((float)(*(float *)&dword_140404A6C[1760 * v15 + 278845918] - a2[2])
                           * (float)(*(float *)&dword_140404A6C[1760 * v15 + 278845918] - a2[2]))) > 69696.0 )
        {
          v16 = 47224 * v8;
          v17 = (int)dword_140404A6C[47224 * v8 + 438924123];
          if ( (((_WORD)v17 + 1) & 0x7FF) != dword_140404A6C[47224 * v8 + 438924125] )
          {
            dword_140404A6C[5 * v17 + 438924126 + v16] = 1;
            dword_140404A6C[5 * (int)dword_140404A6C[v16 + 438924123] + 438924127 + v16] = v13;
            dword_140404A6C[v16 + 438924123] = ((unsigned __int16)dword_140404A6C[v16 + 438924123] + 1) & 0x7FF;
          }
        }
      }
    }
    ++v13;
    ++v14;
  }
  while ( v13 < 1024 );
  v18 = 0;
  v19 = (float *)&dword_140404A6C[278845918];
  v20 = 0;
  v21 = (_DWORD *)(0x140000000LL + v3 * 4 + 1759770560);
  v22 = 1;
  do
  {
    if ( *((_DWORD *)v19 - 25)
      && (v22 & dword_140404A6C[(v20 >> 5) + 19060685]) == 0
      && !*((_DWORD *)v19 - 13)
      && (a1 == 255
       || (float)((float)((float)((float)(*(v19 - 1) - a2[1]) * (float)(*(v19 - 1) - a2[1]))
                        + (float)((float)(*(v19 - 2) - *a2) * (float)(*(v19 - 2) - *a2)))
                + (float)((float)(*v19 - a2[2]) * (float)(*v19 - a2[2]))) < 65536.0) )
    {
      sub_140105AB0(a1, 1u, *((_DWORD *)v19 - 20), v18);
      *v21 = -1;
    }
    ++v18;
    v22 = __ROL4__(v22, 1);
    ++v20;
    v19 += 1760;
    v21 += 5;
  }
  while ( v18 < 1024 );
  v23 = 47224 * v8;
  result = dword_140404A6C[47224 * v8 + 438924124];
  if ( (_DWORD)result != dword_140404A6C[47224 * v8 + 438924123] )
  {
    v25 = dword_140404A6C[47224 * v8 + 438924124];
    do
    {
      v26 = v23 * 4 + 20LL * (int)result;
      v27 = *(int *)((char *)&dword_140404A6C[438924127] + v26);
      if ( !*(unsigned int *)((char *)&dword_140404A6C[438924126] + v26) )
      {
        v28 = 2 * (v27 + 11806 * v8);
        dword_140404A6C[2 * v28 + 438920027] = 1;
        dword_140404A6C[2 * v28 + 438920028] = dword_140404A6C[5 * (int)dword_140404A6C[v23 + 438924124]
                                                             + 438924128
                                                             + v23];
        dword_140404A6C[2 * v28 + 438920029] = dword_140404A6C[5 * (int)dword_140404A6C[v23 + 438924124]
                                                             + 438924130
                                                             + v23];
        dword_140404A6C[2 * v28 + 438920030] = 0x10000;
        v25 = dword_140404A6C[v23 + 438924124];
      }
      if ( dword_140404A6C[5 * v25 + 438924126 + v23] == 1 )
      {
        dword_140404A6C[47224 * v8 + 438920027 + 4 * v27] = 0;
        v25 = dword_140404A6C[v23 + 438924124];
      }
      result = ((_WORD)v25 + 1) & 0x7FF;
      dword_140404A6C[v23 + 438924124] = result;
      v25 = ((_WORD)v25 + 1) & 0x7FF;
    }
    while ( (_DWORD)result != dword_140404A6C[v23 + 438924123] );
  }
  return result;
}

