/* Address: 0x14006c460 | Name: sub_14006C460 | Size: 2369 bytes */
float *__fastcall sub_14006C460(unsigned __int64 a1, float *a2)
{
  float *result; // rax
  float v3; // xmm13_4
  float v4; // xmm3_4
  float v5; // xmm2_4
  float v6; // xmm5_4
  float v7; // xmm11_4
  float v8; // xmm8_4
  float v9; // xmm14_4
  float v10; // xmm15_4
  float v11; // xmm10_4
  float v12; // xmm9_4
  float v13; // xmm4_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm8_4
  float v17; // xmm6_4
  float v18; // xmm0_4
  float v19; // xmm5_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm12_4
  float v28; // xmm5_4
  float v29; // xmm0_4
  float v30; // xmm7_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm11_4
  float v34; // xmm0_4
  float v35; // xmm8_4
  float v36; // xmm12_4
  float v37; // xmm13_4
  float v38; // xmm14_4
  float v39; // xmm6_4
  float v40; // xmm8_4
  float v41; // xmm4_4
  float v42; // xmm7_4
  float v43; // xmm10_4
  float v44; // xmm9_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  __m128 v47; // xmm5
  __m128 v48; // xmm2
  __m128 v49; // xmm3
  float v50; // xmm6_4
  float v51; // xmm0_4
  float v52; // xmm8_4
  __m128 v53; // xmm4
  __m128 v54; // xmm3
  __m128 v55; // xmm5
  float v56; // xmm0_4
  float v57; // xmm11_4
  __m128 v58; // xmm1
  __m128 v59; // xmm1
  __m128 v60; // xmm3
  float v61; // xmm0_4
  __m128 v62; // xmm4
  float v63; // xmm6_4
  __m128 v64; // xmm1
  __m128 v65; // xmm2
  __m128 v66; // xmm4
  float v67; // xmm0_4
  float v68; // xmm9_4
  __m128 v69; // xmm3
  float v70; // xmm0_4
  float v71; // xmm8_4
  float v72; // xmm0_4
  float v73; // xmm3_4
  __m128 v74; // xmm2
  __m128 v75; // xmm3
  _BYTE *v76; // r9
  __int8 *v77; // r10
  __int64 v78; // rcx
  float v79; // xmm1_4
  float v80; // xmm0_4
  float v81; // xmm1_4
  __m128 v82; // xmm1
  __m128 v83; // xmm0
  float v84; // [rsp+0h] [rbp-148h]
  float v85; // [rsp+0h] [rbp-148h]
  float v86; // [rsp+4h] [rbp-144h]
  unsigned int v87; // [rsp+8h] [rbp-140h]
  float v88; // [rsp+Ch] [rbp-13Ch]
  float v89; // [rsp+10h] [rbp-138h]
  float v90; // [rsp+14h] [rbp-134h]
  float v91; // [rsp+18h] [rbp-130h]
  float v92; // [rsp+1Ch] [rbp-12Ch]
  float v93; // [rsp+20h] [rbp-128h]
  float v94; // [rsp+24h] [rbp-124h]
  float v95; // [rsp+28h] [rbp-120h]
  float v96; // [rsp+2Ch] [rbp-11Ch]
  float v97; // [rsp+30h] [rbp-118h]
  float v98; // [rsp+34h] [rbp-114h]
  float v99; // [rsp+38h] [rbp-110h]
  float v100; // [rsp+3Ch] [rbp-10Ch]
  __m128 v101; // [rsp+40h] [rbp-108h]
  __m128 v102; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v103[48]; // [rsp+60h] [rbp-E8h] BYREF
  _UNKNOWN *retaddr; // [rsp+148h] [rbp+0h] BYREF

  result = (float *)&retaddr;
  v3 = a2[15];
  v4 = a2[11];
  v5 = a2[7];
  v6 = a2[10];
  v7 = a2[14];
  v8 = a2[6];
  v9 = a2[13];
  v10 = a2[4];
  v11 = a2[8];
  v12 = a2[12];
  v13 = v11 * v5;
  v14 = v11 * v8;
  v84 = v10 * v6;
  v15 = v9 * v8;
  v16 = v12 * v8;
  v17 = (float)((float)((float)((float)(a2[5] * v6) * v3) - (float)((float)(v4 * a2[5]) * v7))
              - (float)((float)(a2[6] * a2[9]) * v3))
      + (float)((float)(v5 * a2[9]) * v7);
  v18 = (float)(v9 * v5) * v6;
  v19 = v12 * v5;
  *(float *)&v87 = (float)(v17 + (float)(v15 * v4)) - v18;
  v20 = (float)(v10 * v4) * v9;
  v21 = (float)(v11 * v5) * v7;
  v22 = (float)((float)((float)(v10 * v4) * v7) - (float)(v84 * v3)) + (float)(v14 * v3);
  v23 = v16 * v4;
  v24 = v12 * a2[5];
  v25 = (float)(v22 - v21) - v23;
  v26 = v10 * a2[9];
  *(float *)v103 = v25 + (float)(v19 * a2[10]);
  v27 = (float)((float)((float)((float)((float)(v26 * v3) - v20) - (float)((float)(v11 * a2[5]) * v3))
                      + (float)(v13 * v9))
              + (float)(v24 * a2[11]))
      - (float)(v19 * a2[9]);
  v28 = a2[9];
  v88 = v27;
  v29 = (float)((float)((float)(v84 * v9) - (float)(v26 * v7)) + (float)((float)(v11 * a2[5]) * v7)) - (float)(v14 * v9);
  v30 = a2[1];
  v95 = *a2 * a2[10];
  v31 = v29 - (float)(v24 * a2[10]);
  v32 = a2[2];
  v86 = v30 * v12;
  v33 = v32 * v28;
  v34 = v31 + (float)(v16 * v28);
  v35 = a2[3];
  v91 = v32 * v11;
  v36 = v35 * v28;
  v85 = v34;
  v37 = v32 * v9;
  v38 = v35 * a2[13];
  v96 = *a2 * a2[11];
  v93 = v32 * v12;
  v92 = v35 * v11;
  v94 = v35 * v12;
  v100 = *a2 * v28;
  v99 = v30 * v11;
  v39 = v30 * a2[6];
  *(float *)&v103[36] = (float)((float)((float)((float)((float)(a2[14] * v100) - (float)(a2[13] * v95))
                                              - (float)(a2[14] * (float)(v30 * v11)))
                                      + (float)(a2[13] * (float)(v32 * v11)))
                              + (float)(a2[10] * (float)(v30 * v12)))
                      - (float)(v28 * (float)(v32 * v12));
  v40 = v35 * a2[5];
  v41 = v30 * a2[7];
  v42 = a2[2] * a2[5];
  v43 = *a2 * a2[7];
  v90 = *a2 * a2[6];
  v89 = a2[2] * v10;
  v97 = *a2 * a2[5];
  v98 = a2[1] * v10;
  v44 = a2[3] * v10;
  v45 = a2[11] * v39;
  v46 = a2[11] * v42;
  *(float *)&v103[40] = (float)((float)((float)((float)((float)(a2[13] * v90) - (float)(a2[14] * v97))
                                              + (float)(a2[14] * v98))
                                      - (float)(a2[13] * v89))
                              - (float)(a2[6] * v86))
                      + (float)(a2[5] * v93);
  v47 = (__m128)*((unsigned int *)a2 + 10);
  v48 = (__m128)*((unsigned int *)a2 + 15);
  v49 = v48;
  v49.m128_f32[0] = v48.m128_f32[0] * v39;
  v50 = a2[14];
  v47.m128_f32[0] = (float)((float)((float)((float)((float)(v47.m128_f32[0] * v41) - v45) + v46) - (float)(a2[10] * v40))
                          - (float)(a2[7] * v33))
                  + (float)(a2[6] * v36);
  v51 = v50 * v40;
  v52 = a2[7];
  v49.m128_f32[0] = (float)((float)((float)((float)(v49.m128_f32[0] - (float)(v50 * v41)) - (float)(a2[15] * v42)) + v51)
                          + (float)(v52 * v37))
                  - (float)(a2[6] * v38);
  v53 = (__m128)*((unsigned int *)a2 + 1);
  v54 = _mm_unpacklo_ps(v49, v47);
  v55 = (__m128)LODWORD(v50);
  v56 = a2[15] * v33;
  v57 = a2[10];
  v53.m128_f32[0] = (float)((float)((float)((float)((float)((float)(v53.m128_f32[0] * a2[11]) * v50)
                                                  - (float)((float)(v53.m128_f32[0] * v57) * v48.m128_f32[0]))
                                          + v56)
                                  - (float)(v50 * v36))
                          - (float)(a2[11] * v37))
                  + (float)(v57 * v38);
  v58 = _mm_unpacklo_ps((__m128)v87, v53);
  v53.m128_f32[0] = a2[6];
  v59 = _mm_movelh_ps(v58, v54);
  v60 = (__m128)*((unsigned int *)a2 + 11);
  v101 = v59;
  v102 = v59;
  v60.m128_f32[0] = (float)((float)((float)((float)((float)(v60.m128_f32[0] * v90) - (float)(v57 * v43))
                                          - (float)(a2[11] * v89))
                                  + (float)(v57 * v44))
                          + (float)(v52 * v91))
                  - (float)(v53.m128_f32[0] * v92);
  v61 = v53.m128_f32[0] * v94;
  v62 = v48;
  v55.m128_f32[0] = (float)((float)((float)((float)((float)(v50 * v43) - (float)(v48.m128_f32[0] * v90))
                                          + (float)(v48.m128_f32[0] * v89))
                                  - (float)(v50 * v44))
                          - (float)(v52 * v93))
                  + v61;
  v62.m128_f32[0] = (float)((float)((float)(v48.m128_f32[0] * v95) - (float)(v50 * v96)) - (float)(v48.m128_f32[0] * v91))
                  + (float)(v50 * v92);
  v63 = a2[11];
  v62.m128_f32[0] = (float)(v62.m128_f32[0] + (float)(v63 * v93)) - (float)(a2[10] * v94);
  v64 = _mm_movelh_ps(_mm_unpacklo_ps(v62, v55), _mm_unpacklo_ps(v60, (__m128)LODWORD(v88)));
  v60.m128_f32[0] = a2[9];
  v65 = (__m128)v60.m128_u32[0];
  *(__m128 *)&v103[4] = v64;
  v66 = (__m128)*((unsigned int *)a2 + 15);
  v65.m128_f32[0] = (float)((float)((float)((float)((float)(v60.m128_f32[0] * v43) - (float)(v63 * v97))
                                          + (float)(v63 * v98))
                                  - (float)(v60.m128_f32[0] * v44))
                          - (float)(v52 * v99))
                  + (float)(a2[5] * v92);
  v67 = a2[13] * v44;
  v68 = a2[5];
  v69 = (__m128)*((unsigned int *)a2 + 13);
  v66.m128_f32[0] = (float)((float)((float)((float)((float)(v66.m128_f32[0] * v97) - (float)(a2[13] * v43))
                                          - (float)(v66.m128_f32[0] * v98))
                                  + v67)
                          + (float)(v52 * v86))
                  - (float)(v68 * v94);
  v69.m128_f32[0] = (float)((float)((float)((float)((float)(v69.m128_f32[0] * v96) - (float)(a2[15] * v100))
                                          + (float)(a2[15] * v99))
                                  - (float)(a2[13] * v92))
                          - (float)(a2[11] * v86))
                  + (float)(a2[9] * v94);
  v70 = a2[9] * v90;
  v71 = a2[9] * v89;
  v64.m128_f32[0] = a2[10];
  *(__m128 *)&v103[20] = _mm_movelh_ps(_mm_unpacklo_ps(v69, v66), _mm_unpacklo_ps(v65, (__m128)LODWORD(v85)));
  v64.m128_f32[0] = (float)((float)((float)((float)(v64.m128_f32[0] * v97) - v70) - (float)(v64.m128_f32[0] * v98)) + v71)
                  + (float)(a2[6] * v99);
  v69.m128_f32[0] = (float)(*(float *)v103 * a2[1]) + (float)(*(float *)&v87 * *a2);
  v72 = a2[3] * v85;
  *(float *)&v103[44] = v64.m128_f32[0] - (float)(v68 * v91);
  v73 = v69.m128_f32[0] + (float)(v72 + (float)(a2[2] * v88));
  if ( v73 != 0.0 )
  {
    v74 = (__m128)0x3F800000u;
    result = (float *)(a1 + 60);
    v74.m128_f32[0] = 1.0 / v73;
    v75 = _mm_shuffle_ps(v74, v74, 0);
    if ( a1 > (unsigned __int64)&v103[44] || result < (float *)&v102 )
    {
      v82 = _mm_mul_ps(*(__m128 *)&v103[16], v75);
      *(__m128 *)a1 = _mm_mul_ps(v101, v75);
      *(__m128 *)(a1 + 16) = _mm_mul_ps(*(__m128 *)v103, v75);
      v83 = _mm_mul_ps(*(__m128 *)&v103[32], v75);
      *(__m128 *)(a1 + 32) = v82;
      *(__m128 *)(a1 + 48) = v83;
    }
    else
    {
      v76 = (char *)&v102 - a1;
      v77 = &v102.m128_i8[-a1 + 4];
      result = (float *)(a1 + 8);
      v78 = 4;
      do
      {
        result += 4;
        v79 = v74.m128_f32[0] * *(float *)((char *)result + (_QWORD)v77 - 24);
        *(result - 6) = v74.m128_f32[0] * *(float *)((char *)result + (_QWORD)v76 - 24);
        v80 = v74.m128_f32[0] * *(float *)((char *)result + (_QWORD)v76 - 16);
        *(result - 5) = v79;
        v81 = v74.m128_f32[0] * *(float *)((char *)result + (_QWORD)v77 - 16);
        *(result - 4) = v80;
        *(result - 3) = v81;
        --v78;
      }
      while ( v78 );
    }
  }
  return result;
}

