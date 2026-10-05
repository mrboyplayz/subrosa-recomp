/* Address: 0x1400ecd70 | Name: sub_1400ECD70 | Size: 2329 bytes */
double __fastcall sub_1400ECD70(int a1)
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
  signed int v32; // ecx
  char v33; // r9
  unsigned int v34; // eax
  signed int v35; // r10d
  __int64 v36; // r8
  signed int v37; // ecx
  char v38; // r9
  unsigned int v39; // eax
  signed int v40; // r10d
  __int64 v41; // r8
  signed int v42; // ecx
  char v43; // r9
  unsigned int v44; // eax
  signed int v45; // r10d
  __int64 v46; // r8
  signed int v47; // ecx
  char v48; // r9
  unsigned int v49; // eax
  signed int v50; // r10d
  __int64 v51; // r8
  signed int v52; // ecx
  char v53; // r9
  unsigned int v54; // eax
  signed int v55; // r10d
  __int64 v56; // r8
  signed int v57; // ecx
  char v58; // r9
  unsigned int v59; // eax
  signed int v60; // r10d
  __int64 v61; // r8
  signed int v62; // ecx
  char v63; // r9
  unsigned int v64; // eax
  signed int v65; // r10d
  __int64 v66; // r8
  signed int v67; // ecx
  char v68; // r9
  unsigned int v69; // eax
  signed int v70; // r10d
  __int64 v71; // r8
  signed int v72; // eax
  char v73; // r9
  __int64 v74; // rax
  unsigned int v75; // eax
  unsigned int v76; // eax

  if ( a1 )
  {
    v74 = MEMORY[0x14020B8D8]("config_world.txt", "wb");
    i = v74;
    if ( !v74 )
      return *(double *)si128.m128i_i64;
    sub_1400920F0(v74, "%s%d\r\n", "traffic=", dword_140404A6C[284022485]);
    sub_1400920F0(i, "%s%d\r\n", "crimecivciv=", dword_140404A6C[284022486]);
    sub_1400920F0(i, "%s%d\r\n", "crimecivteam=", dword_140404A6C[284022487]);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamciv=", dword_140404A6C[284022488]);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamteam=", dword_140404A6C[284022489]);
    sub_1400920F0(i, "%s%d\r\n", "crimeteamteaminbase=", dword_140404A6C[284022490]);
    sub_1400920F0(i, "%s%d\r\n", "crimevscriminal=", dword_140404A6C[284022491]);
    sub_1400920F0(i, "%s%d\r\n", "crimenobuy=", dword_140404A6C[284022492]);
    sub_1400920F0(i, "%s%d\r\n", "crimenospawn=", dword_140404A6C[284022493]);
    sub_1400920F0(i, "%s%d\r\n", "crimekick=", dword_140404A6C[284022494]);
    sub_1400920F0(i, "%s%d\r\n", "startcash=", dword_140404A6C[284022495]);
    sub_1400920F0(i, "%s%d\r\n", "mincash=", dword_140404A6C[284022496]);
    sub_1400920F0(i, "%s%d\r\n", "showjoinexit=", dword_140404A6C[284022497]);
    sub_1400920F0(i, "%s%d\r\n", "respawnteam=", dword_140404A6C[284022498]);
  }
  else
  {
    *(__m128i *)&dword_140404A6C[284022485] = _mm_load_si128((const __m128i *)&xmmword_1402790F0);
    si128 = _mm_load_si128((const __m128i *)&xmmword_140279190);
    *(__m128i *)&dword_140404A6C[284022493] = si128;
    *(_QWORD *)&dword_140404A6C[284022497] = 1;
    *(__m128i *)&dword_140404A6C[284022489] = _mm_load_si128((const __m128i *)&xmmword_140279180);
    sub_1400ED940("config_world.txt");
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
          v8 = MEMORY[0x140276DB0][v6];
          if ( !v8 )
            break;
          if ( v8 != *((_BYTE *)&dword_140404A6C[293250415] + v7) )
            break;
          ++v7;
          ++v6;
        }
        while ( v7 < (int)dword_140404A6C[293250414] );
      }
      if ( !MEMORY[0x140276DB0][v6] )
        break;
    }
    dword_140404A6C[293250413] = v3 + 8;
    if ( v3 + 8 < (int)dword_140404A6C[293250414] )
    {
      v9 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022485] = v9;
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
          v13 = MEMORY[0x140276DC0][v11];
          if ( !v13 )
            break;
          if ( v13 != *((_BYTE *)&dword_140404A6C[293250415] + v12) )
            break;
          ++v12;
          ++v11;
        }
        while ( v12 < v4 );
      }
      if ( !MEMORY[0x140276DC0][v11] )
        break;
    }
    dword_140404A6C[293250413] = v10 + 12;
    if ( v10 + 12 < v4 )
    {
      v14 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022486] = v14;
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
          v18 = MEMORY[0x140276DD0][v16];
          if ( !v18 )
            break;
          if ( v18 != *((_BYTE *)&dword_140404A6C[293250415] + v17) )
            break;
          ++v17;
          ++v16;
        }
        while ( v17 < v4 );
      }
      if ( !MEMORY[0x140276DD0][v16] )
        break;
    }
    dword_140404A6C[293250413] = v15 + 13;
    if ( v15 + 13 < v4 )
    {
      v19 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022487] = v19;
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
          v23 = MEMORY[0x140276DE0][v21];
          if ( !v23 )
            break;
          if ( v23 != *((_BYTE *)&dword_140404A6C[293250415] + v22) )
            break;
          ++v22;
          ++v21;
        }
        while ( v22 < v4 );
      }
      if ( !MEMORY[0x140276DE0][v21] )
        break;
    }
    dword_140404A6C[293250413] = v20 + 13;
    if ( v20 + 13 < v4 )
    {
      v24 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022488] = v24;
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
          v28 = MEMORY[0x140276DF0][v26];
          if ( !v28 )
            break;
          if ( v28 != *((_BYTE *)&dword_140404A6C[293250415] + v27) )
            break;
          ++v27;
          ++v26;
        }
        while ( v27 < v4 );
      }
      if ( !MEMORY[0x140276DF0][v26] )
        break;
    }
    dword_140404A6C[293250413] = v25 + 14;
    if ( v25 + 14 < v4 )
    {
      v29 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022489] = v29;
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
          v33 = MEMORY[0x140276E00][v31];
          if ( !v33 )
            break;
          if ( v33 != *((_BYTE *)&dword_140404A6C[293250415] + v32) )
            break;
          ++v32;
          ++v31;
        }
        while ( v32 < v4 );
      }
      if ( !MEMORY[0x140276E00][v31] )
        break;
    }
    dword_140404A6C[293250413] = v30 + 20;
    if ( v30 + 20 < v4 )
    {
      v34 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022490] = v34;
    }
    v35 = 0;
    for ( dword_140404A6C[293250413] = 0; v35 < v4; dword_140404A6C[293250413] = ++v35 )
    {
      v36 = 0;
      if ( v35 < v4 )
      {
        v37 = v35;
        do
        {
          v38 = MEMORY[0x140276E18][v36];
          if ( !v38 )
            break;
          if ( v38 != *((_BYTE *)&dword_140404A6C[293250415] + v37) )
            break;
          ++v37;
          ++v36;
        }
        while ( v37 < v4 );
      }
      if ( !MEMORY[0x140276E18][v36] )
        break;
    }
    dword_140404A6C[293250413] = v35 + 16;
    if ( v35 + 16 < v4 )
    {
      v39 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022491] = v39;
    }
    v40 = 0;
    for ( dword_140404A6C[293250413] = 0; v40 < v4; dword_140404A6C[293250413] = ++v40 )
    {
      v41 = 0;
      if ( v40 < v4 )
      {
        v42 = v40;
        do
        {
          v43 = MEMORY[0x140276E30][v41];
          if ( !v43 )
            break;
          if ( v43 != *((_BYTE *)&dword_140404A6C[293250415] + v42) )
            break;
          ++v42;
          ++v41;
        }
        while ( v42 < v4 );
      }
      if ( !MEMORY[0x140276E30][v41] )
        break;
    }
    dword_140404A6C[293250413] = v40 + 11;
    if ( v40 + 11 < v4 )
    {
      v44 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022492] = v44;
    }
    v45 = 0;
    for ( dword_140404A6C[293250413] = 0; v45 < v4; dword_140404A6C[293250413] = ++v45 )
    {
      v46 = 0;
      if ( v45 < v4 )
      {
        v47 = v45;
        do
        {
          v48 = MEMORY[0x140276E40][v46];
          if ( !v48 )
            break;
          if ( v48 != *((_BYTE *)&dword_140404A6C[293250415] + v47) )
            break;
          ++v47;
          ++v46;
        }
        while ( v47 < v4 );
      }
      if ( !MEMORY[0x140276E40][v46] )
        break;
    }
    dword_140404A6C[293250413] = v45 + 13;
    if ( v45 + 13 < v4 )
    {
      v49 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022493] = v49;
    }
    v50 = 0;
    for ( dword_140404A6C[293250413] = 0; v50 < v4; dword_140404A6C[293250413] = ++v50 )
    {
      v51 = 0;
      if ( v50 < v4 )
      {
        v52 = v50;
        do
        {
          v53 = MEMORY[0x140276E50][v51];
          if ( !v53 )
            break;
          if ( v53 != *((_BYTE *)&dword_140404A6C[293250415] + v52) )
            break;
          ++v52;
          ++v51;
        }
        while ( v52 < v4 );
      }
      if ( !MEMORY[0x140276E50][v51] )
        break;
    }
    dword_140404A6C[293250413] = v50 + 10;
    if ( v50 + 10 < v4 )
    {
      v54 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022494] = v54;
    }
    v55 = 0;
    for ( dword_140404A6C[293250413] = 0; v55 < v4; dword_140404A6C[293250413] = ++v55 )
    {
      v56 = 0;
      if ( v55 < v4 )
      {
        v57 = v55;
        do
        {
          v58 = MEMORY[0x140276E60][v56];
          if ( !v58 )
            break;
          if ( v58 != *((_BYTE *)&dword_140404A6C[293250415] + v57) )
            break;
          ++v57;
          ++v56;
        }
        while ( v57 < v4 );
      }
      if ( !MEMORY[0x140276E60][v56] )
        break;
    }
    dword_140404A6C[293250413] = v55 + 10;
    if ( v55 + 10 < v4 )
    {
      v59 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022495] = v59;
    }
    v60 = 0;
    for ( dword_140404A6C[293250413] = 0; v60 < v4; dword_140404A6C[293250413] = ++v60 )
    {
      v61 = 0;
      if ( v60 < v4 )
      {
        v62 = v60;
        do
        {
          v63 = MEMORY[0x140276E70][v61];
          if ( !v63 )
            break;
          if ( v63 != *((_BYTE *)&dword_140404A6C[293250415] + v62) )
            break;
          ++v62;
          ++v61;
        }
        while ( v62 < v4 );
      }
      if ( !MEMORY[0x140276E70][v61] )
        break;
    }
    dword_140404A6C[293250413] = v60 + 8;
    if ( v60 + 8 < v4 )
    {
      v64 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022496] = v64;
    }
    v65 = 0;
    for ( dword_140404A6C[293250413] = 0; v65 < v4; dword_140404A6C[293250413] = ++v65 )
    {
      v66 = 0;
      if ( v65 < v4 )
      {
        v67 = v65;
        do
        {
          v68 = MEMORY[0x140276E80][v66];
          if ( !v68 )
            break;
          if ( v68 != *((_BYTE *)&dword_140404A6C[293250415] + v67) )
            break;
          ++v67;
          ++v66;
        }
        while ( v67 < v4 );
      }
      if ( !MEMORY[0x140276E80][v66] )
        break;
    }
    dword_140404A6C[293250413] = v65 + 13;
    if ( v65 + 13 < v4 )
    {
      v69 = sub_1400A3D70();
      v4 = dword_140404A6C[293250414];
      dword_140404A6C[284022497] = v69;
    }
    v70 = 0;
    for ( dword_140404A6C[293250413] = 0; v70 < v4; dword_140404A6C[293250413] = ++v70 )
    {
      v71 = 0;
      if ( v70 < v4 )
      {
        v72 = v70;
        do
        {
          v73 = MEMORY[0x140276E90][v71];
          if ( !v73 )
            break;
          if ( v73 != *((_BYTE *)&dword_140404A6C[293250415] + v72) )
            break;
          ++v72;
          ++v71;
        }
        while ( v72 < v4 );
      }
      if ( !MEMORY[0x140276E90][v71] )
        break;
    }
    dword_140404A6C[293250413] = v70 + 12;
    if ( v70 + 12 < v4 )
      dword_140404A6C[284022498] = sub_1400A3D70();
    dword_140404A6C[293250413] = 0;
  }
  if ( (dword_140404A6C[284022485] & 0x80000000) == 0 )
  {
    v75 = dword_140404A6C[284022485];
    if ( (int)dword_140404A6C[284022485] > 512 )
      v75 = 512;
    dword_140404A6C[284022485] = v75;
  }
  else
  {
    dword_140404A6C[284022485] = 0;
  }
  v76 = dword_140404A6C[284022494];
  if ( (int)dword_140404A6C[284022494] < 1 )
    v76 = 1;
  dword_140404A6C[284022494] = v76;
  if ( a1 )
    *(double *)si128.m128i_i64 = sub_14020B9E8(i);
  return *(double *)si128.m128i_i64;
}

