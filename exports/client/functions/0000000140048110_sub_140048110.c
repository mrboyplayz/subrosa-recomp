/* Address: 0x140048110 | Name: sub_140048110 | Size: 2260 bytes */
__int64 __fastcall sub_140048110(int *a1)
{
  int v2; // ebp
  float *v3; // r10
  __int64 v4; // rsi
  float v5; // xmm7_4
  float v6; // xmm11_4
  float v7; // xmm9_4
  __int64 v8; // r15
  float *v9; // r14
  unsigned __int64 v10; // rbx
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm15_4
  float v14; // xmm14_4
  float v15; // xmm10_4
  float v16; // xmm7_4
  float v17; // xmm8_4
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm11_4
  float v24; // xmm5_4
  float v25; // xmm6_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  __int64 v28; // rcx
  float v29; // xmm4_4
  float v30; // xmm3_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm11_4
  float v38; // xmm0_4
  float v39; // xmm1_4
  float v40; // xmm12_4
  float v41; // xmm5_4
  float v42; // xmm0_4
  float v43; // xmm12_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  float v46; // xmm9_4
  float v47; // xmm13_4
  float v48; // xmm2_4
  float v49; // xmm6_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm0_4
  float v54; // xmm14_4
  float v55; // xmm1_4
  float v56; // xmm15_4
  float v57; // xmm2_4
  float v58; // xmm9_4
  float v59; // xmm1_4
  float v60; // xmm5_4
  float v61; // xmm2_4
  float v62; // xmm10_4
  float v63; // xmm0_4
  float v64; // xmm10_4
  float v65; // xmm0_4
  float v66; // xmm1_4
  float *v67; // rdx
  __int64 v68; // r11
  float v69; // xmm6_4
  float v70; // xmm4_4
  float v71; // xmm5_4
  __int64 v72; // rcx
  int *v73; // rcx
  __int64 v74; // rdx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // eax
  __int64 v106; // r10
  int v107; // r8d
  char *v108; // rdx
  int *v109; // r9
  __int64 v110; // rcx
  _DWORD *v111; // rax
  float v113; // [rsp+0h] [rbp-428h] BYREF
  float v114; // [rsp+4h] [rbp-424h]
  float v115; // [rsp+8h] [rbp-420h]
  float v116; // [rsp+Ch] [rbp-41Ch]
  float v117; // [rsp+10h] [rbp-418h]
  float v118; // [rsp+14h] [rbp-414h]
  float v119; // [rsp+18h] [rbp-410h]
  float v120; // [rsp+1Ch] [rbp-40Ch]
  float v121; // [rsp+20h] [rbp-408h]
  float v122; // [rsp+24h] [rbp-404h]
  float v123; // [rsp+28h] [rbp-400h]
  float v124; // [rsp+2Ch] [rbp-3FCh]
  float v125; // [rsp+30h] [rbp-3F8h]
  float v126; // [rsp+34h] [rbp-3F4h]
  float v127; // [rsp+38h] [rbp-3F0h]
  float v128; // [rsp+3Ch] [rbp-3ECh]
  float v129; // [rsp+40h] [rbp-3E8h]
  float v130; // [rsp+44h] [rbp-3E4h]
  char v131; // [rsp+58h] [rbp-3D0h] BYREF
  __int64 v132; // [rsp+350h] [rbp-D8h]

  v2 = 0;
  if ( *a1 > 0 )
  {
    v3 = (float *)(a1 + 19);
    do
    {
      v4 = 0;
      v3[2] = *(v3 - 1);
      v5 = 0.0;
      v6 = 0.0;
      v3[3] = *v3;
      v7 = 0.0;
      v3[4] = v3[1];
      v8 = *((int *)v3 - 18);
      v114 = 0.0;
      v115 = 0.0;
      v116 = 0.0;
      if ( v8 >= 4 )
      {
        v9 = v3 - 17;
        v10 = ((unsigned __int64)(v8 - 4) >> 2) + 1;
        v4 = 4 * v10;
        do
        {
          v11 = v9[1];
          v12 = v9[2];
          v13 = v9[10];
          v14 = v9[11];
          v15 = v9[13];
          v16 = v9[14];
          v17 = v9[15];
          v18 = 47LL * *(int *)v9;
          v19 = 47LL * *((int *)v9 + 4);
          v20 = *((int *)v9 + 8);
          v113 = *(float *)&dword_140404A6C[v18 + 18215724] * v11;
          v21 = v11 * *(float *)&dword_140404A6C[v18 + 18215725];
          v22 = v11 * *(float *)&dword_140404A6C[v18 + 18215726];
          v23 = *(float *)&dword_140404A6C[v19 + 18215724];
          v24 = *(float *)&dword_140404A6C[v19 + 18215730];
          v25 = *(float *)&dword_140404A6C[v19 + 18215727];
          v119 = v21;
          v117 = *(float *)&dword_140404A6C[v18 + 18215727] * v12;
          v26 = *(float *)&dword_140404A6C[v18 + 18215730];
          v124 = v22;
          v27 = v9[3];
          v28 = 47LL * *((int *)v9 + 12);
          v29 = v13 * *(float *)&dword_140404A6C[47 * v20 + 18215728];
          v30 = v14 * *(float *)&dword_140404A6C[47 * v20 + 18215731];
          v118 = v26 * v27;
          v31 = v12 * *(float *)&dword_140404A6C[v18 + 18215728];
          v32 = v12 * *(float *)&dword_140404A6C[v18 + 18215729];
          v120 = v31;
          v33 = v27 * *(float *)&dword_140404A6C[v18 + 18215731];
          v34 = v27 * *(float *)&dword_140404A6C[v18 + 18215732];
          v121 = v33;
          v125 = v32;
          v35 = *(float *)&dword_140404A6C[47 * v20 + 18215724];
          v126 = v34;
          v36 = v9[5];
          v37 = v23 * v36;
          v38 = v36 * *(float *)&dword_140404A6C[v19 + 18215725];
          v39 = v36 * *(float *)&dword_140404A6C[v19 + 18215726];
          v122 = v38;
          v40 = v9[7];
          v41 = v24 * v40;
          v42 = v40 * *(float *)&dword_140404A6C[v19 + 18215732];
          v43 = v40 * *(float *)&dword_140404A6C[v19 + 18215731];
          v129 = v42;
          v44 = v9[9];
          v127 = v39;
          v45 = v9[6];
          v46 = v44 * *(float *)&dword_140404A6C[47 * v20 + 18215725];
          v47 = v45 * *(float *)&dword_140404A6C[v19 + 18215728];
          v48 = v35 * v44;
          v49 = v25 * v45;
          v50 = v45 * *(float *)&dword_140404A6C[v19 + 18215729];
          v130 = v44 * *(float *)&dword_140404A6C[47 * v20 + 18215726];
          v51 = *(float *)&dword_140404A6C[47 * v20 + 18215730];
          v128 = v50;
          v52 = *(float *)&dword_140404A6C[47 * v20 + 18215727];
          v53 = v51 * v14;
          v54 = v14 * *(float *)&dword_140404A6C[47 * v20 + 18215732];
          v123 = v47;
          v55 = v52 * v13;
          v56 = v13 * *(float *)&dword_140404A6C[47 * v20 + 18215729];
          v9 += 16;
          v57 = (float)((float)(v48 + *(float *)&dword_140404A6C[47 * v20 + 18215715]) + v55) + v53;
          v58 = (float)((float)(v46 + *(float *)&dword_140404A6C[47 * v20 + 18215716]) + v29) + v30;
          v59 = v119 + *(float *)&dword_140404A6C[v18 + 18215716];
          v60 = (float)((float)((float)((float)((float)((float)(v113 + *(float *)&dword_140404A6C[v18 + 18215715]) + v117)
                                              + v118)
                                      + v114)
                              + (float)((float)((float)(v37 + *(float *)&dword_140404A6C[v19 + 18215715]) + v49) + v41))
                      + v57)
              + (float)((float)((float)((float)(v15 * *(float *)&dword_140404A6C[v28 + 18215724])
                                      + *(float *)&dword_140404A6C[v28 + 18215715])
                              + (float)(v16 * *(float *)&dword_140404A6C[v28 + 18215727]))
                      + (float)(v17 * *(float *)&dword_140404A6C[v28 + 18215730]));
          v61 = v15 * *(float *)&dword_140404A6C[v28 + 18215725];
          v62 = v15 * *(float *)&dword_140404A6C[v28 + 18215726];
          v63 = (float)((float)(v122 + *(float *)&dword_140404A6C[v19 + 18215716]) + v47) + v43;
          v114 = v60;
          v64 = (float)((float)(v62 + *(float *)&dword_140404A6C[v28 + 18215717])
                      + (float)(v16 * *(float *)&dword_140404A6C[v28 + 18215729]))
              + (float)(v17 * *(float *)&dword_140404A6C[v28 + 18215732]);
          v6 = (float)((float)((float)((float)((float)(v59 + v120) + v121) + v115) + v63) + v58)
             + (float)((float)((float)(v61 + *(float *)&dword_140404A6C[v28 + 18215716])
                             + (float)(v16 * *(float *)&dword_140404A6C[v28 + 18215728]))
                     + (float)(v17 * *(float *)&dword_140404A6C[v28 + 18215731]));
          v65 = (float)((float)(v127 + *(float *)&dword_140404A6C[v19 + 18215717]) + v128) + v129;
          v66 = (float)(v124 + *(float *)&dword_140404A6C[v18 + 18215717]) + v125;
          v115 = v6;
          v7 = (float)((float)((float)((float)(v66 + v126) + v116) + v65)
                     + (float)((float)((float)(v130 + *(float *)&dword_140404A6C[47 * v20 + 18215717]) + v56) + v54))
             + v64;
          v116 = v7;
          --v10;
        }
        while ( v10 );
        v5 = v60;
      }
      if ( v4 < v8 )
      {
        v67 = &v3[4 * v4 - 17];
        v68 = v8 - v4;
        do
        {
          v69 = v67[1];
          v70 = v67[2];
          v71 = v67[3];
          v72 = 47LL * *(int *)v67;
          v67 += 4;
          v5 = v5
             + (float)((float)((float)((float)(v69 * *(float *)&dword_140404A6C[v72 + 18215724])
                                     + *(float *)&dword_140404A6C[v72 + 18215715])
                             + (float)(v70 * *(float *)&dword_140404A6C[v72 + 18215727]))
                     + (float)(v71 * *(float *)&dword_140404A6C[v72 + 18215730]));
          v6 = v6
             + (float)((float)((float)((float)(v69 * *(float *)&dword_140404A6C[v72 + 18215725])
                                     + *(float *)&dword_140404A6C[v72 + 18215716])
                             + (float)(v70 * *(float *)&dword_140404A6C[v72 + 18215728]))
                     + (float)(v71 * *(float *)&dword_140404A6C[v72 + 18215731]));
          v7 = v7
             + (float)((float)((float)((float)(v69 * *(float *)&dword_140404A6C[v72 + 18215726])
                                     + *(float *)&dword_140404A6C[v72 + 18215717])
                             + (float)(v70 * *(float *)&dword_140404A6C[v72 + 18215729]))
                     + (float)(v71 * *(float *)&dword_140404A6C[v72 + 18215732]));
          --v68;
        }
        while ( v68 );
      }
      ++v2;
      *(v3 - 1) = v5 * (float)(1.0 / (float)(int)v8);
      *v3 = v6 * (float)(1.0 / (float)(int)v8);
      v3[1] = v7 * (float)(1.0 / (float)(int)v8);
      v3 += 23;
    }
    while ( v2 < *a1 );
  }
  v73 = a1 + 2453;
  v74 = 2;
  do
  {
    v75 = *(v73 - 18);
    if ( v75 > 0 )
      *(v73 - 18) = v75 - 1;
    if ( *v73 > 0 )
      --*v73;
    v76 = v73[18];
    if ( v76 > 0 )
      v73[18] = v76 - 1;
    v77 = v73[36];
    if ( v77 > 0 )
      v73[36] = v77 - 1;
    v78 = v73[54];
    if ( v78 > 0 )
      v73[54] = v78 - 1;
    v79 = v73[72];
    if ( v79 > 0 )
      v73[72] = v79 - 1;
    v80 = v73[90];
    if ( v80 > 0 )
      v73[90] = v80 - 1;
    v81 = v73[108];
    if ( v81 > 0 )
      v73[108] = v81 - 1;
    v82 = v73[126];
    if ( v82 > 0 )
      v73[126] = v82 - 1;
    v83 = v73[144];
    if ( v83 > 0 )
      v73[144] = v83 - 1;
    v84 = v73[162];
    if ( v84 > 0 )
      v73[162] = v84 - 1;
    v85 = v73[180];
    if ( v85 > 0 )
      v73[180] = v85 - 1;
    v86 = v73[198];
    if ( v86 > 0 )
      v73[198] = v86 - 1;
    v87 = v73[216];
    if ( v87 > 0 )
      v73[216] = v87 - 1;
    v88 = v73[234];
    if ( v88 > 0 )
      v73[234] = v88 - 1;
    v89 = v73[252];
    if ( v89 > 0 )
      v73[252] = v89 - 1;
    v90 = v73[270];
    if ( v90 > 0 )
      v73[270] = v90 - 1;
    v91 = v73[288];
    if ( v91 > 0 )
      v73[288] = v91 - 1;
    v92 = v73[306];
    if ( v92 > 0 )
      v73[306] = v92 - 1;
    v93 = v73[324];
    if ( v93 > 0 )
      v73[324] = v93 - 1;
    v94 = v73[342];
    if ( v94 > 0 )
      v73[342] = v94 - 1;
    v95 = v73[360];
    if ( v95 > 0 )
      v73[360] = v95 - 1;
    v96 = v73[378];
    if ( v96 > 0 )
      v73[378] = v96 - 1;
    v97 = v73[396];
    if ( v97 > 0 )
      v73[396] = v97 - 1;
    v98 = v73[414];
    if ( v98 > 0 )
      v73[414] = v98 - 1;
    v99 = v73[432];
    if ( v99 > 0 )
      v73[432] = v99 - 1;
    v100 = v73[450];
    if ( v100 > 0 )
      v73[450] = v100 - 1;
    v101 = v73[468];
    if ( v101 > 0 )
      v73[468] = v101 - 1;
    v102 = v73[486];
    if ( v102 > 0 )
      v73[486] = v102 - 1;
    v103 = v73[504];
    if ( v103 > 0 )
      v73[504] = v103 - 1;
    v104 = v73[522];
    if ( v104 > 0 )
      v73[522] = v104 - 1;
    v105 = v73[540];
    if ( v105 > 0 )
      v73[540] = v105 - 1;
    v73 += 576;
    --v74;
  }
  while ( v74 );
  v106 = *a1;
  v107 = 0;
  if ( v106 > 0 )
  {
    v108 = &v131;
    v109 = a1 + 20;
    do
    {
      v110 = 0;
      v111 = a1 + 2436;
      do
      {
        if ( (int)*(v111 - 1) > 0 && *v111 == v107 && !v111[1] && !v111[2] && !v111[3] )
          break;
        ++v110;
        v111 += 18;
      }
      while ( v110 < 64 );
      ++v107;
      v109 += 23;
      v108 += 12;
      --v106;
    }
    while ( v106 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v113 ^ v132);
}

