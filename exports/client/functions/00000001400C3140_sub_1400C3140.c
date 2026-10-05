/* Address: 0x1400c3140 | Name: sub_1400C3140 | Size: 2369 bytes */
__int64 __fastcall sub_1400C3140(unsigned __int64 a1, float *a2)
{
  float v2; // xmm13_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm5_4
  float v6; // xmm11_4
  float v7; // xmm8_4
  float v8; // xmm14_4
  float v9; // xmm15_4
  float v10; // xmm10_4
  float v11; // xmm9_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm1_4
  float v18; // xmm8_4
  float v19; // xmm0_4
  float v20; // xmm5_4
  float v21; // xmm6_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm3_4
  float v31; // xmm12_4
  float v32; // xmm5_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm7_4
  float v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm11_4
  float v40; // xmm0_4
  float v41; // xmm8_4
  float v42; // xmm12_4
  float v43; // xmm13_4
  float v44; // xmm14_4
  float v45; // xmm0_4
  float v46; // xmm9_4
  float v47; // xmm0_4
  float v48; // xmm5_4
  float v49; // xmm10_4
  float v50; // xmm6_4
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm5_4
  float v54; // xmm8_4
  float v55; // xmm9_4
  float v56; // xmm4_4
  float v57; // xmm7_4
  float v58; // xmm10_4
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm9_4
  float v62; // xmm2_4
  float v63; // xmm0_4
  float v64; // xmm1_4
  __m128 v65; // xmm5
  __m128 v66; // xmm2
  __m128 v67; // xmm3
  float v68; // xmm6_4
  float v69; // xmm0_4
  float v70; // xmm8_4
  __m128 v71; // xmm4
  __m128 v72; // xmm3
  __m128 v73; // xmm5
  float v74; // xmm0_4
  float v75; // xmm11_4
  __m128 v76; // xmm1
  __m128 v77; // xmm1
  __m128 v78; // xmm3
  float v79; // xmm0_4
  __m128 v80; // xmm4
  float v81; // xmm6_4
  __m128 v82; // xmm1
  __m128 v83; // xmm2
  __m128 v84; // xmm4
  float v85; // xmm0_4
  float v86; // xmm9_4
  __m128 v87; // xmm3
  float v88; // xmm0_4
  float v89; // xmm8_4
  float v90; // xmm0_4
  float v91; // xmm3_4
  __m128 v92; // xmm2
  __m128 v93; // xmm3
  _BYTE *v94; // r9
  __int8 *v95; // r10
  unsigned __int64 v96; // rax
  __int64 v97; // rcx
  float v98; // xmm1_4
  float v99; // xmm0_4
  float v100; // xmm1_4
  __m128 v101; // xmm1
  __m128 v102; // xmm0
  float v104; // [rsp+0h] [rbp-148h] BYREF
  float v105; // [rsp+4h] [rbp-144h]
  float v106; // [rsp+8h] [rbp-140h]
  float v107; // [rsp+Ch] [rbp-13Ch]
  float v108; // [rsp+10h] [rbp-138h]
  float v109; // [rsp+14h] [rbp-134h]
  float v110; // [rsp+18h] [rbp-130h]
  float v111; // [rsp+1Ch] [rbp-12Ch]
  float v112; // [rsp+20h] [rbp-128h]
  float v113; // [rsp+24h] [rbp-124h]
  float v114; // [rsp+28h] [rbp-120h]
  float v115; // [rsp+2Ch] [rbp-11Ch]
  float v116; // [rsp+30h] [rbp-118h]
  float v117; // [rsp+34h] [rbp-114h]
  float v118; // [rsp+38h] [rbp-110h]
  float v119; // [rsp+3Ch] [rbp-10Ch]
  __m128 v120; // [rsp+40h] [rbp-108h]
  __m128 v121; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v122[48]; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v123; // [rsp+90h] [rbp-B8h]

  v2 = a2[15];
  v3 = a2[11];
  v4 = a2[7];
  v5 = a2[10];
  v6 = a2[14];
  v7 = a2[6];
  v8 = a2[13];
  v9 = a2[4];
  v10 = a2[8];
  v11 = a2[12];
  v12 = (float)(v7 * a2[9]) * v2;
  v13 = v10 * v4;
  v14 = (float)((float)(a2[5] * v5) * v2) - (float)((float)(v3 * a2[5]) * v6);
  v15 = v10 * v7;
  v104 = v9 * v5;
  v16 = v14 - v12;
  v17 = v8 * v7;
  v18 = v11 * a2[6];
  v19 = (float)(v8 * v4) * v5;
  v20 = v11 * v4;
  v106 = (float)((float)(v16 + (float)((float)(v4 * a2[9]) * v6)) + (float)(v17 * v3)) - v19;
  v21 = (float)(v9 * v3) * v8;
  v22 = (float)(v10 * v4) * v6;
  v23 = (float)((float)((float)(v9 * v3) * v6) - (float)(v104 * v2)) + (float)(v15 * v2);
  v24 = v18 * v3;
  v25 = v11 * a2[5];
  v26 = (float)(v23 - v22) - v24;
  v27 = v9 * a2[9];
  *(float *)v122 = v26 + (float)(v20 * a2[10]);
  v28 = (float)(v10 * a2[5]) * v6;
  v29 = v25 * a2[11];
  v30 = v25 * a2[10];
  v31 = (float)((float)((float)((float)((float)(v27 * v2) - v21) - (float)((float)(v10 * a2[5]) * v2))
                      + (float)(v13 * v8))
              + v29)
      - (float)(v20 * a2[9]);
  v32 = a2[9];
  v107 = v31;
  v33 = (float)((float)(v104 * v8) - (float)(v27 * v6)) + v28;
  v34 = *a2;
  v35 = v33 - (float)(v15 * v8);
  v36 = a2[1];
  v114 = *a2 * a2[10];
  v37 = v35 - v30;
  v38 = a2[2];
  v105 = v36 * v11;
  v39 = v38 * v32;
  v40 = v37 + (float)(v18 * v32);
  v41 = a2[3];
  v110 = v38 * v10;
  v42 = v41 * v32;
  v104 = v40;
  v43 = v38 * v8;
  v44 = v41 * a2[13];
  v115 = v34 * a2[11];
  v112 = v38 * v11;
  v111 = v41 * v10;
  v45 = v41 * v11;
  v46 = a2[14];
  v113 = v45;
  v47 = v34 * v32;
  v48 = v36 * v10;
  v49 = a2[13];
  v119 = v47;
  v118 = v48;
  v50 = v36 * a2[6];
  *(float *)&v122[36] = (float)((float)((float)((float)((float)(v46 * v47) - (float)(v49 * v114)) - (float)(v46 * v48))
                                      + (float)(v49 * v110))
                              + (float)(a2[10] * v105))
                      - (float)(a2[9] * v112);
  v51 = *a2;
  v52 = a2[2];
  v53 = a2[1];
  v54 = v41 * a2[5];
  v55 = a2[3];
  v56 = v36 * a2[7];
  v57 = v52 * a2[5];
  v58 = *a2 * a2[7];
  v109 = *a2 * a2[6];
  v108 = v52 * v9;
  v59 = v51 * a2[5];
  v60 = a2[13] * v109;
  v116 = v59;
  v117 = v53 * v9;
  v61 = v55 * v9;
  v62 = (float)((float)((float)((float)(v60 - (float)(a2[14] * v59)) + (float)(a2[14] * (float)(v53 * v9)))
                      - (float)(a2[13] * v108))
              - (float)(a2[6] * v105))
      + (float)(a2[5] * v112);
  v63 = a2[11] * v50;
  v64 = a2[11] * v57;
  *(float *)&v122[40] = v62;
  v65 = (__m128)*((unsigned int *)a2 + 10);
  v66 = (__m128)*((unsigned int *)a2 + 15);
  v67 = v66;
  v67.m128_f32[0] = v66.m128_f32[0] * v50;
  v68 = a2[14];
  v65.m128_f32[0] = (float)((float)((float)((float)((float)(v65.m128_f32[0] * v56) - v63) + v64) - (float)(a2[10] * v54))
                          - (float)(a2[7] * v39))
                  + (float)(a2[6] * v42);
  v69 = v68 * v54;
  v70 = a2[7];
  v67.m128_f32[0] = (float)((float)((float)((float)(v67.m128_f32[0] - (float)(v68 * v56)) - (float)(a2[15] * v57)) + v69)
                          + (float)(v70 * v43))
                  - (float)(a2[6] * v44);
  v71 = (__m128)*((unsigned int *)a2 + 1);
  v72 = _mm_unpacklo_ps(v67, v65);
  v73 = (__m128)LODWORD(v68);
  v74 = a2[15] * v39;
  v75 = a2[10];
  v71.m128_f32[0] = (float)((float)((float)((float)((float)((float)(v71.m128_f32[0] * a2[11]) * v68)
                                                  - (float)((float)(v71.m128_f32[0] * v75) * v66.m128_f32[0]))
                                          + v74)
                                  - (float)(v68 * v42))
                          - (float)(a2[11] * v43))
                  + (float)(v75 * v44);
  v76 = _mm_unpacklo_ps((__m128)LODWORD(v106), v71);
  v71.m128_f32[0] = a2[6];
  v77 = _mm_movelh_ps(v76, v72);
  v78 = (__m128)*((unsigned int *)a2 + 11);
  v120 = v77;
  v121 = v77;
  v78.m128_f32[0] = (float)((float)((float)((float)((float)(v78.m128_f32[0] * v109) - (float)(v75 * v58))
                                          - (float)(a2[11] * v108))
                                  + (float)(v75 * v61))
                          + (float)(v70 * v110))
                  - (float)(v71.m128_f32[0] * v111);
  v79 = v71.m128_f32[0] * v113;
  v80 = v66;
  v73.m128_f32[0] = (float)((float)((float)((float)((float)(v68 * v58) - (float)(v66.m128_f32[0] * v109))
                                          + (float)(v66.m128_f32[0] * v108))
                                  - (float)(v68 * v61))
                          - (float)(v70 * v112))
                  + v79;
  v80.m128_f32[0] = (float)((float)((float)(v66.m128_f32[0] * v114) - (float)(v68 * v115))
                          - (float)(v66.m128_f32[0] * v110))
                  + (float)(v68 * v111);
  v81 = a2[11];
  v80.m128_f32[0] = (float)(v80.m128_f32[0] + (float)(v81 * v112)) - (float)(a2[10] * v113);
  v82 = _mm_movelh_ps(_mm_unpacklo_ps(v80, v73), _mm_unpacklo_ps(v78, (__m128)LODWORD(v107)));
  v78.m128_f32[0] = a2[9];
  v83 = (__m128)v78.m128_u32[0];
  *(__m128 *)&v122[4] = v82;
  v84 = (__m128)*((unsigned int *)a2 + 15);
  v83.m128_f32[0] = (float)((float)((float)((float)((float)(v78.m128_f32[0] * v58) - (float)(v81 * v116))
                                          + (float)(v81 * v117))
                                  - (float)(v78.m128_f32[0] * v61))
                          - (float)(v70 * v118))
                  + (float)(a2[5] * v111);
  v85 = a2[13] * v61;
  v86 = a2[5];
  v87 = (__m128)*((unsigned int *)a2 + 13);
  v84.m128_f32[0] = (float)((float)((float)((float)((float)(v84.m128_f32[0] * v116) - (float)(a2[13] * v58))
                                          - (float)(v84.m128_f32[0] * v117))
                                  + v85)
                          + (float)(v70 * v105))
                  - (float)(v86 * v113);
  v87.m128_f32[0] = (float)((float)((float)((float)((float)(v87.m128_f32[0] * v115) - (float)(a2[15] * v119))
                                          + (float)(a2[15] * v118))
                                  - (float)(a2[13] * v111))
                          - (float)(a2[11] * v105))
                  + (float)(a2[9] * v113);
  v88 = a2[9] * v109;
  v89 = a2[9] * v108;
  v82.m128_f32[0] = a2[10];
  *(__m128 *)&v122[20] = _mm_movelh_ps(_mm_unpacklo_ps(v87, v84), _mm_unpacklo_ps(v83, (__m128)LODWORD(v104)));
  v82.m128_f32[0] = (float)((float)((float)((float)(v82.m128_f32[0] * v116) - v88) - (float)(v82.m128_f32[0] * v117))
                          + v89)
                  + (float)(a2[6] * v118);
  v87.m128_f32[0] = (float)(*(float *)v122 * a2[1]) + (float)(v106 * *a2);
  v90 = a2[3] * v104;
  *(float *)&v122[44] = v82.m128_f32[0] - (float)(v86 * v110);
  v91 = v87.m128_f32[0] + (float)(v90 + (float)(a2[2] * v107));
  if ( v91 != 0.0 )
  {
    v92 = (__m128)0x3F800000u;
    v92.m128_f32[0] = 1.0 / v91;
    v93 = _mm_shuffle_ps(v92, v92, 0);
    if ( a1 > (unsigned __int64)&v122[44] || a1 + 60 < (unsigned __int64)&v121 )
    {
      v101 = _mm_mul_ps(*(__m128 *)&v122[16], v93);
      *(__m128 *)a1 = _mm_mul_ps(v120, v93);
      *(__m128 *)(a1 + 16) = _mm_mul_ps(*(__m128 *)v122, v93);
      v102 = _mm_mul_ps(*(__m128 *)&v122[32], v93);
      *(__m128 *)(a1 + 32) = v101;
      *(__m128 *)(a1 + 48) = v102;
    }
    else
    {
      v94 = (char *)&v121 - a1;
      v95 = &v121.m128_i8[-a1 + 4];
      v96 = a1 + 8;
      v97 = 4;
      do
      {
        v96 += 16LL;
        v98 = v92.m128_f32[0] * *(float *)&v95[v96 - 24];
        *(float *)(v96 - 24) = v92.m128_f32[0] * *(float *)&v94[v96 - 24];
        v99 = v92.m128_f32[0] * *(float *)&v94[v96 - 16];
        *(float *)(v96 - 20) = v98;
        v100 = v92.m128_f32[0] * *(float *)&v95[v96 - 16];
        *(float *)(v96 - 16) = v99;
        *(float *)(v96 - 12) = v100;
        --v97;
      }
      while ( v97 );
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v104 ^ v123);
}

