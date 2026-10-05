/* Address: 0x140158760 | Name: sub_140158760 | Size: 839 bytes */
_BOOL8 __fastcall sub_140158760(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7, float *a8)
{
  float *v8; // r15
  float v11; // xmm3_4
  float v13; // xmm4_4
  float v14; // xmm5_4
  float v15; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm2_4
  float *v21; // r12
  float *v22; // r13
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm6_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm1_4
  float v41; // xmm0_4
  float v43; // [rsp+48h] [rbp-59h] BYREF
  float v44; // [rsp+4Ch] [rbp-55h]
  float v45; // [rsp+50h] [rbp-51h]
  float v46; // [rsp+58h] [rbp-49h] BYREF
  float v47; // [rsp+5Ch] [rbp-45h]
  float v48; // [rsp+60h] [rbp-41h]
  float v49[20]; // [rsp+68h] [rbp-39h] BYREF

  v8 = a6;
  *a3 = 65536.0;
  v11 = *a4;
  v13 = a4[1];
  v14 = a4[2];
  v15 = *a2;
  v17 = a5;
  v18 = a2[1];
  v19 = a2[2];
  v20 = (float)((float)((float)(v13 - v8[1]) * v18) + (float)((float)(*a4 - *v8) * *a2))
      + (float)((float)(v14 - v8[2]) * v19);
  if ( v20 > a5 || v20 < 0.0 )
    return 0;
  v21 = a7;
  v22 = a8;
  v46 = *a2;
  v47 = v18;
  v48 = v19;
  v49[0] = (float)(v15 * (float)-a5) + v11;
  v49[1] = (float)(v18 * (float)-a5) + v13;
  v49[2] = (float)(v19 * (float)-a5) + v14;
  if ( sub_140077FA0(&v43, &v46, &a5, a4, v49, v8, a7, a8) )
  {
    v23 = v43;
    v24 = v44;
    v25 = v45;
    a1[1] = v44;
    *a1 = v23;
    a1[2] = v25;
    *a2 = v15;
    a2[1] = v18;
    a2[2] = v19;
    v26 = fsqrt(
            (float)((float)((float)(v24 - a4[1]) * (float)(v24 - a4[1]))
                  + (float)((float)(v23 - *a4) * (float)(v23 - *a4)))
          + (float)((float)(v25 - a4[2]) * (float)(v25 - a4[2])));
    *a3 = v26;
  }
  else
  {
    v26 = *a3;
  }
  if ( v26 == 65536.0 )
  {
    if ( (unsigned int)sub_140154200(&v43, &v46, &a5, a4, v17, v8, v21) )
    {
      v27 = a5;
      if ( v26 > a5 )
      {
        v28 = v44;
        *a1 = v43;
        v29 = v45;
        a1[1] = v28;
        v30 = v46;
        a1[2] = v29;
        v31 = v47;
        *a2 = v30;
        a2[2] = v48;
        a2[1] = v31;
        *a3 = v27;
      }
    }
    if ( (unsigned int)sub_140154200(&v43, &v46, &a5, a4, v17, v21, v22) )
    {
      v32 = a5;
      if ( a5 < *a3 )
      {
        v33 = v44;
        *a1 = v43;
        v34 = v45;
        a1[1] = v33;
        v35 = v46;
        a1[2] = v34;
        v36 = v47;
        *a2 = v35;
        a2[2] = v48;
        a2[1] = v36;
        *a3 = v32;
      }
    }
    if ( (unsigned int)sub_140154200(&v43, &v46, &a5, a4, v17, v22, v8) )
    {
      v37 = a5;
      if ( a5 < *a3 )
      {
        v38 = v44;
        *a1 = v43;
        v39 = v45;
        a1[1] = v38;
        v40 = v46;
        a1[2] = v39;
        v41 = v47;
        *a2 = v40;
        a2[2] = v48;
        a2[1] = v41;
        *a3 = v37;
      }
    }
  }
  return *a3 < 65536.0;
}

