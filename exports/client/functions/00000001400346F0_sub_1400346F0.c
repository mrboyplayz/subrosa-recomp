/* Address: 0x1400346f0 | Name: sub_1400346F0 | Size: 1000 bytes */
__int64 __fastcall sub_1400346F0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // r15
  __int64 v12; // r13
  float *v14; // r14
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  float v22; // xmm5_4
  float v23; // xmm6_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm0_4
  float v31; // [rsp+40h] [rbp-78h] BYREF
  float v32; // [rsp+44h] [rbp-74h]
  float v33; // [rsp+48h] [rbp-70h]

  v10 = a9;
  v12 = a8;
  v14 = a7;
  sub_14006EC40(a2, a7, a8, a9);
  v17 = a2[1];
  v18 = a2[2];
  v19 = (float)((float)((float)(a4[1] - v14[1]) * v17) + (float)((float)(*a4 - *v14) * *a2))
      + (float)((float)(a4[2] - v14[2]) * v18);
  v20 = (float)((float)((float)(a5[1] - v14[1]) * v17) + (float)((float)(*a5 - *v14) * *a2))
      + (float)((float)(a5[2] - v14[2]) * v18);
  if ( v19 >= a6 && v20 >= a6 )
    return 0;
  if ( v19 >= 0.0 )
  {
    if ( v19 > 0.0 && v20 > 0.0 )
    {
      v22 = *a2 * (float)(a6 * -1.125);
      v23 = v17 * (float)(a6 * -1.125);
      v24 = v18 * (float)(a6 * -1.125);
      if ( v19 >= v20 )
      {
        v28 = v23 + a5[1];
        v29 = v24 + a5[2];
        v31 = v22 + *a5;
        v32 = v28;
        v33 = v29;
        if ( !(unsigned int)sub_140077FA0(
                              (_DWORD)a1,
                              (_DWORD)a2,
                              (unsigned int)&a6,
                              (_DWORD)a5,
                              (__int64)&v31,
                              (__int64)v14,
                              v12,
                              v10)
          && !(unsigned int)sub_140077FA0(
                              (_DWORD)a1,
                              (_DWORD)a2,
                              (unsigned int)&a6,
                              (_DWORD)a5,
                              (__int64)&v31,
                              (__int64)v14,
                              v10,
                              a10) )
        {
          return 0;
        }
        v30 = a1[2] - a5[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a5[1]) * (float)(a1[1] - a5[1]))
                      + (float)((float)(*a1 - *a5) * (float)(*a1 - *a5)))
              + (float)(v30 * v30));
      }
      else
      {
        v25 = v23 + a4[1];
        v26 = v24 + a4[2];
        v31 = v22 + *a4;
        v32 = v25;
        v33 = v26;
        if ( !(unsigned int)sub_140077FA0(
                              (_DWORD)a1,
                              (_DWORD)a2,
                              (unsigned int)&a6,
                              (_DWORD)a4,
                              (__int64)&v31,
                              (__int64)v14,
                              v12,
                              v10)
          && !(unsigned int)sub_140077FA0(
                              (_DWORD)a1,
                              (_DWORD)a2,
                              (unsigned int)&a6,
                              (_DWORD)a4,
                              (__int64)&v31,
                              (__int64)v14,
                              v10,
                              a10) )
        {
          return 0;
        }
        v27 = a1[2] - a4[2];
        *a3 = fsqrt(
                (float)((float)((float)(a1[1] - a4[1]) * (float)(a1[1] - a4[1]))
                      + (float)((float)(*a1 - *a4) * (float)(*a1 - *a4)))
              + (float)(v27 * v27));
      }
      return 1;
    }
  }
  else if ( v20 < 0.0 )
  {
    return 0;
  }
  if ( !(unsigned int)sub_140077FA0(
                        (_DWORD)a1,
                        (_DWORD)a2,
                        (unsigned int)&a6,
                        (_DWORD)a4,
                        (__int64)a5,
                        (__int64)v14,
                        v12,
                        v10)
    && !(unsigned int)sub_140077FA0(
                        (_DWORD)a1,
                        (_DWORD)a2,
                        (unsigned int)&a6,
                        (_DWORD)a4,
                        (__int64)a5,
                        (__int64)v14,
                        v10,
                        a10)
    && !(unsigned int)sub_140077FA0(
                        (_DWORD)a1,
                        (_DWORD)a2,
                        (unsigned int)&a6,
                        (_DWORD)a5,
                        (__int64)a4,
                        (__int64)v14,
                        v12,
                        v10)
    && !(unsigned int)sub_140077FA0(
                        (_DWORD)a1,
                        (_DWORD)a2,
                        (unsigned int)&a6,
                        (_DWORD)a5,
                        (__int64)a4,
                        (__int64)v14,
                        v10,
                        a10) )
  {
    return 0;
  }
  *a3 = 0.0;
  return 1;
}

