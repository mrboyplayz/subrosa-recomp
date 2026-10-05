/* Address: 0x1400a1360 | Name: sub_1400A1360 | Size: 3819 bytes */
__int64 __fastcall sub_1400A1360(int a1)
{
  __int64 v1; // r13
  float *v2; // rax
  __int64 v3; // rcx
  float v4; // xmm3_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm4_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 i; // r15
  unsigned __int64 v16; // rbx
  float v17; // xmm6_4
  __int64 v18; // rdi
  float v19; // xmm2_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm6_4
  float v30; // xmm3_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm6_4
  float v34; // xmm10_4
  float v35; // xmm8_4
  float v36; // xmm13_4
  float v37; // xmm6_4
  float v38; // xmm7_4
  float v39; // xmm3_4
  float v40; // xmm8_4
  float v41; // xmm6_4
  float v42; // xmm7_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm3_4
  float v46; // xmm4_4
  float v47; // xmm0_4
  float v48; // xmm10_4
  float v49; // xmm13_4
  float v50; // xmm0_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm5_4
  float v54; // xmm0_4
  float v55; // xmm2_4
  float v56; // xmm3_4
  float v57; // xmm1_4
  float v58; // xmm4_4
  float v59; // xmm5_4
  float v60; // xmm3_4
  float v61; // xmm1_4
  float v62; // xmm6_4
  int v63; // ebp
  __m128d v64; // xmm0
  __int64 v65; // r8
  float v66; // xmm8_4
  float v67; // xmm2_4
  float v68; // xmm3_4
  float v69; // xmm4_4
  float v70; // xmm9_4
  float v71; // xmm0_4
  float v72; // xmm12_4
  float v73; // xmm13_4
  float v74; // xmm7_4
  int v75; // esi
  __int64 v76; // r8
  float v77; // xmm2_4
  float v78; // xmm6_4
  float v79; // xmm4_4
  float v80; // xmm5_4
  float v81; // xmm3_4
  float v82; // xmm2_4
  float v83; // xmm1_4
  float v84; // xmm1_4
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  float v88; // xmm7_4
  float v89; // xmm6_4
  float v90; // xmm5_4
  float v91; // xmm2_4
  float v92; // xmm4_4
  float v93; // xmm0_4
  float v94; // xmm2_4
  float v95; // xmm1_4
  __int64 v96; // rcx
  __int64 result; // rax
  float v98; // xmm7_4
  float v99; // xmm6_4
  float v100; // xmm5_4
  float v101; // xmm3_4
  float v102; // xmm4_4
  float v103; // xmm0_4
  float v104; // xmm2_4
  float v105; // xmm1_4
  float *v106; // rcx
  unsigned __int64 v107; // r8
  __int64 v108; // rdx
  float v109; // xmm3_4
  float v110; // xmm4_4
  float v111; // xmm5_4
  float v112; // xmm6_4
  float v113; // xmm9_4
  float v114; // xmm8_4
  float v115; // xmm7_4
  float v116; // xmm6_4
  float v117; // xmm6_4
  float v118; // xmm3_4
  float v119; // xmm4_4
  float v120; // xmm2_4
  float v121; // xmm4_4
  float v122; // xmm0_4
  float v123; // [rsp+20h] [rbp-128h]
  __int64 v124; // [rsp+28h] [rbp-120h]
  float v125[2]; // [rsp+30h] [rbp-118h] BYREF
  float v126; // [rsp+38h] [rbp-110h]
  float v127; // [rsp+40h] [rbp-108h] BYREF
  float v128; // [rsp+44h] [rbp-104h]
  float v129; // [rsp+48h] [rbp-100h]
  __m128d v130; // [rsp+50h] [rbp-F8h]
  __m128d v131; // [rsp+60h] [rbp-E8h]
  float v132; // [rsp+158h] [rbp+10h]
  float v133; // [rsp+158h] [rbp+10h]
  float v134; // [rsp+160h] [rbp+18h]
  float v135; // [rsp+168h] [rbp+20h]

  v1 = a1;
  v124 = a1;
  v2 = (float *)((char *)&unk_16E6A8C40 + 20840 * a1);
  v3 = 2;
  do
  {
    v4 = *(v2 - 8);
    *(v2 - 11) = (float)(v4 * 0.03125) + *(v2 - 11);
    v5 = *(v2 - 7);
    *(v2 - 10) = (float)(v5 * 0.03125) + *(v2 - 10);
    v6 = *(v2 - 6);
    *(v2 - 9) = (float)(v6 * 0.03125) + *(v2 - 9);
    *(v2 - 7) = v5 - 0.000085069449;
    *(v2 - 3) = v6;
    *(v2 - 5) = v4;
    *(v2 - 4) = v5 - 0.000085069449;
    v7 = v2[1];
    *(v2 - 2) = (float)(v7 * 0.03125) + *(v2 - 2);
    v8 = v2[2];
    *(v2 - 1) = (float)(v8 * 0.03125) + *(v2 - 1);
    v9 = v2[3];
    *v2 = (float)(v9 * 0.03125) + *v2;
    v2[2] = v8 - 0.000085069449;
    v2[4] = v7;
    v2[5] = v8 - 0.000085069449;
    v2[6] = v9;
    v10 = v2[10];
    v2[7] = (float)(v10 * 0.03125) + v2[7];
    v11 = v2[11];
    v2[8] = (float)(v11 * 0.03125) + v2[8];
    v12 = v2[12];
    v2[9] = (float)(v12 * 0.03125) + v2[9];
    v2[11] = v11 - 0.000085069449;
    v2[13] = v10;
    v2[14] = v11 - 0.000085069449;
    v2[15] = v12;
    v2 += 27;
    --v3;
  }
  while ( v3 );
  v13 = 0;
  v14 = 0;
  for ( i = 0; i < 72; i += 36 )
  {
    if ( v14 < 2 )
    {
      v16 = 20840 * v1;
      v17 = *((float *)&unk_16E6A8CA8 + 5210 * v1);
      v18 = 20840 * v1 + i;
      v19 = *((float *)&unk_16E6A8CAC + 5210 * v1);
      v20 = *((float *)&unk_16E6A8CA4 + 5210 * v1);
      v21 = *(float *)((char *)&unk_16E6A8C18 + v18) - v17;
      v22 = v17 - *((float *)&unk_16E6A8CCC + 5210 * v1);
      v23 = *(float *)((char *)&unk_16E6A8C1C + v18) - v19;
      v24 = v19 - *((float *)&unk_16E6A8CD0 + 5210 * v1);
      v25 = *(float *)((char *)&unk_16E6A8C14 + v18) - v20;
      v26 = v20 - *((float *)&unk_16E6A8CC8 + 5210 * v1);
      v27 = (float)(v24 * v21) - (float)(v22 * v23);
      v28 = (float)(v26 * v23) - (float)(v24 * v25);
      v29 = (float)(v22 * v25) - (float)(v26 * v21);
      v30 = fsqrt((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v29 * v29));
      if ( v30 == 0.0 )
      {
        v31 = 0.0;
        v32 = 0.0;
        v33 = 0.0;
      }
      else
      {
        v31 = v27 * (float)(1.0 / v30);
        v32 = v28 * (float)(1.0 / v30);
        v33 = v29 * (float)(1.0 / v30);
      }
      *(float *)((char *)&unk_16E6A8C20 + v18) = (float)(v31 * 0.0011111111) + *(float *)((char *)&unk_16E6A8C20 + v18);
      *(float *)((char *)&unk_16E6A8C24 + v18) = (float)(v32 * 0.0011111111) + *(float *)((char *)&unk_16E6A8C24 + v18);
      *(float *)((char *)&unk_16E6A8C28 + v18) = (float)(v33 * 0.0011111111) + *(float *)((char *)&unk_16E6A8C28 + v18);
      v34 = *(float *)((char *)&unk_16E6A8CA4 + v16);
      v35 = *(float *)((char *)&unk_16E6A8C1C + v18) - *(float *)((char *)&unk_16E6A8CAC + v16);
      v36 = *(float *)((char *)&unk_16E6A8CA8 + v16);
      v37 = *(float *)((char *)&unk_16E6A8C14 + v18) - v34;
      v38 = *(float *)((char *)&unk_16E6A8C18 + v18) - v36;
      v132 = *(float *)((char *)&unk_16E6A8CAC + v16);
      v39 = fsqrt((float)((float)(v38 * v38) + (float)(v37 * v37)) + (float)(v35 * v35));
      if ( v39 == 0.0 )
      {
        v126 = 0.0;
        v41 = 0.0;
        v42 = 0.0;
        v40 = 0.0;
      }
      else
      {
        v40 = v35 * (float)(1.0 / v39);
        v41 = v37 * (float)(1.0 / v39);
        v126 = v40;
        v42 = v38 * (float)(1.0 / v39);
      }
      v125[1] = v42;
      v43 = v40 * *(float *)&dword_16E6A3CAC[v16 / 4];
      v44 = v41 * *(float *)&dword_16E6A3CBC[v16 / 4];
      v45 = v40 * *(float *)&dword_16E6A3CC4[v16 / 4];
      v46 = (float)(v42 * *(float *)&dword_16E6A3CA8[v16 / 4]) + (float)(v41 * *(float *)&dword_16E6A3CA4[v16 / 4]);
      v125[0] = v41;
      v47 = atan2f(-(float)(v46 + v43), (float)((float)(v42 * *(float *)&dword_16E6A3CC0[v16 / 4]) + v44) + v45);
      v48 = v34 - *(float *)((char *)&unk_16E6A8CC8 + v16);
      v49 = v36 - *(float *)((char *)&unk_16E6A8CCC + v16);
      v123 = v47;
      v50 = v132 - *(float *)((char *)&unk_16E6A8CD0 + v16);
      v51 = (float)(v40 * v49) - (float)(v42 * v50);
      v52 = (float)(v41 * v50) - (float)(v40 * v48);
      v53 = (float)(v42 * v48) - (float)(v41 * v49);
      v54 = fsqrt((float)((float)(v52 * v52) + (float)(v51 * v51)) + (float)(v53 * v53));
      if ( v54 == 0.0 )
      {
        v55 = 0.0;
        v56 = 0.0;
        v57 = 0.0;
      }
      else
      {
        v55 = (float)(1.0 / v54) * v51;
        v56 = (float)(1.0 / v54) * v52;
        v57 = (float)(1.0 / v54) * v53;
      }
      v58 = (float)(v57 * v42) - (float)(v56 * v40);
      v59 = (float)(v55 * v40) - (float)(v57 * v41);
      v60 = (float)(v56 * v41) - (float)(v55 * v42);
      v61 = fsqrt((float)((float)(v59 * v59) + (float)(v58 * v58)) + (float)(v60 * v60));
      if ( v61 == 0.0 )
      {
        v135 = 0.0;
        v62 = 0.0;
        v134 = 0.0;
      }
      else
      {
        v135 = (float)(1.0 / v61) * v59;
        v62 = (float)(1.0 / v61) * v58;
        v134 = (float)(1.0 / v61) * v60;
      }
      v63 = 0;
      v133 = v62;
      v64.m128d_f64[1] = _mm_cvtps_pd((__m128)LODWORD(v123)).m128d_f64[1];
      v64.m128d_f64[0] = _libm_sse2_sincos_();
      v130 = v64;
      v131 = _mm_shuffle_pd(v64, v64, 1);
      do
      {
        v66 = (float)((float)v63 * 0.125) + 0.0625;
        v67 = (float)((float)(1.0 - v66) * *(float *)((char *)&unk_16E6A8CBC + v16))
            + (float)(v66 * *(float *)((char *)&unk_16E6A8C2C + v18));
        v68 = (float)((float)(1.0 - v66) * *(float *)((char *)&unk_16E6A8CC0 + v16))
            + (float)(v66 * *(float *)((char *)&unk_16E6A8C30 + v18));
        v69 = (float)((float)(1.0 - v66) * *(float *)((char *)&unk_16E6A8CC4 + v16))
            + (float)(v66 * *(float *)((char *)&unk_16E6A8C34 + v18));
        v70 = (float)((float)(v68 * v68) + (float)(v67 * v67)) + (float)(v69 * v69);
        v71 = fsqrt(v70);
        if ( v71 == 0.0 )
        {
          v72 = 0.0;
          v73 = 0.0;
          v74 = 0.0;
        }
        else
        {
          v72 = (float)(1.0 / v71) * v68;
          v73 = (float)(1.0 / v71) * v67;
          v74 = (float)(1.0 / v71) * v69;
        }
        v75 = 0;
        do
        {
          v128 = v135;
          v127 = v62;
          v129 = v134;
          if ( !v75 )
            sub_140049E50(&v127, v125, v65);
          atan2(*(float *)&dword_16E6A7260[v16 / 4] * v130.m128d_f64[0], 1.0);
          atan2(*(float *)&dword_16E6A7268[v16 / 4] * v131.m128d_f64[0], 1.0);
          sub_140049E50(&v127, v125, v76);
          if ( v75 )
            v77 = 0.15625;
          else
            v77 = 0.015625;
          v78 = v128;
          v79 = v127;
          v80 = v129;
          ++v75;
          v81 = (float)((float)((float)((float)((float)(v72 * v128) + (float)(v73 * v127)) + (float)(v74 * v129)) * v77)
                      * v70)
              * -2.0;
          v82 = (float)(v81 * v66) * 0.0009765625;
          v83 = v128 * v82;
          *(float *)((char *)&unk_16E6A8C20 + v18) = (float)(v127 * v82) + *(float *)((char *)&unk_16E6A8C20 + v18);
          *(float *)((char *)&unk_16E6A8C24 + v18) = v83 + *(float *)((char *)&unk_16E6A8C24 + v18);
          v84 = (float)((float)(1.0 - v66) * v81) * 0.00048828125;
          *(float *)((char *)&unk_16E6A8C28 + v18) = (float)(v80 * v82) + *(float *)((char *)&unk_16E6A8C28 + v18);
          *(float *)((char *)&unk_16E6A8CB0 + v16) = (float)(v79 * v84) + *(float *)((char *)&unk_16E6A8CB0 + v16);
          *(float *)((char *)&unk_16E6A8CB4 + v16) = (float)(v78 * v84) + *(float *)((char *)&unk_16E6A8CB4 + v16);
          v62 = v133;
          *(float *)((char *)&unk_16E6A8CB8 + v16) = (float)(v80 * v84) + *(float *)((char *)&unk_16E6A8CB8 + v16);
        }
        while ( v75 < 2 );
        ++v63;
      }
      while ( v63 < 8 );
      v1 = v124;
    }
    ++v14;
  }
  v85 = 20840 * v1;
  v86 = *((int *)&unk_16E6A3DA0 + 5210 * v1);
  v87 = 60 * v86;
  v86 *= 32;
  v88 = (float)((float)((float)(*((float *)&unk_16E6A8CA4 + 5210 * v1) - *(float *)&dword_16E18CAF4[v87]) * 0.03125)
              - (float)(*(float *)((char *)&unk_1401C91E0 + v86) * 0.125))
      + (float)(*((float *)&unk_16E6A8CBC + 5210 * v1) * 0.125);
  v89 = (float)((float)((float)(*((float *)&unk_16E6A8CA8 + 5210 * v1) - *(float *)&dword_16E18CAF8[v87]) * 0.03125)
              - (float)(*(float *)((char *)&unk_1401C91E4 + v86) * 0.125))
      + (float)(*((float *)&unk_16E6A8CC0 + 5210 * v1) * 0.125);
  v90 = (float)((float)((float)(*((float *)&unk_16E6A8CAC + 5210 * v1) - *(float *)&dword_16E18CAFC[v87]) * 0.03125)
              - (float)(*(float *)((char *)&unk_1401C91E8 + v86) * 0.125))
      + (float)(*((float *)&unk_16E6A8CC4 + 5210 * v1) * 0.125);
  v91 = (float)(1.0 / (float)(*(float *)&dword_16E18CAE8[v87] + 64.0)) * 64.0;
  v92 = -(float)(*(float *)&dword_16E18CAE8[v87] * (float)(1.0 / (float)(*(float *)&dword_16E18CAE8[v87] + 64.0)));
  *(float *)((char *)&unk_1401C91F0 + v86) = (float)(v91 * v88) + *(float *)((char *)&unk_1401C91F0 + v86);
  v93 = (float)(v92 * v88) + *((float *)&unk_16E6A8CB0 + 5210 * v1);
  *(float *)((char *)&unk_1401C91F4 + v86) = (float)(v91 * v89) + *(float *)((char *)&unk_1401C91F4 + v86);
  v94 = (float)(v91 * v90) + *(float *)((char *)&unk_1401C91F8 + v86);
  *(float *)((char *)&unk_16E6A8CB0 + v85) = v93;
  v95 = (float)(v92 * v89) + *((float *)&unk_16E6A8CB4 + 5210 * v1);
  *(float *)((char *)&unk_1401C91F8 + v86) = v94;
  *(float *)((char *)&unk_16E6A8CB4 + v85) = v95;
  *(float *)((char *)&unk_16E6A8CB8 + v85) = (float)(v92 * v90) + *((float *)&unk_16E6A8CB8 + 5210 * v1);
  v96 = *((int *)&unk_16E6A3DA4 + 5210 * v1);
  result = 240 * v96;
  v96 *= 32;
  v98 = (float)((float)((float)(*((float *)&unk_16E6A8CC8 + 5210 * v1) - *(float *)((char *)dword_16E18CAF4 + result))
                      * 0.03125)
              - (float)(*(float *)((char *)&unk_1401C91E0 + v96) * 0.125))
      + (float)(*((float *)&unk_16E6A8CE0 + 5210 * v1) * 0.125);
  v99 = (float)((float)((float)(*((float *)&unk_16E6A8CCC + 5210 * v1) - *(float *)((char *)dword_16E18CAF8 + result))
                      * 0.03125)
              - (float)(*(float *)((char *)&unk_1401C91E4 + v96) * 0.125))
      + (float)(*((float *)&unk_16E6A8CE4 + 5210 * v1) * 0.125);
  v100 = (float)((float)((float)(*((float *)&unk_16E6A8CD0 + 5210 * v1) - *(float *)((char *)dword_16E18CAFC + result))
                       * 0.03125)
               - (float)(*(float *)((char *)&unk_1401C91E8 + v96) * 0.125))
       + (float)(*((float *)&unk_16E6A8CE8 + 5210 * v1) * 0.125);
  v101 = 1.0 / (float)(*(float *)((char *)dword_16E18CAE8 + result) + 64.0);
  v102 = -(float)(*(float *)((char *)dword_16E18CAE8 + result) * v101);
  *(float *)((char *)&unk_1401C91F0 + v96) = (float)((float)(v101 * 64.0) * v98)
                                           + *(float *)((char *)&unk_1401C91F0 + v96);
  v103 = (float)(v102 * v98) + *((float *)&unk_16E6A8CD4 + 5210 * v1);
  *(float *)((char *)&unk_1401C91F4 + v96) = (float)((float)(v101 * 64.0) * v99)
                                           + *(float *)((char *)&unk_1401C91F4 + v96);
  v104 = (float)((float)(v101 * 64.0) * v100) + *(float *)((char *)&unk_1401C91F8 + v96);
  *(float *)((char *)&unk_16E6A8CD4 + v85) = v103;
  v105 = (float)(v102 * v99) + *((float *)&unk_16E6A8CD8 + 5210 * v1);
  *(float *)((char *)&unk_1401C91F8 + v96) = v104;
  v106 = (float *)((char *)&unk_16E6A8C20 + 20840 * v1);
  *(float *)((char *)&unk_16E6A8CD8 + v85) = v105;
  *(float *)((char *)&unk_16E6A8CDC + v85) = (float)(v102 * v100) + *((float *)&unk_16E6A8CDC + 5210 * v1);
  do
  {
    v107 = v13++;
    v108 = v13;
    if ( v13 < 6 )
    {
      result = (__int64)(v106 + 8);
      do
      {
        v109 = *(float *)(result - 8) - *(v106 - 3);
        v110 = *(float *)(result - 4) - *(v106 - 2);
        v111 = *(float *)result - *(v106 - 1);
        v112 = fsqrt((float)((float)(v109 * v109) + (float)(v110 * v110)) + (float)(v111 * v111));
        v113 = (float)(1.0 / v112) * v109;
        v114 = (float)(1.0 / v112) * v110;
        v115 = (float)(1.0 / v112) * v111;
        if ( v107 >= 2 )
        {
          if ( v107 >= 4 )
            goto LABEL_45;
          if ( v108 >= 4 )
          {
            if ( v108 < 5 )
            {
LABEL_45:
              v116 = v112 + -1.0;
              goto LABEL_46;
            }
            v116 = v112 + -1.4142135;
          }
          else
          {
            v116 = v112 + -2.0;
          }
        }
        else if ( v108 >= 2 )
        {
          if ( v108 == 4 )
            v116 = v112 + -4.0;
          else
            v116 = v112 - 4.123105625617661;
        }
        else
        {
          v116 = v112 + -8.0;
        }
LABEL_46:
        v117 = (float)((float)(v116 * 0.125)
                     - (float)((float)((float)((float)(v114 * v106[4]) + (float)(v113 * v106[3]))
                                     + (float)(v115 * v106[5]))
                             * 0.125))
             + (float)((float)((float)((float)(v114 * *(float *)(result + 20)) + (float)(v113 * *(float *)(result + 16)))
                             + (float)(v115 * *(float *)(result + 24)))
                     * 0.125);
        if ( v107 >= 4 )
          v118 = 64.0;
        else
          v118 = 32.0;
        if ( v108 >= 4 )
          v119 = 64.0;
        else
          v119 = 32.0;
        ++v108;
        v120 = 1.0 / (float)(v119 + v118);
        v121 = (float)(v119 * v120) * v117;
        *v106 = (float)(v121 * v113) + *v106;
        v106[1] = (float)(v114 * v121) + v106[1];
        v106[2] = (float)(v115 * v121) + v106[2];
        v122 = -(float)((float)(v118 * v120) * v117);
        *(float *)(result + 4) = (float)(v122 * v113) + *(float *)(result + 4);
        *(float *)(result + 8) = (float)(v114 * v122) + *(float *)(result + 8);
        *(float *)(result + 12) = (float)(v115 * v122) + *(float *)(result + 12);
        result += 36;
      }
      while ( v108 < 6 );
    }
    v106 += 9;
  }
  while ( v13 < 6 );
  return result;
}

