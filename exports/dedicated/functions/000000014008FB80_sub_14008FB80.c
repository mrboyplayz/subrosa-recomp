/* Address: 0x14008fb80 | Name: sub_14008FB80 | Size: 1246 bytes */
void __fastcall sub_14008FB80(int a1)
{
  int v1; // r10d
  int i; // edx
  __int64 v3; // r8
  int v4; // ecx
  char v5; // r9
  int v6; // eax
  int j; // r10d
  __int64 v8; // r8
  int v9; // ecx
  char v10; // r9
  int v11; // eax
  int k; // r10d
  __int64 v13; // r8
  int v14; // ecx
  char v15; // r9
  int v16; // eax
  int m; // r10d
  __int64 v18; // r8
  int v19; // ecx
  char v20; // r9
  int v21; // eax
  int n; // r10d
  __int64 v23; // r8
  int v24; // ecx
  char v25; // r9
  int v26; // eax
  int ii; // r10d
  __int64 v28; // r8
  int v29; // eax
  char v30; // r9
  int v31; // eax
  int v32; // eax

  if ( !a1 )
  {
    strcpy((char *)&dword_1915FBCF4, "versus");
    qword_1915FBD34 = 0x32737573726576LL;
    xmmword_1915FBCD8 = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F7920);
    dword_1915FBCE8 = 1;
    dword_1915FBCEC = 50;
    sub_140090980("config_versus.txt");
    v1 = dword_1406A6780;
    for ( i = dword_1406A6784; v1 < dword_1406A6784; dword_1406A6780 = ++v1 )
    {
      v3 = 0;
      if ( v1 < dword_1406A6784 )
      {
        v4 = v1;
        do
        {
          v5 = aAllowrespawn[v3];
          if ( !v5 )
            break;
          if ( v5 != byte_1406A6788[v4] )
            break;
          ++v4;
          ++v3;
        }
        while ( v4 < dword_1406A6784 );
      }
      if ( !aAllowrespawn[v3] )
        break;
    }
    dword_1406A6780 = v1 + 13;
    if ( v1 + 13 < dword_1406A6784 )
    {
      v6 = sub_14004FCF0();
      i = dword_1406A6784;
      LODWORD(xmmword_1915FBCD8) = v6;
    }
    dword_1406A6780 = 0;
    for ( j = 0; j < i; dword_1406A6780 = ++j )
    {
      v8 = 0;
      if ( j < i )
      {
        v9 = j;
        do
        {
          v10 = aStartcash[v8];
          if ( !v10 )
            break;
          if ( v10 != byte_1406A6788[v9] )
            break;
          ++v9;
          ++v8;
        }
        while ( v9 < i );
      }
      if ( !aStartcash[v8] )
        break;
    }
    dword_1406A6780 = j + 10;
    if ( j + 10 < i )
    {
      v11 = sub_14004FCF0();
      i = dword_1406A6784;
      DWORD1(xmmword_1915FBCD8) = v11;
    }
    dword_1406A6780 = 0;
    for ( k = 0; k < i; dword_1406A6780 = ++k )
    {
      v13 = 0;
      if ( k < i )
      {
        v14 = k;
        do
        {
          v15 = aRoundtime[v13];
          if ( !v15 )
            break;
          if ( v15 != byte_1406A6788[v14] )
            break;
          ++v14;
          ++v13;
        }
        while ( v14 < i );
      }
      if ( !aRoundtime[v13] )
        break;
    }
    dword_1406A6780 = k + 10;
    if ( k + 10 < i )
    {
      v16 = sub_14004FCF0();
      i = dword_1406A6784;
      DWORD2(xmmword_1915FBCD8) = v16;
    }
    dword_1406A6780 = 0;
    for ( m = 0; m < i; dword_1406A6780 = ++m )
    {
      v18 = 0;
      if ( m < i )
      {
        v19 = m;
        do
        {
          v20 = aMovedelay[v18];
          if ( !v20 )
            break;
          if ( v20 != byte_1406A6788[v19] )
            break;
          ++v19;
          ++v18;
        }
        while ( v19 < i );
      }
      if ( !aMovedelay[v18] )
        break;
    }
    dword_1406A6780 = m + 10;
    if ( m + 10 < i )
    {
      v21 = sub_14004FCF0();
      i = dword_1406A6784;
      HIDWORD(xmmword_1915FBCD8) = v21;
    }
    dword_1406A6780 = 0;
    for ( n = 0; n < i; dword_1406A6780 = ++n )
    {
      v23 = 0;
      if ( n < i )
      {
        v24 = n;
        do
        {
          v25 = aBonusratio[v23];
          if ( !v25 )
            break;
          if ( v25 != byte_1406A6788[v24] )
            break;
          ++v24;
          ++v23;
        }
        while ( v24 < i );
      }
      if ( !aBonusratio[v23] )
        break;
    }
    dword_1406A6780 = n + 11;
    if ( n + 11 < i )
    {
      v26 = sub_14004FCF0();
      i = dword_1406A6784;
      dword_1915FBCE8 = v26;
    }
    dword_1406A6780 = 0;
    for ( ii = 0; ii < i; dword_1406A6780 = ++ii )
    {
      v28 = 0;
      if ( ii < i )
      {
        v29 = ii;
        do
        {
          v30 = aTeamdamage[v28];
          if ( !v30 )
            break;
          if ( v30 != byte_1406A6788[v29] )
            break;
          ++v29;
          ++v28;
        }
        while ( v29 < i );
      }
      if ( !aTeamdamage[v28] )
        break;
    }
    dword_1406A6780 = ii + 11;
    if ( ii + 11 < i )
      dword_1915FBCEC = sub_14004FCF0();
    dword_1406A6780 = 0;
    sub_1400A82D0(&dword_1915FBCF4, "map01=", 30);
    sub_1400A82D0(&qword_1915FBD34, "map02=", 30);
    sub_1400A82D0(&unk_1915FBD74, "map03=", 30);
    sub_1400A82D0(&unk_1915FBDB4, "map04=", 30);
    sub_1400A82D0(&unk_1915FBDF4, "map05=", 30);
    sub_1400A82D0(&unk_1915FBE34, "map06=", 30);
    sub_1400A82D0(&unk_1915FBE74, "map07=", 30);
    sub_1400A82D0(&unk_1915FBEB4, "map08=", 30);
    v31 = DWORD2(xmmword_1915FBCD8);
    if ( SDWORD2(xmmword_1915FBCD8) >= 1 )
    {
      if ( SDWORD2(xmmword_1915FBCD8) > 60 )
        v31 = 60;
      DWORD2(xmmword_1915FBCD8) = v31;
    }
    else
    {
      DWORD2(xmmword_1915FBCD8) = 1;
    }
    v32 = dword_1915FBCEC;
    if ( dword_1915FBCEC >= 0 )
    {
      if ( dword_1915FBCEC > 200 )
        v32 = 200;
      dword_1915FBCEC = v32;
    }
    else
    {
      dword_1915FBCEC = 0;
    }
  }
}

