/* Address: 0x1400054f0 | Name: sub_1400054F0 | Size: 4533 bytes */
__int64 __fastcall sub_1400054F0(float *a1, float *a2, float a3, float a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  unsigned int v8; // r15d
  __m128 v9; // xmm9
  __int64 v10; // r14
  float v11; // xmm14_4
  __m128d v12; // xmm8
  __m128d v13; // xmm0
  int v14; // eax
  float v15; // xmm4_4
  double v16; // xmm7_8
  double v17; // xmm10_8
  float v18; // xmm6_4
  float v19; // xmm1_4
  float v20; // xmm6_4
  float v21; // xmm5_4
  __int64 v22; // rax
  float v23; // xmm4_4
  float v24; // xmm6_4
  float v25; // xmm5_4
  __m128 v26; // xmm7
  __m128d v27; // xmm9
  unsigned int v28; // ebx
  int v29; // eax
  float v30; // xmm4_4
  float v31; // xmm6_4
  float v32; // xmm1_4
  float v33; // xmm6_4
  float v34; // xmm5_4
  __int64 v35; // rax
  float v36; // xmm6_4
  float v37; // xmm4_4
  float v38; // xmm5_4
  float v39; // xmm11_4
  __m128d v40; // xmm8
  double v41; // xmm0_8
  int v42; // eax
  double v43; // xmm7_8
  float v44; // xmm5_4
  float v45; // xmm6_4
  float v46; // xmm6_4
  float v47; // xmm1_4
  float v48; // xmm4_4
  __int64 v49; // rax
  float v50; // xmm6_4
  float v51; // xmm4_4
  float v52; // xmm5_4
  __m128 v53; // xmm7
  __m128d v54; // xmm9
  __m128d v55; // xmm0
  unsigned int v56; // ebx
  int v57; // eax
  float v58; // xmm5_4
  float v59; // xmm6_4
  float v60; // xmm6_4
  float v61; // xmm1_4
  float v62; // xmm4_4
  __int64 v63; // rax
  float v64; // xmm6_4
  float v65; // xmm4_4
  float v66; // xmm5_4
  float v67; // xmm6_4
  float v68; // xmm4_4
  float v69; // xmm3_4
  __int64 v70; // rcx
  float v71; // xmm5_4
  __int64 v72; // rax
  float v73; // xmm4_4
  float v74; // xmm6_4
  float v75; // xmm5_4
  float v76; // xmm4_4
  float v77; // xmm5_4
  __int64 v78; // rcx
  float v79; // xmm11_4
  float v80; // xmm0_4
  float v81; // xmm6_4
  float v82; // xmm4_4
  float v83; // xmm5_4
  __int64 result; // rax
  unsigned int v85; // ebp
  unsigned int v86; // r14d
  unsigned int v87; // esi
  __int64 v88; // r12
  unsigned int v89; // edx
  unsigned int v90; // edx
  unsigned int v91; // r8d
  unsigned int v92; // edx
  unsigned int v93; // r9d
  unsigned int v94; // r8d
  unsigned int v95; // edx
  unsigned int v96; // r10d

  v4 = dword_140404A6C[177167565];
  v5 = 8;
  v8 = dword_140404A6C[177167565];
  v9 = 0;
  v10 = 8;
  v11 = 0.0;
  do
  {
    v12 = _mm_cvtps_pd(v9);
    v13.m128d_f64[1] = v12.m128d_f64[1];
    v13.m128d_f64[0] = MEMORY[0x1401F8A50]();
    v14 = 3 * v4;
    v15 = a1[2];
    v16 = v13.m128d_f64[0];
    v17 = a3;
    v18 = _mm_shuffle_pd(v13, v13, 1).m128d_f64[0] * a3;
    v19 = a3 * v13.m128d_f64[0];
    v20 = v18 + *a1;
    v21 = a1[1] - v19;
    *(float *)&dword_140404A6C[v14 + 177167567] = (float)((float)(v21 * a2[3]) + (float)(v20 * *a2))
                                                + (float)(v15 * a2[6]);
    *(float *)&dword_140404A6C[v14 + 177167568] = (float)((float)(v21 * a2[4]) + (float)(v20 * a2[1]))
                                                + (float)(v15 * a2[7]);
    *(float *)&dword_140404A6C[v14 + 177167569] = (float)((float)(v21 * a2[5]) + (float)(v20 * a2[2]))
                                                + (float)(v15 * a2[8]);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = cosf(v9.m128_f32[0]);
    *(float *)v13.m128d_f64 = -v16;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = LODWORD(v13.m128d_f64[0]);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v22 = 3 * dword_140404A6C[177167565];
    v23 = *(float *)&dword_140404A6C[v22 + 177249487];
    v24 = *(float *)&dword_140404A6C[v22 + 177249488];
    v25 = *(float *)&dword_140404A6C[v22 + 177249489];
    *(float *)&dword_140404A6C[v22 + 177249487] = (float)((float)(v24 * a2[3]) + (float)(v23 * *a2))
                                                + (float)(v25 * a2[6]);
    v12.m128d_f64[0] = v12.m128d_f64[0] + 0.39269908169875;
    v26 = _mm_cvtpd_ps(v12);
    *(float *)&dword_140404A6C[v22 + 177249488] = (float)((float)(v24 * a2[4]) + (float)(v23 * a2[1]))
                                                + (float)(v25 * a2[7]);
    v27 = _mm_cvtps_pd(v26);
    v13.m128d_f64[1] = v27.m128d_f64[1];
    *(float *)&dword_140404A6C[v22 + 177249489] = (float)((float)(v24 * a2[5]) + (float)(v23 * a2[2]))
                                                + (float)(v25 * a2[8]);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v28 = dword_140404A6C[177167565];
    v13.m128d_f64[0] = MEMORY[0x1401F8A50]();
    v29 = 3 * v28;
    v30 = a1[2];
    v12.m128d_f64[0] = v13.m128d_f64[0];
    v31 = _mm_shuffle_pd(v13, v13, 1).m128d_f64[0] * a3;
    v32 = a3 * v13.m128d_f64[0];
    v33 = v31 + *a1;
    v34 = a1[1] - v32;
    *(float *)&dword_140404A6C[v29 + 177167567] = (float)((float)(v34 * a2[3]) + (float)(v33 * *a2))
                                                + (float)(v30 * a2[6]);
    *(float *)&dword_140404A6C[v29 + 177167568] = (float)((float)(v34 * a2[4]) + (float)(v33 * a2[1]))
                                                + (float)(v30 * a2[7]);
    *(float *)&dword_140404A6C[v29 + 177167569] = (float)((float)(v34 * a2[5]) + (float)(v33 * a2[2]))
                                                + (float)(v30 * a2[8]);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = cosf(v26.m128_f32[0]);
    *(float *)v13.m128d_f64 = -v12.m128d_f64[0];
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = LODWORD(v13.m128d_f64[0]);
    v27.m128d_f64[0] = v27.m128d_f64[0] + 0.39269908169875;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v9 = _mm_cvtpd_ps(v27);
    v35 = 3 * dword_140404A6C[177167565];
    v36 = *(float *)&dword_140404A6C[v35 + 177249487];
    v37 = *(float *)&dword_140404A6C[v35 + 177249488];
    v38 = *(float *)&dword_140404A6C[v35 + 177249489];
    *(float *)&dword_140404A6C[v35 + 177249487] = (float)((float)(v37 * a2[3]) + (float)(v36 * *a2))
                                                + (float)(v38 * a2[6]);
    *(float *)&dword_140404A6C[v35 + 177249488] = (float)((float)(v36 * a2[1]) + (float)(v37 * a2[4]))
                                                + (float)(v38 * a2[7]);
    *(float *)&dword_140404A6C[v35 + 177249489] = (float)((float)(v36 * a2[2]) + (float)(v37 * a2[5]))
                                                + (float)(v38 * a2[8]);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v4 = ++dword_140404A6C[177167565];
    --v10;
  }
  while ( v10 );
  v39 = -a4;
  do
  {
    v40 = 0;
    v41 = MEMORY[0x1401F8A50]();
    v42 = 3 * v4;
    v43 = v41;
    v44 = a1[2] - a4;
    v45 = _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v41, (__m128d)*(unsigned __int64 *)&v41, 1).m128d_f64[0] * v17;
    v46 = v45 + *a1;
    v47 = v41 * v17;
    v48 = a1[1] - v47;
    *(float *)&dword_140404A6C[v42 + 177167567] = (float)((float)(v48 * a2[3]) + (float)(v46 * *a2))
                                                + (float)(v44 * a2[6]);
    *(float *)&dword_140404A6C[v42 + 177167568] = (float)((float)(v46 * a2[1]) + (float)(v48 * a2[4]))
                                                + (float)(v44 * a2[7]);
    *(float *)&dword_140404A6C[v42 + 177167569] = (float)((float)(v46 * a2[2]) + (float)(v48 * a2[5]))
                                                + (float)(v44 * a2[8]);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = cosf(v11);
    *(float *)&v41 = -v43;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = LODWORD(v41);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v49 = 3 * dword_140404A6C[177167565];
    v50 = *(float *)&dword_140404A6C[v49 + 177249487];
    v51 = *(float *)&dword_140404A6C[v49 + 177249488];
    v52 = *(float *)&dword_140404A6C[v49 + 177249489];
    *(float *)&dword_140404A6C[v49 + 177249487] = (float)((float)(v51 * a2[3]) + (float)(v50 * *a2))
                                                + (float)(v52 * a2[6]);
    v40.m128d_f64[0] = v11 + 0.39269908169875;
    v53 = _mm_cvtpd_ps(v40);
    *(float *)&dword_140404A6C[v49 + 177249488] = (float)((float)(v50 * a2[1]) + (float)(v51 * a2[4]))
                                                + (float)(v52 * a2[7]);
    v54 = _mm_cvtps_pd(v53);
    v55.m128d_f64[1] = v54.m128d_f64[1];
    *(float *)&dword_140404A6C[v49 + 177249489] = (float)((float)(v50 * a2[2]) + (float)(v51 * a2[5]))
                                                + (float)(v52 * a2[8]);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v56 = dword_140404A6C[177167565];
    v55.m128d_f64[0] = MEMORY[0x1401F8A50]();
    v57 = 3 * v56;
    v40.m128d_f64[0] = v55.m128d_f64[0];
    v58 = a1[2] - a4;
    v59 = _mm_shuffle_pd(v55, v55, 1).m128d_f64[0] * v17;
    v60 = v59 + *a1;
    v61 = v55.m128d_f64[0] * v17;
    v62 = a1[1] - v61;
    *(float *)&dword_140404A6C[v57 + 177167567] = (float)((float)(v62 * a2[3]) + (float)(v60 * *a2))
                                                + (float)(v58 * a2[6]);
    *(float *)&dword_140404A6C[v57 + 177167568] = (float)((float)(v60 * a2[1]) + (float)(v62 * a2[4]))
                                                + (float)(v58 * a2[7]);
    *(float *)&dword_140404A6C[v57 + 177167569] = (float)((float)(v60 * a2[2]) + (float)(v62 * a2[5]))
                                                + (float)(v58 * a2[8]);
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = cosf(v53.m128_f32[0]);
    *(float *)v55.m128d_f64 = -v40.m128d_f64[0];
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = LODWORD(v55.m128d_f64[0]);
    v11 = v54.m128d_f64[0] + 0.39269908169875;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v63 = 3 * dword_140404A6C[177167565];
    v64 = *(float *)&dword_140404A6C[v63 + 177249487];
    v65 = *(float *)&dword_140404A6C[v63 + 177249488];
    v66 = *(float *)&dword_140404A6C[v63 + 177249489];
    *(float *)&dword_140404A6C[v63 + 177249487] = (float)((float)(v65 * a2[3]) + (float)(v64 * *a2))
                                                + (float)(v66 * a2[6]);
    *(float *)&dword_140404A6C[v63 + 177249488] = (float)((float)(v64 * a2[1]) + (float)(v65 * a2[4]))
                                                + (float)(v66 * a2[7]);
    *(float *)&dword_140404A6C[v63 + 177249489] = (float)((float)(v64 * a2[2]) + (float)(v65 * a2[5]))
                                                + (float)(v66 * a2[8]);
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v4 = ++dword_140404A6C[177167565];
    --v5;
  }
  while ( v5 );
  v67 = *a1;
  v68 = a1[1];
  v69 = *a1;
  v70 = (int)(3 * v4);
  v71 = a1[2];
  *(float *)&dword_140404A6C[v70 + 177167567] = (float)((float)(v68 * a2[3]) + (float)(*a1 * *a2))
                                              + (float)(v71 * a2[6]);
  *(float *)&dword_140404A6C[v70 + 177167568] = (float)((float)(v69 * a2[1]) + (float)(v68 * a2[4]))
                                              + (float)(v71 * a2[7]);
  *(float *)&dword_140404A6C[v70 + 177167569] = (float)((float)(v67 * a2[2]) + (float)(v68 * a2[5]))
                                              + (float)(v71 * a2[8]);
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 1065353216;
  v72 = 3 * dword_140404A6C[177167565];
  v73 = *(float *)&dword_140404A6C[v72 + 177249487];
  v74 = *(float *)&dword_140404A6C[v72 + 177249488];
  v75 = *(float *)&dword_140404A6C[v72 + 177249489];
  *(float *)&dword_140404A6C[v72 + 177249487] = (float)((float)(v74 * a2[3]) + (float)(v73 * *a2))
                                              + (float)(v75 * a2[6]);
  *(float *)&dword_140404A6C[v72 + 177249488] = (float)((float)(v74 * a2[4]) + (float)(v73 * a2[1]))
                                              + (float)(v75 * a2[7]);
  *(float *)&dword_140404A6C[v72 + 177249489] = (float)((float)(v74 * a2[5]) + (float)(v73 * a2[2]))
                                              + (float)(v75 * a2[8]);
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  v76 = *a1;
  v77 = a1[1];
  v78 = 3 * dword_140404A6C[177167565];
  v79 = v39 + a1[2];
  v80 = *a1;
  *(float *)&dword_140404A6C[v78 + 177167567] = (float)((float)(v77 * a2[3]) + (float)(*a1 * *a2))
                                              + (float)(v79 * a2[6]);
  *(float *)&dword_140404A6C[v78 + 177167568] = (float)((float)(v77 * a2[4]) + (float)(v80 * a2[1]))
                                              + (float)(v79 * a2[7]);
  *(float *)&dword_140404A6C[v78 + 177167569] = (float)((float)(v77 * a2[5]) + (float)(v76 * a2[2]))
                                              + (float)(v79 * a2[8]);
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = -1082130432;
  result = 3 * dword_140404A6C[177167565];
  v81 = *(float *)&dword_140404A6C[result + 177249487];
  v82 = *(float *)&dword_140404A6C[result + 177249488];
  v83 = *(float *)&dword_140404A6C[result + 177249489];
  *(float *)&dword_140404A6C[result + 177249487] = (float)((float)(v82 * a2[3]) + (float)(v81 * *a2))
                                                 + (float)(v83 * a2[6]);
  *(float *)&dword_140404A6C[result + 177249488] = (float)((float)(v81 * a2[1]) + (float)(v82 * a2[4]))
                                                 + (float)(v83 * a2[7]);
  *(float *)&dword_140404A6C[result + 177249489] = (float)((float)(v81 * a2[2]) + (float)(v82 * a2[5]))
                                                 + (float)(v83 * a2[8]);
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  LODWORD(result) = dword_140404A6C[177495247];
  v85 = v8 + 32;
  v86 = v8 + 33;
  v87 = v8 + 1;
  v88 = 4;
  do
  {
    v89 = v8 + (((_BYTE)v87 - (_BYTE)v8) & 0xF);
    dword_140404A6C[3 * (_DWORD)result + 177495248] = v87 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v87 + 15;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v89 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v87 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v89 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v89;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v87 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v89;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v85;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v89 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v87 + 15;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v86;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v87;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v87 + 16;
    v90 = v8 + ((1 - (_BYTE)v8 + (_BYTE)v87) & 0xF);
    v91 = v90 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v90 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v87;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v90 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v90;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v87;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v90;
    v92 = v8 + ((2 - (_BYTE)v8 + (_BYTE)v87) & 0xF);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v85;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v91;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v87 + 16;
    v93 = v92 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v86;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v87 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v87 + 17;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v92 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v87 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v92 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v92;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v87 + 1;
    v94 = v87 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v92;
    v95 = v8 + ((3 - (_BYTE)v8 + (_BYTE)v87) & 0xF);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v85;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v93;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v87 + 17;
    v96 = v87 + 18;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v86;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v87 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v87 + 18;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v95 + 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v87 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v95 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v95;
    v87 += 4;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v94;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v95;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v85;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v95 + 16;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v96;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v86;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    result = ++dword_140404A6C[177495247];
    --v88;
  }
  while ( v88 );
  return result;
}

