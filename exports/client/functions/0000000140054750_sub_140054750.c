/* Address: 0x140054750 | Name: sub_140054750 | Size: 3684 bytes */
__int64 __fastcall sub_140054750(int a1, float a2, float a3, float a4)
{
  int v4; // r15d
  float v5; // xmm0_4
  float v6; // xmm2_4
  int v7; // r14d
  unsigned int v8; // edi
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
  unsigned int v22; // edi
  __m128d v23; // xmm11
  __m128d v24; // xmm0
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  int v29; // eax
  unsigned int v30; // edi
  __m128d v31; // xmm11
  __m128d v32; // xmm0
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  __int64 v37; // rcx
  unsigned int v38; // eax
  int v39; // ebx
  unsigned int v40; // r11d
  unsigned int v41; // r10d
  unsigned int v42; // r9d
  unsigned int v43; // r8d
  unsigned int v44; // edx
  int v45; // r8d
  unsigned int v46; // eax
  unsigned int v47; // edx
  unsigned int v48; // r8d
  unsigned int v49; // edx
  __int64 v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // edx
  int v54; // r9d
  unsigned int *v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // ecx
  bool v60; // cc
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rax
  int v64; // r9d
  unsigned int *v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 result; // rax
  unsigned int *v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rcx

  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = 2;
  v8 = 0;
  v9 = 0;
  v10 = a1;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177544400] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178519250] = 0;
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
      v16.m128d_f64[0] = MEMORY[0x1401F8A50]();
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
      *(float *)&dword_140404A6C[v21 + 177167568] = v20;
      *(float *)&dword_140404A6C[v21 + 177167569] = v18;
      *(float *)&dword_140404A6C[v21 + 177167567] = v17;
      v22 = ++dword_140404A6C[177167565];
      v23 = _mm_cvtps_pd(_mm_cvtpd_ps(v15));
      v24.m128d_f64[1] = v23.m128d_f64[1];
      v24.m128d_f64[0] = MEMORY[0x1401F8A50]();
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
      *(float *)&dword_140404A6C[v29 + 177167567] = v25;
      *(float *)&dword_140404A6C[v29 + 177167568] = v28;
      *(float *)&dword_140404A6C[v29 + 177167569] = v26;
      v30 = ++dword_140404A6C[177167565];
      v31 = _mm_cvtps_pd(_mm_cvtpd_ps(v23));
      v32.m128d_f64[1] = v31.m128d_f64[1];
      v32.m128d_f64[0] = MEMORY[0x1401F8A50]();
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
      v37 = (int)(3 * v30);
      v31.m128d_f64[0] = v31.m128d_f64[0] + 1.047197551196667;
      *(float *)&dword_140404A6C[v37 + 177167567] = v33;
      *(float *)&dword_140404A6C[v37 + 177167568] = v36;
      *(float *)&dword_140404A6C[v37 + 177167569] = v34;
      v8 = ++dword_140404A6C[177167565];
      v12 = _mm_cvtpd_ps(v31);
      --v14;
    }
    while ( v14 );
    v5 = a3;
    ++v9;
    v6 = a2;
  }
  while ( v9 < 4 );
  v38 = dword_140404A6C[177544400];
  v39 = 8;
  do
  {
    v40 = v39 - 2;
    dword_140404A6C[5 * v38 + 177544401] = 4;
    v41 = v39 - 8;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 - 2;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39 - 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 7;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v39 - 8;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 - 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 6;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v39 - 7;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39 + 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 5;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544405] = v39 - 6;
    v42 = v39 - 4;
    ++dword_140404A6C[177544400];
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 + 1;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v39 + 2;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v39 - 4;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v39 - 5;
    v43 = v39 - 3;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v39 + 2;
    v44 = v39 + 3;
    v39 += 6;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v44;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v43;
    dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = v42;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = v44;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = v40;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = v41;
    dword_140404A6C[5 * dword_140404A6C[177544400] + 177544405] = v43;
    v38 = ++dword_140404A6C[177544400];
  }
  while ( v39 < 26 );
  v45 = 6;
  dword_140404A6C[5 * v38 + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 5;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 0;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 1;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 1;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 2;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 3;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544401] = 4;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 18;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 23;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 22;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 19;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544402] = 19;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544403] = 22;
  dword_140404A6C[5 * dword_140404A6C[177544400] + 177544404] = 21;
  dword_140404A6C[5 * dword_140404A6C[177544400]++ + 177544405] = 20;
  v46 = dword_140404A6C[178519250];
  do
  {
    dword_140404A6C[2 * v46 + 178519251] = v45 - 6;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v45;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v45 - 5;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v45 + 1;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v45 - 4;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v45 + 2;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v45 - 3;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v45 + 3;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v45 - 2;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v45 + 4;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v45 - 1;
    v47 = v45 + 5;
    v45 += 6;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519252] = v47;
    v46 = ++dword_140404A6C[178519250];
  }
  while ( v45 < 24 );
  do
  {
    v48 = v7 - 2;
    dword_140404A6C[2 * v46 + 178519251] = v7 - 2;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v7 - 1;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v7 - 1;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v7;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v7;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v7 + 1;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v7 + 1;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v7 + 2;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v7 + 2;
    v49 = v7 + 3;
    v7 += 6;
    dword_140404A6C[2 * dword_140404A6C[178519250]++ + 178519252] = v49;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519251] = v49;
    dword_140404A6C[2 * dword_140404A6C[178519250] + 178519252] = v48;
    v46 = ++dword_140404A6C[178519250];
  }
  while ( v7 < 26 );
  v50 = 1268 * v10;
  v51 = 12 * dword_140404A6C[177167565];
  dword_140404A6C[1268 * v10 + 278522247] = 0;
  v52 = j__malloc_base(v51);
  v53 = dword_140404A6C[177167565];
  v54 = 0;
  *(_QWORD *)&dword_140404A6C[1268 * v10 + 278522249] = v52;
  if ( v53 > 0 )
  {
    v55 = &dword_140404A6C[177167569];
    do
    {
      v55 += 3;
      ++v54;
      v56 = (int)(3 * dword_140404A6C[v50 + 278522247]);
      v57 = *(_QWORD *)&dword_140404A6C[v50 + 278522249];
      *(_DWORD *)(v57 + 4 * v56) = *(v55 - 5);
      *(_DWORD *)(v57 + 4 * v56 + 4) = *(v55 - 4);
      *(_DWORD *)(v57 + 4 * v56 + 8) = *(v55 - 3);
      ++dword_140404A6C[v50 + 278522247];
      v53 = dword_140404A6C[177167565];
    }
    while ( v54 < (int)dword_140404A6C[177167565] );
  }
  dword_140404A6C[v50 + 278522251] = 0;
  *(_QWORD *)&dword_140404A6C[v50 + 278522253] = 0;
  dword_140404A6C[v50 + 278522255] = 0;
  dword_140404A6C[14 * (int)dword_140404A6C[v50 + 278522251] + 278522256 + v50] = v53;
  v58 = j__malloc_base(4 * v53);
  v59 = 0;
  v60 = (signed int)dword_140404A6C[177167565] <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v50 + 278522251] + 278522257 + v50] = v58;
  if ( !v60 )
  {
    v61 = 0;
    do
    {
      v61 += 4;
      *(_DWORD *)(v61 + *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v50 + 278522251] + 278522257 + v50] - 4) = v59++;
    }
    while ( v59 < (int)dword_140404A6C[177167565] );
  }
  v62 = (int)dword_140404A6C[177544400];
  dword_140404A6C[14 * (int)dword_140404A6C[v50 + 278522251] + 278522259 + v50] = 0;
  v63 = j__malloc_base(36 * v62);
  v64 = 0;
  v60 = (signed int)dword_140404A6C[177544400] <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v50 + 278522251] + 278522261 + v50] = v63;
  if ( !v60 )
  {
    v65 = &dword_140404A6C[177544403];
    do
    {
      v65 += 5;
      ++v64;
      v66 = v50 * 4 + 56LL * (int)dword_140404A6C[v50 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v66)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v66)
                + 8) = *(v65 - 6);
      v67 = v50 * 4 + 56LL * (int)dword_140404A6C[v50 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v67)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v67)
                + 12) = *(v65 - 5);
      v68 = v50 * 4 + 56LL * (int)dword_140404A6C[v50 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v68)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v68)
                + 16) = *(v65 - 4);
      v69 = v50 * 4 + 56LL * (int)dword_140404A6C[v50 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v69)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v69)
                + 20) = *(v65 - 3);
      v70 = v50 * 4 + 56LL * (int)dword_140404A6C[v50 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522261] + v70)
                + 36LL * *(int *)((char *)&dword_140404A6C[278522259] + v70)
                + 4) = 4;
      v71 = v50 * 4 + 56LL * (int)dword_140404A6C[v50 + 278522251];
      ++*(unsigned int *)((char *)&dword_140404A6C[278522259] + v71);
    }
    while ( v64 < (int)dword_140404A6C[177544400] );
  }
  v72 = (int)dword_140404A6C[178519250];
  dword_140404A6C[14 * (int)dword_140404A6C[v50 + 278522251] + 278522263 + v50] = 0;
  result = j__malloc_base(12 * v72);
  v60 = (signed int)dword_140404A6C[178519250] <= 0;
  *(_QWORD *)&dword_140404A6C[14 * (int)dword_140404A6C[v50 + 278522251] + 278522265 + v50] = result;
  if ( !v60 )
  {
    v74 = &dword_140404A6C[178519252];
    do
    {
      v74 += 2;
      ++v4;
      v75 = v50 * 4 + 56LL * (int)dword_140404A6C[v50 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v75)
                + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v75)) = *(v74 - 3);
      v76 = v50 * 4 + 56LL * (int)dword_140404A6C[v50 + 278522251];
      *(_DWORD *)(*(_QWORD *)((char *)&dword_140404A6C[278522265] + v76)
                + 12LL * *(int *)((char *)&dword_140404A6C[278522263] + v76)
                + 4) = *(v74 - 2);
      result = (int)dword_140404A6C[v50 + 278522251];
      ++dword_140404A6C[14 * result + 278522263 + v50];
    }
    while ( v4 < (int)dword_140404A6C[178519250] );
  }
  ++dword_140404A6C[v50 + 278522251];
  return result;
}

