/* Address: 0x1400d8810 | Name: sub_1400D8810 | Size: 3146 bytes */
__int64 __fastcall sub_1400D8810(int a1, float *a2, float a3)
{
  float v3; // xmm3_4
  int v4; // r14d
  float v6; // xmm0_4
  __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // r15
  int v10; // edi
  __int64 v11; // r11
  __int64 v12; // rdx
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm11_4
  float v17; // xmm12_4
  float v18; // xmm13_4
  float v19; // xmm14_4
  float v20; // xmm15_4
  float *v21; // rax
  signed __int64 v22; // r12
  signed __int64 v23; // rbx
  signed __int64 v24; // r13
  signed __int64 v25; // r14
  signed __int64 v26; // rsi
  signed __int64 v27; // rdi
  char *v28; // rcx
  signed __int64 v29; // r15
  signed __int64 v30; // r9
  unsigned __int64 v31; // rcx
  signed __int64 v32; // rdx
  __int64 v33; // rcx
  signed __int64 v34; // r11
  float v35; // xmm4_4
  float v36; // xmm6_4
  float v37; // xmm0_4
  float v38; // xmm5_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm4_4
  float v43; // xmm1_4
  float v44; // xmm6_4
  float v45; // xmm2_4
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm0_4
  float v50; // xmm5_4
  float v51; // xmm3_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm4_4
  float v55; // xmm1_4
  float v56; // xmm6_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  float v60; // xmm3_4
  float v61; // xmm4_4
  float v62; // xmm3_4
  float v63; // xmm0_4
  float v64; // xmm5_4
  float v65; // xmm3_4
  float v66; // xmm1_4
  float v67; // xmm6_4
  float v68; // xmm2_4
  __int64 v69; // r10
  float v70; // xmm1_4
  float v71; // xmm0_4
  signed __int64 v72; // r10
  float v73; // xmm1_4
  float v74; // xmm7_4
  float v75; // xmm8_4
  float v76; // xmm9_4
  float v77; // xmm11_4
  float v78; // xmm12_4
  float v79; // xmm13_4
  float v80; // xmm14_4
  float v81; // xmm15_4
  float *v82; // rcx
  __int64 v83; // rdx
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm6_4
  float v87; // xmm1_4
  float v88; // xmm0_4
  float v89; // xmm3_4
  float v90; // xmm1_4
  int *v91; // rbx
  _DWORD *v92; // rsi
  float v93; // xmm11_4
  float v94; // xmm12_4
  float v95; // xmm13_4
  __int64 v96; // rcx
  float v97; // xmm1_4
  float v98; // xmm3_4
  __int64 v99; // rax
  float v100; // xmm1_4
  float v101; // xmm3_4
  float v102; // xmm9_4
  float v103; // xmm7_4
  float v104; // xmm8_4
  float v105; // xmm9_4
  float v106; // xmm7_4
  float v107; // xmm4_4
  float v108; // xmm5_4
  float v109; // xmm6_4
  float v110; // xmm0_4
  __int64 v111; // rax
  __int64 v112; // rax
  float v113; // xmm3_4
  float v114; // xmm4_4
  float v115; // xmm3_4
  float v116; // xmm4_4
  float v117; // xmm5_4
  float v118; // xmm3_4
  float v119; // xmm4_4
  float v120; // xmm1_4
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v124; // [rsp+40h] [rbp-C0h] BYREF
  float v125; // [rsp+48h] [rbp-B8h]
  __int64 v126; // [rsp+50h] [rbp-B0h] BYREF
  float v127; // [rsp+58h] [rbp-A8h]
  __int64 v128; // [rsp+60h] [rbp-A0h] BYREF
  float v129; // [rsp+68h] [rbp-98h]
  __int64 v130; // [rsp+70h] [rbp-90h] BYREF
  int v131; // [rsp+78h] [rbp-88h]
  signed __int64 v132; // [rsp+80h] [rbp-80h] BYREF
  float v133; // [rsp+88h] [rbp-78h]
  signed __int64 v134; // [rsp+90h] [rbp-70h]
  signed __int64 v135; // [rsp+98h] [rbp-68h]
  signed __int64 v136; // [rsp+A0h] [rbp-60h]
  signed __int64 v137; // [rsp+A8h] [rbp-58h]
  signed __int64 v138; // [rsp+B0h] [rbp-50h]
  signed __int64 v139; // [rsp+B8h] [rbp-48h]
  __int64 v140; // [rsp+C0h] [rbp-40h]
  float v141; // [rsp+1B0h] [rbp+B0h] BYREF
  float *v142; // [rsp+1B8h] [rbp+B8h]
  signed __int64 v143; // [rsp+1C8h] [rbp+C8h]

  v142 = a2;
  v3 = *a2;
  v4 = (int)a2;
  v6 = *a2 + a3;
  v7 = a1;
  v8 = 5210LL * a1;
  v124 = a1;
  if ( v6 < *(float *)&dword_16E6A3D10[v8]
    || (float)(a2[1] + a3) < *(float *)&dword_16E6A3D14[v8]
    || (float)(a2[2] + a3) < *(float *)&dword_16E6A3D18[v8]
    || (float)(v3 - a3) > *(float *)&dword_16E6A3D1C[v8]
    || (float)(a2[1] - a3) > *(float *)&dword_16E6A3D20[v8]
    || (float)(a2[2] - a3) > *(float *)&dword_16E6A3D24[v8] )
  {
    return 0;
  }
  v9 = 99776LL * dword_16E6A3C64[v8];
  v10 = 0;
  dword_16E18CA5C = 1199570944;
  v126 = v9;
  v11 = 0;
  v12 = *(int *)((char *)&unk_14AA1CB44 + v9);
  v130 = v12;
  if ( v12 >= 4 )
  {
    v13 = *(float *)&dword_16E6A3CA4[v8];
    v14 = *(float *)&dword_16E6A3C8C[v8];
    v15 = *(float *)&dword_16E6A3CA8[v8];
    v16 = *(float *)&dword_16E6A3C90[v8];
    v17 = *(float *)&dword_16E6A3CAC[v8];
    v18 = *(float *)&dword_16E6A3C94[v8];
    v19 = *(float *)&dword_16E6A3CB0[v8];
    v20 = *(float *)&dword_16E6A3CB4[v8];
    v21 = (float *)((char *)&unk_14AA1CB4C + v9);
    v143 = (_UNKNOWN *)((char *)&unk_140582454 - v9) - &unk_14AA1CB4C;
    v22 = v143;
    v23 = (_UNKNOWN *)((char *)&unk_140582444 - v9) - &unk_14AA1CB4C;
    v134 = (_UNKNOWN *)((char *)&unk_14058245C - v9) - &unk_14AA1CB4C;
    v24 = (_UNKNOWN *)((char *)&unk_140582450 - v9) - &unk_14AA1CB4C;
    v25 = v134;
    v135 = (_UNKNOWN *)((char *)&unk_140582460 - v9) - &unk_14AA1CB4C;
    v26 = (_UNKNOWN *)((char *)&unk_140582448 - v9) - &unk_14AA1CB4C;
    v27 = v135;
    v136 = (_UNKNOWN *)((char *)&unk_140582468 - v9) - &unk_14AA1CB4C;
    v132 = (_UNKNOWN *)((char *)&unk_14058246C - v9) - &unk_14AA1CB4C;
    v137 = (_UNKNOWN *)((char *)&unk_140582440 - v9) - &unk_14AA1CB4C;
    v138 = (_UNKNOWN *)((char *)&unk_14058244C - v9) - &unk_14AA1CB4C;
    v139 = (_UNKNOWN *)((char *)&unk_140582458 - v9) - &unk_14AA1CB4C;
    v28 = (char *)&unk_140582464 - v9;
    v29 = v137;
    v30 = v136;
    v140 = v28 - (char *)&unk_14AA1CB4C;
    v31 = v12 - 4;
    v32 = v138;
    v33 = (v31 >> 2) + 1;
    v128 = 4 * v33;
    v34 = v139;
    do
    {
      v35 = *(v21 - 1);
      v36 = v21[1];
      v37 = *(float *)&dword_16E6A3CB8[v8] * *v21;
      v38 = v21[3];
      v39 = (float)((float)((float)(v15 * v35) + v16) + (float)(v20 * *v21))
          + (float)(*(float *)&dword_16E6A3CC0[v8] * v36);
      v40 = *(float *)&dword_16E6A3CC4[v8];
      *(float *)((char *)v21 + v29) = (float)((float)((float)(v13 * v35) + v14) + (float)(v19 * *v21))
                                    + (float)(*(float *)&dword_16E6A3CBC[v8] * v36);
      v41 = v17 * v35;
      v42 = v21[2];
      v43 = v40 * v36;
      v44 = v21[4];
      *(float *)((char *)v21 + v23) = v39;
      v45 = (float)((float)(v41 + v18) + v37) + v43;
      v46 = *(float *)&dword_16E6A3CBC[v8] * v44;
      *(float *)((char *)v21 + v26) = v45;
      v47 = (float)((float)((float)(v13 * v42) + v14) + (float)(v19 * v38)) + v46;
      v48 = (float)((float)(v15 * v42) + v16) + (float)(v20 * v38);
      v49 = *(float *)&dword_16E6A3CB8[v8] * v38;
      v50 = v21[6];
      v51 = v48 + (float)(*(float *)&dword_16E6A3CC0[v8] * v44);
      v52 = *(float *)&dword_16E6A3CC4[v8];
      *(float *)((char *)v21 + v32) = v47;
      v53 = v17 * v42;
      v54 = v21[5];
      v55 = v52 * v44;
      v56 = v21[7];
      *(float *)((char *)v21 + v24) = v51;
      v57 = (float)((float)(v53 + v18) + v49) + v55;
      v58 = *(float *)&dword_16E6A3CBC[v8] * v56;
      *(float *)((char *)v21 + v22) = v57;
      *(float *)((char *)v21 + v34) = (float)((float)((float)(v13 * v54) + v14) + (float)(v19 * v50)) + v58;
      v59 = (float)(v17 * v54) + v18;
      v60 = v15 * v54;
      v61 = v21[8];
      v62 = (float)(v60 + v16) + (float)(v20 * v50);
      v63 = *(float *)&dword_16E6A3CB8[v8] * v50;
      v64 = v21[9];
      v65 = v62 + (float)(*(float *)&dword_16E6A3CC0[v8] * v56);
      v66 = *(float *)&dword_16E6A3CC4[v8] * v56;
      v67 = v21[10];
      *(float *)((char *)v21 + v25) = v65;
      v68 = (float)(v59 + v63) + v66;
      v69 = v140;
      v70 = *(float *)&dword_16E6A3CBC[v8] * v67;
      *(float *)((char *)v21 + v27) = v68;
      *(float *)((char *)v21 + v69) = (float)((float)((float)(v13 * v61) + v14) + (float)(v19 * v64)) + v70;
      v71 = *(float *)&dword_16E6A3CB8[v8] * v64;
      v72 = v132;
      v73 = *(float *)&dword_16E6A3CC4[v8] * v67;
      *(float *)((char *)v21 + v30) = (float)((float)((float)(v15 * v61) + v16) + (float)(v20 * v64))
                                    + (float)(*(float *)&dword_16E6A3CC0[v8] * v67);
      *(float *)((char *)v21 + v72) = (float)((float)((float)(v17 * v61) + v18) + v71) + v73;
      v21 += 12;
      --v33;
    }
    while ( v33 );
    v12 = v130;
    v11 = v128;
    v4 = (int)v142;
    v10 = 0;
    v9 = v126;
    v7 = v124;
    if ( v128 >= v130 )
      goto LABEL_13;
    goto LABEL_11;
  }
  if ( v12 > 0 )
  {
LABEL_11:
    v74 = *(float *)&dword_16E6A3CA4[v8];
    v75 = *(float *)&dword_16E6A3C8C[v8];
    v76 = *(float *)&dword_16E6A3CA8[v8];
    v77 = *(float *)&dword_16E6A3C90[v8];
    v78 = *(float *)&dword_16E6A3CAC[v8];
    v79 = *(float *)&dword_16E6A3C94[v8];
    v80 = *(float *)&dword_16E6A3CB0[v8];
    v81 = *(float *)&dword_16E6A3CB4[v8];
    v82 = (float *)((char *)&unk_14AA1CB4C + 12 * v11 + v9);
    v83 = v12 - v11;
    do
    {
      v84 = *(v82 - 1);
      v85 = *v82;
      v86 = v82[1];
      v87 = *(float *)&dword_16E6A3CC0[v8] * v86;
      v88 = *(float *)&dword_16E6A3CB8[v8] * *v82;
      *(float *)((char *)v82 + (_UNKNOWN *)((char *)&unk_140582440 - v9) - &unk_14AA1CB4C) = (float)((float)((float)(v74 * v84) + v75) + (float)(v80 * *v82))
                                                                                           + (float)(*(float *)&dword_16E6A3CBC[v8] * v86);
      v89 = (float)((float)((float)(v76 * v84) + v77) + (float)(v81 * v85)) + v87;
      v90 = *(float *)&dword_16E6A3CC4[v8] * v86;
      *(float *)((char *)v82 + (_UNKNOWN *)((char *)&unk_140582444 - v9) - &unk_14AA1CB4C) = v89;
      *(float *)((char *)v82 + (_UNKNOWN *)((char *)&unk_140582448 - v9) - &unk_14AA1CB4C) = (float)((float)((float)(v78 * v84) + v79) + v88)
                                                                                           + v90;
      v82 += 3;
      --v83;
    }
    while ( v83 );
  }
LABEL_13:
  if ( *(int *)((char *)&unk_14AA1FB48 + v9) > 0 )
  {
    v91 = (int *)((char *)&unk_14AA1FB50 + v9);
    v92 = (_DWORD *)(0x140000000LL + v8 * 4 + 778716252);
    do
    {
      v93 = *((float *)&unk_140582440 + 3 * *v91);
      v94 = *((float *)&unk_140582440 + 3 * *v91 + 1);
      v95 = *((float *)&unk_140582440 + 3 * *v91 + 2);
      v96 = 3LL * v91[1];
      v132 = __PAIR64__(LODWORD(v94), LODWORD(v93));
      v97 = *((float *)&unk_140582440 + v96 + 2);
      v98 = *((float *)&unk_140582440 + v96);
      v99 = v91[2];
      HIDWORD(v128) = *((_DWORD *)&unk_140582440 + v96 + 1);
      v129 = v97;
      v100 = v97 - v95;
      *(float *)&v128 = v98;
      v101 = v98 - v93;
      v102 = *((float *)&unk_140582440 + 3 * v99 + 2);
      v103 = *((float *)&unk_140582440 + 3 * v99);
      HIDWORD(v126) = *((_DWORD *)&unk_140582440 + 3 * v99 + 1);
      v104 = *((float *)&v126 + 1) - v94;
      v127 = v102;
      v105 = v102 - v95;
      *(float *)&v126 = v103;
      v106 = v103 - v93;
      v133 = v95;
      v107 = (float)((float)(*((float *)&v126 + 1) - v94) * v100) - (float)(v105 * (float)(*((float *)&v128 + 1) - v94));
      v108 = (float)(v105 * v101) - (float)(v106 * v100);
      v109 = (float)(v106 * (float)(*((float *)&v128 + 1) - v94)) - (float)((float)(*((float *)&v126 + 1) - v94) * v101);
      v110 = fsqrt((float)((float)(v108 * v108) + (float)(v107 * v107)) + (float)(v109 * v109));
      if ( v110 == 0.0 )
      {
        v124 = 0;
        v125 = 0.0;
      }
      else
      {
        *(float *)&v124 = (float)(1.0 / v110) * v107;
        *((float *)&v124 + 1) = (float)(1.0 / v110) * v108;
        v125 = (float)(1.0 / v110) * v109;
      }
      if ( (unsigned int)sub_1400DB7E0(
                           (unsigned int)&v130,
                           (unsigned int)&v124,
                           (unsigned int)&v141,
                           v4,
                           LODWORD(a3),
                           (__int64)&v132,
                           (__int64)&v128,
                           (__int64)&v126)
        && *(float *)&dword_16E18CA5C > v141 )
      {
        v111 = *v91;
        qword_16E18CA40 = v130;
        unk_16E18CA48 = v131;
        qword_16E18CA4C = v124;
        dword_16E18CA74 = dword_16E6A3D50[5210 * v7 + v111];
        v112 = 5210 * v7 + v91[1];
        flt_16E18CA54 = v125;
        dword_16E18CA5C = LODWORD(v141);
        dword_16E18CA70 = v10;
        dword_16E18CA78 = dword_16E6A3D50[v112];
        dword_16E18CA7C = dword_16E6A3D50[5210 * v7 + v91[2]];
        sub_140020140(
          (float *)&dword_16E18CA84,
          (float *)&qword_16E18CA40,
          (float *)&v132,
          (float *)&v128,
          (float *)&v126);
      }
      if ( *v92 == 4 )
      {
        v128 = v126;
        v129 = v127;
        v113 = *((float *)&unk_140582440 + 3 * v91[3] + 2);
        v114 = *((float *)&unk_140582440 + 3 * v91[3]);
        HIDWORD(v126) = *((_DWORD *)&unk_140582440 + 3 * v91[3] + 1);
        v127 = v113;
        v115 = v113 - v95;
        *(float *)&v126 = v114;
        v116 = v114 - v93;
        v117 = (float)((float)(*((float *)&v126 + 1) - v94) * v105) - (float)(v115 * v104);
        v118 = (float)(v115 * v106) - (float)(v116 * v105);
        v119 = (float)(v116 * v104) - (float)((float)(*((float *)&v126 + 1) - v94) * v106);
        v120 = fsqrt((float)((float)(v118 * v118) + (float)(v117 * v117)) + (float)(v119 * v119));
        if ( v120 == 0.0 )
        {
          v124 = 0;
          v125 = 0.0;
        }
        else
        {
          *(float *)&v124 = v117 * (float)(1.0 / v120);
          *((float *)&v124 + 1) = v118 * (float)(1.0 / v120);
          v125 = v119 * (float)(1.0 / v120);
        }
        if ( (unsigned int)sub_1400DB7E0(
                             (unsigned int)&v130,
                             (unsigned int)&v124,
                             (unsigned int)&v141,
                             v4,
                             LODWORD(a3),
                             (__int64)&v132,
                             (__int64)&v128,
                             (__int64)&v126) )
        {
          if ( *(float *)&dword_16E18CA5C > v141 )
          {
            v121 = *v91;
            qword_16E18CA40 = v130;
            unk_16E18CA48 = v131;
            qword_16E18CA4C = v124;
            dword_16E18CA74 = dword_16E6A3D50[5210 * v7 + v121];
            v122 = 5210 * v7 + v91[2];
            flt_16E18CA54 = v125;
            dword_16E18CA5C = LODWORD(v141);
            dword_16E18CA70 = v10;
            dword_16E18CA78 = dword_16E6A3D50[v122];
            dword_16E18CA7C = dword_16E6A3D50[5210 * v7 + v91[3]];
            sub_140020140(
              (float *)&dword_16E18CA84,
              (float *)&qword_16E18CA40,
              (float *)&v132,
              (float *)&v128,
              (float *)&v126);
          }
        }
      }
      ++v10;
      v92 += 16;
      v91 += 13;
    }
    while ( v10 < *(_DWORD *)((char *)&unk_14AA1FB48 + v9) );
    if ( *(float *)&dword_16E18CA5C < 65536.0 )
      return 1;
  }
  return 0;
}

