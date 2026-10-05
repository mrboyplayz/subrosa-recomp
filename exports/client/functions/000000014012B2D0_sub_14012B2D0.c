/* Address: 0x14012b2d0 | Name: sub_14012B2D0 | Size: 2647 bytes */
__int64 __fastcall sub_14012B2D0(__int64 a1, float *a2, float *a3, float *a4)
{
  float v4; // xmm9_4
  float v6; // xmm6_4
  float v8; // xmm2_4
  float v10; // xmm15_4
  float v12; // xmm5_4
  float v13; // xmm13_4
  float v14; // xmm8_4
  float v15; // xmm14_4
  float v16; // xmm7_4
  float v17; // xmm10_4
  float v18; // xmm11_4
  float v19; // xmm12_4
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm8_4
  float v26; // xmm1_4
  float v27; // xmm10_4
  float v28; // xmm9_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm4_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm7_4
  float v35; // xmm2_4
  float v36; // xmm15_4
  float v37; // xmm11_4
  float v38; // xmm3_4
  float v39; // xmm15_4
  float v40; // xmm0_4
  float v41; // xmm12_4
  float v42; // xmm11_4
  float v43; // xmm7_4
  float v44; // xmm1_4
  float v45; // xmm11_4
  float v46; // xmm2_4
  float v47; // xmm2_4
  float v48; // xmm4_4
  float v49; // xmm3_4
  float v50; // xmm2_4
  float v51; // xmm8_4
  float v52; // xmm9_4
  float v53; // xmm0_4
  float v54; // xmm4_4
  float v55; // xmm10_4
  float v56; // xmm2_4
  float v57; // xmm0_4
  float v58; // xmm3_4
  float v59; // xmm2_4
  float v60; // xmm5_4
  float v61; // xmm11_4
  float v62; // xmm7_4
  float v63; // xmm12_4
  float v64; // xmm2_4
  __int64 v66; // [rsp+8h] [rbp-100h] BYREF
  float v67; // [rsp+28h] [rbp-E0h]
  float v68; // [rsp+2Ch] [rbp-DCh]
  unsigned __int64 v69; // [rsp+30h] [rbp-D8h]
  float v70; // [rsp+38h] [rbp-D0h]
  float v71; // [rsp+3Ch] [rbp-CCh]
  float v72; // [rsp+40h] [rbp-C8h]
  float v73; // [rsp+44h] [rbp-C4h]
  float v74; // [rsp+48h] [rbp-C0h]
  float v75; // [rsp+50h] [rbp-B8h] BYREF
  float v76; // [rsp+54h] [rbp-B4h]
  float v77; // [rsp+58h] [rbp-B0h]
  float v78; // [rsp+60h] [rbp-A8h]
  float v79; // [rsp+64h] [rbp-A4h]
  float v80; // [rsp+68h] [rbp-A0h]
  float v81; // [rsp+6Ch] [rbp-9Ch]
  float v82; // [rsp+70h] [rbp-98h]
  float v83; // [rsp+74h] [rbp-94h]
  float v84; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v85; // [rsp+7Ch] [rbp-8Ch]
  float v86; // [rsp+84h] [rbp-84h]
  float v87; // [rsp+88h] [rbp-80h]
  float v88; // [rsp+8Ch] [rbp-7Ch]
  float v89; // [rsp+90h] [rbp-78h]
  float v90; // [rsp+94h] [rbp-74h]
  float v91; // [rsp+98h] [rbp-70h]
  __int64 v92; // [rsp+A0h] [rbp-68h]

  v4 = *(float *)(a1 + 28);
  v6 = *(float *)(a1 + 4);
  v8 = *(float *)(a1 + 12);
  v10 = *(float *)a1;
  v12 = a2[1];
  v13 = *a2;
  v14 = *(float *)(a1 + 8);
  v15 = a2[2];
  v16 = *(float *)(a1 + 16);
  v17 = *(float *)(a1 + 32);
  v18 = *(float *)(a1 + 20);
  v19 = *a4;
  HIDWORD(v69) = *(_DWORD *)(a1 + 24);
  v89 = *((float *)&v69 + 1);
  v70 = v8;
  v86 = v8;
  v74 = v4;
  v90 = v4;
  v84 = v10;
  *(float *)&v69 = v6;
  v85 = __PAIR64__(LODWORD(v14), LODWORD(v6));
  v68 = v14;
  v20 = v13 * *(float *)(a1 + 24);
  v21 = (float)((float)((float)(v6 * v12) + (float)(v10 * v13)) + (float)(v14 * v15)) * v19;
  v87 = v16;
  v22 = (float)((float)((float)(v12 * v16) + (float)(v13 * v8)) + (float)(v15 * v18)) * a4[1];
  v88 = v18;
  v67 = v17;
  v91 = v17;
  v23 = (float)((float)((float)(v12 * v4) + v20) + (float)(v15 * v17)) * a4[2];
  v79 = (float)((float)(v10 * v21) + (float)(v22 * *(float *)(a1 + 12))) + (float)(*(float *)(a1 + 24) * v23);
  v80 = (float)((float)(v6 * v21) + (float)(v16 * v22)) + (float)(v4 * v23);
  v78 = v6;
  v24 = v14 * v21;
  v73 = v14;
  v25 = v10;
  v81 = v24 + (float)(v18 * v22);
  v26 = v17;
  v27 = v18;
  v28 = v16;
  v71 = *(float *)(a1 + 28);
  v81 = v81 + (float)(v26 * v23);
  v72 = *(float *)(a1 + 32);
  v29 = fsqrt((float)((float)(v80 * v80) + (float)(v79 * v79)) + (float)(v81 * v81));
  if ( v29 <= 0.000015258789 )
  {
    v31 = *(float *)&v69;
    v30 = v68;
  }
  else
  {
    v76 = (float)(1.0 / v29) * v80;
    v77 = (float)(1.0 / v29) * v81;
    v75 = (float)(1.0 / v29) * v79;
    sub_14007B2A0((__int64)&v84, &v75);
    v30 = *((float *)&v85 + 1);
    v31 = *(float *)&v85;
    v12 = a2[1];
    v13 = *a2;
    v15 = a2[2];
    v19 = *a4;
    v25 = *(float *)a1;
    v28 = *(float *)(a1 + 16);
    v27 = *(float *)(a1 + 20);
    v18 = v88;
    v16 = v87;
    v10 = v84;
    v78 = *(float *)(a1 + 4);
    v73 = *(float *)(a1 + 8);
    v71 = *(float *)(a1 + 28);
    v72 = *(float *)(a1 + 32);
    v67 = v91;
    v74 = v90;
    v70 = v86;
    v68 = *((float *)&v85 + 1);
    v69 = __PAIR64__(LODWORD(v89), v85);
  }
  v84 = v25;
  v87 = v28;
  v88 = v27;
  v32 = (float)((float)((float)(v31 * v12) + (float)(v10 * v13)) + (float)(v30 * v15)) * v19;
  v33 = (float)((float)((float)(v16 * v12) + (float)(v70 * v13)) + (float)(v18 * v15)) * a4[1];
  v91 = v72;
  v34 = v16 * v33;
  v35 = (float)((float)((float)(v74 * v12) + (float)(*((float *)&v69 + 1) * v13)) + (float)(v67 * v15)) * a4[2];
  v36 = (float)(v10 * v32) + (float)(v70 * v33);
  v37 = v18 * v33;
  v38 = v78;
  v39 = v36 + (float)(*((float *)&v69 + 1) * v35);
  v85 = __PAIR64__(LODWORD(v73), LODWORD(v78));
  v40 = *(float *)&v69 * v32;
  v69 = __PAIR64__(LODWORD(v73), LODWORD(v78));
  v41 = v27;
  v42 = (float)(v37 + (float)(v68 * v32)) + (float)(v67 * v35);
  v82 = (float)(v34 + v40) + (float)(v74 * v35);
  v67 = *(float *)(a1 + 12);
  v86 = v67;
  v68 = *(float *)(a1 + 24);
  v89 = v68;
  v90 = v71;
  v43 = v28;
  v44 = v42 * v42;
  v83 = v42;
  v45 = v25;
  v74 = v71;
  v46 = fsqrt((float)((float)(v39 * v39) + (float)(v82 * v82)) + v44);
  v70 = v72;
  if ( v46 <= 0.000015258789 )
  {
    v47 = v67;
  }
  else
  {
    v76 = (float)(1.0 / v46) * v82;
    v77 = (float)(1.0 / v46) * v83;
    v75 = (float)(1.0 / v46) * v39;
    sub_14007B2A0((__int64)&v84, &v75);
    v47 = v86;
    v38 = *(float *)&v85;
    v12 = a2[1];
    v13 = *a2;
    v15 = a2[2];
    v45 = *(float *)a1;
    v43 = *(float *)(a1 + 16);
    v41 = *(float *)(a1 + 20);
    v27 = v88;
    v28 = v87;
    v25 = v84;
    v69 = *(_QWORD *)(a1 + 4);
    v74 = *(float *)(a1 + 28);
    v70 = *(float *)(a1 + 32);
    v72 = v91;
    v71 = v90;
    v68 = v89;
    v73 = *((float *)&v85 + 1);
    v67 = v86;
    LODWORD(v78) = v85;
  }
  v84 = v45;
  v87 = v43;
  v88 = v41;
  v48 = (float)((float)((float)(v12 * v38) + (float)(v13 * v25)) + (float)(v15 * v73)) * *a4;
  v49 = (float)((float)((float)(v12 * v28) + (float)(v13 * v47)) + (float)(v15 * v27)) * a4[1];
  v50 = (float)((float)((float)(v12 * v71) + (float)(v13 * v68)) + (float)(v15 * v72)) * a4[2];
  v51 = (float)((float)(v25 * v48) + (float)(v67 * v49)) + (float)(v68 * v50);
  v52 = (float)((float)(v28 * v49) + (float)(v78 * v48)) + (float)(v71 * v50);
  v53 = v73 * v48;
  v54 = v74;
  v90 = v74;
  v55 = (float)((float)(v27 * v49) + v53) + (float)(v72 * v50);
  v85 = v69;
  v67 = *(float *)(a1 + 12);
  v86 = v67;
  v68 = *(float *)(a1 + 24);
  v89 = v68;
  v91 = v70;
  v56 = fsqrt((float)((float)(v51 * v51) + (float)(v52 * v52)) + (float)(v55 * v55));
  if ( v56 <= 0.000015258789 )
  {
    v57 = *(float *)&v69;
  }
  else
  {
    v76 = (float)(1.0 / v56) * v52;
    v75 = v51 * (float)(1.0 / v56);
    v77 = (float)(1.0 / v56) * v55;
    sub_14007B2A0((__int64)&v84, &v75);
    v12 = a2[1];
    v13 = *a2;
    v15 = a2[2];
    v54 = v90;
    v41 = v88;
    v43 = v87;
    v45 = v84;
    v70 = v91;
    v68 = v89;
    v67 = v86;
    v57 = *(float *)&v85;
    v69 = v85;
  }
  v58 = (float)((float)((float)(v12 * v57) + (float)(v13 * v45)) + (float)(v15 * *((float *)&v69 + 1))) * *a4;
  v59 = (float)((float)((float)(v12 * v43) + (float)(v13 * v67)) + (float)(v15 * v41)) * a4[1];
  v60 = (float)((float)((float)(v12 * v54) + (float)(v13 * v68)) + (float)(v15 * v70)) * a4[2];
  v61 = (float)((float)((float)(v45 * v58) + (float)(v67 * v59)) + (float)((float)(v68 * v60) + v79))
      + (float)((float)(v51 + v51) + (float)(v39 + v39));
  v62 = (float)((float)((float)(v43 * v59) + (float)(*(float *)&v69 * v58)) + (float)((float)(v54 * v60) + v80))
      + (float)((float)(v52 + v52) + (float)(v82 + v82));
  v63 = (float)((float)((float)(v41 * v59) + (float)(*((float *)&v69 + 1) * v58)) + (float)((float)(v70 * v60) + v81))
      + (float)((float)(v55 + v55) + (float)(v83 + v83));
  *a3 = v61 * 0.16666667;
  a3[1] = v62 * 0.16666667;
  a3[2] = v63 * 0.16666667;
  v64 = fsqrt((float)((float)((float)(v62 * v62) + (float)(v61 * v61)) + (float)(v63 * v63)) * 0.02777778);
  if ( v64 > 0.000015258789 )
  {
    v76 = (float)(1.0 / v64) * (float)(v62 * 0.16666667);
    v75 = (float)(1.0 / v64) * (float)(v61 * 0.16666667);
    v77 = (float)(1.0 / v64) * (float)(v63 * 0.16666667);
    sub_14007B2A0(a1, &v75);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v66 ^ v92);
}

