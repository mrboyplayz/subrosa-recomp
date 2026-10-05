/* Address: 0x140072680 | Name: sub_140072680 | Size: 1383 bytes */
__int64 __fastcall sub_140072680(signed int a1)
{
  unsigned __int64 v1; // r10
  __int64 v2; // r8
  int *v3; // r9
  __int64 v4; // r12
  __int64 i; // rdx
  bool v6; // cf
  __int64 v7; // rdx
  unsigned int v8; // r8d
  int v9; // r13d
  __int64 v10; // rsi
  int v11; // ebp
  int v12; // r14d
  __int64 v13; // r15
  int v14; // ebx
  int v15; // ecx
  int j; // edi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v26; // [rsp+68h] [rbp+10h]

  v1 = 7040LL * a1;
  v2 = 0;
  v3 = &dword_190260940[v1 / 4];
  v4 = a1;
  do
  {
    for ( i = 0; i < 32; ++i )
    {
      *((_BYTE *)v3 + i) = 0;
      if ( !v2 || (v6 = (unsigned __int64)v2 < 0x15, v2 == 21) )
      {
        *((_BYTE *)v3 + i) = 1;
        v6 = (unsigned __int64)v2 < 0x15;
      }
      if ( v6 && (!i || i == 30) )
        *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 32 * v2 + i + 6272) = 1;
    }
    ++v2;
    v3 += 8;
  }
  while ( v2 < 24 );
  v7 = 7040LL * a1;
  v8 = *(_DWORD *)((_BYTE *)&unk_19025F0C0 + v7 + 5736) & 7;
  if ( v8 )
  {
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6344) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6376) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6408) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6440) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6472) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6504) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6536) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6902) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6870) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6838) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6806) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6774) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6742) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6710) = 1;
  }
  if ( v8 >= 2 )
  {
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6358) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6390) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6422) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6454) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6486) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6518) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6550) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6888) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6856) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6824) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6792) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6760) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6728) = 1;
    *((_BYTE *)&unk_19025F0C0 + 7040 * a1 + 6696) = 1;
  }
  if ( v8 >= 3 )
  {
    *(_DWORD *)((char *)&unk_19025F0C0 + v7 + 6625) = 16843009;
    *(_DWORD *)((char *)&unk_19025F0C0 + v7 + 6629) = 16843009;
  }
  if ( v8 >= 4 )
  {
    *(_DWORD *)((char *)&unk_19025F0C0 + v7 + 6650) = 16843009;
    *(_DWORD *)((char *)&unk_19025F0C0 + v7 + 6646) = 16843009;
  }
  if ( v8 >= 5 )
  {
    *(_DWORD *)((char *)&unk_19025F0C0 + v7 + 6411) = 16843009;
    *(_DWORD *)((char *)&unk_19025F0C0 + v7 + 6415) = 16843009;
    *((_BYTE *)&unk_19025F0C0 + v7 + 6419) = 1;
  }
  if ( v8 >= 6 )
  {
    *(_DWORD *)((char *)&unk_19025F0C0 + v1 + 6827) = 16843009;
    *(_DWORD *)((char *)&unk_19025F0C0 + v1 + 6831) = 16843009;
    *((_BYTE *)&unk_19025F0C0 + v1 + 6835) = 1;
  }
  if ( v8 >= 7 )
  {
    *((_BYTE *)&unk_19025F0C0 + v7 + 6678) = 1;
    *((_BYTE *)&unk_19025F0C0 + v7 + 6312) = 1;
  }
  v9 = 0;
  v26 = 0;
  v10 = 220LL * a1;
  do
  {
    if ( v9 )
    {
      v11 = 17;
      if ( v9 == 1 )
      {
        v12 = 1;
      }
      else
      {
        v12 = 11;
        if ( v9 != 2 )
          v11 = 1;
      }
    }
    else
    {
      v11 = 1;
      v12 = 1;
    }
    v13 = 2;
    do
    {
      v14 = v11 + rand() % 12;
      v15 = v12 + rand() % 9;
      for ( j = 0; j < 512; ++j )
      {
        if ( !*((_BYTE *)&unk_19025F0C0 + 32 * v10 + 32 * v15 + v14 + 6272) )
          break;
        v14 = v11 + rand() % 12;
        v15 = v12 + rand() % 9;
      }
      v17 = v14 + 32 * (220 * v4 + v15);
      if ( !*((_BYTE *)&unk_19025F0C0 + v17 + 6272) )
      {
        *((_BYTE *)&unk_19025F0C0 + v17 + 6272) = 4;
        ++*((_DWORD *)&unk_19025F0C0 + 1760 * v4 + 1433);
      }
      --v13;
    }
    while ( v13 );
    v9 = v26 + 1;
    v26 = v9;
  }
  while ( v9 < 4 );
  v18 = 7040 * v4;
  v19 = 880 * v4;
  *(_QWORD *)((char *)&unk_19025F0C0 + v18 + 5752) = 0;
  *((_DWORD *)&unk_19025F0C0 + 2 * v19 + 1440) = 15;
  *((_DWORD *)&unk_19025F0C0 + 2 * v19 + 1441) = 10;
  v20 = ((unsigned __int8)*((_DWORD *)&unk_19025F0C0 + 1760 * v4 + 1438) + 1) & 0x3F;
  *(_DWORD *)((char *)&unk_19025F0C0 + v18 + 5752) = v20;
  v21 = 880 * v4 + v20;
  *((_DWORD *)&unk_19025F0C0 + 2 * v21 + 1440) = 15;
  *((_DWORD *)&unk_19025F0C0 + 2 * v21 + 1441) = 10;
  v22 = ((unsigned __int8)*((_DWORD *)&unk_19025F0C0 + 1760 * v4 + 1438) + 1) & 0x3F;
  *(_DWORD *)((char *)&unk_19025F0C0 + v18 + 5752) = v22;
  v23 = 880 * v4 + v22;
  *((_DWORD *)&unk_19025F0C0 + 2 * v23 + 1440) = 15;
  *((_DWORD *)&unk_19025F0C0 + 2 * v23 + 1441) = 10;
  *((_BYTE *)&unk_19025F0C0 + v18 + 6607) = 3;
  *(_DWORD *)((char *)&unk_19025F0C0 + v18 + 5748) = 0;
  ++*(_DWORD *)((char *)&unk_19025F0C0 + v18 + 5736);
  *(_DWORD *)((char *)&unk_19025F0C0 + v18 + 5740) = 64;
  return sub_1400721D0(a1);
}

