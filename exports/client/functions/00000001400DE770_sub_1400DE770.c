/* Address: 0x1400de770 | Name: sub_1400DE770 | Size: 3088 bytes */
_BOOL8 __fastcall sub_1400DE770(_DWORD *a1, float *a2, float *a3, float *a4, float *a5, __int64 a6, float a7, float a8)
{
  float v10; // xmm7_4
  signed int v12; // r15d
  float v13; // xmm0_4
  int v14; // r8d
  __int64 v15; // r14
  __m128i v16; // xmm12
  __m128i v17; // xmm8
  float v18; // xmm11_4
  float v19; // xmm12_4
  float v20; // xmm8_4
  __int64 v21; // r13
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  float v26; // xmm0_4
  float v27; // xmm5_4
  float v28; // xmm10_4
  __int64 v29; // rax
  float v30; // xmm10_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  __int64 v34; // rax
  float v35; // xmm4_4
  float v36; // xmm14_4
  float v37; // xmm15_4
  __int64 v38; // rax
  float v39; // xmm9_4
  float v40; // xmm12_4
  float v41; // xmm8_4
  float v42; // xmm15_4
  float v43; // xmm9_4
  float v44; // xmm12_4
  float v45; // xmm8_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm3_4
  float v49; // xmm14_4
  float v50; // xmm5_4
  float v51; // xmm4_4
  float v52; // xmm0_4
  float v53; // xmm7_4
  float v54; // xmm10_4
  float v55; // xmm11_4
  float v56; // xmm2_4
  int v57; // xmm1_4
  __int64 v58; // rax
  float v59; // xmm9_4
  float v60; // xmm12_4
  float v61; // xmm3_4
  float v62; // xmm8_4
  float v63; // xmm9_4
  float v64; // xmm0_4
  float v65; // xmm10_4
  float v66; // xmm11_4
  float v67; // xmm7_4
  float v68; // xmm2_4
  int v69; // xmm1_4
  __int64 v70; // rax
  signed int v71; // r15d
  __int16 v72; // cx
  __int64 v73; // r13
  __int64 v74; // r12
  __int64 v75; // rax
  float v76; // xmm4_4
  float v77; // xmm5_4
  float v78; // xmm1_4
  float v79; // xmm13_4
  float v80; // xmm9_4
  float v81; // xmm12_4
  float v82; // xmm8_4
  float v83; // xmm4_4
  float v84; // xmm15_4
  float v85; // xmm14_4
  float v86; // xmm2_4
  float v87; // xmm0_4
  float v88; // xmm13_4
  float v89; // xmm9_4
  float v90; // xmm12_4
  float v91; // xmm3_4
  float v92; // xmm8_4
  float v93; // xmm1_4
  float v94; // xmm14_4
  float v95; // xmm15_4
  float v96; // xmm2_4
  float v97; // xmm4_4
  float v98; // xmm5_4
  float v99; // xmm4_4
  float v100; // xmm0_4
  float v101; // xmm7_4
  float v102; // xmm10_4
  float v103; // xmm11_4
  float v104; // xmm2_4
  int v105; // xmm1_4
  float v106; // xmm2_4
  int v107; // xmm1_4
  float v108; // xmm9_4
  float v109; // xmm13_4
  float v110; // xmm12_4
  float v111; // xmm3_4
  float v112; // xmm9_4
  float v113; // xmm8_4
  float v114; // xmm0_4
  float v115; // xmm10_4
  float v116; // xmm11_4
  float v117; // xmm7_4
  float v118; // xmm2_4
  int v119; // xmm1_4
  BOOL v120; // eax
  float v121; // xmm2_4
  int v122; // xmm1_4
  float v124; // [rsp+40h] [rbp-C0h] BYREF
  float v125; // [rsp+44h] [rbp-BCh]
  float v126; // [rsp+48h] [rbp-B8h]
  int v127; // [rsp+50h] [rbp-B0h] BYREF
  int v128; // [rsp+54h] [rbp-ACh]
  int v129; // [rsp+58h] [rbp-A8h]
  float v130; // [rsp+60h] [rbp-A0h]
  float v131; // [rsp+64h] [rbp-9Ch]
  float v132; // [rsp+68h] [rbp-98h]
  float v133; // [rsp+6Ch] [rbp-94h]
  float v134; // [rsp+70h] [rbp-90h]
  float v135; // [rsp+74h] [rbp-8Ch]
  float v136; // [rsp+78h] [rbp-88h] BYREF
  float v137; // [rsp+7Ch] [rbp-84h]
  float v138; // [rsp+80h] [rbp-80h]
  float v139; // [rsp+88h] [rbp-78h] BYREF
  float v140; // [rsp+8Ch] [rbp-74h]
  float v141; // [rsp+90h] [rbp-70h]
  float v142; // [rsp+98h] [rbp-68h] BYREF
  float v143; // [rsp+9Ch] [rbp-64h]
  float v144; // [rsp+A0h] [rbp-60h]
  float v145; // [rsp+A8h] [rbp-58h] BYREF
  float v146; // [rsp+ACh] [rbp-54h]
  float v147; // [rsp+B0h] [rbp-50h]
  float v148; // [rsp+B8h] [rbp-48h]
  __int64 v149; // [rsp+C0h] [rbp-40h]
  __int16 v150; // [rsp+1C0h] [rbp+C0h]
  float *v151; // [rsp+1C8h] [rbp+C8h]
  float v152; // [rsp+1D8h] [rbp+D8h]

  v151 = a4;
  v10 = a8;
  v12 = 0;
  v13 = 1.0;
  v14 = HIWORD(LODWORD(a7));
  v15 = 58LL * LOWORD(a7);
  v16 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 4));
  v17 = _mm_cvtsi32_si128(*(_DWORD *)(a6 + 8));
  v18 = (float)*(int *)a6;
  *a3 = 1.0;
  v150 = v14;
  v19 = _mm_cvtepi32_ps(v16).m128_f32[0];
  v20 = _mm_cvtepi32_ps(v17).m128_f32[0];
  v132 = v18;
  v152 = v19;
  v131 = v20;
  if ( (int)dword_140404A6C[v15 + 20074623] > 0 )
  {
    v21 = 0;
    v22 = 0;
    v149 = 0;
    do
    {
      v23 = *(_QWORD *)&dword_140404A6C[v15 + 20074615];
      v24 = *(_QWORD *)&dword_140404A6C[v15 + 20074631];
      v25 = 3 * *(_DWORD *)(v22 + v24);
      v26 = v18 + *(float *)(v23 + 4 * v25);
      v27 = v19 + *(float *)(v23 + 4 * v25 + 4);
      v28 = v20 + *(float *)(v23 + 4 * v25 + 8);
      v29 = 3 * *(_DWORD *)(v22 + v24 + 4);
      v30 = v28 * v10;
      v148 = v26 * v10;
      v31 = v18 + *(float *)(v23 + 4 * v29);
      v32 = v19 + *(float *)(v23 + 4 * v29 + 4);
      v33 = v20 + *(float *)(v23 + 4 * v29 + 8);
      LODWORD(v29) = *(_DWORD *)(v22 + v24 + 8);
      v139 = v26 * v10;
      v34 = 3 * (int)v29;
      v133 = v27 * v10;
      v35 = v20 + *(float *)(v23 + 4 * v34 + 8);
      v36 = v18 + *(float *)(v23 + 4 * v34);
      v37 = v19 + *(float *)(v23 + 4 * v34 + 4);
      LODWORD(v34) = *(_DWORD *)(v22 + v24 + 12);
      v140 = v27 * v10;
      v38 = 3 * (int)v34;
      v138 = v35 * v10;
      v39 = v18 + *(float *)(v23 + 4 * v38);
      v40 = v19 + *(float *)(v23 + 4 * v38 + 4);
      v41 = v20 + *(float *)(v23 + 4 * v38 + 8);
      v137 = v37 * v10;
      v42 = (float)(v37 * v10) - (float)(v27 * v10);
      v135 = (float)(v35 * v10) - v30;
      v43 = v39 * v10;
      v44 = v40 * v10;
      v45 = v41 * v10;
      v143 = v32 * v10;
      v46 = (float)(v32 * v10) - (float)(v27 * v10);
      v144 = v33 * v10;
      v47 = (float)(v33 * v10) - v30;
      v142 = v31 * v10;
      v48 = (float)(v31 * v10) - (float)(v26 * v10);
      v136 = v36 * v10;
      v49 = (float)(v36 * v10) - (float)(v26 * v10);
      v134 = v30;
      v141 = v30;
      v50 = (float)(v42 * v47) - (float)(v135 * v46);
      v145 = v43;
      v146 = v44;
      v147 = v45;
      v51 = (float)(v135 * v48) - (float)(v49 * v47);
      v130 = (float)(v49 * v46) - (float)(v42 * v48);
      v52 = fsqrt((float)((float)(v51 * v51) + (float)(v50 * v50)) + (float)(v130 * v130));
      if ( v52 == 0.0 )
      {
        v124 = 0.0;
        v54 = 0.0;
        v125 = 0.0;
        v55 = 0.0;
        v126 = 0.0;
        v53 = 0.0;
      }
      else
      {
        v53 = (float)(1.0 / v52) * v130;
        v54 = (float)(1.0 / v52) * v50;
        v55 = (float)(1.0 / v52) * v51;
        v124 = v54;
        v126 = v53;
        v125 = v55;
      }
      if ( sub_140077FA0((float *)&v127, &v124, &a7, a4, a5, &v139, &v142, &v136) )
      {
        v56 = a7;
        if ( a7 < *a3 )
        {
          v57 = v128;
          *a1 = v127;
          a1[2] = v129;
          a1[1] = v57;
          *a2 = v54;
          a2[1] = v55;
          a2[2] = v53;
          *a3 = v56;
          v58 = *(_QWORD *)&dword_140404A6C[v15 + 20074633];
          dword_140404A6C[73007010] = v12;
          dword_140404A6C[73007008] = *(_DWORD *)(v58 + v21);
        }
      }
      v59 = v43 - v148;
      v60 = v44 - v133;
      v61 = (float)(v60 * v135) - (float)((float)(v45 - v134) * v42);
      v62 = (float)((float)(v45 - v134) * v49) - (float)(v59 * v135);
      v63 = (float)(v59 * v42) - (float)(v60 * v49);
      v64 = fsqrt((float)((float)(v62 * v62) + (float)(v61 * v61)) + (float)(v63 * v63));
      if ( v64 == 0.0 )
      {
        v124 = 0.0;
        v65 = 0.0;
        v125 = 0.0;
        v66 = 0.0;
        v126 = 0.0;
        v67 = 0.0;
      }
      else
      {
        v65 = (float)(1.0 / v64) * v61;
        v66 = (float)(1.0 / v64) * v62;
        v67 = (float)(1.0 / v64) * v63;
        v124 = v65;
        v125 = v66;
        v126 = v67;
      }
      if ( sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v136, &v145) )
      {
        v68 = a7;
        if ( a7 < *a3 )
        {
          v69 = v128;
          *a1 = v127;
          a1[2] = v129;
          a1[1] = v69;
          *a2 = v65;
          a2[1] = v66;
          a2[2] = v67;
          *a3 = v68;
          v70 = *(_QWORD *)&dword_140404A6C[v15 + 20074633];
          dword_140404A6C[73007010] = v12;
          dword_140404A6C[73007008] = *(_DWORD *)(v70 + v21);
        }
      }
      v10 = a8;
      v22 = v149 + 16;
      v18 = v132;
      ++v12;
      v19 = v152;
      v21 += 4;
      v20 = v131;
      a4 = v151;
      v149 += 16;
    }
    while ( v12 < (int)dword_140404A6C[v15 + 20074623] );
    v13 = *a3;
    LOWORD(v14) = v150;
  }
  v71 = 0;
  if ( (int)dword_140404A6C[v15 + 20074651] > 0 )
  {
    v72 = 1;
    v73 = 0;
    LODWORD(v130) = 1;
    v74 = 0;
    do
    {
      if ( ((unsigned __int16)v72 & (unsigned __int16)v14 & 0x3FF) == 0 )
      {
        v75 = *(_QWORD *)&dword_140404A6C[v15 + 20074653];
        v76 = v19;
        v77 = v20 + *(float *)(v75 + v74 + 8);
        v78 = v152 + *(float *)(v75 + v74 + 40);
        v79 = v19 + *(float *)(v75 + v74 + 16);
        v80 = v19 + *(float *)(v75 + v74 + 28);
        v81 = v131 + *(float *)(v75 + v74 + 32);
        v82 = v20 + *(float *)(v75 + v74 + 20);
        v83 = (float)(v76 + *(float *)(v75 + v74 + 4)) * v10;
        v84 = (float)(v18 + *(float *)(v75 + v74 + 24)) * v10;
        v85 = v18 + *(float *)(v75 + v74 + 12);
        v86 = (float)(v18 + *(float *)(v75 + v74)) * v10;
        v145 = (float)(v18 + *(float *)(v75 + v74 + 36)) * v10;
        v87 = v131 + *(float *)(v75 + v74 + 44);
        v139 = v86;
        v88 = v79 * v10;
        v147 = v87 * v10;
        v89 = v80 * v10;
        v90 = v81 * v10;
        v91 = v88 - v83;
        v92 = v82 * v10;
        v134 = v83;
        v140 = v83;
        v133 = v77 * v10;
        v141 = v77 * v10;
        v146 = v78 * v10;
        v93 = v92 - (float)(v77 * v10);
        v142 = v85 * v10;
        v94 = (float)(v85 * v10) - v86;
        v136 = v84;
        v95 = v84 - v86;
        v143 = v88;
        v144 = v92;
        v96 = v89 - v83;
        v137 = v89;
        v138 = v90;
        v97 = v90 - (float)(v77 * v10);
        v98 = (float)(v96 * v93) - (float)(v97 * v91);
        v135 = (float)(v95 * v91) - (float)(v96 * v94);
        v99 = (float)(v97 * v94) - (float)(v95 * v93);
        v100 = fsqrt((float)((float)(v99 * v99) + (float)(v98 * v98)) + (float)(v135 * v135));
        if ( v100 == 0.0 )
        {
          v124 = 0.0;
          v102 = 0.0;
          v125 = 0.0;
          v103 = 0.0;
          v126 = 0.0;
          v101 = 0.0;
        }
        else
        {
          v101 = (float)(1.0 / v100) * v135;
          v102 = (float)(1.0 / v100) * v98;
          v103 = (float)(1.0 / v100) * v99;
          v124 = v102;
          v126 = v101;
          v125 = v103;
        }
        if ( sub_140077FA0((float *)&v127, &v124, &a7, a4, a5, &v139, &v142, &v136) )
        {
          v104 = a7;
          if ( a7 < *a3 )
          {
            v105 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v105;
            *a2 = v102;
            a2[1] = v103;
            a2[2] = v101;
            *a3 = v104;
            dword_140404A6C[73007010] = v71 | 0x10000;
            dword_140404A6C[73007008] = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
        if ( sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v136, &v145) )
        {
          v106 = a7;
          if ( a7 < *a3 )
          {
            v107 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v107;
            *a2 = v102;
            a2[1] = v103;
            a2[2] = v101;
            *a3 = v106;
            dword_140404A6C[73007010] = v71 | 0x10000;
            dword_140404A6C[73007008] = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
        v108 = v89 - v134;
        v109 = v88 - v134;
        v110 = v90 - v133;
        v111 = (float)(v109 * v110) - (float)((float)(v92 - v133) * v108);
        v112 = (float)(v108 * v94) - (float)(v109 * v95);
        v113 = (float)((float)(v92 - v133) * v95) - (float)(v110 * v94);
        v114 = fsqrt((float)((float)(v113 * v113) + (float)(v111 * v111)) + (float)(v112 * v112));
        if ( v114 == 0.0 )
        {
          v124 = 0.0;
          v115 = 0.0;
          v125 = 0.0;
          v116 = 0.0;
          v126 = 0.0;
          v117 = 0.0;
        }
        else
        {
          v115 = (float)(1.0 / v114) * v111;
          v116 = (float)(1.0 / v114) * v113;
          v117 = (float)(1.0 / v114) * v112;
          v124 = v115;
          v125 = v116;
          v126 = v117;
        }
        if ( sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v136, &v142) )
        {
          v118 = a7;
          if ( a7 < *a3 )
          {
            v119 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v119;
            *a2 = v115;
            a2[1] = v116;
            a2[2] = v117;
            *a3 = v118;
            dword_140404A6C[73007010] = v71 | 0x10000;
            dword_140404A6C[73007008] = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
        v120 = sub_140077FA0((float *)&v127, &v124, &a7, v151, a5, &v139, &v145, &v136);
        LOWORD(v14) = v150;
        if ( v120 )
        {
          v121 = a7;
          if ( a7 < *a3 )
          {
            v122 = v128;
            *a1 = v127;
            a1[2] = v129;
            a1[1] = v122;
            *a2 = v115;
            a2[1] = v116;
            a2[2] = v117;
            *a3 = v121;
            dword_140404A6C[73007010] = v71 | 0x10000;
            dword_140404A6C[73007008] = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v15 + 20074633] + v73);
          }
        }
      }
      ++v71;
      v10 = a8;
      v74 += 48;
      v18 = v132;
      v73 += 4;
      v19 = v152;
      v20 = v131;
      a4 = v151;
      v130 = COERCE_FLOAT(__ROL4__(LODWORD(v130), 1));
      v72 = LOWORD(v130);
    }
    while ( v71 < (int)dword_140404A6C[v15 + 20074651] );
    v13 = *a3;
  }
  return v13 < 1.0;
}

