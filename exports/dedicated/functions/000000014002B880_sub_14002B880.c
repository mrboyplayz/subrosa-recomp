/* Address: 0x14002b880 | Name: sub_14002B880 | Size: 1949 bytes */
_BOOL8 __fastcall sub_14002B880(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float *a7,
        float *a8,
        float *a9)
{
  float v13; // xmm7_4
  float *v14; // r12
  float *v15; // r13
  int v16; // r15d
  float v17; // xmm3_4
  float v18; // xmm11_4
  float v19; // xmm12_4
  float v20; // xmm13_4
  float v21; // xmm8_4
  float v22; // xmm14_4
  float v23; // xmm10_4
  float v24; // xmm9_4
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm2_4
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm5_4
  float v31; // xmm7_4
  float v32; // xmm12_4
  float v33; // xmm15_4
  float v34; // xmm0_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  float v38; // xmm8_4
  float v39; // xmm10_4
  float v40; // xmm9_4
  float v41; // xmm2_4
  float v42; // xmm8_4
  float v43; // xmm7_4
  float v44; // xmm10_4
  float v45; // xmm9_4
  float v46; // xmm15_4
  float v47; // xmm13_4
  float v48; // xmm14_4
  float v49; // xmm12_4
  float v50; // xmm6_4
  float v51; // xmm2_4
  float v52; // xmm3_4
  float v53; // xmm3_4
  float v54; // xmm5_4
  float v55; // xmm7_4
  float v56; // xmm6_4
  float v57; // xmm0_4
  float v58; // xmm2_4
  float v59; // xmm1_4
  float v60; // xmm4_4
  float v61; // xmm3_4
  float v62; // xmm4_4
  float v63; // xmm0_4
  float v64; // xmm4_4
  float v65; // xmm5_4
  float v66; // xmm3_4
  float v67; // xmm9_4
  float v68; // xmm8_4
  float v69; // xmm13_4
  float v70; // xmm14_4
  float v71; // xmm10_4
  float v72; // xmm3_4
  float v73; // xmm4_4
  float v74; // xmm5_4
  float v75; // xmm6_4
  bool v76; // cf
  float v77; // xmm3_4
  float v78; // xmm4_4
  float v79; // xmm5_4
  float v80; // xmm6_4
  float v81; // xmm3_4
  float v82; // xmm4_4
  float v83; // xmm5_4
  float v84; // xmm6_4
  float v86; // [rsp+38h] [rbp-A1h] BYREF
  float v87; // [rsp+3Ch] [rbp-9Dh]
  __int128 v88; // [rsp+40h] [rbp-99h]

  *a3 = a6;
  v13 = a2[1];
  v14 = a7;
  v15 = a8;
  v16 = (int)a5;
  v17 = *a5;
  v18 = a5[2];
  v19 = a2[2];
  v20 = a5[1];
  v21 = (float)(v18 * v13) - (float)(v20 * v19);
  v22 = *a2;
  v23 = (float)(*a5 * v19) - (float)(*a2 * v18);
  v24 = (float)(*a2 * v20) - (float)(*a5 * v13);
  v25 = (float)((float)(v23 * v23) + (float)(v21 * v21)) + (float)(v24 * v24);
  if ( v25 < 0.000015258789 )
  {
    v43 = a6;
  }
  else
  {
    v26 = (float)((float)(a4[1] * v20) + (float)(*a4 * v17)) + (float)(a4[2] * v18);
    v27 = (float)((float)(v13 * a7[1]) + (float)(v22 * *a7)) + (float)(v19 * a7[2]);
    v28 = (float)(v26 * v22) - (float)(v27 * v17);
    v29 = (float)(v26 * v13) - (float)(v27 * v20);
    v30 = (float)(v26 * v19) - (float)(v27 * v18);
    v31 = (float)((float)(v23 * v30) - (float)(v24 * v29)) * (float)(1.0 / v25);
    v32 = (float)((float)(v24 * v28) - (float)(v21 * v30)) * (float)(1.0 / v25);
    v33 = *a4 - v31;
    v34 = fsqrt(v25);
    v35 = (float)((float)(v21 * v29) - (float)(v23 * v28)) * (float)(1.0 / v25);
    v36 = a4[2] - v35;
    v37 = a4[1] - v32;
    v86 = v33;
    *(float *)&v88 = v36;
    v87 = v37;
    if ( v34 == 0.0 )
    {
      v38 = 0.0;
      v39 = 0.0;
      v40 = 0.0;
    }
    else
    {
      v38 = v21 * (float)(1.0 / v34);
      v39 = v23 * (float)(1.0 / v34);
      v40 = v24 * (float)(1.0 / v34);
    }
    v41 = (float)((float)(v39 * v37) + (float)(v38 * v33)) + (float)(v40 * v36);
    v42 = (float)(v38 * v41) + v31;
    v43 = a6;
    v44 = (float)(v39 * v41) + v32;
    v45 = (float)(v40 * v41) + v35;
    *a1 = v42;
    a1[1] = v44;
    a1[2] = v45;
    v46 = fsqrt(
            (float)((float)((float)(*a4 - v42) * (float)(*a4 - v42))
                  + (float)((float)(a4[1] - v44) * (float)(a4[1] - v44)))
          + (float)((float)(a4[2] - v45) * (float)(a4[2] - v45)));
    *(float *)&a5 = v46;
    if ( v46 < v43 )
    {
      v47 = v14[1];
      v48 = v14[2];
      v49 = *v14;
      v50 = v15[1] - v47;
      v51 = v15[2] - v48;
      v86 = *v15 - *v14;
      v52 = (float)((float)((float)(v44 - v47) * v51) - (float)((float)(v45 - v48) * v50)) * *a2;
      v87 = v50;
      *(float *)&v88 = v51;
      if ( (float)((float)(v52
                         + (float)((float)((float)((float)(v45 - v48) * v86) - (float)((float)(v42 - v49) * v51)) * a2[1]))
                 + (float)((float)((float)((float)(v42 - v49) * v50) - (float)((float)(v44 - v47) * v86)) * a2[2])) < 0.0 )
      {
        v43 = a6;
      }
      else
      {
        v53 = v44 - v15[1];
        v54 = v42 - *v15;
        v55 = *a9 - *v15;
        v56 = a9[1] - v15[1];
        v57 = v45 - v15[2];
        v58 = a9[2] - v15[2];
        v59 = v57 * v55;
        v60 = v53 * v58;
        v61 = v53 * v55;
        v62 = v60 - (float)(v57 * v56);
        v86 = v55;
        v43 = a6;
        v63 = v54 * v58;
        v64 = v62 * *a2;
        v65 = (float)(v54 * v56) - v61;
        v66 = a2[2];
        v87 = v56;
        *(float *)&v88 = v58;
        if ( (float)((float)(v64 + (float)((float)(v59 - v63) * a2[1])) + (float)(v65 * v66)) >= 0.0 )
        {
          v67 = v45 - a9[2];
          v68 = v42 - *a9;
          v69 = v47 - a9[1];
          v70 = v48 - a9[2];
          v71 = v44 - a9[1];
          v86 = v49 - *a9;
          v87 = v69;
          *(float *)&v88 = v70;
          if ( (float)((float)((float)((float)((float)(v71 * v70) - (float)(v67 * v69)) * *a2)
                             + (float)((float)((float)(v67 * v86) - (float)(v68 * v70)) * a2[1]))
                     + (float)((float)((float)(v68 * v69) - (float)(v71 * v86)) * v66)) >= 0.0 )
            *a3 = v46;
        }
      }
    }
  }
  if ( (unsigned int)sub_140048220((unsigned int)&v86, v16, (unsigned int)&a5, (_DWORD)v14, (__int64)v15, (__int64)a4) )
  {
    v72 = v86;
    v73 = v87;
    v74 = *(float *)&v88;
    v75 = fsqrt(
            (float)((float)((float)(a4[1] - v87) * (float)(a4[1] - v87))
                  + (float)((float)(*a4 - v86) * (float)(*a4 - v86)))
          + (float)((float)(a4[2] - *(float *)&v88) * (float)(a4[2] - *(float *)&v88)));
    v76 = v75 < *a3;
    *(float *)&a5 = v75;
    if ( v76 )
    {
      *a1 = v86;
      a1[1] = v73;
      a1[2] = v74;
      *a2 = *a4 - v72;
      a2[1] = a4[1] - v73;
      a2[2] = a4[2] - v74;
      sub_140049260(a2, a2);
      *a3 = v75;
    }
  }
  if ( (unsigned int)sub_140048220((unsigned int)&v86, v16, (unsigned int)&a5, (_DWORD)v15, (__int64)a9, (__int64)a4) )
  {
    v77 = v86;
    v78 = v87;
    v79 = *(float *)&v88;
    v80 = fsqrt(
            (float)((float)((float)(a4[1] - v87) * (float)(a4[1] - v87))
                  + (float)((float)(*a4 - v86) * (float)(*a4 - v86)))
          + (float)((float)(a4[2] - *(float *)&v88) * (float)(a4[2] - *(float *)&v88)));
    v76 = v80 < *a3;
    *(float *)&a5 = v80;
    if ( v76 )
    {
      *a1 = v86;
      a1[1] = v78;
      a1[2] = v79;
      *a2 = *a4 - v77;
      a2[1] = a4[1] - v78;
      a2[2] = a4[2] - v79;
      sub_140049260(a2, a2);
      *a3 = v80;
    }
  }
  if ( (unsigned int)sub_140048220((unsigned int)&v86, v16, (unsigned int)&a5, (_DWORD)a9, (__int64)v14, (__int64)a4) )
  {
    v81 = v86;
    v82 = v87;
    v83 = *(float *)&v88;
    v84 = fsqrt(
            (float)((float)((float)(a4[1] - v87) * (float)(a4[1] - v87))
                  + (float)((float)(*a4 - v86) * (float)(*a4 - v86)))
          + (float)((float)(a4[2] - *(float *)&v88) * (float)(a4[2] - *(float *)&v88)));
    if ( v84 < *a3 )
    {
      *a1 = v86;
      a1[1] = v82;
      a1[2] = v83;
      *a2 = *a4 - v81;
      a2[1] = a4[1] - v82;
      a2[2] = a4[2] - v83;
      sub_140049260(a2, a2);
      *a3 = v84;
    }
  }
  return v43 > *a3;
}

