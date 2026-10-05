/* Address: 0x14002ac80 | Name: sub_14002AC80 | Size: 2165 bytes */
_BOOL8 __fastcall sub_14002AC80(
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
  float v9; // xmm0_4
  int v13; // r15d
  float v14; // xmm14_4
  __int64 v15; // r14
  float v16; // xmm8_4
  float v17; // xmm15_4
  float v18; // xmm13_4
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  __int64 v27; // rax
  float v28; // xmm5_4
  float v29; // xmm2_4
  float v30; // xmm3_4
  float v31; // xmm6_4
  __int64 v32; // rax
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm7_4
  float v37; // xmm8_4
  float v38; // xmm6_4
  float v39; // xmm1_4
  float v40; // xmm7_4
  float v41; // xmm8_4
  float v42; // xmm4_4
  float v43; // xmm7_4
  float v44; // xmm8_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  int v47; // xmm1_4
  int v48; // xmm0_4
  int v49; // xmm1_4
  int v50; // xmm0_4
  int v51; // r12d
  __int64 v52; // r15
  __int64 v53; // r13
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rax
  float v57; // xmm0_4
  float v58; // xmm4_4
  float v59; // xmm5_4
  __int64 v60; // rax
  float v61; // xmm3_4
  float v62; // xmm2_4
  float v63; // xmm1_4
  __int64 v64; // rax
  float v65; // xmm13_4
  float v66; // xmm7_4
  float v67; // xmm12_4
  __int64 v68; // rax
  float v69; // xmm6_4
  float v70; // xmm8_4
  float v71; // xmm9_4
  float v72; // xmm12_4
  float v73; // xmm13_4
  float v74; // xmm2_4
  float v75; // xmm1_4
  float v76; // xmm3_4
  float v77; // xmm7_4
  float v78; // xmm6_4
  float v79; // xmm8_4
  float v80; // xmm9_4
  float v81; // xmm4_4
  float v82; // xmm5_4
  float v83; // xmm15_4
  float v84; // xmm0_4
  float v85; // xmm2_4
  int v86; // xmm1_4
  int v87; // xmm0_4
  int v88; // xmm1_4
  int v89; // xmm0_4
  float v90; // xmm6_4
  float v91; // xmm8_4
  float v92; // xmm9_4
  float v93; // xmm3_4
  float v94; // xmm4_4
  float v95; // xmm6_4
  float v96; // xmm0_4
  float v97; // xmm2_4
  int v98; // xmm1_4
  int v99; // xmm0_4
  int v100; // xmm1_4
  int v101; // xmm0_4
  __int64 v103; // [rsp+50h] [rbp-B0h] BYREF
  float v104; // [rsp+58h] [rbp-A8h]
  int v105; // [rsp+60h] [rbp-A0h] BYREF
  int v106; // [rsp+64h] [rbp-9Ch]
  int v107; // [rsp+68h] [rbp-98h]
  float v108; // [rsp+70h] [rbp-90h] BYREF
  float v109; // [rsp+74h] [rbp-8Ch]
  float v110; // [rsp+78h] [rbp-88h]
  float v111; // [rsp+80h] [rbp-80h] BYREF
  float v112; // [rsp+84h] [rbp-7Ch]
  float v113; // [rsp+88h] [rbp-78h]
  float v114; // [rsp+90h] [rbp-70h] BYREF
  float v115; // [rsp+94h] [rbp-6Ch]
  float v116; // [rsp+98h] [rbp-68h]
  float v117; // [rsp+A0h] [rbp-60h]
  float v118; // [rsp+A4h] [rbp-5Ch]
  float v119; // [rsp+A8h] [rbp-58h]
  _DWORD v120[16]; // [rsp+B0h] [rbp-50h] BYREF
  float v121; // [rsp+1B0h] [rbp+B0h]
  int v122; // [rsp+1B8h] [rbp+B8h]
  float v123; // [rsp+1D0h] [rbp+D0h]
  float v124; // [rsp+1D8h] [rbp+D8h]

  v122 = a4;
  v9 = 65536.0;
  v13 = 0;
  v14 = a9;
  *a3 = 65536.0;
  v15 = 232LL * a8;
  v16 = (float)*a7;
  v17 = (float)a7[1];
  v18 = (float)a7[2];
  v123 = v16;
  v119 = v17;
  v121 = v18;
  if ( *(int *)&byte_15AE31760[v15 + 168] > 0 )
  {
    v19 = 0;
    v20 = 0;
    do
    {
      v21 = *(_QWORD *)&byte_15AE31760[v15 + 72];
      v22 = *(_QWORD *)&byte_15AE31760[v15 + 176];
      v23 = 3 * *(_DWORD *)(v22 + v20);
      v24 = v18 + *(float *)(v21 + 4 * v23 + 8);
      v25 = v17 + *(float *)(v21 + 4 * v23 + 4);
      v26 = v16 + *(float *)(v21 + 4 * v23);
      v27 = 3 * *(_DWORD *)(v22 + v20 + 4);
      v113 = v24 * v14;
      v28 = v26 * v14;
      v29 = v18 + *(float *)(v21 + 4 * v27 + 8);
      v30 = v17 + *(float *)(v21 + 4 * v27 + 4);
      v31 = v16 + *(float *)(v21 + 4 * v27);
      LODWORD(v27) = *(_DWORD *)(v22 + v20 + 8);
      v112 = v25 * v14;
      v32 = 3 * (int)v27;
      v116 = v29 * v14;
      v33 = (float)(v29 * v14) - (float)(v24 * v14);
      v115 = v30 * v14;
      v34 = (float)(v30 * v14) - (float)(v25 * v14);
      v35 = v17 + *(float *)(v21 + 4 * v32 + 4);
      v36 = v18 + *(float *)(v21 + 4 * v32 + 8);
      v37 = v16 + *(float *)(v21 + 4 * v32);
      v114 = v31 * v14;
      v38 = (float)(v31 * v14) - v28;
      v111 = v28;
      v109 = v35 * v14;
      v39 = (float)(v35 * v14) - (float)(v25 * v14);
      v110 = v36 * v14;
      v40 = (float)(v36 * v14) - (float)(v24 * v14);
      v108 = v37 * v14;
      v41 = (float)(v37 * v14) - v28;
      v42 = (float)(v39 * v33) - (float)(v40 * v34);
      v43 = (float)(v40 * v38) - (float)(v41 * v33);
      v44 = (float)(v41 * v34) - (float)(v39 * v38);
      v45 = fsqrt((float)((float)(v43 * v43) + (float)(v42 * v42)) + (float)(v44 * v44));
      if ( v45 == 0.0 )
      {
        v103 = 0;
        v104 = 0.0;
      }
      else
      {
        *(float *)&v103 = v42 * (float)(1.0 / v45);
        *((float *)&v103 + 1) = v43 * (float)(1.0 / v45);
        v104 = v44 * (float)(1.0 / v45);
      }
      if ( (unsigned int)sub_14002B880(
                           (unsigned int)&v105,
                           (unsigned int)&v103,
                           (unsigned int)&a9,
                           a4,
                           a5,
                           a6,
                           (__int64)&v111,
                           (__int64)&v114,
                           (__int64)&v108) )
      {
        v46 = a9;
        if ( a9 < *a3 )
        {
          v47 = v106;
          *a1 = v105;
          v48 = v107;
          a1[1] = v47;
          v49 = v103;
          a1[2] = v48;
          v50 = HIDWORD(v103);
          *(_DWORD *)a2 = v49;
          *(float *)(a2 + 8) = v104;
          *(_DWORD *)(a2 + 4) = v50;
          *a3 = v46;
          dword_16E18CAAC = *(_DWORD *)(v19 + *(_QWORD *)&byte_15AE31760[v15 + 184]);
        }
      }
      v16 = v123;
      a4 = v122;
      ++v13;
      v20 += 12;
      v19 += 4;
    }
    while ( v13 < *(_DWORD *)&byte_15AE31760[v15 + 168] );
    v9 = *a3;
  }
  v51 = 0;
  if ( *(int *)&byte_15AE31760[v15 + 104] > 0 )
  {
    v52 = 0;
    v53 = 0;
    do
    {
      v54 = *(_QWORD *)&byte_15AE31760[v15 + 72];
      v55 = *(_QWORD *)&byte_15AE31760[v15 + 136];
      v56 = 3 * *(_DWORD *)(v55 + v53);
      v57 = v16 + *(float *)(v54 + 4 * v56);
      v58 = v17 + *(float *)(v54 + 4 * v56 + 4);
      v59 = v18 + *(float *)(v54 + 4 * v56 + 8);
      v60 = 3 * *(_DWORD *)(v55 + v53 + 4);
      v124 = v57 * v14;
      v61 = v16 + *(float *)(v54 + 4 * v60);
      v62 = v17 + *(float *)(v54 + 4 * v60 + 4);
      v63 = v18 + *(float *)(v54 + 4 * v60 + 8);
      LODWORD(v60) = *(_DWORD *)(v55 + v53 + 8);
      v111 = v57 * v14;
      v117 = v58 * v14;
      v112 = v58 * v14;
      v118 = v59 * v14;
      v64 = 3 * (int)v60;
      v113 = v59 * v14;
      v65 = v18 + *(float *)(v54 + 4 * v64 + 8);
      v66 = v16 + *(float *)(v54 + 4 * v64);
      v67 = v17 + *(float *)(v54 + 4 * v64 + 4);
      v68 = 3 * *(_DWORD *)(v55 + v53 + 12);
      v69 = v16 + *(float *)(v54 + 4 * v68);
      v70 = v17 + *(float *)(v54 + 4 * v68 + 4);
      v71 = v121 + *(float *)(v54 + 4 * v68 + 8);
      v109 = v67 * v14;
      v72 = (float)(v67 * v14) - (float)(v58 * v14);
      v110 = v65 * v14;
      v73 = (float)(v65 * v14) - (float)(v59 * v14);
      v115 = v62 * v14;
      v74 = (float)(v62 * v14) - (float)(v58 * v14);
      v116 = v63 * v14;
      v75 = (float)(v63 * v14) - (float)(v59 * v14);
      v114 = v61 * v14;
      v76 = (float)(v61 * v14) - (float)(v57 * v14);
      v108 = v66 * v14;
      v77 = (float)(v66 * v14) - (float)(v57 * v14);
      v78 = v69 * v14;
      v79 = v70 * v14;
      v80 = v71 * v14;
      v81 = (float)(v72 * v75) - (float)(v73 * v74);
      *(float *)v120 = v78;
      *(float *)&v120[1] = v79;
      *(float *)&v120[2] = v80;
      v82 = (float)(v73 * v76) - (float)(v77 * v75);
      v83 = (float)(v77 * v74) - (float)(v72 * v76);
      v84 = fsqrt((float)((float)(v82 * v82) + (float)(v81 * v81)) + (float)(v83 * v83));
      if ( v84 == 0.0 )
      {
        v103 = 0;
        v104 = 0.0;
      }
      else
      {
        *(float *)&v103 = (float)(1.0 / v84) * v81;
        *((float *)&v103 + 1) = (float)(1.0 / v84) * v82;
        v104 = (float)(1.0 / v84) * v83;
      }
      if ( (unsigned int)sub_14002B880(
                           (unsigned int)&v105,
                           (unsigned int)&v103,
                           (unsigned int)&a9,
                           a4,
                           a5,
                           a6,
                           (__int64)&v111,
                           (__int64)&v114,
                           (__int64)&v108) )
      {
        v85 = a9;
        if ( a9 < *a3 )
        {
          v86 = v106;
          *a1 = v105;
          v87 = v107;
          a1[1] = v86;
          v88 = v103;
          a1[2] = v87;
          v89 = HIDWORD(v103);
          *(_DWORD *)a2 = v88;
          *(float *)(a2 + 8) = v104;
          *(_DWORD *)(a2 + 4) = v89;
          *a3 = v85;
          dword_16E18CAAC = *(_DWORD *)(v52 + *(_QWORD *)&byte_15AE31760[v15 + 144]);
        }
      }
      v90 = v78 - v124;
      v91 = v79 - v117;
      v92 = v80 - v118;
      v93 = (float)(v91 * v73) - (float)(v92 * v72);
      v94 = (float)(v77 * v92) - (float)(v90 * v73);
      v95 = (float)(v90 * v72) - (float)(v77 * v91);
      v96 = fsqrt((float)((float)(v94 * v94) + (float)(v93 * v93)) + (float)(v95 * v95));
      if ( v96 == 0.0 )
      {
        v103 = 0;
        v104 = 0.0;
      }
      else
      {
        *(float *)&v103 = (float)(1.0 / v96) * v93;
        *((float *)&v103 + 1) = (float)(1.0 / v96) * v94;
        v104 = (float)(1.0 / v96) * v95;
      }
      if ( (unsigned int)sub_14002B880(
                           (unsigned int)&v105,
                           (unsigned int)&v103,
                           (unsigned int)&a9,
                           v122,
                           a5,
                           a6,
                           (__int64)&v111,
                           (__int64)&v108,
                           (__int64)v120) )
      {
        v97 = a9;
        if ( a9 < *a3 )
        {
          v98 = v106;
          *a1 = v105;
          v99 = v107;
          a1[1] = v98;
          v100 = v103;
          a1[2] = v99;
          v101 = HIDWORD(v103);
          *(_DWORD *)a2 = v100;
          *(float *)(a2 + 8) = v104;
          *(_DWORD *)(a2 + 4) = v101;
          *a3 = v97;
          dword_16E18CAAC = *(_DWORD *)(v52 + *(_QWORD *)&byte_15AE31760[v15 + 144]);
        }
      }
      v16 = v123;
      v17 = v119;
      ++v51;
      v18 = v121;
      v53 += 16;
      a4 = v122;
      v52 += 4;
    }
    while ( v51 < *(_DWORD *)&byte_15AE31760[v15 + 104] );
    v9 = *a3;
  }
  return v9 < 65536.0;
}

