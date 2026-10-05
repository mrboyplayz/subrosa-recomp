/* Address: 0x14007b2a0 | Name: sub_14007B2A0 | Size: 552 bytes */
void __fastcall sub_14007B2A0(__int64 a1, float *a2)
{
  __m128 v4; // xmm0
  float v5; // xmm12_4
  float v6; // xmm13_4
  float *v7; // rdi
  float v8; // xmm14_4
  __int64 v9; // rcx
  float v10; // xmm11_4
  float v11; // xmm6_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm7_4
  float v19; // xmm2_4
  float v20; // xmm6_4
  float v21; // xmm2_4
  float v22; // xmm6_4

  v4 = 0;
  *(double *)v4.m128_u64 = MEMORY[0x1401F8AC0]();
  v5 = a2[2];
  v6 = a2[1];
  v7 = (float *)(a1 + 4);
  v8 = *a2;
  v9 = 3;
  v10 = _mm_shuffle_ps(v4, v4, 1).m128_f32[0];
  do
  {
    v11 = v7[1];
    v12 = *(v7 - 1);
    v13 = v11 * v5;
    v14 = (float)(v5 * *v7) - (float)(v11 * v6);
    v15 = (float)(v11 * v8) - (float)(v12 * v5);
    v16 = (float)(v12 * v6) - (float)(v8 * *v7);
    v17 = (float)((float)(v12 * v8) + (float)(v6 * *v7)) + v13;
    v18 = (float)((float)((float)((float)(v16 * v6) - (float)(v15 * v5)) * v10) + (float)(v8 * v17))
        + (float)(v4.m128_f32[0] * v14);
    v19 = (float)((float)((float)((float)((float)((float)(v5 * *v7) - (float)(v7[1] * v6)) * v5) - (float)(v16 * v8))
                        * v10)
                + (float)(v6 * v17))
        + (float)(v4.m128_f32[0] * v15);
    *v7 = v19;
    v20 = (float)((float)((float)((float)(v15 * v8) - (float)(v14 * v6)) * v10) + (float)(v5 * v17))
        + (float)(v4.m128_f32[0] * v16);
    v21 = fsqrt((float)((float)(v18 * v18) + (float)(v19 * v19)) + (float)(v20 * v20));
    if ( v21 == 0.0 )
    {
      *(_QWORD *)(v7 - 1) = 0;
      v22 = 0.0;
    }
    else
    {
      v22 = v20 * (float)(1.0 / v21);
      *(v7 - 1) = v18 * (float)(1.0 / v21);
      *v7 = (float)(1.0 / v21) * *v7;
    }
    v7[1] = v22;
    v7 += 3;
    --v9;
  }
  while ( v9 );
}

