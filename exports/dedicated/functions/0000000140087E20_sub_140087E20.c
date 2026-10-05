/* Address: 0x140087e20 | Name: sub_140087E20 | Size: 3149 bytes */
_BOOL8 __fastcall sub_140087E20(__int64 a1, int a2, float *a3, float *a4, int a5)
{
  float v5; // xmm3_4
  float *v6; // r12
  __int64 v7; // rsi
  float *v8; // r13
  float *v9; // rbx
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  int v18; // r15d
  __int64 v19; // r11
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  float v23; // xmm7_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float v26; // xmm10_4
  float v27; // xmm11_4
  float v28; // xmm12_4
  float v29; // xmm13_4
  float v30; // xmm14_4
  float v31; // xmm15_4
  signed __int64 v32; // r13
  signed __int64 v33; // rbx
  signed __int64 v34; // r12
  signed __int64 v35; // r10
  signed __int64 v36; // rdi
  signed __int64 v37; // r14
  float *v38; // rax
  signed __int64 v39; // r8
  unsigned __int64 v40; // r9
  signed __int64 v41; // rcx
  signed __int64 v42; // rdx
  __int64 v43; // r9
  signed __int64 v44; // r11
  float v45; // xmm4_4
  float v46; // xmm6_4
  float v47; // xmm0_4
  float v48; // xmm5_4
  float v49; // xmm3_4
  float v50; // xmm1_4
  float v51; // xmm2_4
  float v52; // xmm4_4
  float v53; // xmm1_4
  float v54; // xmm6_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  float v57; // xmm2_4
  float v58; // xmm3_4
  float v59; // xmm0_4
  float v60; // xmm5_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  float v63; // xmm2_4
  float v64; // xmm4_4
  float v65; // xmm1_4
  float v66; // xmm6_4
  float v67; // xmm2_4
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm3_4
  float v71; // xmm4_4
  float v72; // xmm3_4
  float v73; // xmm0_4
  float v74; // xmm5_4
  float v75; // xmm3_4
  float v76; // xmm1_4
  float v77; // xmm6_4
  float v78; // xmm2_4
  signed __int64 v79; // r15
  float v80; // xmm1_4
  signed __int64 v81; // r15
  float v82; // xmm1_4
  float v83; // xmm7_4
  float v84; // xmm8_4
  float v85; // xmm9_4
  float v86; // xmm10_4
  float v87; // xmm11_4
  float v88; // xmm12_4
  float v89; // xmm13_4
  float v90; // xmm14_4
  float v91; // xmm15_4
  float *v92; // rax
  __int64 v93; // rdx
  float v94; // xmm4_4
  float v95; // xmm5_4
  float v96; // xmm6_4
  float v97; // xmm1_4
  float v98; // xmm3_4
  float v99; // xmm1_4
  int v100; // r14d
  __int64 v101; // r15
  int *v102; // rdi
  float v103; // xmm13_4
  float v104; // xmm14_4
  float v105; // xmm15_4
  __int64 v106; // rcx
  float v107; // xmm3_4
  float v108; // xmm1_4
  __int64 v109; // rax
  float v110; // xmm1_4
  float v111; // xmm3_4
  float v112; // xmm11_4
  float v113; // xmm12_4
  float v114; // xmm9_4
  float v115; // xmm11_4
  float v116; // xmm12_4
  float v117; // xmm6_4
  float v118; // xmm7_4
  float v119; // xmm8_4
  float v120; // xmm3_4
  float v121; // xmm8_4
  float v122; // xmm6_4
  float v123; // xmm7_4
  int v124; // xmm2_4
  int v125; // xmm1_4
  __int64 v126; // rax
  float v127; // xmm1_4
  float v128; // xmm3_4
  float v129; // xmm1_4
  float v130; // xmm3_4
  float v131; // xmm5_4
  float v132; // xmm4_4
  float v133; // xmm9_4
  float v134; // xmm0_4
  float v135; // xmm8_4
  float v136; // xmm7_4
  float v137; // xmm6_4
  int v138; // xmm2_4
  int v139; // xmm1_4
  float *v140; // rdi
  int v141; // xmm2_4
  int v142; // xmm1_4
  int v143; // xmm0_4
  int v144; // xmm1_4
  int v145; // xmm0_4
  float v146; // xmm1_4
  unsigned __int64 v148; // [rsp+40h] [rbp-C0h] BYREF
  float v149; // [rsp+48h] [rbp-B8h]
  float *v150; // [rsp+50h] [rbp-B0h] BYREF
  int v151; // [rsp+58h] [rbp-A8h]
  __int64 v152; // [rsp+60h] [rbp-A0h] BYREF
  float *v153; // [rsp+68h] [rbp-98h] BYREF
  float v154; // [rsp+70h] [rbp-90h]
  float *v155; // [rsp+78h] [rbp-88h] BYREF
  float v156; // [rsp+80h] [rbp-80h]
  __int64 v157; // [rsp+88h] [rbp-78h] BYREF
  float v158; // [rsp+90h] [rbp-70h]
  signed __int64 v159; // [rsp+98h] [rbp-68h]
  signed __int64 v160; // [rsp+A0h] [rbp-60h]
  signed __int64 v161; // [rsp+A8h] [rbp-58h]
  signed __int64 v162; // [rsp+B0h] [rbp-50h]
  signed __int64 v163; // [rsp+B8h] [rbp-48h]
  signed __int64 v164; // [rsp+C0h] [rbp-40h]
  signed __int64 v165; // [rsp+C8h] [rbp-38h]
  signed __int64 v166; // [rsp+D0h] [rbp-30h]
  signed __int64 v167; // [rsp+D8h] [rbp-28h]
  __int64 v168; // [rsp+E0h] [rbp-20h]
  __int64 v169; // [rsp+E8h] [rbp-18h]
  int v170; // [rsp+F0h] [rbp-10h] BYREF
  int v171; // [rsp+F4h] [rbp-Ch] BYREF
  _BYTE v173[4]; // [rsp+FCh] [rbp-4h] BYREF
  char v174; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v175[4]; // [rsp+104h] [rbp+4h] BYREF
  char v176; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v177[4]; // [rsp+10Ch] [rbp+Ch] BYREF
  _BYTE v178[4]; // [rsp+110h] [rbp+10h] BYREF
  char v179; // [rsp+114h] [rbp+14h] BYREF
  _BYTE v180[4]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v181[6100]; // [rsp+11Ch] [rbp+1Ch] BYREF

  v5 = *a3;
  v6 = a4;
  v7 = 20840LL * a2;
  v153 = a4;
  v8 = a3;
  v150 = a3;
  v9 = (float *)a1;
  v155 = (float *)a1;
  v169 = v7;
  v10 = *(float *)((char *)dword_16E6A3D10 + v7);
  if ( v5 < v10 && v10 > *a4 )
    return 0;
  v11 = *(float *)((char *)dword_16E6A3D14 + v7);
  v12 = a3[1];
  if ( v12 < v11 && v11 > a4[1] )
    return 0;
  v13 = *(float *)((char *)dword_16E6A3D18 + v7);
  v14 = a3[2];
  if ( v14 < v13 && v13 > a4[2] )
    return 0;
  v15 = *(float *)((char *)dword_16E6A3D1C + v7);
  if ( v5 > v15 && v15 < *a4 )
    return 0;
  v16 = *(float *)((char *)dword_16E6A3D20 + v7);
  if ( v12 > v16 && v16 < a4[1] )
    return 0;
  v17 = *(float *)((char *)dword_16E6A3D24 + v7);
  if ( v14 > v17 && v17 < a4[2] )
    return 0;
  v18 = 0;
  v19 = 0;
  *(_DWORD *)(a1 + 24) = 1065353216;
  v20 = *(int *)((char *)dword_16E6A3C64 + v7);
  v21 = 180288 * v20;
  v148 = v20;
  v152 = 180288 * v20;
  v22 = dword_143DB3AFC[45072 * v20];
  v168 = v22;
  if ( v22 < 4 )
  {
    if ( v22 <= 0 )
      goto LABEL_19;
    goto LABEL_17;
  }
  v23 = *(float *)((char *)dword_16E6A3CA4 + v7);
  v24 = *(float *)((char *)dword_16E6A3C8C + v7);
  v25 = *(float *)((char *)dword_16E6A3CA8 + v7);
  v26 = *(float *)((char *)dword_16E6A3C90 + v7);
  v27 = *(float *)((char *)dword_16E6A3CAC + v7);
  v28 = *(float *)((char *)dword_16E6A3C94 + v7);
  v29 = *(float *)((char *)dword_16E6A3CB0 + v7);
  v30 = *(float *)((char *)dword_16E6A3CB4 + v7);
  v31 = *(float *)((char *)dword_16E6A3CB8 + v7);
  v159 = &v175[-v21] - (_BYTE *)&unk_143DB3B04;
  v164 = &v173[-v21] - (_BYTE *)&unk_143DB3B04;
  v160 = &v177[-v21] - (_BYTE *)&unk_143DB3B04;
  v32 = v160;
  v165 = &v176 - v21 - (char *)&unk_143DB3B04;
  v161 = &v178[-v21] - (_BYTE *)&unk_143DB3B04;
  v33 = v161;
  v162 = &v180[-v21] - (_BYTE *)&unk_143DB3B04;
  v34 = v162;
  v166 = &v179 - v21 - (char *)&unk_143DB3B04;
  v167 = &v181[-v21] - (_BYTE *)&unk_143DB3B04;
  v35 = (char *)&v171 - v21 - (char *)&unk_143DB3B04;
  v36 = &v173[-v21 - 4] - (_BYTE *)&unk_143DB3B04;
  v37 = &v174 - v21 - (char *)&unk_143DB3B04;
  v163 = (char *)&v170 - v21 - (char *)&unk_143DB3B04;
  v38 = (float *)((char *)&unk_143DB3B04 + v21);
  v39 = v159;
  v40 = v22 - 4;
  v41 = v163;
  v42 = v164;
  v43 = (v40 >> 2) + 1;
  v157 = 4 * v43;
  v44 = v165;
  do
  {
    v45 = *(v38 - 1);
    v46 = v38[1];
    v47 = v31 * *v38;
    v48 = v38[3];
    v49 = (float)((float)((float)(v25 * v45) + v26) + (float)(v30 * *v38))
        + (float)(*(float *)((char *)dword_16E6A3CC0 + v7) * v46);
    v50 = *(float *)((char *)dword_16E6A3CC4 + v7);
    *(float *)((char *)v38 + v41) = (float)((float)((float)(v23 * v45) + v24) + (float)(v29 * *v38))
                                  + (float)(*(float *)((char *)dword_16E6A3CBC + v7) * v46);
    v51 = v27 * v45;
    v52 = v38[2];
    v53 = v50 * v46;
    v54 = v38[4];
    *(float *)((char *)v38 + v35) = v49;
    v55 = (float)((float)(v51 + v28) + v47) + v53;
    v56 = *(float *)((char *)dword_16E6A3CBC + v7) * v54;
    *(float *)((char *)v38 + v36) = v55;
    v57 = (float)((float)((float)(v23 * v52) + v24) + (float)(v29 * v48)) + v56;
    v58 = (float)((float)(v25 * v52) + v26) + (float)(v30 * v48);
    v59 = v31 * v48;
    v60 = v38[6];
    v61 = v58 + (float)(*(float *)((char *)dword_16E6A3CC0 + v7) * v54);
    v62 = *(float *)((char *)dword_16E6A3CC4 + v7);
    *(float *)((char *)v38 + v42) = v57;
    v63 = v27 * v52;
    v64 = v38[5];
    v65 = v62 * v54;
    v66 = v38[7];
    *(float *)((char *)v38 + v37) = v61;
    v67 = (float)((float)(v63 + v28) + v59) + v65;
    v68 = *(float *)((char *)dword_16E6A3CBC + v7) * v66;
    *(float *)((char *)v38 + v39) = v67;
    *(float *)((char *)v38 + v44) = (float)((float)((float)(v23 * v64) + v24) + (float)(v29 * v60)) + v68;
    v69 = (float)(v27 * v64) + v28;
    v70 = v25 * v64;
    v71 = v38[8];
    v72 = (float)(v70 + v26) + (float)(v30 * v60);
    v73 = v31 * v60;
    v74 = v38[9];
    v75 = v72 + (float)(*(float *)((char *)dword_16E6A3CC0 + v7) * v66);
    v76 = *(float *)((char *)dword_16E6A3CC4 + v7) * v66;
    v77 = v38[10];
    *(float *)((char *)v38 + v32) = v75;
    v78 = (float)(v69 + v73) + v76;
    v79 = v166;
    v80 = *(float *)((char *)dword_16E6A3CBC + v7) * v77;
    *(float *)((char *)v38 + v33) = v78;
    *(float *)((char *)v38 + v79) = (float)((float)((float)(v23 * v71) + v24) + (float)(v29 * v74)) + v80;
    v81 = v167;
    v82 = *(float *)((char *)dword_16E6A3CC4 + v7) * v77;
    *(float *)((char *)v38 + v34) = (float)((float)((float)(v25 * v71) + v26) + (float)(v30 * v74))
                                  + (float)(*(float *)((char *)dword_16E6A3CC0 + v7) * v77);
    *(float *)((char *)v38 + v81) = (float)((float)((float)(v27 * v71) + v28) + (float)(v31 * v74)) + v82;
    v38 += 12;
    --v43;
  }
  while ( v43 );
  v22 = v168;
  v19 = v157;
  v18 = 0;
  v9 = v155;
  v6 = v153;
  v8 = v150;
  v21 = v152;
  v20 = v148;
  if ( v157 < v168 )
  {
LABEL_17:
    v83 = *(float *)((char *)dword_16E6A3CA4 + v7);
    v84 = *(float *)((char *)dword_16E6A3C8C + v7);
    v85 = *(float *)((char *)dword_16E6A3CA8 + v7);
    v86 = *(float *)((char *)dword_16E6A3C90 + v7);
    v87 = *(float *)((char *)dword_16E6A3CAC + v7);
    v88 = *(float *)((char *)dword_16E6A3C94 + v7);
    v89 = *(float *)((char *)dword_16E6A3CB0 + v7);
    v90 = *(float *)((char *)dword_16E6A3CB4 + v7);
    v91 = *(float *)((char *)dword_16E6A3CB8 + v7);
    v92 = (float *)(0x140000000LL + 12 * (v19 + 15024 * v20) + 64699140);
    v93 = v22 - v19;
    do
    {
      v94 = *(v92 - 1);
      v95 = *v92;
      v96 = v92[1];
      v97 = *(float *)((char *)dword_16E6A3CC0 + v7) * v96;
      *(float *)((char *)v92 + (char *)&v170 - v21 - (char *)&unk_143DB3B04) = (float)((float)((float)(v83 * v94) + v84)
                                                                                     + (float)(v89 * *v92))
                                                                             + (float)(*(float *)((char *)dword_16E6A3CBC
                                                                                                + v7)
                                                                                     * v96);
      v98 = (float)((float)((float)(v85 * v94) + v86) + (float)(v90 * v95)) + v97;
      v99 = *(float *)((char *)dword_16E6A3CC4 + v7) * v96;
      *(float *)((char *)v92 + (char *)&v171 - v21 - (char *)&unk_143DB3B04) = v98;
      *(float *)((char *)v92 + &v173[-v21 - 4] - (_BYTE *)&unk_143DB3B04) = (float)((float)((float)(v87 * v94) + v88)
                                                                                  + (float)(v91 * v95))
                                                                          + v99;
      v92 += 3;
      --v93;
    }
    while ( v93 );
  }
LABEL_19:
  v100 = 0;
  if ( *(int *)((char *)dword_143DB6B00 + v21) > 0 )
  {
    v101 = v152;
    v102 = (int *)((char *)&unk_143DB6B10 + v21);
    do
    {
      LODWORD(v103) = *(&v170 + 3 * *(v102 - 1));
      LODWORD(v104) = *(&v171 + 3 * *(v102 - 1));
      v105 = *(float *)&v173[12 * *(v102 - 1) - 4];
      v106 = 3LL * *v102;
      v157 = __PAIR64__(LODWORD(v104), LODWORD(v103));
      v107 = *((float *)&v170 + v106);
      v108 = *(float *)&v173[4 * v106 - 4];
      v109 = v102[1];
      HIDWORD(v155) = *(&v171 + v106);
      v156 = v108;
      v110 = v108 - v105;
      *(float *)&v155 = v107;
      v111 = v107 - v103;
      v112 = *(float *)&v173[12 * v109 - 4];
      v113 = *((float *)&v170 + 3 * v109);
      HIDWORD(v153) = *(&v171 + 3 * v109);
      v114 = *((float *)&v153 + 1) - v104;
      v154 = v112;
      v115 = v112 - v105;
      *(float *)&v153 = v113;
      v116 = v113 - v103;
      v158 = v105;
      v117 = (float)((float)(*((float *)&v153 + 1) - v104) * v110)
           - (float)(v115 * (float)(*((float *)&v155 + 1) - v104));
      v118 = (float)(v115 * v111) - (float)(v116 * v110);
      v119 = (float)(v116 * (float)(*((float *)&v155 + 1) - v104))
           - (float)((float)(*((float *)&v153 + 1) - v104) * v111);
      v120 = fsqrt((float)((float)(v118 * v118) + (float)(v117 * v117)) + (float)(v119 * v119));
      if ( v120 == 0.0 )
      {
        v149 = 0.0;
        v122 = 0.0;
        v123 = 0.0;
        v121 = 0.0;
      }
      else
      {
        v121 = v119 * (float)(1.0 / v120);
        v122 = v117 * (float)(1.0 / v120);
        v149 = v121;
        v123 = v118 * (float)(1.0 / v120);
      }
      v148 = __PAIR64__(LODWORD(v123), LODWORD(v122));
      if ( sub_140048690(
             (float *)&v150,
             (float *)&v148,
             (float *)&v152,
             v8,
             v6,
             (float *)&v157,
             (float *)&v155,
             (float *)&v153) )
      {
        v124 = v152;
        if ( *(float *)&v152 < v9[6] )
        {
          v125 = HIDWORD(v150);
          *(_DWORD *)v9 = (_DWORD)v150;
          *((_DWORD *)v9 + 2) = v151;
          *((_DWORD *)v9 + 1) = v125;
          v9[3] = v122;
          v9[4] = v123;
          v9[5] = v121;
          *((_DWORD *)v9 + 6) = v124;
          *((_DWORD *)v9 + 8) = v100;
        }
      }
      if ( *(v102 - 2) == 4 )
      {
        v155 = v153;
        v156 = v154;
        v126 = v102[2];
        v127 = *(float *)&v173[12 * v126 - 4];
        v128 = *((float *)&v171 + 3 * v126);
        LODWORD(v153) = *(&v170 + 3 * v126);
        v154 = v127;
        v129 = v127 - v105;
        *((float *)&v153 + 1) = v128;
        v130 = v128 - v104;
        v131 = (float)(v116 * v129) - (float)(v115 * (float)(*(float *)&v153 - v103));
        v132 = (float)(v115 * v130) - (float)(v114 * v129);
        v133 = (float)(v114 * (float)(*(float *)&v153 - v103)) - (float)(v116 * v130);
        v134 = fsqrt((float)((float)(v131 * v131) + (float)(v132 * v132)) + (float)(v133 * v133));
        if ( v134 == 0.0 )
        {
          HIDWORD(v148) = 0;
          v136 = 0.0;
          v135 = 0.0;
          v137 = 0.0;
        }
        else
        {
          v135 = (float)(1.0 / v134) * v131;
          v136 = (float)(1.0 / v134) * v132;
          *((float *)&v148 + 1) = v135;
          v137 = (float)(1.0 / v134) * v133;
        }
        v149 = v137;
        *(float *)&v148 = v136;
        if ( sub_140048690(
               (float *)&v150,
               (float *)&v148,
               (float *)&v152,
               v8,
               v6,
               (float *)&v157,
               (float *)&v155,
               (float *)&v153) )
        {
          v138 = v152;
          if ( *(float *)&v152 < v9[6] )
          {
            v139 = HIDWORD(v150);
            *(_DWORD *)v9 = (_DWORD)v150;
            *((_DWORD *)v9 + 2) = v151;
            *((_DWORD *)v9 + 1) = v139;
            v9[3] = v136;
            v9[4] = v135;
            v9[5] = v137;
            *((_DWORD *)v9 + 6) = v138;
            *((_DWORD *)v9 + 8) = v100;
          }
        }
      }
      ++v100;
      v102 += 26;
    }
    while ( v100 < *(int *)((char *)dword_143DB6B00 + v101) );
    v7 = v169;
    v18 = 0;
  }
  if ( a5 && *(int *)((char *)dword_16E6A75A0 + v7) > 0 )
  {
    v140 = (float *)((char *)&unk_16E6A75D8 + v7);
    do
    {
      if ( (unsigned int)sub_140085C00(
                           (float *)&v150,
                           (float *)&v148,
                           (float *)&v152,
                           v8,
                           v6,
                           (float *)((char *)&unk_16E6A75F0 + 172 * v18 + v7),
                           *v140) )
      {
        v141 = v152;
        if ( *(float *)&v152 < v9[6] )
        {
          v142 = HIDWORD(v150);
          *(_DWORD *)v9 = (_DWORD)v150;
          v143 = v151;
          *((_DWORD *)v9 + 1) = v142;
          v144 = v148;
          *((_DWORD *)v9 + 2) = v143;
          v145 = HIDWORD(v148);
          *((_DWORD *)v9 + 3) = v144;
          v146 = v149;
          *((_DWORD *)v9 + 4) = v145;
          v9[5] = v146;
          *((_DWORD *)v9 + 6) = v141;
          v9[8] = NAN;
        }
      }
      ++v18;
      v140 += 43;
    }
    while ( v18 < *(int *)((char *)dword_16E6A75A0 + v7) );
  }
  return v9[6] < 1.0;
}

