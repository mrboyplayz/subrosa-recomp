/* Address: 0x140067970 | Name: sub_140067970 | Size: 4133 bytes */
int __fastcall sub_140067970(int a1, int a2, float *a3, float *a4)
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
  sub_14007A240(&v158, &v158);
  v160 = (float)(v159 * v164) - (float)(v165 * *((float *)&v158 + 1));
  v162 = (float)(v163 * *((float *)&v158 + 1)) - (float)(*(float *)&v158 * v164);
  v161 = (float)(v165 * *(float *)&v158) - (float)(v163 * v159);
  result = sub_14007A240(&v160, &v160);
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
        sub_1400A56B0(&v166);
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

