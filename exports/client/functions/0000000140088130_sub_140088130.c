/* Address: 0x140088130 | Name: sub_140088130 | Size: 2764 bytes */
unsigned int *__fastcall sub_140088130(int a1)
{
  int v1; // r12d
  int v2; // r14d
  __int64 v3; // rbx
  int v4; // ecx
  int v5; // r8d
  unsigned int *v6; // rdx
  __int64 v7; // rax
  float v8; // xmm12_4
  __int64 v9; // r8
  unsigned int v10; // ecx
  unsigned int *v11; // rsi
  unsigned int *v12; // rbp
  unsigned int *v13; // rbx
  int v14; // r15d
  unsigned int *v15; // rdi
  float v16; // xmm7_4
  unsigned __int64 v17; // rcx
  float v18; // xmm2_4
  float v19; // xmm3_4
  int v20; // ebx
  float v21; // xmm7_4
  unsigned __int64 v22; // rcx
  float v23; // xmm2_4
  float v24; // xmm3_4
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned int *v27; // rbx
  __int64 v28; // rax
  float v29; // xmm6_4
  __int64 v30; // rcx
  int v31; // edi
  float *v32; // rbx
  float v33; // xmm6_4
  __int64 v34; // rcx
  signed int v35; // edx
  unsigned int v36; // r8d
  int v37; // r9d
  signed int v38; // edi
  unsigned int *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __m128i v42; // xmm1
  __m128i v43; // xmm2
  __m128i v44; // xmm0
  unsigned int *v45; // rbx
  int v46; // eax
  __m128i v47; // xmm6
  __m128i v48; // xmm7
  unsigned int *result; // rax
  unsigned int v50; // [rsp+20h] [rbp-138h]
  unsigned int v51; // [rsp+20h] [rbp-138h]
  unsigned int v52; // [rsp+28h] [rbp-130h]
  unsigned int v53; // [rsp+28h] [rbp-130h]
  int v54; // [rsp+50h] [rbp-108h] BYREF
  __int64 v55; // [rsp+54h] [rbp-104h]
  __int64 v56; // [rsp+60h] [rbp-F8h] BYREF
  int v57; // [rsp+68h] [rbp-F0h]
  unsigned int v58; // [rsp+6Ch] [rbp-ECh]
  int v59; // [rsp+70h] [rbp-E8h]
  unsigned int v60; // [rsp+74h] [rbp-E4h]
  __int64 v61; // [rsp+78h] [rbp-E0h]
  int v62; // [rsp+80h] [rbp-D8h]

  v1 = a1;
  v56 = 1065353216;
  v57 = 0;
  v61 = 0;
  v62 = 1065353216;
  v59 = -1082130432;
  v55 = 1124073472;
  v58 = 0x80000000;
  v60 = 0x80000000;
  v54 = 1124073472;
  if ( !dword_140404A6C[284024893] )
  {
    v54 = 1123024896;
    LODWORD(v55) = 1123024896;
  }
  v2 = 0;
  v3 = 256;
  if ( dword_140404A6C[284021985] )
  {
    v4 = 0;
    v5 = 512;
  }
  else
  {
    v4 = 768;
    v5 = 256;
  }
  sub_14007A2C0(v4, 0, v5, v5, 128.0, 128.0, 512.0);
  sub_14007BE20((float *)&v54, (unsigned int *)&v56);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2884);
  v6 = &dword_140404A6C[71856286];
  dword_140404A6C[283831506] = 0;
  dword_140404A6C[283837379] = 0;
  dword_140404A6C[283843252] = 0;
  dword_140404A6C[283849125] = 0;
  dword_140404A6C[283854998] = 0;
  dword_140404A6C[283860871] = 0;
  dword_140404A6C[283866744] = 0;
  dword_140404A6C[283872617] = 0;
  do
  {
    if ( *(v6 - 33) )
    {
      v7 = (int)*v6;
      if ( (unsigned int)v7 <= 5 )
        ++dword_140404A6C[5873 * v7 + 283831506];
    }
    v6 += 3597;
    --v3;
  }
  while ( v3 );
  v8 = 0.25;
  if ( !dword_140404A6C[284024893] )
    v8 = 0.125;
  unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830700] + 284024944]);
  sub_14006CFF0(0.0, 0.0, v9, 256.0, 0, 1065353216, 1065353216, 1065353216, 1061158912);
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215103])(2848);
  (*(void (**)(void))&dword_140404A6C[18215065])();
  v10 = dword_140404A6C[283831312];
  v11 = (unsigned int *)&dword_1402B2834;
  v12 = &dword_140404A6C[283831485];
  if ( dword_140404A6C[283831312] == 4 )
  {
    v13 = (unsigned int *)&dword_1402B2834;
    v14 = 0;
    v15 = &dword_140404A6C[283831485];
    while ( 1 )
    {
      v16 = (float)((float)((float)(*((float *)v15 + 5) + *((float *)v15 + 2)) * 0.5)
                  - *(float *)&dword_140404A6C[282486848])
          * v8;
      unk_140404050(3553, dword_140404A6C[451221642]);
      v18 = 16.0;
      if ( dword_140404A6C[283831312] == 4 )
      {
        sub_140081DA0(v17, v16, 16.0, *((float *)v13 - 1), *v13, v13[1], 0x3F800000u);
        if ( dword_140404A6C[284024501] != -1 )
        {
          v17 = 14388LL * (int)dword_140404A6C[284024501];
          if ( v14 == dword_140404A6C[v17 / 4 + 71856286] )
            sub_140081DA0(v17, v16, 8.0, *((float *)v13 - 1), *v13, v13[1], 0x3F800000u);
        }
        if ( (int)v15[21] <= 0 )
          goto LABEL_23;
        v19 = *((float *)v13 - 1);
        v52 = v13[1];
        v50 = *v13;
        v18 = 12.0;
      }
      else
      {
        v52 = 1065353216;
        v19 = 1.0;
        v50 = 1065353216;
      }
      sub_140081DA0(v17, v16, v18, v19, v50, v52, 0x3F800000u);
LABEL_23:
      ++v14;
      v15 += 5873;
      v13 += 3;
      if ( (__int64)v15 >= (__int64)&dword_140404A6C[283866723] )
      {
        v10 = dword_140404A6C[283831312];
        v1 = a1;
        break;
      }
    }
  }
  if ( ((v10 - 3) & 0xFFFFFFFD) != 0 )
    goto LABEL_35;
  v20 = 0;
  do
  {
    v21 = (float)((float)((float)(*((float *)v12 + 5) + *((float *)v12 + 2)) * 0.5)
                - *(float *)&dword_140404A6C[282486848])
        * 0.25;
    unk_140404050(3553, dword_140404A6C[451221642]);
    v23 = 16.0;
    if ( dword_140404A6C[283831312] != 3 )
    {
      v53 = 1065353216;
      v24 = 1.0;
      v51 = 1065353216;
      goto LABEL_32;
    }
    sub_140081DA0(v22, v21, 16.0, *((float *)v11 - 1), *v11, v11[1], 0x3F800000u);
    if ( dword_140404A6C[284024501] != -1 )
    {
      v22 = 14388LL * (int)dword_140404A6C[284024501];
      if ( v20 == dword_140404A6C[v22 / 4 + 71856286] )
      {
        v23 = 14.0;
        v24 = *((float *)v11 - 1);
        v53 = v11[1];
        v51 = *v11;
LABEL_32:
        sub_140081DA0(v22, v21, v23, v24, v51, v53, 0x3F800000u);
      }
    }
    ++v20;
    v12 += 5873;
    v11 += 3;
  }
  while ( (__int64)v12 < (__int64)&dword_140404A6C[283849104] );
  v10 = dword_140404A6C[283831312];
LABEL_35:
  if ( v10 == 3 )
  {
    if ( dword_140404A6C[284024501] != -1 )
    {
      v25 = (int)dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286];
      if ( (_DWORD)v25 != -1 )
      {
        v26 = 16;
        v27 = &dword_140404A6C[5873 * v25 + 283831591];
        do
        {
          if ( *(v27 - 3) )
          {
            if ( *v27 == 2 )
            {
              v28 = (int)v27[15];
              if ( (_DWORD)v28 != -1 )
              {
                v29 = *(float *)&dword_140404A6C[19 * v28 + 487148758] - *(float *)&dword_140404A6C[282486848];
                unk_140404050(3553, dword_140404A6C[451221642]);
                sub_140081DA0(v30, v29 * 0.25, 8.0, 0.0, 0x3F800000u, 0, 0x3F800000u);
              }
            }
          }
          v27 += 279;
          --v26;
        }
        while ( v26 );
        v10 = dword_140404A6C[283831312];
        goto LABEL_45;
      }
    }
  }
  else
  {
LABEL_45:
    if ( v10 == 5 )
    {
      v31 = 0;
      if ( (int)dword_140404A6C[487148755] > 0 )
      {
        v32 = (float *)&dword_140404A6C[487148758];
        do
        {
          v33 = *v32 - *(float *)&dword_140404A6C[282486848];
          unk_140404050(3553, dword_140404A6C[451221642]);
          sub_140081DA0(v34, v33 * 0.25, 8.0, 0.75, 0x3F400000u, 0x3F400000u, 0x3F800000u);
          ++v31;
          v32 += 19;
        }
        while ( v31 < (int)dword_140404A6C[487148755] );
      }
    }
  }
  (*(void (**)(void))&dword_140404A6C[18215065])();
  (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2848);
  if ( dword_140404A6C[284024893] )
    goto LABEL_69;
  v35 = dword_140404A6C[225426046];
  v38 = 0;
  if ( (int)dword_140404A6C[225426046] <= 0 )
  {
LABEL_62:
    if ( (int)dword_140404A6C[225641186] > 0 )
    {
      v45 = &dword_140404A6C[225641222];
      do
      {
        v47 = (__m128i)*(v45 - 3);
        v48 = (__m128i)v45[2];
        v46 = *(v45 - 19);
        *(float *)v47.m128i_i32 = (float)((float)((float)(*(float *)v47.m128i_i32 + *(float *)v45) * 0.5)
                                        - *(float *)&dword_140404A6C[282486846])
                                * v8;
        *(float *)v48.m128i_i32 = (float)((float)((float)(*(float *)v48.m128i_i32 + *((float *)v45 - 1)) * 0.5)
                                        - *(float *)&dword_140404A6C[282486848])
                                * v8;
        if ( v46 == 1 )
        {
          sub_14006D930(
            off_1402B2890[v45[103]],
            (unsigned int)_mm_cvtsi128_si32(v47),
            (unsigned int)_mm_cvtsi128_si32(v48),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x40C00000u),
            5);
          v46 = *(v45 - 19);
        }
        if ( v46 == 6 )
          sub_14006D930(
            &unk_140275B90,
            (unsigned int)_mm_cvtsi128_si32(v47),
            (unsigned int)_mm_cvtsi128_si32(v48),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41100000u),
            5);
        ++v2;
        v45 += 14019;
      }
      while ( v2 < (int)dword_140404A6C[225641186] );
    }
    goto LABEL_69;
  }
  v39 = &dword_140404A6C[225426056];
  while ( 2 )
  {
    v36 = v39[2];
    if ( v36 )
    {
      if ( v36 != 1 || dword_140404A6C[34 * *v39 + 225391232] - 320 <= 3 )
      {
LABEL_57:
        v40 = 34LL * (int)v39[1];
        v41 = 34LL * (int)*v39;
        v42 = (__m128i)COERCE_UNSIGNED_INT((float)(int)(dword_140404A6C[v41 + 225391230]
                                                      + dword_140404A6C[v40 + 225391230]));
        v43 = (__m128i)COERCE_UNSIGNED_INT((float)(int)(dword_140404A6C[v41 + 225391232]
                                                      + dword_140404A6C[v40 + 225391232]));
        *(float *)v42.m128i_i32 = (float)((float)(*(float *)v42.m128i_i32 + *(float *)v42.m128i_i32)
                                        - *(float *)&dword_140404A6C[282486846])
                                * v8;
        *(float *)v43.m128i_i32 = (float)((float)(*(float *)v43.m128i_i32 + *(float *)v43.m128i_i32)
                                        - *(float *)&dword_140404A6C[282486848])
                                * v8;
        if ( v36 == 1 )
        {
          v44 = (__m128i)COERCE_UNSIGNED_INT((float)(((int)(dword_140404A6C[v41 + 225391230] - 256) / 56) & 1));
          *(float *)v44.m128i_i32 = (float)(*(float *)v44.m128i_i32 * 16.0) + *(float *)v43.m128i_i32;
          v43 = v44;
        }
        sub_14006D930(
          &dword_140404A6C[396 * v38 + 225426047],
          (unsigned int)_mm_cvtsi128_si32(v42),
          (unsigned int)_mm_cvtsi128_si32(v43),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x40C00000u),
          5);
        v35 = dword_140404A6C[225426046];
      }
    }
    else if ( dword_140404A6C[34 * *v39 + 225391238] == -1 )
    {
      goto LABEL_57;
    }
    ++v38;
    v39 += 396;
    if ( v38 < v35 )
      continue;
    break;
  }
  if ( !dword_140404A6C[284024893] )
    goto LABEL_62;
LABEL_69:
  if ( v1 != -1 )
    sub_1400891B0(28664 * v1, v35, v36, v37, 1065353216, 1065353216, 1061158912, dword_140404A6C[7166 * v1 + 280651341]);
  result = sub_14007BB00();
  if ( dword_140404A6C[284021985] )
    return (unsigned int *)sub_14006D930(
                             "Press C to toggle map",
                             (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
                             (unsigned int)_mm_cvtsi128_si32((__m128i)0LL),
                             (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
                             1);
  return result;
}

