/* Address: 0x140035b70 | Name: sub_140035B70 | Size: 735 bytes */
__int64 __fastcall sub_140035B70(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // r15
  __int64 v11; // r12
  float *v13; // r14
  float v16; // xmm6_4
  float v17; // xmm7_4
  float v18; // xmm9_4
  float v19; // xmm8_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm6_4
  float v25; // xmm7_4
  float v26; // xmm0_4
  float v27; // xmm6_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  float v30; // [rsp+40h] [rbp-78h] BYREF
  float v31; // [rsp+44h] [rbp-74h]
  float v32; // [rsp+48h] [rbp-70h]

  v9 = a9;
  v11 = a8;
  v13 = a7;
  sub_14006EC40(a2, a7, a8, a9);
  v16 = a2[1];
  v17 = a2[2];
  v18 = (float)((float)((float)(a4[1] - v13[1]) * v16) + (float)((float)(*a4 - *v13) * *a2))
      + (float)((float)(a4[2] - v13[2]) * v17);
  v19 = (float)((float)((float)(a5[1] - v13[1]) * v16) + (float)((float)(*a5 - *v13) * *a2))
      + (float)((float)(a5[2] - v13[2]) * v17);
  if ( v18 >= a6 && v19 >= a6 )
    return 0;
  if ( v18 >= 0.0 )
  {
    if ( v18 <= 0.0 || v19 <= 0.0 )
      goto LABEL_5;
    v21 = *a2 * (float)(a6 * -1.125);
    v22 = v16 * (float)(a6 * -1.125);
    v23 = v17 * (float)(a6 * -1.125);
    if ( v18 >= v19 )
    {
      v27 = v22 + a5[1];
      v28 = v23 + a5[2];
      v30 = v21 + *a5;
      v31 = v27;
      v32 = v28;
      if ( (unsigned int)sub_140077FA0(
                           (_DWORD)a1,
                           (_DWORD)a2,
                           (unsigned int)&a6,
                           (_DWORD)a5,
                           (__int64)&v30,
                           (__int64)v13,
                           v11,
                           v9) )
      {
        v29 = a1[2] - a5[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a5[1]) * (float)(a1[1] - a5[1]))
                      + (float)((float)(*a1 - *a5) * (float)(*a1 - *a5)))
              + (float)(v29 * v29));
        return 1;
      }
    }
    else
    {
      v24 = v22 + a4[1];
      v25 = v23 + a4[2];
      v30 = v21 + *a4;
      v31 = v24;
      v32 = v25;
      if ( (unsigned int)sub_140077FA0(
                           (_DWORD)a1,
                           (_DWORD)a2,
                           (unsigned int)&a6,
                           (_DWORD)a4,
                           (__int64)&v30,
                           (__int64)v13,
                           v11,
                           v9) )
      {
        v26 = a1[2] - a4[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a4[1]) * (float)(a1[1] - a4[1]))
                      + (float)((float)(*a1 - *a4) * (float)(*a1 - *a4)))
              + (float)(v26 * v26));
        return 1;
      }
    }
    return 0;
  }
  if ( v19 < 0.0 )
    return 0;
LABEL_5:
  if ( !(unsigned int)sub_140077FA0(
                        (_DWORD)a1,
                        (_DWORD)a2,
                        (unsigned int)&a6,
                        (_DWORD)a4,
                        (__int64)a5,
                        (__int64)v13,
                        v11,
                        v9)
    && !(unsigned int)sub_140077FA0(
                        (_DWORD)a1,
                        (_DWORD)a2,
                        (unsigned int)&a6,
                        (_DWORD)a5,
                        (__int64)a4,
                        (__int64)v13,
                        v11,
                        v9) )
  {
    return 0;
  }
  *a3 = 0.0;
  return 1;
}

