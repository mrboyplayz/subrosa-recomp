/* Address: 0x140090060 | Name: sub_140090060 | Size: 1966 bytes */
void __fastcall sub_140090060(int a1)
{
  int v1; // r10d
  int i; // ecx
  __int64 v3; // r8
  int v4; // edx
  char v5; // r9
  int v6; // eax
  int v7; // r10d
  __int64 v8; // r8
  int v9; // edx
  char v10; // r9
  int v11; // eax
  int v12; // r10d
  __int64 v13; // r8
  int v14; // edx
  char v15; // r9
  int v16; // eax
  int v17; // r10d
  __int64 v18; // r8
  int v19; // edx
  char v20; // r9
  int v21; // eax
  int v22; // r10d
  __int64 v23; // r8
  int v24; // edx
  char v25; // r9
  int v26; // eax
  int v27; // r10d
  __int64 v28; // r8
  int v29; // edx
  char v30; // r9
  int v31; // eax
  int v32; // r10d
  __int64 v33; // r8
  int v34; // edx
  char v35; // r9
  int v36; // eax
  int v37; // r10d
  __int64 v38; // r8
  int v39; // edx
  char v40; // r9
  int v41; // eax
  int v42; // r10d
  __int64 v43; // r8
  int v44; // edx
  char v45; // r9
  int v46; // eax
  int v47; // r10d
  __int64 v48; // r8
  int v49; // edx
  char v50; // r9
  int v51; // eax
  int v52; // r10d
  __int64 v53; // r8
  int v54; // edx
  char v55; // r9
  int v56; // eax
  int v57; // r10d
  __int64 v58; // r8
  int v59; // edx
  char v60; // r9
  int v61; // eax
  int v62; // r10d
  __int64 v63; // r8
  int v64; // edx
  char v65; // r9
  int v66; // eax
  int v67; // r10d
  __int64 v68; // r8
  int v69; // edx
  char v70; // r9
  int v71; // eax
  int v72; // eax

  if ( !a1 )
  {
    xmmword_1915FBCA0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F7B00);
    xmmword_1915FBCC0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F7B90);
    qword_1915FBCD0 = 1;
    xmmword_1915FBCB0 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F7B80);
    sub_140090980("config_world.txt");
    v1 = dword_1406A6780;
    for ( i = dword_1406A6784; v1 < dword_1406A6784; dword_1406A6780 = ++v1 )
    {
      v3 = 0;
      if ( v1 < dword_1406A6784 )
      {
        v4 = v1;
        do
        {
          v5 = aTraffic_1[v3];
          if ( !v5 )
            break;
          if ( v5 != byte_1406A6788[v4] )
            break;
          ++v4;
          ++v3;
        }
        while ( v4 < dword_1406A6784 );
      }
      if ( !aTraffic_1[v3] )
        break;
    }
    dword_1406A6780 = v1 + 8;
    if ( v1 + 8 < dword_1406A6784 )
    {
      v6 = sub_14004FCF0();
      i = dword_1406A6784;
      LODWORD(xmmword_1915FBCA0) = v6;
    }
    v7 = 0;
    for ( dword_1406A6780 = 0; v7 < i; dword_1406A6780 = ++v7 )
    {
      v8 = 0;
      if ( v7 < i )
      {
        v9 = v7;
        do
        {
          v10 = aCrimecivciv[v8];
          if ( !v10 )
            break;
          if ( v10 != byte_1406A6788[v9] )
            break;
          ++v9;
          ++v8;
        }
        while ( v9 < i );
      }
      if ( !aCrimecivciv[v8] )
        break;
    }
    dword_1406A6780 = v7 + 12;
    if ( v7 + 12 < i )
    {
      v11 = sub_14004FCF0();
      i = dword_1406A6784;
      DWORD1(xmmword_1915FBCA0) = v11;
    }
    v12 = 0;
    for ( dword_1406A6780 = 0; v12 < i; dword_1406A6780 = ++v12 )
    {
      v13 = 0;
      if ( v12 < i )
      {
        v14 = v12;
        do
        {
          v15 = aCrimecivteam[v13];
          if ( !v15 )
            break;
          if ( v15 != byte_1406A6788[v14] )
            break;
          ++v14;
          ++v13;
        }
        while ( v14 < i );
      }
      if ( !aCrimecivteam[v13] )
        break;
    }
    dword_1406A6780 = v12 + 13;
    if ( v12 + 13 < i )
    {
      v16 = sub_14004FCF0();
      i = dword_1406A6784;
      DWORD2(xmmword_1915FBCA0) = v16;
    }
    v17 = 0;
    for ( dword_1406A6780 = 0; v17 < i; dword_1406A6780 = ++v17 )
    {
      v18 = 0;
      if ( v17 < i )
      {
        v19 = v17;
        do
        {
          v20 = aCrimeteamciv[v18];
          if ( !v20 )
            break;
          if ( v20 != byte_1406A6788[v19] )
            break;
          ++v19;
          ++v18;
        }
        while ( v19 < i );
      }
      if ( !aCrimeteamciv[v18] )
        break;
    }
    dword_1406A6780 = v17 + 13;
    if ( v17 + 13 < i )
    {
      v21 = sub_14004FCF0();
      i = dword_1406A6784;
      HIDWORD(xmmword_1915FBCA0) = v21;
    }
    v22 = 0;
    for ( dword_1406A6780 = 0; v22 < i; dword_1406A6780 = ++v22 )
    {
      v23 = 0;
      if ( v22 < i )
      {
        v24 = v22;
        do
        {
          v25 = aCrimeteamteam[v23];
          if ( !v25 )
            break;
          if ( v25 != byte_1406A6788[v24] )
            break;
          ++v24;
          ++v23;
        }
        while ( v24 < i );
      }
      if ( !aCrimeteamteam[v23] )
        break;
    }
    dword_1406A6780 = v22 + 14;
    if ( v22 + 14 < i )
    {
      v26 = sub_14004FCF0();
      i = dword_1406A6784;
      LODWORD(xmmword_1915FBCB0) = v26;
    }
    v27 = 0;
    for ( dword_1406A6780 = 0; v27 < i; dword_1406A6780 = ++v27 )
    {
      v28 = 0;
      if ( v27 < i )
      {
        v29 = v27;
        do
        {
          v30 = aCrimeteamteami[v28];
          if ( !v30 )
            break;
          if ( v30 != byte_1406A6788[v29] )
            break;
          ++v29;
          ++v28;
        }
        while ( v29 < i );
      }
      if ( !aCrimeteamteami[v28] )
        break;
    }
    dword_1406A6780 = v27 + 20;
    if ( v27 + 20 < i )
    {
      v31 = sub_14004FCF0();
      i = dword_1406A6784;
      DWORD1(xmmword_1915FBCB0) = v31;
    }
    v32 = 0;
    for ( dword_1406A6780 = 0; v32 < i; dword_1406A6780 = ++v32 )
    {
      v33 = 0;
      if ( v32 < i )
      {
        v34 = v32;
        do
        {
          v35 = aCrimevscrimina[v33];
          if ( !v35 )
            break;
          if ( v35 != byte_1406A6788[v34] )
            break;
          ++v34;
          ++v33;
        }
        while ( v34 < i );
      }
      if ( !aCrimevscrimina[v33] )
        break;
    }
    dword_1406A6780 = v32 + 16;
    if ( v32 + 16 < i )
    {
      v36 = sub_14004FCF0();
      i = dword_1406A6784;
      DWORD2(xmmword_1915FBCB0) = v36;
    }
    v37 = 0;
    for ( dword_1406A6780 = 0; v37 < i; dword_1406A6780 = ++v37 )
    {
      v38 = 0;
      if ( v37 < i )
      {
        v39 = v37;
        do
        {
          v40 = aCrimenobuy[v38];
          if ( !v40 )
            break;
          if ( v40 != byte_1406A6788[v39] )
            break;
          ++v39;
          ++v38;
        }
        while ( v39 < i );
      }
      if ( !aCrimenobuy[v38] )
        break;
    }
    dword_1406A6780 = v37 + 11;
    if ( v37 + 11 < i )
    {
      v41 = sub_14004FCF0();
      i = dword_1406A6784;
      HIDWORD(xmmword_1915FBCB0) = v41;
    }
    v42 = 0;
    for ( dword_1406A6780 = 0; v42 < i; dword_1406A6780 = ++v42 )
    {
      v43 = 0;
      if ( v42 < i )
      {
        v44 = v42;
        do
        {
          v45 = aCrimenospawn[v43];
          if ( !v45 )
            break;
          if ( v45 != byte_1406A6788[v44] )
            break;
          ++v44;
          ++v43;
        }
        while ( v44 < i );
      }
      if ( !aCrimenospawn[v43] )
        break;
    }
    dword_1406A6780 = v42 + 13;
    if ( v42 + 13 < i )
    {
      v46 = sub_14004FCF0();
      i = dword_1406A6784;
      LODWORD(xmmword_1915FBCC0) = v46;
    }
    v47 = 0;
    for ( dword_1406A6780 = 0; v47 < i; dword_1406A6780 = ++v47 )
    {
      v48 = 0;
      if ( v47 < i )
      {
        v49 = v47;
        do
        {
          v50 = aCrimekick[v48];
          if ( !v50 )
            break;
          if ( v50 != byte_1406A6788[v49] )
            break;
          ++v49;
          ++v48;
        }
        while ( v49 < i );
      }
      if ( !aCrimekick[v48] )
        break;
    }
    dword_1406A6780 = v47 + 10;
    if ( v47 + 10 < i )
    {
      v51 = sub_14004FCF0();
      i = dword_1406A6784;
      DWORD1(xmmword_1915FBCC0) = v51;
    }
    v52 = 0;
    for ( dword_1406A6780 = 0; v52 < i; dword_1406A6780 = ++v52 )
    {
      v53 = 0;
      if ( v52 < i )
      {
        v54 = v52;
        do
        {
          v55 = aStartcash[v53];
          if ( !v55 )
            break;
          if ( v55 != byte_1406A6788[v54] )
            break;
          ++v54;
          ++v53;
        }
        while ( v54 < i );
      }
      if ( !aStartcash[v53] )
        break;
    }
    dword_1406A6780 = v52 + 10;
    if ( v52 + 10 < i )
    {
      v56 = sub_14004FCF0();
      i = dword_1406A6784;
      DWORD2(xmmword_1915FBCC0) = v56;
    }
    v57 = 0;
    for ( dword_1406A6780 = 0; v57 < i; dword_1406A6780 = ++v57 )
    {
      v58 = 0;
      if ( v57 < i )
      {
        v59 = v57;
        do
        {
          v60 = aMincash[v58];
          if ( !v60 )
            break;
          if ( v60 != byte_1406A6788[v59] )
            break;
          ++v59;
          ++v58;
        }
        while ( v59 < i );
      }
      if ( !aMincash[v58] )
        break;
    }
    dword_1406A6780 = v57 + 8;
    if ( v57 + 8 < i )
    {
      v61 = sub_14004FCF0();
      i = dword_1406A6784;
      HIDWORD(xmmword_1915FBCC0) = v61;
    }
    v62 = 0;
    for ( dword_1406A6780 = 0; v62 < i; dword_1406A6780 = ++v62 )
    {
      v63 = 0;
      if ( v62 < i )
      {
        v64 = v62;
        do
        {
          v65 = aShowjoinexit[v63];
          if ( !v65 )
            break;
          if ( v65 != byte_1406A6788[v64] )
            break;
          ++v64;
          ++v63;
        }
        while ( v64 < i );
      }
      if ( !aShowjoinexit[v63] )
        break;
    }
    dword_1406A6780 = v62 + 13;
    if ( v62 + 13 < i )
    {
      v66 = sub_14004FCF0();
      i = dword_1406A6784;
      LODWORD(qword_1915FBCD0) = v66;
    }
    v67 = 0;
    for ( dword_1406A6780 = 0; v67 < i; dword_1406A6780 = ++v67 )
    {
      v68 = 0;
      if ( v67 < i )
      {
        v69 = v67;
        do
        {
          v70 = aRespawnteam[v68];
          if ( !v70 )
            break;
          if ( v70 != byte_1406A6788[v69] )
            break;
          ++v69;
          ++v68;
        }
        while ( v69 < i );
      }
      if ( !aRespawnteam[v68] )
        break;
    }
    dword_1406A6780 = v67 + 12;
    if ( v67 + 12 < i )
      HIDWORD(qword_1915FBCD0) = sub_14004FCF0();
    dword_1406A6780 = 0;
    if ( (int)xmmword_1915FBCA0 >= 0 )
    {
      v71 = xmmword_1915FBCA0;
      if ( (int)xmmword_1915FBCA0 > 512 )
        v71 = 512;
      LODWORD(xmmword_1915FBCA0) = v71;
    }
    else
    {
      LODWORD(xmmword_1915FBCA0) = 0;
    }
    v72 = DWORD1(xmmword_1915FBCC0);
    if ( SDWORD1(xmmword_1915FBCC0) < 1 )
      v72 = 1;
    DWORD1(xmmword_1915FBCC0) = v72;
  }
}

