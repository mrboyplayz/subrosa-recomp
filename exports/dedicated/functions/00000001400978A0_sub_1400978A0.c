/* Address: 0x1400978a0 | Name: sub_1400978A0 | Size: 928 bytes */
__int64 sub_1400978A0()
{
  int v0; // edi
  int *v1; // r8
  int i; // edx
  int v3; // ecx
  _DWORD *v4; // rax
  int v5; // edx
  int *v6; // r8
  int v7; // ecx
  __int64 result; // rax
  int v9; // ebx
  float *v10; // r8
  __int64 v11; // rsi
  int v12; // r11d
  __int64 v13; // rcx
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  int *v25; // r9
  __int64 v26; // r10
  __int64 v27; // rcx
  int *v28; // rbx
  int v29; // [rsp+20h] [rbp-68h] BYREF
  int v30; // [rsp+24h] [rbp-64h]
  int v31; // [rsp+40h] [rbp-48h]
  int v32; // [rsp+44h] [rbp-44h]

  v0 = 0;
  v1 = &v29;
  for ( i = 0; i < 2; ++i )
  {
    v3 = 0;
    *v1 = 0;
    v4 = &unk_16D6802B8;
    do
    {
      if ( *(v4 - 2886) && !*v4 && *(v4 - 2853) == i )
        *v1 = ++v3;
      v4 += 3597;
    }
    while ( (__int64)v4 < (__int64)dword_16DA036B8 );
    ++v1;
  }
  if ( !dword_1915FBCE8 || !v29 || !v30 )
  {
    v31 = 2;
    goto LABEL_16;
  }
  if ( v29 >= v30 )
  {
    v31 = 2 * v29 / v30;
LABEL_16:
    v32 = 2;
    goto LABEL_17;
  }
  v31 = 2;
  v32 = 2 * v30 / v29;
LABEL_17:
  v5 = 0;
  v6 = &v29;
  do
  {
    v7 = 0;
    *v6 = 0;
    result = (__int64)&unk_16D6802B8;
    do
    {
      if ( *(_DWORD *)(result - 11544)
        && !*(_DWORD *)result
        && *(_DWORD *)(result - 11412) == v5
        && *(_DWORD *)(result - 11388) != -1 )
      {
        *v6 = ++v7;
      }
      result += 14388;
    }
    while ( result < (__int64)dword_16DA036B8 );
    ++v5;
    ++v6;
  }
  while ( v5 < 2 );
  v9 = 0;
  v10 = (float *)&unk_191541458;
  v11 = 0;
  do
  {
    v12 = 0;
    if ( *(int *)((char *)&v29 + v11) > 0 )
    {
      result = (__int64)dword_19025F124;
      v13 = (unsigned int)v9 ^ 1LL;
      do
      {
        if ( *(_DWORD *)(result - 100) && *(_DWORD *)(result - 80) == 17 )
        {
          if ( (v14 = *(float *)(result - 8), v14 >= *v10)
            && v14 < v10[3]
            && (v15 = *(float *)(result - 4), v15 >= v10[1])
            && v15 < v10[4]
            && *(float *)result >= v10[2]
            && *(float *)result < v10[5]
            || !*(&v29 + v13) )
          {
            v12 += 250;
          }
        }
        if ( *(_DWORD *)(result + 6940) && *(_DWORD *)(result + 6960) == 17 )
        {
          if ( (v16 = *(float *)(result + 7032), v16 >= *v10)
            && v16 < v10[3]
            && (v17 = *(float *)(result + 7036), v17 >= v10[1])
            && v17 < v10[4]
            && (v18 = *(float *)(result + 7040), v18 >= v10[2])
            && v18 < v10[5]
            || !*(&v29 + v13) )
          {
            v12 += 250;
          }
        }
        if ( *(_DWORD *)(result + 13980) && *(_DWORD *)(result + 14000) == 17 )
        {
          if ( (v19 = *(float *)(result + 14072), v19 >= *v10)
            && v19 < v10[3]
            && (v20 = *(float *)(result + 14076), v20 >= v10[1])
            && v20 < v10[4]
            && (v21 = *(float *)(result + 14080), v21 >= v10[2])
            && v21 < v10[5]
            || !*(&v29 + v13) )
          {
            v12 += 250;
          }
        }
        if ( *(_DWORD *)(result + 21020) && *(_DWORD *)(result + 21040) == 17 )
        {
          if ( (v22 = *(float *)(result + 21112), v22 >= *v10)
            && v22 < v10[3]
            && (v23 = *(float *)(result + 21116), v23 >= v10[1])
            && v23 < v10[4]
            && (v24 = *(float *)(result + 21120), v24 >= v10[2])
            && v24 < v10[5]
            || !*(&v29 + v13) )
          {
            v12 += 250;
          }
        }
        result += 28160;
      }
      while ( result < (__int64)&unk_19093F124 );
    }
    v25 = dword_16D67D5EC;
    v26 = 256;
    do
    {
      if ( *(v25 - 19) )
      {
        if ( v25[14] == v9 )
        {
          result = (unsigned int)(v12 / *(int *)((char *)&v31 + v11));
          *v25 += result + 250;
          v27 = *(v25 - 4);
          if ( (_DWORD)v27 != -1 )
            *((_DWORD *)&unk_16DDCBA64 + 28 * v27) += result;
        }
      }
      v25 += 3597;
      --v26;
    }
    while ( v26 );
    *((_DWORD *)v10 + 14) = v12;
    ++v9;
    *(_DWORD *)((char *)&qword_1915FC4F4 + v11) += v12;
    v10 += 5873;
    v11 += 4;
  }
  while ( v9 < 2 );
  v28 = dword_16D67D5A0;
  do
  {
    if ( *v28 )
      result = sub_14003A560(v0);
    ++v0;
    v28 += 3597;
  }
  while ( v0 < 256 );
  return result;
}

