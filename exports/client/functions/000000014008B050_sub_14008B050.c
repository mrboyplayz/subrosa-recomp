/* Address: 0x14008b050 | Name: sub_14008B050 | Size: 3608 bytes */
__int64 sub_14008B050()
{
  unsigned int v0; // eax
  __m128i v1; // xmm15
  char *v2; // rcx
  unsigned int v3; // eax
  unsigned int v4; // ecx
  __int64 v5; // rax
  int v6; // xmm0_4
  int v7; // xmm1_4
  int v8; // xmm3_4
  const char *v9; // rcx
  int v10; // esi
  __m128i v11; // xmm2
  __int64 v12; // r14
  __m128i v13; // xmm10
  __m128i v14; // xmm13
  float v15; // xmm7_4
  float v16; // xmm8_4
  char *v17; // rcx
  __m128i v18; // xmm15
  unsigned int *v19; // rdx
  int v20; // ebx
  unsigned int v21; // r9d
  __int64 v22; // r8
  int v23; // ecx
  __int64 v24; // r8
  int v25; // ecx
  __int64 v26; // rcx
  int v27; // ecx
  __int64 v28; // r8
  int v29; // ecx
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // r8
  int v33; // ecx
  __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // r8
  int v37; // ecx
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
  int v48; // r15d
  float v49; // xmm12_4
  unsigned int *v50; // rbp
  __m128i v51; // xmm11
  __m128i v52; // xmm10
  __int64 v53; // rbx
  int v54; // edx
  float v55; // xmm0_4
  __int64 v56; // rbx
  __m128i v57; // xmm2
  __int64 v59; // [rsp+0h] [rbp-348h] BYREF
  float v60; // [rsp+20h] [rbp-328h]
  float v61; // [rsp+28h] [rbp-320h]
  float v62; // [rsp+30h] [rbp-318h]
  float v63; // [rsp+38h] [rbp-310h]
  int v64; // [rsp+40h] [rbp-308h]
  int v65; // [rsp+48h] [rbp-300h]
  int v66; // [rsp+50h] [rbp-2F8h]
  int v67; // [rsp+60h] [rbp-2E8h]
  float v68; // [rsp+64h] [rbp-2E4h]
  float v69; // [rsp+68h] [rbp-2E0h]
  _BYTE v70[512]; // [rsp+70h] [rbp-2D8h] BYREF
  __int64 v71; // [rsp+270h] [rbp-D8h]

  v0 = dword_140404A6C[283831446];
  v1 = (__m128i)0x41A00000u;
  if ( (int)dword_140404A6C[283831446] < 7 )
  {
    v2 = off_1402B2920[dword_140404A6C[283831446]];
    v64 = 1065353216;
    v63 = 1.0;
    v62 = 1.0;
    v61 = 1.0;
    sub_14006D930(
      v2,
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41000000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
      32);
    v0 = dword_140404A6C[283831446];
  }
  if ( dword_140404A6C[283831448] == 3 && v0 == 5 )
  {
    if ( (int)dword_140404A6C[284023018] <= (int)dword_140404A6C[284023019] )
    {
      if ( (int)dword_140404A6C[284023018] >= (int)dword_140404A6C[284023019] )
      {
        *(float *)&v6 = 1.0;
        *(float *)&v7 = 1.0;
        *(float *)&v8 = 1.0;
        v9 = "Tie";
LABEL_13:
        v64 = 1065353216;
        v63 = *(float *)&v8;
        v62 = *(float *)&v7;
        v61 = *(float *)&v6;
        sub_14006D930(
          v9,
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41F00000u),
          33);
        goto LABEL_14;
      }
      v3 = 1;
    }
    else
    {
      v3 = 0;
    }
    v4 = v3;
    v5 = 3LL * v3;
    v6 = dword_1402B2830[v5];
    v7 = dword_1402B2834[v5];
    v8 = dword_1402B2838[v5];
    if ( v4 )
      v9 = "Monsota Wins!";
    else
      v9 = "Goldmen Wins!";
    goto LABEL_13;
  }
LABEL_14:
  v10 = 0;
  v11 = (__m128i)0x42A00000u;
  v12 = 0;
  v13 = (__m128i)0x418C0000u;
  do
  {
    if ( v10 != 2 )
    {
      v14 = (__m128i)COERCE_UNSIGNED_INT((float)v10);
      *(float *)v14.m128i_i32 = (float)(*(float *)v14.m128i_i32 * 248.0) + 8.0;
      if ( (unsigned int)v10 >= 3 )
      {
        *(float *)&v67 = 1.0;
        v15 = 1.0;
        v68 = 1.0;
        v16 = 1.0;
      }
      else
      {
        v15 = *(float *)&dword_1402B2834[3 * v12];
        v16 = *(float *)&dword_1402B2838[3 * v12];
        v67 = dword_1402B2830[3 * v12];
        v69 = v15;
        v68 = v16;
        v17 = off_1402B2890[v12];
        v64 = 1065353216;
        v63 = v16;
        v62 = v15;
        v61 = *(float *)&v67;
        sub_14006D930(
          v17,
          (unsigned int)_mm_cvtsi128_si32(v14),
          (unsigned int)_mm_cvtsi128_si32(v11),
          (unsigned int)_mm_cvtsi128_si32(v1),
          96);
        if ( dword_140404A6C[283831448] == 3 )
        {
          v65 = dword_140404A6C[5873 * v12 + 283831505];
          v64 = 1065353216;
          v63 = v16;
          v62 = v15;
          v61 = *(float *)&v67;
          sub_14006D930(
            "Bonus:$/i",
            (unsigned int)_mm_cvtsi128_si32(v14),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x42D00000u),
            (unsigned int)_mm_cvtsi128_si32(v13),
            32);
        }
        v65 = dword_140404A6C[v12 + 284023018];
        v64 = 1065353216;
        v63 = v16;
        v62 = v15;
        v61 = *(float *)&v67;
        sub_14006D930(
          "Total:$/i",
          (unsigned int)_mm_cvtsi128_si32(v14),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42F80000u),
          (unsigned int)_mm_cvtsi128_si32(v13),
          32);
        v68 = v16;
      }
      v69 = v15;
      v18 = (__m128i)0x43180000u;
      v19 = &dword_140404A6C[71859139];
      v20 = 0;
      v21 = 2;
      dword_140404A6C[346695797] = 0;
      do
      {
        if ( *(v19 - 2886) )
        {
          if ( !*v19 )
          {
            v22 = (int)*(v19 - 2853);
            if ( (_DWORD)v22 == v10 || v12 == 3 && (_DWORD)v22 == 7 )
            {
              dword_140404A6C[2 * v20 + 346695798] = v21 - 2;
              if ( (_DWORD)v22 == -1 || (int)v22 >= 6 )
                v23 = *(v19 - 2867);
              else
                v23 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v22 + 335047064] * 0.1)
                                         * (float)(int)*(v19 - 2851))
                                 + (float)(int)*(v19 - 2867));
              *(v19 - 2861) = v23;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v23;
              v20 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[711] )
        {
          if ( !v19[3597] )
          {
            v24 = (int)v19[744];
            if ( (_DWORD)v24 == v10 || v12 == 3 && (_DWORD)v24 == 7 )
            {
              dword_140404A6C[2 * v20 + 346695798] = v21 - 1;
              if ( (_DWORD)v24 == -1 || (int)v24 >= 6 )
                v25 = v19[730];
              else
                v25 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v24 + 335047064] * 0.1)
                                         * (float)(int)v19[746])
                                 + (float)(int)v19[730]);
              v19[736] = v25;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v25;
              v20 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[4308] )
        {
          if ( !v19[7194] )
          {
            v26 = (int)v19[4341];
            if ( (_DWORD)v26 == v10 || v12 == 3 && (_DWORD)v26 == 7 )
            {
              dword_140404A6C[2 * v20 + 346695798] = v21;
              if ( (_DWORD)v26 == -1 || (int)v26 >= 6 )
                v27 = v19[4327];
              else
                v27 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v26 + 335047064] * 0.1)
                                         * (float)(int)v19[4343])
                                 + (float)(int)v19[4327]);
              v19[4333] = v27;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v27;
              v20 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[7905] )
        {
          if ( !v19[10791] )
          {
            v28 = (int)v19[7938];
            if ( (_DWORD)v28 == v10 || v12 == 3 && (_DWORD)v28 == 7 )
            {
              dword_140404A6C[2 * v20 + 346695798] = v21 + 1;
              if ( (_DWORD)v28 == -1 || (int)v28 >= 6 )
                v29 = v19[7924];
              else
                v29 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v28 + 335047064] * 0.1)
                                         * (float)(int)v19[7940])
                                 + (float)(int)v19[7924]);
              v19[7930] = v29;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v29;
              v20 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[11502] )
        {
          if ( !v19[14388] )
          {
            v30 = (int)v19[11535];
            if ( (_DWORD)v30 == v10 || v12 == 3 && (_DWORD)v30 == 7 )
            {
              dword_140404A6C[2 * v20 + 346695798] = v21 + 2;
              if ( (_DWORD)v30 == -1 || (int)v30 >= 6 )
                v31 = v19[11521];
              else
                v31 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v30 + 335047064] * 0.1)
                                         * (float)(int)v19[11537])
                                 + (float)(int)v19[11521]);
              v19[11527] = v31;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v31;
              v20 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[15099] )
        {
          if ( !v19[17985] )
          {
            v32 = (int)v19[15132];
            if ( (_DWORD)v32 == v10 || v12 == 3 && (_DWORD)v32 == 7 )
            {
              dword_140404A6C[2 * v20 + 346695798] = v21 + 3;
              if ( (_DWORD)v32 == -1 || (int)v32 >= 6 )
                v33 = v19[15118];
              else
                v33 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v32 + 335047064] * 0.1)
                                         * (float)(int)v19[15134])
                                 + (float)(int)v19[15118]);
              v19[15124] = v33;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v33;
              v20 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[18696] )
        {
          if ( !v19[21582] )
          {
            v34 = (int)v19[18729];
            if ( (_DWORD)v34 == v10 || v12 == 3 && (_DWORD)v34 == 7 )
            {
              dword_140404A6C[2 * v20 + 346695798] = v21 + 4;
              if ( (_DWORD)v34 == -1 || (int)v34 >= 6 )
                v35 = v19[18715];
              else
                v35 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v34 + 335047064] * 0.1)
                                         * (float)(int)v19[18731])
                                 + (float)(int)v19[18715]);
              v19[18721] = v35;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v35;
              v20 = ++dword_140404A6C[346695797];
            }
          }
        }
        if ( v19[22293] )
        {
          if ( !v19[25179] )
          {
            v36 = (int)v19[22326];
            if ( (_DWORD)v36 == v10 || v12 == 3 && (_DWORD)v36 == 7 )
            {
              dword_140404A6C[2 * v20 + 346695798] = v21 + 5;
              if ( (_DWORD)v36 == -1 || (int)v36 >= 6 )
                v37 = v19[22312];
              else
                v37 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v36 + 335047064] * 0.1)
                                         * (float)(int)v19[22328])
                                 + (float)(int)v19[22312]);
              v19[22318] = v37;
              dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v37;
              v20 = ++dword_140404A6C[346695797];
            }
          }
        }
        v21 += 8;
        v19 += 28776;
      }
      while ( (int)(v21 - 2) < 256 );
      dword_140404A6C[436668493] = v20;
      v38 = 0;
      v39 = 0;
      if ( v20 >= 8 )
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
        while ( v39 < v20 - (v20 & 7) );
      }
      if ( v38 < v20 )
      {
        v44 = &dword_140404A6C[v39 + 437192782];
        v45 = (_DWORD *)(0x140000000LL + 8 * v39 + 1390996552);
        v46 = (unsigned int)(v20 - v38);
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
      sub_14007D710();
      dword_140404A6C[438291413] = 2;
      v48 = 0;
      if ( v20 > 0 )
      {
        v49 = *(float *)&v67;
        v50 = &dword_140404A6C[436668494];
        v52 = v14;
        v51 = v14;
        *(float *)v52.m128i_i32 = *(float *)v14.m128i_i32 + 24.0;
        do
        {
          v53 = dword_140404A6C[2 * *v50 + 346695798];
          if ( (unsigned int)v53 > 0xFF )
            v53 = 0;
          if ( dword_140404A6C[283831448] != 2 )
          {
            v66 = 1065353216;
            v65 = 1065353216;
            v64 = 1065353216;
            v63 = 1.0;
            v62 = 0.0;
            v61 = 24.0;
            v60 = 24.0;
            if ( dword_140404A6C[v53 + 284023074] )
              v54 = dword_140404A6C[346696312];
            else
              v54 = dword_140404A6C[3597 * (unsigned int)v53 + 71856270]
                  ? dword_140404A6C[346696311]
                  : dword_140404A6C[346696310];
            sub_14006D300(
              0,
              v54,
              *(float *)v14.m128i_i32,
              *(float *)v18.m128i_i32,
              v60,
              v61,
              SLOBYTE(v62),
              SLODWORD(v63),
              v64,
              v65,
              v66);
            if ( (_DWORD)v53 != dword_140404A6C[284024501]
              && dword_140404A6C[284024633]
              && !dword_140404A6C[346696313]
              && *(float *)&dword_140404A6C[284024597] >= *(float *)v14.m128i_i32
              && *(float *)&dword_140404A6C[284024597] < *(float *)v52.m128i_i32
              && *(float *)&dword_140404A6C[284024598] >= *(float *)v18.m128i_i32
              && *(float *)&dword_140404A6C[284024598] < (float)(*(float *)v18.m128i_i32 + 24.0) )
            {
              dword_140404A6C[v53 + 284023074] ^= 1u;
            }
          }
          v55 = 1.0;
          if ( dword_140404A6C[283831448] == 1 && !dword_140404A6C[3597 * (unsigned int)v53 + 71856271] )
            v55 = 0.5;
          v64 = 1065353216;
          v56 = 3597LL * (unsigned int)v53;
          v63 = v16 * v55;
          v62 = v15 * v55;
          v61 = v49 * v55;
          sub_14006D930(
            &dword_140404A6C[v56 + 71856254],
            (unsigned int)_mm_cvtsi128_si32(v52),
            (unsigned int)_mm_cvtsi128_si32(v18),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x418C0000u),
            96);
          sub_140158AB0(
            v70,
            "%03d-%04d",
            dword_140404A6C[v56 + 71856265] / 0x2710,
            dword_140404A6C[v56 + 71856265] % 0x2710);
          v64 = 1065353216;
          v57 = v18;
          *(float *)v57.m128i_i32 = *(float *)v18.m128i_i32 + 18.0;
          v61 = v49 * v55;
          sub_14006D930(
            v70,
            (unsigned int)_mm_cvtsi128_si32(v52),
            (unsigned int)_mm_cvtsi128_si32(v57),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41200000u),
            96);
          v16 = v68;
          v15 = v69;
          v65 = dword_140404A6C[v56 + 71856278];
          v64 = 1065353216;
          v63 = v68;
          v62 = v69;
          v61 = v49;
          *(float *)v51.m128i_i32 = *(float *)v14.m128i_i32 + 240.0;
          sub_14006D930(
            "$/I",
            (unsigned int)_mm_cvtsi128_si32(v51),
            (unsigned int)_mm_cvtsi128_si32(v18),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x418C0000u),
            34);
          ++v48;
          *(float *)v18.m128i_i32 = *(float *)v18.m128i_i32 + 24.0;
          ++v50;
        }
        while ( v48 < (int)dword_140404A6C[346695797] );
        v13 = (__m128i)0x418C0000u;
      }
      v1 = (__m128i)0x41A00000u;
      v11 = (__m128i)0x42A00000u;
      dword_140404A6C[438291413] = 0;
    }
    ++v10;
    ++v12;
  }
  while ( v10 < 4 );
  dword_140404A6C[346696313] = dword_140404A6C[284024633];
  return MEMORY[0x1401F8B20]((unsigned __int64)&v59 ^ v71);
}

