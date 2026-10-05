/* Address: 0x1400dc940 | Name: sub_1400DC940 | Size: 4653 bytes */
__int64 __fastcall sub_1400DC940(__int64 a1, float *a2, float *a3, int a4)
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
  signed int v18; // r14d
  signed int v19; // r13d
  unsigned int *v20; // rbx
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
  float v112; // xmm1_4
  float v113; // xmm5_4
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rcx
  __int64 v117; // rdx
  float v118; // xmm5_4
  float v119; // xmm1_4
  float v120; // xmm4_4
  float v121; // xmm3_4
  unsigned int *v122; // rbx
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
  float v137; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v138; // [rsp+6Ch] [rbp-94h]
  float v139; // [rsp+70h] [rbp-90h]
  __int64 v140; // [rsp+78h] [rbp-88h]
  float v141; // [rsp+80h] [rbp-80h] BYREF
  float v142; // [rsp+84h] [rbp-7Ch]
  float v143; // [rsp+88h] [rbp-78h]
  float v144; // [rsp+90h] [rbp-70h] BYREF
  float v145; // [rsp+94h] [rbp-6Ch]
  float v146; // [rsp+98h] [rbp-68h]
  unsigned int v147; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v148; // [rsp+A4h] [rbp-5Ch]
  unsigned int v149; // [rsp+A8h] [rbp-58h]
  float v150; // [rsp+B0h] [rbp-50h]
  float v151; // [rsp+B4h] [rbp-4Ch]
  float v152; // [rsp+B8h] [rbp-48h]
  float v153; // [rsp+BCh] [rbp-44h]
  int v154; // [rsp+C0h] [rbp-40h]
  float v155; // [rsp+C8h] [rbp-38h] BYREF
  float v156; // [rsp+CCh] [rbp-34h]
  float v157; // [rsp+D0h] [rbp-30h]
  float v158; // [rsp+D8h] [rbp-28h]
  __int64 v159; // [rsp+E0h] [rbp-20h]
  __int64 v160; // [rsp+E8h] [rbp-18h]
  float v161; // [rsp+1D0h] [rbp+D0h]
  int v162; // [rsp+1E8h] [rbp+E8h]

  v162 = a4;
  v5 = (int)a1;
  v7 = 5210LL * (int)a1;
  v140 = (int)a1;
  if ( dword_140404A6C[24944 * dword_140404A6C[v7 + 129716710] + 346707717] )
    return sub_1400DFB70(a1, a2);
  v9 = *(float *)&dword_140404A6C[5210 * (int)a1 + 129716753];
  if ( *a2 < v9 && v9 > *a3 )
    return 0;
  v10 = a2[1];
  v11 = *(float *)&dword_140404A6C[5210 * (int)a1 + 129716754];
  if ( v10 < v11 && v11 > a3[1] )
    return 0;
  v12 = a2[2];
  v13 = *(float *)&dword_140404A6C[5210 * (int)a1 + 129716755];
  if ( v12 < v13 && v13 > a3[2] )
    return 0;
  v14 = *(float *)&dword_140404A6C[5210 * (int)a1 + 129716756];
  if ( *a2 > v14 && v14 < *a3 )
    return 0;
  v15 = *(float *)&dword_140404A6C[5210 * (int)a1 + 129716757];
  if ( v10 > v15 && v15 < a3[1] )
    return 0;
  v16 = *(float *)&dword_140404A6C[5210 * (int)a1 + 129716758];
  if ( v12 > v16 && v16 < a3[2] )
    return 0;
  v17 = dword_140404A6C[5210 * (int)a1 + 129717219];
  v18 = 0;
  dword_140404A6C[73006987] = 1065353216;
  v19 = 0;
  v154 = v17;
  if ( v17 > 0 )
  {
    v20 = &dword_140404A6C[v7 + 129717225];
    while ( (int)v20[10] <= 0 )
    {
LABEL_58:
      ++v19;
      v20 += 16;
      if ( v19 >= v17 )
      {
        a4 = v162;
        v18 = 0;
        goto LABEL_60;
      }
    }
    v21 = (int)*(v20 - 4);
    v22 = 5210 * v5;
    v159 = v21;
    v23 = 60LL * (int)dword_140404A6C[5210 * v5 + 129716769 + v21];
    v24 = (int)*v20;
    v25 = *(float *)&dword_140404A6C[v23 + 73007026];
    v26 = *(float *)&dword_140404A6C[v23 + 73007027];
    v27 = *(float *)&dword_140404A6C[v23 + 73007028];
    v155 = v25;
    v156 = v26;
    v157 = v27;
    if ( (_DWORD)v24 != -1 )
    {
      v28 = *((float *)v20 + 4);
      v29 = (int)dword_140404A6C[v22 + 129716769 + v24];
      v30 = (float)((float)(*(float *)&dword_140404A6C[60 * v29 + 73007027] - v26) * v28) + v26;
      v155 = (float)((float)(*(float *)&dword_140404A6C[60 * v29 + 73007026] - v25) * v28) + v25;
      v25 = v155;
      v31 = *(float *)&dword_140404A6C[60 * v29 + 73007028];
      v156 = v30;
      v26 = v30;
      v157 = (float)((float)(v31 - v27) * v28) + v27;
      v27 = v157;
    }
    v32 = (int)*(v20 - 3);
    v33 = 60LL * (int)dword_140404A6C[v32 + 129716769 + v22];
    v34 = (int)v20[1];
    v35 = *(float *)&dword_140404A6C[v33 + 73007026];
    v36 = *(float *)&dword_140404A6C[v33 + 73007027];
    v37 = *(float *)&dword_140404A6C[v33 + 73007028];
    v134 = v35;
    v144 = v35;
    v135 = v36;
    v145 = v36;
    v136 = v37;
    v146 = v37;
    if ( (_DWORD)v34 != -1 )
    {
      v38 = *((float *)v20 + 5);
      v39 = (int)dword_140404A6C[v22 + 129716769 + v34];
      v40 = (float)((float)(*(float *)&dword_140404A6C[60 * v39 + 73007027] - v36) * v38) + v36;
      v134 = (float)((float)(*(float *)&dword_140404A6C[60 * v39 + 73007026] - v35) * v38) + v35;
      v35 = v134;
      v144 = v134;
      v41 = *(float *)&dword_140404A6C[60 * v39 + 73007028];
      v36 = v40;
      v135 = v40;
      v145 = v40;
      v136 = (float)((float)(v41 - v37) * v38) + v37;
      v37 = v136;
      v146 = v136;
    }
    v42 = (int)*(v20 - 2);
    v160 = v42;
    v43 = 60LL * (int)dword_140404A6C[v42 + 129716769 + v22];
    v44 = (int)v20[2];
    v45 = *(float *)&dword_140404A6C[v43 + 73007026];
    v46 = *(float *)&dword_140404A6C[v43 + 73007027];
    v47 = *(float *)&dword_140404A6C[v43 + 73007028];
    v128 = v45;
    v141 = v45;
    v129 = v46;
    v142 = v46;
    v161 = v47;
    v143 = v47;
    if ( (_DWORD)v44 != -1 )
    {
      v48 = *((float *)v20 + 6);
      v49 = (int)dword_140404A6C[v22 + 129716769 + v44];
      v50 = (float)((float)(*(float *)&dword_140404A6C[60 * v49 + 73007027] - v46) * v48) + v46;
      v128 = (float)((float)(*(float *)&dword_140404A6C[60 * v49 + 73007026] - v45) * v48) + v45;
      v45 = v128;
      v141 = v128;
      v51 = *(float *)&dword_140404A6C[60 * v49 + 73007028];
      v46 = v50;
      v129 = v50;
      v142 = v50;
      v161 = (float)((float)(v51 - v47) * v48) + v47;
      v47 = v161;
      v143 = v161;
    }
    v52 = v36 - v26;
    v53 = v37 - v27;
    v151 = v52;
    v54 = v46 - v26;
    v150 = v53;
    v158 = v47 - v27;
    v152 = v35 - v25;
    v153 = v45 - v25;
    v55 = (float)((float)(v46 - v26) * v53) - (float)((float)(v47 - v27) * v52);
    v56 = (float)((float)(v47 - v27) * v152) - (float)(v53 * (float)(v45 - v25));
    v125 = (float)(v52 * (float)(v45 - v25)) - (float)((float)(v46 - v26) * v152);
    v57 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v125 * v125));
    if ( v57 == 0.0 )
    {
      v137 = 0.0;
      v59 = 0.0;
      v139 = 0.0;
      v60 = 0.0;
      v58 = 0.0;
    }
    else
    {
      v58 = (float)(1.0 / v57) * v125;
      v59 = (float)(1.0 / v57) * v55;
      v139 = v58;
      v60 = (float)(1.0 / v57) * v56;
      v137 = v59;
    }
    v61 = *a3;
    v62 = v27 - a3[2];
    v130 = a3[1];
    v123 = a3[2];
    v138 = LODWORD(v60);
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
      v147 = LODWORD(v126);
      v149 = LODWORD(v70);
      v148 = LODWORD(v71);
      if ( (float)((float)((float)((float)((float)(v150 * (float)(v71 - v26)) - (float)(v151 * (float)(v70 - v27))) * v59)
                         + (float)((float)((float)(v152 * (float)(v70 - v27)) - (float)(v150 * (float)(v126 - v25)))
                                 * v60))
                 + (float)((float)((float)(v151 * (float)(v126 - v25)) - (float)(v152 * (float)(v71 - v26))) * v58)) >= 0.0 )
      {
        if ( (float)((float)((float)((float)((float)((float)(v70 - v136) * (float)(v45 - v134))
                                           - (float)((float)(v161 - v136) * (float)(v126 - v134)))
                                   * v60)
                           + (float)((float)((float)((float)(v161 - v136) * (float)(v71 - v135))
                                           - (float)((float)(v46 - v135) * (float)(v70 - v136)))
                                   * v59))
                   + (float)((float)((float)((float)(v46 - v135) * (float)(v126 - v134))
                                   - (float)((float)(v71 - v135) * (float)(v45 - v134)))
                           * v58)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(v27 - v161) * (float)(v71 - v129))
                                           - (float)((float)(v26 - v129) * (float)(v70 - v161)))
                                   * v59)
                           + (float)((float)((float)((float)(v25 - v128) * (float)(v70 - v161))
                                           - (float)((float)(v27 - v161) * (float)(v126 - v128)))
                                   * v60))
                   + (float)((float)((float)((float)(v26 - v129) * (float)(v126 - v128))
                                   - (float)((float)(v25 - v128) * (float)(v71 - v129)))
                           * v58)) >= 0.0
          && v69 < *(float *)&dword_140404A6C[73006987] )
        {
          *(float *)&dword_140404A6C[73006981] = v126;
          *(float *)&dword_140404A6C[73006982] = v71;
          v72 = v22 + (int)dword_140404A6C[4 * v21 + 129719656 + v7];
          *(float *)&dword_140404A6C[73006983] = v70;
          *(float *)&dword_140404A6C[73006984] = v59;
          *(float *)&dword_140404A6C[73006985] = v60;
          *(float *)&dword_140404A6C[73006986] = v58;
          dword_140404A6C[73006994] = dword_140404A6C[v72 + 129716769];
          v73 = (int)dword_140404A6C[4 * v32 + 129719656 + v7];
          *(float *)&dword_140404A6C[73006987] = v69;
          dword_140404A6C[73006993] = v19;
          dword_140404A6C[73006995] = dword_140404A6C[v22 + 129716769 + v73];
          dword_140404A6C[73006996] = dword_140404A6C[v22 + 129716769 + (int)dword_140404A6C[4 * v42 + 129719656 + v7]];
          sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], &v155, &v144, &v141);
          v17 = v154;
          v74 = 60LL * (int)dword_140404A6C[73006994];
          v75 = 60LL * (int)dword_140404A6C[73006995];
          v76 = 60LL * (int)dword_140404A6C[73006996];
          v77 = (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v74 + 73007032])
              + (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v75 + 73007032]);
          v78 = *(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v74 + 73007033];
          v79 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v75 + 73007034])
              + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v74 + 73007034]);
          v21 = v159;
          v80 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v76 + 73007033];
          v81 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v76 + 73007034];
          v82 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v75 + 73007033]) + v78;
          v42 = v160;
          *(float *)&dword_140404A6C[73006989] = v77
                                               + (float)(*(float *)&dword_140404A6C[73007000]
                                                       * *(float *)&dword_140404A6C[v76 + 73007032]);
          *(float *)&dword_140404A6C[73006991] = v79 + v81;
          *(float *)&dword_140404A6C[73006990] = v82 + v80;
        }
        v46 = v129;
        v45 = v128;
      }
      v47 = v161;
    }
LABEL_40:
    if ( *(v20 - 5) == 4 )
    {
      v83 = (int)*(v20 - 1);
      v144 = v45;
      v145 = v46;
      v146 = v47;
      v84 = 60LL * (int)dword_140404A6C[v83 + 129716769 + v22];
      v85 = (int)v20[3];
      v86 = *(float *)&dword_140404A6C[v84 + 73007026];
      v87 = *(float *)&dword_140404A6C[v84 + 73007027];
      v88 = *(float *)&dword_140404A6C[v84 + 73007028];
      v127 = v86;
      v141 = v86;
      v132 = v87;
      v142 = v87;
      v124 = v88;
      v143 = v88;
      if ( (_DWORD)v85 != -1 )
      {
        v89 = *((float *)v20 + 7);
        v90 = (int)dword_140404A6C[v22 + 129716769 + v85];
        v91 = (float)((float)(*(float *)&dword_140404A6C[60 * v90 + 73007027] - v87) * v89) + v87;
        v127 = (float)((float)(*(float *)&dword_140404A6C[60 * v90 + 73007026] - v86) * v89) + v86;
        v86 = v127;
        v141 = v127;
        v92 = *(float *)&dword_140404A6C[60 * v90 + 73007028];
        v87 = v91;
        v132 = v91;
        v142 = v91;
        v124 = (float)((float)(v92 - v88) * v89) + v88;
        v88 = v124;
        v143 = v124;
      }
      v93 = v86 - v25;
      v94 = (float)(v158 * (float)(v87 - v26)) - (float)(v54 * (float)(v88 - v27));
      v95 = (float)(v54 * v93) - (float)(v153 * (float)(v87 - v26));
      v96 = (float)(v153 * (float)(v88 - v27)) - (float)(v158 * v93);
      v97 = fsqrt((float)((float)(v96 * v96) + (float)(v94 * v94)) + (float)(v95 * v95));
      if ( v97 == 0.0 )
      {
        v137 = 0.0;
        v98 = 0.0;
        v138 = 0;
        v99 = 0.0;
        v139 = 0.0;
        v100 = 0.0;
      }
      else
      {
        v98 = v94 * (float)(1.0 / v97);
        v99 = v96 * (float)(1.0 / v97);
        v100 = v95 * (float)(1.0 / v97);
        v137 = v98;
        v138 = LODWORD(v99);
        v139 = v100;
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
        v112 = (float)(v111 * v108) + a2[1];
        v113 = (float)(v111 * v109) + a2[2];
        v136 = (float)(v111 * v107) + *a2;
        v147 = LODWORD(v136);
        v134 = v113;
        v149 = LODWORD(v113);
        v135 = v112;
        v148 = LODWORD(v112);
        if ( (float)((float)((float)((float)((float)((float)(v113 - v27) * v153)
                                           - (float)((float)(v47 - v27) * (float)(v136 - v25)))
                                   * v99)
                           + (float)((float)((float)((float)(v47 - v27) * (float)(v112 - v26))
                                           - (float)((float)(v46 - v26) * (float)(v113 - v27)))
                                   * v98))
                   + (float)((float)((float)((float)(v46 - v26) * (float)(v136 - v25))
                                   - (float)((float)(v112 - v26) * v153))
                           * v100)) >= 0.0
          && (float)((float)((float)((float)((float)((float)(v134 - v161) * (float)(v127 - v128))
                                           - (float)((float)(v124 - v161) * (float)(v136 - v128)))
                                   * v99)
                           + (float)((float)((float)((float)(v124 - v161) * (float)(v135 - v129))
                                           - (float)((float)(v132 - v129) * (float)(v134 - v161)))
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
          && v111 < *(float *)&dword_140404A6C[73006987] )
        {
          *(float *)&dword_140404A6C[73006981] = v136;
          *(float *)&dword_140404A6C[73006982] = v135;
          *(float *)&dword_140404A6C[73006983] = v134;
          *(float *)&dword_140404A6C[73006984] = v98;
          *(float *)&dword_140404A6C[73006985] = v99;
          v114 = (int)dword_140404A6C[4 * v21 + 129719656 + v7];
          *(float *)&dword_140404A6C[73006986] = v100;
          *(float *)&dword_140404A6C[73006987] = v111;
          dword_140404A6C[73006993] = v19;
          dword_140404A6C[73006994] = dword_140404A6C[v22 + 129716769 + v114];
          dword_140404A6C[73006995] = dword_140404A6C[v22 + 129716769 + (int)dword_140404A6C[4 * v42 + 129719656 + v7]];
          dword_140404A6C[73006996] = dword_140404A6C[v22 + 129716769 + (int)dword_140404A6C[4 * v83 + 129719656 + v7]];
          sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], &v155, &v144, &v141);
          v17 = v154;
          v115 = 60LL * (int)dword_140404A6C[73006994];
          v116 = 60LL * (int)dword_140404A6C[73006995];
          v117 = 60LL * (int)dword_140404A6C[73006996];
          v118 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v116 + 73007034])
               + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v115 + 73007034]);
          v119 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v117 + 73007033];
          v120 = *(float *)&dword_140404A6C[73007000] * *(float *)&dword_140404A6C[v117 + 73007034];
          v121 = (float)(*(float *)&dword_140404A6C[73006999] * *(float *)&dword_140404A6C[v116 + 73007033])
               + (float)(*(float *)&dword_140404A6C[73006998] * *(float *)&dword_140404A6C[v115 + 73007033]);
          *(float *)&dword_140404A6C[73006989] = (float)((float)(*(float *)&dword_140404A6C[73006999]
                                                               * *(float *)&dword_140404A6C[v116 + 73007032])
                                                       + (float)(*(float *)&dword_140404A6C[73006998]
                                                               * *(float *)&dword_140404A6C[v115 + 73007032]))
                                               + (float)(*(float *)&dword_140404A6C[73007000]
                                                       * *(float *)&dword_140404A6C[v117 + 73007032]);
          *(float *)&dword_140404A6C[73006991] = v118 + v120;
          *(float *)&dword_140404A6C[73006990] = v121 + v119;
        }
      }
    }
LABEL_57:
    v5 = v140;
    goto LABEL_58;
  }
LABEL_60:
  if ( a4 && (int)dword_140404A6C[v7 + 129720373] > 0 )
  {
    v122 = &dword_140404A6C[v7 + 129720387];
    do
    {
      if ( (unsigned int)sub_1400DF380(
                           (unsigned int)&v147,
                           (unsigned int)&v137,
                           (unsigned int)&v133,
                           (_DWORD)a2,
                           (__int64)a3,
                           (__int64)&dword_140404A6C[43 * v18 + 129720393 + v7],
                           *v122) )
      {
        if ( v133 < *(float *)&dword_140404A6C[73006987] )
        {
          dword_140404A6C[73006981] = v147;
          dword_140404A6C[73006982] = v148;
          dword_140404A6C[73006983] = v149;
          *(float *)&dword_140404A6C[73006984] = v137;
          dword_140404A6C[73006985] = v138;
          *(float *)&dword_140404A6C[73006986] = v139;
          *(float *)&dword_140404A6C[73006987] = v133;
          dword_140404A6C[73006993] = -1;
          dword_140404A6C[73006994] = v18;
        }
      }
      ++v18;
      v122 += 43;
    }
    while ( v18 < (int)dword_140404A6C[v7 + 129720373] );
  }
  return *(float *)&dword_140404A6C[73006987] < 1.0;
}

