/* Address: 0x1400603a0 | Name: sub_1400603A0 | Size: 5552 bytes */
__int64 __fastcall sub_1400603A0(unsigned int a1, float *a2, float *a3, float *a4, float *a5, float a6)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // r11d
  unsigned int v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm15_4
  float v16; // xmm9_4
  float v17; // xmm4_4
  float v18; // xmm11_4
  float v19; // xmm13_4
  float v20; // xmm11_4
  int v21; // edx
  float v22; // xmm10_4
  float v23; // xmm13_4
  __int64 v24; // rbp
  float v25; // xmm0_4
  float v26; // xmm11_4
  float v27; // xmm5_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm2_4
  float v31; // xmm11_4
  float v32; // xmm13_4
  float v33; // xmm3_4
  float v34; // xmm0_4
  float v35; // xmm9_4
  float v36; // xmm1_4
  float v37; // xmm4_4
  float v38; // xmm11_4
  float v39; // xmm4_4
  float v40; // xmm9_4
  float v41; // xmm3_4
  float v42; // xmm11_4
  float v43; // xmm4_4
  float v44; // xmm9_4
  __int64 v45; // rcx
  unsigned int v46; // xmm3_4
  unsigned int v47; // xmm2_4
  unsigned int v48; // xmm1_4
  __int64 v49; // rcx
  float v50; // xmm0_4
  unsigned int v51; // xmm0_4
  __int64 v52; // rcx
  __int64 v53; // rcx
  float v54; // xmm2_4
  __int64 v55; // rcx
  float v56; // xmm1_4
  unsigned int v57; // xmm2_4
  unsigned int v58; // xmm1_4
  __int64 v59; // rcx
  __int64 v60; // rcx
  signed int v61; // eax
  unsigned int v62; // r15d
  float v63; // xmm11_4
  float v64; // xmm7_4
  float v65; // xmm5_4
  float v66; // xmm6_4
  float v67; // xmm2_4
  float v68; // xmm3_4
  float v69; // xmm4_4
  float v70; // xmm10_4
  float v71; // xmm1_4
  float v72; // xmm4_4
  float v73; // xmm10_4
  float v74; // xmm3_4
  float v75; // xmm9_4
  float v76; // xmm0_4
  float v77; // xmm4_4
  float v78; // xmm3_4
  float v79; // xmm1_4
  float v80; // xmm9_4
  float v81; // xmm3_4
  float v82; // xmm4_4
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  int v90; // ebx
  __int64 v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // rcx
  unsigned int v96; // r11d
  unsigned int v97; // r9d
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  unsigned int v101; // edx
  __int64 v102; // rcx
  int v103; // r14d
  __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 v108; // rcx
  unsigned int v109; // r9d
  unsigned int v110; // ebx
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int64 v115; // rcx
  unsigned int v116; // edx
  __int64 v117; // rcx
  unsigned int v118; // ebx
  __int64 v119; // rdi
  unsigned int v120; // r11d
  unsigned int v121; // r10d
  __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // rcx
  unsigned int v125; // r8d
  __int64 v126; // rcx
  __int64 v127; // rcx
  unsigned int v128; // edx
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rcx
  float v133; // [rsp+20h] [rbp-F8h]
  float v134; // [rsp+24h] [rbp-F4h]
  float v135; // [rsp+28h] [rbp-F0h]
  float v136; // [rsp+2Ch] [rbp-ECh]
  float v137; // [rsp+30h] [rbp-E8h]
  float v138; // [rsp+34h] [rbp-E4h]
  float v139; // [rsp+38h] [rbp-E0h]
  float v140; // [rsp+120h] [rbp+8h]
  float v141; // [rsp+128h] [rbp+10h]
  float v142; // [rsp+130h] [rbp+18h]
  float v143; // [rsp+138h] [rbp+20h]
  float v144; // [rsp+140h] [rbp+28h]
  float v145; // [rsp+148h] [rbp+30h]

  v7 = (int)dword_140404A6C[421506973];
  v8 = 15432LL * (int)dword_140404A6C[421506973];
  v9 = 0;
  dword_140404A6C[v8 + 358297501] = a1;
  dword_140404A6C[v8 + 358297506] = 0;
  dword_140404A6C[v8 + 358300579] = 0;
  *(float *)&v10 = *a2 + *a3;
  dword_140404A6C[v8 + 358297503] = v10;
  *(float *)&dword_140404A6C[v8 + 358297504] = a3[1] + a2[1];
  *(float *)&dword_140404A6C[v8 + 358297505] = a3[2] + a2[2];
  *(float *)&dword_140404A6C[v8 + 358297503] = *(float *)&v10 * 0.5;
  *(float *)&dword_140404A6C[v8 + 358297504] = *(float *)&dword_140404A6C[v8 + 358297504] * 0.5;
  *(float *)&dword_140404A6C[v8 + 358297505] = *(float *)&dword_140404A6C[v8 + 358297505] * 0.5;
  v11 = (float)((float)(a4[1] * a5[1]) + (float)(*a4 * *a5)) + (float)(a5[2] * a4[2]);
  *(float *)&dword_140404A6C[v8 + 358312932] = (float)(v11 * v11) * (float)(v11 * v11);
  v12 = a2[1];
  v13 = *a3;
  v14 = a3[1];
  v15 = *a2;
  v16 = a3[2];
  v17 = a2[2];
  v140 = *a3;
  v144 = v14;
  v143 = v12;
  v141 = v16;
  v142 = v17;
  v18 = fsqrt(
          (float)((float)((float)(v14 - v12) * (float)(v14 - v12)) + (float)((float)(*a3 - v15) * (float)(*a3 - v15)))
        + (float)((float)(v16 - v17) * (float)(v16 - v17)));
  v19 = v18 * 0.33333334;
  v134 = (float)((float)(v18 * 0.33333334) * *a4) + *a2;
  v136 = (float)((float)(v18 * 0.33333334) * a4[1]) + v12;
  v20 = v18 * -0.33333334;
  v21 = 0;
  v22 = 0.0;
  v23 = (float)(v19 * a4[2]) + v17;
  v24 = 5144 * v7;
  v138 = v23;
  v133 = (float)(v20 * *a5) + *a3;
  v25 = v20 * a5[1];
  v26 = (float)(v20 * a5[2]) + v16;
  v135 = v25 + v14;
  v137 = v26;
  v139 = a6 * -0.5;
  v145 = a6 * 0.5;
  do
  {
    if ( v21 )
    {
      if ( v21 == 15 )
      {
        v27 = v13;
        v28 = v14;
        v29 = v16;
      }
      else
      {
        v30 = 1.0 - v22;
        v27 = (float)((float)((float)((float)((float)((float)(v133 * 3.0) * (float)(1.0 - v22)) + (float)(v13 * v22))
                                    * v22)
                            + (float)((float)(v30 * v30) * (float)(v134 * 3.0)))
                    * v22)
            + (float)((float)((float)(1.0 - v22) * (float)(1.0 - v22)) * (float)((float)(1.0 - v22) * v15));
        v28 = (float)((float)((float)((float)((float)((float)(v135 * 3.0) * (float)(1.0 - v22)) + (float)(v14 * v22))
                                    * v22)
                            + (float)((float)((float)(1.0 - v22) * (float)(1.0 - v22)) * (float)(v136 * 3.0)))
                    * v22)
            + (float)((float)((float)(1.0 - v22) * (float)(1.0 - v22)) * (float)((float)(1.0 - v22) * v12));
        v29 = (float)((float)((float)((float)((float)((float)(v26 * 3.0) * (float)(1.0 - v22)) + (float)(v16 * v22))
                                    * v22)
                            + (float)((float)(v30 * v30) * (float)(v23 * 3.0)))
                    * v22)
            + (float)((float)(v17 * (float)(1.0 - v22)) * (float)(v30 * v30));
      }
    }
    else
    {
      v27 = v15;
      v28 = v12;
      v29 = v17;
    }
    v31 = (float)((float)(1.0 - v22) * *a4) + (float)(v22 * *a5);
    v32 = (float)((float)(1.0 - v22) * a4[1]) + (float)(v22 * a5[1]);
    v33 = (float)((float)(1.0 - v22) * a4[2]) + (float)(v22 * a5[2]);
    v34 = fsqrt((float)((float)(v32 * v32) + (float)(v31 * v31)) + (float)(v33 * v33));
    if ( v34 == 0.0 )
    {
      v35 = 0.0;
      v36 = 0.0;
      v37 = 0.0;
    }
    else
    {
      v35 = (float)(1.0 / v34) * v31;
      v36 = (float)(1.0 / v34) * v32;
      v37 = (float)(1.0 / v34) * v33;
    }
    v38 = (float)(v36 * *(float *)&dword_1402F6190) - (float)(v37 * *(float *)&dword_1402F618C);
    v39 = (float)(v37 * *(float *)&dword_1402F6188) - (float)(v35 * *(float *)&dword_1402F6190);
    v40 = (float)(v35 * *(float *)&dword_1402F618C) - (float)(v36 * *(float *)&dword_1402F6188);
    v41 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40));
    if ( v41 == 0.0 )
    {
      v42 = 0.0;
      v43 = 0.0;
      v44 = 0.0;
    }
    else
    {
      v42 = v38 * (float)(1.0 / v41);
      v43 = v39 * (float)(1.0 / v41);
      v44 = v40 * (float)(1.0 / v41);
    }
    ++v21;
    v22 = v22 + 0.06666667;
    v45 = 3 * (v24 + (int)dword_140404A6C[v8 + 358297506]);
    *(float *)&v46 = (float)(v139 * v42) + v27;
    *(float *)&v47 = (float)(v139 * v43) + v28;
    *(float *)&v48 = (float)(v139 * v44) + v29;
    dword_140404A6C[v45 + 358297507] = v46;
    dword_140404A6C[v45 + 358297508] = v47;
    dword_140404A6C[v45 + 358297509] = v48;
    *(float *)&dword_140404A6C[3 * v24 + 358297508 + 3 * (int)dword_140404A6C[v8 + 358297506]] = *(float *)&dword_140404A6C[3 * v24 + 358297508 + 3 * (int)dword_140404A6C[v8 + 358297506]]
                                                                                               + 0.5;
    v49 = (int)dword_140404A6C[v8 + 358297506];
    v50 = v145 * v44;
    v16 = v141;
    dword_140404A6C[v8 + 358297506] = v49 + 1;
    *(float *)&v51 = v50 + v29;
    v14 = v144;
    v52 = 3 * (v49 + v24);
    dword_140404A6C[v52 + 358297511] = v47;
    dword_140404A6C[v52 + 358297512] = v48;
    v23 = v138;
    dword_140404A6C[v52 + 358297510] = v46;
    v53 = (int)dword_140404A6C[v8 + 358297506];
    v12 = v143;
    v54 = v145 * v42;
    v26 = v137;
    dword_140404A6C[v8 + 358297506] = v53 + 1;
    v55 = 3 * (v53 + v24);
    v56 = v145 * v43;
    v17 = v142;
    *(float *)&v57 = v54 + v27;
    dword_140404A6C[v55 + 358297512] = v51;
    *(float *)&v58 = v56 + v28;
    v13 = v140;
    dword_140404A6C[v55 + 358297510] = v57;
    dword_140404A6C[v55 + 358297511] = v58;
    v59 = (int)dword_140404A6C[v8 + 358297506];
    dword_140404A6C[v8 + 358297506] = v59 + 1;
    v60 = 3 * (v59 + v24);
    dword_140404A6C[v60 + 358297512] = v51;
    dword_140404A6C[v60 + 358297510] = v57;
    dword_140404A6C[v60 + 358297511] = v58;
    *(float *)&dword_140404A6C[3 * v24 + 358297508 + 3 * (int)dword_140404A6C[v8 + 358297506]] = *(float *)&dword_140404A6C[3 * v24 + 358297508 + 3 * (int)dword_140404A6C[v8 + 358297506]]
                                                                                               + 0.5;
    v61 = ++dword_140404A6C[v8 + 358297506];
  }
  while ( v21 < 16 );
  v62 = dword_140404A6C[v8 + 358297506];
  v63 = 0.0;
  do
  {
    if ( v9 )
    {
      if ( v9 == 15 )
      {
        v65 = v140;
        v66 = v144;
        v64 = v141;
      }
      else
      {
        v67 = 1.0 - v63;
        v65 = (float)((float)((float)((float)((float)((float)(v133 * 3.0) * (float)(1.0 - v63)) + (float)(v140 * v63))
                                    * v63)
                            + (float)((float)(v67 * v67) * (float)(v134 * 3.0)))
                    * v63)
            + (float)((float)((float)(1.0 - v63) * v15) * (float)((float)(1.0 - v63) * (float)(1.0 - v63)));
        v66 = (float)((float)((float)((float)((float)((float)(v135 * 3.0) * (float)(1.0 - v63)) + (float)(v144 * v63))
                                    * v63)
                            + (float)((float)((float)(1.0 - v63) * (float)(1.0 - v63)) * (float)(v136 * 3.0)))
                    * v63)
            + (float)((float)((float)(1.0 - v63) * v143) * (float)((float)(1.0 - v63) * (float)(1.0 - v63)));
        v64 = (float)((float)((float)((float)((float)((float)(v137 * 3.0) * (float)(1.0 - v63)) + (float)(v141 * v63))
                                    * v63)
                            + (float)((float)(v67 * v67) * (float)(v138 * 3.0)))
                    * v63)
            + (float)((float)((float)(1.0 - v63) * v142) * (float)(v67 * v67));
      }
    }
    else
    {
      v64 = v142;
      v65 = v15;
      v66 = v143;
    }
    v68 = (float)(v63 * a5[2]) + (float)((float)(1.0 - v63) * a4[2]);
    v69 = (float)((float)(1.0 - v63) * *a4) + (float)(v63 * *a5);
    v70 = (float)((float)(1.0 - v63) * a4[1]) + (float)(v63 * a5[1]);
    v71 = fsqrt((float)((float)(v70 * v70) + (float)(v69 * v69)) + (float)(v68 * v68));
    if ( v71 == 0.0 )
    {
      v72 = 0.0;
      v73 = 0.0;
      v74 = 0.0;
    }
    else
    {
      v72 = v69 * (float)(1.0 / v71);
      v73 = v70 * (float)(1.0 / v71);
      v74 = v68 * (float)(1.0 / v71);
    }
    v75 = (float)(v73 * *(float *)&dword_1402F6190) - (float)(v74 * *(float *)&dword_1402F618C);
    v76 = v72;
    v77 = (float)(v72 * *(float *)&dword_1402F618C) - (float)(v73 * *(float *)&dword_1402F6188);
    v78 = (float)(v74 * *(float *)&dword_1402F6188) - (float)(v76 * *(float *)&dword_1402F6190);
    v79 = fsqrt((float)((float)(v78 * v78) + (float)(v75 * v75)) + (float)(v77 * v77));
    if ( v79 == 0.0 )
    {
      v80 = 0.0;
      v81 = 0.0;
      v82 = 0.0;
    }
    else
    {
      v80 = v75 * (float)(1.0 / v79);
      v81 = v78 * (float)(1.0 / v79);
      v82 = v77 * (float)(1.0 / v79);
    }
    v63 = v63 + 0.06666667;
    v83 = 3 * (v24 + v61);
    *(float *)&dword_140404A6C[v83 + 358297507] = v65 - (float)(v80 * 6.0);
    *(float *)&dword_140404A6C[v83 + 358297508] = v66 - (float)(v81 * 6.0);
    *(float *)&dword_140404A6C[v83 + 358297509] = v64 - (float)(v82 * 6.0);
    v84 = (int)dword_140404A6C[v8 + 358297506];
    dword_140404A6C[v8 + 358297506] = v84 + 1;
    v85 = 3 * (v84 + v24);
    *(float *)&dword_140404A6C[v85 + 358297511] = (float)(v81 + v81) + v66;
    *(float *)&dword_140404A6C[v85 + 358297510] = (float)(v80 + v80) + v65;
    *(float *)&dword_140404A6C[v85 + 358297512] = (float)(v82 + v82) + v64;
    v86 = (int)dword_140404A6C[v8 + 358297506];
    dword_140404A6C[v8 + 358297506] = v86 + 1;
    v87 = 3 * (v86 + v24);
    *(float *)&dword_140404A6C[v87 + 358297510] = v80 + v65;
    *(float *)&dword_140404A6C[v87 + 358297511] = v81 + v66;
    *(float *)&dword_140404A6C[v87 + 358297512] = v82 + v64;
    *(float *)&dword_140404A6C[3 * v24 + 358297508 + 3 * (int)dword_140404A6C[v8 + 358297506]] = *(float *)&dword_140404A6C[3 * v24 + 358297508 + 3 * (int)dword_140404A6C[v8 + 358297506]]
                                                                                               - 2.0;
    v88 = (int)dword_140404A6C[v8 + 358297506];
    dword_140404A6C[v8 + 358297506] = v88 + 1;
    v89 = 3 * (v88 + v24);
    *(float *)&dword_140404A6C[v89 + 358297510] = v65 - (float)(v80 * 5.0);
    *(float *)&dword_140404A6C[v89 + 358297511] = v66 - (float)(v81 * 5.0);
    *(float *)&dword_140404A6C[v89 + 358297512] = v64 - (float)(v82 * 5.0);
    *(float *)&dword_140404A6C[3 * v24 + 358297508 + 3 * (int)dword_140404A6C[v8 + 358297506]] = *(float *)&dword_140404A6C[3 * v24 + 358297508 + 3 * (int)dword_140404A6C[v8 + 358297506]]
                                                                                               - 2.0;
    v61 = ++dword_140404A6C[v8 + 358297506];
    ++v9;
  }
  while ( v9 < 16 );
  v90 = 5;
  dword_140404A6C[v8 + 358300580] = dword_140404A6C[v8 + 358300579];
  do
  {
    dword_140404A6C[3 * v24 + 358300588 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 - 4;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 1;
    v91 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v91 + 1;
    dword_140404A6C[3 * v91 + 358300591 + 3 * v24] = v90 - 4;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 1;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 - 4 + 1;
    v92 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v92 + 1;
    dword_140404A6C[3 * v92 + 358300591 + 3 * v24] = v90;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 4;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 5;
    v93 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v93 + 1;
    dword_140404A6C[3 * v93 + 358300591 + 3 * v24] = v90;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 5;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 1;
    v94 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v94 + 1;
    dword_140404A6C[3 * v94 + 358300591 + 3 * v24] = v90 + 4;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 8;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 9;
    v95 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v95 + 1;
    dword_140404A6C[3 * v95 + 358300591 + 3 * v24] = v90 + 4;
    v96 = v90 + 13;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 9;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 5;
    v97 = v90 + 12;
    v98 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v98 + 1;
    dword_140404A6C[3 * v98 + 358300591 + 3 * v24] = v90 + 8;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 12;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 13;
    v99 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v99 + 1;
    dword_140404A6C[3 * v99 + 358300591 + 3 * v24] = v90 + 8;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 13;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 9;
    v100 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v100 + 1;
    dword_140404A6C[3 * v100 + 358300591 + 3 * v24] = v90 + 12;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v90 + 16;
    v101 = v90 + 17;
    v90 += 20;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v101;
    v102 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v102 + 1;
    dword_140404A6C[3 * v102 + 358300591 + 3 * v24] = v97;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v101;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]++] = v96;
  }
  while ( v90 < 65 );
  dword_140404A6C[v8 + 358300584] = dword_140404A6C[v8 + 358300579];
  v103 = 2;
  dword_140404A6C[v8 + 358300581] = dword_140404A6C[v8 + 358300579];
  do
  {
    dword_140404A6C[3 * v24 + 358300588 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 - 2;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 2;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 3;
    v104 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v104 + 1;
    dword_140404A6C[3 * v104 + 358300591 + 3 * v24] = v103 - 2;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 3;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 - 1;
    v105 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v105 + 1;
    dword_140404A6C[3 * v105 + 358300591 + 3 * v24] = v103;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 4;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 5;
    v106 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v106 + 1;
    dword_140404A6C[3 * v106 + 358300591 + 3 * v24] = v103;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 5;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 1;
    v107 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v107 + 1;
    dword_140404A6C[3 * v107 + 358300591 + 3 * v24] = v103 + 2;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 6;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 7;
    v108 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v108 + 1;
    dword_140404A6C[3 * v108 + 358300591 + 3 * v24] = v103 + 2;
    v109 = v103 + 8;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 7;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 3;
    v110 = v103 + 9;
    v111 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v111 + 1;
    dword_140404A6C[3 * v111 + 358300591 + 3 * v24] = v103 + 4;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 8;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 9;
    v112 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v112 + 1;
    dword_140404A6C[3 * v112 + 358300591 + 3 * v24] = v103 + 4;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 9;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 5;
    v113 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v113 + 1;
    dword_140404A6C[3 * v113 + 358300591 + 3 * v24] = v103 + 6;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 10;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 11;
    v114 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v114 + 1;
    dword_140404A6C[3 * v114 + 358300591 + 3 * v24] = v103 + 6;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 11;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 7;
    v115 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v115 + 1;
    dword_140404A6C[3 * v115 + 358300591 + 3 * v24] = v103 + 8;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v103 + 12;
    v116 = v103 + 13;
    v103 += 12;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v116;
    v117 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v117 + 1;
    dword_140404A6C[3 * v117 + 358300591 + 3 * v24] = v109;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v116;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]++] = v110;
  }
  while ( v103 < 62 );
  dword_140404A6C[v8 + 358300585] = dword_140404A6C[v8 + 358300579];
  v118 = v62 + 5;
  v119 = 15;
  dword_140404A6C[v8 + 358300582] = dword_140404A6C[v8 + 358300579];
  do
  {
    v120 = v118 - 2;
    v121 = v118 + 2;
    dword_140404A6C[3 * v24 + 358300588 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v118 - 5;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v118 - 1;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v118;
    v122 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v122 + 1;
    dword_140404A6C[3 * v122 + 358300591 + 3 * v24] = v118 - 5;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v118;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v118 - 4;
    v123 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v123 + 1;
    dword_140404A6C[3 * v123 + 358300591 + 3 * v24] = v118 - 2;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v118 + 2;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v118 - 1;
    v124 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v124 + 1;
    dword_140404A6C[3 * v124 + 358300591 + 3 * v24] = v118 - 2;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v118 - 1;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v118 - 5;
    v125 = v118 + 1;
    v126 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v126 + 1;
    dword_140404A6C[3 * v126 + 358300591 + 3 * v24] = v118 - 4;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v118;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v118 + 1;
    v127 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v127 + 1;
    dword_140404A6C[3 * v127 + 358300591 + 3 * v24] = v118 - 4;
    v128 = v118 - 3;
    v118 += 4;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v125;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v128;
    v129 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v129 + 1;
    dword_140404A6C[3 * v129 + 358300591 + 3 * v24] = v128;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v125;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v121;
    v130 = (int)dword_140404A6C[v8 + 358300579];
    dword_140404A6C[v8 + 358300579] = v130 + 1;
    dword_140404A6C[3 * v130 + 358300591 + 3 * v24] = v128;
    dword_140404A6C[3 * v24 + 358300589 + 3 * (int)dword_140404A6C[v8 + 358300579]] = v121;
    dword_140404A6C[3 * v24 + 358300590 + 3 * (int)dword_140404A6C[v8 + 358300579]++] = v120;
    --v119;
  }
  while ( v119 );
  v131 = dword_140404A6C[421506973];
  dword_140404A6C[v8 + 358300586] = dword_140404A6C[v8 + 358300579];
  sub_1401899F0(v131);
  return dword_140404A6C[421506973]++;
}

