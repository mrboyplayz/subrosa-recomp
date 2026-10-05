/* Address: 0x1400bb6b0 | Name: sub_1400BB6B0 | Size: 2175 bytes */
__int64 __fastcall sub_1400BB6B0(int a1, int a2, __int64 a3, float *a4, int a5, float *a6)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm6_4
  float v15; // xmm8_4
  float v16; // xmm7_4
  float v17; // xmm6_4
  unsigned int v18; // xmm8_4
  float v19; // xmm7_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  float v25; // xmm5_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  float v31; // xmm7_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm7_4
  float v35; // xmm11_4
  float v36; // xmm12_4
  float v37; // xmm6_4
  float v38; // xmm5_4
  float v39; // xmm0_4
  float v40; // xmm11_4
  float v41; // xmm12_4
  float v42; // xmm8_4
  unsigned int v43; // xmm6_4
  float v44; // xmm0_4
  __int64 v45; // rcx
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm11_4
  double v50; // xmm0_8
  float v51; // xmm13_4
  float v52; // xmm12_4
  float v53; // xmm1_4
  bool v54; // zf
  float v55; // xmm13_4
  float v56; // xmm3_4
  float v57; // xmm6_4
  float v58; // xmm14_4
  float v59; // xmm1_4
  float v60; // xmm9_4
  float v61; // xmm10_4
  float v62; // xmm10_4
  __int64 v64; // [rsp+8h] [rbp-D9h] BYREF
  float v65; // [rsp+28h] [rbp-B9h]
  float v66; // [rsp+30h] [rbp-B1h] BYREF
  float v67; // [rsp+34h] [rbp-ADh]
  float v68; // [rsp+38h] [rbp-A9h]
  float v69; // [rsp+40h] [rbp-A1h] BYREF
  float v70; // [rsp+44h] [rbp-9Dh]
  __int64 v71; // [rsp+48h] [rbp-99h]
  __int128 v72; // [rsp+50h] [rbp-91h]

  v9 = 7166LL * a1;
  v10 = v9 * 4 + 220LL * a2;
  if ( *(float *)((char *)&dword_140404A6C[280658028] + v10) == 0.0 )
  {
    v11 = *a6 * 0.0234375;
    v12 = a6[1] * 0.0234375;
    v13 = a6[2] * 0.0234375;
    v14 = (float)(*(float *)&dword_140404A6C[v9 + 280657933] * 15.0) + *(float *)&dword_140404A6C[v9 + 280657914];
    v15 = (float)(*(float *)&dword_140404A6C[v9 + 280657934] * 15.0) + *(float *)&dword_140404A6C[v9 + 280657915];
    v16 = (float)(*(float *)&dword_140404A6C[v9 + 280657935] * 15.0) + *(float *)&dword_140404A6C[v9 + 280657916];
    if ( a2 )
    {
      v17 = v14 + v11;
      v19 = v16 + v13;
      *(float *)&v18 = v12 + v15;
    }
    else
    {
      v17 = v14 - v11;
      *(float *)&v18 = v15 - v12;
      v19 = v16 - v13;
    }
    v69 = (float)(*(float *)&dword_1402F6188 * 0.25) + v17;
    v70 = (float)(*(float *)&dword_1402F618C * 0.25) + *(float *)&v18;
    *(float *)&v71 = (float)(*(float *)&dword_1402F6190 * 0.25) + v19;
    v66 = v17 - (float)(*(float *)&dword_1402F6188 * 1.75);
    v67 = *(float *)&v18 - (float)(*(float *)&dword_1402F618C * 1.75);
    v68 = v19 - (float)(*(float *)&dword_1402F6190 * 1.75);
    if ( (unsigned int)sub_1400B91E0(a1, (__int64)&v69, (__int64)&v66) )
      v18 = dword_140404A6C[73006982];
    *(float *)((char *)&dword_140404A6C[280658058] + v10) = v17;
    *(unsigned int *)((char *)&dword_140404A6C[280658059] + v10) = v18;
    *(float *)((char *)&dword_140404A6C[280658060] + v10) = v19;
  }
  v20 = *(float *)&dword_140404A6C[v9 + 280657914];
  v21 = *(float *)&dword_140404A6C[v9 + 280657916];
  v22 = *a6 * 0.0234375;
  v23 = a6[2] * 0.0234375;
  if ( a2 )
  {
    v24 = v20 + v22;
    v25 = v21 + v23;
  }
  else
  {
    v24 = v20 - v22;
    v25 = v21 - v23;
  }
  v26 = *(float *)&dword_140404A6C[v9 + 280657992];
  v27 = *(float *)&dword_140404A6C[v9 + 280657994];
  v28 = v24 - (float)(a6[6] * 0.03125);
  v29 = v25 - (float)(a6[8] * 0.03125);
  v30 = v26 * 7.5;
  v31 = v27 * 7.5;
  v32 = fsqrt((float)((float)(v27 * v27) + (float)(v26 * v26)) * 56.25);
  if ( v32 > 0.1875 )
  {
    v33 = 1.0 / v32;
    v31 = (float)(v33 * v31) * 0.1875;
    v30 = (float)(v33 * v30) * 0.1875;
  }
  v34 = v31 + v29;
  v35 = *(float *)&dword_140404A6C[v9 + 280657933] - v26;
  v36 = *(float *)&dword_140404A6C[v9 + 280657935] - v27;
  v37 = v30 + v28;
  v38 = fsqrt((float)(v36 * v36) + (float)(v35 * v35));
  if ( v38 > 0.015625 )
  {
    v36 = (float)((float)(1.0 / v38) * v36) * 0.015625;
    v35 = (float)((float)(1.0 / v38) * v35) * 0.015625;
  }
  v39 = (float)(1.0 - *(float *)((char *)&dword_140404A6C[280658028] + v10)) * 11.25;
  v40 = (float)(v35 * 7.5) + v37;
  v41 = (float)(v36 * 7.5) + v34;
  v42 = (float)(*(float *)&dword_140404A6C[v9 + 280657993] * v39) + a4[1];
  v69 = (float)(v26 * v39) + v40;
  v70 = v42;
  *(float *)&v71 = (float)(v27 * v39) + v41;
  v66 = v69 - (float)(*(float *)&dword_1402F6188 * 1.75);
  v67 = v42 - (float)(*(float *)&dword_1402F618C * 1.75);
  v68 = *(float *)&v71 - (float)(*(float *)&dword_1402F6190 * 1.75);
  if ( (unsigned int)sub_1400B91E0(a1, (__int64)&v69, (__int64)&v66) )
    v43 = dword_140404A6C[73006982];
  else
    v43 = dword_140404A6C[234 * a2 + 280652377 + v9];
  v44 = *(float *)&dword_140404A6C[v9 + 280651441];
  v45 = v9 * 4 + 936LL * (a2 + 4);
  v46 = *(float *)((char *)&dword_140404A6C[280651441] + v45);
  v47 = *(float *)((char *)&dword_140404A6C[280651440] + v45);
  v48 = *(float *)((char *)&dword_140404A6C[280651442] + v45);
  v69 = v47;
  *(float *)&v71 = v48;
  if ( v46 > v44 )
    v46 = v44;
  v70 = v46 + 0.25;
  v66 = v47 - (float)(*(float *)&dword_1402F6188 * 0.5);
  v67 = (float)(v46 + 0.25) - (float)(*(float *)&dword_1402F618C * 0.5);
  v68 = v48 - (float)(*(float *)&dword_1402F6190 * 0.5);
  if ( (unsigned int)sub_1400B91E0(a1, (__int64)&v69, (__int64)&v66)
    && *(float *)&v43 < *(float *)&dword_140404A6C[73006982] )
  {
    v43 = dword_140404A6C[73006982];
  }
  v49 = v40 - *a4;
  v50 = sin(*(float *)((char *)&dword_140404A6C[280658055] + v10));
  v51 = *(float *)((char *)&dword_140404A6C[280658028] + v10) + 0.050000001;
  v52 = v41 - a4[2];
  v53 = (float)(*(float *)&v43 - v50 * 0.25) - a4[1];
  *(float *)((char *)&dword_140404A6C[280658028] + v10) = v51;
  v54 = dword_140404A6C[v9 + 280651325] == 5;
  v65 = v53;
  if ( !v54 )
  {
    v51 = v51 + 0.033333335;
    *(float *)((char *)&dword_140404A6C[280658028] + v10) = v51;
  }
  v55 = fminf(v51, 1.0);
  v56 = a6[7];
  v57 = fminf(
          fmaxf(
            (float)(fsqrt(
                      (float)((float)(*(float *)&dword_140404A6C[v9 + 280657992]
                                    * *(float *)&dword_140404A6C[v9 + 280657992])
                            + (float)(*(float *)&dword_140404A6C[v9 + 280657993]
                                    * *(float *)&dword_140404A6C[v9 + 280657993]))
                    + (float)(*(float *)&dword_140404A6C[v9 + 280657994] * *(float *)&dword_140404A6C[v9 + 280657994]))
                  * 7.5)
          - 0.125,
            0.0),
          1.0);
  v58 = 1.0 - v55;
  v59 = (float)(1.0 - v55) * *(float *)((char *)&dword_140404A6C[280658030] + v10);
  v60 = (float)(v57 * 0.125) * a6[8];
  v61 = (float)((float)((float)((float)((float)((float)((float)(v57 * 0.125) * a6[6])
                                              + *(float *)((char *)&dword_140404A6C[280658029] + v10))
                                      * 3.0)
                              * (float)(v58 * v58))
                      + (float)((float)((float)((float)(v49 * 3.0) * v58) + (float)(v49 * v55)) * v55))
              * v55)
      + (float)((float)(*(float *)((char *)&dword_140404A6C[280658029] + v10) * v58) * (float)(v58 * v58));
  *(float *)((char *)&dword_140404A6C[280658032] + v10) = v61;
  *(float *)((char *)&dword_140404A6C[280658033] + v10) = (float)((float)((float)((float)((float)((float)((float)(v57 * 0.375) + *(float *)((char *)&dword_140404A6C[280658030] + v10))
                                                                                                + (float)((float)(v57 * 0.125) * v56))
                                                                                        * 3.0)
                                                                                * (float)((float)(1.0 - v55)
                                                                                        * (float)(1.0 - v55)))
                                                                        + (float)((float)((float)((float)((float)((float)(v57 * 0.5) + v65) * 3.0)
                                                                                                * (float)(1.0 - v55))
                                                                                        + (float)(v65 * v55))
                                                                                * v55))
                                                                * v55)
                                                        + (float)(v59 * (float)((float)(1.0 - v55) * (float)(1.0 - v55)));
  *(float *)((char *)&dword_140404A6C[280658034] + v10) = (float)((float)((float)((float)((float)((float)(v52 * 3.0)
                                                                                                * v58)
                                                                                        + (float)(v52 * v55))
                                                                                * v55)
                                                                        + (float)((float)((float)(v60
                                                                                                + *(float *)((char *)&dword_140404A6C[280658031] + v10))
                                                                                        * 3.0)
                                                                                * (float)(v58 * v58)))
                                                                * v55)
                                                        + (float)((float)((float)(1.0 - v55)
                                                                        * *(float *)((char *)&dword_140404A6C[280658031]
                                                                                   + v10))
                                                                * (float)(v58 * v58));
  v62 = v61 + *a4;
  *(float *)((char *)&dword_140404A6C[280658032] + v10) = v62;
  *(float *)((char *)&dword_140404A6C[280658033] + v10) = *(float *)((char *)&dword_140404A6C[280658033] + v10) + a4[1];
  *(float *)((char *)&dword_140404A6C[280658034] + v10) = *(float *)((char *)&dword_140404A6C[280658034] + v10) + a4[2];
  *(float *)((char *)&dword_140404A6C[280658032] + v10) = v62 + *(float *)&dword_140404A6C[v9 + 280657995];
  *(float *)((char *)&dword_140404A6C[280658033] + v10) = *(float *)&dword_140404A6C[v9 + 280657996]
                                                        + *(float *)((char *)&dword_140404A6C[280658033] + v10);
  *(float *)((char *)&dword_140404A6C[280658034] + v10) = *(float *)&dword_140404A6C[v9 + 280657997]
                                                        + *(float *)((char *)&dword_140404A6C[280658034] + v10);
  *(unsigned int *)((char *)&dword_140404A6C[280658053] + v10) = 0;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v64 ^ v72);
}

