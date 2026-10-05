#include "shared_client.h"

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A4BF08E0: using guessed type unsigned int;

//----- (00000001400603A0) ----------------------------------------------------
__int64            sub_1400603A0(unsigned int a1, float *a2, float *a3, float *a4, float *a5, float a6)
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
  int v131; // ecx
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

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 1402F6188: using guessed type int dword_1402F6188;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140061A60) ----------------------------------------------------
void            sub_140061A60(int a1, signed int a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r12
  __int64 v4; // r10
  __int64 v5; // r13
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // rdx
  float v9; // xmm8_4
  float v10; // xmm9_4
  float v11; // xmm10_4
  float *v12; // rax
  unsigned __int64 v13; // rcx
  float *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r14
  __int64 v18; // r10
  float v19; // xmm8_4
  float v20; // xmm9_4
  float v21; // xmm10_4
  float *v22; // rdx
  unsigned __int64 v23; // r9
  unsigned int v24; // xmm1_4
  __int64 v25; // rax
  float v26; // xmm0_4
  unsigned int v27; // xmm1_4
  float v28; // xmm0_4
  __int64 v29; // rcx
  float v30; // xmm0_4
  unsigned int v31; // xmm1_4
  float v32; // xmm0_4
  __int64 v33; // rcx
  float v34; // xmm0_4
  unsigned int v35; // xmm1_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  float v38; // xmm0_4
  float *v39; // rdx
  __int64 v40; // r9
  unsigned int v41; // xmm1_4
  __int64 v42; // rax
  float v43; // xmm0_4
  __int64 v44; // rbx
  unsigned int *v45; // r11
  __int64 v46; // rbx
  float v47; // xmm6_4
  float v48; // xmm7_4
  float v49; // xmm5_4
  float v50; // xmm4_4
  __int64 v51; // r10
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // rdx
  float v56; // xmm2_4
  float v57; // xmm1_4
  __int64 v58; // rax
  float v59; // xmm5_4
  float v60; // xmm3_4
  float v61; // xmm0_4
  unsigned int v62; // xmm2_4
  float v63; // xmm4_4
  float v64; // xmm7_4
  __int64 v65; // r11
  __int64 v66; // rbx
  unsigned int *v67; // r8
  unsigned __int64 v68; // r9
  unsigned int *v69; // r8
  __int64 v70; // r10
  int v71; // r9d
  _DWORD *v72; // r8
  unsigned int v73; // r10d
  unsigned int v74; // ebx
  unsigned int v75; // edi
  unsigned int v76; // esi
  __int64 v77; // rax
  __int64 v78; // rax
  __m128i v79; // xmm0
  __int64 v80; // r8
  unsigned int v81; // eax
  __int64 v82; // rdx
  float *v83; // r11
  int v84; // ecx
  unsigned int *v85; // rax
  int v86; // r10d
  float *v87; // r8
  __int64 v88; // r9
  int v89; // ecx
  int v90; // eax
  float v91; // xmm4_4
  float v92; // xmm5_4
  __int64 v93; // rax
  float v94; // xmm2_4
  float v95; // xmm7_4
  float v96; // xmm1_4
  float v97; // xmm3_4
  float v98; // xmm6_4
  float v99; // xmm4_4
  float v100; // xmm0_4
  float v101; // xmm8_4
  float v102; // xmm7_4
  float v103; // xmm0_4
  float v104; // xmm3_4
  float v105; // xmm4_4
  float v106; // xmm2_4
  __int64 v107; // rax
  __int64 v108; // rax
  int v109; // r8d
  float *v110; // rax
  float v111; // xmm4_4
  float *v112; // r9
  float v113; // xmm5_4
  float v114; // xmm3_4
  float v115; // xmm1_4
  float v116; // xmm3_4
  float v117; // xmm4_4
  float v118; // xmm0_4
  float *v119; // r10
  int v120; // ecx
  float *v121; // r9
  unsigned int *v122; // rax
  unsigned int *v123; // rax
  __int64 v124; // r9
  int v125; // ecx
  int v126; // r8d
  float *v127; // r11
  int v128; // r10d
  __int64 v129; // r13
  int v130; // r12d
  float *v131; // r10
  int v132; // r15d
  float *v133; // r14
  float *v134; // r9
  __int64 v135; // rbx
  int v136; // edi
  __int64 v137; // rdx
  unsigned int v138; // eax
  __int64 v139; // rsi
  __int64 v140; // rcx
  unsigned int v141; // eax
  __int64 v142; // rax
  int v143; // r8d
  float v144; // xmm4_4
  float v145; // xmm5_4
  float v146; // xmm3_4
  float v147; // xmm1_4
  float v148; // xmm3_4
  float v149; // xmm4_4
  float v150; // xmm5_4
  float v151; // xmm4_4
  float v152; // xmm5_4
  float v153; // xmm3_4
  float v154; // xmm1_4
  float v155; // xmm3_4
  float v156; // xmm4_4
  float v157; // xmm5_4
  float v158; // xmm4_4
  float v159; // xmm5_4
  float v160; // xmm3_4
  float v161; // xmm1_4
  float v162; // xmm3_4
  float v163; // xmm4_4
  float v164; // xmm5_4
  int v165; // eax
  float v166; // xmm6_4
  float v167; // xmm7_4
  float v168; // xmm8_4
  float v169; // xmm9_4
  float v170; // xmm10_4
  float v171; // xmm11_4
  float v172; // xmm3_4
  float v173; // xmm2_4
  float v174; // xmm1_4
  float v175; // xmm5_4
  float v176; // xmm5_4
  float v177; // xmm0_4
  float v178; // xmm4_4
  float v179; // xmm1_4
  float v180; // xmm3_4
  float v181; // xmm2_4
  float v182; // xmm4_4
  float v183; // xmm3_4
  float v184; // xmm5_4
  float v185; // xmm1_4
  float v186; // xmm3_4
  float v187; // xmm4_4
  float v188; // xmm5_4
  int v189; // r9d
  unsigned int *v190; // r8
  __int64 v191; // rax
  unsigned int v192; // xmm1_4
  unsigned int v193; // xmm0_4
  float v194; // xmm1_4
  __int64 v195; // rbx
  __int64 v196; // rax
  int v197; // ebx
  unsigned int v198; // eax
  signed int v199; // r11d
  _DWORD *v200; // r10
  float *v201; // rdx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // rax
  unsigned int v205; // xmm3_4
  unsigned int v206; // xmm4_4
  unsigned int v207; // xmm5_4
  float v208; // xmm2_4
  __int64 v209; // rcx
  __int64 v210; // rcx
  __int64 v211; // rax
  unsigned int v212; // xmm3_4
  unsigned int v213; // xmm4_4
  unsigned int v214; // xmm5_4
  int v215; // eax
  float v216; // xmm2_4
  __int64 v217; // rcx
  __int64 v218; // rcx
  __int64 v219; // rcx
  __int64 v221; // [rsp+0h] [rbp-100h] BYREF
  int v222; // [rsp+20h] [rbp-E0h]
  _DWORD sr_mesh_position[3];
  int v226; // [rsp+38h] [rbp-C8h]
  int v227; // [rsp+3Ch] [rbp-C4h]
  int v228; // [rsp+40h] [rbp-C0h]
  unsigned int v229; // [rsp+44h] [rbp-BCh]
  int v230; // [rsp+48h] [rbp-B8h]
  unsigned int *v231; // [rsp+50h] [rbp-B0h]
  __int64 v232; // [rsp+58h] [rbp-A8h]
  __int64 v233; // [rsp+60h] [rbp-A0h]
  __int64 v234; // [rsp+68h] [rbp-98h]
  __int64 v235; // [rsp+70h] [rbp-90h]
  __int64 v236; // [rsp+78h] [rbp-88h]
  __m128i sr_mesh_indices[2];
  __int64 v239; // [rsp+A0h] [rbp-60h]

  v2 = a2;
  v3 = 99776LL * a2;
  v4 = a1;
  v5 = a2;
  v229 = a2;
  v230 = a1;
  v236 = a2;
  v6 = *(int *)((char *)&dword_140404A6C[346707733] + v3);
  v235 = v3;
  if ( !(_DWORD)v6 )
    return;
  v7 = v6;
  v8 = 0;
  v9 = 0.0;
  v10 = 0.0;
  v11 = 0.0;
  if ( v6 >= 4 )
  {
    v12 = (float *)((char *)&dword_140404A6C[346707737] + v3);
    v13 = ((unsigned __int64)(v6 - 4) >> 2) + 1;
    v8 = 4 * v13;
    do
    {
      v9 = (float)((float)((float)(v9 + *(v12 - 2)) + v12[3]) + v12[8]) + v12[13];
      v10 = (float)((float)((float)(v10 + *(v12 - 1)) + v12[4]) + v12[9]) + v12[14];
      v11 = (float)((float)((float)(v11 + *v12) + v12[5]) + v12[10]) + v12[15];
      v12 += 20;
      --v13;
    }
    while ( v13 );
  }
  if ( v8 < v6 )
  {
    v14 = (float *)((char *)&dword_140404A6C[5 * v8 + 346707737] + v3);
    v15 = v6 - v8;
    do
    {
      v9 = v9 + *(v14 - 2);
      v10 = v10 + *(v14 - 1);
      v11 = v11 + *v14;
      v14 += 5;
      --v15;
    }
    while ( v15 );
  }
  v16 = 0;
  v17 = 3632 * v4;
  dword_140404A6C[177167565] = 0;
  v18 = 0;
  v234 = v17;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178519250] = 0;
  v19 = v9 * (float)(1.0 / (float)(int)v6);
  v20 = v10 * (float)(1.0 / (float)(int)v6);
  v21 = v11 * (float)(1.0 / (float)(int)v6);
  *(float *)((char *)&dword_140404A6C[178527485] + v17) = v19;
  *(float *)((char *)&dword_140404A6C[178527486] + v17) = v20;
  *(float *)((char *)&dword_140404A6C[178527487] + v17) = v21;
  if ( v6 < 4 )
  {
    if ( (int)v6 <= 0 )
      goto LABEL_17;
  }
  else
  {
    v22 = (float *)((char *)&dword_140404A6C[346707737] + v3);
    v23 = ((unsigned __int64)(v6 - 4) >> 2) + 1;
    v18 = 4 * v23;
    do
    {
      *(float *)&v24 = *(v22 - 1) - v20;
      v25 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v25 + 177167567] = *(v22 - 2) - v19;
      v26 = *v22;
      dword_140404A6C[v25 + 177167568] = v24;
      *(float *)&v27 = v22[4] - v20;
      *(float *)&dword_140404A6C[v25 + 177167569] = v26 - v21;
      v28 = v22[3];
      ++dword_140404A6C[177167565];
      v29 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v29 + 177167567] = v28 - v19;
      v30 = v22[5];
      dword_140404A6C[v29 + 177167568] = v27;
      *(float *)&v31 = v22[9] - v20;
      *(float *)&dword_140404A6C[v29 + 177167569] = v30 - v21;
      v32 = v22[8];
      ++dword_140404A6C[177167565];
      v33 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v33 + 177167567] = v32 - v19;
      v34 = v22[10];
      dword_140404A6C[v33 + 177167568] = v31;
      *(float *)&v35 = v22[14] - v20;
      *(float *)&dword_140404A6C[v33 + 177167569] = v34 - v21;
      v36 = v22[13];
      ++dword_140404A6C[177167565];
      v37 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v37 + 177167567] = v36 - v19;
      v38 = v22[15];
      v22 += 20;
      dword_140404A6C[v37 + 177167568] = v35;
      *(float *)&dword_140404A6C[v37 + 177167569] = v38 - v21;
      ++dword_140404A6C[177167565];
      --v23;
    }
    while ( v23 );
    if ( v18 >= v7 )
      goto LABEL_16;
  }
  v39 = (float *)((char *)&dword_140404A6C[5 * v18 + 346707737] + v3);
  v40 = v7 - v18;
  do
  {
    *(float *)&v41 = *(v39 - 1) - v20;
    v42 = 3 * dword_140404A6C[177167565];
    *(float *)&dword_140404A6C[v42 + 177167567] = *(v39 - 2) - v19;
    v43 = *v39;
    v39 += 5;
    dword_140404A6C[v42 + 177167568] = v41;
    *(float *)&dword_140404A6C[v42 + 177167569] = v43 - v21;
    ++dword_140404A6C[177167565];
    --v40;
  }
  while ( v40 );
LABEL_16:
  v16 = dword_140404A6C[177495247];
LABEL_17:
  v44 = *(int *)((char *)&dword_140404A6C[346713116] + v3);
  if ( v7 < v44 )
  {
    v45 = &dword_140404A6C[24944 * v5 + 346713117 + 8 * v7];
    v46 = v44 - v7;
    do
    {
      v47 = *((float *)v45 + 4);
      v48 = *((float *)v45 + 5);
      v49 = *((float *)v45 + 6);
      v50 = *((float *)v45 + 7);
      v51 = v3 + 20LL * (int)*v45;
      v52 = v3 + 20LL * (int)v45[1];
      v53 = (int)v45[3];
      v54 = v3 + 20LL * (int)v45[2];
      v45 += 8;
      v55 = v3 + 20 * v53;
      v56 = (float)((float)(v48 * *(float *)((char *)&dword_140404A6C[346707735] + v52))
                  + (float)(v47 * *(float *)((char *)&dword_140404A6C[346707735] + v51)))
          + (float)(v49 * *(float *)((char *)&dword_140404A6C[346707735] + v54));
      v57 = v49 * *(float *)((char *)&dword_140404A6C[346707736] + v54);
      v58 = 3 * dword_140404A6C[177167565];
      v59 = v49 * *(float *)((char *)&dword_140404A6C[346707737] + v54);
      v60 = (float)(v48 * *(float *)((char *)&dword_140404A6C[346707736] + v52))
          + (float)(v47 * *(float *)((char *)&dword_140404A6C[346707736] + v51));
      v61 = v50 * *(float *)((char *)&dword_140404A6C[346707736] + v55);
      *(float *)&v62 = (float)(v56 + (float)(v50 * *(float *)((char *)&dword_140404A6C[346707735] + v55))) - v19;
      v63 = v50 * *(float *)((char *)&dword_140404A6C[346707737] + v55);
      v64 = (float)(v48 * *(float *)((char *)&dword_140404A6C[346707737] + v52))
          + (float)(v47 * *(float *)((char *)&dword_140404A6C[346707737] + v51));
      dword_140404A6C[v58 + 177167567] = v62;
      *(float *)&dword_140404A6C[v58 + 177167568] = (float)((float)(v60 + v57) + v61) - v20;
      *(float *)&dword_140404A6C[v58 + 177167569] = (float)((float)(v64 + v59) + v63) - v21;
      ++dword_140404A6C[177167565];
      --v46;
    }
    while ( v46 );
    v16 = dword_140404A6C[177495247];
    v17 = v234;
  }
  v65 = *(int *)((char *)&dword_140404A6C[346709019] + v3);
  v66 = 0;
  if ( v65 >= 4 )
  {
    v67 = (unsigned int *)((char *)&dword_140404A6C[346709021] + v3);
    v68 = ((unsigned __int64)(v65 - 4) >> 2) + 1;
    v66 = 4 * v68;
    do
    {
      if ( *(v67 - 1) == 3 )
      {
        dword_140404A6C[3 * v16 + 177495248] = *v67;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67[1];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67[2];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
      }
      if ( v67[15] == 3 )
      {
        dword_140404A6C[3 * v16 + 177495248] = v67[16];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67[17];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67[18];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
      }
      if ( v67[31] == 3 )
      {
        dword_140404A6C[3 * v16 + 177495248] = v67[32];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67[33];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67[34];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
      }
      if ( v67[47] == 3 )
      {
        dword_140404A6C[3 * v16 + 177495248] = v67[48];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67[49];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67[50];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
      }
      v67 += 64;
      --v68;
    }
    while ( v68 );
  }
  if ( v66 < v65 )
  {
    v69 = &dword_140404A6C[16 * (v66 + 1559 * v5) + 346709021];
    v70 = v65 - v66;
    do
    {
      if ( *(v69 - 1) == 3 )
      {
        dword_140404A6C[3 * v16 + 177495248] = *v69;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v69[1];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v69[2];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
      }
      v69 += 16;
      --v70;
    }
    while ( v70 );
  }
  v71 = 0;
  if ( (int)v65 > 0 )
  {
    v72 = (unsigned int *)((char *)&dword_140404A6C[346709035] + v3);
    do
    {
      if ( *(v72 - 15) == 4 && *v72 != 1 )
      {
        v73 = *(v72 - 14);
        v74 = *(v72 - 12);
        v75 = *(v72 - 13);
        dword_140404A6C[3 * v16 + 177495248] = v73;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v75;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v74;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247]++ + 178011350] = 0;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v73;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v74;
        v76 = *(v72 - 11);
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v76;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v16 = ++dword_140404A6C[177495247];
        if ( (v2 <= 9 || v2 == 12) && v71 == *(unsigned int *)((char *)&dword_140404A6C[346709019] + v3) - 1 )
        {
          dword_140404A6C[3 * v16 + 177495248] = v73;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v74;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v75;
          dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
          v77 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v77 + 178011345] = 0;
          *(_QWORD *)&dword_140404A6C[v77 + 178011346] = 1065353216;
          *(_QWORD *)&dword_140404A6C[v77 + 178011348] = 1065353216;
          dword_140404A6C[v77 + 178011350] = 1065353216;
          ++dword_140404A6C[177495247];
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v73;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v76;
          dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v74;
          dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
          v78 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v78 + 178011345] = 0;
          *(_QWORD *)&dword_140404A6C[v78 + 178011346] = 1065353216;
          *(_QWORD *)&dword_140404A6C[v78 + 178011348] = 1065353216;
          dword_140404A6C[v78 + 178011350] = 1065353216;
          v16 = ++dword_140404A6C[177495247];
        }
      }
      ++v71;
      v72 += 16;
    }
    while ( v71 < (int)v65 );
  }
  if ( v2 <= 6 )
  {
    sr_mesh_indices[0] = _mm_load_si128((     __m128i *)&xmmword_140279020);
    sr_mesh_indices[1] = _mm_load_si128((     __m128i *)&xmmword_140279060);
    sub_140004140((__int64)&sr_mesh_indices[0]);
    v16 = dword_140404A6C[177495247];
  }
  if ( v2 - 7 <= 2 )
  {
    sr_mesh_indices[0] = _mm_load_si128((     __m128i *)&xmmword_140278FF0);
    sr_mesh_indices[1] = _mm_load_si128((     __m128i *)&xmmword_140279040);
    sub_140004140((__int64)&sr_mesh_indices[0]);
    v16 = dword_140404A6C[177495247];
  }
  if ( v2 == 10 )
  {
    v79 = _mm_load_si128((     __m128i *)&xmmword_140279040);
LABEL_54:
    sr_mesh_indices[1] = _mm_load_si128((     __m128i *)&xmmword_140279060);
    sr_mesh_indices[0] = v79;
    sub_140004140((__int64)&sr_mesh_indices[0]);
    v16 = dword_140404A6C[177495247];
    goto LABEL_55;
  }
  if ( v2 == 12 )
  {
    v79 = _mm_load_si128((     __m128i *)&xmmword_140279020);
    goto LABEL_54;
  }
LABEL_55:
  v80 = *(int *)((char *)&dword_140404A6C[346715165] + v3);
  v81 = 0;
  dword_140404A6C[178519250] = 0;
  if ( v80 > 0 )
  {
    v82 = (__int64)(uintptr_t)((unsigned char *)&dword_140404A6C[346715167] + v3);
    do
    {
      v82 += 8;
      dword_140404A6C[2 * v81 + 178519251] = *(_DWORD *)(v82 - 12);
      dword_140404A6C[2 * dword_140404A6C[178519250] + 178519252] = *(_DWORD *)(v82 - 8);
      v81 = ++dword_140404A6C[178519250];
      --v80;
    }
    while ( v80 );
    v16 = dword_140404A6C[177495247];
  }
  v83 = (float *)&dword_140404A6C[177249489];
  v84 = 0;
  if ( (int)dword_140404A6C[177167565] > 0 )
  {
    v85 = &dword_140404A6C[177249489];
    do
    {
      *((_QWORD *)v85 - 1) = 0;
      ++v84;
      *v85 = 0;
      v85 += 3;
    }
    while ( v84 < (int)dword_140404A6C[177167565] );
    v16 = dword_140404A6C[177495247];
  }
  v86 = 0;
  if ( v16 > 0 )
  {
    v87 = (float *)&dword_140404A6C[177814739];
    do
    {
      v88 = 3 * *((_DWORD *)v87 - 319491);
      v89 = 3 * *((_DWORD *)v87 - 319490);
      v90 = *((_DWORD *)v87 - 319489);
      v91 = *(float *)&dword_140404A6C[v88 + 177167568];
      v92 = *(float *)&dword_140404A6C[v88 + 177167569];
      (*(float *)&sr_mesh_position[0]) = *(float *)&dword_140404A6C[v88 + 177167567];
      v93 = 3 * v90;
      sr_mesh_position[1] = LODWORD(v91);
      sr_mesh_position[2] = LODWORD(v92);
      v94 = *(float *)&dword_140404A6C[v93 + 177167568] - v91;
      v95 = *(float *)&dword_140404A6C[v93 + 177167569] - v92;
      v96 = *(float *)&dword_140404A6C[v89 + 177167569] - v92;
      v97 = *(float *)&dword_140404A6C[v89 + 177167568] - v91;
      v98 = *(float *)&dword_140404A6C[v89 + 177167567] - (*(float *)&sr_mesh_position[0]);
      v99 = (float)(v94 * v96) - (float)(v95 * v97);
      v100 = *(float *)&dword_140404A6C[v93 + 177167567] - (*(float *)&sr_mesh_position[0]);
      v101 = (float)(v100 * v97) - (float)(v94 * v98);
      v102 = (float)(v95 * v98) - (float)(v100 * v96);
      v103 = fsqrt((float)((float)(v102 * v102) + (float)(v99 * v99)) + (float)(v101 * v101));
      if ( v103 == 0.0 )
      {
        v104 = 0.0;
        v105 = 0.0;
        v106 = 0.0;
      }
      else
      {
        v104 = (float)(1.0 / v103) * v99;
        v105 = (float)(1.0 / v103) * v102;
        v106 = (float)(1.0 / v103) * v101;
      }
      *(v87 - 2) = v104;
      *(v87 - 1) = v105;
      *v87 = v106;
      ++v86;
      *(float *)&dword_140404A6C[v88 + 177249487] = v104 + *(float *)&dword_140404A6C[v88 + 177249487];
      *(float *)&dword_140404A6C[v88 + 177249488] = v105 + *(float *)&dword_140404A6C[v88 + 177249488];
      *(float *)&dword_140404A6C[v88 + 177249489] = v106 + *(float *)&dword_140404A6C[v88 + 177249489];
      v107 = 3 * *((_DWORD *)v87 - 319490);
      *(float *)&dword_140404A6C[v107 + 177249487] = v104 + *(float *)&dword_140404A6C[v107 + 177249487];
      *(float *)&dword_140404A6C[v107 + 177249488] = v105 + *(float *)&dword_140404A6C[v107 + 177249488];
      *(float *)&dword_140404A6C[v107 + 177249489] = v106 + *(float *)&dword_140404A6C[v107 + 177249489];
      *(float *)&v107 = *(v87 - 319489);
      v87 += 3;
      v108 = 3 * (int)v107;
      *(float *)&dword_140404A6C[v108 + 177249487] = v104 + *(float *)&dword_140404A6C[v108 + 177249487];
      *(float *)&dword_140404A6C[v108 + 177249488] = v105 + *(float *)&dword_140404A6C[v108 + 177249488];
      *(float *)&dword_140404A6C[v108 + 177249489] = v106 + *(float *)&dword_140404A6C[v108 + 177249489];
      v16 = dword_140404A6C[177495247];
    }
    while ( v86 < (int)dword_140404A6C[177495247] );
  }
  v109 = 0;
  if ( (int)dword_140404A6C[177167565] > 0 )
  {
    v110 = (float *)&dword_140404A6C[177249489];
    do
    {
      v111 = *(v110 - 1);
      v112 = v110;
      v113 = *(v110 - 2);
      v114 = *v110;
      v115 = fsqrt((float)((float)(v113 * v113) + (float)(v111 * v111)) + (float)(v114 * v114));
      if ( v115 == 0.0 )
      {
        v116 = 0.0;
        v117 = 0.0;
        v118 = 0.0;
      }
      else
      {
        v116 = v114 * (float)(1.0 / v115);
        v117 = v111 * (float)(1.0 / v115);
        v118 = (float)(1.0 / v115) * v113;
      }
      *(v110 - 2) = v118;
      ++v109;
      *(v110 - 1) = v117;
      v110 += 3;
      *v112 = v116;
    }
    while ( v109 < (int)dword_140404A6C[177167565] );
    v16 = dword_140404A6C[177495247];
  }
  v119 = (float *)&dword_140404A6C[177814738];
  v120 = 0;
  v121 = (float *)&dword_140404A6C[177863891];
  if ( v16 > 0 )
  {
    v122 = &dword_140404A6C[177863891];
    do
    {
      *((_QWORD *)v122 - 1) = 0;
      ++v120;
      *(_QWORD *)v122 = 0;
      *((_QWORD *)v122 + 1) = 0;
      *((_QWORD *)v122 + 2) = 0;
      v122[6] = 0;
      v122 += 9;
      v16 = dword_140404A6C[177495247];
    }
    while ( v120 < (int)dword_140404A6C[177495247] );
    if ( (int)dword_140404A6C[177495247] > 0 )
    {
      v123 = &dword_140404A6C[177863891];
      v222 = 0;
      v124 = 3;
      v231 = &dword_140404A6C[177863891];
      v125 = 1;
      v233 = 3;
      v126 = 0;
      v227 = 1;
      v127 = (float *)&dword_140404A6C[177814738];
      do
      {
        v228 = v125;
        v128 = v125;
        v226 = v125;
        if ( v125 < v16 )
        {
          v129 = v124;
          v130 = v126 + 3;
          v131 = v127 + 4;
          do
          {
            v132 = 0;
            v232 = 3;
            v133 = v127 - 319490;
            v134 = (float *)v123;
            do
            {
              v135 = 0;
              v136 = 1;
              do
              {
                v137 = 3 * *(_DWORD *)v133;
                v138 = 3 * dword_140404A6C[v130 + 177495248 + v136 % 3];
                if ( *(float *)&dword_140404A6C[v138 + 177167567] == *(float *)&dword_140404A6C[v137 + 177167567]
                  && *(float *)&dword_140404A6C[v138 + 177167568] == *(float *)&dword_140404A6C[v137 + 177167568]
                  && *(float *)&dword_140404A6C[v138 + 177167569] == *(float *)&dword_140404A6C[v137 + 177167569] )
                {
                  v139 = v135 + v129;
                  v140 = (int)(3 * dword_140404A6C[v222 + 177495248 + (v132 + 1) % 3]);
                  v141 = 3 * dword_140404A6C[v135 + 177495248 + v129];
                  if ( *(float *)&dword_140404A6C[v141 + 177167567] == *(float *)&dword_140404A6C[v140 + 177167567]
                    && *(float *)&dword_140404A6C[v141 + 177167568] == *(float *)&dword_140404A6C[v140 + 177167568]
                    && *(float *)&dword_140404A6C[v141 + 177167569] == *(float *)&dword_140404A6C[v140 + 177167569] )
                  {
                    v142 = 3 * v139;
                    *(v134 - 2) = *(v127 - 1) + *(v134 - 2);
                    *(v134 - 1) = *v127 + *(v134 - 1);
                    *v134 = *v134 + v127[1];
                    *(float *)&dword_140404A6C[v142 + 177863889] = *(v127 - 1)
                                                                 + *(float *)&dword_140404A6C[3 * v139 + 177863889];
                    *(float *)&dword_140404A6C[v142 + 177863890] = *(float *)&dword_140404A6C[3 * v139 + 177863890]
                                                                 + *v127;
                    *(float *)&dword_140404A6C[v142 + 177863891] = *(float *)&dword_140404A6C[3 * v139 + 177863891]
                                                                 + v127[1];
                    *(v134 - 2) = *(v134 - 2) + *(v131 - 2);
                    *(v134 - 1) = *(v131 - 1) + *(v134 - 1);
                    *v134 = *v134 + *v131;
                    *(float *)&dword_140404A6C[v142 + 177863889] = *(float *)&dword_140404A6C[3 * v139 + 177863889]
                                                                 + *(v131 - 2);
                    *(float *)&dword_140404A6C[v142 + 177863890] = *(float *)&dword_140404A6C[3 * v139 + 177863890]
                                                                 + *(v131 - 1);
                    *(float *)&dword_140404A6C[v142 + 177863891] = *(float *)&dword_140404A6C[3 * v139 + 177863891]
                                                                 + *v131;
                  }
                }
                ++v136;
                ++v135;
              }
              while ( v135 < 3 );
              ++v132;
              ++v133;
              v134 += 3;
              --v232;
            }
            while ( v232 );
            v130 += 3;
            v16 = dword_140404A6C[177495247];
            v131 += 3;
            ++v226;
            v129 += 3;
            v123 = v231;
          }
          while ( v226 < (int)dword_140404A6C[177495247] );
          v126 = v222;
          v125 = v227;
          v124 = v233;
          v128 = v228;
        }
        ++v125;
        v126 += 3;
        v124 += 3;
        v227 = v125;
        v123 += 9;
        v222 = v126;
        v127 += 3;
        v233 = v124;
        v231 = v123;
      }
      while ( v128 < v16 );
      v17 = v234;
      v121 = (float *)&dword_140404A6C[177863891];
      v2 = v229;
      v83 = (float *)&dword_140404A6C[177249489];
      v3 = v235;
      v119 = (float *)&dword_140404A6C[177814738];
      v5 = v236;
    }
  }
  v143 = 0;
  if ( v16 > 0 )
  {
    do
    {
      v144 = *(v121 - 1);
      v145 = *(v121 - 2);
      v146 = *v121;
      v147 = fsqrt((float)((float)(v145 * v145) + (float)(v144 * v144)) + (float)(v146 * v146));
      if ( v147 == 0.0 )
      {
        v148 = 0.0;
        v149 = 0.0;
        v150 = 0.0;
      }
      else
      {
        v148 = v146 * (float)(1.0 / v147);
        v149 = v144 * (float)(1.0 / v147);
        v150 = v145 * (float)(1.0 / v147);
      }
      *(v121 - 2) = v150;
      *(v121 - 1) = v149;
      *v121 = v148;
      v151 = v121[2];
      v152 = v121[1];
      v153 = v121[3];
      v154 = fsqrt((float)((float)(v152 * v152) + (float)(v151 * v151)) + (float)(v153 * v153));
      if ( v154 == 0.0 )
      {
        v155 = 0.0;
        v156 = 0.0;
        v157 = 0.0;
      }
      else
      {
        v155 = v153 * (float)(1.0 / v154);
        v156 = v151 * (float)(1.0 / v154);
        v157 = v152 * (float)(1.0 / v154);
      }
      v121[1] = v157;
      v121[2] = v156;
      v121[3] = v155;
      v158 = v121[5];
      v159 = v121[4];
      v160 = v121[6];
      v161 = fsqrt((float)((float)(v159 * v159) + (float)(v158 * v158)) + (float)(v160 * v160));
      if ( v161 == 0.0 )
      {
        v162 = 0.0;
        v163 = 0.0;
        v164 = 0.0;
      }
      else
      {
        v162 = v160 * (float)(1.0 / v161);
        v163 = v158 * (float)(1.0 / v161);
        v164 = v159 * (float)(1.0 / v161);
      }
      v121[4] = v164;
      ++v143;
      v121[5] = v163;
      v121[6] = v162;
      v121 += 9;
      v16 = dword_140404A6C[177495247];
    }
    while ( v143 < (int)dword_140404A6C[177495247] );
  }
  v165 = 0;
  if ( (int)dword_140404A6C[177167565] > 0 )
  {
    v166 = *(float *)&dword_1402F6180;
    v167 = *(float *)&dword_1402F617C;
    v168 = *(float *)&dword_1402F6178;
    v169 = *(float *)&dword_1402F6190;
    v170 = *(float *)&dword_1402F618C;
    v171 = *(float *)&dword_1402F6188;
    do
    {
      v172 = *(v83 - 1);
      v173 = *(v83 - 2);
      v174 = *v83;
      v175 = *v83;
      if ( fabs(v172) <= 0.70700002 )
      {
        v176 = v175 * v170;
        v177 = v172 * v169;
        v178 = v173 * v169;
        v179 = v174 * v171;
        v180 = v172 * v171;
        v181 = v173 * v170;
      }
      else
      {
        v176 = v175 * v167;
        v177 = v172 * v166;
        v178 = v173 * v166;
        v179 = v174 * v168;
        v180 = v172 * v168;
        v181 = v173 * v167;
      }
      v182 = v178 - v179;
      v183 = v180 - v181;
      v184 = v176 - v177;
      v185 = fsqrt((float)((float)(v182 * v182) + (float)(v184 * v184)) + (float)(v183 * v183));
      if ( v185 == 0.0 )
      {
        v186 = 0.0;
        v187 = 0.0;
        v188 = 0.0;
      }
      else
      {
        v186 = v183 * (float)(1.0 / v185);
        v187 = v182 * (float)(1.0 / v185);
        v188 = v184 * (float)(1.0 / v185);
      }
      v83[49150] = v188;
      ++v165;
      v83[49151] = v187;
      v83[49152] = v186;
      v83 += 3;
    }
    while ( v165 < (int)dword_140404A6C[177167565] );
    v16 = dword_140404A6C[177495247];
  }
  v189 = 0;
  if ( v16 > 0 )
  {
    v190 = &dword_140404A6C[178011346];
    do
    {
      v191 = 3 * *((_DWORD *)v119 - 319490);
      v192 = dword_140404A6C[v191 + 177167568];
      (*(float *)&sr_mesh_position[0]) = *(float *)&dword_140404A6C[v191 + 177167567];
      v193 = dword_140404A6C[v191 + 177167569];
      sr_mesh_position[1] = v192;
      v194 = *v119;
      sr_mesh_position[2] = v193;
      if ( v5 == 13 && v194 > 0.89999998 )
      {
        *(_QWORD *)(v190 - 1) = 1061158912;
        *(_QWORD *)(v190 + 1) = 1061158912;
        *(_QWORD *)(v190 + 3) = 1061158912;
        v16 = dword_140404A6C[177495247];
      }
      ++v189;
      v119 += 3;
      v190 += 6;
    }
    while ( v189 < v16 );
  }
  v195 = v16;
  if ( v2 == 1 )
  {
    sr_mesh_position[2] = -1069285376;
    sr_mesh_position[1] = -1090519040;
    (*(float *)&sr_mesh_position[0]) = 0.0;
    sub_140002D00(&(*(float *)&sr_mesh_position[0]), 1.03125, 0.125, 0.0625);
    sr_mesh_position[1] = -1107296256;
    sub_140002D00(&(*(float *)&sr_mesh_position[0]), 0.375, 0.3125, 0.03125);
    v16 = dword_140404A6C[177495247];
  }
  if ( (int)v195 < v16 )
  {
    v196 = (__int64)(uintptr_t)&dword_140404A6C[6 * v195 + 178011346];
    do
    {
      *(_QWORD *)(v196 - 4) = 1065353216;
      LODWORD(v195) = v195 + 1;
      *(_QWORD *)(v196 + 4) = 1065353216;
      *(_QWORD *)(v196 + 12) = 1065353216;
      v196 += 24;
    }
    while ( (int)v195 < (int)dword_140404A6C[177495247] );
  }
  v197 = *(unsigned int *)((char *)&dword_140404A6C[346709019] + v3);
  v198 = 0;
  *(unsigned int *)((char *)&dword_140404A6C[178527536] + v17) = 0;
  v199 = 0;
  if ( v197 > 0 )
  {
    v200 = (_DWORD *)((__int64)(uintptr_t)((unsigned char *)&dword_140404A6C[346709035] + v3));
    do
    {
      if ( *(v200 - 15) == 4 && *v200 == 1 )
      {
        v201 = (float *)(v200 - 10);
        v202 = 0;
        v203 = 2;
        *(unsigned int *)((char *)&dword_140404A6C[13 * v198 + 178527549] + v17) = v199;
        do
        {
          v204 = 3 * *((_DWORD *)v201 - 4);
          v205 = dword_140404A6C[v204 + 177167567];
          v206 = dword_140404A6C[v204 + 177167568];
          v207 = dword_140404A6C[v204 + 177167569];
          if ( *(_DWORD *)v201 != -1 )
          {
            v208 = v201[4];
            v209 = 3 * *(_DWORD *)v201;
            *(float *)&v205 = (float)((float)(*(float *)&dword_140404A6C[v209 + 177167567] - *(float *)&v205) * v208)
                            + *(float *)&v205;
            *(float *)&v206 = (float)((float)(*(float *)&dword_140404A6C[v209 + 177167568] - *(float *)&v206) * v208)
                            + *(float *)&v206;
            *(float *)&v207 = (float)((float)(*(float *)&dword_140404A6C[v209 + 177167569] - *(float *)&v207) * v208)
                            + *(float *)&v207;
          }
          if ( v2 != 13 )
          {
            *(float *)&v205 = *(float *)&v205 * 0.97500002;
            *(float *)&v206 = *(float *)&v206 * 0.97500002;
            *(float *)&v207 = *(float *)&v207 * 0.97500002;
          }
          v210 = v17 + v202 + 52LL * *(int *)((char *)&dword_140404A6C[178527536] + v17);
          v211 = 3 * *((_DWORD *)v201 - 3);
          *(unsigned int *)((char *)&dword_140404A6C[178527537] + v210) = v205;
          *(unsigned int *)((char *)&dword_140404A6C[178527538] + v210) = v206;
          *(unsigned int *)((char *)&dword_140404A6C[178527539] + v210) = v207;
          v212 = dword_140404A6C[v211 + 177167567];
          v213 = dword_140404A6C[v211 + 177167568];
          v214 = dword_140404A6C[v211 + 177167569];
          v215 = *((_DWORD *)v201 + 1);
          if ( v215 != -1 )
          {
            v216 = v201[5];
            v217 = 3 * v215;
            *(float *)&v212 = (float)((float)(*(float *)&dword_140404A6C[v217 + 177167567] - *(float *)&v212) * v216)
                            + *(float *)&v212;
            *(float *)&v213 = (float)((float)(*(float *)&dword_140404A6C[v217 + 177167568] - *(float *)&v213) * v216)
                            + *(float *)&v213;
            *(float *)&v214 = (float)((float)(*(float *)&dword_140404A6C[v217 + 177167569] - *(float *)&v214) * v216)
                            + *(float *)&v214;
          }
          if ( v2 != 13 )
          {
            *(float *)&v212 = *(float *)&v212 * 0.97500002;
            *(float *)&v213 = *(float *)&v213 * 0.97500002;
            *(float *)&v214 = *(float *)&v214 * 0.97500002;
          }
          v201 += 2;
          v218 = v202 + 52LL * *(int *)((char *)&dword_140404A6C[178527536] + v17);
          v202 += 24;
          v219 = v17 + v218;
          *(unsigned int *)((char *)&dword_140404A6C[178527540] + v219) = v212;
          *(unsigned int *)((char *)&dword_140404A6C[178527541] + v219) = v213;
          *(unsigned int *)((char *)&dword_140404A6C[178527542] + v219) = v214;
          --v203;
        }
        while ( v203 );
        v198 = *(unsigned int *)((char *)&dword_140404A6C[178527536] + v17) + 1;
        *(unsigned int *)((char *)&dword_140404A6C[178527536] + v17) = v198;
      }
      ++v199;
      v200 += 16;
    }
    while ( v199 < v197 );
  }
  sub_1401449C0(v230, 1);
  return;
}

// 140278FF0: using guessed type __int128 xmmword_140278FF0;
// 140279020: using guessed type __int128 xmmword_140279020;
// 140279040: using guessed type __int128 xmmword_140279040;
// 140279060: using guessed type __int128 xmmword_140279060;
// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (00000001400636E0) ----------------------------------------------------
double            sub_1400636E0(int a1, int a2)
{
  double result; // xmm0_8
  int v3; // r15d
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  float v10; // xmm8_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float *v13; // rax
  unsigned __int64 v14; // rcx
  float *v15; // rcx
  __int64 v16; // rax
  int v17; // r11d
  __int64 v18; // r14
  int v19; // eax
  __int64 v20; // r10
  float v21; // xmm8_4
  float v22; // xmm9_4
  float v23; // xmm10_4
  float *v24; // rdx
  unsigned __int64 v25; // r9
  __int64 v26; // rcx
  unsigned int v27; // xmm1_4
  float v28; // xmm0_4
  unsigned int v29; // xmm1_4
  float v30; // xmm0_4
  __int64 v31; // rcx
  float v32; // xmm0_4
  unsigned int v33; // xmm1_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  float v36; // xmm0_4
  unsigned int v37; // xmm1_4
  float v38; // xmm0_4
  __int64 v39; // rcx
  float v40; // xmm0_4
  float *v41; // rdx
  __int64 v42; // r9
  __int64 v43; // rcx
  unsigned int v44; // xmm1_4
  float v45; // xmm0_4
  __int64 v46; // rsi
  unsigned int *v47; // rbx
  __int64 v48; // rsi
  float v49; // xmm6_4
  float v50; // xmm7_4
  float v51; // xmm5_4
  float v52; // xmm4_4
  __int64 v53; // r10
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  float v59; // xmm2_4
  float v60; // xmm1_4
  float v61; // xmm5_4
  float v62; // xmm3_4
  float v63; // xmm0_4
  unsigned int v64; // xmm2_4
  float v65; // xmm4_4
  float v66; // xmm7_4
  __int64 v67; // rsi
  unsigned __int64 v68; // r9
  __int64 v69; // rbx
  unsigned int *v70; // r8
  unsigned int *v71; // r8
  __int64 v72; // r10
  __int64 v73; // r9
  unsigned int *v74; // r8
  unsigned int v75; // r10d
  unsigned int v76; // r11d
  unsigned int v77; // edx
  __int64 v78; // rax
  __int64 v79; // rax
  int v80; // ecx
  float *v81; // rbx
  unsigned int *v82; // rax
  int v83; // r10d
  float *v84; // r8
  __int64 v85; // r9
  float v86; // xmm4_4
  float v87; // xmm0_4
  float v88; // xmm5_4
  __int64 v89; // rdx
  __int64 v90; // rax
  float v91; // xmm1_4
  float v92; // xmm2_4
  float v93; // xmm7_4
  float v94; // xmm3_4
  float v95; // xmm6_4
  float v96; // xmm4_4
  float v97; // xmm0_4
  float v98; // xmm8_4
  float v99; // xmm7_4
  float v100; // xmm0_4
  float v101; // xmm3_4
  float v102; // xmm4_4
  float v103; // xmm2_4
  __int64 v104; // rax
  __int64 v105; // rax
  int v106; // r8d
  float *v107; // rax
  float v108; // xmm4_4
  float *v109; // r9
  float v110; // xmm5_4
  float v111; // xmm3_4
  float v112; // xmm1_4
  float v113; // xmm3_4
  float v114; // xmm4_4
  float v115; // xmm5_4
  int v116; // edx
  float *v117; // r9
  unsigned int *v118; // rcx
  unsigned int *v119; // rcx
  float *v120; // rdi
  __int64 v121; // r9
  int v122; // r8d
  int v123; // edx
  int v124; // r10d
  __int64 v125; // r12
  int v126; // r15d
  float *v127; // rbx
  int v128; // ebp
  float *v129; // r14
  float *v130; // r9
  __int64 v131; // r10
  int v132; // r11d
  __int64 v133; // rdx
  unsigned int v134; // eax
  __int64 v135; // rsi
  __int64 v136; // rcx
  unsigned int v137; // eax
  __int64 v138; // rax
  int v139; // r8d
  float v140; // xmm3_4
  float v141; // xmm4_4
  float v142; // xmm5_4
  float v143; // xmm1_4
  float v144; // xmm0_4
  float v145; // xmm1_4
  float v146; // xmm2_4
  float v147; // xmm0_4
  float v148; // xmm3_4
  float v149; // xmm4_4
  float v150; // xmm5_4
  float v151; // xmm1_4
  float v152; // xmm0_4
  float v153; // xmm1_4
  float v154; // xmm2_4
  float v155; // xmm0_4
  float v156; // xmm3_4
  float v157; // xmm4_4
  float v158; // xmm5_4
  float v159; // xmm1_4
  float v160; // xmm0_4
  float v161; // xmm1_4
  float v162; // xmm2_4
  float v163; // xmm0_4
  int v164; // ecx
  float v165; // xmm7_4
  float v166; // xmm8_4
  float v167; // xmm9_4
  float v168; // xmm10_4
  float v169; // xmm13_4
  float v170; // xmm14_4
  float v171; // xmm1_4
  float v172; // xmm2_4
  float v173; // xmm6_4
  float v174; // xmm4_4
  float v175; // xmm5_4
  float v176; // xmm3_4
  float v177; // xmm0_4
  float v178; // xmm4_4
  float v179; // xmm1_4
  float v180; // xmm0_4
  float v181; // xmm1_4
  float v182; // xmm2_4
  float v183; // xmm0_4
  unsigned int *v184; // rcx
  __int64 v185; // rdx
  __int64 v186; // rbx
  __int64 v187; // rax
  int v188; // [rsp+20h] [rbp-118h]
  int v189; // [rsp+24h] [rbp-114h]
  unsigned int *v190; // [rsp+28h] [rbp-110h]
  __int64 v191; // [rsp+30h] [rbp-108h]
  __int64 v192; // [rsp+38h] [rbp-100h]
  unsigned __int64 v193; // [rsp+40h] [rbp-F8h] BYREF
  int v194; // [rsp+48h] [rbp-F0h]
  int v197; // [rsp+150h] [rbp+18h]
  int v198; // [rsp+158h] [rbp+20h]

  v3 = a2;
  v4 = 24944LL * a2;
  v5 = a1;
  v6 = a2;
  v7 = (int)dword_140404A6C[v4 + 346707733];
  if ( !(_DWORD)v7 )
    return result;
  v8 = 0;
  v9 = (int)dword_140404A6C[v4 + 346707733];
  v10 = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  if ( v7 >= 4 )
  {
    v13 = (float *)&dword_140404A6C[v4 + 346707737];
    v14 = ((unsigned __int64)(v7 - 4) >> 2) + 1;
    v8 = 4 * v14;
    do
    {
      v10 = (float)((float)((float)(v10 + *(v13 - 2)) + v13[3]) + v13[8]) + v13[13];
      v11 = (float)((float)((float)(v11 + *(v13 - 1)) + v13[4]) + v13[9]) + v13[14];
      v12 = (float)((float)((float)(v12 + *v13) + v13[5]) + v13[10]) + v13[15];
      v13 += 20;
      --v14;
    }
    while ( v14 );
  }
  if ( v8 < v7 )
  {
    v15 = (float *)&dword_140404A6C[5 * v8 + 346707737 + v4];
    v16 = v7 - v8;
    do
    {
      v10 = v10 + *(v15 - 2);
      v11 = v11 + *(v15 - 1);
      v12 = v12 + *v15;
      v15 += 5;
      --v16;
    }
    while ( v16 );
  }
  v17 = 0;
  v18 = 3632 * v5;
  v19 = 0;
  dword_140404A6C[177167565] = 0;
  v20 = 0;
  v193 = v18;
  dword_140404A6C[177495247] = 0;
  v21 = v10 * (float)(1.0 / (float)(int)v7);
  v22 = v11 * (float)(1.0 / (float)(int)v7);
  v23 = v12 * (float)(1.0 / (float)(int)v7);
  *(float *)((char *)&dword_140404A6C[178527485] + v18) = v21;
  *(float *)((char *)&dword_140404A6C[178527486] + v18) = v22;
  *(float *)((char *)&dword_140404A6C[178527487] + v18) = v23;
  if ( v7 >= 4 )
  {
    v24 = (float *)&dword_140404A6C[v4 + 346707737];
    v25 = ((unsigned __int64)(v7 - 4) >> 2) + 1;
    v20 = 4 * v25;
    do
    {
      v26 = 3 * v17;
      *(float *)&v27 = *(v24 - 1) - v22;
      *(float *)&dword_140404A6C[v26 + 177167567] = *(v24 - 2) - v21;
      v28 = *v24;
      dword_140404A6C[v26 + 177167568] = v27;
      *(float *)&v29 = v24[4] - v22;
      *(float *)&dword_140404A6C[v26 + 177167569] = v28 - v23;
      v30 = v24[3];
      ++dword_140404A6C[177167565];
      v31 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v31 + 177167567] = v30 - v21;
      v32 = v24[5];
      dword_140404A6C[v31 + 177167568] = v29;
      *(float *)&v33 = v24[9] - v22;
      *(float *)&dword_140404A6C[v31 + 177167569] = v32 - v23;
      v34 = v24[8];
      ++dword_140404A6C[177167565];
      v35 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v35 + 177167567] = v34 - v21;
      v36 = v24[10];
      dword_140404A6C[v35 + 177167568] = v33;
      *(float *)&v37 = v24[14] - v22;
      *(float *)&dword_140404A6C[v35 + 177167569] = v36 - v23;
      v38 = v24[13];
      ++dword_140404A6C[177167565];
      v39 = 3 * dword_140404A6C[177167565];
      *(float *)&dword_140404A6C[v39 + 177167567] = v38 - v21;
      v40 = v24[15];
      v24 += 20;
      dword_140404A6C[v39 + 177167568] = v37;
      *(float *)&dword_140404A6C[v39 + 177167569] = v40 - v23;
      v17 = ++dword_140404A6C[177167565];
      --v25;
    }
    while ( v25 );
    if ( v20 >= v9 )
      goto LABEL_16;
    goto LABEL_14;
  }
  if ( (int)v7 > 0 )
  {
LABEL_14:
    v41 = (float *)&dword_140404A6C[5 * v20 + 346707737 + v4];
    v42 = v9 - v20;
    do
    {
      v43 = 3 * v17;
      *(float *)&v44 = *(v41 - 1) - v22;
      *(float *)&dword_140404A6C[v43 + 177167567] = *(v41 - 2) - v21;
      v45 = *v41;
      v41 += 5;
      dword_140404A6C[v43 + 177167568] = v44;
      *(float *)&dword_140404A6C[v43 + 177167569] = v45 - v23;
      v17 = ++dword_140404A6C[177167565];
      --v42;
    }
    while ( v42 );
LABEL_16:
    v19 = dword_140404A6C[177495247];
  }
  v46 = (int)dword_140404A6C[v4 + 346713116];
  if ( v9 < v46 )
  {
    v47 = &dword_140404A6C[24944 * v6 + 346713117 + 8 * v9];
    v48 = v46 - v9;
    do
    {
      v49 = *((float *)v47 + 4);
      v50 = *((float *)v47 + 5);
      v51 = *((float *)v47 + 6);
      v52 = *((float *)v47 + 7);
      v53 = v4 * 4 + 20LL * (int)*v47;
      v54 = v4 * 4 + 20LL * (int)v47[1];
      v55 = v4 * 4 + 20LL * (int)v47[2];
      v56 = (int)v47[3];
      v47 += 8;
      v57 = v4 * 4 + 20 * v56;
      v58 = 3 * v17;
      v59 = (float)((float)(v50 * *(float *)((char *)&dword_140404A6C[346707735] + v54))
                  + (float)(v49 * *(float *)((char *)&dword_140404A6C[346707735] + v53)))
          + (float)(v51 * *(float *)((char *)&dword_140404A6C[346707735] + v55));
      v60 = v51 * *(float *)((char *)&dword_140404A6C[346707736] + v55);
      v61 = v51 * *(float *)((char *)&dword_140404A6C[346707737] + v55);
      v62 = (float)(v50 * *(float *)((char *)&dword_140404A6C[346707736] + v54))
          + (float)(v49 * *(float *)((char *)&dword_140404A6C[346707736] + v53));
      v63 = v52 * *(float *)((char *)&dword_140404A6C[346707736] + v57);
      *(float *)&v64 = (float)(v59 + (float)(v52 * *(float *)((char *)&dword_140404A6C[346707735] + v57))) - v21;
      v65 = v52 * *(float *)((char *)&dword_140404A6C[346707737] + v57);
      v66 = (float)(v50 * *(float *)((char *)&dword_140404A6C[346707737] + v54))
          + (float)(v49 * *(float *)((char *)&dword_140404A6C[346707737] + v53));
      dword_140404A6C[v58 + 177167567] = v64;
      *(float *)&dword_140404A6C[v58 + 177167568] = (float)((float)(v62 + v60) + v63) - v22;
      *(float *)&dword_140404A6C[v58 + 177167569] = (float)((float)(v66 + v61) + v65) - v23;
      v17 = ++dword_140404A6C[177167565];
      --v48;
    }
    while ( v48 );
    v19 = dword_140404A6C[177495247];
    v3 = a2;
  }
  v67 = dword_140404A6C[v4 + 346709019];
  LODWORD(v68) = 0;
  v69 = 0;
  if ( (int)v67 >= 4LL )
  {
    v70 = &dword_140404A6C[v4 + 346709021];
    v68 = ((unsigned __int64)((int)v67 - 4LL) >> 2) + 1;
    v69 = 4 * v68;
    do
    {
      if ( *(v70 - 1) == 3 )
      {
        dword_140404A6C[3 * v19 + 177495248] = *v70;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70[1];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70[2];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v19 = ++dword_140404A6C[177495247];
      }
      if ( v70[15] == 3 )
      {
        dword_140404A6C[3 * v19 + 177495248] = v70[16];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70[17];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70[18];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v19 = ++dword_140404A6C[177495247];
      }
      if ( v70[31] == 3 )
      {
        dword_140404A6C[3 * v19 + 177495248] = v70[32];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70[33];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70[34];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v19 = ++dword_140404A6C[177495247];
      }
      if ( v70[47] == 3 )
      {
        dword_140404A6C[3 * v19 + 177495248] = v70[48];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70[49];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70[50];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        v19 = ++dword_140404A6C[177495247];
      }
      v70 += 64;
      --v68;
    }
    while ( v68 );
    v17 = dword_140404A6C[177167565];
  }
  if ( v69 < (int)v67 )
  {
    v71 = &dword_140404A6C[16 * (v69 + 1559 * v6) + 346709021];
    v72 = (int)v67 - v69;
    do
    {
      if ( *(v71 - 1) == 3 )
      {
        dword_140404A6C[3 * v19 + 177495248] = *v71;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v71[1];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v71[2];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = v68;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = v68;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = v68;
        v19 = ++dword_140404A6C[177495247];
      }
      v71 += 16;
      --v72;
    }
    while ( v72 );
    v17 = dword_140404A6C[177167565];
  }
  if ( (int)v67 > 0 )
  {
    v73 = v67;
    v74 = &dword_140404A6C[v4 + 346709021];
    do
    {
      if ( *(v74 - 1) == 4 )
      {
        v75 = *v74;
        v76 = v74[14];
        dword_140404A6C[3 * v19 + 177495248] = *v74;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v74[1];
        v77 = v74[2];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v77;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        if ( v76 == 1 )
        {
          v78 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v78 + 178011345] = 1061158912;
          dword_140404A6C[v78 + 178011346] = 1065353216;
          dword_140404A6C[v78 + 178011347] = 1061158912;
          dword_140404A6C[v78 + 178011348] = 1065353216;
          dword_140404A6C[v78 + 178011349] = 1061158912;
          dword_140404A6C[v78 + 178011350] = 1065353216;
        }
        ++dword_140404A6C[177495247];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v75;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v77;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v74[3];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = 0;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = 1099169792;
        dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = 0;
        if ( v76 == 1 )
        {
          v79 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v79 + 178011345] = 1061158912;
          dword_140404A6C[v79 + 178011346] = 1065353216;
          dword_140404A6C[v79 + 178011347] = 1061158912;
          dword_140404A6C[v79 + 178011348] = 1065353216;
          dword_140404A6C[v79 + 178011349] = 1061158912;
          dword_140404A6C[v79 + 178011350] = 1065353216;
        }
        v19 = ++dword_140404A6C[177495247];
      }
      v74 += 16;
      --v73;
    }
    while ( v73 );
    v17 = dword_140404A6C[177167565];
  }
  v80 = 0;
  dword_140404A6C[178519250] = 0;
  v81 = (float *)&dword_140404A6C[177249489];
  if ( v17 > 0 )
  {
    v82 = &dword_140404A6C[177249489];
    do
    {
      *((_QWORD *)v82 - 1) = 0;
      ++v80;
      *v82 = 0;
      v82 += 3;
      v17 = dword_140404A6C[177167565];
    }
    while ( v80 < (int)dword_140404A6C[177167565] );
    v19 = dword_140404A6C[177495247];
  }
  v83 = 0;
  if ( v19 > 0 )
  {
    v84 = (float *)&dword_140404A6C[177814739];
    do
    {
      v85 = 3 * *((_DWORD *)v84 - 319491);
      v86 = *(float *)&dword_140404A6C[v85 + 177167568];
      v87 = *(float *)&dword_140404A6C[v85 + 177167567];
      v88 = *(float *)&dword_140404A6C[v85 + 177167569];
      v89 = 3 * *((_DWORD *)v84 - 319490);
      v90 = 3 * *((_DWORD *)v84 - 319489);
      v91 = *(float *)&dword_140404A6C[v89 + 177167569] - v88;
      v92 = *(float *)&dword_140404A6C[v90 + 177167568] - v86;
      v93 = *(float *)&dword_140404A6C[v90 + 177167569] - v88;
      v94 = *(float *)&dword_140404A6C[v89 + 177167568] - v86;
      v95 = *(float *)&dword_140404A6C[v89 + 177167567] - v87;
      v96 = (float)(v92 * v91) - (float)(v93 * v94);
      v97 = *(float *)&dword_140404A6C[v90 + 177167567] - v87;
      v98 = (float)(v97 * v94) - (float)(v92 * v95);
      v99 = (float)(v93 * v95) - (float)(v97 * v91);
      v100 = fsqrt((float)((float)(v99 * v99) + (float)(v96 * v96)) + (float)(v98 * v98));
      if ( v100 == 0.0 )
      {
        v101 = 0.0;
        v102 = 0.0;
        v103 = 0.0;
      }
      else
      {
        v101 = (float)(1.0 / v100) * v96;
        v102 = (float)(1.0 / v100) * v99;
        v103 = (float)(1.0 / v100) * v98;
      }
      *(v84 - 2) = v101;
      *(v84 - 1) = v102;
      *v84 = v103;
      ++v83;
      *(float *)&dword_140404A6C[v85 + 177249487] = v101 + *(float *)&dword_140404A6C[v85 + 177249487];
      *(float *)&dword_140404A6C[v85 + 177249488] = v102 + *(float *)&dword_140404A6C[v85 + 177249488];
      *(float *)&dword_140404A6C[v85 + 177249489] = v103 + *(float *)&dword_140404A6C[v85 + 177249489];
      v104 = 3 * *((_DWORD *)v84 - 319490);
      *(float *)&dword_140404A6C[v104 + 177249487] = v101 + *(float *)&dword_140404A6C[v104 + 177249487];
      *(float *)&dword_140404A6C[v104 + 177249488] = v102 + *(float *)&dword_140404A6C[v104 + 177249488];
      *(float *)&dword_140404A6C[v104 + 177249489] = v103 + *(float *)&dword_140404A6C[v104 + 177249489];
      *(float *)&v104 = *(v84 - 319489);
      v84 += 3;
      v105 = 3 * (int)v104;
      *(float *)&dword_140404A6C[v105 + 177249487] = v101 + *(float *)&dword_140404A6C[v105 + 177249487];
      *(float *)&dword_140404A6C[v105 + 177249488] = v102 + *(float *)&dword_140404A6C[v105 + 177249488];
      *(float *)&dword_140404A6C[v105 + 177249489] = v103 + *(float *)&dword_140404A6C[v105 + 177249489];
      v19 = dword_140404A6C[177495247];
    }
    while ( v83 < (int)dword_140404A6C[177495247] );
    v17 = dword_140404A6C[177167565];
  }
  v106 = 0;
  if ( v17 > 0 )
  {
    v107 = (float *)&dword_140404A6C[177249489];
    do
    {
      v108 = *(v107 - 1);
      v109 = v107;
      v110 = *(v107 - 2);
      v111 = *v107;
      v112 = fsqrt((float)((float)(v110 * v110) + (float)(v108 * v108)) + (float)(v111 * v111));
      if ( v112 == 0.0 )
      {
        v113 = 0.0;
        v114 = 0.0;
        v115 = 0.0;
      }
      else
      {
        v113 = v111 * (float)(1.0 / v112);
        v114 = v108 * (float)(1.0 / v112);
        v115 = v110 * (float)(1.0 / v112);
      }
      *(v107 - 2) = v115;
      ++v106;
      *(v107 - 1) = v114;
      v107 += 3;
      *v109 = v113;
      v17 = dword_140404A6C[177167565];
    }
    while ( v106 < (int)dword_140404A6C[177167565] );
    v19 = dword_140404A6C[177495247];
  }
  v116 = 0;
  v117 = (float *)&dword_140404A6C[177863891];
  if ( v19 > 0 )
  {
    v118 = &dword_140404A6C[177863891];
    do
    {
      *((_QWORD *)v118 - 1) = 0;
      ++v116;
      *(_QWORD *)v118 = 0;
      *((_QWORD *)v118 + 1) = 0;
      *((_QWORD *)v118 + 2) = 0;
      v118[6] = 0;
      v118 += 9;
      v19 = dword_140404A6C[177495247];
    }
    while ( v116 < (int)dword_140404A6C[177495247] );
    if ( (int)dword_140404A6C[177495247] > 0 )
    {
      v119 = &dword_140404A6C[177863891];
      v120 = (float *)&dword_140404A6C[177814738];
      v121 = 3;
      v190 = &dword_140404A6C[177863891];
      v122 = 0;
      v192 = 3;
      v123 = 1;
      v197 = 0;
      v188 = 1;
      do
      {
        v189 = v123;
        v124 = v123;
        v198 = v123;
        if ( v123 < v19 )
        {
          v125 = v121;
          v126 = v122 + 3;
          v127 = v120 + 4;
          do
          {
            v128 = 0;
            v191 = 3;
            v129 = v120 - 319490;
            v130 = (float *)v119;
            do
            {
              v131 = 0;
              v132 = 1;
              do
              {
                v133 = 3 * *(_DWORD *)v129;
                v134 = 3 * dword_140404A6C[v126 + 177495248 + v132 % 3];
                if ( *(float *)&dword_140404A6C[v134 + 177167567] == *(float *)&dword_140404A6C[v133 + 177167567]
                  && *(float *)&dword_140404A6C[v134 + 177167568] == *(float *)&dword_140404A6C[v133 + 177167568]
                  && *(float *)&dword_140404A6C[v134 + 177167569] == *(float *)&dword_140404A6C[v133 + 177167569] )
                {
                  v135 = v131 + v125;
                  v136 = (int)(3 * dword_140404A6C[(v128 + 1) % 3 + 177495248 + v197]);
                  v137 = 3 * dword_140404A6C[v131 + 177495248 + v125];
                  if ( *(float *)&dword_140404A6C[v137 + 177167567] == *(float *)&dword_140404A6C[v136 + 177167567]
                    && *(float *)&dword_140404A6C[v137 + 177167568] == *(float *)&dword_140404A6C[v136 + 177167568]
                    && *(float *)&dword_140404A6C[v137 + 177167569] == *(float *)&dword_140404A6C[v136 + 177167569] )
                  {
                    v138 = 3 * v135;
                    *(v130 - 2) = *(v120 - 1) + *(v130 - 2);
                    *(v130 - 1) = *v120 + *(v130 - 1);
                    *v130 = *v130 + v120[1];
                    *(float *)&dword_140404A6C[v138 + 177863889] = *(float *)&dword_140404A6C[3 * v135 + 177863889]
                                                                 + *(v120 - 1);
                    *(float *)&dword_140404A6C[v138 + 177863890] = *(float *)&dword_140404A6C[3 * v135 + 177863890]
                                                                 + *v120;
                    *(float *)&dword_140404A6C[v138 + 177863891] = *(float *)&dword_140404A6C[3 * v135 + 177863891]
                                                                 + v120[1];
                    *(v130 - 2) = *(v130 - 2) + *(v127 - 2);
                    *(v130 - 1) = *(v127 - 1) + *(v130 - 1);
                    *v130 = *v130 + *v127;
                    *(float *)&dword_140404A6C[v138 + 177863889] = *(float *)&dword_140404A6C[3 * v135 + 177863889]
                                                                 + *(v127 - 2);
                    *(float *)&dword_140404A6C[v138 + 177863890] = *(float *)&dword_140404A6C[3 * v135 + 177863890]
                                                                 + *(v127 - 1);
                    *(float *)&dword_140404A6C[v138 + 177863891] = *(float *)&dword_140404A6C[3 * v135 + 177863891]
                                                                 + *v127;
                  }
                }
                ++v132;
                ++v131;
              }
              while ( v131 < 3 );
              ++v128;
              ++v129;
              v130 += 3;
              --v191;
            }
            while ( v191 );
            v126 += 3;
            v19 = dword_140404A6C[177495247];
            v127 += 3;
            ++v198;
            v125 += 3;
            v119 = v190;
          }
          while ( v198 < (int)dword_140404A6C[177495247] );
          v123 = v188;
          v122 = v197;
          v121 = v192;
          v124 = v189;
        }
        ++v123;
        v122 += 3;
        v121 += 3;
        v188 = v123;
        v119 += 9;
        v197 = v122;
        v120 += 3;
        v192 = v121;
        v190 = v119;
      }
      while ( v124 < v19 );
      v18 = v193;
      v117 = (float *)&dword_140404A6C[177863891];
      v3 = a2;
      v81 = (float *)&dword_140404A6C[177249489];
      LODWORD(v5) = a1;
    }
    v17 = dword_140404A6C[177167565];
  }
  v139 = 0;
  if ( v19 > 0 )
  {
    do
    {
      v140 = *(v117 - 1);
      v141 = *(v117 - 2);
      v142 = *v117;
      v143 = fsqrt((float)((float)(v141 * v141) + (float)(v140 * v140)) + (float)(v142 * v142));
      if ( v143 == 0.0 )
      {
        v145 = 0.0;
        v146 = 0.0;
        v147 = 0.0;
      }
      else
      {
        v144 = 1.0 / v143;
        v145 = (float)(1.0 / v143) * v142;
        v146 = v144 * v140;
        v147 = v144 * v141;
      }
      *(v117 - 2) = v147;
      *(v117 - 1) = v146;
      *v117 = v145;
      v148 = v117[2];
      v149 = v117[1];
      v150 = v117[3];
      v151 = fsqrt((float)((float)(v149 * v149) + (float)(v148 * v148)) + (float)(v150 * v150));
      if ( v151 == 0.0 )
      {
        v153 = 0.0;
        v154 = 0.0;
        v155 = 0.0;
      }
      else
      {
        v152 = 1.0 / v151;
        v153 = (float)(1.0 / v151) * v150;
        v154 = v152 * v148;
        v155 = v152 * v149;
      }
      v117[1] = v155;
      v117[2] = v154;
      v117[3] = v153;
      v156 = v117[5];
      v157 = v117[4];
      v158 = v117[6];
      v159 = fsqrt((float)((float)(v157 * v157) + (float)(v156 * v156)) + (float)(v158 * v158));
      if ( v159 == 0.0 )
      {
        v161 = 0.0;
        v162 = 0.0;
        v163 = 0.0;
      }
      else
      {
        v160 = 1.0 / v159;
        v161 = (float)(1.0 / v159) * v158;
        v162 = v160 * v156;
        v163 = v160 * v157;
      }
      v117[4] = v163;
      ++v139;
      v117[5] = v162;
      v117[6] = v161;
      v117 += 9;
      v19 = dword_140404A6C[177495247];
    }
    while ( v139 < (int)dword_140404A6C[177495247] );
    v17 = dword_140404A6C[177167565];
  }
  v164 = 0;
  if ( v17 > 0 )
  {
    v165 = *(float *)&dword_1402F6180;
    v166 = *(float *)&dword_1402F617C;
    v167 = *(float *)&dword_1402F6178;
    v168 = *(float *)&dword_1402F618C;
    v169 = *(float *)&dword_1402F6190;
    v170 = *(float *)&dword_1402F6188;
    do
    {
      v171 = *(v81 - 1);
      v172 = *(v81 - 2);
      v173 = *v81;
      if ( fabs(v171) <= 0.70700002 )
      {
        v174 = v170;
        v175 = (float)(v168 * v173) - (float)(v169 * v171);
        v176 = (float)(v169 * v172) - (float)(v170 * v173);
        v177 = v168;
      }
      else
      {
        v174 = v167;
        v175 = (float)(v166 * v173) - (float)(v165 * v171);
        v176 = (float)(v165 * v172) - (float)(v167 * v173);
        v177 = v166;
      }
      v178 = (float)(v174 * v171) - (float)(v177 * v172);
      v179 = fsqrt((float)((float)(v176 * v176) + (float)(v175 * v175)) + (float)(v178 * v178));
      if ( v179 == 0.0 )
      {
        v181 = 0.0;
        v182 = 0.0;
        v183 = 0.0;
      }
      else
      {
        v180 = 1.0 / v179;
        v181 = (float)(1.0 / v179) * v178;
        v182 = v180 * v176;
        v183 = v180 * v175;
      }
      v81[49150] = v183;
      ++v164;
      v81[49151] = v182;
      v81[49152] = v181;
      v81 += 3;
    }
    while ( v164 < (int)dword_140404A6C[177167565] );
    v19 = dword_140404A6C[177495247];
  }
  if ( v19 > 0 )
  {
    v184 = &dword_140404A6C[177495248];
    v185 = (unsigned int)v19;
    do
    {
      v184 += 3;
      --v185;
    }
    while ( v185 );
  }
  v186 = v19;
  if ( v3 == 1 )
  {
    v194 = -1069285376;
    v193 = 0xBF00000000000000uLL;
    sub_140002D00((float *)&v193, 1.03125, 0.125, 0.0625);
    HIDWORD(v193) = -1107296256;
    sub_140002D00((float *)&v193, 0.375, 0.3125, 0.03125);
    v19 = dword_140404A6C[177495247];
  }
  if ( (int)v186 < v19 )
  {
    v187 = (__int64)(uintptr_t)&dword_140404A6C[6 * v186 + 178011346];
    do
    {
      *(_QWORD *)(v187 - 4) = 1065353216;
      LODWORD(v186) = v186 + 1;
      *(_QWORD *)(v187 + 4) = 1065353216;
      *(_QWORD *)(v187 + 12) = 1065353216;
      v187 += 24;
    }
    while ( (int)v186 < (int)dword_140404A6C[177495247] );
  }
  *(unsigned int *)((char *)&dword_140404A6C[178527536] + v18) = 0;
  return sub_1401449C0(v5, 1);
}

// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (0000000140064FF0) ----------------------------------------------------
double            sub_140064FF0(int a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  unsigned int v5; // eax
  unsigned int v6; // r8d
  __int64 v7; // r11
  __int64 v8; // r9
  unsigned int *v9; // rdx
  unsigned __int64 v10; // r10
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned int *v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r10
  unsigned int *v21; // r8
  unsigned int v22; // r11d
  int v23; // r9d
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r10
  unsigned int *v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax

  v2 = a2;
  v3 = 45072LL * a2;
  v4 = a1;
  v5 = 0;
  dword_140404A6C[177167565] = 0;
  v6 = 0;
  dword_140404A6C[177495247] = 0;
  v7 = 0;
  v8 = (int)dword_140404A6C[v3 + 335170684];
  if ( v8 >= 4 )
  {
    v9 = &dword_140404A6C[v3 + 335170687];
    v10 = ((unsigned __int64)(v8 - 4) >> 2) + 1;
    v7 = 4 * v10;
    do
    {
      v11 = (int)(3 * v6);
      v12 = *(v9 - 2);
      v9 += 12;
      dword_140404A6C[v11 + 177167567] = v12;
      dword_140404A6C[v11 + 177167568] = *(v9 - 13);
      dword_140404A6C[v11 + 177167569] = *(v9 - 12);
      ++dword_140404A6C[177167565];
      v13 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v13 + 177167567] = *(v9 - 11);
      dword_140404A6C[v13 + 177167568] = *(v9 - 10);
      dword_140404A6C[v13 + 177167569] = *(v9 - 9);
      ++dword_140404A6C[177167565];
      v14 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v14 + 177167567] = *(v9 - 8);
      dword_140404A6C[v14 + 177167568] = *(v9 - 7);
      dword_140404A6C[v14 + 177167569] = *(v9 - 6);
      ++dword_140404A6C[177167565];
      v15 = 3 * dword_140404A6C[177167565];
      dword_140404A6C[v15 + 177167567] = *(v9 - 5);
      dword_140404A6C[v15 + 177167568] = *(v9 - 4);
      dword_140404A6C[v15 + 177167569] = *(v9 - 3);
      v6 = ++dword_140404A6C[177167565];
      --v10;
    }
    while ( v10 );
    v5 = dword_140404A6C[177495247];
  }
  if ( v7 < v8 )
  {
    v16 = v8 - v7;
    v17 = &dword_140404A6C[45072 * v2 + 335170687 + 3 * v7];
    do
    {
      v18 = (int)(3 * v6);
      v19 = *(v17 - 2);
      v17 += 3;
      dword_140404A6C[v18 + 177167567] = v19;
      dword_140404A6C[v18 + 177167568] = *(v17 - 4);
      dword_140404A6C[v18 + 177167569] = *(v17 - 3);
      v6 = ++dword_140404A6C[177167565];
      --v16;
    }
    while ( v16 );
    v5 = dword_140404A6C[177495247];
  }
  v20 = (int)dword_140404A6C[v3 + 335173757];
  if ( v20 > 0 )
  {
    v21 = &dword_140404A6C[v3 + 335173761];
    do
    {
      v22 = *(v21 - 1);
      v23 = *(v21 - 3);
      dword_140404A6C[3 * v5 + 177495248] = v22;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *v21;
      v24 = v21[1];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v24;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
      v25 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v25 + 178011345] = 1099169792;
      *(_QWORD *)&dword_140404A6C[v25 + 178011347] = 1099169792;
      *(_QWORD *)&dword_140404A6C[v25 + 178011349] = 1099169792;
      if ( v23 == 1 )
      {
        v26 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v26 + 178011345] = 0;
        *(_QWORD *)&dword_140404A6C[v26 + 178011346] = 1065353216;
        *(_QWORD *)&dword_140404A6C[v26 + 178011348] = 1065353216;
        dword_140404A6C[v26 + 178011350] = 1065353216;
      }
      else if ( v23 == 2 )
      {
        v27 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v27 + 178011345] = 1035993088;
        dword_140404A6C[v27 + 178011346] = 1035993088;
        dword_140404A6C[v27 + 178011347] = 1035993088;
        dword_140404A6C[v27 + 178011348] = 1035993088;
        dword_140404A6C[v27 + 178011349] = 1035993088;
        dword_140404A6C[v27 + 178011350] = 1035993088;
      }
      v5 = dword_140404A6C[177495247] + 1;
      v28 = *(v21 - 2) == 4;
      ++dword_140404A6C[177495247];
      if ( v28 )
      {
        dword_140404A6C[3 * v5 + 177495248] = v22;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v24;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v21[2];
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        v29 = 6 * dword_140404A6C[177495247];
        *(_QWORD *)&dword_140404A6C[v29 + 178011345] = 1099169792;
        *(_QWORD *)&dword_140404A6C[v29 + 178011347] = 1099169792;
        *(_QWORD *)&dword_140404A6C[v29 + 178011349] = 1099169792;
        if ( v23 == 1 )
        {
          v30 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v30 + 178011345] = 0;
          *(_QWORD *)&dword_140404A6C[v30 + 178011346] = 1065353216;
          *(_QWORD *)&dword_140404A6C[v30 + 178011348] = 1065353216;
          dword_140404A6C[v30 + 178011350] = 1065353216;
        }
        else if ( v23 == 2 )
        {
          v31 = 6 * dword_140404A6C[177495247];
          dword_140404A6C[v31 + 178011345] = 1035993088;
          dword_140404A6C[v31 + 178011346] = 1035993088;
          dword_140404A6C[v31 + 178011347] = 1035993088;
          dword_140404A6C[v31 + 178011348] = 1035993088;
          dword_140404A6C[v31 + 178011349] = 1035993088;
          dword_140404A6C[v31 + 178011350] = 1035993088;
        }
        v5 = ++dword_140404A6C[177495247];
      }
      v21 += 26;
      --v20;
    }
    while ( v20 );
    v6 = dword_140404A6C[177167565];
  }
  if ( (int)v4 >= (int)dword_140404A6C[283826646] && (int)v4 <= (int)dword_140404A6C[283826677] )
  {
    v32 = (int)dword_140404A6C[v3 + 335200382];
    if ( v32 > 0 )
    {
      v33 = &dword_140404A6C[v3 + 335200386];
      while ( 1 )
      {
        v34 = (int)(3 * v6);
        dword_140404A6C[v34 + 177167567] = *(v33 - 2);
        dword_140404A6C[v34 + 177167568] = *(v33 - 1);
        dword_140404A6C[v34 + 177167569] = *v33;
        ++dword_140404A6C[177167565];
        v35 = 3 * dword_140404A6C[177167565];
        dword_140404A6C[v35 + 177167567] = v33[1];
        dword_140404A6C[v35 + 177167568] = v33[2];
        dword_140404A6C[v35 + 177167569] = v33[3];
        ++dword_140404A6C[177167565];
        v36 = 3 * dword_140404A6C[177167565];
        dword_140404A6C[v36 + 177167567] = v33[4];
        dword_140404A6C[v36 + 177167568] = v33[5];
        dword_140404A6C[v36 + 177167569] = v33[6];
        ++dword_140404A6C[177167565];
        v37 = 3 * dword_140404A6C[177167565];
        dword_140404A6C[v37 + 177167567] = v33[7];
        dword_140404A6C[v37 + 177167568] = v33[8];
        dword_140404A6C[v37 + 177167569] = v33[9];
        ++dword_140404A6C[177167565];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v6;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v6 + 1;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v6 + 2;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        v38 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v38 + 178011345] = 1061158912;
        dword_140404A6C[v38 + 178011346] = 1065353216;
        dword_140404A6C[v38 + 178011347] = 1061158912;
        dword_140404A6C[v38 + 178011348] = 1065353216;
        dword_140404A6C[v38 + 178011349] = 1061158912;
        dword_140404A6C[v38 + 178011350] = 1065353216;
        ++dword_140404A6C[177495247];
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v6;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v6 + 2;
        v33 += 13;
        dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v6 + 3;
        dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
        v39 = 6 * dword_140404A6C[177495247];
        dword_140404A6C[v39 + 178011345] = 1061158912;
        dword_140404A6C[v39 + 178011346] = 1065353216;
        dword_140404A6C[v39 + 178011347] = 1061158912;
        dword_140404A6C[v39 + 178011348] = 1065353216;
        dword_140404A6C[v39 + 178011349] = 1061158912;
        dword_140404A6C[v39 + 178011350] = 1065353216;
        ++dword_140404A6C[177495247];
        if ( !--v32 )
          break;
        v6 = dword_140404A6C[177167565];
      }
    }
  }
  dword_140404A6C[178519250] = 0;
  dword_140404A6C[908 * v4 + 178527536] = 0;
  return sub_1401449C0(v4, 1);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (00000001400656E0) ----------------------------------------------------
__int64            sub_1400656E0(int a1, float *a2, __int64 a3)
{
  float v4; // xmm1_4
  float v5; // xmm0_4
  signed int v6; // ebx
  __int64 v7; // r12
  __int64 v8; // r14
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  signed int v18; // eax
  __int64 v19; // r13
  __int64 v20; // rbp
  __int64 v21; // rdi
  int *v22; // rbx
  float v23; // xmm5_4
  float v24; // xmm7_4
  float v25; // xmm8_4
  float v26; // xmm1_4
  float v27; // xmm3_4
  float v28; // xmm6_4
  float v29; // xmm0_4
  float v30; // xmm2_4
  float v31; // xmm4_4
  signed int v32; // eax
  __int64 v33; // rbp
  __int64 v34; // r15
  __int64 v35; // rdi
  int *v36; // rbx
  float v38; // [rsp+30h] [rbp-98h] BYREF
  float v39; // [rsp+34h] [rbp-94h]
  float v40; // [rsp+38h] [rbp-90h]
  unsigned int v41; // [rsp+D0h] [rbp+8h]

  if ( a1 )
    return v41;
  v4 = a2[1];
  v38 = *a2;
  v5 = a2[2];
  v39 = v4;
  v40 = v5;
  v6 = sr_CreateVehicle(13, &v38, nullptr, (unsigned int *)a3, 0);
  v7 = 5210LL * v6;
  v8 = v6;
  dword_140404A6C[v7 + 129721807] = 74;
  v9 = *(float *)&dword_140404A6C[v7 + 129716720];
  v10 = *(float *)&dword_140404A6C[v7 + 129716721];
  v11 = *(float *)&dword_140404A6C[v7 + 129716722];
  *(_DWORD *)a3 = dword_140404A6C[v7 + 129716726];
  *(_DWORD *)(a3 + 4) = dword_140404A6C[v7 + 129716727];
  *(_DWORD *)(a3 + 8) = dword_140404A6C[v7 + 129716728];
  v12 = *(float *)&dword_140404A6C[v7 + 129716729];
  *(float *)(a3 + 12) = v12;
  v13 = *(float *)&dword_140404A6C[v7 + 129716730];
  *(float *)(a3 + 16) = v13;
  v14 = *(float *)&dword_140404A6C[v7 + 129716731];
  *(float *)(a3 + 20) = v14;
  v15 = *(float *)&dword_140404A6C[v7 + 129716732];
  *(float *)(a3 + 24) = v15;
  v16 = *(float *)&dword_140404A6C[v7 + 129716733];
  *(float *)(a3 + 28) = v16;
  v17 = *(float *)&dword_140404A6C[v7 + 129716734];
  *(float *)(a3 + 32) = v17;
  v38 = (float)(v9 - (float)(v15 * 5.5)) + (float)(v12 * 0.5);
  v39 = (float)(v10 - (float)(v16 * 5.5)) + (float)(v13 * 0.5);
  v40 = (float)(v11 - (float)(v17 * 5.5)) + (float)(v14 * 0.5);
  v18 = sr_CreateVehicle(14, &v38, nullptr, (unsigned int *)a3, 0);
  v19 = 5210LL * v18;
  v20 = 0;
  dword_140404A6C[v19 + 129720175] = v6;
  dword_140404A6C[v7 + 129720175] = v18;
  do
  {
    if ( (unsigned __int64)v20 < 4 || (unsigned __int64)(v20 - 6) <= 3 )
    {
      v21 = 2;
      v22 = (int *)&dword_140404A6C[v19 + 129716773];
      do
      {
        sub_14004DE30(0, dword_140404A6C[5210 * v8 + 129716769 + v20], *v22++, -1);
        --v21;
      }
      while ( v21 );
    }
    ++v20;
  }
  while ( v20 < 12 );
  v23 = *(float *)&dword_140404A6C[v7 + 129716720];
  v24 = *(float *)&dword_140404A6C[v7 + 129716721];
  v25 = *(float *)&dword_140404A6C[v7 + 129716722];
  *(_DWORD *)a3 = dword_140404A6C[v7 + 129716726];
  *(_DWORD *)(a3 + 4) = dword_140404A6C[v7 + 129716727];
  *(_DWORD *)(a3 + 8) = dword_140404A6C[v7 + 129716728];
  v26 = *(float *)&dword_140404A6C[v7 + 129716729];
  *(float *)(a3 + 12) = v26;
  v27 = *(float *)&dword_140404A6C[v7 + 129716730];
  *(float *)(a3 + 16) = v27;
  v28 = *(float *)&dword_140404A6C[v7 + 129716731];
  *(float *)(a3 + 20) = v28;
  v29 = *(float *)&dword_140404A6C[v7 + 129716732];
  *(float *)(a3 + 24) = v29;
  v30 = *(float *)&dword_140404A6C[v7 + 129716733];
  *(float *)(a3 + 28) = v30;
  v31 = *(float *)&dword_140404A6C[v7 + 129716734];
  *(float *)(a3 + 32) = v31;
  v38 = (float)((float)(v29 * 5.5) + v23) + (float)(v26 * 0.5);
  v39 = (float)((float)(v30 * 5.5) + v24) + (float)(v27 * 0.5);
  v40 = (float)((float)(v31 * 5.5) + v25) + (float)(v28 * 0.5);
  v32 = sr_CreateVehicle(14, &v38, nullptr, (unsigned int *)a3, 0);
  v33 = 2;
  v34 = 5210LL * v32;
  dword_140404A6C[v34 + 129720175] = v8;
  dword_140404A6C[v7 + 129720176] = v32;
  do
  {
    if ( (unsigned __int64)(v33 - 6) > 1 )
    {
      v35 = 2;
      v36 = (int *)&dword_140404A6C[v34 + 129716773];
      do
      {
        sub_14004DE30(0, dword_140404A6C[5210 * v8 + 129716769 + v33], *v36++, -1);
        --v35;
      }
      while ( v35 );
    }
    ++v33;
  }
  while ( v33 < 12 );
  return (unsigned int)v8;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140065AE0) ----------------------------------------------------
void            sub_140065AE0(signed int a1, float a2)
{
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
    sub_140069930(a1, v5, (__int16 *)&dword_140404A6C[70357813], a2);
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
      v26 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
      SR_VEC_LANES(128, v26, f64)[0] = v22;
      v27 = (int)v22;
      v28 = v22;
      if ( (double)v27 != v22 )
        v28 = (double)(v27 - (_mm_movemask_pd(_mm_unpacklo_pd(v26, v26)) & 1));
      v29 = (int)(fabs(SR_VEC_LANES(128, v26, f64)[0] - v28) * 16384.0 - 8192.0);
      *(_WORD *)v24 = v29;
      if ( a1 == v21 )
      {
        v30 = ((__m128d)_mm_cvtsi64_si128((long long)(0)));
        SR_VEC_LANES(128, v30, f64)[0] = (float)(v22 * 1.5);
        v31 = SR_VEC_LANES(128, v30, f64)[0];
        if ( (double)(int)SR_VEC_LANES(128, v30, f64)[0] != SR_VEC_LANES(128, v30, f64)[0] )
          v31 = (double)((int)SR_VEC_LANES(128, v30, f64)[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v30, v30)) & 1));
        *(_WORD *)v24 = (int)(fabs(SR_VEC_LANES(128, v30, f64)[0] - v31) * 8192.0 + (double)(__int16)v29 - 4096.0);
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
                            * 4.6566129e-10f))
            + 1.0;
      }
      v42 = (float)((float)((float)((float)((float)*(v40 - 1) * 0.000030517578f) - (float)(v35 * v32)) - v3) * 0.025f)
          + v3;
      v43 = (float)((float)(v42 - v33) * 0.025f) + v33;
      v44 = (float)((float)(v43 - v34) * 0.025f) + v34;
      v45 = (float)((float)((float)(v44 - v35) * 0.025f) + v35)
          - (float)((float)((float)((float)((float)(v44 - v35) * 0.025f) + v35)
                          * (float)((float)((float)(v44 - v35) * 0.025f) + v35))
                  * (float)((float)((float)((float)(v44 - v35) * 0.025f) + v35) * 0.16666667f));
      if ( v39 - 2 >= 0x4000 )
        *(v40 - 1) = (int)(float)(v45 * 65536.0);
      if ( a1 == v36 )
      {
        v46 = ((int)(float)((float)(v39 - 1) * 0.00390625) << 13) ^ (int)(float)((float)(v39 - 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v46 * v46 + 789221) * (15731 * v46 * v46 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v47 = (float)((float)((float)((float)((float)*v40 * 0.000030517578f) - (float)(v45 * v32)) - v42) * 0.025f) + v42;
      v48 = (float)((float)(v47 - v43) * 0.025f) + v43;
      v49 = (float)((float)(v48 - v44) * 0.025f) + v44;
      v50 = (float)((float)((float)(v49 - v45) * 0.025f) + v45)
          - (float)((float)((float)((float)((float)(v49 - v45) * 0.025f) + v45)
                          * (float)((float)((float)(v49 - v45) * 0.025f) + v45))
                  * (float)((float)((float)((float)(v49 - v45) * 0.025f) + v45) * 0.16666667f));
      if ( v39 > 0x4000 )
        *v40 = (int)(float)(v50 * 65536.0);
      if ( a1 == v36 )
      {
        v51 = ((int)(float)((float)v39 * 0.00390625) << 13) ^ (int)(float)((float)v39 * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v51 * v51 + 789221) * (15731 * v51 * v51 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v52 = (float)((float)((float)((float)((float)v40[1] * 0.000030517578f) - (float)(v50 * v32)) - v47) * 0.025f) + v47;
      v53 = (float)((float)(v52 - v48) * 0.025f) + v48;
      v54 = (float)((float)(v53 - v49) * 0.025f) + v49;
      v55 = (float)((float)((float)(v54 - v50) * 0.025f) + v50)
          - (float)((float)((float)((float)((float)(v54 - v50) * 0.025f) + v50)
                          * (float)((float)((float)(v54 - v50) * 0.025f) + v50))
                  * (float)((float)((float)((float)(v54 - v50) * 0.025f) + v50) * 0.16666667f));
      if ( v39 >= 0x4000 )
        v40[1] = (int)(float)(v55 * 65536.0);
      if ( a1 == v36 )
      {
        v56 = ((int)(float)((float)(v39 + 1) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v56 * v56 + 789221) * (15731 * v56 * v56 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v57 = (float)((float)((float)((float)((float)v40[2] * 0.000030517578f) - (float)(v55 * v32)) - v52) * 0.025f) + v52;
      v58 = (float)((float)(v57 - v53) * 0.025f) + v53;
      v59 = (float)((float)(v58 - v54) * 0.025f) + v54;
      v60 = (float)((float)((float)(v59 - v55) * 0.025f) + v55)
          - (float)((float)((float)((float)((float)(v59 - v55) * 0.025f) + v55)
                          * (float)((float)((float)(v59 - v55) * 0.025f) + v55))
                  * (float)((float)((float)((float)(v59 - v55) * 0.025f) + v55) * 0.16666667f));
      if ( v39 + 1 >= 0x4000 )
        v40[2] = (int)(float)(v60 * 65536.0);
      if ( a1 == v36 )
      {
        v61 = ((int)(float)((float)(v39 + 2) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 2) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v61 * v61 + 789221) * (15731 * v61 * v61 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v62 = (float)((float)((float)((float)((float)v40[3] * 0.000030517578f) - (float)(v60 * v32)) - v57) * 0.025f) + v57;
      v63 = (float)((float)(v62 - v58) * 0.025f) + v58;
      v64 = (float)((float)(v63 - v59) * 0.025f) + v59;
      v65 = (float)((float)((float)(v64 - v60) * 0.025f) + v60)
          - (float)((float)((float)((float)((float)(v64 - v60) * 0.025f) + v60)
                          * (float)((float)((float)(v64 - v60) * 0.025f) + v60))
                  * (float)((float)((float)((float)(v64 - v60) * 0.025f) + v60) * 0.16666667f));
      if ( v39 + 2 >= 0x4000 )
        v40[3] = (int)(float)(v65 * 65536.0);
      if ( a1 == v36 )
      {
        v66 = ((int)(float)((float)(v39 + 3) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 3) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v66 * v66 + 789221) * (15731 * v66 * v66 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v67 = (float)((float)((float)((float)((float)v40[4] * 0.000030517578f) - (float)(v65 * v32)) - v62) * 0.025f) + v62;
      v68 = (float)((float)(v67 - v63) * 0.025f) + v63;
      v69 = (float)((float)((float)((float)((float)(v68 - v64) * 0.025f) + v64) - v65) * 0.025f) + v65;
      v70 = v69 - (float)((float)(v69 * v69) * (float)(v69 * 0.16666667f));
      if ( v39 + 3 >= 0x4000 )
        v40[4] = (int)(float)(v70 * 65536.0);
      if ( a1 == v36 )
      {
        v71 = ((int)(float)((float)(v39 + 4) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 4) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v71 * v71 + 789221) * (15731 * v71 * v71 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v72 = (float)((float)((float)((float)((float)v40[5] * 0.000030517578f) - (float)(v70 * v32)) - v67) * 0.025f) + v67;
      v73 = (float)((float)(v72 - v68) * 0.025f) + v68;
      v74 = (float)((float)(v73 - (float)((float)((float)(v68 - v64) * 0.025f) + v64)) * 0.025f)
          + (float)((float)((float)(v68 - v64) * 0.025f) + v64);
      v75 = (float)((float)((float)(v74 - v70) * 0.025f) + v70)
          - (float)((float)((float)((float)((float)(v74 - v70) * 0.025f) + v70)
                          * (float)((float)((float)(v74 - v70) * 0.025f) + v70))
                  * (float)((float)((float)((float)(v74 - v70) * 0.025f) + v70) * 0.16666667f));
      if ( v39 + 4 >= 0x4000 )
        v40[5] = (int)(float)(v75 * 65536.0);
      if ( a1 == v36 )
      {
        v76 = ((int)(float)((float)(v39 + 5) * 0.00390625) << 13) ^ (int)(float)((float)(v39 + 5) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v76 * v76 + 789221) * (15731 * v76 * v76 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v3 = (float)((float)((float)((float)((float)v40[6] * 0.000030517578f) - (float)(v75 * v32)) - v72) * 0.025f) + v72;
      v33 = (float)((float)(v3 - v73) * 0.025f) + v73;
      v34 = (float)((float)(v33 - v74) * 0.025f) + v74;
      v35 = (float)((float)((float)(v34 - v75) * 0.025f) + v75)
          - (float)((float)((float)((float)((float)(v34 - v75) * 0.025f) + v75)
                          * (float)((float)((float)(v34 - v75) * 0.025f) + v75))
                  * (float)((float)((float)((float)(v34 - v75) * 0.025f) + v75) * 0.16666667f));
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
                            * 4.6566129e-10f))
            + 1.0;
      }
      v79 = (float)((float)((float)((float)((float)*(v77 - 1) * 0.000030517578f) - (float)(v35 * v32)) - v3) * 0.025f)
          + v3;
      v80 = (float)((float)(v79 - v33) * 0.025f) + v33;
      v81 = (float)((float)(v80 - v34) * 0.025f) + v34;
      v82 = (float)((float)((float)(v81 - v35) * 0.025f) + v35)
          - (float)((float)((float)((float)((float)(v81 - v35) * 0.025f) + v35)
                          * (float)((float)((float)(v81 - v35) * 0.025f) + v35))
                  * (float)((float)((float)((float)(v81 - v35) * 0.025f) + v35) * 0.16666667f));
      *(v77 - 1) = (int)(float)(v82 * 65536.0);
      if ( a1 == v36 )
      {
        v83 = ((int)(float)((float)(v38 - 1) * 0.00390625) << 13) ^ (int)(float)((float)(v38 - 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v83 * v83 + 789221) * (15731 * v83 * v83 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v84 = (float)((float)((float)((float)((float)*v77 * 0.000030517578f) - (float)(v82 * v32)) - v79) * 0.025f) + v79;
      v85 = (float)((float)(v84 - v80) * 0.025f) + v80;
      v86 = (float)((float)(v85 - v81) * 0.025f) + v81;
      v87 = (float)((float)((float)(v86 - v82) * 0.025f) + v82)
          - (float)((float)((float)((float)((float)(v86 - v82) * 0.025f) + v82)
                          * (float)((float)((float)(v86 - v82) * 0.025f) + v82))
                  * (float)((float)((float)((float)(v86 - v82) * 0.025f) + v82) * 0.16666667f));
      *v77 = (int)(float)(v87 * 65536.0);
      if ( a1 == v36 )
      {
        v88 = ((int)(float)((float)v38 * 0.00390625) << 13) ^ (int)(float)((float)v38 * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v88 * v88 + 789221) * (15731 * v88 * v88 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v89 = (float)((float)((float)((float)((float)v77[1] * 0.000030517578f) - (float)(v87 * v32)) - v84) * 0.025f) + v84;
      v90 = (float)((float)(v89 - v85) * 0.025f) + v85;
      v91 = (float)((float)(v90 - v86) * 0.025f) + v86;
      v92 = (float)((float)((float)(v91 - v87) * 0.025f) + v87)
          - (float)((float)((float)((float)((float)(v91 - v87) * 0.025f) + v87)
                          * (float)((float)((float)(v91 - v87) * 0.025f) + v87))
                  * (float)((float)((float)((float)(v91 - v87) * 0.025f) + v87) * 0.16666667f));
      v77[1] = (int)(float)(v92 * 65536.0);
      if ( a1 == v36 )
      {
        v93 = ((int)(float)((float)(v38 + 1) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 1) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v93 * v93 + 789221) * (15731 * v93 * v93 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v94 = (float)((float)((float)((float)((float)v77[2] * 0.000030517578f) - (float)(v92 * v32)) - v89) * 0.025f) + v89;
      v95 = (float)((float)(v94 - v90) * 0.025f) + v90;
      v96 = (float)((float)(v95 - v91) * 0.025f) + v91;
      v97 = (float)((float)((float)(v96 - v92) * 0.025f) + v92)
          - (float)((float)((float)((float)((float)(v96 - v92) * 0.025f) + v92)
                          * (float)((float)((float)(v96 - v92) * 0.025f) + v92))
                  * (float)((float)((float)((float)(v96 - v92) * 0.025f) + v92) * 0.16666667f));
      v77[2] = (int)(float)(v97 * 65536.0);
      if ( a1 == v36 )
      {
        v98 = ((int)(float)((float)(v38 + 2) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 2) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v98 * v98 + 789221) * (15731 * v98 * v98 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v99 = (float)((float)((float)((float)((float)v77[3] * 0.000030517578f) - (float)(v97 * v32)) - v94) * 0.025f) + v94;
      v100 = (float)((float)(v99 - v95) * 0.025f) + v95;
      v101 = (float)((float)(v100 - v96) * 0.025f) + v96;
      v102 = (float)((float)((float)(v101 - v97) * 0.025f) + v97)
           - (float)((float)((float)((float)((float)(v101 - v97) * 0.025f) + v97)
                           * (float)((float)((float)(v101 - v97) * 0.025f) + v97))
                   * (float)((float)((float)((float)(v101 - v97) * 0.025f) + v97) * 0.16666667f));
      v77[3] = (int)(float)(v102 * 65536.0);
      if ( a1 == v36 )
      {
        v103 = ((int)(float)((float)(v38 + 3) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 3) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v103 * v103 + 789221) * (15731 * v103 * v103 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v104 = (float)((float)((float)((float)((float)v77[4] * 0.000030517578f) - (float)(v102 * v32)) - v99) * 0.025f)
           + v99;
      v105 = (float)((float)(v104 - v100) * 0.025f) + v100;
      v106 = (float)((float)((float)((float)((float)(v105 - v101) * 0.025f) + v101) - v102) * 0.025f) + v102;
      v107 = v106 - (float)((float)(v106 * v106) * (float)(v106 * 0.16666667f));
      v77[4] = (int)(float)(v107 * 65536.0);
      if ( a1 == v36 )
      {
        v108 = ((int)(float)((float)(v38 + 4) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 4) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v108 * v108 + 789221) * (15731 * v108 * v108 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v109 = (float)((float)((float)((float)((float)v77[5] * 0.000030517578f) - (float)(v107 * v32)) - v104) * 0.025f)
           + v104;
      v110 = (float)((float)(v109 - v105) * 0.025f) + v105;
      v111 = (float)((float)(v110 - (float)((float)((float)(v105 - v101) * 0.025f) + v101)) * 0.025f)
           + (float)((float)((float)(v105 - v101) * 0.025f) + v101);
      v112 = (float)((float)((float)(v111 - v107) * 0.025f) + v107)
           - (float)((float)((float)((float)((float)(v111 - v107) * 0.025f) + v107)
                           * (float)((float)((float)(v111 - v107) * 0.025f) + v107))
                   * (float)((float)((float)((float)(v111 - v107) * 0.025f) + v107) * 0.16666667f));
      v77[5] = (int)(float)(v112 * 65536.0);
      if ( a1 == v36 )
      {
        v113 = ((int)(float)((float)(v38 + 5) * 0.00390625) << 13) ^ (int)(float)((float)(v38 + 5) * 0.00390625);
        v32 = (float)(0.5
                    - (float)((float)(((15731 * v113 * v113 + 789221) * (15731 * v113 * v113 + 789221) - 771171059)
                                    & 0x7FFFFFFF)
                            * 4.6566129e-10f))
            + 1.0;
      }
      v38 += 8;
      v3 = (float)((float)((float)((float)((float)v77[6] * 0.000030517578f) - (float)(v112 * v32)) - v109) * 0.025f)
         + v109;
      v33 = (float)((float)(v3 - v110) * 0.025f) + v110;
      v34 = (float)((float)(v33 - v111) * 0.025f) + v111;
      v35 = (float)((float)((float)(v34 - v112) * 0.025f) + v112)
          - (float)((float)((float)((float)((float)(v34 - v112) * 0.025f) + v112)
                          * (float)((float)((float)(v34 - v112) * 0.025f) + v112))
                  * (float)((float)((float)((float)(v34 - v112) * 0.025f) + v112) * 0.16666667f));
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
        _mm_storeu_si128(v114 - 1, _mm_add_epi16(v115, v115));
        v116 = _mm_loadu_si128(v114);
        _mm_storeu_si128(v114, _mm_add_epi16(v116, v116));
        v117 = _mm_loadu_si128(v114 + 1);
        _mm_storeu_si128(v114 + 1, _mm_add_epi16(v117, v117));
        v118 = _mm_loadu_si128(v114 + 2);
        _mm_storeu_si128(v114 + 2, _mm_add_epi16(v118, v118));
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
    sub_140069930(a1, 0x20000, (__int16 *)&dword_140404A6C[70357813], a2);
  }
}

// 140065C5F: conditional instruction was optimized away because r14d.4 is in (==4000|==5622)
// 140065DA5: conditional instruction was optimized away because rcx.8<100000000u
// 140065E05: conditional instruction was optimized away because rcx.8<100000000u
// 140279850: using guessed type __int128 xmmword_140279850;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183E936DC: using guessed type unsigned int;
// 183E936E0: using guessed type unsigned int;

//----- (0000000140066EE0) ----------------------------------------------------
double            sub_140066EE0(int a1, float a2, double a3, float a4)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned int v6; // esi
  int v7; // edi
  float v8; // xmm10_4
  __int64 v9; // r12
  float v10; // xmm11_4
  unsigned int v11; // r13d
  unsigned int v12; // xmm0_4
  __int64 v13; // rcx
  __m128 v14; // xmm9
  __int64 v15; // rbp
  unsigned int v16; // ebx
  float v17; // xmm0_4
  __m128d v18; // xmm7
  float v19; // xmm8_4
  __int64 v20; // rdx
  __m128 v21; // xmm0
  double v22; // xmm1_8
  double v23; // xmm6_8
  double v24; // xmm0_8
  double v25; // xmm0_8
  __int64 v26; // rcx
  unsigned int v27; // xmm0_4
  __m128 v28; // xmm0
  __m128 v29; // xmm9
  __int64 v30; // rbp
  unsigned int v31; // xmm8_4
  __m128d v32; // xmm7
  __int64 v33; // rdx
  __m128 v34; // xmm0
  double v35; // xmm1_8
  double v36; // xmm0_8
  __int64 v37; // rcx
  unsigned int v38; // xmm0_4
  __m128 v39; // xmm0
  __int64 v40; // rdx
  __m128 v41; // xmm8
  __int64 v42; // rbp
  unsigned int v43; // xmm7_4
  __m128d v44; // xmm6
  __int64 v45; // rdx
  __m128 v46; // xmm0
  double v47; // xmm1_8
  double v48; // xmm0_8
  unsigned int v49; // xmm3_4
  __int64 v50; // rcx
  unsigned int v51; // xmm0_4
  __m128 v52; // xmm0
  __int64 v53; // r9
  unsigned int v54; // ecx
  int v55; // r8d
  int v56; // edx
  __int64 v57; // rax
  unsigned int v58; // esi
  unsigned int v59; // r10d
  int v60; // r11d
  unsigned int v61; // r8d
  unsigned int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int v66; // esi
  unsigned int v67; // r9d
  __int64 v68; // r11
  int v69; // r8d
  unsigned int v70; // edx
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int v73; // r10d
  unsigned int v74; // r8d
  char v75; // r11
  unsigned int v76; // r9d
  unsigned int v77; // edx
  __int64 v78; // rax
  __int64 v79; // rax
  float v83; // [rsp+120h] [rbp+18h]

  v83 = *(float *)&a3;
  LODWORD(v5) = 0;
  v6 = 0;
  v7 = 0;
  v8 = a2 * 0.5;
  v9 = 16;
  dword_140404A6C[177167565] = 0;
  v10 = a2 * -0.5;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  while ( 1 )
  {
    v11 = v6 - 16;
    v12 = v7 ? LODWORD(v8) : LODWORD(v10);
    v13 = (int)(3 * v6);
    v14 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    dword_140404A6C[v13 + 177167567] = v12;
    *(_QWORD *)&dword_140404A6C[v13 + 177167568] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = -1082130432;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v5;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = v5;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = v5;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = v5;
    v15 = 8;
    v16 = ++dword_140404A6C[177167565];
    do
    {
      if ( v7 )
        v17 = 0.375;
      else
        v17 = -0.375;
      v18 = _mm_cvtps_pd(v14);
      v19 = a2 * v17;
      v21 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v18, f64)[0], v4, a3));
      v22 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v21, (__m128d)v21, 1), f64)[0];
      HIDWORD(a3) = 0;
      v23 = a4;
      v24 = *(double *)SR_VEC_LANES(128, v21, u64) * a4;
      *(float *)&a3 = v22 * a4 * 0.875;
      if ( v7 )
        v25 = v24 * -0.875;
      else
        v25 = v24 * 0.875;
      v26 = (int)(3 * v16);
      *(float *)&v27 = v25;
      *(float *)&dword_140404A6C[v26 + 177167567] = v19;
      dword_140404A6C[v26 + 177167569] = v27;
      dword_140404A6C[v26 + 177167568] = LODWORD(a3);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      v28 = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, v14, u64), v20, a3);
      v4 = 0;
      SR_VEC_LANES(128, v18, f64)[0] = SR_VEC_LANES(128, v18, f64)[0] + 0.7853981633975;
      v14 = _mm_cvtpd_ps(v18);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v28, v28, 1), u32)[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = SR_VEC_LANES(128, v28, i32)[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v16 = ++dword_140404A6C[177167565];
      --v15;
    }
    while ( v15 );
    v29 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    v30 = 16;
    do
    {
      if ( v7 )
        v31 = LODWORD(v8);
      else
        v31 = LODWORD(v10);
      v32 = _mm_cvtps_pd(v29);
      v34 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v32, f64)[0], 0, COERCE_DOUBLE((unsigned __int64)LODWORD(a3))));
      HIDWORD(a3) = 0;
      v35 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v34, (__m128d)v34, 1), f64)[0] * v23;
      v36 = *(double *)SR_VEC_LANES(128, v34, u64) * v23;
      *(float *)&a3 = v35;
      if ( v7 )
        v36 = -v36;
      v37 = (int)(3 * v16);
      *(float *)&v38 = v36;
      dword_140404A6C[v37 + 177167567] = v31;
      dword_140404A6C[v37 + 177167569] = v38;
      dword_140404A6C[v37 + 177167568] = LODWORD(a3);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      v39 = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, v29, u64), v33, a3);
      SR_VEC_LANES(128, v32, f64)[0] = SR_VEC_LANES(128, v32, f64)[0] + 0.39269908169875;
      v40 = 0;
      v29 = _mm_cvtpd_ps(v32);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v39, v39, 1), u32)[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = SR_VEC_LANES(128, v39, i32)[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v16 = ++dword_140404A6C[177167565];
      --v30;
    }
    while ( v30 );
    v41 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
    v42 = 16;
    do
    {
      if ( v7 )
        v43 = LODWORD(v8);
      else
        v43 = LODWORD(v10);
      v44 = _mm_cvtps_pd(v41);
      v46 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_LANES(128, v44, f64)[0], v40, a3));
      a3 = v83;
      v47 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v46, (__m128d)v46, 1), f64)[0] * v83;
      v48 = *(double *)SR_VEC_LANES(128, v46, u64) * v83;
      if ( v7 )
        v48 = -v48;
      v50 = (int)(3 * v16);
      *(float *)&v51 = v48;
      dword_140404A6C[v50 + 177167567] = v43;
      dword_140404A6C[v50 + 177167569] = v51;
      *(float *)&v49 = v47;
      dword_140404A6C[v50 + 177167568] = v49;
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      v52 = sub_1401F8AC0(*(double *)SR_VEC_LANES(128, v41, u64), v45, a3);
      SR_VEC_LANES(128, v44, f64)[0] = SR_VEC_LANES(128, v44, f64)[0] + 0.39269908169875;
      v41 = _mm_cvtpd_ps(v44);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v52, v52, 1), u32)[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = SR_VEC_LANES(128, v52, i32)[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v16 = ++dword_140404A6C[177167565];
      --v42;
    }
    while ( v42 );
    v53 = 8;
    v54 = dword_140404A6C[177495247];
    v55 = 1;
    do
    {
      dword_140404A6C[3 * v54 + 177495248] = v6;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v55 + v6;
      v56 = (v55++ & 7) + 1;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v6 + v56;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v57 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v57 + 178011345] = 1056964608;
      dword_140404A6C[v57 + 178011346] = 1056964608;
      dword_140404A6C[v57 + 178011347] = 1056964608;
      dword_140404A6C[v57 + 178011348] = 1056964608;
      dword_140404A6C[v57 + 178011349] = 1056964608;
      dword_140404A6C[v57 + 178011350] = 1056964608;
      v54 = ++dword_140404A6C[177495247];
      --v53;
    }
    while ( v53 );
    v58 = v6 + 1;
    v59 = v58;
    v60 = 1;
    v5 = 8;
    do
    {
      v61 = v58 + (v60 & 0xF) + 8;
      dword_140404A6C[3 * v54 + 177495248] = v59;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v58 + 7 + v60;
      v62 = v58 + ((1 - (_BYTE)v58 + (_BYTE)v59) & 7);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v61;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v63 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v63 + 178011345] = 1056964608;
      dword_140404A6C[v63 + 178011346] = 1056964608;
      dword_140404A6C[v63 + 178011347] = 1056964608;
      dword_140404A6C[v63 + 178011348] = 1056964608;
      dword_140404A6C[v63 + 178011349] = 1056964608;
      dword_140404A6C[v63 + 178011350] = 1056964608;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v59;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v62;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v64 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v64 + 178011345] = 1056964608;
      dword_140404A6C[v64 + 178011346] = 1056964608;
      dword_140404A6C[v64 + 178011347] = 1056964608;
      dword_140404A6C[v64 + 178011348] = 1056964608;
      dword_140404A6C[v64 + 178011349] = 1056964608;
      dword_140404A6C[v64 + 178011350] = 1056964608;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v62;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v61;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v58 + (((_BYTE)v60 + 1) & 0xF) + 8;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v65 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v65 + 178011345] = 1056964608;
      ++v59;
      dword_140404A6C[v65 + 178011346] = 1056964608;
      v60 += 2;
      dword_140404A6C[v65 + 178011347] = 1056964608;
      dword_140404A6C[v65 + 178011348] = 1056964608;
      dword_140404A6C[v65 + 178011349] = 1056964608;
      dword_140404A6C[v65 + 178011350] = 1056964608;
      v54 = ++dword_140404A6C[177495247];
      --v5;
    }
    while ( v5 );
    v66 = v58 + 8;
    v67 = v66;
    v68 = 16;
    do
    {
      v69 = ((_BYTE)v67 + 1 - (_BYTE)v66) & 0xF;
      dword_140404A6C[3 * v54 + 177495248] = v67;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67 + 16;
      v70 = v69 + v66 + 16;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v70;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v71 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v71 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v71 + 178011347] = 0;
      *(_QWORD *)&dword_140404A6C[v71 + 178011349] = 0;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v67++;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70;
      v4 = v69 + v66;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v4;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v72 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v72 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v72 + 178011347] = 0;
      *(_QWORD *)&dword_140404A6C[v72 + 178011349] = 0;
      v54 = ++dword_140404A6C[177495247];
      --v68;
    }
    while ( v68 );
    if ( ++v7 >= 2 )
      break;
    v6 = dword_140404A6C[177167565];
  }
  v73 = dword_140404A6C[177167565] - 16;
  v74 = v11;
  v75 = 1 - (LOBYTE(dword_140404A6C[177167565]) - 16);
  v76 = dword_140404A6C[177167565] - 16 + 15;
  do
  {
    dword_140404A6C[3 * v54 + 177495248] = v74;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v73 + (((_BYTE)v76 + v75) & 0xF);
    v77 = v11 + ((1 - (_BYTE)v11 + (_BYTE)v74) & 0xF);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v76;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    v78 = 6 * dword_140404A6C[177495247];
    *(_QWORD *)&dword_140404A6C[v78 + 178011345] = 0;
    *(_QWORD *)&dword_140404A6C[v78 + 178011347] = 0;
    *(_QWORD *)&dword_140404A6C[v78 + 178011349] = 0;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v74++;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v76--;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v77;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    v79 = 6 * dword_140404A6C[177495247];
    *(_QWORD *)&dword_140404A6C[v79 + 178011345] = 0;
    *(_QWORD *)&dword_140404A6C[v79 + 178011347] = 0;
    *(_QWORD *)&dword_140404A6C[v79 + 178011349] = 0;
    v54 = ++dword_140404A6C[177495247];
    --v9;
  }
  while ( v9 );
  return sub_1401449C0(a1, 0);
}

// 14006707C: variable 'v4' is possibly undefined
// 1400670F5: variable 'v20' is possibly undefined
// 14006720A: variable 'v33' is possibly undefined
// 1400672B8: variable 'v40' is possibly undefined
// 14006731F: variable 'v45' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A7DBDA0: using guessed type unsigned int;
// 16A91BDA8: using guessed type unsigned int;
// 16AC43DB0: using guessed type unsigned int;
// 16AD03DB4: using guessed type unsigned int;

//----- (0000000140067970) ----------------------------------------------------
int            sub_140067970(int a1, int a2, float *a3, float *a4)
{
  int v4; // r10d
  __int64 v7; // rdi
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // ecx
  unsigned int *v12; // rdx
  bool v13; // zf
  int v14; // eax
  float v15; // xmm11_4
  float v16; // xmm8_4
  float v17; // xmm5_4
  float v18; // xmm12_4
  float v19; // xmm9_4
  float v20; // xmm6_4
  float v21; // xmm10_4
  float v22; // xmm13_4
  float v23; // xmm7_4
  __int64 v24; // rdx
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm2_4
  float v28; // xmm14_4
  float v29; // xmm15_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm15_4
  float v33; // xmm1_4
  float v34; // xmm4_4
  float v35; // xmm2_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm3_4
  float v41; // xmm1_4
  float v42; // xmm4_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  float v45; // xmm2_4
  float v46; // xmm0_4
  float v47; // xmm1_4
  float v48; // xmm0_4
  float v49; // xmm11_4
  float v50; // xmm8_4
  float v51; // xmm5_4
  float v52; // xmm12_4
  float v53; // xmm9_4
  float v54; // xmm6_4
  float v55; // xmm10_4
  float v56; // xmm13_4
  float v57; // xmm7_4
  __int64 v58; // rax
  float v59; // xmm3_4
  float v60; // xmm4_4
  float v61; // xmm2_4
  float v62; // xmm15_4
  float v63; // xmm0_4
  float v64; // xmm3_4
  float v65; // xmm1_4
  float v66; // xmm4_4
  float v67; // xmm2_4
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm0_4
  float v71; // xmm3_4
  float v72; // xmm1_4
  float v73; // xmm4_4
  float v74; // xmm0_4
  float v75; // xmm1_4
  float v76; // xmm2_4
  float v77; // xmm0_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  float v80; // xmm11_4
  float v81; // xmm9_4
  float v82; // xmm8_4
  float v83; // xmm0_4
  float v84; // xmm6_4
  float v85; // xmm4_4
  float v86; // xmm5_4
  float v87; // xmm2_4
  float v88; // xmm0_4
  float v89; // xmm5_4
  float v90; // xmm4_4
  float v91; // xmm2_4
  float v92; // xmm6_4
  float v93; // xmm0_4
  int result; // eax
  __int64 v95; // rsi
  float v96; // xmm6_4
  float v97; // xmm1_4
  int v98; // edx
  float v99; // xmm0_4
  float v100; // xmm2_4
  float v101; // xmm15_4
  float v102; // xmm14_4
  float v103; // xmm0_4
  float v104; // xmm13_4
  float v105; // xmm5_4
  __int64 v106; // rbx
  float v107; // xmm0_4
  float v108; // xmm1_4
  float v109; // xmm2_4
  __int64 v110; // rcx
  float v111; // xmm9_4
  float v112; // xmm10_4
  float v113; // xmm11_4
  float v114; // xmm7_4
  __int64 v115; // rcx
  float v116; // xmm2_4
  unsigned int v117; // xmm3_4
  float v118; // xmm0_4
  float v119; // xmm2_4
  unsigned int v120; // xmm1_4
  unsigned int v121; // xmm0_4
  unsigned int v122; // xmm0_4
  unsigned __int8 v123; // al
  __int64 v124; // rcx
  float v125; // xmm0_4
  float *v126; // rax
  float v127; // xmm3_4
  float v128; // xmm4_4
  float v129; // xmm5_4
  float v130; // xmm1_4
  float v131; // xmm0_4
  float v132; // xmm3_4
  float v133; // xmm1_4
  float v134; // xmm0_4
  __int64 v135; // rcx
  float v136; // [rsp+20h] [rbp-E0h]
  float v137; // [rsp+20h] [rbp-E0h]
  float v138; // [rsp+20h] [rbp-E0h]
  float v139; // [rsp+20h] [rbp-E0h]
  float v140; // [rsp+24h] [rbp-DCh]
  float v141; // [rsp+24h] [rbp-DCh]
  float v142; // [rsp+24h] [rbp-DCh]
  float v143; // [rsp+24h] [rbp-DCh]
  float v144; // [rsp+28h] [rbp-D8h]
  float v145; // [rsp+2Ch] [rbp-D4h]
  float v146; // [rsp+2Ch] [rbp-D4h]
  float v147; // [rsp+30h] [rbp-D0h]
  float v148; // [rsp+34h] [rbp-CCh]
  float v149; // [rsp+34h] [rbp-CCh]
  float v150; // [rsp+38h] [rbp-C8h]
  float v151; // [rsp+38h] [rbp-C8h]
  float v152; // [rsp+38h] [rbp-C8h]
  float v153; // [rsp+3Ch] [rbp-C4h]
  float v154; // [rsp+40h] [rbp-C0h]
  float v155; // [rsp+40h] [rbp-C0h]
  float v156; // [rsp+44h] [rbp-BCh]
  float v157; // [rsp+48h] [rbp-B8h]
  __int64 v158; // [rsp+50h] [rbp-B0h] BYREF
  float v159; // [rsp+58h] [rbp-A8h]
  float v160; // [rsp+5Ch] [rbp-A4h] BYREF
  float v161; // [rsp+60h] [rbp-A0h]
  float v162; // [rsp+64h] [rbp-9Ch]
  float v163; // [rsp+68h] [rbp-98h]
  float v164; // [rsp+6Ch] [rbp-94h]
  float v165; // [rsp+70h] [rbp-90h]
  float v166; // [rsp+78h] [rbp-88h] BYREF
  float v167; // [rsp+7Ch] [rbp-84h]
  float v168; // [rsp+80h] [rbp-80h]
  __int64 v169; // [rsp+88h] [rbp-78h]
  unsigned int v170; // [rsp+90h] [rbp-70h]
  unsigned int v171; // [rsp+94h] [rbp-6Ch]
  unsigned int v172; // [rsp+98h] [rbp-68h]
  unsigned int v173; // [rsp+9Ch] [rbp-64h]
  unsigned int v174; // [rsp+A0h] [rbp-60h]
  unsigned int v175; // [rsp+A4h] [rbp-5Ch]
  unsigned int v176; // [rsp+A8h] [rbp-58h]
  float v177; // [rsp+ACh] [rbp-54h]
  float v178; // [rsp+B0h] [rbp-50h]
  float v179; // [rsp+B4h] [rbp-4Ch]
  float v180; // [rsp+190h] [rbp+90h]
  float v181; // [rsp+190h] [rbp+90h]
  float v182; // [rsp+190h] [rbp+90h]
  float v183; // [rsp+190h] [rbp+90h]

  v4 = 0;
  v7 = 5210LL * a1;
  v9 = (int)dword_140404A6C[v7 + 129716710];
  if ( dword_140404A6C[24944 * v9 + 346707717] )
  {
    v49 = *(float *)&dword_140404A6C[v7 + 129716729];
    v50 = *(float *)&dword_140404A6C[v7 + 129716726];
    v51 = *(float *)&dword_140404A6C[v7 + 129716720];
    v52 = *(float *)&dword_140404A6C[v7 + 129716730];
    v53 = *(float *)&dword_140404A6C[v7 + 129716727];
    v54 = *(float *)&dword_140404A6C[v7 + 129716721];
    v55 = *(float *)&dword_140404A6C[v7 + 129716728];
    v56 = *(float *)&dword_140404A6C[v7 + 129716731];
    v57 = *(float *)&dword_140404A6C[v7 + 129716722];
    v182 = *(float *)&dword_140404A6C[v7 + 129716734];
    v138 = *(float *)&dword_140404A6C[v7 + 129716732];
    v142 = *(float *)&dword_140404A6C[v7 + 129716733];
    v58 = 180288LL * (int)dword_140404A6C[v7 + 129716710] + 52LL * a2;
    v59 = *(float *)((char *)&dword_140404A6C[335200384] + v58);
    v60 = *(float *)((char *)&dword_140404A6C[335200385] + v58);
    v61 = *(float *)((char *)&dword_140404A6C[335200386] + v58);
    v28 = (float)((float)(v138 * v61) + (float)(v50 * v59)) + (float)((float)(v49 * v60) + v51);
    v62 = (float)(v142 * v61) + (float)(v53 * v59);
    v63 = v55 * v59;
    v64 = *(float *)((char *)&dword_140404A6C[335200387] + v58);
    v157 = v28;
    v32 = v62 + (float)((float)(v52 * v60) + v54);
    v156 = v32;
    v65 = v56 * v60;
    v66 = *(float *)((char *)&dword_140404A6C[335200388] + v58);
    v153 = (float)((float)(v182 * v61) + v63) + (float)(v65 + v57);
    v67 = *(float *)((char *)&dword_140404A6C[335200389] + v58);
    v144 = (float)((float)(v138 * v67) + (float)(v50 * v64)) + (float)((float)(v49 * v66) + v51);
    v147 = (float)((float)(v142 * v67) + (float)(v53 * v64)) + (float)((float)(v52 * v66) + v54);
    v68 = v182 * v67;
    v69 = *(float *)((char *)&dword_140404A6C[335200392] + v58);
    v70 = v55 * v64;
    v71 = *(float *)((char *)&dword_140404A6C[335200390] + v58);
    v152 = v68 + v70;
    v72 = v56 * v66;
    v73 = *(float *)((char *)&dword_140404A6C[335200391] + v58);
    v151 = v152 + (float)(v72 + v57);
    v154 = (float)((float)(v138 * v69) + (float)(v50 * v71)) + (float)((float)(v49 * v73) + v51);
    v74 = (float)((float)(v142 * v69) + (float)(v53 * v71)) + (float)((float)(v52 * v73) + v54);
    v75 = v182 * v69;
    v76 = *(float *)((char *)&dword_140404A6C[335200394] + v58);
    v145 = v74;
    v77 = (float)(v75 + (float)(v55 * v71)) + (float)((float)(v56 * v73) + v57);
    v78 = *(float *)((char *)&dword_140404A6C[335200393] + v58);
    v148 = v77;
    v79 = *(float *)((char *)&dword_140404A6C[335200395] + v58);
    v137 = (float)((float)(v138 * v79) + (float)(v50 * v78)) + (float)((float)(v49 * v76) + v51);
    v141 = (float)((float)(v142 * v79) + (float)(v53 * v78)) + (float)((float)(v52 * v76) + v54);
    v181 = (float)((float)(v182 * v79) + (float)(v55 * v78)) + (float)((float)(v56 * v76) + v57);
  }
  else
  {
    v10 = dword_140404A6C[908 * dword_140404A6C[v9 + 283826582] + 178527536];
    v11 = 0;
    if ( v10 > 0 )
    {
      v12 = &dword_140404A6C[908 * dword_140404A6C[dword_140404A6C[v7 + 129716710] + 283826582] + 178527549];
      do
      {
        v13 = *v12 == a2;
        v12 += 13;
        v14 = v11;
        if ( !v13 )
          v14 = v4;
        ++v11;
        v4 = v14;
      }
      while ( v11 < v10 );
    }
    v15 = *(float *)&dword_140404A6C[v7 + 129716726];
    v16 = *(float *)&dword_140404A6C[v7 + 129716729];
    v17 = *(float *)&dword_140404A6C[v7 + 129716720];
    v18 = *(float *)&dword_140404A6C[v7 + 129716727];
    v19 = *(float *)&dword_140404A6C[v7 + 129716730];
    v20 = *(float *)&dword_140404A6C[v7 + 129716721];
    v21 = *(float *)&dword_140404A6C[v7 + 129716731];
    v22 = *(float *)&dword_140404A6C[v7 + 129716728];
    v23 = *(float *)&dword_140404A6C[v7 + 129716722];
    v180 = *(float *)&dword_140404A6C[v7 + 129716734];
    v136 = *(float *)&dword_140404A6C[v7 + 129716732];
    v140 = *(float *)&dword_140404A6C[v7 + 129716733];
    v24 = 52LL * v4 + 3632LL * (int)dword_140404A6C[dword_140404A6C[v7 + 129716710] + 283826582];
    v25 = *(float *)((char *)&dword_140404A6C[178527537] + v24);
    v26 = *(float *)((char *)&dword_140404A6C[178527538] + v24);
    v27 = *(float *)((char *)&dword_140404A6C[178527539] + v24);
    v28 = (float)((float)(v136 * v27) + (float)(v16 * v26)) + (float)((float)(v15 * v25) + v17);
    v29 = (float)(v140 * v27) + (float)(v19 * v26);
    v30 = v21 * v26;
    v31 = *(float *)((char *)&dword_140404A6C[178527541] + v24);
    v157 = v28;
    v32 = v29 + (float)((float)(v18 * v25) + v20);
    v156 = v32;
    v33 = v22 * v25;
    v34 = *(float *)((char *)&dword_140404A6C[178527540] + v24);
    v153 = (float)((float)(v180 * v27) + v30) + (float)(v33 + v23);
    v35 = *(float *)((char *)&dword_140404A6C[178527542] + v24);
    v144 = (float)((float)(v136 * v35) + (float)(v16 * v31)) + (float)((float)(v15 * v34) + v17);
    v36 = (float)((float)(v140 * v35) + (float)(v19 * v31)) + (float)((float)(v18 * v34) + v20);
    v37 = v180 * v35;
    v38 = *(float *)((char *)&dword_140404A6C[178527545] + v24);
    v147 = v36;
    v39 = v21 * v31;
    v40 = *(float *)((char *)&dword_140404A6C[178527544] + v24);
    v150 = v37 + v39;
    v41 = v22 * v34;
    v42 = *(float *)((char *)&dword_140404A6C[178527543] + v24);
    v151 = v150 + (float)(v41 + v23);
    v154 = (float)((float)(v136 * v38) + (float)(v16 * v40)) + (float)((float)(v15 * v42) + v17);
    v43 = (float)((float)(v140 * v38) + (float)(v19 * v40)) + (float)((float)(v18 * v42) + v20);
    v44 = v180 * v38;
    v45 = *(float *)((char *)&dword_140404A6C[178527546] + v24);
    v145 = v43;
    v46 = (float)(v44 + (float)(v21 * v40)) + (float)((float)(v22 * v42) + v23);
    v47 = *(float *)((char *)&dword_140404A6C[178527547] + v24);
    v148 = v46;
    v48 = *(float *)((char *)&dword_140404A6C[178527548] + v24);
    v141 = (float)((float)(v140 * v48) + (float)(v19 * v47)) + (float)((float)(v18 * v45) + v20);
    v137 = (float)((float)(v136 * v48) + (float)(v16 * v47)) + (float)((float)(v15 * v45) + v17);
    v181 = (float)((float)(v180 * v48) + (float)(v21 * v47)) + (float)((float)(v22 * v45) + v23);
  }
  v80 = (float)((float)(v145 - v32) * (float)(v151 - v153)) - (float)((float)(v148 - v153) * (float)(v147 - v32));
  v81 = (float)((float)(v154 - v28) * (float)(v147 - v32)) - (float)((float)(v145 - v32) * (float)(v144 - v28));
  v82 = (float)((float)(v148 - v153) * (float)(v144 - v28)) - (float)((float)(v154 - v28) * (float)(v151 - v153));
  v83 = fsqrt((float)((float)(v82 * v82) + (float)(v80 * v80)) + (float)(v81 * v81));
  if ( v83 == 0.0 )
  {
    v84 = 0.0;
    v85 = 0.0;
    v86 = 0.0;
  }
  else
  {
    v84 = (float)(1.0 / v83) * v80;
    v85 = (float)(1.0 / v83) * v82;
    v86 = (float)(1.0 / v83) * v81;
  }
  v163 = v84;
  v87 = v86;
  v164 = v85;
  v165 = v86;
  if ( fabs(v85) >= 0.70700002 )
  {
    v93 = v85 * *(float *)&dword_1402F6180;
    v89 = v86 * *(float *)&dword_1402F6178;
    v90 = v85 * *(float *)&dword_1402F6178;
    *(float *)&v158 = (float)(v87 * *(float *)&dword_1402F617C) - v93;
    v91 = v84 * *(float *)&dword_1402F6180;
    v92 = v84 * *(float *)&dword_1402F617C;
  }
  else
  {
    v88 = v85 * *(float *)&dword_1402F6190;
    v89 = v86 * *(float *)&dword_1402F6188;
    v90 = v85 * *(float *)&dword_1402F6188;
    *(float *)&v158 = (float)(v87 * *(float *)&dword_1402F618C) - v88;
    v91 = v84 * *(float *)&dword_1402F6190;
    v92 = v84 * *(float *)&dword_1402F618C;
  }
  v159 = v90 - v92;
  *((float *)&v158 + 1) = v91 - v89;
  sub_14007A240((__int64)&v158, (float *)&v158);
  v160 = (float)(v159 * v164) - (float)(v165 * *((float *)&v158 + 1));
  v162 = (float)(v163 * *((float *)&v158 + 1)) - (float)(*(float *)&v158 * v164);
  v161 = (float)(v165 * *(float *)&v158) - (float)(v163 * v159);
  result = sub_14007A240((__int64)&v160, &v160);
  v95 = 9;
  v96 = v153;
  v97 = v147;
  v98 = dword_140404A6C[433435845];
  v139 = (float)(v137 - v28) * 0.125;
  v99 = v141 - v32;
  v146 = (float)(v145 - v147) * 0.125;
  v100 = v151;
  v101 = v28;
  v102 = v153;
  v143 = v99 * 0.125;
  v149 = (float)(v148 - v151) * 0.125;
  v176 = LODWORD(v165);
  v175 = LODWORD(v164);
  v174 = LODWORD(v163);
  v173 = LODWORD(v162);
  v172 = LODWORD(v161);
  v171 = LODWORD(v160);
  v170 = LODWORD(v159);
  v183 = (float)(v181 - v153) * 0.125;
  v103 = v144;
  v169 = v158;
  v155 = (float)(v154 - v144) * 0.125;
  v104 = v156;
  v105 = v156;
  do
  {
    v106 = 9;
    v107 = (float)(v103 - v101) * 0.125;
    v108 = (float)(v97 - v105) * 0.125;
    v109 = (float)(v100 - v96) * 0.125;
    v177 = v107;
    v178 = v108;
    v179 = v109;
    do
    {
      if ( v98 < 0x4000 )
      {
        v110 = 37LL * v98;
        dword_140404A6C[v110 + 432826949] = 3;
        *(float *)&dword_140404A6C[v110 + 432826952] = v101;
        *(float *)&dword_140404A6C[v110 + 432826953] = v104;
        *(float *)&dword_140404A6C[v110 + 432826954] = v102;
        v111 = *a3;
        v112 = a3[1];
        v113 = a3[2];
        v114 = *a3 - v101;
        sub_1400A56B0(&v166, 0.0083333338, 0.0020833334);
        v115 = 37LL * (int)dword_140404A6C[433435845];
        v116 = fmaxf(
                 1.0
               - (float)(fsqrt(
                           (float)((float)((float)(v112 - v104) * (float)(v112 - v104)) + (float)(v114 * v114))
                         + (float)((float)(v113 - v102) * (float)(v113 - v102)))
                       * 4.0),
                 0.03125)
             * 0.0625;
        *(float *)&v117 = (float)((float)((float)((float)(v101 - v111) * 0.03125) + v166)
                                + *(float *)&dword_140404A6C[v7 + 129716744])
                        + (float)(v116 * *a4);
        v118 = v116 * a4[1];
        v119 = v116 * a4[2];
        *(float *)&v120 = (float)((float)((float)((float)(v104 - v112) * 0.03125) + v167)
                                + *(float *)&dword_140404A6C[v7 + 129716745])
                        + v118;
        dword_140404A6C[v115 + 432826955] = v117;
        v166 = *(float *)&v117;
        dword_140404A6C[v115 + 432826956] = v120;
        v167 = *(float *)&v120;
        *(float *)&v121 = (float)((float)((float)((float)(v102 - v113) * 0.03125) + v168)
                                + *(float *)&dword_140404A6C[v7 + 129716746])
                        + v119;
        dword_140404A6C[v115 + 432826957] = v121;
        dword_140404A6C[v115 + 432826950] = 0xFFFF;
        dword_140404A6C[v115 + 432826984] = 1031798784;
        v168 = *(float *)&v121;
        v122 = v169;
        dword_140404A6C[v115 + 432826951] = 993158992;
        dword_140404A6C[v115 + 432826983] = 1065311273;
        *(_QWORD *)&dword_140404A6C[v115 + 432826961] = __PAIR64__(HIDWORD(v169), v122);
        dword_140404A6C[v115 + 432826963] = v170;
        dword_140404A6C[v115 + 432826964] = v171;
        dword_140404A6C[v115 + 432826965] = v172;
        dword_140404A6C[v115 + 432826966] = v173;
        dword_140404A6C[v115 + 432826967] = v174;
        dword_140404A6C[v115 + 432826968] = v175;
        dword_140404A6C[v115 + 432826969] = v176;
        *(float *)&dword_140404A6C[37 * dword_140404A6C[433435845] + 432826979] = (float)((float)(unsigned __int8)rand()
                                                                                        * 0.001953125)
                                                                                - 0.25;
        *(float *)&dword_140404A6C[37 * dword_140404A6C[433435845] + 432826980] = (float)((float)(unsigned __int8)rand()
                                                                                        * 0.001953125)
                                                                                - 0.25;
        v123 = rand();
        v124 = 37LL * (int)dword_140404A6C[433435845];
        v125 = (float)v123;
        v126 = (float *)&dword_140404A6C[v124 + 432826979];
        *(float *)&dword_140404A6C[v124 + 432826981] = (float)(v125 * 0.001953125) - 0.25;
        v127 = *(float *)&dword_140404A6C[v124 + 432826980];
        v128 = *(float *)&dword_140404A6C[v124 + 432826979];
        v129 = *(float *)&dword_140404A6C[v124 + 432826981];
        v130 = fsqrt((float)((float)(v128 * v128) + (float)(v127 * v127)) + (float)(v129 * v129));
        if ( v130 == 0.0 )
        {
          v133 = 0.0;
          v132 = 0.0;
          v134 = 0.0;
        }
        else
        {
          v131 = 1.0 / v130;
          v132 = v127 * (float)(1.0 / v130);
          v133 = (float)(1.0 / v130) * v129;
          v134 = v131 * v128;
        }
        *v126 = v134;
        v126[1] = v132;
        v126[2] = v133;
        result = rand();
        v108 = v178;
        v109 = v179;
        v135 = 37LL * (int)dword_140404A6C[433435845];
        v98 = ++dword_140404A6C[433435845];
        *(float *)&dword_140404A6C[v135 + 432826982] = (float)((float)(unsigned __int8)result * 0.0009765625) - 0.125;
        v107 = v177;
      }
      v101 = v101 + v107;
      v104 = v104 + v108;
      v102 = v102 + v109;
      --v106;
    }
    while ( v106 );
    v157 = v157 + v139;
    v101 = v157;
    v144 = v144 + v155;
    v156 = v143 + v156;
    v104 = v156;
    v105 = v156;
    v153 = v183 + v153;
    v102 = v153;
    v103 = v144;
    v96 = v153;
    v147 = v147 + v146;
    v97 = v147;
    v151 = v151 + v149;
    v100 = v151;
    --v95;
  }
  while ( v95 );
  return result;
}

// 1402F6178: using guessed type int dword_1402F6178;
// 1402F617C: using guessed type int dword_1402F617C;
// 1402F6180: using guessed type int dword_1402F6180;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A7971D80: using guessed type unsigned int;

//----- (00000001400689A0) ----------------------------------------------------
__int64            sub_1400689A0(int a1, int a2, int a3, int a4, int a5, signed int a6, unsigned int *a7, float *a8)
{
  __int64 v9; // rdx
  __int64 v10; // rdx
  float v11; // xmm0_4
  float v12; // xmm9_4
  float v13; // xmm11_4
  float v14; // xmm8_4
  float v15; // xmm7_4
  float v16; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm12_4
  float v20; // xmm13_4
  float v21; // xmm14_4
  float v22; // xmm10_4
  float v23; // xmm6_4
  int v24; // r10d
  char v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  float v38; // [rsp+0h] [rbp-C9h] BYREF
  float v39; // [rsp+4h] [rbp-C5h]
  _DWORD v40[22]; // [rsp+8h] [rbp-C1h]
  __int64 v41; // [rsp+60h] [rbp-69h]

  if ( (a5 & 0xE0000000) == 0x80000000 )
  {
    v9 = 58LL * (unsigned __int16)a5;
    if ( a6 < (int)dword_140404A6C[v9 + 20074651] )
    {
      v10 = *(_QWORD *)&dword_140404A6C[v9 + 20074653];
      v11 = *(float *)&dword_140404A6C[263004 * a1 + 111579653];
      v12 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 44)) * v11;
      v13 = (float)((float)a2 + *(float *)(v10 + 48LL * a6 + 36)) * v11;
      v14 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 32)) * v11;
      v15 = (float)((float)a2 + *(float *)(v10 + 48LL * a6 + 24)) * v11;
      v16 = (float)((float)a2 + *(float *)(v10 + 48LL * a6 + 12)) * v11;
      v17 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 16)) * v11;
      v18 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 20)) * v11;
      v19 = (float)((float)a2 + *(float *)(v10 + 48LL * a6)) * v11;
      v20 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 4)) * v11;
      v21 = (float)((float)a4 + *(float *)(v10 + 48LL * a6 + 8)) * v11;
      v22 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 40)) * v11;
      v23 = (float)((float)a3 + *(float *)(v10 + 48LL * a6 + 28)) * v11;
      v38 = v13;
      v39 = v22;
      *(float *)v40 = v12;
      *(float *)&v40[1] = v15;
      *(float *)&v40[2] = v23;
      *(float *)&v40[3] = v14;
      *(float *)&v40[4] = v16;
      *(float *)&v40[10] = (float)(v13 + v15) * 0.5;
      *(float *)&v40[5] = v17;
      *(float *)&v40[6] = v18;
      *(float *)&v40[7] = v19;
      *(float *)&v40[8] = v20;
      *(float *)&v40[9] = v21;
      *(float *)&v40[11] = (float)(v22 + v23) * 0.5;
      v24 = dword_140404A6C[433435845];
      v25 = 0;
      v26 = 0;
      *(float *)&v40[12] = (float)(v12 + v14) * 0.5;
      *(float *)&v40[17] = (float)(v17 + v20) * 0.5;
      *(float *)&v40[15] = (float)(v14 + v18) * 0.5;
      *(float *)&v40[18] = (float)(v18 + v21) * 0.5;
      *(float *)&v40[19] = (float)(v13 + v19) * 0.5;
      *(float *)&v40[20] = (float)(v22 + v20) * 0.5;
      *(float *)&v40[21] = (float)(v12 + v21) * 0.5;
      *(float *)&v40[14] = (float)(v17 + v23) * 0.5;
      *(float *)&v40[13] = (float)(v16 + v15) * 0.5;
      *(float *)&v40[16] = (float)(v16 + v19) * 0.5;
      do
      {
        if ( v24 < 0x4000 )
        {
          v27 = 37LL * v24;
          v28 = *((_DWORD *)&v38 + 3 * v26);
          dword_140404A6C[v27 + 432826949] = 4;
          dword_140404A6C[v27 + 432826961] = v28;
          dword_140404A6C[v27 + 432826962] = v40[3 * v26 - 1];
          dword_140404A6C[v27 + 432826963] = v40[3 * v26];
          dword_140404A6C[v27 + 432826964] = *((_DWORD *)&v38 + 3 * ((v25 + 1) & 3));
          dword_140404A6C[v27 + 432826965] = v40[3 * ((v25 + 1) & 3) - 1];
          dword_140404A6C[v27 + 432826966] = v40[3 * ((v25 + 1) & 3)];
          dword_140404A6C[v27 + 432826967] = *a7;
          dword_140404A6C[v27 + 432826968] = a7[1];
          dword_140404A6C[v27 + 432826969] = a7[2];
          if ( v26 == 2 )
            *(float *)&dword_140404A6C[v27 + 432826968] = *(float *)&dword_140404A6C[v27 + 432826968] - 0.0625;
          *(_QWORD *)&dword_140404A6C[v27 + 432826970] = 0;
          ++v24;
          *(_QWORD *)&dword_140404A6C[v27 + 432826972] = 0;
          *(_QWORD *)&dword_140404A6C[v27 + 432826974] = 0;
          *(float *)&dword_140404A6C[v27 + 432826976] = *a8 * 0.015625;
          *(float *)&dword_140404A6C[v27 + 432826977] = a8[1] * 0.015625;
          *(float *)&v29 = a8[2] * 0.015625;
          dword_140404A6C[433435845] = v24;
          dword_140404A6C[v27 + 432826978] = v29;
          dword_140404A6C[v27 + 432826950] = 60000;
          dword_140404A6C[v27 + 432826984] = 1048576000;
          dword_140404A6C[v27 + 432826951] = 993158992;
          dword_140404A6C[v27 + 432826983] = 1065311273;
          v30 = *(float *)&dword_140404A6C[v27 + 432826961] - *(float *)&dword_140404A6C[v27 + 432826964];
          v31 = *(float *)&dword_140404A6C[v27 + 432826962] - *(float *)&dword_140404A6C[v27 + 432826965];
          v32 = *(float *)&dword_140404A6C[v27 + 432826963] - *(float *)&dword_140404A6C[v27 + 432826966];
          *(float *)&dword_140404A6C[v27 + 432826979] = fsqrt(
                                                          (float)((float)(v31 * v31) + (float)(v30 * v30))
                                                        + (float)(v32 * v32));
          v33 = *(float *)&dword_140404A6C[v27 + 432826964] - *(float *)&dword_140404A6C[v27 + 432826967];
          v34 = *(float *)&dword_140404A6C[v27 + 432826965] - *(float *)&dword_140404A6C[v27 + 432826968];
          v35 = *(float *)&dword_140404A6C[v27 + 432826966] - *(float *)&dword_140404A6C[v27 + 432826969];
          *(float *)&dword_140404A6C[v27 + 432826980] = fsqrt(
                                                          (float)((float)(v34 * v34) + (float)(v33 * v33))
                                                        + (float)(v35 * v35));
          v36 = *(float *)&dword_140404A6C[v27 + 432826969] - *(float *)&dword_140404A6C[v27 + 432826963];
          *(float *)&dword_140404A6C[v27 + 432826981] = fsqrt(
                                                          (float)((float)((float)(*(float *)&dword_140404A6C[v27 + 432826968]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826962])
                                                                        * (float)(*(float *)&dword_140404A6C[v27 + 432826968]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826962]))
                                                                + (float)((float)(*(float *)&dword_140404A6C[v27 + 432826967]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826961])
                                                                        * (float)(*(float *)&dword_140404A6C[v27 + 432826967]
                                                                                - *(float *)&dword_140404A6C[v27 + 432826961])))
                                                        + (float)(v36 * v36));
        }
        ++v25;
        ++v26;
      }
      while ( v26 < 4 );
    }
  }
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A7971D80: using guessed type unsigned int;

//----- (0000000140068F80)
_BOOL8 sub_140068F80(void) { return sr_client_cpu_sse41_probe(); }


//----- (0000000140068FC0) ----------------------------------------------------
__int64            sub_140068FC0(int a1, char *a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  unsigned int v4; // r15d
  int *v5; // rdi
  int v6; // r14d
  __int64 v7; // r13
  __int64 v8; // r10
  __int64 v9; // r12
  unsigned int *v10; // rsi
  int v11; // r8d
  int v12; // r11d
  __int64 v13; // rdx
  int v14; // r9d
  unsigned int v15; // r12d
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  signed int v18; // esi
  int v19; // ebp
  int v20; // r15d
  int v21; // r9d
  __int64 v22; // r8
  signed int v23; // eax
  signed int *i; // rcx
  signed int v25; // edx
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rax
  __int64 v30; // r8
  float v31; // xmm3_4
  int v32; // r11d
  float v33; // xmm4_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  int v36; // edi
  __int64 v37; // r13
  __int64 v38; // rax
  int v39; // r9d
  __int64 v40; // r8
  __int64 v41; // r10
  __int64 v42; // [rsp-20h] [rbp-10118h] BYREF
  unsigned int v43; // [rsp+30h] [rbp-100C8h]
  unsigned int v44; // [rsp+34h] [rbp-100C4h]
  int v45; // [rsp+38h] [rbp-100C0h]
  _DWORD v46[8192]; // [rsp+40h] [rbp-100B8h] BYREF
  __int64 v47; // [rsp+8040h] [rbp-80B8h]

  v2 = 49166LL * a1;
  if ( (int)dword_140404A6C[v2 + 433435865] < 4096 && (unsigned int)sub_140079840(a2) )
  {
    v3 = dword_140404A6C[468765293];
    v4 = dword_140404A6C[468765294];
    v5 = (int *)&dword_140404A6C[v2 + 433435853];
    v6 = dword_140404A6C[v2 + 433435853];
    if ( v6 > 0 )
      sub_1401FCD30((void *)(uintptr_t)(v46), 0, 4LL * (unsigned int)v6);
    v7 = (int)dword_140404A6C[v2 + 433435865];
    v45 = v7;
    if ( (int)v7 > 0 )
    {
      v8 = 0;
      v9 = (unsigned int)v7;
      v10 = &dword_140404A6C[v2 + 433435868];
      do
      {
        v11 = *(v10 - 2);
        v12 = v11 + *v10;
        if ( v11 < v12 )
        {
          v13 = (int)*(v10 - 2);
          do
          {
            if ( v13 >= 0 && v11 < v6 )
            {
              v14 = v5[v8 + 16] + v5[v8 + 14];
              if ( v46[v13] < v14 )
                v46[v13] = v14;
            }
            ++v11;
            ++v13;
          }
          while ( v11 < v12 );
        }
        v8 += 12;
        v10 += 12;
        --v9;
      }
      while ( v9 );
    }
    v15 = 0;
    v44 = v3;
    v43 = 0;
    v16 = v3;
    v17 = v4;
    v18 = 0;
    v19 = v3 + 2;
    v20 = v4 + 2;
    v21 = dword_140404A6C[v2 + 433435854] - v20;
    if ( v21 >= 0 )
    {
      v22 = 0;
      while ( 2 )
      {
        v23 = v15;
        for ( i = &v46[v22]; ; ++i )
        {
          if ( v23 >= (int)(v15 + v19) )
          {
            v30 = v2 * 4 + 48 * v7;
            v31 = (float)(int)(v18 + 1 + v17);
            v32 = 0;
            *(unsigned int *)((char *)&dword_140404A6C[433435866] + v30) = v15;
            *(unsigned int *)((char *)&dword_140404A6C[433435867] + v30) = v18;
            *(unsigned int *)((char *)&dword_140404A6C[433435868] + v30) = v19;
            *(unsigned int *)((char *)&dword_140404A6C[433435869] + v30) = v20;
            v33 = (float)(int)(v15 + 1);
            v34 = (float)(int)(v15 + 1 + v16);
            *(float *)((char *)&dword_140404A6C[433435870] + v30) = v33 / (float)*v5;
            *(float *)((char *)&dword_140404A6C[433435871] + v30) = v31 / (float)(int)dword_140404A6C[v2 + 433435854];
            *(float *)((char *)&dword_140404A6C[433435872] + v30) = v34 / (float)*v5;
            *(float *)((char *)&dword_140404A6C[433435873] + v30) = v31 / (float)(int)dword_140404A6C[v2 + 433435854];
            *(float *)((char *)&dword_140404A6C[433435874] + v30) = v34 / (float)*v5;
            v35 = (float)(v18 + 1);
            *(float *)((char *)&dword_140404A6C[433435875] + v30) = v35 / (float)(int)dword_140404A6C[v2 + 433435854];
            *(float *)((char *)&dword_140404A6C[433435876] + v30) = v33 / (float)*v5;
            *(float *)((char *)&dword_140404A6C[433435877] + v30) = v35 / (float)(int)dword_140404A6C[v2 + 433435854];
            ++dword_140404A6C[v2 + 433435865];
            if ( v20 > 0 )
            {
              v36 = -v16;
              v37 = 0;
              v38 = 4LL * v19;
              do
              {
                v39 = 0;
                if ( v19 > 0 )
                {
                  v40 = 0;
                  v41 = v37;
                  do
                  {
                    *(_DWORD *)(v41 + *(_QWORD *)&dword_140404A6C[v2 + 433435863]) = 0;
                    if ( v32 && v32 < v20 - 1 && v40 && v39 < v19 - 1 )
                      *(_DWORD *)(v41 + *(_QWORD *)&dword_140404A6C[v2 + 433435863]) = dword_140404A6C[v36 + 468765294 + v39];
                    ++v39;
                    ++v40;
                    v41 += 4;
                  }
                  while ( v40 < v19 );
                  v16 = v44;
                  v38 = 4LL * v19;
                }
                ++v32;
                v37 += v38;
                v36 += v16;
              }
              while ( v32 < v20 );
              v15 = v43;
            }
            qword_140404050(3553, dword_140404A6C[v2 + 433435861]);
            (*(void (           **)(__int64, _QWORD, _QWORD, _QWORD, int, int, int, int, _QWORD))&flt_140384000[131090])(
              3553,
              0,
              v15,
              (unsigned int)v18,
              v19,
              v20,
              6408,
              5121,
              *(_QWORD *)&dword_140404A6C[v2 + 433435863]);
            return (unsigned int)v45;
          }
          if ( v18 < *i )
            break;
          ++v23;
        }
        v25 = v15 + 1;
        v26 = v6 - v19;
        v27 = v18 + 1;
        if ( (int)(v15 + 1) <= v6 - v19 )
          v27 = v18;
        v15 = 0;
        v18 = v27;
        v28 = v22 + 1;
        if ( v25 <= v26 )
          v15 = v25;
        v22 = 0;
        v43 = v15;
        if ( v25 <= v26 )
          v22 = v28;
        if ( v18 <= v21 )
          continue;
        break;
      }
    }
  }
  return (unsigned int)-1;
}

// 140384000: using guessed type float flt_140384000[131092];
// 140404048: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (0000000140069400) ----------------------------------------------------
void            sub_140069400(__int64 a1, __m128i *a2, int a3)
{
  sub_1401FC920(a2, (     __m128i *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[9] + 11], a3);
  dword_140404A6C[9] ^= 1u;
  SDL_SemPost(*(void **)&dword_140404A6C[1]);
}

// 140069439: control flows out of bounds to 140198E69
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140069440) ----------------------------------------------------
__int64 sub_140069440()
{
  int v0; // eax
  int v1; // ebx
  int v2; // edi
  char *v3; // rax
  int v4; // r8d
  char *v5; // rdx
  char v6; // cl
  int v7; // eax
  char *v8; // rax
  int v9; // r8d
  char *v10; // rdx
  char v11; // cl
  __int64 result; // rax

  v0 = sub_140198E7B();
  v1 = 0;
  *(_QWORD *)&dword_140404A6C[18198670] = 0x746C7561666544LL;
  v2 = 0;
  if ( v0 < 0 )
    v0 = 0;
  dword_140404A6C[18198669] = v0;
  if ( v0 > 0 )
  {
    do
    {
      v3 = (char *)sub_140198E81();
      v4 = v2 + 1;
      v5 = (char *)&dword_140404A6C[1] + ((__int64)v2 << 9) - (_QWORD)v3;
      do
      {
        v6 = *v3;
        v3[(_QWORD)v5 + 72795188] = *v3;
        ++v3;
      }
      while ( v6 );
      v0 = dword_140404A6C[18198669];
      ++v2;
    }
    while ( v4 < (int)dword_140404A6C[18198669] );
  }
  dword_140404A6C[18198669] = v0 + 1;
  v7 = sub_140198E7B();
  *(_QWORD *)&dword_140404A6C[18206865] = 0x746C7561666544LL;
  if ( v7 < 0 )
    v7 = 0;
  dword_140404A6C[18206864] = v7;
  if ( v7 > 0 )
  {
    do
    {
      v8 = (char *)sub_140198E81();
      v9 = v1 + 1;
      v10 = (char *)&dword_140404A6C[1] + ((__int64)v1 << 9) - (_QWORD)v8;
      do
      {
        v11 = *v8;
        v8[(_QWORD)v10 + 72827968] = *v8;
        ++v8;
      }
      while ( v11 );
      v7 = dword_140404A6C[18206864];
      ++v1;
    }
    while ( v9 < (int)dword_140404A6C[18206864] );
  }
  result = (unsigned int)(v7 + 1);
  dword_140404A6C[18206864] = result;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144970CA0: using guessed type unsigned int;
// 144970CA4: using guessed type __int64[4096];
// 144978CAC: using guessed type unsigned int;
// 144978CB0: using guessed type __int64[4096];

//----- (0000000140069580) ----------------------------------------------------
__int64 sub_140069580()
{
  __int64 result; // rax

  if ( !dword_140404A6C[196619] )
    return 0;
  result = dword_140404A6C[196622] - dword_140404A6C[196623] + 0x40000;
  if ( (signed int)(dword_140404A6C[196622] - dword_140404A6C[196623]) >= -131072 )
    return dword_140404A6C[196622] - dword_140404A6C[196623];
  return result;
}

//----- (0000000140069630) ----------------------------------------------------
__int64 sub_140069630()
{
  int v0; // eax
  int v1; // ebx
  char *v2; // rax
  int v3; // r8d
  char *v4; // rdx
  char v5; // cl
  int v6; // eax
  int v7; // ebx
  char *v8; // rax
  int v9; // r8d
  char *v10; // rdx
  char v11; // cl
  unsigned int v12; // eax
  unsigned int v13; // eax
  char v15; // [rsp+56h] [rbp-22h]
  unsigned __int16 v16; // [rsp+58h] [rbp-20h]

  dword_140404A6C[18198666] = 1048576000;
  sub_140069A00();
  v0 = sr_audio_count(0);
  *(_QWORD *)&dword_140404A6C[18198670] = 0x746C7561666544LL;
  v1 = 0;
  if ( v0 < 0 )
    v0 = 0;
  dword_140404A6C[18198669] = v0;
  if ( v0 > 0 )
  {
    do
    {
      v2 = (char *)sr_audio_name(v1,0);
      v3 = v1 + 1;
      v4 = (char *)&dword_140404A6C[1] + ((__int64)v1 << 9) - (_QWORD)v2;
      do
      {
        v5 = *v2;
        v2[(_QWORD)v4 + 72795188] = *v2;
        ++v2;
      }
      while ( v5 );
      v0 = dword_140404A6C[18198669];
      ++v1;
    }
    while ( v3 < (int)dword_140404A6C[18198669] );
  }
  dword_140404A6C[18198669] = v0 + 1;
  v6 = sr_audio_count(1);
  *(_QWORD *)&dword_140404A6C[18206865] = 0x746C7561666544LL;
  v7 = 0;
  if ( v6 < 0 )
    v6 = 0;
  dword_140404A6C[18206864] = v6;
  if ( v6 > 0 )
  {
    do
    {
      v8 = (char *)sr_audio_name(v7,1);
      v9 = v7 + 1;
      v10 = (char *)&dword_140404A6C[1] + ((__int64)v7 << 9) - (_QWORD)v8;
      do
      {
        v11 = *v8;
        v8[(_QWORD)v10 + 72827968] = *v8;
        ++v8;
      }
      while ( v11 );
      v6 = dword_140404A6C[18206864];
      ++v7;
    }
    while ( v9 < (int)dword_140404A6C[18206864] );
  }
  dword_140404A6C[18206864] = v6 + 1;
  {
    void *semaphore=sr_audio_semaphore(0);
    void *thread;
    sr_startup_audio_spec desired,obtained;
    __builtin_memcpy(&dword_140404A6C[1],&semaphore,8);
    thread=sr_audio_thread((void *)(uintptr_t)sub_14006BB10,"cs_audio_updatethread",NULL,
       (void *)(uintptr_t)sub_14023D25C,(void *)(uintptr_t)sub_14023D33C);
    __builtin_memcpy(&dword_140404A6C[3],&thread,8);
    memset(&desired,0,32);
    desired.freq=48000;desired.format=0x8120;desired.channels=2;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sub_140069400;
    v12=sr_audio_open(NULL,0,&desired,&obtained,0);
    dword_140404A6C[8]=obtained.samples;
    if(obtained.channels!=2 || obtained.samples!=1024)v12=0;
    dword_140404A6C[7]=v12;
    memset(&desired,0,32);memset(&obtained,0,32);
    desired.freq=48000;desired.format=0x8010;desired.channels=1;desired.samples=1024;
    desired.callback=(void (*)(void *,unsigned char *,int))(uintptr_t)sub_14006A380;
    v13=sr_audio_open(sr_audio_name(0,1),1,&desired,&obtained,0);
  }
  dword_140404A6C[5] = 1124856083;
  *(_OWORD *)&dword_140404A6C[18198549] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[18198553] = xmmword_140278D30;
  dword_140404A6C[18198557] = 1065353216;
  dword_140404A6C[196619] = v13;
  if(!dword_140404A6C[7])return 0;
  sr_audio_pause(dword_140404A6C[7],0);
  sr_audio_pause(dword_140404A6C[196619],0);
  return 1;
}

// 1400697ED: variable 'v16' is possibly undefined
// 1400697F3: variable 'v15' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 140404A70: using guessed type unsigned int;
// 140404A78: using guessed type unsigned int;
// 140404A80: using guessed type unsigned int;
// 140404A88: using guessed type unsigned int;
// 1404C4A98: using guessed type unsigned int;
// 144970AC0: using guessed type unsigned int;
// 144970AD0: using guessed type unsigned int;
// 144970AE0: using guessed type unsigned int;
// 144970C94: using guessed type unsigned int;
// 144970CA0: using guessed type unsigned int;
// 144970CA4: using guessed type __int64[4096];
// 144978CAC: using guessed type unsigned int;
// 144978CB0: using guessed type __int64[4096];

//----- (0000000140069930) ----------------------------------------------------
void            sub_140069930(unsigned int a1, int a2, __int16 *a3, float a4)
{
  __int64 v4; // rdi
  void *v6; // rcx
  __int64 v7; // rax
  signed int v8; // ecx
  __int64 v9; // rdx
  int v10; // eax

  if ( a1 <= 0xFFF )
  {
    v4 = 8LL * (int)a1;
    v6 = *(void **)&dword_140404A6C[v4 + 18165779];
    *(float *)&dword_140404A6C[v4 + 18165783] = a4;
    dword_140404A6C[v4 + 18165777] = 1;
    dword_140404A6C[v4 + 18165778] = a2 / 2;
    free(v6);
    v7 = sr_path_malloc((int)(4 * dword_140404A6C[v4 + 18165778]));
    v8 = 0;
    *(_QWORD *)&dword_140404A6C[v4 + 18165779] = v7;
    if ( (int)dword_140404A6C[v4 + 18165778] > 0 )
    {
      v9 = 0;
      do
      {
        v10 = *a3++;
        ++v8;
        v9 += 4;
        *(float *)(v9 + *(_QWORD *)&dword_140404A6C[v4 + 18165779] - 4) = (float)v10 * 0.000030517578;
      }
      while ( v8 < (int)dword_140404A6C[v4 + 18165778] );
    }
  }
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140069A00) ----------------------------------------------------
void sub_140069A00()
{
  __int64 v0; // rax
  __int64 v1; // r15
  unsigned int *v2; // r12
  int v3; // ecx
  int i; // ebx
  int v5; // edx
  int v6; // eax
  unsigned int *v7; // r8
  unsigned int *v8; // r13
  signed int v9; // r14d
  __int64 v10; // r12
  int v11; // ebx
  __int64 v12; // rbp
  unsigned int *v13; // rsi
  unsigned int *v14; // rdi
  int v15; // eax
  int v16; // ebp
  unsigned int *v17; // rdi
  signed int v18; // ebx
  signed int v19; // eax
  signed int v20; // r14d
  unsigned int *v21; // r15
  __int64 v22; // rbp
  int v23; // ecx
  signed int v24; // r11d
  __int64 v25; // rdi
  unsigned int *v26; // rbx
  int v27; // r9d
  int v28; // edx
  __int64 v29; // rsi
  _WORD *v30; // r8
  __int64 v31; // r10
  unsigned int *v32; // rcx
  __int64 v33; // rdx
  __int64 v35; // [rsp+0h] [rbp-188h] BYREF
  int v36; // [rsp+20h] [rbp-168h]
  unsigned int *v37; // [rsp+28h] [rbp-160h]
  unsigned int *v38; // [rsp+30h] [rbp-158h]
  char Buffer[256]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v40; // [rsp+140h] [rbp-48h]

  v0 = sub_14020B8D8("default-48000.mhr", "rb");
  v1 = v0;
  v2 = &dword_140404A6C[175561672];
  if ( v0 )
  {
    fread_sr((void *)(uintptr_t)(Buffer), 8, 1, (FILE *)(uintptr_t)(v0));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[175561669]), 4, 1, (FILE *)(uintptr_t)(v1));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[175561670]), 1, 1, (FILE *)(uintptr_t)(v1));
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[175561671]), 1, 1, (FILE *)(uintptr_t)(v1));
    v3 = dword_140404A6C[175561671];
    for ( i = 0; i < (int)dword_140404A6C[175561671]; ++i )
    {
      fread_sr((void *)(uintptr_t)(&dword_140404A6C[i + 175561672]), 1, 1, (FILE *)(uintptr_t)(v1));
      v3 = dword_140404A6C[175561671];
    }
    v5 = 0;
    v36 = 0;
    if ( v3 > 0 )
    {
      v6 = dword_140404A6C[175561670];
      v7 = nullptr;
      v37 = nullptr;
      v8 = &dword_140404A6C[175561672];
      v38 = &dword_140404A6C[175561672];
      do
      {
        v9 = 0;
        v10 = 0;
        if ( (int)*v8 > 0 )
        {
          do
          {
            v11 = 0;
            if ( v6 > 0 )
            {
              v12 = 32 * (v9 + ((__int64)v5 << 7));
              v13 = &dword_140404A6C[64 * ((_QWORD)v7 + v10) + 176118984];
              v14 = &dword_140404A6C[32 * ((_QWORD)v7 + v10) + 175561928];
              do
              {
                fread_sr((void *)(uintptr_t)(&dword_140404A6C[v12 + 175561928 + v11]), 2, 1, (FILE *)(uintptr_t)(v1));
                v15 = *(__int16 *)v14++;
                ++v11;
                v13 += 2;
                *((float *)v13 - 2) = (float)v15 * 0.000030517578;
                v6 = dword_140404A6C[175561670];
              }
              while ( v11 < (int)dword_140404A6C[175561670] );
              v8 = v38;
              v5 = v36;
              v7 = v37;
            }
            ++v9;
            ++v10;
          }
          while ( v9 < (int)*v8 );
          v3 = dword_140404A6C[175561671];
        }
        ++v5;
        ++v8;
        v7 += 32;
        v36 = v5;
        v38 = v8;
        v37 = v7;
      }
      while ( v5 < v3 );
      v2 = &dword_140404A6C[175561672];
    }
    v16 = 0;
    if ( v3 > 0 )
    {
      v17 = &dword_140404A6C[175561672];
      do
      {
        v18 = 0;
        if ( (int)*v17 > 0 )
        {
          do
            fread_sr((void *)(uintptr_t)(&dword_140404A6C[256 * (__int64)v16 + 176086216 + 2 * v18++]), 1, 1, (FILE *)(uintptr_t)(v1));
          while ( v18 < (int)*v17 );
          v3 = dword_140404A6C[175561671];
        }
        ++v16;
        ++v17;
      }
      while ( v16 < v3 );
    }
    sub_14020B9E8(v1);
  }
  v19 = dword_140404A6C[175561671];
  v20 = 0;
  v36 = 0;
  if ( (int)dword_140404A6C[175561671] > 0 )
  {
    v21 = &dword_140404A6C[176086216];
    v22 = 0;
    v37 = &dword_140404A6C[176086216];
    do
    {
      v23 = *v2;
      v24 = 0;
      v25 = 0;
      if ( (int)*v2 > 0 )
      {
        v26 = v21;
        do
        {
          v27 = 0;
          v28 = (v23 - v24) % v23;
          v29 = v28;
          if ( (int)dword_140404A6C[175561670] > 0 )
          {
            v30 = (_WORD *)&dword_140404A6C[32 * (v28 + v22) + 175561928] + 1;
            v31 = (v25 - v28) << 8;
            v32 = &dword_140404A6C[64 * (v28 + v22) + 176118985];
            v33 = (v25 - v28) << 7;
            do
            {
              ++v27;
              *v32 = *(unsigned int *)((char *)v32 + v31 - 4);
              v32 += 2;
              *v30 = *(_WORD *)((char *)v30 + v33 - 2);
              v30 += 2;
            }
            while ( v27 < (int)dword_140404A6C[175561670] );
          }
          dword_140404A6C[2 * v29 + 176086217 + 2 * v22] = *v26;
          ++v24;
          v23 = *v2;
          ++v25;
          v26 += 2;
        }
        while ( v24 < (int)*v2 );
        v19 = dword_140404A6C[175561671];
        v20 = v36;
        v21 = v37;
      }
      ++v20;
      v21 += 256;
      v22 += 128;
      v36 = v20;
      ++v2;
      v37 = v21;
    }
    while ( v20 < v19 );
  }
  dword_140404A6C[177167560] = 127;
  return;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A1BB984: using guessed type unsigned int;
// 16A1BB988: using guessed type unsigned int;
// 16A7DBD8C: using guessed type unsigned int;

//----- (0000000140069DE0) ----------------------------------------------------
void            sub_140069DE0(unsigned int a1, __int64 a2, float a3)
{
  signed int v3; // ebx
  __int64 v4; // rdi
  void *v5; // rcx
  float v6; // xmm1_4
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp-48h]
  char v9; // [rsp+36h] [rbp-42h]
  unsigned int v10; // [rsp+80h] [rbp+8h]
  __int64 v11; // [rsp+98h] [rbp+20h]

  if ( a1 <= 0xFFF )
  {
    v3 = 0;
    v4 = 8LL * (int)a1;
    dword_140404A6C[v4 + 18165777] = 0;
    sub_140198E75();
    if ( sub_140198E93() )
    {
      if ( v9 == 1 && v8 > 0 )
      {
        v5 = *(void **)&dword_140404A6C[v4 + 18165779];
        dword_140404A6C[v4 + 18165777] = 1;
        *(float *)&dword_140404A6C[v4 + 18165783] = a3;
        dword_140404A6C[v4 + 18165778] = (int)(float)((float)(v10 >> 1) * (float)(48000.0 / (float)v8));
        free(v5);
        v6 = 0.0;
        *(_QWORD *)&dword_140404A6C[v4 + 18165779] = sr_path_malloc((int)(4 * dword_140404A6C[v4 + 18165778]));
        if ( (int)dword_140404A6C[v4 + 18165778] > 0 )
        {
          v7 = 0;
          do
          {
            ++v3;
            *(float *)(v7 + *(_QWORD *)&dword_140404A6C[v4 + 18165779]) = (float)*(__int16 *)(v11 + 2LL * (int)v6)
                                                                        * 0.000030517578;
            v7 += 4;
            v6 = fminf(v6 + (float)(1.0 / (float)(48000.0 / (float)v8)), (float)(int)((v10 >> 1) - 1));
          }
          while ( v3 < (int)dword_140404A6C[v4 + 18165778] );
        }
        sub_140198E99();
      }
    }
  }
}

// 140069E66: variable 'v9' is possibly undefined
// 140069E72: variable 'v8' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140069FA0) ----------------------------------------------------
__int64            sub_140069FA0(signed int a1, unsigned int *a2, float a3, float a4, unsigned int a5)
{
  __int64 v7; // rsi
  unsigned int *v8; // rax
  unsigned int v9; // edi
  __int64 v11; // rbx

  if ( !dword_140404A6C[7] )
    return 0xFFFFFFFFLL;
  v7 = 8LL * a1;
  if ( !dword_140404A6C[v7 + 18165777] )
    return 0xFFFFFFFFLL;
  v8 = &dword_140404A6C[327697];
  v9 = 0;
  while ( *v8 )
  {
    ++v9;
    v8 += 278720;
    if ( (__int64)v8 >= (__int64)&dword_140404A6C[15936017] )
      return 0xFFFFFFFFLL;
  }
  if ( v9 == -1 )
    return 0xFFFFFFFFLL;
  v11 = 278720LL * (int)v9;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v11 + 327698]), 0, 0x1102FCu);
  *(float *)&dword_140404A6C[v11 + 327699] = a3;
  *(_QWORD *)&dword_140404A6C[v11 + 327697] = 1;
  dword_140404A6C[v11 + 327772] = 0;
  dword_140404A6C[v11 + 589917] = 0;
  dword_140404A6C[v11 + 327708] = a5;
  *(float *)&dword_140404A6C[v11 + 327704] = a3;
  *(float *)&dword_140404A6C[v11 + 327705] = a3;
  *(float *)&dword_140404A6C[v11 + 327706] = a4;
  *(float *)&dword_140404A6C[v11 + 327707] = a4;
  dword_140404A6C[v11 + 327700] = 1;
  dword_140404A6C[v11 + 327702] = a1;
  *(_QWORD *)&dword_140404A6C[v7 + 18165781] = 0;
  dword_140404A6C[v11 + 606302] = *a2;
  dword_140404A6C[v11 + 606303] = a2[1];
  dword_140404A6C[v11 + 606304] = a2[2];
  dword_140404A6C[v11 + 606308] = dword_140404A6C[v7 + 18165783];
  dword_140404A6C[v11 + 606310] = 1;
  dword_140404A6C[v11 + 606414] = 0;
  return v9;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006A140) ----------------------------------------------------
__int64            sub_14006A140(int a1, int a2, float a3, float a4, unsigned int a5)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rbx

  v5 = a2;
  if ( dword_140404A6C[7] )
  {
    result = a1;
    v7 = 278720LL * a1;
    if ( !dword_140404A6C[v7 + 327697] )
    {
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v7 + 327698]), 0, 0x1102FCu);
      *(_QWORD *)&dword_140404A6C[v7 + 327697] = 1;
      dword_140404A6C[v7 + 327772] = 0;
      dword_140404A6C[v7 + 589917] = 0;
      *(float *)&dword_140404A6C[v7 + 327704] = a3;
      *(float *)&dword_140404A6C[v7 + 327705] = a3;
      *(float *)&dword_140404A6C[v7 + 327706] = a4;
      *(float *)&dword_140404A6C[v7 + 327707] = a4;
      dword_140404A6C[v7 + 327700] = 1;
      dword_140404A6C[v7 + 327702] = v5;
      dword_140404A6C[v7 + 327708] = a5;
      result = dword_140404A6C[8 * v5 + 18165783];
      dword_140404A6C[v7 + 606308] = result;
      *(_QWORD *)&dword_140404A6C[8 * v5 + 18165781] = 0;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006A240) ----------------------------------------------------
__int64            sub_14006A240(int a1, int a2, unsigned int *a3, float a4, unsigned int a5, unsigned int a6)
{
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rbx

  v7 = a2;
  if ( dword_140404A6C[7] )
  {
    result = a1;
    v9 = 278720LL * a1;
    if ( !dword_140404A6C[v9 + 327697] )
    {
      sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v9 + 327698]), 0, 0x1102FCu);
      *(float *)&dword_140404A6C[v9 + 327699] = a4;
      *(_QWORD *)&dword_140404A6C[v9 + 327697] = 1;
      dword_140404A6C[v9 + 327772] = 0;
      dword_140404A6C[v9 + 589917] = 0;
      *(float *)&dword_140404A6C[v9 + 327704] = a4;
      *(float *)&dword_140404A6C[v9 + 327705] = a4;
      dword_140404A6C[v9 + 327706] = a5;
      dword_140404A6C[v9 + 327707] = a5;
      dword_140404A6C[v9 + 327700] = 1;
      dword_140404A6C[v9 + 327702] = v7;
      dword_140404A6C[v9 + 327708] = a6;
      *(_QWORD *)&dword_140404A6C[8 * v7 + 18165781] = 0;
      dword_140404A6C[v9 + 606302] = *a3;
      dword_140404A6C[v9 + 606303] = a3[1];
      dword_140404A6C[v9 + 606304] = a3[2];
      result = dword_140404A6C[8 * v7 + 18165783];
      dword_140404A6C[v9 + 606308] = result;
      dword_140404A6C[v9 + 606310] = 1;
      dword_140404A6C[v9 + 606414] = 0;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006A380) ----------------------------------------------------
__m128i *           sub_14006A380(__int64 a1,      __m128i *a2, int a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // ebx
  int v6; // edi
  __m128i *result; // rax

  v3 = dword_140404A6C[196622];
  v5 = 0;
  v6 = a3 / 2;
  if ( (signed int)(dword_140404A6C[196622] + a3 / 2) > 0x40000 )
  {
    v5 = 0x40000 - dword_140404A6C[196622];
    sub_1401FC920(
      (__m128i *)((char *)&dword_140404A6C[196624] + 2 * (int)dword_140404A6C[196622]),
      a2,
      2 * (0x40000 - dword_140404A6C[196622]));
    v6 -= v5;
    v3 = 0;
    dword_140404A6C[196622] = 0;
  }
  result = sub_1401FC920(
             (__m128i *)((char *)&dword_140404A6C[196624] + 2 * (int)v3),
             (     __m128i *)((char *)a2 + 2 * (int)v5),
             2 * v6);
  dword_140404A6C[196622] = (v6 + dword_140404A6C[196622]) & 0x3FFFF;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1404C4AA4: using guessed type unsigned int;

//----- (000000014006A5C0) ----------------------------------------------------
__int64 sub_14006A5C0()
{
  __int64 result; // rax

  if ( (int)dword_140404A6C[196619] > 0 )
    result = sub_140198E9F();
  if ( (int)dword_140404A6C[7] > 0 )
    return sub_140198E9F();
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006A5F0) ----------------------------------------------------
__int64            sub_14006A5F0(int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rbp
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm7_4
  float v9; // xmm10_4
  __m128 v10; // xmm6
  float v11; // xmm3_4
  float v12; // xmm7_4
  float v13; // xmm10_4
  unsigned int v14; // edi
  unsigned int v15; // xmm9_4
  float v16; // xmm15_4
  float v17; // xmm14_4
  float v18; // xmm11_4
  float v19; // xmm5_4
  float v20; // xmm13_4
  float v21; // xmm11_4
  float v22; // xmm13_4
  float v23; // xmm1_4
  signed int v24; // r10d
  int v25; // ecx
  int v26; // r11d
  float v27; // xmm0_4
  unsigned int v28; // xmm10_4
  float v29; // xmm6_4
  signed int v30; // eax
  signed int v31; // ecx
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm11_4
  float v35; // xmm1_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  unsigned int *v38; // r8
  unsigned int *v39; // rdx
  __int64 v40; // r9
  __int16 v41; // ax
  float v42; // xmm7_4
  float v43; // xmm3_4
  int v44; // edx
  int v45; // ecx
  __int64 result; // rax
  float v47; // xmm0_4
  int v48; // ecx
  float v49; // xmm1_4
  int v50; // ecx
  __int64 v51; // r9
  float v52; // xmm7_4
  float v53; // xmm2_4
  float v54; // xmm5_4
  __int64 v55; // rdi
  float *v56; // rsi
  unsigned int v57; // eax
  float v58; // xmm2_4
  unsigned int v59; // eax
  float v60; // xmm2_4
  __m128i v61; // xmm0
  __int64 v62; // rax
  float v63; // xmm1_4
  float v64; // xmm1_4
  float v65; // xmm0_4
  __int64 v66; // rcx
  float v67; // xmm4_4
  __int64 v68; // rcx
  float v69; // xmm1_4
  float v70; // xmm3_4
  __m128i v71; // xmm0
  float v72; // xmm3_4
  __m128i v73; // xmm1
  __m128i v74; // xmm2
  __m128i v75; // xmm1
  __m128i v76; // xmm2
  __m128i si128; // xmm0
  __m128i v78; // xmm3
  __m128i v79; // xmm6
  __m128i v80; // xmm2
  __m128i v81; // xmm4
  __m128i v82; // xmm5
  __m128i v83; // xmm0
  __m128i v84; // xmm1
  __m128i v85; // xmm2
  __m128i v86; // xmm0
  __m128i v87; // xmm2
  __m128i v88; // xmm1
  __m128i v89; // xmm0
  __m128i v90; // xmm1
  __m128i v91; // xmm2
  __m128i v92; // xmm0
  __m128i v93; // xmm5
  __m128i v94; // xmm2
  __m128i v95; // xmm1
  __m128i v96; // xmm0
  __m128i v97; // xmm1
  __m128i v98; // xmm2
  __m128i v99; // xmm0
  __m128i v100; // xmm5
  __m128i v101; // xmm0
  int v102; // eax
  float v103; // [rsp+20h] [rbp-F8h]
  float v104; // [rsp+24h] [rbp-F4h]
  float v105; // [rsp+28h] [rbp-F0h]
  float v106; // [rsp+2Ch] [rbp-ECh]
  float v107; // [rsp+120h] [rbp+8h]
  float v108; // [rsp+128h] [rbp+10h]
  float v109; // [rsp+128h] [rbp+10h]
  float v110; // [rsp+130h] [rbp+18h]
  float v111; // [rsp+138h] [rbp+20h]

  v2 = 30LL * (int)dword_140404A6C[18198545];
  v3 = a1;
  v4 = 278720LL * a1;
  v5 = a2;
  v6 = *(float *)&dword_140404A6C[v4 + 606302] - *(float *)&dword_140404A6C[v2 + 18198546];
  v10 = ((__m128)_mm_cvtsi64_si128((long long)(((__m128)_mm_cvtsi32_si128((int)(dword_140404A6C)))[v4 + 606303])));
  SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_LANES(128, v10, f32)[0] - *(float *)&dword_140404A6C[v2 + 18198547];
  v7 = *(float *)&dword_140404A6C[v4 + 606304] - *(float *)&dword_140404A6C[v2 + 18198548];
  v108 = fsqrt((float)((float)(SR_VEC_LANES(128, v10, f32)[0] * SR_VEC_LANES(128, v10, f32)[0]) + (float)(v6 * v6)) + (float)(v7 * v7));
  v8 = (float)((float)(SR_VEC_LANES(128, v10, f32)[0] * *(float *)&dword_140404A6C[v2 + 18198550])
             + (float)(v6 * *(float *)&dword_140404A6C[v2 + 18198549]))
     + (float)(v7 * *(float *)&dword_140404A6C[v2 + 18198551]);
  v9 = (float)((float)(SR_VEC_LANES(128, v10, f32)[0] * *(float *)&dword_140404A6C[v2 + 18198553])
             + (float)(v6 * *(float *)&dword_140404A6C[v2 + 18198552]))
     + (float)(v7 * *(float *)&dword_140404A6C[v2 + 18198554]);
  SR_VEC_LANES(128, v10, f32)[0] = (float)((float)(SR_VEC_LANES(128, v10, f32)[0] * *(float *)&dword_140404A6C[v2 + 18198556])
                          + (float)(v6 * *(float *)&dword_140404A6C[v2 + 18198555]))
                  + (float)(v7 * *(float *)&dword_140404A6C[v2 + 18198557]);
  v11 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(SR_VEC_LANES(128, v10, f32)[0] * SR_VEC_LANES(128, v10, f32)[0]));
  if ( v11 == 0.0 )
  {
    v12 = 0.0;
    v13 = 0.0;
    v10 = ((__m128)_mm_cvtsi64_si128((long long)(0)));
  }
  else
  {
    v12 = v8 * (float)(1.0 / v11);
    v13 = v9 * (float)(1.0 / v11);
    SR_VEC_LANES(128, v10, f32)[0] = SR_VEC_LANES(128, v10, f32)[0] * (float)(1.0 / v11);
  }
  v14 = a1 - 56;
  *(float *)&v15 = *(float *)&dword_140404A6C[5] * (float)(v108 + 8.0);
  if ( (unsigned int)(a1 - 56) <= 7 )
    *(float *)&v15 = *(float *)&dword_140404A6C[5] * 16.0;
  v16 = (float)a2;
  v17 = 1.0 / (float)a2;
  v18 = (float)(*(float *)&dword_140404A6C[v4 + 606302]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606305]
                                      - *(float *)&dword_140404A6C[v2 + 18198558])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[v2 + 18198546];
  v19 = (float)(*(float *)&dword_140404A6C[v4 + 606303]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606306]
                                      - *(float *)&dword_140404A6C[v2 + 18198559])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[v2 + 18198547];
  v20 = (float)(*(float *)&dword_140404A6C[v4 + 606304]
              - (float)((float)((float)(*(float *)&dword_140404A6C[v4 + 606307]
                                      - *(float *)&dword_140404A6C[v2 + 18198560])
                              * (float)a2)
                      * 0.00125))
      - *(float *)&dword_140404A6C[v2 + 18198548];
  v21 = (float)(*(float *)&v15
              - (float)((float)(fsqrt((float)((float)(v19 * v19) + (float)(v18 * v18)) + (float)(v20 * v20)) + 8.0)
                      * *(float *)&dword_140404A6C[5]))
      * v17;
  if ( v14 <= 7 )
    v21 = 0.0;
  v22 = sub_14023F704(v12, -SR_VEC_LANES(128, v10, f32)[0]);
  SR_VEC_LANES(128, v10, f32)[0] = (float)(SR_VEC_LANES(128, v10, f32)[0] * SR_VEC_LANES(128, v10, f32)[0]) + (float)(v12 * v12);
  v23 = sub_14023EDE4(v13, SR_VEC_READ_LANES(128, _mm_sqrt_pd(_mm_cvtps_pd(v10)), f64)[0]);
  v24 = (int)((v23 + 1.570796326794897) * (double)(int)dword_140404A6C[175561671] * 0.3183098861837907);
  if ( v24 < 0 )
    v24 = 0;
  if ( (signed int)(dword_140404A6C[175561671] - 1) < v24 )
    v24 = dword_140404A6C[175561671] - 1;
  v25 = dword_140404A6C[v24 + 175561672];
  if ( v25 )
    v26 = (int)((v22 + 6.283185307179586) * (double)v25 * 0.1591549430918953) % v25;
  else
    v26 = 0;
  v27 = *(float *)&dword_140404A6C[v4 + 606414];
  *(float *)&v28 = fminf(*(float *)&dword_140404A6C[v4 + 606308] / (float)(v108 + 0.0625), 1.0)
                 * *(float *)&dword_140404A6C[v4 + 327699];
  v29 = (float)(int)dword_140404A6C[256 * (__int64)v24 + 176086216 + 2 * v26];
  v110 = v29;
  v107 = (float)(int)dword_140404A6C[256 * (__int64)v24 + 176086217 + 2 * v26];
  if ( v27 == 0.0 )
  {
    v104 = 0.0;
    v30 = v24;
    v105 = 0.0;
    v31 = v26;
    v103 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
    v34 = 0.0;
  }
  else
  {
    v32 = *(float *)&dword_140404A6C[v4 + 606415];
    v30 = dword_140404A6C[v4 + 606412];
    v31 = dword_140404A6C[v4 + 606413];
    v35 = *(float *)&v15 - v27;
    v15 = dword_140404A6C[v4 + 606414];
    v36 = *(float *)&v28 - *(float *)&dword_140404A6C[v4 + 606416];
    v28 = dword_140404A6C[v4 + 606416];
    v37 = v29 - *(float *)&dword_140404A6C[v4 + 606410];
    v110 = *(float *)&dword_140404A6C[v4 + 606410];
    v29 = v110;
    v33 = v35 * v17;
    v103 = v36 * v17;
    v107 = *(float *)&dword_140404A6C[v4 + 606411];
    v104 = v37 * v17;
    v34 = (float)(v21 - v32) * v17;
    v105 = (float)((float)(int)dword_140404A6C[256 * (__int64)v24 + 176086217 + 2 * v26] - v107) * v17;
  }
  v38 = &dword_140404A6C[18215689];
  v109 = v32;
  v111 = v33;
  v39 = &dword_140404A6C[32 * (v31 + ((__int64)v30 << 7)) + 175561959];
  v40 = (v26 + ((v24 - (__int64)v30) << 7) - v31) << 7;
  do
  {
    *((_WORD *)v38 - 96) = *(_WORD *)((char *)v39 + v40);
    *((_WORD *)v38 - 64) = *(_WORD *)v39;
    *((_WORD *)v38 - 32) = *(_WORD *)((char *)v39 + v40 + 2);
    *(_WORD *)v38 = *((_WORD *)v39 + 1);
    *((_WORD *)v38 - 95) = *(_WORD *)((char *)v39 + v40 - 4);
    *((_WORD *)v38 - 63) = *((_WORD *)v39 - 2);
    *((_WORD *)v38 - 31) = *(_WORD *)((char *)v39 + v40 - 2);
    *((_WORD *)v38 + 1) = *((_WORD *)v39 - 1);
    *((_WORD *)v38 - 94) = *(_WORD *)((char *)v39 + v40 - 8);
    *((_WORD *)v38 - 62) = *((_WORD *)v39 - 4);
    *((_WORD *)v38 - 30) = *(_WORD *)((char *)v39 + v40 - 6);
    *((_WORD *)v38 + 2) = *((_WORD *)v39 - 3);
    *((_WORD *)v38 - 93) = *(_WORD *)((char *)v39 + v40 - 12);
    *((_WORD *)v38 - 61) = *((_WORD *)v39 - 6);
    *((_WORD *)v38 - 29) = *(_WORD *)((char *)v39 + v40 - 10);
    *((_WORD *)v38 + 3) = *((_WORD *)v39 - 5);
    *((_WORD *)v38 - 92) = *(_WORD *)((char *)v39 + v40 - 16);
    *((_WORD *)v38 - 60) = *((_WORD *)v39 - 8);
    *((_WORD *)v38 - 28) = *(_WORD *)((char *)v39 + v40 - 14);
    *((_WORD *)v38 + 4) = *((_WORD *)v39 - 7);
    *((_WORD *)v38 - 91) = *(_WORD *)((char *)v39 + v40 - 20);
    *((_WORD *)v38 - 59) = *((_WORD *)v39 - 10);
    *((_WORD *)v38 - 27) = *(_WORD *)((char *)v39 + v40 - 18);
    *((_WORD *)v38 + 5) = *((_WORD *)v39 - 9);
    *((_WORD *)v38 - 90) = *(_WORD *)((char *)v39 + v40 - 24);
    *((_WORD *)v38 - 58) = *((_WORD *)v39 - 12);
    *((_WORD *)v38 - 26) = *(_WORD *)((char *)v39 + v40 - 22);
    *((_WORD *)v38 + 6) = *((_WORD *)v39 - 11);
    *((_WORD *)v38 - 89) = *(_WORD *)((char *)v39 + v40 - 28);
    *((_WORD *)v38 - 57) = *((_WORD *)v39 - 14);
    *((_WORD *)v38 - 25) = *(_WORD *)((char *)v39 + v40 - 26);
    *((_WORD *)v38 + 7) = *((_WORD *)v39 - 13);
    *((_WORD *)v38 - 88) = *(_WORD *)((char *)v39 + v40 - 32);
    *((_WORD *)v38 - 56) = *((_WORD *)v39 - 16);
    *((_WORD *)v38 - 24) = *(_WORD *)((char *)v39 + v40 - 30);
    *((_WORD *)v38 + 8) = *((_WORD *)v39 - 15);
    *((_WORD *)v38 - 87) = *(_WORD *)((char *)v39 + v40 - 36);
    *((_WORD *)v38 - 55) = *((_WORD *)v39 - 18);
    *((_WORD *)v38 - 23) = *(_WORD *)((char *)v39 + v40 - 34);
    *((_WORD *)v38 + 9) = *((_WORD *)v39 - 17);
    *((_WORD *)v38 - 86) = *(_WORD *)((char *)v39 + v40 - 40);
    v41 = *((_WORD *)v39 - 20);
    v39 -= 16;
    *((_WORD *)v38 - 54) = v41;
    *((_WORD *)v38 - 22) = *(_WORD *)((char *)v39 + v40 + 26);
    *((_WORD *)v38 + 10) = *((_WORD *)v39 + 13);
    *((_WORD *)v38 - 85) = *(_WORD *)((char *)v39 + v40 + 20);
    *((_WORD *)v38 - 53) = *((_WORD *)v39 + 10);
    *((_WORD *)v38 - 21) = *(_WORD *)((char *)v39 + v40 + 22);
    *((_WORD *)v38 + 11) = *((_WORD *)v39 + 11);
    *((_WORD *)v38 - 84) = *(_WORD *)((char *)v39 + v40 + 16);
    *((_WORD *)v38 - 52) = *((_WORD *)v39 + 8);
    *((_WORD *)v38 - 20) = *(_WORD *)((char *)v39 + v40 + 18);
    *((_WORD *)v38 + 12) = *((_WORD *)v39 + 9);
    *((_WORD *)v38 - 83) = *(_WORD *)((char *)v39 + v40 + 12);
    *((_WORD *)v38 - 51) = *((_WORD *)v39 + 6);
    *((_WORD *)v38 - 19) = *(_WORD *)((char *)v39 + v40 + 14);
    *((_WORD *)v38 + 13) = *((_WORD *)v39 + 7);
    *((_WORD *)v38 - 82) = *(_WORD *)((char *)v39 + v40 + 8);
    *((_WORD *)v38 - 50) = *((_WORD *)v39 + 4);
    *((_WORD *)v38 - 18) = *(_WORD *)((char *)v39 + v40 + 10);
    *((_WORD *)v38 + 14) = *((_WORD *)v39 + 5);
    *((_WORD *)v38 - 81) = *(_WORD *)((char *)v39 + v40 + 4);
    *((_WORD *)v38 - 49) = *((_WORD *)v39 + 2);
    *((_WORD *)v38 - 17) = *(_WORD *)((char *)v39 + v40 + 6);
    *((_WORD *)v38 + 15) = *((_WORD *)v39 + 3);
    v38 += 8;
  }
  while ( (__int64)v38 < (__int64)&dword_140404A6C[18215705] );
  v106 = 0.0;
  v42 = 1.0 - (float)((float)((float)(v34 * 0.5) * v16) + v32);
  if ( v14 <= 7 )
    v42 = 1.0;
  v43 = *(float *)&dword_140404A6C[v4 + 606309];
  v44 = dword_140404A6C[v4 + 327772];
  v45 = v44 - ((int)(float)((float)(v16 * v42) + v43) & 0x3FFFF);
  result = (unsigned int)(v45 + 0x40000);
  if ( v45 >= -131072 )
    result = (unsigned int)v45;
  v47 = (float)(int)result;
  if ( v14 > 7 )
  {
    if ( v47 < 16.0 )
    {
      v48 = ((v44 - 16) & 0x3FFFF) - (int)v43;
      result = (unsigned int)(v48 + 0x40000);
      if ( v48 >= -131072 )
        result = (unsigned int)v48;
      v42 = (float)(int)result * v17;
    }
  }
  else
  {
    v47 = 16.0;
  }
  v49 = (float)((float)((float)(v33 * 0.5) * v16) + *(float *)&v15) + 8192.0;
  if ( v47 > v49 )
  {
    v50 = ((int)(float)((float)v44 - v49) & 0x3FFFF) - (int)v43;
    result = (unsigned int)(v50 + 0x40000);
    if ( v50 >= -131072 )
      result = (unsigned int)v50;
    v42 = (float)(int)result * v17;
  }
  if ( v14 <= 7 )
    v42 = 1.0;
  v51 = v5;
  v52 = fminf(fmaxf(v42, 0.0625), 16.0);
  v53 = v107;
  if ( (int)v5 > 0 )
  {
    v54 = 0.0;
    v55 = 278720 * v3;
    v56 = (float *)&dword_140404A6C[v4 + 589919];
    do
    {
      v57 = dword_140404A6C[v4 + 606310];
      if ( v57 )
      {
        v102 = v57 + 1;
        v65 = 0.0;
        if ( (float)v102 >= *(float *)&v15 )
          v102 = 0;
        dword_140404A6C[v4 + 606310] = v102;
      }
      else
      {
        v58 = *(float *)&dword_140404A6C[v4 + 606309];
        v59 = (int)v58;
        v60 = v58 + v52;
        v61 = _mm_cvtsi32_si128(v59);
        v62 = v59 & 0x3FFFF;
        v63 = *(float *)&dword_140404A6C[v4 + 606309] - SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v61), f32)[0];
        *(float *)SR_VEC_LANES(128, v61, i32) = (float)(1.0 - v63) * *(float *)&dword_140404A6C[v4 + 327773 + v62];
        v64 = v63 * *(float *)&dword_140404A6C[v4 + 327773 + (((_DWORD)v62 + 1) & 0x3FFFF)];
        *(float *)&dword_140404A6C[v4 + 606309] = v60;
        v65 = *(float *)SR_VEC_LANES(128, v61, i32) + v64;
        if ( v60 >= 262144.0 )
          *(float *)&dword_140404A6C[v4 + 606309] = v60 - 262144.0;
        v53 = v107;
      }
      *(float *)&dword_140404A6C[v55 + 606346 + (int)dword_140404A6C[v4 + 606345]] = v65;
      v66 = ((unsigned __int8)dword_140404A6C[v4 + 606345] - (unsigned __int8)(int)v29) & 0x3F;
      v67 = (float)((float)(1.0 - (float)(v29 - (float)(int)v29)) * *(float *)&dword_140404A6C[v66 + 606346 + v55])
          + (float)((float)(v29 - (float)(int)v29) * *(float *)&dword_140404A6C[v55 + 606346 + (((_BYTE)v66 - 1) & 0x3F)]);
      v68 = ((unsigned __int8)dword_140404A6C[v4 + 606345] - (unsigned __int8)(int)v53) & 0x3F;
      v69 = v53 - (float)(int)v53;
      v70 = (float)(1.0 - v69) * *(float *)&dword_140404A6C[v68 + 606346 + v55];
      LOWORD(dword_140404A6C[18215705]) = (int)(float)((float)(v67 * v54) * 32767.0);
      HIWORD(dword_140404A6C[18215705]) = dword_140404A6C[18215705];
      v71 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606313] + 2));
      v72 = v70 + (float)(v69 * *(float *)&dword_140404A6C[v55 + 606346 + (((_BYTE)v68 - 1) & 0x3F)]);
      LOWORD(dword_140404A6C[18215706]) = (int)(float)((float)((float)(1.0 - v54) * v67) * 32767.0);
      HIWORD(dword_140404A6C[18215706]) = dword_140404A6C[18215706];
      LOWORD(dword_140404A6C[18215708]) = (int)(float)((float)((float)(1.0 - v54) * v72) * 32767.0);
      v73 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606329] + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606313] = v71;
      *(__m128i *)&dword_140404A6C[v4 + 606329] = v73;
      v74 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606333] + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606317] = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606317]
                                                                                  + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606333] = v74;
      v75 = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606337] + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606321] = _mm_loadu_si128((     __m128i *)((char *)&dword_140404A6C[v4 + 606321]
                                                                                  + 2));
      *(__m128i *)&dword_140404A6C[v4 + 606337] = v75;
      v76 = _mm_srli_si128(_mm_loadu_si128((     __m128i *)&dword_140404A6C[v4 + 606341]), 2);
      *(__m128i *)&dword_140404A6C[v4 + 606325] = _mm_srli_si128(
                                                    _mm_loadu_si128((     __m128i *)&dword_140404A6C[v4 + 606325]),
                                                    2);
      *(__m128i *)&dword_140404A6C[v4 + 606341] = v76;
      LOWORD(dword_140404A6C[18215707]) = (int)(float)((float)(v72 * v54) * 32767.0);
      HIWORD(dword_140404A6C[18215707]) = dword_140404A6C[18215707];
      HIWORD(dword_140404A6C[18215708]) = (int)(float)((float)((float)(1.0 - v54) * v72) * 32767.0);
      *(float *)&v15 = *(float *)&v15 + v111;
      si128 = _mm_load_si128((     __m128i *)&dword_140404A6C[18215705]);
      v78 = _mm_shuffle_epi32(si128, 0);
      v79 = _mm_shuffle_epi32(si128, 170);
      v80 = _mm_mulhi_epi16(v79, *(__m128i *)&dword_140404A6C[18215673]);
      v81 = _mm_shuffle_epi32(si128, 255);
      v82 = _mm_shuffle_epi32(si128, 85);
      v83 = _mm_mulhi_epi16(v81, *(__m128i *)&dword_140404A6C[18215689]);
      *(__m128i *)&dword_140404A6C[v4 + 606313] = _mm_add_epi16(
                                                    _mm_add_epi16(
                                                      _mm_mulhi_epi16(v78, *(__m128i *)&dword_140404A6C[18215641]),
                                                      _mm_mulhi_epi16(v82, *(__m128i *)&dword_140404A6C[18215657])),
                                                    *(__m128i *)&dword_140404A6C[v4 + 606313]);
      v84 = _mm_mulhi_epi16(v78, *(__m128i *)&dword_140404A6C[18215645]);
      v85 = _mm_add_epi16(_mm_add_epi16(v80, v83), *(__m128i *)&dword_140404A6C[v4 + 606329]);
      v86 = _mm_mulhi_epi16(v82, *(__m128i *)&dword_140404A6C[18215661]);
      *(__m128i *)&dword_140404A6C[v4 + 606329] = v85;
      v87 = _mm_mulhi_epi16(v79, *(__m128i *)&dword_140404A6C[18215677]);
      v88 = _mm_add_epi16(_mm_add_epi16(v84, v86), *(__m128i *)&dword_140404A6C[v4 + 606317]);
      v89 = _mm_mulhi_epi16(v81, *(__m128i *)&dword_140404A6C[18215693]);
      *(__m128i *)&dword_140404A6C[v4 + 606317] = v88;
      v90 = _mm_mulhi_epi16(v78, *(__m128i *)&dword_140404A6C[18215649]);
      v91 = _mm_add_epi16(_mm_add_epi16(v87, v89), *(__m128i *)&dword_140404A6C[v4 + 606333]);
      v92 = _mm_mulhi_epi16(v82, *(__m128i *)&dword_140404A6C[18215665]);
      v93 = _mm_mulhi_epi16(v82, *(__m128i *)&dword_140404A6C[18215669]);
      *(__m128i *)&dword_140404A6C[v4 + 606333] = v91;
      v94 = _mm_mulhi_epi16(v79, *(__m128i *)&dword_140404A6C[18215681]);
      v95 = _mm_add_epi16(_mm_add_epi16(v90, v92), *(__m128i *)&dword_140404A6C[v4 + 606321]);
      v96 = _mm_mulhi_epi16(v81, *(__m128i *)&dword_140404A6C[18215697]);
      *(__m128i *)&dword_140404A6C[v4 + 606321] = v95;
      v97 = _mm_mulhi_epi16(_mm_load_si128((     __m128i *)&dword_140404A6C[18215701]), v81);
      v32 = v109 + v34;
      v98 = _mm_add_epi16(_mm_add_epi16(v94, v96), *(__m128i *)&dword_140404A6C[v4 + 606337]);
      v99 = _mm_load_si128((     __m128i *)&dword_140404A6C[18215653]);
      *(__m128i *)&dword_140404A6C[v4 + 606337] = v98;
      v100 = _mm_add_epi16(v93, _mm_mulhi_epi16(v99, v78));
      v101 = _mm_load_si128((     __m128i *)&dword_140404A6C[18215685]);
      *(__m128i *)&dword_140404A6C[v4 + 606325] = _mm_add_epi16(v100, *(__m128i *)&dword_140404A6C[v4 + 606325]);
      *(__m128i *)&dword_140404A6C[v4 + 606341] = _mm_add_epi16(
                                                    _mm_add_epi16(v97, _mm_mulhi_epi16(v101, v79)),
                                                    *(__m128i *)&dword_140404A6C[v4 + 606341]);
      *(float *)SR_VEC_LANES(128, v101, i32) = (float)SLOWORD(dword_140404A6C[v4 + 606313]);
      *v56 = (float)((float)SLOWORD(dword_140404A6C[v4 + 606329]) * 0.000061035156) * *(float *)&v28;
      *(float *)SR_VEC_LANES(128, v101, i32) = (float)(*(float *)SR_VEC_LANES(128, v101, i32) * 0.000061035156) * *(float *)&v28;
      *(float *)&v28 = *(float *)&v28 + v103;
      *(v56 - 1) = *(float *)SR_VEC_LANES(128, v101, i32);
      result = ((unsigned __int8)dword_140404A6C[v4 + 606345] + 1) & 0x3F;
      dword_140404A6C[v4 + 606345] = result;
      v56 += 2;
      v109 = v109 + v34;
      v54 = v106 + v17;
      v29 = v110 + v104;
      v53 = v107 + v105;
      v106 = v106 + v17;
      v110 = v110 + v104;
      v107 = v107 + v105;
      --v51;
    }
    while ( v51 );
  }
  dword_140404A6C[v4 + 606413] = v26;
  dword_140404A6C[v4 + 606414] = v15;
  *(float *)&dword_140404A6C[v4 + 606410] = v29;
  dword_140404A6C[v4 + 606416] = v28;
  *(float *)&dword_140404A6C[v4 + 606415] = v32;
  *(float *)&dword_140404A6C[v4 + 606411] = v53;
  dword_140404A6C[v4 + 606412] = v24;
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1449816D0: using guessed type unsigned int;
// 1449816D4: using guessed type unsigned int;
// 1449816D8: using guessed type unsigned int;
// 16A1BB988: using guessed type unsigned int;

//----- (000000014006B4C0) ----------------------------------------------------
__int64            sub_14006B4C0(int a1, int a2, int a3, int a4)
{
  __int64 v5; // r9
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rdi
  float v10; // xmm2_4
  float v11; // xmm4_4
  int v12; // ebx
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float i; // xmm5_4
  float v17; // xmm1_4
  int v18; // edx
  int v19; // r10d
  __int64 v20; // r9
  float v21; // xmm1_4
  int v22; // eax
  float v23; // xmm0_4
  float v24; // xmm1_4

  v5 = 278720LL * a1;
  v7 = v5 * 4 + 36LL * a2;
  v8 = *(int *)((char *)&dword_140404A6C[327702] + v7);
  if ( (unsigned int)v8 > 0xFFF )
    return 0;
  v9 = 8 * v8;
  if ( !*(_QWORD *)&dword_140404A6C[8 * v8 + 18165779] )
    return 0;
  v10 = *(float *)((char *)&dword_140404A6C[327705] + v7);
  if ( dword_140404A6C[v5 + 327698] == 1 )
    *(unsigned int *)((char *)&dword_140404A6C[327704] + v7) = 0;
  v11 = *(float *)((char *)&dword_140404A6C[327704] + v7);
  v12 = 0;
  v13 = *(float *)((char *)&dword_140404A6C[327706] + v7);
  v14 = *(float *)((char *)&dword_140404A6C[327707] + v7);
  *(float *)((char *)&dword_140404A6C[327705] + v7) = v11;
  *(float *)((char *)&dword_140404A6C[327707] + v7) = v13;
  v15 = (float)(v11 - v10) * (float)(1.0 / (float)a4);
  for ( i = (float)(v13 - v14) * (float)(1.0 / (float)a4); v12 < a4; v14 = v14 + i )
  {
    v17 = *(float *)((char *)&dword_140404A6C[327703] + v7);
    v18 = 0;
    v19 = dword_140404A6C[v9 + 18165778];
    if ( (int)v17 < v19 )
      v18 = (int)v17;
    v20 = 278720LL * a1 + a3;
    v21 = v17 - (float)v18;
    v22 = 0;
    if ( v18 + 1 < v19 )
      v22 = v18 + 1;
    a3 = (a3 + 1) & 0x3FFFF;
    *(float *)&dword_140404A6C[v20 + 327773] = (float)((float)((float)((float)(1.0 - v21)
                                                                     * *(float *)(*(_QWORD *)&dword_140404A6C[v9 + 18165779]
                                                                                + 4LL * v18))
                                                             + (float)(v21
                                                                     * *(float *)(*(_QWORD *)&dword_140404A6C[v9 + 18165779]
                                                                                + 4LL * v22)))
                                                     * v10)
                                             + *(float *)&dword_140404A6C[v20 + 327773];
    v23 = v14 + *(float *)((char *)&dword_140404A6C[327703] + v7);
    *(float *)((char *)&dword_140404A6C[327703] + v7) = v23;
    v24 = (float)(int)dword_140404A6C[v9 + 18165778];
    if ( v23 >= v24 )
    {
      if ( !*(unsigned int *)((char *)&dword_140404A6C[327708] + v7) )
      {
        *(unsigned int *)((char *)&dword_140404A6C[327700] + v7) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[327701] + v7) = 2;
        break;
      }
      *(float *)((char *)&dword_140404A6C[327703] + v7) = v23 - v24;
    }
    ++v12;
    v10 = v10 + v15;
  }
  dword_140404A6C[v9 + 18165782] = (int)*(float *)((char *)&dword_140404A6C[327703] + v7);
  return *(unsigned int *)((char *)&dword_140404A6C[327700] + v7);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006B6F0) ----------------------------------------------------
__int64            sub_14006B6F0(int a1, int a2)
{
  __int64 v3; // rsi
  int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // ebp
  unsigned int *v10; // rdi
  int i; // ebx
  __int64 result; // rax

  v3 = 278720LL * a1;
  v5 = dword_140404A6C[v3 + 327772];
  if ( a2 > 0 )
  {
    v6 = 278720LL * a1;
    v7 = (unsigned int)a2;
    do
    {
      v8 = v6 + v5;
      v5 = (v5 + 1) & 0x3FFFF;
      dword_140404A6C[v8 + 327773] = 0;
      --v7;
    }
    while ( v7 );
  }
  v9 = 0;
  v10 = &dword_140404A6C[v3 + 327700];
  for ( i = 0; i < 8; ++i )
  {
    if ( *v10 && (unsigned int)sub_14006B4C0(a1, i, dword_140404A6C[v3 + 327772], a2) )
      v9 = 1;
    v10 += 9;
  }
  dword_140404A6C[v3 + 327772] = (a2 + dword_140404A6C[v3 + 327772]) & 0x3FFFF;
  result = sub_14006A5F0(a1, a2);
  dword_140404A6C[v3 + 589917] = (a2 + dword_140404A6C[v3 + 589917]) & 0x3FFFF;
  if ( !v9 && *(float *)&dword_140404A6C[v3 + 327703] < *(float *)&dword_140404A6C[v3 + 606309] )
    dword_140404A6C[v3 + 327697] = 0;
  if ( dword_140404A6C[v3 + 327698] == 1 )
    dword_140404A6C[v3 + 327697] = 0;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006B850) ----------------------------------------------------
void sub_14006B850()
{
  int v0; // esi
  int v1; // r8d
  int v2; // r14d
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int *v6; // rbx
  int v7; // r12d
  __int64 v8; // r13
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r15d
  unsigned int *v13; // rbp
  int i; // edi
  int v15; // r9d
  __int64 v16; // r10
  float *v17; // r8
  int v18; // eax
  float v19; // xmm0_4
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rax

  if ( dword_140404A6C[7] && dword_140404A6C[10] != dword_140404A6C[9] )
  {
    v0 = 0;
    v1 = 0;
    v2 = dword_140404A6C[8];
    if ( (int)dword_140404A6C[8] > 0 )
    {
      v3 = 0;
      do
      {
        v4 = 2 * v1++;
        dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v4] = 0;
        v5 = v3 + ((__int64)(int)dword_140404A6C[10] << 15);
        ++v3;
        dword_140404A6C[2 * v5 + 12] = 0;
        v2 = dword_140404A6C[8];
      }
      while ( v1 < (int)dword_140404A6C[8] );
    }
    dword_140404A6C[6] = 0;
    v6 = &dword_140404A6C[327772];
    v7 = 0;
    v8 = 0;
    do
    {
      if ( *(v6 - 75) )
      {
        v9 = *v6;
        if ( v2 > 0 )
        {
          v10 = (unsigned int)v2;
          do
          {
            v11 = v8 + v9;
            v9 = (v9 + 1) & 0x3FFFF;
            dword_140404A6C[v11 + 327773] = 0;
            --v10;
          }
          while ( v10 );
        }
        v12 = 0;
        v13 = v6 - 72;
        for ( i = 0; i < 8; ++i )
        {
          if ( *v13 && (unsigned int)sub_14006B4C0(v7, i, *v6, v2) )
            v12 = 1;
          v13 += 9;
        }
        *v6 = (v2 + *v6) & 0x3FFFF;
        sub_14006A5F0(v7, v2);
        v6[262145] = (v2 + v6[262145]) & 0x3FFFF;
        if ( !v12 && *((float *)v6 - 69) < *((float *)v6 + 278537) )
          *(v6 - 75) = 0;
        if ( *(v6 - 74) == 1 )
          *(v6 - 75) = 0;
        v2 = dword_140404A6C[8];
        v15 = 0;
        v16 = 0;
        if ( (int)dword_140404A6C[8] > 0 )
        {
          v17 = (float *)(v6 + 262147);
          do
          {
            v18 = 2 * v15++;
            *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v18] = *(v17 - 1)
                                                                                               + *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v18];
            v19 = *v17;
            v17 += 2;
            v20 = v16 + ((__int64)(int)dword_140404A6C[10] << 15);
            ++v16;
            *(float *)&dword_140404A6C[2 * v20 + 12] = v19 + *(float *)&dword_140404A6C[2 * v20 + 12];
            v2 = dword_140404A6C[8];
          }
          while ( v15 < (int)dword_140404A6C[8] );
        }
        ++dword_140404A6C[6];
      }
      ++v7;
      v8 += 278720;
      v6 += 278720;
    }
    while ( v7 < 64 );
    if ( v2 > 0 )
    {
      v21 = 0;
      do
      {
        v22 = 2 * v0++;
        *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22] = *(float *)&dword_140404A6C[18198666]
                                                                                           * *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22];
        v23 = v21 + ((__int64)(int)dword_140404A6C[10] << 15);
        ++v21;
        *(float *)&dword_140404A6C[2 * v23 + 12] = *(float *)&dword_140404A6C[18198666]
                                                 * *(float *)&dword_140404A6C[2 * v23 + 12];
      }
      while ( v0 < (int)dword_140404A6C[8] );
    }
    dword_140404A6C[10] ^= 1u;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 140404A84: using guessed type unsigned int;
// 140404A8C: using guessed type unsigned int;

//----- (000000014006BB10) ----------------------------------------------------
void __attribute__((noreturn)) sub_14006BB10()
{
  int v0; // r14d
  int v1; // r8d
  __int64 i; // r9
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int *v5; // rbx
  int v6; // r15d
  __int64 v7; // r12
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // ebp
  unsigned int *v12; // rsi
  int j; // edi
  int v14; // r9d
  __int64 v15; // r10
  float *v16; // r8
  int v17; // eax
  float v18; // xmm0_4
  __int64 v19; // rax
  int v20; // r8d
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rax

  while ( 1 )
  {
    do
    {
      do
        sub_140198E63();
      while ( !dword_140404A6C[7] );
    }
    while ( dword_140404A6C[10] == dword_140404A6C[9] );
    v0 = dword_140404A6C[8];
    v1 = 0;
    for ( i = 0; v1 < (int)dword_140404A6C[8]; v0 = dword_140404A6C[8] )
    {
      v3 = 2 * v1++;
      dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v3] = 0;
      v4 = i + ((__int64)(int)dword_140404A6C[10] << 15);
      ++i;
      dword_140404A6C[2 * v4 + 12] = 0;
    }
    dword_140404A6C[6] = 0;
    v5 = &dword_140404A6C[327772];
    v6 = 0;
    v7 = 0;
    do
    {
      if ( *(v5 - 75) )
      {
        v8 = *v5;
        if ( v0 > 0 )
        {
          v9 = (unsigned int)v0;
          do
          {
            v10 = v7 + v8;
            v8 = (v8 + 1) & 0x3FFFF;
            dword_140404A6C[v10 + 327773] = 0;
            --v9;
          }
          while ( v9 );
        }
        v11 = 0;
        v12 = v5 - 72;
        for ( j = 0; j < 8; ++j )
        {
          if ( *v12 && (unsigned int)sub_14006B4C0(v6, j, *v5, v0) )
            v11 = 1;
          v12 += 9;
        }
        *v5 = (v0 + *v5) & 0x3FFFF;
        sub_14006A5F0(v6, v0);
        v5[262145] = (v0 + v5[262145]) & 0x3FFFF;
        if ( !v11 && *((float *)v5 - 69) < *((float *)v5 + 278537) )
          *(v5 - 75) = 0;
        if ( *(v5 - 74) == 1 )
          *(v5 - 75) = 0;
        v0 = dword_140404A6C[8];
        v14 = 0;
        v15 = 0;
        if ( (int)dword_140404A6C[8] > 0 )
        {
          v16 = (float *)(v5 + 262147);
          do
          {
            v17 = 2 * v14++;
            *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v17] = *(v16 - 1)
                                                                                               + *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v17];
            v18 = *v16;
            v16 += 2;
            v19 = v15 + ((__int64)(int)dword_140404A6C[10] << 15);
            ++v15;
            *(float *)&dword_140404A6C[2 * v19 + 12] = v18 + *(float *)&dword_140404A6C[2 * v19 + 12];
            v0 = dword_140404A6C[8];
          }
          while ( v14 < (int)dword_140404A6C[8] );
        }
        ++dword_140404A6C[6];
      }
      ++v6;
      v7 += 278720;
      v5 += 278720;
    }
    while ( v6 < 64 );
    v20 = 0;
    v21 = 0;
    if ( v0 > 0 )
    {
      do
      {
        v22 = 2 * v20++;
        *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22] = *(float *)&dword_140404A6C[18198666]
                                                                                           * *(float *)&dword_140404A6C[0x10000 * (__int64)(int)dword_140404A6C[10] + 11 + v22];
        v23 = v21 + ((__int64)(int)dword_140404A6C[10] << 15);
        ++v21;
        *(float *)&dword_140404A6C[2 * v23 + 12] = *(float *)&dword_140404A6C[18198666]
                                                 * *(float *)&dword_140404A6C[2 * v23 + 12];
      }
      while ( v20 < (int)dword_140404A6C[8] );
    }
    dword_140404A6C[10] ^= 1u;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 140404A84: using guessed type unsigned int;
// 140404A8C: using guessed type unsigned int;

//----- (000000014006BDC0) ----------------------------------------------------
__int64 sub_14006BDC0()
{
  char *v0; // rcx
  _QWORD v2[5]; // [rsp+0h] [rbp-268h] BYREF
  int v3; // [rsp+28h] [rbp-240h]
  int v4; // [rsp+30h] [rbp-238h]
  int v5; // [rsp+38h] [rbp-230h]
  int v6; // [rsp+40h] [rbp-228h]
  _BYTE v7[512]; // [rsp+50h] [rbp-218h] BYREF
  __int64 v8; // [rsp+250h] [rbp-18h]

  switch ( dword_140404A6C[179668277] )
  {
    case 0u:
      if ( dword_140404A6C[278384725] )
      {
        v0 = "Steam Auth...";
        if ( !dword_140404A6C[278384987] )
          v0 = "Steam Ticket...";
      }
      else
      {
        v0 = "Steam Init Failed";
      }
      goto LABEL_11;
    case 1u:
      v0 = "CS Auth...";
LABEL_11:
      v6 = 1065353216;
      v5 = 1065353216;
      v4 = 1065353216;
      v3 = 1065353216;
      v2[4] = 0;
      sr_CSDrawText(v0, 16.0, (unsigned int *)(unsigned int)_mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0x440C0000u))), 12.0);
      return sub_1401F8B20((unsigned __int64)v2 ^ v8);
    case 2u:
      sub_140158AB0(v7, "%03d-%04d", dword_140404A6C[134050337] / 0x2710, dword_140404A6C[134050337] % 0x2710);
      v0 = v7;
      goto LABEL_11;
  }
  return sub_1401F8B20((unsigned __int64)v2 ^ v8);
}

// 14006BF1E: conditional instruction was optimized away because eax.4!=0
// 1402B2658: using guessed type int dword_1402B2658;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1603612E4: using guessed type unsigned int;
// 1603612F0: using guessed type unsigned int;
// 1603612F4: using guessed type unsigned int;
// 16B165F40: using guessed type unsigned int;
// 1829F8BD0: using guessed type unsigned int;
// 1829F8FD8: using guessed type unsigned int;
// 18539D408: using guessed type unsigned int;
// 1853AD41C: using guessed type unsigned int;
// 1853AD420: using guessed type unsigned int;

//----- (000000014006C360) ----------------------------------------------------
__int64            sub_14006C360(int a1, _DWORD *a2, int a3, int a4)
{
  __int64 v4; // rsi
  signed int v5; // r10d
  __int64 result; // rax
  unsigned int v7; // r11d
  unsigned int i; // ebx
  int v9; // ecx
  int v10; // ebp
  char v11; // bl
  char v12; // cl
  unsigned int j; // edi

  v4 = 16387LL * a1;
  v5 = dword_140404A6C[v4 + 135184965];
  result = (unsigned int)(v5 + (a3 >> 8));
  if ( (int)result < 0x10000 )
  {
    if ( a4 )
    {
      v7 = *a2 & ~(-1 << a3);
      if ( a3 > 0 )
      {
        for ( i = dword_140404A6C[v4 + 135184966]; ; LOBYTE(i) = 0 )
        {
          *((_BYTE *)&dword_140404A6C[v4 + 135184968] + v5) &= ~(((1 << a3) - 1) << i);
          *((_BYTE *)&dword_140404A6C[v4 + 135184968] + (int)dword_140404A6C[v4 + 135184965]) |= (_BYTE)v7 << dword_140404A6C[v4 + 135184966];
          result = dword_140404A6C[v4 + 135184966];
          v9 = 8 - result;
          if ( a3 < (unsigned int)(8 - result) )
            break;
          v5 = dword_140404A6C[v4 + 135184965] + 1;
          *(_QWORD *)&dword_140404A6C[v4 + 135184965] = (unsigned int)v5;
          if ( a3 == v9 )
            return result;
          a3 -= v9;
          v7 >>= v9;
          if ( a3 <= 0 )
            return result;
        }
        result = (unsigned int)(a3 + result);
        dword_140404A6C[v4 + 135184966] = result;
      }
    }
    else
    {
      v10 = 0;
      v11 = 0;
      if ( a3 > 0 )
      {
        v12 = dword_140404A6C[v4 + 135184966];
        for ( j = dword_140404A6C[v4 + 135184966]; ; j = 0 )
        {
          result = 8 - j;
          v10 |= (~(-1 << a3) & (*((unsigned __int8 *)&dword_140404A6C[v4 + 135184968] + v5) >> v12)) << v11;
          if ( a3 < (unsigned int)result )
            break;
          *(_QWORD *)&dword_140404A6C[v4 + 135184965] = (unsigned int)++v5;
          if ( a3 == (_DWORD)result )
            goto LABEL_17;
          a3 -= result;
          v11 += 8 - j;
          if ( a3 <= 0 )
            goto LABEL_17;
          v12 = 0;
        }
        result = j + a3;
        dword_140404A6C[v4 + 135184966] = result;
      }
LABEL_17:
      *a2 = v10;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006C510) ----------------------------------------------------
__int64            sub_14006C510(int a1, _DWORD *a2, char a3, int a4)
{
  __int64 result; // rax
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 )
    return sub_14006C360(a1, a2, a3, a4);
  sub_14006C360(a1, &v7, a3, 0);
  result = v7;
  if ( v7 == (1 << a3) - 1 )
    result = 0xFFFFFFFFLL;
  *a2 = result;
  return result;
}


//----- (000000014006C570) ----------------------------------------------------
__int64            sub_14006C570(int a1, _DWORD *a2, char a3, int a4)
{
  __int64 result; // rax
  int v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 )
    return sub_14006C360(a1, a2, a3, a4);
  sub_14006C360(a1, &v7, a3, 0);
  result = v7 & (unsigned int)(1 << (a3 - 1));
  if ( (_DWORD)result == 1 << (a3 - 1) )
  {
    result = v7 | (unsigned int)(-1 << a3);
    *a2 = result;
  }
  else
  {
    *a2 = v7;
  }
  return result;
}


//----- (000000014006C5E0) ----------------------------------------------------
__m128i *           sub_14006C5E0(int a1,      __m128i *a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
       __m128i *v6; // r10
  __int64 v7; // rcx
  int v8; // ebx
  __m128i *result; // rax
  __m128i *v10; // rcx

  v5 = 16387LL * a1;
  v6 = a2;
  if ( (int)dword_140404A6C[v5 + 135184966] > 0 )
  {
    ++dword_140404A6C[v5 + 135184965];
    dword_140404A6C[v5 + 135184966] = 0;
  }
  v7 = (int)dword_140404A6C[v5 + 135184965];
  v8 = a4 * a3;
  result = (__m128i *)(unsigned int)(v7 + a4 * a3);
  if ( (int)result < 0x10000 )
  {
    if ( a5 )
    {
      v10 = (__m128i *)((char *)&dword_140404A6C[v5 + 135184968] + v7);
    }
    else
    {
      a2 = (     __m128i *)((char *)&dword_140404A6C[v5 + 135184968] + v7);
      v10 = (__m128i *)v6;
    }
    result = sub_1401FC920(v10, a2, v8);
    dword_140404A6C[v5 + 135184965] += v8;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006C670) ----------------------------------------------------
// CRC32-style UI label ID helper. Lazily builds 256-entry table with polynomial 0xEDB88320 and returns bitwise-not final CRC.
__int64            sub_14006C670(unsigned __int8 *a1, unsigned int a2)
{
  unsigned __int8 *v2; // r9
  int v3; // r10d
  unsigned int *v4; // r11
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned __int8 v10; // r8
  __int64 v11; // rax

  v2 = a1;
  if ( !dword_140404A6C[18215125] )
  {
    v3 = 0;
    v4 = &dword_140404A6C[18215125];
    do
    {
      ++v4;
      v5 = (unsigned int)v3 >> 1;
      v6 = -(v3++ & 1) & 0xEDB88320;
      v7 = v5 ^ v6;
      LOBYTE(v5) = v7;
      v7 >>= 1;
      v8 = ((((v7 ^ -(v5 & 1) & 0xEDB88320) >> 1) ^ -(((unsigned __int8)v7 ^ -(v5 & 1) & 0x20) & 1) & 0xEDB88320) >> 1)
         ^ -(((unsigned __int8)((v7 ^ -(v5 & 1) & 0xEDB88320) >> 1)
            ^ -(((unsigned __int8)v7 ^ -(v5 & 1) & 0x20) & 1)
            & 0x20)
           & 1)
         & 0xEDB88320;
      v9 = (((v8 >> 1) ^ -(v8 & 1) & 0xEDB88320) >> 1)
         ^ -(((unsigned __int8)(v8 >> 1) ^ -(v8 & 1) & 0x20) & 1)
         & 0xEDB88320;
      *(v4 - 1) = (((v9 >> 1) ^ -(v9 & 1) & 0xEDB88320) >> 1)
                ^ -(((unsigned __int8)(v9 >> 1) ^ -(v9 & 1) & 0x20) & 1)
                & 0xEDB88320;
    }
    while ( v3 < 256 );
  }
  v10 = *a1;
  if ( *a1 )
  {
    do
    {
      ++v2;
      v11 = v10;
      v10 = *v2;
      a2 = (a2 >> 8) ^ dword_140404A6C[(v11 ^ (unsigned __int8)a2) + 18215125];
    }
    while ( *v2 );
  }
  return ~a2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006C780) ----------------------------------------------------
__int64 sub_14006C780()
{
  int v0; // ecx
  int v1; // r9d
  __int64 result; // rax
  int v3; // r11d

  v0 = (signed int)(16 * dword_140404A6C[137297756]) / 9;
  if ( (int)dword_140404A6C[137297755] <= v0 )
    v0 = dword_140404A6C[137297755];
  v1 = 0;
  dword_140404A6C[137297761] = v0;
  result = (unsigned int)(v0 + 8 * (v0 + 1));
  v3 = (int)result / 16;
  dword_140404A6C[137297762] = (int)result / 16;
  if ( (int)dword_140404A6C[137297755] > v0 )
  {
    result = (unsigned int)((signed int)(dword_140404A6C[137297755] - v0) / 2);
    v1 = (signed int)(dword_140404A6C[137297755] - v0) / 2;
  }
  dword_140404A6C[137297763] = v1;
  if ( (int)dword_140404A6C[137297756] <= v3 )
  {
    dword_140404A6C[137297764] = 0;
  }
  else
  {
    dword_140404A6C[137297764] = (signed int)(dword_140404A6C[137297756] - v3) / 2;
    return (unsigned int)((signed int)(dword_140404A6C[137297756] - v3) / 2);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160FC47D8: using guessed type unsigned int;
// 160FC47F0: using guessed type unsigned int;
// 160FC47F8: using guessed type unsigned int;
// 160FC47FC: using guessed type unsigned int;

//----- (000000014006C870) ----------------------------------------------------
__int64            sub_14006C870(_BYTE *a1)
{
  int v1; // edx
  unsigned int v2; // r11d
  int v3; // r9d
  _BYTE *v4; // r8

  v1 = dword_140404A6C[129454557];
  v2 = 0;
  v3 = 0;
  if ( (int)dword_140404A6C[129454557] < (int)dword_140404A6C[129454558] )
  {
    v4 = a1;
    do
    {
      if ( !*v4 )
        break;
      if ( *v4 != *((_BYTE *)&dword_140404A6C[129454559] + v1) )
        break;
      ++v3;
      ++v1;
      ++v4;
    }
    while ( v1 < (int)dword_140404A6C[129454558] );
  }
  LOBYTE(v2) = a1[v3] == 0;
  return v2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15F1D91E0: using guessed type unsigned int;

//----- (000000014006C980) ----------------------------------------------------
__int64            sub_14006C980(unsigned __int8 *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int8 v3; // al

  v2 = a2 - (_QWORD)a1;
  while ( 1 )
  {
    v3 = *a1;
    if ( *a1 != a1[v2] )
      break;
    ++a1;
    if ( !v3 )
      return 0;
  }
  return v3 < a1[v2] ? -1 : 1;
}


//----- (000000014006CA30) ----------------------------------------------------
__int64            sub_14006CA30(unsigned int a1, unsigned int a2)
{
  dword_140404A6C[433435853] = a1;
  dword_140404A6C[433435854] = a2;
  dword_140404A6C[433435865] = 0;
  free(*(void **)&dword_140404A6C[433435863]);
  *(_QWORD *)&dword_140404A6C[433435863] = sr_path_malloc(4 * dword_140404A6C[433435853] * dword_140404A6C[433435854]);
  sub_1401FCD30(
    (void *)(uintptr_t)(*(_WORD **)&dword_140404A6C[433435863]),
    0xFFu,
    4 * dword_140404A6C[433435853] * dword_140404A6C[433435854]);
  unk_140404060(1, &dword_140404A6C[433435861]);
  qword_140404050(3553, dword_140404A6C[433435861]);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9729);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9729);
  (*(void (           **)(__int64, _QWORD, __int64, _QWORD, unsigned int, _DWORD, int, int, _QWORD))&dword_140404A6C[18215083])(
    3553,
    0,
    6408,
    dword_140404A6C[433435853],
    dword_140404A6C[433435854],
    0,
    6408,
    5121,
    *(_QWORD *)&dword_140404A6C[433435863]);
  return 0;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404060: using guessed type __int64 (__fastcall *unk_140404060)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 1A7971DA0: using guessed type unsigned int;
// 1A7971DA4: using guessed type unsigned int;
// 1A7971DD0: using guessed type unsigned int;

//----- (000000014006CCA0) ----------------------------------------------------
void            sub_14006CCA0(unsigned __int8 *a1, float a2)
{
  int v2; // r10d
  signed int v4; // ebx
  unsigned int *v5; // r11
  unsigned int *v6; // rdi
  unsigned __int8 *v7; // rax
  int v8; // ecx
  int v9; // edx
  __int64 v10; // rdx
  char *v11; // rdx
  unsigned __int8 v12; // al
  __int64 v13; // rcx

  v2 = 0;
  v4 = -1;
  if ( (int)dword_140404A6C[135034429] <= 0 )
    goto LABEL_11;
  v5 = &dword_140404A6C[135034462];
  v6 = &dword_140404A6C[135034430];
  do
  {
    if ( *v5 == 1 )
    {
      v7 = a1;
      do
      {
        v8 = v7[(char *)v6 - (char *)a1];
        v9 = *v7 - v8;
        if ( v9 )
          break;
        ++v7;
      }
      while ( v8 );
      if ( !v9 )
        v4 = v2;
    }
    ++v2;
    v6 += 35;
    v5 += 35;
  }
  while ( v2 < (int)dword_140404A6C[135034429] );
  if ( v4 == -1 )
  {
LABEL_11:
    if ( (int)dword_140404A6C[135034429] >= 128 )
      return;
    v4 = dword_140404A6C[135034429];
    v10 = 140LL * (int)dword_140404A6C[135034429]++ - (_QWORD)a1;
    v11 = (char *)&dword_140404A6C[135034429] + v10;
    do
    {
      v12 = *a1;
      a1[(_QWORD)v11 + 4] = *a1;
      ++a1;
    }
    while ( v12 );
  }
  v13 = 35LL * v4;
  *(float *)&dword_140404A6C[v13 + 135034464] = a2;
  dword_140404A6C[v13 + 135034462] = 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160722360: using guessed type unsigned int;

//----- (000000014006CD90) ----------------------------------------------------
void            sub_14006CD90(unsigned __int8 *a1, unsigned int a2)
{
  int v2; // r10d
  signed int v5; // ebx
  unsigned int *v6; // r11
  unsigned int *v7; // rdi
  unsigned __int8 *v8; // rax
  int v9; // ecx
  int v10; // edx
  __int64 v11; // rdx
  char *v12; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // rcx

  v2 = 0;
  v5 = -1;
  if ( (int)dword_140404A6C[135034429] <= 0 )
    goto LABEL_11;
  v6 = &dword_140404A6C[135034462];
  v7 = &dword_140404A6C[135034430];
  do
  {
    if ( !*v6 )
    {
      v8 = a1;
      do
      {
        v9 = v8[(char *)v7 - (char *)a1];
        v10 = *v8 - v9;
        if ( v10 )
          break;
        ++v8;
      }
      while ( v9 );
      if ( !v10 )
        v5 = v2;
    }
    ++v2;
    v7 += 35;
    v6 += 35;
  }
  while ( v2 < (int)dword_140404A6C[135034429] );
  if ( v5 == -1 )
  {
LABEL_11:
    if ( (int)dword_140404A6C[135034429] >= 128 )
      return;
    v5 = dword_140404A6C[135034429];
    v11 = 140LL * (int)dword_140404A6C[135034429]++ - (_QWORD)a1;
    v12 = (char *)&dword_140404A6C[135034429] + v11;
    do
    {
      v13 = *a1;
      a1[(_QWORD)v12 + 4] = *a1;
      ++a1;
    }
    while ( v13 );
  }
  v14 = 35LL * v5;
  dword_140404A6C[v14 + 135034462] = 0;
  dword_140404A6C[v14 + 135034463] = a2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160722360: using guessed type unsigned int;

//----- (000000014006CFF0) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__int64            sub_14006CFF0(double a1, double a2, __int64 a3, float a4, char a5, int a6, int a7, int a8, int a9)
{
  float v9 = *(float *)&a3; /* explicit native width lane */
  __m128 v10; // xmm7
  __m128 v11; // xmm6
  __m128 v12; // xmm1
  unsigned __int64 v13; // xmm0_8
  __int64 v14; // rax
  _DWORD v16[10]; // [rsp+8h] [rbp-61h] BYREF
  __int64 v17; // [rsp+30h] [rbp-39h]
  __int64 v18; // [rsp+38h] [rbp-31h]
  __int64 v19; // [rsp+40h] [rbp-29h]
  int v20; // [rsp+48h] [rbp-21h]
  _DWORD v21[4]; // [rsp+50h] [rbp-19h] BYREF
  __int128 v22; // [rsp+60h] [rbp-9h]

  v10 = _mm_set_ss(*(float *)&a1);
  v11 = _mm_set_ss(*(float *)&a2);
  v21[0] = a6;
  v21[1] = a7;
  v21[2] = a8;
  v21[3] = a9;
  if ( (a5 & 1) != 0 )
  {
    SR_VEC_LANES(128, v10, f32)[0] = *(float *)&a1 + (float)(v9 * -0.5f);
  }
  else if ( (a5 & 2) != 0 )
  {
    SR_VEC_LANES(128, v10, f32)[0] = *(float *)&a1 - v9;
  }
  if ( (a5 & 4) != 0 )
  {
    SR_VEC_LANES(128, v11, f32)[0] = *(float *)&a2 + (float)(a4 * -0.5f);
  }
  else if ( (a5 & 8) != 0 )
  {
    SR_VEC_LANES(128, v11, f32)[0] = *(float *)&a2 - a4;
  }
  v12 = v10;
  dword_140404A6C[438291419] = SR_VEC_LANES(128, v11, i32)[0];
  SR_VEC_LANES(128, v12, f32)[0] = SR_VEC_LANES(128, v10, f32)[0] + v9;
  v20 = 0;
  dword_140404A6C[438291418] = SR_VEC_LANES(128, v10, i32)[0];
  dword_140404A6C[438291417] = 5;
  LODWORD(v18) = 0;
  dword_140404A6C[438291420] = 0;
  v13 = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v12, v11), u64)[0];
  SR_VEC_LANES(128, v11, f32)[0] = SR_VEC_LANES(128, v11, f32)[0] + a4;
  *(_QWORD *)&dword_140404A6C[438291423] = v13;
  dword_140404A6C[438291425] = 0;
  dword_140404A6C[438291430] = 0;
  *(float *)&v19 = SR_VEC_LANES(128, v10, f32)[0] + v9;
  HIDWORD(v19) = SR_VEC_LANES(128, v11, i32)[0];
  *(_QWORD *)&dword_140404A6C[438291428] = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v10, v11), u64)[0];
  if ( a5 < 0 )
  {
    *(_QWORD *)&dword_140404A6C[438291421] = (unsigned int)v18;
    *(_QWORD *)&dword_140404A6C[438291426] = 1065353216;
    v14 = 0x3F80000000000000LL;
    v18 = 0x3F8000003F800000LL;
  }
  else
  {
    HIDWORD(v18) = 1065353216;
    *(_QWORD *)&dword_140404A6C[438291421] = v18;
    *(_QWORD *)&dword_140404A6C[438291426] = 0x3F8000003F800000LL;
    v14 = 0;
    v18 = 1065353216;
  }
  *(_QWORD *)&dword_140404A6C[438291431] = v14;
  dword_140404A6C[438291435] = 0;
  *(_QWORD *)&dword_140404A6C[438291436] = v18;
  *(_QWORD *)&dword_140404A6C[438291433] = v19;
  dword_140404A6C[438291416] = 4;
  ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404170)(34962,dword_140404A6C[451221644]);
  ((void (*)(unsigned,intptr_t,const void *,unsigned))(uintptr_t)unk_140404190)(34962,4*dword_140404A6C[438291416]*dword_140404A6C[438291417],&dword_140404A6C[438291418],35040);
  ((void (*)(unsigned))(uintptr_t)qword_1404042E0)(dword_140404A6C[451221605]);
  ((void (*)(int,int,unsigned char,const float *))(uintptr_t)qword_140404378)(dword_140404A6C[451221610],1,0,(float *)&dword_140404A6C[431564565]);
  ((void (*)(unsigned))(uintptr_t)qword_140404238)(0);
  ((void (*)(unsigned))(uintptr_t)qword_140404238)(1);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(0,3,5126,0,4*dword_140404A6C[438291417],NULL);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(1,2,5126,0,4*dword_140404A6C[438291417],(void *)12);
  ((void (*)(unsigned,const float *))(uintptr_t)unk_140404470)(2,(const float *)v21);
  ((void (*)(unsigned,int,int))(uintptr_t)qword_140302FF8)(5,0,dword_140404A6C[438291416]);
  ((void (*)(unsigned))(uintptr_t)qword_140404230)(0);
  ((void (*)(unsigned))(uintptr_t)qword_140404230)(1);
  return 0; /* legacy export result is unused; native routine returns void */

}

// 14006CFF0: inconsistent variable size for 'xmm0_8.8'
// 14006CFF0: inconsistent variable size for 'xmm1_8.8'
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404470: using guessed type __int64 (__fastcall *unk_140404470)(_QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A8BF79CC: using guessed type unsigned int;
// 1A8BF79D0: using guessed type unsigned int;
// 1A8BF79D4: using guessed type unsigned int;
// 1A8BF79D8: using guessed type unsigned int;
// 1A8BF79DC: using guessed type unsigned int;
// 1A8BF79E0: using guessed type unsigned int;
// 1A8BF79E8: using guessed type unsigned int;
// 1A8BF79F0: using guessed type unsigned int;
// 1A8BF79F4: using guessed type unsigned int;
// 1A8BF7A04: using guessed type unsigned int;
// 1A8BF7A08: using guessed type unsigned int;
// 1A8BF7A10: using guessed type unsigned int;
// 1A8BF7A18: using guessed type unsigned int;
// 1A8BF7A1C: using guessed type unsigned int;

//----- (000000014006D300) ----------------------------------------------------
__int64            sr_CSDrawAtlasEntry(
        int a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        char a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  float v11; // xmm7_4
  float v12; // xmm6_4
  __int64 v13; // rbx
  __int64 v14; // r8
  unsigned int v15; // xmm5_4
  unsigned int v16; // xmm4_4
  int v17; // xmm0_4
  unsigned int v18; // xmm1_4
  int v19; // xmm0_4
  unsigned int v20; // xmm0_4
  int v21; // xmm0_4
  __int64 v22; // r8
  _DWORD v24[10]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v25; // [rsp+28h] [rbp-58h]
  unsigned __int64 v26; // [rsp+30h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-48h]
  _DWORD v28[4]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h]

  v11 = a4;
  v12 = a3;
  v28[0] = a8;
  v28[1] = a9;
  v28[2] = a10;
  v28[3] = a11;
  if ( (a7 & 1) != 0 )
  {
    v12 = a3 + (float)(a5 * -0.5);
  }
  else if ( (a7 & 2) != 0 )
  {
    v12 = a3 - a5;
  }
  if ( (a7 & 4) != 0 )
  {
    v11 = a4 + (float)(a6 * -0.5);
  }
  else if ( (a7 & 8) != 0 )
  {
    v11 = a4 - a6;
  }
  v13 = 49166LL * a1;
  dword_140404A6C[438291417] = 4;
  dword_140404A6C[438291416] = 6;
  *(_QWORD *)&dword_140404A6C[438291418] = __PAIR64__(LODWORD(v11), LODWORD(v12));
  v27 = __PAIR64__(LODWORD(v11), v12 + a5);
  v14 = v13 * 4 + 48LL * a2;
  v16 = *(unsigned int *)((char *)&dword_140404A6C[433435871] + v14);
  v17 = *(unsigned int *)((char *)&dword_140404A6C[433435872] + v14);
  v18 = *(unsigned int *)((char *)&dword_140404A6C[433435874] + v14);
  LODWORD(v26) = *(unsigned int *)((char *)&dword_140404A6C[433435870] + v14);
  v15 = v26;
  HIDWORD(v26) = v16;
  *(_QWORD *)&dword_140404A6C[438291420] = v26;
  LODWORD(v26) = v17;
  v19 = *(unsigned int *)((char *)&dword_140404A6C[433435873] + v14);
  *(_QWORD *)&dword_140404A6C[438291422] = __PAIR64__(LODWORD(v11), v12 + a5);
  HIDWORD(v26) = v19;
  v20 = *(unsigned int *)((char *)&dword_140404A6C[433435875] + v14);
  *(_QWORD *)&dword_140404A6C[438291424] = v26;
  *((float *)&v27 + 1) = v11 + a6;
  *(_QWORD *)&dword_140404A6C[438291426] = v27;
  *(_QWORD *)&dword_140404A6C[438291428] = __PAIR64__(v20, v18);
  v26 = __PAIR64__(v20, v15);
  v27 = __PAIR64__(LODWORD(v11), LODWORD(v12));
  *(_QWORD *)&dword_140404A6C[438291430] = __PAIR64__(LODWORD(v11), LODWORD(v12));
  v21 = *(unsigned int *)((char *)&dword_140404A6C[433435876] + v14);
  *(_QWORD *)&dword_140404A6C[438291432] = __PAIR64__(v16, v15);
  v27 = __PAIR64__(v11 + a6, v12 + a5);
  LODWORD(v26) = v18;
  *(_QWORD *)&dword_140404A6C[438291434] = __PAIR64__(v11 + a6, v12 + a5);
  *(_QWORD *)&dword_140404A6C[438291436] = v26;
  LODWORD(v26) = v21;
  HIDWORD(v26) = *(unsigned int *)((char *)&dword_140404A6C[433435877] + v14);
  *(float *)&v27 = v12;
  *(_QWORD *)&dword_140404A6C[438291438] = v27;
  *(_QWORD *)&dword_140404A6C[438291440] = v26;
  qword_1404042E0(dword_140404A6C[451221605]);
  qword_140404050(3553, dword_140404A6C[v13 + 433435861]);
  qword_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
  qword_140404170(34962, dword_140404A6C[451221644], v22);
  unk_140404190(34962, 4 * dword_140404A6C[438291416] * dword_140404A6C[438291417], &dword_140404A6C[438291418], 35040);
  qword_140404238(0);
  qword_140404238(1);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[438291417]),(const void *)(intptr_t)(0));
  v25 = 8;
  v24[8] = 4 * dword_140404A6C[438291417];
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 2, 5126,0,(int)(uint32_t)(4u*dword_140404A6C[438291417]),(const void *)(intptr_t)(8));
  unk_140404470(2, v28);
  qword_140302FF8(4, 0, dword_140404A6C[438291416]);
  qword_140404230(0);
  qword_140404230(1);
  qword_1404042E0(0);
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 14006D548: variable 'v22' is possibly undefined
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404470: using guessed type __int64 (__fastcall *unk_140404470)(_QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A8BF79CC: using guessed type unsigned int;
// 1A8BF79D0: using guessed type unsigned int;
// 1A8BF79D4: using guessed type unsigned int;
// 1A8BF79DC: using guessed type unsigned int;
// 1A8BF79E4: using guessed type unsigned int;
// 1A8BF79EC: using guessed type unsigned int;
// 1A8BF79F4: using guessed type unsigned int;
// 1A8BF79FC: using guessed type unsigned int;
// 1A8BF7A04: using guessed type unsigned int;
// 1A8BF7A0C: using guessed type unsigned int;
// 1A8BF7A14: using guessed type unsigned int;
// 1A8BF7A1C: using guessed type unsigned int;
// 1A8BF7A24: using guessed type unsigned int;
// 1A8BF7A2C: using guessed type unsigned int;

//----- (000000014006D660) ----------------------------------------------------
// local variable allocation has failed, the output may be wrong!
__int64            sub_14006D660(double a1, double a2, __int64 a3, float a4, char a5, int a6, int a7, int a8, int a9)
{
  float v9 = *(float *)&a3; /* explicit native width lane */
  __m128 v10; // xmm6
  float v11; // xmm8_4
  __m128 v12; // xmm7
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  _DWORD v16[10]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v17; // [rsp+28h] [rbp-70h]
  __int64 v18; // [rsp+30h] [rbp-68h]
  int v19; // [rsp+40h] [rbp-58h]
  _DWORD v20[4]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]

  v10 = _mm_set_ss(*(float *)&a2);
  v11 = v9;
  v12 = _mm_set_ss(*(float *)&a1);
  v20[0] = a6;
  v20[1] = a7;
  v20[2] = a8;
  v20[3] = a9;
  if ( (a5 & 1) != 0 )
  {
    SR_VEC_LANES(128, v12, f32)[0] = *(float *)&a1 + (float)(v9 * -0.5f);
  }
  else if ( (a5 & 2) != 0 )
  {
    SR_VEC_LANES(128, v12, f32)[0] = *(float *)&a1 - v9;
  }
  if ( (a5 & 4) != 0 )
  {
    SR_VEC_LANES(128, v10, f32)[0] = *(float *)&a2 + (float)(a4 * -0.5f);
  }
  else if ( (a5 & 8) != 0 )
  {
    SR_VEC_LANES(128, v10, f32)[0] = *(float *)&a2 - a4;
  }
  v13 = v12;
  SR_VEC_LANES(128, v13, f32)[0] = SR_VEC_LANES(128, v12, f32)[0] + v11;
  v19 = 0;
  v14 = v10;
  SR_VEC_LANES(128, v14, f32)[0] = SR_VEC_LANES(128, v10, f32)[0] + a4;
  dword_140404A6C[438291425] = 0;
  dword_140404A6C[438291430] = 0;
  dword_140404A6C[438291435] = 0;
  dword_140404A6C[438291440] = 0;
  *(_QWORD *)&dword_140404A6C[438291423] = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v13, v10), u64)[0];
  *(_QWORD *)&dword_140404A6C[438291428] = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v13, v14), u64)[0];
  *(_QWORD *)&dword_140404A6C[438291433] = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v12, v10), u64)[0];
  *(_QWORD *)&dword_140404A6C[438291438] = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v13, v14), u64)[0];
  dword_140404A6C[438291445] = 0;
  v18 = 0;
  *(_QWORD *)&dword_140404A6C[438291443] = SR_VEC_READ_LANES(128, _mm_unpacklo_ps(v12, v14), u64)[0];
  dword_140404A6C[438291418] = SR_VEC_LANES(128, v12, i32)[0];
  dword_140404A6C[438291419] = SR_VEC_LANES(128, v10, i32)[0];
  dword_140404A6C[438291417] = 5;
  dword_140404A6C[438291420] = 0;
  *(_QWORD *)&dword_140404A6C[438291421] = 0;
  *(_QWORD *)&dword_140404A6C[438291426] = 0;
  *(_QWORD *)&dword_140404A6C[438291431] = 0;
  *(_QWORD *)&dword_140404A6C[438291436] = 0;
  *(_QWORD *)&dword_140404A6C[438291441] = 0;
  *(_QWORD *)&dword_140404A6C[438291446] = 0;
  dword_140404A6C[438291416] = 6;
  ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404170)(34962,dword_140404A6C[451221644]);
  ((void (*)(unsigned,intptr_t,const void *,unsigned))(uintptr_t)unk_140404190)(34962,4*dword_140404A6C[438291416]*dword_140404A6C[438291417],&dword_140404A6C[438291418],35040);
  ((void (*)(unsigned))(uintptr_t)qword_1404042E0)(dword_140404A6C[451221605]);
  ((void (*)(int,int,unsigned char,const float *))(uintptr_t)qword_140404378)(dword_140404A6C[451221610],1,0,(float *)&dword_140404A6C[431564565]);
  ((void (*)(unsigned))(uintptr_t)qword_140404238)(0);
  ((void (*)(unsigned))(uintptr_t)qword_140404238)(1);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(0,3,5126,0,4*dword_140404A6C[438291417],NULL);
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(1,2,5126,0,4*dword_140404A6C[438291417],(void *)12);
  ((void (*)(unsigned,const float *))(uintptr_t)unk_140404470)(2,(const float *)v20);
  ((void (*)(unsigned,int,int))(uintptr_t)qword_140302FF8)(4,0,dword_140404A6C[438291416]);
  ((void (*)(unsigned))(uintptr_t)qword_140404230)(0);
  ((void (*)(unsigned))(uintptr_t)qword_140404230)(1);
  return 0; /* legacy export result is unused; native routine returns void */

}

//----- (000000014006D930) ----------------------------------------------------
__int64            sr_CSDrawText(char *a1, float a2, unsigned int *a3, float a4)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  char v7; // al
  float v8; // xmm1_4
  __int64 v9; // rdx
  __int64 v10; // rcx
  float v11; // xmm1_4
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp-20h] [rbp-20140h] BYREF
  _BYTE v16[65536]; // [rsp+30h] [rbp-200F0h] BYREF
  __int64 v17; // [rsp+10030h] [rbp-100F0h]
  unsigned int v18; // [rsp+100B0h] [rbp-10070h]
  int v19; // [rsp+100B8h] [rbp-10068h]
  int v20; // [rsp+100C0h] [rbp-10060h]
  int v21; // [rsp+100C8h] [rbp-10058h]
  int v22; // [rsp+100D0h] [rbp-10050h]
  _BYTE v23[65608]; // [rsp+100D8h] [rbp-10048h] BYREF

  v4 = v18;
  if ( (v18 & 0x40) != 0 )
  {
    v6 = (intptr_t)((uintptr_t)(v16) - (uintptr_t)(a1));
    do
    {
      v7 = *a1;
      a1[v6] = *a1;
      ++a1;
    }
    while ( v7 );
  }
  else
  {
    sub_14006E530(v16, a1, 10000, (__int64)v23);
  }
  if ( (v4 & 1) != 0 )
  {
    a3 = &dword_140404A6C[72777085];
    v8 = 0.0;
    if ( dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777085] && v16[0] )
    {
      v9 = 0;
      do
      {
        if ( v9 >= 0xFFFF )
          break;
        v10 = (char)v16[v9++];
        v8 = v8 + (float)(a4 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v10]);
      }
      while ( v16[v9] );
    }
    a2 = a2 + (float)(v8 * -0.5);
  }
  else if ( (v4 & 2) != 0 )
  {
    a3 = &dword_140404A6C[72777085];
    v11 = 0.0;
    if ( dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777085] && v16[0] )
    {
      v12 = 0;
      do
      {
        if ( v12 >= 0xFFFF )
          break;
        v13 = (char)v16[v12++];
        v11 = v11 + (float)(a4 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v13]);
      }
      while ( v16[v12] );
    }
    a2 = a2 - v11;
  }
  if ( (v4 & 0x20) != 0 )
    sub_14006DB90(v16, (float)(a4 * 0.0625) + a2, a3, a4, 0, 0, 0, v22, (v4 >> 7) & 1);
  sub_14006DB90(v16, a2, a3, a4, v19, v20, v21, v22, (v4 >> 7) & 1);
  return 0; /* native text renderer is void */
}

// 14006DB06: variable 'a3' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006DB90) ----------------------------------------------------
void sub_14006DB90(_BYTE *a1, float a2, _BYTE *a3, float a4, int a5, int a6, int a7, int a8, int a9)
{
  float v9; // xmm2_4
  __int64 v10; // r10
  float v12; // xmm8_4
  unsigned int v15; // edx
  unsigned int v16; // r9d
  float v17; // xmm9_4
  __int64 v18; // rax
  float v19; // xmm2_4
  unsigned int v20; // xmm3_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  unsigned int v23; // xmm5_4
  __int64 v24; // rax
  unsigned int v25; // ecx
  float v26; // xmm4_4
  __int64 v27; // rcx
  unsigned int v28; // ecx
  float v29; // xmm4_4
  __int64 v30; // rcx
  unsigned int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // ebx
  __int64 v36; // r8
  __int64 v37; // r8
  _DWORD v39[10]; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+28h] [rbp-80h]
  _DWORD v41[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v42; // [rsp+40h] [rbp-68h]

  v10 = (int)dword_140404A6C[438291413];
  v12 = sr_text_bits_float((unsigned)(uintptr_t)a3);
  if ( dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777085] )
  {
    v15 = 5;
    v41[0] = a5;
    v16 = 0;
    v41[1] = a6;
    dword_140404A6C[438291416] = 0;
    dword_140404A6C[438291417] = 5;
    v17 = 0.0;
    v41[2] = a7;
    v41[3] = a8;
    if ( *a1 )
    {
      a3 = a1;
      while ( a3 - a1 < 1000 )
      {
        v18 = (char)*a3;
        v19 = *(float *)&dword_140404A6C[3592 * v10 + 72779656 + 4 * v18] * a4;
        *(float *)&v20 = (float)((float)(a4 * *(float *)&dword_140404A6C[3592 * v10 + 72779655 + 4 * v18]) + a2) + v17;
        v21 = (float)(*(float *)&dword_140404A6C[3592 * v10 + 72779656 + 4 * v18]
                    + *(float *)&dword_140404A6C[3592 * v10 + 72779654 + 4 * v18])
            * a4;
        if ( a9 )
          v22 = (float)(*(float *)&dword_140404A6C[3592 * v10 + 72779656 + 4 * v18]
                      + *(float *)&dword_140404A6C[3592 * v10 + 72779654 + 4 * v18])
              * a4;
        else
          v22 = *(float *)&dword_140404A6C[3592 * v10 + 72779656 + 4 * v18] * a4;
        *(float *)&v23 = *(float *)&v20 + (float)(a4 * *(float *)&dword_140404A6C[3592 * v10 + 72779653 + 4 * v18]);
        v24 = (int)(v16 * v15);
        dword_140404A6C[v24 + 438291418] = v20;
        *(float *)&dword_140404A6C[v24 + 438291419] = v12 + v22;
        dword_140404A6C[v24 + 438291420] = 0;
        *(_QWORD *)&dword_140404A6C[dword_140404A6C[438291416] * dword_140404A6C[438291417] + 438291421] = *(_QWORD *)&dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777349 + 8 * (char)*a3];
        v25 = ++dword_140404A6C[438291416];
        if ( a9 )
          v26 = v21;
        else
          v26 = v19;
        v27 = (int)(v25 * dword_140404A6C[438291417]);
        dword_140404A6C[v27 + 438291418] = v23;
        *(float *)&dword_140404A6C[v27 + 438291419] = v12 + v26;
        dword_140404A6C[v27 + 438291420] = 0;
        *(_QWORD *)&dword_140404A6C[dword_140404A6C[438291416] * dword_140404A6C[438291417] + 438291421] = *(_QWORD *)&dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777351 + 8 * (char)*a3];
        v28 = ++dword_140404A6C[438291416];
        if ( a9 )
          v29 = v19;
        else
          v29 = v21;
        v30 = (int)(v28 * dword_140404A6C[438291417]);
        dword_140404A6C[v30 + 438291418] = v23;
        *(float *)&dword_140404A6C[v30 + 438291419] = v12 + v29;
        dword_140404A6C[v30 + 438291420] = 0;
        *(_QWORD *)&dword_140404A6C[dword_140404A6C[438291416] * dword_140404A6C[438291417] + 438291421] = *(_QWORD *)&dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777353 + 8 * (char)*a3];
        v31 = ++dword_140404A6C[438291416];
        if ( a9 )
          v21 = v19;
        v32 = (int)(v31 * dword_140404A6C[438291417]);
        dword_140404A6C[v32 + 438291418] = v20;
        *(float *)&dword_140404A6C[v32 + 438291419] = v12 + v21;
        dword_140404A6C[v32 + 438291420] = 0;
        *(_QWORD *)&dword_140404A6C[dword_140404A6C[438291416] * dword_140404A6C[438291417] + 438291421] = *(_QWORD *)&dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777355 + 8 * (char)*a3];
        v10 = (int)dword_140404A6C[438291413];
        v16 = ++dword_140404A6C[438291416];
        v33 = (char)*a3++;
        v17 = v17 + (float)(a4 * *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[438291413] + 72777093 + v33]);
        if ( !*a3 )
          break;
        v15 = dword_140404A6C[438291417];
      }
    }
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404170)(34962,dword_140404A6C[451221644]);
    ((void (*)(unsigned,intptr_t,const void *,unsigned))(uintptr_t)unk_140404190)(34962,4*dword_140404A6C[438291416]*dword_140404A6C[438291417],&dword_140404A6C[438291418],35040);
    ((void (*)(unsigned))(uintptr_t)qword_1404042E0)(dword_140404A6C[451221605]);
    ((void (*)(int,int,unsigned char,const float *))(uintptr_t)qword_140404378)(dword_140404A6C[451221610],1,0,(float *)&dword_140404A6C[431564565]);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*dword_140404A6C[438291413]+72777086]);
    ((void (*)(unsigned))(uintptr_t)qword_140404238)(0);
    ((void (*)(unsigned))(uintptr_t)qword_140404238)(1);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(0,3,5126,0,4*dword_140404A6C[438291417],NULL);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(1,2,5126,0,4*dword_140404A6C[438291417],(void *)12);
    ((void (*)(unsigned,const float *))(uintptr_t)unk_140404470)(2,(float *)v41);
    v35=6*((int)dword_140404A6C[438291416]/4);if(v35>98304)v35=98304;
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404170)(34963,dword_140404A6C[456807040]);
    ((void (*)(unsigned,int,unsigned,const void *))(uintptr_t)*(uint64 *)&flt_140384000[131076])(4,v35,5123,NULL);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404170)(34963,0);
    ((void (*)(unsigned))(uintptr_t)qword_140404230)(0);
    ((void (*)(unsigned))(uintptr_t)qword_140404230)(1);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404170)(34962,0);

  }
  return;
}

// 14006DBD5: variable 'v9' is possibly undefined
// 14006E03F: variable 'v34' is possibly undefined
// 14006E061: variable 'v36' is possibly undefined
// 14006E081: variable 'v37' is possibly undefined
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404470: using guessed type __int64 (__fastcall *unk_140404470)(_QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A8BF79CC: using guessed type unsigned int;
// 1A8BF79D0: using guessed type unsigned int;

//----- (000000014006E0D0) ----------------------------------------------------
void            sub_14006E0D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  unsigned int v4; // eax
  int v5; // ebx
  __int64 v6; // r8

  if ( dword_140404A6C[456217207] )
  {
    qword_140404170(34962, dword_140404A6C[456807039], a3);
    qword_140404198(34962, 0, 4 * dword_140404A6C[456217207] * dword_140404A6C[456217208], &dword_140404A6C[456217209]);
    qword_1404042E0(dword_140404A6C[451221605]);
    qword_140404378(dword_140404A6C[451221610], 1, 0, &dword_140404A6C[431564565]);
    qword_140404238(0);
    qword_140404238(1);
    qword_140404238(2);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(0,3,5126,0,4*dword_140404A6C[456217208],(const void *)(uintptr_t)0);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(1,2,5126,0,4*dword_140404A6C[456217208],(const void *)(uintptr_t)12);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(2,4,5126,0,4*dword_140404A6C[456217208],(const void *)(uintptr_t)20);
    v4 = dword_140404A6C[456217205];
    if ( !dword_140404A6C[456217205] )
    {
      qword_140302FF8(4, 0, dword_140404A6C[456217207]);
      v4 = dword_140404A6C[456217205];
    }
    if ( v4 == 1 )
    {
      v5 = 6 * ((signed int)dword_140404A6C[456217207] / 4);
      if ( v5 > 98304 )
        v5 = 98304;
      qword_140404170(34963, dword_140404A6C[456807040], v3);
      ((void (*)(unsigned,int,unsigned,const void *))(*(uintptr_t *)&flt_140384000[131076]))(4,v5,5123,NULL);
      qword_140404170(34963, 0, v6);
      v4 = dword_140404A6C[456217205];
    }
    if ( v4 == 2 )
    {
      qword_140302FF8(1, 0, dword_140404A6C[456217207]);
      v4 = dword_140404A6C[456217205];
    }
    if ( v4 == 3 )
      qword_140302FF8(0, 0, dword_140404A6C[456217207]);
    qword_140404230(0);
    qword_140404230(1);
    qword_140404230(2);
  }
}

// 14006E241: variable 'v3' is possibly undefined
// 14006E263: variable 'v6' is possibly undefined
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404378: using guessed type __int64 (__fastcall *qword_140404378)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;

//----- (000000014006E2D0) ----------------------------------------------------
void            sub_14006E2D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  unsigned int v4; // eax
  int v5; // ebx
  __int64 v6; // r8

  if ( dword_140404A6C[456217207] )
  {
    qword_140404170(34962, dword_140404A6C[456807039], a3);
    qword_140404198(34962, 0, 4 * dword_140404A6C[456217207] * dword_140404A6C[456217208], &dword_140404A6C[456217209]);
    qword_140404238(0);
    qword_140404238(1);
    qword_140404238(2);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(0,3,5126,0,4*dword_140404A6C[456217208],(const void *)(uintptr_t)0);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(1,2,5126,0,4*dword_140404A6C[456217208],(const void *)(uintptr_t)12);
    ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))(uintptr_t)qword_1404044A8)(2,4,5126,0,4*dword_140404A6C[456217208],(const void *)(uintptr_t)20);
    v4 = dword_140404A6C[456217205];
    if ( !dword_140404A6C[456217205] )
    {
      qword_140302FF8(4, 0, dword_140404A6C[456217207]);
      v4 = dword_140404A6C[456217205];
    }
    if ( v4 == 1 )
    {
      v5 = 6 * ((signed int)dword_140404A6C[456217207] / 4);
      if ( v5 > 98304 )
        v5 = 98304;
      qword_140404170(34963, dword_140404A6C[456807040], v3);
      ((void (*)(unsigned,int,unsigned,const void *))(*(uintptr_t *)&flt_140384000[131076]))(4,v5,5123,NULL);
      qword_140404170(34963, 0, v6);
      v4 = dword_140404A6C[456217205];
    }
    if ( v4 == 2 )
    {
      qword_140302FF8(1, 0, dword_140404A6C[456217207]);
      v4 = dword_140404A6C[456217205];
    }
    if ( v4 == 3 )
      qword_140302FF8(0, 0, dword_140404A6C[456217207]);
    qword_140404230(0);
    qword_140404230(1);
    qword_140404230(2);
  }
}

// 14006E41B: variable 'v3' is possibly undefined
// 14006E43D: variable 'v6' is possibly undefined
// 140302FF8: using guessed type __int64 (__fastcall *qword_140302FF8)(_QWORD, _QWORD, _QWORD);
// 140384000: using guessed type float flt_140384000[131092];
// 140404010: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404198: using guessed type double (__fastcall *qword_140404198)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404230: using guessed type double (__fastcall *qword_140404230)(_QWORD);
// 140404238: using guessed type __int64 (__fastcall *qword_140404238)(_QWORD);
// 1404044A8: using guessed type double (__fastcall *qword_1404044A8)(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;

//----- (000000014006E4C0) ----------------------------------------------------
_BOOL8            sub_14006E4C0(_BYTE *a1)
{
  signed int v1; // ebx
  signed int i; // esi
  __int64 v4; // rax

  v1 = dword_140404A6C[129454557];
  for ( i = dword_140404A6C[129454558]; v1 < i; dword_140404A6C[129454557] = ++v1 )
  {
    if ( (unsigned int)sub_14006C870(a1) )
      break;
  }
  v4 = -1;
  do
    ++v4;
  while ( a1[v4] );
  dword_140404A6C[129454557] = v4 + v1;
  return (int)v4 + v1 < i;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15F1D91E0: using guessed type unsigned int;
// 15F1D91E4: using guessed type unsigned int;

//----- (000000014006E530) ----------------------------------------------------
__int64            sub_14006E530(_BYTE *a1, _BYTE *a2, int a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  int v6; // eax
  _BYTE *v7; // r15
  __int64 v9; // r12
  int v10; // ecx
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // r8d
  int v15; // r14d
  unsigned __int64 v16; // rbx
  int v17; // edi
  int v18; // r15d
  unsigned __int64 v19; // rbx
  int v20; // edi
  __int64 v21; // rax
  int v22; // r8d
  __int64 v23; // xmm2_8
  __int64 v24; // xmm2_8
       char *v26; // r8
  int v27; // r8d
  int v28; // r8d
  __m128i *p_Src; // rdx
  int i; // ecx
  unsigned int v31; // eax
  __int64 v32; // [rsp+8h] [rbp-100h] BYREF
  __int64 v33; // [rsp+28h] [rbp-E0h]
  _BYTE *v34; // [rsp+30h] [rbp-D8h]
  unsigned char Src[1024]; // [rsp+38h] [rbp-D0h] BYREF
  char v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+438h] [rbp+330h]

  v4 = 0;
  v34 = a2;
  v5 = 0;
  v6 = a3;
  v7 = a2;
  LODWORD(v33) = a3;
  if ( *a2 )
  {
    v9 = a4 - 8;
    do
    {
      if ( v5 >= v6 )
        break;
      LOBYTE(v10) = v7[v4];
      if ( (_BYTE)v10 == 47 )
      {
        switch ( v7[v4 + 1] )
        {
          case '/':
            ++v4;
            a1[v5] = 47;
            goto LABEL_40;
          case 'I':
            v15 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            if ( v15 < 1000000 )
            {
              if ( v15 < 1000 )
              {
                sub_140158AB0(&Src, "%d", (unsigned int)v15);
                goto LABEL_26;
              }
              v18 = v15 / 1000;
              sub_140158AB0(&Src, "%d", (unsigned int)(v15 / 1000 % 1000));
            }
            else
            {
              sub_140158AB0(&Src, "%d", v15 / 1000000);
              v16 = -1;
              do
                ++v16;
              while ( Src[v16] );
              sub_1401FC920((__m128i *)&a1[v5], &Src, v16);
              v17 = v16 + v5;
              a1[v17] = 44;
              v18 = v15 / 1000;
              v5 = v17 + 1;
              sub_140158AB0(&Src, "%.3d", (unsigned int)(v15 / 1000 % 1000));
            }
            v19 = -1;
            do
              ++v19;
            while ( Src[v19] );
            sub_1401FC920((__m128i *)&a1[v5], &Src, v19);
            v20 = v19 + v5;
            v21 = v20;
            v5 = v20 + 1;
            a1[v21] = 44;
            LODWORD(v21) = 1000 * v18;
            v7 = v34;
            sub_140158AB0(&Src, "%.3d", (unsigned int)(v15 - v21));
LABEL_26:
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
LABEL_54:
            sub_1401FC920((__m128i *)&a1[v5], &Src, v12);
            v5 += v12;
            break;
          case 'L':
            v13 = *(_QWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(&Src, "%I64u", v13);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'b':
            v28 = *(_DWORD *)(v9 + 8);
            p_Src = (__m128i *)(void *)Src;
            v9 += 8;
            ++v4;
            for ( i = 0; i < 32; ++i )
            {
              p_Src = (__m128i *)((char *)p_Src + 1);
              v31 = 0x80000000 >> i;
              SR_VEC_LANES(128, p_Src[-1], i8)[15] = ((v31 & v28) != 0) + 48;
            }
            v36 = 0;
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'c':
            v10 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            if ( v10 )
              goto LABEL_39;
            break;
          case 'f':
            v23 = *(_QWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(&Src, "%.3f", v23, 0x140000000uLL);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'h':
            v24 = *(_QWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(&Src, "%.7f", v24, 0x140000000uLL);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'i':
            v14 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(&Src, "%d", v14);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'l':
            v11 = *(_QWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(&Src, "%I64d", v11);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 's':
            v26 = *(     char **)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(&Src, "%s", v26);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'u':
            v22 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(&Src, "%u", v22);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          case 'x':
            v27 = *(_DWORD *)(v9 + 8);
            v9 += 8;
            ++v4;
            sub_140158AB0(&Src, "%X", v27);
            v12 = -1;
            do
              ++v12;
            while ( Src[v12] );
            goto LABEL_54;
          default:
            break;
        }
      }
      else
      {
LABEL_39:
        a1[v5] = v10;
LABEL_40:
        ++v5;
      }
      ++v4;
      v6 = v33;
    }
    while ( v7[v4] );
    a1[v5] = 0;
  }
  else
  {
    *a1 = 0;
  }
  return v5;
}


//----- (000000014006EC40) ----------------------------------------------------
__int64            sub_14006EC40(float *a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm4_4
  float v5; // xmm2_4
  float v6; // xmm5_4
  float v7; // xmm3_4
  float v8; // xmm6_4
  float v9; // xmm7_4

  v4 = a4[1] - a2[1];
  v5 = a4[2] - a2[2];
  v6 = *a4 - *a2;
  v7 = a3[2] - a2[2];
  v8 = a3[1] - a2[1];
  v9 = *a3 - *a2;
  *a1 = (float)(v4 * v7) - (float)(v5 * v8);
  a1[2] = (float)(v6 * v8) - (float)(v4 * v9);
  a1[1] = (float)(v5 * v9) - (float)(v6 * v7);
  return sub_14007A240((__int64)a1, a1);
}


//----- (000000014006ECE0) ----------------------------------------------------
__int64            sub_14006ECE0(__int64 a1, __int64 a2, double a3)
{
  int v3; // ecx
  signed int i; // r9d
  char v5; // dl
  int v6; // r10d
  __int64 v7; // rdx
  char v8; // r8
  __int64 v10; // [rsp+0h] [rbp-448h] BYREF
  _BYTE v11[1024]; // [rsp+30h] [rbp-418h] BYREF
  __int64 v12; // [rsp+430h] [rbp-18h]

  v3 = dword_140404A6C[129454557];
  for ( i = dword_140404A6C[129454558]; v3 < (int)dword_140404A6C[129454558]; dword_140404A6C[129454557] = ++v3 )
  {
    v5 = *((_BYTE *)&dword_140404A6C[129454559] + v3);
    if ( v5 != 47 && v5 > 44 && v5 < 58 )
      break;
  }
  v6 = 0;
  if ( v3 < (int)dword_140404A6C[129454558] )
  {
    v7 = 0;
    do
    {
      if ( v7 >= 255 )
        break;
      v8 = *((_BYTE *)&dword_140404A6C[129454559] + v3);
      if ( (unsigned __int8)(v8 - 48) > 9u && (unsigned __int8)(v8 - 45) > 1u )
        break;
      ++v3;
      v11[v7++] = v8;
      dword_140404A6C[129454557] = v3;
      ++v6;
    }
    while ( v3 < i );
  }
  if ( (unsigned __int64)v6 >= 0x400 )
    sub_1401F8694();
  v11[v6] = 0;
  sub_14015B070((__int64)v11, "%f", a3);
  return sub_1401F8B20((unsigned __int64)&v10 ^ v12);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15F1D91E0: using guessed type unsigned int;
// 15F1D91E4: using guessed type unsigned int;

//----- (000000014006EDD0) ----------------------------------------------------
__int64            sub_14006EDD0()
{
  int v0; // ecx
  signed int i; // r9d
  char v2; // dl
  int v3; // r10d
  __int64 v4; // rdx
  char v5; // r8
  __int64 v7; // [rsp+0h] [rbp-448h] BYREF
  int v8; // [rsp+20h] [rbp-428h] BYREF
  _BYTE v9[1024]; // [rsp+30h] [rbp-418h] BYREF
  __int64 v10; // [rsp+430h] [rbp-18h]

  v0 = dword_140404A6C[129454557];
  for ( i = dword_140404A6C[129454558]; v0 < (int)dword_140404A6C[129454558]; dword_140404A6C[129454557] = ++v0 )
  {
    v2 = *((_BYTE *)&dword_140404A6C[129454559] + v0);
    if ( (unsigned __int8)(v2 - 48) <= 9u )
      break;
    if ( v2 == 45 )
      break;
  }
  v3 = 0;
  if ( v0 < (int)dword_140404A6C[129454558] )
  {
    v4 = 0;
    do
    {
      if ( v4 >= 255 )
        break;
      v5 = *((_BYTE *)&dword_140404A6C[129454559] + v0);
      if ( (unsigned __int8)(v5 - 48) > 9u && v5 != 45 )
        break;
      ++v0;
      v9[v4++] = v5;
      dword_140404A6C[129454557] = v0;
      ++v3;
    }
    while ( v0 < i );
  }
  if ( (unsigned __int64)v3 >= 0x400 )
    sub_1401F8694();
  v9[v3] = 0;
  sub_14015B070((__int64)(uintptr_t)v9, "%d", &v8);
  return v8; /* native MOV EAX,[RSP+20] */
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15F1D91E0: using guessed type unsigned int;
// 15F1D91E4: using guessed type unsigned int;

//----- (000000014006F060) ----------------------------------------------------
float            sub_14006F060(int a1, _BYTE *a2, float a3)
{
  float result; // xmm0_4
  _BYTE *v4; // r8
  __int64 v5; // rax

  result = 0.0;
  v4 = a2;
  if ( dword_140404A6C[3592 * a1 + 72777085] && *a2 )
  {
    do
    {
      if ( a2 - v4 >= 0xFFFF )
        break;
      v5 = (char)*a2++;
      result = result + (float)(a3 * *(float *)&dword_140404A6C[3592 * a1 + 72777093 + v5]);
    }
    while ( *a2 );
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014006F120) ----------------------------------------------------
// UI label copy helper. Copies text to widget label buffer and stops visible label at null or ## hidden-ID marker.
__int64            sub_14006F120(__int64 a1, char *a2)
{
  __int64 v3; // r8
  char v4; // al
  int v5; // edx
  _BYTE *v6; // rax
  __int64 v7; // r8
  char v8; // cl
  char v9; // cl
  char v10; // cl
  char v11; // cl

  v3 = a1 - (_QWORD)a2;
  do
  {
    v4 = *a2;
    a2[v3] = *a2;
    ++a2;
  }
  while ( v4 );
  v5 = 0;
  v6 = (_BYTE *)(a1 + 2);
  v7 = -2 - a1;
  do
  {
    v8 = *(v6 - 2);
    if ( !v8 || v8 == 35 && *(v6 - 1) == 35 )
      break;
    v9 = *(v6 - 1);
    ++v5;
    if ( !v9 || v9 == 35 && *v6 == 35 )
      break;
    ++v5;
    if ( !*v6 || *v6 == 35 && v6[1] == 35 )
      break;
    v10 = v6[1];
    ++v5;
    if ( !v10 || v10 == 35 && v6[2] == 35 )
      break;
    v11 = v6[2];
    ++v5;
    if ( !v11 || v11 == 35 && v6[3] == 35 )
      break;
    v6 += 5;
    ++v5;
  }
  while ( (__int64)&v6[v7] < 255 );
  *(_BYTE *)(v5 + a1) = 0;
  return v5;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;

//----- (000000014006F380) ----------------------------------------------------
__int64            sub_14006F380(unsigned __int8 *a1)
{
  unsigned int v2; // eax
  signed int v3; // eax
  signed int v4; // esi
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // esi
  int v9; // [rsp+68h] [rbp+10h]

  v2 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v3 = sub_140070380(
         v2,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v4 = v3;
  if ( v3 == -1 )
    return 0;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v6 = 122LL * v3;
  dword_140404A6C[70087065] = v3;
  dword_140404A6C[v6 + 70087115] = 0;
  sub_14006F120((__int64)&dword_140404A6C[v6 + 70087151], (char *)a1);
  v7 = 0;
  if ( !dword_140404A6C[70317817] && dword_140404A6C[70317856] && v4 == dword_140404A6C[70087109] )
    dword_140404A6C[v6 + 70087215] = 1;
  if ( dword_140404A6C[v6 + 70087215] )
  {
    v8 = sub_140071C20("Test4", 64.0, 64.0, 320.0, 0x43A00000u, 1095761920, 768);
    if ( (unsigned int)sr_DrawMenuButton("ADD 10") )
    {
      v7 = 10;
      dword_140404A6C[v6 + 70087215] = 0;
    }
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + 512.0;
    if ( (unsigned int)sr_DrawMenuButton("ADD 11") )
    {
      v7 = 11;
      dword_140404A6C[v6 + 70087215] = 0;
    }
    sub_140077230();
  }
  else
  {
    v8 = v9;
  }
  if ( v8 == -1 || dword_140404A6C[70087103] != v8 )
    dword_140404A6C[v6 + 70087215] = 0;
  return v7;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;

//----- (000000014006F750) ----------------------------------------------------
__int64            sub_14006F750(
        unsigned __int8 *a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned int v13; // eax

  v10 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + 6 + (dword_140404A6C[70087064] << 16));
  v11 = (int)sub_140070380(v10, a2, a3, a4, a5, dword_140404A6C[70087071]);
  v12 = 122 * v11;
  dword_140404A6C[v12 + 70087215] = a7;
  dword_140404A6C[v12 + 70087146] = a7;
  *(_QWORD *)&dword_140404A6C[v12 + 70087217] = a8;
  dword_140404A6C[v12 + 70087115] = 6;
  *(_QWORD *)&dword_140404A6C[v12 + 70087149] = a9;
  sub_14006F120((__int64)&dword_140404A6C[122 * v11 + 70087151], (char *)a1);
  v13 = dword_140404A6C[70087107];
  if ( dword_140404A6C[70087107] == -1 )
    v13 = v11;
  dword_140404A6C[70087107] = v13;
  (*(void (           **)(_QWORD, __int64))&dword_140404A6C[v12 + 70087217])(dword_140404A6C[v12 + 70087215], 1);
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F61108: using guessed type unsigned int;
// 150F6110C: using guessed type unsigned int;
// 150F61110: using guessed type unsigned int;
// 150F61124: using guessed type unsigned int;
// 151042810: using guessed type unsigned int;
// 160FC481C: using guessed type unsigned int;

//----- (000000014006FD10) ----------------------------------------------------
__int64            sub_14006FD10(unsigned __int8 *a1)
{
  unsigned int v2; // eax
  signed int v3; // eax
  unsigned int v4; // edi
  __int64 v6; // rbx

  v2 = sub_14006C670(a1, (dword_140404A6C[70087064] << 16) + (dword_140404A6C[70087046] << 8));
  v3 = sub_140070380(
         v2,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v4 = v3;
  if ( v3 == -1 )
    return 0;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v6 = 122LL * v3;
  dword_140404A6C[70087065] = v3;
  dword_140404A6C[v6 + 70087115] = 13;
  sub_14006F120((__int64)&dword_140404A6C[v6 + 70087151], (char *)a1);
  if ( !dword_140404A6C[70317817]
    && dword_140404A6C[70317856]
    && v4 == dword_140404A6C[70087109]
    && v4 == dword_140404A6C[70087106] )
  {
    dword_140404A6C[v6 + 70087215] ^= 1u;
  }
  if ( dword_140404A6C[v6 + 70087215] )
  {
    dword_140404A6C[70087064] = v4;
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067] + 16.0;
    if ( (int)dword_140404A6C[70087047] < 16 )
    {
      dword_140404A6C[dword_140404A6C[70087047] + 70087048] = v4;
      ++dword_140404A6C[70087047];
    }
  }
  return dword_140404A6C[v6 + 70087215];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61088: using guessed type unsigned int;
// 150F610CC: using guessed type unsigned int;
// 150F610D0: using guessed type unsigned int;

//----- (000000014006FEB0) ----------------------------------------------------
__int64            sub_14006FEB0(unsigned __int8 *a1, __int64 a2, float a3, float a4)
{
  unsigned int v6; // eax
  signed int v7; // eax
  int v8; // edi
  __int64 v9; // rbx
  __int64 result; // rax
  double v11; // xmm2_8

  v6 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v7 = sub_140070380(
         v6,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v8 = v7;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v9 = 122LL * v7;
  dword_140404A6C[70087065] = v7;
  *(float *)&dword_140404A6C[v9 + 70087219] = a3;
  *(float *)&dword_140404A6C[v9 + 70087220] = a4;
  dword_140404A6C[v9 + 70087115] = 4;
  *(_QWORD *)&dword_140404A6C[v9 + 70087217] = a2;
  dword_140404A6C[70318068] = 24;
  result = sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
  if ( v8 == dword_140404A6C[70087106] )
  {
    *(_QWORD *)&v11 = dword_140404A6C[468760126];
    *(float *)&v11 = *(float *)&dword_140404A6C[468760126] - *(float *)&dword_140404A6C[v9 + 70087135];
    return sub_140075A40(v8, *(float *)&dword_140404A6C[468760125] - *(float *)&dword_140404A6C[v9 + 70087134], v11);
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;
// 151042A3C: using guessed type unsigned int;

//----- (0000000140070200) ----------------------------------------------------
__int64            sub_140070200(unsigned __int8 *a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // eax
  signed int v7; // eax
  int v8; // edi
  __int64 v9; // rbx
  double v10; // xmm2_8

  v6 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v7 = sub_140070380(
         v6,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v8 = v7;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v9 = 122LL * v7;
  dword_140404A6C[70087065] = v7;
  dword_140404A6C[v9 + 70087115] = 3;
  *(_QWORD *)&dword_140404A6C[v9 + 70087215] = a2;
  dword_140404A6C[70318068] = a3;
  sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
  if ( v8 != dword_140404A6C[70087106] )
    return 0;
  *(_QWORD *)&v10 = dword_140404A6C[468760126];
  *(float *)&v10 = *(float *)&dword_140404A6C[468760126] - *(float *)&dword_140404A6C[v9 + 70087135];
  return sub_140075A40(v8, *(float *)&dword_140404A6C[468760125] - *(float *)&dword_140404A6C[v9 + 70087134], v10);
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;
// 151042A3C: using guessed type unsigned int;

//----- (0000000140070380) ----------------------------------------------------
// Immediate-mode widget allocator/layout helper. Reuses/allows up to 1024 widget slots, records local/screen rects, style/parent, and advances cursor by size + 4.
__int64            sub_140070380(unsigned int a1, float a2, float a3, float a4, unsigned int a5, unsigned int a6)
{
  char v6; // di
  float v7; // xmm6_4
  float v8; // xmm7_4
  signed int v9; // ebx
  signed int v10; // r8d
  unsigned int *v11; // rax
  int v13; // esi
  int i; // edx
  int v15; // ecx
  unsigned int *v16; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ecx

  v6 = dword_140404A6C[70087075];
  v7 = a2;
  v8 = a3;
  v9 = -1;
  v10 = (dword_140404A6C[70087075] >> 8) & 1;
  dword_140404A6C[70087075] = 0;
  v11 = &dword_140404A6C[70087114];
  v13 = 0;
  for ( i = 0; i < 1024; ++i )
  {
    v15 = *(v11 - 1);
    if ( v15 > v10 && v15 < 3 && *v11 == a1 )
    {
      v9 = i;
      v13 = *(v11 - 1);
    }
    v11 += 122;
  }
  if ( v9 == -1 )
  {
    v9 = 0;
    v16 = &dword_140404A6C[70087113];
    while ( *v16 )
    {
      ++v9;
      v16 += 122;
      if ( (__int64)v16 >= (__int64)&dword_140404A6C[70212041] )
        return 0xFFFFFFFFLL;
    }
    if ( v9 == -1 )
      return 0xFFFFFFFFLL;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[122 * v9 + 70087113]), 0, 0x1E8u);
  }
  if ( (v6 & 1) != 0 )
  {
    v7 = a2 + (float)(a4 * -0.5);
  }
  else if ( (v6 & 2) != 0 )
  {
    v7 = a2 - a4;
  }
  if ( (v6 & 4) != 0 )
  {
    v8 = a3 + (float)(*(float *)&a5 * -0.5);
  }
  else if ( (v6 & 8) != 0 )
  {
    v8 = a3 - *(float *)&a5;
  }
  v18 = 122LL * v9;
  dword_140404A6C[v18 + 70087113] = 3;
  dword_140404A6C[v18 + 70087114] = a1;
  dword_140404A6C[v18 + 70087118] = 1;
  dword_140404A6C[v18 + 70087123] = dword_140404A6C[70087066];
  dword_140404A6C[v18 + 70087122] = dword_140404A6C[70087046];
  *(float *)&dword_140404A6C[v18 + 70087125] = v7;
  *(float *)&dword_140404A6C[v18 + 70087126] = v8;
  *(float *)&dword_140404A6C[v18 + 70087127] = a4;
  dword_140404A6C[v18 + 70087128] = a5;
  *(float *)&dword_140404A6C[v18 + 70087134] = v7;
  *(float *)&dword_140404A6C[v18 + 70087135] = v8;
  *(float *)&dword_140404A6C[v18 + 70087136] = a4;
  dword_140404A6C[v18 + 70087137] = a5;
  if ( dword_140404A6C[70087046] != -1 )
  {
    *(float *)&dword_140404A6C[v18 + 70087134] = v7
                                               + *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290981];
    *(float *)&dword_140404A6C[v18 + 70087135] = (float)(*(float *)&dword_140404A6C[98 * dword_140404A6C[70087046]
                                                                                  + 70290982]
                                                       - *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046]
                                                                                  + 70290905])
                                               + v8;
  }
  v19 = 122LL * v9;
  dword_140404A6C[v19 + 70087129] = dword_140404A6C[70087087];
  dword_140404A6C[v19 + 70087130] = dword_140404A6C[70087088];
  dword_140404A6C[v19 + 70087131] = dword_140404A6C[70087089];
  dword_140404A6C[v19 + 70087132] = dword_140404A6C[70087090];
  dword_140404A6C[v18 + 70087133] = a6;
  if ( dword_140404A6C[70087073] )
  {
    dword_140404A6C[70087106] = v9;
    dword_140404A6C[70087073] = 0;
  }
  if ( dword_140404A6C[70087076] )
  {
    dword_140404A6C[v18 + 70087119] = 1;
    dword_140404A6C[70087076] = 0;
  }
  else
  {
    dword_140404A6C[v18 + 70087119] = 0;
  }
  if ( dword_140404A6C[70087074] )
  {
    dword_140404A6C[v18 + 70087120] = dword_140404A6C[70087074];
    if ( dword_140404A6C[70087074] - 1 <= 0x1FE
      && (dword_140404A6C[dword_140404A6C[70087074] + 70317269] == -1
       || dword_140404A6C[70087046] == dword_140404A6C[70087103]) )
    {
      dword_140404A6C[dword_140404A6C[70087074] + 70317269] = v9;
    }
  }
  else
  {
    dword_140404A6C[v18 + 70087120] = 0;
  }
  dword_140404A6C[70087074] = 0;
  dword_140404A6C[v18 + 70087124] = dword_140404A6C[70087077];
  dword_140404A6C[70087077] = 0;
  if ( *(_QWORD *)&dword_140404A6C[70087081] )
  {
    dword_140404A6C[v18 + 70087146] = dword_140404A6C[70087079];
    dword_140404A6C[v18 + 70087147] = dword_140404A6C[70087080];
    *(_QWORD *)&dword_140404A6C[v18 + 70087149] = *(_QWORD *)&dword_140404A6C[70087081];
  }
  *(_QWORD *)&dword_140404A6C[70087081] = 0;
  *(_QWORD *)&dword_140404A6C[v19 + 70087138] = -1;
  *(_QWORD *)&dword_140404A6C[v19 + 70087140] = -1;
  *(_QWORD *)&dword_140404A6C[v19 + 70087142] = -1;
  if ( dword_140404A6C[70326263] )
  {
    v20 = dword_140404A6C[70326520];
    if ( (int)dword_140404A6C[70326520] < 16 )
    {
      v21 = dword_140404A6C[70326521];
      if ( (int)dword_140404A6C[70326521] >= 16 )
        goto LABEL_43;
      dword_140404A6C[16 * dword_140404A6C[70326521] + 70326264 + dword_140404A6C[70326520]] = v9;
      v20 = dword_140404A6C[70326520];
    }
    v21 = dword_140404A6C[70326521];
LABEL_43:
    if ( dword_140404A6C[70087083] )
    {
      dword_140404A6C[70326520] = 0;
      dword_140404A6C[70326521] = v21 + 1;
    }
    else
    {
      dword_140404A6C[70326520] = v20 + 1;
    }
  }
  if ( dword_140404A6C[70087078] )
  {
    v22 = dword_140404A6C[70087111];
    if ( v13 <= 1 )
      v22 = v9;
    dword_140404A6C[70087111] = v22;
  }
  dword_140404A6C[70087078] = 0;
  return (unsigned int)v9;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61084: using guessed type unsigned int;
// 150F610D4: using guessed type unsigned int;
// 150F610F0: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F610F8: using guessed type unsigned int;
// 150F610FC: using guessed type unsigned int;
// 150F61100: using guessed type unsigned int;
// 150F61104: using guessed type unsigned int;
// 150F61108: using guessed type unsigned int;
// 150F6110C: using guessed type unsigned int;
// 150F61110: using guessed type unsigned int;
// 150F61128: using guessed type unsigned int;
// 150F6112C: using guessed type unsigned int;
// 150F61130: using guessed type unsigned int;
// 150F61134: using guessed type unsigned int;
// 150F61174: using guessed type unsigned int;
// 150F61188: using guessed type unsigned int;
// 15104AE4C: using guessed type unsigned int;
// 15104AE50: using guessed type unsigned int;

//----- (00000001400707C0) ----------------------------------------------------
__int64            sub_1400707C0(
        unsigned __int8 *a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v12; // ebp
  signed int v13; // eax
  float v14; // xmm2_4
  signed int v15; // esi
  __int64 v16; // rdi
  int v17; // eax
  unsigned int *v18; // rbx
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // r8d
  int v32; // eax
  signed int v33; // r8d
  signed int *v34; // rcx

  v12 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v13 = sub_140070380(
          v12,
          *(float *)&dword_140404A6C[70087067],
          *(float *)&dword_140404A6C[70087068],
          a2,
          LODWORD(a3),
          dword_140404A6C[70087071]);
  v14 = a3 + 4.0;
  v15 = v13;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + v14;
  }
  else
  {
    *(float *)&dword_140404A6C[70087086] = a3 + 4.0;
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067] + (float)(a2 + 4.0);
  }
  v16 = 122LL * v13;
  dword_140404A6C[70087065] = v13;
  dword_140404A6C[v16 + 70087215] = a6;
  *(_QWORD *)&dword_140404A6C[v16 + 70087225] = (uint64)(uintptr_t)(a7);
  dword_140404A6C[v16 + 70087115] = 8;
  dword_140404A6C[v16 + 70087222] = *a7;
  *(_QWORD *)&dword_140404A6C[v16 + 70087217] = a8;
  dword_140404A6C[v16 + 70087219] = a9;
  dword_140404A6C[v16 + 70087220] = a10;
  dword_140404A6C[v16 + 70087230] = 0;
  *(float *)&dword_140404A6C[v16 + 70087228] = a4;
  v17 = (int)(float)(a2 / a4);
  dword_140404A6C[v16 + 70087229] = a5;
  if ( v17 < 1 )
    v17 = 1;
  dword_140404A6C[v16 + 70087227] = v17;
  sub_14006F120((__int64)&dword_140404A6C[v16 + 70087151], (char *)a1);
  v18 = &dword_140404A6C[v16 + 70087232];
  v19 = (float)((int)(dword_140404A6C[v16 + 70087227] + a10 - 1) / (int)dword_140404A6C[v16 + 70087227])
      * (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087229]);
  if ( v19 <= a3 )
  {
    *v18 = 0;
    dword_140404A6C[v16 + 70087234] = 0;
  }
  else
  {
    v20 = v19 - a3;
    v21 = (float)(a3 * a3) / v19;
    v22 = *(float *)&dword_140404A6C[v16 + 70087125] + *(float *)&dword_140404A6C[v16 + 70087127];
    *(float *)&dword_140404A6C[v16 + 70087234] = v20;
    sub_140070FF0(
      v12,
      v22 - 16.0,
      *(float *)&dword_140404A6C[v16 + 70087126],
      16.0,
      LODWORD(a3),
      COERCE_UNSIGNED_INT(fmaxf(v21, 16.0)),
      (float *)&dword_140404A6C[v16 + 70087232],
      0.0,
      v20);
  }
  if ( v15 != dword_140404A6C[70087109] )
    goto LABEL_28;
  v23 = *(float *)v18;
  v24 = *(float *)&dword_140404A6C[468760126] - *(float *)&dword_140404A6C[v16 + 70087135];
  v25 = *(float *)&dword_140404A6C[468760125] - *(float *)&dword_140404A6C[v16 + 70087134];
  v26 = (float)(int)dword_140404A6C[137297772];
  dword_140404A6C[137297772] = 0;
  v27 = v23 - (float)(v26 * 16.0);
  if ( v27 < 0.0 )
    v27 = 0.0;
  v28 = *(float *)&dword_140404A6C[v16 + 70087234];
  *(float *)v18 = v27;
  if ( v27 > v28 )
  {
    *(float *)v18 = v28;
    v27 = v28;
  }
  v29 = 0;
  if ( (int)(float)(v25
                  / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087228])) >= 0 )
    v29 = (int)(float)(v25
                     / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087228]));
  v30 = dword_140404A6C[v16 + 70087227];
  v31 = v30 - 1;
  if ( v29 <= (int)(v30 - 1) )
    v31 = v29;
  v32 = 0;
  if ( (int)(float)((float)(v27 + v24)
                  / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087229])) >= 0 )
    v32 = (int)(float)((float)(v27 + v24)
                     / (float)(*(float *)&dword_140404A6C[v16 + 70087230] + *(float *)&dword_140404A6C[v16 + 70087229]));
  v33 = v30 * v32 + v31;
  if ( v33 > (int)(dword_140404A6C[v16 + 70087220] - 1) )
  {
LABEL_28:
    dword_140404A6C[v16 + 70087223] = -1;
    return 0;
  }
  dword_140404A6C[v16 + 70087223] = v33;
  if ( v33 == -1 || dword_140404A6C[70317817] || !dword_140404A6C[70317856] || v15 != dword_140404A6C[70087106] )
    return 0;
  v34 = *(signed int **)&dword_140404A6C[v16 + 70087225];
  dword_140404A6C[v16 + 70087222] = v33;
  if ( v34 )
    *v34 = v33;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;
// 160FC481C: using guessed type unsigned int;

//----- (0000000140070B90) ----------------------------------------------------
__int64 sub_140070B90()
{
  dword_140404A6C[70326263] = 1;
  sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[70326264]), 0xFFu, 0x400u);
  *(_QWORD *)&dword_140404A6C[70326520] = 0;
  return 0;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15104AA48: using guessed type unsigned int;
// 15104AE4C: using guessed type unsigned int;

//----- (0000000140070BD0) ----------------------------------------------------
__int64            sub_140070BD0(int a1, unsigned int a2,      char *a3,      char *a4)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rbx
  char *v9; // rdx
  unsigned int *v10; // rcx
  char v11; // al
  int v12; // eax
  char *v13; // rcx
  __int64 v14; // rax
  unsigned int *v15; // rcx
  unsigned int *v16; // rdx
  char v17; // al
  unsigned int v18; // eax
  __int64 v20; // [rsp+0h] [rbp-5D8h] BYREF
  _BYTE v21[36]; // [rsp+50h] [rbp-588h] BYREF
  char v22; // [rsp+74h] [rbp-564h] BYREF
  int v23; // [rsp+180h] [rbp-458h] BYREF
  char v24; // [rsp+184h] [rbp-454h]
  __int64 v25; // [rsp+580h] [rbp-58h]

  v4 = 517LL * a1;
  if ( (int)dword_140404A6C[v4 + 70315979] <= 1 && a2 <= 1 )
  {
    sub_140158AB0(&v23, "%s/%s", a3, a4);
    v6 = sub_14023A198(&v23, (__int64)v21);
    v7 = 0;
    v8 = v6;
    dword_140404A6C[133657101] = 0;
    if ( (_DWORD)v6 != -1 )
    {
      do
      {
        if ( v7 >= 1024 )
          break;
        if ( (v21[0] & 0x10) == 0 )
        {
          v9 = &v22;
          v10 = &dword_140404A6C[32 * (__int64)v7 + 133657102];
          do
          {
            v11 = *v9++;
            *(_BYTE *)v10 = v11;
            v10 = (unsigned int *)((char *)v10 + 1);
          }
          while ( v11 );
          ++dword_140404A6C[133657101];
        }
        v12 = sub_14023A5C4(v8, (__int64)v21);
        v7 = dword_140404A6C[133657101];
      }
      while ( v12 != -1 );
    }
    LOBYTE(dword_140404A6C[32 * (__int64)v7 + 133657102]) = 0;
    sub_140239CCC(v8);
    sub_14023AE00(
      (unsigned __int64)&dword_140404A6C[133657102],
      (int)dword_140404A6C[133657101],
      0x80u,
      (int (           *)(unsigned __int64, _BYTE *))sub_14006C980);
    LOBYTE(dword_140404A6C[v4 + 70315984]) = 0;
    LOBYTE(dword_140404A6C[v4 + 70316240]) = 0;
    *(_QWORD *)&dword_140404A6C[v4 + 70315982] = -1;
  }
  dword_140404A6C[v4 + 70315979] = 3;
  dword_140404A6C[v4 + 70315980] = a2;
  if ( a2 <= 1 )
  {
    v13 = "Open File";
    if ( a2 )
      v13 = "Save File";
    dword_140404A6C[v4 + 70315981] = sub_140071C20(
                                       (unsigned __int8 *)v13,
                                       (float)(*(float *)&dword_140404A6C[438291414] * 0.5) - 256.0,
                                       (float)(*(float *)&dword_140404A6C[438291415] * 0.5) - 160.0,
                                       512.0,
                                       0x43A00000u,
                                       1095761920,
                                       256);
    sub_1400707C0(
      "Files",
      256.0,
      128.0,
      256.0,
      0x41A00000u,
      1u,
      &dword_140404A6C[v4 + 70315982],
      (__int64)&dword_140404A6C[133657102],
      0x80u,
      dword_140404A6C[133657101]);
    v14 = (int)dword_140404A6C[v4 + 70315982];
    if ( (_DWORD)v14 != dword_140404A6C[v4 + 70315983] && (int)v14 >= 0 && (int)v14 < (int)dword_140404A6C[133657101] )
    {
      v15 = &dword_140404A6C[32 * v14 + 133657102];
      v16 = &dword_140404A6C[v4 + 70315984];
      do
      {
        v17 = *(_BYTE *)v15;
        v15 = (unsigned int *)((char *)v15 + 1);
        *(_BYTE *)v16 = v17;
        v16 = (unsigned int *)((char *)v16 + 1);
      }
      while ( v17 );
    }
    sub_140070200("Filename", (__int64)&dword_140404A6C[v4 + 70315984], 0x100u);
    dword_140404A6C[70087067] = 1134690304;
    dword_140404A6C[70087068] = 1082130432;
    if ( (int)dword_140404A6C[70317962] < 16 )
    {
      dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
      dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
    }
    dword_140404A6C[70087070] = 1103101952;
    dword_140404A6C[70087069] = 1124073472;
    if ( a2 )
      v23 = 1702256979;
    else
      v23 = 1852141647;
    v24 = 0;
    if ( (unsigned int)sr_DrawMenuButton((unsigned __int8 *)&v23) )
      sub_140158AB0(&dword_140404A6C[v4 + 70316240], "%s", (     char *)&dword_140404A6C[v4 + 70315984]);
    dword_140404A6C[70087074] = 41;
    sr_DrawMenuButton("Cancel");
    v18 = dword_140404A6C[70317962];
    if ( (int)dword_140404A6C[70317962] > 0 )
    {
      --dword_140404A6C[70317962];
      dword_140404A6C[70087069] = dword_140404A6C[2 * (v18 - 1) + 70317963];
      dword_140404A6C[70087070] = dword_140404A6C[2 * (v18 - 1) + 70317964];
    }
  }
  dword_140404A6C[v4 + 70315983] = dword_140404A6C[v4 + 70315982];
  sub_140077230();
  return sub_1401F8B20((unsigned __int64)&v20 ^ v25);
}

// 140239CCC: using guessed type __int64 __fastcall sub_140239CCC(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 1601E12A0: using guessed type unsigned int;

//----- (0000000140070FF0) ----------------------------------------------------
__int64            sub_140070FF0(
        int a1,
        float a2,
        float a3,
        float a4,
        unsigned int a5,
        unsigned int a6,
        float *a7,
        float a8,
        float a9)
{
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rax
  float v12; // xmm1_4

  v9 = sub_14006C670("Scrollbar", a1 + (dword_140404A6C[70087064] << 16) + (dword_140404A6C[70087046] << 8));
  v10 = sub_140070380(v9, a2, a3, a4, a5, 0);
  v11 = 122LL * (int)v10;
  *(float *)&dword_140404A6C[v11 + 70087220] = a8;
  *(float *)&dword_140404A6C[v11 + 70087221] = a9;
  dword_140404A6C[v11 + 70087219] = a6;
  dword_140404A6C[v11 + 70087115] = 7;
  *(_QWORD *)&dword_140404A6C[v11 + 70087217] = (uint64)(uintptr_t)(a7);
  if ( dword_140404A6C[70317817] || (dword_140404A6C[v11 + 70087215] = 0, dword_140404A6C[70317817]) )
  {
    if ( !dword_140404A6C[70317856] )
    {
      if ( v10 != dword_140404A6C[70087109] )
        goto LABEL_12;
      dword_140404A6C[v11 + 70087215] = 1;
    }
  }
  if ( v10 == dword_140404A6C[70087109] )
  {
    v12 = *a7 - (float)((float)(int)dword_140404A6C[137297772] * 16.0);
    if ( v12 < a8 )
      v12 = a8;
    if ( v12 > a9 )
      v12 = a9;
    *a7 = v12;
  }
LABEL_12:
  if ( dword_140404A6C[v11 + 70087215] )
    **(float **)&dword_140404A6C[v11 + 70087217] = fminf(
                                                     fmaxf(
                                                       (float)((float)((float)(*(float *)&dword_140404A6C[468760126]
                                                                             - *(float *)&dword_140404A6C[v11 + 70087135])
                                                                     - (float)(*(float *)&dword_140404A6C[v11 + 70087219]
                                                                             * 0.5))
                                                             / (float)(*(float *)&dword_140404A6C[v11 + 70087128]
                                                                     - *(float *)&dword_140404A6C[v11 + 70087219]))
                                                     * (float)(*(float *)&dword_140404A6C[v11 + 70087221]
                                                             - *(float *)&dword_140404A6C[v11 + 70087220]),
                                                       *(float *)&dword_140404A6C[v11 + 70087220]),
                                                     *(float *)&dword_140404A6C[v11 + 70087221]);
  return v10;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (00000001400711D0) ----------------------------------------------------
__int64            sub_1400711D0(unsigned __int8 *a1, float *a2, float a3, float a4, float a5)
{
  unsigned int v8; // eax
  signed int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __m128 v12; // xmm2
  __m128d v13; // xmm1
  int v14; // ecx
  float v15; // xmm2_4

  v8 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v9 = sub_140070380(
         v8,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v10 = v9;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v11 = 122LL * v9;
  dword_140404A6C[70087065] = v9;
  dword_140404A6C[v11 + 70087115] = 12;
  sub_14006F120((__int64)&dword_140404A6C[v11 + 70087151], (char *)a1);
  *(float *)&dword_140404A6C[v11 + 70087219] = a5;
  *(float *)&dword_140404A6C[v11 + 70087217] = a3;
  *(float *)&dword_140404A6C[v11 + 70087218] = a4;
  *(_QWORD *)&dword_140404A6C[v11 + 70087215] = (uint64)(uintptr_t)(a2);
  dword_140404A6C[v11 + 70087220] = 1098907648;
  if ( v10 == dword_140404A6C[70087106] )
  {
    if ( dword_140404A6C[70317817] )
    {
      v12 = ((__m128)_mm_cvtsi64_si128((long long)(((__m128)_mm_cvtsi32_si128((int)(dword_140404A6C)))[468760125])));
      SR_VEC_LANES(128, v12, f32)[0] = (float)((float)((float)(*(float *)&dword_140404A6C[468760125]
                                              - *(float *)&dword_140404A6C[v11 + 70087134])
                                      - 8.0)
                              / (float)(*(float *)&dword_140404A6C[v11 + 70087127] - 16.0))
                      * fmaxf(a4 - a3, 0.0);
      if ( LOBYTE(dword_140404A6C[70317069]) && a5 != 0.0 )
      {
        SR_VEC_LANES(128, v12, f32)[0] = (float)(SR_VEC_LANES(128, v12, f32)[0] / a5) + 0.5;
        v13 = _mm_cvtps_pd(v12);
        v14 = (int)SR_VEC_LANES(128, v13, f64)[0];
        if ( (double)v14 != SR_VEC_LANES(128, v13, f64)[0] )
          SR_VEC_LANES(128, v13, f64)[0] = (double)(v14 - (_mm_movemask_pd(_mm_unpacklo_pd(v13, v13)) & 1));
        SR_VEC_LANES(128, v12, f32)[0] = SR_VEC_LANES(128, v13, f64)[0] * a5;
      }
      v15 = fmaxf(SR_VEC_LANES(128, v12, f32)[0] + a3, a3);
      if ( v15 > a4 )
        v15 = a4;
      *a2 = v15;
    }
    else
    {
      dword_140404A6C[v11 + 70087116] = 0;
    }
  }
  return v10;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;

//----- (0000000140071640) ----------------------------------------------------
void            sub_140071640(char *a1)
{
  char *v2; // rdx
  unsigned int *v3; // rcx
  char v4; // al

  if ( (int)dword_140404A6C[70212041] < 1024 )
  {
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212043] = dword_140404A6C[70087046];
    v2 = a1;
    v3 = &dword_140404A6C[77 * dword_140404A6C[70212041] + 70212055];
    do
    {
      v4 = *v2++;
      *(_BYTE *)v3 = v4;
      v3 = (unsigned int *)((char *)v3 + 1);
    }
    while ( v4 );
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212042] = dword_140404A6C[70087066];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212044] = dword_140404A6C[70087067];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212045] = dword_140404A6C[70087068];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212050] = dword_140404A6C[70087071];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051] = dword_140404A6C[70087067];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052] = dword_140404A6C[70087068];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212053] = dword_140404A6C[70087071];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212054] = dword_140404A6C[70087071];
    if ( dword_140404A6C[70087046] != -1 )
    {
      *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051] = *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290981]
                                                                            + *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051];
      *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052] = (float)(*(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290982]
                                                                                    - *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290905])
                                                                            + *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052];
    }
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212046] = dword_140404A6C[70087087];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212047] = dword_140404A6C[70087088];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212048] = dword_140404A6C[70087089];
    dword_140404A6C[77 * dword_140404A6C[70212041]++ + 70212049] = dword_140404A6C[70087090];
    if ( dword_140404A6C[70087083] )
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                           + (float)(*(float *)&dword_140404A6C[70087071] + 4.0);
    else
      *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                           + (float)(sub_14006F060(
                                                       dword_140404A6C[70087066],
                                                       a1,
                                                       *(float *)&dword_140404A6C[70087071])
                                                   + 4.0);
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;

//----- (0000000140071AA0) ----------------------------------------------------
__int64            sub_140071AA0(unsigned __int8 *a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v6; // eax
  signed int v7; // eax
  signed int v8; // edi
  __int64 v9; // rbx

  v6 = sub_14006C670(a1, (dword_140404A6C[70087046] << 8) + (dword_140404A6C[70087064] << 16));
  v7 = sub_140070380(
         v6,
         *(float *)&dword_140404A6C[70087067],
         *(float *)&dword_140404A6C[70087068],
         *(float *)&dword_140404A6C[70087069],
         dword_140404A6C[70087070],
         dword_140404A6C[70087071]);
  v8 = v7;
  if ( v7 == -1 )
    return 0;
  if ( dword_140404A6C[70087083] )
  {
    *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068]
                                         + (float)(*(float *)&dword_140404A6C[70087070] + 4.0);
  }
  else
  {
    *(float *)&dword_140404A6C[70087067] = *(float *)&dword_140404A6C[70087067]
                                         + (float)(*(float *)&dword_140404A6C[70087069] + 4.0);
    *(float *)&dword_140404A6C[70087086] = *(float *)&dword_140404A6C[70087070] + 4.0;
  }
  v9 = 122LL * v7;
  dword_140404A6C[70087065] = v7;
  dword_140404A6C[v9 + 70087115] = 1;
  sub_14006F120((__int64)&dword_140404A6C[v9 + 70087151], (char *)a1);
  *(_QWORD *)&dword_140404A6C[v9 + 70087215] = (uint64)(uintptr_t)(a2);
  dword_140404A6C[v9 + 70087217] = a3;
  if ( dword_140404A6C[70317817]
    || !dword_140404A6C[70317856]
    || v8 != dword_140404A6C[70087109]
    || v8 != dword_140404A6C[70087106] )
  {
    return 0;
  }
  *a2 ^= a3;
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D0: using guessed type unsigned int;

//----- (0000000140071C20) ----------------------------------------------------
__int64            sub_140071C20(unsigned __int8 *a1, float a2, float a3, float a4, float a5, int a6, __int16 a7)
{
  __int64 v7; // r15
  float v8; // xmm6_4
  float v9; // xmm7_4
  unsigned __int8 *v10; // rdi
  unsigned int v11; // r12d
  unsigned int *v12; // rdx
  int v13; // r8d
  signed int v14; // ebx
  BOOL v15; // edx
  __int64 v16; // rbp
  __int64 v17; // r13
  unsigned int *v18; // rax
  __int64 v20; // rsi
  char *v21; // rcx
  unsigned __int8 v22; // al
  int v23; // edx
  _BYTE *v24; // rcx
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int *v28; // rcx
  __int64 v29; // r9
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  unsigned int v34; // xmm5_4
  unsigned int v35; // xmm7_4
  float v36; // xmm4_4
  unsigned int v37; // xmm1_4
  float v38; // xmm6_4
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // xmm0_4
  unsigned int v42; // xmm0_4
  float v43; // xmm5_4
  float v44; // xmm5_4
  float v45; // xmm7_4
  float v46; // xmm7_4
  float v47; // xmm0_4
  float v48; // xmm2_4

  v7 = (int)dword_140404A6C[70087046];
  v8 = a2;
  v9 = a3;
  v10 = a1;
  v11 = sub_14006C670(a1, 1u);
  v12 = &dword_140404A6C[70290892];
  v13 = 0;
  v14 = -1;
  do
  {
    if ( *(v12 - 1) - 1 <= 1 && *v12 == v11 )
      v14 = v13;
    ++v13;
    v12 += 98;
  }
  while ( v13 < 256 );
  v15 = 0;
  if ( v14 == -1 )
  {
    v14 = 0;
    v18 = &dword_140404A6C[70290891];
    while ( *v18 )
    {
      ++v14;
      v18 += 98;
      if ( (__int64)v18 >= (__int64)&dword_140404A6C[70315979] )
        return 0xFFFFFFFFLL;
    }
    if ( v14 == -1 )
      return 0xFFFFFFFFLL;
    v16 = v14;
    v17 = v14;
    goto LABEL_18;
  }
  if ( (a7 & 0x100) != 0 )
    v15 = dword_140404A6C[98 * v14 + 70290891] == 1;
  v16 = v14;
  v17 = v14;
  if ( v15 )
  {
LABEL_18:
    if ( (a7 & 1) != 0 )
    {
      v8 = a2 + (float)(a4 * -0.5);
    }
    else if ( (a7 & 2) != 0 )
    {
      v8 = a2 - a4;
    }
    if ( (a7 & 4) != 0 )
    {
      v9 = a3 + (float)(a5 * -0.5);
    }
    else if ( (a7 & 8) != 0 )
    {
      v9 = a3 - a5;
    }
    v20 = 98 * v17;
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[98 * v17 + 70290891]), 0, 0x188u);
    *(float *)&dword_140404A6C[v20 + 70290899] = a5;
    *(float *)&dword_140404A6C[v20 + 70290896] = v8;
    *(float *)&dword_140404A6C[v20 + 70290897] = v9;
    *(float *)&dword_140404A6C[v20 + 70290898] = a4;
    dword_140404A6C[v20 + 70290901] = 1101004800;
    if ( (a7 & 0x200) != 0 )
    {
      dword_140404A6C[v20 + 70290901] = 0;
      dword_140404A6C[v20 + 70290972] = 1;
    }
    dword_140404A6C[v20 + 70290900] = 0x40000000;
    v21 = (char *)&dword_140404A6C[70087029] + v20 * 4 - (_QWORD)v10;
    do
    {
      v22 = *v10;
      v10[(_QWORD)v21 + 815516] = *v10;
      ++v10;
    }
    while ( v22 );
    v23 = 0;
    v24 = (char *)&dword_140404A6C[v20 + 70290908] + 1;
    do
    {
      v25 = *(v24 - 1);
      if ( !v25 || v25 == 35 && *v24 == 35 )
        break;
      ++v24;
      ++v23;
    }
    while ( (intptr_t)((uintptr_t)(v24) - (uintptr_t)(((char *)&dword_140404A6C[v20 + 70290908] + 1))) < 255 );
    *((_BYTE *)&dword_140404A6C[v20 + 70290908] + v23) = 0;
  }
  v26 = 98 * v17;
  if ( (int)dword_140404A6C[98 * v17 + 70290891] <= 1 )
  {
    v27 = 0;
    v28 = &dword_140404A6C[70290895];
    v29 = 256;
    do
    {
      if ( (int)*(v28 - 4) >= 2 && v27 != v16 && *(v28 - 2) == (_DWORD)v7 && (int)*v28 < 256 )
        ++*v28;
      ++v27;
      v28 += 98;
      --v29;
    }
    while ( v29 );
    dword_140404A6C[v26 + 70290895] = 0;
    dword_140404A6C[v26 + 70290894] = dword_140404A6C[70087103];
    dword_140404A6C[70087103] = v14;
  }
  dword_140404A6C[v26 + 70290891] = 3;
  dword_140404A6C[v26 + 70290892] = v11;
  dword_140404A6C[v26 + 70290893] = v7;
  if ( dword_140404A6C[70317860] == v14 )
  {
    if ( dword_140404A6C[70317859] )
    {
      if ( dword_140404A6C[70317859] == 1 )
      {
        v32 = (float)(*(float *)&dword_140404A6C[70317781] - *(float *)&dword_140404A6C[70317862])
            - *(float *)&dword_140404A6C[v26 + 70290973];
        *(float *)&dword_140404A6C[v26 + 70290898] = v32;
        v33 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[70317863];
        *(float *)&dword_140404A6C[v26 + 70290898] = fmaxf(v32, 64.0);
        *(float *)&dword_140404A6C[v26 + 70290899] = fmaxf(v33 - *(float *)&dword_140404A6C[v26 + 70290974], 64.0);
      }
    }
    else
    {
      v30 = *(float *)&dword_140404A6C[70317781] - *(float *)&dword_140404A6C[70317862];
      *(float *)&dword_140404A6C[v26 + 70290896] = *(float *)&dword_140404A6C[70317781]
                                                 - *(float *)&dword_140404A6C[70317862];
      v31 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[70317863];
      *(float *)&dword_140404A6C[v26 + 70290896] = fmaxf(v30, 4.0);
      *(float *)&dword_140404A6C[v26 + 70290897] = fmaxf(v31, 4.0);
    }
  }
  v34 = dword_140404A6C[v26 + 70290896];
  v35 = dword_140404A6C[v26 + 70290897];
  if ( (_DWORD)v7 != -1 )
  {
    *(float *)&v34 = *(float *)&v34 + *(float *)&dword_140404A6C[98 * v7 + 70290981];
    *(float *)&v35 = (float)(*(float *)&dword_140404A6C[98 * v7 + 70290982]
                           - *(float *)&dword_140404A6C[98 * v7 + 70290905])
                   + *(float *)&v35;
  }
  v36 = *(float *)&dword_140404A6C[v26 + 70290900];
  v37 = dword_140404A6C[v26 + 70290901];
  v38 = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290973] = v34;
  v39 = dword_140404A6C[v26 + 70290898];
  dword_140404A6C[v26 + 70290974] = v35;
  dword_140404A6C[v26 + 70290975] = v39;
  v40 = dword_140404A6C[v26 + 70290899];
  *(float *)&dword_140404A6C[v26 + 70290977] = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290976] = v40;
  *(float *)&v41 = *(float *)&dword_140404A6C[v26 + 70290898] - (float)(v36 + v36);
  *(float *)&dword_140404A6C[v26 + 70290978] = *(float *)&v35 + v36;
  dword_140404A6C[v26 + 70290980] = v37;
  *(float *)&dword_140404A6C[v26 + 70290981] = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290979] = v41;
  *(float *)&v42 = *(float *)&dword_140404A6C[v26 + 70290898] - (float)(v36 + v36);
  *(float *)&dword_140404A6C[v26 + 70290982] = (float)(*(float *)&v35 + v36) + *(float *)&v37;
  dword_140404A6C[v26 + 70290983] = v42;
  *(float *)&dword_140404A6C[v26 + 70290984] = (float)(*(float *)&dword_140404A6C[v26 + 70290899] - (float)(v36 + v36))
                                             - *(float *)&v37;
  v43 = (float)(*(float *)&v34 + *(float *)&dword_140404A6C[v26 + 70290898]) - 16.0;
  *(float *)&dword_140404A6C[v26 + 70290987] = v36 + 16.0;
  v44 = v43 - v36;
  *(float *)&dword_140404A6C[v26 + 70290985] = v44;
  v45 = *(float *)&v35 + *(float *)&dword_140404A6C[v26 + 70290899];
  *(float *)&dword_140404A6C[v26 + 70290988] = v36 + 16.0;
  v46 = (float)(v45 - 16.0) - v36;
  *(float *)&dword_140404A6C[v26 + 70290986] = v46;
  if ( dword_140404A6C[70087105] != v14 || !dword_140404A6C[70317817] || dword_140404A6C[70317856] )
    goto LABEL_66;
  if ( *(float *)&dword_140404A6C[70317781] >= v38
    && *(float *)&dword_140404A6C[70317781] < (float)(v38 + *(float *)&dword_140404A6C[v26 + 70290979]) )
  {
    v47 = *(float *)&dword_140404A6C[v26 + 70290978];
    if ( *(float *)&dword_140404A6C[70317782] >= v47
      && *(float *)&dword_140404A6C[70317782] < (float)(v47 + *(float *)&dword_140404A6C[v26 + 70290980]) )
    {
      dword_140404A6C[70317859] = 0;
      dword_140404A6C[70317860] = v14;
      *(float *)&dword_140404A6C[70317862] = *(float *)&dword_140404A6C[70317781]
                                           - *(float *)&dword_140404A6C[v26 + 70290896];
      v48 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[v26 + 70290897];
LABEL_65:
      *(float *)&dword_140404A6C[70317863] = v48;
      goto LABEL_66;
    }
  }
  if ( *(float *)&dword_140404A6C[70317781] >= v44
    && *(float *)&dword_140404A6C[70317781] < (float)(v44 + *(float *)&dword_140404A6C[v26 + 70290987])
    && *(float *)&dword_140404A6C[70317782] >= v46
    && *(float *)&dword_140404A6C[70317782] < (float)(v46 + *(float *)&dword_140404A6C[v26 + 70290988]) )
  {
    dword_140404A6C[70317859] = 1;
    dword_140404A6C[70317860] = v14;
    *(float *)&dword_140404A6C[70317862] = *(float *)&dword_140404A6C[70317781]
                                         - (float)(*(float *)&dword_140404A6C[v26 + 70290985]
                                                 + *(float *)&dword_140404A6C[v26 + 70290987]);
    v48 = *(float *)&dword_140404A6C[70317782]
        - (float)(*(float *)&dword_140404A6C[v26 + 70290988] + *(float *)&dword_140404A6C[v26 + 70290986]);
    goto LABEL_65;
  }
LABEL_66:
  dword_140404A6C[70087046] = v14;
  if ( (int)dword_140404A6C[70087029] < 16 )
  {
    dword_140404A6C[dword_140404A6C[70087029] + 70087030] = v14;
    ++dword_140404A6C[70087029];
  }
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1082130432;
  return (unsigned int)v14;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61040: using guessed type int[];
// 150F61084: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F61168: using guessed type unsigned int;
// 1510426F8: using guessed type unsigned int;
// 1510426FC: using guessed type unsigned int;
// 151042708: using guessed type unsigned int;

//----- (00000001400722C0) ----------------------------------------------------
__int64 sub_1400722C0()
{
  signed int v0; // r11d
  unsigned __int64 v1; // r9
  int v2; // ebp
  signed int v3; // ebx
  unsigned int v4; // r14d
  signed int v5; // edx
  __int64 v6; // rax
  unsigned int *v7; // r8
  signed int v8; // r10d
  unsigned int *v9; // rsi
  unsigned int *v10; // rdi
  signed int v11; // eax
  unsigned __int64 v12; // rcx
  char v13; // al
  __int64 result; // rax

  v0 = dword_140404A6C[70318066];
  v1 = -1;
  v2 = 0;
  v3 = dword_140404A6C[70318066];
  v4 = 0;
  v5 = 0;
  v6 = -1;
  do
    ++v6;
  while ( *((_BYTE *)&dword_140404A6C[70318069] + v6) );
  v7 = &dword_140404A6C[70322165];
  if ( v6 )
  {
    v8 = dword_140404A6C[70318065];
    v9 = &dword_140404A6C[70318069];
    v10 = &dword_140404A6C[70322165];
    do
    {
      if ( v5 < v8 )
      {
        if ( v5 < v0 )
          goto LABEL_13;
      }
      else if ( v5 < v0 )
      {
        goto LABEL_10;
      }
      if ( v5 < v8 )
      {
LABEL_10:
        v11 = v5;
        v4 = 1;
        if ( v3 <= v5 )
          v11 = v3;
        v3 = v11;
        goto LABEL_14;
      }
LABEL_13:
      ++v2;
      *(_BYTE *)v10 = *(_BYTE *)v9;
      v10 = (unsigned int *)((char *)v10 + 1);
      v0 = dword_140404A6C[70318066];
      v8 = dword_140404A6C[70318065];
LABEL_14:
      ++v5;
      v12 = -1;
      v9 = (unsigned int *)((char *)v9 + 1);
      do
        ++v12;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v12) );
    }
    while ( v5 < v12 );
  }
  *((_BYTE *)&dword_140404A6C[70322165] + v2) = 0;
  do
  {
    v13 = *(_BYTE *)v7;
    *((_BYTE *)v7 - 0x4000) = *(_BYTE *)v7;
    v7 = (unsigned int *)((char *)v7 + 1);
  }
  while ( v13 );
  dword_140404A6C[70318066] = v3;
  do
    ++v1;
  while ( *((_BYTE *)&dword_140404A6C[70318069] + v1) );
  result = v4;
  if ( v3 > v1 )
    v3 = v1;
  dword_140404A6C[70318066] = v3;
  dword_140404A6C[70318065] = v3;
  return result;
}

// 14007272C: variable 'v26' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150FDB190: using guessed type unsigned int;
// 15104270C: using guessed type unsigned int;
// 151042A1C: using guessed type unsigned int;
// 151042A24: using guessed type unsigned int;
// 151042A28: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;
// 1A8BF79C4: using guessed type unsigned int;
// 1A8BF79C8: using guessed type unsigned int;

//----- (0000000140072760) ----------------------------------------------------
double sub_140072760(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned background=1059061760,inner=0;
  unsigned flags=a1==dword_140404A6C[70087109];
  if(flags)inner=1056964608;
  if(a1==dword_140404A6C[70087111]){background=1063256064;inner=1056964608;}
  if(dword_140404A6C[index+70087119]){background=1048576000;inner=0;flags|=8;}
  if(dword_140404A6C[index+70087115]==2 && **(_DWORD **)&dword_140404A6C[index+70087215]==dword_140404A6C[index+70087217]){inner=1052770304;flags|=4;}
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,flags);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*dword_140404A6C[438291413]+72777086]);
  }else{
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,background,background,background,1065353216);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,inner,inner,inner,1065353216);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width*0.5f,y+height*0.5f,*(float *)&dword_140404A6C[70087071],69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* callers ignore the legacy export result; native returns void */
}


//----- (00000001400729D0) ----------------------------------------------------
double            sub_1400729D0(int a1, double a2, float a3)
{
  __int64 v3; // rbx
  double result; // xmm0_8
  void (           *v5)(_QWORD, _QWORD); // rax

  v3 = 122LL * a1;
  result = a2;
  if ( (unsigned int)sub_140075460(
                       *(float *)&a2,
                       a3,
                       *(float *)&dword_140404A6C[v3 + 70087127],
                       *(float *)&dword_140404A6C[v3 + 70087128]) )
  {
    v5 = *(void (           **)(_QWORD, _QWORD))&dword_140404A6C[v3 + 70087149];
    if ( v5 )
      v5(dword_140404A6C[v3 + 70087146], dword_140404A6C[v3 + 70087147]);
    sub_140075340();
    return sub_14007BB00();
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140072A90) ----------------------------------------------------
double            sub_140072A90(int a1, double a2, __int64 a3)
{
  double v3; // xmm2_8
  int v4; // xmm0_4
  float v5; // xmm9_4
  __int64 v6; // rbx
  unsigned int v7; // edi
  void (           *v8)(_QWORD, _QWORD); // rax
  double result; // xmm0_8
  __m128i v10; // xmm2
  __m128i v11; // xmm2
  int v12; // [rsp+28h] [rbp-70h]
  int v13; // [rsp+30h] [rbp-68h]
  int v14; // [rsp+38h] [rbp-60h]

  v4 = 1056964608;
  v5 = *(float *)&v3;
  v6 = 122LL * a1;
  v7 = **(_DWORD **)&dword_140404A6C[v6 + 70087223];
  if ( a1 == dword_140404A6C[70087109] )
    v4 = 1061158912;
  v8 = *(void (           **)(_QWORD, _QWORD))&dword_140404A6C[v6 + 70087149];
  if ( v8 )
  {
    v8(dword_140404A6C[v6 + 70087146], v7);
    return sub_14007BB00();
  }
  else
  {
    v14 = v4;
    v13 = v4;
    v12 = v4;
    result = a2;
    sub_14006D660(a2, v3, a3, *(float *)&dword_140404A6C[v6 + 70087128], 0, v12, v13, v14, 1056964608);
    if ( v7 != -1 )
    {
      v10 = _mm_cvtsi64_si128((long long)(_mm_cvtsi32_si128((int)(dword_140404A6C))[v6 + 70087128]));
      *(float *)SR_VEC_LANES(128, v10, i32) = (float)(*(float *)SR_VEC_LANES(128, v10, i32) * 0.5) + v5;
      sr_CSDrawText(
        (char *)(*(_QWORD *)&dword_140404A6C[v6 + 70087217] + (int)(v7 * dword_140404A6C[v6 + 70087219])),
        (float)(*(float *)&dword_140404A6C[v6 + 70087127] * 0.5) + *(float *)&a2,
        (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v10),
        13.0);
    }
    v11 = _mm_cvtsi64_si128((long long)(_mm_cvtsi32_si128((int)(dword_140404A6C))[v6 + 70087128]));
    *(float *)SR_VEC_LANES(128, v11, i32) = (float)(*(float *)SR_VEC_LANES(128, v11, i32) * 0.5) + v5;
    sr_CSDrawText(
      (char *)&dword_140404A6C[v6 + 70087151],
      (float)(*(float *)&a2 + *(float *)&dword_140404A6C[v6 + 70087127]) + 4.0,
      (unsigned int *)(unsigned int)_mm_cvtsi128_si32(v11),
      *(float *)&dword_140404A6C[v6 + 70087133]);
  }
  return result;
}

// 140072ACD: variable 'v3' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140072CA0) ----------------------------------------------------
double sub_140072CA0(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned selected=a1==dword_140404A6C[70087109];
  float inner=selected?0.25f:0.0f;
  if(dword_140404A6C[index+70087215])
    inner=selected?1.0f:0.875f;
  float width=*(float *)&dword_140404A6C[index+70087127];
  float height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,selected);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*dword_140404A6C[438291413]+72777086]);
  }else{
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,0x3f600000,0x3f600000,0x3f600000,0x3f800000);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,0,0,0,0x3f800000);
    float side=fmaxf(height-8.0f,4.0f);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+4.0f)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(side),side,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
    unsigned color=sr_text_float_bits(inner);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+6.0f)),sr_export_float_lane_container(sr_text_float_bits(y+6.0f)),sr_text_float_bits(side-4.0f),side-4.0f,0,color,color,color,0x3f800000);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],(side+width)*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[70087071],69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* legacy result ignored; native routine returns void */
}


//----- (0000000140072F90) ----------------------------------------------------
__int64 sub_140072F90(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;
  float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128],size=*(float *)&dword_140404A6C[index+70087133];
  unsigned background=dword_140404A6C[index+70087116]?0x3ee00000:a1==dword_140404A6C[70087109]?0x3ea00000:0x3e400000;
  sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,background,background,background,0x3f000000);
  float middle=height*0.5f+y;
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  unsigned focused=a1==dword_140404A6C[70087106];
  char *value=focused?(char *)&dword_140404A6C[70318069]:*(char **)&dword_140404A6C[index+70087215];
  if(dword_140404A6C[index+70087124]){
    char masked[512];size_t n=strlen(value);if(n>31)n=31;memset(masked,'*',n);masked[n]=0;
    sr_text_draw_recovered(masked,x,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  }else if(!focused&&dword_140404A6C[index+70087115]==4){
    double formatted=(double)**(float **)&dword_140404A6C[index+70087217];uint64 arguments[1];memcpy(arguments,&formatted,8);
    sr_text_draw_recovered("/f",x,middle,size,4,1.0f,1.0f,1.0f,1.0f,arguments);
  }else if(!focused&&dword_140404A6C[index+70087115]==5){
    uint64 arguments[1]={**(unsigned **)&dword_140404A6C[index+70087217]};
    sr_text_draw_recovered("/i",x,middle,size,4,1.0f,1.0f,1.0f,1.0f,arguments);
  }else sr_text_draw_recovered(value,x,middle,size,68,1.0f,1.0f,1.0f,1.0f,NULL);
  if(focused){
    double position=sub_140074CE0(a1,(int)dword_140404A6C[70318066]);
    float cursor=*(float *)&position+x;
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(cursor)),sr_export_float_lane_container(sr_text_float_bits(middle+size*0.25f)),sr_text_float_bits(size*0.5f),4.0f,0,0x3f800000,0x3f800000,0x3f800000,0x3f000000);
    int first=(int)dword_140404A6C[70318066],last=(int)dword_140404A6C[70318065];
    if(first!=last){
      if(first>last){int temporary=first;first=last;last=temporary;}
      double lo=sub_140074CE0(a1,first),hi=sub_140074CE0(a1,last);
      float start=*(float *)&lo,span=*(float *)&hi-start;
      sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+start)),a3,sr_text_float_bits(span),height,0,0x3f800000,0x3f800000,0x3f800000,0x3e800000);
    }
  }
  return 0; /* legacy result ignored; native routine returns void */
}


//----- (0000000140073430) ----------------------------------------------------
double sub_140073430(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;
  unsigned kind=dword_140404A6C[index+70087115],selected=a1==dword_140404A6C[70087109];
  float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if((kind&0xfffffffdu)==0)return sub_140072760(a1,a2,a3);
  if(kind==1)return sub_1400742F0(a1,a2,a3);
  if(kind-3u<=2u){sub_140072F90(a1,a2,a3);return 0.0;}
  switch(kind){
    case 6:
      if(sub_140075460(x,y,width,height)){
        if(callback)((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,0);
        sub_140075340();sub_14007BB00();
      }break;
    case 7:{
      unsigned color=selected||dword_140404A6C[index+70087116]?0x3ec00000:0x3e800000;
      sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,color,color,color,0x3f800000);
      float low=*(float *)&dword_140404A6C[index+70087220],high=*(float *)&dword_140404A6C[index+70087221];
      float knob=*(float *)&dword_140404A6C[index+70087219],value=**(float **)&dword_140404A6C[index+70087217];
      float at=((value-low)*(height-knob))/(high-low)+y;
      sub_14006D660(a2,sr_export_float_lane_container(sr_text_float_bits(at)),sr_text_float_bits(width),knob,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
      break;}
    case 8:return sub_140073860(a1,a2,a3);
    case 10:{
      int value=**(int **)&dword_140404A6C[index+70087223];
      if(callback){
        ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],(unsigned)value,x,y,width,height,selected);
        sub_14007BB00();
      }else{
        unsigned color=selected?0x3f400000:0x3f000000;
        sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,color,color,color,0x3f000000);
        if(value!=-1)sr_text_draw_recovered((char *)(*(uintptr_t *)&dword_140404A6C[index+70087217]+(int)((unsigned)value*dword_140404A6C[index+70087219])),width*0.5f+x,height*0.5f+y,13.0f,69,1.0f,1.0f,1.0f,1.0f,NULL);
        sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
      }break;}
    case 11:return sub_140074040(a1,a2,a3);
    case 12:return sub_140073D90(a1,a2,a3);
    case 13:return sub_140072CA0(a1,a2,a3);
  }
  return 0.0; /* legacy result ignored; native dispatch returns void */
}


//----- (0000000140073860) ----------------------------------------------------
double sub_140073860(int a1,double a2,double a3)
{
  __int64 index=122LL*a1;float x=*(float *)&a2,y=*(float *)&a3;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  if(sub_140075460(x,y,width,height)){
    sub_14006D660(a2,a3,sr_text_float_bits(width),height,0,0x3e000000,0x3e000000,0x3e000000,0x3f000000);
    float gap=*(float *)&dword_140404A6C[index+70087230];
    float cell_width=*(float *)&dword_140404A6C[index+70087228],cell_height=*(float *)&dword_140404A6C[index+70087229];
    float cx=gap*0.5f+x,cy=(gap*0.5f+y)-*(float *)&dword_140404A6C[index+70087232];int column=0;
    for(int item=0;item<(int)dword_140404A6C[index+70087220];item++){
      void *callback=*(void **)&dword_140404A6C[index+70087149];
      if(callback){
        unsigned flags=(dword_140404A6C[index+70087223]==item?1:0)|(dword_140404A6C[index+70087222]==item?4:0);
        ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],item,cx,cy,cell_width,cell_height,flags);
      }else{
        if(dword_140404A6C[index+70087222]==item || dword_140404A6C[index+70087223]==item){
          unsigned color=dword_140404A6C[index+70087222]==item?0x3f400000:0x3f200000;
          sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(cx)),sr_export_float_lane_container(sr_text_float_bits(cy)),sr_text_float_bits(cell_width),cell_height,0,color,color,color,0x3f000000);
        }
        sr_text_draw_recovered((char *)(*(uintptr_t *)&dword_140404A6C[index+70087217]+(int)((unsigned)item*dword_140404A6C[index+70087219])),cx+4.0f,cy+3.5f,13.0f,0,1.0f,1.0f,1.0f,1.0f,NULL);
      }
      if(++column<(int)dword_140404A6C[index+70087227])cx+=cell_width+gap;
      else{column=0;cx=gap*0.5f+x;cy+=gap+cell_height;}
    }
    int depth=(int)dword_140404A6C[70317864];
    if(depth<=0 || --depth<=0){if(dword_140404A6C[70317864]>0)dword_140404A6C[70317864]=depth;((void (*)(unsigned))(uintptr_t)*(uint64 *)&dword_140404A6C[18215101])(3089);}
    else{
      dword_140404A6C[70317864]=depth;__int64 i=4LL*depth;
      dword_140404A6C[70318060]=dword_140404A6C[i+70317861];dword_140404A6C[70318061]=dword_140404A6C[i+70317862];
      dword_140404A6C[70318062]=dword_140404A6C[i+70317863];dword_140404A6C[70318063]=dword_140404A6C[i+70317864];
      sub_14007B7E0(*(float *)&dword_140404A6C[70318060],*(float *)&dword_140404A6C[70318061],*(float *)&dword_140404A6C[70318062],*(float *)&dword_140404A6C[70318063]);
    }
    sub_14007BB00();
  }
  return 0.0; /* legacy result ignored; native returns void */
}


//----- (0000000140073C40) ----------------------------------------------------
__int64            sub_140073C40(int a1, double a2, __int64 a3)
{
  double v3; // xmm2_8
  int v4; // xmm0_4
  __int64 v5; // rbx
  float v6; // xmm3_4
  double v7; // xmm4_8
  __int64 v8; // r8

  v4 = 1048576000;
  if ( a1 == dword_140404A6C[70087109] || dword_140404A6C[122 * a1 + 70087116] )
    v4 = 1052770304;
  v5 = 122LL * a1;
  sub_14006D660(a2, v3, a3, *(float *)&dword_140404A6C[v5 + 70087128], 0, v4, v4, v4, 1065353216);
  v6 = *(float *)&dword_140404A6C[v5 + 70087219];
  *(_QWORD *)&v7 = **(unsigned int **)&dword_140404A6C[v5 + 70087217];
  *(float *)&v7 = (float)((float)((float)(*(float *)&v7 - *(float *)&dword_140404A6C[v5 + 70087220])
                                * (float)(*(float *)&dword_140404A6C[v5 + 70087128] - v6))
                        / (float)(*(float *)&dword_140404A6C[v5 + 70087221] - *(float *)&dword_140404A6C[v5 + 70087220]))
                + *(float *)&v3;
  return sub_14006D660(a2, v7, v8, v6, 0, 1056964608, 1056964608, 1056964608, 1065353216);
}

// 140073CDF: variable 'v3' is possibly undefined
// 140073D63: variable 'v8' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140073D90) ----------------------------------------------------
double sub_140073D90(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  unsigned color=a1==dword_140404A6C[70087109]||dword_140404A6C[index+70087116]?70087099:70087095;
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,dword_140404A6C[color],dword_140404A6C[color+1],dword_140404A6C[color+2],dword_140404A6C[color+3]);
  float knob=*(float *)&dword_140404A6C[index+70087220];
  float low=*(float *)&dword_140404A6C[index+70087217],high=*(float *)&dword_140404A6C[index+70087218];
  float value=**(float **)&dword_140404A6C[index+70087215];
  /* MAXSS/MINSS return their second operand for unordered inputs. */
  float clamped=value>low?value:low;clamped=clamped<high?clamped:high;
  float at=((clamped-low)*(width-knob))/(high-low)+x;
  double formatted=(double)value;uint64 arguments[1];memcpy(arguments,&formatted,8);
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(at)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(knob),height-8.0f,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
  sr_text_draw_recovered("/f",width*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],5,1.0f,1.0f,1.0f,1.0f,arguments);
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
  return 0.0; /* legacy result ignored; native draw returns void */
}


//----- (0000000140074040) ----------------------------------------------------
double sub_140074040(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  float width=*(float *)&dword_140404A6C[index+70087127],height=*(float *)&dword_140404A6C[index+70087128];
  unsigned color=a1==dword_140404A6C[70087109]||dword_140404A6C[index+70087116]?70087099:70087095;
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,dword_140404A6C[color],dword_140404A6C[color+1],dword_140404A6C[color+2],dword_140404A6C[color+3]);
  float knob=*(float *)&dword_140404A6C[index+70087220];
  int low=(int)dword_140404A6C[index+70087217],high=(int)dword_140404A6C[index+70087218];
  int value=**(int **)&dword_140404A6C[index+70087215];
  int clamped=value<low?low:value;clamped=clamped>high?high:clamped;
  float at=((float)(int)((unsigned)clamped-(unsigned)low)*(width-knob))/(float)(int)((unsigned)high-(unsigned)low)+x;
  uint64 arguments[1]={(unsigned)value};
  sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(at)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(knob),height-8.0f,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
  sr_text_draw_recovered("/i",width*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],5,1.0f,1.0f,1.0f,1.0f,arguments);
  sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],x+width+4.0f,height*0.5f+y,*(float *)&dword_140404A6C[index+70087133],4,1.0f,1.0f,1.0f,1.0f,NULL);
  return 0.0; /* legacy result ignored; native draw returns void */
}


//----- (00000001400742F0) ----------------------------------------------------
double sub_1400742F0(int a1,double a2,double a3)
{
  float x=*(float *)&a2,y=*(float *)&a3;
  __int64 index=122LL*a1;
  unsigned selected=a1==dword_140404A6C[70087109];
  float inner=selected?0.25f:0.0f;
  unsigned bits=dword_140404A6C[index+70087217];
  if((bits & **(unsigned **)&dword_140404A6C[index+70087215])==bits)
    inner=selected?1.0f:0.875f;
  float width=*(float *)&dword_140404A6C[index+70087127];
  float height=*(float *)&dword_140404A6C[index+70087128];
  void *callback=*(void **)&dword_140404A6C[index+70087149];
  if(callback){
    ((void (*)(unsigned,unsigned,float,float,float,float,unsigned))(uintptr_t)callback)(dword_140404A6C[index+70087146],dword_140404A6C[index+70087147],x,y,width,height,selected);
    ((void (*)(unsigned,unsigned))(uintptr_t)qword_140404050)(3553,dword_140404A6C[3592*dword_140404A6C[438291413]+72777086]);
  }else{
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x)),sr_export_float_lane_container(sr_text_float_bits(y)),sr_text_float_bits(width),height,0,0x3f600000,0x3f600000,0x3f600000,0x3f800000);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+2.0f)),sr_export_float_lane_container(sr_text_float_bits(y+2.0f)),sr_text_float_bits(width-4.0f),height-4.0f,0,0,0,0,0x3f800000);
    float side=fmaxf(height-8.0f,4.0f);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+4.0f)),sr_export_float_lane_container(sr_text_float_bits(y+4.0f)),sr_text_float_bits(side),side,0,0x3f000000,0x3f000000,0x3f000000,0x3f800000);
    unsigned color=sr_text_float_bits(inner);
    sub_14006D660(sr_export_float_lane_container(sr_text_float_bits(x+6.0f)),sr_export_float_lane_container(sr_text_float_bits(y+6.0f)),sr_text_float_bits(side-4.0f),side-4.0f,0,color,color,color,0x3f800000);
    sr_text_draw_recovered((char *)&dword_140404A6C[index+70087151],(side+width)*0.5f+x,height*0.5f+y,*(float *)&dword_140404A6C[70087071],69,1.0f,1.0f,1.0f,1.0f,NULL);
  }
  return 0.0; /* legacy result ignored; native routine returns void */
}


//----- (00000001400745F0) ----------------------------------------------------
__int64            sub_1400745F0(unsigned int a1)
{
  __int64 v2; // rbx
  int v3; // ebp
  __int64 v4 = 0; // native width set below
  __int64 v5 = 0; // native width set below
  double v6; // xmm1_8
  float v7; // xmm3_4
  __int64 v8 = 0; // native width set below
  __int64 v9 = 0; // native width set below
  double v10; // xmm0_8
  __int64 v11 = 0; // native width set below
  __int64 v12 = 0; // native width set below
  int v13; // xmm0_4
  float v14; // xmm1_4
  __m128i v15; // xmm2
  unsigned int *v16; // rbx
  int i; // edi
  double v18; // xmm2_8
  double v19; // xmm1_8
  signed int v20; // eax
  signed int v21; // edi
  unsigned int *v22; // rbx
  int v23; // xmm1_4
  float v24; // xmm3_4
  __m128i v25; // xmm2
  int v26; // xmm0_4
  int v27; // xmm1_4
  float v28; // xmm1_4
  unsigned int *v29; // rcx
  int j; // edx
  __int64 k; // rbx
  __int64 v32; // rcx
  signed int v33; // eax
  __int64 v34; // rax
  __int64 v36; // [rsp+0h] [rbp-498h] BYREF
  int v37; // [rsp+20h] [rbp-478h]
  int v38; // [rsp+28h] [rbp-470h]
  int v39; // [rsp+30h] [rbp-468h]
  int v40; // [rsp+38h] [rbp-460h]
  int v41; // [rsp+40h] [rbp-458h]
  _DWORD v42[256]; // [rsp+50h] [rbp-448h]
  __int64 v43; // [rsp+450h] [rbp-48h]

  if ( a1 <= 0xFF )
  {
    v2 = 98LL * (int)a1;
    v4=dword_140404A6C[v2+70290975];
    v5=dword_140404A6C[v2+70290975];
    v8=dword_140404A6C[v2+70290975];
    v9=dword_140404A6C[v2+70290900];
    v11=dword_140404A6C[v2+70290900];
    v12=dword_140404A6C[v2+70290979];
    if ( (unsigned int)sub_140075460(
                         *(float *)&dword_140404A6C[v2 + 70290973],
                         *(float *)&dword_140404A6C[v2 + 70290974],
                         *(float *)&dword_140404A6C[v2 + 70290975],
                         *(float *)&dword_140404A6C[v2 + 70290976]) )
    {
      qword_140404050(3553, dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777086]);
      v3 = 0;
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v4,
        *(float *)&dword_140404A6C[v2 + 70290976],
        0,
        dword_140404A6C[70087091],
        dword_140404A6C[70087092],
        dword_140404A6C[70087093],
        dword_140404A6C[70087094]);
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v5,
        *(float *)&dword_140404A6C[v2 + 70290900],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      *(_QWORD *)&v6 = dword_140404A6C[v2 + 70290976];
      v7 = *(float *)&dword_140404A6C[v2 + 70290900];
      *(float *)&v6 = (float)(*(float *)&v6 + *(float *)&dword_140404A6C[v2 + 70290974]) - v7;
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        v6,
        v8,
        v7,
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      sub_14006D660(
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290973]),
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v9,
        *(float *)&dword_140404A6C[v2 + 70290976],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      *(_QWORD *)&v10 = dword_140404A6C[v2 + 70290973];
      *(float *)&v10 = (float)(*(float *)&v10 + *(float *)&dword_140404A6C[v2 + 70290975])
                     - *(float *)&dword_140404A6C[v2 + 70290900];
      sub_14006D660(
        v10,
        COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290974]),
        v11,
        *(float *)&dword_140404A6C[v2 + 70290976],
        0,
        1052770304,
        1052770304,
        1052770304,
        1065353216);
      if ( !dword_140404A6C[v2 + 70290972] )
      {
        v13 = 1056964608;
        if ( a1 == dword_140404A6C[70087104] )
          v13 = 1059061760;
        sub_14006D660(
          COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290977]),
          COERCE_DOUBLE((unsigned __int64)dword_140404A6C[v2 + 70290978]),
          v12,
          *(float *)&dword_140404A6C[v2 + 70290980],
          0,
          v13,
          v13,
          v13,
          1065353216);
        v14 = *(float *)&dword_140404A6C[v2 + 70290977] + *(float *)&dword_140404A6C[v2 + 70290900];
        v15 = _mm_cvtsi32_si128((int)dword_140404A6C[v2+70290978]);
        *(float *)SR_VEC_LANES(128, v15, i32) = *(float *)SR_VEC_LANES(128, v15, i32) + 4.0;
        v41 = 1065353216;
        v40 = 1065353216;
        v39 = 1065353216;
        v38 = 1065353216;
        v37 = 64;
        sr_text_draw_recovered((char *)&dword_140404A6C[v2 + 70290908], v14 + 4.0, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v15))), *(float *)&dword_140404A6C[70087071], 64, sr_text_bits_float(v38), sr_text_bits_float(v39), sr_text_bits_float(v40), sr_text_bits_float(v41), NULL);
      }
      sub_140075340();
      if ( (unsigned int)sub_140075460(
                           *(float *)&dword_140404A6C[v2 + 70290981],
                           *(float *)&dword_140404A6C[v2 + 70290982],
                           *(float *)&dword_140404A6C[v2 + 70290983],
                           *(float *)&dword_140404A6C[v2 + 70290984]) )
      {
        v16 = &dword_140404A6C[70087122];
        for ( i = 0; i < 1024; ++i )
        {
          if ( *(v16 - 9) == 3 && *v16 == a1 && *(v16 - 4) )
          {
            *(_QWORD *)&v18 = v16[13];
            *(_QWORD *)&v19 = v16[12];
            dword_140404A6C[438291413] = v16[1];
            sub_140073430(i, v19, v18);
          }
          v16 += 122;
        }
        v20 = dword_140404A6C[70212041];
        v21 = 0;
        if ( (int)dword_140404A6C[70212041] > 0 )
        {
          v22 = &dword_140404A6C[70212049];
          do
          {
            if ( *(v22 - 6) == a1 )
            {
              v23 = *(v22 - 1);
              v24 = *((float *)v22 + 1);
              v25 = _mm_cvtsi32_si128((int)(v22[3]));
              v41 = *v22;
              v26 = *(v22 - 2);
              v40 = v23;
              v27 = *(v22 - 3);
              v39 = v26;
              v38 = v27;
              v28 = *((float *)v22 + 2);
              v37 = 64;
              sr_text_draw_recovered((char *)&dword_140404A6C[77 * v21 + 70212055], v28, sr_text_bits_float((unsigned)(uintptr_t)((unsigned int *)(unsigned int)_mm_cvtsi128_si32(v25))), v24, 64, sr_text_bits_float(v38), sr_text_bits_float(v39), sr_text_bits_float(v40), sr_text_bits_float(v41), NULL);
              v20 = dword_140404A6C[70212041];
            }
            ++v21;
            v22 += 77;
          }
          while ( v21 < v20 );
        }
        v29 = &dword_140404A6C[70290893];
        for ( j = 0; j < 256; ++j )
        {
          if ( *(v29 - 2) == 3 && *v29 == a1 )
          {
            ++v3;
            v42[v29[2]] = j;
          }
          v29 += 98;
        }
        for ( k = v3 - 1; k >= 0; --k )
        {
          v32 = (int)v42[k];
          if ( dword_140404A6C[98 * v32 + 70290891] == 3 )
            sub_1400745F0(v32);
        }
        if ( (int)dword_140404A6C[70317864] <= 0
          || (v33 = dword_140404A6C[70317864] - 1, dword_140404A6C[70317864] = v33, v33 <= 0) )
        {
          (*(void (           **)(__int64))&dword_140404A6C[18215101])(3089);
        }
        else
        {
          v34 = 2LL * v33;
          dword_140404A6C[70318060] = dword_140404A6C[2 * v34 + 70317861];
          dword_140404A6C[70318062] = dword_140404A6C[2 * v34 + 70317863];
          dword_140404A6C[70318061] = dword_140404A6C[2 * v34 + 70317862];
          dword_140404A6C[70318063] = dword_140404A6C[2 * v34 + 70317864];
          sub_14007B7E0(
            *(float *)&dword_140404A6C[70318060],
            *(float *)&dword_140404A6C[70318061],
            *(float *)&dword_140404A6C[70318062],
            *(float *)&dword_140404A6C[70318063]);
        }
      }
    }
  }
  return 0; /* legacy result ignored; native returns void */
}

// 140074706: variable 'v4' is possibly undefined
// 14007475F: variable 'v5' is possibly undefined
// 1400747B6: variable 'v8' is possibly undefined
// 1400747FF: variable 'v9' is possibly undefined
// 140074856: variable 'v11' is possibly undefined
// 1400748CD: variable 'v12' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 150FDB190: using guessed type unsigned int;
// 15104270C: using guessed type unsigned int;
// 151042A1C: using guessed type unsigned int;
// 151042A20: using guessed type unsigned int;
// 151042A24: using guessed type unsigned int;
// 151042A28: using guessed type unsigned int;
// 1A8BF79C0: using guessed type unsigned int;

//----- (0000000140074C50) ----------------------------------------------------
__int64            sub_140074C50(int a1, float a2)
{
  int v2; // edx
  float v3; // xmm2_4
  unsigned int *v4; // r8

  v2 = 0;
  v3 = 0.0;
  if ( LOBYTE(dword_140404A6C[70318069]) )
  {
    v4 = &dword_140404A6C[70318069];
    do
    {
      if ( v2 >= (int)dword_140404A6C[70318068] )
        break;
      v3 = v3
         + (float)(*(float *)&dword_140404A6C[3592 * dword_140404A6C[122 * a1 + 70087123]
                                            + 72777093
                                            + *(unsigned __int8 *)v4]
                 * *(float *)&dword_140404A6C[122 * a1 + 70087133]);
      if ( a2 < v3 )
        break;
      v4 = (unsigned int *)((char *)v4 + 1);
      ++v2;
    }
    while ( *(_BYTE *)v4 );
  }
  return (unsigned int)v2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140074CE0) ----------------------------------------------------
double            sub_140074CE0(int a1, int a2)
{
  int v2; // r8d
  double v3; // xmm1_8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 i; // rdx
  __int64 v7; // rax
  float v8; // xmm2_4

  v2 = 0;
  v3 = 0.0;
  if ( a2 <= 0 )
    return 0.0;
  v4 = 122LL * a1;
  v5 = a2;
  for ( i = 0; i < v5; ++i )
  {
    v7 = *((unsigned __int8 *)&dword_140404A6C[70318069] + i);
    if ( !(_BYTE)v7 || v2 >= (int)dword_140404A6C[70318068] )
      break;
    v8 = dword_140404A6C[v4 + 70087124]
       ? *(float *)&dword_140404A6C[3592 * dword_140404A6C[122 * a1 + 70087123] + 72777135]
       : *(float *)&dword_140404A6C[3592 * (int)dword_140404A6C[122 * a1 + 70087123] + 72777093 + v7];
    ++v2;
    *(float *)&v3 = *(float *)&v3 + (float)(*(float *)&dword_140404A6C[v4 + 70087133] * v8);
  }
  return v3;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140074E50) ----------------------------------------------------
void sub_140074E50()
{
  int v0; // edi
  __int64 v1; // rbp
  unsigned int *v2; // r14
  unsigned int *v3; // r15
  int v4; // esi
  int *v5; // r11
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rcx
  unsigned int *v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int *v19; // rax
  __int64 v20; // r8
  unsigned int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _DWORD *v25; // rcx
  unsigned int *v26; // rcx
  unsigned int v27; // r9d
  __int64 v28; // r10
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int *v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rax
  _DWORD *v37; // rcx
  unsigned int *v38; // rcx
  unsigned int v39; // r9d
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 i; // rax
  unsigned int *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  _DWORD *v46; // rcx

  v0 = 0;
  dword_140404A6C[70326263] = 0;
  v1 = 0;
  v2 = &dword_140404A6C[70326264];
  v3 = &dword_140404A6C[70326249];
  do
  {
    v4 = 0;
    v5 = (int *)v3;
    v6 = 2;
    do
    {
      v7 = v5[15];
      if ( (_DWORD)v7 == -1 )
        goto LABEL_30;
      v8 = v5[16];
      if ( v8 == -1 )
      {
        if ( v4 <= 0 )
          goto LABEL_9;
        dword_140404A6C[122 * v7 + 70087141] = *v2;
        v9 = (int)*v2;
      }
      else
      {
        dword_140404A6C[122 * v7 + 70087141] = v8;
        v9 = v5[16];
      }
      dword_140404A6C[122 * v9 + 70087140] = v7;
LABEL_9:
      v10 = v6 - 2;
      v11 = v6 - 2;
      if ( v6 - 2 > 0 )
      {
        v12 = v5 + 31;
        do
        {
          if ( *v12 != -1 )
            break;
          --v11;
          --v12;
        }
        while ( v11 > 0 );
      }
      v13 = &dword_140404A6C[v1 + 70087029 + v11];
      v14 = v13[239251];
      if ( v14 == -1 )
      {
        if ( !v0 )
          goto LABEL_30;
        v17 = v6 - 2;
        if ( v10 > 0 )
        {
          do
          {
            if ( dword_140404A6C[v17 + 70326264] != -1 )
              break;
            --v17;
          }
          while ( v17 > 0 );
        }
        v15 = 122 * v7;
        dword_140404A6C[122 * v7 + 70087139] = dword_140404A6C[v17 + 70326264];
        v18 = (int)dword_140404A6C[v17 + 70326264];
        if ( dword_140404A6C[122 * v18 + 70087138] == -1 )
          dword_140404A6C[122 * v18 + 70087138] = v7;
LABEL_24:
        if ( dword_140404A6C[v15 + 70087138] == -1 )
        {
          if ( v10 > 0 )
          {
            v19 = v5 - 1;
            do
            {
              if ( *v19 != -1 )
                break;
              --v10;
              --v19;
            }
            while ( v10 > 0 );
          }
          dword_140404A6C[v15 + 70087138] = dword_140404A6C[v10 + 70326248 + v1];
        }
        goto LABEL_30;
      }
      v15 = 122 * v7;
      dword_140404A6C[122 * v7 + 70087139] = v14;
      v16 = (int)v13[239251];
      if ( dword_140404A6C[122 * v16 + 70087138] == -1 )
        dword_140404A6C[122 * v16 + 70087138] = v7;
      if ( v0 )
        goto LABEL_24;
LABEL_30:
      v20 = v5[16];
      if ( (_DWORD)v20 == -1 )
        goto LABEL_57;
      v21 = v5[17];
      if ( v21 == -1 )
      {
        if ( v4 + 1 <= 0 )
          goto LABEL_36;
        dword_140404A6C[122 * v20 + 70087141] = *v2;
        v22 = (int)*v2;
      }
      else
      {
        dword_140404A6C[122 * v20 + 70087141] = v21;
        v22 = v5[17];
      }
      dword_140404A6C[122 * v22 + 70087140] = v20;
LABEL_36:
      v23 = v6 - 1;
      v24 = v6 - 1;
      if ( v6 - 1 > 0 )
      {
        v25 = v5 + 32;
        do
        {
          if ( *v25 != -1 )
            break;
          --v24;
          --v25;
        }
        while ( v24 > 0 );
      }
      v26 = &dword_140404A6C[v1 + 70087029 + v24];
      v27 = v26[239251];
      if ( v27 == -1 )
      {
        if ( !v0 )
          goto LABEL_57;
        v30 = v6 - 1;
        if ( v23 > 0 )
        {
          do
          {
            if ( dword_140404A6C[v30 + 70326264] != -1 )
              break;
            --v30;
          }
          while ( v30 > 0 );
        }
        v28 = 122 * v20;
        dword_140404A6C[122 * v20 + 70087139] = dword_140404A6C[v30 + 70326264];
        v31 = (int)dword_140404A6C[v30 + 70326264];
        if ( dword_140404A6C[122 * v31 + 70087138] == -1 )
          dword_140404A6C[122 * v31 + 70087138] = v20;
LABEL_51:
        if ( dword_140404A6C[v28 + 70087138] == -1 )
        {
          if ( v23 > 0 )
          {
            v32 = v5;
            do
            {
              if ( *v32 != -1 )
                break;
              --v23;
              --v32;
            }
            while ( v23 > 0 );
          }
          dword_140404A6C[v28 + 70087138] = dword_140404A6C[v23 + 70326248 + v1];
        }
        goto LABEL_57;
      }
      v28 = 122 * v20;
      dword_140404A6C[122 * v20 + 70087139] = v27;
      v29 = (int)v26[239251];
      if ( dword_140404A6C[122 * v29 + 70087138] == -1 )
        dword_140404A6C[122 * v29 + 70087138] = v20;
      if ( v0 )
        goto LABEL_51;
LABEL_57:
      v33 = v5[17];
      if ( (_DWORD)v33 == -1 )
        goto LABEL_84;
      v34 = v5[18];
      if ( v34 == -1 )
      {
        if ( v4 + 2 <= 0 )
          goto LABEL_63;
        dword_140404A6C[122 * v33 + 70087141] = *v2;
        v35 = (int)*v2;
      }
      else
      {
        dword_140404A6C[122 * v33 + 70087141] = v34;
        v35 = v5[18];
      }
      dword_140404A6C[122 * v35 + 70087140] = v33;
LABEL_63:
      v36 = v6;
      if ( v6 > 0 )
      {
        v37 = v5 + 33;
        do
        {
          if ( *v37 != -1 )
            break;
          --v36;
          --v37;
        }
        while ( v36 > 0 );
      }
      v38 = &dword_140404A6C[v1 + 70087029 + v36];
      v39 = v38[239251];
      if ( v39 == -1 )
      {
        if ( !v0 )
          goto LABEL_84;
        for ( i = v6; i > 0; --i )
        {
          if ( dword_140404A6C[i + 70326264] != -1 )
            break;
        }
        v43 = &dword_140404A6C[i + 70087029];
        v40 = 122 * v33;
        dword_140404A6C[122 * v33 + 70087139] = v43[239235];
        v44 = (int)v43[239235];
        if ( dword_140404A6C[122 * v44 + 70087138] == -1 )
          dword_140404A6C[122 * v44 + 70087138] = v33;
LABEL_78:
        if ( dword_140404A6C[v40 + 70087138] == -1 )
        {
          v45 = v6;
          if ( v6 > 0 )
          {
            v46 = v5 + 1;
            do
            {
              if ( *v46 != -1 )
                break;
              --v45;
              --v46;
            }
            while ( v45 > 0 );
          }
          dword_140404A6C[v40 + 70087138] = dword_140404A6C[v1 + 70326248 + v45];
        }
        goto LABEL_84;
      }
      v40 = 122 * v33;
      dword_140404A6C[122 * v33 + 70087139] = v39;
      v41 = (int)v38[239251];
      if ( dword_140404A6C[122 * v41 + 70087138] == -1 )
        dword_140404A6C[122 * v41 + 70087138] = v33;
      if ( v0 )
        goto LABEL_78;
LABEL_84:
      v4 += 3;
      v5 += 3;
      v6 += 3;
    }
    while ( v4 < 15 );
    ++v0;
    v1 += 16;
    v3 += 16;
    v2 += 16;
  }
  while ( v0 < 15 );
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15104AA48: using guessed type unsigned int;

//----- (0000000140075340) ----------------------------------------------------
double sub_140075340()
{
  signed int v0; // eax
  __int64 v1; // rax
  double result; // xmm0_8

  if ( (int)dword_140404A6C[70317864] <= 0 )
    return (*(double (           **)(__int64))&dword_140404A6C[18215101])(3089);
  v0 = dword_140404A6C[70317864] - 1;
  dword_140404A6C[70317864] = v0;
  if ( v0 <= 0 )
    return (*(double (           **)(__int64))&dword_140404A6C[18215101])(3089);
  v1 = 2LL * v0;
  dword_140404A6C[70318060] = dword_140404A6C[2 * v1 + 70317861];
  *(_QWORD *)&result = dword_140404A6C[70318060];
  dword_140404A6C[70318062] = dword_140404A6C[2 * v1 + 70317863];
  dword_140404A6C[70318061] = dword_140404A6C[2 * v1 + 70317862];
  dword_140404A6C[70318063] = dword_140404A6C[2 * v1 + 70317864];
  sub_14007B7E0(
    *(float *)&dword_140404A6C[70318060],
    *(float *)&dword_140404A6C[70318061],
    *(float *)&dword_140404A6C[70318062],
    *(float *)&dword_140404A6C[70318063]);
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 15104270C: using guessed type unsigned int;
// 151042A1C: using guessed type unsigned int;
// 151042A20: using guessed type unsigned int;
// 151042A24: using guessed type unsigned int;
// 151042A28: using guessed type unsigned int;

//----- (00000001400753C0) ----------------------------------------------------
__int64 sub_1400753C0()
{
  __int64 result; // rax

  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (0000000140075460) ----------------------------------------------------
__int64            sub_140075460(float a1, float a2, float a3, float a4)
{
  unsigned int v6; // xmm4_4
  float v7; // xmm5_4
  unsigned int v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  unsigned int v14; // xmm4_4
  unsigned int v15; // xmm2_4

  if ( dword_140404A6C[70317864] )
  {
    v8 = dword_140404A6C[70318063];
    v6 = dword_140404A6C[70318062];
    v9 = *(float *)&dword_140404A6C[70318061];
    v7 = *(float *)&dword_140404A6C[70318060];
  }
  else
  {
    v6 = dword_140404A6C[438291414];
    v7 = 0.0;
    v8 = dword_140404A6C[438291415];
    v9 = 0.0;
    dword_140404A6C[70318060] = 0;
    dword_140404A6C[70318061] = 0;
    dword_140404A6C[70318062] = dword_140404A6C[438291414];
    dword_140404A6C[70318063] = dword_140404A6C[438291415];
  }
  v10 = fmaxf(v7, a1);
  v11 = fminf(*(float *)&v6 + v7, a1 + a3);
  v12 = fmaxf(v9, a2);
  v13 = fminf(*(float *)&v8 + v9, a2 + a4);
  if ( v10 > v11 || v12 > v13 )
    return 0;
  *(float *)&dword_140404A6C[70318060] = v10;
  *(float *)&dword_140404A6C[70318061] = v12;
  *(float *)&v14 = v11 - v10;
  *(float *)&v15 = v13 - v12;
  dword_140404A6C[70318062] = v14;
  dword_140404A6C[70318063] = v15;
  *(float *)&dword_140404A6C[4 * dword_140404A6C[70317864] + 70317865] = v10;
  dword_140404A6C[4 * dword_140404A6C[70317864] + 70317867] = v14;
  *(float *)&dword_140404A6C[4 * dword_140404A6C[70317864] + 70317866] = v12;
  dword_140404A6C[4 * dword_140404A6C[70317864] + 70317868] = v15;
  if ( ++dword_140404A6C[70317864] == 1 )
    (*(void (           **)(__int64))&dword_140404A6C[18215103])(3089);
  sub_14007B7E0(
    *(float *)&dword_140404A6C[70318060],
    *(float *)&dword_140404A6C[70318061],
    *(float *)&dword_140404A6C[70318062],
    *(float *)&dword_140404A6C[70318063]);
  return 1;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 15104270C: using guessed type unsigned int;
// 151042A1C: using guessed type unsigned int;
// 151042A20: using guessed type unsigned int;
// 151042A24: using guessed type unsigned int;
// 151042A28: using guessed type unsigned int;
// 1A8BF79C4: using guessed type unsigned int;
// 1A8BF79C8: using guessed type unsigned int;

//----- (00000001400755F0) ----------------------------------------------------
__int64            sub_1400755F0(float a1, float a2)
{
  __int64 result; // rax

  result = (int)dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    result = (int)dword_140404A6C[70317962];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  *(float *)&dword_140404A6C[70087070] = a2;
  *(float *)&dword_140404A6C[70087069] = a1;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;

//----- (0000000140075650) ----------------------------------------------------
_WORD *sub_140075650()
{
  unsigned int *v0; // rax
  unsigned int *v1; // rax
  _WORD *result; // rax

  v0 = &dword_140404A6C[70087116];
  do
  {
    *(v0 - 3) = 0;
    *v0 = 0;
    v0 += 122;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[70212044] );
  dword_140404A6C[70212041] = 0;
  v1 = &dword_140404A6C[70290891];
  dword_140404A6C[70290890] = 0;
  do
  {
    *v1 = 0;
    v1 += 98;
  }
  while ( (__int64)v1 < (__int64)&dword_140404A6C[70315979] );
  result = sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[70317269]), 0xFFu, 0x800u);
  *(_OWORD *)&dword_140404A6C[70087067] = xmmword_1402797D0;
  dword_140404A6C[70087046] = -1;
  dword_140404A6C[70087071] = 1095761920;
  dword_140404A6C[70087072] = 1082130432;
  *(_OWORD *)&dword_140404A6C[70087091] = xmmword_140279480;
  dword_140404A6C[70087029] = 0;
  *(_OWORD *)&dword_140404A6C[70087095] = xmmword_140279670;
  dword_140404A6C[70087064] = -1;
  *(_OWORD *)&dword_140404A6C[70087099] = xmmword_140279680;
  dword_140404A6C[70087047] = 0;
  dword_140404A6C[70087083] = 1;
  *(_OWORD *)&dword_140404A6C[70087087] = xmmword_140279700;
  dword_140404A6C[70087074] = 0;
  dword_140404A6C[70087103] = -1;
  *(_QWORD *)&dword_140404A6C[70087106] = -1;
  dword_140404A6C[70087111] = -1;
  return result;
}

// 140279480: using guessed type __int128 xmmword_140279480;
// 140279670: using guessed type __int128 xmmword_140279670;
// 140279680: using guessed type __int128 xmmword_140279680;
// 140279700: using guessed type __int128 xmmword_140279700;
// 1402797D0: using guessed type __int128 xmmword_1402797D0;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61040: using guessed type int[];
// 150F61084: using guessed type unsigned int;
// 150F61088: using guessed type unsigned int;
// 150F610CC: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610E8: using guessed type unsigned int;
// 150F610EC: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 150F61118: using guessed type unsigned int;
// 150F61128: using guessed type unsigned int;
// 150F61138: using guessed type unsigned int;
// 150F61148: using guessed type unsigned int;
// 150F61158: using guessed type unsigned int;
// 150F61168: using guessed type unsigned int;
// 150F61174: using guessed type unsigned int;
// 150F61188: using guessed type unsigned int;
// 150FDB190: using guessed type unsigned int;
// 151028194: using guessed type unsigned int;

//----- (0000000140075930) ----------------------------------------------------
signed int *           sub_140075930(int a1, float a2)
{
  __int64 v2; // r11
  signed int v3; // r10d
  signed int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  signed int *result; // rax

  v2 = 122LL * a1;
  v3 = dword_140404A6C[v2 + 70087218];
  v4 = dword_140404A6C[v2 + 70087217];
  v5 = (int)(float)((float)((float)((float)(a2 - (float)(*(float *)&dword_140404A6C[v2 + 70087220] * 0.5))
                                  / (float)(*(float *)&dword_140404A6C[v2 + 70087127]
                                          - *(float *)&dword_140404A6C[v2 + 70087220]))
                          * fmaxf((float)(v3 - v4), 1.0))
                  + 0.5);
  if ( LOBYTE(dword_140404A6C[70317069]) )
  {
    v6 = dword_140404A6C[v2 + 70087219];
    if ( v6 )
      v5 = (v6 >> 1) + v5 - ((v6 >> 1) + v5) % v6;
  }
  if ( v4 + v5 >= v4 )
    v4 += v5;
  result = *(signed int **)&dword_140404A6C[v2 + 70087215];
  if ( v4 <= v3 )
    v3 = v4;
  *result = v3;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140075A40) ----------------------------------------------------
__int64            sub_140075A40(int a1, float a2, double a3)
{
  unsigned int v3; // ebp
  double v4; // xmm6_8
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned int *v7; // rbx
  unsigned int v8; // eax
  char *v9; // rcx
  unsigned int *v10; // rdx
  char v11; // al
  unsigned __int64 v12; // rsi
  signed int v13; // r8d
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  int v16; // edi
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // edi
  unsigned __int64 v21; // rcx
  signed int v22; // edx
  int v23; // r8d
  _BYTE *v24; // r9
  char *v25; // rdx
  char v26; // cl
  unsigned int v27; // r8d
  char *v28; // rdx
  char v29; // cl
  __int64 v30; // rdi
  unsigned int v31; // eax
  float *v32; // rcx
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 result; // rax
  signed int *v36; // rax
  signed int v37; // ecx
  signed int v38; // ecx
  _BYTE *v39; // rcx
  char v40; // al

  v3 = 0;
  v4 = a3;
  v5 = a1;
  dword_140404A6C[70318064] = 1;
  if ( dword_140404A6C[70087108] == a1 )
  {
    if ( dword_140404A6C[70317817] )
    {
      if ( dword_140404A6C[70317856] )
      {
        v16 = dword_140404A6C[70318065];
      }
      else
      {
        v16 = sub_140074C50(a1, a2);
        dword_140404A6C[70318065] = v16;
      }
      v17 = sub_140074C50(v5, a2);
      dword_140404A6C[70318066] = v17;
    }
    else
    {
      v17 = dword_140404A6C[70318066];
      v16 = dword_140404A6C[70318065];
    }
    v7 = &dword_140404A6C[70318069];
    if ( v16 < 0 )
      v16 = 0;
    v18 = -1;
    dword_140404A6C[70318065] = v16;
    do
      ++v18;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v18) );
    if ( v16 > v18 )
      v16 = v18;
    dword_140404A6C[70318065] = v16;
    v19 = -1;
    if ( v17 < 0 )
      v17 = 0;
    dword_140404A6C[70318066] = v17;
    do
      ++v19;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v19) );
    if ( v17 > v19 )
      v17 = v19;
    dword_140404A6C[70318066] = v17;
    v20 = sub_140075FE0();
    if ( v20 != -1 )
    {
      while ( v20 != 11 && v20 != 1 )
      {
        if ( v20 < 32 )
        {
          if ( v20 == 9 )
          {
            if ( !(unsigned int)sub_1400722C0() )
            {
              v25 = (char *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066];
              if ( *v25 )
              {
                do
                {
                  v26 = v25[1];
                  *v25++ = v26;
                }
                while ( v26 );
              }
            }
          }
          else if ( v20 == 10 && !(unsigned int)sub_1400722C0() )
          {
            v27 = dword_140404A6C[70318066];
            if ( (int)dword_140404A6C[70318066] > 0 )
            {
              v28 = (char *)&dword_140404A6C[70318068] + dword_140404A6C[70318066] + 3;
              if ( *v28 )
              {
                do
                {
                  v29 = v28[1];
                  *v28++ = v29;
                }
                while ( v29 );
                v27 = dword_140404A6C[70318066];
              }
              dword_140404A6C[70318066] = v27 - 1;
              dword_140404A6C[70318065] = v27 - 1;
            }
          }
        }
        else
        {
          sub_1400722C0();
          v21 = -1;
          do
            ++v21;
          while ( *((_BYTE *)&dword_140404A6C[70318069] + v21) );
          if ( v21 < (int)dword_140404A6C[70318068] )
          {
            v22 = dword_140404A6C[70318066];
            if ( (int)dword_140404A6C[70318066] < 0x2000 )
            {
              if ( dword_140404A6C[70318067] )
              {
                if ( !*((_BYTE *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066]) )
                {
                  *((_BYTE *)&dword_140404A6C[70318069] + dword_140404A6C[70318066] + 1) = 0;
                  v22 = dword_140404A6C[70318066];
                }
              }
              else
              {
                v23 = v21 + 1;
                if ( (int)v21 + 1 > (int)dword_140404A6C[70318066] )
                {
                  v24 = (char *)&dword_140404A6C[70318069] + v23;
                  do
                  {
                    --v23;
                    *v24 = *(v24 - 1);
                    --v24;
                    v22 = dword_140404A6C[70318066];
                  }
                  while ( v23 > (int)dword_140404A6C[70318066] );
                }
              }
              *((_BYTE *)&dword_140404A6C[70318069] + v22) = v20;
              dword_140404A6C[70318065] = ++dword_140404A6C[70318066];
            }
          }
        }
        v20 = sub_140075FE0();
        if ( v20 == -1 )
          goto LABEL_75;
      }
      dword_140404A6C[70087106] = -1;
      v3 = 1;
      if ( v20 != 11 )
        v3 = -1;
    }
  }
  else
  {
    v6 = 122LL * a1;
    v7 = &dword_140404A6C[70318069];
    v8 = dword_140404A6C[122 * v5 + 70087115];
    if ( v8 == 4 )
    {
      a3 = **(float **)&dword_140404A6C[v6 + 70087217];
      sub_140158AB0(&dword_140404A6C[70318069], "%.3f", a3);
    }
    else if ( v8 == 5 )
    {
      sub_140158AB0(&dword_140404A6C[70318069], "%d", **(_DWORD **)&dword_140404A6C[v6 + 70087217]);
    }
    else
    {
      v9 = *(char **)&dword_140404A6C[v6 + 70087215];
      v10 = &dword_140404A6C[70318069];
      do
      {
        v11 = *v9++;
        *(_BYTE *)v10 = v11;
        v10 = (unsigned int *)((char *)v10 + 1);
      }
      while ( v11 );
    }
    v12 = -1;
    if ( !dword_140404A6C[70317817] || dword_140404A6C[70317856] )
    {
      v13 = 0;
      dword_140404A6C[70318065] = 0;
      v14 = -1;
      do
        ++v14;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v14) );
      dword_140404A6C[70318066] = v14;
    }
    else
    {
      a3 = v4;
      dword_140404A6C[70318065] = sub_140074C50(v5, a2);
      v13 = dword_140404A6C[70318065];
      dword_140404A6C[70318066] = dword_140404A6C[70318065];
      LODWORD(v14) = dword_140404A6C[70318065];
      if ( (dword_140404A6C[70318065] & 0x80000000) != 0 )
      {
        v13 = 0;
        dword_140404A6C[70318065] = 0;
      }
    }
    v15 = -1;
    do
      ++v15;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v15) );
    if ( v13 > v15 )
      v13 = v15;
    dword_140404A6C[70318065] = v13;
    if ( (int)v14 < 0 )
      LODWORD(v14) = 0;
    dword_140404A6C[70318066] = v14;
    do
      ++v12;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v12) );
    if ( (int)v14 > v12 )
      dword_140404A6C[70318066] = v12;
  }
LABEL_75:
  v30 = 122 * v5;
  v31 = dword_140404A6C[122 * v5 + 70087115];
  if ( v31 == 4 )
  {
    sub_14015B070((__int64)&dword_140404A6C[70318069], "%f", a3);
    v32 = *(float **)&dword_140404A6C[v30 + 70087217];
    v33 = *(float *)&dword_140404A6C[v30 + 70087219];
    if ( v33 > *v32 )
    {
      *v32 = v33;
      v32 = *(float **)&dword_140404A6C[v30 + 70087217];
    }
    v34 = *(float *)&dword_140404A6C[v30 + 70087220];
    result = v3;
    if ( v34 < *v32 )
      *v32 = v34;
  }
  else
  {
    if ( v31 == 5 )
    {
      sub_14015B070((__int64)&dword_140404A6C[70318069], "%d", *(_QWORD *)&dword_140404A6C[v30 + 70087217]);
      v36 = *(signed int **)&dword_140404A6C[v30 + 70087217];
      v37 = dword_140404A6C[v30 + 70087219];
      if ( *v36 < v37 )
      {
        *v36 = v37;
        v36 = *(signed int **)&dword_140404A6C[v30 + 70087217];
      }
      v38 = dword_140404A6C[v30 + 70087220];
      if ( *v36 > v38 )
      {
        *v36 = v38;
        return v3;
      }
    }
    else
    {
      v39 = *(_BYTE **)&dword_140404A6C[v30 + 70087215];
      do
      {
        v40 = *(_BYTE *)v7;
        v7 = (unsigned int *)((char *)v7 + 1);
        *v39++ = v40;
      }
      while ( v40 );
    }
    return v3;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61174: using guessed type unsigned int;
// 151042A2C: using guessed type unsigned int;
// 151042A30: using guessed type unsigned int;
// 151042A34: using guessed type unsigned int;

//----- (0000000140075FE0) ----------------------------------------------------
int sub_140075FE0()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  int v2; // r10d
  int v3; // r8d
  int v4; // r11d
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  unsigned __int64 v11; // rdx
  int v12; // ecx

  v0 = dword_140404A6C[70318067];
  LODWORD(v1) = dword_140404A6C[70318066];
  v2 = 0;
  v3 = dword_140404A6C[70318065];
  v4 = dword_140404A6C[468760166];
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v5 = -1;
            if ( v3 < 0 )
              v3 = 0;
            dword_140404A6C[70318065] = v3;
            do
              ++v5;
            while ( *((_BYTE *)&dword_140404A6C[70318069] + v5) );
            if ( v3 > v5 )
              v3 = v5;
            dword_140404A6C[70318065] = v3;
            v6 = -1;
            if ( (int)v1 < 0 )
              LODWORD(v1) = 0;
            dword_140404A6C[70318066] = v1;
            do
              ++v6;
            while ( *((_BYTE *)&dword_140404A6C[70318069] + v6) );
            if ( (int)v1 > v6 )
              LODWORD(v1) = v6;
            dword_140404A6C[70318066] = v1;
            if ( v4 == dword_140404A6C[468760165] )
              return -1;
            v7 = v4;
            v4 = ((_WORD)v4 + 1) & 0x3FF;
            v8 = 5 * v7;
            dword_140404A6C[468760166] = v4;
            if ( !dword_140404A6C[5 * v7 + 468760167] )
            {
              v9 = dword_140404A6C[v8 + 468760168];
              v10 = dword_140404A6C[v8 + 468760170] & 3;
              if ( v9 == 76 )
                return 9;
              if ( v9 == 42 )
                return 10;
              if ( v9 != 225 )
                break;
            }
          }
          switch ( v9 )
          {
            case '(':
              return 11;
            case ')':
              return 1;
            case '+':
              LOBYTE(v2) = v10 != 0;
              return v2 + 12;
          }
          if ( v9 != 73 )
            break;
          v0 ^= 1u;
          dword_140404A6C[70318067] = v0;
        }
        if ( v9 != 74 )
          break;
        LODWORD(v1) = 0;
        dword_140404A6C[70318066] = 0;
        if ( !v10 )
          v3 = 0;
      }
      if ( v9 == 77 )
      {
        v1 = -1;
        do
          ++v1;
        while ( *((_BYTE *)&dword_140404A6C[70318069] + v1) );
        goto LABEL_39;
      }
      if ( v9 != 80 )
        break;
      if ( (int)v1 > 0 )
      {
        LODWORD(v1) = v1 - 1;
LABEL_39:
        dword_140404A6C[70318066] = v1;
      }
LABEL_40:
      if ( !v10 )
        v3 = v1;
    }
    if ( v9 == 79 )
    {
      v11 = -1;
      do
        ++v11;
      while ( *((_BYTE *)&dword_140404A6C[70318069] + v11) );
      if ( (int)v1 >= v11 )
        goto LABEL_40;
      LODWORD(v1) = v1 + 1;
      goto LABEL_39;
    }
    v12 = dword_140404A6C[v8 + 468760169];
  }
  while ( v12 < 32 || v12 > 122 );
  if ( v10 )
  {
    if ( (unsigned int)(v12 - 97) <= 0x19 )
      return toupper(v12);
    switch ( v12 )
    {
      case '0':
        return 41;
      case '1':
        return 33;
      case '2':
        return 64;
      case '3':
        return 35;
      case '4':
        return 36;
      case '5':
        return 37;
      case '6':
        return 94;
      case '7':
        return 38;
      case '8':
        return 42;
      case '9':
        return 40;
      case '-':
        return 95;
      case '=':
        return 43;
      case '/':
        return 63;
      case ',':
        return 60;
      case '.':
        return 62;
      case ';':
        return 58;
      case '\'':
        return 34;
    }
  }
  return v12;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151042A30: using guessed type unsigned int;
// 151042A34: using guessed type unsigned int;
// 151042A38: using guessed type unsigned int;
// 1B0032404: using guessed type unsigned int;

//----- (0000000140076320) ----------------------------------------------------
void            sub_140076320(__int64 a1, int a2)
{
  char v2; // bl
  unsigned __int64 v3; // rcx
  signed int v4; // edx
  int v5; // r8d
  _BYTE *v6; // r9
  char *v7; // rdx
  char v8; // cl
  unsigned int v9; // r8d
  char *v10; // rdx
  char v11; // cl

  v2 = a2;
  if ( a2 < 32 )
  {
    if ( a2 == 9 )
    {
      if ( !(unsigned int)sub_1400722C0() )
      {
        v7 = (char *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066];
        if ( *v7 )
        {
          do
          {
            v8 = v7[1];
            *v7++ = v8;
          }
          while ( v8 );
        }
      }
    }
    else if ( a2 == 10 && !(unsigned int)sub_1400722C0() )
    {
      v9 = dword_140404A6C[70318066];
      if ( (int)dword_140404A6C[70318066] > 0 )
      {
        v10 = (char *)&dword_140404A6C[70318068] + dword_140404A6C[70318066] + 3;
        if ( *v10 )
        {
          do
          {
            v11 = v10[1];
            *v10++ = v11;
          }
          while ( v11 );
          v9 = dword_140404A6C[70318066];
        }
        dword_140404A6C[70318066] = v9 - 1;
        dword_140404A6C[70318065] = v9 - 1;
      }
    }
  }
  else
  {
    sub_1400722C0();
    v3 = -1;
    do
      ++v3;
    while ( *((_BYTE *)&dword_140404A6C[70318069] + v3) );
    if ( v3 < (int)dword_140404A6C[70318068] )
    {
      v4 = dword_140404A6C[70318066];
      if ( (int)dword_140404A6C[70318066] < 0x2000 )
      {
        if ( dword_140404A6C[70318067] )
        {
          if ( !*((_BYTE *)&dword_140404A6C[70318069] + (int)dword_140404A6C[70318066]) )
          {
            *((_BYTE *)&dword_140404A6C[70318069] + dword_140404A6C[70318066] + 1) = 0;
            v4 = dword_140404A6C[70318066];
          }
        }
        else
        {
          v5 = v3 + 1;
          if ( (int)v3 + 1 > (int)dword_140404A6C[70318066] )
          {
            v6 = (char *)&dword_140404A6C[70318069] + v5;
            do
            {
              --v5;
              *v6 = *(v6 - 1);
              --v6;
              v4 = dword_140404A6C[70318066];
            }
            while ( v5 > (int)dword_140404A6C[70318066] );
          }
        }
        *((_BYTE *)&dword_140404A6C[70318069] + v4) = v2;
        dword_140404A6C[70318065] = ++dword_140404A6C[70318066];
      }
    }
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151042A30: using guessed type unsigned int;
// 151042A34: using guessed type unsigned int;

//----- (00000001400764B0) ----------------------------------------------------
void            sub_1400764B0(char *a1, float a2, float a3, float a4, char a5)
{
  char *v5; // rbx
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  unsigned int *v9; // rcx
  char v10; // al

  v5 = a1;
  v6 = a3;
  v7 = a2;
  if ( (int)dword_140404A6C[70212041] < 1024 )
  {
    v8 = sub_14006F060(dword_140404A6C[70087066], a1, a4);
    if ( (a5 & 1) != 0 )
    {
      v7 = a2 + (float)(v8 * -0.5);
    }
    else if ( (a5 & 2) != 0 )
    {
      v7 = a2 - v8;
    }
    if ( (a5 & 4) != 0 )
    {
      v6 = a3 + (float)(a4 * -0.5);
    }
    else if ( (a5 & 8) != 0 )
    {
      v6 = a3 - a4;
    }
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212043] = dword_140404A6C[70087046];
    v9 = &dword_140404A6C[77 * dword_140404A6C[70212041] + 70212055];
    do
    {
      v10 = *v5++;
      *(_BYTE *)v9 = v10;
      v9 = (unsigned int *)((char *)v9 + 1);
    }
    while ( v10 );
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212042] = dword_140404A6C[70087066];
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212044] = v7;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212045] = v6;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212050] = a4;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051] = v7;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052] = v6;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212053] = a4;
    *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212054] = a4;
    if ( dword_140404A6C[70087046] != -1 )
    {
      *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051] = *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290981]
                                                                            + *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212051];
      *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052] = (float)(*(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290982]
                                                                                    - *(float *)&dword_140404A6C[98 * dword_140404A6C[70087046] + 70290905])
                                                                            + *(float *)&dword_140404A6C[77 * dword_140404A6C[70212041] + 70212052];
    }
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212046] = dword_140404A6C[70087087];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212047] = dword_140404A6C[70087088];
    dword_140404A6C[77 * dword_140404A6C[70212041] + 70212048] = dword_140404A6C[70087089];
    dword_140404A6C[77 * dword_140404A6C[70212041]++ + 70212049] = dword_140404A6C[70087090];
  }
}

//----- (0000000140076770) ----------------------------------------------------
__int64            sub_140076770(char a1)
{
  unsigned int *v1; // rdx
  unsigned int *v2; // r8
  __int64 v3; // rax
  __int64 v5; // r14
  __int128 v6; // xmm1
  unsigned int v7; // r10d
  int j; // edx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  int i; // ecx
  __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // ebp
  int v15; // esi
  unsigned int v16; // xmm3_4
  unsigned int v17; // xmm2_4
  signed int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // edi
  int v21; // r9d
  __int64 v22; // r10
  int v23; // edx
  unsigned int *v24; // rcx
  __int64 v25; // r11
  unsigned __int64 v26; // r10
  unsigned int *v27; // r8
  __int64 v28; // rcx
  float v29; // xmm0_4
  float v30; // xmm0_4
  __int64 v31; // rcx
  float v32; // xmm0_4
  float v33; // xmm0_4
  __int64 v34; // rcx
  float v35; // xmm0_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  float v38; // xmm0_4
  float v39; // xmm0_4
  __int64 v40; // rcx
  float v41; // xmm0_4
  float v42; // xmm0_4
  unsigned int v43; // edx
  unsigned int *v44; // rax
  int v45; // ecx
  signed int v46; // r8d
  int v47; // edx
  __int64 v48; // r11
  unsigned int *v49; // rcx
  signed int v50; // r9d
  unsigned int v51; // r10d
  __int64 v52; // rcx
  unsigned int *v53; // rcx
  int v54; // edx
  __int64 v55; // rbx
  __int64 v56; // rax
  float *v57; // rax
  int v58; // edx
  unsigned int v59; // r10d
  signed int v60; // ecx
  float v61; // xmm0_4
  __int64 v62; // rcx
  unsigned int v63; // r8d
  __int64 v64; // r9
  int v65; // edx
  __int64 v66; // r10
  unsigned int *v67; // rcx
  int v68; // eax
  unsigned int *v69; // rcx
  int v70; // eax
  __int64 result; // rax
  int v72; // [rsp+60h] [rbp+8h]
  int v73; // [rsp+68h] [rbp+10h]

  v1 = &dword_140404A6C[70317141];
  dword_140404A6C[70087108] = dword_140404A6C[70087106];
  v2 = &dword_140404A6C[70317013];
  v3 = 2;
  v5 = 128;
  do
  {
    *(_OWORD *)v1 = *(_OWORD *)v2;
    *((_OWORD *)v1 + 1) = *((_OWORD *)v2 + 1);
    *((_OWORD *)v1 + 2) = *((_OWORD *)v2 + 2);
    *((_OWORD *)v1 + 3) = *((_OWORD *)v2 + 3);
    *((_OWORD *)v1 + 4) = *((_OWORD *)v2 + 4);
    *((_OWORD *)v1 + 5) = *((_OWORD *)v2 + 5);
    *((_OWORD *)v1 + 6) = *((_OWORD *)v2 + 6);
    v1 += 32;
    v6 = *((_OWORD *)v2 + 7);
    v2 += 32;
    *((_OWORD *)v1 - 1) = v6;
    --v3;
  }
  while ( v3 );
  v7 = dword_140404A6C[468760165];
  *(_OWORD *)v1 = *(_OWORD *)v2;
  *((_OWORD *)v1 + 1) = *((_OWORD *)v2 + 1);
  *((_OWORD *)v1 + 2) = *((_OWORD *)v2 + 2);
  *((_OWORD *)v1 + 3) = *((_OWORD *)v2 + 3);
  *((_WORD *)v1 + 32) = *((_WORD *)v2 + 32);
  *((_BYTE *)v1 + 66) = *((_BYTE *)v2 + 66);
  if ( (a1 & 2) != 0 )
  {
    if ( !dword_140404A6C[70318064] )
    {
      for ( i = dword_140404A6C[70087110]; i != v7; dword_140404A6C[70087110] = i )
      {
        if ( !dword_140404A6C[5 * i + 468760167] )
        {
          v12 = (int)dword_140404A6C[dword_140404A6C[5 * i + 468760168] + 70317269];
          if ( (_DWORD)v12 != -1 )
          {
            dword_140404A6C[122 * v12 + 70087121] = 1;
            LOWORD(i) = dword_140404A6C[70087110];
          }
        }
        i = ((_WORD)i + 1) & 0x3FF;
      }
    }
  }
  else if ( !dword_140404A6C[70318064] )
  {
    for ( j = dword_140404A6C[468760166]; j != v7; dword_140404A6C[468760166] = j )
    {
      v9 = dword_140404A6C[5 * j + 468760167];
      if ( v9 == 1 )
      {
        v10 = (int)dword_140404A6C[dword_140404A6C[5 * j + 468760168] + 70317269];
        if ( (_DWORD)v10 != -1 )
          dword_140404A6C[122 * v10 + 70087121] = 1;
        *((_BYTE *)&dword_140404A6C[70317013] + (int)dword_140404A6C[5 * j + 468760168]) = 0;
      }
      if ( !v9 )
        *((_BYTE *)&dword_140404A6C[70317013] + (int)dword_140404A6C[5 * j + 468760168]) = 1;
      j = ((_WORD)j + 1) & 0x3FF;
    }
  }
  dword_140404A6C[70087110] = v7;
  dword_140404A6C[70317858] = dword_140404A6C[70317819];
  *(_OWORD *)&dword_140404A6C[70317820] = *(_OWORD *)&dword_140404A6C[70317781];
  *(_OWORD *)&dword_140404A6C[70317824] = *(_OWORD *)&dword_140404A6C[70317785];
  *(_OWORD *)&dword_140404A6C[70317828] = *(_OWORD *)&dword_140404A6C[70317789];
  *(_OWORD *)&dword_140404A6C[70317832] = *(_OWORD *)&dword_140404A6C[70317793];
  *(_OWORD *)&dword_140404A6C[70317836] = *(_OWORD *)&dword_140404A6C[70317797];
  *(_OWORD *)&dword_140404A6C[70317840] = *(_OWORD *)&dword_140404A6C[70317801];
  *(_OWORD *)&dword_140404A6C[70317844] = *(_OWORD *)&dword_140404A6C[70317805];
  *(_OWORD *)&dword_140404A6C[70317848] = *(_OWORD *)&dword_140404A6C[70317809];
  *(_QWORD *)&dword_140404A6C[70317856] = *(_QWORD *)&dword_140404A6C[70317817];
  *(_OWORD *)&dword_140404A6C[70317852] = *(_OWORD *)&dword_140404A6C[70317813];
  if ( (a1 & 1) != 0 )
  {
    v13 = dword_140404A6C[468760163];
    v15 = dword_140404A6C[468760162];
    v14 = dword_140404A6C[468760161];
    v17 = dword_140404A6C[468760126];
    v16 = dword_140404A6C[468760125];
  }
  else
  {
    v13 = sr_ui_mouse_state(&v72, &v73);
    v14 = v13 & 1;
    v15 = ((unsigned __int8)v13 >> 2) & 1;
    dword_140404A6C[468760163] = v13;
    dword_140404A6C[468760161] = v14;
    dword_140404A6C[468760162] = v15;
    *(float *)&v16 = (float)((float)v72 * *(float *)&dword_140404A6C[438291414])
                   / (float)(int)dword_140404A6C[137297755];
    dword_140404A6C[468760125] = v16;
    *(float *)&v17 = (float)((float)v73 * *(float *)&dword_140404A6C[438291415])
                   / (float)(int)dword_140404A6C[137297756];
    dword_140404A6C[468760126] = v17;
  }
  v18 = dword_140404A6C[70087103];
  dword_140404A6C[70317819] = v13;
  dword_140404A6C[70087046] = -1;
  dword_140404A6C[70087029] = 0;
  dword_140404A6C[70087064] = -1;
  dword_140404A6C[70087047] = 0;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1082130432;
  dword_140404A6C[70087083] = 1;
  *(_OWORD *)&dword_140404A6C[70317781] = *(_OWORD *)&dword_140404A6C[468760125];
  *(_OWORD *)&dword_140404A6C[70317785] = *(_OWORD *)&dword_140404A6C[468760129];
  *(_OWORD *)&dword_140404A6C[70317789] = *(_OWORD *)&dword_140404A6C[468760133];
  *(_OWORD *)&dword_140404A6C[70317793] = *(_OWORD *)&dword_140404A6C[468760137];
  *(_OWORD *)&dword_140404A6C[70317797] = *(_OWORD *)&dword_140404A6C[468760141];
  *(_OWORD *)&dword_140404A6C[70317801] = *(_OWORD *)&dword_140404A6C[468760145];
  *(_OWORD *)&dword_140404A6C[70317805] = *(_OWORD *)&dword_140404A6C[468760149];
  *(_OWORD *)&dword_140404A6C[70317809] = *(_OWORD *)&dword_140404A6C[468760153];
  *(_QWORD *)&dword_140404A6C[70317817] = *(_QWORD *)&dword_140404A6C[468760161];
  *(_OWORD *)&dword_140404A6C[70317813] = *(_OWORD *)&dword_140404A6C[468760157];
  if ( dword_140404A6C[70087103] != -1 )
  {
    v19 = 98LL * (int)dword_140404A6C[70087103];
    if ( (int)dword_140404A6C[v19 + 70290891] < 3 )
    {
      v18 = dword_140404A6C[v19 + 70290894];
      dword_140404A6C[70087103] = v18;
    }
  }
  v20 = -1;
  do
  {
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = &dword_140404A6C[70290893];
    do
    {
      if ( *(v24 - 2) == 3 && *v24 == v20 )
      {
        ++v22;
        dword_140404A6C[v24[2] + 18215381] = v23;
      }
      ++v23;
      v24 += 98;
    }
    while ( v23 < 256 );
    v25 = v22 - 1;
    if ( v22 - 1 < 0 )
      break;
    if ( v22 < 4 )
      goto LABEL_163;
    v26 = (unsigned __int64)v22 >> 2;
    v27 = &dword_140404A6C[v25 + 18215379];
    v25 -= 4 * v26;
    do
    {
      v28 = 98LL * (int)v27[2];
      if ( dword_140404A6C[v28 + 70290891] == 3 )
      {
        v29 = *(float *)&dword_140404A6C[v28 + 70290973];
        if ( *(float *)&v16 >= v29 && *(float *)&v16 < (float)(v29 + *(float *)&dword_140404A6C[v28 + 70290975]) )
        {
          v30 = *(float *)&dword_140404A6C[v28 + 70290974];
          if ( *(float *)&v17 >= v30 && *(float *)&v17 < (float)(v30 + *(float *)&dword_140404A6C[v28 + 70290976]) )
          {
            v20 = v27[2];
            v21 = 1;
          }
        }
      }
      v31 = 98LL * (int)v27[1];
      if ( dword_140404A6C[v31 + 70290891] == 3 )
      {
        v32 = *(float *)&dword_140404A6C[v31 + 70290973];
        if ( *(float *)&v16 >= v32 && *(float *)&v16 < (float)(v32 + *(float *)&dword_140404A6C[v31 + 70290975]) )
        {
          v33 = *(float *)&dword_140404A6C[v31 + 70290974];
          if ( *(float *)&v17 >= v33 && *(float *)&v17 < (float)(v33 + *(float *)&dword_140404A6C[v31 + 70290976]) )
          {
            v20 = v27[1];
            v21 = 1;
          }
        }
      }
      v34 = 98LL * (int)*v27;
      if ( dword_140404A6C[v34 + 70290891] == 3 )
      {
        v35 = *(float *)&dword_140404A6C[v34 + 70290973];
        if ( *(float *)&v16 >= v35 && *(float *)&v16 < (float)(v35 + *(float *)&dword_140404A6C[v34 + 70290975]) )
        {
          v36 = *(float *)&dword_140404A6C[v34 + 70290974];
          if ( *(float *)&v17 >= v36 && *(float *)&v17 < (float)(v36 + *(float *)&dword_140404A6C[v34 + 70290976]) )
          {
            v20 = *v27;
            v21 = 1;
          }
        }
      }
      v37 = 98LL * (int)*(v27 - 1);
      if ( dword_140404A6C[v37 + 70290891] == 3 )
      {
        v38 = *(float *)&dword_140404A6C[v37 + 70290973];
        if ( *(float *)&v16 >= v38 && *(float *)&v16 < (float)(v38 + *(float *)&dword_140404A6C[v37 + 70290975]) )
        {
          v39 = *(float *)&dword_140404A6C[v37 + 70290974];
          if ( *(float *)&v17 >= v39 && *(float *)&v17 < (float)(v39 + *(float *)&dword_140404A6C[v37 + 70290976]) )
          {
            v20 = *(v27 - 1);
            v21 = 1;
          }
        }
      }
      v27 -= 4;
      --v26;
    }
    while ( v26 );
    if ( v25 >= 0 )
    {
LABEL_163:
      do
      {
        v40 = 98LL * (int)dword_140404A6C[v25 + 18215381];
        if ( dword_140404A6C[v40 + 70290891] == 3 )
        {
          v41 = *(float *)&dword_140404A6C[v40 + 70290973];
          if ( *(float *)&v16 >= v41 && *(float *)&v16 < (float)(v41 + *(float *)&dword_140404A6C[v40 + 70290975]) )
          {
            v42 = *(float *)&dword_140404A6C[v40 + 70290974];
            if ( *(float *)&v17 >= v42 && *(float *)&v17 < (float)(v42 + *(float *)&dword_140404A6C[v40 + 70290976]) )
            {
              v20 = dword_140404A6C[v25 + 18215381];
              v21 = 1;
            }
          }
        }
        --v25;
      }
      while ( v25 >= 0 );
    }
  }
  while ( v21 );
  v43 = dword_140404A6C[70087107];
  if ( dword_140404A6C[70315979] == 3 )
    v20 = dword_140404A6C[70315981];
  dword_140404A6C[70087105] = v20;
  if ( dword_140404A6C[70087107] != -1 )
  {
    if ( dword_140404A6C[122 * dword_140404A6C[70087107] + 70087113] != 3 )
      v43 = -1;
    dword_140404A6C[70087107] = v43;
  }
  if ( v14 && !dword_140404A6C[70317856] || v15 && !dword_140404A6C[70317857] )
  {
    v18 = v20;
    v44 = &dword_140404A6C[70087115];
    dword_140404A6C[70087103] = v20;
    v45 = 0;
    v46 = v20;
    do
    {
      if ( *(v44 - 2) == 3 && *v44 == 6 )
      {
        if ( v44[7] == v20 )
          v43 = v45;
        dword_140404A6C[70087107] = v43;
      }
      ++v45;
      v44 += 122;
    }
    while ( v45 < 1024 );
    if ( v20 != -1 )
    {
      do
      {
        v47 = 0;
        v48 = 98LL * v46;
        v49 = &dword_140404A6C[70290895];
        v50 = dword_140404A6C[v48 + 70290895];
        v51 = dword_140404A6C[v48 + 70290893];
        do
        {
          if ( (int)*(v49 - 4) >= 2 && v47 != v46 && *(v49 - 2) == v51 && (int)*v49 < v50 )
            ++*v49;
          ++v47;
          v49 += 98;
        }
        while ( v47 < 256 );
        v46 = dword_140404A6C[v48 + 70290893];
        dword_140404A6C[v48 + 70290895] = 0;
      }
      while ( v46 != -1 );
      v18 = dword_140404A6C[70087103];
    }
  }
  dword_140404A6C[70087104] = v18;
  if ( v18 != -1 )
  {
    v52 = 98LL * v18;
    if ( dword_140404A6C[v52 + 70290972] )
      dword_140404A6C[70087104] = dword_140404A6C[v52 + 70290894];
  }
  dword_140404A6C[70087109] = -1;
  v53 = &dword_140404A6C[70317269];
  v54 = 0;
  v55 = 512;
  do
  {
    v56 = (int)*v53;
    if ( (_DWORD)v56 != -1
      && ((int)dword_140404A6C[122 * v56 + 70087113] < 3 || dword_140404A6C[122 * v56 + 70087120] != v54) )
    {
      *v53 = -1;
    }
    ++v54;
    ++v53;
  }
  while ( v54 < 512 );
  v57 = (float *)&dword_140404A6C[70087135];
  v58 = 0;
  v59 = dword_140404A6C[70087109];
  v60 = dword_140404A6C[70087106];
  do
  {
    if ( *((_DWORD *)v57 - 22) == 3 && *((_DWORD *)v57 - 13) == v20 )
    {
      if ( *((_DWORD *)v57 - 17) )
      {
        v61 = *(v57 - 1);
        if ( *(float *)&dword_140404A6C[70317781] >= v61
          && *(float *)&dword_140404A6C[70317781] < (float)(v61 + v57[1])
          && *(float *)&dword_140404A6C[70317782] >= *v57
          && *(float *)&dword_140404A6C[70317782] < (float)(*v57 + v57[2])
          && (!dword_140404A6C[70317817] || !dword_140404A6C[70317856] || v60 == v58) )
        {
          dword_140404A6C[70087109] = v58;
          v59 = v58;
          if ( dword_140404A6C[70317817] )
          {
            if ( !dword_140404A6C[70317856] )
              v60 = v58;
            dword_140404A6C[70087106] = v60;
          }
        }
      }
    }
    ++v58;
    v57 += 122;
  }
  while ( v58 < 1024 );
  if ( v59 != -1 )
  {
LABEL_126:
    if ( dword_140404A6C[70317817] )
      goto LABEL_132;
    goto LABEL_127;
  }
  if ( dword_140404A6C[70317817] )
  {
    if ( !dword_140404A6C[70317856] )
      v60 = -1;
    dword_140404A6C[70087106] = v60;
    goto LABEL_126;
  }
LABEL_127:
  *(_QWORD *)&dword_140404A6C[70317860] = -1;
  if ( v60 != -1 && !dword_140404A6C[70317856] )
  {
    v62 = 122LL * v60;
    if ( (int)dword_140404A6C[v62 + 70087113] < 3 || dword_140404A6C[v62 + 70087115] - 3 > 2 )
      dword_140404A6C[70087106] = -1;
  }
LABEL_132:
  v63 = dword_140404A6C[70087111];
  if ( dword_140404A6C[70087111] != -1 )
  {
    v64 = 0;
    v65 = 1;
    v66 = 4;
    do
    {
      if ( (dword_140404A6C[70326261] & v65) == v65 && (dword_140404A6C[70326262] & v65) != v65 )
      {
        if ( dword_140404A6C[122 * (int)v63 + 70087138 + v64] != -1 )
          v63 = dword_140404A6C[122 * (int)v63 + 70087138 + v64];
        dword_140404A6C[70087111] = v63;
      }
      v65 = __ROL4__(v65, 1);
      ++v64;
      --v66;
    }
    while ( v66 );
    if ( (int)dword_140404A6C[122 * v63 + 70087113] < 3 )
      v63 = -1;
    dword_140404A6C[70087111] = v63;
  }
  dword_140404A6C[70087112] = 0;
  if ( (dword_140404A6C[70326261] & 0x10) != 0 )
    dword_140404A6C[70087112] = (dword_140404A6C[70326262] & 0x10) == 0;
  dword_140404A6C[70326262] = dword_140404A6C[70326261];
  v67 = &dword_140404A6C[70290989];
  do
  {
    v68 = *(v67 - 98);
    if ( v68 > 1 )
      *(v67 - 98) = v68 - 1;
    if ( (int)*v67 > 1 )
      --*v67;
    v67 += 196;
    --v5;
  }
  while ( v5 );
  v69 = &dword_140404A6C[70087235];
  do
  {
    v70 = *(v69 - 122);
    if ( v70 > 1 )
      *(v69 - 122) = v70 - 1;
    if ( (int)*v69 > 1 )
      --*v69;
    v69 += 244;
    --v55;
  }
  while ( v55 );
  if ( (int)dword_140404A6C[70315979] > 0 )
    --dword_140404A6C[70315979];
  result = dword_140404A6C[70316496];
  dword_140404A6C[70318064] = 0;
  if ( (int)dword_140404A6C[70316496] > 0 )
    return --dword_140404A6C[70316496];
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61040: using guessed type int[];
// 150F61084: using guessed type unsigned int;
// 150F61088: using guessed type unsigned int;
// 150F610CC: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F61118: using guessed type unsigned int;
// 150F61168: using guessed type unsigned int;
// 150F6116C: using guessed type unsigned int;
// 150F61170: using guessed type unsigned int;
// 150F61174: using guessed type unsigned int;
// 150F61178: using guessed type unsigned int;
// 150F6117C: using guessed type unsigned int;
// 150F61180: using guessed type unsigned int;
// 150F61184: using guessed type unsigned int;
// 150F61188: using guessed type unsigned int;
// 150F6118C: using guessed type unsigned int;
// 151040998: using guessed type unsigned int;
// 1510409A0: using guessed type unsigned int;
// 1510411AC: using guessed type unsigned int;
// 1510425C0: using guessed type unsigned int;
// 1510425D0: using guessed type unsigned int;
// 1510425E0: using guessed type unsigned int;
// 1510425F0: using guessed type unsigned int;
// 151042600: using guessed type unsigned int;
// 151042610: using guessed type unsigned int;
// 151042620: using guessed type unsigned int;
// 151042630: using guessed type unsigned int;
// 151042640: using guessed type unsigned int;
// 151042650: using guessed type unsigned int;
// 151042658: using guessed type unsigned int;
// 15104265C: using guessed type unsigned int;
// 15104266C: using guessed type unsigned int;
// 15104267C: using guessed type unsigned int;
// 15104268C: using guessed type unsigned int;
// 15104269C: using guessed type unsigned int;
// 1510426AC: using guessed type unsigned int;
// 1510426BC: using guessed type unsigned int;
// 1510426CC: using guessed type unsigned int;
// 1510426DC: using guessed type unsigned int;
// 1510426EC: using guessed type unsigned int;
// 1510426F4: using guessed type unsigned int;
// 1510426FC: using guessed type unsigned int;
// 151042A2C: using guessed type unsigned int;
// 15104AA40: using guessed type unsigned int;
// 15104AA44: using guessed type unsigned int;
// 1B0032360: using guessed type unsigned int;
// 1B0032364: using guessed type unsigned int;
// 1B0032370: using guessed type unsigned int;
// 1B0032380: using guessed type unsigned int;
// 1B0032390: using guessed type unsigned int;
// 1B00323A0: using guessed type unsigned int;
// 1B00323B0: using guessed type unsigned int;
// 1B00323C0: using guessed type unsigned int;
// 1B00323D0: using guessed type unsigned int;
// 1B00323E0: using guessed type unsigned int;
// 1B00323F0: using guessed type unsigned int;
// 1B00323F4: using guessed type unsigned int;
// 1B00323F8: using guessed type unsigned int;
// 1B0032400: using guessed type int[];
// 1B0032404: using guessed type unsigned int;

//----- (0000000140077230) ----------------------------------------------------
__int64 sub_140077230()
{
  __int64 v1; // rcx
  unsigned int v2; // edi
  __int64 v3; // rdx
  float v4; // xmm0_4
  float v5; // xmm1_4
  unsigned int v6; // xmm0_4
  __int64 v7; // rsi
  float v8; // xmm0_4
  float v9; // xmm1_4
  unsigned int *v10; // rax
  __int64 v11; // rdx
  float v12; // xmm8_4
  float v13; // xmm4_4
  unsigned int *v14; // rbx
  float v15; // xmm6_4
  float v16; // xmm8_4
  float v17; // xmm1_4
  bool v18; // zf
  unsigned int v19; // eax
  unsigned int v20; // eax
  signed int v21; // eax

  if ( !dword_140404A6C[70087029] )
  {
    dword_140404A6C[70087046] = -1;
    return 1;
  }
  v1 = (int)dword_140404A6C[70087046];
  if ( dword_140404A6C[70087046] == -1 )
    return 1;
  v2 = 0;
  if ( dword_140404A6C[70087105] == dword_140404A6C[70087046] )
  {
    v3 = 98LL * (int)dword_140404A6C[70087046];
    v4 = (float)(int)dword_140404A6C[137297772];
    dword_140404A6C[137297772] = 0;
    v5 = *(float *)&dword_140404A6C[v3 + 70290905] - (float)(v4 * 16.0);
    if ( v5 < 0.0 )
      v5 = 0.0;
    v6 = dword_140404A6C[v3 + 70290907];
    *(float *)&dword_140404A6C[v3 + 70290905] = v5;
    if ( v5 > *(float *)&v6 )
      dword_140404A6C[v3 + 70290905] = v6;
  }
  v7 = 98 * v1;
  v8 = 0.0;
  v9 = 0.0;
  v10 = &dword_140404A6C[70087122];
  v11 = 256;
  v12 = *(float *)&dword_140404A6C[98 * v1 + 70290983];
  v13 = *(float *)&dword_140404A6C[98 * v1 + 70290984];
  do
  {
    if ( *(v10 - 9) == 3 && *v10 == (_DWORD)v1 )
    {
      if ( *(v10 - 4) )
      {
        v8 = fmaxf(*((float *)v10 + 5) + *((float *)v10 + 3), v8);
        if ( v9 < (float)(*((float *)v10 + 6) + *((float *)v10 + 4)) )
          v9 = *((float *)v10 + 6) + *((float *)v10 + 4);
      }
    }
    if ( v10[113] == 3 && v10[122] == (_DWORD)v1 )
    {
      if ( v10[118] )
      {
        v8 = fmaxf(*((float *)v10 + 127) + *((float *)v10 + 125), v8);
        if ( v9 < (float)(*((float *)v10 + 128) + *((float *)v10 + 126)) )
          v9 = *((float *)v10 + 128) + *((float *)v10 + 126);
      }
    }
    if ( v10[235] == 3 && v10[244] == (_DWORD)v1 )
    {
      if ( v10[240] )
      {
        v8 = fmaxf(*((float *)v10 + 249) + *((float *)v10 + 247), v8);
        if ( v9 < (float)(*((float *)v10 + 250) + *((float *)v10 + 248)) )
          v9 = *((float *)v10 + 250) + *((float *)v10 + 248);
      }
    }
    if ( v10[357] == 3 && v10[366] == (_DWORD)v1 )
    {
      if ( v10[362] )
      {
        v8 = fmaxf(*((float *)v10 + 371) + *((float *)v10 + 369), v8);
        if ( v9 < (float)(*((float *)v10 + 372) + *((float *)v10 + 370)) )
          v9 = *((float *)v10 + 372) + *((float *)v10 + 370);
      }
    }
    v10 += 488;
    --v11;
  }
  while ( v11 );
  v14 = &dword_140404A6C[v7 + 70290905];
  if ( v9 <= v13 )
  {
    *v14 = 0;
    v15 = 0.0;
  }
  else
  {
    v15 = v9 - v13;
    sub_140070FF0(
      dword_140404A6C[v7 + 70290892],
      v12 - 16.0,
      *(float *)&dword_140404A6C[v7 + 70290905],
      16.0,
      COERCE_UNSIGNED_INT(v13 - 16.0),
      COERCE_UNSIGNED_INT(fmaxf((float)(v13 * (float)(v13 - 16.0)) / v9, 16.0)),
      (float *)&dword_140404A6C[v7 + 70290905],
      0.0,
      v9 - v13);
  }
  *(float *)&dword_140404A6C[v7 + 70290907] = v15;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  v16 = v12 - 16.0;
  dword_140404A6C[70087069] = 1098907648;
  dword_140404A6C[70087070] = 1098907648;
  v17 = *(float *)v14 - 16.0;
  if ( (int)dword_140404A6C[70317929] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317929] + 70317930] = dword_140404A6C[70087067];
    dword_140404A6C[2 * dword_140404A6C[70317929]++ + 70317931] = dword_140404A6C[70087068];
  }
  *(float *)&dword_140404A6C[70087067] = v16;
  *(float *)&dword_140404A6C[70087068] = v17;
  v18 = (unsigned int)sr_DrawMenuButton("X") == 0;
  v19 = dword_140404A6C[70317929];
  if ( !v18 )
    v2 = 1;
  if ( (int)dword_140404A6C[70317929] > 0 )
  {
    --dword_140404A6C[70317929];
    dword_140404A6C[70087067] = dword_140404A6C[2 * (v19 - 1) + 70317930];
    dword_140404A6C[70087068] = dword_140404A6C[2 * (v19 - 1) + 70317931];
  }
  v20 = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    dword_140404A6C[70087069] = dword_140404A6C[2 * (v20 - 1) + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (v20 - 1) + 70317964];
  }
  v21 = dword_140404A6C[70087029] - 1;
  dword_140404A6C[70087029] = v21;
  if ( v21 <= 0 )
    dword_140404A6C[70087046] = -1;
  else
    dword_140404A6C[70087046] = dword_140404A6C[v21 + 70087029];
  return v2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F61040: using guessed type int[];
// 150F61084: using guessed type unsigned int;
// 150F610D8: using guessed type unsigned int;
// 150F610DC: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 151042810: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 160FC481C: using guessed type unsigned int;

//----- (0000000140077660) ----------------------------------------------------
__int64            sub_140077660(char a1)
{
  unsigned int v2; // eax
  unsigned int *v3; // rbx
  __int64 v4; // rdi

  if ( QueryPerformanceFrequency((LARGE_INTEGER *)&dword_140404A6C[137297777]) )
  {
    QueryPerformanceCounter((LARGE_INTEGER *)&dword_140404A6C[137297779]);
    dword_140404A6C[137297775] = 1;
  }
  v2 = dword_140404A6C[137297769];
  if ( (a1 & 1) != 0 )
    v2 = 1;
  dword_140404A6C[137297769] = v2;
  if ( (a1 & 2) != 0 )
  {
    sub_140199043(257, &dword_140404A6C[129454453]);
    dword_140404A6C[137297774] = 1;
  }
  sub_140077710();
  v3 = &dword_140404A6C[436582486];
  v4 = 2048;
  do
  {
    unk_140404060(1, v3);
    v3 += 42;
    --v4;
  }
  while ( v4 );
  return 1;
}

// 140199043: using guessed type __int64 __fastcall(_QWORD, _QWORD);
// 140404060: using guessed type __int64 (__fastcall *unk_140404060)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160FC4810: using guessed type unsigned int;
// 160FC4824: using guessed type unsigned int;
// 160FC4828: using guessed type unsigned int;

//----- (0000000140077710) ----------------------------------------------------
void sub_140077710()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r8
  unsigned int *v7; // rax
  __int16 v8; // dx
  __int64 v9; // r8
  int v10; // [rsp+60h] [rbp+8h] BYREF
  char *v11; // [rsp+68h] [rbp+10h] BYREF
  char *v12; // [rsp+70h] [rbp+18h] BYREF

  dword_140404A6C[451221605] = unk_140404208();
  dword_140404A6C[451221606] = unk_140404210(35633);
  dword_140404A6C[451221607] = unk_140404210(35632);
  v11 = (char *)sr_mem_1402b21b0;
  v12 = (char *)sr_mem_1402b2320;
  ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[451221606], 1, (const char *const *)&v11, nullptr);
  unk_140404200(dword_140404A6C[451221606], v0);
  unk_1404041F0(dword_140404A6C[451221605], dword_140404A6C[451221606], v1);
  ((void (*)(unsigned int, int, const char *const *, const int *))unk_1404042D8)(dword_140404A6C[451221607], 1, (const char *const *)&v12, nullptr);
  unk_140404200(dword_140404A6C[451221607], v2);
  unk_1404041F0(dword_140404A6C[451221605], dword_140404A6C[451221607], v3);
  unk_1404042D0(dword_140404A6C[451221605]);
  qword_1404042E0(dword_140404A6C[451221605]);
  dword_140404A6C[451221610] = unk_140404288(dword_140404A6C[451221605], "modelviewprojectionmatrix");
  dword_140404A6C[451221618] = unk_140404288(dword_140404A6C[451221605], "tex_color");
  qword_140404308(dword_140404A6C[451221618], 0);
  unk_140404778(1, &dword_140404A6C[451221643]);
  unk_140404180(1, &dword_140404A6C[451221644]);
  unk_140404060(1, &dword_140404A6C[451221642]);
  qword_140404050(3553, dword_140404A6C[451221642]);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10242, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10243, 33071);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10240, 9728);
  (*(void (           **)(__int64, __int64, __int64))&dword_140404A6C[18215077])(3553, 10241, 9728);
  v10 = -1;
  v4 = 0;
  (*(void (           **)(__int64, _QWORD, __int64, __int64, int, _DWORD, int, int, int *))&dword_140404A6C[18215083])(
    3553,
    0,
    6408,
    1,
    1,
    0,
    6408,
    5121,
    &v10);
  unk_140404180(1, &dword_140404A6C[456807039]);
  unk_140404180(1, &dword_140404A6C[456807040]);
  unk_140404768(dword_140404A6C[451221643]);
  qword_140404170(34962, dword_140404A6C[456807039], v5);
  unk_140404190(34962, 2359296, 0, 35040);
  v7 = &dword_140404A6C[456807042];
  do
  {
    v7 += 3;
    v8 = 4 * v4++;
    *((_WORD *)v7 - 8) = v8;
    *((_WORD *)v7 - 5) = v8;
    *((_WORD *)v7 - 7) = v8 + 1;
    *((_WORD *)v7 - 6) = v8 + 2;
    *((_WORD *)v7 - 3) = v8 + 3;
    *((_WORD *)v7 - 4) = v8 + 2;
  }
  while ( v4 < 0x4000 );
  qword_140404170(34963, dword_140404A6C[456807040], v6);
  unk_140404190(34963, 196608, &dword_140404A6C[456807041], 35044);
  qword_140404170(34963, 0, v9);
  dword_140404A6C[456217206] = -1;
}

// 14007777A: variable 'v0' is possibly undefined
// 14007778C: variable 'v1' is possibly undefined
// 1400777B0: variable 'v2' is possibly undefined
// 1400777C2: variable 'v3' is possibly undefined
// 140077939: variable 'v5' is possibly undefined
// 1400779A2: variable 'v6' is possibly undefined
// 1400779CB: variable 'v9' is possibly undefined
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404060: using guessed type __int64 (__fastcall *unk_140404060)(_QWORD, _QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404180: using guessed type __int64 (__fastcall *unk_140404180)(_QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1404041F0: using guessed type __int64 (__fastcall *unk_1404041F0)(_QWORD, _QWORD, _QWORD);
// 140404200: using guessed type __int64 (__fastcall *unk_140404200)(_QWORD, _QWORD);
// 140404208: using guessed type __int64 (*unk_140404208)(void);
// 140404210: using guessed type __int64 (__fastcall *unk_140404210)(_QWORD);
// 140404288: using guessed type __int64 (__fastcall *unk_140404288)(_QWORD, _QWORD);
// 1404042D0: using guessed type __int64 (__fastcall *unk_1404042D0)(_QWORD);
// 1404042D8: using guessed type __int64 (__fastcall *unk_1404042D8)(_QWORD, _QWORD, _QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404308: using guessed type __int64 (__fastcall *qword_140404308)(_QWORD, _QWORD);
// 140404768: using guessed type __int64 (__fastcall *unk_140404768)(_QWORD);
// 140404778: using guessed type __int64 (__fastcall *unk_140404778)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 1AD059444: using guessed type unsigned int;

//----- (00000001400779F0) ----------------------------------------------------
__int64            sub_1400779F0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float v6; // xmm6_4
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm3_4

  v6 = a2[1];
  if ( (float)((float)((float)((float)(a6[1] - a5[1]) * v6) + (float)((float)(*a6 - *a5) * *a2))
             + (float)((float)(a6[2] - a5[2]) * a2[2])) < 0.0 )
    return 0;
  v7 = (float)((float)((float)(*a6 - *a4) * *a2) + (float)((float)(a6[1] - a4[1]) * v6))
     + (float)((float)(a6[2] - a4[2]) * a2[2]);
  if ( v7 > 0.0 )
    return 0;
  *a3 = v7;
  v8 = *a5 - *a4;
  v9 = a5[1] - a4[1];
  v10 = a5[2] - a4[2];
  v11 = (float)((float)(v9 * a2[1]) + (float)(v8 * *a2)) + (float)(v10 * a2[2]);
  if ( v11 == 0.0 )
    return 0;
  v12 = v7 / v11;
  *a3 = v12;
  *a1 = (float)(v12 * v8) + *a4;
  a1[1] = (float)(v12 * v9) + a4[1];
  a1[2] = (float)(v12 * v10) + a4[2];
  return 1;
}


//----- (0000000140077B30) ----------------------------------------------------
__int64            sub_140077B30(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float v6; // xmm1_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm6_4
  float v13; // xmm2_4
  float v14; // xmm7_4

  v6 = a6[2];
  v7 = (float)((float)((float)(*a6 - *a4) * *a2) + (float)((float)(a6[1] - a4[1]) * a2[1]))
     + (float)((float)(v6 - a4[2]) * a2[2]);
  v8 = (float)((float)((float)(a6[1] - a5[1]) * a2[1]) + (float)((float)(*a6 - *a5) * *a2))
     + (float)((float)(v6 - a5[2]) * a2[2]);
  if ( v7 <= 0.0 )
  {
    if ( v7 < 0.0 && v8 < 0.0 )
      return 0;
  }
  else if ( v8 > 0.0 )
  {
    return 0;
  }
  *a3 = v7;
  v10 = *a5 - *a4;
  v11 = a5[1] - a4[1];
  v12 = a5[2] - a4[2];
  v13 = (float)((float)(v11 * a2[1]) + (float)(v10 * *a2)) + (float)(v12 * a2[2]);
  if ( v13 == 0.0 )
    return 0;
  v14 = v7 / v13;
  *a3 = v14;
  *a1 = (float)(v14 * v10) + *a4;
  a1[1] = (float)(v14 * v11) + a4[1];
  a1[2] = (float)(v14 * v12) + a4[2];
  return 1;
}


//----- (0000000140077C80) ----------------------------------------------------
_BOOL8            sub_140077C80(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        float *a9)
{
  float v11; // xmm12_4
  float v12; // xmm13_4
  float v13; // xmm11_4
  float v14; // xmm10_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm14_4
  float v18; // xmm15_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm2_4
  float v24; // xmm5_4
  float v25; // xmm4_4
  float v26; // xmm0_4
  float v27; // xmm2_4

  if ( !(unsigned int)sub_1400779F0(a1, a2, a3, a4, a5, a6) )
    return 0;
  v11 = a6[1];
  v12 = a6[2];
  v13 = *a6;
  v14 = a1[1];
  v15 = a1[2];
  v16 = *a1;
  v17 = a2[1];
  v18 = *a2;
  if ( (float)((float)((float)((float)((float)((float)(v14 - v11) * (float)(a7[2] - v12))
                                     - (float)((float)(v15 - v12) * (float)(a7[1] - v11)))
                             * *a2)
                     + (float)((float)((float)((float)(v15 - v12) * (float)(*a7 - v13))
                                     - (float)((float)(*a1 - v13) * (float)(a7[2] - v12)))
                             * v17))
             + (float)((float)((float)((float)(*a1 - v13) * (float)(a7[1] - v11))
                             - (float)((float)(v14 - v11) * (float)(*a7 - v13)))
                     * a2[2])) < 0.0 )
    return 0;
  v19 = a8[1] - a7[1];
  v20 = a8[2] - a7[2];
  if ( (float)((float)((float)((float)((float)((float)(v14 - a7[1]) * v20) - (float)((float)(v15 - a7[2]) * v19)) * v18)
                     + (float)((float)((float)((float)(v15 - a7[2]) * (float)(*a8 - *a7))
                                     - (float)((float)(v16 - *a7) * v20))
                             * v17))
             + (float)((float)((float)((float)(v16 - *a7) * v19) - (float)((float)(v14 - a7[1]) * (float)(*a8 - *a7)))
                     * a2[2])) < 0.0 )
    return 0;
  v21 = v14 - a8[1];
  v22 = v16 - *a8;
  v23 = a9[2] - a8[2];
  v24 = a9[1] - a8[1];
  v25 = (float)(v21 * v23) - (float)((float)(v15 - a8[2]) * v24);
  v26 = v22 * v23;
  v27 = a2[2];
  return (float)((float)((float)(v25 * v18)
                       + (float)((float)((float)((float)(v15 - a8[2]) * (float)(*a9 - *a8)) - v26) * v17))
               + (float)((float)((float)(v22 * v24) - (float)(v21 * (float)(*a9 - *a8))) * v27)) >= 0.0
      && (float)((float)((float)((float)((float)((float)(v14 - a9[1]) * (float)(v12 - a9[2]))
                                       - (float)((float)(v15 - a9[2]) * (float)(v11 - a9[1])))
                               * v18)
                       + (float)((float)((float)((float)(v15 - a9[2]) * (float)(v13 - *a9))
                                       - (float)((float)(v16 - *a9) * (float)(v12 - a9[2])))
                               * v17))
               + (float)((float)((float)((float)(v16 - *a9) * (float)(v11 - a9[1]))
                               - (float)((float)(v14 - a9[1]) * (float)(v13 - *a9)))
                       * v27)) >= 0.0;
}


//----- (0000000140078230) ----------------------------------------------------
_BOOL8            sub_140078230(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float *a8)
{
  float v10; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm11_4
  float v13; // xmm10_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm14_4
  float v19; // xmm0_4
  float v20; // xmm7_4
  float v21; // xmm15_4
  float v22; // xmm5_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm5_4
  float v28; // xmm0_4
  float v29; // xmm2_4

  if ( !(unsigned int)sub_140077B30(a1, a2, a3, a4, a5, a6) )
    return 0;
  v10 = a6[1];
  v11 = a6[2];
  v12 = *a6;
  v13 = a1[1];
  v14 = a1[2];
  v15 = *a1;
  if ( (float)((float)((float)((float)((float)((float)(v13 - v10) * (float)(a7[2] - v11))
                                     - (float)((float)(v14 - v11) * (float)(a7[1] - v10)))
                             * *a2)
                     + (float)((float)((float)((float)(v14 - v11) * (float)(*a7 - v12))
                                     - (float)((float)(*a1 - v12) * (float)(a7[2] - v11)))
                             * a2[1]))
             + (float)((float)((float)((float)(*a1 - v12) * (float)(a7[1] - v10))
                             - (float)((float)(v13 - v10) * (float)(*a7 - v12)))
                     * a2[2])) < 0.0 )
    return 0;
  v16 = v13 - a7[1];
  v17 = a8[2] - a7[2];
  v19 = v14 - a7[2];
  v20 = *a8 - *a7;
  v22 = a8[1] - a7[1];
  v23 = v19 * v20;
  v24 = (float)(v16 * v17) - (float)(v19 * v22);
  v25 = v15 - *a7;
  v26 = v25 * v22;
  v27 = a2[2];
  v28 = v25 * v17;
  v29 = a2[1];
  if ( (float)((float)((float)(v24 * *a2) + (float)((float)(v23 - v28) * v29))
             + (float)((float)(v26 - (float)(v16 * v20)) * v27)) < 0.0 )
    return 0;
  v21 = a8[1];
  v18 = *a8;
  return (float)((float)((float)((float)((float)((float)(v13 - v21) * (float)(v11 - a8[2]))
                                       - (float)((float)(v14 - a8[2]) * (float)(v10 - v21)))
                               * *a2)
                       + (float)((float)((float)((float)(v14 - a8[2]) * (float)(v12 - v18))
                                       - (float)((float)(v15 - v18) * (float)(v11 - a8[2])))
                               * v29))
               + (float)((float)((float)((float)(v15 - v18) * (float)(v10 - v21))
                               - (float)((float)(v13 - v21) * (float)(v12 - v18)))
                       * v27)) >= 0.0;
}


//----- (00000001400784C0) ----------------------------------------------------
__int64            sub_1400784C0(_BYTE *a1, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  char *v7; // rdx
  unsigned int *v8; // rcx
  char v9; // al
  char *v10; // rdx
  unsigned int *v11; // rax
  char v12; // cl
  __int64 v14; // [rsp+0h] [rbp-178h] BYREF
  _BYTE v15[36]; // [rsp+20h] [rbp-158h] BYREF
  _BYTE v16[268]; // [rsp+44h] [rbp-134h] BYREF
  __int64 v17; // [rsp+150h] [rbp-28h]

  v4 = 32769LL * a2;
  v5 = sub_14023A198(a1, (__int64)v15);
  dword_140404A6C[v4 + 133657101] = 0;
  if ( (_DWORD)v5 != -1 )
  {
    while ( 1 )
    {
      v6 = (int)dword_140404A6C[v4 + 133657101];
      if ( (int)v6 >= 1024 )
        goto LABEL_14;
      if ( a3 )
        break;
      if ( (v15[0] & 0x10) == 0 )
      {
        v7 = v16;
        v8 = &dword_140404A6C[32 * v6 + 133657102 + v4];
        do
        {
          v9 = *v7++;
          *(_BYTE *)v8 = v9;
          v8 = (unsigned int *)((char *)v8 + 1);
        }
        while ( v9 );
LABEL_12:
        ++dword_140404A6C[v4 + 133657101];
      }
LABEL_13:
      if ( (unsigned int)sub_14023A5C4(v5, (__int64)v15) == -1 )
        goto LABEL_14;
    }
    if ( (v15[0] & 0x10) == 0 || v16[0] == 46 )
      goto LABEL_13;
    v10 = v16;
    v11 = &dword_140404A6C[32 * v6 + 133657102 + v4];
    do
    {
      v12 = *v10++;
      *(_BYTE *)v11 = v12;
      v11 = (unsigned int *)((char *)v11 + 1);
    }
    while ( v12 );
    goto LABEL_12;
  }
LABEL_14:
  LOBYTE(dword_140404A6C[32 * (__int64)(int)dword_140404A6C[v4 + 133657101] + 133657102 + v4]) = 0;
  sub_140239CCC(v5);
  sub_14023AE00(
    (unsigned __int64)&dword_140404A6C[v4 + 133657102],
    (int)dword_140404A6C[v4 + 133657101],
    0x80u,
    (int (           *)(unsigned __int64, _BYTE *))sub_14006C980);
  return sub_1401F8B20((unsigned __int64)&v14 ^ v17);
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404060: using guessed type __int64 (__fastcall *unk_140404060)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (0000000140079840) ----------------------------------------------------
__int64            sub_140079840(char *a1)
{
  __int64 result; // rax
  unsigned __int8 *v2; // rcx
  int v3; // r12d
  signed int v4; // edx
  int v5; // ebx
  signed int v6; // ebp
  unsigned int v7; // r13d
  int v8; // r15d
  int v9; // r14d
  int v10; // esi
  int v11; // edi
  int v12; // r9d
  int v13; // r10d
  int v14; // r8d
  int v15; // r11d
  int v16; // eax
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  result = sub_140170C30(a1, (int *)&dword_140404A6C[468765293], (int *)&dword_140404A6C[468765294], &v17, 0);
  v2 = (unsigned __int8 *)result;
  if ( result )
  {
    v3 = dword_140404A6C[468765293];
    if ( (int)dword_140404A6C[468765293] > 4096
      || (v4 = dword_140404A6C[468765294], (int)dword_140404A6C[468765294] > 4096)
      || (v5 = v17, v17 - 1 > 3) )
    {
      free((void *)result);
      return 0;
    }
    else
    {
      v6 = 0;
      v7 = v17 * dword_140404A6C[468765293];
      v17 *= dword_140404A6C[468765293];
      if ( (int)dword_140404A6C[468765294] > 0 )
      {
        v8 = 0;
        do
        {
          v9 = 0;
          if ( v3 > 0 )
          {
            v10 = v8;
            v11 = v8;
            do
            {
              v12 = v2[v11];
              if ( v5 <= 1 )
              {
                v13 = v2[v11];
                v14 = v13;
              }
              else
              {
                v13 = v2[v11 + 1];
                v14 = v2[v11 + 2];
              }
              if ( v5 == 4 )
                v15 = v2[v10 + 3];
              else
                v15 = 255;
              v11 += v5;
              v10 += 4;
              v16 = v9 + v3 * (v4 - v6 - 1);
              ++v9;
              dword_140404A6C[v16 + 468765295] = (v15 << 24) + v12 + (v14 << 16) + (v13 << 8);
              v3 = dword_140404A6C[468765293];
              v4 = dword_140404A6C[468765294];
            }
            while ( v9 < (int)dword_140404A6C[468765293] );
            v7 = v17;
          }
          ++v6;
          v8 += v7;
        }
        while ( v6 < v4 );
      }
      free(v2);
      return 1;
    }
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (00000001400799F0) ----------------------------------------------------
void            sub_1400799F0(char *a1)
{
  __int64 v1; // rax
  FILE *v2; // rbx
  signed int v3; // eax

  dword_140404A6C[129454558] = 0;
  v1 = sub_14020B8D8(a1, "rb");
  v2 = (FILE *)v1;
  if ( v1 )
  {
    sub_14020C4A8(v1, 0, 2u);
    dword_140404A6C[129454558] = ftell_sr(v2);
    sub_14020C4A8((__int64)v2, 0, 0);
    v3 = dword_140404A6C[129454558];
    if ( (int)dword_140404A6C[129454558] > 1048574 )
      v3 = 1048574;
    dword_140404A6C[129454558] = v3;
    fread_sr((void *)(uintptr_t)(&dword_140404A6C[129454559]), v3, 1, (FILE *)(uintptr_t)(v2));
    *((_BYTE *)&dword_140404A6C[129454559] + (int)dword_140404A6C[129454558]) = 0;
    sub_14020B9E8((__int64)v2);
  }
  dword_140404A6C[129454557] = 0;
}

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 15F1D91E0: using guessed type unsigned int;
// 15F1D91E4: using guessed type unsigned int;

//----- (0000000140079AA0) ----------------------------------------------------
__int64            sub_140079AA0(
        int a1,
        char *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v12; // r14
  void **v13; // rbx
  signed int v14; // r10d
  signed int i; // eax
  __int64 v16; // r9
  signed int v17; // ecx
  signed int v18; // edi
  void **v19; // rsi
  signed int j; // edi

  v8 = a1;
  result = sub_140079840(a2);
  if ( (_DWORD)result )
  {
    v12 = 42 * v8;
    dword_140404A6C[v12 + 436582477] = dword_140404A6C[468765293];
    dword_140404A6C[v12 + 436582478] = dword_140404A6C[468765294];
    dword_140404A6C[v12 + 436582482] = a4;
    dword_140404A6C[v12 + 436582483] = a5;
    v13 = (void **)&dword_140404A6C[42 * v8 + 436582487];
    dword_140404A6C[v12 + 436582484] = a6;
    dword_140404A6C[v12 + 436582485] = a7;
    dword_140404A6C[v12 + 436582479] = 1;
    dword_140404A6C[v12 + 436582480] = 6408;
    dword_140404A6C[v12 + 436582481] = 6408;
    free(*v13);
    *v13 = (void *)sr_path_malloc((int)(4 * dword_140404A6C[42 * v8 + 436582477] * dword_140404A6C[42 * v8 + 436582478]));
    v14 = 0;
    if ( (int)dword_140404A6C[42 * v8 + 436582478] > 0 )
    {
      do
      {
        for ( i = 0; i < (int)dword_140404A6C[v12 + 436582477]; *((_DWORD *)*v13 + v17) = dword_140404A6C[v16 + 468765295] )
        {
          v16 = i + v14 * dword_140404A6C[468765293];
          v17 = i + v14 * dword_140404A6C[v12 + 436582477];
          ++i;
        }
        ++v14;
      }
      while ( v14 < (int)dword_140404A6C[v12 + 436582478] );
    }
    qword_140404050(3553, dword_140404A6C[v12 + 436582486]);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10242,
      dword_140404A6C[v12 + 436582482]);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10243,
      dword_140404A6C[v12 + 436582483]);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10240,
      dword_140404A6C[v12 + 436582484]);
    (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
      3553,
      10241,
      dword_140404A6C[v12 + 436582485]);
    v18 = 0;
    if ( (int)dword_140404A6C[v12 + 436582479] > 0 )
    {
      v19 = v13;
      do
      {
        (*(void (           **)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, unsigned int, int, void *))&dword_140404A6C[18215083])(
          3553,
          (unsigned int)v18,
          dword_140404A6C[v12 + 436582481],
          (unsigned int)((int)dword_140404A6C[v12 + 436582477] >> v18),
          (int)dword_140404A6C[v12 + 436582478] >> v18,
          0,
          dword_140404A6C[v12 + 436582480],
          5121,
          *v19);
        ++v18;
        ++v19;
      }
      while ( v18 < (int)dword_140404A6C[v12 + 436582479] );
    }
    if ( a3 )
      unk_140404738(3553);
    if ( a8 )
    {
      for ( j = 0; j < (int)dword_140404A6C[v12 + 436582479]; ++v13 )
      {
        if ( *v13 )
        {
          free(*v13);
          *v13 = nullptr;
        }
        ++j;
      }
    }
    return 1;
  }
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404738: using guessed type double (__fastcall *unk_140404738)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);
// 1B0037420: using guessed type unsigned int;
// 1B0037424: using guessed type unsigned int;

//----- (0000000140079D60) ----------------------------------------------------
__int64            sub_140079D60(_OWORD *a1, __int64 a2, float *a3)
{
  float v3; // xmm3_4
  float *v4; // rax
  float v5; // xmm4_4
  float *v6; // rdx
  float v7; // xmm5_4
  float v8; // xmm6_4
  __int64 v9; // r8
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  __int128 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+10h] [rbp-28h]

  v3 = *a3;
  v4 = (float *)&v14;
  v5 = a3[1];
  v6 = (float *)(a2 + 8);
  v7 = a3[2];
  v8 = a3[3];
  v9 = 4;
  do
  {
    v10 = v7 * *v6;
    v11 = (float)(v3 * *(v6 - 2)) + (float)(v5 * *(v6 - 1));
    v12 = v8 * v6[1];
    v6 += 4;
    *v4++ = (float)(v11 + v10) + v12;
    --v9;
  }
  while ( v9 );
  *a1 = v14;
  return sub_1401F8B20((unsigned __int64)&v14 ^ v15);
}


//----- (0000000140079F00) ----------------------------------------------------
__int64            sub_140079F00(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm0_4

  v9 = 1.0 / (float)(a3 - a2);
  *(_QWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)a1 = v9 + v9;
  v10 = 1.0 / (float)(a5 - a4);
  *(float *)(a1 + 20) = v10 + v10;
  v11 = 1.0 / (float)(a7 - a6);
  *(float *)(a1 + 40) = v11 * -2.0;
  *(float *)(a1 + 48) = -(float)((float)(a2 + a3) * v9);
  *(float *)(a1 + 52) = -(float)((float)(a4 + a5) * v10);
  *(float *)(a1 + 56) = -(float)((float)(a6 + a7) * v11);
  return 0;
}

//----- (000000014007A240) ----------------------------------------------------
__int64            sub_14007A240(__int64 a1, float *a2)
{
  float v2; // xmm3_4
  float v3; // xmm4_4
  __int64 result; // rax

  v2 = *a2;
  v3 = fsqrt((float)((float)(v2 * v2) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]));
  if ( v3 == 0.0 )
  {
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    return 0;
  }
  else
  {
    *(float *)a1 = v2 * (float)(1.0 / v3);
    *(float *)(a1 + 4) = (float)(1.0 / v3) * a2[1];
    *(float *)(a1 + 8) = (float)(1.0 / v3) * a2[2];
  }
  return result;
}


//----- (000000014007A2C0) ----------------------------------------------------
__int64            sub_14007A2C0(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  float v7; // xmm4_4
  signed int v8; // eax
  int v9; // r8d
  int v10; // r10d
  __int64 v11; // r9

  v7 = (float)(a2 + a4);
  if ( dword_140404A6C[137297765] )
  {
    v8 = a3 * dword_140404A6C[137297761];
    v9 = 0;
    v10 = 0;
    v11 = (unsigned int)(int)(float)((float)(a4 * dword_140404A6C[137297762])
                                   * (float)(1.0 / *(float *)&dword_140404A6C[438291415]));
    if ( (int)dword_140404A6C[137297755] > (int)dword_140404A6C[137297761] )
      v9 = (signed int)(dword_140404A6C[137297755] - dword_140404A6C[137297761]) / 2;
    if ( (int)dword_140404A6C[137297756] > (int)dword_140404A6C[137297762] )
      v10 = (signed int)(dword_140404A6C[137297756] - dword_140404A6C[137297762]) / 2;
    qword_140302FE8(
      (unsigned int)(v9
                   + (int)(float)((float)(a1 * dword_140404A6C[137297761])
                                * (float)(1.0 / *(float *)&dword_140404A6C[438291414]))),
      (unsigned int)(v10
                   + (int)(float)((float)(dword_140404A6C[137297762]
                                        * (int)(float)(*(float *)&dword_140404A6C[438291415] - v7))
                                * (float)(1.0 / *(float *)&dword_140404A6C[438291415]))),
      (unsigned int)(int)(float)((float)v8 * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      v11);
  }
  else
  {
    qword_140302FE8(
      (unsigned int)(int)(float)((float)(a1 * dword_140404A6C[137297755])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      (unsigned int)(int)(float)((float)(dword_140404A6C[137297756]
                                       * (int)(float)(*(float *)&dword_140404A6C[438291415] - v7))
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291415])),
      (unsigned int)(int)(float)((float)(a3 * dword_140404A6C[137297755])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      (unsigned int)(int)(float)((float)(a4 * dword_140404A6C[137297756])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291415])));
  }
  sub_140079F00((__int64)&dword_140404A6C[431564485], -a5, a5, -a6, a6, -a7, a7);
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  return sub_14007A0E0(
           &dword_140404A6C[431564565],
           (__int64)&dword_140404A6C[431564533],
           (__int64)&dword_140404A6C[431564485]);
}

// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278D90: using guessed type __int128 xmmword_140278D90;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E5AC: using guessed type unsigned int;
// 1A724E5B0: using guessed type unsigned int;
// 1A724E5BC: using guessed type unsigned int;
// 1A724E5CC: using guessed type unsigned int;
// 1A724E5DC: using guessed type unsigned int;
// 1A724E5FC: using guessed type unsigned int;
// 1A724E60C: using guessed type unsigned int;
// 1A724E61C: using guessed type unsigned int;
// 1A724E63C: using guessed type unsigned int;

//----- (000000014007A8C0) ----------------------------------------------------
__int64            sub_14007A8C0(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  float v8; // xmm6_4
  float v9; // xmm10_4
  unsigned int v10; // ebp
  unsigned int v11; // esi
  unsigned int v12; // edi
  unsigned int v13; // ebx
  float v14; // xmm8_4

  v8 = (float)a3;
  v9 = (float)a4;
  v10 = (int)(float)((float)(a1 * dword_140404A6C[278520508]) * (float)(1.0 / *(float *)&dword_140404A6C[438291414]));
  v11 = (int)(float)((float)(a3 * dword_140404A6C[278520508]) * (float)(1.0 / *(float *)&dword_140404A6C[438291414]));
  v12 = (int)(float)((float)(dword_140404A6C[278520509]
                           * (int)(float)(*(float *)&dword_140404A6C[438291415] - (float)(a2 + a4)))
                   * (float)(1.0 / *(float *)&dword_140404A6C[438291415]));
  v13 = (int)(float)((float)(a4 * dword_140404A6C[278520509]) * (float)(1.0 / *(float *)&dword_140404A6C[438291415]));
  qword_140302FE8(v10, v12, v11, v13);
  (*(void (           **)(_QWORD, _QWORD, _QWORD, _QWORD))&dword_140404A6C[18215071])(v10, v12, v11, v13);
  *(float *)&dword_140404A6C[431564485] = a5 / (float)(a5 * a7);
  *(_OWORD *)&dword_140404A6C[431564486] = 0;
  *(_OWORD *)&dword_140404A6C[431564491] = 0;
  *(float *)&dword_140404A6C[431564490] = a5 / (float)((float)((float)(v9 / v8) * a7) * a5);
  if ( dword_140404A6C[73991626] )
  {
    *(_OWORD *)&dword_140404A6C[431564495] = xmmword_140278DE0;
    *(float *)&dword_140404A6C[431564499] = a5;
    dword_140404A6C[431564500] = 0;
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[431564497] = 0;
    dword_140404A6C[431564500] = 0;
    v14 = 1.0 / (float)(a6 - a5);
    *(float *)&dword_140404A6C[431564495] = -(float)((float)(a5 + a6) * v14);
    dword_140404A6C[431564496] = -1082130432;
    *(float *)&dword_140404A6C[431564499] = (float)(v14 * a5) * (float)(a6 * -2.0);
  }
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  return sub_14007A0E0(
           &dword_140404A6C[431564565],
           (__int64)&dword_140404A6C[431564533],
           (__int64)&dword_140404A6C[431564485]);
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278DE0: using guessed type __int128 xmmword_140278DE0;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CE8: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);
// 1A724E5A8: using guessed type unsigned int;
// 1A724E5AC: using guessed type unsigned int;
// 1A724E5B0: using guessed type unsigned int;
// 1A724E5B8: using guessed type unsigned int;
// 1A724E5BC: using guessed type unsigned int;
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;

//----- (000000014007ABA0) ----------------------------------------------------
float            sub_14007ABA0(float *a1, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm3_4
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm11_4
  float v9; // xmm7_4
  float v10; // xmm9_4
  float v11; // xmm13_4
  float v12; // xmm14_4
  float v13; // xmm15_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm4_4

  v3 = a2[1];
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v7 = v3 - v5;
  v8 = a2[2];
  v9 = *a2 - *a1;
  v10 = v8 - v6;
  v11 = *a3;
  v12 = a3[1];
  v13 = a3[2];
  if ( (float)((float)((float)((float)(v12 - v3) * (float)(v3 - v5)) + (float)((float)(*a3 - *a2) * v9))
             + (float)((float)(v13 - v8) * (float)(v8 - v6))) >= 0.0 )
    return fsqrt(
             (float)((float)((float)(v3 - v12) * (float)(v3 - v12)) + (float)((float)(*a2 - v11) * (float)(*a2 - v11)))
           + (float)((float)(v8 - v13) * (float)(v8 - v13)));
  if ( (float)((float)((float)((float)(v12 - v5) * v7) + (float)((float)(v11 - v4) * v9))
             + (float)((float)(v13 - v6) * v10)) > 0.0 )
  {
    v18 = fsqrt((float)((float)(v7 * v7) + (float)(v9 * v9)) + (float)(v10 * v10));
    if ( v18 == 0.0 )
    {
      v19 = 0.0;
      v20 = 0.0;
      v21 = 0.0;
    }
    else
    {
      v19 = v9 * (float)(1.0 / v18);
      v20 = v7 * (float)(1.0 / v18);
      v21 = v10 * (float)(1.0 / v18);
    }
    v22 = -(float)((float)((float)((float)(v12 - v5) * v20) + (float)((float)(v11 - v4) * v19))
                 + (float)((float)(v13 - v6) * v21));
    v15 = v4 - (float)((float)(v19 * v22) + v11);
    v16 = v5 - (float)((float)(v20 * v22) + v12);
    v17 = v6 - (float)((float)(v21 * v22) + v13);
  }
  else
  {
    v15 = v4 - v11;
    v16 = v5 - v12;
    v17 = v6 - v13;
  }
  return fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17));
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (000000014007ADF0) ----------------------------------------------------
__int64            sub_14007ADF0(__m128i *a1, int a2, int a3)
{
  signed int v3; // r9d
  int v4; // ebx

  v3 = dword_140404A6C[289317484];
  if ( (int)dword_140404A6C[289317484] >= 0x10000 )
    return 0;
  v4 = a3 * a2;
  if ( (signed int)(a3 * a2 + dword_140404A6C[289317484]) > (int)dword_140404A6C[289317483] )
    return 0;
  if ( (int)dword_140404A6C[289317485] > 0 )
  {
    v3 = dword_140404A6C[289317484] + 1;
    dword_140404A6C[289317485] = 0;
    ++dword_140404A6C[289317484];
  }
  sub_1401FC920(a1, (     __m128i *)((char *)&dword_140404A6C[289317486] + v3), v4);
  dword_140404A6C[289317484] += v4;
  return 1;
}

// 14007AE70: returning address of temporary local variable '%__return_address'

//----- (000000014007B0F0) ----------------------------------------------------
void            sub_14007B0F0(float *a1, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm0_4

  v3 = *a2;
  v4 = a2[2];
  v5 = a2[1];
  v6 = *a2;
  *a1 = (float)((float)(v5 * a3[3]) + (float)(*a2 * *a3)) + (float)(v4 * a3[6]);
  a1[1] = (float)((float)(v5 * a3[4]) + (float)(v6 * a3[1])) + (float)(v4 * a3[7]);
  a1[2] = (float)((float)(v5 * a3[5]) + (float)(v3 * a3[2])) + (float)(v4 * a3[8]);
}


//----- (000000014007B180) ----------------------------------------------------
__int64            sub_14007B180(     __m128i *a1, int a2, int a3)
{
  signed int v3; // eax
  int v5; // ebx

  v3 = dword_140404A6C[289301092];
  if ( (int)dword_140404A6C[289301092] >= 0x10000 )
    return 0;
  if ( (int)dword_140404A6C[289301093] > 0 )
  {
    v3 = dword_140404A6C[289301092] + 1;
    dword_140404A6C[289301093] = 0;
    ++dword_140404A6C[289301092];
  }
  v5 = a3 * a2;
  sub_1401FC920((__m128i *)((char *)&dword_140404A6C[289301094] + v3), a1, a3 * a2);
  dword_140404A6C[289301092] += v5;
  return 1;
}


//----- (000000014007B4D0) ----------------------------------------------------
void            sub_14007B4D0(float *a1, float *a2, double a3)
{
  float v4; // xmm9_4
  float v5; // xmm10_4
  float v6; // xmm12_4
  __m128 v7; // xmm0
  float v8; // xmm11_4
  float v9; // xmm8_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  float v13; // xmm4_4
  float v14; // xmm5_4

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = sub_1401F8AC0(COERCE_DOUBLE((unsigned __int64)LODWORD(a3)), (__int64)a2, a3);
  v8 = SR_VEC_LANES(128, v7, f32)[0];
  v9 = SR_VEC_READ_LANES(128, _mm_shuffle_ps(v7, v7, 1), f32)[0];
  v10 = a1[2];
  v11 = (float)(a1[1] * v6) - (float)(v10 * v5);
  SR_VEC_LANES(128, v7, f32)[0] = a1[1];
  v13 = (float)(*a1 * v5) - (float)(SR_VEC_LANES(128, v7, f32)[0] * v4);
  v14 = (float)((float)(*a1 * v4) + (float)(SR_VEC_LANES(128, v7, f32)[0] * v5)) + (float)(v10 * v6);
  v12 = (float)(v10 * v4) - (float)(*a1 * v6);
  *a1 = (float)((float)((float)((float)(v13 * v5) - (float)(v12 * v6)) * v9) + (float)(v14 * v4)) + (float)(v11 * v8);
  a1[1] = (float)((float)((float)((float)(v11 * v6) - (float)(v13 * v4)) * v9) + (float)(v14 * v5)) + (float)(v12 * v8);
  a1[2] = (float)((float)((float)((float)(v12 * v4) - (float)(v11 * v5)) * v9) + (float)(v14 * v6)) + (float)(v13 * v8);
}


//----- (000000014007B6F0) ----------------------------------------------------
__int64            sub_14007B6F0(float a1, float a2, float a3)
{
  __int64 v4; // [rsp+0h] [rbp-78h] BYREF
  float v5; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+24h] [rbp-54h]
  __int64 v7; // [rsp+2Ch] [rbp-4Ch]
  float v8; // [rsp+34h] [rbp-44h]
  __int64 v9; // [rsp+38h] [rbp-40h]
  __int64 v10; // [rsp+40h] [rbp-38h]
  float v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+4Ch] [rbp-2Ch]
  __int128 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  v13 = xmmword_140279490;
  v5 = a1;
  v8 = a2;
  v11 = a3;
  v6 = 0;
  v7 = 0;
  v9 = 0;
  v10 = 0;
  v12 = 0;
  sub_14007A0E0(&dword_140404A6C[431564517], (__int64)&v5, (__int64)&dword_140404A6C[431564517]);
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140279490: using guessed type __int128 xmmword_140279490;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007B7E0) ----------------------------------------------------
__int64            sub_14007B7E0(float a1, float a2, float a3, float a4)
{
  float v4; // xmm8_4

  v4 = a2 + a4;
  if ( dword_140404A6C[137297765] )
    return (*(__int64 (           **)(_QWORD, _QWORD, _QWORD, _QWORD))&dword_140404A6C[18215071])(
             (unsigned int)(int)(float)((float)((float)((float)(int)dword_140404A6C[137297761] * a1)
                                              * (float)(1.0 / *(float *)&dword_140404A6C[438291414]))
                                      + (float)(int)dword_140404A6C[137297763]),
             (unsigned int)(int)(float)((float)((float)((float)(*(float *)&dword_140404A6C[438291415] - v4)
                                                      * (float)(int)dword_140404A6C[137297762])
                                              * (float)(1.0 / *(float *)&dword_140404A6C[438291415]))
                                      + (float)(int)dword_140404A6C[137297764]),
             (unsigned int)(int)(float)((float)((float)(int)dword_140404A6C[137297761] * a3)
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
             (unsigned int)(int)(float)((float)((float)(int)dword_140404A6C[137297762] * a4)
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291415])));
  else
    return (*(__int64 (           **)(_QWORD, _QWORD, _QWORD, _QWORD))&dword_140404A6C[18215071])(
             (unsigned int)(int)(float)((float)((float)(int)dword_140404A6C[137297755] * a1)
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
             (unsigned int)(int)(float)((float)((float)(*(float *)&dword_140404A6C[438291415] - v4)
                                              * (float)(int)dword_140404A6C[137297756])
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291415])),
             (unsigned int)(int)(float)((float)((float)(int)dword_140404A6C[137297755] * a3)
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
             (unsigned int)(int)(float)((float)((float)(int)dword_140404A6C[137297756] * a4)
                                      * (float)(1.0 / *(float *)&dword_140404A6C[438291415])));
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980CE8: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD);

//----- (000000014007B990) ----------------------------------------------------
__int64            sub_14007B990(unsigned int *a1, _DWORD *a2)
{
  int v2; // xmm1_4
  int v3; // xmm0_4
  int v4; // xmm1_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  int v9; // xmm0_4
  __int64 v11; // [rsp+0h] [rbp-78h] BYREF
  _DWORD v12[12]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  if ( a1 )
  {
    dword_140404A6C[431564529] = *a1;
    dword_140404A6C[431564530] = a1[1];
    dword_140404A6C[431564531] = a1[2];
  }
  if ( a2 )
  {
    v2 = a2[1];
    v12[0] = *a2;
    v3 = a2[2];
    v12[1] = v2;
    v4 = a2[3];
    v12[2] = v3;
    v5 = a2[4];
    v12[4] = v4;
    v6 = a2[5];
    v12[5] = v5;
    v7 = a2[6];
    v12[6] = v6;
    v8 = a2[7];
    v12[8] = v7;
    v9 = a2[8];
    v12[9] = v8;
    v12[10] = v9;
    v13 = xmmword_140279490;
    v12[3] = 0;
    v12[7] = 0;
    v12[11] = 0;
    sub_14007A0E0(&dword_140404A6C[431564517], (__int64)v12, (__int64)&dword_140404A6C[431564517]);
  }
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A724E634: using guessed type unsigned int;
// 1A724E638: using guessed type unsigned int;

//----- (000000014007BB00) ----------------------------------------------------
double sub_14007BB00()
{
  __int64 v0; // r9
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  double result; // xmm0_8
  __int64 v5; // rcx

  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3042);
  (*(void (**)(unsigned,unsigned))&dword_140404A6C[18215109])(770,771);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  if ( dword_140404A6C[137297765] )
  {
    v0 = dword_140404A6C[137297762];
    v2 = dword_140404A6C[137297761];
    v1 = dword_140404A6C[137297764];
    v3 = dword_140404A6C[137297763];
  }
  else
  {
    v0 = dword_140404A6C[137297760];
    v1 = 0;
    v2 = dword_140404A6C[137297759];
    v3 = 0;
  }
  qword_140302FE8(v3, v1, v2, v0);
  sub_140079F00(
    (__int64)&dword_140404A6C[431564485],
    0.0,
    *(float *)&dword_140404A6C[438291414],
    *(float *)&dword_140404A6C[438291415],
    0.0,
    -1.0,
    1.0);
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  result = 0.0;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  v5 = 3592LL * (int)dword_140404A6C[438291413];
  if ( dword_140404A6C[v5 + 72777085] )
    return qword_140404050(3553, dword_140404A6C[v5 + 72777086]);
  return result;
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140302FE8: using guessed type __int64 (__fastcall *qword_140302FE8)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D58: using guessed type double (__fastcall *)(_QWORD);
// 144980D60: using guessed type double (__fastcall *)(_QWORD);
// 144980D68: using guessed type __int64 (__fastcall *)(_QWORD);
// 144980D80: using guessed type __int64 (__fastcall *)(_QWORD);
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;

//----- (000000014007BCB0) ----------------------------------------------------
void            sub_14007BCB0(int a1, int a2, int a3)
{
  __int64 v3; // rsi
  signed int v6; // ebx
  unsigned int *v7; // rdi
  signed int v8; // edi
  void **v9; // rbx

  v3 = 42LL * a1;
  qword_140404050(3553, dword_140404A6C[v3 + 436582486]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10242,
    dword_140404A6C[v3 + 436582482]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10243,
    dword_140404A6C[v3 + 436582483]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10240,
    dword_140404A6C[v3 + 436582484]);
  (*(void (           **)(__int64, __int64, _QWORD))&dword_140404A6C[18215077])(
    3553,
    10241,
    dword_140404A6C[v3 + 436582485]);
  v6 = 0;
  if ( (int)dword_140404A6C[v3 + 436582479] > 0 )
  {
    v7 = &dword_140404A6C[v3 + 436582487];
    do
    {
      (*(void (           **)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, unsigned int, int, _QWORD))&dword_140404A6C[18215083])(
        3553,
        (unsigned int)v6,
        dword_140404A6C[v3 + 436582481],
        (unsigned int)((int)dword_140404A6C[v3 + 436582477] >> v6),
        (int)dword_140404A6C[v3 + 436582478] >> v6,
        0,
        dword_140404A6C[v3 + 436582480],
        5121,
        *(_QWORD *)v7);
      ++v6;
      v7 += 2;
    }
    while ( v6 < (int)dword_140404A6C[v3 + 436582479] );
  }
  if ( a2 )
    unk_140404738(3553);
  if ( a3 )
  {
    v8 = 0;
    if ( (int)dword_140404A6C[v3 + 436582479] > 0 )
    {
      v9 = (void **)&dword_140404A6C[v3 + 436582487];
      do
      {
        if ( *v9 )
        {
          free(*v9);
          *v9 = nullptr;
        }
        ++v8;
        ++v9;
      }
      while ( v8 < (int)dword_140404A6C[v3 + 436582479] );
    }
  }
}

// 140404050: using guessed type double (__fastcall *qword_140404050)(_QWORD, _QWORD);
// 140404738: using guessed type double (__fastcall *unk_140404738)(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 144980D00: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD);
// 144980D18: using guessed type __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD);

//----- (000000014007BE20) ----------------------------------------------------
__int64            sub_14007BE20(float *a1, unsigned int *a2)
{
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  __int64 v6; // [rsp+0h] [rbp-78h] BYREF
  _Alignas(16) unsigned sr_view_translation[16];
  __int64 v12; // [rsp+60h] [rbp-18h]

  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  if ( a2 )
  {
    dword_140404A6C[431564501] = *a2;
    dword_140404A6C[431564505] = a2[1];
    dword_140404A6C[431564509] = a2[2];
    dword_140404A6C[431564502] = a2[3];
    dword_140404A6C[431564506] = a2[4];
    dword_140404A6C[431564510] = a2[5];
    dword_140404A6C[431564503] = a2[6];
    dword_140404A6C[431564507] = a2[7];
    dword_140404A6C[431564511] = a2[8];
  }
  if ( a1 )
  {
    ((_OWORD *)(void *)sr_view_translation)[0] = xmmword_140278D30;
    ((_OWORD *)(void *)sr_view_translation)[2] = xmmword_140278E20;
    v2 = *a1;
    ((_OWORD *)(void *)sr_view_translation)[1] = xmmword_140278D80;
    (*(float *)&sr_view_translation[12]) = -v2;
    v3 = a1[1];
    sr_view_translation[15] = 1065353216;
    v4 = a1[2];
    (*(float *)&sr_view_translation[13]) = -v3;
    (*(float *)&sr_view_translation[14]) = -v4;
    sub_14007A0E0(&dword_140404A6C[431564501], (__int64)((_OWORD *)(void *)sr_view_translation), (__int64)&dword_140404A6C[431564501]);
  }
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  return 0; /* all native callers ignore EAX */
}

// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E5C0: using guessed type unsigned int;
// 1A724E5C4: using guessed type unsigned int;
// 1A724E5C8: using guessed type unsigned int;
// 1A724E5D0: using guessed type unsigned int;
// 1A724E5D4: using guessed type unsigned int;
// 1A724E5D8: using guessed type unsigned int;
// 1A724E5E0: using guessed type unsigned int;
// 1A724E5E4: using guessed type unsigned int;
// 1A724E5E8: using guessed type unsigned int;
// 1A724E5F0: using guessed type unsigned int;
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;

//----- (000000014007C040) ----------------------------------------------------
int sub_14007C040()
{
  int result; // eax

  if ( dword_140404A6C[137297774] )
  {
    result = sub_140199049();
    dword_140404A6C[137297774] = 0;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160FC4824: using guessed type unsigned int;

//----- (000000014007C080) ----------------------------------------------------
__int64            sub_14007C080(int a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = 1048782LL * a1;
  result = closesocket_sr((int)dword_140404A6C[v1 + 112673944]);
  dword_140404A6C[v1 + 112673941] = 0;
  return result;
}

// 140198FD7: using guessed type __int64 __fastcall closesocket(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007C0C0) ----------------------------------------------------
__int64            sub_14007C0C0(int a1, unsigned __int16 a2, int a3, _BYTE *a4)
{
  __int64 v7; // rsi
  unsigned int v8; // eax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 argp; // [rsp+58h] [rbp+10h] BYREF

  v7 = 1048782LL * a1;
  v8 = socket_sr(2, 2, 17);
  LOWORD(dword_140404A6C[v7 + 112673945]) = 2;
  dword_140404A6C[v7 + 112673944] = v8;
  LOWORD(dword_140404A6C[v7 + 112673950]) = a2;
  dword_140404A6C[v7 + 112673946] = 0;
  HIWORD(dword_140404A6C[v7 + 112673945]) = htons_sr(a2);
  dword_140404A6C[v7 + 112673949] = 16;
  if ( !a3
    || (result = bind_sr((int)dword_140404A6C[v7 + 112673944], &dword_140404A6C[v7 + 112673945], 16), !(_DWORD)result) )
  {
    if ( a4 )
    {
      LOBYTE(dword_140404A6C[v7 + 112673942]) = *a4;
      BYTE1(dword_140404A6C[v7 + 112673942]) = a4[1];
      HIWORD(dword_140404A6C[v7 + 112673942]) = (unsigned __int8)a4[2];
    }
    v10 = (int)dword_140404A6C[v7 + 112673944];
    LODWORD(argp) = 1;
    result = ioctlsocket_sr(v10, 2147772030LL, &argp);
    dword_140404A6C[v7 + 112673941] = 1;
  }
  return result;
}

// 140198FD1: using guessed type __int64 __fastcall bind(_QWORD, _QWORD, _QWORD);
// 140198FE3: using guessed type __int64 __fastcall ioctlsocket(_QWORD, _QWORD, _QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 14019902B: using guessed type __int64 __fastcall socket(_QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007C1C0) ----------------------------------------------------
__int64            sub_14007C1C0(int a1, int a2)
{
  __int64 v2; // r13
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int *v6; // r14
  __int64 result; // rax
  unsigned int i; // esi
  char v9; // al
  unsigned int v10; // eax
  __int64 v11; // rcx

  v2 = a1;
  v4 = 1048782 * v2;
  v5 = 16387LL * a2;
  dword_140404A6C[1048782 * a1 + 112673946] = 0;
  v6 = &dword_140404A6C[1048782 * a1 + 112673949];
  result = recvfrom_sr(
             (int)dword_140404A6C[1048782 * a1 + 112673944],
             &dword_140404A6C[v5 + 135184968],
             0x10000,
             0,
             &dword_140404A6C[1048782 * v2 + 112673945],
             &dword_140404A6C[1048782 * v2 + 112673949]);
  for ( i = result; (int)result > 0; i = result )
  {
    if ( LOBYTE(dword_140404A6C[v5 + 135184968]) == LOBYTE(dword_140404A6C[v4 + 112673942])
      && BYTE1(dword_140404A6C[v5 + 135184968]) == BYTE1(dword_140404A6C[v4 + 112673942])
      && BYTE2(dword_140404A6C[v5 + 135184968]) == BYTE2(dword_140404A6C[v4 + 112673942]) )
    {
      v9 = HIBYTE(dword_140404A6C[v5 + 135184968]);
      if ( v9 == 80 )
      {
        v10 = ntohl_sr(dword_140404A6C[v4 + 112673946]);
        v11 = HIWORD(dword_140404A6C[v4 + 112673945]);
        dword_140404A6C[v4 + 112673951] = v10;
        LOWORD(dword_140404A6C[v4 + 112673952]) = ntohs_sr(v11);
        *(_QWORD *)&dword_140404A6C[v5 + 135184965] = 4;
        dword_140404A6C[v5 + 135184967] = i;
        return i;
      }
      if ( v9 == 102 )
      {
        dword_140404A6C[v4 + 112673951] = ntohl_sr(dword_140404A6C[v4 + 112673946]);
        LOWORD(dword_140404A6C[v4 + 112673952]) = ntohs_sr(HIWORD(dword_140404A6C[v4 + 112673945]));
        *(_QWORD *)&dword_140404A6C[v5 + 135184965] = 4;
        dword_140404A6C[v5 + 135184967] = i;
        result = sub_14007C3A0(v2, a2);
        if ( (_DWORD)result )
          return result;
      }
    }
    dword_140404A6C[v4 + 112673946] = 0;
    result = recvfrom_sr(
               (int)dword_140404A6C[v4 + 112673944],
               &dword_140404A6C[v5 + 135184968],
               0x10000,
               0,
               &dword_140404A6C[1048782 * v2 + 112673945],
               v6);
  }
  return result;
}

// 140199001: using guessed type __int64 __fastcall ntohl(_QWORD);
// 140199007: using guessed type __int64 __fastcall ntohs(_QWORD);
// 140199013: using guessed type __int64 __fastcall recvfrom(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007C3A0) ----------------------------------------------------
__int64            sub_14007C3A0(int a1, int a2)
{
  __int64 v2; // r14
  __int64 v3; // r11
  __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int16 v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // rax
  unsigned __int8 v10; // cl
  unsigned int v11; // r12d
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned __int8 v14; // bp
  __int64 v15; // r8
  __int64 v16; // r15
  int v17; // eax
  unsigned int v18; // r11d
  __int64 v19; // rax
  unsigned int v20; // ecx
  int v21; // esi
  __int64 v22; // rbx
  signed int v23; // eax
  __int64 v24; // r9
  signed int v25; // r8d
  __int16 v27; // [rsp+58h] [rbp+10h]

  v2 = 16387LL * a2;
  v3 = a1;
  if ( (int)dword_140404A6C[v2 + 135184966] > 0 )
  {
    ++dword_140404A6C[v2 + 135184965];
    dword_140404A6C[v2 + 135184966] = 0;
  }
  v4 = (int)dword_140404A6C[v2 + 135184965];
  v5 = v4 + 2;
  if ( (int)v4 + 2 >= 0x10000 )
  {
    v7 = v27;
  }
  else
  {
    v6 = v2 * 4 + v4;
    LODWORD(v4) = v4 + 2;
    v7 = *(_WORD *)((char *)&dword_140404A6C[135184968] + v6);
    dword_140404A6C[v2 + 135184965] = v5;
  }
  v8 = v4 + 1;
  if ( (int)v4 + 1 >= 0x10000 )
  {
    v10 = v27;
  }
  else
  {
    v9 = (int)v4;
    LODWORD(v4) = v4 + 1;
    v10 = *((_BYTE *)&dword_140404A6C[v2 + 135184968] + v9);
    dword_140404A6C[v2 + 135184965] = v8;
  }
  v11 = v10;
  v12 = v4 + 1;
  if ( (int)v4 + 1 < 0x10000 )
  {
    v13 = (int)v4;
    LODWORD(v4) = v4 + 1;
    v10 = *((_BYTE *)&dword_140404A6C[v2 + 135184968] + v13);
    dword_140404A6C[v2 + 135184965] = v12;
  }
  v14 = v10;
  if ( v11 >= 0x10 || v10 > 0x10u )
    return 0;
  LODWORD(v15) = -1;
  v16 = 1048782 * v3;
  v17 = dword_140404A6C[1048782 * v3 + 112673953];
  v18 = dword_140404A6C[1048782 * v3 + 112673954];
  while ( v17 != v18 )
  {
    if ( LOWORD(dword_140404A6C[16387 * v17 + 112673955 + v16]) == v7 )
      LODWORD(v15) = v17;
    else
      v17 = ((_BYTE)v17 + 1) & 0x3F;
    if ( (_DWORD)v15 != -1 )
      goto LABEL_22;
  }
  v15 = (int)dword_140404A6C[v16 + 112673954];
  v19 = v16 * 4 + 65548 * v15;
  *(_WORD *)((char *)&dword_140404A6C[112673955] + v19) = v7;
  *(_QWORD *)((char *)&dword_140404A6C[112673956] + v19) = 0;
  v20 = dword_140404A6C[v16 + 112673953];
  LODWORD(v19) = ((unsigned __int8)dword_140404A6C[v16 + 112673954] + 1) & 0x3F;
  dword_140404A6C[v16 + 112673954] = v19;
  if ( v20 == (_DWORD)v19 )
    dword_140404A6C[v16 + 112673953] = ((_BYTE)v20 + 1) & 0x3F;
LABEL_22:
  v21 = dword_140404A6C[v2 + 135184967] - v4;
  v22 = 16387LL * (int)v15;
  sub_1401FC920(
    (__m128i *)&dword_140404A6C[350 * v11 + 112673958 + v22 + v16],
    (     __m128i *)((char *)&dword_140404A6C[v2 + 135184968] + (int)v4),
    v21);
  v23 = 1400 * v11 + v21;
  v24 = v16 * 4 + v22 * 4;
  v25 = dword_140404A6C[v16 + 112673957 + v22];
  if ( v25 < v23 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[112673957] + v24) = v23;
    v25 = 1400 * v11 + v21;
  }
  *(unsigned int *)((char *)&dword_140404A6C[112673956] + v24) |= 1 << v11;
  if ( (*(unsigned int *)((char *)&dword_140404A6C[112673956] + v24) & ((1 << v14) - 1)) != (1 << v14) - 1 )
    return 0;
  dword_140404A6C[v2 + 135184967] = v25;
  *(_QWORD *)&dword_140404A6C[v2 + 135184965] = 4;
  sub_1401FC920(
    (__m128i *)&dword_140404A6C[v2 + 135184968],
    (     __m128i *)((char *)&dword_140404A6C[112673958] + v24),
    v25);
  return dword_140404A6C[v2 + 135184967];
}

// 14007C40F: conditional instruction was optimized away because edx.4<1
// 14007C465: conditional instruction was optimized away because edx.4<1
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007C660) ----------------------------------------------------
__int64            sub_14007C660(int a1, int a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int v8; // ebx
  __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v11; // rcx
  __int64 v12; // r8
  signed int v13; // esi
  __int64 v14; // rax
  signed int v15; // ebp
  __int64 v16; // rax
  unsigned int *v17; // r14
  _WORD *v18; // r15
       __m128i *v19; // rdi
  __int16 v20; // ax
  __int64 v21; // r8
  unsigned int *v22; // [rsp+30h] [rbp-58h]
  _WORD *v23; // [rsp+38h] [rbp-50h]
  int *v24; // [rsp+40h] [rbp-48h]
  unsigned int *v25; // [rsp+48h] [rbp-40h]
  struct sockaddr *v26; // [rsp+50h] [rbp-38h]
  __int64 v27; // [rsp+58h] [rbp-30h]

  result = a2;
  v5 = 16387LL * a2;
  if ( (int)dword_140404A6C[v5 + 135184966] > 0 )
  {
    ++dword_140404A6C[v5 + 135184965];
    dword_140404A6C[v5 + 135184966] = 0;
  }
  v8 = dword_140404A6C[v5 + 135184965];
  if ( v8 > 1400 )
  {
    if ( v8 <= 0x10000 )
    {
      v13 = 0;
      v14 = a1;
      v27 = a1;
      v15 = ((int)((unsigned __int64)(1570730897LL * v8) >> 32) >> 9)
          + ((unsigned int)((unsigned __int64)(1570730897LL * v8) >> 32) >> 31)
          + 1;
      if ( v15 > 0 )
      {
        v16 = 1048782LL * a1;
        v17 = &dword_140404A6C[v16 + 112673942];
        v22 = &dword_140404A6C[v16 + 112673946];
        v18 = (_WORD *)&dword_140404A6C[v16 + 112673952] + 1;
        v23 = (_WORD *)&dword_140404A6C[v16 + 112673945] + 1;
        v25 = &dword_140404A6C[v16 + 112673949];
        v26 = (struct sockaddr *)&dword_140404A6C[v16 + 112673945];
        v24 = (int *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v16 * 4 + 454909132);
        v19 = (     __m128i *)(((intptr_t)dword_140404A6C - 0x404a6cLL) + v5 * 4 + 544953228);
        do
        {
          dword_140404A6C[135316064] = *v17;
          LOWORD(dword_140404A6C[135316065]) = *v18;
          *(_QWORD *)&dword_140404A6C[135316061] = 8;
          HIBYTE(dword_140404A6C[135316064]) = 102;
          BYTE2(dword_140404A6C[135316065]) = v13;
          HIBYTE(dword_140404A6C[135316065]) = v15;
          if ( v8 <= 1400 )
          {
            if ( v8 + 8 < 0x10000 )
            {
              sub_1401FC920((__m128i *)&dword_140404A6C[135316066], v19, v8);
              dword_140404A6C[135316061] += v8;
            }
            v8 = 0;
          }
          else
          {
            sub_1401FC920((__m128i *)&dword_140404A6C[135316066], v19, 0x578u);
            v8 -= 1400;
            dword_140404A6C[135316061] = 1408;
          }
          *v22 = htonl_sr(a3);
          v20 = htons_sr(a4);
          v21 = dword_140404A6C[135316061];
          *v23 = v20;
          sendto_sr(*v24, &dword_140404A6C[135316064], v21, 0, v26, *v25);
          ++v13;
          v19 = (     __m128i *)((char *)v19 + 1400);
        }
        while ( v13 < v15 );
        v14 = v27;
      }
      result = 4195128 * v14;
      ++*(_WORD *)((char *)&dword_140404A6C[112673952] + result + 2);
    }
  }
  else
  {
    v9 = 1048782LL * a1;
    HIBYTE(dword_140404A6C[v5 + 135184968]) = 80;
    dword_140404A6C[v9 + 112673946] = htonl_sr(a3);
    v10 = htons_sr(a4);
    v11 = (int)dword_140404A6C[v9 + 112673944];
    v12 = dword_140404A6C[v5 + 135184965];
    HIWORD(dword_140404A6C[v9 + 112673945]) = v10;
    return sendto_sr(
             v11,
             &dword_140404A6C[v5 + 135184968],
             v12,
             0,
             &dword_140404A6C[v9 + 112673945],
             dword_140404A6C[v9 + 112673949]);
  }
  return result;
}

// 140198FEF: using guessed type __int64 __fastcall htonl(_QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 140199025: using guessed type __int64 __fastcall sendto(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1608353F0: using guessed type unsigned int;

//----- (000000014007C920) ----------------------------------------------------
_BYTE *sub_14007C920(_BYTE *a1, _BYTE *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  sub_14006E530(a1, a2, 1024, (__int64)va);
  return a1;
}


//----- (000000014007C980) ----------------------------------------------------
__int64 sub_14007C980()
{
  __int64 PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  if ( !dword_140404A6C[137297775] )
    return 0;
  QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount);
  return 1000 * (PerformanceCount - *(_QWORD *)&dword_140404A6C[137297779]) / *(_QWORD *)&dword_140404A6C[137297777];
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007CA00) ----------------------------------------------------
void            sub_14007CA00(_DWORD *a1, int *a2)
{
  int v2; // xmm5_4
  int v3; // xmm2_4
  int v4; // xmm4_4
  int v5; // xmm0_4
  int v6; // xmm1_4
  int v7; // xmm3_4
  int v8; // xmm6_4
  int v9; // xmm7_4

  v2 = *a2;
  v3 = a2[3];
  v4 = a2[4];
  v5 = a2[6];
  v6 = a2[7];
  v7 = a2[8];
  v8 = a2[5];
  v9 = a2[1];
  a1[6] = a2[2];
  a1[3] = v9;
  a1[7] = v8;
  *a1 = v2;
  a1[1] = v3;
  a1[2] = v5;
  a1[4] = v4;
  a1[5] = v6;
  a1[8] = v7;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 160FC47C0: using guessed type unsigned int;
// 160FC47D8: using guessed type unsigned int;
// 160FC47E8: using guessed type unsigned int;
// 160FC47F0: using guessed type unsigned int;
// 160FC47F4: using guessed type unsigned int;
// 160FC47F8: using guessed type unsigned int;
// 160FC47FC: using guessed type unsigned int;
// 160FC4804: using guessed type unsigned int;
// 160FC481C: using guessed type unsigned int;
// 160FC4820: using guessed type unsigned int;
// 1B0032400: using guessed type int[];
// 1B0032404: using guessed type unsigned int;

//----- (000000014007D0B0) ----------------------------------------------------
__int64            sub_14007D0B0(int *a1, unsigned __int16 a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 result; // rax

  v2 = a1[1];
  v3 = dword_1402B3840[a2];
  v4 = dword_1402B3840[(unsigned __int16)(a2 + 0x4000)];
  v5 = v3 * *a1 + 0x8000;
  *a1 = ((v4 * *a1 + 0x8000) >> 16) + ((v3 * -(int)v2 + 0x8000) >> 16);
  result = (unsigned int)(v5 >> 16) + (unsigned int)((v4 * v2 + 0x8000) >> 16);
  a1[1] = result;
  return result;
}

// 1402B3840: using guessed type int dword_1402B3840[68174];

//----- (000000014007D230) ----------------------------------------------------
__int64            sub_14007D230(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // xmm0_4
  unsigned int v4; // xmm1_4
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax

  v5 = dword_140404A6C[456217207];
  if ( (int)dword_140404A6C[456217207] < 0x10000 )
  {
    v6 = dword_140404A6C[456217208];
  }
  else
  {
    sub_14006E0D0(a1, a2, a3);
    v5 = 0;
    v6 = 9;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
  }
  v7 = (int)(v6 * v5);
  dword_140404A6C[v7 + 456217209] = v3;
  dword_140404A6C[v7 + 456217210] = v4;
  dword_140404A6C[v7 + 456217211] = 0;
  v8 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[v8 + 456217212] = dword_140404A6C[456807037];
  dword_140404A6C[v8 + 456217213] = dword_140404A6C[456807038];
  result = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[(int)result + 456217214] = dword_140404A6C[456807033];
  dword_140404A6C[(int)result + 456217215] = dword_140404A6C[456807034];
  dword_140404A6C[(int)result + 456217216] = dword_140404A6C[456807035];
  dword_140404A6C[(int)result + 456217217] = dword_140404A6C[456807036];
  ++dword_140404A6C[456217207];
  return result;
}

// 14007D27D: variable 'v3' is possibly undefined
// 14007D288: variable 'v4' is possibly undefined
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;
// 1AD299460: using guessed type unsigned int;
// 1AD299464: using guessed type unsigned int;

//----- (000000014007D320) ----------------------------------------------------
__int64            sub_14007D320(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax

  v4 = dword_140404A6C[456217207];
  v5 = 0x10000;
  if ( !dword_140404A6C[456217205] )
    v5 = 65532;
  if ( (int)dword_140404A6C[456217207] < v5 )
  {
    v6 = dword_140404A6C[456217208];
  }
  else
  {
    sub_14006E0D0(65532, dword_140404A6C[456217207], a3);
    v4 = 0;
    v6 = 9;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
  }
  v7 = v4 * v6;
  dword_140404A6C[v7 + 456217209] = *a1;
  dword_140404A6C[v7 + 456217210] = a1[1];
  dword_140404A6C[dword_140404A6C[456217207] * dword_140404A6C[456217208] + 456217211] = 0;
  v8 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[v8 + 456217212] = dword_140404A6C[456807037];
  dword_140404A6C[v8 + 456217213] = dword_140404A6C[456807038];
  result = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[(int)result + 456217214] = dword_140404A6C[456807033];
  dword_140404A6C[(int)result + 456217215] = dword_140404A6C[456807034];
  dword_140404A6C[(int)result + 456217216] = dword_140404A6C[456807035];
  dword_140404A6C[(int)result + 456217217] = dword_140404A6C[456807036];
  ++dword_140404A6C[456217207];
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;
// 1AD299460: using guessed type unsigned int;
// 1AD299464: using guessed type unsigned int;

//----- (000000014007D420)


// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;
// 1AD299460: using guessed type unsigned int;
// 1AD299464: using guessed type unsigned int;

__int64            sub_14007D420(float a1, float a2, float a3)
{
  unsigned int v3; // xmm0_4
  unsigned int v4; // xmm1_4
  unsigned int v5; // xmm2_4
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax

  memcpy(&v3, &a1, 4);
  memcpy(&v4, &a2, 4);
  memcpy(&v5, &a3, 4);
  v6 = dword_140404A6C[456217207];
  if ( (int)dword_140404A6C[456217207] < 0x10000 )
  {
    v7 = dword_140404A6C[456217208];
  }
  else
  {
    sub_14006E0D0(0, 0, 0);
    v6 = 0;
    v7 = 9;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
  }
  v8 = (int)(v7 * v6);
  dword_140404A6C[v8 + 456217209] = v3;
  dword_140404A6C[v8 + 456217210] = v4;
  dword_140404A6C[v8 + 456217211] = v5;
  v9 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[v9 + 456217212] = dword_140404A6C[456807037];
  dword_140404A6C[v9 + 456217213] = dword_140404A6C[456807038];
  result = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[(int)result + 456217214] = dword_140404A6C[456807033];
  dword_140404A6C[(int)result + 456217215] = dword_140404A6C[456807034];
  dword_140404A6C[(int)result + 456217216] = dword_140404A6C[456807035];
  dword_140404A6C[(int)result + 456217217] = dword_140404A6C[456807036];
  ++dword_140404A6C[456217207];
  return result;
}
//----- (000000014007D520) ----------------------------------------------------
__int64            sub_14007D520(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax

  v3 = dword_140404A6C[456217207];
  if ( (int)dword_140404A6C[456217207] < 0x10000 )
  {
    v5 = dword_140404A6C[456217208];
  }
  else
  {
    sub_14006E0D0((__int64)a1, a2, a3);
    v3 = 0;
    v5 = 9;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
  }
  v6 = (int)(v3 * v5);
  dword_140404A6C[v6 + 456217209] = *a1;
  dword_140404A6C[v6 + 456217210] = a1[1];
  dword_140404A6C[v6 + 456217211] = a1[2];
  v7 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[v7 + 456217212] = dword_140404A6C[456807037];
  dword_140404A6C[v7 + 456217213] = dword_140404A6C[456807038];
  result = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[(int)result + 456217214] = dword_140404A6C[456807033];
  dword_140404A6C[(int)result + 456217215] = dword_140404A6C[456807034];
  dword_140404A6C[(int)result + 456217216] = dword_140404A6C[456807035];
  dword_140404A6C[(int)result + 456217217] = dword_140404A6C[456807036];
  ++dword_140404A6C[456217207];
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;
// 1AD299460: using guessed type unsigned int;
// 1AD299464: using guessed type unsigned int;

//----- (000000014007D610) ----------------------------------------------------
__int64            sub_14007D610(unsigned int a1, float a2)
{
  __int64 v3; // rbx
  void *v4; // rcx
  _WORD *v5; // rax

  v3 = 8LL * (int)a1;
  v4 = *(void **)&dword_140404A6C[v3 + 18165779];
  *(float *)&dword_140404A6C[v3 + 18165783] = a2;
  dword_140404A6C[v3 + 18165777] = 1;
  dword_140404A6C[v3 + 18165778] = 0x40000;
  free(v4);
  v5 = (_WORD *)sr_path_malloc(0x100000);
  *(_QWORD *)&dword_140404A6C[v3 + 18165779] = (uint64)(uintptr_t)(v5);
  sub_1401FCD30((void *)(uintptr_t)(v5), 0, 0x100000u);
  *(_QWORD *)&dword_140404A6C[v3 + 18165781] = 0;
  return a1;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007D6C0) ----------------------------------------------------
__int64            sub_14007D6C0(int a1)
{
  __int64 v1; // rax
  unsigned int v2; // r10d
  int v3; // r8d

  v1 = 8LL * a1;
  v2 = dword_140404A6C[v1 + 18165782];
  v3 = dword_140404A6C[v1 + 18165781] - v2;
  if ( v3 >= (int)dword_140404A6C[v1 + 18165778] / -2 )
    return (unsigned int)v3;
  else
    return dword_140404A6C[v1 + 18165781] + dword_140404A6C[v1 + 18165778] - v2;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007D710) ----------------------------------------------------
__int64 sub_14007D710()
{
  int v0; // eax
  unsigned int *v1; // rcx
  int i; // ebx
  int v3; // r8d
  unsigned int *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int *v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // r8d
  int v13; // edx
  __int64 result; // rax
  int v15; // r10d
  unsigned int *v16; // r9
  __int64 v17; // r8
  __int64 v18; // rcx

  v0 = 0;
  if ( (int)dword_140404A6C[436668493] > 0 )
  {
    v1 = &dword_140404A6C[436668494];
    do
      *v1++ = v0++;
    while ( v0 < (int)dword_140404A6C[436668493] );
  }
  for ( i = 0; i < 4; ++i )
  {
    sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[437717070]), 0, 0x400u);
    v3 = 0;
    if ( (int)dword_140404A6C[436668493] > 0 )
    {
      v4 = &dword_140404A6C[436668494];
      do
      {
        v5 = (int)*v4;
        v4[0x40000] = v5;
        ++v4;
        ++v3;
        v6 = (unsigned __int8)(dword_140404A6C[v5 + 437192782] >> (8 * i));
        ++dword_140404A6C[v6 + 437717070];
      }
      while ( v3 < (int)dword_140404A6C[436668493] );
    }
    dword_140404A6C[437717326] = 0;
    v7 = &dword_140404A6C[437717326];
    v8 = 0;
    do
    {
      v9 = *(v7 - 256) + v8;
      v7[1] = v9;
      v10 = v9 + *(v7 - 255);
      v7[2] = v10;
      v11 = v10 + *(v7 - 254);
      v7[3] = v11;
      v12 = v11 + *(v7 - 253);
      v7[4] = v12;
      v13 = *(v7 - 252);
      v7 += 5;
      v8 = v12 + v13;
      *v7 = v8;
    }
    while ( (__int64)v7 < (__int64)&dword_140404A6C[437717581] );
    LODWORD(result) = dword_140404A6C[436668493];
    v15 = 0;
    if ( (int)dword_140404A6C[436668493] > 0 )
    {
      v16 = &dword_140404A6C[436930638];
      do
      {
        v17 = (int)*v16++;
        ++v15;
        v18 = (unsigned __int8)(dword_140404A6C[v17 + 437192782] >> (8 * i));
        dword_140404A6C[dword_140404A6C[v18 + 437717326]++ + 436668494] = v17;
        LODWORD(result) = dword_140404A6C[436668493];
      }
      while ( v15 < (int)dword_140404A6C[436668493] );
    }
  }
  result = (int)result;
  dword_140404A6C[(int)result + 436668494] = -1;
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A85C6BA0: using guessed type unsigned int;
// 1A89C6FA4: using guessed type unsigned int;

//----- (000000014007D930) ----------------------------------------------------
__int64 sub_14007D930()
{
  unsigned int v0; // r9d
  int v1; // ecx
  float v2; // xmm3_4
  unsigned int v3; // r8d
  float *v4; // rdx
  __int64 v5; // rbx
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float *v10; // rax
  float v11; // xmm1_4
  int v12; // eax
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // xmm1_4
  __int64 v16; // rcx
  unsigned int *v17; // rax
  unsigned int v18; // eax
  __int64 result; // rax

  v0 = dword_140404A6C[284024501];
  if ( dword_140404A6C[284024501] != -1 || !LOBYTE(dword_140404A6C[284024776]) )
    goto LABEL_22;
  v1 = 0;
  v2 = 65536.0;
  if ( (int)dword_140404A6C[132792829] < 4 )
  {
    if ( (int)dword_140404A6C[132792829] <= 0 )
      goto LABEL_22;
    v5 = 0;
    goto LABEL_18;
  }
  v3 = 2;
  v4 = (float *)&dword_140404A6C[132400643];
  v5 = 4LL * (((dword_140404A6C[132792829] - 4) >> 2) + 1);
  do
  {
    v6 = fsqrt(
           (float)((float)((float)(*(v4 - 1) - *(float *)&dword_140404A6C[284024503])
                         * (float)(*(v4 - 1) - *(float *)&dword_140404A6C[284024503]))
                 + (float)((float)(*(v4 - 2) - *(float *)&dword_140404A6C[284024502])
                         * (float)(*(v4 - 2) - *(float *)&dword_140404A6C[284024502])))
         + (float)((float)(*v4 - *(float *)&dword_140404A6C[284024504])
                 * (float)(*v4 - *(float *)&dword_140404A6C[284024504])));
    if ( v2 > v6 )
    {
      dword_140404A6C[179992045] = v1;
      v2 = v6;
    }
    v7 = fsqrt(
           (float)((float)((float)(v4[382] - *(float *)&dword_140404A6C[284024503])
                         * (float)(v4[382] - *(float *)&dword_140404A6C[284024503]))
                 + (float)((float)(v4[381] - *(float *)&dword_140404A6C[284024502])
                         * (float)(v4[381] - *(float *)&dword_140404A6C[284024502])))
         + (float)((float)(v4[383] - *(float *)&dword_140404A6C[284024504])
                 * (float)(v4[383] - *(float *)&dword_140404A6C[284024504])));
    if ( v2 > v7 )
    {
      v2 = v7;
      dword_140404A6C[179992045] = v3 - 1;
    }
    v8 = fsqrt(
           (float)((float)((float)(v4[765] - *(float *)&dword_140404A6C[284024503])
                         * (float)(v4[765] - *(float *)&dword_140404A6C[284024503]))
                 + (float)((float)(v4[764] - *(float *)&dword_140404A6C[284024502])
                         * (float)(v4[764] - *(float *)&dword_140404A6C[284024502])))
         + (float)((float)(v4[766] - *(float *)&dword_140404A6C[284024504])
                 * (float)(v4[766] - *(float *)&dword_140404A6C[284024504])));
    if ( v2 > v8 )
    {
      dword_140404A6C[179992045] = v3;
      v2 = v8;
    }
    v9 = fsqrt(
           (float)((float)((float)(v4[1148] - *(float *)&dword_140404A6C[284024503])
                         * (float)(v4[1148] - *(float *)&dword_140404A6C[284024503]))
                 + (float)((float)(v4[1147] - *(float *)&dword_140404A6C[284024502])
                         * (float)(v4[1147] - *(float *)&dword_140404A6C[284024502])))
         + (float)((float)(v4[1149] - *(float *)&dword_140404A6C[284024504])
                 * (float)(v4[1149] - *(float *)&dword_140404A6C[284024504])));
    if ( v2 > v9 )
    {
      v2 = v9;
      dword_140404A6C[179992045] = v3 + 1;
    }
    v4 += 1532;
    v1 += 4;
    v3 += 4;
  }
  while ( v1 < (signed int)(dword_140404A6C[132792829] - 3) );
  if ( v1 < (int)dword_140404A6C[132792829] )
  {
LABEL_18:
    v10 = (float *)&dword_140404A6C[383 * v5 + 132400643];
    do
    {
      v11 = fsqrt(
              (float)((float)((float)(*(v10 - 1) - *(float *)&dword_140404A6C[284024503])
                            * (float)(*(v10 - 1) - *(float *)&dword_140404A6C[284024503]))
                    + (float)((float)(*(v10 - 2) - *(float *)&dword_140404A6C[284024502])
                            * (float)(*(v10 - 2) - *(float *)&dword_140404A6C[284024502])))
            + (float)((float)(*v10 - *(float *)&dword_140404A6C[284024504])
                    * (float)(*v10 - *(float *)&dword_140404A6C[284024504])));
      if ( v2 > v11 )
      {
        dword_140404A6C[179992045] = v1;
        v2 = v11;
      }
      v10 += 383;
      ++v1;
    }
    while ( v1 < (int)dword_140404A6C[132792829] );
  }
LABEL_22:
  v12 = _mm_cvtsi128_si32(_mm_cvtsi32_si128((int)(0LL)));
  *(_OWORD *)&dword_140404A6C[179992041] = 0;
  if ( BYTE1(dword_140404A6C[284024771]) )
    v12 = 1;
  dword_140404A6C[179992041] = v12;
  if ( HIBYTE(dword_140404A6C[284024773]) )
  {
    dword_140404A6C[284021983] = 0;
    v0 = -1;
  }
  if ( LOBYTE(dword_140404A6C[284024774]) )
    v0 = 0;
  if ( BYTE1(dword_140404A6C[284024774]) )
    v0 = 1;
  if ( BYTE2(dword_140404A6C[284024774]) )
    v0 = 2;
  dword_140404A6C[284024501] = v0;
  if ( !BYTE1(dword_140404A6C[284024768]) || BYTE1(dword_140404A6C[284024640]) )
    goto LABEL_36;
  v13 = dword_140404A6C[71856292];
  if ( dword_140404A6C[71856292] != -1 )
  {
    sub_1400A9760(dword_140404A6C[71856292], 4u, 0, 5);
    sub_1400A9760(dword_140404A6C[71856292], 7u, 0, 5);
LABEL_36:
    v13 = dword_140404A6C[71856292];
  }
  if ( BYTE1(dword_140404A6C[284024783]) && v13 != -1 )
  {
    v14 = 7166LL * v13;
    v15 = dword_140404A6C[v14 + 280651675];
    dword_140404A6C[284024381] = dword_140404A6C[v14 + 280651674];
    dword_140404A6C[284024383] = dword_140404A6C[v14 + 280651676];
    dword_140404A6C[284024382] = v15;
  }
  if ( !dword_140404A6C[309078285] )
  {
    if ( LOBYTE(dword_140404A6C[284024780]) )
    {
      v16 = dword_140404A6C[179457253];
      dword_140404A6C[179955080] = 0;
      if ( (int)dword_140404A6C[179457253] > 0 )
      {
        v17 = &dword_140404A6C[179662666];
        do
        {
          *v17 = 0;
          v17 += 22;
          --v16;
        }
        while ( v16 );
      }
      dword_140404A6C[456202457] = 0;
    }
    dword_140404A6C[179955874] = 1;
    if ( HIBYTE(dword_140404A6C[284024779]) && !HIBYTE(dword_140404A6C[284024651]) )
      dword_140404A6C[179955876] ^= 1u;
    if ( BYTE2(dword_140404A6C[284024783]) && !BYTE2(dword_140404A6C[284024655]) )
      dword_140404A6C[283831478] ^= 1u;
  }
  if ( dword_140404A6C[456202453] )
  {
    if ( LOBYTE(dword_140404A6C[284024768]) && !LOBYTE(dword_140404A6C[284024640]) )
      dword_140404A6C[283831481] ^= 1u;
    if ( HIBYTE(dword_140404A6C[284024769]) && !HIBYTE(dword_140404A6C[284024641]) )
      dword_140404A6C[283831479] ^= 1u;
    if ( BYTE2(dword_140404A6C[284024769]) )
    {
      v18 = dword_140404A6C[283831480];
      if ( !BYTE2(dword_140404A6C[284024641]) )
        v18 = 1;
      dword_140404A6C[283831480] = v18;
    }
  }
  if ( BYTE1(dword_140404A6C[284024766]) && !BYTE1(dword_140404A6C[284024638]) )
    dword_140404A6C[179668287] ^= 1u;
  result = dword_140404A6C[73006973];
  if ( BYTE1(dword_140404A6C[284024767]) )
    result = 0;
  dword_140404A6C[73006973] = result;
  if ( HIBYTE(dword_140404A6C[284024780]) && !HIBYTE(dword_140404A6C[284024652]) )
    dword_140404A6C[179668285] ^= 1u;
  if ( BYTE1(dword_140404A6C[284024781]) && !BYTE1(dword_140404A6C[284024653]) )
    result = render_cache_camera_uniforms_candidate();
  if ( LOBYTE(dword_140404A6C[284024781]) && !LOBYTE(dword_140404A6C[284024653]) )
    dword_140404A6C[179668288] ^= 1u;
  if ( HIBYTE(dword_140404A6C[284024781]) && !HIBYTE(dword_140404A6C[284024653]) )
  {
    result = dword_140404A6C[179668286] + 1;
    if ( (int)result > 5 )
      result = 0;
    dword_140404A6C[179668286] = result;
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151620CFC: using guessed type int[];
// 151A84860: using guessed type unsigned int;
// 15FE95260: using guessed type unsigned int;
// 16B165F64: using guessed type unsigned int;
// 16B27E08C: using guessed type unsigned int;
// 16B27ECF4: using guessed type unsigned int;
// 16B2A2210: using guessed type unsigned int;
// 16B2A2220: using guessed type unsigned int;
// 183EBFD4C: using guessed type unsigned int;
// 183F79DE8: using guessed type unsigned int;
// 183F7C360: using guessed type __int64[];
// 183F7C364: using guessed type unsigned int;
// 183F7C368: using guessed type int[];
// 183F7C540: using guessed type unsigned int;
// 1AD04ADD0: using guessed type unsigned int;

//----- (000000014007DDF0) ----------------------------------------------------
void            sub_14007DDF0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8

  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279700;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  sub_14007D420(a1, a2, a3);
  sub_14007D420(v4, v3, v5);
  sub_14007D420(v7, v6, v8);
  sub_14007D420(v10, v9, v11);
  sub_14007D420(v13, v12, v14);
  sub_14007D420(v16, v15, v17);
  sub_14007D420(v19, v18, v20);
  sub_14007D420(v22, v21, v23);
  sub_14007D420(v25, v24, v26);
  sub_14007D420(v28, v27, v29);
  sub_14007D420(v31, v30, v32);
  sub_14007D420(v34, v33, v35);
  sub_14007D420(v37, v36, v38);
  sub_14007D420(v40, v39, v41);
  sub_14007D420(v43, v42, v44);
  sub_14007D420(v46, v45, v47);
  sub_14007D420(v49, v48, v50);
  sub_14007D420(v52, v51, v53);
  sub_14007D420(v55, v54, v56);
  sub_14007D420(v58, v57, v59);
  sub_14007D420(v61, v60, v62);
  sub_14007D420(v64, v63, v65);
  sub_14007D420(v67, v66, v68);
  sub_14007D420(v70, v69, v71);
  sub_14006E0D0(v73, v72, v74);
}

// 14007DE4D: variable 'v4' is possibly undefined
// 14007DE4D: variable 'v3' is possibly undefined
// 14007DE4D: variable 'v5' is possibly undefined
// 14007DE60: variable 'v7' is possibly undefined
// 14007DE60: variable 'v6' is possibly undefined
// 14007DE60: variable 'v8' is possibly undefined
// 14007DE73: variable 'v10' is possibly undefined
// 14007DE73: variable 'v9' is possibly undefined
// 14007DE73: variable 'v11' is possibly undefined
// 14007DE86: variable 'v13' is possibly undefined
// 14007DE86: variable 'v12' is possibly undefined
// 14007DE86: variable 'v14' is possibly undefined
// 14007DE99: variable 'v16' is possibly undefined
// 14007DE99: variable 'v15' is possibly undefined
// 14007DE99: variable 'v17' is possibly undefined
// 14007DEAC: variable 'v19' is possibly undefined
// 14007DEAC: variable 'v18' is possibly undefined
// 14007DEAC: variable 'v20' is possibly undefined
// 14007DEBF: variable 'v22' is possibly undefined
// 14007DEBF: variable 'v21' is possibly undefined
// 14007DEBF: variable 'v23' is possibly undefined
// 14007DED2: variable 'v25' is possibly undefined
// 14007DED2: variable 'v24' is possibly undefined
// 14007DED2: variable 'v26' is possibly undefined
// 14007DEE5: variable 'v28' is possibly undefined
// 14007DEE5: variable 'v27' is possibly undefined
// 14007DEE5: variable 'v29' is possibly undefined
// 14007DEF8: variable 'v31' is possibly undefined
// 14007DEF8: variable 'v30' is possibly undefined
// 14007DEF8: variable 'v32' is possibly undefined
// 14007DF0B: variable 'v34' is possibly undefined
// 14007DF0B: variable 'v33' is possibly undefined
// 14007DF0B: variable 'v35' is possibly undefined
// 14007DF1E: variable 'v37' is possibly undefined
// 14007DF1E: variable 'v36' is possibly undefined
// 14007DF1E: variable 'v38' is possibly undefined
// 14007DF31: variable 'v40' is possibly undefined
// 14007DF31: variable 'v39' is possibly undefined
// 14007DF31: variable 'v41' is possibly undefined
// 14007DF44: variable 'v43' is possibly undefined
// 14007DF44: variable 'v42' is possibly undefined
// 14007DF44: variable 'v44' is possibly undefined
// 14007DF57: variable 'v46' is possibly undefined
// 14007DF57: variable 'v45' is possibly undefined
// 14007DF57: variable 'v47' is possibly undefined
// 14007DF6A: variable 'v49' is possibly undefined
// 14007DF6A: variable 'v48' is possibly undefined
// 14007DF6A: variable 'v50' is possibly undefined
// 14007DF7D: variable 'v52' is possibly undefined
// 14007DF7D: variable 'v51' is possibly undefined
// 14007DF7D: variable 'v53' is possibly undefined
// 14007DF90: variable 'v55' is possibly undefined
// 14007DF90: variable 'v54' is possibly undefined
// 14007DF90: variable 'v56' is possibly undefined
// 14007DFA3: variable 'v58' is possibly undefined
// 14007DFA3: variable 'v57' is possibly undefined
// 14007DFA3: variable 'v59' is possibly undefined
// 14007DFB6: variable 'v61' is possibly undefined
// 14007DFB6: variable 'v60' is possibly undefined
// 14007DFB6: variable 'v62' is possibly undefined
// 14007DFC9: variable 'v64' is possibly undefined
// 14007DFC9: variable 'v63' is possibly undefined
// 14007DFC9: variable 'v65' is possibly undefined
// 14007DFDC: variable 'v67' is possibly undefined
// 14007DFDC: variable 'v66' is possibly undefined
// 14007DFDC: variable 'v68' is possibly undefined
// 14007DFEF: variable 'v70' is possibly undefined
// 14007DFEF: variable 'v69' is possibly undefined
// 14007DFEF: variable 'v71' is possibly undefined
// 14007DFFE: variable 'v73' is possibly undefined
// 14007DFFE: variable 'v72' is possibly undefined
// 14007DFFE: variable 'v74' is possibly undefined
// 140279700: using guessed type __int128 xmmword_140279700;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (000000014007E010) ----------------------------------------------------
__int64            sub_14007E010(
        unsigned int *a1,
        _DWORD *a2,
        float a3,
        float a4,
        float a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  float *v10; // rbx
  int v11; // edi
  float v12; // xmm1_4
  float v13; // xmm0_4
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  float v17; // xmm1_4
  float v18; // xmm0_4
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int64 v26; // rdx
  __int64 v27; // r8
  float v28; // xmm1_4
  float v29; // xmm0_4
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  float v34; // [rsp+20h] [rbp-40h] BYREF
  float v35; // [rsp+24h] [rbp-3Ch]
  float v36; // [rsp+28h] [rbp-38h]

  sub_14007B990(a1, a2);
  v10 = (float *)&unk_1402B2CC4;
  dword_140404A6C[456807033] = a6;
  v11 = 0;
  dword_140404A6C[456807034] = a7;
  dword_140404A6C[456807035] = a8;
  dword_140404A6C[456807036] = 1065353216;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  do
  {
    v12 = a4 * *(v10 - 12);
    v34 = a3 * *(v10 - 13);
    v13 = a5 * *(v10 - 11);
    v35 = v12;
    v36 = v13;
    sub_14007D520((unsigned int *)&v34, v8, v9);
    v14 = ((_BYTE)v11 + 1) & 3;
    v34 = a3 * flt_1402B2C90[3 * v14];
    v35 = a4 * flt_1402B2C90[3 * v14 + 1];
    v36 = a5 * flt_1402B2C90[3 * v14 + 2];
    sub_14007D520((unsigned int *)&v34, v15, v16);
    v17 = a4 * *v10;
    v34 = a3 * *(v10 - 1);
    v18 = a5 * v10[1];
    v35 = v17;
    v36 = v18;
    sub_14007D520((unsigned int *)&v34, v19, v20);
    v21 = (++v11 & 3) + 4LL;
    v34 = a3 * flt_1402B2C90[3 * v21];
    v35 = a4 * flt_1402B2C90[3 * v21 + 1];
    v36 = a5 * flt_1402B2C90[3 * v21 + 2];
    sub_14007D520((unsigned int *)&v34, v22, v23);
    v24 = a4 * *(v10 - 12);
    v34 = a3 * *(v10 - 13);
    v25 = a5 * *(v10 - 11);
    v35 = v24;
    v36 = v25;
    sub_14007D520((unsigned int *)&v34, v26, v27);
    v28 = a4 * *v10;
    v34 = a3 * *(v10 - 1);
    v29 = a5 * v10[1];
    v35 = v28;
    v36 = v29;
    sub_14007D520((unsigned int *)&v34, v30, v31);
    v10 += 3;
  }
  while ( (__int64)v10 < (__int64)flt_1402B2CF4 );
  sub_14006E0D0(v32, v8, v9);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  return sub_14007A0E0(
           &dword_140404A6C[431564565],
           (__int64)&dword_140404A6C[431564533],
           (__int64)&dword_140404A6C[431564485]);
}

// 14007E0DC: variable 'v8' is possibly undefined
// 14007E0DC: variable 'v9' is possibly undefined
// 14007E11A: variable 'v15' is possibly undefined
// 14007E11A: variable 'v16' is possibly undefined
// 14007E14A: variable 'v19' is possibly undefined
// 14007E14A: variable 'v20' is possibly undefined
// 14007E18C: variable 'v22' is possibly undefined
// 14007E18C: variable 'v23' is possibly undefined
// 14007E1BD: variable 'v26' is possibly undefined
// 14007E1BD: variable 'v27' is possibly undefined
// 14007E1ED: variable 'v30' is possibly undefined
// 14007E1ED: variable 'v31' is possibly undefined
// 14007E1FF: variable 'v32' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 1402B2C90: using guessed type float flt_1402B2C90[13];
// 1402B2CF4: using guessed type float flt_1402B2CF4[479];
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;
// 1AD299454: using guessed type unsigned int;
// 1AD299458: using guessed type unsigned int;
// 1AD29945C: using guessed type unsigned int;

//----- (000000014007E2A0) ----------------------------------------------------
__int64            sub_14007E2A0(float *a1, __int64 a2, int a3, float a4, float a5)
{
  signed int v5; // r13d
  int v8; // eax
  __int64 v9; // rdx
  float v10; // xmm12_4
  float *v11; // r14
  __int64 v12; // r15
  float v13; // xmm6_4
  double v14; // xmm2_8
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rbp
  signed int v18; // eax
  __m128i v19; // xmm0
  __m128 v20; // xmm0
  float v21; // xmm15_4
  float v22; // xmm13_4
  float v23; // xmm13_4
  float v24; // xmm14_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm9_4
  float v29; // xmm10_4
  float v30; // xmm11_4
  __int64 v31; // rdx
  __m128 v32; // xmm0
  float v33; // xmm3_4
  float v34; // xmm5_4
  float v35; // xmm1_4
  float v36; // xmm9_4
  float v37; // xmm4_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm10_4
  double v41; // xmm2_8
  float v42; // xmm15_4
  float v43; // xmm9_4
  float v44; // xmm7_4
  float v45; // xmm8_4
  float v46; // xmm7_4
  float v47; // xmm9_4
  __m128 v48; // xmm0
  float v49; // xmm3_4
  float v50; // xmm4_4
  float v51; // xmm1_4
  __int64 v52; // rdx
  __int64 v53; // r8
  unsigned int *v54; // rbp
  __int64 v55; // r13
  char v56; // r14
  __int64 v57; // r12
  __int64 v58; // r15
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // rcx
  bool v74; // zf
  float *v75; // rax
  signed __int64 v76; // rcx
  float *v77; // r8
  __int64 v78; // r10
  float v79; // xmm3_4
  __int64 v80; // rdx
  float v81; // xmm4_4
  float v82; // xmm5_4
  float v83; // xmm6_4
  float *v84; // rax
  signed __int64 v85; // rcx
  float *v86; // r8
  __int64 v87; // r10
  float v88; // xmm3_4
  __int64 v89; // rdx
  float v90; // xmm4_4
  float v91; // xmm5_4
  float v92; // xmm6_4
  __int64 v94; // [rsp+0h] [rbp-758h] BYREF
  float v95; // [rsp+20h] [rbp-738h]
  int v96; // [rsp+24h] [rbp-734h]
  __int64 v97; // [rsp+28h] [rbp-730h]
  __int64 v98; // [rsp+30h] [rbp-728h]
  double v99; // [rsp+38h] [rbp-720h]
  __int128 v100; // [rsp+40h] [rbp-718h] BYREF
  __int128 v101; // [rsp+50h] [rbp-708h]
  __int128 v102; // [rsp+60h] [rbp-6F8h]
  __int128 v103; // [rsp+70h] [rbp-6E8h]
  _DWORD v104[2]; // [rsp+80h] [rbp-6D8h] BYREF
  char v105; // [rsp+88h] [rbp-6D0h] BYREF
  char v106; // [rsp+140h] [rbp-618h] BYREF
  __int64 v107; // [rsp+680h] [rbp-D8h]

  v5 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v8 = 0;
      v9 = 2;
    }
    else if ( a3 == 2 )
    {
      v8 = 0;
      v9 = 1;
    }
    else
    {
      v8 = LODWORD(v95);
      v9 = LODWORD(v95);
    }
  }
  else
  {
    v8 = 1;
    v9 = 2;
  }
  v10 = a4 * 0.5;
  v11 = (float *)&v105;
  v12 = 0;
  v13 = a5;
  v14 = 0.5235987755983333;
  v15 = 3LL * v8;
  v16 = 3LL * (int)v9;
  v17 = 3LL * a3;
  v18 = 7;
  v98 = 7;
  v96 = 7;
  do
  {
    if ( v5 >= 4 )
      v19 = _mm_cvtsi32_si128(v18);
    else
      v19 = _mm_cvtsi32_si128(v5);
    v20 = _mm_castpd_ps(sub_1401F8A50(SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v19), f32)[0] * 0.5235987755983333, v9, 0.5235987755983333));
    v97 = 8;
    v21 = 0.0;
    v22 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v20, (__m128d)v20, 1), f64)[0];
    SR_VEC_LANES(128, v20, f32)[0] = *(double *)SR_VEC_LANES(128, v20, u64);
    v23 = v22 * v13;
    SR_VEC_LANES(128, v20, f32)[0] = SR_VEC_LANES(128, v20, f32)[0] * v13;
    v24 = -v23;
    v25 = v23 + v10;
    v95 = SR_VEC_LANES(128, v20, f32)[0];
    do
    {
      v26 = *(float *)(a2 + 4 * v17 + 4);
      v27 = *(float *)(a2 + 4 * v17 + 8);
      if ( v12 >= 4 )
      {
        v28 = v24 - v10;
        v29 = v26 * (float)(v24 - v10);
        v30 = v27 * (float)(v24 - v10);
      }
      else
      {
        v25 = v10 + v23;
        v28 = v10 + v23;
        v29 = v26 * (float)(v10 + v23);
        v30 = v27 * (float)(v10 + v23);
      }
      v32 = _mm_castpd_ps(sub_1401F8A50(v21, v9, v14));
      v33 = *(float *)(a2 + 4 * v16 + 8);
      v99 = v95;
      v34 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v32, (__m128d)v32, 1), f64)[0] * v95;
      v35 = *(float *)(a2 + 4 * v17) * v28;
      v36 = *(float *)(a2 + 4 * v17);
      v37 = *(double *)SR_VEC_LANES(128, v32, u64) * v95;
      SR_VEC_LANES(128, v32, f32)[0] = *(float *)(a2 + 4 * v15 + 4) * v34;
      v38 = (float)((float)(*(float *)(a2 + 4 * v16) * v37) + (float)(*(float *)(a2 + 4 * v15) * v34))
          + (float)(v35 + *a1);
      v39 = a1[1] + v29;
      v40 = a1[2];
      *(v11 - 2) = v38;
      *(_QWORD *)&v41 = *(unsigned int *)(a2 + 4 * v16 + 4);
      *(float *)&v41 = (float)(*(float *)&v41 * v37) + SR_VEC_LANES(128, v32, f32)[0];
      SR_VEC_LANES(128, v32, f32)[0] = *(float *)(a2 + 4 * v15 + 8) * v34;
      *(float *)&v41 = *(float *)&v41 + v39;
      v42 = v21 + 0.39269909;
      *(v11 - 1) = *(float *)&v41;
      *v11 = (float)((float)(v33 * v37) + SR_VEC_LANES(128, v32, f32)[0]) + (float)(v40 + v30);
      if ( v12 >= 4 )
      {
        v25 = v23 + v10;
        v43 = v36 * (float)(v24 - v10);
        v44 = v26 * (float)(v24 - v10);
        v45 = v27 * (float)(v24 - v10);
      }
      else
      {
        v43 = v36 * v25;
        v44 = v26 * v25;
        v45 = v27 * v25;
      }
      v46 = v44 + a1[1];
      v47 = v43 + *a1;
      v48 = _mm_castpd_ps(sub_1401F8A50(v42, v31, v41));
      *(_QWORD *)&v14 = *(unsigned int *)(a2 + 4 * v15 + 4);
      v21 = v42 + 0.39269909;
      v49 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v48, (__m128d)v48, 1), f64)[0] * v99;
      v50 = *(double *)SR_VEC_LANES(128, v48, u64) * v99;
      SR_VEC_LANES(128, v48, f32)[0] = *(float *)(a2 + 4 * v16 + 4) * v50;
      v11[1] = (float)((float)(*(float *)(a2 + 4 * v15) * v49) + v47) + (float)(*(float *)(a2 + 4 * v16) * v50);
      *(float *)&v14 = (float)((float)(*(float *)&v14 * v49) + v46) + SR_VEC_LANES(128, v48, f32)[0];
      v51 = *(float *)(a2 + 4 * v15 + 8);
      SR_VEC_LANES(128, v48, i32)[0] = *(_DWORD *)(a2 + 4 * v16 + 8);
      v11[2] = *(float *)&v14;
      v11[3] = (float)((float)(v51 * v49) + (float)(v45 + v40)) + (float)(SR_VEC_LANES(128, v48, f32)[0] * v50);
      v11 += 6;
      --v97;
    }
    while ( v97 );
    ++v5;
    v14 = 0.5235987755983333;
    v18 = v96 - 1;
    v13 = a5;
    ++v12;
    v96 = v18;
  }
  while ( v18 > -1 );
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  v54 = (unsigned int *)&v106;
  v55 = 0;
  dword_140404A6C[456217205] = 2;
  dword_140404A6C[456217207] = 0;
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279530;
  dword_140404A6C[456217208] = 9;
  do
  {
    v56 = 1;
    v57 = v55 + 16;
    v58 = 16;
    do
    {
      sub_14007D520(v54 - 48, v52, v53);
      v59 = v56 & 0xF;
      sub_14007D520(&v104[3 * v59 + 3 * v55], v60, v61);
      sub_14007D520(&v104[3 * v59 + 3 * v55], v62, v63);
      sub_14007D520(&v104[3 * v57 + 3 * v59], 3 * (v57 + v59), v64);
      sub_14007D520(&v104[3 * v57 + 3 * v59], v65, v66);
      sub_14007D520(v54, v67, v68);
      sub_14007D520(v54, v69, v70);
      sub_14007D520(v54 - 48, v71, v72);
      v54 += 3;
      ++v56;
      --v58;
    }
    while ( v58 );
    v74 = v98-- == 1;
    v55 += 16;
  }
  while ( !v74 );
  sub_14006E0D0(v73, v52, v53);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  v75 = (float *)&v100;
  v76 = (char *)&dword_140404A6C[431564505] - (char *)&v100;
  v77 = (float *)&dword_140404A6C[431564518];
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  v78 = 4;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  do
  {
    v79 = *(v77 - 1);
    v80 = 4;
    v81 = *v77;
    v82 = v77[1];
    v83 = v77[2];
    do
    {
      *v75 = (float)((float)((float)(v79 * *(float *)((char *)v75 + v76 - 16))
                           + (float)(v81 * *(float *)((char *)v75 + v76)))
                   + (float)(v82 * *(float *)((char *)v75 + v76 + 16)))
           + (float)(v83 * *(float *)((char *)v75 + v76 + 32));
      ++v75;
      --v80;
    }
    while ( v80 );
    v77 += 4;
    v76 -= 16LL;
    --v78;
  }
  while ( v78 );
  *(_OWORD *)&dword_140404A6C[431564533] = v100;
  v84 = (float *)&v100;
  v85 = (char *)&dword_140404A6C[431564489] - (char *)&v100;
  v86 = (float *)&dword_140404A6C[431564534];
  *(_OWORD *)&dword_140404A6C[431564537] = v101;
  v87 = 4;
  *(_OWORD *)&dword_140404A6C[431564541] = v102;
  *(_OWORD *)&dword_140404A6C[431564545] = v103;
  do
  {
    v88 = *(v86 - 1);
    v89 = 4;
    v90 = *v86;
    v91 = v86[1];
    v92 = v86[2];
    do
    {
      *v84 = (float)((float)((float)(v88 * *(float *)((char *)v84 + v85 - 16))
                           + (float)(v90 * *(float *)((char *)v84 + v85)))
                   + (float)(v91 * *(float *)((char *)v84 + v85 + 16)))
           + (float)(v92 * *(float *)((char *)v84 + v85 + 32));
      ++v84;
      --v89;
    }
    while ( v89 );
    v86 += 4;
    v85 -= 16LL;
    --v87;
  }
  while ( v87 );
  *(_OWORD *)&dword_140404A6C[431564565] = v100;
  *(_OWORD *)&dword_140404A6C[431564569] = v101;
  *(_OWORD *)&dword_140404A6C[431564573] = v102;
  *(_OWORD *)&dword_140404A6C[431564577] = v103;
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 14007E3B6: variable 'v9' is possibly undefined
// 14007E57B: variable 'v31' is possibly undefined
// 14007E707: variable 'v52' is possibly undefined
// 14007E707: variable 'v53' is possibly undefined
// 14007E729: variable 'v60' is possibly undefined
// 14007E729: variable 'v61' is possibly undefined
// 14007E731: variable 'v62' is possibly undefined
// 14007E731: variable 'v63' is possibly undefined
// 14007E74D: variable 'v64' is possibly undefined
// 14007E755: variable 'v65' is possibly undefined
// 14007E755: variable 'v66' is possibly undefined
// 14007E75D: variable 'v67' is possibly undefined
// 14007E75D: variable 'v68' is possibly undefined
// 14007E765: variable 'v69' is possibly undefined
// 14007E765: variable 'v70' is possibly undefined
// 14007E771: variable 'v71' is possibly undefined
// 14007E771: variable 'v72' is possibly undefined
// 14007E796: variable 'v73' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 140279530: using guessed type __int128 xmmword_140279530;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A724E640: using guessed type unsigned int;
// 1A724E650: using guessed type unsigned int;
// 1A724E660: using guessed type unsigned int;
// 1A724E670: using guessed type unsigned int;
// 1A724E6C0: using guessed type unsigned int;
// 1A724E6D0: using guessed type unsigned int;
// 1A724E6E0: using guessed type unsigned int;
// 1A724E6F0: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (000000014007E9D0) ----------------------------------------------------
__int64            sub_14007E9D0(unsigned int *a1, _DWORD *a2, double a3, float a4)
{
  float v4; // xmm8_4
  float v5; // xmm7_4
  __int64 v6; // rdx
  __int64 v7; // r8
  double v8; // xmm6_8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __m128 v14; // xmm0
  __int64 v15; // rbx
  __int64 v16; // rdi
  float v17; // xmm14_4
  float v18; // xmm13_4
  __int64 v19; // rdx
  __m128 v20; // xmm0
  double v21; // xmm1_8
  __int64 v22; // rdx
  __int64 v23; // r8
  float v24; // xmm7_4
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __m128 v30; // xmm0
  double v31; // xmm1_8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rbx
  __m128 v35; // xmm0
  double v36; // xmm1_8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  float *v43; // rax
  signed __int64 v44; // rcx
  float *v45; // r8
  __int64 v46; // r10
  float v47; // xmm3_4
  __int64 v48; // rdx
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm6_4
  float *v52; // rax
  signed __int64 v53; // rcx
  float *v54; // r8
  __int64 v55; // r10
  float v56; // xmm3_4
  __int64 v57; // rdx
  float v58; // xmm4_4
  float v59; // xmm5_4
  float v60; // xmm6_4
  __int64 v62; // [rsp+8h] [rbp-100h] BYREF
  __int64 v63; // [rsp+24h] [rbp-E4h] BYREF
  unsigned __int64 v64; // [rsp+2Ch] [rbp-DCh]
  __int128 v65; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v66; // [rsp+48h] [rbp-C0h]
  __int128 v67; // [rsp+58h] [rbp-B0h]
  __int128 v68; // [rsp+68h] [rbp-A0h]
  __int64 v69; // [rsp+78h] [rbp-90h]

  sub_14007B990(a1, a2);
  dword_140404A6C[456217205] = 2;
  v4 = 0.0;
  *((float *)&v63 + 1) = -a4;
  v5 = 0.0;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  *(_OWORD *)&dword_140404A6C[456807033] = xmmword_1402794A0;
  v64 = 0;
  sub_14007D520((unsigned int *)&v63 + 1, v6, v7);
  v8 = *(float *)&a3;
  HIDWORD(v64) = LODWORD(a3);
  sub_14007D520((unsigned int *)&v63 + 1, v9, v10);
  v14 = _mm_castpd_ps(sub_1401F8A50(0.0, v11, a3));
  v15 = 32;
  v16 = 32;
  v17 = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v14, (__m128d)v14, 1), f64)[0] * *(float *)&a3;
  v18 = *(double *)SR_VEC_LANES(128, v14, u64) * *(float *)&a3;
  v64 = __PAIR64__(LODWORD(v17), LODWORD(v18));
  do
  {
    sub_14007D520((unsigned int *)&v63 + 1, v12, v13);
    v5 = v5 + 0.19634955;
    v20 = _mm_castpd_ps(sub_1401F8A50(v5, v19, a3));
    v21 = *(double *)SR_VEC_LANES(128, v20, u64);
    SR_VEC_LANES(128, v20, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v20, (__m128d)v20, 1), f64)[0] * v8;
    *(float *)&v21 = v21 * v8;
    v64 = __PAIR64__(SR_VEC_LANES(128, v20, u32)[0], LODWORD(v21));
    sub_14007D520((unsigned int *)&v63 + 1, v22, v23);
    --v16;
  }
  while ( v16 );
  *((float *)&v63 + 1) = a4;
  v24 = 0.0;
  v64 = 0;
  sub_14007D520((unsigned int *)&v63 + 1, v12, v13);
  *((float *)&v64 + 1) = *(float *)&a3;
  sub_14007D520((unsigned int *)&v63 + 1, v25, v26);
  v64 = __PAIR64__(LODWORD(v17), LODWORD(v18));
  do
  {
    sub_14007D520((unsigned int *)&v63 + 1, v27, v28);
    v24 = v24 + 0.19634955;
    v30 = _mm_castpd_ps(sub_1401F8A50(v24, v29, a3));
    v31 = *(double *)SR_VEC_LANES(128, v30, u64);
    SR_VEC_LANES(128, v30, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v30, (__m128d)v30, 1), f64)[0] * v8;
    *(float *)&v31 = v31 * v8;
    v64 = __PAIR64__(SR_VEC_LANES(128, v30, u32)[0], LODWORD(v31));
    sub_14007D520((unsigned int *)&v63 + 1, v32, v33);
    --v15;
  }
  while ( v15 );
  v34 = 16;
  do
  {
    *((float *)&v63 + 1) = -a4;
    v35 = _mm_castpd_ps(sub_1401F8A50(v4, v27, a3));
    v36 = *(double *)SR_VEC_LANES(128, v35, u64);
    SR_VEC_LANES(128, v35, f32)[0] = SR_VEC_READ_LANES(128, _mm_shuffle_pd((__m128d)v35, (__m128d)v35, 1), f64)[0] * v8;
    *(float *)&v36 = v36 * v8;
    v64 = __PAIR64__(SR_VEC_LANES(128, v35, u32)[0], LODWORD(v36));
    sub_14007D520((unsigned int *)&v63 + 1, v37, v38);
    *((float *)&v63 + 1) = a4;
    sub_14007D520((unsigned int *)&v63 + 1, v39, v40);
    v4 = v4 + 0.39269909;
    --v34;
  }
  while ( v34 );
  sub_14006E0D0(v41, v27, v42);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  v43 = (float *)&v65;
  v44 = (char *)&dword_140404A6C[431564505] - (char *)&v65;
  v45 = (float *)&dword_140404A6C[431564518];
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  v46 = 4;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  do
  {
    v47 = *(v45 - 1);
    v48 = 4;
    v49 = *v45;
    v50 = v45[1];
    v51 = v45[2];
    do
    {
      *v43 = (float)((float)((float)(v47 * *(float *)((char *)v43 + v44 - 16))
                           + (float)(v49 * *(float *)((char *)v43 + v44)))
                   + (float)(v50 * *(float *)((char *)v43 + v44 + 16)))
           + (float)(v51 * *(float *)((char *)v43 + v44 + 32));
      ++v43;
      --v48;
    }
    while ( v48 );
    v45 += 4;
    v44 -= 16LL;
    --v46;
  }
  while ( v46 );
  *(_OWORD *)&dword_140404A6C[431564533] = v65;
  v52 = (float *)&v65;
  v53 = (char *)&dword_140404A6C[431564489] - (char *)&v65;
  v54 = (float *)&dword_140404A6C[431564534];
  *(_OWORD *)&dword_140404A6C[431564537] = v66;
  v55 = 4;
  *(_OWORD *)&dword_140404A6C[431564541] = v67;
  *(_OWORD *)&dword_140404A6C[431564545] = v68;
  do
  {
    v56 = *(v54 - 1);
    v57 = 4;
    v58 = *v54;
    v59 = v54[1];
    v60 = v54[2];
    do
    {
      *v52 = (float)((float)((float)(v56 * *(float *)((char *)v52 + v53 - 16))
                           + (float)(v58 * *(float *)((char *)v52 + v53)))
                   + (float)(v59 * *(float *)((char *)v52 + v53 + 16)))
           + (float)(v60 * *(float *)((char *)v52 + v53 + 32));
      ++v52;
      --v57;
    }
    while ( v57 );
    v54 += 4;
    v53 -= 16LL;
    --v55;
  }
  while ( v55 );
  *(_OWORD *)&dword_140404A6C[431564565] = v65;
  *(_OWORD *)&dword_140404A6C[431564569] = v66;
  *(_OWORD *)&dword_140404A6C[431564573] = v67;
  *(_OWORD *)&dword_140404A6C[431564577] = v68;
  return 0; /* compatibility result discarded by all reviewed callers */
}

// 14007EA87: variable 'v6' is possibly undefined
// 14007EA87: variable 'v7' is possibly undefined
// 14007EAA5: variable 'v9' is possibly undefined
// 14007EAA5: variable 'v10' is possibly undefined
// 14007EAB0: variable 'v11' is possibly undefined
// 14007EAFA: variable 'v12' is possibly undefined
// 14007EAFA: variable 'v13' is possibly undefined
// 14007EB0E: variable 'v19' is possibly undefined
// 14007EB3C: variable 'v22' is possibly undefined
// 14007EB3C: variable 'v23' is possibly undefined
// 14007EB6D: variable 'v25' is possibly undefined
// 14007EB6D: variable 'v26' is possibly undefined
// 14007EB85: variable 'v27' is possibly undefined
// 14007EB85: variable 'v28' is possibly undefined
// 14007EB99: variable 'v29' is possibly undefined
// 14007EBC7: variable 'v32' is possibly undefined
// 14007EBC7: variable 'v33' is possibly undefined
// 14007EC20: variable 'v37' is possibly undefined
// 14007EC20: variable 'v38' is possibly undefined
// 14007EC31: variable 'v39' is possibly undefined
// 14007EC31: variable 'v40' is possibly undefined
// 14007EC41: variable 'v41' is possibly undefined
// 14007EC41: variable 'v42' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140278D80: using guessed type __int128 xmmword_140278D80;
// 140278E20: using guessed type __int128 xmmword_140278E20;
// 140279490: using guessed type __int128 xmmword_140279490;
// 1402794A0: using guessed type __int128 xmmword_1402794A0;
// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1A724E600: using guessed type unsigned int;
// 1A724E610: using guessed type unsigned int;
// 1A724E620: using guessed type unsigned int;
// 1A724E630: using guessed type unsigned int;
// 1A724E640: using guessed type unsigned int;
// 1A724E650: using guessed type unsigned int;
// 1A724E660: using guessed type unsigned int;
// 1A724E670: using guessed type unsigned int;
// 1A724E6C0: using guessed type unsigned int;
// 1A724E6D0: using guessed type unsigned int;
// 1A724E6E0: using guessed type unsigned int;
// 1A724E6F0: using guessed type unsigned int;
// 1AD059440: using guessed type unsigned int;
// 1AD059448: using guessed type unsigned int;
// 1AD05944C: using guessed type unsigned int;
// 1AD299450: using guessed type unsigned int;

//----- (000000014007EEB0) ----------------------------------------------------
void            __attribute__((noreturn)) sub_14007EEB0(__int64 a1, __int64 a2, double a3)
{
  int v3; // eax
       char *v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  char v8; // al
  int i; // r8d
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int *v14; // rax
  __int64 v15; // rcx
  int v16; // r15d
  int v17; // esi
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int *v22; // rax
  int v23; // ebp
  int v24; // eax
  signed int v25; // r8d
  signed int v26; // edx
  unsigned int *v27; // rcx
  int v28; // edi
  unsigned int *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 argp; // [rsp+60h] [rbp+8h] BYREF
  __int64 PerformanceCount; // [rsp+68h] [rbp+10h] BYREF

  v3 = sr_ConnectMasterServer();
  v4 = "connection successful\n";
  if ( !v3 )
    v4 = "connection failed\n";
  sub_14011BD10(v4);
  v5 = dword_140404A6C[73991633];
  if ( (int)dword_140404A6C[73991633] >= 1 )
  {
    if ( (int)dword_140404A6C[73991633] > 30 )
      v5 = 30;
  }
  else
  {
    v5 = 1;
  }
  v6 = dword_140404A6C[73991631];
  dword_140404A6C[73991633] = v5;
  if ( (int)dword_140404A6C[73991631] >= 2 )
  {
    if ( (int)dword_140404A6C[73991631] > 128 )
      v6 = 128;
    dword_140404A6C[73991631] = v6;
  }
  else
  {
    v6 = 2;
    dword_140404A6C[73991631] = 2;
  }
  v7 = 0;
  do
  {
    v8 = *((_BYTE *)&dword_140404A6C[73991224] + v7);
    *((_BYTE *)&dword_140404A6C[456202458] + v7++) = v8;
  }
  while ( v8 );
  dword_140404A6C[456202722] = v6;
  dword_140404A6C[283831452] = 3600;
  dword_140404A6C[283831473] = 1260;
  dword_140404A6C[73991608] = 1;
  dword_140404A6C[283831453] = 3600 * v5;
  LOWORD(dword_140404A6C[289301091]) = dword_140404A6C[73991093];
  dword_140404A6C[73991609] = 1;
  dword_140404A6C[73991095] = 1;
  dword_140404A6C[289301078] = socket_sr(2, 2, 17);
  LOWORD(dword_140404A6C[289301086]) = 2;
  dword_140404A6C[289301087] = 0;
  HIWORD(dword_140404A6C[289301086]) = htons_sr(LOWORD(dword_140404A6C[289301091]));
  dword_140404A6C[289301090] = 16;
  if ( !(unsigned int)bind_sr((int)dword_140404A6C[289301078], &dword_140404A6C[289301086], 16) )
  {
    LODWORD(argp) = 1;
    ioctlsocket_sr((int)dword_140404A6C[289301078], 2147772030LL, &argp);
    dword_140404A6C[289301070] = 1;
  }
  dword_140404A6C[456202453] = 1;
  dword_140404A6C[456202455] = 1;
  sub_14011BD10("port:%d\n", LOWORD(dword_140404A6C[289301091]));
  sub_14011BD10("socketenabled:%d\n", dword_140404A6C[289301070]);
  dword_140404A6C[18600733] = sub_140237448(nullptr);
  for ( i = 1; i < 624; ++i )
  {
    v10 = i;
    v11 = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
    dword_140404A6C[v10 + 18600733] = v11;
  }
  dword_14030186C = i;
  sub_1400E5F10();
  sub_14013DCD0();
  v14 = &dword_140404A6C[71856253];
  dword_140404A6C[335047062] = 1120403456;
  dword_140404A6C[335047068] = 1120403456;
  dword_140404A6C[335047074] = 1120403456;
  dword_140404A6C[335047080] = 1120403456;
  do
  {
    *v14 = 0;
    v14 += 3597;
  }
  while ( (__int64)v14 < (__int64)&dword_140404A6C[72777085] );
  v15 = dword_140404A6C[73991632];
  dword_140404A6C[283831312] = dword_140404A6C[73991632];
  if ( dword_140404A6C[73991632] - 3 > 2 )
  {
    if ( dword_140404A6C[73991632] != 7 )
      v15 = 3;
    dword_140404A6C[283831312] = v15;
  }
  v16 = 0;
  sr_ResetGame(v15, v12, v13);
  dword_140404A6C[349900549] = 1;
  v17 = 0;
  if ( QueryPerformanceCounter((LARGE_INTEGER *)&argp) )
    v18 = (int)((double)(int)argp * *(double *)&dword_140404A6C[278520505]);
  else
    v18 = 0;
  while ( 1 )
  {
    sub_140198FA1(1);
    v21 = (unsigned int)v17;
    v22 = &dword_140404A6C[71859139];
    v17 = 0;
    do
    {
      if ( *(v22 - 2886) && !*v22 )
        ++v17;
      if ( v22[711] && !v22[3597] )
        ++v17;
      if ( v22[4308] && !v22[7194] )
        ++v17;
      if ( v22[7905] && !v22[10791] )
        ++v17;
      v22 += 14388;
    }
    while ( (__int64)v22 < (__int64)&dword_140404A6C[72779971] );
    if ( v17 > 0 && !(_DWORD)v21 )
    {
      dword_140404A6C[283831446] = 5;
      sr_ResetGame(v21, v19, v20);
    }
    v23 = 0;
    while ( 1 )
    {
      v24 = QueryPerformanceCounter((LARGE_INTEGER *)&argp)
          ? (int)((double)(int)argp * *(double *)&dword_140404A6C[278520505])
          : 0;
      if ( (unsigned int)(v24 - v18) < 0x10 || v23 >= 5 )
        break;
      if ( ++v23 >= 4 )
      {
        if ( QueryPerformanceCounter((LARGE_INTEGER *)&PerformanceCount) )
          v18 = (int)((double)(int)PerformanceCount * *(double *)&dword_140404A6C[278520505]);
        else
          v18 = 0;
      }
      else
      {
        v18 += 16;
      }
      if ( --v16 <= 0 )
      {
        v25 = dword_140404A6C[134050358];
        v16 = 3600;
        v26 = 0;
        if ( (int)dword_140404A6C[134050358] > 0 )
        {
          v27 = &dword_140404A6C[134050385];
          do
          {
            if ( (int)*v27 > 0 )
            {
              --*v27;
              v25 = dword_140404A6C[134050358];
            }
            ++v26;
            v27 += 28;
          }
          while ( v26 < v25 );
        }
      }
      if ( dword_140404A6C[283831448] == 2 )
      {
        v28 = 0;
        v29 = &dword_140404A6C[71859139];
        do
        {
          if ( *(v29 - 2886) && *v29 )
            sub_1401178F0(v28);
          ++v28;
          v29 += 3597;
        }
        while ( v28 < 256 );
      }
      sub_140132F90();
      sub_140133090();
      dword_140404A6C[179668289] = 0;
      dword_140404A6C[179815746] = 0;
      sub_14011B2A0();
      if ( dword_140404A6C[283831448] <= 2 )
        sub_140116210();
      sub_1400F5820(v31, v30, a3);
      sub_140136450();
      ++dword_140404A6C[283831474];
      if ( dword_140404A6C[283831448] <= 2 )
        sub_14002B9C0();
      sub_14008F1B0();
      if ( dword_140404A6C[283831448] <= 2 )
        sub_14002CE50();
    }
  }
}

// 14007F135: variable 'v12' is possibly undefined
// 14007F135: variable 'v13' is possibly undefined
// 14007F1FB: variable 'v19' is possibly undefined
// 14007F1FB: variable 'v20' is possibly undefined
// 14007F322: variable 'v31' is possibly undefined
// 14007F322: variable 'v30' is possibly undefined
// 14011BD10: using guessed type __int64 sub_14011BD10(const char *, ...);
// 140198FD1: using guessed type __int64 __fastcall bind(_QWORD, _QWORD, _QWORD);
// 140198FE3: using guessed type __int64 __fastcall ioctlsocket(_QWORD, _QWORD, _QWORD);
// 140198FF5: using guessed type __int64 __fastcall htons(_QWORD);
// 14019902B: using guessed type __int64 __fastcall socket(_QWORD, _QWORD, _QWORD);
// 14030186C: using guessed type int dword_14030186C;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151E45940: using guessed type unsigned int;
// 151E45948: using guessed type unsigned int;
// 151E4614C: using guessed type unsigned int;
// 151E46150: using guessed type unsigned int;
// 151E461A8: using guessed type unsigned int;
// 151E461AC: using guessed type unsigned int;
// 151E461B0: using guessed type unsigned int;
// 160361344: using guessed type unsigned int;
// 16B165F70: using guessed type unsigned int;
// 16B1F5F74: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCC4: using guessed type unsigned int;
// 183EBFCDC: using guessed type unsigned int;
// 183EBFD30: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 18539D3A4: using guessed type unsigned int;
// 18539D3F8: using guessed type unsigned int;
// 19021F0C4: using guessed type unsigned int;
// 19021F0DC: using guessed type unsigned int;
// 19021F0F4: using guessed type unsigned int;
// 19021F10C: using guessed type unsigned int;
// 193AC8680: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;
// 1AD04ADC8: using guessed type unsigned int;
// 1AD04B1F4: using guessed type unsigned int;

//----- (000000014007F370) ----------------------------------------------------
void            sub_14007F370(unsigned int a1)
{
  __int64 v2; // rsi
  int v3; // eax
  __int64 v4; // rdi
  unsigned int *v5; // r11
  __int64 v6; // rax
  __int64 v7; // rcx
  signed int v8; // edx
  unsigned int *v9; // r9
  int v10; // r8d
  unsigned int *v11; // rax
  int v12; // eax
  __int64 v13; // rdi
  unsigned int *v14; // r11
  __int64 v15; // rcx
  signed int v16; // edx
  unsigned int *v17; // r9
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rbx

  if ( a1 <= 0x3FFF )
  {
    v2 = 61LL * (int)a1;
    v3 = dword_140404A6C[v2 + 486149258];
    if ( v3 > 0 )
    {
      v4 = (unsigned int)v3;
      v5 = &dword_140404A6C[v2 + 486149259];
      do
      {
        v6 = (int)*v5;
        if ( (_DWORD)v6 != -1 )
        {
          v7 = (int)*v5;
          v8 = 0;
          v9 = &dword_140404A6C[60 * v6 + 73007041];
          v10 = *v9;
          if ( (int)*v9 > 0 )
          {
            v11 = &dword_140404A6C[60 * v7 + 73007042];
            do
            {
              if ( *v11 == a1 )
              {
                *v9 = v10 - 1;
                *v11 = dword_140404A6C[60 * v7 + 73007041 + v10];
              }
              else
              {
                ++v8;
                ++v11;
              }
              v10 = *v9;
            }
            while ( v8 < (int)*v9 );
          }
        }
        ++v5;
        --v4;
      }
      while ( v4 );
    }
    v12 = dword_140404A6C[v2 + 486149290];
    if ( v12 > 0 )
    {
      v13 = (unsigned int)v12;
      v14 = &dword_140404A6C[v2 + 486149291];
      do
      {
        v15 = (int)*v14;
        v16 = 0;
        v17 = &dword_140404A6C[5210 * v15 + 129716962];
        v18 = *v17;
        if ( (int)*v17 > 0 )
        {
          v19 = 5210 * v15;
          v20 = v19;
          do
          {
            if ( dword_140404A6C[v19 + 129716963] == a1 )
            {
              *v17 = v18 - 1;
              dword_140404A6C[v19 + 129716963] = dword_140404A6C[v20 + 129716962 + v18];
            }
            else
            {
              ++v16;
              ++v19;
            }
            v18 = *v17;
          }
          while ( v16 < (int)*v17 );
        }
        ++v14;
        --v13;
      }
      while ( v13 );
    }
    dword_140404A6C[v2 + 486149253] = 0;
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007F590) ----------------------------------------------------
unsigned int *           sub_14007F590(signed int a1)
{
  unsigned int *result; // rax
  __int64 v2; // r15
  __int64 v3; // rbp
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rsi
  int *v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rdx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r8
  unsigned int *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  bool v32; // zf
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (unsigned int *)&retaddr;
  v2 = a1;
  if ( (unsigned int)a1 <= 0xFF )
  {
    v3 = 7166LL * a1;
    v4 = (int)dword_140404A6C[v3 + 280651305];
    if ( (_DWORD)v4 != -1 && dword_140404A6C[3597 * v4 + 71856292] == a1 )
      dword_140404A6C[3597 * v4 + 71856292] = -1;
    v5 = 0;
    v6 = 0;
    v7 = (int *)&dword_140404A6C[v3 + 280658139];
    do
    {
      while ( *v7 > 0 )
        sub_1400CA7C0(dword_140404A6C[7166 * v2 + 280658139 + v6 + *v7], v2, v5);
      ++v5;
      v6 += 10;
      v7 += 10;
    }
    while ( v5 < 8 );
    v8 = dword_140404A6C[7166 * v2 + 280654224];
    if ( v8 > 0 )
    {
      v9 = (unsigned int)v8;
      v10 = &dword_140404A6C[v3 + 280654225];
      do
      {
        v11 = (int)*v10;
        v10 += 3;
        dword_140404A6C[61 * v11 + 486149253] = 0;
        --v9;
      }
      while ( v9 );
    }
    v12 = dword_140404A6C[7166 * v2 + 280652687];
    if ( v12 > 0 )
    {
      v13 = (unsigned int)v12;
      v14 = &dword_140404A6C[v3 + 280652688];
      do
      {
        v15 = (int)*v14;
        v14 += 12;
        dword_140404A6C[61 * v15 + 486149253] = 0;
        --v13;
      }
      while ( v13 );
    }
    v16 = (int)dword_140404A6C[7166 * v2 + 280651439];
    if ( (unsigned int)v16 < 0x2000 )
      dword_140404A6C[47 * v16 + 18215709] = 0;
    v17 = (int)dword_140404A6C[7166 * v2 + 280651517];
    if ( (unsigned int)v17 < 0x2000 )
      dword_140404A6C[47 * v17 + 18215709] = 0;
    v18 = (int)dword_140404A6C[7166 * v2 + 280651595];
    if ( (unsigned int)v18 < 0x2000 )
      dword_140404A6C[47 * v18 + 18215709] = 0;
    v19 = (int)dword_140404A6C[7166 * v2 + 280651673];
    if ( (unsigned int)v19 < 0x2000 )
      dword_140404A6C[47 * v19 + 18215709] = 0;
    v20 = (int)dword_140404A6C[7166 * v2 + 280651751];
    if ( (unsigned int)v20 < 0x2000 )
      dword_140404A6C[47 * v20 + 18215709] = 0;
    v21 = (int)dword_140404A6C[7166 * v2 + 280651829];
    if ( (unsigned int)v21 < 0x2000 )
      dword_140404A6C[47 * v21 + 18215709] = 0;
    v22 = (int)dword_140404A6C[7166 * v2 + 280651907];
    if ( (unsigned int)v22 < 0x2000 )
      dword_140404A6C[47 * v22 + 18215709] = 0;
    v23 = (int)dword_140404A6C[7166 * v2 + 280651985];
    if ( (unsigned int)v23 < 0x2000 )
      dword_140404A6C[47 * v23 + 18215709] = 0;
    v24 = (int)dword_140404A6C[7166 * v2 + 280652063];
    if ( (unsigned int)v24 < 0x2000 )
      dword_140404A6C[47 * v24 + 18215709] = 0;
    v25 = (int)dword_140404A6C[7166 * v2 + 280652141];
    if ( (unsigned int)v25 < 0x2000 )
      dword_140404A6C[47 * v25 + 18215709] = 0;
    v26 = (int)dword_140404A6C[7166 * v2 + 280652219];
    if ( (unsigned int)v26 < 0x2000 )
      dword_140404A6C[47 * v26 + 18215709] = 0;
    v27 = (int)dword_140404A6C[7166 * v2 + 280652297];
    if ( (unsigned int)v27 < 0x2000 )
      dword_140404A6C[47 * v27 + 18215709] = 0;
    v28 = (int)dword_140404A6C[7166 * v2 + 280652375];
    if ( (unsigned int)v28 < 0x2000 )
      dword_140404A6C[47 * v28 + 18215709] = 0;
    v29 = (int)dword_140404A6C[7166 * v2 + 280652453];
    if ( (unsigned int)v29 < 0x2000 )
      dword_140404A6C[47 * v29 + 18215709] = 0;
    v30 = (int)dword_140404A6C[7166 * v2 + 280652531];
    if ( (unsigned int)v30 < 0x2000 )
      dword_140404A6C[47 * v30 + 18215709] = 0;
    result = (unsigned int *)(int)dword_140404A6C[7166 * v2 + 280652609];
    if ( (unsigned int)result < 0x2000 )
      dword_140404A6C[47 * (_QWORD)result + 18215709] = 0;
    v31 = dword_140404A6C[132792829];
    if ( (int)dword_140404A6C[132792829] > 0 )
    {
      result = &dword_140404A6C[132400638];
      do
      {
        if ( *result == (_DWORD)v2 )
          *result = -1;
        result += 383;
        --v31;
      }
      while ( v31 );
    }
    v32 = dword_140404A6C[456202453] == 0;
    dword_140404A6C[7166 * v2 + 280651303] = 0;
    if ( !v32 )
      ++dword_140404A6C[v2 + 282485789];
  }
  return result;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014007F970) ----------------------------------------------------
void            sub_14007F970(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rdi
  int v4; // edx
  int v5; // ecx
  unsigned int i; // ebp
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // r10
  int v10; // r8d
  int *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // rax

  v1 = a1;
  if ( (unsigned int)a1 <= 0x3FF )
  {
    v2 = a1;
    v3 = 1760LL * a1;
    if ( dword_140404A6C[v3 + 278846091] && (int)dword_140404A6C[v3 + 278845971] > 0 )
      sub_1400CDFF0(a1);
    if ( dword_140404A6C[v3 + 278845898] == 29 )
      --dword_140404A6C[284023071];
    v4 = dword_140404A6C[v3 + 278845902];
    if ( v4 != -1 )
      sub_1400CA7C0(v1, v4, dword_140404A6C[v3 + 278845904]);
    v5 = dword_140404A6C[v3 + 278845906];
    for ( i = dword_140404A6C[456202453]; v5 > 0; v5 = dword_140404A6C[v3 + 278845906] )
    {
      dword_140404A6C[v3 + 278845906] = v5 - 1;
      v7 = (int)dword_140404A6C[1760 * v1 + 278845906 + (unsigned int)v5];
      dword_140404A6C[1760 * v7 + 278845903] = -1;
      if ( i && (unsigned int)v7 <= 0x3FF )
        ++dword_140404A6C[v7 + 280648157];
    }
    v8 = dword_140404A6C[v3 + 278845903];
    if ( v8 != -1 )
      sub_1400CA9B0(v1, v8);
    v9 = 1760 * v1;
    v10 = 1;
    v11 = (int *)&dword_140404A6C[1760 * v2 + 278845989];
    v12 = 2;
    v13 = 4;
    do
    {
      if ( (v10 & dword_140404A6C[v9 + 278845985 + ((v12 - 2) >> 5)]) != 0 )
        dword_140404A6C[39 * *(v11 - 2) + 290382645] = 0;
      if ( (__ROL4__(v10, 1) & dword_140404A6C[v9 + 278845985 + ((v12 - 1) >> 5)]) != 0 )
        dword_140404A6C[39 * *(v11 - 1) + 290382645] = 0;
      if ( (__ROL4__(v10, 2) & dword_140404A6C[v9 + 278845985 + (v12 >> 5)]) != 0 )
        dword_140404A6C[39 * *v11 + 290382645] = 0;
      if ( (__ROL4__(v10, 3) & dword_140404A6C[v9 + 278845985 + ((v12 + 1) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[1] + 290382645] = 0;
      if ( (__ROL4__(v10, 4) & dword_140404A6C[v9 + 278845985 + ((v12 + 2) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[2] + 290382645] = 0;
      if ( (__ROL4__(v10, 5) & dword_140404A6C[v9 + 278845985 + ((v12 + 3) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[3] + 290382645] = 0;
      if ( (__ROL4__(v10, 6) & dword_140404A6C[v9 + 278845985 + ((v12 + 4) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[4] + 290382645] = 0;
      if ( (__ROL4__(v10, 7) & dword_140404A6C[v9 + 278845985 + ((v12 + 5) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[5] + 290382645] = 0;
      if ( (__ROL4__(v10, 8) & dword_140404A6C[v9 + 278845985 + ((v12 + 6) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[6] + 290382645] = 0;
      if ( (__ROL4__(v10, 9) & dword_140404A6C[v9 + 278845985 + ((v12 + 7) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[7] + 290382645] = 0;
      if ( (__ROL4__(v10, 10) & dword_140404A6C[v9 + 278845985 + ((v12 + 8) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[8] + 290382645] = 0;
      if ( (__ROL4__(v10, 11) & dword_140404A6C[v9 + 278845985 + ((v12 + 9) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[9] + 290382645] = 0;
      if ( (__ROL4__(v10, 12) & dword_140404A6C[v9 + 278845985 + ((v12 + 10) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[10] + 290382645] = 0;
      if ( (__ROL4__(v10, 13) & dword_140404A6C[v9 + 278845985 + ((v12 + 11) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[11] + 290382645] = 0;
      if ( (__ROL4__(v10, 14) & dword_140404A6C[v9 + 278845985 + ((v12 + 12) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[12] + 290382645] = 0;
      if ( (__ROL4__(v10, 15) & dword_140404A6C[v9 + 278845985 + ((v12 + 13) >> 5)]) != 0 )
        dword_140404A6C[39 * v11[13] + 290382645] = 0;
      v12 += 16;
      v10 = __ROL4__(v10, 16);
      v11 += 16;
      --v13;
    }
    while ( v13 );
    if ( dword_140404A6C[v3 + 278845898] == 27 )
    {
      v14 = (int)dword_140404A6C[v3 + 278846053];
      if ( (unsigned int)v14 <= 0x1FF )
        dword_140404A6C[5210 * v14 + 129716716] = 0;
    }
    v15 = (int)dword_140404A6C[v3 + 278845915];
    if ( (unsigned int)v15 < 0x2000 )
      dword_140404A6C[47 * v15 + 18215709] = 0;
    dword_140404A6C[v3 + 278845893] = 0;
    if ( i )
      ++dword_140404A6C[v2 + 280648157];
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 183F7AEE8: using guessed type unsigned int;
// 1AD04ADC0: using guessed type unsigned int;

//----- (000000014007FE00) ----------------------------------------------------
void            sub_14007FE00(unsigned int a1)
{
  __int64 v2; // r10
  int v3; // eax
  __int64 v4; // r9
  unsigned int *v5; // r8
  __int64 v6; // rax
  unsigned int *v7; // rax
  __int64 v8; // rcx
  unsigned int *v9; // rax
  int v10; // eax
  __int64 v11; // r9
  unsigned int *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int *v15; // rax
  unsigned int *v16; // r8
  unsigned int v17; // r9d
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // xmm0_4
  unsigned int v21; // xmm1_4
  unsigned int v22; // xmm2_4

  if ( a1 <= 0x1FF )
  {
    v2 = 5210LL * (int)a1;
    v3 = dword_140404A6C[v2 + 129716768];
    if ( v3 > 0 )
    {
      v4 = (unsigned int)v3;
      v5 = &dword_140404A6C[v2 + 129716769];
      do
      {
        v6 = (int)*v5++;
        dword_140404A6C[60 * v6 + 73007022] = 0;
        --v4;
      }
      while ( v4 );
    }
    v7 = &dword_140404A6C[280651313];
    do
    {
      if ( *(v7 - 10) && *v7 == a1 )
        *v7 = -1;
      if ( v7[7156] && v7[7166] == a1 )
        v7[7166] = -1;
      if ( v7[14322] && v7[14332] == a1 )
        v7[14332] = -1;
      if ( v7[21488] && v7[21498] == a1 )
        v7[21498] = -1;
      v7 += 28664;
    }
    while ( (__int64)v7 < (__int64)&dword_140404A6C[282485809] );
    v8 = dword_140404A6C[132792829];
    if ( (int)dword_140404A6C[132792829] > 0 )
    {
      v9 = &dword_140404A6C[132400639];
      do
      {
        if ( *v9 == a1 )
          *v9 = -1;
        v9 += 383;
        --v8;
      }
      while ( v8 );
    }
    v10 = dword_140404A6C[v2 + 129720373];
    dword_140404A6C[v2 + 129716709] = 0;
    if ( v10 > 0 )
    {
      v11 = (unsigned int)v10;
      v12 = &dword_140404A6C[v2 + 129720374];
      do
      {
        v13 = (int)*v12;
        if ( (unsigned int)v13 < 0x2000 )
          dword_140404A6C[47 * v13 + 18215709] = 0;
        v12 += 43;
        --v11;
      }
      while ( v11 );
    }
    v14 = (int)dword_140404A6C[v2 + 129716719];
    if ( (unsigned int)v14 < 0x2000 )
      dword_140404A6C[47 * v14 + 18215709] = 0;
    v15 = &dword_140404A6C[278845898];
    do
    {
      if ( *(v15 - 5) && *v15 == 27 && v15[155] == a1 )
      {
        v15[2] = 0;
        v15[155] = -1;
      }
      v15 += 1760;
    }
    while ( (__int64)v15 < (__int64)&dword_140404A6C[280648138] );
    v16 = &dword_140404A6C[v2 + 129716720];
    if ( dword_140404A6C[456202453] )
    {
      v17 = dword_140404A6C[308307070];
      v18 = dword_140404A6C[283831474];
      v19 = (__int64)(int)dword_140404A6C[308307070] << 7;
      *(unsigned int *)((char *)&dword_140404A6C[297756285] + v19) = 4;
      *(unsigned int *)((char *)&dword_140404A6C[297756286] + v19) = v18;
      *(unsigned int *)((char *)&dword_140404A6C[297756293] + v19) = a1;
      *(_QWORD *)((char *)&dword_140404A6C[297756294] + v19) = 3;
      if ( v16 )
      {
        v20 = v16[2];
        v21 = v16[1];
        v22 = *v16;
      }
      else
      {
        v20 = 0;
        v21 = 0;
        v22 = 0;
      }
      *(unsigned int *)((char *)&dword_140404A6C[297756287] + v19) = v22;
      *(unsigned int *)((char *)&dword_140404A6C[297756288] + v19) = v21;
      *(unsigned int *)((char *)&dword_140404A6C[297756289] + v19) = v20;
      dword_140404A6C[308307070] = v17 + 1;
      HIWORD(dword_140404A6C[308307070]) = 0;
      *(_QWORD *)((char *)&dword_140404A6C[297756290] + v19) = 0;
      *(unsigned int *)((char *)&dword_140404A6C[297756292] + v19) = 0;
    }
  }
}
