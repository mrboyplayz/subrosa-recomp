/* Address: 0x14003b6a0 | Name: sub_14003B6A0 | Size: 3684 bytes */
void *__fastcall sub_14003B6A0(int a1, float a2, float a3, float a4)
{
  int v4; // r15d
  float v5; // xmm0_4
  float v6; // xmm2_4
  int v7; // r14d
  int v8; // edi
  int v9; // ebx
  __int64 v10; // rsi
  float v11; // xmm1_4
  __m128 v12; // xmm0
  double v13; // xmm10_8
  __int64 v14; // rbp
  __m128d v15; // xmm11
  __m128d v16; // xmm0
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  int v21; // eax
  int v22; // edi
  __m128d v23; // xmm11
  __m128d v24; // xmm0
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  int v29; // eax
  int v30; // edi
  __m128d v31; // xmm11
  __m128d v32; // xmm0
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  int v38; // eax
  int v39; // ebx
  int v40; // r11d
  int v41; // r10d
  int v42; // r9d
  int v43; // r8d
  int v44; // edx
  int v45; // r8d
  int v46; // eax
  int v47; // edx
  int v48; // r8d
  int v49; // edx
  unsigned __int64 v50; // rbx
  size_t v51; // rcx
  void *v52; // rax
  int v53; // edx
  int v54; // r9d
  int *v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  void *v58; // rax
  int v59; // ecx
  bool v60; // cc
  __int64 v61; // rdx
  __int64 v62; // rax
  void *v63; // rax
  int v64; // r9d
  int *v65; // r8
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  void *result; // rax
  int *v74; // r8
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rcx

  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = 2;
  v8 = 0;
  v9 = 0;
  v10 = a1;
  dword_1782D6BA0 = 0;
  dword_178446BAC = 0;
  dword_178416BA8 = 0;
  dword_1787FEBB4 = 0;
  do
  {
    if ( (unsigned int)v9 >= 2 )
      v11 = v5;
    else
      v11 = v6;
    if ( (_DWORD)v10 == 45 )
    {
      if ( !v9 || v9 == 3 )
        v11 = v5;
      else
        v11 = v6;
    }
    v12 = 0;
    v13 = v11;
    v14 = 2;
    do
    {
      v15 = _mm_cvtps_pd(v12);
      v16.m128d_f64[1] = v15.m128d_f64[1];
      v16.m128d_f64[0] = _libm_sse2_sincos_();
      v17 = _mm_shuffle_pd(v16, v16, 1).m128d_f64[0] * v13;
      v18 = -(v16.m128d_f64[0] * v13);
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v19 = 0.3125;
        }
        else if ( v9 == 2 )
        {
          v19 = 0.375;
        }
        else
        {
          v19 = 0.5;
        }
      }
      else
      {
        v19 = -0.5;
      }
      v20 = v19 * a4;
      if ( (_DWORD)v10 == 45 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v20 = a4 * -0.375;
          }
          else if ( v9 == 2 )
          {
            v20 = a4 * 0.375;
          }
          else
          {
            v20 = a4 * 0.5;
          }
        }
        else
        {
          v20 = a4 * -0.5;
        }
      }
      v21 = 3 * v8;
      v15.m128d_f64[0] = v15.m128d_f64[0] + 1.047197551196667;
      *(float *)&dword_1782D6BAC[v21] = v20;
      *(float *)&dword_1782D6BB0[v21] = v18;
      *(float *)&dword_1782D6BA8[v21] = v17;
      v22 = ++dword_1782D6BA0;
      v23 = _mm_cvtps_pd(_mm_cvtpd_ps(v15));
      v24.m128d_f64[1] = v23.m128d_f64[1];
      v24.m128d_f64[0] = _libm_sse2_sincos_();
      v25 = _mm_shuffle_pd(v24, v24, 1).m128d_f64[0] * v13;
      v26 = -(v24.m128d_f64[0] * v13);
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v27 = 0.3125;
        }
        else if ( v9 == 2 )
        {
          v27 = 0.375;
        }
        else
        {
          v27 = 0.5;
        }
      }
      else
      {
        v27 = -0.5;
      }
      v28 = v27 * a4;
      if ( (_DWORD)v10 == 45 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v28 = a4 * -0.375;
          }
          else if ( v9 == 2 )
          {
            v28 = a4 * 0.375;
          }
          else
          {
            v28 = a4 * 0.5;
          }
        }
        else
        {
          v28 = a4 * -0.5;
        }
      }
      v29 = 3 * v22;
      v23.m128d_f64[0] = v23.m128d_f64[0] + 1.047197551196667;
      *(float *)&dword_1782D6BA8[v29] = v25;
      *(float *)&dword_1782D6BAC[v29] = v28;
      *(float *)&dword_1782D6BB0[v29] = v26;
      v30 = ++dword_1782D6BA0;
      v31 = _mm_cvtps_pd(_mm_cvtpd_ps(v23));
      v32.m128d_f64[1] = v31.m128d_f64[1];
      v32.m128d_f64[0] = _libm_sse2_sincos_();
      v33 = _mm_shuffle_pd(v32, v32, 1).m128d_f64[0] * v13;
      v34 = -(v32.m128d_f64[0] * v13);
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v35 = 0.3125;
        }
        else if ( v9 == 2 )
        {
          v35 = 0.375;
        }
        else
        {
          v35 = 0.5;
        }
      }
      else
      {
        v35 = -0.5;
      }
      v36 = v35 * a4;
      if ( (_DWORD)v10 == 45 )
      {
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v36 = a4 * -0.375;
          }
          else if ( v9 == 2 )
          {
            v36 = a4 * 0.375;
          }
          else
          {
            v36 = a4 * 0.5;
          }
        }
        else
        {
          v36 = a4 * -0.5;
        }
      }
      v37 = 3 * v30;
      v31.m128d_f64[0] = v31.m128d_f64[0] + 1.047197551196667;
      *(float *)&dword_1782D6BA8[v37] = v33;
      *(float *)&dword_1782D6BAC[v37] = v36;
      *(float *)&dword_1782D6BB0[v37] = v34;
      v8 = ++dword_1782D6BA0;
      v12 = _mm_cvtpd_ps(v31);
      --v14;
    }
    while ( v14 );
    v5 = a3;
    ++v9;
    v6 = a2;
  }
  while ( v9 < 4 );
  v38 = dword_178446BAC;
  v39 = 8;
  do
  {
    v40 = v39 - 2;
    dword_178446BB0[5 * v38] = 4;
    v41 = v39 - 8;
    dword_178446BB4[5 * dword_178446BAC] = v39 - 2;
    dword_178446BB8[5 * dword_178446BAC] = v39 - 1;
    dword_178446BBC[5 * dword_178446BAC] = v39 - 7;
    dword_178446BC0[5 * dword_178446BAC++] = v39 - 8;
    dword_178446BB0[5 * dword_178446BAC] = 4;
    dword_178446BB4[5 * dword_178446BAC] = v39 - 1;
    dword_178446BB8[5 * dword_178446BAC] = v39;
    dword_178446BBC[5 * dword_178446BAC] = v39 - 6;
    dword_178446BC0[5 * dword_178446BAC++] = v39 - 7;
    dword_178446BB0[5 * dword_178446BAC] = 4;
    dword_178446BB4[5 * dword_178446BAC] = v39;
    dword_178446BB8[5 * dword_178446BAC] = v39 + 1;
    dword_178446BBC[5 * dword_178446BAC] = v39 - 5;
    dword_178446BC0[5 * dword_178446BAC] = v39 - 6;
    v42 = v39 - 4;
    dword_178446BB0[5 * ++dword_178446BAC] = 4;
    dword_178446BB4[5 * dword_178446BAC] = v39 + 1;
    dword_178446BB8[5 * dword_178446BAC] = v39 + 2;
    dword_178446BBC[5 * dword_178446BAC] = v39 - 4;
    dword_178446BC0[5 * dword_178446BAC++] = v39 - 5;
    v43 = v39 - 3;
    dword_178446BB0[5 * dword_178446BAC] = 4;
    dword_178446BB4[5 * dword_178446BAC] = v39 + 2;
    v44 = v39 + 3;
    v39 += 6;
    dword_178446BB8[5 * dword_178446BAC] = v44;
    dword_178446BBC[5 * dword_178446BAC] = v43;
    dword_178446BC0[5 * dword_178446BAC++] = v42;
    dword_178446BB0[5 * dword_178446BAC] = 4;
    dword_178446BB4[5 * dword_178446BAC] = v44;
    dword_178446BB8[5 * dword_178446BAC] = v40;
    dword_178446BBC[5 * dword_178446BAC] = v41;
    dword_178446BC0[5 * dword_178446BAC] = v43;
    v38 = ++dword_178446BAC;
  }
  while ( v39 < 26 );
  v45 = 6;
  dword_178446BB0[5 * v38] = 4;
  dword_178446BB4[5 * dword_178446BAC] = 5;
  dword_178446BB8[5 * dword_178446BAC] = 0;
  dword_178446BBC[5 * dword_178446BAC] = 1;
  dword_178446BC0[5 * dword_178446BAC++] = 4;
  dword_178446BB0[5 * dword_178446BAC] = 4;
  dword_178446BB4[5 * dword_178446BAC] = 4;
  dword_178446BB8[5 * dword_178446BAC] = 1;
  dword_178446BBC[5 * dword_178446BAC] = 2;
  dword_178446BC0[5 * dword_178446BAC++] = 3;
  dword_178446BB0[5 * dword_178446BAC] = 4;
  dword_178446BB4[5 * dword_178446BAC] = 18;
  dword_178446BB8[5 * dword_178446BAC] = 23;
  dword_178446BBC[5 * dword_178446BAC] = 22;
  dword_178446BC0[5 * dword_178446BAC++] = 19;
  dword_178446BB4[5 * dword_178446BAC] = 19;
  dword_178446BB8[5 * dword_178446BAC] = 22;
  dword_178446BBC[5 * dword_178446BAC] = 21;
  dword_178446BC0[5 * dword_178446BAC++] = 20;
  v46 = dword_1787FEBB4;
  do
  {
    dword_1787FEBB8[2 * v46] = v45 - 6;
    dword_1787FEBBC[2 * dword_1787FEBB4++] = v45;
    dword_1787FEBB8[2 * dword_1787FEBB4] = v45 - 5;
    dword_1787FEBBC[2 * dword_1787FEBB4++] = v45 + 1;
    dword_1787FEBB8[2 * dword_1787FEBB4] = v45 - 4;
    dword_1787FEBBC[2 * dword_1787FEBB4++] = v45 + 2;
    dword_1787FEBB8[2 * dword_1787FEBB4] = v45 - 3;
    dword_1787FEBBC[2 * dword_1787FEBB4++] = v45 + 3;
    dword_1787FEBB8[2 * dword_1787FEBB4] = v45 - 2;
    dword_1787FEBBC[2 * dword_1787FEBB4++] = v45 + 4;
    dword_1787FEBB8[2 * dword_1787FEBB4] = v45 - 1;
    v47 = v45 + 5;
    v45 += 6;
    dword_1787FEBBC[2 * dword_1787FEBB4] = v47;
    v46 = ++dword_1787FEBB4;
  }
  while ( v45 < 24 );
  do
  {
    v48 = v7 - 2;
    dword_1787FEBB8[2 * v46] = v7 - 2;
    dword_1787FEBBC[2 * dword_1787FEBB4++] = v7 - 1;
    dword_1787FEBB8[2 * dword_1787FEBB4] = v7 - 1;
    dword_1787FEBBC[2 * dword_1787FEBB4++] = v7;
    dword_1787FEBB8[2 * dword_1787FEBB4] = v7;
    dword_1787FEBBC[2 * dword_1787FEBB4++] = v7 + 1;
    dword_1787FEBB8[2 * dword_1787FEBB4] = v7 + 1;
    dword_1787FEBBC[2 * dword_1787FEBB4++] = v7 + 2;
    dword_1787FEBB8[2 * dword_1787FEBB4] = v7 + 2;
    v49 = v7 + 3;
    v7 += 6;
    dword_1787FEBBC[2 * dword_1787FEBB4++] = v49;
    dword_1787FEBB8[2 * dword_1787FEBB4] = v49;
    dword_1787FEBBC[2 * dword_1787FEBB4] = v48;
    v46 = ++dword_1787FEBB4;
  }
  while ( v7 < 26 );
  v50 = 5072 * v10;
  v51 = 12 * dword_1782D6BA0;
  dword_190122FC8[1268 * v10] = 0;
  v52 = malloc(v51);
  v53 = dword_1782D6BA0;
  v54 = 0;
  qword_190122FD0[634 * v10] = (__int64)v52;
  if ( v53 > 0 )
  {
    v55 = dword_1782D6BB0;
    do
    {
      v55 += 3;
      ++v54;
      v56 = 3 * dword_190122FC8[v50 / 4];
      v57 = qword_190122FD0[v50 / 8];
      *(_DWORD *)(v57 + 4 * v56) = *(v55 - 5);
      *(_DWORD *)(v57 + 4 * v56 + 4) = *(v55 - 4);
      *(_DWORD *)(v57 + 4 * v56 + 8) = *(v55 - 3);
      ++dword_190122FC8[v50 / 4];
      v53 = dword_1782D6BA0;
    }
    while ( v54 < dword_1782D6BA0 );
  }
  *(_DWORD *)&algn_190122FD8[v50] = 0;
  *(_QWORD *)((char *)&unk_190122FE0 + v50) = 0;
  *(_DWORD *)((char *)&unk_190122FE8 + v50) = 0;
  *(_DWORD *)((char *)&unk_190122FEC + 56 * *(int *)&algn_190122FD8[v50] + v50) = v53;
  v58 = malloc(4 * v53);
  v59 = 0;
  v60 = dword_1782D6BA0 <= 0;
  *(_QWORD *)((char *)&unk_190122FF0 + 56 * *(int *)&algn_190122FD8[v50] + v50) = v58;
  if ( !v60 )
  {
    v61 = 0;
    do
    {
      v61 += 4;
      *(_DWORD *)(v61 + *(_QWORD *)((char *)&unk_190122FF0 + 56 * *(int *)&algn_190122FD8[v50] + v50) - 4) = v59++;
    }
    while ( v59 < dword_1782D6BA0 );
  }
  v62 = dword_178446BAC;
  *(_DWORD *)((char *)&unk_190122FF8 + 56 * *(int *)&algn_190122FD8[v50] + v50) = 0;
  v63 = malloc(36 * v62);
  v64 = 0;
  v60 = dword_178446BAC <= 0;
  *(_QWORD *)((char *)&unk_190123000 + 56 * *(int *)&algn_190122FD8[v50] + v50) = v63;
  if ( !v60 )
  {
    v65 = dword_178446BB8;
    do
    {
      v65 += 5;
      ++v64;
      v66 = v50 + 56LL * *(int *)&algn_190122FD8[v50];
      *(_DWORD *)(*(_QWORD *)((char *)&unk_190123000 + v66) + 36LL * *(int *)((char *)&unk_190122FF8 + v66) + 8) = *(v65 - 6);
      v67 = v50 + 56LL * *(int *)&algn_190122FD8[v50];
      *(_DWORD *)(*(_QWORD *)((char *)&unk_190123000 + v67) + 36LL * *(int *)((char *)&unk_190122FF8 + v67) + 12) = *(v65 - 5);
      v68 = v50 + 56LL * *(int *)&algn_190122FD8[v50];
      *(_DWORD *)(*(_QWORD *)((char *)&unk_190123000 + v68) + 36LL * *(int *)((char *)&unk_190122FF8 + v68) + 16) = *(v65 - 4);
      v69 = v50 + 56LL * *(int *)&algn_190122FD8[v50];
      *(_DWORD *)(*(_QWORD *)((char *)&unk_190123000 + v69) + 36LL * *(int *)((char *)&unk_190122FF8 + v69) + 20) = *(v65 - 3);
      v70 = v50 + 56LL * *(int *)&algn_190122FD8[v50];
      *(_DWORD *)(*(_QWORD *)((char *)&unk_190123000 + v70) + 36LL * *(int *)((char *)&unk_190122FF8 + v70) + 4) = 4;
      v71 = v50 + 56LL * *(int *)&algn_190122FD8[v50];
      ++*(_DWORD *)((char *)&unk_190122FF8 + v71);
    }
    while ( v64 < dword_178446BAC );
  }
  v72 = dword_1787FEBB4;
  dword_190123008[14 * *(int *)&algn_190122FD8[v50] + v50 / 4] = 0;
  result = malloc(12 * v72);
  v60 = dword_1787FEBB4 <= 0;
  *(_QWORD *)&dword_190123008[14 * *(int *)&algn_190122FD8[v50] + 2 + v50 / 4] = result;
  if ( !v60 )
  {
    v74 = dword_1787FEBBC;
    do
    {
      v74 += 2;
      ++v4;
      v75 = v50 + 56LL * *(int *)&algn_190122FD8[v50];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_190123008[2] + v75) + 12LL * *(int *)((char *)dword_190123008 + v75)) = *(v74 - 3);
      v76 = v50 + 56LL * *(int *)&algn_190122FD8[v50];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_190123008[2] + v76) + 12LL * *(int *)((char *)dword_190123008 + v76) + 4) = *(v74 - 2);
      result = (void *)*(int *)&algn_190122FD8[v50];
      ++dword_190123008[14 * (_QWORD)result + v50 / 4];
    }
    while ( v4 < dword_1787FEBB4 );
  }
  ++*(_DWORD *)&algn_190122FD8[v50];
  return result;
}

