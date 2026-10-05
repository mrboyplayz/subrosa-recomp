/* Address: 0x140097c40 | Name: sub_140097C40 | Size: 826 bytes */
int *__fastcall sub_140097C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v5; // eax
  int *v6; // rdi
  signed int v7; // ebx
  __int64 v8; // rbp
  int v9; // ebx
  int *v10; // rdi
  signed int i; // esi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int *result; // rax
  int *v16; // r8
  __int64 v17; // rcx
  int v18; // edx

  v4 = dword_1915413AC;
  if ( dword_1915413AC == 2 )
  {
    sub_1400E3430();
    sub_1400037E0();
    v4 = dword_1915413AC;
  }
  if ( !dword_19154118C && v4 == 1 )
  {
    if ( (int)qword_1915413B4 <= 0 )
    {
      v5 = dword_1915413C0;
      dword_1915413AC = 2;
    }
    else
    {
      v5 = qword_1915413B4 - 1;
    }
    LODWORD(qword_1915413B4) = v5;
  }
  v6 = dword_16D67D5A0;
  v7 = 0;
  v8 = 256;
  do
  {
    if ( *v6 )
      sub_140093D70(v7, a2, a3, a4);
    ++v7;
    v6 += 3597;
  }
  while ( v7 < 256 );
  v9 = dword_19154118C;
  v10 = dword_16D67D704;
  for ( i = 0; i < 256; ++i )
  {
    if ( *(v10 - 89) )
    {
      if ( *(v10 - 50) == -1 )
      {
        if ( (unsigned int)(v9 - 2) <= 1 || (unsigned int)(v9 - 5) <= 2 )
        {
          v12 = 0;
          if ( dword_1915413AC == 1 )
            v12 = 2;
          *v10 = v12;
        }
      }
      else
      {
        sub_140092A60(i);
        v9 = dword_19154118C;
      }
    }
    v10 += 3597;
  }
  LODWORD(xmmword_160C63104[0]) = dword_1961996A0[0];
  DWORD1(xmmword_160C63104[0]) = dword_1961996B8;
  DWORD2(xmmword_160C63104[0]) = dword_1961996D0;
  HIDWORD(xmmword_160C63104[0]) = dword_1961996E8;
  LODWORD(xmmword_160C63114[0]) = dword_196199700;
  DWORD1(xmmword_160C63114[0]) = dword_196199718;
  dword_160A63100[0] = 6;
  sub_14004ACC0();
  dword_191541494[0] = 0;
  dword_191547058 = 0;
  dword_19154CC1C = 0;
  dword_196199660 = *((_DWORD *)xmmword_160C63104 + dword_160A63118);
  dword_1915527E0 = 0;
  dword_1915583A4 = 0;
  dword_19155DF68 = 0;
  dword_196199664 = *((_DWORD *)xmmword_160C63104 + dword_160A63114);
  dword_196199668 = *((_DWORD *)xmmword_160C63104 + dword_160A63110);
  dword_19619966C = *((_DWORD *)xmmword_160C63104 + dword_160A6310C);
  dword_196199670 = *((_DWORD *)xmmword_160C63104 + dword_160A63108);
  dword_196199674 = *((_DWORD *)xmmword_160C63104 + dword_160A63104);
  result = dword_16D67D624;
  v16 = dword_16D67D624;
  do
  {
    if ( *(v16 - 33) )
    {
      v17 = *v16;
      if ( (unsigned int)v17 <= 5 && (v16[6] != -1 || v9 == 3) )
      {
        v13 = 23492 * v17;
        ++dword_191541494[5873 * v17];
        v9 = dword_19154118C;
      }
      v14 = (unsigned int)*(v16 - 17);
      if ( (int)v14 > 0 )
      {
        v14 = (unsigned int)(v14 - 1);
        *(v16 - 17) = v14;
      }
    }
    v16 += 3597;
    --v8;
  }
  while ( v8 );
  if ( dword_163D75FB8 )
  {
    v18 = dword_163D75FBC;
    if ( ((dword_163D75FBC - 3) & 0xFFFFFFFD) == 0 && v9 != dword_163D75FBC )
    {
      do
      {
        if ( *(result - 33) )
          *result = 17;
        if ( result[3564] )
          result[3597] = 17;
        result += 7194;
      }
      while ( (__int64)result < (__int64)&unk_16DA00A24 );
      dword_19154118C = v18;
    }
    result = (int *)sub_1400B4790();
    v9 = dword_19154118C;
    dword_163D75FB8 = 0;
  }
  if ( v9 == 2 )
  {
    result = (int *)sub_140098590(v14, v13, v16);
    v9 = dword_19154118C;
  }
  if ( v9 == 3 )
  {
    result = (int *)sub_140099070(v14, v13, v16);
    v9 = dword_19154118C;
  }
  if ( v9 == 4 )
  {
    result = (int *)sub_14009C7C0(v14, v13, v16);
    v9 = dword_19154118C;
  }
  if ( v9 == 5 )
  {
    result = (int *)sub_14009A4C0(v14, v13, v16);
    v9 = dword_19154118C;
  }
  if ( v9 == 6 )
  {
    result = (int *)sub_140097F80(v14, v13, v16);
    v9 = dword_19154118C;
  }
  if ( v9 == 7 )
    return (int *)sub_14009BDC0(v14, v13, v16);
  return result;
}

