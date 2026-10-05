/* Address: 0x14003e4b0 | Name: sub_14003E4B0 | Size: 2165 bytes */
_BOOL8 __fastcall sub_14003E4B0(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        int a4,
        __int64 a5,
        int a6,
        int *a7,
        unsigned __int16 a8,
        float a9)
{
  __int128 v9; // xmm12
  float v10; // xmm0_4
  signed int v14; // r15d
  float v15; // xmm14_4
  __int64 v16; // r14
  float v17; // xmm8_4
  float v18; // xmm15_4
  float v19; // xmm13_4
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  __int64 v28; // rax
  float v29; // xmm5_4
  float v30; // xmm2_4
  float v31; // xmm3_4
  float v32; // xmm6_4
  __int64 v33; // rax
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm1_4
  float v37; // xmm7_4
  float v38; // xmm8_4
  float v39; // xmm6_4
  float v40; // xmm1_4
  float v41; // xmm7_4
  float v42; // xmm8_4
  float v43; // xmm4_4
  float v44; // xmm7_4
  float v45; // xmm8_4
  float v46; // xmm3_4
  float v47; // xmm2_4
  int v48; // xmm1_4
  int v49; // xmm0_4
  int v50; // xmm1_4
  int v51; // xmm0_4
  signed int v52; // r12d
  __int64 v53; // r15
  __int64 v54; // r13
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rax
  float v58; // xmm0_4
  float v59; // xmm4_4
  float v60; // xmm5_4
  __int64 v61; // rax
  float v62; // xmm3_4
  float v63; // xmm2_4
  float v64; // xmm1_4
  __int64 v65; // rax
  float v66; // xmm13_4
  float v67; // xmm7_4
  float v68; // xmm12_4
  __int64 v69; // rax
  float v70; // xmm6_4
  float v71; // xmm8_4
  float v72; // xmm9_4
  float v73; // xmm12_4
  float v74; // xmm13_4
  float v75; // xmm2_4
  float v76; // xmm1_4
  float v77; // xmm3_4
  float v78; // xmm7_4
  float v79; // xmm6_4
  float v80; // xmm8_4
  float v81; // xmm9_4
  float v82; // xmm4_4
  float v83; // xmm5_4
  float v84; // xmm15_4
  float v85; // xmm0_4
  float v86; // xmm2_4
  int v87; // xmm1_4
  int v88; // xmm0_4
  int v89; // xmm1_4
  int v90; // xmm0_4
  float v91; // xmm6_4
  float v92; // xmm8_4
  float v93; // xmm9_4
  float v94; // xmm3_4
  float v95; // xmm4_4
  float v96; // xmm6_4
  float v97; // xmm0_4
  float v98; // xmm2_4
  int v99; // xmm1_4
  int v100; // xmm0_4
  int v101; // xmm1_4
  int v102; // xmm0_4
  int v104; // [rsp+48h] [rbp-B8h]
  int v105; // [rsp+48h] [rbp-B8h]
  __int64 v106; // [rsp+50h] [rbp-B0h] BYREF
  float v107; // [rsp+58h] [rbp-A8h]
  int v108; // [rsp+60h] [rbp-A0h] BYREF
  int v109; // [rsp+64h] [rbp-9Ch]
  int v110; // [rsp+68h] [rbp-98h]
  float v111; // [rsp+70h] [rbp-90h] BYREF
  float v112; // [rsp+74h] [rbp-8Ch]
  float v113; // [rsp+78h] [rbp-88h]
  float v114; // [rsp+80h] [rbp-80h] BYREF
  float v115; // [rsp+84h] [rbp-7Ch]
  float v116; // [rsp+88h] [rbp-78h]
  float v117; // [rsp+90h] [rbp-70h] BYREF
  float v118; // [rsp+94h] [rbp-6Ch]
  float v119; // [rsp+98h] [rbp-68h]
  float v120; // [rsp+A0h] [rbp-60h]
  float v121; // [rsp+A4h] [rbp-5Ch]
  float v122; // [rsp+A8h] [rbp-58h]
  _DWORD v123[2]; // [rsp+B0h] [rbp-50h] BYREF
  float v124; // [rsp+B8h] [rbp-48h]
  int v125; // [rsp+C0h] [rbp-40h]
  int v126; // [rsp+C8h] [rbp-38h]
  int v127; // [rsp+D0h] [rbp-30h]
  __int64 v128; // [rsp+D8h] [rbp-28h]
  __int64 v129; // [rsp+E0h] [rbp-20h]
  __int64 v130; // [rsp+E8h] [rbp-18h]
  __int128 v131; // [rsp+F0h] [rbp-10h]
  __int64 v132; // [rsp+100h] [rbp+0h]
  __int64 v133; // [rsp+108h] [rbp+8h]
  __int64 v134; // [rsp+110h] [rbp+10h]
  __int64 v135; // [rsp+118h] [rbp+18h]
  __int64 v136; // [rsp+120h] [rbp+20h]
  __int64 v137; // [rsp+128h] [rbp+28h]
  __int64 v138; // [rsp+130h] [rbp+30h]
  float v139; // [rsp+1B0h] [rbp+B0h]
  int v140; // [rsp+1B8h] [rbp+B8h]
  float v141; // [rsp+1D0h] [rbp+D0h]
  float v142; // [rsp+1D8h] [rbp+D8h]

  v140 = a4;
  v10 = 65536.0;
  v14 = 0;
  v15 = a9;
  *a3 = 65536.0;
  v16 = 58LL * a8;
  v17 = (float)*a7;
  v18 = (float)a7[1];
  v19 = (float)a7[2];
  v141 = v17;
  v122 = v18;
  v139 = v19;
  if ( (int)dword_140404A6C[v16 + 20074639] > 0 )
  {
    v20 = 0;
    v21 = 0;
    do
    {
      v22 = *(_QWORD *)&dword_140404A6C[v16 + 20074615];
      v23 = *(_QWORD *)&dword_140404A6C[v16 + 20074641];
      v24 = 3 * *(_DWORD *)(v23 + v21);
      v25 = v19 + *(float *)(v22 + 4 * v24 + 8);
      v26 = v18 + *(float *)(v22 + 4 * v24 + 4);
      v27 = v17 + *(float *)(v22 + 4 * v24);
      v28 = 3 * *(_DWORD *)(v23 + v21 + 4);
      v116 = v25 * v15;
      v29 = v27 * v15;
      v30 = v19 + *(float *)(v22 + 4 * v28 + 8);
      v31 = v18 + *(float *)(v22 + 4 * v28 + 4);
      v32 = v17 + *(float *)(v22 + 4 * v28);
      LODWORD(v28) = *(_DWORD *)(v23 + v21 + 8);
      v115 = v26 * v15;
      v33 = 3 * (int)v28;
      v119 = v30 * v15;
      v34 = (float)(v30 * v15) - (float)(v25 * v15);
      v118 = v31 * v15;
      v35 = (float)(v31 * v15) - (float)(v26 * v15);
      v36 = v18 + *(float *)(v22 + 4 * v33 + 4);
      v37 = v19 + *(float *)(v22 + 4 * v33 + 8);
      v38 = v17 + *(float *)(v22 + 4 * v33);
      v117 = v32 * v15;
      v39 = (float)(v32 * v15) - v29;
      v114 = v29;
      v112 = v36 * v15;
      v40 = (float)(v36 * v15) - (float)(v26 * v15);
      v113 = v37 * v15;
      v41 = (float)(v37 * v15) - (float)(v25 * v15);
      v111 = v38 * v15;
      v42 = (float)(v38 * v15) - v29;
      v43 = (float)(v40 * v34) - (float)(v41 * v35);
      v44 = (float)(v41 * v39) - (float)(v42 * v34);
      v45 = (float)(v42 * v35) - (float)(v40 * v39);
      v46 = fsqrt((float)((float)(v44 * v44) + (float)(v43 * v43)) + (float)(v45 * v45));
      if ( v46 == 0.0 )
      {
        v106 = 0;
        v107 = 0.0;
      }
      else
      {
        *(float *)&v106 = v43 * (float)(1.0 / v46);
        *((float *)&v106 + 1) = v44 * (float)(1.0 / v46);
        v107 = v45 * (float)(1.0 / v46);
      }
      if ( (unsigned int)sub_14003F0B0(
                           (unsigned int)&v108,
                           (unsigned int)&v106,
                           (unsigned int)&a9,
                           a4,
                           a5,
                           a6,
                           (unsigned int)&v114,
                           (unsigned int)&v117,
                           (unsigned int)&v111,
                           v104,
                           v106,
                           LODWORD(v107),
                           v108,
                           v110,
                           LODWORD(v111),
                           LODWORD(v113),
                           LODWORD(v114),
                           LODWORD(v116),
                           LODWORD(v117),
                           LODWORD(v119),
                           LODWORD(v120),
                           LODWORD(v122),
                           v123[0],
                           LODWORD(v124),
                           v125,
                           v126,
                           v127,
                           v128,
                           v129,
                           v130,
                           v131,
                           *((__int64 *)&v131 + 1),
                           v132,
                           v133,
                           v134,
                           v135,
                           v136,
                           v137,
                           v138) )
      {
        v47 = a9;
        if ( a9 < *a3 )
        {
          v48 = v109;
          *a1 = v108;
          v49 = v110;
          a1[1] = v48;
          v50 = v106;
          a1[2] = v49;
          v51 = HIDWORD(v106);
          *(_DWORD *)a2 = v50;
          *(float *)(a2 + 8) = v107;
          *(_DWORD *)(a2 + 4) = v51;
          *a3 = v47;
          dword_140404A6C[73007008] = *(_DWORD *)(v20 + *(_QWORD *)&dword_140404A6C[v16 + 20074643]);
        }
      }
      v17 = v141;
      a4 = v140;
      ++v14;
      v21 += 12;
      v20 += 4;
    }
    while ( v14 < (int)dword_140404A6C[v16 + 20074639] );
    v10 = *a3;
  }
  v52 = 0;
  if ( (int)dword_140404A6C[v16 + 20074623] > 0 )
  {
    v131 = v9;
    v53 = 0;
    v54 = 0;
    do
    {
      v55 = *(_QWORD *)&dword_140404A6C[v16 + 20074615];
      v56 = *(_QWORD *)&dword_140404A6C[v16 + 20074631];
      v57 = 3 * *(_DWORD *)(v56 + v54);
      v58 = v17 + *(float *)(v55 + 4 * v57);
      v59 = v18 + *(float *)(v55 + 4 * v57 + 4);
      v60 = v19 + *(float *)(v55 + 4 * v57 + 8);
      v61 = 3 * *(_DWORD *)(v56 + v54 + 4);
      v142 = v58 * v15;
      v62 = v17 + *(float *)(v55 + 4 * v61);
      v63 = v18 + *(float *)(v55 + 4 * v61 + 4);
      v64 = v19 + *(float *)(v55 + 4 * v61 + 8);
      LODWORD(v61) = *(_DWORD *)(v56 + v54 + 8);
      v114 = v58 * v15;
      v120 = v59 * v15;
      v115 = v59 * v15;
      v121 = v60 * v15;
      v65 = 3 * (int)v61;
      v116 = v60 * v15;
      v66 = v19 + *(float *)(v55 + 4 * v65 + 8);
      v67 = v17 + *(float *)(v55 + 4 * v65);
      v68 = v18 + *(float *)(v55 + 4 * v65 + 4);
      v69 = 3 * *(_DWORD *)(v56 + v54 + 12);
      v70 = v17 + *(float *)(v55 + 4 * v69);
      v71 = v18 + *(float *)(v55 + 4 * v69 + 4);
      v72 = v139 + *(float *)(v55 + 4 * v69 + 8);
      v112 = v68 * v15;
      v73 = (float)(v68 * v15) - (float)(v59 * v15);
      v113 = v66 * v15;
      v74 = (float)(v66 * v15) - (float)(v60 * v15);
      v118 = v63 * v15;
      v75 = (float)(v63 * v15) - (float)(v59 * v15);
      v119 = v64 * v15;
      v76 = (float)(v64 * v15) - (float)(v60 * v15);
      v117 = v62 * v15;
      v77 = (float)(v62 * v15) - (float)(v58 * v15);
      v111 = v67 * v15;
      v78 = (float)(v67 * v15) - (float)(v58 * v15);
      v79 = v70 * v15;
      v80 = v71 * v15;
      v81 = v72 * v15;
      v82 = (float)(v73 * v76) - (float)(v74 * v75);
      *(float *)v123 = v79;
      *(float *)&v123[1] = v80;
      v124 = v81;
      v83 = (float)(v74 * v77) - (float)(v78 * v76);
      v84 = (float)(v78 * v75) - (float)(v73 * v77);
      v85 = fsqrt((float)((float)(v83 * v83) + (float)(v82 * v82)) + (float)(v84 * v84));
      if ( v85 == 0.0 )
      {
        v106 = 0;
        v107 = 0.0;
      }
      else
      {
        *(float *)&v106 = (float)(1.0 / v85) * v82;
        *((float *)&v106 + 1) = (float)(1.0 / v85) * v83;
        v107 = (float)(1.0 / v85) * v84;
      }
      if ( (unsigned int)sub_14003F0B0(
                           (unsigned int)&v108,
                           (unsigned int)&v106,
                           (unsigned int)&a9,
                           a4,
                           a5,
                           a6,
                           (unsigned int)&v114,
                           (unsigned int)&v117,
                           (unsigned int)&v111,
                           v104,
                           v106,
                           LODWORD(v107),
                           v108,
                           v110,
                           LODWORD(v111),
                           LODWORD(v113),
                           LODWORD(v114),
                           LODWORD(v116),
                           LODWORD(v117),
                           LODWORD(v119),
                           LODWORD(v120),
                           LODWORD(v122),
                           v123[0],
                           LODWORD(v124),
                           v125,
                           v126,
                           v127,
                           v128,
                           v129,
                           v130,
                           v131,
                           *((__int64 *)&v131 + 1),
                           v132,
                           v133,
                           v134,
                           v135,
                           v136,
                           v137,
                           v138) )
      {
        v86 = a9;
        if ( a9 < *a3 )
        {
          v87 = v109;
          *a1 = v108;
          v88 = v110;
          a1[1] = v87;
          v89 = v106;
          a1[2] = v88;
          v90 = HIDWORD(v106);
          *(_DWORD *)a2 = v89;
          *(float *)(a2 + 8) = v107;
          *(_DWORD *)(a2 + 4) = v90;
          *a3 = v86;
          dword_140404A6C[73007008] = *(_DWORD *)(v53 + *(_QWORD *)&dword_140404A6C[v16 + 20074633]);
        }
      }
      v91 = v79 - v142;
      v92 = v80 - v120;
      v93 = v81 - v121;
      v94 = (float)(v92 * v74) - (float)(v93 * v73);
      v95 = (float)(v78 * v93) - (float)(v91 * v74);
      v96 = (float)(v91 * v73) - (float)(v78 * v92);
      v97 = fsqrt((float)((float)(v95 * v95) + (float)(v94 * v94)) + (float)(v96 * v96));
      if ( v97 == 0.0 )
      {
        v106 = 0;
        v107 = 0.0;
      }
      else
      {
        *(float *)&v106 = (float)(1.0 / v97) * v94;
        *((float *)&v106 + 1) = (float)(1.0 / v97) * v95;
        v107 = (float)(1.0 / v97) * v96;
      }
      if ( (unsigned int)sub_14003F0B0(
                           (unsigned int)&v108,
                           (unsigned int)&v106,
                           (unsigned int)&a9,
                           v140,
                           a5,
                           a6,
                           (unsigned int)&v114,
                           (unsigned int)&v111,
                           (unsigned int)v123,
                           v105,
                           v106,
                           LODWORD(v107),
                           v108,
                           v110,
                           LODWORD(v111),
                           LODWORD(v113),
                           LODWORD(v114),
                           LODWORD(v116),
                           LODWORD(v117),
                           LODWORD(v119),
                           LODWORD(v120),
                           LODWORD(v122),
                           v123[0],
                           LODWORD(v124),
                           v125,
                           v126,
                           v127,
                           v128,
                           v129,
                           v130,
                           v131,
                           *((__int64 *)&v131 + 1),
                           v132,
                           v133,
                           v134,
                           v135,
                           v136,
                           v137,
                           v138) )
      {
        v98 = a9;
        if ( a9 < *a3 )
        {
          v99 = v109;
          *a1 = v108;
          v100 = v110;
          a1[1] = v99;
          v101 = v106;
          a1[2] = v100;
          v102 = HIDWORD(v106);
          *(_DWORD *)a2 = v101;
          *(float *)(a2 + 8) = v107;
          *(_DWORD *)(a2 + 4) = v102;
          *a3 = v98;
          dword_140404A6C[73007008] = *(_DWORD *)(v53 + *(_QWORD *)&dword_140404A6C[v16 + 20074633]);
        }
      }
      v17 = v141;
      v18 = v122;
      ++v52;
      v19 = v139;
      v54 += 16;
      a4 = v140;
      v53 += 4;
    }
    while ( v52 < (int)dword_140404A6C[v16 + 20074623] );
    v10 = *a3;
  }
  return v10 < 65536.0;
}

