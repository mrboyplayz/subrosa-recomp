/* Address: 0x1400d68d0 | Name: sub_1400D68D0 | Size: 2142 bytes */
_BOOL8 __fastcall sub_1400D68D0(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float a8)
{
  int v8; // r12d
  unsigned __int64 v9; // r13
  float v13; // xmm5_4
  int *v14; // r14
  float v15; // xmm14_4
  float v16; // xmm15_4
  unsigned __int64 v17; // rax
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  unsigned __int64 v21; // rax
  float v22; // xmm13_4
  float v23; // xmm12_4
  float v24; // xmm8_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm9_4
  float v28; // xmm12_4
  float v29; // xmm13_4
  float v30; // xmm0_4
  float v31; // xmm3_4
  float v32; // xmm13_4
  float v33; // xmm1_4
  float v34; // xmm4_4
  float v35; // xmm6_4
  unsigned __int64 v36; // rax
  float v37; // xmm7_4
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm6_4
  float v41; // xmm2_4
  float v42; // xmm9_4
  float v43; // xmm6_4
  float v44; // xmm3_4
  float v45; // xmm4_4
  float v46; // xmm0_4
  float v47; // xmm11_4
  float v48; // xmm14_4
  float v49; // xmm1_4
  float v50; // xmm3_4
  float v51; // xmm7_4
  float v52; // xmm11_4
  float v53; // xmm7_4
  float v54; // xmm3_4
  float v55; // xmm9_4
  float v56; // xmm6_4
  float v57; // xmm11_4
  float v58; // xmm0_4
  float v59; // xmm8_4
  float v60; // xmm9_4
  float v61; // xmm7_4
  bool v62; // zf
  float v63; // xmm3_4
  float v64; // xmm14_4
  float v65; // xmm15_4
  float v66; // xmm11_4
  float v67; // xmm12_4
  float v68; // xmm13_4
  unsigned __int64 v69; // rax
  float v70; // xmm0_4
  float v71; // xmm2_4
  float v72; // xmm1_4
  float v73; // xmm5_4
  float v74; // xmm6_4
  float v75; // xmm1_4
  float v76; // xmm3_4
  float v77; // xmm6_4
  float v78; // xmm6_4
  float v79; // xmm4_4
  float v80; // xmm14_4
  float v81; // xmm1_4
  float v82; // xmm3_4
  float v83; // xmm4_4
  float v84; // xmm5_4
  float v85; // xmm0_4
  float v86; // xmm6_4
  float v87; // xmm4_4
  float v88; // xmm1_4
  float v89; // xmm11_4
  float v90; // xmm3_4
  float v91; // xmm4_4
  float v92; // xmm5_4
  float v93; // xmm0_4
  float v95; // [rsp+48h] [rbp-C0h] BYREF
  float v96; // [rsp+4Ch] [rbp-BCh]
  float v97; // [rsp+50h] [rbp-B8h]
  float v98; // [rsp+58h] [rbp-B0h] BYREF
  float v99; // [rsp+5Ch] [rbp-ACh]
  float v100; // [rsp+60h] [rbp-A8h]
  float v101; // [rsp+68h] [rbp-A0h] BYREF
  float v102; // [rsp+6Ch] [rbp-9Ch]
  float v103; // [rsp+70h] [rbp-98h]
  float v104; // [rsp+78h] [rbp-90h] BYREF
  float v105; // [rsp+7Ch] [rbp-8Ch]
  float v106; // [rsp+80h] [rbp-88h]
  float v107; // [rsp+88h] [rbp-80h]
  float v108; // [rsp+8Ch] [rbp-7Ch]
  float v109; // [rsp+90h] [rbp-78h]
  float v110; // [rsp+94h] [rbp-74h]
  float v111; // [rsp+98h] [rbp-70h]
  float v112[4]; // [rsp+A0h] [rbp-68h] BYREF
  float v113[4]; // [rsp+B0h] [rbp-58h] BYREF
  float v114[4]; // [rsp+C0h] [rbp-48h] BYREF
  float v115[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v116; // [rsp+E0h] [rbp-28h] BYREF
  float v117; // [rsp+1D8h] [rbp+D0h]
  float v118; // [rsp+1E0h] [rbp+D8h]

  v8 = 0;
  v9 = 5072LL * a4;
  *a3 = 65536.0;
  if ( dword_1901220C0[v9 / 4 + 576] <= 0 )
    return 0;
  v13 = a8;
  v14 = (int *)((char *)&unk_1901229D0 + v9);
  do
  {
    v15 = a6[3];
    v16 = *a6;
    v17 = v9 + 12LL * *(v14 - 1);
    v18 = *(float *)((char *)&unk_1901226C0 + v17);
    v19 = *(float *)((char *)&unk_1901226C0 + v17 + 4);
    v20 = *(float *)((char *)&unk_1901226C0 + v17 + 8);
    v21 = v9 + 12LL * *v14;
    v22 = a6[4] * v19;
    v23 = (float)(v15 * v19) + (float)(*a6 * v18);
    v24 = a6[5] * v19;
    v25 = *(float *)((char *)&unk_1901226C0 + v21 + 4);
    v26 = a6[1];
    v27 = *(float *)((char *)&unk_1901226C0 + v21) * v26;
    v28 = v23 + (float)(a6[6] * v20);
    v29 = v22 + (float)(v26 * v18);
    v30 = a6[2] * v18;
    v31 = *(float *)((char *)&unk_1901226C0 + v21 + 8);
    v32 = v29 + (float)(a6[7] * v20);
    v33 = a6[8] * v20;
    v34 = *(float *)((char *)&unk_1901226C0 + v21);
    v35 = v34 * a6[2];
    v36 = v9 + 12LL * v14[1];
    v37 = *(float *)((char *)&unk_1901226C0 + v36);
    v118 = (float)(v24 + v30) + v33;
    v38 = v25 * a6[4];
    v39 = (float)((float)(v34 * *a6) + (float)(v25 * v15)) + (float)(v31 * a6[6]);
    v40 = v35 + (float)(v25 * a6[5]);
    v41 = *(float *)((char *)&unk_1901226C0 + v36 + 4);
    v42 = (float)(v27 + v38) + (float)(v31 * a6[7]);
    v117 = v39;
    v43 = v40 + (float)(v31 * a6[8]);
    v44 = *(float *)((char *)&unk_1901226C0 + v36 + 8);
    v107 = v42;
    v108 = v43;
    v45 = v39 - v28;
    v46 = v41 * a6[4];
    v47 = (float)((float)(v37 * v16) + (float)(v41 * v15)) + (float)(v44 * a6[6]);
    v48 = v37 * a6[1];
    v49 = v44 * a6[7];
    v50 = v44 * a6[8];
    v51 = (float)(v37 * a6[2]) + (float)(v41 * a6[5]);
    v109 = v47;
    v52 = v47 - v28;
    v53 = v51 + v50;
    v54 = v42 - v32;
    v110 = (float)(v48 + v46) + v49;
    v111 = v53;
    v55 = (float)((float)(v110 - v32) * (float)(v43 - v118)) - (float)((float)(v53 - v118) * (float)(v42 - v32));
    v56 = (float)((float)(v53 - v118) * v45) - (float)(v52 * (float)(v43 - v118));
    v57 = (float)(v52 * v54) - (float)((float)(v110 - v32) * v45);
    v58 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57));
    if ( v58 == 0.0 )
    {
      v95 = 0.0;
      v59 = 0.0;
      v96 = 0.0;
      v60 = 0.0;
      v61 = 0.0;
    }
    else
    {
      v59 = (float)(1.0 / v58) * v55;
      v60 = (float)(1.0 / v58) * v56;
      v95 = v59;
      v61 = (float)(1.0 / v58) * v57;
      v96 = v60;
    }
    v62 = *(v14 - 2) == 4;
    v97 = v61;
    v63 = *a5;
    v64 = a5[1];
    v65 = a5[2];
    v66 = *a5 + v28;
    v114[0] = *a5 + v117;
    v67 = v64 + v32;
    v68 = v65 + v118;
    v114[1] = v64 + v107;
    v113[0] = v66;
    v114[2] = v65 + v108;
    v113[1] = v67;
    v112[0] = v63 + v109;
    v113[2] = v65 + v118;
    v112[1] = v64 + v110;
    v112[2] = v65 + v111;
    if ( v62 )
    {
      v69 = v9 + 12LL * v14[2];
      v70 = *(float *)((char *)&unk_1901226C0 + v69);
      v71 = (float)((float)(v70 * *a6) + (float)(*(float *)((char *)&unk_1901226C0 + v69 + 4) * a6[3]))
          + (float)((float)(*(float *)((char *)&unk_1901226C0 + v69 + 8) * a6[6]) + v63);
      v72 = *(float *)((char *)&unk_1901226C0 + v69 + 4);
      v73 = v72 * a6[5];
      v74 = (float)(*(float *)((char *)&unk_1901226C0 + v69 + 8) * a6[8]) + (float)(v70 * a6[2]);
      v75 = v72 * a6[4];
      v76 = (float)(*(float *)((char *)&unk_1901226C0 + v69 + 8) * a6[7]) + (float)(v70 * a6[1]);
      v115[0] = v71;
      v77 = v74 + (float)(v73 + v65);
      v13 = a8;
      v115[2] = v77;
      v115[1] = v76 + (float)(v75 + v64);
    }
    v78 = a7[1];
    v79 = *a7;
    v80 = a7[2];
    v81 = *a7 - v66;
    v102 = v78 - v67;
    v101 = v81;
    v103 = v80 - v68;
    v82 = (float)((float)(v60 * (float)(v78 - v67)) + (float)(v59 * v81)) + (float)(v61 * (float)(v80 - v68));
    if ( v82 <= v13 && v82 >= 0.0 )
    {
      v101 = (float)(v59 * (float)-v13) + v79;
      v102 = (float)(v60 * (float)-v13) + v78;
      v103 = (float)(v61 * (float)-v13) + v80;
      if ( sub_140048690(&v98, &v95, (float *)&v116, a7, &v101, v113, v114, v112) )
      {
        v83 = v99;
        v84 = v100;
        v85 = fsqrt(
                (float)((float)((float)(v98 - *a7) * (float)(v98 - *a7))
                      + (float)((float)(v99 - a7[1]) * (float)(v99 - a7[1])))
              + (float)((float)(v100 - a7[2]) * (float)(v100 - a7[2])));
        if ( v85 < *a3 )
        {
          *a1 = v98;
          a1[1] = v83;
          a1[2] = v84;
          *a2 = v59;
          a2[1] = v60;
          a2[2] = v61;
          *a3 = v85;
        }
      }
      v13 = a8;
    }
    if ( *(v14 - 2) == 4 )
    {
      v86 = a7[1];
      v87 = *a7;
      v88 = *a7 - v66;
      v89 = a7[2];
      v105 = v86 - v67;
      v104 = v88;
      v106 = v89 - v68;
      v90 = (float)((float)(v60 * (float)(v86 - v67)) + (float)(v59 * v88)) + (float)(v61 * (float)(v89 - v68));
      if ( v90 <= v13 && v90 >= 0.0 )
      {
        v104 = (float)(v59 * (float)-v13) + v87;
        v105 = (float)(v60 * (float)-v13) + v86;
        v106 = (float)(v61 * (float)-v13) + v89;
        if ( sub_140048690(&v98, &v95, (float *)&v116 + 1, a7, &v104, v113, v112, v115) )
        {
          v91 = v99;
          v92 = v100;
          v93 = fsqrt(
                  (float)((float)((float)(v98 - *a7) * (float)(v98 - *a7))
                        + (float)((float)(v99 - a7[1]) * (float)(v99 - a7[1])))
                + (float)((float)(v100 - a7[2]) * (float)(v100 - a7[2])));
          if ( v93 < *a3 )
          {
            *a1 = v98;
            a1[1] = v91;
            a1[2] = v92;
            *a2 = v59;
            a2[1] = v60;
            a2[2] = v61;
            *a3 = v93;
          }
        }
      }
    }
    v13 = a8;
    ++v8;
    v14 += 6;
  }
  while ( v8 < dword_1901220C0[v9 / 4 + 576] );
  return *a3 < 65536.0;
}

