/* Address: 0x140105180 | Name: sub_140105180 | Size: 752 bytes */
__int64 __fastcall sub_140105180(__int64 a1)
{
  float v1; // xmm6_4
  __int64 v2; // rdi
  double v3; // xmm7_8
  __int64 v4; // rbx
  __m128d v5; // xmm0
  unsigned int v6; // xmm1_4
  __int64 v7; // rbx
  __m128d v8; // xmm0
  double v9; // xmm2_8
  __int64 v10; // rbx
  __m128d v11; // xmm0
  unsigned int v12; // xmm1_4
  __int64 v13; // rbx
  __m128d v14; // xmm0
  unsigned int v15; // xmm1_4
  __int64 result; // rax
  bool v17; // zf
  float v18; // xmm3_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm2_4

  v1 = 0.25;
  if ( BYTE1(dword_140404A6C[284024821]) )
    v1 = 1.0;
  if ( LOBYTE(dword_140404A6C[284024821]) )
    v1 = v1 * 0.25;
  v2 = (int)a1;
  v3 = v1;
  if ( BYTE2(dword_140404A6C[284024771]) )
  {
    v4 = 7LL * (int)a1;
    v5.m128d_f64[1] = _mm_cvtps_pd((__m128)dword_140404A6C[v4 + 284024384]).m128d_f64[1];
    v5.m128d_f64[0] = MEMORY[0x1401F8A50](a1);
    *(float *)&v6 = v5.m128d_f64[0] * v3 + *(float *)&dword_140404A6C[v4 + 284024381];
    dword_140404A6C[v4 + 284024381] = v6;
    *(float *)&dword_140404A6C[v4 + 284024383] = *(float *)&dword_140404A6C[v4 + 284024383]
                                               - _mm_shuffle_pd(v5, v5, 1).m128d_f64[0] * v3;
  }
  if ( BYTE2(dword_140404A6C[284024770]) )
  {
    v7 = 7 * v2;
    v8.m128d_f64[1] = _mm_cvtps_pd((__m128)dword_140404A6C[7 * v2 + 284024384]).m128d_f64[1];
    v8.m128d_f64[0] = MEMORY[0x1401F8A50](a1);
    v9 = *(float *)&dword_140404A6C[7 * v2 + 284024381] - v8.m128d_f64[0] * v3;
    *(float *)v8.m128d_f64 = _mm_shuffle_pd(v8, v8, 1).m128d_f64[0] * v3
                           + *(float *)&dword_140404A6C[7 * v2 + 284024383];
    *(float *)&dword_140404A6C[v7 + 284024381] = v9;
    dword_140404A6C[v7 + 284024383] = LODWORD(v8.m128d_f64[0]);
  }
  if ( LOBYTE(dword_140404A6C[284024766]) )
  {
    v10 = 7 * v2;
    v11.m128d_f64[1] = _mm_cvtps_pd((__m128)dword_140404A6C[7 * v2 + 284024384]).m128d_f64[1];
    v11.m128d_f64[0] = MEMORY[0x1401F8A50](a1);
    *(float *)&v12 = *(float *)&dword_140404A6C[7 * v2 + 284024381] - _mm_shuffle_pd(v11, v11, 1).m128d_f64[0] * v3;
    dword_140404A6C[v10 + 284024381] = v12;
    *(float *)&dword_140404A6C[v10 + 284024383] = *(float *)&dword_140404A6C[v10 + 284024383] - v11.m128d_f64[0] * v3;
  }
  if ( HIBYTE(dword_140404A6C[284024766]) )
  {
    v13 = 7 * v2;
    v14.m128d_f64[1] = _mm_cvtps_pd((__m128)dword_140404A6C[7 * v2 + 284024384]).m128d_f64[1];
    v14.m128d_f64[0] = MEMORY[0x1401F8A50](a1);
    *(float *)&v15 = _mm_shuffle_pd(v14, v14, 1).m128d_f64[0] * v3 + *(float *)&dword_140404A6C[7 * v2 + 284024381];
    *(float *)v14.m128d_f64 = v14.m128d_f64[0] * v3 + *(float *)&dword_140404A6C[7 * v2 + 284024383];
    dword_140404A6C[v13 + 284024381] = v15;
    dword_140404A6C[v13 + 284024383] = LODWORD(v14.m128d_f64[0]);
  }
  if ( LOBYTE(dword_140404A6C[284024770]) )
    *(float *)&dword_140404A6C[7 * v2 + 284024382] = v1 + *(float *)&dword_140404A6C[7 * v2 + 284024382];
  if ( BYTE1(dword_140404A6C[284024772]) )
    *(float *)&dword_140404A6C[7 * v2 + 284024382] = *(float *)&dword_140404A6C[7 * v2 + 284024382] - v1;
  result = 7 * v2;
  v17 = dword_140404A6C[73991627] == 0;
  v18 = *(float *)&dword_140404A6C[7 * v2 + 284024385];
  *(float *)&dword_140404A6C[7 * v2 + 284024384] = (float)(*(float *)&dword_140404A6C[284024599] * 0.003125)
                                                 + *(float *)&dword_140404A6C[7 * v2 + 284024384];
  if ( v17 )
    v19 = (float)(*(float *)&dword_140404A6C[284024600] * 0.003125) + v18;
  else
    v19 = v18 - (float)(*(float *)&dword_140404A6C[284024600] * 0.003125);
  *(float *)&dword_140404A6C[result + 284024385] = v19;
  if ( v19 >= -1.570796326795 )
  {
    if ( v19 > 1.570796326795 )
      dword_140404A6C[result + 284024385] = 1070141403;
  }
  else
  {
    dword_140404A6C[result + 284024385] = -1077342245;
  }
  v20 = 2.0;
  v21 = *(float *)&dword_140404A6C[result + 284024387] - (float)(int)dword_140404A6C[137297772];
  if ( v21 >= 2.0 )
  {
    v20 = *(float *)&dword_140404A6C[result + 284024387] - (float)(int)dword_140404A6C[137297772];
    if ( v21 > 32.0 )
      v20 = 32.0;
  }
  *(float *)&dword_140404A6C[result + 284024387] = v20;
  *(float *)&dword_140404A6C[result + 284024386] = (float)((float)(v20 - *(float *)&dword_140404A6C[result + 284024386])
                                                         * 0.0625)
                                                 + *(float *)&dword_140404A6C[result + 284024386];
  return result * 4;
}

