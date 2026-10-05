/* Address: 0x14005d760 | Name: sub_14005D760 | Size: 3301 bytes */
void __fastcall sub_14005D760(signed int a1, __int64 a2, __int64 a3)
{
  float v3; // xmm3_4
  unsigned __int64 v5; // rbx
  int v6; // eax
  float v7; // xmm13_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r8
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm0_4
  float v19; // xmm7_4
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm8_4
  float v23; // xmm9_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float v26; // xmm2_4
  float v27; // xmm5_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  int v30; // eax
  float v31; // xmm10_4
  float v32; // xmm0_4
  float v33; // xmm10_4
  __int64 v34; // rdx
  __int64 v35; // r8
  float v36; // xmm2_4
  float v37; // xmm4_4
  float v38; // xmm0_4
  float v39; // xmm8_4
  float v40; // xmm5_4
  float v41; // xmm0_4
  float v42; // xmm3_4
  float v43; // xmm4_4
  float v44; // xmm2_4
  float v45; // xmm5_4
  float v46; // xmm8_4
  float v47; // xmm9_4
  float v48; // xmm5_4
  float v49; // xmm2_4
  float v50; // xmm8_4
  float v51; // xmm9_4
  float v52; // xmm5_4
  float v53; // xmm0_4
  int v54; // eax
  float v55; // xmm12_4
  float v56; // xmm0_4
  float v57; // xmm10_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  float v60; // xmm3_4
  float v61; // xmm4_4
  float v62; // xmm4_4
  double v63; // xmm1_8
  double v64; // xmm1_8
  float v65; // xmm2_4
  float v66; // xmm0_4
  float v67; // xmm0_4
  float v68; // xmm3_4
  float v69; // xmm1_4
  float v70; // xmm3_4
  float v71; // xmm4_4
  float v72; // xmm2_4
  float v73; // xmm3_4
  float v74; // xmm8_4
  float v75; // xmm9_4
  float v76; // xmm2_4
  float v77; // xmm5_4
  float v78; // xmm1_4
  float v79; // xmm8_4
  float v80; // xmm5_4
  int v81; // eax
  __int64 v82; // rdi
  float v83; // xmm4_4
  __int64 v84; // rcx
  float v85; // xmm5_4
  float v86; // xmm9_4
  float v87; // xmm8_4
  float v88; // xmm9_4
  float v89; // xmm2_4
  float v90; // xmm3_4
  float v91; // xmm1_4
  float v92; // xmm2_4
  float v93; // xmm4_4
  float v94; // xmm8_4
  float v95; // xmm6_4
  float v96; // xmm3_4
  float v97; // xmm6_4
  float v98; // xmm1_4
  float v99; // xmm2_4
  __int128 v100; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v101; // [rsp+40h] [rbp-C8h]
  float v102; // [rsp+50h] [rbp-B8h]
  __int128 v103; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v104; // [rsp+68h] [rbp-A0h]
  __int64 v105; // [rsp+78h] [rbp-90h]

  v3 = 1.0;
  v5 = 28664LL * a1;
  if ( (byte_190941BDC[v5] & 8) != 0 )
    v3 = 0.625;
  v6 = dword_1909480FC[v5 / 4];
  if ( v6 || !*(_DWORD *)&algn_190941A08[v5 + 20] )
  {
    v7 = 0.03125;
    v8 = 0.03125;
    if ( v6 > 0 )
      v8 = 0.125;
  }
  else
  {
    v7 = 0.03125;
    v8 = 0.03125;
    *(_DWORD *)((char *)&unk_190948100 + v5) = 0;
  }
  v9 = *(float *)&algn_190941AC4[v5 + 28];
  if ( v9 >= (float)(v3 - v8) )
  {
    if ( v9 <= (float)(v8 + v3) )
      v10 = v3;
    else
      v10 = v9 - v8;
  }
  else
  {
    v10 = v9 + v8;
  }
  *(float *)&algn_190941AC4[v5 + 28] = v10;
  v103 = xmmword_1400F78B0;
  LODWORD(v105) = 1065353216;
  v104 = xmmword_1400F78B0;
  sub_140049C20((__int64)&v103, (float *)&v103 + 3, a3);
  sub_140055F40(a1, v11, v12);
  v14 = *(float *)((char *)&unk_190948250 + v5) - *(float *)((char *)&unk_190948164 + v5);
  v15 = *(float *)((char *)&unk_190948254 + v5) - *(float *)((char *)&unk_190948168 + v5);
  v16 = *(float *)((char *)&unk_190948160 + v5);
  v17 = *(float *)((char *)&unk_19094824C + v5) - v16;
  v18 = fsqrt((float)((float)(v17 * v17) + (float)(v14 * v14)) + (float)(v15 * v15));
  if ( v18 > 0.033333335 )
  {
    *(float *)((char *)&unk_19094824C + v5) = (float)((float)(v17 * (float)(1.0 / v18)) * 0.033333335) + v16;
    *(float *)((char *)&unk_190948250 + v5) = (float)((float)((float)(1.0 / v18) * v14) * 0.033333335)
                                            + *(float *)((char *)&unk_190948164 + v5);
    *(float *)((char *)&unk_190948254 + v5) = (float)((float)((float)(1.0 / v18) * v15) * 0.033333335)
                                            + *(float *)((char *)&unk_190948168 + v5);
  }
  *(_DWORD *)((char *)&unk_190948250 + v5) = 0;
  v19 = 0.0;
  v20 = *(float *)((char *)&unk_19094821C + v5) + *(float *)((char *)&unk_190948234 + v5);
  *(float *)((char *)&unk_19094821C + v5) = v20;
  *(float *)((char *)&unk_190948220 + v5) = *(float *)((char *)&unk_190948220 + v5)
                                          + *(float *)((char *)&unk_190948238 + v5);
  v21 = *(float *)((char *)&unk_190948224 + v5) + *(float *)((char *)&unk_19094823C + v5);
  *(float *)((char *)&unk_190948224 + v5) = v21;
  v22 = *(float *)((char *)&unk_190948114 + v5);
  v23 = *(float *)((char *)&unk_19094811C + v5);
  v24 = v20 - v22;
  v25 = v21 - v23;
  v26 = fsqrt((float)(v25 * v25) + (float)(v24 * v24));
  v27 = (float)(fsqrt(
                  (float)((float)(*(float *)((char *)&unk_19094824C + v5) * *(float *)((char *)&unk_19094824C + v5))
                        + (float)(*(float *)((char *)&unk_190948250 + v5) * *(float *)((char *)&unk_190948250 + v5)))
                + (float)(*(float *)((char *)&unk_190948254 + v5) * *(float *)((char *)&unk_190948254 + v5)))
              * 1.875)
      + 0.0625;
  if ( v26 > v27 )
  {
    if ( v26 == 0.0 )
    {
      v28 = 0.0;
      v29 = 0.0;
    }
    else
    {
      v28 = v24 * (float)(1.0 / v26);
      v29 = v25 * (float)(1.0 / v26);
    }
    *(float *)((char *)&unk_19094821C + v5) = (float)(v28 * v27) + v22;
    *(float *)((char *)&unk_190948224 + v5) = (float)(v29 * v27) + v23;
  }
  v30 = *(_DWORD *)&algn_190941A08[v5 + 32];
  v31 = 0.050000001;
  if ( v30 )
  {
    if ( v30 == 2 )
      v31 = 0.025;
  }
  else
  {
    v31 = 0.083333336;
  }
  if ( dword_1909480FC[v5 / 4] )
    v32 = 1.0;
  else
    v32 = *(float *)&algn_190941AC4[v5 + 28];
  v102 = 1.0;
  v33 = (float)(v31 * v32) * *(float *)((char *)&unk_190948270 + v5);
  v100 = xmmword_1400F78B0;
  v101 = xmmword_1400F78B0;
  sub_140049C20((__int64)&v100, (float *)&v100 + 3, v13);
  v36 = -*(float *)&algn_190941AC4[v5 + 56];
  v37 = (float)(*((float *)&v101 + 2) * v36) + (float)(*(float *)&algn_190941AC4[v5 + 48] * *(float *)&v100);
  v38 = *(float *)&algn_190941AC4[v5 + 48];
  v39 = (float)(v102 * v36) + (float)(v38 * *((float *)&v100 + 2));
  v40 = (float)(*((float *)&v101 + 3) * v36) + (float)(v38 * *((float *)&v100 + 1));
  v41 = fsqrt((float)((float)(v40 * v40) + (float)(v37 * v37)) + (float)(v39 * v39));
  if ( v41 == 0.0 )
  {
    v42 = 0.0;
    v43 = 0.0;
    v44 = 0.0;
  }
  else
  {
    v42 = (float)(1.0 / v41) * v37;
    v43 = (float)(1.0 / v41) * v40;
    v44 = (float)(1.0 / v41) * v39;
  }
  v45 = (float)((float)((float)(*(float *)&v100 * v42) + (float)(*((float *)&v100 + 1) * v43))
              + (float)(*((float *)&v100 + 2) * v44))
      * -0.25;
  v46 = (float)(v45 * *(float *)&v100) + v42;
  v47 = (float)(v45 * *((float *)&v100 + 1)) + v43;
  v48 = (float)(v45 * *((float *)&v100 + 2)) + v44;
  if ( *(float *)&algn_190941AC4[v5 + 56] < 0.0 )
  {
    v49 = (float)((float)((float)(v47 * *((float *)&v101 + 3)) + (float)(v46 * *((float *)&v101 + 2)))
                + (float)(v48 * v102))
        * -0.5;
    v48 = (float)(v49 * v102) + v48;
    v46 = (float)(v49 * *((float *)&v101 + 2)) + v46;
    v47 = (float)(v49 * *((float *)&v101 + 3)) + v47;
  }
  v50 = v46 * v33;
  v51 = v47 * v33;
  v52 = v48 * v33;
  v53 = fsqrt((float)((float)(v51 * v51) + (float)(v50 * v50)) + (float)(v52 * v52));
  if ( v53 > 0.050000001 )
  {
    if ( (dword_191541414 & 0xF) == 0 )
    {
      v54 = *(_DWORD *)((char *)&unk_1909419E4 + v5);
      if ( v54 > 0 )
        *(_DWORD *)((char *)&unk_1909419E4 + v5) = v54 - 1;
    }
    if ( *(int *)((char *)&unk_1909419E4 + v5) < 8 )
    {
      v50 = (float)((float)(1.0 / v53) * v50) * 0.050000001;
      v51 = (float)((float)(1.0 / v53) * v51) * 0.050000001;
      v52 = (float)((float)(1.0 / v53) * v52) * 0.050000001;
    }
  }
  if ( *(float *)((char *)&unk_190948130 + v5) < 0.5 )
  {
    v50 = 0.0;
    v51 = 0.0;
    v52 = 0.0;
  }
  v55 = 0.0078125;
  v56 = *(float *)&algn_190941AC4[v5 + 16];
  v57 = (float)((float)((float)((float)((float)(v50 * *(float *)&v103) + (float)(v51 * *((float *)&v103 + 1)))
                              + (float)(v52 * *((float *)&v103 + 2)))
                      - (float)((float)((float)(*((float *)&v103 + 1) * *(float *)((char *)&unk_190948164 + v5))
                                      + (float)(*(float *)&v103 * *(float *)((char *)&unk_190948160 + v5)))
                              + (float)(*((float *)&v103 + 2) * *(float *)((char *)&unk_190948168 + v5))))
              - v56)
      * 0.0625;
  if ( v57 < -0.0078125 )
  {
    v57 = -0.0078125;
  }
  else if ( v57 > 0.0078125 )
  {
    v57 = 0.0078125;
  }
  v58 = *(float *)&v105;
  v59 = *((float *)&v104 + 2);
  v60 = *((float *)&v104 + 3);
  v61 = v50 * *((float *)&v104 + 2);
  *(float *)&algn_190941AC4[v5 + 16] = v56 + v57;
  v62 = (float)((float)(v61 + (float)(v51 * v60)) + (float)(v58 * v52))
      - (float)((float)((float)(v60 * *(float *)((char *)&unk_190948164 + v5))
                      + (float)(v59 * *(float *)((char *)&unk_190948160 + v5)))
              + (float)(v58 * *(float *)((char *)&unk_190948168 + v5)));
  v63 = fabs(v62);
  if ( v62 <= 0.0 )
    v64 = -v63;
  else
    v64 = v63 * -0.125;
  v65 = *(float *)&algn_190941AC4[v5 + 24];
  v66 = v64;
  v67 = (float)(v66 - v65) * 0.0625;
  if ( v67 < -0.0078125 )
  {
    v55 = -0.0078125;
  }
  else if ( v67 <= 0.0078125 )
  {
    v55 = v67;
  }
  *(float *)&algn_190941AC4[v5 + 24] = v65 + v55;
  v68 = *(float *)((char *)&unk_190948278 + v5);
  v69 = (float)(1.0
              - fminf(
                  fsqrt(
                    (float)((float)(*(float *)((char *)&unk_19094824C + v5) * *(float *)((char *)&unk_19094824C + v5))
                          + (float)(*(float *)((char *)&unk_190948250 + v5) * *(float *)((char *)&unk_190948250 + v5)))
                  + (float)(*(float *)((char *)&unk_190948254 + v5) * *(float *)((char *)&unk_190948254 + v5)))
                * 120.0,
                  1.0))
      - v68;
  if ( v69 < -0.03125 )
  {
    v7 = -0.03125;
  }
  else if ( v69 <= 0.03125 )
  {
    v7 = v69;
  }
  v70 = v68 + v7;
  v71 = 0.0044444446;
  *(float *)((char *)&unk_190948278 + v5) = v70;
  v72 = 0.96875 - (float)(v70 * 0.5);
  v73 = v72 * *(float *)((char *)&unk_19094824C + v5);
  *(float *)((char *)&unk_19094824C + v5) = v73;
  v74 = v50 - v73;
  v75 = v72 * *(float *)((char *)&unk_190948250 + v5);
  *(float *)((char *)&unk_190948250 + v5) = v75;
  v76 = v72 * *(float *)((char *)&unk_190948254 + v5);
  *(float *)((char *)&unk_190948254 + v5) = v76;
  v77 = v52 - v76;
  if ( *(_DWORD *)&algn_190941A08[v5 + 24] == 5 )
    v71 = 0.0;
  v78 = fsqrt((float)(v77 * v77) + (float)(v74 * v74));
  if ( v78 > v71 )
  {
    if ( v78 == 0.0 )
    {
      v79 = 0.0;
      v80 = 0.0;
    }
    else
    {
      v79 = v74 * (float)(1.0 / v78);
      v80 = v77 * (float)(1.0 / v78);
    }
    v74 = v79 * v71;
    v77 = v80 * v71;
  }
  *(float *)((char *)&unk_190948250 + v5) = v75;
  v81 = -1;
  *(float *)((char *)&unk_19094824C + v5) = v73 + v74;
  *(float *)((char *)&unk_190948254 + v5) = v77 + v76;
  if ( dword_190948498[v5 / 4] > 0 )
    v81 = dword_19094849C[v5 / 4];
  if ( *(int *)((char *)&unk_1909484C0 + v5) > 0 )
    v81 = *(_DWORD *)((char *)&unk_1909484C4 + v5);
  if ( v81 != -1 )
  {
    v82 = 1760LL * v81;
    if ( dword_19025F0D4[v82] == 28 )
    {
      *(_DWORD *)&algn_190941AC4[v5 + 16] = 0;
      *(_DWORD *)&algn_190941AC4[v5 + 24] = 0;
      v100 = xmmword_1400F78B0;
      v102 = 1.0;
      v101 = xmmword_1400F78B0;
      sub_140049C20((__int64)&v100, (float *)&dword_140146A28, v35);
      v83 = (float)(*(float *)&v100 * 0.875) + *(float *)((char *)&unk_19025F3C0 + v82 * 4);
      v84 = 5072LL * dword_19025F0D4[v82];
      v85 = (float)(*((float *)&v100 + 2) * 0.875) + *(float *)((char *)&unk_19025F3C8 + v82 * 4);
      v86 = *(float *)((char *)&unk_190122140 + v84);
      v87 = (float)((float)((float)(v86 * *(float *)&dword_19025F16C[v82]) + *(float *)&dword_19025F124[v82])
                  + (float)(*(float *)((char *)&unk_190122144 + v84) * *(float *)&dword_19025F178[v82]))
          + (float)(*(float *)((char *)&unk_190122148 + v84) * *(float *)&dword_19025F184[v82]);
      v88 = (float)((float)((float)(v86 * *(float *)&dword_19025F164[v82]) + *(float *)&dword_19025F11C[v82])
                  + (float)(*(float *)((char *)&unk_190122144 + v84) * *(float *)&dword_19025F170[v82]))
          + (float)(*(float *)((char *)&unk_190122148 + v84) * *(float *)&dword_19025F17C[v82]);
      v89 = v85 - v87;
      v90 = v83 - v88;
      v91 = fsqrt((float)(v89 * v89) + (float)(v90 * v90));
      if ( v91 > 0.5 )
      {
        v83 = (float)((float)(v90 * (float)(1.0 / v91)) * 0.5) + v88;
        v85 = (float)((float)(v89 * (float)(1.0 / v91)) * 0.5) + v87;
      }
      v92 = *(float *)((char *)&unk_19094821C + v5) - v83;
      v93 = *(float *)((char *)&unk_190948224 + v5) - v85;
      v94 = fsqrt((float)(v93 * v93) + (float)(v92 * v92));
      if ( v94 >= 0.5 )
      {
        if ( v94 <= 0.75 )
        {
          v96 = 0.0;
          v97 = 0.0;
        }
        else
        {
          v97 = (float)((float)(1.0 / v94) * v93) * (float)(0.6875 - v94);
          v96 = (float)((float)(1.0 / v94) * v92) * (float)(0.6875 - v94);
        }
      }
      else
      {
        v102 = 1.0;
        v100 = xmmword_1400F78B0;
        v101 = xmmword_1400F78B0;
        sub_140049C20((__int64)&v100, (float *)&dword_140146A28, v35);
        v95 = (float)(0.5 - v94) + 0.0625;
        v96 = v95 * *((float *)&v101 + 2);
        v19 = v95 * *((float *)&v101 + 3);
        v97 = v95 * v102;
      }
      v98 = *(float *)((char *)&unk_190948164 + v5) * 0.5;
      v99 = *(float *)((char *)&unk_190948168 + v5) * 0.5;
      *(float *)((char *)&unk_19094824C + v5) = (float)((float)(v96 * 0.0625)
                                                      - (float)(*(float *)((char *)&unk_190948160 + v5) * 0.5))
                                              + *(float *)((char *)&unk_19094824C + v5);
      *(float *)((char *)&unk_190948250 + v5) = (float)((float)(v19 * 0.0625) - v98)
                                              + *(float *)((char *)&unk_190948250 + v5);
      *(float *)((char *)&unk_190948254 + v5) = (float)((float)(v97 * 0.0625) - v99)
                                              + *(float *)((char *)&unk_190948254 + v5);
    }
  }
  *(_DWORD *)((char *)&unk_190948250 + v5) = 0;
  *(float *)((char *)&unk_19094821C + v5) = *(float *)((char *)&unk_19094824C + v5)
                                          + *(float *)((char *)&unk_19094821C + v5);
  *(float *)((char *)&unk_190948220 + v5) = *(float *)((char *)&unk_190948220 + v5)
                                          + *(float *)((char *)&unk_190948250 + v5);
  *(float *)((char *)&unk_190948224 + v5) = *(float *)((char *)&unk_190948224 + v5)
                                          + *(float *)((char *)&unk_190948254 + v5);
  sub_14005BAF0(a1, v34, v35);
}

