/* Address: 0x14008a110 | Name: sub_14008A110 | Size: 3891 bytes */
__int64 sub_14008A110()
{
  unsigned int v0; // eax
  char *v1; // rcx
  int v2; // ecx
  int v3; // eax
  __int64 v4; // rdx
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm2_4
  const char *v8; // rcx
  bool v9; // zf
  __m128i v10; // xmm4
  int v11; // ebp
  __int64 v12; // rsi
  __m128i v13; // xmm11
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  __m128i v17; // xmm14
  char *v18; // rcx
  int v19; // r9d
  float v20; // xmm1_4
  const char *v21; // rdx
  __m128i v22; // xmm1
  __m128i v23; // xmm15
  int v24; // ebx
  unsigned int v25; // r9d
  unsigned int *v26; // rdx
  __int64 v27; // r8
  int v28; // ecx
  __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // r8
  int v34; // ecx
  __int64 v35; // r8
  int v36; // ecx
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // r8
  int v40; // ecx
  __int64 v41; // r8
  int v42; // ecx
  int v43; // r8d
  __int64 v44; // rdx
  __m128i si128; // xmm4
  __m128i v46; // xmm1
  __m128i v47; // xmm2
  __m128i v48; // xmm3
  unsigned int *v49; // rcx
  _DWORD *v50; // rdx
  __int64 v51; // r8
  int v52; // eax
  int v53; // r14d
  unsigned int *v54; // rdi
  __m128i v55; // xmm11
  __m128i v56; // xmm10
  __int64 v57; // rbx
  int v58; // edx
  float v59; // xmm0_4
  __int64 v60; // rbx
  __m128i v61; // xmm2
  __int64 v63; // [rsp+0h] [rbp-348h] BYREF
  float v64; // [rsp+20h] [rbp-328h]
  float v65; // [rsp+28h] [rbp-320h]
  float v66; // [rsp+30h] [rbp-318h]
  float v67; // [rsp+38h] [rbp-310h]
  int v68; // [rsp+40h] [rbp-308h]
  int v69; // [rsp+48h] [rbp-300h]
  int v70; // [rsp+50h] [rbp-2F8h]
  float v71; // [rsp+60h] [rbp-2E8h]
  float v72; // [rsp+64h] [rbp-2E4h]
  float v73; // [rsp+68h] [rbp-2E0h]
  _BYTE v74[512]; // [rsp+70h] [rbp-2D8h] BYREF
  __int64 v75; // [rsp+270h] [rbp-D8h]

  if ( dword_140404A6C[283831441] != 1 )
    goto LABEL_16;
  v0 = dword_140404A6C[283831446];
  if ( (int)dword_140404A6C[283831446] >= 7 )
  {
LABEL_5:
    if ( dword_140404A6C[283831448] != 3 || v0 != 5 )
      goto LABEL_16;
    v2 = 0;
    v3 = dword_140404A6C[335047064];
    v4 = 0;
    if ( (int)dword_140404A6C[335047070] > (int)dword_140404A6C[335047064] )
    {
      v2 = 1;
      v3 = dword_140404A6C[335047070];
      v4 = 1;
    }
    if ( (int)dword_140404A6C[335047076] > v3 )
    {
      v5 = dword_1402B2848;
      v6 = dword_1402B284C;
      v7 = dword_1402B2850;
LABEL_14:
      v8 = "OXS Wins!";
      goto LABEL_15;
    }
    v5 = dword_1402B2830[3 * v4];
    v6 = dword_1402B2834[3 * v4];
    v7 = dword_1402B2838[3 * v4];
    if ( v2 )
    {
      v9 = v2 == 1;
      v8 = "Monsota Wins!";
      if ( !v9 )
        goto LABEL_14;
    }
    else
    {
      v8 = "Goldmen Wins!";
    }
LABEL_15:
    v68 = 1065353216;
    v67 = *(float *)&v7;
    v66 = *(float *)&v6;
    v65 = *(float *)&v5;
    sub_14006D930(
      v8,
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41F00000u),
      33);
    goto LABEL_16;
  }
  v1 = off_1402B2920[dword_140404A6C[283831446]];
  v68 = 1065353216;
  v67 = 1.0;
  v66 = 1.0;
  v65 = 1.0;
  sub_14006D930(
    v1,
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41000000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
    (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
    32);
  if ( dword_140404A6C[283831441] == 1 )
  {
    v0 = dword_140404A6C[283831446];
    goto LABEL_5;
  }
LABEL_16:
  v10 = (__m128i)0x42A00000u;
  v11 = 0;
  v12 = 0;
  v13 = (__m128i)0x418C0000u;
  do
  {
    if ( (unsigned int)v11 >= 3 )
    {
      v14 = 1.0;
      v15 = 1.0;
      v16 = 1.0;
      goto LABEL_21;
    }
    v14 = *(float *)&dword_1402B2830[3 * v12];
    v15 = *(float *)&dword_1402B2834[3 * v12];
    v16 = *(float *)&dword_1402B2838[3 * v12];
    v71 = v14;
    v73 = v15;
    v72 = v16;
    if ( v11 == 2 )
    {
      v14 = v14 * 1.5;
      v15 = v15 * 1.5;
      v16 = v16 * 1.5;
LABEL_21:
      v72 = v16;
      v73 = v15;
      v71 = v14;
    }
    v17 = (__m128i)COERCE_UNSIGNED_INT((float)v11);
    *(float *)v17.m128i_i32 = (float)(*(float *)v17.m128i_i32 * 248.0) + 8.0;
    if ( dword_140404A6C[283831312] == 3 && (unsigned int)v11 < 3 )
    {
      v18 = off_1402B2890[v12];
      v68 = 1065353216;
      v67 = v16;
      v66 = v15;
      v65 = v14;
      sub_14006D930(
        v18,
        (unsigned int)_mm_cvtsi128_si32(v17),
        (unsigned int)_mm_cvtsi128_si32(v10),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
        96);
      if ( dword_140404A6C[283831448] == 3 && (v19 = dword_140404A6C[6 * v12 + 335047065]) != 0 )
      {
        v20 = (float)((float)((float)((int)dword_140404A6C[6 * v12 + 335047064] / 10) * 100.0) / (float)v19) - 100.0;
        if ( v20 <= 0.0 )
        {
          if ( v20 < 0.0 )
            v20 = v20 - 0.5;
        }
        else
        {
          v20 = v20 + 0.5;
        }
        if ( (int)v20 < -50 )
        {
          sub_140158AB0(v74, "$%d(Split)");
        }
        else
        {
          v21 = "$%d(+%d%%)";
          if ( (int)v20 <= 0 )
            v21 = "$%d(%d%%)";
          sub_140158AB0(v74, v21);
        }
      }
      else
      {
        sub_140158AB0(v74, "$%d");
      }
      v68 = 1065353216;
      v67 = v16;
      v22 = v17;
      *(float *)v22.m128i_i32 = *(float *)v17.m128i_i32 + 240.0;
      v66 = v15;
      v65 = v14;
      sub_14006D930(
        v74,
        (unsigned int)_mm_cvtsi128_si32(v22),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x42D00000u),
        (unsigned int)_mm_cvtsi128_si32(v13),
        34);
      if ( dword_140404A6C[283831448] == 3 )
      {
        v69 = dword_140404A6C[5873 * v12 + 283831505];
        v68 = 1065353216;
        v67 = v16;
        v66 = v15;
        v65 = v14;
        sub_14006D930(
          "Bonus:$/i",
          (unsigned int)_mm_cvtsi128_si32(v17),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42D00000u),
          (unsigned int)_mm_cvtsi128_si32(v13),
          32);
      }
    }
    v23 = (__m128i)0x43000000u;
    v24 = 0;
    dword_140404A6C[346695797] = 0;
    v25 = 2;
    v26 = &dword_140404A6C[71859139];
    do
    {
      if ( *(v26 - 2886) )
      {
        if ( !*v26 )
        {
          v27 = (int)*(v26 - 2853);
          if ( (_DWORD)v27 == v11 || v12 == 3 && (_DWORD)v27 == 17 )
          {
            dword_140404A6C[2 * v24 + 346695798] = v25 - 2;
            if ( (_DWORD)v27 == -1 || (int)v27 >= 6 )
              v28 = *(v26 - 2867);
            else
              v28 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v27 + 335047064] * 0.1)
                                       * (float)(int)*(v26 - 2851))
                               + (float)(int)*(v26 - 2867));
            *(v26 - 2861) = v28;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v28;
            v24 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v26[711] )
      {
        if ( !v26[3597] )
        {
          v29 = (int)v26[744];
          if ( (_DWORD)v29 == v11 || v12 == 3 && (_DWORD)v29 == 17 )
          {
            dword_140404A6C[2 * v24 + 346695798] = v25 - 1;
            if ( (_DWORD)v29 == -1 || (int)v29 >= 6 )
              v30 = v26[730];
            else
              v30 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v29 + 335047064] * 0.1)
                                       * (float)(int)v26[746])
                               + (float)(int)v26[730]);
            v26[736] = v30;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v30;
            v24 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v26[4308] )
      {
        if ( !v26[7194] )
        {
          v31 = (int)v26[4341];
          if ( (_DWORD)v31 == v11 || v12 == 3 && (_DWORD)v31 == 17 )
          {
            dword_140404A6C[2 * v24 + 346695798] = v25;
            if ( (_DWORD)v31 == -1 || (int)v31 >= 6 )
              v32 = v26[4327];
            else
              v32 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v31 + 335047064] * 0.1)
                                       * (float)(int)v26[4343])
                               + (float)(int)v26[4327]);
            v26[4333] = v32;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v32;
            v24 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v26[7905] )
      {
        if ( !v26[10791] )
        {
          v33 = (int)v26[7938];
          if ( (_DWORD)v33 == v11 || v12 == 3 && (_DWORD)v33 == 17 )
          {
            dword_140404A6C[2 * v24 + 346695798] = v25 + 1;
            if ( (_DWORD)v33 == -1 || (int)v33 >= 6 )
              v34 = v26[7924];
            else
              v34 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v33 + 335047064] * 0.1)
                                       * (float)(int)v26[7940])
                               + (float)(int)v26[7924]);
            v26[7930] = v34;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v34;
            v24 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v26[11502] )
      {
        if ( !v26[14388] )
        {
          v35 = (int)v26[11535];
          if ( (_DWORD)v35 == v11 || v12 == 3 && (_DWORD)v35 == 17 )
          {
            dword_140404A6C[2 * v24 + 346695798] = v25 + 2;
            if ( (_DWORD)v35 == -1 || (int)v35 >= 6 )
              v36 = v26[11521];
            else
              v36 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v35 + 335047064] * 0.1)
                                       * (float)(int)v26[11537])
                               + (float)(int)v26[11521]);
            v26[11527] = v36;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v36;
            v24 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v26[15099] )
      {
        if ( !v26[17985] )
        {
          v37 = (int)v26[15132];
          if ( (_DWORD)v37 == v11 || v12 == 3 && (_DWORD)v37 == 17 )
          {
            dword_140404A6C[2 * v24 + 346695798] = v25 + 3;
            if ( (_DWORD)v37 == -1 || (int)v37 >= 6 )
              v38 = v26[15118];
            else
              v38 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v37 + 335047064] * 0.1)
                                       * (float)(int)v26[15134])
                               + (float)(int)v26[15118]);
            v26[15124] = v38;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v38;
            v24 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v26[18696] )
      {
        if ( !v26[21582] )
        {
          v39 = (int)v26[18729];
          if ( (_DWORD)v39 == v11 || v12 == 3 && (_DWORD)v39 == 17 )
          {
            dword_140404A6C[2 * v24 + 346695798] = v25 + 4;
            if ( (_DWORD)v39 == -1 || (int)v39 >= 6 )
              v40 = v26[18715];
            else
              v40 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v39 + 335047064] * 0.1)
                                       * (float)(int)v26[18731])
                               + (float)(int)v26[18715]);
            v26[18721] = v40;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v40;
            v24 = ++dword_140404A6C[346695797];
          }
        }
      }
      if ( v26[22293] )
      {
        if ( !v26[25179] )
        {
          v41 = (int)v26[22326];
          if ( (_DWORD)v41 == v11 || v12 == 3 && (_DWORD)v41 == 17 )
          {
            dword_140404A6C[2 * v24 + 346695798] = v25 + 5;
            if ( (_DWORD)v41 == -1 || (int)v41 >= 6 )
              v42 = v26[22312];
            else
              v42 = (int)(float)((float)((float)((float)(int)dword_140404A6C[6 * v41 + 335047064] * 0.1)
                                       * (float)(int)v26[22328])
                               + (float)(int)v26[22312]);
            v26[22318] = v42;
            dword_140404A6C[2 * dword_140404A6C[346695797] + 346695799] = v42;
            v24 = ++dword_140404A6C[346695797];
          }
        }
      }
      v25 += 8;
      v26 += 28776;
    }
    while ( (int)(v25 - 2) < 256 );
    dword_140404A6C[436668493] = v24;
    v43 = 0;
    v44 = 0;
    if ( v24 >= 8 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_140279890);
      do
      {
        v43 += 8;
        v46 = _mm_cvtsi32_si128(dword_140404A6C[2 * v44 + 346695813]);
        v47 = _mm_cvtsi32_si128(dword_140404A6C[2 * v44 + 346695811]);
        v48 = _mm_cvtsi32_si128(dword_140404A6C[2 * v44 + 346695807]);
        *(__m128i *)&dword_140404A6C[v44 + 437192782] = _mm_sub_epi32(
                                                          si128,
                                                          _mm_unpacklo_epi64(
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v44 + 346695799]),
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v44 + 346695801])),
                                                            _mm_unpacklo_epi32(
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v44 + 346695803]),
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v44 + 346695805]))));
        *(__m128i *)&dword_140404A6C[v44 + 437192786] = _mm_sub_epi32(
                                                          si128,
                                                          _mm_unpacklo_epi64(
                                                            _mm_unpacklo_epi32(
                                                              v48,
                                                              _mm_cvtsi32_si128(dword_140404A6C[2 * v44 + 346695809])),
                                                            _mm_unpacklo_epi32(v47, v46)));
        v44 += 8;
      }
      while ( v44 < v24 - (v24 & 7) );
    }
    if ( v43 < v24 )
    {
      v49 = &dword_140404A6C[v44 + 437192782];
      v50 = (_DWORD *)(0x140000000LL + 8 * v44 + 1390996552);
      v51 = (unsigned int)(v24 - v43);
      do
      {
        ++v49;
        v52 = -1879048193 - *v50;
        v50 += 2;
        *(v49 - 1) = v52;
        --v51;
      }
      while ( v51 );
    }
    sub_14007D710();
    dword_140404A6C[438291413] = 2;
    v53 = 0;
    if ( v24 > 0 )
    {
      v54 = &dword_140404A6C[436668494];
      v56 = v17;
      v55 = v17;
      *(float *)v56.m128i_i32 = *(float *)v17.m128i_i32 + 24.0;
      do
      {
        v57 = dword_140404A6C[2 * *v54 + 346695798];
        if ( (unsigned int)v57 > 0xFF )
          v57 = 0;
        if ( dword_140404A6C[283831448] != 2 )
        {
          v70 = 1065353216;
          v69 = 1065353216;
          v68 = 1065353216;
          v67 = 1.0;
          v66 = 0.0;
          v65 = 24.0;
          v64 = 24.0;
          if ( dword_140404A6C[v57 + 284023074] )
            v58 = dword_140404A6C[346696312];
          else
            v58 = dword_140404A6C[3597 * (unsigned int)v57 + 71856270]
                ? dword_140404A6C[346696311]
                : dword_140404A6C[346696310];
          sub_14006D300(
            0,
            v58,
            *(float *)v17.m128i_i32,
            *(float *)v23.m128i_i32,
            v64,
            v65,
            SLOBYTE(v66),
            SLODWORD(v67),
            v68,
            v69,
            v70);
          if ( (_DWORD)v57 != dword_140404A6C[284024501]
            && dword_140404A6C[284024633]
            && !dword_140404A6C[346696313]
            && *(float *)&dword_140404A6C[284024597] >= *(float *)v17.m128i_i32
            && *(float *)&dword_140404A6C[284024597] < *(float *)v56.m128i_i32
            && *(float *)&dword_140404A6C[284024598] >= *(float *)v23.m128i_i32
            && *(float *)&dword_140404A6C[284024598] < (float)(*(float *)v23.m128i_i32 + 24.0) )
          {
            sub_140117820((unsigned int)v57);
          }
        }
        v59 = 1.0;
        if ( dword_140404A6C[283831448] == 1 && !dword_140404A6C[3597 * (unsigned int)v57 + 71856271] )
          v59 = 0.5;
        v68 = 1065353216;
        v60 = 3597LL * (unsigned int)v57;
        v67 = v16 * v59;
        v66 = v15 * v59;
        v65 = v71 * v59;
        sub_14006D930(
          &dword_140404A6C[v60 + 71856254],
          (unsigned int)_mm_cvtsi128_si32(v56),
          (unsigned int)_mm_cvtsi128_si32(v23),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x418C0000u),
          96);
        sub_140158AB0(
          v74,
          "%03d-%04d",
          dword_140404A6C[v60 + 71856265] / 0x2710,
          dword_140404A6C[v60 + 71856265] % 0x2710);
        v68 = 1065353216;
        v61 = v23;
        *(float *)v61.m128i_i32 = *(float *)v23.m128i_i32 + 18.0;
        v65 = v71 * v59;
        sub_14006D930(
          v74,
          (unsigned int)_mm_cvtsi128_si32(v56),
          (unsigned int)_mm_cvtsi128_si32(v61),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41200000u),
          96);
        v16 = v72;
        v15 = v73;
        v69 = dword_140404A6C[v60 + 71856278];
        v68 = 1065353216;
        v67 = v72;
        v66 = v73;
        v65 = v71;
        *(float *)v55.m128i_i32 = *(float *)v17.m128i_i32 + 240.0;
        sub_14006D930(
          "$/I",
          (unsigned int)_mm_cvtsi128_si32(v55),
          (unsigned int)_mm_cvtsi128_si32(v23),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x418C0000u),
          34);
        ++v53;
        *(float *)v23.m128i_i32 = *(float *)v23.m128i_i32 + 24.0;
        ++v54;
      }
      while ( v53 < (int)dword_140404A6C[346695797] );
      v13 = (__m128i)0x418C0000u;
    }
    ++v11;
    ++v12;
    v10 = (__m128i)0x42A00000u;
    dword_140404A6C[438291413] = 0;
  }
  while ( v11 < 4 );
  dword_140404A6C[346696313] = dword_140404A6C[284024633];
  return MEMORY[0x1401F8B20]((unsigned __int64)&v63 ^ v75);
}

