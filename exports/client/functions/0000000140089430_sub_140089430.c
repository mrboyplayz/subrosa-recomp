/* Address: 0x140089430 | Name: sub_140089430 | Size: 3282 bytes */
__int64 sub_140089430()
{
  __int64 v0; // r8
  __int64 result; // rax
  int v2; // ebp
  __int64 v3; // r14
  __m128i v4; // xmm6
  __m128i v5; // xmm9
  __int64 v6; // r9
  __m128i v7; // xmm14
  __m128i v8; // xmm6
  int v9; // r8d
  float v10; // xmm1_4
  int v11; // eax
  __int64 v12; // r9
  __m128i v13; // xmm1
  __int64 v14; // r8
  const char *v15; // rcx
  const char *v16; // rcx
  __m128i v17; // xmm1
  int v18; // ebx
  unsigned int *v19; // rdx
  __m128i v20; // xmm9
  unsigned int v21; // r9d
  __int64 v22; // r8
  int v23; // r10d
  __int64 v24; // r8
  int v25; // r10d
  __int64 v26; // rcx
  int v27; // r8d
  __int64 v28; // r8
  int v29; // r10d
  __int64 v30; // r8
  int v31; // r10d
  __int64 v32; // r8
  int v33; // r10d
  __int64 v34; // r8
  int v35; // r10d
  __int64 v36; // r8
  int v37; // r10d
  int v38; // r8d
  __int64 v39; // rdx
  __m128i si128; // xmm4
  __m128i v41; // xmm1
  __m128i v42; // xmm2
  __m128i v43; // xmm3
  unsigned int *v44; // rcx
  _DWORD *v45; // rdx
  __int64 v46; // r8
  int v47; // eax
  int v48; // esi
  __m128i v49; // xmm6
  unsigned int *v50; // rdi
  unsigned int v51; // ecx
  __int64 v52; // rbx
  __int64 v53; // rax
  int v54; // edx

  unk_140404050(3553, dword_140404A6C[451221642]);
  result = sub_14006CFF0(COERCE_DOUBLE(0x40000000), COERCE_DOUBLE(1123811328), v0, 480.0, 0, 0, 0, 0, 1056964608);
  if ( dword_140404A6C[283831312] == 3 )
  {
    v2 = 0;
    v3 = 0;
    v4 = (__m128i)0x43000000u;
    v5 = (__m128i)0x42D00000u;
    do
    {
      v6 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u);
      v7 = (__m128i)COERCE_UNSIGNED_INT((float)v2);
      *(float *)v7.m128i_i32 = *(float *)v7.m128i_i32 * 252.0;
      if ( (unsigned int)v2 >= 3 )
      {
        v17 = v7;
        *(float *)v17.m128i_i32 = *(float *)v7.m128i_i32 + 8.0;
        sub_14006D930(Parameters, (unsigned int)_mm_cvtsi128_si32(v17), (unsigned int)_mm_cvtsi128_si32(v5), v6, 96);
      }
      else
      {
        v8 = v7;
        *(float *)v8.m128i_i32 = *(float *)v7.m128i_i32 + 8.0;
        sub_14006D930(
          off_1402B2890[v3],
          (unsigned int)_mm_cvtsi128_si32(v8),
          (unsigned int)_mm_cvtsi128_si32(v5),
          v6,
          96);
        if ( dword_140404A6C[283831448] == 3 && (v9 = dword_140404A6C[6 * v3 + 335047065]) != 0 )
        {
          v10 = (float)((float)((float)((int)dword_140404A6C[6 * v3 + 335047064] / 10) * 100.0) / (float)v9) - 100.0;
          if ( v10 <= 0.0 )
          {
            if ( v10 < 0.0 )
              v10 = v10 - 0.5;
          }
          else
          {
            v10 = v10 + 0.5;
          }
          *(float *)v8.m128i_i32 = *(float *)v8.m128i_i32 + 228.0;
          v11 = (int)v10;
          v12 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u);
          v13 = v8;
          v14 = (unsigned int)_mm_cvtsi128_si32(v5);
          if ( v11 >= -50 )
          {
            v15 = "$/i(+/i%)";
            if ( v11 <= 0 )
              v15 = "$/i(/i%)";
            sub_14006D930(v15, (unsigned int)_mm_cvtsi128_si32(v8), v14, v12, 34);
            v4 = (__m128i)0x43000000u;
            goto LABEL_18;
          }
          v16 = "$/i(Split)";
        }
        else
        {
          *(float *)v8.m128i_i32 = *(float *)v8.m128i_i32 + 228.0;
          v12 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u);
          v13 = v8;
          v14 = (unsigned int)_mm_cvtsi128_si32(v5);
          v16 = "$/i";
        }
        sub_14006D930(v16, (unsigned int)_mm_cvtsi128_si32(v13), v14, v12, 34);
        v4 = (__m128i)0x43000000u;
      }
LABEL_18:
      *(float *)v7.m128i_i32 = *(float *)v7.m128i_i32 + 4.0;
      if ( !dword_140404A6C[283831448] )
        sub_14006D930(
          "/i.",
          (unsigned int)_mm_cvtsi128_si32(v7),
          (unsigned int)_mm_cvtsi128_si32(v5),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
          32);
      v18 = 0;
      v19 = &dword_140404A6C[71859139];
      dword_140404A6C[346695797] = 0;
      v20 = v4;
      v21 = 2;
      do
      {
        if ( *(v19 - 2886) )
        {
          if ( !*v19 )
          {
            v22 = (int)*(v19 - 2853);
            if ( (_DWORD)v22 == v2 || v3 == 3 && (_DWORD)v22 == 17 )
            {
              v23 = *(v19 - 2867);
              dword_140404A6C[2 * v18 + 346695798] = v21 - 2;
              if ( (_DWORD)v22 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v23;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v22 + 335047064] * 0.1)
                                                                                                 * (float)(int)*(v19 - 2851))
                                                                                         + (float)v23);
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[711] )
        {
          if ( !v19[3597] )
          {
            v24 = (int)v19[744];
            if ( (_DWORD)v24 == v2 || v3 == 3 && (_DWORD)v24 == 17 )
            {
              v25 = v19[730];
              dword_140404A6C[2 * v18 + 346695798] = v21 - 1;
              if ( (_DWORD)v24 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v25;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v24 + 335047064] * 0.1)
                                                                                                 * (float)(int)v19[746])
                                                                                         + (float)v25);
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[4308] )
        {
          if ( !v19[7194] )
          {
            v26 = (int)v19[4341];
            if ( (_DWORD)v26 == v2 || v3 == 3 && (_DWORD)v26 == 17 )
            {
              v27 = v19[4327];
              dword_140404A6C[2 * v18 + 346695798] = v21;
              if ( (_DWORD)v26 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v27;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v26 + 335047064] * 0.1)
                                                                                                 * (float)(int)v19[4343])
                                                                                         + (float)v27);
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[7905] )
        {
          if ( !v19[10791] )
          {
            v28 = (int)v19[7938];
            if ( (_DWORD)v28 == v2 || v3 == 3 && (_DWORD)v28 == 17 )
            {
              v29 = v19[7924];
              dword_140404A6C[2 * v18 + 346695798] = v21 + 1;
              if ( (_DWORD)v28 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v29;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v28 + 335047064] * 0.1)
                                                                                                 * (float)(int)v19[7940])
                                                                                         + (float)v29);
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[11502] )
        {
          if ( !v19[14388] )
          {
            v30 = (int)v19[11535];
            if ( (_DWORD)v30 == v2 || v3 == 3 && (_DWORD)v30 == 17 )
            {
              v31 = v19[11521];
              dword_140404A6C[2 * v18 + 346695798] = v21 + 2;
              if ( (_DWORD)v30 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v31;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v30 + 335047064] * 0.1)
                                                                                                 * (float)(int)v19[11537])
                                                                                         + (float)v31);
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[15099] )
        {
          if ( !v19[17985] )
          {
            v32 = (int)v19[15132];
            if ( (_DWORD)v32 == v2 || v3 == 3 && (_DWORD)v32 == 17 )
            {
              v33 = v19[15118];
              dword_140404A6C[2 * v18 + 346695798] = v21 + 3;
              if ( (_DWORD)v32 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v33;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v32 + 335047064] * 0.1)
                                                                                                 * (float)(int)v19[15134])
                                                                                         + (float)v33);
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[18696] )
        {
          if ( !v19[21582] )
          {
            v34 = (int)v19[18729];
            if ( (_DWORD)v34 == v2 || v3 == 3 && (_DWORD)v34 == 17 )
            {
              v35 = v19[18715];
              dword_140404A6C[2 * v18 + 346695798] = v21 + 4;
              if ( (_DWORD)v34 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v35;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v34 + 335047064] * 0.1)
                                                                                                 * (float)(int)v19[18731])
                                                                                         + (float)v35);
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[22293] )
        {
          if ( !v19[25179] )
          {
            v36 = (int)v19[22326];
            if ( (_DWORD)v36 == v2 || v3 == 3 && (_DWORD)v36 == 17 )
            {
              v37 = v19[22312];
              dword_140404A6C[2 * v18 + 346695798] = v21 + 5;
              if ( (_DWORD)v36 == -1 )
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v37;
              else
                dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v36 + 335047064] * 0.1)
                                                                                                 * (float)(int)v19[22328])
                                                                                         + (float)v37);
              v18 = ++dword_140404A6C[346695797];
            }
          }
        }
        v21 += 8;
        v19 += 28776;
      }
      while ( (int)(v21 - 2) < 256 );
      dword_140404A6C[436668493] = v18;
      v38 = 0;
      v39 = 0;
      if ( v18 >= 8 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_140279890);
        do
        {
          v38 += 8;
          v41 = _mm_cvtsi32_si128(dword_140404A6C[2 * v39 + 346695813]);
          v42 = _mm_cvtsi32_si128(dword_140404A6C[2 * v39 + 346695811]);
          v43 = _mm_cvtsi32_si128(dword_140404A6C[2 * v39 + 346695807]);
          *(__m128i *)&dword_140404A6C[v39 + 437192782] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v39 + 346695799]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v39 + 346695801])),
                                                              _mm_unpacklo_epi32(
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v39 + 346695803]),
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v39 + 346695805]))));
          *(__m128i *)&dword_140404A6C[v39 + 437192786] = _mm_sub_epi32(
                                                            si128,
                                                            _mm_unpacklo_epi64(
                                                              _mm_unpacklo_epi32(
                                                                v43,
                                                                _mm_cvtsi32_si128(dword_140404A6C[2 * v39 + 346695809])),
                                                              _mm_unpacklo_epi32(v42, v41)));
          v39 += 8;
        }
        while ( v39 < v18 - (v18 & 7) );
      }
      if ( v38 < v18 )
      {
        v44 = &dword_140404A6C[v39 + 437192782];
        v45 = (_DWORD *)(0x140000000LL + 8 * v39 + 1390996552);
        v46 = (unsigned int)(v18 - v38);
        do
        {
          ++v44;
          v47 = -1879048193 - *v45;
          v45 += 2;
          *(v44 - 1) = v47;
          --v46;
        }
        while ( v46 );
      }
      result = sub_14007D710();
      v48 = 0;
      if ( v18 > 0 )
      {
        v49 = v7;
        v50 = &dword_140404A6C[436668494];
        do
        {
          v51 = dword_140404A6C[2 * *v50 + 346695798];
          if ( v51 > 0xFF )
            v51 = 0;
          v52 = 3597LL * v51;
          sub_14006D930(
            &dword_140404A6C[v52 + 71856254],
            (unsigned int)_mm_cvtsi128_si32(v7),
            (unsigned int)_mm_cvtsi128_si32(v20),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
            96);
          v53 = (int)dword_140404A6C[v52 + 71856286];
          v54 = dword_140404A6C[v52 + 71856272];
          if ( (_DWORD)v53 != -1 )
            v54 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v53 + 335047064] * 0.1)
                                     * (float)(int)dword_140404A6C[v52 + 71856288])
                             + (float)v54);
          dword_140404A6C[v52 + 71856278] = v54;
          *(float *)v49.m128i_i32 = *(float *)v7.m128i_i32 + 240.0;
          result = sub_14006D930(
                     "$/I",
                     (unsigned int)_mm_cvtsi128_si32(v49),
                     (unsigned int)_mm_cvtsi128_si32(v20),
                     (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
                     34);
          ++v48;
          *(float *)v20.m128i_i32 = *(float *)v20.m128i_i32 + 24.0;
          ++v50;
        }
        while ( v48 < (int)dword_140404A6C[346695797] );
        v4 = (__m128i)0x43000000u;
      }
      v5 = (__m128i)0x42D00000u;
      ++v2;
      ++v3;
    }
    while ( v2 < 4 );
  }
  return result;
}

