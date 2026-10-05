/* Address: 0x14004d330 | Name: sub_14004D330 | Size: 1687 bytes */
__int64 sub_14004D330()
{
  float *v0; // r10
  int *v1; // rdi
  int i; // r9d
  int v3; // r11d
  int *v4; // rcx
  __int64 v5; // rbx
  float v6; // xmm2_4
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float v11; // xmm2_4
  int *v12; // rdx
  __int64 result; // rax
  int j; // r10d
  __int64 v15; // r11
  int v16; // r8d
  int *v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rbx
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  __int64 v24; // rbx
  int *v25; // r9
  __int64 v26; // rdx
  int *v27; // rdi
  __int64 v28; // r11
  int *v29; // r10
  int v30; // r8d
  __int64 v31; // r8

  v0 = (float *)dword_1961996A4;
  v1 = (int *)&unk_19154149C;
  for ( i = 0; i < 3; ++i )
  {
    v3 = *v1;
    v4 = (int *)&unk_16D67D5E8;
    v5 = 64;
    v6 = (float)((float)*v1 * 0.0099999998) - 0.5;
    do
    {
      if ( *(v4 - 18) && *v4 > 0 && v4[15] == i )
      {
        v7 = v3 / 2;
        if ( v6 >= 1.0 && v4[18] )
          v7 = (int)(float)((float)((float)((float)v4[17] * *v0) * (float)(v6 * 0.001)) + (float)v7);
        v4[1] += 150 + v7;
      }
      if ( v4[3579] && v4[3597] > 0 && v4[3612] == i )
      {
        v8 = v3 / 2;
        if ( v6 >= 1.0 && v4[3615] )
          v8 = (int)(float)((float)((float)((float)v4[3614] * *v0) * (float)(v6 * 0.001)) + (float)v8);
        v4[3598] += 150 + v8;
      }
      if ( v4[7176] && v4[7194] > 0 && v4[7209] == i )
      {
        v9 = v3 / 2;
        if ( v6 >= 1.0 && v4[7212] )
          v9 = (int)(float)((float)((float)((float)v4[7211] * *v0) * (float)(v6 * 0.001)) + (float)v9);
        v4[7195] += 150 + v9;
      }
      if ( v4[10773] && v4[10791] > 0 && v4[10806] == i )
      {
        v10 = v3 / 2;
        if ( v6 >= 1.0 && v4[10809] )
          v10 = (int)(float)((float)((float)((float)v4[10808] * *v0) * (float)(v6 * 0.001)) + (float)v10);
        v4[10792] += 150 + v10;
      }
      v4 += 14388;
      --v5;
    }
    while ( v5 );
    v11 = (float)((float)(v6 * 0.0049999999) + 1.0) * *v0;
    if ( v11 >= 10.0 )
    {
      *v0 = v11;
      if ( v11 >= 500.0 )
      {
        v12 = dword_16D67D62C;
        *v0 = v11 * 0.2;
        do
        {
          if ( *(v12 - 35) && *(v12 - 2) == i )
            *v12 *= 5;
          v12 += 3597;
        }
        while ( (__int64)v12 < (__int64)&dword_16DA00A2C );
      }
    }
    else
    {
      *v0 = 10.0;
    }
    v1 += 5873;
    v0 += 6;
  }
  result = (__int64)&unk_16D67D630;
  do
  {
    if ( *(_DWORD *)(result - 144) )
      *(_DWORD *)result = 0;
    if ( *(_DWORD *)(result + 14244) )
      *(_DWORD *)(result + 14388) = 0;
    result += 28776;
  }
  while ( result < (__int64)&unk_16DA00A30 );
  for ( j = 0; j < 3; ++j )
  {
    v15 = -1;
    v16 = 1000;
    v17 = (int *)&unk_16D67D5E8;
    v18 = 2;
    v19 = 64;
    do
    {
      if ( *(v17 - 18) )
      {
        if ( *v17 > 0 )
        {
          result = v17[15];
          if ( (_DWORD)result == j )
          {
            v20 = (float)((float)v17[17] * *(float *)&dword_1961996A4[6 * result]) + (float)v17[1];
            if ( (float)v16 < v20 )
            {
              v15 = v18 - 2;
              v16 = (int)v20;
            }
          }
        }
      }
      if ( v17[3579] )
      {
        if ( v17[3597] > 0 )
        {
          result = v17[3612];
          if ( (_DWORD)result == j )
          {
            v21 = (float)((float)v17[3614] * *(float *)&dword_1961996A4[6 * result]) + (float)v17[3598];
            if ( (float)v16 < v21 )
            {
              v15 = v18 - 1;
              v16 = (int)v21;
            }
          }
        }
      }
      if ( v17[7176] )
      {
        if ( v17[7194] > 0 )
        {
          result = v17[7209];
          if ( (_DWORD)result == j )
          {
            v22 = (float)((float)v17[7211] * *(float *)&dword_1961996A4[6 * result]) + (float)v17[7195];
            if ( (float)v16 < v22 )
            {
              v15 = v18;
              v16 = (int)v22;
            }
          }
        }
      }
      if ( v17[10773] )
      {
        if ( v17[10791] > 0 )
        {
          result = v17[10806];
          if ( (_DWORD)result == j )
          {
            v23 = (float)((float)v17[10808] * *(float *)&dword_1961996A4[6 * result]) + (float)v17[10792];
            if ( (float)v16 < v23 )
            {
              v15 = v18 + 1;
              v16 = (int)v23;
            }
          }
        }
      }
      v18 += 4;
      v17 += 14388;
      --v19;
    }
    while ( v19 );
    if ( v15 != -1 )
    {
      result = 14388 * v15;
      *((_DWORD *)&unk_16D67D630 + 3597 * v15) = 1;
    }
  }
  v24 = 0;
  v25 = dword_16D67D63C;
  do
  {
    if ( *(v25 - 39) )
    {
      result = *v25;
      if ( (_DWORD)result != -1 )
      {
        v26 = 0;
        v27 = &dword_19094849C[7166 * result];
        while ( 1 )
        {
          v28 = *(v27 - 1);
          v25[v26 + 1494] = 0;
          if ( v28 > 0 )
            break;
LABEL_87:
          v26 += 25;
          v27 += 10;
          if ( v26 >= 175 )
            goto LABEL_88;
        }
        v29 = v27;
        while ( 1 )
        {
          result = *v29;
          v30 = dword_19025F0D4[1760 * result];
          if ( v30 > 14 )
          {
            if ( v30 != 27 )
              goto LABEL_86;
            result = dword_19025F340[1760 * result];
            if ( (_DWORD)result == -1 )
              goto LABEL_86;
            v31 = 5210 * result;
            if ( dword_16E6A3C6C[5210 * result] <= 0 )
              goto LABEL_86;
            dword_16D67ED98[3 * v24 + 3 * v25[v26 + 1494] + v26] = 27;
            dword_16D67ED98[3 * v24 + 1 + 3 * v25[v26 + 1494] + v26] = dword_16E6A3C64[v31];
            result = *(unsigned int *)((char *)&unk_16E6A3C78 + v31 * 4);
            dword_16D67ED98[3 * v24 + 2 + 3 * v25[v26 + 1494] + v26] = result;
          }
          else
          {
            result = 3 * (v24 + v25[v26 + 1494]);
            dword_16D67ED98[3 * v24 + 3 * v25[v26 + 1494] + v26] = v30;
          }
          ++v25[v26 + 1494];
LABEL_86:
          ++v29;
          if ( !--v28 )
            goto LABEL_87;
        }
      }
    }
LABEL_88:
    v25 += 3597;
    v24 += 1199;
  }
  while ( (__int64)v25 < (__int64)dword_16DA00A3C );
  return result;
}

