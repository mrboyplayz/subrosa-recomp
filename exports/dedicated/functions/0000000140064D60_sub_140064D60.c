/* Address: 0x140064d60 | Name: sub_140064D60 | Size: 2175 bytes */
void __fastcall sub_140064D60(int a1, int a2, __int64 a3, float *a4, int a5, float *a6)
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
  float v18; // xmm8_4
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
  float v43; // xmm6_4
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
  float v54; // xmm13_4
  float v55; // xmm3_4
  float v56; // xmm6_4
  float v57; // xmm14_4
  float v58; // xmm1_4
  float v59; // xmm9_4
  float v60; // xmm10_4
  float v61; // xmm10_4
  float v62; // [rsp+28h] [rbp-B9h]
  float v63; // [rsp+30h] [rbp-B1h] BYREF
  float v64; // [rsp+34h] [rbp-ADh]
  float v65; // [rsp+38h] [rbp-A9h]
  float v66; // [rsp+40h] [rbp-A1h] BYREF
  float v67; // [rsp+44h] [rbp-9Dh]
  __int64 v68; // [rsp+48h] [rbp-99h]

  v9 = 28664LL * a1;
  v10 = v9 + 220LL * a2;
  if ( *(float *)((char *)&unk_1909419A0 + v10 + 26940) == 0.0 )
  {
    v11 = *a6 * 0.0234375;
    v12 = a6[1] * 0.0234375;
    v13 = a6[2] * 0.0234375;
    v14 = (float)(*(float *)((char *)&unk_1909419A0 + v9 + 26560) * 15.0)
        + *(float *)((char *)&unk_1909419A0 + v9 + 26484);
    v15 = (float)(*(float *)((char *)&unk_1909419A0 + v9 + 26564) * 15.0)
        + *(float *)((char *)&unk_1909419A0 + v9 + 26488);
    v16 = (float)(*(float *)((char *)&unk_1909419A0 + v9 + 26568) * 15.0)
        + *(float *)((char *)&unk_1909419A0 + v9 + 26492);
    if ( a2 )
    {
      v17 = v14 + v11;
      v19 = v16 + v13;
      v18 = v12 + v15;
    }
    else
    {
      v17 = v14 - v11;
      v18 = v15 - v12;
      v19 = v16 - v13;
    }
    v66 = (float)(*(float *)&qword_140146A28 * 0.25) + v17;
    v67 = (float)(*((float *)&qword_140146A28 + 1) * 0.25) + v18;
    *(float *)&v68 = (float)(*(float *)&dword_140146A30 * 0.25) + v19;
    v63 = v17 - (float)(*(float *)&qword_140146A28 * 1.75);
    v64 = v18 - (float)(*((float *)&qword_140146A28 + 1) * 1.75);
    v65 = v19 - (float)(*(float *)&dword_140146A30 * 1.75);
    if ( (unsigned int)sub_140062890(a1, (__int64)&v66, (__int64)&v63) )
      v18 = *(float *)&qword_16E18CA44;
    *(float *)((char *)&unk_1909419A0 + v10 + 27060) = v17;
    *(float *)((char *)&unk_1909419A0 + v10 + 27064) = v18;
    *(float *)((char *)&unk_1909419A0 + v10 + 27068) = v19;
  }
  v20 = *(float *)((char *)&unk_1909419A0 + v9 + 26484);
  v21 = *(float *)((char *)&unk_1909419A0 + v9 + 26492);
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
  v26 = *(float *)((char *)&unk_1909419A0 + v9 + 26796);
  v27 = *(float *)((char *)&unk_1909419A0 + v9 + 26804);
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
  v35 = *(float *)((char *)&unk_1909419A0 + v9 + 26560) - v26;
  v36 = *(float *)((char *)&unk_1909419A0 + v9 + 26568) - v27;
  v37 = v30 + v28;
  v38 = fsqrt((float)(v36 * v36) + (float)(v35 * v35));
  if ( v38 > 0.015625 )
  {
    v36 = (float)((float)(1.0 / v38) * v36) * 0.015625;
    v35 = (float)((float)(1.0 / v38) * v35) * 0.015625;
  }
  v39 = (float)(1.0 - *(float *)((char *)&unk_1909419A0 + v10 + 26940)) * 11.25;
  v40 = (float)(v35 * 7.5) + v37;
  v41 = (float)(v36 * 7.5) + v34;
  v42 = (float)(*(float *)((char *)&unk_1909419A0 + v9 + 26800) * v39) + a4[1];
  v66 = (float)(v26 * v39) + v40;
  v67 = v42;
  *(float *)&v68 = (float)(v27 * v39) + v41;
  v63 = v66 - (float)(*(float *)&qword_140146A28 * 1.75);
  v64 = v42 - (float)(*((float *)&qword_140146A28 + 1) * 1.75);
  v65 = *(float *)&v68 - (float)(*(float *)&dword_140146A30 * 1.75);
  if ( (unsigned int)sub_140062890(a1, (__int64)&v66, (__int64)&v63) )
    v43 = *(float *)&qword_16E18CA44;
  else
    v43 = *(float *)((char *)&unk_1909419A0 + 936 * a2 + v9 + 4336);
  v44 = *(float *)((char *)&unk_1909419A0 + v9 + 592);
  v45 = v9 + 936LL * (a2 + 4);
  v46 = *(float *)((char *)&dword_190941BEC[1] + v45);
  v47 = *(float *)((char *)dword_190941BEC + v45);
  v48 = *(float *)((char *)&dword_190941BEC[2] + v45);
  v66 = v47;
  *(float *)&v68 = v48;
  if ( v46 > v44 )
    v46 = v44;
  v67 = v46 + 0.25;
  v63 = v47 - (float)(*(float *)&qword_140146A28 * 0.5);
  v64 = (float)(v46 + 0.25) - (float)(*((float *)&qword_140146A28 + 1) * 0.5);
  v65 = v48 - (float)(*(float *)&dword_140146A30 * 0.5);
  if ( (unsigned int)sub_140062890(a1, (__int64)&v66, (__int64)&v63) && v43 < *(float *)&qword_16E18CA44 )
    v43 = *(float *)&qword_16E18CA44;
  v49 = v40 - *a4;
  v50 = sin(*(float *)((char *)&unk_1909419A0 + v10 + 27048));
  v51 = *(float *)((char *)&unk_1909419A0 + v10 + 26940) + 0.050000001;
  v52 = v41 - a4[2];
  v53 = (float)(v43 - v50 * 0.25) - a4[1];
  *(float *)((char *)&unk_1909419A0 + v10 + 26940) = v51;
  v62 = v53;
  if ( *(_DWORD *)((char *)&unk_1909419A0 + v9 + 128) != 5 )
  {
    v51 = v51 + 0.033333335;
    *(float *)((char *)&unk_1909419A0 + v10 + 26940) = v51;
  }
  v54 = fminf(v51, 1.0);
  v55 = a6[7];
  v56 = fminf(
          fmaxf(
            (float)(fsqrt(
                      (float)((float)(*(float *)((char *)&unk_1909419A0 + v9 + 26796)
                                    * *(float *)((char *)&unk_1909419A0 + v9 + 26796))
                            + (float)(*(float *)((char *)&unk_1909419A0 + v9 + 26800)
                                    * *(float *)((char *)&unk_1909419A0 + v9 + 26800)))
                    + (float)(*(float *)((char *)&unk_1909419A0 + v9 + 26804)
                            * *(float *)((char *)&unk_1909419A0 + v9 + 26804)))
                  * 7.5)
          - 0.125,
            0.0),
          1.0);
  v57 = 1.0 - v54;
  v58 = (float)(1.0 - v54) * *(float *)((char *)&unk_1909419A0 + v10 + 26948);
  v59 = (float)(v56 * 0.125) * a6[8];
  v60 = (float)((float)((float)((float)((float)((float)((float)(v56 * 0.125) * a6[6])
                                              + *(float *)((char *)&unk_1909419A0 + v10 + 26944))
                                      * 3.0)
                              * (float)(v57 * v57))
                      + (float)((float)((float)((float)(v49 * 3.0) * v57) + (float)(v49 * v54)) * v54))
              * v54)
      + (float)((float)(*(float *)((char *)&unk_1909419A0 + v10 + 26944) * v57) * (float)(v57 * v57));
  *(float *)((char *)&unk_1909419A0 + v10 + 26956) = v60;
  *(float *)((char *)&unk_1909419A0 + v10 + 26960) = (float)((float)((float)((float)((float)((float)((float)(v56 * 0.375) + *(float *)((char *)&unk_1909419A0 + v10 + 26948))
                                                                                           + (float)((float)(v56 * 0.125) * v55))
                                                                                   * 3.0)
                                                                           * (float)(v57 * v57))
                                                                   + (float)((float)((float)((float)((float)((float)(v56 * 0.5) + v62) * 3.0)
                                                                                           * v57)
                                                                                   + (float)(v62 * v54))
                                                                           * v54))
                                                           * v54)
                                                   + (float)(v58 * (float)(v57 * v57));
  *(float *)((char *)&unk_1909419A0 + v10 + 26964) = (float)((float)((float)((float)((float)((float)(v52 * 3.0) * v57)
                                                                                   + (float)(v52 * v54))
                                                                           * v54)
                                                                   + (float)((float)((float)(v59
                                                                                           + *(float *)((char *)&unk_1909419A0 + v10 + 26952))
                                                                                   * 3.0)
                                                                           * (float)(v57 * v57)))
                                                           * v54)
                                                   + (float)((float)(v57
                                                                   * *(float *)((char *)&unk_1909419A0 + v10 + 26952))
                                                           * (float)(v57 * v57));
  v61 = v60 + *a4;
  *(float *)((char *)&unk_1909419A0 + v10 + 26956) = v61;
  *(float *)((char *)&unk_1909419A0 + v10 + 26960) = *(float *)((char *)&unk_1909419A0 + v10 + 26960) + a4[1];
  *(float *)((char *)&unk_1909419A0 + v10 + 26964) = *(float *)((char *)&unk_1909419A0 + v10 + 26964) + a4[2];
  *(float *)((char *)&unk_1909419A0 + v10 + 26956) = v61 + *(float *)((char *)&unk_1909419A0 + v9 + 26808);
  *(float *)((char *)&unk_1909419A0 + v10 + 26960) = *(float *)((char *)&unk_1909419A0 + v9 + 26812)
                                                   + *(float *)((char *)&unk_1909419A0 + v10 + 26960);
  *(float *)((char *)&unk_1909419A0 + v10 + 26964) = *(float *)((char *)&unk_1909419A0 + v9 + 26816)
                                                   + *(float *)((char *)&unk_1909419A0 + v10 + 26964);
  *(_DWORD *)((char *)&unk_1909419A0 + v10 + 27040) = 0;
}

