/* Address: 0x140097f80 | Name: sub_140097F80 | Size: 1231 bytes */
__int64 __fastcall sub_140097F80(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx
  unsigned int v3; // ecx
  _DWORD *v4; // rax
  int v5; // edx
  __int64 v6; // r8
  int v7; // r8d
  int *v8; // rax
  int v9; // r8d
  __int64 v10; // r8
  _BOOL8 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  result = (unsigned int)dword_1915413AC;
  v2 = 0;
  if ( dword_1915413AC != 1 )
  {
    if ( dword_1915413AC != 2 )
      return result;
    v9 = qword_1915413B4;
    goto LABEL_27;
  }
  v3 = 1;
  v4 = &unk_16D6802B8;
  v5 = 0;
  v6 = 256;
  do
  {
    if ( *(v4 - 2886) && !*v4 )
    {
      if ( *(v4 - 2853) <= 2u )
        ++v5;
      if ( !*(v4 - 2868) )
        v3 = 0;
    }
    v4 += 3597;
    --v6;
  }
  while ( v6 );
  result = 0;
  v7 = qword_1915413B4 - 1;
  LODWORD(qword_1915413B4) = qword_1915413B4 - 1;
  if ( v5 )
    result = v3;
  if ( !(_DWORD)result )
  {
    if ( v7 < 1200 )
      LODWORD(qword_1915413B4) = 1200;
    return result;
  }
  if ( v7 > 60 )
  {
    LODWORD(qword_1915413B4) = 60;
    return result;
  }
  if ( v7 <= 0 )
  {
    v8 = dword_16D67D624;
    do
    {
      if ( *(v8 - 33) )
        *v8 = 0;
      if ( v8[3564] )
        v8[3597] = 0;
      v8 += 7194;
    }
    while ( (__int64)v8 < (__int64)&unk_16DA00A24 );
    sub_1400430A0();
    v9 = 108000;
    dword_1915413AC = 2;
LABEL_27:
    v10 = (unsigned int)(v9 - 1);
    v11 = 1;
    LODWORD(qword_1915413B4) = v10;
    if ( (_DWORD)xmmword_1915FD9EC != -1 )
    {
      a1 = 3597LL * (int)xmmword_1915FD9EC;
      v12 = dword_16D67D63C[a1];
      if ( (_DWORD)v12 != -1 )
      {
        a1 = 7166 * v12;
        v11 = dword_190941A04[7166 * v12] <= 0;
      }
    }
    if ( DWORD1(xmmword_1915FD9EC) != -1 )
    {
      a1 = 3597LL * SDWORD1(xmmword_1915FD9EC);
      v13 = dword_16D67D63C[a1];
      if ( (_DWORD)v13 != -1 )
      {
        a1 = 7166 * v13;
        if ( dword_190941A04[7166 * v13] > 0 )
          v11 = 0;
      }
    }
    if ( DWORD2(xmmword_1915FD9EC) != -1 )
    {
      a1 = 3597LL * SDWORD2(xmmword_1915FD9EC);
      v14 = dword_16D67D63C[a1];
      if ( (_DWORD)v14 != -1 )
      {
        a1 = 7166 * v14;
        if ( dword_190941A04[7166 * v14] > 0 )
          v11 = 0;
      }
    }
    if ( HIDWORD(xmmword_1915FD9EC) != -1 )
    {
      a1 = 3597LL * SHIDWORD(xmmword_1915FD9EC);
      v15 = dword_16D67D63C[a1];
      if ( (_DWORD)v15 != -1 )
      {
        a1 = 7166 * v15;
        if ( dword_190941A04[7166 * v15] > 0 )
          v11 = 0;
      }
    }
    if ( (_DWORD)xmmword_1915FD9FC != -1 )
    {
      a1 = 3597LL * (int)xmmword_1915FD9FC;
      v16 = dword_16D67D63C[a1];
      if ( (_DWORD)v16 != -1 )
      {
        a1 = 7166 * v16;
        if ( dword_190941A04[7166 * v16] > 0 )
          v11 = 0;
      }
    }
    if ( DWORD1(xmmword_1915FD9FC) != -1 )
    {
      a1 = 3597LL * SDWORD1(xmmword_1915FD9FC);
      v17 = dword_16D67D63C[a1];
      if ( (_DWORD)v17 != -1 )
      {
        a1 = 7166 * v17;
        if ( dword_190941A04[7166 * v17] > 0 )
          v11 = 0;
      }
    }
    if ( DWORD2(xmmword_1915FD9FC) != -1 )
    {
      a1 = 3597LL * SDWORD2(xmmword_1915FD9FC);
      v18 = dword_16D67D63C[a1];
      if ( (_DWORD)v18 != -1 )
      {
        a1 = 7166 * v18;
        if ( dword_190941A04[7166 * v18] > 0 )
          v11 = 0;
      }
    }
    if ( HIDWORD(xmmword_1915FD9FC) == -1
      || (a1 = 3597LL * SHIDWORD(xmmword_1915FD9FC), v19 = dword_16D67D63C[a1], (_DWORD)v19 == -1)
      || (a1 = 7166 * v19, dword_190941A04[7166 * v19] <= 0) )
    {
      if ( v11 && (int)v10 > 300 )
      {
        v10 = 300;
        dword_1915FDA2C = 1;
        LODWORD(qword_1915413B4) = 300;
      }
    }
    if ( (_DWORD)xmmword_1915FDA0C != -1 )
    {
      a1 = 3597LL * (int)xmmword_1915FDA0C;
      v20 = dword_16D67D63C[a1];
      if ( (_DWORD)v20 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v20;
        if ( dword_190941A04[7166 * v20] <= 0 )
          v2 = 1;
      }
    }
    if ( DWORD1(xmmword_1915FDA0C) != -1 )
    {
      a1 = 3597LL * SDWORD1(xmmword_1915FDA0C);
      v21 = dword_16D67D63C[a1];
      if ( (_DWORD)v21 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v21;
        if ( dword_190941A04[7166 * v21] <= 0 )
          v2 = 1;
      }
    }
    if ( DWORD2(xmmword_1915FDA0C) != -1 )
    {
      a1 = 3597LL * SDWORD2(xmmword_1915FDA0C);
      v22 = dword_16D67D63C[a1];
      if ( (_DWORD)v22 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v22;
        if ( dword_190941A04[7166 * v22] <= 0 )
          v2 = 1;
      }
    }
    if ( HIDWORD(xmmword_1915FDA0C) != -1 )
    {
      a1 = 3597LL * SHIDWORD(xmmword_1915FDA0C);
      v23 = dword_16D67D63C[a1];
      if ( (_DWORD)v23 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v23;
        if ( dword_190941A04[7166 * v23] <= 0 )
          v2 = 1;
      }
    }
    if ( (_DWORD)xmmword_1915FDA1C != -1 )
    {
      a1 = 3597LL * (int)xmmword_1915FDA1C;
      v24 = dword_16D67D63C[a1];
      if ( (_DWORD)v24 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v24;
        if ( dword_190941A04[7166 * v24] <= 0 )
          v2 = 1;
      }
    }
    if ( DWORD1(xmmword_1915FDA1C) != -1 )
    {
      a1 = 3597LL * SDWORD1(xmmword_1915FDA1C);
      v25 = dword_16D67D63C[a1];
      if ( (_DWORD)v25 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v25;
        if ( dword_190941A04[7166 * v25] <= 0 )
          v2 = 1;
      }
    }
    if ( DWORD2(xmmword_1915FDA1C) != -1 )
    {
      a1 = 3597LL * SDWORD2(xmmword_1915FDA1C);
      v26 = dword_16D67D63C[a1];
      if ( (_DWORD)v26 == -1 )
      {
        v2 = 1;
      }
      else
      {
        a1 = 7166 * v26;
        if ( dword_190941A04[7166 * v26] <= 0 )
          v2 = 1;
      }
    }
    result = SHIDWORD(xmmword_1915FDA1C);
    if ( (HIDWORD(xmmword_1915FDA1C) != -1
       && ((a1 = 3597LL * SHIDWORD(xmmword_1915FDA1C), result = dword_16D67D63C[a1], (_DWORD)result == -1)
        || (a1 = 7166 * result, dword_190941A04[7166 * result] <= 0))
       || v2)
      && (int)v10 > 300 )
    {
      LODWORD(qword_1915413B4) = 300;
      dword_1915FDA2C = 2;
    }
    else if ( (int)v10 <= 0 )
    {
      return sub_1400B4790(a1 * 4, v11, v10, 0x140000000uLL);
    }
  }
  return result;
}

