/* Address: 0x1400a6f90 | Name: sub_1400A6F90 | Size: 900 bytes */
__int64 __fastcall sub_1400A6F90(__m128 *a1, float *a2, float *a3)
{
  __int64 result; // rax
  float *v4; // rdi
  float *v5; // r9
  float v8; // xmm8_4
  float v9; // xmm4_4
  float v10; // xmm0_4
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm9_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm15_4
  __int64 v21; // rdx
  __int64 v22; // r10
  float *v23; // r8
  float *v24; // rcx
  float v25; // xmm12_4
  float v26; // xmm13_4
  float v27; // xmm1_4
  float v28; // xmm11_4
  float v29; // xmm7_4
  float v30; // xmm8_4
  float v31; // xmm4_4
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm0_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm3_4
  float v38; // xmm7_4
  float v39; // xmm8_4
  float v40; // xmm9_4
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  float v42; // [rsp+B0h] [rbp+8h]
  float v43; // [rsp+C0h] [rbp+18h]

  result = (__int64)&retaddr;
  v4 = a3 + 1;
  v5 = a3 + 2;
  a1->m128_u64[0] = 0;
  a1->m128_u64[1] = 0;
  v8 = a3[6] - *a3;
  v9 = a3[7] - a3[1];
  v10 = a3[8] - a3[2];
  v11 = a3[3] - *a3;
  v12 = a3[4] - a3[1];
  v13 = a3[5] - a3[2];
  v14 = (float)(v9 * v13) - (float)(v10 * v12);
  v15 = (float)(v10 * v11) - (float)(v8 * v13);
  v16 = (float)(v8 * v12) - (float)(v9 * v11);
  v17 = fsqrt((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16));
  if ( v17 == 0.0 )
  {
    v18 = 0.0;
    v19 = 0.0;
    v20 = 0.0;
  }
  else
  {
    v18 = (float)(1.0 / v17) * v14;
    v19 = (float)(1.0 / v17) * v15;
    v20 = (float)(1.0 / v17) * v16;
  }
  v21 = 0;
  v43 = v19;
  v42 = v18;
  do
  {
    v22 = 0;
    v23 = v4;
    do
    {
      if ( v22 != v21 )
      {
        result = v22 + 1;
        if ( v22 + 1 < 4 )
        {
          v24 = v23 + 4;
          do
          {
            if ( result != v21 )
            {
              v25 = *v23;
              v26 = v23[1];
              v27 = *(v24 - 1) - *v23;
              v28 = *(v23 - 1);
              v29 = *v24 - v26;
              v30 = *(v24 - 2) - v28;
              v31 = (float)(v27 * v20) - (float)(v29 * v19);
              v32 = (float)(v29 * v18) - (float)(v30 * v20);
              v33 = (float)(v30 * v19) - (float)(v27 * v18);
              v34 = fsqrt((float)((float)(v32 * v32) + (float)(v31 * v31)) + (float)(v33 * v33));
              if ( v34 == 0.0 )
              {
                v35 = 0.0;
                v36 = 0.0;
                v37 = 0.0;
              }
              else
              {
                v35 = (float)(1.0 / v34) * v31;
                v36 = (float)(1.0 / v34) * v32;
                v37 = (float)(1.0 / v34) * v33;
              }
              v38 = *(v5 - 2) - v28;
              v39 = *(v5 - 1) - v25;
              v40 = *v5 - v26;
              if ( (float)((float)((float)(v36 * v39) + (float)(v35 * v38)) + (float)(v37 * v40)) < 0.0 )
              {
                v35 = -v35;
                v36 = -v36;
                v37 = -v37;
              }
              a1->m128_f32[v21] = (float)((float)((float)((float)((float)(a2[1] - v25) * v36)
                                                        + (float)((float)(*a2 - v28) * v35))
                                                + (float)((float)(a2[2] - v26) * v37))
                                        / (float)((float)((float)(v36 * v39) + (float)(v35 * v38)) + (float)(v37 * v40)))
                                + a1->m128_f32[v21];
            }
            v18 = v42;
            ++result;
            v19 = v43;
            v24 += 3;
          }
          while ( result < 4 );
        }
      }
      v18 = v42;
      ++v22;
      v19 = v43;
      v23 += 3;
    }
    while ( v22 < 4 );
    ++v21;
    v5 += 3;
  }
  while ( v21 < 4 );
  *a1 = _mm_mul_ps((__m128)xmmword_1400F7C50, *a1);
  return result;
}

