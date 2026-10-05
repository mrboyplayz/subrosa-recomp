/* Address: 0x14009b1a0 | Name: sub_14009B1A0 | Size: 2108 bytes */
__int64 __fastcall sub_14009B1A0(__int64 a1, __int64 a2)
{
  BOOL *v2; // rdi
  int v3; // ebp
  __int64 v4; // r14
  int i; // esi
  BOOL v6; // ebx
  double v7; // xmm0_8
  __int64 v8; // rdi
  char *v9; // r11
  unsigned int j; // r9d
  char *v11; // r10
  __int64 v12; // rsi
  int v13; // edx
  int v14; // r8d
  int v15; // ebx
  bool v16; // zf
  signed int k; // r10d
  signed int m; // r9d
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 v22; // [rsp+0h] [rbp-4C8h] BYREF
  _DWORD v23[256]; // [rsp+20h] [rbp-4A8h] BYREF
  __int64 v24; // [rsp+420h] [rbp-A8h]

  v2 = v23;
  v3 = 0;
  v4 = (int)a1;
  do
  {
    for ( i = 0; i < 16; ++i )
    {
      v6 = (float)((float)((float)((float)i - 7.5) * (float)((float)i - 7.5))
                 + (float)((float)((float)v3 - 7.5) * (float)((float)v3 - 7.5))) <= 36.0;
      *v2 = v6;
      v7 = sub_14023F704(a1, a2);
      if ( *(float *)&v7 > -0.5890486225480862 )
      {
        if ( *(float *)&v7 < 0.5890486225480862 )
          v6 = 0;
        *v2 = v6;
      }
      ++v2;
    }
    ++v3;
  }
  while ( v3 < 16 );
  v8 = 44 * v4;
  dword_140404A6C[468765293] = 128;
  dword_140404A6C[468765294] = 128;
  dword_140404A6C[v8 + 284024933] = 128;
  dword_140404A6C[v8 + 284024934] = 128;
  dword_140404A6C[v8 + 284024935] = 1;
  dword_140404A6C[v8 + 284024936] = 6408;
  dword_140404A6C[v8 + 284024937] = 6408;
  dword_140404A6C[v8 + 284024943] = 0;
  dword_140404A6C[v8 + 284024938] = 10497;
  dword_140404A6C[v8 + 284024939] = 10497;
  dword_140404A6C[v8 + 284024940] = 9728;
  dword_140404A6C[v8 + 284024941] = 9728;
  free(*(void **)&dword_140404A6C[44 * v4 + 284024945]);
  *(_QWORD *)&dword_140404A6C[v8 + 284024945] = j__malloc_base((int)(4
                                                                   * dword_140404A6C[v8 + 284024933]
                                                                   * dword_140404A6C[v8 + 284024934]));
  v9 = (char *)&unk_1402B2410;
  for ( j = 0; (int)j < 256; ++j )
  {
    v11 = v9;
    v12 = 8;
    v13 = 8 * (j >> 4);
    v14 = 8 * (j & 0xF);
    v15 = -8 * (j >> 4);
    do
    {
      dword_140404A6C[v14 + 468765295 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 < (__int64)&dword_1402B2550 )
      {
        if ( *v11 < 0 )
          dword_140404A6C[v14 + 468765295 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 0x40) == 0;
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 0x20) == 0;
        dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 0x10) == 0;
        dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 8) == 0;
        dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 4) == 0;
        dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 2) == 0;
        dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = 0;
        if ( !v16 )
          dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = -1;
        v16 = (*v11 & 1) == 0;
        dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_50;
      }
      if ( (__int64)v9 < (__int64)byte_1402B2570 && v23[16 * (v13 + v15 + 8 * ((j >> 1) & 1)) + 8 * (j & 1)] )
      {
        dword_140404A6C[v14 + 468765295 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = 0;
      }
      else
      {
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)byte_1402B2570 )
          goto LABEL_33;
      }
      if ( v23[16 * (v13 + v15 + 8 * ((j >> 1) & 1)) + 1 + 8 * (j & 1)] )
      {
        dword_140404A6C[v14 + 468765296 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_34;
      }
LABEL_33:
      dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 >= (__int64)byte_1402B2570 )
        goto LABEL_36;
LABEL_34:
      if ( !v23[16 * (v13 + v15 + 8 * ((j >> 1) & 1)) + 2 + 8 * (j & 1)] )
      {
LABEL_36:
        dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)byte_1402B2570 )
          goto LABEL_39;
        goto LABEL_37;
      }
      dword_140404A6C[v14 + 468765297 + dword_140404A6C[468765293] * v13] = -1;
      dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = 0;
LABEL_37:
      if ( v23[16 * (v13 + v15 + 8 * ((j >> 1) & 1)) + 3 + 8 * (j & 1)] )
      {
        dword_140404A6C[v14 + 468765298 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_40;
      }
LABEL_39:
      dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 >= (__int64)byte_1402B2570 )
        goto LABEL_42;
LABEL_40:
      if ( !v23[16 * (v13 + v15 + 8 * ((j >> 1) & 1)) + 4 + 8 * (j & 1)] )
      {
LABEL_42:
        dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)byte_1402B2570 )
          goto LABEL_45;
        goto LABEL_43;
      }
      dword_140404A6C[v14 + 468765299 + dword_140404A6C[468765293] * v13] = -1;
      dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = 0;
LABEL_43:
      if ( v23[16 * (v13 + v15 + 8 * ((j >> 1) & 1)) + 5 + 8 * (j & 1)] )
      {
        dword_140404A6C[v14 + 468765300 + dword_140404A6C[468765293] * v13] = -1;
        dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = 0;
        goto LABEL_46;
      }
LABEL_45:
      dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = 0;
      if ( (__int64)v9 >= (__int64)byte_1402B2570 )
        goto LABEL_48;
LABEL_46:
      if ( !v23[16 * (v13 + v15 + 8 * ((j >> 1) & 1)) + 6 + 8 * (j & 1)] )
      {
LABEL_48:
        dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = 0;
        if ( (__int64)v9 >= (__int64)byte_1402B2570 )
          goto LABEL_52;
        goto LABEL_49;
      }
      dword_140404A6C[v14 + 468765301 + dword_140404A6C[468765293] * v13] = -1;
      dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = 0;
LABEL_49:
      v16 = v23[16 * (v13 + v15 + 8 * ((j >> 1) & 1)) + 7 + 8 * (j & 1)] == 0;
LABEL_50:
      if ( !v16 )
        dword_140404A6C[v14 + 468765302 + dword_140404A6C[468765293] * v13] = -1;
LABEL_52:
      ++v13;
      ++v11;
      --v12;
    }
    while ( v12 );
    v9 += 8;
  }
  for ( k = 0; k < (int)dword_140404A6C[v8 + 284024934]; ++k )
  {
    for ( m = 0;
          m < (int)dword_140404A6C[v8 + 284024933];
          *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v8 + 284024945] + 4LL * v20) = dword_140404A6C[v19 + 468765295] )
    {
      v19 = m + k * dword_140404A6C[468765293];
      v20 = m + k * dword_140404A6C[v8 + 284024933];
      ++m;
    }
  }
  sub_14014D3E0((unsigned int)v4, 0);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v22 ^ v24);
}

