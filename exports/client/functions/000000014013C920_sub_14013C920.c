/* Address: 0x14013c920 | Name: sub_14013C920 | Size: 1227 bytes */
void __fastcall sub_14013C920(__int64 a1)
{
  unsigned int *v1; // rbx
  float v2; // xmm6_4
  __m128 v3; // xmm0
  float v4; // xmm1_4
  __m128 v5; // xmm0
  __int64 v6; // rcx
  float v7; // xmm1_4
  __m128 v8; // xmm0
  __int64 v9; // rcx
  float v10; // xmm1_4
  __m128 v11; // xmm0
  __int64 v12; // rcx
  float v13; // xmm1_4
  __m128 v14; // xmm0
  __int64 v15; // rcx
  float v16; // xmm1_4
  __m128 v17; // xmm0
  __int64 v18; // rcx
  float v19; // xmm1_4
  __m128 v20; // xmm0
  __int64 v21; // rcx
  float v22; // xmm1_4
  __m128 v23; // xmm0
  __int64 v24; // rcx
  float v25; // xmm1_4
  __m128 v26; // xmm0
  __int64 v27; // rcx
  float v28; // xmm1_4
  __m128 v29; // xmm0
  __int64 v30; // rcx
  __m128 v31; // xmm0
  __int64 v32; // rcx
  float v33; // xmm1_4
  __m128 v34; // xmm0
  __int64 v35; // rcx
  float v36; // xmm1_4
  __m128 v37; // xmm0
  __int64 v38; // rcx
  float v39; // xmm1_4
  __m128 v40; // xmm0
  __int64 v41; // rcx
  float v42; // xmm1_4
  __m128 v43; // xmm0
  __int64 v44; // rcx
  float v45; // xmm1_4
  __m128 v46; // xmm0
  __int64 v47; // rcx
  float v48; // xmm1_4
  __m128 v49; // xmm0
  __int64 v50; // rcx
  float v51; // xmm1_4
  __m128 v52; // xmm0
  __int64 v53; // rcx
  float v54; // xmm1_4
  __m128 v55; // xmm0
  __int64 v56; // rcx
  float v57; // xmm1_4
  __m128 v58; // xmm0
  __int64 v59; // rcx
  float v60; // xmm1_4
  __m128 v61; // xmm0
  __int64 v62; // rcx
  float v63; // xmm1_4
  __m128 v64; // xmm0
  __int64 v65; // rcx
  float v66; // xmm1_4
  __m128 v67; // xmm0
  __int64 v68; // rcx
  float v69; // xmm1_4
  __m128 v70; // xmm0
  __int64 v71; // rcx
  float v72; // xmm1_4
  __m128 v73; // xmm0
  __int64 v74; // rcx
  float v75; // xmm1_4
  __m128 v76; // xmm0
  __int64 v77; // rcx
  float v78; // xmm1_4
  __m128 v79; // xmm0
  __int64 v80; // rcx
  float v81; // xmm1_4
  __m128 v82; // xmm0
  __int64 v83; // rcx
  float v84; // xmm1_4
  __m128 v85; // xmm0
  __int64 v86; // rcx
  float v87; // xmm1_4
  __m128 v88; // xmm0
  __int64 v89; // rcx
  float v90; // xmm1_4
  __m128 v91; // xmm0
  __int64 v92; // rcx
  float v93; // xmm1_4
  __m128 v94; // xmm0
  __int64 v95; // rcx

  v1 = &dword_140404A6C[346696317];
  v2 = 0.0;
  do
  {
    v3 = 0;
    *(double *)v3.m128_u64 = MEMORY[0x1401F8AC0](a1);
    *(v1 - 2) = v3.m128_i32[0];
    v4 = _mm_shuffle_ps(v3, v3, 1).m128_f32[0];
    v5 = 0;
    *((float *)v1 - 3) = v4;
    *(double *)v5.m128_u64 = MEMORY[0x1401F8AC0](v6);
    *v1 = v5.m128_i32[0];
    v7 = _mm_shuffle_ps(v5, v5, 1).m128_f32[0];
    v8 = 0;
    *((float *)v1 - 1) = v7;
    *(double *)v8.m128_u64 = MEMORY[0x1401F8AC0](v9);
    v1[2] = v8.m128_i32[0];
    v10 = _mm_shuffle_ps(v8, v8, 1).m128_f32[0];
    v11 = 0;
    *((float *)v1 + 1) = v10;
    *(double *)v11.m128_u64 = MEMORY[0x1401F8AC0](v12);
    v1[4] = v11.m128_i32[0];
    v13 = _mm_shuffle_ps(v11, v11, 1).m128_f32[0];
    v14 = 0;
    *((float *)v1 + 3) = v13;
    *(double *)v14.m128_u64 = MEMORY[0x1401F8AC0](v15);
    v1[6] = v14.m128_i32[0];
    v16 = _mm_shuffle_ps(v14, v14, 1).m128_f32[0];
    v17 = 0;
    *((float *)v1 + 5) = v16;
    *(double *)v17.m128_u64 = MEMORY[0x1401F8AC0](v18);
    v1[8] = v17.m128_i32[0];
    v19 = _mm_shuffle_ps(v17, v17, 1).m128_f32[0];
    v20 = 0;
    *((float *)v1 + 7) = v19;
    *(double *)v20.m128_u64 = MEMORY[0x1401F8AC0](v21);
    v1[10] = v20.m128_i32[0];
    v22 = _mm_shuffle_ps(v20, v20, 1).m128_f32[0];
    v23 = 0;
    *((float *)v1 + 9) = v22;
    *(double *)v23.m128_u64 = MEMORY[0x1401F8AC0](v24);
    v1[12] = v23.m128_i32[0];
    v25 = _mm_shuffle_ps(v23, v23, 1).m128_f32[0];
    v26 = 0;
    *((float *)v1 + 11) = v25;
    *(double *)v26.m128_u64 = MEMORY[0x1401F8AC0](v27);
    v1[14] = v26.m128_i32[0];
    v28 = _mm_shuffle_ps(v26, v26, 1).m128_f32[0];
    v29 = 0;
    *((float *)v1 + 13) = v28;
    *(double *)v29.m128_u64 = MEMORY[0x1401F8AC0](v30);
    v1[16] = v29.m128_i32[0];
    v1[15] = _mm_shuffle_ps(v29, v29, 1).m128_u32[0];
    v31 = 0;
    *(double *)v31.m128_u64 = MEMORY[0x1401F8AC0](v32);
    v1[18] = v31.m128_i32[0];
    v33 = _mm_shuffle_ps(v31, v31, 1).m128_f32[0];
    v34 = 0;
    *((float *)v1 + 17) = v33;
    *(double *)v34.m128_u64 = MEMORY[0x1401F8AC0](v35);
    v1[20] = v34.m128_i32[0];
    v36 = _mm_shuffle_ps(v34, v34, 1).m128_f32[0];
    v37 = 0;
    *((float *)v1 + 19) = v36;
    *(double *)v37.m128_u64 = MEMORY[0x1401F8AC0](v38);
    v1[22] = v37.m128_i32[0];
    v39 = _mm_shuffle_ps(v37, v37, 1).m128_f32[0];
    v40 = 0;
    *((float *)v1 + 21) = v39;
    *(double *)v40.m128_u64 = MEMORY[0x1401F8AC0](v41);
    v1[24] = v40.m128_i32[0];
    v42 = _mm_shuffle_ps(v40, v40, 1).m128_f32[0];
    v43 = 0;
    *((float *)v1 + 23) = v42;
    *(double *)v43.m128_u64 = MEMORY[0x1401F8AC0](v44);
    v1[26] = v43.m128_i32[0];
    v45 = _mm_shuffle_ps(v43, v43, 1).m128_f32[0];
    v46 = 0;
    *((float *)v1 + 25) = v45;
    *(double *)v46.m128_u64 = MEMORY[0x1401F8AC0](v47);
    v1[28] = v46.m128_i32[0];
    v48 = _mm_shuffle_ps(v46, v46, 1).m128_f32[0];
    v49 = 0;
    *((float *)v1 + 27) = v48;
    *(double *)v49.m128_u64 = MEMORY[0x1401F8AC0](v50);
    v1[30] = v49.m128_i32[0];
    v51 = _mm_shuffle_ps(v49, v49, 1).m128_f32[0];
    v52 = 0;
    *((float *)v1 + 29) = v51;
    *(double *)v52.m128_u64 = MEMORY[0x1401F8AC0](v53);
    v1[32] = v52.m128_i32[0];
    v54 = _mm_shuffle_ps(v52, v52, 1).m128_f32[0];
    v55 = 0;
    *((float *)v1 + 31) = v54;
    *(double *)v55.m128_u64 = MEMORY[0x1401F8AC0](v56);
    v1[34] = v55.m128_i32[0];
    v57 = _mm_shuffle_ps(v55, v55, 1).m128_f32[0];
    v58 = 0;
    *((float *)v1 + 33) = v57;
    *(double *)v58.m128_u64 = MEMORY[0x1401F8AC0](v59);
    v1[36] = v58.m128_i32[0];
    v60 = _mm_shuffle_ps(v58, v58, 1).m128_f32[0];
    v61 = 0;
    *((float *)v1 + 35) = v60;
    *(double *)v61.m128_u64 = MEMORY[0x1401F8AC0](v62);
    v1[38] = v61.m128_i32[0];
    v63 = _mm_shuffle_ps(v61, v61, 1).m128_f32[0];
    v64 = 0;
    *((float *)v1 + 37) = v63;
    *(double *)v64.m128_u64 = MEMORY[0x1401F8AC0](v65);
    v1[40] = v64.m128_i32[0];
    v66 = _mm_shuffle_ps(v64, v64, 1).m128_f32[0];
    v67 = 0;
    *((float *)v1 + 39) = v66;
    *(double *)v67.m128_u64 = MEMORY[0x1401F8AC0](v68);
    v1[42] = v67.m128_i32[0];
    v69 = _mm_shuffle_ps(v67, v67, 1).m128_f32[0];
    v70 = 0;
    *((float *)v1 + 41) = v69;
    *(double *)v70.m128_u64 = MEMORY[0x1401F8AC0](v71);
    v1[44] = v70.m128_i32[0];
    v72 = _mm_shuffle_ps(v70, v70, 1).m128_f32[0];
    v73 = 0;
    *((float *)v1 + 43) = v72;
    *(double *)v73.m128_u64 = MEMORY[0x1401F8AC0](v74);
    v1[46] = v73.m128_i32[0];
    v75 = _mm_shuffle_ps(v73, v73, 1).m128_f32[0];
    v76 = 0;
    *((float *)v1 + 45) = v75;
    *(double *)v76.m128_u64 = MEMORY[0x1401F8AC0](v77);
    v1[48] = v76.m128_i32[0];
    v78 = _mm_shuffle_ps(v76, v76, 1).m128_f32[0];
    v79 = 0;
    *((float *)v1 + 47) = v78;
    *(double *)v79.m128_u64 = MEMORY[0x1401F8AC0](v80);
    v1[50] = v79.m128_i32[0];
    v81 = _mm_shuffle_ps(v79, v79, 1).m128_f32[0];
    v82 = 0;
    *((float *)v1 + 49) = v81;
    *(double *)v82.m128_u64 = MEMORY[0x1401F8AC0](v83);
    v1[52] = v82.m128_i32[0];
    v84 = _mm_shuffle_ps(v82, v82, 1).m128_f32[0];
    v85 = 0;
    *((float *)v1 + 51) = v84;
    *(double *)v85.m128_u64 = MEMORY[0x1401F8AC0](v86);
    v1[54] = v85.m128_i32[0];
    v87 = _mm_shuffle_ps(v85, v85, 1).m128_f32[0];
    v88 = 0;
    *((float *)v1 + 53) = v87;
    *(double *)v88.m128_u64 = MEMORY[0x1401F8AC0](v89);
    v1[56] = v88.m128_i32[0];
    v90 = _mm_shuffle_ps(v88, v88, 1).m128_f32[0];
    v91 = 0;
    *((float *)v1 + 55) = v90;
    *(double *)v91.m128_u64 = MEMORY[0x1401F8AC0](v92);
    v1[58] = v91.m128_i32[0];
    v93 = _mm_shuffle_ps(v91, v91, 1).m128_f32[0];
    v94 = 0;
    *((float *)v1 + 57) = v93;
    *(double *)v94.m128_u64 = MEMORY[0x1401F8AC0](v95);
    v1[60] = v94.m128_i32[0];
    v2 = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(v2 + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773) + 0.098174773)
                                                                                               + 0.098174773)
                                                                                       + 0.098174773)
                                                                               + 0.098174773)
                                                                       + 0.098174773)
                                                               + 0.098174773)
                                                       + 0.098174773)
                                               + 0.098174773)
                                       + 0.098174773)
                               + 0.098174773)
                       + 0.098174773)
               + 0.098174773)
       + 0.098174773;
    v1[59] = _mm_shuffle_ps(v94, v94, 1).m128_u32[0];
    v1 += 64;
  }
  while ( (__int64)v1 < (__int64)&dword_140404A6C[346696445] );
}

