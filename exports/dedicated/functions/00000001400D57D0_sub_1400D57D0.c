/* Address: 0x1400d57d0 | Name: sub_1400D57D0 | Size: 2278 bytes */
_BOOL8 __fastcall sub_1400D57D0(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float a8)
{
  float v13; // xmm7_4
  __int64 v14; // rax
  float v15; // xmm8_4
  float v16; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  int v20; // r12d
  __int64 v21; // rdx
  int *v22; // r14
  float v23; // xmm12_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  __int64 v27; // rax
  float v28; // xmm13_4
  float v29; // xmm14_4
  float v30; // xmm8_4
  float v31; // xmm6_4
  float v32; // xmm0_4
  float v33; // xmm7_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm12_4
  float v37; // xmm7_4
  float v38; // xmm9_4
  float v39; // xmm5_4
  float v40; // xmm6_4
  float v41; // xmm0_4
  float v42; // xmm8_4
  float v43; // xmm9_4
  float v44; // xmm7_4
  bool v45; // zf
  float v46; // xmm3_4
  float v47; // xmm15_4
  float v48; // xmm0_4
  float v49; // xmm2_4
  float v50; // xmm12_4
  float v51; // xmm12_4
  float v52; // xmm13_4
  float v53; // xmm14_4
  __int64 v54; // rax
  float v55; // xmm0_4
  float v56; // xmm2_4
  float v57; // xmm6_4
  float v58; // xmm5_4
  float v59; // xmm3_4
  float v60; // xmm1_4
  float v61; // xmm6_4
  float v62; // xmm5_4
  float v63; // xmm4_4
  float v64; // xmm6_4
  float v65; // xmm1_4
  float v66; // xmm3_4
  float v67; // xmm4_4
  float v68; // xmm5_4
  float v69; // xmm1_4
  float v70; // xmm3_4
  float v71; // xmm4_4
  float v72; // xmm5_4
  float v73; // xmm2_4
  float v74; // xmm4_4
  float v75; // xmm5_4
  float v76; // xmm1_4
  float v78; // [rsp+48h] [rbp-C0h] BYREF
  float v79; // [rsp+4Ch] [rbp-BCh]
  float v80; // [rsp+50h] [rbp-B8h]
  float v81; // [rsp+58h] [rbp-B0h] BYREF
  float v82; // [rsp+5Ch] [rbp-ACh]
  float v83; // [rsp+60h] [rbp-A8h]
  float v84; // [rsp+68h] [rbp-A0h] BYREF
  float v85; // [rsp+6Ch] [rbp-9Ch]
  float v86; // [rsp+70h] [rbp-98h]
  float v87; // [rsp+78h] [rbp-90h] BYREF
  float v88; // [rsp+7Ch] [rbp-8Ch]
  float v89; // [rsp+80h] [rbp-88h]
  float v90; // [rsp+88h] [rbp-80h]
  float v91; // [rsp+8Ch] [rbp-7Ch]
  float v92; // [rsp+90h] [rbp-78h]
  float v93[4]; // [rsp+98h] [rbp-70h] BYREF
  float v94[4]; // [rsp+A8h] [rbp-60h] BYREF
  float v95[4]; // [rsp+B8h] [rbp-50h] BYREF
  float v96[4]; // [rsp+C8h] [rbp-40h] BYREF
  float v97; // [rsp+D8h] [rbp-30h] BYREF
  float v98; // [rsp+DCh] [rbp-2Ch] BYREF
  __int64 v99; // [rsp+E0h] [rbp-28h]
  __int64 v100; // [rsp+E8h] [rbp-20h]
  float v101; // [rsp+1E0h] [rbp+D8h]
  float v102; // [rsp+1E8h] [rbp+E0h]
  float v103; // [rsp+1F8h] [rbp+F0h]
  float v104; // [rsp+200h] [rbp+F8h]

  v13 = *a7;
  v14 = 9240LL * a4;
  v15 = *a5;
  v16 = *a5;
  v18 = *a7 + a8;
  v99 = v14;
  v19 = *(float *)((char *)&unk_140585B60 + v14);
  if ( v18 < (float)(v16 - v19) )
    return 0;
  if ( (float)(a7[1] + a8) < (float)(a5[1] - v19) )
    return 0;
  if ( (float)(a7[2] + a8) < (float)(a5[2] - v19) )
    return 0;
  if ( (float)(v13 - a8) > (float)(v15 + v19) )
    return 0;
  if ( (float)(a7[1] - a8) > (float)(a5[1] + v19) )
    return 0;
  if ( (float)(a7[2] - a8) > (float)(a5[2] + v19) )
    return 0;
  v20 = 0;
  *a3 = 65536.0;
  if ( *(int *)((char *)&unk_140585B60 + v14 + 3080) <= 0 )
    return 0;
  v21 = 770LL * a4;
  v22 = (int *)((char *)&unk_140586774 + v14);
  v100 = v21;
  do
  {
    v23 = a6[3];
    v24 = *((float *)&unk_140585B60 + 3 * v21 + 3 * *(v22 - 1) + 2);
    v25 = *((float *)&unk_140585B60 + 3 * v21 + 3 * *(v22 - 1) + 3);
    v26 = *((float *)&unk_140585B60 + 3 * v21 + 3 * *(v22 - 1) + 4);
    v27 = v21 + v22[1];
    v28 = (float)((float)(v23 * v25) + (float)(*a6 * v24)) + (float)(a6[6] * v26);
    v29 = (float)((float)(a6[4] * v25) + (float)(a6[1] * v24)) + (float)(a6[7] * v26);
    v30 = (float)((float)(a6[5] * v25) + (float)(a6[2] * v24)) + (float)(a6[8] * v26);
    v31 = *((float *)&unk_140585B60 + 3 * v21 + 3 * *v22 + 2);
    v32 = *((float *)&unk_140585B60 + 3 * v21 + 3 * *v22 + 3);
    v33 = *((float *)&unk_140585B60 + 3 * v27 + 2);
    v34 = *((float *)&unk_140585B60 + 3 * v27 + 3);
    v35 = *((float *)&unk_140585B60 + 3 * v27 + 4);
    v104 = v30;
    v101 = (float)((float)(v31 * *a6) + (float)(v32 * v23))
         + (float)(*((float *)&unk_140585B60 + 3 * v21 + 3 * *v22 + 4) * a6[6]);
    v103 = (float)((float)(v31 * a6[1]) + (float)(v32 * a6[4]))
         + (float)(*((float *)&unk_140585B60 + 3 * v21 + 3 * *v22 + 4) * a6[7]);
    v102 = (float)((float)(v31 * a6[2]) + (float)(v32 * a6[5]))
         + (float)(*((float *)&unk_140585B60 + 3 * v21 + 3 * *v22 + 4) * a6[8]);
    v90 = (float)((float)(v33 * *a6) + (float)(v34 * v23)) + (float)(v35 * a6[6]);
    v36 = (float)((float)(v33 * a6[1]) + (float)(v34 * a6[4])) + (float)(v35 * a6[7]);
    v37 = (float)((float)(v33 * a6[2]) + (float)(v34 * a6[5])) + (float)(v35 * a6[8]);
    v91 = v36;
    v92 = v37;
    v38 = (float)((float)(v36 - v29) * (float)(v102 - v30)) - (float)((float)(v37 - v30) * (float)(v103 - v29));
    v39 = (float)((float)(v37 - v30) * (float)(v101 - v28)) - (float)((float)(v90 - v28) * (float)(v102 - v30));
    v40 = (float)((float)(v90 - v28) * (float)(v103 - v29)) - (float)((float)(v36 - v29) * (float)(v101 - v28));
    v41 = fsqrt((float)((float)(v39 * v39) + (float)(v38 * v38)) + (float)(v40 * v40));
    if ( v41 == 0.0 )
    {
      v78 = 0.0;
      v42 = 0.0;
      v79 = 0.0;
      v43 = 0.0;
      v44 = 0.0;
    }
    else
    {
      v42 = (float)(1.0 / v41) * v38;
      v43 = (float)(1.0 / v41) * v39;
      v78 = v42;
      v44 = (float)(1.0 / v41) * v40;
      v79 = v43;
    }
    v45 = *(v22 - 2) == 4;
    v46 = *a5;
    v47 = a5[1];
    v48 = *a5 + v101;
    v49 = a5[2];
    v50 = *a5;
    v80 = v44;
    v51 = v50 + v28;
    v95[0] = v48;
    v52 = v47 + v29;
    v53 = v49 + v104;
    v95[1] = v47 + v103;
    v94[0] = v51;
    v95[2] = v49 + v102;
    v94[1] = v52;
    v93[0] = v46 + v90;
    v94[2] = v49 + v104;
    v93[1] = v47 + v91;
    v93[2] = v49 + v92;
    if ( v45 )
    {
      v54 = v21 + v22[2];
      v55 = *((float *)&unk_140585B60 + 3 * v54 + 2);
      v56 = (float)((float)(v55 * *a6) + (float)(*((float *)&unk_140585B60 + 3 * v54 + 3) * a6[3]))
          + (float)((float)(*((float *)&unk_140585B60 + 3 * v54 + 4) * a6[6]) + v46);
      v57 = (float)(*((float *)&unk_140585B60 + 3 * v54 + 4) * a6[8]) + (float)(v55 * a6[2]);
      v58 = *((float *)&unk_140585B60 + 3 * v54 + 3) * a6[5];
      v59 = (float)(*((float *)&unk_140585B60 + 3 * v54 + 4) * a6[7]) + (float)(v55 * a6[1]);
      v60 = (float)(*((float *)&unk_140585B60 + 3 * v54 + 3) * a6[4]) + v47;
      v96[0] = v56;
      v61 = v57 + (float)(v58 + a5[2]);
      v96[1] = v59 + v60;
      v96[2] = v61;
    }
    v62 = a7[1];
    v63 = *a7;
    v64 = a7[2];
    v65 = *a7 - v51;
    v85 = v62 - v52;
    v84 = v65;
    v86 = v64 - v53;
    v66 = (float)((float)(v43 * (float)(v62 - v52)) + (float)(v42 * v65)) + (float)(v44 * (float)(v64 - v53));
    if ( v66 <= a8 && v66 >= 0.0 )
    {
      v84 = (float)(v42 * (float)-a8) + v63;
      v85 = (float)(v43 * (float)-a8) + v62;
      v86 = (float)(v44 * (float)-a8) + v64;
      if ( sub_140048690(&v81, &v78, &v97, a7, &v84, v94, v95, v93) )
      {
        v67 = v82;
        v68 = v83;
        v69 = fsqrt(
                (float)((float)((float)(v82 - a7[1]) * (float)(v82 - a7[1]))
                      + (float)((float)(v81 - *a7) * (float)(v81 - *a7)))
              + (float)((float)(v83 - a7[2]) * (float)(v83 - a7[2])));
        if ( v69 < *a3 )
        {
          *a1 = v81;
          a1[1] = v67;
          a1[2] = v68;
          *a2 = v42;
          a2[1] = v43;
          a2[2] = v44;
          *a3 = v69;
        }
      }
    }
    if ( *(v22 - 2) == 4 )
    {
      v70 = *a7;
      v71 = a7[1];
      v72 = a7[2];
      v87 = *a7 - v51;
      v88 = v71 - v52;
      v89 = v72 - v53;
      v73 = (float)((float)((float)(v71 - v52) * v43) + (float)(v87 * v42)) + (float)((float)(v72 - v53) * v44);
      if ( v73 <= a8 && v73 >= 0.0 )
      {
        v87 = (float)(v42 * (float)-a8) + v70;
        v88 = (float)(v43 * (float)-a8) + v71;
        v89 = (float)(v44 * (float)-a8) + v72;
        if ( sub_140048690(&v81, &v78, &v98, a7, &v87, v94, v93, v96) )
        {
          v74 = v82;
          v75 = v83;
          v76 = fsqrt(
                  (float)((float)((float)(v82 - a7[1]) * (float)(v82 - a7[1]))
                        + (float)((float)(v81 - *a7) * (float)(v81 - *a7)))
                + (float)((float)(v83 - a7[2]) * (float)(v83 - a7[2])));
          if ( v76 < *a3 )
          {
            *a1 = v81;
            a1[1] = v74;
            a1[2] = v75;
            *a2 = v42;
            a2[1] = v43;
            a2[2] = v44;
            *a3 = v76;
          }
        }
      }
    }
    ++v20;
    v21 = v100;
    v22 += 6;
  }
  while ( v20 < *(_DWORD *)((char *)&unk_140585B60 + v99 + 3080) );
  return *a3 < 65536.0;
}

