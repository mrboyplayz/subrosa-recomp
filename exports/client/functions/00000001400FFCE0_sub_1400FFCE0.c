/* Address: 0x1400ffce0 | Name: sub_1400FFCE0 | Size: 5428 bytes */
__int64 __fastcall sub_1400FFCE0(int a1, int a2)
{
  unsigned int *v2; // rdi
  int v3; // esi
  float v4; // xmm6_4
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  float v14; // xmm8_4
  unsigned int v15; // xmm7_4
  float v16; // xmm9_4
  unsigned __int64 v17; // xmm0_8
  unsigned int v18; // xmm2_4
  unsigned int v19; // xmm3_4
  float v20; // xmm6_4
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  unsigned int v24; // ebx
  unsigned __int64 v25; // xmm0_8
  unsigned int v26; // xmm2_4
  unsigned int v27; // xmm3_4
  float v28; // xmm6_4
  __int64 v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // rcx
  unsigned int v32; // ebx
  unsigned __int64 v33; // xmm0_8
  unsigned int v34; // xmm2_4
  unsigned int v35; // xmm3_4
  float v36; // xmm6_4
  __int64 v37; // rax
  unsigned int v38; // ebx
  __int64 v39; // rcx
  unsigned int v40; // ebx
  unsigned __int64 v41; // xmm0_8
  unsigned int v42; // xmm2_4
  unsigned int v43; // xmm3_4
  __int64 v44; // rax
  unsigned int v45; // edx
  unsigned int v46; // edi
  __int64 v47; // rsi
  unsigned int v48; // r10d
  unsigned int v49; // r8d
  unsigned int v50; // edx
  __int64 v51; // rax
  unsigned int v52; // r15d
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // ebx
  unsigned int v57; // r11d
  unsigned int v58; // r9d
  unsigned int v59; // edx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v63; // r10d
  __int64 v64; // rax
  unsigned int v65; // r8d
  unsigned int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  int v70; // r9d
  unsigned int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // r13
  unsigned int v76; // eax
  int v77; // r8d
  unsigned int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v82; // [rsp+8h] [rbp-C9h] BYREF
  __int64 v83; // [rsp+28h] [rbp-A9h]
  unsigned __int64 v84; // [rsp+30h] [rbp-A1h]
  unsigned int v85; // [rsp+38h] [rbp-99h]
  unsigned int v86; // [rsp+3Ch] [rbp-95h]
  unsigned int v87; // [rsp+40h] [rbp-91h]
  unsigned int v88; // [rsp+44h] [rbp-8Dh]
  unsigned int v89; // [rsp+48h] [rbp-89h]
  unsigned int v90; // [rsp+4Ch] [rbp-85h] BYREF
  unsigned int v91; // [rsp+50h] [rbp-81h]
  _DWORD v92[3]; // [rsp+54h] [rbp-7Dh]
  unsigned int v93; // [rsp+60h] [rbp-71h]
  unsigned int v94; // [rsp+64h] [rbp-6Dh]
  unsigned int v95; // [rsp+68h] [rbp-69h]
  __int64 v96; // [rsp+78h] [rbp-59h]

  v2 = &v90;
  v3 = 0;
  v4 = 0.0;
  v5 = dword_140404A6C[177167565];
  LODWORD(v83) = a1;
  v84 = 16LL * a1;
  v6 = a2 + 16;
  v7 = dword_140404A6C[v84 / 4 + 178322642];
  v8 = dword_140404A6C[v84 / 4 + 178322644];
  v9 = dword_140404A6C[v84 / 4 + 178322645];
  v86 = dword_140404A6C[v84 / 4 + 178322643];
  v85 = v7;
  v87 = v8;
  v10 = (int)(3 * v86);
  v11 = (int)(3 * v7);
  v12 = (int)(3 * v8);
  v13 = (int)(3 * v9);
  v88 = v9;
  v14 = (float)((float)((float)(*(float *)&dword_140404A6C[v11 + 177167567] + *(float *)&dword_140404A6C[v10 + 177167567])
                      + *(float *)&dword_140404A6C[v12 + 177167567])
              + *(float *)&dword_140404A6C[v13 + 177167567])
      * 0.25;
  *(float *)&v15 = (float)((float)((float)((float)(*(float *)&dword_140404A6C[v11 + 177167569]
                                                 + *(float *)&dword_140404A6C[v10 + 177167569])
                                         + *(float *)&dword_140404A6C[v12 + 177167569])
                                 + *(float *)&dword_140404A6C[v13 + 177167569])
                         * 0.25)
                 + 0.015625;
  v16 = (float)((float)((float)(*(float *)&dword_140404A6C[v11 + 177167568] + *(float *)&dword_140404A6C[v10 + 177167568])
                      + *(float *)&dword_140404A6C[v12 + 177167568])
              + *(float *)&dword_140404A6C[v13 + 177167568])
      * 0.25;
  do
  {
    *(double *)&v17 = MEMORY[0x1401F8A50](v13);
    *(float *)&v18 = _mm_shuffle_pd((__m128d)v17, (__m128d)v17, 1).m128d_f64[0] * 0.009765625;
    *(float *)&v19 = *(double *)&v17 * -0.0234375;
    if ( (v3 & 1) != 0 )
      *(float *)&v18 = *(float *)&v18 * 0.875;
    v20 = v4 + 0.78539819;
    dword_140404A6C[2 * v5 + 177216719] = v19;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = v18;
    v21 = 3 * dword_140404A6C[177167565];
    *(float *)&dword_140404A6C[v21 + 177167568] = v16 + *(float *)&v18;
    *(float *)&dword_140404A6C[v21 + 177167567] = v14 + *(float *)&v19;
    dword_140404A6C[v21 + 177167569] = v15;
    v22 = dword_140404A6C[177167565];
    v23 = 7LL * (int)dword_140404A6C[177167565];
    *(v2 - 1) = dword_140404A6C[177167565];
    v24 = v22 + 1;
    dword_140404A6C[177167565] = v24;
    dword_140404A6C[v23 + 160235602] = v19;
    dword_140404A6C[v23 + 160235603] = v18;
    dword_140404A6C[v23 + 160235598] = v6;
    dword_140404A6C[v23 + 160235599] = 3;
    dword_140404A6C[v23 + 160235604] = 1015021568;
    *(double *)&v25 = MEMORY[0x1401F8A50](v23 * 4);
    *(float *)&v26 = _mm_shuffle_pd((__m128d)v25, (__m128d)v25, 1).m128d_f64[0] * 0.009765625;
    *(float *)&v27 = *(double *)&v25 * -0.0234375;
    if ( (((_BYTE)v3 + 3) & 1) != 0 )
      *(float *)&v26 = *(float *)&v26 * 0.875;
    v28 = v20 + 0.78539819;
    dword_140404A6C[2 * v24 + 177216719] = v27;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = v26;
    v29 = 3 * dword_140404A6C[177167565];
    *(float *)&dword_140404A6C[v29 + 177167567] = v14 + *(float *)&v27;
    *(float *)&dword_140404A6C[v29 + 177167568] = v16 + *(float *)&v26;
    dword_140404A6C[v29 + 177167569] = v15;
    v30 = dword_140404A6C[177167565];
    v31 = 7LL * (int)dword_140404A6C[177167565];
    *v2 = dword_140404A6C[177167565];
    v32 = v30 + 1;
    dword_140404A6C[177167565] = v32;
    dword_140404A6C[v31 + 160235598] = v6;
    dword_140404A6C[v31 + 160235599] = 3;
    dword_140404A6C[v31 + 160235602] = v27;
    dword_140404A6C[v31 + 160235603] = v26;
    dword_140404A6C[v31 + 160235604] = 1015021568;
    *(double *)&v33 = MEMORY[0x1401F8A50](v31 * 4);
    *(float *)&v34 = _mm_shuffle_pd((__m128d)v33, (__m128d)v33, 1).m128d_f64[0] * 0.009765625;
    *(float *)&v35 = *(double *)&v33 * -0.0234375;
    if ( (v3 & 1) != 0 )
      *(float *)&v34 = *(float *)&v34 * 0.875;
    v36 = v28 + 0.78539819;
    dword_140404A6C[2 * v32 + 177216719] = v35;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = v34;
    v37 = 3 * dword_140404A6C[177167565];
    *(float *)&dword_140404A6C[v37 + 177167567] = v14 + *(float *)&v35;
    *(float *)&dword_140404A6C[v37 + 177167568] = v16 + *(float *)&v34;
    dword_140404A6C[v37 + 177167569] = v15;
    v38 = dword_140404A6C[177167565];
    v39 = 7LL * (int)dword_140404A6C[177167565];
    v2[1] = dword_140404A6C[177167565];
    v40 = v38 + 1;
    dword_140404A6C[177167565] = v40;
    dword_140404A6C[v39 + 160235598] = v6;
    dword_140404A6C[v39 + 160235599] = 3;
    dword_140404A6C[v39 + 160235602] = v35;
    dword_140404A6C[v39 + 160235603] = v34;
    dword_140404A6C[v39 + 160235604] = 1015021568;
    *(double *)&v41 = MEMORY[0x1401F8A50](v39 * 4);
    *(float *)&v42 = _mm_shuffle_pd((__m128d)v41, (__m128d)v41, 1).m128d_f64[0] * 0.009765625;
    *(float *)&v43 = *(double *)&v41 * -0.0234375;
    if ( (((_BYTE)v3 + 3) & 1) != 0 )
      *(float *)&v42 = *(float *)&v42 * 0.875;
    v4 = v36 + 0.78539819;
    v3 += 4;
    dword_140404A6C[2 * v40 + 177216719] = v43;
    dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = v42;
    v44 = 3 * dword_140404A6C[177167565];
    *(float *)&dword_140404A6C[v44 + 177167567] = v14 + *(float *)&v43;
    *(float *)&dword_140404A6C[v44 + 177167568] = v16 + *(float *)&v42;
    dword_140404A6C[v44 + 177167569] = v15;
    v45 = dword_140404A6C[177167565];
    v13 = 28LL * (int)dword_140404A6C[177167565];
    v2[2] = dword_140404A6C[177167565];
    v2 += 4;
    v5 = v45 + 1;
    dword_140404A6C[177167565] = v45 + 1;
    *(unsigned int *)((char *)&dword_140404A6C[160235598] + v13) = v6;
    *(unsigned int *)((char *)&dword_140404A6C[160235599] + v13) = 3;
    *(unsigned int *)((char *)&dword_140404A6C[160235602] + v13) = v43;
    *(unsigned int *)((char *)&dword_140404A6C[160235603] + v13) = v42;
    *(unsigned int *)((char *)&dword_140404A6C[160235604] + v13) = 1015021568;
  }
  while ( v3 < 8 );
  v46 = v85;
  v47 = 0;
  v48 = v89;
  v49 = v86;
  v50 = v94;
  dword_140404A6C[2 * v5 + 177216719] = 0;
  dword_140404A6C[2 * dword_140404A6C[177167565] + 177216720] = 0;
  v51 = 3 * dword_140404A6C[177167565];
  *(float *)&dword_140404A6C[v51 + 177167567] = v14;
  *(float *)&dword_140404A6C[v51 + 177167568] = v16;
  dword_140404A6C[v51 + 177167569] = v15;
  v52 = dword_140404A6C[177167565];
  v53 = 7LL * (int)dword_140404A6C[177167565];
  v95 = dword_140404A6C[177167565]++;
  LODWORD(v51) = dword_140404A6C[177495247];
  dword_140404A6C[v53 + 160235598] = v6;
  dword_140404A6C[v53 + 160235599] = 3;
  *(_QWORD *)&dword_140404A6C[v53 + 160235602] = 0;
  dword_140404A6C[v53 + 160235604] = 1015021568;
  dword_140404A6C[3 * (_DWORD)v51 + 177495248] = v46;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v49;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v48;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v54 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v54 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v54 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v54 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v46;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v48;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v50;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v55 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v55 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v55 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v55 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v46;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v50;
  v56 = v93;
  v57 = v91;
  v58 = v87;
  v59 = v90;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v93;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v60 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v60 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v60 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v60 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v49;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v58;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v57;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v61 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v61 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v61 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v61 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v49;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v57;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v59;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v62 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v62 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v62 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v62 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v49;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v59;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v48;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v63 = v92[1];
  v64 = 6 * dword_140404A6C[177495247];
  v65 = v88;
  v66 = v92[0];
  *(_QWORD *)&dword_140404A6C[v64 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v64 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v64 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v58;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v65;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v63;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v67 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v67 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v67 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v58;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v63;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v66;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v68 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v68 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v68 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v68 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v58;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v66;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v57;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v69 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v69 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v69 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v69 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  v70 = 2;
  v71 = v92[2];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v65;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v46;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v56;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v72 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v72 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v72 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v72 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v65;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v56;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v71;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v73 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v73 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v73 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v73 + 178011349] = 1065353216;
  ++dword_140404A6C[177495247];
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v65;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = v71;
  dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v63;
  dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
  v74 = 6 * dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v74 + 178011345] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v74 + 178011347] = 1065353216;
  *(_QWORD *)&dword_140404A6C[v74 + 178011349] = 1065353216;
  v75 = v84;
  v76 = ++dword_140404A6C[177495247];
  do
  {
    dword_140404A6C[3 * v76 + 177495248] = *(&v89 + v47);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(&v89 + (((_BYTE)v70 - 1) & 7));
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v52;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = *(&v90 + v47);
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(&v89 + (v70 & 7));
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v52;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v92[v47 - 1];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(&v89 + (((_BYTE)v70 + 1) & 7));
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v52;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    ++dword_140404A6C[177495247];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] = v92[v47];
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] = *(&v89 + (((_BYTE)v70 + 2) & 7));
    dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] = v52;
    dword_140404A6C[dword_140404A6C[177495247] + 178207953] = -2;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011345] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    v70 += 4;
    v47 += 4;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011346] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495248] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011347] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011348] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495249] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011349] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216719]
                                                                                   * 4.0)
                                                                           + 0.625;
    *(float *)&dword_140404A6C[6 * dword_140404A6C[177495247] + 178011350] = (float)(*(float *)&dword_140404A6C[2 * dword_140404A6C[3 * dword_140404A6C[177495247] + 177495250] + 177216720]
                                                                                   * 4.0)
                                                                           + 0.875;
    v76 = ++dword_140404A6C[177495247];
  }
  while ( v47 < 8 );
  v77 = v83;
  if ( (int)v83 >= 0 )
  {
    v78 = dword_140404A6C[178322641];
    if ( (int)v83 < (int)dword_140404A6C[178322641] )
    {
      --dword_140404A6C[178322641];
      *(unsigned int *)((char *)&dword_140404A6C[178322642] + v75) = dword_140404A6C[4 * (v78 - 1) + 178322642];
      *(unsigned int *)((char *)&dword_140404A6C[178322643] + v75) = dword_140404A6C[4 * dword_140404A6C[178322641]
                                                                                   + 178322643];
      *(unsigned int *)((char *)&dword_140404A6C[178322644] + v75) = dword_140404A6C[4 * dword_140404A6C[178322641]
                                                                                   + 178322644];
      *(unsigned int *)((char *)&dword_140404A6C[178322645] + v75) = dword_140404A6C[4 * dword_140404A6C[178322641]
                                                                                   + 178322645];
      v79 = 8 * dword_140404A6C[178322641];
      v80 = 8 * v77;
      *(_OWORD *)&dword_140404A6C[v80 + 178388178] = *(_OWORD *)&dword_140404A6C[v79 + 178388178];
      *(_OWORD *)&dword_140404A6C[v80 + 178388182] = *(_OWORD *)&dword_140404A6C[v79 + 178388182];
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v82 ^ v96);
}

