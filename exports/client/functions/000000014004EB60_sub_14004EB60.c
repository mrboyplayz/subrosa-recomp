/* Address: 0x14004eb60 | Name: sub_14004EB60 | Size: 4684 bytes */
__int64 __fastcall sub_14004EB60(unsigned int a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v4; // ebx
  __int64 v7; // rsi
  __m128 v8; // xmm0
  __int64 v9; // rdx
  float v10; // xmm13_4
  float v11; // xmm11_4
  float v12; // xmm12_4
  __m128d v13; // xmm6
  __m128d v14; // xmm0
  double v15; // xmm7_8
  unsigned int v16; // xmm2_4
  unsigned int v17; // xmm1_4
  __m128d v18; // xmm6
  unsigned int v19; // ebx
  unsigned int v20; // xmm2_4
  unsigned int v21; // xmm1_4
  __m128d v22; // xmm6
  unsigned int v23; // ebx
  unsigned int v24; // xmm2_4
  unsigned int v25; // xmm1_4
  __m128d v26; // xmm6
  unsigned int v27; // ebx
  unsigned int v28; // xmm2_4
  unsigned int v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm11_4
  __int64 v32; // rsi
  __m128d v33; // xmm6
  unsigned __int64 v34; // xmm0_8
  unsigned int v35; // xmm2_4
  unsigned int v36; // xmm1_4
  __m128d v37; // xmm6
  __m128d v38; // xmm0
  unsigned int v39; // ebx
  unsigned int v40; // xmm2_4
  unsigned int v41; // xmm1_4
  __m128d v42; // xmm6
  unsigned int v43; // ebx
  unsigned int v44; // xmm2_4
  unsigned int v45; // xmm1_4
  __m128d v46; // xmm6
  unsigned int v47; // ebx
  unsigned int v48; // xmm2_4
  unsigned int v49; // xmm1_4
  __int64 v50; // rax
  int v51; // esi
  int v52; // r9d
  int v53; // edx
  int v54; // edx
  unsigned int v55; // r8d
  unsigned int v56; // r10d
  int v57; // edx
  unsigned int v58; // r8d
  int v59; // edx
  unsigned int v60; // r9d
  int v61; // ecx
  unsigned int *v62; // rax
  int v63; // edx
  float *v64; // r10
  int v65; // ecx
  unsigned int *v66; // rax
  int v67; // r11d
  float *v68; // r8
  __int64 v69; // r9
  float v70; // xmm4_4
  float v71; // xmm5_4
  float v72; // xmm0_4
  __int64 v73; // rdx
  __int64 v74; // rax
  float v75; // xmm1_4
  float v76; // xmm2_4
  float v77; // xmm7_4
  float v78; // xmm3_4
  float v79; // xmm6_4
  float v80; // xmm4_4
  float v81; // xmm5_4
  float v82; // xmm4_4
  float v83; // xmm7_4
  float v84; // xmm0_4
  float v85; // xmm3_4
  float v86; // xmm5_4
  float v87; // xmm2_4
  __int64 v88; // rax
  __int64 v89; // rax
  float v90; // xmm4_4
  float *v91; // rdx
  float v92; // xmm5_4
  float v93; // xmm3_4
  float v94; // xmm1_4
  float v95; // xmm3_4
  float v96; // xmm4_4
  float v97; // xmm0_4

  v3 = 0;
  v4 = 0;
  v7 = 2;
  v8 = 0;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  v9 = 3LL * a2;
  dword_140404A6C[178322641] = 0;
  v10 = *(float *)&dword_140404A6C[2 * v9 + 437914200];
  v11 = *(float *)&dword_140404A6C[2 * v9 + 437914199];
  v12 = v10 * 0.5;
  dword_140404A6C[178519250] = 0;
  do
  {
    v13 = _mm_cvtps_pd(v8);
    v14.m128d_f64[1] = v13.m128d_f64[1];
    v14.m128d_f64[0] = MEMORY[0x1401F8A50]();
    v13.m128d_f64[0] = v13.m128d_f64[0] + 0.7853981633975;
    v15 = v11;
    *(float *)&v16 = _mm_shuffle_pd(v14, v14, 1).m128d_f64[0] * v11;
    dword_140404A6C[3 * v4 + 177167567] = v16;
    *(float *)&v17 = -(v14.m128d_f64[0] * v11);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v17;
    v18 = _mm_cvtps_pd(_mm_cvtpd_ps(v13));
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v12;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v16;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v17;
    v14.m128d_f64[1] = v18.m128d_f64[1];
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v19 = dword_140404A6C[177167565];
    v14.m128d_f64[0] = MEMORY[0x1401F8A50]();
    *(float *)&v20 = _mm_shuffle_pd(v14, v14, 1).m128d_f64[0] * v11;
    dword_140404A6C[3 * v19 + 177167567] = v20;
    *(float *)&v21 = -(v14.m128d_f64[0] * v11);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v21;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v12;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v20;
    v18.m128d_f64[0] = v18.m128d_f64[0] + 0.7853981633975;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v21;
    v22 = _mm_cvtps_pd(_mm_cvtpd_ps(v18));
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    v14.m128d_f64[1] = v22.m128d_f64[1];
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v23 = dword_140404A6C[177167565];
    v14.m128d_f64[0] = MEMORY[0x1401F8A50]();
    v22.m128d_f64[0] = v22.m128d_f64[0] + 0.7853981633975;
    *(float *)&v24 = _mm_shuffle_pd(v14, v14, 1).m128d_f64[0] * v11;
    dword_140404A6C[3 * v23 + 177167567] = v24;
    *(float *)&v25 = -(v14.m128d_f64[0] * v11);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v25;
    v26 = _mm_cvtps_pd(_mm_cvtpd_ps(v22));
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v12;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v24;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v25;
    v14.m128d_f64[1] = v26.m128d_f64[1];
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v27 = dword_140404A6C[177167565];
    v14.m128d_f64[0] = MEMORY[0x1401F8A50]();
    *(float *)&v28 = _mm_shuffle_pd(v14, v14, 1).m128d_f64[0] * v11;
    dword_140404A6C[3 * v27 + 177167567] = v28;
    v26.m128d_f64[0] = v26.m128d_f64[0] + 0.7853981633975;
    *(float *)&v29 = -(v14.m128d_f64[0] * v11);
    v8 = _mm_cvtpd_ps(v26);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v29;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v12;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v28;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v29;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v4 = ++dword_140404A6C[177167565];
    --v7;
  }
  while ( v7 );
  v30 = 0.0;
  v31 = v10 * -0.5;
  v32 = 2;
  do
  {
    v33 = 0;
    v33.m128d_f64[0] = v30;
    *(double *)&v34 = MEMORY[0x1401F8A50]();
    v33.m128d_f64[0] = v33.m128d_f64[0] + 0.7853981633975;
    *(float *)&v35 = _mm_shuffle_pd((__m128d)v34, (__m128d)v34, 1).m128d_f64[0] * v15;
    dword_140404A6C[3 * v4 + 177167567] = v35;
    *(float *)&v36 = -(*(double *)&v34 * v15);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v36;
    v37 = _mm_cvtps_pd(_mm_cvtpd_ps(v33));
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v31;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v35;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v36;
    v38.m128d_f64[1] = v37.m128d_f64[1];
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v39 = dword_140404A6C[177167565];
    v38.m128d_f64[0] = MEMORY[0x1401F8A50]();
    *(float *)&v40 = _mm_shuffle_pd(v38, v38, 1).m128d_f64[0] * v15;
    dword_140404A6C[3 * v39 + 177167567] = v40;
    *(float *)&v41 = -(v38.m128d_f64[0] * v15);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v41;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v31;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v40;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v41;
    v37.m128d_f64[0] = v37.m128d_f64[0] + 0.7853981633975;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    v42 = _mm_cvtps_pd(_mm_cvtpd_ps(v37));
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    v38.m128d_f64[1] = v42.m128d_f64[1];
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v43 = dword_140404A6C[177167565];
    v38.m128d_f64[0] = MEMORY[0x1401F8A50]();
    v42.m128d_f64[0] = v42.m128d_f64[0] + 0.7853981633975;
    *(float *)&v44 = _mm_shuffle_pd(v38, v38, 1).m128d_f64[0] * v15;
    dword_140404A6C[3 * v43 + 177167567] = v44;
    *(float *)&v45 = -(v38.m128d_f64[0] * v15);
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v45;
    v46 = _mm_cvtps_pd(_mm_cvtpd_ps(v42));
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v31;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v44;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v45;
    v38.m128d_f64[1] = v46.m128d_f64[1];
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
    v47 = dword_140404A6C[177167565];
    v38.m128d_f64[0] = MEMORY[0x1401F8A50]();
    *(float *)&v48 = _mm_shuffle_pd(v38, v38, 1).m128d_f64[0] * v15;
    dword_140404A6C[3 * v47 + 177167567] = v48;
    *(float *)&v49 = -(v38.m128d_f64[0] * v15);
    v30 = v46.m128d_f64[0] + 0.7853981633975;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = v49;
    *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v31;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = v48;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v49;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
    v4 = ++dword_140404A6C[177167565];
    --v32;
  }
  while ( v32 );
  dword_140404A6C[3 * v4 + 177167567] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = 0;
  *(float *)&dword_140404A6C[3 * dword_140404A6C[177167565] + 177167569] = v12;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167567] = 0;
  dword_140404A6C[3 * dword_140404A6C[177167565] + 177167568] = 0;
  v50 = 3 * dword_140404A6C[177167565];
  if ( a3 )
    *(float *)&dword_140404A6C[v50 + 177167569] = v10 * -0.25;
  else
    *(float *)&dword_140404A6C[v50 + 177167569] = v31 * 1.5;
  v51 = 1;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565]++ + 177216720] = 0;
  v52 = dword_140404A6C[177495247];
  do
  {
    v53 = v51 & 7;
    dword_140404A6C[3 * v52 + 177495248] = v51 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v51 + 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v53 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v53 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v53;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51 - 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v53;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v53 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v51 + 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    v54 = ((_BYTE)v51 + 1) & 7;
    v55 = v54 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v51 + 8;
    v56 = v51 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v54 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v54 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v54;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v54;
    v57 = ((_BYTE)v51 + 2) & 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v55;
    v58 = v57 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v51 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v51 + 9;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v57 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v57;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51 + 1;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57;
    v59 = ((_BYTE)v51 + 3) & 7;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v58;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v51 + 9;
    v60 = v51 + 10;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v51 + 10;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v59 + 8;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v51 + 2;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v59 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v59;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    ++dword_140404A6C[177495247];
    v51 += 4;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v56;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v59;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 16;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = 2;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v59 + 8;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v60;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = 17;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -1;
    v52 = ++dword_140404A6C[177495247];
  }
  while ( v51 <= 8 );
  v61 = 0;
  if ( v52 > 0 )
  {
    v62 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v62 - 1) = 0;
      ++v61;
      *(_QWORD *)(v62 + 1) = 0;
      *(_QWORD *)(v62 + 3) = 0;
      v62 += 6;
      v52 = dword_140404A6C[177495247];
    }
    while ( v61 < (int)dword_140404A6C[177495247] );
  }
  v63 = dword_140404A6C[177167565];
  v64 = (float *)&dword_140404A6C[177249489];
  v65 = 0;
  if ( (int)dword_140404A6C[177167565] > 0 )
  {
    v66 = &dword_140404A6C[177249489];
    do
    {
      *((_QWORD *)v66 - 1) = 0;
      ++v65;
      *v66 = 0;
      v66 += 3;
      v63 = dword_140404A6C[177167565];
    }
    while ( v65 < (int)dword_140404A6C[177167565] );
    v52 = dword_140404A6C[177495247];
  }
  v67 = 0;
  if ( v52 > 0 )
  {
    v68 = (float *)&dword_140404A6C[177814739];
    do
    {
      v69 = 3 * *((_DWORD *)v68 - 319491);
      v70 = *(float *)&dword_140404A6C[v69 + 177167568];
      v71 = *(float *)&dword_140404A6C[v69 + 177167569];
      v72 = *(float *)&dword_140404A6C[v69 + 177167567];
      v73 = 3 * *((_DWORD *)v68 - 319490);
      v74 = 3 * *((_DWORD *)v68 - 319489);
      v75 = *(float *)&dword_140404A6C[v73 + 177167569] - v71;
      v76 = *(float *)&dword_140404A6C[v74 + 177167568] - v70;
      v77 = *(float *)&dword_140404A6C[v74 + 177167567] - v72;
      v78 = *(float *)&dword_140404A6C[v73 + 177167568] - v70;
      v79 = *(float *)&dword_140404A6C[v73 + 177167567] - v72;
      v80 = *(float *)&dword_140404A6C[v74 + 177167569] - v71;
      v81 = (float)(v76 * v75) - (float)(v80 * v78);
      v82 = (float)(v80 * v79) - (float)(v77 * v75);
      v83 = (float)(v77 * v78) - (float)(v76 * v79);
      v84 = fsqrt((float)((float)(v82 * v82) + (float)(v81 * v81)) + (float)(v83 * v83));
      if ( v84 == 0.0 )
      {
        v85 = 0.0;
        v86 = 0.0;
        v87 = 0.0;
      }
      else
      {
        v85 = (float)(1.0 / v84) * v81;
        v86 = (float)(1.0 / v84) * v82;
        v87 = (float)(1.0 / v84) * v83;
      }
      *(v68 - 2) = v85;
      *(v68 - 1) = v86;
      *v68 = v87;
      ++v67;
      *(float *)&dword_140404A6C[v69 + 177249487] = v85 + *(float *)&dword_140404A6C[v69 + 177249487];
      *(float *)&dword_140404A6C[v69 + 177249488] = v86 + *(float *)&dword_140404A6C[v69 + 177249488];
      *(float *)&dword_140404A6C[v69 + 177249489] = v87 + *(float *)&dword_140404A6C[v69 + 177249489];
      v88 = 3 * *((_DWORD *)v68 - 319490);
      *(float *)&dword_140404A6C[v88 + 177249487] = v85 + *(float *)&dword_140404A6C[v88 + 177249487];
      *(float *)&dword_140404A6C[v88 + 177249488] = v86 + *(float *)&dword_140404A6C[v88 + 177249488];
      *(float *)&dword_140404A6C[v88 + 177249489] = v87 + *(float *)&dword_140404A6C[v88 + 177249489];
      *(float *)&v88 = *(v68 - 319489);
      v68 += 3;
      v89 = 3 * (int)v88;
      *(float *)&dword_140404A6C[v89 + 177249487] = v85 + *(float *)&dword_140404A6C[v89 + 177249487];
      *(float *)&dword_140404A6C[v89 + 177249488] = v86 + *(float *)&dword_140404A6C[v89 + 177249488];
      *(float *)&dword_140404A6C[v89 + 177249489] = v87 + *(float *)&dword_140404A6C[v89 + 177249489];
    }
    while ( v67 < (int)dword_140404A6C[177495247] );
    v63 = dword_140404A6C[177167565];
  }
  if ( v63 > 0 )
  {
    do
    {
      v90 = *(v64 - 1);
      v91 = v64;
      v92 = *(v64 - 2);
      v93 = *v64;
      v94 = fsqrt((float)((float)(v92 * v92) + (float)(v90 * v90)) + (float)(v93 * v93));
      if ( v94 == 0.0 )
      {
        v95 = 0.0;
        v96 = 0.0;
        v97 = 0.0;
      }
      else
      {
        v95 = v93 * (float)(1.0 / v94);
        v96 = v90 * (float)(1.0 / v94);
        v97 = (float)(1.0 / v94) * v92;
      }
      *(v64 - 2) = v97;
      ++v3;
      *(v64 - 1) = v96;
      v64 += 3;
      *v91 = v95;
    }
    while ( v3 < (int)dword_140404A6C[177167565] );
  }
  return sub_1401449C0(a1, 0);
}

