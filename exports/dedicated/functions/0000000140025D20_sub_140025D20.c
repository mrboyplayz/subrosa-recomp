/* Address: 0x140025d20 | Name: sub_140025D20 | Size: 1236 bytes */
__int64 __fastcall sub_140025D20(
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
  __int64 v9; // r13
  __int64 v11; // r12
  float *v13; // r15
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm5_4
  float v18; // xmm7_4
  float v19; // xmm10_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float v22; // xmm10_4
  float v23; // xmm8_4
  int v24; // xmm6_4
  float v25; // xmm2_4
  int v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  int v30; // xmm6_4
  float v31; // xmm2_4
  int v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  int v36; // eax
  float v37; // xmm0_4
  float v38; // xmm6_4
  float v39; // xmm2_4
  int v40; // xmm1_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float v45; // xmm5_4
  float v46; // xmm6_4
  float v47; // xmm7_4
  float v48; // xmm6_4
  float v49; // xmm7_4
  float v50; // xmm0_4
  float v51; // xmm6_4
  float v52; // xmm7_4
  float v53; // xmm0_4
  float v54; // [rsp+48h] [rbp-61h] BYREF
  float v55; // [rsp+4Ch] [rbp-5Dh]
  float v56; // [rsp+50h] [rbp-59h]
  float v57; // [rsp+58h] [rbp-51h] BYREF
  int v58; // [rsp+5Ch] [rbp-4Dh]
  int v59; // [rsp+60h] [rbp-49h]

  v9 = a9;
  v11 = a8;
  v13 = a7;
  sub_140047CD0(a2, a7, a8, a9);
  v15 = a4[2] - v13[2];
  v16 = a2[1];
  v17 = *a2;
  v18 = a2[2];
  v19 = *a4 - *v13;
  v20 = a5[1] - v13[1];
  v21 = a6;
  v55 = a4[1] - v13[1];
  v56 = v15;
  v54 = v19;
  v22 = (float)((float)(v19 * v17) + (float)(v55 * v16)) + (float)(v15 * v18);
  v23 = (float)((float)(v20 * v16) + (float)((float)(*a5 - *v13) * v17)) + (float)((float)(a5[2] - v13[2]) * v18);
  *((float *)&a7 + 1) = v23;
  if ( v22 >= a6 && v23 >= a6 )
    return 0;
  if ( v22 < 0.0 )
  {
    if ( v23 >= 0.0 )
      goto LABEL_5;
    return 0;
  }
  if ( v22 <= 0.0 || v23 <= 0.0 )
  {
LABEL_5:
    if ( (unsigned int)sub_140048690(
                         (_DWORD)a1,
                         (_DWORD)a2,
                         (unsigned int)&a6,
                         (_DWORD)a4,
                         (__int64)a5,
                         (__int64)v13,
                         v11,
                         v9)
      || (unsigned int)sub_140048690(
                         (_DWORD)a1,
                         (_DWORD)a2,
                         (unsigned int)&a6,
                         (_DWORD)a5,
                         (__int64)a4,
                         (__int64)v13,
                         v11,
                         v9) )
    {
      *a3 = 0.0;
      return 1;
    }
    goto LABEL_7;
  }
  v45 = v17 * (float)(a6 * -1.125);
  v46 = v16 * (float)(a6 * -1.125);
  v47 = v18 * (float)(a6 * -1.125);
  if ( v22 >= v23 )
  {
    v51 = v46 + a5[1];
    v52 = v47 + a5[2];
    v54 = v45 + *a5;
    v55 = v51;
    v56 = v52;
    if ( (unsigned int)sub_140048690(
                         (_DWORD)a1,
                         (_DWORD)a2,
                         (unsigned int)&a6,
                         (_DWORD)a5,
                         (__int64)&v54,
                         (__int64)v13,
                         v11,
                         v9) )
    {
      v53 = a1[2] - a5[2];
      *a3 = fsqrt(
              (float)((float)((float)(a1[1] - a5[1]) * (float)(a1[1] - a5[1]))
                    + (float)((float)(*a1 - *a5) * (float)(*a1 - *a5)))
            + (float)(v53 * v53));
      return 1;
    }
    goto LABEL_7;
  }
  v48 = v46 + a4[1];
  v49 = v47 + a4[2];
  v54 = v45 + *a4;
  v55 = v48;
  v56 = v49;
  if ( !(unsigned int)sub_140048690(
                        (_DWORD)a1,
                        (_DWORD)a2,
                        (unsigned int)&a6,
                        (_DWORD)a4,
                        (__int64)&v54,
                        (__int64)v13,
                        v11,
                        v9) )
  {
LABEL_7:
    LODWORD(a7) = 1199570944;
    if ( (unsigned int)sub_14007D360(
                         (unsigned int)&v57,
                         (unsigned int)&v54,
                         (unsigned int)&a7 + 4,
                         (_DWORD)v13,
                         v11,
                         (__int64)a4,
                         (__int64)a5,
                         LODWORD(v21)) )
    {
      v24 = HIDWORD(a7);
      if ( *(float *)&a7 > *((float *)&a7 + 1) )
      {
        v25 = v57;
        v26 = v59;
        *((_DWORD *)a1 + 1) = v58;
        v27 = v54;
        *((_DWORD *)a1 + 2) = v26;
        v28 = v55;
        *a1 = v25;
        *a2 = v27 - v25;
        v29 = v56;
        a2[1] = v28 - a1[1];
        a2[2] = v29 - a1[2];
        sub_140049260(a2, a2);
        LODWORD(a7) = v24;
      }
    }
    if ( (unsigned int)sub_14007D360(
                         (unsigned int)&v57,
                         (unsigned int)&v54,
                         (unsigned int)&a7 + 4,
                         v11,
                         v9,
                         (__int64)a4,
                         (__int64)a5,
                         LODWORD(v21)) )
    {
      v30 = HIDWORD(a7);
      if ( *((float *)&a7 + 1) < *(float *)&a7 )
      {
        v31 = v57;
        v32 = v59;
        *((_DWORD *)a1 + 1) = v58;
        v33 = v54;
        *((_DWORD *)a1 + 2) = v32;
        v34 = v55;
        *a1 = v31;
        *a2 = v33 - v31;
        v35 = v56;
        a2[1] = v34 - a1[1];
        a2[2] = v35 - a1[2];
        sub_140049260(a2, a2);
        LODWORD(a7) = v30;
      }
    }
    v36 = sub_14007D360(
            (unsigned int)&v57,
            (unsigned int)&v54,
            (unsigned int)&a7 + 4,
            v9,
            (__int64)v13,
            (__int64)a4,
            (__int64)a5,
            LODWORD(v21));
    v37 = *(float *)&a7;
    if ( v36 )
    {
      v38 = *((float *)&a7 + 1);
      if ( *((float *)&a7 + 1) < *(float *)&a7 )
      {
        v39 = v57;
        v40 = v59;
        *((_DWORD *)a1 + 1) = v58;
        v41 = v54;
        *((_DWORD *)a1 + 2) = v40;
        v42 = v55;
        *a1 = v39;
        *a2 = v41 - v39;
        v43 = v56;
        a2[1] = v42 - a1[1];
        a2[2] = v43 - a1[2];
        sub_140049260(a2, a2);
        v37 = v38;
      }
    }
    if ( v37 >= 65536.0 )
      return 0;
    goto LABEL_23;
  }
  v50 = a1[2] - a4[2];
  v37 = fsqrt(
          (float)((float)((float)(a1[1] - a4[1]) * (float)(a1[1] - a4[1]))
                + (float)((float)(*a1 - *a4) * (float)(*a1 - *a4)))
        + (float)(v50 * v50));
LABEL_23:
  *a3 = v37;
  return 1;
}

