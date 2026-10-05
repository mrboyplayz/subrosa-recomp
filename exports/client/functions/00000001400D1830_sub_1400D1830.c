/* Address: 0x1400d1830 | Name: sub_1400D1830 | Size: 2728 bytes */
__int64 __fastcall sub_1400D1830(unsigned __int64 a1, float *a2, float *a3)
{
  float *v3; // r9
  char *v5; // r12
  int v6; // ecx
  char *v7; // r13
  char *v8; // r10
  char *v9; // rdx
  char *v10; // r8
  _BYTE *v11; // r11
  char *v12; // rdi
  char *v13; // rsi
  char *v14; // r15
  char *v15; // r14
  float v16; // xmm0_4
  float v17; // xmm3_4
  bool v18; // cc
  int v19; // eax
  float v20; // xmm3_4
  float v21; // xmm2_4
  char *v22; // rax
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  int v27; // eax
  float v28; // xmm3_4
  char *v29; // rax
  float v30; // xmm2_4
  char *v31; // rbx
  char *v32; // rax
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm3_4
  char *v36; // rbx
  int v37; // eax
  float v38; // xmm3_4
  float *v39; // r14
  unsigned __int64 v40; // rbx
  __m128d v41; // xmm1
  double v42; // xmm0_8
  float v43; // xmm1_4
  float v44; // xmm4_4
  float v45; // xmm1_4
  float v46; // xmm2_4
  __m128d v47; // xmm3
  float v48; // xmm0_4
  double v49; // xmm1_8
  int v50; // r9d
  float v51; // xmm5_4
  float v52; // xmm3_4
  float v53; // xmm5_4
  float v54; // xmm1_4
  float v55; // xmm0_4
  __m128d v56; // xmm5
  double v57; // xmm0_8
  int v58; // r8d
  float v59; // xmm5_4
  int v60; // r12d
  int v61; // esi
  float v62; // xmm5_4
  int v63; // r13d
  int v64; // edi
  signed int v65; // ecx
  float v66; // xmm0_4
  int v67; // r15d
  float v68; // xmm11_4
  float v69; // xmm12_4
  float v70; // xmm13_4
  float v71; // xmm14_4
  float v72; // xmm15_4
  unsigned int v73; // r10d
  unsigned int v74; // r8d
  int v75; // ecx
  __int64 v76; // r12
  float v77; // xmm6_4
  __int64 v78; // rcx
  float v79; // xmm1_4
  float v80; // xmm5_4
  float v81; // xmm4_4
  __int64 v82; // r13
  float v83; // xmm3_4
  float v84; // xmm2_4
  float v85; // xmm5_4
  float v86; // xmm2_4
  float v87; // xmm6_4
  float v88; // xmm9_4
  float v89; // xmm8_4
  float v90; // xmm10_4
  float v91; // xmm3_4
  float v92; // xmm8_4
  float v93; // xmm10_4
  float v94; // xmm9_4
  int v95; // xmm2_4
  float v96; // xmm1_4
  float v97; // xmm6_4
  float v98; // xmm4_4
  __int64 v99; // rax
  float v100; // xmm0_4
  float v101; // xmm2_4
  float v102; // xmm6_4
  float v103; // xmm1_4
  float v104; // xmm3_4
  float v105; // xmm0_4
  float v106; // xmm6_4
  float v107; // xmm3_4
  float v108; // xmm9_4
  float v109; // xmm8_4
  float v110; // xmm6_4
  float v111; // xmm9_4
  float v112; // xmm3_4
  float v113; // xmm8_4
  float v114; // xmm9_4
  float v115; // xmm6_4
  BOOL v116; // eax
  int v117; // xmm2_4
  float v118; // xmm1_4
  _BOOL8 v119; // rcx
  __int64 v121; // [rsp+8h] [rbp-100h] BYREF
  __int64 v122; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v123; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v124; // [rsp+58h] [rbp-B0h]
  char *v125; // [rsp+60h] [rbp-A8h]
  _BYTE *v126; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v127; // [rsp+70h] [rbp-98h]
  float *v128; // [rsp+78h] [rbp-90h] BYREF
  float v129; // [rsp+80h] [rbp-88h]
  float v130; // [rsp+88h] [rbp-80h] BYREF
  float v131; // [rsp+8Ch] [rbp-7Ch]
  float v132; // [rsp+90h] [rbp-78h]
  char *v133; // [rsp+98h] [rbp-70h]
  char *v134; // [rsp+A0h] [rbp-68h]
  char *v135; // [rsp+A8h] [rbp-60h]
  char *v136; // [rsp+B0h] [rbp-58h]
  float v137; // [rsp+B8h] [rbp-50h]
  float *v138; // [rsp+C0h] [rbp-48h]
  int v139; // [rsp+C8h] [rbp-40h] BYREF
  int v140; // [rsp+CCh] [rbp-3Ch] BYREF
  int v141; // [rsp+D0h] [rbp-38h]
  float v142; // [rsp+D8h] [rbp-30h] BYREF
  float v143; // [rsp+DCh] [rbp-2Ch] BYREF
  float v144; // [rsp+E0h] [rbp-28h]
  int v145; // [rsp+E8h] [rbp-20h] BYREF
  int v146; // [rsp+ECh] [rbp-1Ch] BYREF
  int v147; // [rsp+F0h] [rbp-18h]
  float v148; // [rsp+F8h] [rbp-10h] BYREF
  float v149; // [rsp+FCh] [rbp-Ch] BYREF
  float v150; // [rsp+100h] [rbp-8h] BYREF
  float v151; // [rsp+104h] [rbp-4h] BYREF
  float v152; // [rsp+108h] [rbp+0h] BYREF
  float v153; // [rsp+10Ch] [rbp+4h]
  int v154; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v155[4]; // [rsp+114h] [rbp+Ch] BYREF
  int v156; // [rsp+118h] [rbp+10h]
  __int128 v157; // [rsp+120h] [rbp+18h]

  v3 = a2 + 1;
  v128 = a2;
  v138 = a3;
  v123 = a1;
  v136 = (char *)((char *)&v150 - (char *)a2);
  v5 = (char *)((char *)&v149 - (char *)a2);
  LODWORD(v122) = -1;
  v6 = 0;
  v135 = (char *)((char *)&v151 - (char *)a2);
  v7 = (char *)((char *)&v152 - (char *)a2);
  v133 = (char *)((char *)&dword_140404A6C[272248182] - (char *)a2);
  v8 = (char *)((char *)&v145 - (char *)a2);
  v125 = (char *)((char *)&v146 - (char *)a2);
  v126 = (_BYTE *)(v155 - (_BYTE *)a2);
  v9 = (char *)((char *)a3 - (char *)a2);
  v10 = (char *)((char *)&dword_140404A6C[272248181] - (char *)a2);
  v11 = (_BYTE *)((char *)&v154 - (char *)a2);
  v134 = (char *)((char *)&v143 - (char *)a2);
  v12 = (char *)((char *)&v139 - (char *)a2);
  v13 = (char *)((char *)&v148 - (char *)a2);
  v14 = (char *)((char *)&v142 - (char *)a2);
  v15 = (char *)((char *)&v140 - (char *)a2);
  do
  {
    v16 = *(float *)((char *)v3 + (_QWORD)v9 - 4);
    v17 = v16 - *(v3 - 1);
    *(_DWORD *)((char *)v3 + (_QWORD)v8 - 4) = (int)(float)(*(v3 - 1) - *(float *)((char *)v3 + (_QWORD)v10 - 4));
    *(_DWORD *)((char *)v3 + (_QWORD)v11 - 4) = (int)(float)(v16 - *(float *)((char *)v3 + (_QWORD)v10 - 4));
    if ( v6 == 1 )
      v17 = 0.0;
    v18 = v17 <= 0.0;
    v19 = 1;
    v20 = fabs(v17);
    if ( v18 )
      v19 = v122;
    *(_DWORD *)((char *)v3 + (_QWORD)v12 - 4) = v19;
    v21 = *v3;
    v22 = v136;
    v23 = *v3;
    *(float *)((char *)v3 + (_QWORD)v13 - 4) = v20;
    *(float *)((char *)v3 + (_QWORD)v14 - 4) = v20;
    v24 = v23 - *(float *)((char *)v3 + (_QWORD)v10);
    *(float *)((char *)v3 + (_QWORD)v22) = v20;
    LODWORD(v22) = (int)v24;
    v25 = *(float *)((char *)v3 + (_QWORD)v9);
    v26 = v25 - v21;
    *(_DWORD *)((char *)v3 + (_QWORD)v8) = (_DWORD)v22;
    *(_DWORD *)((char *)v3 + (_QWORD)v11) = (int)(float)(v25 - *(float *)((char *)v3 + (_QWORD)v10));
    if ( !v6 )
      v26 = 0.0;
    v18 = v26 <= 0.0;
    v27 = 1;
    v28 = fabs(v26);
    if ( v18 )
      v27 = -1;
    *(_DWORD *)((char *)v3 + (_QWORD)v12) = v27;
    v29 = v135;
    v30 = v3[1];
    v31 = v125;
    *(float *)((char *)v3 + (_QWORD)v13) = v28;
    *(float *)((char *)v3 + (_QWORD)v29) = v28;
    v32 = v133;
    *(float *)((char *)v3 + (_QWORD)v14) = v28;
    v33 = *(float *)((char *)v3 + (_QWORD)v32);
    v34 = *(float *)((char *)v3 + (_QWORD)v9 + 4);
    v35 = v34 - v30;
    *(_DWORD *)((char *)v3 + (_QWORD)v31) = (int)(float)(v30 - v33);
    *(_DWORD *)((char *)v3 + (_QWORD)v126) = (int)(float)(v34 - v33);
    v36 = v134;
    if ( v6 == -1 )
      v35 = 0.0;
    v18 = v35 <= 0.0;
    v37 = 1;
    v38 = fabs(v35);
    if ( v18 )
      v37 = v122;
    v6 += 3;
    *(_DWORD *)((char *)v3 + (_QWORD)v15) = v37;
    *(float *)((char *)v3 + (_QWORD)v5) = v38;
    *(float *)&v7[(_QWORD)v3] = v38;
    *(float *)((char *)v3 + (_QWORD)v36) = v38;
    v3 += 3;
  }
  while ( v6 < 3 );
  v39 = v128;
  v40 = v123;
  v41 = _mm_cvtps_pd((__m128)*(unsigned int *)v128);
  v42 = v41.m128d_f64[0];
  if ( (double)(int)v41.m128d_f64[0] != v41.m128d_f64[0] )
    v42 = (double)((int)v41.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v41, v41)) & 1));
  v43 = v41.m128d_f64[0] - (v42 + 0.5);
  if ( v139 > 0 )
    v43 = -v43;
  v44 = v143;
  v45 = v43 + v43;
  v46 = v144;
  v47 = _mm_cvtps_pd((__m128)*((unsigned int *)v128 + 1));
  v148 = (float)(v143 * v45) - v148;
  v48 = v144 * v45;
  v49 = v47.m128d_f64[0];
  v151 = v48 - v151;
  if ( (double)(int)v47.m128d_f64[0] != v47.m128d_f64[0] )
    v49 = (double)((int)v47.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v47, v47)) & 1));
  v50 = v140;
  v51 = v47.m128d_f64[0] - (v49 + 0.5);
  if ( v140 > 0 )
    v51 = -v51;
  v52 = v142;
  v53 = v51 + v51;
  v54 = v144 * v53;
  v55 = (float)(v142 * v53) - v149;
  v56 = _mm_cvtps_pd((__m128)*((unsigned int *)v128 + 2));
  v149 = v55;
  v152 = v54 - v152;
  v57 = v56.m128d_f64[0];
  if ( (double)(int)v56.m128d_f64[0] != v56.m128d_f64[0] )
    v57 = (double)((int)v56.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v56, v56)) & 1));
  v58 = v141;
  v59 = v56.m128d_f64[0] - (v57 + 0.5);
  if ( v141 > 0 )
    v59 = -v59;
  v60 = v154;
  v61 = v145;
  v62 = v59 + v59;
  v63 = v156;
  v64 = v147;
  *(_DWORD *)(v123 + 24) = 1065353216;
  v150 = (float)(v52 * v62) - v150;
  v153 = (float)(v44 * v62) - v153;
  v65 = abs32(v63 - v64) + abs32(v60 - v61);
  LODWORD(v133) = 0x4000;
  if ( v65 > 0x4000 || (LODWORD(v133) = v65, v65 >= 0) )
  {
    v66 = v148;
    v67 = 0;
    v68 = v153;
    v69 = v152;
    v70 = v151;
    v71 = v150;
    v72 = v149;
    *(float *)&v125 = v148;
    while ( 1 )
    {
      v73 = v64 >> 11;
      if ( (unsigned int)(v61 >> 11) <= 7 && v73 <= 7 )
      {
        v74 = v64 >> 2;
        if ( (unsigned int)(v61 >> 2) <= 0xFFF && v74 <= 0xFFF )
        {
          v75 = *(unsigned __int16 *)(*(_QWORD *)&dword_140404A6C[272248185] + 2LL * ((v61 >> 4) + (v64 >> 4 << 10)));
          if ( _bittest(&v75, (unsigned __int8)(((v61 >> 2) & 3) + 4 * (v74 & 3))) )
          {
            v76 = 3336LL * (int)((v61 >> 11) + 8 * v73);
            *(float *)&v135 = (float)(v61 & 0x7FF);
            v77 = *(float *)&dword_140404A6C[v76 + 272034677];
            v78 = *(_QWORD *)&dword_140404A6C[v76 + 272034683];
            v79 = *(float *)&v135 + v77;
            v80 = *(float *)&dword_140404A6C[v76 + 272034678];
            v81 = *(float *)&dword_140404A6C[v76 + 272034679];
            v82 = (v61 & 0x7FF) + 2049 * (v64 & 0x7FFu);
            v83 = v80 + *(float *)(v78 + 4 * v82);
            v137 = (float)((v61 & 0x7FF) + 1);
            *(float *)&v136 = (float)(v64 & 0x7FF);
            v84 = v80 + *(float *)(v78 + 4 * v82 + 4);
            v85 = v80 + *(float *)(v78 + 4 * v82 + 8200);
            *((float *)&v126 + 1) = v84;
            v86 = v84 - v83;
            *(float *)&v134 = (float)((v64 & 0x7FF) + 1);
            *(float *)&v126 = v77 + v137;
            *(float *)&v128 = v77 + v137;
            v87 = (float)(v77 + v137) - (float)(*(float *)&v135 + v77);
            *((float *)&v128 + 1) = v85;
            v132 = v81 + *(float *)&v136;
            *(float *)&v127 = v81 + *(float *)&v136;
            v130 = v79;
            v129 = v81 + *(float *)&v134;
            v131 = v83;
            v88 = (float)(v87 * v86) - (float)((float)(v85 - v83) * v87);
            v89 = -(float)(v86 * (float)((float)(v81 + *(float *)&v134) - (float)(v81 + *(float *)&v136)));
            v90 = v87 * (float)((float)(v81 + *(float *)&v134) - (float)(v81 + *(float *)&v136));
            v91 = fsqrt((float)((float)(v90 * v90) + (float)(v89 * v89)) + (float)(v88 * v88));
            if ( v91 == 0.0 )
            {
              v123 = 0;
              v92 = 0.0;
              v93 = 0.0;
              LODWORD(v124) = 0;
              v94 = 0.0;
            }
            else
            {
              v92 = v89 * (float)(1.0 / v91);
              v93 = v90 * (float)(1.0 / v91);
              v94 = v88 * (float)(1.0 / v91);
              v123 = __PAIR64__(LODWORD(v93), LODWORD(v92));
              *(float *)&v124 = v94;
            }
            if ( sub_140077FA0(&v148, (float *)&v123, (float *)&v122, v39, v138, &v130, (float *)&v126, (float *)&v128) )
            {
              v95 = v122;
              if ( *(float *)&v122 < *(float *)(v40 + 24) )
              {
                v96 = v149;
                *(float *)v40 = v148;
                *(float *)(v40 + 8) = v150;
                *(float *)(v40 + 4) = v96;
                *(float *)(v40 + 12) = v92;
                *(float *)(v40 + 16) = v93;
                *(float *)(v40 + 20) = v94;
                *(_DWORD *)(v40 + 24) = v95;
              }
            }
            v97 = *(float *)&dword_140404A6C[v76 + 272034678];
            v98 = *(float *)&dword_140404A6C[v76 + 272034677];
            v99 = *(_QWORD *)&dword_140404A6C[v76 + 272034683];
            v100 = *(float *)&dword_140404A6C[v76 + 272034679];
            v101 = v97 + *(float *)(v99 + 4 * v82);
            v102 = v97 + *(float *)(v99 + 4 * v82 + 8196);
            v103 = *(float *)&dword_140404A6C[v76 + 272034678] + *(float *)(v99 + 4 * v82 + 8200);
            v104 = v100 + *(float *)&v134;
            v105 = v100 + *(float *)&v136;
            v131 = v101;
            *((float *)&v128 + 1) = v102;
            v106 = v102 - v101;
            *((float *)&v126 + 1) = v103;
            *(float *)&v127 = v104;
            v129 = v104;
            v107 = v104 - v105;
            *(float *)&v126 = v98 + v137;
            v132 = v105;
            v130 = *(float *)&v135 + v98;
            *(float *)&v128 = *(float *)&v135 + v98;
            v108 = (float)(v98 + v137) - (float)(*(float *)&v135 + v98);
            v109 = (float)(v106 * v107) - (float)((float)(v103 - v101) * v107);
            v110 = -(float)(v106 * v108);
            v111 = v108 * v107;
            v112 = fsqrt((float)((float)(v111 * v111) + (float)(v109 * v109)) + (float)(v110 * v110));
            if ( v112 == 0.0 )
            {
              v123 = 0;
              v113 = 0.0;
              v114 = 0.0;
              LODWORD(v124) = 0;
              v115 = 0.0;
            }
            else
            {
              v113 = v109 * (float)(1.0 / v112);
              v114 = v111 * (float)(1.0 / v112);
              v115 = v110 * (float)(1.0 / v112);
              v123 = __PAIR64__(LODWORD(v114), LODWORD(v113));
              *(float *)&v124 = v115;
            }
            v116 = sub_140077FA0(
                     &v148,
                     (float *)&v123,
                     (float *)&v122,
                     v39,
                     v138,
                     &v130,
                     (float *)&v126,
                     (float *)&v128);
            v52 = v142;
            v44 = v143;
            v60 = v154;
            v63 = v156;
            if ( v116 )
            {
              v117 = v122;
              v58 = v141;
              v50 = v140;
              if ( *(float *)&v122 < *(float *)(v40 + 24) )
              {
                v118 = v149;
                *(float *)v40 = v148;
                *(float *)(v40 + 8) = v150;
                *(float *)(v40 + 4) = v118;
                *(float *)(v40 + 12) = v113;
                *(float *)(v40 + 16) = v114;
                *(float *)(v40 + 20) = v115;
                *(_DWORD *)(v40 + 24) = v117;
              }
              v66 = *(float *)&v125;
              v46 = v144;
              goto LABEL_50;
            }
            v66 = *(float *)&v125;
            v46 = v144;
          }
        }
        v50 = v140;
        v58 = v141;
      }
LABEL_50:
      if ( *(float *)(v40 + 24) >= 1.0 && (v61 != v60 || v64 != v63) )
      {
        v119 = v66 >= v72;
        if ( v71 <= v70 || v119 )
        {
          if ( v69 > v68 )
          {
            v64 += v58;
            v71 = v71 + v52;
            v147 = v64;
            v70 = v70 - v52;
            v69 = v69 - v44;
            v68 = v68 + v44;
          }
          else
          {
            v146 += v50;
            v66 = v66 - v52;
            v72 = v72 + v52;
            v69 = v69 + v46;
            v68 = v68 - v46;
            *(float *)&v125 = v66;
          }
        }
        else
        {
          *(&v145 + v119) += *(&v139 + v119);
          v64 = v147;
          v61 = v145;
          v66 = v66 + v44;
          v72 = v72 - v44;
          v71 = v71 - v46;
          v70 = v70 + v46;
          *(float *)&v125 = v66;
        }
        if ( ++v67 <= (int)v133 )
          continue;
      }
      return MEMORY[0x1401F8B20]((unsigned __int64)&v121 ^ v157);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v121 ^ v157);
}

