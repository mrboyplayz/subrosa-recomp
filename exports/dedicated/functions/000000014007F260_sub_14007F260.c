/* Address: 0x14007f260 | Name: sub_14007F260 | Size: 385 bytes */
_BOOL8 __fastcall sub_14007F260(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7, float a8)
{
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm6_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v21; // [rsp+44h] [rbp-44h] BYREF
  float v22[4]; // [rsp+48h] [rbp-40h] BYREF
  float v23[6]; // [rsp+58h] [rbp-30h] BYREF

  if ( sub_14007D360(v22, v23, &v21, a4, a5, a6, a7, a8) )
  {
    v12 = v22[0];
    v13 = v22[2];
    a1[1] = v22[1];
    v14 = v23[0];
    a1[2] = v13;
    v15 = v23[1];
    *a1 = v12;
    *a2 = v14 - v12;
    v16 = v23[2];
    a2[1] = v15 - a1[1];
    a2[2] = v16 - a1[2];
    sub_140049260((__int64)a2, a2);
    v17 = a5[1] - a4[1];
    v18 = a5[2] - a4[2];
    v19 = v21;
    *a3 = (float)((float)((float)((float)(*a1 - *a4) * (float)(*a5 - *a4)) + (float)((float)(a1[1] - a4[1]) * v17))
                + (float)((float)(a1[2] - a4[2]) * v18))
        / (float)((float)((float)(v17 * v17) + (float)((float)(*a5 - *a4) * (float)(*a5 - *a4))) + (float)(v18 * v18));
  }
  else
  {
    v19 = 65536.0;
  }
  return v19 < 65536.0;
}

