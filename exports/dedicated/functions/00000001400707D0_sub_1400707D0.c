/* Address: 0x1400707d0 | Name: sub_1400707D0 | Size: 1097 bytes */
void __fastcall sub_1400707D0(unsigned int a1, int a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // r9
  signed int v7; // edi
  char *v8; // r14
  __m128i *v9; // rsi
  __m128i v10; // xmm0
  int *v11; // rsi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  int v16; // r10d
  int v17; // r8d
  int v18; // edx
  __int64 v19; // r9
  __int64 v20; // rcx
  signed int v21; // edi
  char *v22; // r14
  __m128i *v23; // rsi
  __m128i v24; // xmm0
  int v25; // eax
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  int v29; // eax
  int v30; // eax
  signed int v31; // edi
  char *v32; // r14
  __m128i *v33; // rsi
  __m128i si128; // xmm0

  v3 = 7040LL * (int)a1;
  v4 = (int)a1;
  if ( dword_190260724[v3 / 4] > 0 )
    return;
  v5 = dword_190260718[v3 / 4];
  if ( (_DWORD)v5 == -1 || (v6 = *(int *)((char *)&unk_19025F3F4 + v3), (_DWORD)v6 == -1) )
  {
    v31 = 0;
    v32 = &byte_19025F434[v3];
    *(_DWORD *)&algn_19026071C[v3] = 0;
    v33 = (__m128i *)((char *)&unk_19025FC34 + v3);
    do
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7BB0);
      *v32 = 0;
      *v33 = si128;
      v33[1] = si128;
      v33[2] = si128;
      v33[3].m128i_i64[0] = si128.m128i_i64[0];
      v33[3].m128i_i32[2] = si128.m128i_i32[0];
      v33[3].m128i_i16[6] = si128.m128i_i16[0];
      v33[3].m128i_i8[14] = si128.m128i_i8[0];
      sub_1400395A0(a1, v31++);
      v33 += 4;
      v32 += 64;
    }
    while ( v31 < 24 );
    return;
  }
  if ( (a2 & 0x100) != 0 )
  {
    if ( toupper((unsigned __int8)a2) == 88 )
    {
      v7 = 0;
      v8 = &byte_19025F434[v3];
      *(_DWORD *)&algn_19026071C[v3] = 0;
      v9 = (__m128i *)((char *)&unk_19025FC34 + v3);
      do
      {
        v10 = _mm_load_si128((const __m128i *)&xmmword_1400F7BB0);
        *v8 = 0;
        *v9 = v10;
        v9[1] = v10;
        v9[2] = v10;
        v9[3].m128i_i64[0] = v10.m128i_i64[0];
        v9[3].m128i_i32[2] = v10.m128i_i32[0];
        v9[3].m128i_i16[6] = v10.m128i_i16[0];
        v9[3].m128i_i8[14] = v10.m128i_i8[0];
        sub_1400395A0(a1, v7++);
        v9 += 4;
        v8 += 64;
      }
      while ( v7 < 24 );
    }
    return;
  }
  v11 = &dword_190260728[v3 / 4];
  v12 = dword_190260728[v3 / 4];
  if ( !v12 )
  {
    switch ( a2 )
    {
      case 16:
        v13 = dword_19026072C[v3 / 4];
        if ( v13 > -2 )
          dword_19026072C[v3 / 4] = v13 - 1;
        break;
      case 17:
        v14 = dword_19026072C[v3 / 4];
        if ( v14 < 7 )
          dword_19026072C[v3 / 4] = v14 + 1;
        break;
      case 10:
        v15 = dword_19026072C[v3 / 4];
        if ( v15 > 6 )
        {
          if ( v15 == -1 )
          {
            v16 = 0;
            *(_DWORD *)&algn_190260734[v3 + 8] = 0;
            v17 = 0;
            if ( *((int *)&unk_18F7184CC + 2570 * v6) > 0 )
            {
              v18 = *(_DWORD *)((char *)&unk_19025F3F4 + v3);
              v19 = 0;
              do
              {
                if ( dword_18F7184E4[2570 * v18 + v19] == *(_DWORD *)&algn_190260734[v3 + 4] )
                {
                  dword_190260740[1760 * v4 + v16] = v17;
                  v16 = *(_DWORD *)&algn_190260734[v3 + 8] + 1;
                  *(_DWORD *)&algn_190260734[v3 + 8] = v16;
                  v18 = *(_DWORD *)((char *)&unk_19025F3F4 + v3);
                }
                ++v17;
                v19 += 6;
              }
              while ( v17 < *((_DWORD *)&unk_18F7184CC + 2570 * v18) );
            }
            *v11 = 2;
            dword_190260730[v3 / 4] = 0;
          }
          else
          {
            if ( v15 != -2 )
            {
              v21 = 0;
              v22 = &byte_19025F434[v3];
              *(_DWORD *)&algn_19026071C[v3] = 0;
              v23 = (__m128i *)((char *)&unk_19025FC34 + v3);
              do
              {
                v24 = _mm_load_si128((const __m128i *)&xmmword_1400F7BB0);
                *v22 = 0;
                *v23 = v24;
                v23[1] = v24;
                v23[2] = v24;
                v23[3].m128i_i64[0] = v24.m128i_i64[0];
                v23[3].m128i_i32[2] = v24.m128i_i32[0];
                v23[3].m128i_i16[6] = v24.m128i_i16[0];
                v23[3].m128i_i8[14] = v24.m128i_i8[0];
                sub_1400395A0(a1, v21++);
                v23 += 4;
                v22 += 64;
              }
              while ( v21 < 24 );
              return;
            }
            v20 = 5 * v5;
            if ( dword_17AE3AD4C[v20] <= 8 )
              dword_17AE3AD4C[v20] = 0;
          }
        }
        else
        {
          *v11 = 1;
          dword_190260730[v3 / 4] = 0;
        }
        break;
    }
    goto LABEL_54;
  }
  if ( v12 == 1 )
  {
    if ( a2 == 16 )
    {
      v25 = dword_190260730[v3 / 4];
      if ( v25 > 0 )
        dword_190260730[v3 / 4] = v25 - 1;
      goto LABEL_54;
    }
    if ( a2 == 17 )
    {
      v26 = dword_190260730[v3 / 4];
      if ( v26 < 0 )
        dword_190260730[v3 / 4] = v26 + 1;
      goto LABEL_54;
    }
    if ( a2 != 10 )
      goto LABEL_54;
    v27 = dword_190260730[v3 / 4] == 0;
    goto LABEL_52;
  }
  if ( v12 != 2 )
    goto LABEL_54;
  if ( a2 == 16 )
  {
    v28 = *(_DWORD *)&algn_190260734[v3];
    if ( v28 > 0 )
      *(_DWORD *)&algn_190260734[v3] = v28 - 1;
    goto LABEL_54;
  }
  if ( a2 == 17 )
  {
    v29 = *(_DWORD *)&algn_190260734[v3];
    if ( v29 < *(_DWORD *)&algn_190260734[v3 + 8] )
      *(_DWORD *)&algn_190260734[v3] = v29 + 1;
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
  if ( *(_DWORD *)&algn_190260734[v3] >= *(_DWORD *)&algn_190260734[v3 + 8] )
  {
LABEL_53:
    *v11 = 0;
    goto LABEL_54;
  }
  dword_190260720[v3 / 4] = 1;
  dword_190260724[v3 / 4] = 255;
LABEL_54:
  v30 = *v11;
  if ( !*v11 )
  {
    sub_140070C20(a1);
    v30 = *v11;
  }
  if ( v30 == 1 )
  {
    sub_140071350(a1);
    v30 = *v11;
  }
  if ( v30 == 2 )
    sub_140071A80(a1);
}

