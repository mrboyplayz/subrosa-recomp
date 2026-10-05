/* Address: 0x14018b680 | Name: sub_14018B680 | Size: 3020 bytes */
void sub_14018B680()
{
  int v0; // edi
  __int64 v1; // rcx
  unsigned int *v2; // rax
  signed int v3; // ebp
  signed int v4; // r15d
  int v5; // esi
  __int64 v6; // r14
  __int64 v7; // rbx
  __m128 v8; // xmm0
  float v9; // xmm1_4
  float v10; // xmm6_4
  unsigned int v11; // xmm5_4
  __int64 v12; // rax
  float v13; // xmm8_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  unsigned int v16; // xmm3_4
  unsigned int v17; // xmm2_4
  float v18; // xmm10_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm4_4
  float v22; // xmm1_4
  float v23; // xmm9_4
  float v24; // xmm7_4
  float v25; // xmm0_4
  float v26; // xmm11_4
  float v27; // xmm1_4
  float v28; // xmm4_4
  float v29; // xmm0_4
  unsigned int v30; // xmm11_4
  unsigned int v31; // xmm4_4
  unsigned int v32; // xmm1_4
  __int64 v33; // rdx
  float v34; // xmm0_4
  __int64 v35; // rcx
  float v36; // xmm0_4
  float v37; // xmm0_4
  signed int v38; // ecx
  float *v39; // rax
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  float *v43; // rax
  float v44; // xmm0_4
  float v45; // xmm0_4
  __int64 v46; // rdx
  float v47; // xmm4_4
  float v48; // xmm5_4
  float v49; // xmm7_4
  float *v50; // rcx
  float v51; // xmm6_4
  float v52; // xmm8_4
  float v53; // xmm9_4
  bool v54; // cc
  float v55; // xmm6_4
  float v56; // xmm2_4
  float v57; // xmm3_4
  float v58; // xmm2_4
  float v59; // xmm3_4
  float v60; // xmm2_4
  float v61; // xmm1_4
  float v62; // xmm11_4
  float v63; // xmm7_4
  float v64; // xmm10_4
  float v65; // xmm0_4
  float v66; // xmm6_4
  float v67; // xmm8_4
  float v68; // xmm9_4
  __int64 v69; // rcx
  __int64 v70; // rcx
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm10_4
  float v74; // xmm0_4
  float v75; // xmm6_4
  float v76; // xmm8_4
  float v77; // xmm9_4
  float v78; // xmm11_4
  float v79; // xmm7_4
  int v80; // r8d
  unsigned int v81; // edx
  __int64 v82; // r11
  __int64 v83; // r10
  int v84; // r9d
  float *v85; // rax
  float v86; // xmm6_4
  float v87; // xmm7_4
  float v88; // xmm8_4
  float v89; // xmm3_4
  float v90; // xmm4_4
  float v91; // xmm5_4
  __int64 v92; // rax

  v0 = dword_140404A6C[225426046];
  v1 = 0;
  if ( (int)dword_140404A6C[225426046] > 0 )
  {
    v2 = &dword_140404A6C[225426186];
    do
    {
      *v2 = 0;
      v2 += 396;
      v0 = dword_140404A6C[225426046];
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (int)v1 < (int)dword_140404A6C[225426046] );
  }
  if ( !dword_140404A6C[179992046] )
  {
    v3 = 0;
    v4 = dword_140404A6C[132792829];
    if ( (int)dword_140404A6C[132792829] > 0 )
    {
      v5 = dword_140404A6C[225391228];
      v6 = 0;
      do
      {
        v7 = 383 * v6;
        v8 = (__m128)dword_140404A6C[383 * v6 + 132400647];
        *(double *)v8.m128_u64 = MEMORY[0x1401F8AC0](v1);
        v9 = *(float *)&dword_140404A6C[383 * v6 + 132400659];
        v10 = v8.m128_f32[0];
        v11 = dword_140404A6C[383 * v6 + 132400642];
        v12 = 383 * v6;
        v13 = _mm_shuffle_ps(v8, v8, 1).m128_f32[0];
        v14 = v8.m128_f32[0];
        v8.m128_i32[0] = dword_140404A6C[383 * v6 + 132400643];
        v15 = (float)(v13 * v9) + *(float *)&dword_140404A6C[383 * v6 + 132400641];
        dword_140404A6C[v12 + 132400663] = v11;
        dword_140404A6C[v12 + 132400666] = v11;
        *(float *)&v16 = v15 + v10;
        *(float *)&v17 = (float)((float)(v14 * v9) + v8.m128_f32[0]) - v13;
        dword_140404A6C[v12 + 132400662] = v16;
        v18 = *(float *)&v16;
        dword_140404A6C[v12 + 132400665] = v16;
        dword_140404A6C[v12 + 132400664] = v17;
        dword_140404A6C[v12 + 132400667] = v17;
        v19 = *(float *)&dword_140404A6C[383 * v6 + 132400659];
        v20 = *(float *)&dword_140404A6C[383 * v6 + 132400642];
        v21 = (float)((float)(v13 * v19) + *(float *)&dword_140404A6C[383 * v6 + 132400641]) - v10;
        v22 = (float)((float)(v10 * v19) + *(float *)&dword_140404A6C[383 * v6 + 132400643]) + v13;
        if ( *(float *)&v16 > v21 )
          v18 = (float)((float)(v13 * v19) + *(float *)&dword_140404A6C[383 * v6 + 132400641]) - v10;
        *(float *)&dword_140404A6C[v12 + 132400662] = v18;
        if ( *(float *)&v16 < v21 )
          *(float *)&v16 = v21;
        dword_140404A6C[v12 + 132400665] = v16;
        v23 = *(float *)&v11;
        if ( *(float *)&v11 > v20 )
          v23 = v20;
        *(float *)&dword_140404A6C[v12 + 132400663] = v23;
        if ( *(float *)&v11 < v20 )
          *(float *)&v11 = v20;
        dword_140404A6C[v12 + 132400666] = v11;
        v24 = *(float *)&v17;
        if ( *(float *)&v17 > v22 )
          v24 = v22;
        *(float *)&dword_140404A6C[v12 + 132400664] = v24;
        if ( *(float *)&v17 < v22 )
          *(float *)&v17 = v22;
        dword_140404A6C[v12 + 132400667] = v17;
        v25 = *(float *)&dword_140404A6C[v7 + 132400660];
        v26 = *(float *)&dword_140404A6C[v7 + 132400642];
        v27 = (float)((float)(v13 * v25) + *(float *)&dword_140404A6C[v7 + 132400641]) - v10;
        v28 = (float)((float)(v10 * v25) + *(float *)&dword_140404A6C[v7 + 132400643]) + v13;
        if ( v18 > v27 )
          v18 = (float)((float)(v13 * v25) + *(float *)&dword_140404A6C[v7 + 132400641]) - v10;
        *(float *)&dword_140404A6C[v12 + 132400662] = v18;
        if ( *(float *)&v16 < v27 )
          *(float *)&v16 = v27;
        dword_140404A6C[v12 + 132400665] = v16;
        if ( v23 > v26 )
          v23 = v26;
        *(float *)&dword_140404A6C[v12 + 132400663] = v23;
        if ( *(float *)&v11 < v26 )
          *(float *)&v11 = v26;
        dword_140404A6C[v12 + 132400666] = v11;
        if ( v24 > v28 )
          v24 = v28;
        *(float *)&dword_140404A6C[v12 + 132400664] = v24;
        if ( *(float *)&v17 < v28 )
          *(float *)&v17 = v28;
        dword_140404A6C[v12 + 132400667] = v17;
        v29 = *(float *)&dword_140404A6C[v7 + 132400660];
        v30 = dword_140404A6C[v7 + 132400642];
        *(float *)&v31 = (float)((float)(v13 * v29) + *(float *)&dword_140404A6C[v7 + 132400641]) + v10;
        *(float *)&v32 = (float)((float)(v10 * v29) + *(float *)&dword_140404A6C[v7 + 132400643]) - v13;
        if ( v18 > *(float *)&v31 )
          dword_140404A6C[v12 + 132400662] = v31;
        if ( *(float *)&v16 < *(float *)&v31 )
          dword_140404A6C[v12 + 132400665] = v31;
        if ( v23 > *(float *)&v30 )
          dword_140404A6C[v12 + 132400663] = v30;
        if ( *(float *)&v11 < *(float *)&v30 )
          dword_140404A6C[v12 + 132400666] = v30;
        if ( v24 > *(float *)&v32 )
          dword_140404A6C[v12 + 132400664] = v32;
        if ( *(float *)&v17 < *(float *)&v32 )
          dword_140404A6C[v12 + 132400667] = v32;
        v33 = (int)dword_140404A6C[v7 + 132401002];
        if ( (_DWORD)v33 == -1
          || (v34 = *(float *)&dword_140404A6C[v7 + 132400641],
              v35 = 396 * v33,
              v34 < *(float *)&dword_140404A6C[396 * v33 + 225426180])
          || v34 > *(float *)&dword_140404A6C[v35 + 225426183]
          || (v36 = *(float *)&dword_140404A6C[v7 + 132400643], v36 < *(float *)&dword_140404A6C[v35 + 225426182])
          || v36 > *(float *)&dword_140404A6C[v35 + 225426185]
          || (v37 = *(float *)&dword_140404A6C[v7 + 132400642], v37 < *(float *)&dword_140404A6C[v35 + 225426181])
          || v37 > *(float *)&dword_140404A6C[v35 + 225426184] )
        {
          LODWORD(v33) = -1;
          v38 = 0;
          dword_140404A6C[v7 + 132401002] = -1;
          if ( v0 > 0 )
          {
            v39 = (float *)&dword_140404A6C[225426183];
            do
            {
              v40 = *(float *)&dword_140404A6C[v7 + 132400641];
              if ( v40 >= *(v39 - 3) && v40 <= *v39 )
              {
                v41 = *(float *)&dword_140404A6C[v7 + 132400643];
                if ( v41 >= *(v39 - 1) && v41 <= v39[2] )
                {
                  v42 = *(float *)&dword_140404A6C[v7 + 132400642];
                  if ( v42 >= *(v39 - 2) && v42 <= v39[1] )
                  {
                    LODWORD(v33) = v38;
                    dword_140404A6C[v7 + 132401002] = v38;
                  }
                }
              }
              ++v38;
              v39 += 396;
            }
            while ( v38 < v0 );
          }
        }
        dword_140404A6C[v7 + 132401003] = -1;
        v1 = 0;
        if ( v5 > 0 )
        {
          v43 = (float *)&dword_140404A6C[225391261];
          do
          {
            v44 = *(float *)&dword_140404A6C[v7 + 132400641];
            if ( v44 >= *(v43 - 3) && v44 <= *v43 )
            {
              v45 = *(float *)&dword_140404A6C[v7 + 132400643];
              if ( v45 >= *(v43 - 1) && v45 <= v43[2] )
                dword_140404A6C[v7 + 132401003] = v1;
            }
            v1 = (unsigned int)(v1 + 1);
            v43 += 34;
          }
          while ( (int)v1 < v5 );
        }
        if ( (_DWORD)v33 == -1 )
          goto LABEL_87;
        v46 = 396LL * (int)v33;
        v47 = *(float *)&dword_140404A6C[v46 + 225426174];
        v48 = *(float *)&dword_140404A6C[v46 + 225426176];
        v49 = *(float *)&dword_140404A6C[v46 + 225426175];
        v50 = (float *)&dword_140404A6C[34 * dword_140404A6C[v46 + 225426056] + 225391233];
        v51 = (float)(v10 * v48) + (float)(v13 * v47);
        v52 = v50[1];
        v53 = v50[2];
        v54 = v51 <= 0.0;
        v55 = *v50;
        v56 = (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 132400663] - v52) * v49)
                    + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400662] - *v50) * v47))
            + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400664] - v53) * v48);
        v57 = (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 132400666] - v52) * v49)
                    + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400665] - *v50) * v47))
            + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400667] - v53) * v48);
        if ( v54 )
        {
          if ( v56 >= v57 )
            v56 = (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 132400666] - v52) * v49)
                        + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400665] - *v50) * v47))
                + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400667] - v53) * v48);
          *(float *)&dword_140404A6C[v7 + 132401004] = v56;
          v58 = (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 132400663] - v52) * v49)
                      + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400662] - v55) * v47))
              + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400664] - v53) * v48);
          v59 = (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 132400666] - v52) * v49)
                      + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400665] - v55) * v47))
              + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400667] - v53) * v48);
          if ( v58 > v59 )
            goto LABEL_78;
        }
        else
        {
          if ( v56 <= v57 )
            v56 = (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 132400666] - v52) * v49)
                        + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400665] - *v50) * v47))
                + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400667] - v53) * v48);
          *(float *)&dword_140404A6C[v7 + 132401004] = v56;
          v58 = (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 132400663] - v52) * v49)
                      + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400662] - v55) * v47))
              + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400664] - v53) * v48);
          v59 = (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 132400666] - v52) * v49)
                      + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400665] - v55) * v47))
              + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400667] - v53) * v48);
          if ( v58 < v59 )
            goto LABEL_78;
        }
        v58 = v59;
LABEL_78:
        *(float *)&dword_140404A6C[v7 + 132401005] = v58;
        v60 = *(float *)&dword_140404A6C[v46 + 225426063];
        v61 = *(float *)&dword_140404A6C[v46 + 225426064];
        v62 = *(float *)&dword_140404A6C[v7 + 132400662] - v60;
        v63 = *(float *)&dword_140404A6C[v7 + 132400663] - v61;
        v64 = *(float *)&dword_140404A6C[v7 + 132400665] - v60;
        v65 = *(float *)&dword_140404A6C[v46 + 225426065];
        v66 = *(float *)&dword_140404A6C[v7 + 132400666] - v61;
        v67 = *(float *)&dword_140404A6C[v7 + 132400664] - v65;
        v68 = *(float *)&dword_140404A6C[v7 + 132400667] - v65;
        *(float *)&dword_140404A6C[v7 + 132401006] = fmaxf(
                                                       (float)((float)(*(float *)&dword_140404A6C[v46 + 225426175] * v66)
                                                             + (float)(*(float *)&dword_140404A6C[v46 + 225426174] * v64))
                                                     + (float)(*(float *)&dword_140404A6C[v46 + 225426176] * v68),
                                                       (float)((float)(*(float *)&dword_140404A6C[v46 + 225426175] * v63)
                                                             + (float)(*(float *)&dword_140404A6C[v46 + 225426174] * v62))
                                                     + (float)(*(float *)&dword_140404A6C[v46 + 225426176] * v67));
        v69 = 396LL * (int)dword_140404A6C[v7 + 132401002];
        *(float *)&dword_140404A6C[v7 + 132401008] = fminf(
                                                       (float)((float)(*(float *)&dword_140404A6C[v69 + 225426175] * v63)
                                                             + (float)(*(float *)&dword_140404A6C[v69 + 225426174] * v62))
                                                     + (float)(*(float *)&dword_140404A6C[v69 + 225426176] * v67),
                                                       (float)((float)(*(float *)&dword_140404A6C[v69 + 225426175] * v66)
                                                             + (float)(*(float *)&dword_140404A6C[v69 + 225426174] * v64))
                                                     + (float)(*(float *)&dword_140404A6C[v69 + 225426176] * v68));
        v70 = 396LL * (int)dword_140404A6C[v7 + 132401002];
        v71 = *(float *)&dword_140404A6C[v70 + 225426066];
        v72 = *(float *)&dword_140404A6C[v70 + 225426067];
        v73 = *(float *)&dword_140404A6C[v7 + 132400665] - v71;
        v74 = *(float *)&dword_140404A6C[v70 + 225426068];
        v75 = *(float *)&dword_140404A6C[v7 + 132400666] - v72;
        v76 = *(float *)&dword_140404A6C[v7 + 132400664] - v74;
        v77 = *(float *)&dword_140404A6C[v7 + 132400667] - v74;
        v78 = *(float *)&dword_140404A6C[v7 + 132400662] - v71;
        v79 = *(float *)&dword_140404A6C[v7 + 132400663] - v72;
        v80 = 0;
        *(float *)&dword_140404A6C[v7 + 132401007] = -fminf(
                                                        (float)((float)(*(float *)&dword_140404A6C[v70 + 225426175] * v75)
                                                              + (float)(*(float *)&dword_140404A6C[v70 + 225426174] * v73))
                                                      + (float)(*(float *)&dword_140404A6C[v70 + 225426176] * v77),
                                                        (float)((float)(*(float *)&dword_140404A6C[v70 + 225426175] * v79)
                                                              + (float)(*(float *)&dword_140404A6C[v70 + 225426174] * v78))
                                                      + (float)(*(float *)&dword_140404A6C[v70 + 225426176] * v76));
        v1 = 1584LL * (int)dword_140404A6C[v7 + 132401002];
        v81 = 0;
        *(float *)&dword_140404A6C[v7 + 132401009] = -fmaxf(
                                                        (float)((float)(*(float *)((char *)&dword_140404A6C[225426175]
                                                                                 + v1)
                                                                      * v79)
                                                              + (float)(*(float *)((char *)&dword_140404A6C[225426174]
                                                                                 + v1)
                                                                      * v78))
                                                      + (float)(*(float *)((char *)&dword_140404A6C[225426176] + v1)
                                                              * v76),
                                                        (float)((float)(*(float *)((char *)&dword_140404A6C[225426175]
                                                                                 + v1)
                                                                      * v75)
                                                              + (float)(*(float *)((char *)&dword_140404A6C[225426174]
                                                                                 + v1)
                                                                      * v73))
                                                      + (float)(*(float *)((char *)&dword_140404A6C[225426176] + v1)
                                                              * v77));
        v82 = (int)dword_140404A6C[v7 + 132401002];
        v83 = 396 * v82;
        dword_140404A6C[v7 + 132401010] = 0;
        v84 = dword_140404A6C[396 * v82 + 225426061];
        if ( v84 > 0 )
        {
          v1 = 1584LL * (int)dword_140404A6C[v7 + 132401002];
          v85 = (float *)((char *)&dword_140404A6C[225426065] + v1);
          v86 = *(float *)((char *)&dword_140404A6C[225426178] + v1);
          v87 = *(float *)((char *)&dword_140404A6C[225426177] + v1);
          v88 = *(float *)((char *)&dword_140404A6C[225426179] + v1);
          do
          {
            v89 = *(v85 - 2);
            v90 = *(v85 - 1);
            v91 = *v85;
            if ( fabs(
                   (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 132400663] - v90) * v86)
                         + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400662] - v89) * v87))
                 + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400664] - *v85) * v88)) < 2.0 )
            {
              v81 |= 1 << v80;
              dword_140404A6C[v7 + 132401010] = v81;
            }
            if ( fabs(
                   (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 132400665] - v89) * v87)
                         + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400666] - v90) * v86))
                 + (float)((float)(*(float *)&dword_140404A6C[v7 + 132400667] - v91) * v88)) < 2.0 )
            {
              v81 |= 1 << v80;
              dword_140404A6C[v7 + 132401010] = v81;
            }
            ++v80;
            v85 += 7;
          }
          while ( v80 < v84 );
        }
        v92 = (int)dword_140404A6C[v83 + 225426186];
        if ( (int)v92 < 256 )
        {
          v1 = v92 + 396 * v82;
          dword_140404A6C[v1 + 225426187] = v3;
          ++dword_140404A6C[v83 + 225426186];
          v0 = dword_140404A6C[225426046];
          v5 = dword_140404A6C[225391228];
        }
LABEL_87:
        ++v3;
        ++v6;
      }
      while ( v3 < v4 );
    }
  }
}

