/* Address: 0x1400b5e70 | Name: sub_1400B5E70 | Size: 1130 bytes */
int __fastcall sub_1400B5E70(int a1)
{
  unsigned int v1; // r11d
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int *v6; // rdi
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // r8d
  unsigned int *v10; // rsi
  unsigned int v11; // r9d
  unsigned int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // xmm1_4
  unsigned int v21; // xmm2_4
  unsigned int v22; // xmm3_4

  v1 = dword_140404A6C[283831312];
  v2 = a1;
  if ( dword_140404A6C[283831312] == 6 && (int)dword_140404A6C[7166 * a1 + 280658299] < 50 )
    dword_140404A6C[7166 * a1 + 280651318] = 0;
  v3 = 7166LL * a1;
  v4 = a1;
  v5 = (int)dword_140404A6C[v3 + 280651305];
  if ( (_DWORD)v5 != -1 && dword_140404A6C[3597 * v5 + 71859139] && (int)dword_140404A6C[v3 + 280658299] < 50 )
    dword_140404A6C[v3 + 280651318] = 0;
  if ( dword_140404A6C[v3 + 280651319] )
  {
    LODWORD(v5) = dword_140404A6C[v3 + 280651320];
    if ( (int)v5 > 0 )
    {
      LODWORD(v5) = v5 - 1;
      dword_140404A6C[v3 + 280651320] = v5;
    }
    v6 = &dword_140404A6C[v3 + 280658299];
    v7 = dword_140404A6C[v3 + 280658299];
    if ( v7 < 50 )
      dword_140404A6C[v3 + 280651320] = 1800;
  }
  else
  {
    v6 = &dword_140404A6C[v3 + 280658299];
    v7 = dword_140404A6C[v3 + 280658299];
    if ( v7 < 75 )
    {
      LODWORD(v5) = 2 * (75 - v7);
      if ( (int)v5 > 60 )
        LODWORD(v5) = 60;
      if ( (int)dword_140404A6C[v3 + 280651333] < (int)v5 )
        dword_140404A6C[v3 + 280651333] = v5;
    }
  }
  if ( (int)dword_140404A6C[v3 + 280651318] > 0 )
  {
    if ( v7 < 0 )
      *v6 = 0;
    v8 = dword_140404A6C[7166 * v2 + 280658302];
    if ( v8 < 0 )
    {
      v8 = 0;
      dword_140404A6C[7166 * v4 + 280658302] = 0;
    }
    if ( (dword_140404A6C[7166 * v4 + 280658304] & 0x80000000) != 0 )
      dword_140404A6C[7166 * v4 + 280658304] = 0;
    if ( (dword_140404A6C[7166 * v4 + 280658306] & 0x80000000) != 0 )
      dword_140404A6C[7166 * v4 + 280658306] = 0;
    if ( (dword_140404A6C[7166 * v4 + 280658308] & 0x80000000) != 0 )
      dword_140404A6C[7166 * v4 + 280658308] = 0;
    if ( (dword_140404A6C[7166 * v4 + 280658310] & 0x80000000) != 0 )
      dword_140404A6C[7166 * v4 + 280658310] = 0;
    if ( (dword_140404A6C[7166 * v4 + 280658312] & 0x80000000) != 0 )
      dword_140404A6C[7166 * v4 + 280658312] = 0;
    v9 = dword_140404A6C[v3 + 280651319];
    if ( v9 )
      goto LABEL_41;
    if ( v8 <= 0 )
      dword_140404A6C[v3 + 280651318] = 0;
    if ( (int)dword_140404A6C[7166 * v4 + 280658304] > 0 )
    {
LABEL_41:
      v10 = &dword_140404A6C[v3 + 280658301];
      LODWORD(v5) = 63;
      v11 = dword_140404A6C[v3 + 280658301];
      if ( !v11 )
        LODWORD(v5) = 31;
      if ( v9 )
        LODWORD(v5) = 7;
    }
    else
    {
      dword_140404A6C[v3 + 280651318] = 0;
      v10 = &dword_140404A6C[v3 + 280658301];
      LODWORD(v5) = 63;
      v11 = dword_140404A6C[v3 + 280658301];
      if ( !v11 )
        LODWORD(v5) = 31;
    }
    v12 = dword_140404A6C[283831474];
    if ( (dword_140404A6C[283831474] & (unsigned int)v5) == 0 )
    {
      LODWORD(v5) = *v6;
      if ( (int)*v6 < 100 )
      {
        LODWORD(v5) = v5 + 1;
        *v6 = v5;
      }
    }
    if ( !v11 || v9 )
    {
      if ( !(_BYTE)v12 )
      {
        v13 = dword_140404A6C[v3 + 280658300];
        if ( v13 < 100 )
          dword_140404A6C[v3 + 280658300] = v13 + 1;
      }
      LODWORD(v5) = 15;
      if ( !v9 )
        LODWORD(v5) = 63;
      if ( ((unsigned int)v5 & v12) == 0 )
      {
        v14 = dword_140404A6C[7166 * v2 + 280658302];
        if ( v14 < 100 )
          dword_140404A6C[7166 * v2 + 280658302] = v14 + 1;
        v15 = dword_140404A6C[7166 * v2 + 280658304];
        if ( v15 < 100 )
          dword_140404A6C[7166 * v2 + 280658304] = v15 + 1;
        v16 = dword_140404A6C[7166 * v2 + 280658306];
        if ( v16 < 100 )
          dword_140404A6C[7166 * v2 + 280658306] = v16 + 1;
        v17 = dword_140404A6C[7166 * v2 + 280658308];
        if ( v17 < 100 )
          dword_140404A6C[7166 * v2 + 280658308] = v17 + 1;
        v18 = dword_140404A6C[7166 * v2 + 280658310];
        if ( v18 < 100 )
          dword_140404A6C[7166 * v2 + 280658310] = v18 + 1;
        LODWORD(v5) = dword_140404A6C[7166 * v2 + 280658312];
        if ( (int)v5 < 100 )
        {
          LODWORD(v5) = v5 + 1;
          dword_140404A6C[7166 * v2 + 280658312] = v5;
        }
      }
    }
    if ( *v10 )
    {
      if ( v1 == 6 )
      {
        LODWORD(v5) = rand();
        v12 = dword_140404A6C[283831474];
        if ( (v5 & 0x1FF) == 0 )
          *v10 = 0;
      }
      v19 = dword_140404A6C[v3 + 280658300];
      if ( v19 < 20 )
      {
        LODWORD(v5) = 2 * v19 + 10;
        if ( (int)*v6 > (int)v5 )
          *v6 = v5;
      }
      if ( v19 > 0 )
      {
        LODWORD(v5) = v12 ^ (v2 * v2 * v2);
        if ( (unsigned __int8)v12 == (unsigned __int8)(v2 * v2 * v2) )
        {
          if ( !dword_140404A6C[v3 + 280651319] )
          {
            LODWORD(v5) = v19 - 3;
            dword_140404A6C[v3 + 280658300] = v19 - 3;
          }
          *(float *)&v20 = (float)(*(float *)&dword_1402F6188 * 0.5) + *(float *)&dword_140404A6C[v3 + 280651518];
          *(float *)&v21 = (float)(*(float *)&dword_1402F618C * 0.5) + *(float *)&dword_140404A6C[v3 + 280651519];
          *(float *)&v22 = (float)(*(float *)&dword_1402F6190 * 0.5) + *(float *)&dword_140404A6C[v3 + 280651520];
          if ( dword_140404A6C[456202453] )
          {
            v5 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
            HIWORD(dword_140404A6C[308307070]) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756285] + v5) = 1;
            *(unsigned int *)((char *)&dword_140404A6C[297756286] + v5) = v12;
            *(unsigned int *)((char *)&dword_140404A6C[297756287] + v5) = v20;
            *(unsigned int *)((char *)&dword_140404A6C[297756288] + v5) = v21;
            *(unsigned int *)((char *)&dword_140404A6C[297756289] + v5) = v22;
            *(unsigned int *)((char *)&dword_140404A6C[297756290] + v5) = v20;
            *(unsigned int *)((char *)&dword_140404A6C[297756291] + v5) = v21;
            *(unsigned int *)((char *)&dword_140404A6C[297756292] + v5) = v22;
            *(unsigned int *)((char *)&dword_140404A6C[297756293] + v5) = 0;
            *(unsigned int *)((char *)&dword_140404A6C[297756294] + v5) = 3;
          }
        }
      }
    }
    if ( !dword_140404A6C[v3 + 280651319] && (int)dword_140404A6C[v3 + 280658300] <= 10 )
      dword_140404A6C[v3 + 280651318] = 0;
  }
  else
  {
    dword_140404A6C[v3 + 280658301] = 0;
    *v6 = 0;
  }
  return v5;
}

