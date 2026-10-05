/* Address: 0x14008bfb0 | Name: sub_14008BFB0 | Size: 4911 bytes */
int __fastcall sub_14008BFB0(int a1)
{
  int v1; // ebx
  FILE *v2; // rax
  __int64 v3; // r13
  FILE *v4; // rbp
  __int64 v5; // rax
  int v6; // edi
  float *v7; // rbx
  float v8; // xmm0_4
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rsi
  int *v13; // r12
  __int64 v14; // rbx
  int v15; // r14d
  float *v16; // rsi
  int v17; // r9d
  __int64 v18; // r10
  unsigned int v19; // ecx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rdx
  float v23; // xmm0_4
  __int64 v24; // rdx
  float *v25; // rax
  int v26; // ecx
  float v27; // xmm1_4
  float *v28; // rax
  float v29; // xmm0_4
  int i; // esi
  __int64 v31; // rdi
  int *v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  float v35; // xmm12_4
  float v36; // xmm13_4
  float v37; // xmm14_4
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  float v41; // xmm9_4
  float v42; // xmm10_4
  float v43; // xmm11_4
  float v44; // xmm0_4
  float v45; // xmm9_4
  float v46; // xmm10_4
  float v47; // xmm11_4
  __int64 v48; // rcx
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm7_4
  float v52; // xmm8_4
  float v53; // xmm3_4
  float v54; // xmm6_4
  int v55; // xmm13_4
  int v56; // xmm14_4
  int v57; // r11d
  char *v58; // r9
  int v59; // eax
  float v60; // xmm8_4
  float v61; // xmm9_4
  float v62; // xmm10_4
  float *v63; // r8
  __int64 v64; // r10
  float *v65; // rdx
  float v66; // xmm7_4
  float v67; // xmm6_4
  float v68; // xmm5_4
  float v69; // xmm4_4
  __int64 v70; // rax
  float v71; // xmm2_4
  __int64 v72; // r9
  _DWORD *v73; // rcx
  _DWORD *v74; // rdx
  bool v75; // cc
  int v76; // r10d
  int *v77; // rsi
  __int64 v78; // r11
  __int64 v79; // r8
  __int64 v80; // rdx
  float *v81; // rcx
  float v82; // xmm7_4
  float v83; // xmm3_4
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm6_4
  float v87; // xmm9_4
  float v88; // xmm0_4
  float v89; // xmm8_4
  float v90; // xmm7_4
  float v91; // xmm3_4
  float v92; // xmm9_4
  float v93; // xmm7_4
  float v94; // xmm8_4
  __int64 v95; // rbp
  __int64 v96; // rdx
  __int64 v97; // rdi
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  int v101; // edx
  int v102; // ecx
  __int64 v103; // r8
  float v104; // xmm0_4
  __int64 v105; // r8
  float v106; // xmm0_4
  int v107; // r8d
  __int64 v108; // r10
  float v109; // xmm0_4
  int v110; // eax
  __int64 v111; // r10
  __int64 v112; // rcx
  float v113; // xmm0_4
  int v114; // ebx
  __int64 v115; // rcx
  int v116; // r8d
  char *v117; // r10
  int v118; // ecx
  int v119; // ecx
  int v121; // [rsp+20h] [rbp-438h]
  int v122; // [rsp+20h] [rbp-438h]
  int v124; // [rsp+28h] [rbp-430h] BYREF
  __int64 v125; // [rsp+30h] [rbp-428h]
  __int64 v126; // [rsp+38h] [rbp-420h]
  __int64 v127; // [rsp+40h] [rbp-418h]
  __int64 v128; // [rsp+48h] [rbp-410h]
  unsigned __int64 v129; // [rsp+58h] [rbp-400h]
  FILE *v130; // [rsp+60h] [rbp-3F8h]
  char v131[256]; // [rsp+70h] [rbp-3E8h] BYREF
  char FileName[512]; // [rsp+170h] [rbp-2E8h] BYREF

  v1 = a1;
  sub_1400DBB30(FileName, "data/model/%s.cmc");
  v2 = fopen(FileName, "rb");
  v3 = 0;
  v130 = v2;
  v4 = v2;
  if ( v2 )
  {
    qword_19AAD8648(v131, 1, 4, v2);
    qword_19AAD8648(&v124, 4, 1, v4);
    if ( v124 != 2 )
    {
      LODWORD(v5) = fclose(v4);
      return v5;
    }
    qword_19AAD8648(&dword_177DD5EE8, 4, 1, v4);
    v6 = 0;
    if ( dword_177DD5EE8 > 0 )
    {
      v7 = (float *)&unk_177DD5EF4;
      do
      {
        qword_19AAD8648(&dword_177AC5EE0[18 * v6 + 802819], 4, 3, v4);
        v8 = *(v7 - 2);
        v7 += 18;
        ++v6;
        *(v7 - 20) = v8 * 1.125;
        *(v7 - 19) = *(v7 - 19) * 1.125;
        *(v7 - 18) = *(v7 - 18) * 1.125;
      }
      while ( v6 < dword_177DD5EE8 );
    }
    qword_19AAD8648(dword_177AC5EE0, 4, 1, v4);
    v9 = 0;
    v121 = 0;
    if ( dword_177AC5EE0[0] > 0 )
    {
      v10 = 0;
      v128 = 0;
      v11 = 0;
      v127 = 0;
      v12 = 0;
      v126 = 0;
      v125 = 0;
      v13 = (int *)&unk_177AC5EEC;
      do
      {
        v14 = v9;
        v129 = 276LL * v9;
        qword_19AAD8648(&dword_177AC5EE0[v129 / 4 + 1], 4, 3, v4);
        v15 = 0;
        if ( dword_177DD5EE8 > 0 )
        {
          v16 = (float *)(v13 + 3);
          do
          {
            qword_19AAD8648(&dword_177AC5EE0[46 * v14 + 4 + 23 * v14 + 2 * v15 + v15], 4, 3, v4);
            *(v16 - 2) = *(v16 - 2) * 1.125;
            *(v16 - 1) = *(v16 - 1) * 1.125;
            *v16 = *v16 * 1.125;
            qword_19AAD8648(&dword_177AC5EE0[69 * v14 + 52 + v15++], 4, 1, v4);
            v16 += 3;
          }
          while ( v15 < dword_177DD5EE8 );
          v10 = v128;
          v11 = v127;
          v12 = v126;
          v3 = v125;
        }
        qword_19AAD8648(&dword_177AC5EE0[v129 / 4 + 68], 4, 2, v4);
        v17 = 0;
        *(int *)((char *)&dword_177AC5EE0[565249] + v10) = *(v13 - 2);
        v18 = 0;
        v19 = 0;
        *(int *)((char *)&dword_177AC5EE0[565250] + v10) = *(v13 - 1);
        *(int *)((char *)&dword_177AC5EE0[565251] + v10) = *v13;
        *(int *)((char *)&dword_177AC5EE0[565273] + v10) = v13[65];
        *(int *)((char *)&dword_177AC5EE0[565274] + v10) = v13[66];
        LODWORD(v20) = 0;
        *(int *)((char *)&dword_177AC5EE0[565252] + v10) = 0;
        v21 = dword_177DD5EE8;
        if ( dword_177DD5EE8 > 0 )
        {
          do
          {
            v20 = *(int *)((char *)&dword_177AC5EE0[565252] + v10);
            v19 = v20;
            if ( (int)v20 < 4 && *(float *)&dword_177AC5EE0[v18 + 52 + v12] > 0.0 )
            {
              dword_177AC5EE0[v11 + 565253 + v20] = v17;
              v22 = v10 + 12LL * *(int *)((char *)&dword_177AC5EE0[565252] + v10);
              *(_DWORD *)((char *)&unk_177CEDF04 + v22) = dword_177AC5EE0[3 * v18 + 4 + 3 * v3];
              *(_DWORD *)((char *)&unk_177CEDF04 + v22 + 4) = dword_177AC5EE0[3 * v18 + 5 + 3 * v3];
              *(_DWORD *)((char *)&unk_177CEDF04 + v22 + 8) = dword_177AC5EE0[3 * v18 + 6 + 3 * v3];
              dword_177AC5EE0[v11 + 565269 + (*(int *)((char *)&dword_177AC5EE0[565252] + v10))++] = dword_177AC5EE0[v18 + 52 + v12];
              LODWORD(v20) = *(int *)((char *)&dword_177AC5EE0[565252] + v10);
              v19 = v20;
              v21 = dword_177DD5EE8;
            }
            ++v17;
            ++v18;
          }
          while ( v17 < v21 );
          v4 = v130;
        }
        v23 = 0.0;
        if ( (int)v20 > 0 )
        {
          v24 = v19;
          v25 = (float *)((char *)&unk_177CEDF34 + v10);
          do
          {
            v23 = v23 + *v25++;
            --v24;
          }
          while ( v24 );
          LODWORD(v20) = v19;
        }
        v26 = 0;
        if ( (int)v20 > 0 )
        {
          v27 = 1.0 / v23;
          v28 = (float *)((char *)&unk_177CEDF34 + v10);
          do
          {
            ++v26;
            v29 = v27 * *v28++;
            *(v28 - 1) = v29;
          }
          while ( v26 < *(int *)((char *)&dword_177AC5EE0[565252] + v10) );
        }
        v3 += 23;
        v9 = v121 + 1;
        v125 = v3;
        v12 += 69;
        v121 = v9;
        v11 += 26;
        v126 = v12;
        v10 += 104;
        v127 = v11;
        v13 += 69;
        v128 = v10;
      }
      while ( v9 < dword_177AC5EE0[0] );
    }
    qword_19AAD8648(&dword_177DBDEE4, 4, 1, v4);
    for ( i = 0; i < dword_177DBDEE4; ++i )
    {
      v31 = 3;
      v32 = &dword_177AC5EE0[3 * i + 778242];
      do
      {
        qword_19AAD8648(v32++, 4, 1, v4);
        --v31;
      }
      while ( v31 );
    }
    fclose(v4);
    v1 = a1;
  }
  v33 = 0;
  xmmword_190941C1C = xmmword_1400F78B0;
  dword_190941C3C[0] = 1065353216;
  xmmword_190941C2C = xmmword_1400F78B0;
  dword_190941D74[0] = 1065353216;
  unk_190941D54 = xmmword_1400F78B0;
  dword_190941EAC[0] = 1065353216;
  xmmword_190941D64 = xmmword_1400F78B0;
  dword_190941FE4[0] = 1065353216;
  unk_190941E8C = xmmword_1400F78B0;
  dword_19094211C = 1065353216;
  xmmword_190941E9C = xmmword_1400F78B0;
  dword_190942254 = 1065353216;
  xmmword_190941FC4 = xmmword_1400F78B0;
  dword_19094238C = 1065353216;
  xmmword_190941FD4 = xmmword_1400F78B0;
  dword_1909424C4 = 1065353216;
  xmmword_1909420FC = xmmword_1400F78B0;
  dword_1909425FC = 1065353216;
  xmmword_19094210C = xmmword_1400F78B0;
  dword_190942734 = 1065353216;
  xmmword_190942234 = xmmword_1400F78B0;
  dword_19094286C = 1065353216;
  xmmword_190942244 = xmmword_1400F78B0;
  dword_1909429A4 = 1065353216;
  xmmword_19094236C = xmmword_1400F78B0;
  dword_190942ADC = 1065353216;
  xmmword_19094237C = xmmword_1400F78B0;
  dword_190942C14 = 1065353216;
  xmmword_1909424A4 = xmmword_1400F78B0;
  dword_190942D4C = 1065353216;
  xmmword_1909424B4 = xmmword_1400F78B0;
  dword_190942E84 = 1065353216;
  xmmword_1909425DC = xmmword_1400F78B0;
  dword_177DD5EF8 = 0;
  xmmword_1909425EC = xmmword_1400F78B0;
  dword_177DD5EFC = -1103101952;
  xmmword_190942714 = xmmword_1400F78B0;
  xmmword_190942724 = xmmword_1400F78B0;
  xmmword_19094284C = xmmword_1400F78B0;
  xmmword_19094285C = xmmword_1400F78B0;
  xmmword_190942984 = xmmword_1400F78B0;
  xmmword_190942994 = xmmword_1400F78B0;
  xmmword_190942ABC = xmmword_1400F78B0;
  xmmword_190942ACC = xmmword_1400F78B0;
  xmmword_190942BF4 = xmmword_1400F78B0;
  xmmword_190942C04 = xmmword_1400F78B0;
  xmmword_190942D2C = xmmword_1400F78B0;
  xmmword_190942D3C = xmmword_1400F78B0;
  xmmword_190942E64 = xmmword_1400F78B0;
  xmmword_190942E74 = xmmword_1400F78B0;
  dword_177DD5F00 = 1031798784;
  do
  {
    v34 = 78 * v33;
    v35 = *((float *)&xmmword_190941C1C + 78 * v33 + 3);
    v36 = *((float *)&xmmword_190941C2C + 78 * v33);
    v37 = *((float *)&xmmword_190941C2C + 78 * v33 + 1);
    v38 = 9 * v33;
    v39 = dword_1910415A0[25 * v33];
    dword_177AC5EE0[2 * v38 + 802828] = *((_DWORD *)&xmmword_190941C1C + 78 * v33);
    dword_177AC5EE0[2 * v38 + 802829] = *((_DWORD *)&xmmword_190941C1C + 78 * v33 + 1);
    dword_177AC5EE0[2 * v38 + 802830] = *((_DWORD *)&xmmword_190941C1C + 78 * v33 + 2);
    v40 = *((_DWORD *)&xmmword_190941C2C + 78 * v33 + 2);
    *(float *)&dword_177AC5EE0[2 * v38 + 802831] = v35;
    *(float *)&dword_177AC5EE0[2 * v38 + 802832] = v36;
    *(float *)&dword_177AC5EE0[2 * v38 + 802833] = v37;
    dword_177AC5EE0[2 * v38 + 802834] = v40;
    dword_177AC5EE0[2 * v38 + 802835] = *((_DWORD *)&xmmword_190941C2C + 78 * v33 + 3);
    dword_177AC5EE0[2 * v38 + 802836] = dword_190941C3C[78 * v33];
    if ( !v33 )
      goto LABEL_48;
    v41 = *(float *)&dword_177AC5EE0[18 * v33 + 802819];
    v42 = *(float *)&dword_177AC5EE0[18 * v33 + 802820];
    v43 = *(float *)&dword_177AC5EE0[18 * v33 + 802821];
    if ( (unsigned __int64)(v33 - 5) <= 1 || (unsigned __int64)(v33 - 8) <= 1 )
    {
      v44 = fsqrt((float)((float)(v42 * v42) + (float)(v41 * v41)) + (float)(v43 * v43));
      if ( v44 == 0.0 )
      {
        v45 = 0.0;
        v46 = 0.0;
        v47 = 0.0;
      }
      else
      {
        v45 = (float)(1.0 / v44) * v41;
        v46 = (float)(1.0 / v44) * v42;
        v47 = (float)(1.0 / v44) * v43;
      }
      v41 = v45 * 0.328125;
      v42 = v46 * 0.328125;
      v43 = v47 * 0.328125;
    }
    if ( v33 == 4 )
    {
      v41 = -0.1875;
      goto LABEL_44;
    }
    if ( v33 == 7 )
    {
      v41 = 0.1875;
LABEL_44:
      v42 = 0.328125;
    }
    v48 = 9 * v39;
    v49 = *(float *)&dword_177AC5EE0[2 * v48 + 802832];
    v50 = *(float *)&dword_177AC5EE0[2 * v48 + 802829];
    v51 = *(float *)&dword_177AC5EE0[2 * v48 + 802833];
    v52 = *(float *)&dword_177AC5EE0[2 * v48 + 802830];
    v53 = *(float *)&dword_177AC5EE0[2 * v48 + 802835] * v43;
    v54 = *(float *)&dword_177AC5EE0[2 * v48 + 802836] * v43;
    *(float *)&dword_177AC5EE0[18 * v33 + 802822] = (float)((float)(v43 * *(float *)&dword_177AC5EE0[2 * v48 + 802834])
                                                          + (float)(v41 * *(float *)&dword_177AC5EE0[2 * v48 + 802828]))
                                                  + (float)((float)(v42 * *(float *)&dword_177AC5EE0[2 * v48 + 802831])
                                                          + *(float *)&dword_177AC5EE0[2 * v48 + 802822]);
    *(float *)&dword_177AC5EE0[18 * v33 + 802823] = (float)((float)(v50 * v41) + v53)
                                                  + (float)((float)(v49 * v42)
                                                          + *(float *)&dword_177AC5EE0[2 * v48 + 802823]);
    *(float *)&dword_177AC5EE0[18 * v33 + 802824] = (float)((float)(v52 * v41) + v54)
                                                  + (float)((float)(v51 * v42)
                                                          + *(float *)&dword_177AC5EE0[2 * v48 + 802824]);
    if ( v33 == 4 || v33 == 7 )
    {
      *(float *)&v55 = (float)(v36 * 0.1640625) + *(float *)&dword_190941BF0[v34];
      *(float *)&v56 = (float)(v37 * 0.1640625) + *(float *)&dword_190941BF4[v34];
      *(float *)&dword_177AC5EE0[18 * v33 + 802822] = (float)(v35 * 0.1640625) + *(float *)&dword_190941BEC[v34];
      dword_177AC5EE0[18 * v33 + 802823] = v55;
      dword_177AC5EE0[18 * v33 + 802824] = v56;
    }
LABEL_48:
    ++v33;
    dword_177AC5EE0[2 * v38 + 802825] = dword_177AC5EE0[2 * v38 + 802822];
    dword_177AC5EE0[2 * v38 + 802826] = dword_177AC5EE0[2 * v38 + 802823];
    dword_177AC5EE0[2 * v38 + 802827] = dword_177AC5EE0[2 * v38 + 802824];
  }
  while ( v33 < 16 );
  v57 = 0;
  if ( dword_177AC5EE0[0] > 0 )
  {
    v58 = (char *)&unk_177CEDEEC;
    do
    {
      v59 = *((_DWORD *)v58 + 1);
      v60 = 0.0;
      v61 = 0.0;
      v62 = 0.0;
      if ( v59 > 0 )
      {
        v63 = (float *)(v58 + 72);
        v64 = (unsigned int)v59;
        v65 = (float *)(v58 + 32);
        do
        {
          v66 = *(v65 - 2);
          v67 = *(v65 - 1);
          v68 = *v65;
          v69 = *v63;
          v70 = *((int *)v63 - 16);
          v71 = *v65;
          ++v63;
          v65 += 3;
          v60 = v60
              + (float)((float)((float)((float)(v71 * *(float *)&dword_177AC5EE0[18 * v70 + 802834])
                                      + (float)(v66 * *(float *)&dword_177AC5EE0[18 * v70 + 802828]))
                              + (float)((float)(v67 * *(float *)&dword_177AC5EE0[18 * v70 + 802831])
                                      + *(float *)&dword_177AC5EE0[18 * v70 + 802822]))
                      * v69);
          v61 = v61
              + (float)((float)((float)((float)(v66 * *(float *)&dword_177AC5EE0[18 * v70 + 802829])
                                      + (float)(v68 * *(float *)&dword_177AC5EE0[18 * v70 + 802835]))
                              + (float)((float)(v67 * *(float *)&dword_177AC5EE0[18 * v70 + 802832])
                                      + *(float *)&dword_177AC5EE0[18 * v70 + 802823]))
                      * v69);
          v62 = v62
              + (float)((float)((float)((float)(v66 * *(float *)&dword_177AC5EE0[18 * v70 + 802830])
                                      + (float)(v68 * *(float *)&dword_177AC5EE0[18 * v70 + 802836]))
                              + (float)((float)(v67 * *(float *)&dword_177AC5EE0[18 * v70 + 802833])
                                      + *(float *)&dword_177AC5EE0[18 * v70 + 802824]))
                      * v69);
          --v64;
        }
        while ( v64 );
      }
      *((float *)v58 - 2) = v60;
      ++v57;
      *((float *)v58 - 1) = v61;
      *(float *)v58 = v62;
      v58 += 104;
    }
    while ( v57 < dword_177AC5EE0[0] );
  }
  v72 = 786828LL * v1;
  v73 = &unk_177DD5F0C;
  v74 = (_DWORD *)((char *)&unk_174B7FBF4 + v72);
  do
  {
    *(v74 - 2) = *(v73 - 2);
    *(v74 - 1) = *(v73 - 1);
    *v74 = *v73;
    v74[1] = *(v73 - 8);
    v74[2] = *(v73 - 7);
    v74[3] = *(v73 - 6);
    v74[4] = v73[16];
    v74[5] = v73[17];
    v74[6] = v73[18];
    v74[7] = v73[10];
    v74[8] = v73[11];
    v74[9] = v73[12];
    v74[10] = v73[34];
    v74[11] = v73[35];
    v74[12] = v73[36];
    v74[13] = v73[28];
    v74[14] = v73[29];
    v74[15] = v73[30];
    v74[16] = v73[52];
    v74[17] = v73[53];
    v74[18] = v73[54];
    v74[19] = v73[46];
    v74[20] = v73[47];
    v74[21] = v73[48];
    v74[22] = v73[70];
    v74[23] = v73[71];
    v74[24] = v73[72];
    v74[25] = v73[64];
    v74[26] = v73[65];
    v74[27] = v73[66];
    v74[28] = v73[88];
    v74[29] = v73[89];
    v74[30] = v73[90];
    v74[31] = v73[82];
    v74[32] = v73[83];
    v74[33] = v73[84];
    v74[34] = v73[106];
    v74[35] = v73[107];
    v74[36] = v73[108];
    v74[37] = v73[100];
    v74[38] = v73[101];
    v74 += 48;
    *(v74 - 9) = v73[102];
    *(v74 - 8) = v73[124];
    *(v74 - 7) = v73[125];
    *(v74 - 6) = v73[126];
    *(v74 - 5) = v73[118];
    *(v74 - 4) = v73[119];
    LODWORD(v5) = v73[120];
    v73 += 144;
    *(v74 - 3) = v5;
  }
  while ( (__int64)v73 < (__int64)dword_177DD638C );
  v75 = dword_177DBDEE4 <= 0;
  v76 = 0;
  *(_DWORD *)((char *)&unk_174ABFBE0 + v72) = 0;
  *(_DWORD *)((char *)&unk_174ABFBE4 + v72) = 16;
  v122 = 0;
  if ( !v75 )
  {
    v77 = (int *)&unk_177DBDEE8;
    v78 = 196707LL * v1;
    do
    {
      v79 = 104LL * v77[2];
      v80 = 104LL * v77[1];
      v81 = (float *)((char *)&unk_177CEDEE4 + 104 * *v77);
      v82 = *(float *)((char *)&unk_177CEDEE4 + v79 + 8) - v81[2];
      v83 = *(float *)((char *)&unk_177CEDEE4 + v80 + 8) - v81[2];
      v84 = *(float *)((char *)&unk_177CEDEE4 + v79 + 4) - v81[1];
      v85 = *(float *)((char *)&unk_177CEDEE4 + v80 + 4) - v81[1];
      v86 = *(float *)((char *)&unk_177CEDEE4 + v80) - *v81;
      v87 = (float)(v84 * v83) - (float)(v82 * v85);
      v88 = *(float *)((char *)&unk_177CEDEE4 + v79) - *v81;
      v89 = (float)(v88 * v85) - (float)(v84 * v86);
      v90 = (float)(v82 * v86) - (float)(v88 * v83);
      v91 = fsqrt((float)((float)(v90 * v90) + (float)(v87 * v87)) + (float)(v89 * v89));
      if ( v91 == 0.0 )
      {
        v92 = 0.0;
        v93 = 0.0;
        v94 = 0.0;
      }
      else
      {
        v92 = v87 * (float)(1.0 / v91);
        v93 = v90 * (float)(1.0 / v91);
        v94 = v89 * (float)(1.0 / v91);
      }
      v95 = 3;
      do
      {
        v96 = *v77;
        if ( (unsigned int)(a1 - 22) <= 1 )
          *(float *)&dword_177AC5EE0[26 * *v77 + 565251] = *(float *)&dword_177AC5EE0[26 * *v77 + 565251] - 0.015625;
        v97 = 26 * v96;
        v98 = v78 + *(_DWORD *)((char *)&unk_174ABFBE4 + v72) * v76;
        dword_174ABFBE8[v98] = dword_177AC5EE0[26 * v96 + 565249];
        dword_174ABFBEC[v98] = dword_177AC5EE0[26 * v96 + 565250];
        dword_174ABFBF0[v98] = dword_177AC5EE0[26 * v96 + 565251];
        v99 = v78 + *(_DWORD *)((char *)&unk_174ABFBE4 + v72) * *(_DWORD *)((char *)&unk_174ABFBE0 + v72);
        dword_174ABFBF4[v99] = dword_177AC5EE0[26 * v96 + 565273];
        dword_174ABFBF8[v99] = dword_177AC5EE0[26 * v96 + 565274];
        v100 = v78 + *(_DWORD *)((char *)&unk_174ABFBE4 + v72) * *(_DWORD *)((char *)&unk_174ABFBE0 + v72);
        *(float *)&dword_174ABFBFC[v100] = v92;
        *(float *)&dword_174ABFC00[v100] = v93;
        *(float *)&dword_174ABFC04[v100] = v94;
        v101 = *(_DWORD *)((char *)&unk_174ABFBE0 + v72);
        v102 = *(_DWORD *)((char *)&unk_174ABFBE4 + v72);
        v103 = v78 + v102 * v101;
        v104 = *(float *)&dword_174ABFBF8[v103];
        if ( v104 >= 0.9375 && v104 < 1.0 )
        {
          dword_174ABFBF4[v103] = 1099169792;
          v102 = *(_DWORD *)((char *)&unk_174ABFBE4 + v72);
          v101 = *(_DWORD *)((char *)&unk_174ABFBE0 + v72);
        }
        v105 = v78 + v102 * v101;
        v106 = *(float *)&dword_174ABFBF8[v105];
        if ( v106 >= 0.625 && v106 < 0.6875 )
        {
          dword_174ABFBF4[v105] = 1099694080;
          v102 = *(_DWORD *)((char *)&unk_174ABFBE4 + v72);
          v101 = *(_DWORD *)((char *)&unk_174ABFBE0 + v72);
        }
        v107 = v101;
        v108 = v102 * v101;
        v109 = *(float *)&dword_174ABFBF8[v108 + v78];
        v110 = v102;
        if ( v109 >= 0.375 && v109 < 0.4375 )
        {
          v111 = v78 + v108;
          if ( *(float *)&dword_174ABFBF4[v111] < 0.3125 )
          {
            dword_174ABFBF4[v111] = 1099694080;
            v110 = *(_DWORD *)((char *)&unk_174ABFBE4 + v72);
            v107 = *(_DWORD *)((char *)&unk_174ABFBE0 + v72);
          }
        }
        v112 = v78 + v107 * v110;
        v113 = *(float *)&dword_174ABFBF8[v112];
        if ( v113 >= 0.5 && v113 < 0.5625 )
        {
          dword_174ABFBF4[v112] = 1100218368;
          v107 = *(_DWORD *)((char *)&unk_174ABFBE0 + v72);
        }
        v114 = dword_177AC5EE0[v97 + 565252];
        v115 = 4 * v107;
        v116 = 0;
        *((_DWORD *)xmmword_174B5FBE8 + v78 + v115) = 1065353216;
        *((_DWORD *)&xmmword_174B5FBE8[*(_DWORD *)((char *)&unk_174ABFBE0 + v72)] + v78 + 1) = 0;
        *((_DWORD *)&xmmword_174B5FBE8[*(_DWORD *)((char *)&unk_174ABFBE0 + v72)] + v78 + 2) = 0;
        *((_DWORD *)&xmmword_174B5FBE8[*(_DWORD *)((char *)&unk_174ABFBE0 + v72)] + v78 + 3) = 0;
        *((_DWORD *)&xmmword_174B3FBE8[*(_DWORD *)((char *)&unk_174ABFBE0 + v72)] + v78) = 0;
        *((_DWORD *)&xmmword_174B3FBE8[*(_DWORD *)((char *)&unk_174ABFBE0 + v72)] + v78 + 1) = 0;
        *((_DWORD *)&xmmword_174B3FBE8[*(_DWORD *)((char *)&unk_174ABFBE0 + v72)] + v78 + 2) = 0;
        *((_DWORD *)&xmmword_174B3FBE8[*(_DWORD *)((char *)&unk_174ABFBE0 + v72)] + v78 + 3) = 0;
        if ( v114 > 0 )
        {
          v117 = (char *)&unk_177CEDF34 + v97 * 4;
          do
          {
            v117 += 4;
            *((_DWORD *)&xmmword_174B3FBE8[*(_DWORD *)((char *)&unk_174ABFBE0 + v72)] + v78 + v116) = *((_DWORD *)v117 - 17);
            v118 = v116 + 4 * *(_DWORD *)((char *)&unk_174ABFBE0 + v72);
            ++v116;
            *((_DWORD *)xmmword_174B5FBE8 + v78 + v118) = *((_DWORD *)v117 - 1);
          }
          while ( v116 < v114 );
        }
        ++v77;
        *(__int128 *)((char *)&xmmword_174ABFC08
                    + 4 * v78
                    + 4 * *(_DWORD *)((char *)&unk_174ABFBE4 + v72) * *(_DWORD *)((char *)&unk_174ABFBE0 + v72)) = *(__int128 *)((char *)&xmmword_174B3FBE8[*(_DWORD *)((char *)&unk_174ABFBE0 + v72)] + 4 * v78);
        v119 = *(_DWORD *)((char *)&unk_174ABFBE0 + v72);
        v5 = v78 + *(_DWORD *)((char *)&unk_174ABFBE4 + v72) * v119;
        *(__int128 *)((char *)&xmmword_174ABFC18 + 4 * v5) = *(__int128 *)((char *)&xmmword_174B5FBE8[v119] + 4 * v78);
        v76 = *(_DWORD *)((char *)&unk_174ABFBE0 + v72) + 1;
        *(_DWORD *)((char *)&unk_174ABFBE0 + v72) = v76;
        --v95;
      }
      while ( v95 );
      ++v122;
    }
    while ( v122 < dword_177DBDEE4 );
  }
  return v5;
}

