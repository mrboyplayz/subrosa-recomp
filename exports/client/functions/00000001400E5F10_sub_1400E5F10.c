/* Address: 0x1400e5f10 | Name: sub_1400E5F10 | Size: 1455 bytes */
void sub_1400E5F10()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  int i; // esi
  __int64 v3; // rdi
  FILE *v4; // rax
  FILE *v5; // rbx
  int j; // eax
  int v7; // r9d
  __int64 v8; // rdx
  int v9; // ecx
  char v10; // r8
  unsigned int v11; // r9d
  int v12; // ecx
  __int64 v13; // rdx
  unsigned int *v14; // rax
  FILE *v15; // rax
  FILE *v16; // rbx
  int k; // eax
  int v18; // r10d
  __int64 v19; // rdx
  int v20; // eax
  char v21; // r8
  int v22; // ecx
  char v23; // dl
  __int64 v24; // rdx
  char v25; // cl
  int v26; // [rsp+40h] [rbp+8h] BYREF
  __int64 v27; // [rsp+48h] [rbp+10h] BYREF

  dword_140404A6C[134050357] = sub_14009DE80();
  dword_140404A6C[134050358] = 0;
  sub_14024C22C(&dword_140404A6C[278520373]);
  v0 = MEMORY[0x14020B8D8]("server.srk", "rb");
  v1 = v0;
  if ( v0 )
  {
    (*(void (__fastcall **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(&v26, 4, 1, v0);
    if ( (unsigned int)(v26 - 7) <= 1 )
    {
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[134050357],
        4,
        1,
        v1);
      (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
        &dword_140404A6C[134050358],
        4,
        1,
        v1);
      for ( i = 0; i < (int)dword_140404A6C[134050358]; ++i )
      {
        v3 = 28LL * i;
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050361],
          4,
          1,
          v1);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050362],
          4,
          1,
          v1);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050363],
          8,
          1,
          v1);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050359],
          4,
          1,
          v1);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050360],
          4,
          1,
          v1);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050365],
          1,
          32,
          v1);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050374],
          4,
          1,
          v1);
        if ( v26 >= 8 )
        {
          (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
            &dword_140404A6C[v3 + 134050375],
            4,
            1,
            v1);
          (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
            &dword_140404A6C[v3 + 134050376],
            4,
            1,
            v1);
        }
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050378],
          4,
          1,
          v1);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050380],
          4,
          1,
          v1);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050381],
          4,
          1,
          v1);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050382],
          4,
          1,
          v1);
        (*(void (__fastcall **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v3 + 134050385],
          4,
          1,
          v1);
      }
    }
    sub_14020B9E8(v1);
  }
  sub_14024C22C(&dword_140404A6C[278520245]);
  dword_140404A6C[135033401] = 0;
  dword_140404A6C[293250414] = 0;
  v4 = (FILE *)MEMORY[0x14020B8D8]("serveradmin.txt", "rb");
  v5 = v4;
  if ( v4 )
  {
    for ( j = sub_14020BB2C(v4); j != -1; j = sub_14020BB2C(v5) )
      *((_BYTE *)&dword_140404A6C[293250415] + (int)dword_140404A6C[293250414]++) = j;
    *((_BYTE *)&dword_140404A6C[293250415] + (int)dword_140404A6C[293250414]) = 0;
    sub_14020B9E8(v5);
  }
  v7 = 0;
  dword_140404A6C[293250413] = 0;
  while ( 1 )
  {
LABEL_13:
    while ( v7 < (int)dword_140404A6C[293250414] )
    {
      v8 = 0;
      if ( v7 < (int)dword_140404A6C[293250414] )
      {
        v9 = v7;
        do
        {
          v10 = aAdminphone[v8];
          if ( !v10 )
            break;
          if ( v10 != *((_BYTE *)&dword_140404A6C[293250415] + v9) )
            break;
          ++v9;
          ++v8;
        }
        while ( v9 < (int)dword_140404A6C[293250414] );
      }
      if ( !aAdminphone[v8] )
        break;
      dword_140404A6C[293250413] = ++v7;
    }
    dword_140404A6C[293250413] = v7 + 11;
    if ( v7 + 11 >= (int)dword_140404A6C[293250414] )
      break;
    v11 = sub_140115360();
    if ( (int)dword_140404A6C[135033401] < 1024 )
    {
      dword_140404A6C[dword_140404A6C[135033401] + 135033402] = v11;
      ++dword_140404A6C[135033401];
    }
    v12 = 0;
    v13 = 0;
    if ( (int)dword_140404A6C[134050358] <= 0 )
      goto LABEL_30;
    v14 = &dword_140404A6C[134050362];
    while ( *v14 != v11 )
    {
      ++v12;
      ++v13;
      v14 += 28;
      if ( v12 >= (int)dword_140404A6C[134050358] )
      {
        v7 = dword_140404A6C[293250413];
        goto LABEL_13;
      }
    }
    if ( v13 == -1 )
    {
LABEL_30:
      v7 = dword_140404A6C[293250413];
    }
    else
    {
      v7 = dword_140404A6C[293250413];
      dword_140404A6C[28 * v13 + 134050386] = 1;
    }
  }
  dword_140404A6C[293250414] = 0;
  v15 = (FILE *)MEMORY[0x14020B8D8]("serversteamban.txt", "rb");
  v16 = v15;
  if ( v15 )
  {
    for ( k = sub_14020BB2C(v15); k != -1; k = sub_14020BB2C(v16) )
      *((_BYTE *)&dword_140404A6C[293250415] + (int)dword_140404A6C[293250414]++) = k;
    *((_BYTE *)&dword_140404A6C[293250415] + (int)dword_140404A6C[293250414]) = 0;
    sub_14020B9E8(v16);
  }
  v18 = 0;
  dword_140404A6C[293250413] = 0;
  for ( dword_140404A6C[134967863] = 0; ; ++dword_140404A6C[134967863] )
  {
    for ( ; v18 < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++v18 )
    {
      v19 = 0;
      if ( v18 < (int)dword_140404A6C[293250414] )
      {
        v20 = v18;
        do
        {
          v21 = aSteamban[v19];
          if ( !v21 )
            break;
          if ( v21 != *((_BYTE *)&dword_140404A6C[293250415] + v20) )
            break;
          ++v20;
          ++v19;
        }
        while ( v20 < (int)dword_140404A6C[293250414] );
      }
      if ( !aSteamban[v19] )
        break;
    }
    v22 = v18 + 9;
    dword_140404A6C[293250413] = v18 + 9;
    if ( v18 + 9 >= (int)dword_140404A6C[293250414] )
      break;
    do
    {
      v23 = *((_BYTE *)&dword_140404A6C[293250415] + v22);
      if ( (unsigned __int8)(v23 - 48) <= 9u )
        break;
      if ( v23 == 45 )
        break;
      dword_140404A6C[293250413] = ++v22;
    }
    while ( v22 < (int)dword_140404A6C[293250414] );
    v24 = 0;
    if ( v22 < (int)dword_140404A6C[293250414] )
    {
      do
      {
        if ( v24 >= 255 )
          break;
        v25 = *((_BYTE *)&dword_140404A6C[293250415] + v22);
        if ( (unsigned __int8)(v25 - 48) > 9u && v25 != 45 )
          break;
        *((_BYTE *)&dword_140404A6C[293512559] + v24++) = v25;
        v22 = ++dword_140404A6C[293250413];
      }
      while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
    }
    *((_BYTE *)&dword_140404A6C[293512559] + v24) = 0;
    sub_14015B070(&dword_140404A6C[293512559], "%I64u", &v27);
    v18 = dword_140404A6C[293250413];
    *(_QWORD *)&dword_140404A6C[2 * dword_140404A6C[134967863] + 134967865] = v27;
  }
}

