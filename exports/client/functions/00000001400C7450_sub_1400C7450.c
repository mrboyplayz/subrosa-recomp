/* Address: 0x1400c7450 | Name: sub_1400C7450 | Size: 1084 bytes */
void __fastcall sub_1400C7450(unsigned int a1, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // r9
  signed int v7; // ebx
  unsigned int *v8; // rsi
  __int64 v9; // rdi
  __m128i v10; // xmm0
  unsigned int *v11; // rsi
  unsigned int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  signed int v16; // r10d
  signed int v17; // r8d
  unsigned int v18; // edx
  __int64 v19; // r9
  __int64 v20; // rcx
  signed int v21; // ebx
  unsigned int *v22; // rsi
  __int64 v23; // rdi
  __m128i v24; // xmm0
  int v25; // eax
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  signed int v29; // eax
  unsigned int v30; // eax
  signed int v31; // ebx
  unsigned int *v32; // rsi
  __int64 v33; // rdi
  __m128i si128; // xmm0

  v3 = 1760LL * (int)a1;
  v4 = (int)a1;
  if ( (int)dword_140404A6C[v3 + 278847326] > 0 )
    return;
  v5 = (int)dword_140404A6C[v3 + 278847323];
  if ( (_DWORD)v5 == -1 || (v6 = (int)dword_140404A6C[v3 + 278846098], (_DWORD)v6 == -1) )
  {
    v31 = 0;
    dword_140404A6C[v3 + 278847324] = 0;
    v32 = &dword_140404A6C[v3 + 278846114];
    v33 = 0x140000000LL + v3 * 4 + 1119599860;
    do
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_140279200);
      *(_BYTE *)v32 = 0;
      *(__m128i *)v33 = si128;
      *(__m128i *)(v33 + 16) = si128;
      *(__m128i *)(v33 + 32) = si128;
      *(_QWORD *)(v33 + 48) = si128.m128i_i64[0];
      *(_DWORD *)(v33 + 56) = si128.m128i_i32[0];
      *(_WORD *)(v33 + 60) = si128.m128i_i16[0];
      *(_BYTE *)(v33 + 62) = si128.m128i_i8[0];
      sub_140050F90(a1, v31++);
      v33 += 64;
      v32 += 16;
    }
    while ( v31 < 24 );
    return;
  }
  if ( (a2 & 0x100) != 0 )
  {
    if ( toupper((unsigned __int8)a2) == 88 )
    {
      v7 = 0;
      dword_140404A6C[v3 + 278847324] = 0;
      v8 = &dword_140404A6C[v3 + 278846114];
      v9 = 0x140000000LL + v3 * 4 + 1119599860;
      do
      {
        v10 = _mm_load_si128((const __m128i *)&xmmword_140279200);
        *(_BYTE *)v8 = 0;
        *(__m128i *)v9 = v10;
        *(__m128i *)(v9 + 16) = v10;
        *(__m128i *)(v9 + 32) = v10;
        *(_QWORD *)(v9 + 48) = v10.m128i_i64[0];
        *(_DWORD *)(v9 + 56) = v10.m128i_i32[0];
        *(_WORD *)(v9 + 60) = v10.m128i_i16[0];
        *(_BYTE *)(v9 + 62) = v10.m128i_i8[0];
        sub_140050F90(a1, v7++);
        v9 += 64;
        v8 += 16;
      }
      while ( v7 < 24 );
    }
    return;
  }
  v11 = &dword_140404A6C[v3 + 278847327];
  v12 = dword_140404A6C[v3 + 278847327];
  if ( !v12 )
  {
    switch ( a2 )
    {
      case 16:
        v13 = dword_140404A6C[v3 + 278847328];
        if ( v13 > -2 )
          dword_140404A6C[v3 + 278847328] = v13 - 1;
        break;
      case 17:
        v14 = dword_140404A6C[v3 + 278847328];
        if ( v14 < 7 )
          dword_140404A6C[v3 + 278847328] = v14 + 1;
        break;
      case 10:
        v15 = dword_140404A6C[v3 + 278847328];
        if ( v15 > 6 )
        {
          if ( v15 == -1 )
          {
            v16 = 0;
            dword_140404A6C[v3 + 278847332] = 0;
            v17 = 0;
            if ( (int)dword_140404A6C[2570 * v6 + 275754072] > 0 )
            {
              v18 = dword_140404A6C[v3 + 278846098];
              v19 = 0;
              do
              {
                if ( dword_140404A6C[2570 * (int)v18 + 275754078 + v19] == dword_140404A6C[v3 + 278847331] )
                {
                  dword_140404A6C[1760 * v4 + 278847333 + v16] = v17;
                  v16 = dword_140404A6C[v3 + 278847332] + 1;
                  dword_140404A6C[v3 + 278847332] = v16;
                  v18 = dword_140404A6C[v3 + 278846098];
                }
                ++v17;
                v19 += 6;
              }
              while ( v17 < (int)dword_140404A6C[2570 * v18 + 275754072] );
            }
            *v11 = 2;
            dword_140404A6C[v3 + 278847329] = 0;
          }
          else
          {
            if ( v15 != -2 )
            {
              v21 = 0;
              dword_140404A6C[v3 + 278847324] = 0;
              v22 = &dword_140404A6C[v3 + 278846114];
              v23 = 0x140000000LL + v3 * 4 + 1119599860;
              do
              {
                v24 = _mm_load_si128((const __m128i *)&xmmword_140279200);
                *(_BYTE *)v22 = 0;
                *(__m128i *)v23 = v24;
                *(__m128i *)(v23 + 16) = v24;
                *(__m128i *)(v23 + 32) = v24;
                *(_QWORD *)(v23 + 48) = v24.m128i_i64[0];
                *(_DWORD *)(v23 + 56) = v24.m128i_i32[0];
                *(_WORD *)(v23 + 60) = v24.m128i_i16[0];
                *(_BYTE *)(v23 + 62) = v24.m128i_i8[0];
                sub_140050F90(a1, v21++);
                v23 += 64;
                v22 += 16;
              }
              while ( v21 < 24 );
              return;
            }
            v20 = 5 * v5;
            if ( (int)dword_140404A6C[v20 + 188872240] <= 8 )
              dword_140404A6C[v20 + 188872240] = 0;
          }
        }
        else
        {
          *v11 = 1;
          dword_140404A6C[v3 + 278847329] = 0;
        }
        break;
    }
    goto LABEL_54;
  }
  if ( v12 == 1 )
  {
    if ( a2 == 16 )
    {
      v25 = dword_140404A6C[v3 + 278847329];
      if ( v25 > 0 )
        dword_140404A6C[v3 + 278847329] = v25 - 1;
      goto LABEL_54;
    }
    if ( a2 == 17 )
    {
      v26 = dword_140404A6C[v3 + 278847329];
      if ( v26 < 0 )
        dword_140404A6C[v3 + 278847329] = v26 + 1;
      goto LABEL_54;
    }
    if ( a2 != 10 )
      goto LABEL_54;
    v27 = dword_140404A6C[v3 + 278847329] == 0;
    goto LABEL_52;
  }
  if ( v12 != 2 )
    goto LABEL_54;
  if ( a2 == 16 )
  {
    v28 = dword_140404A6C[v3 + 278847330];
    if ( v28 > 0 )
      dword_140404A6C[v3 + 278847330] = v28 - 1;
    goto LABEL_54;
  }
  if ( a2 == 17 )
  {
    v29 = dword_140404A6C[v3 + 278847330];
    if ( v29 < (int)dword_140404A6C[v3 + 278847332] )
      dword_140404A6C[v3 + 278847330] = v29 + 1;
    goto LABEL_54;
  }
  if ( a2 != 10 )
  {
    v27 = a2 == 8;
LABEL_52:
    if ( v27 )
      goto LABEL_53;
    goto LABEL_54;
  }
  if ( (int)dword_140404A6C[v3 + 278847330] >= (int)dword_140404A6C[v3 + 278847332] )
  {
LABEL_53:
    *v11 = 0;
    goto LABEL_54;
  }
  dword_140404A6C[v3 + 278847325] = 1;
  dword_140404A6C[v3 + 278847326] = 255;
LABEL_54:
  v30 = *v11;
  if ( !*v11 )
  {
    sub_1400C7890(a1);
    v30 = *v11;
  }
  if ( v30 == 1 )
  {
    sub_1400C7FC0(a1);
    v30 = *v11;
  }
  if ( v30 == 2 )
    sub_1400C86D0(a1);
}

