/* Address: 0x140185d00 | Name: sub_140185D00 | Size: 4744 bytes */
__int64 sub_140185D00()
{
  int v0; // r11d
  int v1; // r8d
  unsigned int *v2; // rdx
  __int64 v3; // rax
  int v4; // ecx
  int v5; // eax
  unsigned int *v6; // r12
  int *v7; // rbp
  float *v8; // r14
  int v9; // r15d
  unsigned int *v10; // rdi
  float *v11; // rsi
  unsigned int *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r9
  __int64 v17; // rax
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  float v21; // xmm14_4
  float v22; // xmm8_4
  __int64 v23; // r13
  float v24; // xmm7_4
  __int64 v25; // r10
  float v26; // xmm6_4
  float v27; // xmm9_4
  float v28; // xmm5_4
  float v29; // xmm13_4
  float v30; // xmm7_4
  float v31; // xmm4_4
  float v32; // xmm8_4
  float v33; // xmm1_4
  float v34; // xmm5_4
  float v35; // xmm6_4
  float v36; // xmm0_4
  __int64 v37; // r8
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm4_4
  float v41; // xmm12_4
  float v42; // xmm10_4
  float v43; // xmm9_4
  float v44; // xmm6_4
  float v45; // xmm8_4
  float v46; // xmm7_4
  float v47; // xmm0_4
  float v48; // xmm11_4
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm1_4
  float v52; // xmm0_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm10_4
  float v57; // xmm15_4
  float v58; // xmm11_4
  float v59; // xmm0_4
  float v60; // xmm14_4
  float v61; // xmm8_4
  float v62; // xmm13_4
  float v63; // xmm0_4
  float v64; // xmm12_4
  float v65; // xmm2_4
  float v66; // xmm1_4
  float v67; // xmm7_4
  float v68; // xmm9_4
  float v69; // xmm0_4
  float v70; // xmm1_4
  float v71; // xmm14_4
  float v72; // xmm15_4
  float v73; // xmm3_4
  int v74; // r8d
  unsigned int *v75; // rdx
  __int64 v76; // rax
  __int64 result; // rax
  int v78; // r13d
  unsigned int *v79; // r12
  int *v80; // rbp
  float *v81; // r14
  int v82; // r15d
  unsigned int *v83; // rdi
  float *v84; // rsi
  int *v85; // rbx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // r10
  __int64 v89; // r9
  __int64 v90; // r8
  __int64 v91; // rdx
  float v92; // xmm8_4
  float v93; // xmm4_4
  float v94; // xmm9_4
  __int64 v95; // r9
  __int64 v96; // rax
  float v97; // xmm0_4
  float v98; // xmm10_4
  float v99; // xmm9_4
  float v100; // xmm12_4
  float v101; // xmm8_4
  float v102; // xmm4_4
  float v103; // xmm6_4
  float v104; // xmm5_4
  float v105; // xmm7_4
  float v106; // xmm1_4
  float v107; // xmm8_4
  float v108; // xmm4_4
  float v109; // xmm9_4
  float v110; // xmm1_4
  float v111; // xmm5_4
  float v112; // xmm7_4
  float v113; // xmm6_4
  __int64 v114; // rcx
  float v115; // xmm13_4
  float v116; // xmm11_4
  float v117; // xmm8_4
  float v118; // xmm14_4
  float v119; // xmm4_4
  __int64 v120; // r10
  float v121; // xmm9_4
  float v122; // xmm5_4
  float v123; // xmm7_4
  float v124; // xmm6_4
  float v125; // xmm1_4
  float v126; // xmm8_4
  float v127; // xmm4_4
  float v128; // xmm9_4
  float v129; // xmm1_4
  float v130; // xmm5_4
  float v131; // xmm7_4
  float v132; // xmm6_4
  float v133; // xmm9_4
  float v134; // xmm11_4
  float v135; // xmm12_4
  float v136; // xmm13_4
  float v137; // xmm10_4
  float v138; // xmm11_4
  float v139; // xmm13_4
  float v140; // xmm11_4
  float v141; // xmm14_4
  float v142; // xmm15_4
  __int64 v143; // rax
  float v144; // xmm2_4
  float v145; // xmm1_4
  float v146; // xmm11_4
  float v147; // xmm0_4
  float v148; // xmm5_4
  float v149; // xmm1_4
  float v150; // xmm0_4
  float v151; // xmm14_4
  float v152; // xmm15_4
  int v153; // [rsp+110h] [rbp+8h]
  unsigned int v154; // [rsp+110h] [rbp+8h]
  int v155; // [rsp+118h] [rbp+10h]
  float v156; // [rsp+118h] [rbp+10h]
  float v157; // [rsp+128h] [rbp+20h]

  v0 = dword_140404A6C[70998846];
  v1 = 0;
  if ( (int)dword_140404A6C[70998846] > 0 )
  {
    v2 = &dword_140404A6C[71162687];
    do
    {
      v3 = (int)*(v2 - 98304);
      ++v2;
      ++v1;
      *(v2 - 1) = dword_140404A6C[46 * v3 + 421784738] != 0 ? 2 : 0;
      v0 = dword_140404A6C[70998846];
    }
    while ( v1 < (int)dword_140404A6C[70998846] );
  }
  do
  {
LABEL_4:
    v4 = 0;
    v5 = 0;
    v153 = 0;
    v155 = 0;
    if ( v0 <= 0 )
      break;
    v6 = &dword_140404A6C[71162687];
    v7 = (int *)&dword_140404A6C[70998847];
    v8 = (float *)&dword_140404A6C[71113536];
    do
    {
      if ( !*v6 )
      {
        v9 = 0;
        if ( v0 > 0 )
        {
          v10 = &dword_140404A6C[71162687];
          v11 = (float *)&dword_140404A6C[71113536];
          v12 = &dword_140404A6C[70998850];
          do
          {
            if ( (int)*v10 < 2 )
            {
              v13 = (int)*(v12 - 3);
              v14 = v7[1];
              if ( dword_140404A6C[v14 + 70933310] != dword_140404A6C[v13 + 70933310] )
                goto LABEL_49;
              v15 = (int)*v12;
              v16 = v7[2];
              if ( dword_140404A6C[v16 + 70933310] != dword_140404A6C[v15 + 70933310]
                || *(v6 - 98304) != *(v10 - 98304)
                || *(v6 - 0x10000) != *(v10 - 0x10000)
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70687550] - *(float *)&dword_140404A6C[3 * v13 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70687551] - *(float *)&dword_140404A6C[3 * v13 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70687552] - *(float *)&dword_140404A6C[3 * v13 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70736702] - *(float *)&dword_140404A6C[3 * v13 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70736703] - *(float *)&dword_140404A6C[3 * v13 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v14 + 70736704] - *(float *)&dword_140404A6C[3 * v13 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * v13 + 70835008] != *(float *)&dword_140404A6C[3 * v14 + 70835008]
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70687550] - *(float *)&dword_140404A6C[3 * v15 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70687551] - *(float *)&dword_140404A6C[3 * v15 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70687552] - *(float *)&dword_140404A6C[3 * v15 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70736702] - *(float *)&dword_140404A6C[3 * v15 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70736703] - *(float *)&dword_140404A6C[3 * v15 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v16 + 70736704] - *(float *)&dword_140404A6C[3 * v15 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * v15 + 70835008] != *(float *)&dword_140404A6C[3 * v16 + 70835008]
                || fabs(*(v8 - 1) - *(v11 - 1)) >= 0.000099999997
                || fabs(*v8 - *v11) >= 0.000099999997
                || fabs(v8[1] - v11[1]) >= 0.000099999997 )
              {
                goto LABEL_49;
              }
              v17 = *v7;
              v18 = *(float *)&dword_140404A6C[3 * v17 + 70687551];
              v19 = *(float *)&dword_140404A6C[3 * v17 + 70687552];
              v20 = *(float *)&dword_140404A6C[3 * v14 + 70687551] - v18;
              v21 = *(float *)&dword_140404A6C[3 * v17 + 70687550];
              v22 = *(float *)&dword_140404A6C[3 * v14 + 70687552] - v19;
              v23 = (int)*(v12 - 2);
              v24 = *(float *)&dword_140404A6C[3 * v14 + 70687550] - v21;
              v26 = *(float *)&dword_140404A6C[3 * v23 + 70687551] - v18;
              v27 = *(float *)&dword_140404A6C[3 * v23 + 70687552] - v19;
              v28 = *(float *)&dword_140404A6C[3 * v23 + 70687550] - v21;
              v29 = fsqrt((float)((float)(v20 * v20) + (float)(v24 * v24)) + (float)(v22 * v22));
              if ( v29 == 0.0 )
              {
                v30 = 0.0;
                v31 = 0.0;
                v32 = 0.0;
              }
              else
              {
                v30 = v24 * (float)(1.0 / v29);
                v31 = v20 * (float)(1.0 / v29);
                v32 = v22 * (float)(1.0 / v29);
              }
              v33 = fsqrt((float)((float)(v26 * v26) + (float)(v28 * v28)) + (float)(v27 * v27));
              if ( v33 == 0.0 )
              {
                v34 = 0.0;
                v35 = 0.0;
                v36 = 0.0;
              }
              else
              {
                v34 = v28 * (float)(1.0 / v33);
                v35 = v26 * (float)(1.0 / v33);
                v36 = (float)(1.0 / v33) * v27;
              }
              if ( (float)((float)((float)(v31 * v35) + (float)(v34 * v30)) + (float)(v36 * v32)) < 0.99998748 )
                goto LABEL_49;
              v37 = 3LL * v7[3];
              v38 = *(float *)&dword_140404A6C[3 * v7[3] + 70687550];
              v39 = *(float *)&dword_140404A6C[3 * v7[3] + 70687552];
              v40 = *(float *)&dword_140404A6C[3 * v16 + 70687550] - v38;
              v41 = *(float *)&dword_140404A6C[3 * v7[3] + 70687551];
              v42 = *(float *)&dword_140404A6C[3 * v16 + 70687552] - v39;
              v43 = *(float *)&dword_140404A6C[3 * v16 + 70687551] - v41;
              v44 = *(float *)&dword_140404A6C[3 * *(v12 - 1) + 70687550] - v38;
              v45 = *(float *)&dword_140404A6C[3 * *(v12 - 1) + 70687552] - v39;
              v46 = *(float *)&dword_140404A6C[3 * *(v12 - 1) + 70687551] - v41;
              v47 = fsqrt((float)((float)(v43 * v43) + (float)(v40 * v40)) + (float)(v42 * v42));
              if ( v47 == 0.0 )
              {
                v48 = 0.0;
                v49 = 0.0;
                v50 = 0.0;
              }
              else
              {
                v48 = (float)(1.0 / v47) * v40;
                v49 = (float)(1.0 / v47) * v43;
                v50 = (float)(1.0 / v47) * v42;
              }
              v51 = fsqrt((float)((float)(v46 * v46) + (float)(v44 * v44)) + (float)(v45 * v45));
              if ( v51 == 0.0 )
              {
                v53 = 0.0;
                v54 = 0.0;
                v55 = 0.0;
              }
              else
              {
                v52 = 1.0 / v51;
                v53 = (float)(1.0 / v51) * v44;
                v54 = v52 * v46;
                v55 = v52 * v45;
              }
              if ( (float)((float)((float)(v49 * v54) + (float)(v53 * v48)) + (float)(v55 * v50)) >= 0.99998748 )
              {
                v56 = *(float *)&dword_140404A6C[3 * v17 + 70835006];
                v57 = *(float *)&dword_140404A6C[3 * v14 + 70835007];
                v58 = *(float *)&dword_140404A6C[3 * v7[3] + 70835006];
                v59 = *(float *)&dword_140404A6C[3 * v7[3] + 70687550] - v21;
                v60 = *(float *)&dword_140404A6C[3 * v14 + 70835006];
                v61 = 1.0 / v29;
                v62 = *(float *)&dword_140404A6C[3 * v17 + 70835007];
                v157 = *(float *)&dword_140404A6C[3 * v7[3] + 70687552];
                v63 = fsqrt(
                        (float)((float)((float)(v41 - *(float *)&dword_140404A6C[3 * v17 + 70687551])
                                      * (float)(v41 - *(float *)&dword_140404A6C[3 * v17 + 70687551]))
                              + (float)(v59 * v59))
                      + (float)((float)(v157 - *(float *)&dword_140404A6C[3 * v17 + 70687552])
                              * (float)(v157 - *(float *)&dword_140404A6C[3 * v17 + 70687552])));
                v64 = *(float *)&dword_140404A6C[3 * v7[3] + 70835007];
                v7[1] = v23;
                v7[2] = *(v12 - 1);
                v65 = *(float *)&dword_140404A6C[3 * v17 + 70687550];
                v66 = *(float *)&dword_140404A6C[3 * v17 + 70687551];
                v67 = *(float *)&dword_140404A6C[v37 + 70687551] - v66;
                v68 = 1.0 / v63;
                v69 = *(float *)&dword_140404A6C[3 * v17 + 70687552];
                v25 = 3 * v23;
                v70 = fsqrt(
                        (float)((float)((float)(*(float *)&dword_140404A6C[v25 + 70687551] - v66)
                                      * (float)(*(float *)&dword_140404A6C[v25 + 70687551] - v66))
                              + (float)((float)(*(float *)&dword_140404A6C[v25 + 70687550] - v65)
                                      * (float)(*(float *)&dword_140404A6C[v25 + 70687550] - v65)))
                      + (float)((float)(*(float *)&dword_140404A6C[v25 + 70687552] - v69)
                              * (float)(*(float *)&dword_140404A6C[v25 + 70687552] - v69)));
                v71 = (float)((float)(v60 - v56) * v61) * v70;
                v72 = (float)((float)(v57 - v62) * v61) * v70;
                v73 = fsqrt(
                        (float)((float)(v67 * v67)
                              + (float)((float)(*(float *)&dword_140404A6C[v37 + 70687550] - v65)
                                      * (float)(*(float *)&dword_140404A6C[v37 + 70687550] - v65)))
                      + (float)((float)(*(float *)&dword_140404A6C[v37 + 70687552] - v69)
                              * (float)(*(float *)&dword_140404A6C[v37 + 70687552] - v69)));
                *(float *)&dword_140404A6C[3 * v23 + 70835006] = v71 + *(float *)&dword_140404A6C[3 * v17 + 70835006];
                *(float *)&dword_140404A6C[3 * v7[1] + 70835007] = v72 + *(float *)&dword_140404A6C[3 * *v7 + 70835007];
                *(float *)&dword_140404A6C[3 * v7[2] + 70835006] = (float)((float)((float)(v58 - v56) * v68) * v73)
                                                                 + (float)(v71
                                                                         + *(float *)&dword_140404A6C[3 * *v7 + 70835006]);
                *(float *)&dword_140404A6C[3 * v7[2] + 70835007] = (float)((float)((float)(v64 - v62) * v68) * v73)
                                                                 + (float)(v72
                                                                         + *(float *)&dword_140404A6C[3 * *v7 + 70835007]);
                sub_140184AB0((unsigned int)v9);
                v4 = v153;
                *v10 = dword_140404A6C[dword_140404A6C[70998846] + 71162687];
                v5 = v155;
                v0 = dword_140404A6C[70998846];
                if ( v9 < v155 )
                  v4 = 1;
                v153 = v4;
                if ( v155 == dword_140404A6C[70998846] )
                  goto LABEL_4;
              }
              else
              {
LABEL_49:
                v5 = v155;
                v4 = v153;
              }
            }
            ++v9;
            v11 += 3;
            v12 += 4;
            ++v10;
          }
          while ( v9 < v0 );
        }
        if ( !v4 )
        {
          *v6 = 1;
          v0 = dword_140404A6C[70998846];
        }
      }
      ++v5;
      v8 += 3;
      v7 += 4;
      v155 = v5;
      ++v6;
    }
    while ( v5 < v0 );
  }
  while ( v4 );
  v74 = 0;
  if ( v0 > 0 )
  {
    v75 = &dword_140404A6C[71162687];
    do
    {
      v76 = (int)*(v75 - 98304);
      ++v75;
      ++v74;
      *(v75 - 1) = dword_140404A6C[46 * v76 + 421784738] != 0 ? 2 : 0;
      v0 = dword_140404A6C[70998846];
    }
    while ( v74 < (int)dword_140404A6C[70998846] );
  }
  do
  {
LABEL_58:
    result = 0;
    v78 = 0;
    v154 = 0;
    if ( v0 <= 0 )
      break;
    v79 = &dword_140404A6C[71162687];
    v80 = (int *)&dword_140404A6C[70998847];
    v81 = (float *)&dword_140404A6C[71113536];
    do
    {
      if ( !*v79 )
      {
        v82 = 0;
        if ( v0 > 0 )
        {
          v83 = &dword_140404A6C[71162687];
          v84 = (float *)&dword_140404A6C[71113536];
          v85 = (int *)&dword_140404A6C[70998847];
          do
          {
            if ( (int)*v83 < 2 )
            {
              v86 = v85[1];
              v87 = v80[2];
              if ( dword_140404A6C[v87 + 70933310] != dword_140404A6C[v86 + 70933310] )
                goto LABEL_103;
              v88 = *v85;
              v89 = v80[3];
              if ( dword_140404A6C[v89 + 70933310] != dword_140404A6C[v88 + 70933310] )
                goto LABEL_103;
              if ( *(v79 - 98304) != *(v83 - 98304) )
                goto LABEL_103;
              if ( *(v79 - 0x10000) != *(v83 - 0x10000) )
                goto LABEL_103;
              v90 = 3 * v87;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70687550] - *(float *)&dword_140404A6C[3 * v86 + 70687550]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70687551] - *(float *)&dword_140404A6C[3 * v86 + 70687551]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70687552] - *(float *)&dword_140404A6C[3 * v86 + 70687552]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70736702] - *(float *)&dword_140404A6C[3 * v86 + 70736702]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70736703] - *(float *)&dword_140404A6C[3 * v86 + 70736703]) >= 0.000099999997 )
                goto LABEL_103;
              if ( fabs(*(float *)&dword_140404A6C[3 * v87 + 70736704] - *(float *)&dword_140404A6C[3 * v86 + 70736704]) >= 0.000099999997 )
                goto LABEL_103;
              if ( *(float *)&dword_140404A6C[3 * v86 + 70835008] != *(float *)&dword_140404A6C[3 * v87 + 70835008] )
                goto LABEL_103;
              v91 = 3 * v89;
              if ( fabs(*(float *)&dword_140404A6C[3 * v89 + 70687550] - *(float *)&dword_140404A6C[3 * v88 + 70687550]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70687551] - *(float *)&dword_140404A6C[3 * v88 + 70687551]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70687552] - *(float *)&dword_140404A6C[3 * v88 + 70687552]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70736702] - *(float *)&dword_140404A6C[3 * v88 + 70736702]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70736703] - *(float *)&dword_140404A6C[3 * v88 + 70736703]) >= 0.000099999997
                || fabs(*(float *)&dword_140404A6C[3 * v89 + 70736704] - *(float *)&dword_140404A6C[3 * v88 + 70736704]) >= 0.000099999997
                || *(float *)&dword_140404A6C[3 * v88 + 70835008] != *(float *)&dword_140404A6C[3 * v89 + 70835008]
                || fabs(*(v81 - 1) - *(v84 - 1)) >= 0.000099999997
                || fabs(*v81 - *v84) >= 0.000099999997
                || fabs(v81[1] - v84[1]) >= 0.000099999997 )
              {
                goto LABEL_103;
              }
              v92 = *(float *)&dword_140404A6C[3 * v89 + 70687550];
              v93 = *(float *)&dword_140404A6C[3 * v89 + 70687551];
              v94 = *(float *)&dword_140404A6C[3 * v89 + 70687552];
              v95 = 3LL * *v80;
              v96 = v85[3];
              v97 = *(float *)&dword_140404A6C[3 * *v80 + 70687552];
              v98 = *(float *)&dword_140404A6C[3 * *v80 + 70687550];
              v99 = v94 - v97;
              v100 = *(float *)&dword_140404A6C[3 * *v80 + 70687551];
              v101 = v92 - v98;
              v102 = v93 - v100;
              v103 = *(float *)&dword_140404A6C[3 * v96 + 70687552] - v97;
              v104 = *(float *)&dword_140404A6C[3 * v96 + 70687550] - v98;
              v105 = *(float *)&dword_140404A6C[3 * v96 + 70687551] - v100;
              v106 = fsqrt((float)((float)(v102 * v102) + (float)(v101 * v101)) + (float)(v99 * v99));
              v156 = v106;
              if ( v106 == 0.0 )
              {
                v107 = 0.0;
                v108 = 0.0;
                v109 = 0.0;
              }
              else
              {
                v107 = v101 * (float)(1.0 / v106);
                v108 = v102 * (float)(1.0 / v106);
                v109 = v99 * (float)(1.0 / v106);
              }
              v110 = fsqrt((float)((float)(v105 * v105) + (float)(v104 * v104)) + (float)(v103 * v103));
              if ( v110 == 0.0 )
              {
                v111 = 0.0;
                v112 = 0.0;
                v113 = 0.0;
              }
              else
              {
                v111 = v104 * (float)(1.0 / v110);
                v112 = v105 * (float)(1.0 / v110);
                v113 = v103 * (float)(1.0 / v110);
              }
              if ( (float)((float)((float)(v108 * v112) + (float)(v111 * v107)) + (float)(v113 * v109)) < 0.99998748 )
                goto LABEL_103;
              v114 = 3LL * v80[1];
              v115 = *(float *)&dword_140404A6C[3 * v80[1] + 70687550];
              v116 = *(float *)&dword_140404A6C[3 * v80[1] + 70687551];
              v117 = *(float *)&dword_140404A6C[v90 + 70687550] - v115;
              v118 = *(float *)&dword_140404A6C[3 * v80[1] + 70687552];
              v119 = *(float *)&dword_140404A6C[v90 + 70687551] - v116;
              v120 = v85[2];
              v121 = *(float *)&dword_140404A6C[v90 + 70687552] - v118;
              v122 = *(float *)&dword_140404A6C[3 * v120 + 70687550] - v115;
              v123 = *(float *)&dword_140404A6C[3 * v120 + 70687551] - v116;
              v124 = *(float *)&dword_140404A6C[3 * v120 + 70687552] - v118;
              v125 = fsqrt((float)((float)(v119 * v119) + (float)(v117 * v117)) + (float)(v121 * v121));
              if ( v125 == 0.0 )
              {
                v126 = 0.0;
                v127 = 0.0;
                v128 = 0.0;
              }
              else
              {
                v126 = v117 * (float)(1.0 / v125);
                v127 = v119 * (float)(1.0 / v125);
                v128 = v121 * (float)(1.0 / v125);
              }
              v129 = fsqrt((float)((float)(v123 * v123) + (float)(v122 * v122)) + (float)(v124 * v124));
              if ( v129 == 0.0 )
              {
                v130 = 0.0;
                v131 = 0.0;
                v132 = 0.0;
              }
              else
              {
                v130 = v122 * (float)(1.0 / v129);
                v131 = v123 * (float)(1.0 / v129);
                v132 = v124 * (float)(1.0 / v129);
              }
              if ( (float)((float)((float)(v127 * v131) + (float)(v130 * v126)) + (float)(v132 * v128)) >= 0.99998748 )
              {
                v133 = *(float *)&dword_140404A6C[3 * *v80 + 70835007];
                v134 = v116 - v100;
                v135 = *(float *)&dword_140404A6C[3 * v80[1] + 70835006];
                v136 = v115 - v98;
                v137 = *(float *)&dword_140404A6C[3 * *v80 + 70835006];
                v138 = (float)(v134 * v134) + (float)(v136 * v136);
                v139 = *(float *)&dword_140404A6C[3 * v80[1] + 70835007];
                v140 = v138
                     + (float)((float)(v118 - *(float *)&dword_140404A6C[3 * *v80 + 70687552])
                             * (float)(v118 - *(float *)&dword_140404A6C[3 * *v80 + 70687552]));
                v141 = *(float *)&dword_140404A6C[v91 + 70835006];
                v142 = *(float *)&dword_140404A6C[v91 + 70835007];
                v80[2] = v120;
                v143 = v85[3];
                v80[3] = v143;
                v144 = *(float *)&dword_140404A6C[v95 + 70687550];
                v145 = *(float *)&dword_140404A6C[v95 + 70687551];
                v146 = 1.0 / fsqrt(v140);
                v147 = *(float *)&dword_140404A6C[v95 + 70687552];
                v148 = (float)(*(float *)&dword_140404A6C[3 * v143 + 70687551] - v145)
                     * (float)(*(float *)&dword_140404A6C[3 * v143 + 70687551] - v145);
                v149 = fsqrt(
                         (float)((float)((float)(*(float *)&dword_140404A6C[v114 + 70687551] - v145)
                                       * (float)(*(float *)&dword_140404A6C[v114 + 70687551] - v145))
                               + (float)((float)(*(float *)&dword_140404A6C[v114 + 70687550] - v144)
                                       * (float)(*(float *)&dword_140404A6C[v114 + 70687550] - v144)))
                       + (float)((float)(*(float *)&dword_140404A6C[v114 + 70687552] - v147)
                               * (float)(*(float *)&dword_140404A6C[v114 + 70687552] - v147)));
                v150 = fsqrt(
                         (float)(v148
                               + (float)((float)(*(float *)&dword_140404A6C[3 * v143 + 70687550] - v144)
                                       * (float)(*(float *)&dword_140404A6C[3 * v143 + 70687550] - v144)))
                       + (float)((float)(*(float *)&dword_140404A6C[3 * v143 + 70687552] - v147)
                               * (float)(*(float *)&dword_140404A6C[3 * v143 + 70687552] - v147)));
                v151 = (float)((float)(v141 - v137) * (float)(1.0 / v156)) * v150;
                v152 = (float)((float)(v142 - v133) * (float)(1.0 / v156)) * v150;
                *(float *)&dword_140404A6C[3 * v120 + 70835006] = (float)((float)((float)((float)(v135 - v137) * v146)
                                                                                * v149)
                                                                        + *(float *)&dword_140404A6C[v95 + 70835006])
                                                                + v151;
                *(float *)&dword_140404A6C[3 * v80[2] + 70835007] = (float)((float)((float)((float)(v139 - v133) * v146)
                                                                                  * v149)
                                                                          + *(float *)&dword_140404A6C[3 * *v80 + 70835007])
                                                                  + v152;
                *(float *)&dword_140404A6C[3 * v80[3] + 70835006] = v151
                                                                  + *(float *)&dword_140404A6C[3 * *v80 + 70835006];
                *(float *)&dword_140404A6C[3 * v80[3] + 70835007] = v152
                                                                  + *(float *)&dword_140404A6C[3 * *v80 + 70835007];
                sub_140184AB0((unsigned int)v82);
                *v83 = dword_140404A6C[dword_140404A6C[70998846] + 71162687];
                result = v154;
                v0 = dword_140404A6C[70998846];
                if ( v82 < v78 )
                  result = 1;
                v154 = result;
                if ( v78 == dword_140404A6C[70998846] )
                  goto LABEL_58;
              }
              else
              {
LABEL_103:
                result = v154;
              }
            }
            ++v82;
            v84 += 3;
            v85 += 4;
            ++v83;
          }
          while ( v82 < v0 );
        }
        if ( !(_DWORD)result )
        {
          *v79 = 1;
          v0 = dword_140404A6C[70998846];
        }
      }
      ++v78;
      v81 += 3;
      v80 += 4;
      ++v79;
    }
    while ( v78 < v0 );
  }
  while ( (_DWORD)result );
  return result;
}

