/* Address: 0x140065ae0 | Name: sub_140065AE0 | Size: 5116 bytes */
_UNKNOWN **__fastcall sub_140065AE0(int a1)
{
  _UNKNOWN **result; // rax
  float v3; // xmm8_4
  float v4; // xmm10_4
  unsigned int v5; // r14d
  float v6; // xmm12_4
  float v7; // xmm13_4
  float v8; // xmm0_4
  unsigned int v9; // ecx
  float v10; // xmm2_4
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // esi
  float v15; // xmm15_4
  float v16; // xmm0_4
  __int64 v17; // rdi
  float v18; // xmm9_4
  double v19; // xmm6_8
  double v20; // xmm0_8
  unsigned int v21; // edi
  float v22; // xmm3_4
  float v23; // xmm5_4
  unsigned int *v24; // rdx
  __int64 v25; // r9
  __m128d v26; // xmm0
  int v27; // ecx
  double v28; // xmm1_8
  int v29; // r8d
  __m128d v30; // xmm1
  double v31; // xmm2_8
  float v32; // xmm2_4
  float v33; // xmm11_4
  float v34; // xmm12_4
  float v35; // xmm3_4
  unsigned int v36; // r9d
  _WORD *v37; // r10
  int v38; // r11d
  int v39; // r8d
  __int16 *v40; // rdx
  int v41; // ecx
  float v42; // xmm13_4
  float v43; // xmm14_4
  float v44; // xmm15_4
  float v45; // xmm8_4
  int v46; // ecx
  float v47; // xmm11_4
  float v48; // xmm13_4
  float v49; // xmm14_4
  float v50; // xmm3_4
  int v51; // ecx
  float v52; // xmm12_4
  float v53; // xmm15_4
  float v54; // xmm13_4
  float v55; // xmm8_4
  int v56; // ecx
  float v57; // xmm11_4
  float v58; // xmm14_4
  float v59; // xmm15_4
  float v60; // xmm3_4
  int v61; // ecx
  float v62; // xmm12_4
  float v63; // xmm11_4
  float v64; // xmm14_4
  float v65; // xmm8_4
  int v66; // ecx
  float v67; // xmm13_4
  float v68; // xmm15_4
  float v69; // xmm3_4
  float v70; // xmm3_4
  int v71; // ecx
  float v72; // xmm11_4
  float v73; // xmm12_4
  float v74; // xmm14_4
  float v75; // xmm13_4
  int v76; // ecx
  __int16 *v77; // rdx
  int v78; // ecx
  float v79; // xmm13_4
  float v80; // xmm14_4
  float v81; // xmm15_4
  float v82; // xmm8_4
  int v83; // ecx
  float v84; // xmm11_4
  float v85; // xmm13_4
  float v86; // xmm14_4
  float v87; // xmm3_4
  int v88; // ecx
  float v89; // xmm12_4
  float v90; // xmm15_4
  float v91; // xmm13_4
  float v92; // xmm8_4
  int v93; // ecx
  float v94; // xmm11_4
  float v95; // xmm14_4
  float v96; // xmm15_4
  float v97; // xmm3_4
  int v98; // ecx
  float v99; // xmm12_4
  float v100; // xmm11_4
  float v101; // xmm14_4
  float v102; // xmm8_4
  int v103; // ecx
  float v104; // xmm13_4
  float v105; // xmm15_4
  float v106; // xmm3_4
  float v107; // xmm3_4
  int v108; // ecx
  float v109; // xmm11_4
  float v110; // xmm12_4
  float v111; // xmm14_4
  float v112; // xmm13_4
  int v113; // ecx
  __m128i *v114; // rax
  __m128i v115; // xmm0
  __m128i v116; // xmm1
  __m128i v117; // xmm0
  __m128i v118; // xmm0
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = 0.0;
  if ( a1 >= (int)dword_140404A6C[283785984] && a1 <= (int)dword_140404A6C[283785994] )
  {
    v4 = 1.0;
    v5 = 0x4000;
    v6 = 0.0;
    if ( a1 == dword_140404A6C[283785994] )
      v5 = 22050;
    v7 = 0.0;
    v8 = 0.0;
    v9 = a1 - dword_140404A6C[283785984];
    v10 = 0.0;
    if ( a1 - dword_140404A6C[283785984] <= 7 )
    {
      v11 = 146;
      if ( _bittest(&v11, v9) )
        v8 = 1209.0;
    }
    if ( v9 <= 8 )
    {
      v12 = 293;
      if ( _bittest(&v12, v9) )
        v8 = 1336.0;
    }
    if ( v9 <= 9 )
    {
      v13 = 584;
      if ( _bittest(&v13, v9) )
        v8 = 1477.0;
    }
    if ( v9 - 1 <= 2 )
      v10 = 697.0;
    if ( v9 - 4 <= 2 )
      v10 = 770.0;
    if ( v9 - 7 <= 2 )
      v10 = 852.0;
    if ( v9 )
    {
      if ( v9 == 10 )
      {
        v8 = 480.0;
        v10 = 620.0;
      }
    }
    else
    {
      v10 = 941.0;
    }
    v14 = 0;
    v15 = (float)(v8 + v8) * 0.00006544984694979166;
    v17 = 0;
    v16 = (float)(v10 + v10) * 0.00006544984694979166;
    v18 = v16;
    do
    {
      v19 = (double)(__int16)(int)(sin(v6) * v4 * 8192.0);
      v20 = sin(v7);
      v6 = v6 + v15;
      v7 = v7 + v18;
      *((_WORD *)&dword_140404A6C[70357813] + v17) = (int)(v19 + v20 * v4 * 8192.0);
      if ( v14 >= v5 - 32 )
        v4 = v4 * 0.89999998;
      ++v14;
      ++v17;
    }
    while ( v17 < v5 );
    result = (_UNKNOWN **)sub_140069930((unsigned int)a1, v5, &dword_140404A6C[70357813]);
  }
  if ( a1 >= (int)dword_140404A6C[283786011] && a1 <= (int)dword_140404A6C[283786014] )
  {
    v21 = dword_140404A6C[283786013];
    v22 = 0.0;
    v23 = 0.0009765625;
    if ( a1 == dword_140404A6C[283786013] )
      v23 = 0.001953125;
    v24 = &dword_140404A6C[70357813];
    v25 = 0x10000;
    do
    {
      v26 = 0;
      v26.m128d_f64[0] = v22;
      v27 = (int)v22;
      v28 = v22;
      if ( (double)v27 != v22 )
        v28 = (double)(v27 - (_mm_movemask_pd(_mm_unpacklo_pd(v26, v26)) & 1));
      v29 = (int)(fabs(v26.m128d_f64[0] - v28) * 16384.0 - 8192.0);
      *(_WORD *)v24 = v29;
      if ( a1 == v21 )
      {
        v30 = 0;
        v30.m128d_f64[0] = (float)(v22 * 1.5);
        v31 = v30.m128d_f64[0];
        if ( (double)(int)v30.m128d_f64[0] != v30.m128d_f64[0] )
          v31 = (double)((int)v30.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v30, v30)) & 1));
        *(_WORD *)v24 = (int)(fabs(v30.m128d_f64[0] - v31) * 8192.0 + (double)(__int16)v29 - 4096.0);
      }
      v24 = (unsigned int *)((char *)v24 + 2);
      v22 = v22 + v23;
      --v25;
    }
    while ( v25 );
    v32 = 4.0;
    v33 = 0.0;
    v34 = 0.0;
    v35 = 0.0;
    if ( a1 == v21 )
      v32 = 1.0;
    v36 = dword_140404A6C[283786012];
    if ( a1 == dword_140404A6C[283786012] )
      v32 = 0.125;
    v37 = (_WORD *)&dword_140404A6C[70357813] + 1;
    v38 = 2;
    v39 = 2;
    v40 = (__int16 *)&dword_140404A6C[70357813] + 1;
    do
    {
      if ( a1 == v36 )
      {
        v41 = ((int)(float)((float)(v39 - 2) * 0.00390625) << 13) ^ (int)(float)((float)(v39 - 2) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v41 * v41 + 789221) * (15731 * v41 * v41 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v42 = (float)((float)((float)((float)((float)*(v40 - 1) * 0.000030517578) - (float)(v35 * v32)) - v3) * 0.025)
          + v3;
      v43 = (float)((float)(v42 - v33) * 0.025) + v33;
      v44 = (float)((float)(v43 - v34) * 0.025) + v34;
      v45 = (float)((float)((float)(v44 - v35) * 0.025) + v35)
          - (float)((float)((float)((float)((float)(v44 - v35) * 0.025) + v35)
                          * (float)((float)((float)(v44 - v35) * 0.025) + v35))
                  * (float)((float)((float)((float)(v44 - v35) * 0.025) + v35) * 0.16666667));
      if ( v39 - 2 >= 0x4000 )
        *(v40 - 1) = (int)(float)(v45 * 65536.0);
      if ( a1 == v36 )
      {
        v46 = ((int)(float)((float)(v39 - 1) * 0.00390625) << 13) ^ (int)(float)((float)(v39 - 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v46 * v46 + 789221) * (15731 * v46 * v46 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v47 = (float)((float)((float)((float)((float)*v40 * 0.000030517578) - (float)(v45 * v32)) - v42) * 0.025) + v42;
      v48 = (float)((float)(v47 - v43) * 0.025) + v43;
      v49 = (float)((float)(v48 - v44) * 0.025) + v44;
      v50 = (float)((float)((float)(v49 - v45) * 0.025) + v45)
          - (float)((float)((float)((float)((float)(v49 - v45) * 0.025) + v45)
                          * (float)((float)((float)(v49 - v45) * 0.025) + v45))
                  * (float)((float)((float)((float)(v49 - v45) * 0.025) + v45) * 0.16666667));
      if ( v39 > 0x4000 )
        *v40 = (int)(float)(v50 * 65536.0);
      if ( a1 == v36 )
      {
        v51 = ((int)(float)((float)v39 * 0.00390625) << 13) ^ (int)(float)((float)v39 * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v51 * v51 + 789221) * (15731 * v51 * v51 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v52 = (float)((float)((float)((float)((float)v40[1] * 0.000030517578) - (float)(v50 * v32)) - v47) * 0.025) + v47;
      v53 = (float)((float)(v52 - v48) * 0.025) + v48;
      v54 = (float)((float)(v53 - v49) * 0.025) + v49;
      v55 = (float)((float)((float)(v54 - v50) * 0.025) + v50)
          - (float)((float)((float)((float)((float)(v54 - v50) * 0.025) + v50)
                          * (float)((float)((float)(v54 - v50) * 0.025) + v50))
                  * (float)((float)((float)((float)(v54 - v50) * 0.025) + v50) * 0.16666667));
      if ( v39 >= 0x4000 )
        v40[1] = (int)(float)(v55 * 65536.0);
      if ( a1 == v36 )
      {
        v56 = ((int)(float)((float)(v39 + 1) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v56 * v56 + 789221) * (15731 * v56 * v56 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v57 = (float)((float)((float)((float)((float)v40[2] * 0.000030517578) - (float)(v55 * v32)) - v52) * 0.025) + v52;
      v58 = (float)((float)(v57 - v53) * 0.025) + v53;
      v59 = (float)((float)(v58 - v54) * 0.025) + v54;
      v60 = (float)((float)((float)(v59 - v55) * 0.025) + v55)
          - (float)((float)((float)((float)((float)(v59 - v55) * 0.025) + v55)
                          * (float)((float)((float)(v59 - v55) * 0.025) + v55))
                  * (float)((float)((float)((float)(v59 - v55) * 0.025) + v55) * 0.16666667));
      if ( v39 + 1 >= 0x4000 )
        v40[2] = (int)(float)(v60 * 65536.0);
      if ( a1 == v36 )
      {
        v61 = ((int)(float)((float)(v39 + 2) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 2) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v61 * v61 + 789221) * (15731 * v61 * v61 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v62 = (float)((float)((float)((float)((float)v40[3] * 0.000030517578) - (float)(v60 * v32)) - v57) * 0.025) + v57;
      v63 = (float)((float)(v62 - v58) * 0.025) + v58;
      v64 = (float)((float)(v63 - v59) * 0.025) + v59;
      v65 = (float)((float)((float)(v64 - v60) * 0.025) + v60)
          - (float)((float)((float)((float)((float)(v64 - v60) * 0.025) + v60)
                          * (float)((float)((float)(v64 - v60) * 0.025) + v60))
                  * (float)((float)((float)((float)(v64 - v60) * 0.025) + v60) * 0.16666667));
      if ( v39 + 2 >= 0x4000 )
        v40[3] = (int)(float)(v65 * 65536.0);
      if ( a1 == v36 )
      {
        v66 = ((int)(float)((float)(v39 + 3) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 3) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v66 * v66 + 789221) * (15731 * v66 * v66 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v67 = (float)((float)((float)((float)((float)v40[4] * 0.000030517578) - (float)(v65 * v32)) - v62) * 0.025) + v62;
      v68 = (float)((float)(v67 - v63) * 0.025) + v63;
      v69 = (float)((float)((float)((float)((float)(v68 - v64) * 0.025) + v64) - v65) * 0.025) + v65;
      v70 = v69 - (float)((float)(v69 * v69) * (float)(v69 * 0.16666667));
      if ( v39 + 3 >= 0x4000 )
        v40[4] = (int)(float)(v70 * 65536.0);
      if ( a1 == v36 )
      {
        v71 = ((int)(float)((float)(v39 + 4) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 4) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v71 * v71 + 789221) * (15731 * v71 * v71 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v72 = (float)((float)((float)((float)((float)v40[5] * 0.000030517578) - (float)(v70 * v32)) - v67) * 0.025) + v67;
      v73 = (float)((float)(v72 - v68) * 0.025) + v68;
      v74 = (float)((float)(v73 - (float)((float)((float)(v68 - v64) * 0.025) + v64)) * 0.025)
          + (float)((float)((float)(v68 - v64) * 0.025) + v64);
      v75 = (float)((float)((float)(v74 - v70) * 0.025) + v70)
          - (float)((float)((float)((float)((float)(v74 - v70) * 0.025) + v70)
                          * (float)((float)((float)(v74 - v70) * 0.025) + v70))
                  * (float)((float)((float)((float)(v74 - v70) * 0.025) + v70) * 0.16666667));
      if ( v39 + 4 >= 0x4000 )
        v40[5] = (int)(float)(v75 * 65536.0);
      if ( a1 == v36 )
      {
        v76 = ((int)(float)((float)(v39 + 5) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 5) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v76 * v76 + 789221) * (15731 * v76 * v76 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v3 = (float)((float)((float)((float)((float)v40[6] * 0.000030517578) - (float)(v75 * v32)) - v72) * 0.025) + v72;
      v33 = (float)((float)(v3 - v73) * 0.025) + v73;
      v34 = (float)((float)(v33 - v74) * 0.025) + v74;
      v35 = (float)((float)((float)(v34 - v75) * 0.025) + v75)
          - (float)((float)((float)((float)((float)(v34 - v75) * 0.025) + v75)
                          * (float)((float)((float)(v34 - v75) * 0.025) + v75))
                  * (float)((float)((float)((float)(v34 - v75) * 0.025) + v75) * 0.16666667));
      if ( v39 + 5 >= 0x4000 )
        v40[6] = (int)(float)(v35 * 65536.0);
      v40 += 8;
      v39 += 8;
    }
    while ( (__int64)v40 < (__int64)((__int16 *)&dword_140404A6C[70390581] + 1) );
    v77 = (__int16 *)&dword_140404A6C[70357813] + 1;
    do
    {
      if ( a1 == v36 )
      {
        v78 = ((int)(float)((float)(v38 - 2) * 0.00390625) << 13) ^ (int)(float)((float)(v38 - 2) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v78 * v78 + 789221) * (15731 * v78 * v78 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v79 = (float)((float)((float)((float)((float)*(v77 - 1) * 0.000030517578) - (float)(v35 * v32)) - v3) * 0.025)
          + v3;
      v80 = (float)((float)(v79 - v33) * 0.025) + v33;
      v81 = (float)((float)(v80 - v34) * 0.025) + v34;
      v82 = (float)((float)((float)(v81 - v35) * 0.025) + v35)
          - (float)((float)((float)((float)((float)(v81 - v35) * 0.025) + v35)
                          * (float)((float)((float)(v81 - v35) * 0.025) + v35))
                  * (float)((float)((float)((float)(v81 - v35) * 0.025) + v35) * 0.16666667));
      *(v77 - 1) = (int)(float)(v82 * 65536.0);
      if ( a1 == v36 )
      {
        v83 = ((int)(float)((float)(v38 - 1) * 0.00390625) << 13) ^ (int)(float)((float)(v38 - 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v83 * v83 + 789221) * (15731 * v83 * v83 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v84 = (float)((float)((float)((float)((float)*v77 * 0.000030517578) - (float)(v82 * v32)) - v79) * 0.025) + v79;
      v85 = (float)((float)(v84 - v80) * 0.025) + v80;
      v86 = (float)((float)(v85 - v81) * 0.025) + v81;
      v87 = (float)((float)((float)(v86 - v82) * 0.025) + v82)
          - (float)((float)((float)((float)((float)(v86 - v82) * 0.025) + v82)
                          * (float)((float)((float)(v86 - v82) * 0.025) + v82))
                  * (float)((float)((float)((float)(v86 - v82) * 0.025) + v82) * 0.16666667));
      *v77 = (int)(float)(v87 * 65536.0);
      if ( a1 == v36 )
      {
        v88 = ((int)(float)((float)v38 * 0.00390625) << 13) ^ (int)(float)((float)v38 * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v88 * v88 + 789221) * (15731 * v88 * v88 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v89 = (float)((float)((float)((float)((float)v77[1] * 0.000030517578) - (float)(v87 * v32)) - v84) * 0.025) + v84;
      v90 = (float)((float)(v89 - v85) * 0.025) + v85;
      v91 = (float)((float)(v90 - v86) * 0.025) + v86;
      v92 = (float)((float)((float)(v91 - v87) * 0.025) + v87)
          - (float)((float)((float)((float)((float)(v91 - v87) * 0.025) + v87)
                          * (float)((float)((float)(v91 - v87) * 0.025) + v87))
                  * (float)((float)((float)((float)(v91 - v87) * 0.025) + v87) * 0.16666667));
      v77[1] = (int)(float)(v92 * 65536.0);
      if ( a1 == v36 )
      {
        v93 = ((int)(float)((float)(v38 + 1) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v93 * v93 + 789221) * (15731 * v93 * v93 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v94 = (float)((float)((float)((float)((float)v77[2] * 0.000030517578) - (float)(v92 * v32)) - v89) * 0.025) + v89;
      v95 = (float)((float)(v94 - v90) * 0.025) + v90;
      v96 = (float)((float)(v95 - v91) * 0.025) + v91;
      v97 = (float)((float)((float)(v96 - v92) * 0.025) + v92)
          - (float)((float)((float)((float)((float)(v96 - v92) * 0.025) + v92)
                          * (float)((float)((float)(v96 - v92) * 0.025) + v92))
                  * (float)((float)((float)((float)(v96 - v92) * 0.025) + v92) * 0.16666667));
      v77[2] = (int)(float)(v97 * 65536.0);
      if ( a1 == v36 )
      {
        v98 = ((int)(float)((float)(v38 + 2) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 2) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v98 * v98 + 789221) * (15731 * v98 * v98 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v99 = (float)((float)((float)((float)((float)v77[3] * 0.000030517578) - (float)(v97 * v32)) - v94) * 0.025) + v94;
      v100 = (float)((float)(v99 - v95) * 0.025) + v95;
      v101 = (float)((float)(v100 - v96) * 0.025) + v96;
      v102 = (float)((float)((float)(v101 - v97) * 0.025) + v97)
           - (float)((float)((float)((float)((float)(v101 - v97) * 0.025) + v97)
                           * (float)((float)((float)(v101 - v97) * 0.025) + v97))
                   * (float)((float)((float)((float)(v101 - v97) * 0.025) + v97) * 0.16666667));
      v77[3] = (int)(float)(v102 * 65536.0);
      if ( a1 == v36 )
      {
        v103 = ((int)(float)((float)(v38 + 3) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 3) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v103 * v103 + 789221) * (15731 * v103 * v103 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v104 = (float)((float)((float)((float)((float)v77[4] * 0.000030517578) - (float)(v102 * v32)) - v99) * 0.025)
           + v99;
      v105 = (float)((float)(v104 - v100) * 0.025) + v100;
      v106 = (float)((float)((float)((float)((float)(v105 - v101) * 0.025) + v101) - v102) * 0.025) + v102;
      v107 = v106 - (float)((float)(v106 * v106) * (float)(v106 * 0.16666667));
      v77[4] = (int)(float)(v107 * 65536.0);
      if ( a1 == v36 )
      {
        v108 = ((int)(float)((float)(v38 + 4) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 4) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v108 * v108 + 789221) * (15731 * v108 * v108 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v109 = (float)((float)((float)((float)((float)v77[5] * 0.000030517578) - (float)(v107 * v32)) - v104) * 0.025)
           + v104;
      v110 = (float)((float)(v109 - v105) * 0.025) + v105;
      v111 = (float)((float)(v110 - (float)((float)((float)(v105 - v101) * 0.025) + v101)) * 0.025)
           + (float)((float)((float)(v105 - v101) * 0.025) + v101);
      v112 = (float)((float)((float)(v111 - v107) * 0.025) + v107)
           - (float)((float)((float)((float)((float)(v111 - v107) * 0.025) + v107)
                           * (float)((float)((float)(v111 - v107) * 0.025) + v107))
                   * (float)((float)((float)((float)(v111 - v107) * 0.025) + v107) * 0.16666667));
      v77[5] = (int)(float)(v112 * 65536.0);
      if ( a1 == v36 )
      {
        v113 = ((int)(float)((float)(v38 + 5) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 5) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v113 * v113 + 789221) * (15731 * v113 * v113 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10))
            + 1.0;
      }
      v38 += 8;
      v3 = (float)((float)((float)((float)((float)v77[6] * 0.000030517578) - (float)(v112 * v32)) - v109) * 0.025)
         + v109;
      v33 = (float)((float)(v3 - v110) * 0.025) + v110;
      v34 = (float)((float)(v33 - v111) * 0.025) + v111;
      v35 = (float)((float)((float)(v34 - v112) * 0.025) + v112)
          - (float)((float)((float)((float)((float)(v34 - v112) * 0.025) + v112)
                          * (float)((float)((float)(v34 - v112) * 0.025) + v112))
                  * (float)((float)((float)((float)(v34 - v112) * 0.025) + v112) * 0.16666667));
      v77[6] = (int)(float)(v35 * 65536.0);
      v77 += 8;
    }
    while ( v38 - 2 < 0x4000 );
    if ( a1 == v21 )
    {
      v114 = (__m128i *)&dword_140404A6C[70357817];
      do
      {
        v115 = _mm_loadu_si128(v114 - 1);
        v114[-1] = _mm_add_epi16(v115, v115);
        v116 = _mm_loadu_si128(v114);
        *v114 = _mm_add_epi16(v116, v116);
        v117 = _mm_loadu_si128(v114 + 1);
        v114[1] = _mm_add_epi16(v117, v117);
        v118 = _mm_loadu_si128(v114 + 2);
        v114[2] = _mm_add_epi16(v118, v118);
        v114 += 4;
      }
      while ( (__int64)v114 < (__int64)&dword_140404A6C[70390585] );
    }
    else
    {
      do
      {
        *(v37 - 1) *= 3;
        *v37 *= 3;
        v37 += 2;
      }
      while ( (__int64)v37 < (__int64)((_WORD *)&dword_140404A6C[70390581] + 1) );
    }
    return (_UNKNOWN **)sub_140069930((unsigned int)a1, 0x20000, &dword_140404A6C[70357813]);
  }
  return result;
}

