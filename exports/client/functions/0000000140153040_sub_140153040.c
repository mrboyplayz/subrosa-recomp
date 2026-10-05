/* Address: 0x140153040 | Name: sub_140153040 | Size: 2060 bytes */
_BOOL8 __fastcall sub_140153040(__int64 a1, __int64 a2, float *a3, float *a4, float *a5, float a6)
{
  int v6; // r14d
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  float v14; // xmm12_4
  float v15; // xmm15_4
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  __int64 v20; // rax
  float v21; // xmm14_4
  float v22; // xmm13_4
  float v23; // xmm8_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  float v26; // xmm13_4
  float v27; // xmm14_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm14_4
  __int64 v31; // rax
  float v32; // xmm8_4
  float v33; // xmm6_4
  float v34; // xmm4_4
  float v35; // xmm7_4
  float v36; // xmm1_4
  float v37; // xmm5_4
  float v38; // xmm6_4
  float v39; // xmm2_4
  float v40; // xmm5_4
  float v41; // xmm3_4
  float v42; // xmm6_4
  float v43; // xmm1_4
  float v44; // xmm9_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm12_4
  float v48; // xmm1_4
  float v49; // xmm3_4
  float v50; // xmm7_4
  float v51; // xmm7_4
  float v52; // xmm3_4
  float v53; // xmm6_4
  float v54; // xmm3_4
  float v55; // xmm9_4
  float v56; // xmm5_4
  float v57; // xmm6_4
  float v58; // xmm0_4
  float v59; // xmm8_4
  float v60; // xmm9_4
  float v61; // xmm7_4
  bool v62; // zf
  float v63; // xmm3_4
  float v64; // xmm15_4
  float v65; // xmm0_4
  float v66; // xmm2_4
  float v67; // xmm12_4
  float v68; // xmm12_4
  float v69; // xmm13_4
  float v70; // xmm14_4
  __int64 v71; // rax
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // xmm6_4
  float v75; // xmm5_4
  float v76; // xmm3_4
  float v77; // xmm1_4
  float v78; // xmm6_4
  float v79; // xmm5_4
  float v80; // xmm4_4
  float v81; // xmm6_4
  float v82; // xmm1_4
  float v83; // xmm3_4
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm0_4
  float v87; // xmm4_4
  float v88; // xmm5_4
  float v89; // xmm6_4
  float v90; // xmm3_4
  float v91; // xmm3_4
  float v92; // xmm4_4
  float v93; // xmm5_4
  float v94; // xmm0_4
  float v96; // [rsp+48h] [rbp-C0h] BYREF
  float v97; // [rsp+4Ch] [rbp-BCh]
  float v98; // [rsp+50h] [rbp-B8h]
  float v99; // [rsp+58h] [rbp-B0h] BYREF
  float v100; // [rsp+5Ch] [rbp-ACh]
  float v101; // [rsp+60h] [rbp-A8h]
  float v102; // [rsp+68h] [rbp-A0h] BYREF
  float v103; // [rsp+6Ch] [rbp-9Ch]
  float v104; // [rsp+70h] [rbp-98h]
  float v105; // [rsp+78h] [rbp-90h] BYREF
  float v106; // [rsp+7Ch] [rbp-8Ch]
  float v107; // [rsp+80h] [rbp-88h]
  float v108; // [rsp+88h] [rbp-80h]
  float v109; // [rsp+8Ch] [rbp-7Ch]
  float v110; // [rsp+90h] [rbp-78h]
  float v111; // [rsp+94h] [rbp-74h]
  float v112; // [rsp+98h] [rbp-70h]
  float v113[4]; // [rsp+A0h] [rbp-68h] BYREF
  float v114[4]; // [rsp+B0h] [rbp-58h] BYREF
  float v115[4]; // [rsp+C0h] [rbp-48h] BYREF
  float v116[4]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v117; // [rsp+E0h] [rbp-28h] BYREF
  float v118; // [rsp+1C8h] [rbp+C0h]
  float v119; // [rsp+1D0h] [rbp+C8h]

  v6 = 0;
  *(_DWORD *)(a1 + 28) = 0;
  if ( *(int *)(a2 + 48) <= 0 )
    return 0;
  v11 = 0;
  do
  {
    v12 = *(_QWORD *)(a2 + 8);
    v13 = *(_QWORD *)(a2 + 56);
    v14 = a4[3];
    v15 = *a4;
    v16 = 3 * *(_DWORD *)(v11 + v13 + 8);
    v17 = *(float *)(v12 + 4 * v16);
    v18 = *(float *)(v12 + 4 * v16 + 4);
    v19 = *(float *)(v12 + 4 * v16 + 8);
    v20 = 3 * *(_DWORD *)(v11 + v13 + 12);
    v21 = a4[4] * v18;
    v22 = (float)(v14 * v18) + (float)(*a4 * v17);
    v23 = a4[5] * v18;
    v24 = *(float *)(v12 + 4 * v20 + 4);
    v25 = *(float *)(v12 + 4 * v20);
    v26 = v22 + (float)(a4[6] * v19);
    v27 = v21 + (float)(a4[1] * v17);
    v28 = a4[2] * v17;
    v29 = *(float *)(v12 + 4 * v20 + 8);
    v30 = v27 + (float)(a4[7] * v19);
    v31 = 3 * *(_DWORD *)(v11 + v13 + 16);
    v32 = (float)(v23 + v28) + (float)(a4[8] * v19);
    v33 = v25;
    v34 = (float)((float)(v25 * *a4) + (float)(v24 * v14)) + (float)(v29 * a4[6]);
    v35 = *(float *)(v12 + 4 * v31);
    v36 = v29 * a4[7];
    v37 = (float)(v25 * a4[2]) + (float)(v24 * a4[5]);
    v38 = (float)(v33 * a4[1]) + (float)(v24 * a4[4]);
    v39 = *(float *)(v12 + 4 * v31 + 4);
    v40 = v37 + (float)(v29 * a4[8]);
    v41 = *(float *)(v12 + 4 * v31 + 8);
    v42 = v38 + v36;
    v118 = v32;
    v43 = v41 * a4[6];
    v119 = v34;
    v108 = v42;
    v109 = v40;
    v44 = (float)((float)(v35 * v15) + (float)(v39 * v14)) + v43;
    v45 = v39 * a4[4];
    v46 = v34 - v26;
    v47 = v35 * a4[1];
    v48 = v41 * a4[7];
    v49 = v41 * a4[8];
    v50 = (float)(v35 * a4[2]) + (float)(v39 * a4[5]);
    v110 = v44;
    v51 = v50 + v49;
    v52 = v42;
    v111 = (float)(v47 + v45) + v48;
    v53 = v44 - v26;
    v54 = v52 - v30;
    v112 = v51;
    v55 = (float)((float)(v111 - v30) * (float)(v40 - v32)) - (float)((float)(v51 - v32) * v54);
    v56 = (float)((float)(v51 - v32) * v46) - (float)(v53 * (float)(v40 - v32));
    v57 = (float)(v53 * v54) - (float)((float)(v111 - v30) * v46);
    v58 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57));
    if ( v58 == 0.0 )
    {
      v96 = 0.0;
      v59 = 0.0;
      v97 = 0.0;
      v60 = 0.0;
      v61 = 0.0;
    }
    else
    {
      v59 = (float)(1.0 / v58) * v55;
      v60 = (float)(1.0 / v58) * v56;
      v96 = v59;
      v61 = (float)(1.0 / v58) * v57;
      v97 = v60;
    }
    v62 = *(_DWORD *)(v11 + v13 + 4) == 4;
    v63 = *a3;
    v64 = a3[1];
    v65 = *a3 + v119;
    v66 = a3[2];
    v67 = *a3;
    v98 = v61;
    v68 = v67 + v26;
    v115[0] = v65;
    v69 = v64 + v30;
    v70 = v66 + v118;
    v115[1] = v64 + v108;
    v114[0] = v68;
    v115[2] = v66 + v109;
    v114[1] = v69;
    v113[0] = v63 + v110;
    v114[2] = v66 + v118;
    v113[1] = v64 + v111;
    v113[2] = v66 + v112;
    if ( v62 )
    {
      v71 = 3 * *(_DWORD *)(v11 + v13 + 20);
      v72 = *(float *)(v12 + 4 * v71);
      v73 = (float)((float)(v72 * *a4) + (float)(*(float *)(v12 + 4 * v71 + 4) * a4[3]))
          + (float)((float)(*(float *)(v12 + 4 * v71 + 8) * a4[6]) + v63);
      v74 = (float)(*(float *)(v12 + 4 * v71 + 8) * a4[8]) + (float)(v72 * a4[2]);
      v75 = *(float *)(v12 + 4 * v71 + 4) * a4[5];
      v76 = (float)(*(float *)(v12 + 4 * v71 + 8) * a4[7]) + (float)(v72 * a4[1]);
      v77 = (float)(*(float *)(v12 + 4 * v71 + 4) * a4[4]) + v64;
      v116[0] = v73;
      v78 = v74 + (float)(v75 + a3[2]);
      v116[1] = v76 + v77;
      v116[2] = v78;
    }
    v79 = a5[1];
    v80 = *a5;
    v81 = a5[2];
    v82 = *a5 - v68;
    v103 = v79 - v69;
    v102 = v82;
    v104 = v81 - v70;
    v83 = (float)((float)(v60 * (float)(v79 - v69)) + (float)(v59 * v82)) + (float)(v61 * (float)(v81 - v70));
    if ( v83 <= a6 && v83 >= 0.0 )
    {
      v102 = (float)(v59 * (float)-a6) + v80;
      v103 = (float)(v60 * (float)-a6) + v79;
      v104 = (float)(v61 * (float)-a6) + v81;
      if ( sub_140077FA0(&v99, &v96, (float *)&v117, a5, &v102, v114, v115, v113) )
      {
        v84 = v100;
        v85 = v101;
        v86 = fsqrt(
                (float)((float)((float)(v100 - a5[1]) * (float)(v100 - a5[1]))
                      + (float)((float)(v99 - *a5) * (float)(v99 - *a5)))
              + (float)((float)(v101 - a5[2]) * (float)(v101 - a5[2])));
        if ( (float)(a6 - v86) > *(float *)(a1 + 28) )
        {
          *(float *)a1 = v99;
          *(float *)(a1 + 4) = v84;
          *(float *)(a1 + 8) = v85;
          *(float *)(a1 + 12) = v59;
          *(float *)(a1 + 16) = v60;
          *(float *)(a1 + 20) = v61;
          *(float *)(a1 + 28) = a6 - v86;
        }
      }
    }
    if ( *(_DWORD *)(v11 + *(_QWORD *)(a2 + 56) + 4) == 4 )
    {
      v87 = *a5;
      v88 = a5[1];
      v89 = a5[2];
      v90 = v59 * (float)(*a5 - v68);
      v105 = *a5 - v68;
      v106 = v88 - v69;
      v107 = v89 - v70;
      v91 = (float)(v90 + (float)(v60 * (float)(v88 - v69))) + (float)(v61 * (float)(v89 - v70));
      if ( v91 <= a6 && v91 >= 0.0 )
      {
        v105 = (float)(v59 * (float)-a6) + v87;
        v106 = (float)(v60 * (float)-a6) + v88;
        v107 = (float)(v61 * (float)-a6) + v89;
        if ( sub_140077FA0(&v99, &v96, (float *)&v117 + 1, a5, &v105, v114, v113, v116) )
        {
          v92 = v100;
          v93 = v101;
          v94 = fsqrt(
                  (float)((float)((float)(v100 - a5[1]) * (float)(v100 - a5[1]))
                        + (float)((float)(v99 - *a5) * (float)(v99 - *a5)))
                + (float)((float)(v101 - a5[2]) * (float)(v101 - a5[2])));
          if ( (float)(a6 - v94) > *(float *)(a1 + 28) )
          {
            *(float *)a1 = v99;
            *(float *)(a1 + 4) = v92;
            *(float *)(a1 + 8) = v93;
            *(float *)(a1 + 12) = v59;
            *(float *)(a1 + 16) = v60;
            *(float *)(a1 + 20) = v61;
            *(float *)(a1 + 28) = a6 - v94;
          }
        }
      }
    }
    ++v6;
    v11 += 36;
  }
  while ( v6 < *(_DWORD *)(a2 + 48) );
  return *(float *)(a1 + 28) > 0.0;
}

