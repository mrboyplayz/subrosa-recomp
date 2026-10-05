/* Address: 0x14003c760 | Name: sub_14003C760 | Size: 4295 bytes */
__int64 __fastcall sub_14003C760(float *a1, float *a2, float *a3, signed int a4, float *a5, _DWORD *a6, __int64 a7)
{
  int v7; // xmm11_4
  unsigned int v9; // r10d
  __int64 v10; // r11
  float v11; // xmm14_4
  __int64 v12; // rbx
  float v13; // xmm0_4
  float v14; // xmm13_4
  float v15; // xmm12_4
  float v16; // xmm14_4
  float v17; // xmm13_4
  float v18; // xmm12_4
  int v19; // xmm1_4
  float v20; // xmm9_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  float v24; // xmm14_4
  float v25; // xmm9_4
  float v26; // xmm13_4
  float v27; // xmm5_4
  float v28; // xmm12_4
  float v29; // xmm7_4
  float v30; // xmm1_4
  float v31; // xmm14_4
  int v32; // r9d
  signed int v33; // r15d
  int v34; // eax
  int v35; // edx
  int v36; // r8d
  int v37; // ecx
  signed int v38; // r14d
  signed int v39; // edi
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r13
  unsigned int v43; // esi
  unsigned int v44; // eax
  float v45; // xmm12_4
  unsigned int v46; // xmm7_4
  float v47; // xmm15_4
  float v48; // xmm13_4
  unsigned int v49; // xmm8_4
  unsigned int v50; // xmm11_4
  float v51; // xmm9_4
  float v52; // xmm10_4
  float *v53; // rsi
  unsigned int v54; // ecx
  float v55; // xmm2_4
  float v56; // xmm6_4
  float v57; // xmm1_4
  float v58; // xmm3_4
  float v59; // xmm7_4
  float v60; // xmm0_4
  float v61; // xmm5_4
  float v62; // xmm4_4
  float v63; // xmm15_4
  float v64; // xmm5_4
  float v65; // xmm15_4
  float v66; // xmm14_4
  float v67; // xmm12_4
  float *v68; // rax
  float v69; // xmm5_4
  float v70; // xmm9_4
  float v71; // xmm10_4
  float v72; // xmm0_4
  float v73; // xmm4_4
  float v74; // xmm3_4
  unsigned int v75; // eax
  unsigned int v76; // edx
  unsigned int v77; // r8d
  unsigned int v78; // esi
  int v79; // eax
  float v80; // xmm8_4
  float v81; // xmm9_4
  float v82; // xmm11_4
  float v83; // xmm15_4
  float v84; // xmm10_4
  float v85; // xmm12_4
  unsigned int v86; // xmm7_4
  float v87; // xmm14_4
  float v88; // xmm3_4
  unsigned int v89; // r8d
  float v90; // xmm4_4
  float v91; // xmm7_4
  float v92; // xmm6_4
  float v93; // xmm2_4
  float *v94; // rax
  float v95; // xmm13_4
  float v96; // xmm1_4
  float v97; // xmm15_4
  float v98; // xmm0_4
  float v99; // xmm8_4
  float v100; // xmm7_4
  float v101; // xmm0_4
  float v102; // xmm5_4
  float v103; // xmm3_4
  float v104; // xmm4_4
  float v105; // xmm5_4
  float v106; // xmm9_4
  float v107; // xmm10_4
  float v108; // xmm12_4
  float v109; // xmm0_4
  float v110; // xmm4_4
  float *v111; // rax
  float v112; // xmm3_4
  float v113; // xmm15_4
  unsigned int v114; // edx
  float v115; // xmm8_4
  float v116; // xmm9_4
  float v117; // xmm11_4
  float v118; // xmm15_4
  float v119; // xmm10_4
  float v120; // xmm12_4
  float v121; // xmm7_4
  float v122; // xmm14_4
  unsigned int v123; // ecx
  float v124; // xmm4_4
  float v125; // xmm6_4
  float v126; // xmm2_4
  float v127; // xmm13_4
  float v128; // xmm1_4
  float v129; // xmm5_4
  float v130; // xmm3_4
  float v131; // xmm7_4
  float v132; // xmm0_4
  float v133; // xmm15_4
  float v134; // xmm5_4
  float v135; // xmm4_4
  float v136; // xmm5_4
  float v137; // xmm9_4
  float v138; // xmm10_4
  float *v139; // rsi
  float v140; // xmm12_4
  float v141; // xmm0_4
  float v142; // xmm15_4
  float v143; // xmm4_4
  float v144; // xmm3_4
  unsigned int v145; // esi
  unsigned int v146; // r13d
  int v147; // eax
  float v148; // xmm8_4
  float v149; // xmm9_4
  float v150; // xmm7_4
  float v151; // xmm12_4
  float v152; // xmm14_4
  float v153; // xmm10_4
  float v154; // xmm13_4
  float v155; // xmm11_4
  float v156; // xmm6_4
  float v157; // xmm1_4
  float v158; // xmm3_4
  float v159; // xmm5_4
  float v160; // xmm0_4
  float v161; // xmm2_4
  float v162; // xmm4_4
  float v163; // xmm1_4
  float v164; // xmm4_4
  float *v165; // rax
  float v166; // xmm3_4
  float v167; // xmm5_4
  float v168; // xmm0_4
  float v169; // xmm6_4
  float v170; // xmm3_4
  float *v171; // rax
  float v172; // xmm0_4
  __int64 v174; // [rsp+8h] [rbp-100h] BYREF
  __int64 v175; // [rsp+30h] [rbp-D8h]
  __int64 v176; // [rsp+40h] [rbp-C8h]
  __int64 v177; // [rsp+48h] [rbp-C0h]
  int v178; // [rsp+50h] [rbp-B8h]
  signed int v179; // [rsp+58h] [rbp-B0h]
  int v180; // [rsp+5Ch] [rbp-ACh]
  float v181; // [rsp+60h] [rbp-A8h] BYREF
  float v182; // [rsp+68h] [rbp-A0h] BYREF
  float v183; // [rsp+6Ch] [rbp-9Ch]
  float v184; // [rsp+70h] [rbp-98h]
  float v185; // [rsp+78h] [rbp-90h] BYREF
  float v186; // [rsp+7Ch] [rbp-8Ch]
  float v187; // [rsp+80h] [rbp-88h]
  float v188; // [rsp+88h] [rbp-80h]
  float v189; // [rsp+8Ch] [rbp-7Ch]
  float *v190; // [rsp+90h] [rbp-78h]
  float v191; // [rsp+98h] [rbp-70h]
  float v192; // [rsp+9Ch] [rbp-6Ch]
  int v193; // [rsp+A0h] [rbp-68h] BYREF
  int v194; // [rsp+A4h] [rbp-64h]
  int v195; // [rsp+A8h] [rbp-60h]
  float *v196; // [rsp+B0h] [rbp-58h]
  unsigned int v197; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v198; // [rsp+BCh] [rbp-4Ch]
  unsigned int v199; // [rsp+C0h] [rbp-48h]
  _DWORD v200[4]; // [rsp+C8h] [rbp-40h] BYREF
  int v201; // [rsp+D8h] [rbp-30h]
  int v202; // [rsp+DCh] [rbp-2Ch]
  int v203; // [rsp+E0h] [rbp-28h]
  int v204; // [rsp+E4h] [rbp-24h]
  __int64 v205; // [rsp+E8h] [rbp-20h]
  float v206[4]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v207; // [rsp+100h] [rbp-8h]

  v7 = a7;
  v9 = a4;
  *a3 = 65536.0;
  v10 = a4;
  v11 = *a5;
  v12 = 263004LL * a4;
  v13 = *a5 + *(float *)&a7;
  v179 = a4;
  v196 = a2;
  v190 = a1;
  v205 = a4;
  if ( v13 < *(float *)&dword_140404A6C[v12 + 111579657] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v174 ^ v207);
  v14 = a5[1];
  if ( (float)(v14 + *(float *)&a7) < *(float *)&dword_140404A6C[v12 + 111579658] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v174 ^ v207);
  v15 = a5[2];
  if ( (float)(v15 + *(float *)&a7) < *(float *)&dword_140404A6C[v12 + 111579659] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v174 ^ v207);
  if ( (float)(v11 - *(float *)&a7) > *(float *)&dword_140404A6C[v12 + 111579660] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v174 ^ v207);
  if ( (float)(v14 - *(float *)&a7) > *(float *)&dword_140404A6C[v12 + 111579661] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v174 ^ v207);
  if ( (float)(v15 - *(float *)&a7) > *(float *)&dword_140404A6C[v12 + 111579662] )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v174 ^ v207);
  v16 = v11 - *(float *)&dword_140404A6C[v12 + 111579638];
  v17 = v14 - *(float *)&dword_140404A6C[v12 + 111579639];
  v18 = v15 - *(float *)&dword_140404A6C[v12 + 111579640];
  v19 = a6[1];
  v20 = v16 * *(float *)&dword_140404A6C[v12 + 111579641];
  v21 = v18 * *(float *)&dword_140404A6C[v12 + 111579643];
  v22 = v16 * *(float *)&dword_140404A6C[v12 + 111579644];
  v23 = v17 * *(float *)&dword_140404A6C[v12 + 111579645];
  v24 = v16 * *(float *)&dword_140404A6C[v12 + 111579647];
  v25 = v20 + (float)(v17 * *(float *)&dword_140404A6C[v12 + 111579642]);
  v26 = v17 * *(float *)&dword_140404A6C[v12 + 111579648];
  v27 = v18 * *(float *)&dword_140404A6C[v12 + 111579646];
  v28 = v18 * *(float *)&dword_140404A6C[v12 + 111579649];
  v200[0] = *a6;
  v29 = v22 + v23;
  v200[2] = a6[2];
  v200[1] = v19;
  v30 = *(float *)&dword_140404A6C[v12 + 111579654];
  v206[0] = v25 + v21;
  v31 = v24 + v26;
  v206[1] = v29 + v27;
  v206[2] = v31 + v28;
  v32 = (int)(float)((float)((float)(*(float *)&a7 + v21) + v25) * v30);
  v180 = v32;
  v33 = (int)(float)((float)((float)(v29 + v27) - *(float *)&a7) * v30);
  v34 = (int)(float)((float)((float)(v25 + v21) - *(float *)&a7) * v30);
  v194 = v33;
  v201 = v34;
  v35 = (int)(float)((float)((float)(v31 + v28) - *(float *)&a7) * v30);
  v36 = (int)(float)((float)((float)(*(float *)&a7 + v27) + v29) * v30);
  v203 = v35;
  v204 = v36;
  v37 = (int)(float)((float)((float)(*(float *)&a7 + v28) + v31) * v30);
  v202 = v37;
  if ( v33 > v36 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v174 ^ v207);
  v194 = (int)(float)((float)((float)(v29 + v27) - *(float *)&a7) * v30);
  do
  {
    v195 = v35;
    v38 = v35;
    if ( v35 > v37 )
      goto LABEL_48;
    do
    {
      v193 = v34;
      v39 = v34;
      if ( v34 > v32 )
        goto LABEL_46;
      do
      {
        if ( v39 < 0 )
          goto LABEL_44;
        if ( v39 >= (int)(dword_140404A6C[v12 + 111579650] << 6) )
          goto LABEL_44;
        if ( v33 < 0 )
          goto LABEL_44;
        if ( v33 >= (int)(dword_140404A6C[v12 + 111579651] << 6) )
          goto LABEL_44;
        if ( v38 < 0 )
          goto LABEL_44;
        if ( v38 >= (int)(dword_140404A6C[v12 + 111579652] << 6) )
          goto LABEL_44;
        v40 = *(int *)(*(_QWORD *)&dword_140404A6C[v12 + 111579655]
                     + 4LL
                     * (int)((v39 >> 6)
                           + dword_140404A6C[v12 + 111579650]
                           * ((v38 >> 6) + dword_140404A6C[v12 + 111579652] * (v33 >> 6))));
        if ( (_DWORD)v40 == -1 )
          goto LABEL_44;
        v41 = (int)dword_140404A6C[263004 * v10
                                 + 111579985
                                 + 513 * v40
                                 + 64 * ((v33 >> 3) & 7)
                                 + 8 * ((v38 >> 3) & 7)
                                 + ((v39 >> 3) & 7)];
        if ( (_DWORD)v41 == -1 )
          goto LABEL_44;
        v42 = 6930 * v41 + (v39 & 7) + 8 * ((v38 & 7) + 8 * (v33 & 7u));
        v43 = dword_140404A6C[v42 + 83194359];
        v44 = v43 & 0xE0000000;
        if ( (v43 & 0xE0000000) == 0x40000000 )
        {
          LODWORD(v177) = dword_140404A6C[v12 + 111579653];
          LODWORD(v176) = v43;
          LODWORD(v175) = v7;
          if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int, __int64, __int64, __int64, __int64, __int64, int, signed int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_14003E100)(
                               (unsigned int)&v182,
                               (unsigned int)&v185,
                               (unsigned int)&v181,
                               (unsigned int)v206,
                               (__int64)v200,
                               v175,
                               (__int64)&v193,
                               v176,
                               v177,
                               v178,
                               v179,
                               LODWORD(v181),
                               LODWORD(v182),
                               LODWORD(v184),
                               LODWORD(v185),
                               LODWORD(v187),
                               LODWORD(v188),
                               (_DWORD)v190,
                               LODWORD(v191))
            && v181 < *a3 )
          {
            v45 = *(float *)&dword_140404A6C[v12 + 111579643];
            v46 = dword_140404A6C[v12 + 111579645];
            v47 = *(float *)&dword_140404A6C[v12 + 111579646];
            v48 = *(float *)&dword_140404A6C[v12 + 111579649];
            v49 = dword_140404A6C[v12 + 111579641];
            v50 = dword_140404A6C[v12 + 111579642];
            v51 = *(float *)&dword_140404A6C[v12 + 111579647];
            v52 = *(float *)&dword_140404A6C[v12 + 111579648];
            v53 = v190;
            v54 = v179;
            v188 = *(float *)&dword_140404A6C[v12 + 111579644];
            v189 = *(float *)&v46;
            v55 = v185;
            v56 = (float)(v47 * v183) + *(float *)&dword_140404A6C[v12 + 111579640];
            v57 = v186;
            v58 = *(float *)&v46;
            v59 = (float)((float)(*(float *)&v46 * v183) + *(float *)&dword_140404A6C[v12 + 111579639])
                + (float)((float)(v52 * v184) + (float)(*(float *)&v50 * v182));
            v60 = v187;
            v61 = (float)(v48 * v184) + (float)(v45 * v182);
            v62 = v188;
            v182 = (float)((float)(v51 * v184) + (float)(*(float *)&v49 * v182))
                 + (float)((float)(v188 * v183) + *(float *)&dword_140404A6C[v12 + 111579638]);
            v63 = (float)((float)(v47 * v186) + (float)(v45 * v185)) + (float)(v48 * v187);
            *v190 = v182;
LABEL_27:
            v68 = v196;
            v69 = v61 + v56;
            v53[1] = v59;
            v53[2] = v69;
            v70 = v51 * v60;
            v71 = v52 * v60;
            v72 = v181;
            v68[2] = v63;
            v184 = v69;
            v183 = v59;
            v187 = v63;
            v73 = (float)((float)(v62 * v57) + (float)(*(float *)&v49 * v55)) + v70;
            v74 = (float)((float)(v58 * v57) + (float)(*(float *)&v50 * v55)) + v71;
            *v68 = v73;
            v185 = v73;
            v68[1] = v74;
            *a3 = v72;
            v186 = v74;
            v75 = sub_140012DE0(v54, v39, v33, v38, dword_140404A6C[73007008]);
            v9 = v179;
            v32 = v180;
            v7 = a7;
            dword_140404A6C[73007007] = v75;
            goto LABEL_34;
          }
          goto LABEL_32;
        }
        if ( v44 == 0x80000000 )
        {
          if ( (unsigned int)sub_14003E4B0(
                               (unsigned int)&v182,
                               (unsigned int)&v185,
                               (unsigned int)&v181,
                               (unsigned int)v206,
                               (__int64)v200,
                               v7,
                               (__int64)&v193,
                               v43,
                               dword_140404A6C[v12 + 111579653])
            && v181 < *a3 )
          {
            v64 = *(float *)&dword_140404A6C[v12 + 111579642];
            v65 = *(float *)&dword_140404A6C[v12 + 111579643];
            v66 = *(float *)&dword_140404A6C[v12 + 111579646];
            v67 = *(float *)&dword_140404A6C[v12 + 111579649];
            v51 = *(float *)&dword_140404A6C[v12 + 111579647];
            v49 = dword_140404A6C[v12 + 111579644];
            v50 = dword_140404A6C[v12 + 111579645];
            v52 = *(float *)&dword_140404A6C[v12 + 111579648];
            v54 = v179;
            v189 = *(float *)&dword_140404A6C[v12 + 111579641];
            dword_140404A6C[73007009] = v43;
            v53 = v190;
            dword_140404A6C[73007002] = v179;
            v188 = v64;
            dword_140404A6C[73007003] = v39;
            dword_140404A6C[73007004] = v33;
            dword_140404A6C[73007005] = v38;
            dword_140404A6C[73007012] = -1;
            dword_140404A6C[73007015] = -1;
            v55 = v186;
            v56 = (float)(v66 * v183) + *(float *)&dword_140404A6C[v12 + 111579640];
            v57 = v185;
            v58 = v64;
            v59 = (float)((float)(*(float *)&v50 * v183) + *(float *)&dword_140404A6C[v12 + 111579639])
                + (float)((float)(v52 * v184) + (float)(v64 * v182));
            v60 = v187;
            v61 = (float)(v67 * v184) + (float)(v65 * v182);
            v62 = v189;
            v182 = (float)((float)(v51 * v184) + (float)(v189 * v182))
                 + (float)((float)(*(float *)&v49 * v183) + *(float *)&dword_140404A6C[v12 + 111579638]);
            v63 = (float)((float)(v65 * v185) + (float)(v66 * v186)) + (float)(v67 * v187);
            *v190 = v182;
            goto LABEL_27;
          }
          goto LABEL_32;
        }
        if ( v44 == -1073741824 )
        {
          v76 = v39 - (unsigned __int8)v43;
          v191 = *(float *)&v76;
          v77 = v33 - BYTE2(v43);
          v197 = v76;
          v78 = v38 - BYTE1(v43);
          v192 = *(float *)&v77;
          v198 = v77;
          v199 = v78;
          v79 = sub_1400129D0(v9, v76, v77, v78);
          if ( (unsigned int)sub_14003E4B0(
                               (unsigned int)&v182,
                               (unsigned int)&v185,
                               (unsigned int)&v181,
                               (unsigned int)v206,
                               (__int64)v200,
                               v7,
                               (__int64)&v197,
                               v79,
                               dword_140404A6C[v12 + 111579653])
            && v181 < *a3 )
          {
            v80 = *(float *)&dword_140404A6C[v12 + 111579641];
            v81 = *(float *)&dword_140404A6C[v12 + 111579647];
            v82 = *(float *)&dword_140404A6C[v12 + 111579642];
            v83 = *(float *)&dword_140404A6C[v12 + 111579643];
            v84 = *(float *)&dword_140404A6C[v12 + 111579648];
            v85 = *(float *)&dword_140404A6C[v12 + 111579649];
            v86 = dword_140404A6C[v12 + 111579645];
            v87 = *(float *)&dword_140404A6C[v12 + 111579646];
            v88 = v184;
            v89 = LODWORD(v192);
            v188 = *(float *)&dword_140404A6C[v12 + 111579644];
            v90 = v83 * v182;
            v189 = *(float *)&v86;
            v91 = (float)(*(float *)&v86 * v183) + *(float *)&dword_140404A6C[v12 + 111579639];
            v92 = (float)(v87 * v183) + *(float *)&dword_140404A6C[v12 + 111579640];
            v93 = v186;
            v94 = v190;
            v95 = (float)((float)(v81 * v184) + (float)(v80 * v182))
                + (float)((float)(v188 * v183) + *(float *)&dword_140404A6C[v12 + 111579638]);
            v96 = v185;
            v97 = v83 * v185;
            v98 = (float)(v84 * v184) + (float)(v82 * v182);
            v99 = v80 * v185;
            *v190 = v95;
            v100 = v91 + v98;
            v101 = v187;
            v102 = (float)(v85 * v88) + v90;
            v103 = v189 * v93;
            v104 = v188;
            v94[1] = v100;
            v105 = v102 + v92;
            v106 = v81 * v101;
            v107 = v84 * v101;
            v108 = v85 * v101;
            v109 = v181;
            v94[2] = v105;
            v110 = (float)((float)(v104 * v93) + v99) + v106;
            v111 = v196;
            *v196 = v110;
            v182 = v95;
            v183 = v100;
            v184 = v105;
            v185 = v110;
            v112 = (float)(v103 + (float)(v82 * v96)) + v107;
            v113 = (float)(v97 + (float)(v87 * v93)) + v108;
            v111[1] = v112;
            v186 = v112;
            v111[2] = v113;
            *a3 = v109;
            v187 = v113;
            v7 = a7;
            dword_140404A6C[73007007] = sub_140012DE0(v179, LODWORD(v191), v89, v78, dword_140404A6C[73007008]);
          }
LABEL_32:
          v32 = v180;
          v9 = v179;
        }
        v53 = v190;
LABEL_34:
        v114 = dword_140404A6C[v42 + 83197431];
        if ( (v114 & 0xE0000000) == 0x80000000 )
        {
          if ( (unsigned int)sub_14003E4B0(
                               (unsigned int)&v182,
                               (unsigned int)&v185,
                               (unsigned int)&v181,
                               (unsigned int)v206,
                               (__int64)v200,
                               v7,
                               (__int64)&v193,
                               v114,
                               dword_140404A6C[v12 + 111579653])
            && v181 < *a3 )
          {
            v115 = *(float *)&dword_140404A6C[v12 + 111579641];
            v116 = *(float *)&dword_140404A6C[v12 + 111579647];
            v117 = *(float *)&dword_140404A6C[v12 + 111579642];
            v118 = *(float *)&dword_140404A6C[v12 + 111579643];
            v119 = *(float *)&dword_140404A6C[v12 + 111579648];
            v120 = *(float *)&dword_140404A6C[v12 + 111579649];
            v121 = *(float *)&dword_140404A6C[v12 + 111579645];
            v122 = *(float *)&dword_140404A6C[v12 + 111579646];
            v123 = v179;
            v188 = *(float *)&dword_140404A6C[v12 + 111579644];
            v124 = v118 * v182;
            v191 = v121;
            v125 = (float)(v122 * v183) + *(float *)&dword_140404A6C[v12 + 111579640];
            v126 = v186;
            v127 = (float)((float)(v116 * v184) + (float)(v115 * v182))
                 + (float)((float)(v188 * v183) + *(float *)&dword_140404A6C[v12 + 111579638]);
            v128 = v185;
            v129 = v120 * v184;
            v130 = v121;
            v131 = (float)((float)(v121 * v183) + *(float *)&dword_140404A6C[v12 + 111579639])
                 + (float)((float)(v119 * v184) + (float)(v117 * v182));
            v132 = v187;
            v133 = (float)(v118 * v185) + (float)(v122 * v186);
            *v53 = v127;
            v134 = v129 + v124;
            v135 = v188 * v126;
            v53[1] = v131;
            v136 = v134 + v125;
            v137 = v116 * v132;
            v138 = v119 * v132;
            v53[2] = v136;
            v139 = v196;
            v140 = v120 * v132;
            v141 = v181;
            v142 = v133 + v140;
            v182 = v127;
            v183 = v131;
            v184 = v136;
            v196[2] = v142;
            v187 = v142;
            v143 = (float)(v135 + (float)(v115 * v128)) + v137;
            v144 = (float)((float)(v130 * v126) + (float)(v117 * v128)) + v138;
            *v139 = v143;
            v185 = v143;
            v139[1] = v144;
            *a3 = v141;
            v186 = v144;
            dword_140404A6C[73007007] = sub_140016720(v123, v39, v33, v38, dword_140404A6C[73007008]);
          }
          v32 = v180;
        }
        else if ( (v114 & 0xE0000000) == 0xC0000000 )
        {
          v145 = v39 - (unsigned __int8)v114;
          v197 = v145;
          v146 = v33 - BYTE2(v114);
          v198 = v146;
          LODWORD(v189) = v38 - BYTE1(v114);
          v199 = LODWORD(v189);
          v147 = sub_140016450(v9, v145, v146, LODWORD(v189));
          if ( (unsigned int)sub_14003E4B0(
                               (unsigned int)&v182,
                               (unsigned int)&v185,
                               (unsigned int)&v181,
                               (unsigned int)v206,
                               (__int64)v200,
                               v7,
                               (__int64)&v197,
                               v147,
                               dword_140404A6C[v12 + 111579653])
            && v181 < *a3 )
          {
            v148 = *(float *)&dword_140404A6C[v12 + 111579641];
            v149 = *(float *)&dword_140404A6C[v12 + 111579647];
            v150 = *(float *)&dword_140404A6C[v12 + 111579644];
            v151 = *(float *)&dword_140404A6C[v12 + 111579643];
            v152 = *(float *)&dword_140404A6C[v12 + 111579649];
            v153 = *(float *)&dword_140404A6C[v12 + 111579645];
            v154 = *(float *)&dword_140404A6C[v12 + 111579642];
            v155 = *(float *)&dword_140404A6C[v12 + 111579648];
            v156 = v185;
            v157 = v182 * v151;
            v158 = (float)(v183 * *(float *)&dword_140404A6C[v12 + 111579646])
                 + *(float *)&dword_140404A6C[v12 + 111579640];
            v159 = (float)(v183 * v153) + *(float *)&dword_140404A6C[v12 + 111579639];
            v160 = (float)(v184 * v155) + (float)(v182 * v154);
            v182 = (float)((float)(v184 * v149) + (float)(v182 * v148))
                 + (float)((float)(v183 * v150) + *(float *)&dword_140404A6C[v12 + 111579638]);
            v161 = v187;
            v162 = (float)(v184 * v152) + v157;
            v163 = v187 * v149;
            v191 = v159 + v160;
            v183 = v159 + v160;
            v192 = v162 + v158;
            v184 = v162 + v158;
            v164 = v186 * *(float *)&dword_140404A6C[v12 + 111579646];
            v165 = v190;
            v166 = v186 * v153;
            v167 = (float)(v186 * v150) + (float)(v185 * v148);
            *v190 = v182;
            v168 = v156;
            v165[1] = v191;
            v169 = (float)((float)(v156 * v151) + v164) + (float)(v161 * v152);
            v165[2] = v192;
            v170 = (float)(v166 + (float)(v168 * v154)) + (float)(v161 * v155);
            v171 = v196;
            v172 = v181;
            v185 = v167 + v163;
            v187 = v169;
            *v196 = v167 + v163;
            v171[1] = v170;
            v171[2] = v169;
            *a3 = v172;
            v186 = v170;
            dword_140404A6C[73007007] = sub_140016720(v179, v145, v146, LODWORD(v189), dword_140404A6C[73007008]);
          }
          v32 = v180;
        }
LABEL_44:
        v9 = v179;
        ++v39;
        v7 = a7;
        v10 = v179;
        v193 = v39;
      }
      while ( v39 <= v32 );
      v9 = v179;
      v10 = v205;
      v34 = v201;
      v37 = v202;
LABEL_46:
      v195 = ++v38;
    }
    while ( v38 <= v37 );
    v35 = v203;
    v36 = v204;
LABEL_48:
    v194 = ++v33;
  }
  while ( v33 <= v36 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v174 ^ v207);
}

