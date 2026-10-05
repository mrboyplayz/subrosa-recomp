/* Address: 0x140092370 | Name: sub_140092370 | Size: 2550 bytes */
__int64 sub_140092370()
{
  float v0; // xmm10_4
  float v1; // xmm9_4
  __m128 v2; // xmm7
  float v3; // xmm6_4
  float v4; // xmm8_4
  __int64 v5; // rcx
  double v6; // xmm4_8
  double v7; // xmm3_8
  double v8; // xmm7_8
  double v9; // xmm10_8
  __int64 v10; // r8
  unsigned int v11; // edx
  unsigned int *v12; // rax
  unsigned int *v13; // rax
  unsigned int *v14; // rdx
  signed int v15; // r14d
  __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned int v19; // esi
  float v20; // xmm11_4
  __int64 v21; // rbp
  unsigned int v22; // xmm10_4
  unsigned int v23; // xmm7_4
  unsigned int v24; // xmm12_4
  unsigned int v25; // eax
  float v26; // xmm10_4
  float v27; // xmm7_4
  float v28; // xmm12_4
  float v29; // xmm9_4
  float v30; // xmm13_4
  __m128i v31; // xmm6
  float v32; // xmm8_4
  unsigned int *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  __m128d v36; // xmm1
  float v37; // xmm7_4
  double v38; // xmm4_8
  __m128d v39; // xmm0
  double v40; // xmm3_8
  __m128i v41; // xmm7
  __m128i v42; // xmm0
  __m128i v43; // xmm10
  __m128i v44; // xmm0
  __int64 v45; // r8
  int v46; // xmm0_4
  unsigned int v47; // eax
  float v48; // [rsp+130h] [rbp+8h]

  if ( dword_140404A6C[283831312] == 5
    && dword_140404A6C[284024501] != -1
    && dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] - 1 <= 1
    && *(float *)&dword_140404A6C[284022465] != 0.0 )
  {
    (*(void (__fastcall **)(__int64))&dword_140404A6C[18215101])(2929);
    v2 = (__m128)dword_140404A6C[284024509];
    v0 = *(float *)&dword_140404A6C[284024514];
    v1 = (float)((float)(*(float *)&dword_140404A6C[284024506]
                       * (float)(*(float *)&dword_140404A6C[284022466] - *(float *)&dword_140404A6C[284024503]))
               + (float)(*(float *)&dword_140404A6C[284024505]
                       * (float)(*(float *)&dword_140404A6C[284022465] - *(float *)&dword_140404A6C[284024502])))
       + (float)(*(float *)&dword_140404A6C[284024507]
               * (float)(*(float *)&dword_140404A6C[284022467] - *(float *)&dword_140404A6C[284024504]));
    v2.m128_f32[0] = (float)((float)(*(float *)&dword_140404A6C[284024509]
                                   * (float)(*(float *)&dword_140404A6C[284022466]
                                           - *(float *)&dword_140404A6C[284024503]))
                           + (float)(*(float *)&dword_140404A6C[284024508]
                                   * (float)(*(float *)&dword_140404A6C[284022465]
                                           - *(float *)&dword_140404A6C[284024502])))
                   + (float)(*(float *)&dword_140404A6C[284024510]
                           * (float)(*(float *)&dword_140404A6C[284022467] - *(float *)&dword_140404A6C[284024504]));
    v3 = -(float)((float)((float)(*(float *)&dword_140404A6C[284024512]
                                * (float)(*(float *)&dword_140404A6C[284022466] - *(float *)&dword_140404A6C[284024503]))
                        + (float)(*(float *)&dword_140404A6C[284024511]
                                * (float)(*(float *)&dword_140404A6C[284022465] - *(float *)&dword_140404A6C[284024502])))
                + (float)(*(float *)&dword_140404A6C[284024513]
                        * (float)(*(float *)&dword_140404A6C[284022467] - *(float *)&dword_140404A6C[284024504])));
    v4 = fmaxf(
           fminf(
             (float)(192.0
                   / (float)((float)(fsqrt(
                                       (float)((float)((float)(*(float *)&dword_140404A6C[284022466]
                                                             - *(float *)&dword_140404A6C[284024503])
                                                     * (float)(*(float *)&dword_140404A6C[284022466]
                                                             - *(float *)&dword_140404A6C[284024503]))
                                             + (float)((float)(*(float *)&dword_140404A6C[284022465]
                                                             - *(float *)&dword_140404A6C[284024502])
                                                     * (float)(*(float *)&dword_140404A6C[284022465]
                                                             - *(float *)&dword_140404A6C[284024502])))
                                     + (float)((float)(*(float *)&dword_140404A6C[284022467]
                                                     - *(float *)&dword_140404A6C[284024504])
                                             * (float)(*(float *)&dword_140404A6C[284022467]
                                                     - *(float *)&dword_140404A6C[284024504])))
                                   * 0.0625)
                           * *(float *)&dword_140404A6C[284024514]))
           + 4.0,
             192.0),
           8.0);
    if ( v3 < 1.0 )
      v3 = 1.0;
    ((void (*)(void))sub_14023F704)();
    v2.m128_f32[0] = (float)(v2.m128_f32[0] * v2.m128_f32[0]) + (float)(v1 * v1);
    v2.m128_f32[0] = _mm_sqrt_pd(_mm_cvtps_pd(v2)).m128d_f64[0] * 512.0;
    if ( v3 > 1.0 )
      v2.m128_f32[0] = v2.m128_f32[0] / (float)(v3 * v0);
    v6 = MEMORY[0x1401F8A50](v5);
    HIDWORD(v9) = 0;
    v7 = fminf(512.0 - (float)(v4 * 0.5), v2.m128_f32[0]);
    v8 = 288.0 - v6 * v7;
    *(float *)&v9 = _mm_shuffle_pd((__m128d)*(unsigned __int64 *)&v6, (__m128d)*(unsigned __int64 *)&v6, 1).m128d_f64[0]
                  * v7
                  + 512.0;
    if ( *(float *)&v8 >= 24.0 )
    {
      if ( *(float *)&v8 > 552.0 )
        *(_QWORD *)&v8 = 1141506048;
    }
    else
    {
      *(_QWORD *)&v8 = 1103101952;
    }
    unk_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283831238] + 284024944]);
    v11 = dword_140404A6C[284024501];
    if ( dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286] == 1 )
    {
      sub_14006CFF0(v9, v8, v10, v4, 133, 1065353216, 0, 0, 1061158912);
      v11 = dword_140404A6C[284024501];
    }
    if ( dword_140404A6C[3597 * v11 + 71856286] == 2 )
      sub_14006CFF0(v9, v8, v10, v4, 133, 0, 1065353216, 0, 1061158912);
  }
  dword_140404A6C[438291413] = 2;
  v12 = &dword_140404A6C[280658298];
  do
  {
    *v12 = 0;
    v12 += 7166;
  }
  while ( (__int64)v12 < (__int64)&dword_140404A6C[282492794] );
  v13 = &dword_140404A6C[278846060];
  v14 = &dword_140404A6C[280648300];
  do
  {
    *v13 = 0;
    v13 += 1760;
  }
  while ( (__int64)v13 < (__int64)&dword_140404A6C[280648300] );
  v15 = dword_140404A6C[346706173];
  for ( result = dword_140404A6C[346706173] + 1;
        v15 != (unsigned __int8)(LOBYTE(dword_140404A6C[346706173]) + 1);
        result = dword_140404A6C[346706173] + 1 )
  {
    v17 = 38LL * v15;
    v18 = dword_140404A6C[v17 + 346696447];
    if ( (int)v18 > 0 && (int)dword_140404A6C[v17 + 346696448] > 0 )
    {
      v19 = dword_140404A6C[v17 + 346696445];
      if ( v19 - 1 <= 1 )
      {
        v20 = (float)(int)v18 * 0.0049999999;
        if ( dword_140404A6C[v17 + 346696449] != -1 )
        {
          v21 = (int)dword_140404A6C[v17 + 346696449];
          if ( v19 == 1 )
          {
            v22 = dword_140404A6C[344 * v21 + 284956407];
            v23 = dword_140404A6C[344 * v21 + 284956408];
            v24 = dword_140404A6C[344 * v21 + 284956409];
          }
          else
          {
            v22 = dword_140404A6C[13 * v21 + 285083825];
            v23 = dword_140404A6C[13 * v21 + 285083826];
            v24 = dword_140404A6C[13 * v21 + 285083827];
          }
          v25 = dword_140404A6C[v17 + 346696450];
          v26 = (float)((float)(*(float *)&dword_140404A6C[284024508] * 0.5) + *(float *)&v22)
              - *(float *)&dword_140404A6C[284024502];
          v27 = (float)((float)(*(float *)&dword_140404A6C[284024509] * 0.5) + *(float *)&v23)
              - *(float *)&dword_140404A6C[284024503];
          v48 = (float)((float)(*(float *)&dword_140404A6C[284024510] * 0.5) + *(float *)&v24)
              - *(float *)&dword_140404A6C[284024504];
          v28 = (float)((float)(v27 * *(float *)&dword_140404A6C[284024506])
                      + (float)(v26 * *(float *)&dword_140404A6C[284024505]))
              + (float)(v48 * *(float *)&dword_140404A6C[284024507]);
          v29 = (float)((float)(v27 * *(float *)&dword_140404A6C[284024509])
                      + (float)(v26 * *(float *)&dword_140404A6C[284024508]))
              + (float)(v48 * *(float *)&dword_140404A6C[284024510]);
          v31 = (__m128i)0x43800000u;
          v30 = -(float)((float)((float)(v27 * *(float *)&dword_140404A6C[284024512])
                               + (float)(v26 * *(float *)&dword_140404A6C[284024511]))
                       + (float)(v48 * *(float *)&dword_140404A6C[284024513]));
          *(float *)v31.m128i_i32 = 256.0 / fsqrt((float)((float)(v26 * v26) + (float)(v27 * v27)) + (float)(v48 * v48));
          if ( v25 )
          {
            if ( v25 == 2 )
              *(float *)v31.m128i_i32 = *(float *)v31.m128i_i32 + *(float *)v31.m128i_i32;
          }
          else
          {
            *(float *)v31.m128i_i32 = *(float *)v31.m128i_i32 * 0.25;
          }
          if ( v19 == 2 )
            *(float *)v31.m128i_i32 = *(float *)v31.m128i_i32 * 0.125;
          *(float *)v31.m128i_i32 = fminf(*(float *)v31.m128i_i32, 32.0);
          if ( *(float *)v31.m128i_i32 > 4.0 )
          {
            if ( *(float *)v31.m128i_i32 < 8.0 )
              v20 = v20 * (float)((float)(*(float *)v31.m128i_i32 - 4.0) * 0.25);
            v32 = 0.0;
            v33 = &dword_140404A6C[v17 + 346696451];
            if ( dword_140404A6C[3592 * dword_140404A6C[438291413] + 72777085] && *(_BYTE *)v33 )
            {
              v14 = &dword_140404A6C[v17 + 346696451];
              do
              {
                if ( (char *)v14 - (char *)v33 >= 0xFFFF )
                  break;
                v34 = *(char *)v14;
                v14 = (unsigned int *)((char *)v14 + 1);
                v18 = v34 + 3592LL * (int)dword_140404A6C[438291413];
                v32 = v32 + (float)(*(float *)v31.m128i_i32 * *(float *)&dword_140404A6C[v18 + 72777093]);
              }
              while ( *(_BYTE *)v14 );
            }
            sub_14023F704(v18, v14);
            v36 = 0;
            v36.m128d_f64[0] = (float)((float)(v29 * v29) + (float)(v28 * v28));
            v37 = _mm_sqrt_pd(v36).m128d_f64[0] * 512.0;
            if ( v30 <= 1.0 )
            {
              if ( v30 < -1.0 )
                v37 = v37 * (float)(-1.0 / (float)(v30 * *(float *)&dword_140404A6C[284024514]));
            }
            else
            {
              v37 = v37 / (float)(v30 * *(float *)&dword_140404A6C[284024514]);
            }
            v38 = MEMORY[0x1401F8A50](v35);
            v39 = (__m128d)0x4072000000000000uLL;
            v40 = fminf(512.0 - (float)(v32 * 0.5), v37);
            v39.m128d_f64[0] = 288.0 - v38 * v40;
            v43 = 0;
            v41 = (__m128i)_mm_cvtpd_ps(v39);
            v42 = (__m128i)0x41C00000u;
            *(float *)v43.m128i_i32 = _mm_shuffle_pd(
                                        (__m128d)*(unsigned __int64 *)&v38,
                                        (__m128d)*(unsigned __int64 *)&v38,
                                        1).m128d_f64[0]
                                    * v40
                                    + 512.0;
            if ( *(float *)v41.m128i_i32 < 24.0 || (v42 = (__m128i)0x440A0000u, *(float *)v41.m128i_i32 > 552.0) )
              v41 = v42;
            if ( v19 == 1 )
              v44 = _mm_cvtsi32_si128(dword_140404A6C[7166 * v21 + 280658298]);
            else
              v44 = _mm_cvtsi32_si128(dword_140404A6C[1760 * v21 + 278846060]);
            *(float *)v41.m128i_i32 = *(float *)v41.m128i_i32
                                    - (float)(_mm_cvtepi32_ps(v44).m128_f32[0] * *(float *)v31.m128i_i32);
            unk_140404050(3553, dword_140404A6C[451221642]);
            v46 = 1061158912;
            if ( v30 > -0.125 )
              v46 = 1065353216;
            sub_14006CFF0(
              *(double *)v43.m128i_i64,
              *(double *)v41.m128i_i64,
              v45,
              *(float *)v31.m128i_i32 * 0.875,
              5,
              v46,
              v46,
              v46,
              COERCE_INT(v20 * 0.75));
            sub_14006D930(
              &dword_140404A6C[v17 + 346696451],
              (unsigned int)_mm_cvtsi128_si32(v43),
              (unsigned int)_mm_cvtsi128_si32(v41),
              (unsigned int)_mm_cvtsi128_si32(v31),
              69);
            v47 = dword_140404A6C[v17 + 346696445];
            if ( v47 == 1 )
            {
              ++dword_140404A6C[7166 * dword_140404A6C[v17 + 346696449] + 280658298];
            }
            else if ( v47 == 2 )
            {
              ++dword_140404A6C[1760 * dword_140404A6C[v17 + 346696449] + 278846060];
            }
          }
        }
      }
    }
    v15 = (unsigned __int8)(v15 - 1);
  }
  return result;
}

