/* Address: 0x1400ec7e0 | Name: sub_1400EC7E0 | Size: 1418 bytes */
double __fastcall sub_1400EC7E0(int a1)
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
  signed int v27; // ecx
  char v28; // r9
  unsigned int v29; // eax
  signed int v30; // r10d
  __int64 v31; // r8
  signed int v32; // eax
  char v33; // r9
  __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // eax

  if ( a1 )
  {
    v34 = MEMORY[0x14020B8D8]("config_versus.txt", "wb");
    i = v34;
    if ( !v34 )
      return *(double *)si128.m128i_i64;
    sub_1400920F0(v34, "%s%d\r\n", "allowrespawn=", dword_140404A6C[284022499]);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", dword_140404A6C[284022500]);
    sub_1400920F0(i, "%s%d\r\n", "roundtime=", dword_140404A6C[284022501]);
    sub_1400920F0(i, "%s%d\r\n", "movedelay=", dword_140404A6C[284022502]);
    sub_1400920F0(i, "%s%d\r\n", "bonusratio=", dword_140404A6C[284022503]);
    sub_1400920F0(i, "%s%d\r\n", "teamdamage=", dword_140404A6C[284022504]);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_140278E10);
    strcpy((char *)&dword_140404A6C[284022506], "versus");
    *(_QWORD *)&dword_140404A6C[284022522] = 0x32737573726576LL;
    *(__m128i *)&dword_140404A6C[284022499] = si128;
    dword_140404A6C[284022503] = 1;
    dword_140404A6C[284022504] = 50;
    sub_1400ED940("config_versus.txt");
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
          v8 = MEMORY[0x140276EF8][v6];
          if ( !v8 )
            break;
          if ( v8 != *((_BYTE *)&dword_140404A6C[293250415] + v7) )
            break;
          ++v7;
          ++v6;
        }
        while ( v7 < (int)dword_140404A6C[293250414] );
      }
      if ( !MEMORY[0x140276EF8][v6] )
        break;
    }
    dword_140404A6C[293250413] = v3 + 13;
    if ( v3 + 13 < (int)dword_140404A6C[293250414] )
    {
      v9 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022499] = v9;
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
      dword_140404A6C[284022500] = v14;
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
          v18 = MEMORY[0x140276C18][v16];
          if ( !v18 )
            break;
          if ( v18 != *((_BYTE *)&dword_140404A6C[293250415] + v17) )
            break;
          ++v17;
          ++v16;
        }
        while ( v17 < v4 );
      }
      if ( !MEMORY[0x140276C18][v16] )
        break;
    }
    dword_140404A6C[293250413] = v15 + 10;
    if ( v15 + 10 < v4 )
    {
      v19 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022501] = v19;
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
          v23 = MEMORY[0x140276F08][v21];
          if ( !v23 )
            break;
          if ( v23 != *((_BYTE *)&dword_140404A6C[293250415] + v22) )
            break;
          ++v22;
          ++v21;
        }
        while ( v22 < v4 );
      }
      if ( !MEMORY[0x140276F08][v21] )
        break;
    }
    dword_140404A6C[293250413] = v20 + 10;
    if ( v20 + 10 < v4 )
    {
      v24 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022502] = v24;
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
          v28 = MEMORY[0x140276EC0][v26];
          if ( !v28 )
            break;
          if ( v28 != *((_BYTE *)&dword_140404A6C[293250415] + v27) )
            break;
          ++v27;
          ++v26;
        }
        while ( v27 < v4 );
      }
      if ( !MEMORY[0x140276EC0][v26] )
        break;
    }
    dword_140404A6C[293250413] = v25 + 11;
    if ( v25 + 11 < v4 )
    {
      v29 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022503] = v29;
    }
    v30 = 0;
    for ( dword_140404A6C[293250413] = 0; v30 < v4; dword_140404A6C[293250413] = ++v30 )
    {
      v31 = 0;
      if ( v30 < v4 )
      {
        v32 = v30;
        do
        {
          v33 = MEMORY[0x140276ED0][v31];
          if ( !v33 )
            break;
          if ( v33 != *((_BYTE *)&dword_140404A6C[293250415] + v32) )
            break;
          ++v32;
          ++v31;
        }
        while ( v32 < v4 );
      }
      if ( !MEMORY[0x140276ED0][v31] )
        break;
    }
    dword_140404A6C[293250413] = v30 + 11;
    if ( v30 + 11 < v4 )
      dword_140404A6C[284022504] = sub_1400A3D70();
    dword_140404A6C[293250413] = 0;
  }
  sub_14010E0D0((unsigned int)&dword_140404A6C[284022506], (unsigned int)"map01=", 30, i, a1);
  sub_14010E0D0((unsigned int)&dword_140404A6C[284022522], (unsigned int)"map02=", 30, i, a1);
  sub_14010E0D0((unsigned int)&dword_140404A6C[284022538], (unsigned int)"map03=", 30, i, a1);
  sub_14010E0D0((unsigned int)&dword_140404A6C[284022554], (unsigned int)"map04=", 30, i, a1);
  sub_14010E0D0((unsigned int)&dword_140404A6C[284022570], (unsigned int)"map05=", 30, i, a1);
  sub_14010E0D0((unsigned int)&dword_140404A6C[284022586], (unsigned int)"map06=", 30, i, a1);
  sub_14010E0D0((unsigned int)&dword_140404A6C[284022602], (unsigned int)"map07=", 30, i, a1);
  sub_14010E0D0((unsigned int)&dword_140404A6C[284022618], (unsigned int)"map08=", 30, i, a1);
  v35 = dword_140404A6C[284022501];
  if ( (int)dword_140404A6C[284022501] >= 1 )
  {
    if ( (int)dword_140404A6C[284022501] > 60 )
      v35 = 60;
    dword_140404A6C[284022501] = v35;
  }
  else
  {
    dword_140404A6C[284022501] = 1;
  }
  v36 = dword_140404A6C[284022504];
  if ( (dword_140404A6C[284022504] & 0x80000000) == 0 )
  {
    if ( (int)dword_140404A6C[284022504] > 200 )
      v36 = 200;
    dword_140404A6C[284022504] = v36;
  }
  else
  {
    dword_140404A6C[284022504] = 0;
  }
  if ( a1 )
    *(double *)si128.m128i_i64 = sub_14020B9E8(i);
  return *(double *)si128.m128i_i64;
}

