/* Address: 0x1400bbf30 | Name: sub_1400BBF30 | Size: 2805 bytes */
__int64 __fastcall sub_1400BBF30(
        int a1,
        int a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        __int64 a8,
        float a9)
{
  char v9; // si
  float v12; // xmm10_4
  __int64 v13; // r13
  float v15; // xmm13_4
  float v16; // xmm6_4
  __int64 v17; // rbx
  int v18; // ecx
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm11_4
  float v26; // xmm12_4
  float v27; // xmm2_4
  float v28; // xmm3_4
  float v29; // xmm12_4
  float v30; // xmm11_4
  float v31; // xmm3_4
  float v32; // xmm2_4
  float v33; // xmm11_4
  float v34; // xmm12_4
  float v35; // xmm3_4
  float v36; // xmm15_4
  float v37; // xmm14_4
  float v38; // xmm11_4
  float v39; // xmm13_4
  float v40; // xmm12_4
  float v41; // xmm1_4
  float *v42; // r15
  float v43; // xmm4_4
  float v44; // xmm5_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm5_4
  float v48; // xmm6_4
  float v49; // xmm10_4
  float v50; // xmm7_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm6_4
  float v54; // xmm10_4
  float v55; // xmm7_4
  double v56; // xmm0_8
  float v57; // xmm1_4
  float v58; // xmm6_4
  float v59; // xmm3_4
  float v60; // xmm7_4
  float v61; // xmm4_4
  float v62; // xmm6_4
  float v63; // xmm3_4
  float v64; // xmm7_4
  float v65; // xmm2_4
  float v66; // xmm4_4
  float v67; // xmm5_4
  float v68; // xmm6_4
  float v69; // xmm3_4
  float v70; // xmm7_4
  float v71; // xmm6_4
  float v72; // xmm3_4
  float v73; // xmm7_4
  float v74; // xmm0_4
  float v75; // xmm6_4
  float v76; // xmm3_4
  float v77; // xmm7_4
  float v78; // xmm6_4
  float v79; // xmm3_4
  float v80; // xmm7_4
  float v81; // xmm11_4
  float v82; // xmm12_4
  __int64 result; // rax
  float v84; // xmm0_4
  float v85; // xmm1_4
  float v86; // xmm2_4
  float v87; // xmm0_4
  float v88; // xmm8_4
  float v89; // xmm1_4
  float v90; // xmm10_4
  float v91; // xmm10_4
  float v92; // xmm6_4
  float v93; // xmm2_4
  float v94; // xmm7_4
  float v95; // xmm0_4
  float v96; // xmm5_4
  float v97; // xmm2_4
  float v98; // xmm1_4
  float v99; // xmm0_4
  float v100; // xmm5_4
  float v101; // xmm7_4
  float v102; // xmm6_4
  float v103; // xmm3_4
  float v104; // xmm4_4
  float v105; // xmm3_4
  float v106; // xmm2_4
  float v107; // xmm3_4
  float v108; // xmm7_4
  float v109; // [rsp+20h] [rbp-108h] BYREF
  float v110; // [rsp+24h] [rbp-104h]
  float v111; // [rsp+28h] [rbp-100h]
  float v112; // [rsp+2Ch] [rbp-FCh]
  __m128 v113; // [rsp+30h] [rbp-F8h] BYREF
  float v114; // [rsp+130h] [rbp+8h]
  float v115; // [rsp+138h] [rbp+10h]

  v9 = dword_140404A6C[284024765];
  v12 = 3.0;
  v115 = 3.0;
  v13 = a2;
  if ( LOBYTE(dword_140404A6C[284024765]) && !a1 )
  {
    v12 = 1.0;
    v115 = 1.0;
  }
  v15 = 0.125;
  v16 = 0.125;
  if ( LOBYTE(dword_140404A6C[284024765]) && !a1 )
    v16 = 0.25;
  v17 = 7166LL * a1;
  v18 = dword_140404A6C[v17 + 280651333];
  if ( v18 > 0 )
    v16 = v16 * (float)(1.0 - fminf((float)v18 * 0.033333335, 1.0));
  v19 = *a5 - *a6;
  v20 = a5[2] - a6[2];
  v21 = fsqrt((float)((float)((float)(a5[1] - a6[1]) * (float)(a5[1] - a6[1])) + (float)(v19 * v19)) + (float)(v20 * v20));
  if ( v21 == 0.0 )
  {
    v23 = 0.0;
    v22 = 0.0;
  }
  else
  {
    v22 = (float)(1.0 / v21) * v20;
    v23 = (float)(1.0 / v21) * v19;
  }
  if ( !LOBYTE(dword_140404A6C[284024765]) || a1 )
    v24 = 0.5;
  else
    v24 = 0.9375;
  v25 = (float)((float)((float)(*a7 - *(float *)&dword_140404A6C[v17 + 280657914]) - (float)(v23 * 0.32666668)) * 0.375)
      - (float)((float)(*(float *)&dword_140404A6C[v17 + 280657933] - *(float *)&dword_140404A6C[v17 + 280657992]) * v24);
  v26 = (float)((float)((float)(a7[2] - *(float *)&dword_140404A6C[v17 + 280657916]) - (float)(v22 * 0.32666668)) * 0.375)
      - (float)((float)(*(float *)&dword_140404A6C[v17 + 280657935] - *(float *)&dword_140404A6C[v17 + 280657994]) * v24);
  v27 = fsqrt((float)(v25 * v25) + (float)(v26 * v26));
  if ( v27 > 0.25 )
  {
    v25 = (float)(v25 * (float)(1.0 / v27)) * 0.25;
    v26 = (float)(v26 * (float)(1.0 / v27)) * 0.25;
  }
  v28 = fmaxf(
          (float)((float)(a7[1] - *(float *)&dword_140404A6C[v17 + 280657915]) * 0.375)
        - (float)((float)(*(float *)&dword_140404A6C[v17 + 280657934] - *(float *)&dword_140404A6C[v17 + 280657993])
                * v24),
          -0.125);
  if ( v28 > 0.125 )
    v28 = 0.125;
  v29 = v26 - *(float *)&dword_140404A6C[v17 + 280657935];
  v30 = v25 - *(float *)&dword_140404A6C[v17 + 280657933];
  v31 = v28 - *(float *)&dword_140404A6C[v17 + 280657934];
  v32 = fsqrt((float)(v30 * v30) + (float)(v29 * v29));
  if ( v32 > v16 )
  {
    if ( v32 == 0.0 )
    {
      v33 = 0.0;
      v34 = 0.0;
    }
    else
    {
      v33 = v30 * (float)(1.0 / v32);
      v34 = v29 * (float)(1.0 / v32);
    }
    v30 = v33 * v16;
    v29 = v34 * v16;
  }
  v35 = fmaxf(v31, -0.125);
  if ( v35 <= 0.125 )
  {
    v15 = v35;
    if ( v35 < -0.03125 || v35 < 0.0 )
      v15 = 0.0;
  }
  v36 = 0.09375;
  v37 = 0.25;
  v38 = v30 * v12;
  v39 = v15 * v12;
  v40 = v29 * v12;
  if ( LOBYTE(dword_140404A6C[284024765]) && !a1 )
    v36 = 0.1875;
  if ( v18 > 0 )
  {
    v41 = 1.0 - fminf((float)v18 * 0.033333335, 1.0);
    v36 = v36 * v41;
    v37 = v41 * 0.25;
  }
  sub_14010E370(&v109, a8);
  v42 = (float *)&dword_140404A6C[v17 + 280651293];
  sub_14010E370(&v113, &dword_140404A6C[v17 + 280657917]);
  v43 = v113.m128_f32[2];
  v44 = v113.m128_f32[0];
  v114 = v113.m128_f32[3];
  if ( (float)((float)((float)(v112 * v113.m128_f32[3]) + (float)(v111 * v113.m128_f32[2]))
             + (float)((float)(v109 * v113.m128_f32[0]) + (float)(v110 * v113.m128_f32[1]))) >= 0.0 )
  {
    v45 = v113.m128_f32[3];
  }
  else
  {
    v113 = _mm_xor_ps(v113, (__m128)xmmword_140279870);
    v43 = v113.m128_f32[2];
    v44 = v113.m128_f32[0];
    v45 = _mm_shuffle_ps(v113, v113, 255).m128_f32[0];
    v114 = v45;
  }
  v46 = -v43;
  v47 = -v44;
  v48 = (float)((float)((float)(v112 * v47) + (float)(v45 * v109))
              + (float)(v111 * COERCE_FLOAT(v113.m128_i32[1] ^ 0x80000000)))
      - (float)(v110 * v46);
  v49 = (float)((float)((float)(v114 * v110) - (float)(v111 * v47))
              + (float)(v112 * COERCE_FLOAT(v113.m128_i32[1] ^ 0x80000000)))
      + (float)(v109 * v46);
  v50 = (float)((float)((float)(v110 * v47) + (float)(v114 * v111))
              - (float)(v109 * COERCE_FLOAT(v113.m128_i32[1] ^ 0x80000000)))
      + (float)(v112 * v46);
  v51 = (float)((float)((float)(v112 * v114) - (float)(v109 * v47))
              - (float)(v110 * COERCE_FLOAT(v113.m128_i32[1] ^ 0x80000000)))
      - (float)(v111 * v46);
  v52 = fsqrt((float)((float)(v49 * v49) + (float)(v48 * v48)) + (float)(v50 * v50));
  if ( v52 == 0.0 )
  {
    v53 = 0.0;
    v54 = 0.0;
    v55 = 0.0;
  }
  else
  {
    v53 = v48 * (float)(1.0 / v52);
    v54 = v49 * (float)(1.0 / v52);
    v55 = v50 * (float)(1.0 / v52);
  }
  v56 = acos(fminf(fmaxf(v51, -1.0), 1.0));
  v57 = v56 + v56;
  v58 = v53 * v57;
  v59 = v57 * v54;
  v60 = v55 * v57;
  v61 = fsqrt((float)((float)(v58 * v58) + (float)(v59 * v59)) + (float)(v60 * v60));
  if ( v61 > v37 )
  {
    if ( v61 == 0.0 )
    {
      v62 = 0.0;
      v63 = 0.0;
      v64 = 0.0;
    }
    else
    {
      v62 = v58 * (float)(1.0 / v61);
      v63 = v59 * (float)(1.0 / v61);
      v64 = v60 * (float)(1.0 / v61);
    }
    v58 = v62 * v37;
    v59 = v63 * v37;
    v60 = v64 * v37;
  }
  if ( !v9 || a1 )
  {
    v65 = *(float *)&dword_140404A6C[v17 + 280657936];
    v66 = *(float *)&dword_140404A6C[v17 + 280657937];
    v67 = *(float *)&dword_140404A6C[v17 + 280657938];
    v68 = v58 + (float)(v65 * -2.0);
    v69 = v59 + (float)(v66 * -2.0);
    v70 = v60 + (float)(v67 * -2.0);
  }
  else
  {
    v65 = *(float *)&dword_140404A6C[v17 + 280657936];
    v66 = *(float *)&dword_140404A6C[v17 + 280657937];
    v67 = *(float *)&dword_140404A6C[v17 + 280657938];
    v68 = (float)(v58 * 0.75) - (float)(v65 * 1.75);
    v69 = (float)(v59 * 0.75) - (float)(v66 * 1.75);
    v70 = (float)(v60 * 0.75) - (float)(v67 * 1.75);
  }
  v71 = v68 - v65;
  v72 = v69 - v66;
  v73 = v70 - v67;
  v74 = fsqrt((float)((float)(v72 * v72) + (float)(v71 * v71)) + (float)(v73 * v73));
  if ( v74 > v36 )
  {
    if ( v74 == 0.0 )
    {
      v75 = 0.0;
      v76 = 0.0;
      v77 = 0.0;
    }
    else
    {
      v75 = v71 * (float)(1.0 / v74);
      v76 = v72 * (float)(1.0 / v74);
      v77 = v73 * (float)(1.0 / v74);
    }
    v71 = v75 * v36;
    v72 = v76 * v36;
    v73 = v77 * v36;
  }
  v78 = v71 * v115;
  v79 = v72 * v115;
  v80 = v73 * v115;
  *a4 = v78;
  a4[1] = v79;
  a4[2] = v80;
  v81 = v38 * a9;
  v82 = v40 * a9;
  if ( !dword_140404A6C[234 * (int)v13 + 280652451 + v17] )
    v39 = v39 * (float)((float)(a9 * 0.75) + 0.25);
  result = v17 * 4 + 12 * v13;
  *a4 = v78 * a9;
  a4[2] = v80 * a9;
  a4[1] = v79 * a9;
  v84 = *a5;
  *a3 = *a5;
  v85 = a5[1];
  a3[1] = v85;
  v86 = a5[2];
  a3[2] = v86;
  v87 = v84 + *(float *)&dword_140404A6C[v17 + 280657992];
  *a3 = v87;
  v88 = v81 + v87;
  v89 = v85 + *(float *)&dword_140404A6C[v17 + 280657993];
  a3[1] = v89;
  v90 = *(float *)&dword_140404A6C[v17 + 280657994];
  *a3 = v81 + v87;
  a3[1] = v39 + v89;
  v91 = (float)(v90 + v86) + v82;
  a3[2] = v91;
  v92 = a5[1] - *(float *)&dword_140404A6C[v17 + 280657915];
  v93 = a5[2] - *(float *)&dword_140404A6C[v17 + 280657916];
  v94 = *a5 - *(float *)&dword_140404A6C[v17 + 280657914];
  v95 = (float)(*a4 * v93) - (float)(a4[2] * v94);
  v96 = (float)((float)(a4[1] * v94) - (float)(*a4 * v92)) + v91;
  *a3 = (float)((float)(a4[2] * v92) - (float)(a4[1] * v93)) + v88;
  a3[2] = v96;
  a3[1] = v95 + (float)(v39 + v89);
  *(_QWORD *)((char *)&dword_140404A6C[280657945] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[280657947] + result) = 0;
  v97 = *a5 - *(float *)&dword_140404A6C[v17 + 280657914];
  v98 = a5[2] - *(float *)&dword_140404A6C[v17 + 280657916];
  v99 = a5[1] - *(float *)&dword_140404A6C[v17 + 280657915];
  v100 = (float)(v98 * v39) - (float)(v99 * v82);
  v101 = (float)(v97 * v82) - (float)(v98 * v81);
  v102 = (float)(v99 * v81) - (float)(v97 * v39);
  v103 = -(float)((float)((float)(v101 * v42[6625]) + (float)(v100 * v42[6624])) + (float)(v102 * v42[6626]));
  v104 = v103 * v42[6624];
  *(float *)((char *)&dword_140404A6C[280657945] + result) = v104;
  *(float *)((char *)&dword_140404A6C[280657946] + result) = (float)(v103 * *(float *)&dword_140404A6C[v17 + 280657918])
                                                           + *(float *)((char *)&dword_140404A6C[280657946] + result);
  *(float *)((char *)&dword_140404A6C[280657947] + result) = (float)(v103 * *(float *)&dword_140404A6C[v17 + 280657919])
                                                           + *(float *)((char *)&dword_140404A6C[280657947] + result);
  v105 = *(float *)&dword_140404A6C[v17 + 280657920];
  v106 = (float)((float)((float)(v101 * *(float *)&dword_140404A6C[v17 + 280657921]) + (float)(v100 * v105))
               + (float)(v102 * *(float *)&dword_140404A6C[v17 + 280657922]))
       * -0.25;
  v107 = (float)(v105 * v106) + v104;
  *(float *)((char *)&dword_140404A6C[280657945] + result) = v107;
  *(float *)((char *)&dword_140404A6C[280657946] + result) = (float)(v106 * *(float *)&dword_140404A6C[v17 + 280657921])
                                                           + *(float *)((char *)&dword_140404A6C[280657946] + result);
  *(float *)((char *)&dword_140404A6C[280657947] + result) = (float)(v106 * *(float *)&dword_140404A6C[v17 + 280657922])
                                                           + *(float *)((char *)&dword_140404A6C[280657947] + result);
  v108 = (float)((float)((float)(v101 * *(float *)&dword_140404A6C[v17 + 280657924])
                       + (float)(*(float *)&dword_140404A6C[v17 + 280657923] * v100))
               + (float)(v102 * *(float *)&dword_140404A6C[v17 + 280657925]))
       * -2.0;
  *(float *)((char *)&dword_140404A6C[280657945] + result) = (float)(*(float *)&dword_140404A6C[v17 + 280657923] * v108)
                                                           + v107;
  *(float *)((char *)&dword_140404A6C[280657946] + result) = (float)(v108 * *(float *)&dword_140404A6C[v17 + 280657924])
                                                           + *(float *)((char *)&dword_140404A6C[280657946] + result);
  *(float *)((char *)&dword_140404A6C[280657947] + result) = (float)(v108 * *(float *)&dword_140404A6C[v17 + 280657925])
                                                           + *(float *)((char *)&dword_140404A6C[280657947] + result);
  return result;
}

