/* Address: 0x1400a0060 | Name: sub_1400A0060 | Size: 1138 bytes */
__int64 __fastcall sub_1400A0060(int a1, float *a2)
{
  __int64 v3; // r15
  int v4; // edi
  int *v5; // rbx
  int *v6; // rsi
  __int64 v8; // r12
  __int64 v9; // r8
  int v10; // edi
  unsigned __int64 v11; // rbp
  int v12; // ebx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
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
  xmmword_1405823C0 = 0;
  xmmword_1405823D0 = 0;
  v4 = 0;
  v5 = &dword_160F4971C[v3];
  v6 = dword_1909419C8;
  v8 = a1;
  do
  {
    if ( *(v5 - 1) )
    {
      if ( !*v5 )
      {
        v9 = v5[1];
        *((_DWORD *)&xmmword_1405823C0 + (v9 >> 5)) |= 1 << (v5[1] & 0x1F);
        if ( !dword_1909419C8[7166 * v9] )
          sub_1400A0530((unsigned int)a1, (unsigned int)v4);
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
    if ( *v6 && (v12 & *((_DWORD *)&xmmword_1405823C0 + (v11 >> 5))) == 0 )
      sub_14009FEF0(a1, 0, 0, v10);
    ++v10;
    v12 = __ROL4__(v12, 1);
    ++v11;
    v6 += 7166;
  }
  while ( v10 < 256 );
  v13 = 0;
  xmmword_1405823C0 = 0;
  v14 = 0;
  xmmword_1405823D0 = 0;
  xmmword_1405823E0 = 0;
  xmmword_1405823F0 = 0;
  xmmword_140582400 = 0;
  xmmword_140582410 = 0;
  xmmword_140582420 = 0;
  xmmword_140582430 = 0;
  do
  {
    if ( dword_160F49718[47224 * v8 + 4 * v14] )
    {
      if ( dword_160F4971C[47224 * v8 + 4 * v14] == 1 )
      {
        v15 = dword_160F49720[47224 * v8 + 4 * v14];
        *((_DWORD *)&xmmword_1405823C0 + (v15 >> 5)) |= 1 << (v15 & 0x1F);
        if ( !*((_DWORD *)&unk_19025F0C0 + 1760 * v15)
          || *((_DWORD *)&unk_19025F0F0 + 1760 * v15)
          || a1 != 255
          && (float)((float)((float)((float)(*(float *)&dword_19025F11C[1760 * v15 + 1] - a2[1])
                                   * (float)(*(float *)&dword_19025F11C[1760 * v15 + 1] - a2[1]))
                           + (float)((float)(*(float *)&dword_19025F11C[1760 * v15] - *a2)
                                   * (float)(*(float *)&dword_19025F11C[1760 * v15] - *a2)))
                   + (float)((float)(*(float *)&dword_19025F11C[1760 * v15 + 2] - a2[2])
                           * (float)(*(float *)&dword_19025F11C[1760 * v15 + 2] - a2[2]))) > 69696.0 )
        {
          v16 = 188896 * v8;
          v17 = *((int *)&unk_160F4D718 + 47224 * v8);
          if ( (((_WORD)v17 + 1) & 0x7FF) != *((_DWORD *)&unk_160F4D720 + 47224 * v8) )
          {
            *(_DWORD *)((char *)&unk_160F4D724 + 20 * v17 + v16) = 1;
            *(_DWORD *)((char *)&unk_160F4D728 + 20 * *(int *)((char *)&unk_160F4D718 + v16) + v16) = v13;
            *(_DWORD *)((char *)&unk_160F4D718 + v16) = ((unsigned __int16)*(_DWORD *)((char *)&unk_160F4D718 + v16) + 1)
                                                      & 0x7FF;
          }
        }
      }
    }
    ++v13;
    ++v14;
  }
  while ( v13 < 1024 );
  v18 = 0;
  v19 = (float *)dword_19025F124;
  v20 = 0;
  v21 = (_DWORD *)(0x140000000LL + v3 * 4 + 552777472);
  v22 = 1;
  do
  {
    if ( *((_DWORD *)v19 - 25)
      && (v22 & *((_DWORD *)&xmmword_1405823C0 + (v20 >> 5))) == 0
      && !*((_DWORD *)v19 - 13)
      && (a1 == 255
       || (float)((float)((float)((float)(*(v19 - 1) - a2[1]) * (float)(*(v19 - 1) - a2[1]))
                        + (float)((float)(*(v19 - 2) - *a2) * (float)(*(v19 - 2) - *a2)))
                + (float)((float)(*v19 - a2[2]) * (float)(*v19 - a2[2]))) < 65536.0) )
    {
      sub_14009FEF0(a1, 1, *((_DWORD *)v19 - 20), v18);
      *v21 = -1;
    }
    ++v18;
    v22 = __ROL4__(v22, 1);
    ++v20;
    v19 += 1760;
    v21 += 5;
  }
  while ( v18 < 1024 );
  v23 = 188896 * v8;
  result = *((unsigned int *)&unk_160F4D71C + 47224 * v8);
  if ( (_DWORD)result != *((_DWORD *)&unk_160F4D718 + 47224 * v8) )
  {
    v25 = *((_DWORD *)&unk_160F4D71C + 47224 * v8);
    do
    {
      v26 = v23 + 20LL * (int)result;
      v27 = *(int *)((char *)&unk_160F4D728 + v26);
      if ( !*(_DWORD *)((char *)&unk_160F4D724 + v26) )
      {
        v28 = 2 * (v27 + 11806 * v8);
        dword_160F49718[2 * v28] = 1;
        dword_160F4971C[2 * v28] = *(_DWORD *)((char *)&unk_160F4D72C + 20 * *(int *)((char *)&unk_160F4D71C + v23)
                                                                      + v23);
        dword_160F49720[2 * v28] = dword_160F4D734[5 * *(int *)((char *)&unk_160F4D71C + v23)
                                                 + (unsigned __int64)v23 / 4];
        dword_160F49724[2 * v28] = 0x10000;
        v25 = *(_DWORD *)((char *)&unk_160F4D71C + v23);
      }
      if ( *(_DWORD *)((char *)&unk_160F4D724 + 20 * v25 + v23) == 1 )
      {
        dword_160F49718[47224 * v8 + 4 * v27] = 0;
        v25 = *(_DWORD *)((char *)&unk_160F4D71C + v23);
      }
      result = ((_WORD)v25 + 1) & 0x7FF;
      *(_DWORD *)((char *)&unk_160F4D71C + v23) = result;
      v25 = ((_WORD)v25 + 1) & 0x7FF;
    }
    while ( (_DWORD)result != *(_DWORD *)((char *)&unk_160F4D718 + v23) );
  }
  return result;
}

