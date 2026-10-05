/* Address: 0x1400c6d90 | Name: sub_1400C6D90 | Size: 1299 bytes */
int __fastcall sub_1400C6D90(signed int a1, unsigned int a2)
{
  __int64 v3; // r14
  unsigned int v4; // r8d
  __int64 v5; // r13
  __int64 v6; // rbp
  unsigned int *v7; // rax
  int v8; // r15d
  unsigned int *v9; // rsi
  signed int v10; // edi
  unsigned int *v11; // rbx
  __m128i si128; // xmm0
  int v13; // edx
  _BYTE *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  unsigned int v17; // esi
  unsigned int *v18; // rbx
  __int64 v19; // rdx
  char *v20; // r11
  int *v21; // r10
  char *v22; // rcx
  bool v23; // zf
  int v24; // ecx
  _WORD *v25; // rcx
  _WORD *v26; // rcx
  __int64 v27; // r9
  unsigned int *v28; // rcx
  char v29; // al
  __int64 v30; // rcx
  unsigned int *v31; // rdx
  char v32; // r8
  __int64 v33; // rax
  __m128i v34; // xmm0
  __int64 v35; // rcx
  unsigned int *v36; // r8

  v3 = 1760LL * a1;
  v4 = a2;
  v5 = a1;
  v6 = -1;
  LODWORD(v7) = dword_140404A6C[v3 + 278847324];
  if ( (_DWORD)v7 == 1 )
  {
    dword_140404A6C[v3 + 278846113] = -1;
    sub_1400C6580(a1, a2);
    LODWORD(v7) = dword_140404A6C[v3 + 278847324];
    if ( (_DWORD)v7 == 1 )
      return (int)v7;
    v4 = 8;
  }
  if ( (_DWORD)v7 == 2 )
  {
    dword_140404A6C[v3 + 278846113] = -1;
    sub_1400C7450((unsigned int)a1, v4);
    LODWORD(v7) = dword_140404A6C[v3 + 278847324];
    if ( (_DWORD)v7 == 2 )
      return (int)v7;
    v4 = 8;
  }
  v8 = 1;
  if ( (_DWORD)v7 == 3 )
  {
    dword_140404A6C[v3 + 278846113] = -1;
    if ( (v4 & 0x100) != 0 )
    {
      LODWORD(v7) = toupper((unsigned __int8)v4);
      if ( (_DWORD)v7 == 88 )
      {
        dword_140404A6C[v3 + 278847324] = 0;
        v9 = &dword_140404A6C[v3 + 278846114];
        v10 = 0;
        v11 = &dword_140404A6C[v3 + 278846626];
        do
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_140279200);
          *(_BYTE *)v9 = 0;
          *(__m128i *)v11 = si128;
          *((__m128i *)v11 + 1) = si128;
          *((__m128i *)v11 + 2) = si128;
          *((_QWORD *)v11 + 6) = si128.m128i_i64[0];
          v11[14] = si128.m128i_i32[0];
          *((_WORD *)v11 + 30) = si128.m128i_i16[0];
          *((_BYTE *)v11 + 62) = si128.m128i_i8[0];
          LODWORD(v7) = sub_140050F90(a1, v10++);
          v11 += 16;
          v9 += 16;
        }
        while ( v10 < 24 );
      }
    }
    else
    {
      switch ( v4 )
      {
        case 0x13u:
          if ( dword_140404A6C[v3 + 278847330] != 2 )
            dword_140404A6C[v3 + 278847330] = 0;
          break;
        case 0x12u:
          if ( dword_140404A6C[v3 + 278847330] )
            dword_140404A6C[v3 + 278847330] = 2;
          break;
        case 0x11u:
          if ( dword_140404A6C[v3 + 278847330] != 3 )
            dword_140404A6C[v3 + 278847330] = 1;
          break;
        default:
          if ( v4 == 16 && dword_140404A6C[v3 + 278847330] != 1 )
            dword_140404A6C[v3 + 278847330] = 3;
          break;
      }
    }
    if ( dword_140404A6C[v3 + 278847324] == 3 )
      return (int)v7;
    LOBYTE(v4) = 8;
  }
  v13 = 0;
  v14 = (char *)&dword_140404A6C[v3 + 278847154] + 1;
  while ( *(v14 - 1) )
  {
    if ( !*v14 )
    {
      ++v13;
      break;
    }
    v14 += 2;
    v13 += 2;
    if ( v14 - ((char *)&dword_140404A6C[v3 + 278847154] + 1) >= 62 )
      break;
  }
  if ( (int)dword_140404A6C[v3 + 278847244] <= 0 )
  {
    if ( (unsigned __int8)v4 == 10 )
    {
      sub_1400C3E00(a1);
      LODWORD(v7) = sub_1400C4280(a1);
      LOBYTE(dword_140404A6C[v3 + 278847154]) = 0;
      if ( (int)dword_140404A6C[v3 + 278847244] > 0 || dword_140404A6C[v3 + 278847324] )
        return (int)v7;
    }
    else if ( (unsigned __int8)v4 == 8 )
    {
      if ( v13 > 0 )
        *((_BYTE *)&dword_140404A6C[v3 + 278847153] + v13 + 3) = 0;
    }
    else if ( v13 < 62 )
    {
      v15 = v3 * 4 + v13;
      *((_BYTE *)&dword_140404A6C[278847154] + v15) = v4;
      *((_BYTE *)&dword_140404A6C[278847154] + v15 + 1) = 0;
    }
    v16 = (int)dword_140404A6C[v3 + 278847170];
    v17 = 0;
    if ( (_DWORD)v16 == 2 )
    {
      v17 = dword_140404A6C[v3 + 278846098];
    }
    else if ( !(_DWORD)v16 && (int)dword_140404A6C[v3 + 278845906] > 0 )
    {
      v17 = dword_140404A6C[1760 * dword_140404A6C[v3 + 278845907] + 278846098];
    }
    v18 = &dword_140404A6C[v3 + 278847138];
    sub_140158AB0(v18, "%c:\\", (unsigned int)(v16 + 65));
    v19 = v3 * 4 + 72 * v16;
    v20 = (char *)&dword_140404A6C[278845893] + v19;
    if ( *(int *)((char *)&dword_140404A6C[278847172] + v19) >= 1 )
    {
      v21 = (int *)((char *)&dword_140404A6C[278847174] + v19);
      do
      {
        v22 = (char *)v18 - 1;
        do
          v23 = *++v22 == 0;
        while ( !v23 );
        strcpy(v22, (const char *)&dword_140404A6C[2570 * v17 + 275753048 + 4 * *v21]);
        v24 = *((_DWORD *)v20 + 1279);
        if ( v8 < v24 )
        {
          v25 = (_WORD *)((char *)v18 - 1);
          do
          {
            v23 = *((_BYTE *)v25 + 1) == 0;
            v25 = (_WORD *)((char *)v25 + 1);
          }
          while ( !v23 );
          *v25 = 92;
          v24 = *((_DWORD *)v20 + 1279);
        }
        ++v8;
        ++v21;
      }
      while ( v8 <= v24 );
    }
    v26 = (_WORD *)((char *)v18 - 1);
    do
    {
      v23 = *((_BYTE *)v26 + 1) == 0;
      v26 = (_WORD *)((char *)v26 + 1);
    }
    while ( !v23 );
    *v26 = 62;
    v27 = 110 * v5;
    v28 = &dword_140404A6C[16 * (110 * v5 + (int)dword_140404A6C[v3 + 278846111]) + 278846114];
    do
    {
      v29 = *(_BYTE *)v18;
      v18 = (unsigned int *)((char *)v18 + 1);
      *(_BYTE *)v28 = v29;
      v28 = (unsigned int *)((char *)v28 + 1);
    }
    while ( v29 );
    do
      ++v6;
    while ( *((_BYTE *)&dword_140404A6C[16 * v27 + 278846114 + 16 * (int)dword_140404A6C[v3 + 278846111]] + v6) );
    v30 = (int)v6;
    if ( (int)v6 < 62LL )
    {
      v31 = &dword_140404A6C[v3 + 278847154];
      do
      {
        v32 = *(_BYTE *)v31;
        if ( !*(_BYTE *)v31 )
          break;
        v31 = (unsigned int *)((char *)v31 + 1);
        LODWORD(v6) = v6 + 1;
        v33 = v30 + ((v27 + (int)dword_140404A6C[v3 + 278846111]) << 6);
        ++v30;
        *((_BYTE *)&dword_140404A6C[278846114] + v33) = v32;
      }
      while ( v30 < 62 );
    }
    v34 = _mm_load_si128((const __m128i *)&xmmword_140279200);
    *((_BYTE *)&dword_140404A6C[16 * v27 + 278846114 + 16 * (int)dword_140404A6C[v3 + 278846111]] + (int)v6) = 0;
    v35 = (int)dword_140404A6C[v3 + 278846111];
    dword_140404A6C[v3 + 278846113] = v6 + (dword_140404A6C[v3 + 278846111] << 6);
    v36 = &dword_140404A6C[16 * (v27 + v35) + 278846626];
    *(__m128i *)v36 = v34;
    *((__m128i *)v36 + 1) = v34;
    *((__m128i *)v36 + 2) = v34;
    *((_QWORD *)v36 + 6) = v34.m128i_i64[0];
    v36[14] = v34.m128i_i32[0];
    *((_WORD *)v36 + 30) = v34.m128i_i16[0];
    *((_BYTE *)v36 + 62) = v34.m128i_i8[0];
    sub_140050F90(a1, dword_140404A6C[v3 + 278846111]);
    v7 = &dword_140404A6C[278845893];
    dword_140404A6C[v3 + 278846101] = 0;
  }
  else
  {
    v7 = (unsigned int *)(int)dword_140404A6C[v3 + 278847258];
    if ( (int)v7 < 64 )
    {
      dword_140404A6C[(_QWORD)&v7[440 * v5] + 278847259] = (unsigned __int8)v4;
      ++dword_140404A6C[v3 + 278847258];
    }
  }
  return (int)v7;
}

