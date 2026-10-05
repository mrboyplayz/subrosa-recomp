/* Address: 0x140001320 | Name: sub_140001320 | Size: 3544 bytes */
unsigned __int64 __fastcall sub_140001320(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7)
{
  unsigned __int64 result; // rax
  int v8; // r10d
  int v9; // r15d
  int v10; // edi
  int v11; // esi
  float v12; // xmm9_4
  float v13; // xmm15_4
  _DWORD *v14; // r8
  float *v15; // r9
  char *v16; // r13
  char *v17; // r12
  float v18; // xmm6_4
  _DWORD *v19; // rbx
  float *v20; // rsi
  __int64 v21; // r14
  int v22; // xmm0_4
  int v23; // xmm0_4
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  int v27; // xmm0_4
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  int v31; // xmm0_4
  int v32; // edx
  int v33; // r8d
  int v34; // r9d
  int v35; // xmm0_4
  int v36; // edx
  int v37; // r8d
  int v38; // r9d
  int v39; // xmm0_4
  int v40; // edx
  int v41; // r8d
  int v42; // r9d
  float v43; // xmm13_4
  int v44; // xmm6_4
  int v45; // xmm7_4
  int v46; // xmm12_4
  int v47; // xmm11_4
  int v48; // xmm10_4
  int v49; // xmm9_4
  __int64 v50; // rbx
  double v51; // xmm0_8
  int v52; // edx
  int v53; // r8d
  int v54; // r9d
  double v55; // xmm0_8
  int v56; // edx
  int v57; // r8d
  int v58; // r9d
  double v59; // xmm0_8
  int v60; // edx
  int v61; // r8d
  int v62; // r9d
  double v63; // xmm0_8
  float v64; // xmm10_4
  int v65; // edx
  int v66; // r8d
  int v67; // r9d
  double v68; // xmm0_8
  float v69; // xmm11_4
  int v70; // edx
  int v71; // r8d
  int v72; // r9d
  double v73; // xmm0_8
  float v74; // xmm12_4
  int v75; // edx
  int v76; // r8d
  int v77; // r9d
  double v78; // xmm0_8
  float v79; // xmm7_4
  int v80; // edx
  int v81; // r8d
  int v82; // r9d
  double v83; // xmm0_8
  float v84; // xmm6_4
  int v85; // edx
  int v86; // r8d
  int v87; // r9d
  double v88; // xmm0_8
  __int64 v89; // rcx
  __int64 v90; // rax
  float v91; // xmm3_4
  float *v92; // rax
  float v93; // xmm4_4
  float v94; // xmm5_4
  float v95; // xmm1_4
  float v96; // xmm0_4
  float v97; // xmm1_4
  float v98; // xmm2_4
  float v99; // xmm0_4
  __int64 v100; // rcx
  float v101; // xmm3_4
  float v102; // xmm1_4
  float v103; // xmm2_4
  float v104; // xmm0_4
  bool v105; // zf
  int v106; // ebx
  int v107; // r10d
  int v108; // r11d
  __int64 v109; // rcx
  int v110; // edx
  int v111; // r9d
  int *v112; // r8
  int v113; // r11d
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rcx
  int v123; // eax
  __int64 v124; // rcx
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rcx
  float v128; // [rsp+44h] [rbp-174h]
  int v129; // [rsp+48h] [rbp-170h]
  float v132; // [rsp+54h] [rbp-164h]
  float v133; // [rsp+58h] [rbp-160h]
  float v134; // [rsp+5Ch] [rbp-15Ch]
  float v135; // [rsp+60h] [rbp-158h]
  int v136; // [rsp+64h] [rbp-154h]
  int v137; // [rsp+68h] [rbp-150h]
  int v138; // [rsp+74h] [rbp-144h]
  int v139; // [rsp+78h] [rbp-140h]
  int v140; // [rsp+84h] [rbp-134h]
  int v141; // [rsp+88h] [rbp-130h]
  int v142; // [rsp+94h] [rbp-124h]
  int v143; // [rsp+98h] [rbp-120h]
  int v144; // [rsp+9Ch] [rbp-11Ch]
  int v145; // [rsp+A0h] [rbp-118h]
  int v146; // [rsp+A4h] [rbp-114h]
  __int64 v147; // [rsp+B0h] [rbp-108h]
  char *v148; // [rsp+B8h] [rbp-100h]
  char *v149; // [rsp+C0h] [rbp-F8h]
  char *v150; // [rsp+C8h] [rbp-F0h]
  char *v151; // [rsp+D0h] [rbp-E8h]
  char *v152; // [rsp+D8h] [rbp-E0h]
  _DWORD *v153; // [rsp+E0h] [rbp-D8h]
  float *v154; // [rsp+E8h] [rbp-D0h]
  _UNKNOWN *retaddr; // [rsp+1B8h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v8 = a5;
  v9 = a3;
  v10 = dword_1605618A0[0];
  v11 = dword_1605618A0[0];
  v12 = 0.0;
  v128 = 0.0;
  v129 = dword_1605618A0[0];
  v13 = 1.0 / (float)a3;
  if ( a5 >= 0 )
  {
    v14 = (_DWORD *)(a1 + 96);
    v15 = (float *)(a2 + 4);
    v16 = (char *)&dword_15ADEEFE0 - a1;
    v17 = (char *)&dword_15ADEEFC0 - a2;
    v153 = (_DWORD *)(a1 + 96);
    v148 = (char *)&dword_15ADEEFE4 - a1;
    v154 = (float *)(a2 + 4);
    v149 = (char *)&dword_15ADEEFE8 - a1;
    v150 = (char *)&dword_15ADEEF80 - a1;
    v151 = (char *)&dword_15ADEEF84 - a1;
    v147 = (unsigned int)(a5 + 1);
    v152 = (char *)&dword_15ADEEF88 - a1;
    do
    {
      v18 = 1.0 - v12;
      v19 = v14;
      v20 = v15;
      v21 = 4;
      do
      {
        v22 = v19[12];
        sub_1400E2300(a6, a2, (_DWORD)v14, (_DWORD)v15, *v19, v22);
        *(_DWORD *)&v16[(_QWORD)v19 - 96] = v22;
        v23 = v19[13];
        sub_1400E2300(a6, v24, v25, v26, v19[1], v23);
        *(_DWORD *)((char *)v19 + (_QWORD)v148 - 96) = v23;
        v27 = v19[14];
        sub_1400E2300(a6, v28, v29, v30, v19[2], v27);
        *(_DWORD *)((char *)v19 + (_QWORD)v149 - 96) = v27;
        *(float *)((char *)v20 + (_QWORD)v17 - 4) = (float)(v12 * v20[23]) + (float)(v18 * *(v20 - 1));
        *(float *)((char *)v20 + (_QWORD)v17) = (float)(v12 * v20[24]) + (float)(v18 * *v20);
        v31 = v19[12];
        sub_1400E2470(a6, v32, v33, v34, *v19, v31);
        *(_DWORD *)((char *)v19 + (_QWORD)v150 - 96) = v31;
        v35 = v19[1];
        sub_1400E2470(a6, v36, v37, v38, v35, v19[13]);
        *(_DWORD *)((char *)v19 + (_QWORD)v151 - 96) = v35;
        v39 = v19[2];
        sub_1400E2470(a6, v40, v41, v42, v39, v19[14]);
        result = (unsigned __int64)v152;
        v20 += 2;
        *(_DWORD *)((char *)v19 + (_QWORD)v152 - 96) = v39;
        v19 += 3;
        --v21;
      }
      while ( v21 );
      v9 = a3;
      v43 = 0.0;
      v10 = dword_1605618A0[0];
      if ( a3 >= 0 )
      {
        v44 = dword_15ADEF008;
        v45 = dword_15ADEF004;
        v46 = dword_15ADEF000;
        v47 = dword_15ADEEFFC;
        v48 = dword_15ADEEFF8;
        v49 = dword_15ADEF00C;
        v135 = *(float *)&dword_15ADEEFDC;
        v133 = *(float *)&dword_15ADEEFD8;
        v134 = *(float *)&dword_15ADEEFC4;
        v132 = *(float *)&dword_15ADEEFC0;
        v140 = dword_15ADEEFAC;
        v138 = dword_15ADEEFA8;
        v136 = dword_15ADEEFA4;
        v141 = dword_15ADEEFA0;
        v139 = dword_15ADEEF9C;
        v137 = dword_15ADEEF98;
        v142 = dword_15ADEF008;
        v143 = dword_15ADEF004;
        v144 = dword_15ADEF000;
        v145 = dword_15ADEEFFC;
        v146 = dword_15ADEEFF8;
        v50 = a3 + 1;
        do
        {
          v51 = sub_1400E2300(a4, a2, (_DWORD)v14, (_DWORD)v15, v48, v45);
          dword_1605618A0[3 * v10 + 262145] = LODWORD(v51);
          v55 = sub_1400E2300(a4, v52, v53, v54, v47, v44);
          dword_1605618A0[3 * dword_1605618A0[0] + 262146] = LODWORD(v55);
          v59 = sub_1400E2300(a4, v56, v57, v58, v46, v49);
          dword_1605618A0[3 * dword_1605618A0[0] + 262147] = LODWORD(v59);
          *(float *)&dword_1605618A0[3 * dword_1605618A0[0] + 409601] = (float)(v132 * (float)(1.0 - v43))
                                                                      + (float)(v133 * v43);
          *(float *)&dword_1605618A0[3 * dword_1605618A0[0] + 409602] = (float)(v134 * (float)(1.0 - v43))
                                                                      + (float)(v135 * v43);
          v63 = sub_1400E2470(a4, v60, v61, v62, v48, v45);
          v64 = *(float *)&v63;
          v68 = sub_1400E2470(a4, v65, v66, v67, v47, v44);
          v69 = *(float *)&v68;
          v73 = sub_1400E2470(a4, v70, v71, v72, v46, v49);
          v74 = *(float *)&v73;
          v78 = sub_1400E2300(a4, v75, v76, v77, v137, v136);
          v79 = *(float *)&v78;
          v83 = sub_1400E2300(a4, v80, v81, v82, v139, v138);
          v84 = *(float *)&v83;
          v88 = sub_1400E2300(a4, v85, v86, v87, v141, v140);
          v89 = 3LL * dword_1605618A0[0];
          *(float *)&dword_1605618A0[v89 + 311297] = (float)(v84 * v74) - (float)(*(float *)&v88 * v69);
          *(float *)&dword_1605618A0[v89 + 311298] = (float)(v64 * *(float *)&v88) - (float)(v79 * v74);
          *(float *)&dword_1605618A0[v89 + 311299] = (float)(v79 * v69) - (float)(v64 * v84);
          v90 = 3LL * dword_1605618A0[0] + 311297;
          v91 = *(float *)&dword_1605618A0[v90 + 1];
          v92 = (float *)&dword_1605618A0[v90];
          v93 = *v92;
          v94 = v92[2];
          v95 = fsqrt((float)((float)(v93 * v93) + (float)(v91 * v91)) + (float)(v94 * v94));
          if ( v95 == 0.0 )
          {
            v97 = 0.0;
            v98 = 0.0;
            v99 = 0.0;
          }
          else
          {
            v96 = 1.0 / v95;
            v97 = (float)(1.0 / v95) * v94;
            v98 = v96 * v91;
            v99 = v96 * v93;
          }
          *v92 = v99;
          v92[1] = v98;
          v92[2] = v97;
          result = dword_1605618A0[0];
          v100 = 3LL * dword_1605618A0[0];
          v101 = fsqrt((float)((float)(v64 * v64) + (float)(v69 * v69)) + (float)(v74 * v74));
          if ( v101 == 0.0 )
          {
            v102 = 0.0;
            v103 = 0.0;
            v104 = 0.0;
          }
          else
          {
            v102 = (float)(1.0 / v101) * v74;
            v103 = (float)(1.0 / v101) * v69;
            v104 = (float)(1.0 / v101) * v64;
          }
          *(float *)&dword_1605618A0[3 * dword_1605618A0[0] + 360449] = v104;
          v43 = v43 + v13;
          *(float *)&dword_1605618A0[v100 + 360450] = v103;
          *(float *)&dword_1605618A0[v100 + 360451] = v102;
          v44 = v142;
          v10 = dword_1605618A0[0] + 1;
          v45 = v143;
          v46 = v144;
          v47 = v145;
          v48 = v146;
          ++dword_1605618A0[0];
          --v50;
        }
        while ( v50 );
        v12 = v128;
      }
      v105 = v147-- == 1;
      v12 = v12 + (float)(1.0 / (float)a5);
      v14 = v153;
      v15 = v154;
      v128 = v12;
    }
    while ( !v105 );
    v11 = v129;
    v8 = a5;
  }
  v106 = 0;
  if ( v8 <= 0 )
    return result;
  v107 = dword_1607918A4;
  result = (unsigned int)a5;
  do
  {
    if ( v9 <= 0 )
      goto LABEL_32;
    v108 = (v9 + 1) * (v106 + 1);
    v109 = v11 + v106 * (v9 + 1);
    v110 = v108 + v11;
    v111 = v108 + v11 + 1;
    v112 = &dword_1605618A0[3 * v109 + 262150];
    v113 = ~v108 - v11;
    v114 = 3 * (v110 - v109);
    do
    {
      if ( v113 + v111 <= 0 && !v106 )
      {
        dword_1605618A0[4 * v107 + 573442] = -(v9 + 1) - 1 + v111;
LABEL_24:
        dword_1605618A0[4 * dword_1607918A4 + 573443] = v111 - (v9 + 1);
        goto LABEL_25;
      }
      v119 = 3LL * v10;
      dword_1605618A0[v119 + 262145] = *(v112 - 5);
      dword_1605618A0[v119 + 262146] = *(v112 - 4);
      dword_1605618A0[v119 + 262147] = *(v112 - 3);
      v120 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v120 + 409601] = v112[147451];
      dword_1605618A0[v120 + 409602] = v112[147452];
      v121 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v121 + 311297] = v112[49147];
      dword_1605618A0[v121 + 311298] = v112[49148];
      dword_1605618A0[v121 + 311299] = v112[49149];
      v122 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v122 + 360449] = v112[98299];
      dword_1605618A0[v122 + 360450] = v112[98300];
      dword_1605618A0[v122 + 360451] = v112[98301];
      dword_1605618A0[4 * dword_1607918A4 + 573442] = dword_1605618A0[0];
      v123 = ++dword_1605618A0[0];
      if ( !v106 )
        goto LABEL_24;
      v124 = 3LL * v123;
      dword_1605618A0[v124 + 262145] = *(v112 - 2);
      dword_1605618A0[v124 + 262146] = *(v112 - 1);
      dword_1605618A0[v124 + 262147] = *v112;
      v125 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v125 + 409601] = v112[147454];
      dword_1605618A0[v125 + 409602] = v112[147455];
      v126 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v126 + 311297] = v112[49150];
      dword_1605618A0[v126 + 311298] = v112[49151];
      dword_1605618A0[v126 + 311299] = v112[49152];
      v127 = 3LL * dword_1605618A0[0];
      dword_1605618A0[v127 + 360449] = v112[98302];
      dword_1605618A0[v127 + 360450] = v112[98303];
      dword_1605618A0[v127 + 360451] = v112[98304];
      dword_1605618A0[4 * dword_1607918A4 + 573443] = dword_1605618A0[0]++;
LABEL_25:
      dword_1605618A0[4 * dword_1607918A4 + 573444] = v111;
      if ( v113 + v111 <= 0 )
      {
        dword_1605618A0[4 * dword_1607918A4 + 573445] = v111 - 1;
      }
      else
      {
        v115 = 3LL * dword_1605618A0[0];
        dword_1605618A0[v115 + 262145] = v112[v114 - 5];
        dword_1605618A0[v115 + 262146] = v112[v114 - 4];
        dword_1605618A0[v115 + 262147] = v112[v114 - 3];
        v116 = 3LL * dword_1605618A0[0];
        dword_1605618A0[v116 + 409601] = v112[v114 + 147451];
        dword_1605618A0[v116 + 409602] = v112[v114 + 147452];
        v117 = 3LL * dword_1605618A0[0];
        dword_1605618A0[v117 + 311297] = v112[v114 + 49147];
        dword_1605618A0[v117 + 311298] = v112[v114 + 49148];
        dword_1605618A0[v117 + 311299] = v112[v114 + 49149];
        v118 = 3LL * dword_1605618A0[0];
        dword_1605618A0[v118 + 360449] = v112[v114 + 98299];
        dword_1605618A0[v118 + 360450] = v112[v114 + 98300];
        dword_1605618A0[v118 + 360451] = v112[v114 + 98301];
        dword_1605618A0[4 * dword_1607918A4 + 573445] = dword_1605618A0[0]++;
      }
      ++v111;
      v112 += 3;
      dword_1605618A0[dword_1607918A4 + 638978] = a7;
      dword_1605618A0[dword_1607918A4 + 671746] = 0;
      v10 = dword_1605618A0[0];
      v107 = ++dword_1607918A4;
    }
    while ( v113 + v111 < v9 );
    result = (unsigned int)a5;
LABEL_32:
    v11 = v129;
    ++v106;
  }
  while ( v106 < (int)result );
  return result;
}

