/* Address: 0x14008f860 | Name: sub_14008F860 | Size: 799 bytes */
void __fastcall sub_14008F860(int a1)
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
  int v26; // ecx
  int v27; // eax

  if ( !a1 )
  {
    xmmword_1915FBC8C = (__int128)_mm_load_si128((const __m128i *)&xmmword_1400F7950);
    dword_1915FBC9C = 50;
    sub_140090980("config_round.txt");
    v1 = dword_1406A6780;
    for ( i = dword_1406A6784; v1 < dword_1406A6784; dword_1406A6780 = ++v1 )
    {
      v3 = 0;
      if ( v1 < dword_1406A6784 )
      {
        v4 = v1;
        do
        {
          v5 = aRoundtime[v3];
          if ( !v5 )
            break;
          if ( v5 != byte_1406A6788[v4] )
            break;
          ++v4;
          ++v3;
        }
        while ( v4 < dword_1406A6784 );
      }
      if ( !aRoundtime[v3] )
        break;
    }
    dword_1406A6780 = v1 + 10;
    if ( v1 + 10 < dword_1406A6784 )
    {
      v6 = sub_14004FCF0();
      i = dword_1406A6784;
      LODWORD(xmmword_1915FBC8C) = v6;
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
    dword_1406A6780 = v7 + 10;
    if ( v7 + 10 < i )
    {
      v11 = sub_14004FCF0();
      i = dword_1406A6784;
      DWORD1(xmmword_1915FBC8C) = v11;
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
          v15 = aWeekly[v13];
          if ( !v15 )
            break;
          if ( v15 != byte_1406A6788[v14] )
            break;
          ++v14;
          ++v13;
        }
        while ( v14 < i );
      }
      if ( !aWeekly[v13] )
        break;
    }
    dword_1406A6780 = v12 + 7;
    if ( v12 + 7 < i )
    {
      v16 = sub_14004FCF0();
      i = dword_1406A6784;
      DWORD2(xmmword_1915FBC8C) = v16;
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
          v20 = aBonusratio[v18];
          if ( !v20 )
            break;
          if ( v20 != byte_1406A6788[v19] )
            break;
          ++v19;
          ++v18;
        }
        while ( v19 < i );
      }
      if ( !aBonusratio[v18] )
        break;
    }
    dword_1406A6780 = v17 + 11;
    if ( v17 + 11 < i )
    {
      v21 = sub_14004FCF0();
      i = dword_1406A6784;
      HIDWORD(xmmword_1915FBC8C) = v21;
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
          v25 = aTeamdamage[v23];
          if ( !v25 )
            break;
          if ( v25 != byte_1406A6788[v24] )
            break;
          ++v24;
          ++v23;
        }
        while ( v24 < i );
      }
      if ( !aTeamdamage[v23] )
        break;
    }
    dword_1406A6780 = v22 + 11;
    if ( v22 + 11 >= i )
      v26 = dword_1915FBC9C;
    else
      v26 = sub_14004FCF0();
    dword_1406A6780 = 0;
    if ( (int)xmmword_1915FBC8C >= 1 )
    {
      v27 = xmmword_1915FBC8C;
      if ( (int)xmmword_1915FBC8C > 60 )
        v27 = 60;
      LODWORD(xmmword_1915FBC8C) = v27;
    }
    else
    {
      LODWORD(xmmword_1915FBC8C) = 1;
    }
    if ( v26 >= 0 )
    {
      if ( v26 > 200 )
        v26 = 200;
      dword_1915FBC9C = v26;
    }
    else
    {
      dword_1915FBC9C = 0;
    }
  }
}

