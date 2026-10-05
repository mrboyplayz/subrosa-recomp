/* Address: 0x14005e860 | Name: sub_14005E860 | Size: 1243 bytes */
__int64 sub_14005E860()
{
  int v0; // r9d
  unsigned int *v1; // r10
  int v2; // r11d
  signed int v3; // r8d
  int i; // ebx
  int v5; // edi
  int v6; // ecx
  unsigned int *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  unsigned int *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r10d
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r8
  unsigned int v23; // r9d
  int v24; // ebx
  unsigned int v25; // r8d
  signed int v26; // edx
  unsigned int *v27; // rcx
  __int64 v29; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v30[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v31; // [rsp+40h] [rbp-28h]

  v0 = dword_140404A6C[179992853];
  v1 = &dword_140404A6C[283831589];
  v2 = 0;
  dword_140404A6C[487148754] = 0;
  v3 = 0;
  dword_140404A6C[487148679] = 0;
  for ( i = 0; i < 6; ++i )
  {
    v5 = *(v1 - 83);
    if ( v5 > 0 )
    {
      v6 = 0;
      v7 = v1;
      v8 = 16;
      do
      {
        if ( *(v7 - 1) )
        {
          if ( !*v7 && v0 < (int)v7[16] )
          {
            ++v6;
            if ( (int)v7[2] >= 2 )
              ++v6;
          }
        }
        v7 += 279;
        --v8;
      }
      while ( v8 );
      if ( v6 < 1 )
        goto LABEL_20;
      if ( v0 == 216000 * (v0 / 216000) )
      {
        v9 = 0;
        v10 = v1;
        v11 = 16;
        do
        {
          if ( *(v10 - 1) )
          {
            if ( !*v10 && v0 < (int)v10[16] )
            {
              ++v9;
              if ( (int)v10[2] >= 2 )
                ++v9;
            }
          }
          v10 += 279;
          --v11;
        }
        while ( v11 );
        if ( v9 < 2 )
        {
LABEL_20:
          dword_140404A6C[v3 + 487148680] = i;
          v3 = dword_140404A6C[487148679] + 1;
          v2 = v5 + dword_140404A6C[487148754];
          ++dword_140404A6C[487148679];
          dword_140404A6C[487148754] += v5;
        }
      }
    }
    v1 += 5873;
  }
  if ( v3 > 0 )
    v2 /= v3;
  v12 = dword_140404A6C[283831474];
  v13 = dword_140404A6C[456202453];
  if ( v2 < 1 )
    v2 = 1;
  dword_140404A6C[487148754] = v2;
  if ( !dword_140404A6C[283831506] )
  {
    if ( dword_140404A6C[456202453] )
    {
      v14 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v14) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v14) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v14) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v14) = 1;
    }
    dword_140404A6C[283831509] = 1;
  }
  if ( !dword_140404A6C[283837379] )
  {
    if ( v13 )
    {
      v15 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v15) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v15) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v15) = 1;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v15) = 1;
    }
    dword_140404A6C[283837382] = 1;
  }
  if ( !dword_140404A6C[283843252] )
  {
    if ( v13 )
    {
      v16 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v16) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v16) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v16) = 2;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v16) = 1;
    }
    dword_140404A6C[283843255] = 1;
  }
  if ( !dword_140404A6C[283849125] )
  {
    if ( v13 )
    {
      v17 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v17) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v17) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v17) = 3;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v17) = 1;
    }
    dword_140404A6C[283849128] = 1;
  }
  if ( !dword_140404A6C[283854998] )
  {
    if ( v13 )
    {
      v18 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v18) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v18) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v18) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v18) = 1;
    }
    dword_140404A6C[283855001] = 1;
  }
  if ( !dword_140404A6C[283860871] )
  {
    if ( v13 )
    {
      v19 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v19) = 10;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v19) = v12;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v19) = 5;
      *(unsigned int *)((char *)&dword_140404A6C[297756294] + v19) = 1;
    }
    dword_140404A6C[283860874] = 1;
  }
  if ( v3 && v0 <= 3726000 )
  {
    if ( v3 > 1 )
    {
      v20 = 1024;
      do
      {
        v21 = rand() % (signed int)dword_140404A6C[487148679];
        v22 = 4LL * (rand() % (signed int)dword_140404A6C[487148679]) + 1952808076;
        v23 = *(_DWORD *)(v22 + 0x140000000LL);
        *(_DWORD *)(v22 + 0x140000000LL) = dword_140404A6C[v21 + 487148680];
        dword_140404A6C[v21 + 487148680] = v23;
        --v20;
      }
      while ( v20 );
      v3 = dword_140404A6C[487148679];
    }
    do
    {
      v24 = v3;
      if ( v3 > 0 )
        MEMORY[0x1401FC920](v30, &dword_140404A6C[487148680]);
      if ( (rand() & 3u) < 2 && v24 > 3 )
        v24 = 3;
      if ( (rand() & 3) == 0 && v24 > 2 )
        v24 = 2;
      if ( (rand() & 3) == 0 && v24 > 1 )
        v24 = 1;
      sub_1400589A0(0, v24, (__int64)v30);
      v25 = dword_140404A6C[487148679];
      v26 = 0;
      ++dword_140404A6C[283785906];
      if ( (signed int)(dword_140404A6C[487148679] - v24) > 0 )
      {
        v27 = &dword_140404A6C[487148680];
        do
        {
          ++v26;
          *v27 = v27[v24];
          ++v27;
          v25 = dword_140404A6C[487148679];
        }
        while ( v26 < (signed int)(dword_140404A6C[487148679] - v24) );
      }
      v3 = v25 - v24;
      dword_140404A6C[487148679] = v3;
    }
    while ( v3 > 0 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v29 ^ v31);
}

