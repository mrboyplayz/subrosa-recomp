/* Address: 0x140066ee0 | Name: sub_140066EE0 | Size: 2704 bytes */
__int64 __fastcall sub_140066EE0(unsigned int a1, float a2, float a3, float a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  int v6; // edi
  float v7; // xmm10_4
  __int64 v8; // r12
  float v9; // xmm11_4
  unsigned int v10; // r13d
  unsigned int v11; // xmm0_4
  __int64 v12; // rcx
  __m128 v13; // xmm9
  __int64 v14; // rbp
  unsigned int v15; // ebx
  float v16; // xmm0_4
  __m128d v17; // xmm7
  float v18; // xmm8_4
  __m128d v19; // xmm0
  double v20; // xmm1_8
  double v21; // xmm6_8
  double v22; // xmm0_8
  unsigned int v23; // xmm2_4
  double v24; // xmm0_8
  __int64 v25; // rcx
  unsigned int v26; // xmm0_4
  __m128 v27; // xmm0
  __m128 v28; // xmm9
  __int64 v29; // rbp
  unsigned int v30; // xmm8_4
  __m128d v31; // xmm7
  __m128d v32; // xmm0
  double v33; // xmm1_8
  double v34; // xmm0_8
  unsigned int v35; // xmm2_4
  __int64 v36; // rcx
  unsigned int v37; // xmm0_4
  __m128 v38; // xmm0
  __m128 v39; // xmm8
  __int64 v40; // rbp
  unsigned int v41; // xmm7_4
  __m128d v42; // xmm6
  __m128d v43; // xmm0
  double v44; // xmm1_8
  double v45; // xmm0_8
  unsigned int v46; // xmm3_4
  __int64 v47; // rcx
  unsigned int v48; // xmm0_4
  __m128 v49; // xmm0
  __int64 v50; // r9
  unsigned int v51; // ecx
  int v52; // r8d
  int v53; // edx
  __int64 v54; // rax
  unsigned int v55; // esi
  unsigned int v56; // r10d
  int v57; // r11d
  unsigned int v58; // r8d
  unsigned int v59; // edx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v63; // esi
  unsigned int v64; // r9d
  __int64 v65; // r11
  int v66; // r8d
  unsigned int v67; // edx
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned int v70; // r10d
  unsigned int v71; // r8d
  char v72; // r11
  unsigned int v73; // r9d
  unsigned int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rax

  LODWORD(v4) = 0;
  v5 = 0;
  v6 = 0;
  v7 = a2 * 0.5;
  v8 = 16;
  dword_140404A6C[177167565] = 0;
  v9 = a2 * -0.5;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  while ( 1 )
  {
    v10 = v5 - 16;
    v11 = v6 ? LODWORD(v7) : LODWORD(v9);
    v12 = (int)(3 * v5);
    v13 = 0;
    dword_140404A6C[v12 + 177167567] = v11;
    *(_QWORD *)&dword_140404A6C[v12 + 177167568] = 0;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = -1082130432;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = v4;
    dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = v4;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = v4;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = v4;
    v14 = 8;
    v15 = ++dword_140404A6C[177167565];
    do
    {
      if ( v6 )
        v16 = 0.375;
      else
        v16 = -0.375;
      v17 = _mm_cvtps_pd(v13);
      v18 = a2 * v16;
      v19.m128d_f64[1] = v17.m128d_f64[1];
      v19.m128d_f64[0] = MEMORY[0x1401F8A50]();
      v20 = _mm_shuffle_pd(v19, v19, 1).m128d_f64[0];
      v21 = a4;
      v22 = v19.m128d_f64[0] * a4;
      if ( v6 )
        v24 = v22 * -0.875;
      else
        v24 = v22 * 0.875;
      v25 = (int)(3 * v15);
      *(float *)&v26 = v24;
      *(float *)&dword_140404A6C[v25 + 177167567] = v18;
      dword_140404A6C[v25 + 177167569] = v26;
      v27.m128_u64[1] = v13.m128_u64[1];
      *(float *)&v23 = v20 * a4 * 0.875;
      dword_140404A6C[v25 + 177167568] = v23;
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      *(double *)v27.m128_u64 = MEMORY[0x1401F8AC0]();
      v17.m128d_f64[0] = v17.m128d_f64[0] + 0.7853981633975;
      v13 = _mm_cvtpd_ps(v17);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = _mm_shuffle_ps(v27, v27, 1).m128_u32[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = v27.m128_i32[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v15 = ++dword_140404A6C[177167565];
      --v14;
    }
    while ( v14 );
    v28 = 0;
    v29 = 16;
    do
    {
      if ( v6 )
        v30 = LODWORD(v7);
      else
        v30 = LODWORD(v9);
      v31 = _mm_cvtps_pd(v28);
      v32.m128d_f64[1] = v31.m128d_f64[1];
      v32.m128d_f64[0] = MEMORY[0x1401F8A50]();
      v33 = _mm_shuffle_pd(v32, v32, 1).m128d_f64[0] * v21;
      v34 = v32.m128d_f64[0] * v21;
      if ( v6 )
        v34 = -v34;
      v36 = (int)(3 * v15);
      *(float *)&v37 = v34;
      dword_140404A6C[v36 + 177167567] = v30;
      dword_140404A6C[v36 + 177167569] = v37;
      v38.m128_u64[1] = v28.m128_u64[1];
      *(float *)&v35 = v33;
      dword_140404A6C[v36 + 177167568] = v35;
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      *(double *)v38.m128_u64 = MEMORY[0x1401F8AC0]();
      v31.m128d_f64[0] = v31.m128d_f64[0] + 0.39269908169875;
      v28 = _mm_cvtpd_ps(v31);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = _mm_shuffle_ps(v38, v38, 1).m128_u32[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = v38.m128_i32[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v15 = ++dword_140404A6C[177167565];
      --v29;
    }
    while ( v29 );
    v39 = 0;
    v40 = 16;
    do
    {
      if ( v6 )
        v41 = LODWORD(v7);
      else
        v41 = LODWORD(v9);
      v42 = _mm_cvtps_pd(v39);
      v43.m128d_f64[1] = v42.m128d_f64[1];
      v43.m128d_f64[0] = MEMORY[0x1401F8A50]();
      v44 = _mm_shuffle_pd(v43, v43, 1).m128d_f64[0] * a3;
      v45 = v43.m128d_f64[0] * a3;
      if ( v6 )
        v45 = -v45;
      v47 = (int)(3 * v15);
      *(float *)&v48 = v45;
      dword_140404A6C[v47 + 177167567] = v41;
      dword_140404A6C[v47 + 177167569] = v48;
      v49.m128_u64[1] = v39.m128_u64[1];
      *(float *)&v46 = v44;
      dword_140404A6C[v47 + 177167568] = v46;
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249487] = 0;
      *(double *)v49.m128_u64 = MEMORY[0x1401F8AC0]();
      v42.m128d_f64[0] = v42.m128d_f64[0] + 0.39269908169875;
      v39 = _mm_cvtpd_ps(v42);
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249488] = _mm_shuffle_ps(v49, v49, 1).m128_u32[0];
      dword_140404A6C[3 * dword_140404A6C[177167565] + 177249489] = v49.m128_i32[0];
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216719] = 0;
      dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
      v15 = ++dword_140404A6C[177167565];
      --v40;
    }
    while ( v40 );
    v50 = 8;
    v51 = dword_140404A6C[177495247];
    v52 = 1;
    do
    {
      dword_140404A6C[3 * v51 + 177495248] = v5;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v52 + v5;
      v53 = (v52++ & 7) + 1;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v5 + v53;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v54 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v54 + 178011345] = 1056964608;
      dword_140404A6C[v54 + 178011346] = 1056964608;
      dword_140404A6C[v54 + 178011347] = 1056964608;
      dword_140404A6C[v54 + 178011348] = 1056964608;
      dword_140404A6C[v54 + 178011349] = 1056964608;
      dword_140404A6C[v54 + 178011350] = 1056964608;
      v51 = ++dword_140404A6C[177495247];
      --v50;
    }
    while ( v50 );
    v55 = v5 + 1;
    v56 = v55;
    v57 = 1;
    v4 = 8;
    do
    {
      v58 = v55 + (v57 & 0xF) + 8;
      dword_140404A6C[3 * v51 + 177495248] = v56;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v55 + 7 + v57;
      v59 = v55 + ((1 - (_BYTE)v55 + (_BYTE)v56) & 7);
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v58;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v60 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v60 + 178011345] = 1056964608;
      dword_140404A6C[v60 + 178011346] = 1056964608;
      dword_140404A6C[v60 + 178011347] = 1056964608;
      dword_140404A6C[v60 + 178011348] = 1056964608;
      dword_140404A6C[v60 + 178011349] = 1056964608;
      dword_140404A6C[v60 + 178011350] = 1056964608;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v56;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v58;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v59;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v61 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v61 + 178011345] = 1056964608;
      dword_140404A6C[v61 + 178011346] = 1056964608;
      dword_140404A6C[v61 + 178011347] = 1056964608;
      dword_140404A6C[v61 + 178011348] = 1056964608;
      dword_140404A6C[v61 + 178011349] = 1056964608;
      dword_140404A6C[v61 + 178011350] = 1056964608;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v59;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v58;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v55 + (((_BYTE)v57 + 1) & 0xF) + 8;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v62 = 6 * dword_140404A6C[177495247];
      dword_140404A6C[v62 + 178011345] = 1056964608;
      ++v56;
      dword_140404A6C[v62 + 178011346] = 1056964608;
      v57 += 2;
      dword_140404A6C[v62 + 178011347] = 1056964608;
      dword_140404A6C[v62 + 178011348] = 1056964608;
      dword_140404A6C[v62 + 178011349] = 1056964608;
      dword_140404A6C[v62 + 178011350] = 1056964608;
      v51 = ++dword_140404A6C[177495247];
      --v4;
    }
    while ( v4 );
    v63 = v55 + 8;
    v64 = v63;
    v65 = 16;
    do
    {
      v66 = ((_BYTE)v64 + 1 - (_BYTE)v63) & 0xF;
      dword_140404A6C[3 * v51 + 177495248] = v64;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v64 + 16;
      v67 = v66 + v63 + 16;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v67;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v68 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v68 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v68 + 178011347] = 0;
      *(_QWORD *)&dword_140404A6C[v68 + 178011349] = 0;
      ++dword_140404A6C[177495247];
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v64++;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v67;
      dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v66 + v63;
      dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
      v69 = 6 * dword_140404A6C[177495247];
      *(_QWORD *)&dword_140404A6C[v69 + 178011345] = 0;
      *(_QWORD *)&dword_140404A6C[v69 + 178011347] = 0;
      *(_QWORD *)&dword_140404A6C[v69 + 178011349] = 0;
      v51 = ++dword_140404A6C[177495247];
      --v65;
    }
    while ( v65 );
    if ( ++v6 >= 2 )
      break;
    v5 = dword_140404A6C[177167565];
  }
  v70 = dword_140404A6C[177167565] - 16;
  v71 = v10;
  v72 = 1 - (LOBYTE(dword_140404A6C[177167565]) - 16);
  v73 = dword_140404A6C[177167565] - 16 + 15;
  do
  {
    dword_140404A6C[3 * v51 + 177495248] = v71;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v70 + (((_BYTE)v73 + v72) & 0xF);
    v74 = v10 + ((1 - (_BYTE)v10 + (_BYTE)v71) & 0xF);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v73;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    v75 = 6 * dword_140404A6C[177495247];
    *(_QWORD *)&dword_140404A6C[v75 + 178011345] = 0;
    *(_QWORD *)&dword_140404A6C[v75 + 178011347] = 0;
    *(_QWORD *)&dword_140404A6C[v75 + 178011349] = 0;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v71++;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v73--;
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v74;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    v76 = 6 * dword_140404A6C[177495247];
    *(_QWORD *)&dword_140404A6C[v76 + 178011345] = 0;
    *(_QWORD *)&dword_140404A6C[v76 + 178011347] = 0;
    *(_QWORD *)&dword_140404A6C[v76 + 178011349] = 0;
    v51 = ++dword_140404A6C[177495247];
    --v8;
  }
  while ( v8 );
  return sub_1401449C0(a1, 0);
}

