/* Address: 0x140043fe0 | Name: sub_140043FE0 | Size: 1243 bytes */
void sub_140043FE0()
{
  int v0; // r9d
  _DWORD *v1; // r10
  int v2; // r11d
  int v3; // r8d
  int i; // ebx
  int v5; // edi
  int v6; // ecx
  _DWORD *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  _DWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // r10d
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r8
  int v23; // r9d
  int v24; // ebx
  int v25; // r8d
  int v26; // edx
  int *v27; // rcx
  _BYTE v28[32]; // [rsp+20h] [rbp-48h] BYREF

  v0 = dword_178C5B8E0;
  v1 = &unk_1915415E0;
  v2 = 0;
  dword_163D94B74 = 0;
  v3 = 0;
  dword_163D94A48 = 0;
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
          if ( !*v7 && v0 < v7[16] )
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
            if ( !*v10 && v0 < v10[16] )
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
          dword_163D94A4C[v3] = i;
          v3 = dword_163D94A48 + 1;
          v2 = v5 + dword_163D94B74;
          ++dword_163D94A48;
          dword_163D94B74 += v5;
        }
      }
    }
    v1 += 5873;
  }
  if ( v3 > 0 )
    v2 /= v3;
  v12 = dword_191541414;
  v13 = dword_163D75B60;
  if ( v2 < 1 )
    v2 = 1;
  dword_163D94B74 = v2;
  if ( !dword_191541494 )
  {
    if ( dword_163D75B60 )
    {
      v14 = (__int64)dword_196199564++ << 7;
      HIWORD(dword_196199564) = 0;
      *(_DWORD *)((char *)&unk_195999560 + v14) = 10;
      *(_DWORD *)((char *)&unk_195999564 + v14) = v12;
      *(int *)((char *)&dword_195999580 + v14) = 0;
      *(int *)((char *)&dword_195999584 + v14) = 1;
    }
    dword_1915414A0 = 1;
  }
  if ( !dword_191547058 )
  {
    if ( v13 )
    {
      v15 = (__int64)dword_196199564++ << 7;
      HIWORD(dword_196199564) = 0;
      *(_DWORD *)((char *)&unk_195999560 + v15) = 10;
      *(_DWORD *)((char *)&unk_195999564 + v15) = v12;
      *(int *)((char *)&dword_195999580 + v15) = 1;
      *(int *)((char *)&dword_195999584 + v15) = 1;
    }
    dword_191547064 = 1;
  }
  if ( !dword_19154CC1C )
  {
    if ( v13 )
    {
      v16 = (__int64)dword_196199564++ << 7;
      HIWORD(dword_196199564) = 0;
      *(_DWORD *)((char *)&unk_195999560 + v16) = 10;
      *(_DWORD *)((char *)&unk_195999564 + v16) = v12;
      *(int *)((char *)&dword_195999580 + v16) = 2;
      *(int *)((char *)&dword_195999584 + v16) = 1;
    }
    dword_19154CC28 = 1;
  }
  if ( !dword_1915527E0 )
  {
    if ( v13 )
    {
      v17 = (__int64)dword_196199564++ << 7;
      HIWORD(dword_196199564) = 0;
      *(_DWORD *)((char *)&unk_195999560 + v17) = 10;
      *(_DWORD *)((char *)&unk_195999564 + v17) = v12;
      *(int *)((char *)&dword_195999580 + v17) = 3;
      *(int *)((char *)&dword_195999584 + v17) = 1;
    }
    dword_1915527EC = 1;
  }
  if ( !dword_1915583A4 )
  {
    if ( v13 )
    {
      v18 = (__int64)dword_196199564++ << 7;
      HIWORD(dword_196199564) = 0;
      *(_DWORD *)((char *)&unk_195999560 + v18) = 10;
      *(_DWORD *)((char *)&unk_195999564 + v18) = v12;
      *(int *)((char *)&dword_195999580 + v18) = 4;
      *(int *)((char *)&dword_195999584 + v18) = 1;
    }
    dword_1915583B0 = 1;
  }
  if ( !dword_19155DF68 )
  {
    if ( v13 )
    {
      v19 = (__int64)dword_196199564++ << 7;
      HIWORD(dword_196199564) = 0;
      *(_DWORD *)((char *)&unk_195999560 + v19) = 10;
      *(_DWORD *)((char *)&unk_195999564 + v19) = v12;
      *(int *)((char *)&dword_195999580 + v19) = 5;
      *(int *)((char *)&dword_195999584 + v19) = 1;
    }
    dword_19155DF74 = 1;
  }
  if ( v3 && v0 <= 3726000 )
  {
    if ( v3 > 1 )
    {
      v20 = 1024;
      do
      {
        v21 = rand() % dword_163D94A48;
        v22 = 4LL * (rand() % dword_163D94A48) + 601442892;
        v23 = *(_DWORD *)(v22 + 0x140000000LL);
        *(_DWORD *)(v22 + 0x140000000LL) = dword_163D94A4C[v21];
        dword_163D94A4C[v21] = v23;
        --v20;
      }
      while ( v20 );
      v3 = dword_163D94A48;
    }
    do
    {
      v24 = v3;
      if ( v3 > 0 )
        memcpy(v28, dword_163D94A4C, 4LL * v3);
      if ( (rand() & 3u) < 2 && v24 > 3 )
        v24 = 3;
      if ( (rand() & 3) == 0 && v24 > 2 )
        v24 = 2;
      if ( (rand() & 3) == 0 && v24 > 1 )
        v24 = 1;
      sub_14003E5E0(0, v24, (__int64)v28);
      v25 = dword_163D94A48;
      v26 = 0;
      ++dword_191536C14;
      if ( dword_163D94A48 - v24 > 0 )
      {
        v27 = dword_163D94A4C;
        do
        {
          ++v26;
          *v27 = v27[v24];
          ++v27;
          v25 = dword_163D94A48;
        }
        while ( v26 < dword_163D94A48 - v24 );
      }
      v3 = v25 - v24;
      dword_163D94A48 = v3;
    }
    while ( v3 > 0 );
  }
}

