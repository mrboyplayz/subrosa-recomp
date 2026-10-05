/* Address: 0x1400b40b0 | Name: sub_1400B40B0 | Size: 3301 bytes */
__int64 __fastcall sub_1400B40B0(signed int a1)
{
  float v1; // xmm3_4
  __int64 v3; // rbx
  int v4; // eax
  float v5; // xmm13_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm7_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm7_4
  unsigned int v15; // xmm3_4
  unsigned int v16; // xmm4_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm3_4
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  unsigned int v25; // eax
  float v26; // xmm10_4
  float v27; // xmm0_4
  float v28; // xmm10_4
  float v29; // xmm2_4
  float v30; // xmm4_4
  float v31; // xmm0_4
  float v32; // xmm8_4
  float v33; // xmm5_4
  float v34; // xmm0_4
  float v35; // xmm3_4
  float v36; // xmm4_4
  float v37; // xmm2_4
  float v38; // xmm5_4
  float v39; // xmm8_4
  float v40; // xmm9_4
  float v41; // xmm5_4
  float v42; // xmm2_4
  float v43; // xmm8_4
  float v44; // xmm9_4
  float v45; // xmm5_4
  float v46; // xmm0_4
  int v47; // eax
  float v48; // xmm12_4
  float v49; // xmm3_4
  float v50; // xmm10_4
  float v51; // xmm1_4
  float v52; // xmm2_4
  float v53; // xmm3_4
  float v54; // xmm4_4
  float v55; // xmm4_4
  double v56; // xmm1_8
  double v57; // xmm1_8
  float v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm0_4
  float v61; // xmm3_4
  float v62; // xmm1_4
  unsigned int v63; // xmm3_4
  float v64; // xmm4_4
  float v65; // xmm2_4
  float v66; // xmm3_4
  float v67; // xmm8_4
  float v68; // xmm9_4
  float v69; // xmm2_4
  float v70; // xmm5_4
  float v71; // xmm1_4
  float v72; // xmm8_4
  float v73; // xmm5_4
  signed int v74; // eax
  __int64 v75; // rdi
  float v76; // xmm4_4
  __int64 v77; // rcx
  float v78; // xmm5_4
  float v79; // xmm9_4
  float v80; // xmm8_4
  float v81; // xmm9_4
  float v82; // xmm2_4
  float v83; // xmm3_4
  float v84; // xmm1_4
  float v85; // xmm2_4
  float v86; // xmm4_4
  float v87; // xmm8_4
  float v88; // xmm6_4
  float v89; // xmm3_4
  float v90; // xmm6_4
  float v91; // xmm1_4
  float v92; // xmm2_4
  __int64 v94; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v95; // [rsp+28h] [rbp-E0h]
  __int128 v96; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v97; // [rsp+40h] [rbp-C8h]
  float v98; // [rsp+50h] [rbp-B8h]
  __int128 v99; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v100; // [rsp+68h] [rbp-A0h]
  __int64 v101; // [rsp+78h] [rbp-90h]
  __int64 v102; // [rsp+80h] [rbp-88h]

  v1 = 1.0;
  v3 = 7166LL * a1;
  if ( (dword_140404A6C[v3 + 280651436] & 8) != 0 )
    v1 = 0.625;
  v4 = dword_140404A6C[v3 + 280657908];
  if ( v4 || !dword_140404A6C[v3 + 280651324] )
  {
    v5 = 0.03125;
    v6 = 0.03125;
    if ( v4 > 0 )
      v6 = 0.125;
  }
  else
  {
    v5 = 0.03125;
    v6 = 0.03125;
    dword_140404A6C[v3 + 280657909] = 0;
  }
  v7 = *(float *)&dword_140404A6C[v3 + 280651373];
  if ( v7 >= (float)(v1 - v6) )
  {
    if ( v7 <= (float)(v6 + v1) )
      v8 = v1;
    else
      v8 = v7 - v6;
  }
  else
  {
    v8 = v7 + v6;
  }
  *(float *)&dword_140404A6C[v3 + 280651373] = v8;
  v99 = xmmword_140278D30;
  LODWORD(v101) = 1065353216;
  v100 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v99, (float *)&v99 + 3);
  sub_1400AC890(a1);
  v9 = *(float *)&dword_140404A6C[v3 + 280657993] - *(float *)&dword_140404A6C[v3 + 280657934];
  v10 = *(float *)&dword_140404A6C[v3 + 280657994] - *(float *)&dword_140404A6C[v3 + 280657935];
  v11 = *(float *)&dword_140404A6C[v3 + 280657933];
  v12 = *(float *)&dword_140404A6C[v3 + 280657992] - v11;
  v13 = fsqrt((float)((float)(v12 * v12) + (float)(v9 * v9)) + (float)(v10 * v10));
  if ( v13 > 0.033333335 )
  {
    *(float *)&dword_140404A6C[v3 + 280657992] = (float)((float)(v12 * (float)(1.0 / v13)) * 0.033333335) + v11;
    *(float *)&dword_140404A6C[v3 + 280657993] = (float)((float)((float)(1.0 / v13) * v9) * 0.033333335)
                                               + *(float *)&dword_140404A6C[v3 + 280657934];
    *(float *)&dword_140404A6C[v3 + 280657994] = (float)((float)((float)(1.0 / v13) * v10) * 0.033333335)
                                               + *(float *)&dword_140404A6C[v3 + 280657935];
  }
  dword_140404A6C[v3 + 280657993] = 0;
  v14 = 0.0;
  *(float *)&v15 = *(float *)&dword_140404A6C[v3 + 280657980] + *(float *)&dword_140404A6C[v3 + 280657986];
  dword_140404A6C[v3 + 280657980] = v15;
  *(float *)&dword_140404A6C[v3 + 280657981] = *(float *)&dword_140404A6C[v3 + 280657981]
                                             + *(float *)&dword_140404A6C[v3 + 280657987];
  *(float *)&v16 = *(float *)&dword_140404A6C[v3 + 280657982] + *(float *)&dword_140404A6C[v3 + 280657988];
  dword_140404A6C[v3 + 280657982] = v16;
  v17 = *(float *)&dword_140404A6C[v3 + 280657914];
  v18 = *(float *)&dword_140404A6C[v3 + 280657916];
  v19 = *(float *)&v15 - v17;
  v20 = *(float *)&v16 - v18;
  v21 = fsqrt((float)(v20 * v20) + (float)(v19 * v19));
  v22 = (float)(fsqrt(
                  (float)((float)(*(float *)&dword_140404A6C[v3 + 280657992] * *(float *)&dword_140404A6C[v3 + 280657992])
                        + (float)(*(float *)&dword_140404A6C[v3 + 280657993] * *(float *)&dword_140404A6C[v3 + 280657993]))
                + (float)(*(float *)&dword_140404A6C[v3 + 280657994] * *(float *)&dword_140404A6C[v3 + 280657994]))
              * 1.875)
      + 0.0625;
  if ( v21 > v22 )
  {
    if ( v21 == 0.0 )
    {
      v23 = 0.0;
      v24 = 0.0;
    }
    else
    {
      v23 = v19 * (float)(1.0 / v21);
      v24 = v20 * (float)(1.0 / v21);
    }
    *(float *)&dword_140404A6C[v3 + 280657980] = (float)(v23 * v22) + v17;
    *(float *)&dword_140404A6C[v3 + 280657982] = (float)(v24 * v22) + v18;
  }
  v25 = dword_140404A6C[v3 + 280651327];
  v26 = 0.050000001;
  if ( v25 )
  {
    if ( v25 == 2 )
      v26 = 0.025;
  }
  else
  {
    v26 = 0.083333336;
  }
  if ( dword_140404A6C[v3 + 280657908] )
    v27 = 1.0;
  else
    v27 = *(float *)&dword_140404A6C[v3 + 280651373];
  v98 = 1.0;
  v28 = (float)(v26 * v27) * *(float *)&dword_140404A6C[v3 + 280658001];
  v96 = xmmword_140278D30;
  v97 = xmmword_140278D30;
  sub_14007B2A0((__int64)&v96, (float *)&v96 + 3);
  v29 = -*(float *)&dword_140404A6C[v3 + 280651380];
  v30 = (float)(*((float *)&v97 + 2) * v29) + (float)(*(float *)&dword_140404A6C[v3 + 280651378] * *(float *)&v96);
  v31 = *(float *)&dword_140404A6C[v3 + 280651378];
  v32 = (float)(v98 * v29) + (float)(v31 * *((float *)&v96 + 2));
  v33 = (float)(*((float *)&v97 + 3) * v29) + (float)(v31 * *((float *)&v96 + 1));
  v34 = fsqrt((float)((float)(v33 * v33) + (float)(v30 * v30)) + (float)(v32 * v32));
  if ( v34 == 0.0 )
  {
    v35 = 0.0;
    v36 = 0.0;
    v37 = 0.0;
  }
  else
  {
    v35 = (float)(1.0 / v34) * v30;
    v36 = (float)(1.0 / v34) * v33;
    v37 = (float)(1.0 / v34) * v32;
  }
  v38 = (float)((float)((float)(*(float *)&v96 * v35) + (float)(*((float *)&v96 + 1) * v36))
              + (float)(*((float *)&v96 + 2) * v37))
      * -0.25;
  v39 = (float)(v38 * *(float *)&v96) + v35;
  v40 = (float)(v38 * *((float *)&v96 + 1)) + v36;
  v41 = (float)(v38 * *((float *)&v96 + 2)) + v37;
  if ( *(float *)&dword_140404A6C[v3 + 280651380] < 0.0 )
  {
    v42 = (float)((float)((float)(v40 * *((float *)&v97 + 3)) + (float)(v39 * *((float *)&v97 + 2))) + (float)(v41 * v98))
        * -0.5;
    v41 = (float)(v42 * v98) + v41;
    v39 = (float)(v42 * *((float *)&v97 + 2)) + v39;
    v40 = (float)(v42 * *((float *)&v97 + 3)) + v40;
  }
  v43 = v39 * v28;
  v44 = v40 * v28;
  v45 = v41 * v28;
  v46 = fsqrt((float)((float)(v44 * v44) + (float)(v43 * v43)) + (float)(v45 * v45));
  if ( v46 > 0.050000001 )
  {
    if ( (dword_140404A6C[283831474] & 0xF) == 0 )
    {
      v47 = dword_140404A6C[v3 + 280651310];
      if ( v47 > 0 )
        dword_140404A6C[v3 + 280651310] = v47 - 1;
    }
    if ( (int)dword_140404A6C[v3 + 280651310] < 8 )
    {
      v43 = (float)((float)(1.0 / v46) * v43) * 0.050000001;
      v44 = (float)((float)(1.0 / v46) * v44) * 0.050000001;
      v45 = (float)((float)(1.0 / v46) * v45) * 0.050000001;
    }
  }
  if ( *(float *)&dword_140404A6C[v3 + 280657921] < 0.5 )
  {
    v43 = 0.0;
    v44 = 0.0;
    v45 = 0.0;
  }
  v48 = 0.0078125;
  v49 = *(float *)&v99 * *(float *)&dword_140404A6C[v3 + 280657933];
  v95 = dword_140404A6C[v3 + 280651370];
  v50 = (float)((float)((float)((float)((float)(v43 * *(float *)&v99) + (float)(v44 * *((float *)&v99 + 1)))
                              + (float)(v45 * *((float *)&v99 + 2)))
                      - (float)((float)((float)(*((float *)&v99 + 1) * *(float *)&dword_140404A6C[v3 + 280657934]) + v49)
                              + (float)(*((float *)&v99 + 2) * *(float *)&dword_140404A6C[v3 + 280657935])))
              - *(float *)&v95)
      * 0.0625;
  if ( v50 < -0.0078125 )
  {
    v50 = -0.0078125;
  }
  else if ( v50 > 0.0078125 )
  {
    v50 = 0.0078125;
  }
  v51 = *(float *)&v101;
  v52 = *((float *)&v100 + 2);
  v53 = *((float *)&v100 + 3);
  v54 = v43 * *((float *)&v100 + 2);
  *(float *)&dword_140404A6C[v3 + 280651370] = *(float *)&v95 + v50;
  v55 = (float)((float)(v54 + (float)(v44 * v53)) + (float)(v51 * v45))
      - (float)((float)((float)(v53 * *(float *)&dword_140404A6C[v3 + 280657934])
                      + (float)(v52 * *(float *)&dword_140404A6C[v3 + 280657933]))
              + (float)(v51 * *(float *)&dword_140404A6C[v3 + 280657935]));
  v56 = fabs(v55);
  if ( v55 <= 0.0 )
    v57 = -v56;
  else
    v57 = v56 * -0.125;
  v58 = *(float *)&dword_140404A6C[v3 + 280651372];
  v59 = v57;
  v60 = (float)(v59 - v58) * 0.0625;
  if ( v60 < -0.0078125 )
  {
    v48 = -0.0078125;
  }
  else if ( v60 <= 0.0078125 )
  {
    v48 = v60;
  }
  *(float *)&dword_140404A6C[v3 + 280651372] = v58 + v48;
  v61 = *(float *)&dword_140404A6C[v3 + 280658003];
  v62 = (float)(1.0
              - fminf(
                  fsqrt(
                    (float)((float)(*(float *)&dword_140404A6C[v3 + 280657992]
                                  * *(float *)&dword_140404A6C[v3 + 280657992])
                          + (float)(*(float *)&dword_140404A6C[v3 + 280657993]
                                  * *(float *)&dword_140404A6C[v3 + 280657993]))
                  + (float)(*(float *)&dword_140404A6C[v3 + 280657994] * *(float *)&dword_140404A6C[v3 + 280657994]))
                * 120.0,
                  1.0))
      - v61;
  if ( v62 < -0.03125 )
  {
    v5 = -0.03125;
  }
  else if ( v62 <= 0.03125 )
  {
    v5 = v62;
  }
  *(float *)&v63 = v61 + v5;
  v64 = 0.0044444446;
  dword_140404A6C[v3 + 280658003] = v63;
  v65 = 0.96875 - (float)(*(float *)&v63 * 0.5);
  v66 = v65 * *(float *)&dword_140404A6C[v3 + 280657992];
  *(float *)&dword_140404A6C[v3 + 280657992] = v66;
  v67 = v43 - v66;
  v68 = v65 * *(float *)&dword_140404A6C[v3 + 280657993];
  *(float *)&dword_140404A6C[v3 + 280657993] = v68;
  v69 = v65 * *(float *)&dword_140404A6C[v3 + 280657994];
  *(float *)&dword_140404A6C[v3 + 280657994] = v69;
  v70 = v45 - v69;
  if ( dword_140404A6C[v3 + 280651325] == 5 )
    v64 = 0.0;
  v71 = fsqrt((float)(v70 * v70) + (float)(v67 * v67));
  if ( v71 > v64 )
  {
    if ( v71 == 0.0 )
    {
      v72 = 0.0;
      v73 = 0.0;
    }
    else
    {
      v72 = v67 * (float)(1.0 / v71);
      v73 = v70 * (float)(1.0 / v71);
    }
    v67 = v72 * v64;
    v70 = v73 * v64;
  }
  *(float *)&dword_140404A6C[v3 + 280657993] = v68;
  v74 = -1;
  *(float *)&dword_140404A6C[v3 + 280657992] = v66 + v67;
  *(float *)&dword_140404A6C[v3 + 280657994] = v70 + v69;
  if ( (int)dword_140404A6C[v3 + 280658139] > 0 )
    v74 = dword_140404A6C[v3 + 280658140];
  if ( (int)dword_140404A6C[v3 + 280658149] > 0 )
    v74 = dword_140404A6C[v3 + 280658150];
  if ( v74 != -1 )
  {
    v75 = 1760LL * v74;
    if ( dword_140404A6C[v75 + 278845898] == 28 )
    {
      dword_140404A6C[v3 + 280651370] = 0;
      dword_140404A6C[v3 + 280651372] = 0;
      v96 = xmmword_140278D30;
      v98 = 1.0;
      v97 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v96, (float *)&dword_1402F6188);
      v76 = (float)(*(float *)&v96 * 0.875) + *(float *)&dword_140404A6C[v75 + 278846085];
      v77 = 1268LL * (int)dword_140404A6C[v75 + 278845898];
      v78 = (float)(*((float *)&v96 + 2) * 0.875) + *(float *)&dword_140404A6C[v75 + 278846087];
      v79 = *(float *)&dword_140404A6C[v77 + 278521317];
      v80 = (float)((float)((float)(v79 * *(float *)&dword_140404A6C[v75 + 278845936])
                          + *(float *)&dword_140404A6C[v75 + 278845918])
                  + (float)(*(float *)&dword_140404A6C[v77 + 278521318] * *(float *)&dword_140404A6C[v75 + 278845939]))
          + (float)(*(float *)&dword_140404A6C[v77 + 278521319] * *(float *)&dword_140404A6C[v75 + 278845942]);
      v81 = (float)((float)((float)(v79 * *(float *)&dword_140404A6C[v75 + 278845934])
                          + *(float *)&dword_140404A6C[v75 + 278845916])
                  + (float)(*(float *)&dword_140404A6C[v77 + 278521318] * *(float *)&dword_140404A6C[v75 + 278845937]))
          + (float)(*(float *)&dword_140404A6C[v77 + 278521319] * *(float *)&dword_140404A6C[v75 + 278845940]);
      v82 = v78 - v80;
      v83 = v76 - v81;
      v84 = fsqrt((float)(v82 * v82) + (float)(v83 * v83));
      if ( v84 > 0.5 )
      {
        v76 = (float)((float)(v83 * (float)(1.0 / v84)) * 0.5) + v81;
        v78 = (float)((float)(v82 * (float)(1.0 / v84)) * 0.5) + v80;
      }
      v85 = *(float *)&dword_140404A6C[v3 + 280657980] - v76;
      v86 = *(float *)&dword_140404A6C[v3 + 280657982] - v78;
      v87 = fsqrt((float)(v86 * v86) + (float)(v85 * v85));
      if ( v87 >= 0.5 )
      {
        if ( v87 <= 0.75 )
        {
          v89 = 0.0;
          v90 = 0.0;
        }
        else
        {
          v90 = (float)((float)(1.0 / v87) * v86) * (float)(0.6875 - v87);
          v89 = (float)((float)(1.0 / v87) * v85) * (float)(0.6875 - v87);
        }
      }
      else
      {
        v98 = 1.0;
        v96 = xmmword_140278D30;
        v97 = xmmword_140278D30;
        sub_14007B2A0((__int64)&v96, (float *)&dword_1402F6188);
        v88 = (float)(0.5 - v87) + 0.0625;
        v89 = v88 * *((float *)&v97 + 2);
        v14 = v88 * *((float *)&v97 + 3);
        v90 = v88 * v98;
      }
      v91 = *(float *)&dword_140404A6C[v3 + 280657934] * 0.5;
      v92 = *(float *)&dword_140404A6C[v3 + 280657935] * 0.5;
      *(float *)&dword_140404A6C[v3 + 280657992] = (float)((float)(v89 * 0.0625)
                                                         - (float)(*(float *)&dword_140404A6C[v3 + 280657933] * 0.5))
                                                 + *(float *)&dword_140404A6C[v3 + 280657992];
      *(float *)&dword_140404A6C[v3 + 280657993] = (float)((float)(v14 * 0.0625) - v91)
                                                 + *(float *)&dword_140404A6C[v3 + 280657993];
      *(float *)&dword_140404A6C[v3 + 280657994] = (float)((float)(v90 * 0.0625) - v92)
                                                 + *(float *)&dword_140404A6C[v3 + 280657994];
    }
  }
  dword_140404A6C[v3 + 280657993] = 0;
  *(float *)&dword_140404A6C[v3 + 280657980] = *(float *)&dword_140404A6C[v3 + 280657992]
                                             + *(float *)&dword_140404A6C[v3 + 280657980];
  *(float *)&dword_140404A6C[v3 + 280657981] = *(float *)&dword_140404A6C[v3 + 280657981]
                                             + *(float *)&dword_140404A6C[v3 + 280657993];
  *(float *)&dword_140404A6C[v3 + 280657982] = *(float *)&dword_140404A6C[v3 + 280657982]
                                             + *(float *)&dword_140404A6C[v3 + 280657994];
  sub_1400B2440(a1);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v94 ^ v102);
}

