/* Address: 0x140049c20 | Name: sub_140049C20 | Size: 552 bytes */
void __fastcall sub_140049C20(__int64 a1, float *a2, __int64 a3)
{
  __m128 v5; // xmm0
  float v6; // xmm12_4
  float v7; // xmm13_4
  float *v8; // rdi
  float v9; // xmm14_4
  __int64 v10; // rcx
  float v11; // xmm11_4
  float v12; // xmm6_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm5_4
  float v16; // xmm6_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm7_4
  float v20; // xmm2_4
  float v21; // xmm6_4
  float v22; // xmm2_4
  float v23; // xmm6_4

  v5 = 0;
  *(double *)v5.m128_u64 = _libm_sse2_sincosf_(a1, a2, a3);
  v6 = a2[2];
  v7 = a2[1];
  v8 = (float *)(a1 + 4);
  v9 = *a2;
  v10 = 3;
  v11 = _mm_shuffle_ps(v5, v5, 1).m128_f32[0];
  do
  {
    v12 = v8[1];
    v13 = *(v8 - 1);
    v14 = v12 * v6;
    v15 = (float)(v6 * *v8) - (float)(v12 * v7);
    v16 = (float)(v12 * v9) - (float)(v13 * v6);
    v17 = (float)(v13 * v7) - (float)(v9 * *v8);
    v18 = (float)((float)(v13 * v9) + (float)(v7 * *v8)) + v14;
    v19 = (float)((float)((float)((float)(v17 * v7) - (float)(v16 * v6)) * v11) + (float)(v9 * v18))
        + (float)(v5.m128_f32[0] * v15);
    v20 = (float)((float)((float)((float)((float)((float)(v6 * *v8) - (float)(v8[1] * v7)) * v6) - (float)(v17 * v9))
                        * v11)
                + (float)(v7 * v18))
        + (float)(v5.m128_f32[0] * v16);
    *v8 = v20;
    v21 = (float)((float)((float)((float)(v16 * v9) - (float)(v15 * v7)) * v11) + (float)(v6 * v18))
        + (float)(v5.m128_f32[0] * v17);
    v22 = fsqrt((float)((float)(v19 * v19) + (float)(v20 * v20)) + (float)(v21 * v21));
    if ( v22 == 0.0 )
    {
      *(_QWORD *)(v8 - 1) = 0;
      v23 = 0.0;
    }
    else
    {
      v23 = v21 * (float)(1.0 / v22);
      *(v8 - 1) = v19 * (float)(1.0 / v22);
      *v8 = (float)(1.0 / v22) * *v8;
    }
    v8[1] = v23;
    v8 += 3;
    --v10;
  }
  while ( v10 );
}

