/* Address: 0x140021500 | Name: sub_140021500 | Size: 1713 bytes */
__int64 __fastcall sub_140021500(__int64 a1, int a2, __int64 a3, float *a4)
{
  __int64 v4; // r13
  __int64 result; // rax
  signed __int64 v7; // r8
  signed int v8; // esi
  __int64 v9; // r10
  __int64 v10; // r13
  float *v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r15
  float *v15; // r11
  __int64 v16; // r9
  __int64 v17; // rbx
  float *v18; // r8
  float v19; // xmm0_4
  float *v20; // rcx
  float v21; // xmm10_4
  float v22; // xmm13_4
  __int64 v23; // rdx
  float v24; // xmm12_4
  float v25; // xmm14_4
  float v26; // xmm15_4
  float v27; // xmm9_4
  float v28; // xmm4_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm3_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm6_4
  float v38; // xmm7_4
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r12
  float *v42; // r9
  float v43; // xmm15_4
  __int64 v44; // rbx
  float *v45; // rbp
  __int64 v46; // r15
  __int64 v47; // r8
  float *v48; // r11
  __int64 v49; // rdi
  __int64 v50; // rax
  float *v51; // rdx
  float v52; // xmm14_4
  float v53; // xmm13_4
  float v54; // xmm1_4
  float v55; // xmm5_4
  float v56; // xmm3_4
  float v57; // xmm12_4
  float v58; // xmm2_4
  float v59; // xmm4_4
  float v60; // xmm7_4
  float v61; // xmm0_4
  float v62; // xmm6_4
  float v63; // xmm5_4
  float v64; // xmm3_4
  float v65; // xmm7_4
  float v66; // xmm5_4
  float v67; // xmm6_4
  float v68; // xmm4_4
  float v69; // xmm9_4
  float v70; // xmm10_4
  __int64 v71; // rcx
  __m128 v72; // xmm0
  __m128 v73; // xmm2
  __m128 v74; // xmm2
  __m128 v75; // xmm0
  __m128 v76; // xmm2
  unsigned __int64 v77; // rdx
  __m128 v78; // xmm2
  __m128 v79; // xmm0
  __m128i v80; // [rsp+10h] [rbp-E8h]
  signed int v82; // [rsp+108h] [rbp+10h]

  v82 = a2;
  v4 = a1;
  result = a3;
  v7 = 0;
  v8 = 0;
  v9 = a2;
  if ( a2 > 0 )
  {
    v10 = 1;
    v11 = (float *)(result + 4);
    v12 = a2;
    do
    {
      if ( v10 < v9 )
      {
        v13 = v10 + 1;
        v14 = v9 - v10;
        v15 = v11 + 3;
        do
        {
          if ( v13 < v9 )
          {
            v16 = v13 + 1;
            v17 = v9 - v13;
            v18 = v15 + 3;
            do
            {
              if ( v16 < v9 )
              {
                v19 = *(v15 - 1);
                v20 = v18 + 4;
                v21 = *v15;
                v22 = *(v18 - 1) - v19;
                v23 = v9 - v16;
                v24 = v15[1];
                v25 = *v18 - *v15;
                v26 = v18[1] - v24;
                v27 = *(v11 - 1) - v19;
                do
                {
                  v28 = *(v20 - 2) - v19;
                  v29 = *(v20 - 1) - v21;
                  v30 = (float)(v26 * v29) - (float)((float)(*v20 - v24) * v25);
                  v31 = (float)((float)(*v20 - v24) * v22) - (float)(v28 * v26);
                  v32 = (float)(v28 * v25) - (float)(v22 * v29);
                  v33 = fsqrt((float)((float)(v31 * v31) + (float)(v30 * v30)) + (float)(v32 * v32));
                  if ( v33 == 0.0 )
                  {
                    v34 = 0.0;
                    v35 = 0.0;
                    v36 = 0.0;
                  }
                  else
                  {
                    v34 = v30 * (float)(1.0 / v33);
                    v35 = v31 * (float)(1.0 / v33);
                    v36 = v32 * (float)(1.0 / v33);
                  }
                  v37 = *v11 - v21;
                  v38 = v11[1] - v24;
                  if ( (float)((float)((float)(v34 * v27) + (float)(v37 * v35)) + (float)(v36 * v38)) < 0.0 )
                  {
                    v34 = -v34;
                    v35 = -v35;
                    v36 = -v36;
                  }
                  v19 = *(v15 - 1);
                  v39 = v8 + 1;
                  if ( fabs((float)((float)(v34 * v27) + (float)(v37 * v35)) + (float)(v36 * v38)) < 0.000015258789 )
                    v39 = v8;
                  v20 += 3;
                  v8 = v39;
                  --v23;
                }
                while ( v23 );
              }
              v18 += 3;
              ++v16;
              --v17;
            }
            while ( v17 );
          }
          ++v13;
          v15 += 3;
          --v14;
        }
        while ( v14 );
      }
      ++v10;
      v11 += 3;
      --v12;
    }
    while ( v12 );
    v4 = a1;
    v7 = 0;
    result = a3;
    a2 = v82;
  }
  v80 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v8), 0);
  if ( a2 <= 0 )
  {
    LODWORD(v71) = 0;
  }
  else
  {
    v40 = 0;
    v41 = (unsigned int)a2;
    v42 = (float *)(result + 8);
    do
    {
      *(_DWORD *)(v4 + 4 * v40) = 0;
      v43 = 0.0;
      v44 = 0;
      if ( v9 > 0 )
      {
        v45 = (float *)(result + 4);
        do
        {
          v46 = v44 + 1;
          v47 = v44 + 1;
          if ( v44 + 1 < v9 )
          {
            v48 = v45 + 3;
            do
            {
              v49 = v47 + 1;
              v50 = v47 + 1;
              if ( v47 + 1 < v9 )
              {
                v51 = v48 + 4;
                do
                {
                  if ( v44 != v40 && v47 != v40 && v50 != v40 )
                  {
                    v52 = v45[1];
                    v53 = *v45;
                    v54 = v48[1] - v52;
                    v55 = *v51 - v52;
                    v56 = *v48 - *v45;
                    v57 = *(v45 - 1);
                    v58 = *(v51 - 1) - *v45;
                    v59 = *(v48 - 1) - v57;
                    v60 = (float)(v54 * v58) - (float)(v55 * v56);
                    v61 = *(v51 - 2) - v57;
                    v62 = (float)(v61 * v56) - (float)(v59 * v58);
                    v63 = (float)(v55 * v59) - (float)(v61 * v54);
                    v64 = fsqrt((float)((float)(v63 * v63) + (float)(v60 * v60)) + (float)(v62 * v62));
                    if ( v64 == 0.0 )
                    {
                      v65 = 0.0;
                      v66 = 0.0;
                      v67 = 0.0;
                    }
                    else
                    {
                      v65 = v60 * (float)(1.0 / v64);
                      v66 = v63 * (float)(1.0 / v64);
                      v67 = v62 * (float)(1.0 / v64);
                    }
                    v68 = *(v42 - 2) - v57;
                    v69 = *(v42 - 1) - v53;
                    v70 = *v42 - v52;
                    if ( (float)((float)((float)(v66 * v69) + (float)(v65 * v68)) + (float)(v67 * v70)) < 0.0 )
                    {
                      v65 = -v65;
                      v66 = -v66;
                      v67 = -v67;
                    }
                    if ( fabs((float)((float)(v66 * v69) + (float)(v65 * v68)) + (float)(v67 * v70)) >= 0.000015258789 )
                    {
                      v43 = v43
                          + (float)((float)((float)((float)((float)(a4[1] - v53) * v66)
                                                  + (float)((float)(*a4 - v57) * v65))
                                          + (float)((float)(a4[2] - v52) * v67))
                                  / (float)((float)((float)(v66 * v69) + (float)(v65 * v68)) + (float)(v67 * v70)));
                      *(float *)(v4 + 4 * v40) = v43;
                    }
                  }
                  ++v50;
                  v51 += 3;
                }
                while ( v50 < v9 );
              }
              v48 += 3;
              ++v47;
            }
            while ( v49 < v9 );
          }
          v45 += 3;
          ++v44;
        }
        while ( v46 < v9 );
        result = a3;
        v7 = 0;
      }
      ++v40;
      v42 += 3;
      --v41;
    }
    while ( v41 );
    result = v82;
    LODWORD(v71) = 0;
    if ( (unsigned int)v82 >= 0x10 )
    {
      v72 = _mm_cvtepi32_ps(v80);
      result = v4 + 32;
      v73 = _mm_rcp_ps(v72);
      v74 = _mm_sub_ps(_mm_add_ps(v73, v73), _mm_mul_ps(_mm_mul_ps(v73, v73), v72));
      do
      {
        v75 = *(__m128 *)(result - 32);
        result += 64;
        LODWORD(v71) = v71 + 16;
        v7 += 16LL;
        *(__m128 *)(result - 96) = _mm_mul_ps(v74, v75);
        *(__m128 *)(result - 80) = _mm_mul_ps(v74, *(__m128 *)(result - 80));
        *(__m128 *)(result - 64) = _mm_mul_ps(v74, *(__m128 *)(result - 64));
        *(__m128 *)(result - 48) = _mm_mul_ps(*(__m128 *)(result - 48), v74);
      }
      while ( v7 < (__int64)(v82 & 0xFFFFFFFFFFFFFFF0uLL) );
    }
  }
  v71 = (int)v71;
  if ( (int)v71 < v9 )
  {
    result = v9 - (int)v71;
    if ( result < 4 )
      goto LABEL_57;
    v76 = (__m128)0x3F800000u;
    result = v4 + 4LL * (int)v71 + 8;
    v77 = ((unsigned __int64)(v9 - (int)v71 - 4) >> 2) + 1;
    v76.m128_f32[0] = 1.0 / (float)v8;
    v71 = (int)v71 + 4 * v77;
    v78 = _mm_shuffle_ps(v76, v76, 0);
    do
    {
      v79 = *(__m128 *)(result - 8);
      result += 16;
      *(__m128 *)(result - 24) = _mm_mul_ps(v79, v78);
      --v77;
    }
    while ( v77 );
    if ( v71 < v9 )
    {
LABEL_57:
      do
      {
        *(float *)(v4 + 4 * v71) = (float)(1.0 / (float)v8) * *(float *)(v4 + 4 * v71);
        ++v71;
      }
      while ( v71 < v9 );
    }
  }
  return result;
}

