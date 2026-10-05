/* Address: 0x1400ec410 | Name: sub_1400EC410 | Size: 971 bytes */
double __fastcall sub_1400EC410(int a1)
{
  __m128i si128; // xmm0
  int v3; // r10d
  signed int v4; // edx
  __int64 i; // rbx
  __int64 v6; // r8
  int v7; // ecx
  char v8; // r9
  unsigned int v9; // eax
  signed int v10; // r10d
  __int64 v11; // r8
  signed int v12; // ecx
  char v13; // r9
  unsigned int v14; // eax
  signed int v15; // r10d
  __int64 v16; // r8
  signed int v17; // ecx
  char v18; // r9
  unsigned int v19; // eax
  signed int v20; // r10d
  __int64 v21; // r8
  signed int v22; // ecx
  char v23; // r9
  unsigned int v24; // eax
  signed int v25; // r10d
  __int64 v26; // r8
  signed int v27; // eax
  char v28; // r9
  int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // eax

  if ( a1 )
  {
    v30 = MEMORY[0x14020B8D8]("config_round.txt", "wb");
    i = v30;
    if ( !v30 )
      return *(double *)si128.m128i_i64;
    sub_1400920F0(v30, "%s%d\r\n", "roundtime=", dword_140404A6C[284022480]);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", dword_140404A6C[284022481]);
    sub_1400920F0(i, "%s%d\r\n", "weekly=", dword_140404A6C[284022482]);
    sub_1400920F0(i, "%s%d\r\n", "bonusratio=", dword_140404A6C[284022483]);
    sub_1400920F0(i, "%s%d\r\n", "teamdamage=", dword_140404A6C[284022484]);
    v29 = dword_140404A6C[284022484];
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_140278EC0);
    *(__m128i *)&dword_140404A6C[284022480] = si128;
    dword_140404A6C[284022484] = 50;
    sub_1400ED940("config_round.txt");
    v3 = dword_140404A6C[293250413];
    v4 = dword_140404A6C[293250414];
    for ( i = 0; v3 < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++v3 )
    {
      v6 = 0;
      if ( v3 < (int)dword_140404A6C[293250414] )
      {
        v7 = v3;
        do
        {
          v8 = MEMORY[0x140276C18][v6];
          if ( !v8 )
            break;
          if ( v8 != *((_BYTE *)&dword_140404A6C[293250415] + v7) )
            break;
          ++v7;
          ++v6;
        }
        while ( v7 < (int)dword_140404A6C[293250414] );
      }
      if ( !MEMORY[0x140276C18][v6] )
        break;
    }
    dword_140404A6C[293250413] = v3 + 10;
    if ( v3 + 10 < (int)dword_140404A6C[293250414] )
    {
      v9 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022480] = v9;
    }
    v10 = 0;
    for ( dword_140404A6C[293250413] = 0; v10 < v4; dword_140404A6C[293250413] = ++v10 )
    {
      v11 = 0;
      if ( v10 < v4 )
      {
        v12 = v10;
        do
        {
          v13 = MEMORY[0x140276E60][v11];
          if ( !v13 )
            break;
          if ( v13 != *((_BYTE *)&dword_140404A6C[293250415] + v12) )
            break;
          ++v12;
          ++v11;
        }
        while ( v12 < v4 );
      }
      if ( !MEMORY[0x140276E60][v11] )
        break;
    }
    dword_140404A6C[293250413] = v10 + 10;
    if ( v10 + 10 < v4 )
    {
      v14 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022481] = v14;
    }
    v15 = 0;
    for ( dword_140404A6C[293250413] = 0; v15 < v4; dword_140404A6C[293250413] = ++v15 )
    {
      v16 = 0;
      if ( v15 < v4 )
      {
        v17 = v15;
        do
        {
          v18 = MEMORY[0x140276EB8][v16];
          if ( !v18 )
            break;
          if ( v18 != *((_BYTE *)&dword_140404A6C[293250415] + v17) )
            break;
          ++v17;
          ++v16;
        }
        while ( v17 < v4 );
      }
      if ( !MEMORY[0x140276EB8][v16] )
        break;
    }
    dword_140404A6C[293250413] = v15 + 7;
    if ( v15 + 7 < v4 )
    {
      v19 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022482] = v19;
    }
    v20 = 0;
    for ( dword_140404A6C[293250413] = 0; v20 < v4; dword_140404A6C[293250413] = ++v20 )
    {
      v21 = 0;
      if ( v20 < v4 )
      {
        v22 = v20;
        do
        {
          v23 = MEMORY[0x140276EC0][v21];
          if ( !v23 )
            break;
          if ( v23 != *((_BYTE *)&dword_140404A6C[293250415] + v22) )
            break;
          ++v22;
          ++v21;
        }
        while ( v22 < v4 );
      }
      if ( !MEMORY[0x140276EC0][v21] )
        break;
    }
    dword_140404A6C[293250413] = v20 + 11;
    if ( v20 + 11 < v4 )
    {
      v24 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022483] = v24;
    }
    v25 = 0;
    for ( dword_140404A6C[293250413] = 0; v25 < v4; dword_140404A6C[293250413] = ++v25 )
    {
      v26 = 0;
      if ( v25 < v4 )
      {
        v27 = v25;
        do
        {
          v28 = MEMORY[0x140276ED0][v26];
          if ( !v28 )
            break;
          if ( v28 != *((_BYTE *)&dword_140404A6C[293250415] + v27) )
            break;
          ++v27;
          ++v26;
        }
        while ( v27 < v4 );
      }
      if ( !MEMORY[0x140276ED0][v26] )
        break;
    }
    dword_140404A6C[293250413] = v25 + 11;
    if ( v25 + 11 >= v4 )
      v29 = dword_140404A6C[284022484];
    else
      v29 = sub_1400A3D70();
    dword_140404A6C[293250413] = 0;
  }
  if ( (int)dword_140404A6C[284022480] >= 1 )
  {
    v31 = dword_140404A6C[284022480];
    if ( (int)dword_140404A6C[284022480] > 60 )
      v31 = 60;
    dword_140404A6C[284022480] = v31;
  }
  else
  {
    dword_140404A6C[284022480] = 1;
  }
  if ( v29 >= 0 )
  {
    if ( v29 > 200 )
      v29 = 200;
    dword_140404A6C[284022484] = v29;
  }
  else
  {
    dword_140404A6C[284022484] = 0;
  }
  if ( a1 )
    *(double *)si128.m128i_i64 = sub_14020B9E8(i);
  return *(double *)si128.m128i_i64;
}

