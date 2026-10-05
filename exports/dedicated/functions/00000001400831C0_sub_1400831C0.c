/* Address: 0x1400831c0 | Name: sub_1400831C0 | Size: 4653 bytes */
__int64 __fastcall sub_1400831C0(__int64 a1, float *a2, float *a3, int a4)
{
  __int64 v5; // rdx
  __int64 v7; // rsi
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  int v17; // r10d
  int v18; // r14d
  int v19; // r13d
  float *v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  float v25; // xmm12_4
  float v26; // xmm8_4
  float v27; // xmm9_4
  float v28; // xmm2_4
  __int64 v29; // rax
  float v30; // xmm1_4
  float v31; // xmm0_4
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  float v35; // xmm3_4
  float v36; // xmm5_4
  float v37; // xmm11_4
  float v38; // xmm2_4
  __int64 v39; // rax
  float v40; // xmm1_4
  float v41; // xmm0_4
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rax
  float v45; // xmm6_4
  float v46; // xmm7_4
  float v47; // xmm4_4
  float v48; // xmm2_4
  __int64 v49; // rax
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm2_4
  float v53; // xmm5_4
  float v54; // xmm11_4
  float v55; // xmm3_4
  float v56; // xmm14_4
  float v57; // xmm0_4
  float v58; // xmm13_4
  float v59; // xmm15_4
  float v60; // xmm5_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  float v63; // xmm2_4
  float v64; // xmm14_4
  float v65; // xmm0_4
  float v66; // xmm1_4
  float v67; // xmm3_4
  float v68; // xmm2_4
  float v69; // xmm14_4
  float v70; // xmm0_4
  float v71; // xmm2_4
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rdx
  float v77; // xmm2_4
  float v78; // xmm0_4
  float v79; // xmm5_4
  float v80; // xmm1_4
  float v81; // xmm4_4
  float v82; // xmm3_4
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  float v86; // xmm3_4
  float v87; // xmm5_4
  float v88; // xmm6_4
  float v89; // xmm2_4
  __int64 v90; // rax
  float v91; // xmm1_4
  float v92; // xmm0_4
  float v93; // xmm3_4
  float v94; // xmm13_4
  float v95; // xmm11_4
  float v96; // xmm14_4
  float v97; // xmm3_4
  float v98; // xmm13_4
  float v99; // xmm14_4
  float v100; // xmm11_4
  float v101; // xmm5_4
  float v102; // xmm6_4
  float v103; // xmm2_4
  float v104; // xmm0_4
  float v105; // xmm1_4
  float v106; // xmm15_4
  float v107; // xmm3_4
  float v108; // xmm5_4
  float v109; // xmm6_4
  float v110; // xmm2_4
  float v111; // xmm15_4
  unsigned int v112; // xmm1_4
  unsigned int v113; // xmm5_4
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rcx
  __int64 v117; // rdx
  float v118; // xmm5_4
  float v119; // xmm1_4
  float v120; // xmm4_4
  float v121; // xmm3_4
  _DWORD *v122; // rbx
  float v123; // [rsp+40h] [rbp-C0h]
  float v124; // [rsp+40h] [rbp-C0h]
  float v125; // [rsp+44h] [rbp-BCh]
  float v126; // [rsp+44h] [rbp-BCh]
  float v127; // [rsp+44h] [rbp-BCh]
  float v128; // [rsp+48h] [rbp-B8h]
  float v129; // [rsp+4Ch] [rbp-B4h]
  float v130; // [rsp+50h] [rbp-B0h]
  float v131; // [rsp+50h] [rbp-B0h]
  float v132; // [rsp+54h] [rbp-ACh]
  float v133; // [rsp+58h] [rbp-A8h] BYREF
  float v134; // [rsp+5Ch] [rbp-A4h]
  float v135; // [rsp+60h] [rbp-A0h]
  float v136; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v137; // [rsp+68h] [rbp-98h] BYREF
  float v138; // [rsp+70h] [rbp-90h]
  __int64 v139; // [rsp+78h] [rbp-88h]
  float v140; // [rsp+80h] [rbp-80h] BYREF
  float v141; // [rsp+84h] [rbp-7Ch]
  float v142; // [rsp+88h] [rbp-78h]
  float v143; // [rsp+90h] [rbp-70h] BYREF
  float v144; // [rsp+94h] [rbp-6Ch]
  float v145; // [rsp+98h] [rbp-68h]
  float v146; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v147; // [rsp+A4h] [rbp-5Ch]
  float v148; // [rsp+B0h] [rbp-50h]
  float v149; // [rsp+B4h] [rbp-4Ch]
  float v150; // [rsp+B8h] [rbp-48h]
  float v151; // [rsp+BCh] [rbp-44h]
  int v152; // [rsp+C0h] [rbp-40h]
  float v153; // [rsp+C8h] [rbp-38h] BYREF
  float v154; // [rsp+CCh] [rbp-34h]
  float v155; // [rsp+D0h] [rbp-30h]
  float v156; // [rsp+D8h] [rbp-28h]
  __int64 v157; // [rsp+E0h] [rbp-20h]
  __int64 v158; // [rsp+E8h] [rbp-18h]
  float v159; // [rsp+1D0h] [rbp+D0h]
  int v160; // [rsp+1E8h] [rbp+E8h]

  v160 = a4;
  v5 = (int)a1;
  v7 = 5210LL * (int)a1;
  v139 = (int)a1;
  if ( dword_14AA152E0[24944 * dword_16E6A3C64[v7]] )
    return sub_1400863F0(a1, a2);
  v9 = *(float *)&dword_16E6A3D10[5210 * (int)a1];
  if ( *a2 < v9 && v9 > *a3 )
    return 0;
  v10 = a2[1];
  v11 = *(float *)&dword_16E6A3D14[5210 * (int)a1];
  if ( v10 < v11 && v11 > a3[1] )
    return 0;
  v12 = a2[2];
  v13 = *(float *)&dword_16E6A3D18[5210 * (int)a1];
  if ( v12 < v13 && v13 > a3[2] )
    return 0;
  v14 = *(float *)&dword_16E6A3D1C[5210 * (int)a1];
  if ( *a2 > v14 && v14 < *a3 )
    return 0;
  v15 = *(float *)&dword_16E6A3D20[5210 * (int)a1];
  if ( v10 > v15 && v15 < a3[1] )
    return 0;
  v16 = *(float *)&dword_16E6A3D24[5210 * (int)a1];
  if ( v12 > v16 && v16 < a3[2] )
    return 0;
  v17 = dword_16E6A4458[5210 * (int)a1];
  v18 = 0;
  dword_16E18CA58 = 1065353216;
  v19 = 0;
  v152 = v17;
  if ( v17 > 0 )
  {
    v20 = (float *)((char *)&unk_16E6A4470 + v7 * 4);
    while ( *((int *)v20 + 10) <= 0 )
    {
LABEL_58:
      ++v19;
      v20 += 16;
      if ( v19 >= v17 )
      {
        a4 = v160;
        v18 = 0;
        goto LABEL_60;
      }
    }
    v21 = *((int *)v20 - 4);
    v22 = 5210 * v5;
    v157 = v21;
    v23 = 60LL * dword_16E6A3D50[5210 * v5 + v21];
    v24 = *(int *)v20;
    v25 = *(float *)&dword_16E18CAF4[v23];
    v26 = *(float *)&dword_16E18CAF4[v23 + 1];
    v27 = *(float *)&dword_16E18CAF4[v23 + 2];
    v153 = v25;
    v154 = v26;
    v155 = v27;
    if ( (_DWORD)v24 != -1 )
    {
      v28 = v20[4];
      v29 = dword_16E6A3D50[v22 + v24];
      v30 = (float)((float)(*(float *)&dword_16E18CAF4[60 * v29 + 1] - v26) * v28) + v26;
      v153 = (float)((float)(*(float *)&dword_16E18CAF4[60 * v29] - v25) * v28) + v25;
      v25 = v153;
      v31 = *(float *)&dword_16E18CAF4[60 * v29 + 2];
      v154 = v30;
      v26 = v30;
      v155 = (float)((float)(v31 - v27) * v28) + v27;
      v27 = v155;
    }
    v32 = *((int *)v20 - 3);
    v33 = 60LL * dword_16E6A3D50[v32 + v22];
    v34 = *((int *)v20 + 1);
    v35 = *(float *)&dword_16E18CAF4[v33];
    v36 = *(float *)&dword_16E18CAF4[v33 + 1];
    v37 = *(float *)&dword_16E18CAF4[v33 + 2];
    v134 = v35;
    v143 = v35;
    v135 = v36;
    v144 = v36;
    v136 = v37;
    v145 = v37;
    if ( (_DWORD)v34 != -1 )
    {
      v38 = v20[5];
      v39 = dword_16E6A3D50[v22 + v34];
      v40 = (float)((float)(*(float *)&dword_16E18CAF4[60 * v39 + 1] - v36) * v38) + v36;
      v134 = (float)((float)(*(float *)&dword_16E18CAF4[60 * v39] - v35) * v38) + v35;
      v35 = v134;
      v143 = v134;
      v41 = *(float *)&dword_16E18CAF4[60 * v39 + 2];
      v36 = v40;
      v135 = v40;
      v144 = v40;
      v136 = (float)((float)(v41 - v37) * v38) + v37;
      v37 = v136;
      v145 = v136;
    }
    v42 = *((int *)v20 - 2);
    v158 = v42;
    v43 = 60LL * dword_16E6A3D50[v42 + v22];
    v44 = *((int *)v20 + 2);
    v45 = *(float *)&dword_16E18CAF4[v43];
    v46 = *(float *)&dword_16E18CAF4[v43 + 1];
    v47 = *(float *)&dword_16E18CAF4[v43 + 2];
    v128 = v45;
    v140 = v45;
    v129 = v46;
    v141 = v46;
    v159 = v47;
    v142 = v47;
    if ( (_DWORD)v44 != -1 )
    {
      v48 = v20[6];
      v49 = dword_16E6A3D50[v22 + v44];
      v50 = (float)((float)(*(float *)&dword_16E18CAF4[60 * v49 + 1] - v46) * v48) + v46;
      v128 = (float)((float)(*(float *)&dword_16E18CAF4[60 * v49] - v45) * v48) + v45;
      v45 = v128;
      v140 = v128;
      v51 = *(float *)&dword_16E18CAF4[60 * v49 + 2];
      v46 = v50;
      v129 = v50;
      v141 = v50;
      v159 = (float)((float)(v51 - v47) * v48) + v47;
      v47 = v159;
      v142 = v159;
    }
    v52 = v36 - v26;
    v53 = v37 - v27;
    v149 = v52;
    v54 = v46 - v26;
    v148 = v53;
    v156 = v47 - v27;
    v150 = v35 - v25;
    v151 = v45 - v25;
    v55 = (float)((float)(v46 - v26) * v53) - (float)((float)(v47 - v27) * v52);
    v56 = (float)((float)(v47 - v27) * v150) - (float)(v53 * (float)(v45 - v25));
    v125 = (float)(v52 * (float)(v45 - v25)) - (float)((float)(v46 - v26) * v150);
    v57 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v125 * v125));
    if ( v57 == 0.0 )
    {
      LODWORD(v137) = 0;
      v59 = 0.0;
      v138 = 0.0;
      v60 = 0.0;
      v58 = 0.0;
    }
    else
    {
      v58 = (float)(1.0 / v57) * v125;
      v59 = (float)(1.0 / v57) * v55;
      v138 = v58;
      v60 = (float)(1.0 / v57) * v56;
      *(float *)&v137 = v59;
    }
    v61 = *a3;
    v62 = v27 - a3[2];
    v130 = a3[1];
    v123 = a3[2];
    *((float *)&v137 + 1) = v60;
    v63 = (float)((float)((float)(v26 - v130) * v60) + (float)((float)(v25 - v61) * v59)) + (float)(v62 * v58);
    v64 = (float)((float)((float)(v26 - a2[1]) * v60) + (float)((float)(v25 - *a2) * v59))
        + (float)((float)(v27 - a2[2]) * v58);
    if ( v64 <= 0.0 )
    {
      if ( v64 < 0.0 && v63 < 0.0 )
        goto LABEL_40;
    }
    else if ( v63 > 0.0 )
    {
      goto LABEL_40;
    }
    v65 = v130 - a2[1];
    v66 = v123 - a2[2];
    v67 = v61 - *a2;
    v133 = (float)((float)((float)(v26 - a2[1]) * v60) + (float)((float)(v25 - *a2) * v59))
         + (float)((float)(v27 - a2[2]) * v58);
    v131 = v65;
    v68 = (float)((float)(v65 * v60) + (float)(v67 * v59)) + (float)(v66 * v58);
    if ( v68 != 0.0 )
    {
      v69 = v64 / v68;
      v133 = v69;
      v70 = (float)(v69 * v66) + a2[2];
      v71 = (float)(v69 * v131) + a2[1];
      v126 = (float)(v69 * v67) + *a2;
      v146 = v126;
      v147 = __PAIR64__(LODWORD(v70), LODWORD(v71));
      if ( (float)((float)((float)((float)((float)(v148 * (float)(v71 - v26)) - (float)(v149 * (float)(v70 - v27))) * v59)
                         + (float)((float)((float)(v150 * (float)(v70 - v27)) - (float)(v148 * (float)(v126 - v25)))
                                 * v60))
                 + (float)((float)((float)(v149 * (float)(v126 - v25)) - (float)(v150 * (float)(v71 - v26))) * v58)) >= 0.0 )
      {
        if ( (float)((float)((float)((float)((float)((float)(v70 - v136) * (float)(v45 - v134))
                                           - (float)((float)(v159 - v136) * (float)(v126 - v134)))
                                   * v60)
                           + (float)((float)((float)((float)(v159 - v136) * (float)(v71 - v135))
                                           - (float)((float)(v46 - v135) * (float)(v70 - v136)))
                                   * v59))
                   + (float)((float)((float)((float)(v46 - v135) * (float)(v126 - v134))
                                   - (float)((float)(v71 - v135) * (float)(v45 - v134)))
                           * v58)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(v27 - v159) * (float)(v71 - v129))
                                           - (float)((float)(v26 - v129) * (float)(v70 - v159)))
                                   * v59)
                           + (float)((float)((float)((float)(v25 - v128) * (float)(v70 - v159))
                                           - (float)((float)(v27 - v159) * (float)(v126 - v128)))
                                   * v60))
                   + (float)((float)((float)((float)(v26 - v129) * (float)(v126 - v128))
                                   - (float)((float)(v25 - v128) * (float)(v71 - v129)))
                           * v58)) >= 0.0
          && v69 < *(float *)&dword_16E18CA58 )
        {
          flt_16E18CA40 = v126;
          *(float *)&qword_16E18CA44 = v71;
          v72 = v22 + dword_16E6A6A6C[4 * v21 + v7];
          *((float *)&qword_16E18CA44 + 1) = v70;
          *(float *)&qword_16E18CA4C = v59;
          *((float *)&qword_16E18CA4C + 1) = v60;
          dword_16E18CA54 = LODWORD(v58);
          dword_16E18CA74 = dword_16E6A3D50[v72];
          v73 = dword_16E6A6A6C[4 * v32 + v7];
          dword_16E18CA58 = LODWORD(v69);
          dword_16E18CA70 = v19;
          dword_16E18CA78 = dword_16E6A3D50[v22 + v73];
          dword_16E18CA7C = dword_16E6A3D50[v22 + dword_16E6A6A6C[4 * v42 + v7]];
          sub_140020140((float *)&dword_16E18CA84, &flt_16E18CA40, &v153, &v143, &v140);
          v17 = v152;
          v74 = 240LL * dword_16E18CA74;
          v75 = 240LL * dword_16E18CA78;
          v76 = 240LL * dword_16E18CA7C;
          v77 = (float)(*(float *)&dword_16E18CA84 * *(float *)((char *)&unk_16E18CB0C + v74))
              + (float)(*(float *)&dword_16E18CA88 * *(float *)((char *)&unk_16E18CB0C + v75));
          v78 = *(float *)&dword_16E18CA84 * *(float *)((char *)&unk_16E18CB0C + v74 + 4);
          v79 = (float)(*(float *)&dword_16E18CA88 * *(float *)((char *)&unk_16E18CB0C + v75 + 8))
              + (float)(*(float *)&dword_16E18CA84 * *(float *)((char *)&unk_16E18CB0C + v74 + 8));
          v21 = v157;
          v80 = *(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v76 + 4);
          v81 = *(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v76 + 8);
          v82 = (float)(*(float *)&dword_16E18CA88 * *(float *)((char *)&unk_16E18CB0C + v75 + 4)) + v78;
          v42 = v158;
          *(float *)&qword_16E18CA60 = v77
                                     + (float)(*(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v76));
          *(float *)&dword_16E18CA68 = v79 + v81;
          *((float *)&qword_16E18CA60 + 1) = v82 + v80;
        }
        v46 = v129;
        v45 = v128;
      }
      v47 = v159;
    }
LABEL_40:
    if ( *((_DWORD *)v20 - 5) == 4 )
    {
      v83 = *((int *)v20 - 1);
      v143 = v45;
      v144 = v46;
      v145 = v47;
      v84 = 60LL * dword_16E6A3D50[v83 + v22];
      v85 = *((int *)v20 + 3);
      v86 = *(float *)&dword_16E18CAF4[v84];
      v87 = *(float *)&dword_16E18CAF4[v84 + 1];
      v88 = *(float *)&dword_16E18CAF4[v84 + 2];
      v127 = v86;
      v140 = v86;
      v132 = v87;
      v141 = v87;
      v124 = v88;
      v142 = v88;
      if ( (_DWORD)v85 != -1 )
      {
        v89 = v20[7];
        v90 = dword_16E6A3D50[v22 + v85];
        v91 = (float)((float)(*(float *)&dword_16E18CAF4[60 * v90 + 1] - v87) * v89) + v87;
        v127 = (float)((float)(*(float *)&dword_16E18CAF4[60 * v90] - v86) * v89) + v86;
        v86 = v127;
        v140 = v127;
        v92 = *(float *)&dword_16E18CAF4[60 * v90 + 2];
        v87 = v91;
        v132 = v91;
        v141 = v91;
        v124 = (float)((float)(v92 - v88) * v89) + v88;
        v88 = v124;
        v142 = v124;
      }
      v93 = v86 - v25;
      v94 = (float)(v156 * (float)(v87 - v26)) - (float)(v54 * (float)(v88 - v27));
      v95 = (float)(v54 * v93) - (float)(v151 * (float)(v87 - v26));
      v96 = (float)(v151 * (float)(v88 - v27)) - (float)(v156 * v93);
      v97 = fsqrt((float)((float)(v96 * v96) + (float)(v94 * v94)) + (float)(v95 * v95));
      if ( v97 == 0.0 )
      {
        v137 = 0;
        v98 = 0.0;
        v99 = 0.0;
        v138 = 0.0;
        v100 = 0.0;
      }
      else
      {
        v98 = v94 * (float)(1.0 / v97);
        v99 = v96 * (float)(1.0 / v97);
        v100 = v95 * (float)(1.0 / v97);
        v137 = __PAIR64__(LODWORD(v99), LODWORD(v98));
        v138 = v100;
      }
      v101 = a3[1];
      v102 = a3[2];
      v103 = (float)((float)((float)(v26 - v101) * v99) + (float)((float)(v25 - *a3) * v98))
           + (float)((float)(v27 - v102) * v100);
      v104 = a2[2];
      v105 = (float)(v27 - v104) * v100;
      v106 = (float)((float)((float)(v26 - a2[1]) * v99) + (float)((float)(v25 - *a2) * v98)) + v105;
      if ( v106 <= 0.0 )
      {
        if ( v106 < 0.0 && v103 < 0.0 )
          goto LABEL_57;
      }
      else if ( v103 > 0.0 )
      {
        goto LABEL_57;
      }
      v107 = *a3 - *a2;
      v108 = v101 - a2[1];
      v109 = v102 - v104;
      v133 = (float)((float)((float)(v26 - a2[1]) * v99) + (float)((float)(v25 - *a2) * v98)) + v105;
      v110 = (float)((float)(v108 * v99) + (float)(v107 * v98)) + (float)(v109 * v100);
      if ( v110 != 0.0 )
      {
        v111 = v106 / v110;
        v133 = v111;
        *(float *)&v112 = (float)(v111 * v108) + a2[1];
        *(float *)&v113 = (float)(v111 * v109) + a2[2];
        v136 = (float)(v111 * v107) + *a2;
        v146 = v136;
        v134 = *(float *)&v113;
        v135 = *(float *)&v112;
        v147 = __PAIR64__(v113, v112);
        if ( (float)((float)((float)((float)((float)((float)(*(float *)&v113 - v27) * v151)
                                           - (float)((float)(v47 - v27) * (float)(v136 - v25)))
                                   * v99)
                           + (float)((float)((float)((float)(v47 - v27) * (float)(*(float *)&v112 - v26))
                                           - (float)((float)(v46 - v26) * (float)(*(float *)&v113 - v27)))
                                   * v98))
                   + (float)((float)((float)((float)(v46 - v26) * (float)(v136 - v25))
                                   - (float)((float)(*(float *)&v112 - v26) * v151))
                           * v100)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(v134 - v159) * (float)(v127 - v128))
                                           - (float)((float)(v124 - v159) * (float)(v136 - v128)))
                                   * v99)
                           + (float)((float)((float)((float)(v124 - v159) * (float)(v135 - v129))
                                           - (float)((float)(v132 - v129) * (float)(v134 - v159)))
                                   * v98))
                   + (float)((float)((float)((float)(v132 - v129) * (float)(v136 - v128))
                                   - (float)((float)(v135 - v129) * (float)(v127 - v128)))
                           * v100)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(v25 - v127) * (float)(v134 - v124))
                                           - (float)((float)(v27 - v124) * (float)(v136 - v127)))
                                   * v99)
                           + (float)((float)((float)((float)(v27 - v124) * (float)(v135 - v132))
                                           - (float)((float)(v26 - v132) * (float)(v134 - v124)))
                                   * v98))
                   + (float)((float)((float)((float)(v26 - v132) * (float)(v136 - v127))
                                   - (float)((float)(v25 - v127) * (float)(v135 - v132)))
                           * v100)) >= 0.0
          && v111 < *(float *)&dword_16E18CA58 )
        {
          flt_16E18CA40 = v136;
          *(float *)&qword_16E18CA44 = v135;
          *((float *)&qword_16E18CA44 + 1) = v134;
          *(float *)&qword_16E18CA4C = v98;
          *((float *)&qword_16E18CA4C + 1) = v99;
          v114 = dword_16E6A6A6C[4 * v21 + v7];
          dword_16E18CA54 = LODWORD(v100);
          dword_16E18CA58 = LODWORD(v111);
          dword_16E18CA70 = v19;
          dword_16E18CA74 = dword_16E6A3D50[v22 + v114];
          dword_16E18CA78 = dword_16E6A3D50[v22 + dword_16E6A6A6C[4 * v42 + v7]];
          dword_16E18CA7C = dword_16E6A3D50[v22 + dword_16E6A6A6C[4 * v83 + v7]];
          sub_140020140((float *)&dword_16E18CA84, &flt_16E18CA40, &v153, &v143, &v140);
          v17 = v152;
          v115 = 240LL * dword_16E18CA74;
          v116 = 240LL * dword_16E18CA78;
          v117 = 240LL * dword_16E18CA7C;
          v118 = (float)(*(float *)&dword_16E18CA88 * *(float *)((char *)&unk_16E18CB0C + v116 + 8))
               + (float)(*(float *)&dword_16E18CA84 * *(float *)((char *)&unk_16E18CB0C + v115 + 8));
          v119 = *(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v117 + 4);
          v120 = *(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v117 + 8);
          v121 = (float)(*(float *)&dword_16E18CA88 * *(float *)((char *)&unk_16E18CB0C + v116 + 4))
               + (float)(*(float *)&dword_16E18CA84 * *(float *)((char *)&unk_16E18CB0C + v115 + 4));
          *(float *)&qword_16E18CA60 = (float)((float)(*(float *)&dword_16E18CA88
                                                     * *(float *)((char *)&unk_16E18CB0C + v116))
                                             + (float)(*(float *)&dword_16E18CA84
                                                     * *(float *)((char *)&unk_16E18CB0C + v115)))
                                     + (float)(*(float *)&dword_16E18CA8C * *(float *)((char *)&unk_16E18CB0C + v117));
          *(float *)&dword_16E18CA68 = v118 + v120;
          *((float *)&qword_16E18CA60 + 1) = v121 + v119;
        }
      }
    }
LABEL_57:
    v5 = v139;
    goto LABEL_58;
  }
LABEL_60:
  if ( a4 && dword_16E6A75A0[v7] > 0 )
  {
    v122 = (_DWORD *)((char *)&unk_16E6A75D8 + v7 * 4);
    do
    {
      if ( (unsigned int)sub_140085C00(
                           (unsigned int)&v146,
                           (unsigned int)&v137,
                           (unsigned int)&v133,
                           (_DWORD)a2,
                           (__int64)a3,
                           (__int64)&unk_16E6A75F0 + 172 * v18 + v7 * 4,
                           *v122) )
      {
        if ( v133 < *(float *)&dword_16E18CA58 )
        {
          flt_16E18CA40 = v146;
          qword_16E18CA44 = v147;
          qword_16E18CA4C = v137;
          dword_16E18CA54 = LODWORD(v138);
          dword_16E18CA58 = LODWORD(v133);
          dword_16E18CA70 = -1;
          dword_16E18CA74 = v18;
        }
      }
      ++v18;
      v122 += 43;
    }
    while ( v18 < dword_16E6A75A0[v7] );
  }
  return *(float *)&dword_16E18CA58 < 1.0;
}

