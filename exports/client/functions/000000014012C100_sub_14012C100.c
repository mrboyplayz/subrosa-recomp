/* Address: 0x14012c100 | Name: sub_14012C100 | Size: 229 bytes */
void __fastcall sub_14012C100(float *a1, float *a2)
{
  double v4; // xmm0_8
  float v5; // xmm5_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm4_4
  float v13; // xmm1_4
  float v14; // xmm5_4

  v4 = MEMORY[0x1401F8AC0](a1);
  v5 = *(float *)&v4;
  v6 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&v4, (__m128)*(unsigned __int64 *)&v4, 1).m128_f32[0];
  v7 = 0.0;
  a1[3] = v6;
  v8 = *a2;
  v9 = fsqrt((float)((float)(v8 * v8) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]));
  if ( v9 == 0.0 )
  {
    v10 = 0.0;
    v11 = 0.0;
  }
  else
  {
    v10 = v8 * (float)(1.0 / v9);
    *a1 = v10;
    v11 = (float)(1.0 / v9) * a2[1];
    a1[1] = v11;
    v7 = (float)(1.0 / v9) * a2[2];
  }
  a1[2] = v7;
  v12 = v10 * v5;
  v13 = v11 * v5;
  v14 = v5 * a1[2];
  *a1 = v12;
  a1[1] = v13;
  a1[2] = v14;
}

