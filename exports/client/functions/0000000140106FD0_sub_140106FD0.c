/* Address: 0x140106fd0 | Name: sub_140106FD0 | Size: 3819 bytes */
__int64 __fastcall sub_140106FD0(int a1, __int64 a2)
{
  __int64 v2; // r13
  float *v3; // rax
  __int64 v4; // rcx
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm4_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 i; // r15
  __int64 v17; // rbx
  float v18; // xmm6_4
  __int64 v19; // rdi
  float v20; // xmm2_4
  float v21; // xmm5_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm7_4
  float v29; // xmm8_4
  float v30; // xmm6_4
  float v31; // xmm3_4
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm6_4
  float v35; // xmm10_4
  float v36; // xmm8_4
  float v37; // xmm13_4
  float v38; // xmm6_4
  float v39; // xmm7_4
  float v40; // xmm3_4
  float v41; // xmm8_4
  float v42; // xmm6_4
  float v43; // xmm7_4
  __int64 v44; // rcx
  double v45; // xmm0_8
  float v46; // xmm10_4
  float v47; // xmm13_4
  float v48; // xmm3_4
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm3_4
  float v54; // xmm1_4
  float v55; // xmm4_4
  float v56; // xmm5_4
  float v57; // xmm3_4
  float v58; // xmm1_4
  float v59; // xmm6_4
  int v60; // ebp
  __m128d v61; // xmm0
  float v62; // xmm8_4
  float v63; // xmm2_4
  float v64; // xmm3_4
  float v65; // xmm4_4
  float v66; // xmm9_4
  float v67; // xmm0_4
  float v68; // xmm12_4
  float v69; // xmm13_4
  float v70; // xmm7_4
  int v71; // esi
  float v72; // xmm2_4
  float v73; // xmm6_4
  float v74; // xmm4_4
  float v75; // xmm5_4
  float v76; // xmm3_4
  float v77; // xmm2_4
  float v78; // xmm1_4
  float v79; // xmm1_4
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  float v83; // xmm7_4
  float v84; // xmm6_4
  float v85; // xmm5_4
  float v86; // xmm2_4
  float v87; // xmm4_4
  unsigned int v88; // xmm0_4
  float v89; // xmm2_4
  unsigned int v90; // xmm1_4
  __int64 v91; // rcx
  __int64 result; // rax
  float v93; // xmm7_4
  float v94; // xmm6_4
  float v95; // xmm5_4
  float v96; // xmm3_4
  float v97; // xmm4_4
  unsigned int v98; // xmm0_4
  float v99; // xmm2_4
  unsigned int v100; // xmm1_4
  float *v101; // rcx
  unsigned __int64 v102; // r8
  __int64 v103; // rdx
  float v104; // xmm3_4
  float v105; // xmm4_4
  float v106; // xmm5_4
  float v107; // xmm6_4
  float v108; // xmm9_4
  float v109; // xmm8_4
  float v110; // xmm7_4
  float v111; // xmm6_4
  float v112; // xmm6_4
  float v113; // xmm3_4
  float v114; // xmm4_4
  float v115; // xmm2_4
  float v116; // xmm4_4
  float v117; // xmm0_4
  unsigned int v118; // [rsp+20h] [rbp-128h]
  __int64 v119; // [rsp+28h] [rbp-120h]
  float v120[2]; // [rsp+30h] [rbp-118h] BYREF
  float v121; // [rsp+38h] [rbp-110h]
  float v122; // [rsp+40h] [rbp-108h] BYREF
  float v123; // [rsp+44h] [rbp-104h]
  float v124; // [rsp+48h] [rbp-100h]
  __m128d v125; // [rsp+50h] [rbp-F8h]
  __m128d v126; // [rsp+60h] [rbp-E8h]
  float v127; // [rsp+158h] [rbp+10h]
  float v128; // [rsp+158h] [rbp+10h]
  float v129; // [rsp+160h] [rbp+18h]
  float v130; // [rsp+168h] [rbp+20h]

  v2 = a1;
  v119 = a1;
  v3 = (float *)&dword_140404A6C[5210 * a1 + 129721821];
  v4 = 2;
  do
  {
    v5 = *(v3 - 8);
    *(v3 - 11) = (float)(v5 * 0.03125) + *(v3 - 11);
    v6 = *(v3 - 7);
    *(v3 - 10) = (float)(v6 * 0.03125) + *(v3 - 10);
    v7 = *(v3 - 6);
    *(v3 - 9) = (float)(v7 * 0.03125) + *(v3 - 9);
    *(v3 - 7) = v6 - 0.000085069449;
    *(v3 - 3) = v7;
    *(v3 - 5) = v5;
    *(v3 - 4) = v6 - 0.000085069449;
    v8 = v3[1];
    *(v3 - 2) = (float)(v8 * 0.03125) + *(v3 - 2);
    v9 = v3[2];
    *(v3 - 1) = (float)(v9 * 0.03125) + *(v3 - 1);
    v10 = v3[3];
    *v3 = (float)(v10 * 0.03125) + *v3;
    v3[2] = v9 - 0.000085069449;
    v3[4] = v8;
    v3[5] = v9 - 0.000085069449;
    v3[6] = v10;
    v11 = v3[10];
    v3[7] = (float)(v11 * 0.03125) + v3[7];
    v12 = v3[11];
    v3[8] = (float)(v12 * 0.03125) + v3[8];
    v13 = v3[12];
    v3[9] = (float)(v13 * 0.03125) + v3[9];
    v3[11] = v12 - 0.000085069449;
    v3[13] = v11;
    v3[14] = v12 - 0.000085069449;
    v3[15] = v13;
    v3 += 27;
    --v4;
  }
  while ( v4 );
  v14 = 0;
  v15 = 0;
  for ( i = 0; i < 72; i += 36 )
  {
    if ( v15 < 2 )
    {
      v17 = 5210 * v2;
      v18 = *(float *)&dword_140404A6C[5210 * v2 + 129721847];
      v19 = 20840 * v2 + i;
      v20 = *(float *)&dword_140404A6C[5210 * v2 + 129721848];
      v21 = *(float *)&dword_140404A6C[5210 * v2 + 129721846];
      v22 = *(float *)((char *)&dword_140404A6C[129721811] + v19) - v18;
      v23 = v18 - *(float *)&dword_140404A6C[5210 * v2 + 129721856];
      v24 = *(float *)((char *)&dword_140404A6C[129721812] + v19) - v20;
      v25 = v20 - *(float *)&dword_140404A6C[5210 * v2 + 129721857];
      v26 = *(float *)((char *)&dword_140404A6C[129721810] + v19) - v21;
      v27 = v21 - *(float *)&dword_140404A6C[5210 * v2 + 129721855];
      v28 = (float)(v25 * v22) - (float)(v23 * v24);
      v29 = (float)(v27 * v24) - (float)(v25 * v26);
      v30 = (float)(v23 * v26) - (float)(v27 * v22);
      v31 = fsqrt((float)((float)(v29 * v29) + (float)(v28 * v28)) + (float)(v30 * v30));
      if ( v31 == 0.0 )
      {
        v32 = 0.0;
        v33 = 0.0;
        v34 = 0.0;
      }
      else
      {
        v32 = v28 * (float)(1.0 / v31);
        v33 = v29 * (float)(1.0 / v31);
        v34 = v30 * (float)(1.0 / v31);
      }
      *(float *)((char *)&dword_140404A6C[129721813] + v19) = (float)(v32 * 0.0011111111)
                                                            + *(float *)((char *)&dword_140404A6C[129721813] + v19);
      *(float *)((char *)&dword_140404A6C[129721814] + v19) = (float)(v33 * 0.0011111111)
                                                            + *(float *)((char *)&dword_140404A6C[129721814] + v19);
      *(float *)((char *)&dword_140404A6C[129721815] + v19) = (float)(v34 * 0.0011111111)
                                                            + *(float *)((char *)&dword_140404A6C[129721815] + v19);
      v35 = *(float *)&dword_140404A6C[v17 + 129721846];
      v36 = *(float *)((char *)&dword_140404A6C[129721812] + v19) - *(float *)&dword_140404A6C[v17 + 129721848];
      v37 = *(float *)&dword_140404A6C[v17 + 129721847];
      v38 = *(float *)((char *)&dword_140404A6C[129721810] + v19) - v35;
      v39 = *(float *)((char *)&dword_140404A6C[129721811] + v19) - v37;
      v127 = *(float *)&dword_140404A6C[v17 + 129721848];
      v40 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v36 * v36));
      if ( v40 == 0.0 )
      {
        v121 = 0.0;
        v42 = 0.0;
        v43 = 0.0;
        v41 = 0.0;
      }
      else
      {
        v41 = v36 * (float)(1.0 / v40);
        v42 = v38 * (float)(1.0 / v40);
        v121 = v41;
        v43 = v39 * (float)(1.0 / v40);
      }
      v120[1] = v43;
      v120[0] = v42;
      v45 = sub_14023F704(v4, a2);
      v46 = v35 - *(float *)&dword_140404A6C[v17 + 129721855];
      v47 = v37 - *(float *)&dword_140404A6C[v17 + 129721856];
      v118 = LODWORD(v45);
      *(float *)&v45 = v127 - *(float *)&dword_140404A6C[v17 + 129721857];
      v48 = (float)(v41 * v47) - (float)(v43 * *(float *)&v45);
      v49 = (float)(v42 * *(float *)&v45) - (float)(v41 * v46);
      v50 = (float)(v43 * v46) - (float)(v42 * v47);
      v51 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
      if ( v51 == 0.0 )
      {
        v52 = 0.0;
        v53 = 0.0;
        v54 = 0.0;
      }
      else
      {
        v52 = (float)(1.0 / v51) * v48;
        v53 = (float)(1.0 / v51) * v49;
        v54 = (float)(1.0 / v51) * v50;
      }
      v55 = (float)(v54 * v43) - (float)(v53 * v41);
      v56 = (float)(v52 * v41) - (float)(v54 * v42);
      v57 = (float)(v53 * v42) - (float)(v52 * v43);
      v58 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57));
      if ( v58 == 0.0 )
      {
        v130 = 0.0;
        v59 = 0.0;
        v129 = 0.0;
      }
      else
      {
        v130 = (float)(1.0 / v58) * v56;
        v59 = (float)(1.0 / v58) * v55;
        v129 = (float)(1.0 / v58) * v57;
      }
      v60 = 0;
      v128 = v59;
      v61.m128d_f64[1] = _mm_cvtps_pd((__m128)v118).m128d_f64[1];
      v61.m128d_f64[0] = MEMORY[0x1401F8A50](v44);
      v125 = v61;
      v126 = _mm_shuffle_pd(v61, v61, 1);
      do
      {
        v62 = (float)((float)v60 * 0.125) + 0.0625;
        v63 = (float)((float)(1.0 - v62) * *(float *)&dword_140404A6C[v17 + 129721852])
            + (float)(v62 * *(float *)((char *)&dword_140404A6C[129721816] + v19));
        v64 = (float)((float)(1.0 - v62) * *(float *)&dword_140404A6C[v17 + 129721853])
            + (float)(v62 * *(float *)((char *)&dword_140404A6C[129721817] + v19));
        v65 = (float)((float)(1.0 - v62) * *(float *)&dword_140404A6C[v17 + 129721854])
            + (float)(v62 * *(float *)((char *)&dword_140404A6C[129721818] + v19));
        v66 = (float)((float)(v64 * v64) + (float)(v63 * v63)) + (float)(v65 * v65);
        v67 = fsqrt(v66);
        if ( v67 == 0.0 )
        {
          v68 = 0.0;
          v69 = 0.0;
          v70 = 0.0;
        }
        else
        {
          v68 = (float)(1.0 / v67) * v64;
          v69 = (float)(1.0 / v67) * v63;
          v70 = (float)(1.0 / v67) * v65;
        }
        v71 = 0;
        do
        {
          v123 = v130;
          v122 = v59;
          v124 = v129;
          if ( !v71 )
            sub_14007B4D0(&v122, v120);
          sub_14023EDE4();
          sub_14023EDE4();
          sub_14007B4D0(&v122, v120);
          if ( v71 )
            v72 = 0.15625;
          else
            v72 = 0.015625;
          v73 = v123;
          v74 = v122;
          v75 = v124;
          ++v71;
          v76 = (float)((float)((float)((float)((float)(v68 * v123) + (float)(v69 * v122)) + (float)(v70 * v124)) * v72)
                      * v66)
              * -2.0;
          v77 = (float)(v76 * v62) * 0.0009765625;
          v78 = v123 * v77;
          *(float *)((char *)&dword_140404A6C[129721813] + v19) = (float)(v122 * v77)
                                                                + *(float *)((char *)&dword_140404A6C[129721813] + v19);
          *(float *)((char *)&dword_140404A6C[129721814] + v19) = v78
                                                                + *(float *)((char *)&dword_140404A6C[129721814] + v19);
          v79 = (float)((float)(1.0 - v62) * v76) * 0.00048828125;
          *(float *)((char *)&dword_140404A6C[129721815] + v19) = (float)(v75 * v77)
                                                                + *(float *)((char *)&dword_140404A6C[129721815] + v19);
          *(float *)&dword_140404A6C[v17 + 129721849] = (float)(v74 * v79) + *(float *)&dword_140404A6C[v17 + 129721849];
          *(float *)&dword_140404A6C[v17 + 129721850] = (float)(v73 * v79) + *(float *)&dword_140404A6C[v17 + 129721850];
          v59 = v128;
          *(float *)&dword_140404A6C[v17 + 129721851] = (float)(v75 * v79) + *(float *)&dword_140404A6C[v17 + 129721851];
        }
        while ( v71 < 2 );
        ++v60;
      }
      while ( v60 < 8 );
      v2 = v119;
    }
    ++v15;
  }
  v80 = 5210 * v2;
  v81 = (int)dword_140404A6C[5210 * v2 + 129716789];
  v82 = 60 * v81;
  v81 *= 32;
  v83 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v2 + 129721846]
                              - *(float *)&dword_140404A6C[v82 + 73007026])
                      * 0.03125)
              - (float)(*(float *)((char *)flt_140384000 + v81) * 0.125))
      + (float)(*(float *)&dword_140404A6C[5210 * v2 + 129721852] * 0.125);
  v84 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v2 + 129721847]
                              - *(float *)&dword_140404A6C[v82 + 73007027])
                      * 0.03125)
              - (float)(*(float *)((char *)&flt_140384000[1] + v81) * 0.125))
      + (float)(*(float *)&dword_140404A6C[5210 * v2 + 129721853] * 0.125);
  v85 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v2 + 129721848]
                              - *(float *)&dword_140404A6C[v82 + 73007028])
                      * 0.03125)
              - (float)(*(float *)((char *)&flt_140384000[2] + v81) * 0.125))
      + (float)(*(float *)&dword_140404A6C[5210 * v2 + 129721854] * 0.125);
  v86 = (float)(1.0 / (float)(*(float *)&dword_140404A6C[v82 + 73007023] + 64.0)) * 64.0;
  v87 = -(float)(*(float *)&dword_140404A6C[v82 + 73007023]
               * (float)(1.0 / (float)(*(float *)&dword_140404A6C[v82 + 73007023] + 64.0)));
  *(float *)((char *)&flt_140384000[4] + v81) = (float)(v86 * v83) + *(float *)((char *)&flt_140384000[4] + v81);
  *(float *)&v88 = (float)(v87 * v83) + *(float *)&dword_140404A6C[5210 * v2 + 129721849];
  *(float *)((char *)&flt_140384000[5] + v81) = (float)(v86 * v84) + *(float *)((char *)&flt_140384000[5] + v81);
  v89 = (float)(v86 * v85) + *(float *)((char *)&flt_140384000[6] + v81);
  dword_140404A6C[v80 + 129721849] = v88;
  *(float *)&v90 = (float)(v87 * v84) + *(float *)&dword_140404A6C[5210 * v2 + 129721850];
  *(float *)((char *)&flt_140384000[6] + v81) = v89;
  dword_140404A6C[v80 + 129721850] = v90;
  *(float *)&dword_140404A6C[v80 + 129721851] = (float)(v87 * v85) + *(float *)&dword_140404A6C[5210 * v2 + 129721851];
  v91 = (int)dword_140404A6C[5210 * v2 + 129716790];
  result = 240 * v91;
  v91 *= 32;
  v93 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v2 + 129721855]
                              - *(float *)((char *)&dword_140404A6C[73007026] + result))
                      * 0.03125)
              - (float)(*(float *)((char *)flt_140384000 + v91) * 0.125))
      + (float)(*(float *)&dword_140404A6C[5210 * v2 + 129721861] * 0.125);
  v94 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v2 + 129721856]
                              - *(float *)((char *)&dword_140404A6C[73007027] + result))
                      * 0.03125)
              - (float)(*(float *)((char *)&flt_140384000[1] + v91) * 0.125))
      + (float)(*(float *)&dword_140404A6C[5210 * v2 + 129721862] * 0.125);
  v95 = (float)((float)((float)(*(float *)&dword_140404A6C[5210 * v2 + 129721857]
                              - *(float *)((char *)&dword_140404A6C[73007028] + result))
                      * 0.03125)
              - (float)(*(float *)((char *)&flt_140384000[2] + v91) * 0.125))
      + (float)(*(float *)&dword_140404A6C[5210 * v2 + 129721863] * 0.125);
  v96 = 1.0 / (float)(*(float *)((char *)&dword_140404A6C[73007023] + result) + 64.0);
  v97 = -(float)(*(float *)((char *)&dword_140404A6C[73007023] + result) * v96);
  *(float *)((char *)&flt_140384000[4] + v91) = (float)((float)(v96 * 64.0) * v93)
                                              + *(float *)((char *)&flt_140384000[4] + v91);
  *(float *)&v98 = (float)(v97 * v93) + *(float *)&dword_140404A6C[5210 * v2 + 129721858];
  *(float *)((char *)&flt_140384000[5] + v91) = (float)((float)(v96 * 64.0) * v94)
                                              + *(float *)((char *)&flt_140384000[5] + v91);
  v99 = (float)((float)(v96 * 64.0) * v95) + *(float *)((char *)&flt_140384000[6] + v91);
  dword_140404A6C[v80 + 129721858] = v98;
  *(float *)&v100 = (float)(v97 * v94) + *(float *)&dword_140404A6C[5210 * v2 + 129721859];
  *(float *)((char *)&flt_140384000[6] + v91) = v99;
  v101 = (float *)&dword_140404A6C[5210 * v2 + 129721813];
  dword_140404A6C[v80 + 129721859] = v100;
  *(float *)&dword_140404A6C[v80 + 129721860] = (float)(v97 * v95) + *(float *)&dword_140404A6C[5210 * v2 + 129721860];
  do
  {
    v102 = v14++;
    v103 = v14;
    if ( v14 < 6 )
    {
      result = (__int64)(v101 + 8);
      do
      {
        v104 = *(float *)(result - 8) - *(v101 - 3);
        v105 = *(float *)(result - 4) - *(v101 - 2);
        v106 = *(float *)result - *(v101 - 1);
        v107 = fsqrt((float)((float)(v104 * v104) + (float)(v105 * v105)) + (float)(v106 * v106));
        v108 = (float)(1.0 / v107) * v104;
        v109 = (float)(1.0 / v107) * v105;
        v110 = (float)(1.0 / v107) * v106;
        if ( v102 >= 2 )
        {
          if ( v102 >= 4 )
            goto LABEL_45;
          if ( v103 >= 4 )
          {
            if ( v103 < 5 )
            {
LABEL_45:
              v111 = v107 + -1.0;
              goto LABEL_46;
            }
            v111 = v107 + -1.4142135;
          }
          else
          {
            v111 = v107 + -2.0;
          }
        }
        else if ( v103 >= 2 )
        {
          if ( v103 == 4 )
            v111 = v107 + -4.0;
          else
            v111 = v107 - 4.123105625617661;
        }
        else
        {
          v111 = v107 + -8.0;
        }
LABEL_46:
        v112 = (float)((float)(v111 * 0.125)
                     - (float)((float)((float)((float)(v109 * v101[4]) + (float)(v108 * v101[3]))
                                     + (float)(v110 * v101[5]))
                             * 0.125))
             + (float)((float)((float)((float)(v109 * *(float *)(result + 20)) + (float)(v108 * *(float *)(result + 16)))
                             + (float)(v110 * *(float *)(result + 24)))
                     * 0.125);
        if ( v102 >= 4 )
          v113 = 64.0;
        else
          v113 = 32.0;
        if ( v103 >= 4 )
          v114 = 64.0;
        else
          v114 = 32.0;
        ++v103;
        v115 = 1.0 / (float)(v114 + v113);
        v116 = (float)(v114 * v115) * v112;
        *v101 = (float)(v116 * v108) + *v101;
        v101[1] = (float)(v109 * v116) + v101[1];
        v101[2] = (float)(v110 * v116) + v101[2];
        v117 = -(float)((float)(v113 * v115) * v112);
        *(float *)(result + 4) = (float)(v117 * v108) + *(float *)(result + 4);
        *(float *)(result + 8) = (float)(v109 * v117) + *(float *)(result + 8);
        *(float *)(result + 12) = (float)(v110 * v117) + *(float *)(result + 12);
        result += 36;
      }
      while ( v103 < 6 );
    }
    v101 += 9;
  }
  while ( v14 < 6 );
  return result;
}

