/* Address: 0x140073e70 | Name: sub_140073E70 | Size: 2097 bytes */
__int64 __fastcall sub_140073E70(int a1, int a2, float a3)
{
  int *v3; // rdi
  unsigned int v4; // r14d
  int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // r12
  float v9; // xmm5_4
  float v10; // xmm15_4
  float v11; // xmm9_4
  float v12; // xmm6_4
  float v13; // xmm13_4
  float v14; // xmm14_4
  float v15; // xmm8_4
  float v16; // xmm12_4
  float v17; // xmm11_4
  __int64 v18; // rcx
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm2_4
  float v29; // xmm7_4
  float v30; // xmm10_4
  __int64 v31; // rcx
  float v32; // xmm2_4
  float v33; // xmm9_4
  float v34; // xmm8_4
  float v35; // xmm0_4
  float v36; // xmm8_4
  float v37; // xmm0_4
  float v38; // xmm4_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm2_4
  float v42; // xmm7_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  __int64 v45; // rax
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm6_4
  float v49; // xmm2_4
  float v50; // xmm3_4
  float v51; // xmm1_4
  float v52; // xmm6_4
  float v53; // xmm5_4
  float v54; // xmm3_4
  float v55; // xmm4_4
  float v56; // xmm0_4
  __int64 v58; // [rsp+40h] [rbp-C0h] BYREF
  float v59; // [rsp+48h] [rbp-B8h]
  int v60; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+54h] [rbp-ACh]
  float v62; // [rsp+60h] [rbp-A0h]
  float v63; // [rsp+64h] [rbp-9Ch]
  float v64; // [rsp+68h] [rbp-98h]
  float v65; // [rsp+6Ch] [rbp-94h]
  float v66; // [rsp+70h] [rbp-90h] BYREF
  float v67; // [rsp+74h] [rbp-8Ch]
  float v68; // [rsp+78h] [rbp-88h]
  _DWORD v69[4]; // [rsp+80h] [rbp-80h] BYREF
  float v70; // [rsp+90h] [rbp-70h] BYREF
  float v71; // [rsp+94h] [rbp-6Ch]
  float v72; // [rsp+98h] [rbp-68h]
  float v73[44]; // [rsp+A0h] [rbp-60h] BYREF
  float v75; // [rsp+1A8h] [rbp+A8h] BYREF

  v3 = dword_140147804;
  v4 = 0;
  v6 = 0;
  v7 = 1760LL * a1;
  dword_16E18CA5C = 1199570944;
  v8 = 1268LL * dword_19025F0D4[v7];
  do
  {
    v9 = *(float *)&dword_1901221C4[v8];
    v10 = *(float *)&dword_1901221C8[v8];
    v11 = *(float *)&dword_19025F164[v7];
    v12 = *(float *)&dword_19025F170[v7];
    v13 = *(float *)&dword_1901221CC[v8];
    v14 = *(float *)&dword_19025F17C[v7];
    v15 = *(float *)&dword_19025F174[v7];
    v16 = *(float *)&dword_19025F180[v7];
    v17 = *(float *)&dword_19025F184[v7];
    v18 = 3LL * *v3;
    v19 = (float)((float)((float)(*(float *)&dword_140147690[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_140147690[3 * *(v3 - 1)])
                - 0.5)
        * v9;
    v20 = (float)((float)((float)(*(float *)&dword_140147694[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_140147694[3 * *(v3 - 1)])
                - 0.5)
        * v10;
    v21 = (float)((float)((float)(*(float *)&dword_140147698[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_140147698[3 * *(v3 - 1)])
                - 0.5)
        * v13;
    v62 = (float)((float)((float)(v11 * v19) + *(float *)&dword_19025F11C[v7]) + (float)(v12 * v20))
        + (float)(v14 * v21);
    *(float *)v69 = v62;
    v22 = *(float *)&dword_19025F178[v7] * v20;
    v63 = (float)((float)((float)(*(float *)&dword_19025F168[v7] * v19) + *(float *)&dword_19025F120[v7])
                + (float)(v15 * v20))
        + (float)(v16 * v21);
    *(float *)&v69[1] = v63;
    v23 = (float)((float)(*(float *)&dword_19025F16C[v7] * v19) + *(float *)&dword_19025F124[v7]) + v22;
    v24 = (float)(*(float *)&dword_140147690[v18] - 0.5) + *(float *)&dword_140147690[v18];
    v25 = *(float *)&dword_140147694[v18];
    v64 = v23 + (float)(v17 * v21);
    *(float *)&v69[2] = v64;
    v26 = (float)(v24 - 0.5) * v9;
    v27 = (float)((float)((float)(v25 - 0.5) + v25) - 0.5) * v10;
    v28 = (float)((float)(*(float *)&dword_140147698[v18] - 0.5) + *(float *)&dword_140147698[v18]) - 0.5;
    v29 = *(float *)&dword_19025F11C[v7];
    v30 = v11;
    v31 = 3LL * v3[1];
    v32 = v28 * v13;
    v33 = (float)((float)(*(float *)&dword_19025F168[v7] * v26) + *(float *)&dword_19025F120[v7]) + (float)(v15 * v27);
    v34 = (float)(*(float *)&dword_19025F16C[v7] * v26) + *(float *)&dword_19025F124[v7];
    v35 = *(float *)&dword_19025F178[v7] * v27;
    v70 = (float)((float)((float)(v30 * v26) + v29) + (float)(v12 * v27)) + (float)(v14 * v32);
    v36 = v34 + v35;
    v37 = *(float *)&dword_140147690[v31];
    v71 = v33 + (float)(v16 * v32);
    v72 = v36 + (float)(v17 * v32);
    v38 = (float)((float)((float)(v37 - 0.5) + v37) - 0.5) * v9;
    v39 = (float)((float)((float)(*(float *)&dword_140147694[v31] - 0.5) + *(float *)&dword_140147694[v31]) - 0.5) * v10;
    v40 = (float)(*(float *)&dword_19025F164[v7] * v38) + v29;
    v41 = (float)((float)((float)(*(float *)&dword_140147698[v31] - 0.5) + *(float *)&dword_140147698[v31]) - 0.5) * v13;
    v42 = (float)(*(float *)&dword_19025F168[v7] * v38) + *(float *)&dword_19025F120[v7];
    v66 = (float)(v40 + (float)(v12 * v39)) + (float)(v41 * v14);
    v43 = *(float *)&dword_19025F178[v7] * v39;
    v44 = (float)(*(float *)&dword_19025F16C[v7] * v38) + *(float *)&dword_19025F124[v7];
    v67 = (float)(v42 + (float)(*(float *)&dword_19025F174[v7] * v39)) + (float)(v41 * v16);
    v45 = v3[2];
    v46 = v44 + v43;
    v47 = *(float *)&dword_140147690[3 * v45];
    v65 = v46 + (float)(v41 * v17);
    v68 = v65;
    v48 = (float)((float)((float)(v47 - 0.5) + v47) - 0.5) * v9;
    v49 = (float)(v48 * *(float *)&dword_19025F164[v7]) + *(float *)&dword_19025F11C[v7];
    v50 = (float)((float)(v48 * *(float *)&dword_19025F168[v7]) + *(float *)&dword_19025F120[v7])
        + (float)((float)((float)((float)((float)(*(float *)&dword_140147694[3 * v45] - 0.5)
                                        + *(float *)&dword_140147694[3 * v45])
                                - 0.5)
                        * v10)
                * *(float *)&dword_19025F174[v7]);
    v51 = (float)((float)((float)(*(float *)&dword_140147698[3 * v45] - 0.5) + *(float *)&dword_140147698[3 * v45]) - 0.5)
        * v13;
    v52 = (float)((float)((float)(v48 * *(float *)&dword_19025F16C[v7]) + *(float *)&dword_19025F124[v7])
                + (float)((float)((float)((float)((float)(*(float *)&dword_140147694[3 * v45] - 0.5)
                                                + *(float *)&dword_140147694[3 * v45])
                                        - 0.5)
                                * v10)
                        * *(float *)&dword_19025F178[v7]))
        + (float)(v51 * v17);
    v73[0] = (float)(v49
                   + (float)((float)((float)((float)((float)(*(float *)&dword_140147694[3 * v45] - 0.5)
                                                   + *(float *)&dword_140147694[3 * v45])
                                           - 0.5)
                                   * v10)
                           * *(float *)&dword_19025F170[v7]))
           + (float)(v51 * v14);
    v73[2] = v52;
    v73[1] = v50 + (float)(v51 * v16);
    v53 = (float)((float)(v67 - v63) * (float)(v72 - v64)) - (float)((float)(v65 - v64) * (float)(v71 - v63));
    v54 = (float)((float)(v65 - v64) * (float)(v70 - v62)) - (float)((float)(v66 - v62) * (float)(v72 - v64));
    v55 = (float)((float)(v66 - v62) * (float)(v71 - v63)) - (float)((float)(v67 - v63) * (float)(v70 - v62));
    v56 = fsqrt((float)((float)(v54 * v54) + (float)(v53 * v53)) + (float)(v55 * v55));
    if ( v56 == 0.0 )
    {
      v58 = 0;
      v59 = 0.0;
    }
    else
    {
      *(float *)&v58 = (float)(1.0 / v56) * v53;
      *((float *)&v58 + 1) = (float)(1.0 / v56) * v54;
      v59 = (float)(1.0 / v56) * v55;
    }
    if ( (unsigned int)sub_1400DB7E0(
                         (unsigned int)&v60,
                         (unsigned int)&v58,
                         (unsigned int)&v75,
                         a2,
                         LODWORD(a3),
                         (__int64)v69,
                         (__int64)&v70,
                         (__int64)&v66)
      && *(float *)&dword_16E18CA5C > v75 )
    {
      unk_16E18CA40 = v60;
      qword_16E18CA44 = v61;
      qword_16E18CA4C = v58;
      dword_16E18CA54 = LODWORD(v59);
      dword_16E18CA5C = LODWORD(v75);
      dword_16E18CA70 = v6;
    }
    if ( (unsigned int)sub_1400DB7E0(
                         (unsigned int)&v60,
                         (unsigned int)&v58,
                         (unsigned int)&v75,
                         a2,
                         LODWORD(a3),
                         (__int64)v69,
                         (__int64)&v66,
                         (__int64)v73)
      && *(float *)&dword_16E18CA5C > v75 )
    {
      unk_16E18CA40 = v60;
      qword_16E18CA44 = v61;
      qword_16E18CA4C = v58;
      dword_16E18CA54 = LODWORD(v59);
      dword_16E18CA5C = LODWORD(v75);
      dword_16E18CA70 = v6;
    }
    ++v6;
    v3 += 4;
  }
  while ( v6 < 6 );
  LOBYTE(v4) = *(float *)&dword_16E18CA5C < 65536.0;
  return v4;
}

