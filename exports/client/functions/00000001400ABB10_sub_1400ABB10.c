/* Address: 0x1400abb10 | Name: sub_1400ABB10 | Size: 2584 bytes */
__int64 __fastcall sub_1400ABB10(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // rbx
  float v4; // xmm1_4
  unsigned int v5; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm6_4
  unsigned int v8; // xmm0_4
  unsigned int v9; // xmm1_4
  unsigned int v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm2_4
  float v16; // xmm10_4
  float v17; // xmm6_4
  float v18; // xmm9_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm9_4
  float v23; // xmm7_4
  float v24; // xmm3_4
  unsigned int v25; // xmm7_4
  float v26; // xmm12_4
  float v27; // xmm1_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm12_4
  float v31; // xmm10_4
  float v32; // xmm4_4
  float *v33; // rax
  __int64 v34; // rcx
  float v35; // xmm10_4
  float v36; // xmm1_4
  float v37; // xmm6_4
  float v38; // xmm15_4
  float v39; // xmm2_4
  float v40; // xmm13_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm11_4
  float v44; // xmm8_4
  float v45; // xmm0_4
  float v46; // xmm14_4
  float v47; // xmm8_4
  float v48; // xmm5_4
  float v49; // xmm10_4
  float v50; // xmm0_4
  float v51; // xmm5_4
  float v52; // xmm10_4
  float v53; // xmm12_4
  float v54; // xmm7_4
  float v55; // xmm12_4
  float v56; // xmm0_4
  float v57; // xmm9_4
  float v58; // xmm6_4
  float v59; // xmm15_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm0_4
  float v63; // xmm3_4
  float v64; // xmm3_4
  unsigned int *v65; // rsi
  float v66; // xmm5_4
  float v67; // xmm4_4
  float v68; // xmm6_4
  __m128 v69; // xmm3
  float v70; // xmm4_4
  float v71; // xmm6_4
  float v72; // xmm5_4
  float v73; // xmm0_4
  double v74; // xmm2_8
  __m128d v75; // xmm3
  double v76; // xmm3_8
  float v78; // [rsp+20h] [rbp-108h]
  __m128 v79; // [rsp+28h] [rbp-100h] BYREF
  float v80; // [rsp+40h] [rbp-E8h]
  float v81; // [rsp+44h] [rbp-E4h]
  float v82; // [rsp+48h] [rbp-E0h]
  float v83; // [rsp+4Ch] [rbp-DCh]
  float v84; // [rsp+50h] [rbp-D8h]
  float v85; // [rsp+54h] [rbp-D4h]
  float v86; // [rsp+58h] [rbp-D0h]
  float v87; // [rsp+5Ch] [rbp-CCh]
  float v88; // [rsp+60h] [rbp-C8h]
  float v89; // [rsp+64h] [rbp-C4h]

  v1 = 0;
  v2 = a1;
  v3 = 7166LL * a1;
  *(_QWORD *)&dword_140404A6C[v3 + 280657914] = 0;
  dword_140404A6C[v3 + 280657916] = 0;
  v4 = *(float *)&dword_140404A6C[v3 + 280651472];
  *(float *)&v5 = v4 * *(float *)&dword_140404A6C[v3 + 280651440];
  dword_140404A6C[v3 + 280657914] = v5;
  *(float *)&dword_140404A6C[v3 + 280657915] = v4 * *(float *)&dword_140404A6C[v3 + 280651441];
  *(float *)&dword_140404A6C[v3 + 280657916] = v4 * *(float *)&dword_140404A6C[v3 + 280651442];
  v6 = *(float *)&dword_140404A6C[v3 + 280651550];
  v7 = *(float *)&dword_140404A6C[v3 + 280651472];
  *(float *)&v8 = (float)(v6 * *(float *)&dword_140404A6C[v3 + 280651518]) + *(float *)&v5;
  dword_140404A6C[v3 + 280657914] = v8;
  *(float *)&v9 = (float)(v6 * *(float *)&dword_140404A6C[v3 + 280651519]) + *(float *)&dword_140404A6C[v3 + 280657915];
  dword_140404A6C[v3 + 280657915] = v9;
  *(float *)&v10 = (float)(v6 * *(float *)&dword_140404A6C[v3 + 280651520]) + *(float *)&dword_140404A6C[v3 + 280657916];
  dword_140404A6C[v3 + 280657916] = v10;
  v11 = *(float *)&dword_140404A6C[v3 + 280651628];
  v12 = v7 + *(float *)&dword_140404A6C[v3 + 280651550];
  v13 = (float)(v11 * *(float *)&dword_140404A6C[v3 + 280651596]) + *(float *)&v8;
  *(float *)&dword_140404A6C[v3 + 280657914] = v13;
  v14 = (float)(v11 * *(float *)&dword_140404A6C[v3 + 280651597]) + *(float *)&v9;
  *(float *)&dword_140404A6C[v3 + 280657915] = v14;
  v15 = (float)(v11 * *(float *)&dword_140404A6C[v3 + 280651598]) + *(float *)&v10;
  *(float *)&dword_140404A6C[v3 + 280657916] = v15;
  v16 = *(float *)&dword_140404A6C[v3 + 280651628];
  v17 = v12 + v16;
  if ( v17 > 0.0 )
  {
    *(float *)&dword_140404A6C[v3 + 280657914] = v13 * (float)(1.0 / v17);
    *(float *)&dword_140404A6C[v3 + 280657915] = v14 * (float)(1.0 / v17);
    *(float *)&dword_140404A6C[v3 + 280657916] = v15 * (float)(1.0 / v17);
    v16 = *(float *)&dword_140404A6C[v3 + 280651628];
  }
  v18 = *(float *)&dword_140404A6C[v3 + 280651472];
  v19 = *(float *)&dword_140404A6C[v3 + 280651550];
  v20 = *(float *)&dword_140404A6C[v3 + 280651446] * v18;
  v21 = (float)(v16 * *(float *)&dword_140404A6C[v3 + 280651604])
      + (float)((float)(v19 * *(float *)&dword_140404A6C[v3 + 280651526])
              + (float)(v18 * *(float *)&dword_140404A6C[v3 + 280651448]));
  v22 = (float)(v18 + v19) + v16;
  v23 = (float)(v16 * *(float *)&dword_140404A6C[v3 + 280651602])
      + (float)((float)(*(float *)&dword_140404A6C[v3 + 280651524] * v19) + v20);
  v24 = (float)(v16 * *(float *)&dword_140404A6C[v3 + 280651603])
      + (float)((float)(v19 * *(float *)&dword_140404A6C[v3 + 280651525])
              + (float)(*(float *)&dword_140404A6C[v3 + 280651472] * *(float *)&dword_140404A6C[v3 + 280651447]));
  if ( v22 > 0.0 )
  {
    v23 = v23 * (float)(1.0 / v22);
    v24 = v24 * (float)(1.0 / v22);
    v21 = v21 * (float)(1.0 / v22);
  }
  *(float *)&dword_140404A6C[v3 + 280657931] = *(float *)&dword_140404A6C[v3 + 280657931] * 0.5;
  *(float *)&dword_140404A6C[v3 + 280657932] = *(float *)&dword_140404A6C[v3 + 280657932] * 0.5;
  *(float *)&v25 = (float)(v23 + *(float *)&dword_140404A6C[v3 + 280657930]) * 0.5;
  dword_140404A6C[v3 + 280657930] = v25;
  *(float *)&dword_140404A6C[v3 + 280657931] = (float)(v24 * 0.5) + *(float *)&dword_140404A6C[v3 + 280657931];
  *(float *)&dword_140404A6C[v3 + 280657932] = (float)(v21 * 0.5) + *(float *)&dword_140404A6C[v3 + 280657932];
  *(float *)&dword_140404A6C[v3 + 280657933] = *(float *)&v25 - *(float *)&dword_140404A6C[v3 + 280657986];
  *(float *)&dword_140404A6C[v3 + 280657934] = *(float *)&dword_140404A6C[v3 + 280657931]
                                             - *(float *)&dword_140404A6C[v3 + 280657987];
  *(float *)&dword_140404A6C[v3 + 280657935] = *(float *)&dword_140404A6C[v3 + 280657932]
                                             - *(float *)&dword_140404A6C[v3 + 280657988];
  v26 = *(float *)&dword_140404A6C[v3 + 280651472];
  v27 = *(float *)&dword_140404A6C[v3 + 280651550];
  v28 = *(float *)&dword_140404A6C[v3 + 280651461] * v26;
  v29 = (float)(*(float *)&dword_140404A6C[v3 + 280651628] * *(float *)&dword_140404A6C[v3 + 280651619])
      + (float)((float)(v27 * *(float *)&dword_140404A6C[v3 + 280651541])
              + (float)(v26 * *(float *)&dword_140404A6C[v3 + 280651463]));
  v30 = (float)(v26 + v27) + *(float *)&dword_140404A6C[v3 + 280651628];
  v31 = (float)(*(float *)&dword_140404A6C[v3 + 280651628] * *(float *)&dword_140404A6C[v3 + 280651617])
      + (float)((float)(*(float *)&dword_140404A6C[v3 + 280651539] * v27) + v28);
  v32 = (float)(*(float *)&dword_140404A6C[v3 + 280651628] * *(float *)&dword_140404A6C[v3 + 280651618])
      + (float)((float)(v27 * *(float *)&dword_140404A6C[v3 + 280651540])
              + (float)(*(float *)&dword_140404A6C[v3 + 280651472] * *(float *)&dword_140404A6C[v3 + 280651462]));
  if ( v30 > 0.0 )
  {
    v31 = v31 * (float)(1.0 / v30);
    v32 = v32 * (float)(1.0 / v30);
    v29 = v29 * (float)(1.0 / v30);
  }
  v33 = (float *)&dword_140404A6C[v3 + 280651463];
  v34 = 2;
  *(float *)&dword_140404A6C[v3 + 280657937] = *(float *)&dword_140404A6C[v3 + 280657937] * 0.5;
  *(float *)&dword_140404A6C[v3 + 280657938] = *(float *)&dword_140404A6C[v3 + 280657938] * 0.5;
  v35 = v31 + *(float *)&dword_140404A6C[v3 + 280657936];
  v82 = 0.0;
  v78 = 0.0;
  v80 = 0.0;
  v81 = 0.0;
  *(float *)&dword_140404A6C[v3 + 280657936] = v35 * 0.5;
  *(float *)&dword_140404A6C[v3 + 280657937] = (float)(v32 * 0.5) + *(float *)&dword_140404A6C[v3 + 280657937];
  *(float *)&dword_140404A6C[v3 + 280657938] = (float)(v29 * 0.5) + *(float *)&dword_140404A6C[v3 + 280657938];
  do
  {
    v36 = v33[9];
    v37 = v33[477];
    v38 = v36 * *(v33 - 2);
    v39 = v37 * v33[467];
    v40 = v33[555];
    v83 = v36 * *(v33 - 1);
    v41 = v36 * *v33;
    v42 = v33[87];
    v43 = v42 * v33[76];
    v86 = v41;
    v84 = v42 * v33[77];
    v87 = v42 * v33[78];
    v44 = v33[165];
    v45 = v44 * v33[156];
    v46 = v44 * v33[155];
    v47 = v44 * v33[154];
    v88 = v45;
    v48 = v33[243];
    v85 = v46;
    v49 = v48;
    v50 = v48 * v33[234];
    v51 = v48 * v33[232];
    v52 = v49 * v33[233];
    v89 = v50;
    v53 = v33[321];
    v54 = v53 * v33[311];
    v55 = v53 * v33[312];
    v56 = v37 * v33[466];
    v57 = v33[399] * v33[390];
    v58 = v37 * v33[468];
    v59 = (float)((float)((float)((float)((float)((float)((float)(v78 + v38) + v43) + v47) + v51)
                                + (float)(v33[321] * v33[310]))
                        + (float)(v33[399] * v33[388]))
                + v56)
        + (float)(v40 * v33[544]);
    v78 = v59;
    v60 = (float)((float)((float)((float)((float)((float)((float)(v80 + v83) + v84) + v46) + v52) + v54)
                        + (float)(v33[399] * v33[389]))
                + v39)
        + (float)(v40 * v33[545]);
    v80 = v60;
    v61 = (float)((float)((float)((float)((float)((float)((float)(v81 + v86) + v87) + v88) + v89) + v55) + v57) + v58)
        + (float)(v40 * v33[546]);
    v62 = v33[9] + v82;
    v81 = v61;
    v63 = (float)((float)((float)((float)((float)(v62 + v33[87]) + v33[165]) + v33[243]) + v33[321]) + v33[399])
        + v33[477];
    v33 += 624;
    v64 = v63 + v40;
    v82 = v64;
    --v34;
  }
  while ( v34 );
  if ( v64 > 0.0 )
  {
    v59 = v59 * (float)(1.0 / v64);
    v60 = v60 * (float)(1.0 / v64);
    v61 = v61 * (float)(1.0 / v64);
  }
  *(float *)&dword_140404A6C[v3 + 280657942] = v59;
  *(float *)&dword_140404A6C[v3 + 280657943] = v60;
  *(float *)&dword_140404A6C[v3 + 280657944] = v61;
  v65 = &dword_140404A6C[v3 + 280657917];
  *v65 = dword_140404A6C[v3 + 280651452];
  v65[1] = dword_140404A6C[v3 + 280651453];
  v65[2] = dword_140404A6C[v3 + 280651454];
  v65[3] = dword_140404A6C[v3 + 280651455];
  v65[4] = dword_140404A6C[v3 + 280651456];
  v65[5] = dword_140404A6C[v3 + 280651457];
  v65[6] = dword_140404A6C[v3 + 280651458];
  v65[7] = dword_140404A6C[v3 + 280651459];
  v65[8] = dword_140404A6C[v3 + 280651460];
  sub_14010E370(&v79, v65);
  v66 = v79.m128_f32[3];
  v67 = v79.m128_f32[2];
  v68 = v79.m128_f32[1];
  v69 = (__m128)v79.m128_u32[0];
  if ( (float)((float)((float)(v79.m128_f32[3] * *(float *)&dword_140404A6C[v3 + 280657929])
                     + (float)(v79.m128_f32[2] * *(float *)&dword_140404A6C[v3 + 280657928]))
             + (float)((float)(v79.m128_f32[1] * *(float *)&dword_140404A6C[v3 + 280657927])
                     + (float)(v79.m128_f32[0] * *(float *)&dword_140404A6C[v3 + 280657926]))) < 0.0 )
  {
    v79 = _mm_xor_ps(v79, (__m128)xmmword_140279870);
    v67 = v79.m128_f32[2];
    v68 = v79.m128_f32[1];
    v69 = (__m128)v79.m128_u32[0];
    v66 = _mm_shuffle_ps(v79, v79, 255).m128_f32[0];
  }
  v70 = v67 + *(float *)&dword_140404A6C[7166 * v2 + 280657928];
  v71 = v68 + *(float *)&dword_140404A6C[7166 * v2 + 280657927];
  v72 = v66 + *(float *)&dword_140404A6C[7166 * v2 + 280657929];
  v73 = v69.m128_f32[0] + *(float *)&dword_140404A6C[7166 * v2 + 280657926];
  v79.m128_f32[0] = v73 * 0.5;
  v79.m128_f32[1] = v71 * 0.5;
  v79.m128_f32[2] = v70 * 0.5;
  v79.m128_f32[3] = v72 * 0.5;
  v69.m128_f32[0] = (float)((float)((float)(v73 * v73) + (float)(v71 * v71))
                          + (float)((float)(v70 * v70) + (float)(v72 * v72)))
                  * 0.25;
  v74 = _mm_sqrt_pd(_mm_cvtps_pd(v69)).m128d_f64[0];
  if ( v74 == 0.0 )
  {
    v79 = (__m128)xmmword_140279490;
  }
  else
  {
    v75 = (__m128d)0x3FF0000000000000uLL;
    v75.m128d_f64[0] = 1.0 / v74;
    v76 = _mm_unpacklo_pd(v75, v75).m128d_f64[0];
    do
    {
      *(double *)&v79.m128_u64[v1] = COERCE_FLOAT(v79.m128_u64[v1]) * v76;
      ++v1;
    }
    while ( v1 < 2 );
  }
  *(__m128 *)&dword_140404A6C[v3 + 280657926] = v79;
  return sub_14011C340(&dword_140404A6C[v3 + 280657917], &v79);
}

