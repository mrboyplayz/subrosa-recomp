/* Address: 0x140056560 | Name: sub_140056560 | Size: 1041 bytes */
void __fastcall sub_140056560(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  float *v3; // rbp
  int v4; // r15d
  int v5; // esi
  __int64 v6; // rcx
  int v7; // edi
  int v8; // r14d
  float v9; // xmm2_4
  int v10; // ebx
  float v11; // xmm8_4
  float v12; // xmm8_4
  double v13; // xmm0_8
  float v14; // xmm10_4
  __int64 v15; // rdx
  __int64 v16; // rcx
  float v17; // xmm7_4
  float v18; // xmm6_4
  __int64 v19; // rdx
  __int64 v20; // rcx
  double v21; // xmm0_8
  float v22; // xmm2_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm2_4

  v2 = dword_140404A6C[284024893];
  v3 = (float *)&dword_140404A6C[188872560];
  v4 = 0;
  v5 = 768;
  dword_140404A6C[188872557] = -981467136;
  dword_140404A6C[188872559] = -981467136;
  do
  {
    v6 = (unsigned int)(v4 - 704);
    v7 = 0;
    v8 = 638;
    v9 = (float)(v4 - 704 + 64) * (float)(v4 - 704 + 64);
    do
    {
      v10 = v7 - 704;
      v11 = fminf(
              fmaxf((float)(fsqrt((float)((float)(v10 + 64) * (float)(v10 + 64)) + v9) * 0.00390625) - 0.75, 0.0),
              3.0);
      v12 = v11 * v11;
      v13 = sub_1401305F0(v6, a2, 0xFFFFFFFFLL);
      v14 = *(float *)&v13 + v12;
      v17 = COERCE_FLOAT(COERCE_UNSIGNED_INT64(sub_1401305F0(v16, v15, 0xFFFFFFFFLL)));
      v18 = fminf(
              fmaxf(
                (float)(fsqrt((float)((float)v10 * (float)v10) + (float)((float)(v4 - 704) * (float)(v4 - 704))) - 320.0)
              * 0.015625,
                0.0),
              1.0);
      v21 = sub_1401305F0(v20, v19, 0xFFFFFFFFLL);
      *v3 = (float)((float)((float)((float)(*(float *)&v21 * 8.0) + 23.75)
                          + (float)((float)(v14 * 16.0)
                                  + (float)((float)((float)(v17 * 32.0) + (float)(v12 * 8.0)) * v12)))
                  * v18)
          + (float)((float)(1.0 - v18) * 23.875);
      if ( v2 )
        goto LABEL_12;
      if ( v5 <= 130 )
      {
        if ( v5 <= 0 )
          goto LABEL_12;
      }
      else if ( (unsigned int)v7 <= 0x2FF )
      {
        v22 = fminf(
                fmaxf(
                  fmaxf(1.0 - fminf((float)(v5 - 130) * 0.25, 1.0), 1.0 - fminf((float)(v8 + 130) * 0.25, 1.0)),
                  0.0),
                1.0);
        *v3 = (float)((float)(36.0 - (float)(v22 * 24.0)) * (float)(v22 * v22)) + 11.75;
      }
      if ( (unsigned int)v7 <= 0x27D )
      {
        v23 = fminf((float)v5 * 0.25, 1.0);
        v24 = 1.0 - fminf((float)v8 * 0.25, 1.0);
        if ( v5 > 130 )
          v24 = 0.0;
        v25 = fminf(fmaxf(fmaxf(v24, 1.0 - v23), 0.0), 1.0);
        *v3 = (float)((float)(36.0 - (float)(v25 * 24.0)) * (float)(v25 * v25)) + 11.75;
      }
LABEL_12:
      ++v7;
      v9 = (float)(v4 - 704 + 64) * (float)(v4 - 704 + 64);
      --v8;
      ++v3;
    }
    while ( v7 < 2049 );
    ++v4;
    --v5;
  }
  while ( v5 > -1281 );
}

