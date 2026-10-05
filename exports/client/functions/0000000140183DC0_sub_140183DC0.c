/* Address: 0x140183dc0 | Name: sub_140183DC0 | Size: 966 bytes */
__int64 __fastcall sub_140183DC0(
        __int64 a1,
        int *a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        int a12)
{
  float v12; // xmm2_4
  float v13; // xmm3_4
  __int64 result; // rax
  int v15; // esi
  __m128 v18; // xmm0
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // xmm11_4
  __m128 v22; // xmm12
  __m128 v23; // xmm5
  __m128 v24; // xmm3
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm9_4
  float v28; // xmm2_4
  float v29; // xmm11_4
  float v30; // xmm4_4
  __m128 v31; // xmm0
  float v32; // xmm3_4
  float v33; // xmm8_4
  float v34; // xmm1_4
  float v35; // xmm7_4
  float v36; // xmm9_4
  __m128 v37; // xmm0
  float v38; // xmm1_4
  float v39; // xmm4_4
  float v40; // xmm6_4
  float v41; // xmm8_4
  __m128 v42; // xmm5
  float v43; // xmm7_4
  double v44; // xmm2_8
  __m128d v45; // xmm0
  __int64 v46; // rax
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h] BYREF
  float v48; // [rsp+120h] [rbp+18h]
  float v49; // [rsp+128h] [rbp+20h]
  float v50; // [rsp+140h] [rbp+38h]

  result = (__int64)&retaddr;
  v49 = v13;
  v48 = v12;
  v15 = a12;
  v18 = (__m128)LODWORD(a8);
  v19 = a7;
  v20 = v13;
  v21 = a5;
  v22.m128_f32[0] = a6;
  v23 = (__m128)LODWORD(a6);
  v23.m128_f32[0] = a6 - v13;
  v24 = (__m128)LODWORD(a10);
  v18.m128_f32[0] = (float)((float)(a8 - a6) * (float)(a8 - a6)) + (float)((float)(a7 - a5) * (float)(a7 - a5));
  v23.m128_f32[0] = (float)(v23.m128_f32[0] * v23.m128_f32[0]) + (float)((float)(a5 - v12) * (float)(a5 - v12));
  v24.m128_f32[0] = (float)((float)(a10 - a8) * (float)(a10 - a8)) + (float)((float)(a9 - a7) * (float)(a9 - a7));
  v18.m128_f32[0] = _mm_sqrt_pd(_mm_cvtps_pd(v18)).m128d_f64[0]
                  + _mm_sqrt_pd(_mm_cvtps_pd(v23)).m128d_f64[0]
                  + _mm_sqrt_pd(_mm_cvtps_pd(v24)).m128d_f64[0];
  v25 = (float)(v18.m128_f32[0] * v18.m128_f32[0])
      - (float)((float)((float)(a10 - v20) * (float)(a10 - v20)) + (float)((float)(a9 - v12) * (float)(a9 - v12)));
  if ( a12 <= 16 )
  {
    while ( v25 > a11 )
    {
      ++v15;
      v26 = v21 * 0.5;
      v27 = v19 * 0.5;
      v28 = v22.m128_f32[0] * 0.5;
      v29 = v27 + (float)(v21 * 0.5);
      v30 = (float)(v48 * 0.5) + v26;
      v31 = (__m128)LODWORD(a8);
      v32 = (float)(v49 * 0.5) + (float)(v22.m128_f32[0] * 0.5);
      v31.m128_f32[0] = a8 * 0.5;
      v33 = (float)(a9 * 0.5) + v27;
      v22 = v31;
      v22.m128_f32[0] = (float)(a8 * 0.5) + v28;
      v50 = v33;
      v34 = (float)(v29 + v30) * 0.5;
      v31.m128_f32[0] = v22.m128_f32[0] + v32;
      v21 = (float)(v29 + v33) * 0.5;
      v22.m128_f32[0] = v22.m128_f32[0] + (float)((float)(a10 * 0.5) + (float)(a8 * 0.5));
      a8 = (float)(a10 * 0.5) + (float)(a8 * 0.5);
      v31.m128_f32[0] = v31.m128_f32[0] * 0.5;
      v22.m128_f32[0] = v22.m128_f32[0] * 0.5;
      v35 = (float)(v21 + v34) * 0.5;
      v36 = (float)(v22.m128_f32[0] + v31.m128_f32[0]) * 0.5;
      result = sub_140183DC0(
                 a1,
                 (_DWORD)a2,
                 a3,
                 a4,
                 LODWORD(v30),
                 LODWORD(v32),
                 LODWORD(v34),
                 v31.m128_i32[0],
                 LODWORD(v35),
                 LODWORD(v36),
                 LODWORD(a11),
                 v15);
      v37 = (__m128)LODWORD(a8);
      v48 = v35;
      v49 = v36;
      v38 = v33 - v21;
      v39 = a9 - v33;
      v40 = v21 - v35;
      v41 = a9 - v35;
      v42 = v22;
      v42.m128_f32[0] = v22.m128_f32[0] - v36;
      v43 = a10 - v36;
      v37.m128_f32[0] = (float)((float)(a8 - v22.m128_f32[0]) * (float)(a8 - v22.m128_f32[0])) + (float)(v38 * v38);
      v19 = v50;
      v44 = _mm_sqrt_pd(_mm_cvtps_pd(v37)).m128d_f64[0];
      v42.m128_f32[0] = (float)(v42.m128_f32[0] * v42.m128_f32[0]) + (float)(v40 * v40);
      v45 = 0;
      v45.m128d_f64[0] = (float)((float)((float)(a10 - a8) * (float)(a10 - a8)) + (float)(v39 * v39));
      *(float *)v45.m128d_f64 = v44 + _mm_sqrt_pd(_mm_cvtps_pd(v42)).m128d_f64[0] + _mm_sqrt_pd(v45).m128d_f64[0];
      v25 = (float)(*(float *)v45.m128d_f64 * *(float *)v45.m128d_f64)
          - (float)((float)(v43 * v43) + (float)(v41 * v41));
      if ( v15 > 16 )
        return result;
    }
    v46 = *a2;
    if ( a1 )
    {
      *(float *)(a1 + 8 * v46) = a9;
      *(float *)(a1 + 8 * v46 + 4) = a10;
      LODWORD(v46) = *a2;
    }
    result = (unsigned int)(v46 + 1);
    *a2 = result;
  }
  return result;
}

