/* Address: 0x1400caa90 | Name: sub_1400CAA90 | Size: 2097 bytes */
__int64 __fastcall sub_1400CAA90(int a1, int a2, float a3)
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
  unsigned int v60; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v61; // [rsp+54h] [rbp-ACh]
  unsigned int v62; // [rsp+58h] [rbp-A8h]
  float v63; // [rsp+60h] [rbp-A0h]
  float v64; // [rsp+64h] [rbp-9Ch]
  float v65; // [rsp+68h] [rbp-98h]
  float v66; // [rsp+6Ch] [rbp-94h]
  float v67; // [rsp+70h] [rbp-90h] BYREF
  float v68; // [rsp+74h] [rbp-8Ch]
  float v69; // [rsp+78h] [rbp-88h]
  _DWORD v70[2]; // [rsp+80h] [rbp-80h] BYREF
  float v71; // [rsp+88h] [rbp-78h]
  float v72; // [rsp+90h] [rbp-70h] BYREF
  float v73; // [rsp+94h] [rbp-6Ch]
  float v74; // [rsp+98h] [rbp-68h]
  float v75[2]; // [rsp+A0h] [rbp-60h] BYREF
  float v76; // [rsp+A8h] [rbp-58h]
  int v77; // [rsp+B0h] [rbp-50h]
  int v78; // [rsp+B8h] [rbp-48h]
  int v79; // [rsp+C0h] [rbp-40h]
  int v80; // [rsp+C8h] [rbp-38h]
  int v81; // [rsp+D0h] [rbp-30h]
  int v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+E0h] [rbp-20h]
  float v85; // [rsp+1A8h] [rbp+A8h] BYREF

  v3 = dword_1402B3664;
  v4 = 0;
  v6 = 0;
  v7 = 1760LL * a1;
  dword_140404A6C[73006988] = 1199570944;
  v8 = 1268LL * (int)dword_140404A6C[v7 + 278845898];
  do
  {
    v9 = *(float *)&dword_140404A6C[v8 + 278521350];
    v10 = *(float *)&dword_140404A6C[v8 + 278521351];
    v11 = *(float *)&dword_140404A6C[v7 + 278845934];
    v12 = *(float *)&dword_140404A6C[v7 + 278845937];
    v13 = *(float *)&dword_140404A6C[v8 + 278521352];
    v14 = *(float *)&dword_140404A6C[v7 + 278845940];
    v15 = *(float *)&dword_140404A6C[v7 + 278845938];
    v16 = *(float *)&dword_140404A6C[v7 + 278845941];
    v17 = *(float *)&dword_140404A6C[v7 + 278845942];
    v18 = 3LL * *v3;
    v19 = (float)((float)((float)(*(float *)&dword_1402B34F0[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_1402B34F0[3 * *(v3 - 1)])
                - 0.5)
        * v9;
    v20 = (float)((float)((float)(*(float *)&dword_1402B34F4[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_1402B34F4[3 * *(v3 - 1)])
                - 0.5)
        * v10;
    v21 = (float)((float)((float)(*(float *)&dword_1402B34F8[3 * *(v3 - 1)] - 0.5)
                        + *(float *)&dword_1402B34F8[3 * *(v3 - 1)])
                - 0.5)
        * v13;
    v63 = (float)((float)((float)(v11 * v19) + *(float *)&dword_140404A6C[v7 + 278845916]) + (float)(v12 * v20))
        + (float)(v14 * v21);
    *(float *)v70 = v63;
    v22 = *(float *)&dword_140404A6C[v7 + 278845939] * v20;
    v64 = (float)((float)((float)(*(float *)&dword_140404A6C[v7 + 278845935] * v19)
                        + *(float *)&dword_140404A6C[v7 + 278845917])
                + (float)(v15 * v20))
        + (float)(v16 * v21);
    *(float *)&v70[1] = v64;
    v23 = (float)((float)(*(float *)&dword_140404A6C[v7 + 278845936] * v19) + *(float *)&dword_140404A6C[v7 + 278845918])
        + v22;
    v24 = (float)(*(float *)&dword_1402B34F0[v18] - 0.5) + *(float *)&dword_1402B34F0[v18];
    v25 = *(float *)&dword_1402B34F4[v18];
    v65 = v23 + (float)(v17 * v21);
    v71 = v65;
    v26 = (float)(v24 - 0.5) * v9;
    v27 = (float)((float)((float)(v25 - 0.5) + v25) - 0.5) * v10;
    v28 = (float)((float)(*(float *)&dword_1402B34F8[v18] - 0.5) + *(float *)&dword_1402B34F8[v18]) - 0.5;
    v29 = *(float *)&dword_140404A6C[v7 + 278845916];
    v30 = v11;
    v31 = 3LL * v3[1];
    v32 = v28 * v13;
    v33 = (float)((float)(*(float *)&dword_140404A6C[v7 + 278845935] * v26) + *(float *)&dword_140404A6C[v7 + 278845917])
        + (float)(v15 * v27);
    v34 = (float)(*(float *)&dword_140404A6C[v7 + 278845936] * v26) + *(float *)&dword_140404A6C[v7 + 278845918];
    v35 = *(float *)&dword_140404A6C[v7 + 278845939] * v27;
    v72 = (float)((float)((float)(v30 * v26) + v29) + (float)(v12 * v27)) + (float)(v14 * v32);
    v36 = v34 + v35;
    v37 = *(float *)&dword_1402B34F0[v31];
    v73 = v33 + (float)(v16 * v32);
    v74 = v36 + (float)(v17 * v32);
    v38 = (float)((float)((float)(v37 - 0.5) + v37) - 0.5) * v9;
    v39 = (float)((float)((float)(*(float *)&dword_1402B34F4[v31] - 0.5) + *(float *)&dword_1402B34F4[v31]) - 0.5) * v10;
    v40 = (float)(*(float *)&dword_140404A6C[v7 + 278845934] * v38) + v29;
    v41 = (float)((float)((float)(*(float *)&dword_1402B34F8[v31] - 0.5) + *(float *)&dword_1402B34F8[v31]) - 0.5) * v13;
    v42 = (float)(*(float *)&dword_140404A6C[v7 + 278845935] * v38) + *(float *)&dword_140404A6C[v7 + 278845917];
    v67 = (float)(v40 + (float)(v12 * v39)) + (float)(v41 * v14);
    v43 = *(float *)&dword_140404A6C[v7 + 278845939] * v39;
    v44 = (float)(*(float *)&dword_140404A6C[v7 + 278845936] * v38) + *(float *)&dword_140404A6C[v7 + 278845918];
    v68 = (float)(v42 + (float)(*(float *)&dword_140404A6C[v7 + 278845938] * v39)) + (float)(v41 * v16);
    v45 = v3[2];
    v46 = v44 + v43;
    v47 = *(float *)&dword_1402B34F0[3 * v45];
    v66 = v46 + (float)(v41 * v17);
    v69 = v66;
    v48 = (float)((float)((float)(v47 - 0.5) + v47) - 0.5) * v9;
    v49 = (float)(v48 * *(float *)&dword_140404A6C[v7 + 278845934]) + *(float *)&dword_140404A6C[v7 + 278845916];
    v50 = (float)((float)(v48 * *(float *)&dword_140404A6C[v7 + 278845935]) + *(float *)&dword_140404A6C[v7 + 278845917])
        + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * v45] - 0.5)
                                        + *(float *)&dword_1402B34F4[3 * v45])
                                - 0.5)
                        * v10)
                * *(float *)&dword_140404A6C[v7 + 278845938]);
    v51 = (float)((float)((float)(*(float *)&dword_1402B34F8[3 * v45] - 0.5) + *(float *)&dword_1402B34F8[3 * v45]) - 0.5)
        * v13;
    v52 = (float)((float)((float)(v48 * *(float *)&dword_140404A6C[v7 + 278845936])
                        + *(float *)&dword_140404A6C[v7 + 278845918])
                + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * v45] - 0.5)
                                                + *(float *)&dword_1402B34F4[3 * v45])
                                        - 0.5)
                                * v10)
                        * *(float *)&dword_140404A6C[v7 + 278845939]))
        + (float)(v51 * v17);
    v75[0] = (float)(v49
                   + (float)((float)((float)((float)((float)(*(float *)&dword_1402B34F4[3 * v45] - 0.5)
                                                   + *(float *)&dword_1402B34F4[3 * v45])
                                           - 0.5)
                                   * v10)
                           * *(float *)&dword_140404A6C[v7 + 278845937]))
           + (float)(v51 * v14);
    v76 = v52;
    v75[1] = v50 + (float)(v51 * v16);
    v53 = (float)((float)(v68 - v64) * (float)(v74 - v65)) - (float)((float)(v66 - v65) * (float)(v73 - v64));
    v54 = (float)((float)(v66 - v65) * (float)(v72 - v63)) - (float)((float)(v67 - v63) * (float)(v74 - v65));
    v55 = (float)((float)(v67 - v63) * (float)(v73 - v64)) - (float)((float)(v68 - v64) * (float)(v72 - v63));
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
    if ( (unsigned int)sub_140158760(
                         (unsigned int)&v60,
                         (unsigned int)&v58,
                         (unsigned int)&v85,
                         a2,
                         LODWORD(a3),
                         (unsigned int)v70,
                         (unsigned int)&v72,
                         (unsigned int)&v67,
                         v58,
                         LODWORD(v59),
                         v60,
                         v62,
                         LODWORD(v63),
                         LODWORD(v65),
                         LODWORD(v67),
                         LODWORD(v69),
                         v70[0],
                         LODWORD(v71),
                         LODWORD(v72),
                         LODWORD(v74),
                         LODWORD(v75[0]),
                         LODWORD(v76),
                         v77,
                         v78,
                         v79,
                         v80,
                         v81,
                         v82,
                         v83)
      && *(float *)&dword_140404A6C[73006988] > v85 )
    {
      dword_140404A6C[73006981] = v60;
      dword_140404A6C[73006982] = v61;
      dword_140404A6C[73006983] = v62;
      *(_QWORD *)&dword_140404A6C[73006984] = v58;
      *(float *)&dword_140404A6C[73006986] = v59;
      *(float *)&dword_140404A6C[73006988] = v85;
      dword_140404A6C[73006993] = v6;
    }
    if ( (unsigned int)sub_140158760(
                         (unsigned int)&v60,
                         (unsigned int)&v58,
                         (unsigned int)&v85,
                         a2,
                         LODWORD(a3),
                         (unsigned int)v70,
                         (unsigned int)&v67,
                         (unsigned int)v75,
                         v58,
                         LODWORD(v59),
                         v60,
                         v62,
                         LODWORD(v63),
                         LODWORD(v65),
                         LODWORD(v67),
                         LODWORD(v69),
                         v70[0],
                         LODWORD(v71),
                         LODWORD(v72),
                         LODWORD(v74),
                         LODWORD(v75[0]),
                         LODWORD(v76),
                         v77,
                         v78,
                         v79,
                         v80,
                         v81,
                         v82,
                         v83)
      && *(float *)&dword_140404A6C[73006988] > v85 )
    {
      dword_140404A6C[73006981] = v60;
      dword_140404A6C[73006982] = v61;
      dword_140404A6C[73006983] = v62;
      *(_QWORD *)&dword_140404A6C[73006984] = v58;
      *(float *)&dword_140404A6C[73006986] = v59;
      *(float *)&dword_140404A6C[73006988] = v85;
      dword_140404A6C[73006993] = v6;
    }
    ++v6;
    v3 += 4;
  }
  while ( v6 < 6 );
  LOBYTE(v4) = *(float *)&dword_140404A6C[73006988] < 65536.0;
  return v4;
}

