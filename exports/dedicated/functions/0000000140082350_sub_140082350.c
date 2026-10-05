/* Address: 0x140082350 | Name: sub_140082350 | Size: 1401 bytes */
__int64 __fastcall sub_140082350(float *a1, float *a2, float *a3, int a4, float *a5, float *a6, float *a7, float *a8)
{
  int v8; // ebx
  __int64 v9; // r13
  __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  float v20; // xmm12_4
  float v21; // xmm9_4
  float v22; // xmm13_4
  float v23; // xmm10_4
  float v24; // xmm6_4
  float v25; // xmm11_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm5_4
  float v29; // xmm15_4
  __int64 v30; // rax
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm15_4
  __int64 v34; // rax
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm15_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm15_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm12_4
  float v44; // xmm13_4
  float v45; // xmm9_4
  float v46; // xmm8_4
  float v47; // xmm6_4
  float v48; // xmm7_4
  float v49; // xmm3_4
  float v50; // xmm8_4
  float v51; // xmm6_4
  float v52; // xmm7_4
  float v53; // xmm1_4
  float v54; // xmm5_4
  float v55; // xmm0_4
  float v56; // xmm13_4
  float v57; // xmm3_4
  float v58; // xmm2_4
  float v59; // xmm1_4
  float v61[4]; // [rsp+40h] [rbp-C0h] BYREF
  float v62; // [rsp+50h] [rbp-B0h]
  float v63; // [rsp+54h] [rbp-ACh]
  float v64; // [rsp+58h] [rbp-A8h]
  float v65; // [rsp+5Ch] [rbp-A4h]
  float v66; // [rsp+60h] [rbp-A0h] BYREF
  float v67[4]; // [rsp+68h] [rbp-98h] BYREF
  float v68[4]; // [rsp+78h] [rbp-88h] BYREF
  float v69[4]; // [rsp+88h] [rbp-78h] BYREF
  float v70[6]; // [rsp+98h] [rbp-68h] BYREF
  float v71; // [rsp+1A0h] [rbp+A0h]
  float v72; // [rsp+1A8h] [rbp+A8h]
  float v73; // [rsp+1A8h] [rbp+A8h]

  v8 = 0;
  v9 = 200LL * a4;
  *a3 = 1.0;
  if ( *(int *)((char *)&unk_18E9B8960 + v9 + 152) <= 0 )
    return 0;
  v13 = 0;
  do
  {
    v14 = *(_QWORD *)((char *)&unk_18E9B8960 + v9 + 136);
    v15 = *(_QWORD *)((char *)&unk_18E9B8960 + v9 + 160);
    v16 = 3 * *(_DWORD *)(v13 + v15);
    v17 = *(float *)(v14 + 4 * v16);
    v18 = *(float *)(v14 + 4 * v16 + 4);
    v19 = *(float *)(v14 + 4 * v16 + 8);
    v20 = a6[3];
    v21 = *a6;
    v22 = a6[6];
    v23 = a6[4];
    v24 = a6[1];
    v25 = a6[7];
    v26 = a6[5];
    v27 = a6[8];
    v62 = (float)((float)(v20 * v18) + (float)(*a6 * v17)) + (float)(v22 * v19);
    v63 = (float)((float)(v23 * v18) + (float)(v24 * v17)) + (float)(v25 * v19);
    v28 = a6[2];
    v29 = (float)(v26 * v18) + (float)(v28 * v17);
    v30 = 3 * *(_DWORD *)(v13 + v15 + 4);
    v31 = *(float *)(v14 + 4 * v30 + 4);
    v32 = *(float *)(v14 + 4 * v30 + 8);
    v64 = v29 + (float)(v27 * v19);
    v33 = *(float *)(v14 + 4 * v30);
    v34 = 3 * *(_DWORD *)(v13 + v15 + 8);
    v35 = v31;
    v36 = v33 * v24;
    v65 = (float)((float)(v33 * v21) + (float)(v31 * v20)) + (float)(v32 * v22);
    v37 = (float)(v33 * v28) + (float)(v31 * v26);
    v38 = *(float *)(v14 + 4 * v34 + 4);
    v72 = v36 + (float)(v35 * v23);
    v39 = v32;
    v40 = v37 + (float)(v32 * v27);
    v41 = *(float *)(v14 + 4 * v34 + 8);
    v73 = v72 + (float)(v39 * v25);
    v42 = v38 * v20;
    v43 = *(float *)(v14 + 4 * v34);
    v44 = (float)((float)(v43 * v21) + v42) + (float)(v41 * v22);
    v45 = (float)((float)(v43 * v28) + (float)(v38 * v26)) + (float)(v41 * v27);
    v71 = (float)((float)(v43 * v24) + (float)(v38 * v23)) + (float)(v41 * v25);
    v46 = (float)((float)(v71 - v63) * (float)(v40 - v64)) - (float)((float)(v45 - v64) * (float)(v73 - v63));
    v47 = (float)((float)(v45 - v64) * (float)(v65 - v62)) - (float)((float)(v44 - v62) * (float)(v40 - v64));
    v48 = (float)((float)(v44 - v62) * (float)(v73 - v63)) - (float)((float)(v71 - v63) * (float)(v65 - v62));
    v49 = fsqrt((float)((float)(v47 * v47) + (float)(v46 * v46)) + (float)(v48 * v48));
    if ( v49 == 0.0 )
    {
      v61[0] = 0.0;
      v50 = 0.0;
      v51 = 0.0;
      v52 = 0.0;
    }
    else
    {
      v50 = v46 * (float)(1.0 / v49);
      v51 = v47 * (float)(1.0 / v49);
      v61[0] = v50;
      v52 = v48 * (float)(1.0 / v49);
    }
    v53 = a5[1];
    v54 = v62 + *a5;
    v55 = a5[2];
    v56 = v44 + *a5;
    v57 = v65 + *a5;
    v61[2] = v52;
    v61[1] = v51;
    v69[0] = v54;
    v67[1] = v71 + v53;
    v69[1] = v63 + v53;
    v69[2] = v64 + v55;
    v68[0] = v57;
    v68[1] = v73 + v53;
    v68[2] = v40 + v55;
    v67[0] = v56;
    v67[2] = v45 + v55;
    if ( sub_140048690(v70, v61, &v66, a7, a8, v69, v68, v67) )
    {
      v58 = v66;
      if ( v66 < *a3 )
      {
        v59 = v70[1];
        *a1 = v70[0];
        a1[2] = v70[2];
        a1[1] = v59;
        *a2 = v50;
        a2[1] = v51;
        a2[2] = v52;
        *a3 = v58;
      }
    }
    ++v8;
    v13 += 12;
  }
  while ( v8 < *(_DWORD *)((char *)&unk_18E9B8960 + v9 + 152) );
  if ( *a3 >= 1.0 )
    return 0;
  qword_16E18CA60 = 0;
  dword_16E18CA68 = 0;
  return 1;
}

