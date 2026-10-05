/* Address: 0x1400638c0 | Name: sub_1400638C0 | Size: 2081 bytes */
unsigned __int64 __fastcall sub_1400638C0(int a1)
{
  float v1; // xmm2_4
  __int64 v2; // rdi
  float v3; // xmm3_4
  float v4; // xmm7_4
  float v5; // xmm0_4
  unsigned __int64 v6; // rbx
  float *v7; // r12
  float *v8; // r13
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm9_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm11_4
  float v15; // xmm5_4
  float v16; // xmm13_4
  float v17; // xmm4_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm13_4
  float v28; // xmm9_4
  float v29; // xmm11_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  __int64 v32; // rsi
  _DWORD *v33; // r15
  int v34; // r14d
  float v35; // xmm10_4
  float v36; // xmm11_4
  float v37; // xmm12_4
  float v38; // xmm13_4
  float v39; // xmm14_4
  float v40; // xmm15_4
  float v41; // xmm6_4
  float v42; // xmm7_4
  float v43; // xmm8_4
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm6_4
  float v47; // xmm2_4
  float v48; // xmm7_4
  float v49; // xmm8_4
  float v50; // xmm2_4
  float v51; // xmm0_4
  float v52; // xmm6_4
  float v53; // xmm7_4
  float v54; // xmm8_4
  unsigned __int64 v55; // rsi
  __int128 *v56; // r9
  unsigned __int64 v57; // rsi
  __int128 *v58; // r9
  unsigned __int64 result; // rax
  int *v61; // [rsp+80h] [rbp-88h]
  __int128 v62; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v63[4]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v64[4]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v65[4]; // [rsp+B8h] [rbp-50h] BYREF
  float v66[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v67; // [rsp+D8h] [rbp-30h] BYREF
  float v68; // [rsp+E0h] [rbp-28h]
  float v69; // [rsp+E8h] [rbp-20h]
  float v70; // [rsp+ECh] [rbp-1Ch]
  float v71[4]; // [rsp+F0h] [rbp-18h]
  float v72; // [rsp+100h] [rbp-8h]
  float v73; // [rsp+104h] [rbp-4h]
  _DWORD v74[4]; // [rsp+108h] [rbp+0h]

  v1 = *(float *)&dword_191041A64;
  v2 = 0;
  v3 = *(float *)&dword_191041B90;
  v4 = *(float *)&dword_191041998;
  v5 = *(float *)&dword_191041A64;
  v6 = 28664LL * a1;
  v7 = (float *)((char *)&xmmword_190941C1C + v6);
  v8 = (float *)&dword_190941BEC[v6 / 4];
  *(_DWORD *)((char *)&unk_190941A44 + v6) = 0;
  *(_DWORD *)((char *)&unk_1909482D4 + v6) = 0;
  *(_DWORD *)((char *)&unk_1909483B0 + v6) = 0;
  v9 = v5 * *(float *)((char *)&xmmword_190942994 + v6);
  v10 = (float)(v5 * *(float *)((char *)&xmmword_190942984 + v6 + 12)) + *(float *)((char *)&unk_190942954 + v6);
  v11 = *(float *)((char *)&xmmword_190941C1C + v6);
  v12 = (float)(v1 * *(float *)((char *)&xmmword_190942994 + v6 + 4)) + *(float *)((char *)&unk_19094295C + v6);
  v13 = *(float *)((char *)&xmmword_190941C1C + v6 + 12);
  v14 = *(float *)((char *)&xmmword_190941C1C + v6 + 4);
  v15 = *(float *)((char *)&xmmword_190941C2C + v6);
  v16 = *(float *)((char *)&xmmword_190941C1C + v6 + 8);
  v17 = *(float *)((char *)&xmmword_190941C2C + v6 + 4);
  v73 = v9 + *(float *)((char *)&unk_190942958 + v6);
  v18 = v3 * *(float *)((char *)&xmmword_190942D3C + v6);
  v72 = v10;
  v19 = v3 * *(float *)((char *)&xmmword_190942D2C + v6 + 12);
  v20 = v18 + *(float *)((char *)&unk_190942D00 + v6);
  v21 = v3 * *(float *)((char *)&xmmword_190942D3C + v6 + 4);
  v22 = v19 + *(float *)((char *)&unk_190942CFC + v6);
  *(float *)v74 = v12;
  v23 = v21 + *(float *)((char *)&unk_190942D04 + v6);
  *(float *)&v74[2] = v20;
  *(float *)&v74[1] = v22;
  v24 = (float)(v11 * v4) + *(float *)&dword_190941BEC[v6 / 4];
  *(float *)&v74[3] = v23;
  v25 = (float)((float)(v14 * v4) + *(float *)&dword_190941BEC[v6 / 4 + 1]) + (float)(v15 * *(float *)&qword_19104199C);
  v69 = v24 + (float)(v13 * *(float *)&qword_19104199C);
  v26 = (float)(v16 * v4) + *(float *)&dword_190941BEC[v6 / 4 + 2];
  v70 = v25;
  v27 = (float)(v16 * *(float *)&dword_191041AC4) + *(float *)&dword_190941BEC[v6 / 4 + 2];
  v28 = (float)((float)(v11 * *(float *)&dword_191041AC4) + *(float *)&dword_190941BEC[v6 / 4])
      + (float)(v13 * *(float *)&qword_191041AC8);
  v29 = (float)((float)(v14 * *(float *)&dword_191041AC4) + *(float *)&dword_190941BEC[v6 / 4 + 1])
      + (float)(v15 * *(float *)&qword_191041AC8);
  v71[0] = v26 + (float)(v17 * *(float *)&qword_19104199C);
  v71[1] = v28;
  v71[2] = v29;
  v71[3] = v27 + (float)(v17 * *(float *)&qword_191041AC8);
  sub_1400551C0(a1);
  if ( !*(_DWORD *)&algn_190941A08[v6 + 20] )
  {
    v30 = (float)(*(float *)((char *)&unk_190948158 + v6) * 16.0) - 0.875;
    v31 = (float)(*((float *)&qword_140146A28 + 1) * v30) + v8[1];
    *(float *)&v67 = (float)(*(float *)&qword_140146A28 * v30) + *v8;
    *((float *)&v67 + 1) = v31;
    v68 = (float)(*(float *)&dword_140146A30 * v30) + v8[2];
    sub_1400828D0(&dword_190941BEC[v6 / 4], &v67, 0);
  }
  v32 = 0x140000000LL + v6 + 1351887472;
  v65[0] = 1016515556;
  v61 = (int *)v32;
  v33 = (_DWORD *)(0x140000000LL + v6 + 1351910216);
  v34 = 0;
  v65[1] = 1016515556;
  v65[2] = 1016515556;
  v63[0] = 1031798784;
  v63[1] = 1031798784;
  v63[2] = 1031798784;
  v64[0] = 1048576000;
  v64[1] = 1048576000;
  v64[2] = 1048576000;
  do
  {
    v33[1] = *v33;
    *v33 = 0;
    v35 = *(float *)((char *)&unk_190948154 + v6);
    v36 = *(float *)((char *)&unk_190948158 + v6);
    v37 = *(float *)((char *)&unk_19094815C + v6);
    v38 = v35 + *(float *)((char *)&v69 + v2 * 4);
    v39 = v36 + v71[v2 - 1];
    v40 = v37 + v71[v2];
    v41 = v35 + *v8;
    v42 = v36 + v8[1];
    v43 = v37 + v8[2];
    if ( v34 )
    {
      v50 = fmaxf(*(float *)((char *)&xmmword_190941C1C + v6 + 4) * -0.5, 0.0);
      v48 = (float)((float)(v7[1] * 0.25) + v42) + (float)(v50 * v7[1]);
      v49 = (float)(v7[2] * 0.25) + v43;
      v51 = v50 * *v7;
      v47 = v50 * v7[2];
      v46 = (float)((float)(*v7 * 0.25) + v41) + v51;
    }
    else
    {
      v44 = -fmaxf(*(float *)((char *)&xmmword_190941C1C + v6 + 4) * 0.5, 0.0);
      v45 = v7[2];
      v46 = (float)(v41 - (float)(*v7 * 0.25)) + (float)(*v7 * v44);
      v47 = v45 * v44;
      v48 = (float)(v42 - (float)(v7[1] * 0.25)) + (float)(v7[1] * v44);
      v49 = v43 - (float)(v45 * 0.25);
    }
    v52 = (float)((float)(v46 - (float)(*(float *)((char *)&xmmword_190941C2C + v6 + 8) * 0.25))
                - (float)(*(float *)((char *)&xmmword_190941C1C + v6 + 12) * 0.75))
        - (float)(*(float *)((char *)&xmmword_190941C2C + v6 + 8) * 0.125);
    v53 = (float)((float)(v48 - (float)(*(float *)((char *)&xmmword_190941C2C + v6 + 12) * 0.25))
                - (float)(*(float *)((char *)&xmmword_190941C2C + v6) * 0.75))
        - (float)(*(float *)((char *)&xmmword_190941C2C + v6 + 12) * 0.125);
    v54 = (float)((float)((float)(v49 + v47) - (float)(*(float *)&dword_190941C3C[v6 / 4] * 0.25))
                - (float)(*(float *)((char *)&xmmword_190941C2C + v6 + 4) * 0.75))
        - (float)(*(float *)&dword_190941C3C[v6 / 4] * 0.125);
    if ( !*(_DWORD *)&algn_190941A08[v6 + 20] )
    {
      v52 = (float)((float)(v52 - (float)(v35 + *(float *)((char *)&v72 + v2 * 4))) * 0.015625)
          + (float)(v35 + *(float *)((char *)&v72 + v2 * 4));
      v53 = (float)((float)(v53 - (float)(v36 + *(float *)&v74[v2 - 1])) * 0.015625)
          + (float)(v36 + *(float *)&v74[v2 - 1]);
      v54 = (float)((float)(v54 - (float)(v37 + *(float *)&v74[v2])) * 0.015625) + (float)(v37 + *(float *)&v74[v2]);
    }
    v62 = xmmword_1400F7D40;
    v66[0] = v52 - v38;
    v66[1] = v53 - v39;
    v66[2] = v54 - v40;
    v67 = 0;
    v68 = 0.0;
    sub_14005AB00(
      a1,
      0,
      v34 + 2 * (v34 + 5),
      v66,
      (float *)((char *)&xmmword_190941C1C + v6),
      (float *)&v67,
      1.0,
      0,
      (__m128 *)&v62,
      v65,
      v64,
      v63,
      0.78539819,
      24);
    *(_QWORD *)&v62 = *(int *)(v32 - 312);
    v55 = 9 * v62;
    v56 = &xmmword_14B643330[9 * v62];
    HIDWORD(xmmword_14B643320[9 * v62]) = 0;
    *(_QWORD *)v56 = 0;
    *((_DWORD *)v56 + 2) = 0;
    sub_1400535A0(a1, 0, v34 + 2 * (v34 + 5), (float *)v56);
    if ( (float)((float)((float)(*(float *)&xmmword_14B643330[v55] * *(float *)&xmmword_14B643330[v55])
                       + (float)(*((float *)&xmmword_14B643330[v55] + 1) * *((float *)&xmmword_14B643330[v55] + 1)))
               + (float)(*((float *)&xmmword_14B643330[v55] + 2) * *((float *)&xmmword_14B643330[v55] + 2))) > 0.0 )
      HIDWORD(xmmword_14B643320[v55]) = 1;
    *((_DWORD *)&unk_14B8833A8 + 61 * v62) = 981467136;
    *(_QWORD *)&v62 = *v61;
    v57 = 9 * v62;
    v58 = &xmmword_14B643330[9 * v62];
    HIDWORD(xmmword_14B643320[9 * v62]) = 0;
    *(_QWORD *)v58 = 0;
    *((_DWORD *)v58 + 2) = 0;
    sub_1400535A0(a1, 3 * v34 + 10, 3 * v34 + 11, (float *)v58);
    if ( (float)((float)((float)(*(float *)&xmmword_14B643330[v57] * *(float *)&xmmword_14B643330[v57])
                       + (float)(*((float *)&xmmword_14B643330[v57] + 1) * *((float *)&xmmword_14B643330[v57] + 1)))
               + (float)(*((float *)&xmmword_14B643330[v57] + 2) * *((float *)&xmmword_14B643330[v57] + 2))) > 0.0 )
      HIDWORD(xmmword_14B643320[v57]) = 1;
    result = 244 * v62;
    ++v34;
    v32 = (__int64)(v61 + 234);
    v33 += 55;
    v2 += 3;
    v61 += 234;
    *((_DWORD *)&unk_14B8833A8 + 61 * v62) = 981467136;
  }
  while ( v34 < 2 );
  return result;
}

