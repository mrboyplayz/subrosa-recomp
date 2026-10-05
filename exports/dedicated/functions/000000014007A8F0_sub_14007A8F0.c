/* Address: 0x14007a8f0 | Name: sub_14007A8F0 | Size: 3441 bytes */
void __fastcall sub_14007A8F0(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r10d
  float v13; // xmm11_4
  int v14; // esi
  int v15; // r15d
  int v16; // edi
  int v17; // eax
  int v18; // ebp
  float v19; // xmm14_4
  int v20; // r14d
  float v21; // xmm15_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm12_4
  int v25; // ebx
  float v26; // xmm7_4
  int v27; // edi
  char *v28; // r9
  __int64 v29; // r10
  __int64 v30; // r11
  _DWORD *v31; // rdx
  __int64 v32; // r8
  _DWORD *v33; // rax
  __int64 v34; // rcx
  int v35; // r8d
  int v36; // ecx
  int v37; // r12d
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  int v41; // r15d
  __int64 v42; // rcx
  float v43; // xmm0_4
  float v44; // xmm14_4
  float v45; // xmm13_4
  float v46; // xmm15_4
  int v47; // ebp
  float v48; // xmm12_4
  __int64 v49; // r14
  int v50; // edi
  __int64 v51; // rbx
  float v52; // xmm7_4
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  int v58; // r13d
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // r12d
  __int64 v62; // r8
  __int64 v63; // r15
  __int64 i; // r11
  __int64 v65; // rbp
  int v66; // esi
  _DWORD *v67; // r9
  int v68; // edi
  float v69; // xmm5_4
  float v70; // xmm7_4
  float v71; // xmm4_4
  float v72; // xmm3_4
  float v73; // xmm4_4
  float v74; // xmm2_4
  float v75; // xmm4_4
  __int64 v76; // r10
  char *v77; // r14
  __int64 v78; // r15
  int v79; // r13d
  int v80; // esi
  int v81; // r11d
  __int64 v82; // rbp
  char *v83; // rbx
  int v84; // edi
  int v85; // r10d
  unsigned int v86; // r8d
  float v87; // xmm5_4
  __int64 v88; // rbx
  __int64 v89; // rcx
  __int64 v90; // r14
  char *v91; // rdx
  float v92; // xmm5_4
  float v93; // xmm7_4
  float v94; // xmm1_4
  float v95; // xmm1_4
  float v96; // xmm0_4
  float v97; // xmm1_4
  __int64 v98; // rcx
  int v99; // eax
  float *v100; // rax
  __int64 v101; // rcx
  float v102; // xmm0_4
  int v103; // eax
  int v104; // edx
  unsigned int v105; // ecx
  unsigned int v106; // r8d
  float v107; // xmm2_4
  float v108; // xmm4_4
  int v109; // edx
  int v110; // r9d
  unsigned int v111; // ecx
  float v112; // xmm7_4
  float v113; // xmm2_4
  float v114; // xmm3_4
  float *v115; // rax
  __int64 v116; // rcx
  float v117; // xmm2_4
  float v118; // xmm2_4
  int v119; // [rsp+20h] [rbp-128h]
  __int64 v120; // [rsp+28h] [rbp-120h]
  __int64 v121; // [rsp+28h] [rbp-120h]
  __int64 v122; // [rsp+30h] [rbp-118h]
  __int64 v123; // [rsp+30h] [rbp-118h]
  __int64 v124; // [rsp+38h] [rbp-110h]
  __int64 v125; // [rsp+38h] [rbp-110h]
  float v126; // [rsp+40h] [rbp-108h]
  int v127; // [rsp+44h] [rbp-104h]
  int v128; // [rsp+48h] [rbp-100h]
  int v129; // [rsp+4Ch] [rbp-FCh]
  __int64 v130; // [rsp+50h] [rbp-F8h]
  __int64 v131; // [rsp+58h] [rbp-F0h]
  int v132; // [rsp+150h] [rbp+8h]
  int v133; // [rsp+158h] [rbp+10h]
  float v134; // [rsp+160h] [rbp+18h]
  int v135; // [rsp+160h] [rbp+18h]
  __int64 v136; // [rsp+160h] [rbp+18h]
  float v137; // [rsp+168h] [rbp+20h]
  int v138; // [rsp+168h] [rbp+20h]
  __int64 v139; // [rsp+168h] [rbp+20h]

  v1 = 136LL * a1;
  v124 = v1;
  v2 = *(int *)((char *)dword_183989EFC + v1);
  if ( (_DWORD)v2 == -1 )
    return;
  v3 = *((int *)&unk_1839ABF10 + 396 * v2);
  if ( dword_183989F00[34 * v3] == -1 )
  {
    v4 = dword_183989EFC[34 * v3];
    if ( (_DWORD)v4 == -1 )
      return;
    v3 = *((int *)&unk_1839ABF10 + 396 * v4);
    if ( dword_183989F00[34 * v3] == -1 )
      return;
  }
  v5 = *(int *)((char *)dword_183989F00 + v1);
  if ( (_DWORD)v5 == -1 )
    return;
  v6 = *((int *)&unk_1839ABF10 + 396 * v5);
  if ( dword_183989EFC[34 * v6] == -1 )
  {
    v7 = dword_183989F00[34 * v6];
    if ( (_DWORD)v7 == -1 )
      return;
    v6 = *((int *)&unk_1839ABF10 + 396 * v7);
    if ( dword_183989EFC[34 * v6] == -1 )
      return;
  }
  v8 = 136 * v6;
  v9 = dword_183989EFC[34 * v6];
  if ( (_DWORD)v9 == -1 )
    return;
  v10 = *((int *)&unk_1839ABF10 + 396 * v9);
  if ( dword_183989F08[34 * v10] == -1 )
  {
    v11 = dword_183989EFC[34 * v10];
    if ( (_DWORD)v11 == -1 )
      return;
    v10 = *((int *)&unk_1839ABF10 + 396 * v11);
    if ( dword_183989F08[34 * v10] == -1 )
      return;
  }
  v12 = 4 * (*(_DWORD *)&algn_183989F0C[v1] + *(_DWORD *)&algn_183989EE4[v1]) + 4096;
  v13 = 0.0;
  v132 = v12;
  v14 = 4 * (*(_DWORD *)&algn_183989EE4[136 * v3] - *(_DWORD *)&algn_183989F0C[136 * v3]) + 4096;
  v15 = v14 - v12;
  v133 = v14 - v12;
  v16 = 4 * (*(_DWORD *)((char *)&unk_183989EEC + v1) + *(_DWORD *)((char *)&unk_183989F10 + v1)) + 4096;
  v17 = *(_DWORD *)((char *)&unk_183989EEC + v8) - *(_DWORD *)((char *)&unk_183989F10 + v8);
  v119 = v16;
  v18 = 4 * v17 + 4096;
  v19 = (float)((float)*(int *)((char *)&unk_183989EE8 + v1) * 4.0) + 4.25;
  v20 = 4 * v17 - 4 * (*(_DWORD *)((char *)&unk_183989EEC + v1) + *(_DWORD *)((char *)&unk_183989F10 + v1));
  v21 = (float)((float)*((int *)&unk_183989EE8 + 34 * v3) * 4.0) + 4.25;
  v129 = v20;
  v22 = (float)((float)*(int *)((char *)&unk_183989EE8 + v8) * 4.0) + 4.25;
  v134 = v22;
  v23 = (float)((float)*((int *)&unk_183989EE8 + 34 * v10) * 4.0) + 4.25;
  v137 = v23;
  v24 = 1.0 / (float)(v14 - v12);
  if ( v16 <= v18 )
  {
    do
    {
      v25 = v12;
      v26 = 0.0;
      if ( v12 <= v14 )
      {
        do
        {
          sub_14007A520(
            v25++,
            v16,
            (float)((float)(1.0 - v26) * (float)((float)(v22 * v13) + (float)(v19 * (float)(1.0 - v13))))
          + (float)((float)((float)(v23 * v13) + (float)(v21 * (float)(1.0 - v13))) * v26));
          v26 = v26 + v24;
        }
        while ( v25 <= v14 );
        v22 = v134;
        v23 = v137;
        v12 = v132;
      }
      ++v16;
      v13 = v13 + (float)(1.0 / (float)v20);
    }
    while ( v16 <= v18 );
    v1 = v124;
  }
  v27 = v20 >> 2;
  v128 = v20 >> 2;
  if ( v20 >> 2 >= 0 )
  {
    v28 = (char *)&unk_1403C23DC;
    v29 = (__int64)v15 >> 2;
    v30 = v27 + 1LL;
    do
    {
      if ( v29 >= 0 )
      {
        v31 = v28;
        v32 = v29 + 1;
        do
        {
          v33 = v31;
          v34 = 5;
          do
          {
            *(v33 - 7) = 0;
            *v33 = 0;
            v33[7] = 0;
            v33[14] = 0;
            v33[21] = 0;
            v33 += 1792;
            --v34;
          }
          while ( v34 );
          v31 += 28;
          --v32;
        }
        while ( v32 );
      }
      v28 += 28672;
      --v30;
    }
    while ( v30 );
  }
  v35 = 0;
  v138 = 0;
  if ( v27 > 0 )
  {
    v36 = v15 >> 2;
    v37 = 0;
    v38 = 0;
    v127 = v15 >> 2;
    v122 = 0;
    do
    {
      v39 = 0;
      v40 = 0;
      v135 = 0;
      v120 = 0;
      if ( v36 > 0 )
      {
        v41 = 0;
        do
        {
          v42 = *(_DWORD *)&algn_183989F0C[v1]
              + v39
              + *(_DWORD *)&algn_183989EE4[v1]
              + ((v35 + *(_DWORD *)((char *)&unk_183989EEC + v1) + *(_DWORD *)((char *)&unk_183989F10 + v1)) << 12);
          v43 = *(float *)&dword_18A828078[v42];
          v44 = dword_18A82807C[v42];
          v45 = *(float *)&dword_18A82C078[v42];
          v46 = dword_18A82C07C[v42];
          v126 = v43;
          if ( v43 > 0.0 && v44 > 0.0 && v45 > 0.0 && v46 > 0.0 )
          {
            v47 = 0;
            v131 = 5;
            v48 = 0.0;
            v49 = 112 * (v38 + v40);
            v130 = v49;
            do
            {
              v50 = 0;
              v51 = v49;
              v52 = 0.0;
              v53 = 5;
              do
              {
                v54 = *(int *)((char *)dword_1403C23C0 + v51);
                if ( !(_DWORD)v54 )
                {
                  *(_DWORD *)&algn_1403C23C4[v51] = v41 + v50;
                  *(_DWORD *)((char *)&dword_1403C23C8[3 * v54] + v51) = v37 + v47;
                  *(_DWORD *)((char *)&dword_1403C23C8[3 * (*(int *)((char *)dword_1403C23C0 + v51))++ + 1] + v51) = 1065353216;
                  sub_14007A520(
                    v41 + v50 + v132,
                    v119 + v37 + v47,
                    (float)((float)(1.0 - v52) * (float)((float)(v43 * (float)(1.0 - v48)) + (float)(v45 * v48)))
                  + (float)((float)((float)(v44 * (float)(1.0 - v48)) + (float)(v46 * v48)) * v52));
                }
                ++v50;
                v52 = v52 + 0.25;
                v51 += 28;
                --v53;
              }
              while ( v53 );
              v48 = v48 + 0.25;
              v43 = v126;
              v49 = v130 + 7168;
              ++v47;
              v130 += 7168;
              --v131;
            }
            while ( v131 );
            v40 = v120;
            v1 = v124;
            v35 = v138;
            v38 = v122;
          }
          ++v40;
          v36 = v127;
          v39 = v135 + 1;
          v41 += 4;
          v135 = v39;
          v120 = v40;
        }
        while ( v39 < v127 );
        v27 = v128;
      }
      ++v35;
      v38 += 256;
      v37 += 4;
      v138 = v35;
      v122 = v38;
    }
    while ( v35 < v27 );
    v20 = v129;
    v15 = v133;
  }
  v55 = 16;
  v56 = v20;
  v125 = v20;
  v121 = 16;
  do
  {
    v57 = 1;
    v136 = 1;
    v58 = 1;
    if ( v56 <= 1 )
      goto LABEL_76;
    v59 = 7196;
    v123 = 7196;
    do
    {
      v60 = 1;
      v139 = 1;
      v61 = 1;
      if ( v15 <= 1 )
        goto LABEL_74;
      v62 = v59;
      do
      {
        if ( !*(int *)((char *)dword_1403C23C0 + v62) || *(float *)((char *)&dword_1403C23C8[1] + v62) < 1.0 )
        {
          v63 = -1;
          while ( 1 )
          {
            for ( i = -1; i <= 1; ++i )
            {
              if ( !v63 && !i )
                continue;
              v65 = 7 * (v60 + i + ((v63 + v57) << 8));
              if ( dword_1403C23C0[v65] <= 0 )
                goto LABEL_68;
              v66 = 0;
              v67 = (_DWORD *)(0x140000000LL + v65 * 4 + 3941320);
              do
              {
                v68 = *(v67 - 1);
                v69 = (float)(v68 - v61);
                v70 = (float)(*v67 - v58);
                v71 = fsqrt((float)(v69 * v69) + (float)(v70 * v70));
                v72 = 1.0 - (float)(v71 * 0.0625);
                if ( v72 <= 0.0 )
                  goto LABEL_66;
                if ( v71 == 0.0 )
                {
                  v75 = 0.0;
                  v74 = 0.0;
                }
                else
                {
                  v73 = 1.0 / v71;
                  v74 = v73 * v69;
                  v75 = v73 * v70;
                }
                v76 = *(int *)((char *)dword_1403C23C0 + v62);
                if ( !(_DWORD)v76 )
                {
                  *(_DWORD *)&algn_1403C23C4[v62] = v68;
LABEL_65:
                  *(_DWORD *)((char *)&dword_1403C23C8[3 * *(int *)((char *)dword_1403C23C0 + v62)] + v62) = *v67;
                  *(float *)((char *)&dword_1403C23C8[3 * (*(int *)((char *)dword_1403C23C0 + v62))++ + 1] + v62) = v72;
                  goto LABEL_66;
                }
                v88 = 0;
                v89 = -1;
                if ( (int)v76 > 0 )
                {
                  v90 = (unsigned int)v76;
                  v91 = (char *)dword_1403C23C8 + v62;
                  do
                  {
                    v92 = (float)(*((_DWORD *)v91 - 1) - v61);
                    v93 = (float)(*(_DWORD *)v91 - v58);
                    v94 = fsqrt((float)(v92 * v92) + (float)(v93 * v93));
                    if ( v94 == 0.0 )
                    {
                      v97 = 0.0;
                      v96 = 0.0;
                    }
                    else
                    {
                      v95 = 1.0 / v94;
                      v96 = v95 * v93;
                      v97 = v95 * v92;
                    }
                    if ( (float)((float)(v97 * v74) + (float)(v96 * v75)) > 0.0 )
                    {
                      v89 = -2;
                      if ( v72 > *((float *)v91 + 1) )
                        v89 = v88;
                    }
                    ++v88;
                    v91 += 12;
                    --v90;
                  }
                  while ( v90 );
                  if ( v89 == -2 )
                    goto LABEL_66;
                  if ( v89 != -1 )
                  {
                    v98 = v62 + 12 * v89;
                    *(_DWORD *)&algn_1403C23C4[v98] = v68;
                    v99 = *v67;
                    *(float *)((char *)&dword_1403C23C8[1] + v98) = v72;
                    *(_DWORD *)((char *)dword_1403C23C8 + v98) = v99;
                    goto LABEL_66;
                  }
                }
                if ( (int)v76 < 2 )
                {
                  *(_DWORD *)&algn_1403C23C4[12 * v76 + v62] = v68;
                  goto LABEL_65;
                }
LABEL_66:
                ++v66;
                v67 += 3;
              }
              while ( v66 < dword_1403C23C0[v65] );
              v60 = v139;
LABEL_68:
              v57 = v136;
            }
            if ( ++v63 > 1 )
            {
              v15 = v133;
              break;
            }
          }
        }
        ++v60;
        ++v61;
        v62 += 28;
        v139 = v60;
      }
      while ( v61 < v15 );
      v59 = v123;
LABEL_74:
      v56 = v125;
      ++v57;
      v59 += 7168;
      v136 = v57;
      ++v58;
      v123 = v59;
    }
    while ( v57 < v125 );
    v55 = v121;
LABEL_76:
    v121 = --v55;
  }
  while ( v55 );
  if ( v56 > 1 )
  {
    v77 = (char *)&unk_1403C3FE4;
    v78 = v56 - 1;
    v79 = v133;
    v80 = v119 + 1;
    do
    {
      if ( v79 > 1 )
      {
        v81 = v132;
        v82 = (unsigned int)(v79 - 1);
        v83 = v77;
        v84 = v132 + 1;
        do
        {
          v85 = *((_DWORD *)v83 - 2);
          if ( v85 > 0 )
          {
            v86 = v80 >> 11;
            if ( (unsigned int)(v84 >> 11) > 7 || v86 > 7 )
              v87 = 0.0;
            else
              v87 = *(float *)(*((_QWORD *)&unk_18E8E8158 + 1668 * (int)((v84 >> 11) + 8 * v86))
                             + 4LL * ((v84 & 0x7FF) + 2049 * (v80 & 0x7FFu)));
            v100 = (float *)(v83 + 4);
            v101 = *((unsigned int *)v83 - 2);
            v102 = 0.0;
            do
            {
              v102 = v102 + *v100;
              v100 += 3;
              --v101;
            }
            while ( v101 );
            v103 = v119 + *(_DWORD *)v83;
            v104 = *((_DWORD *)v83 - 1) + v81;
            v105 = v103 >> 11;
            v106 = v104 >> 11;
            if ( v85 <= 1 )
            {
              if ( v106 > 7 || v105 > 7 )
                v114 = 0.0;
              else
                v114 = *(float *)(*((_QWORD *)&unk_18E8E8158 + 1668 * (int)(v106 + 8 * v105))
                                + 4LL * (2049 * (v103 & 0x7FF) + (v104 & 0x7FFu)));
            }
            else
            {
              v107 = *((float *)v83 + 1) / fminf(v102, 1.0);
              if ( v106 > 7 || v105 > 7 )
                v108 = 0.0;
              else
                v108 = *(float *)(*((_QWORD *)&unk_18E8E8158 + 1668 * (int)(v106 + 8 * v105))
                                + 4LL * (2049 * (v103 & 0x7FF) + (v104 & 0x7FFu)));
              v109 = v119 + *((_DWORD *)v83 + 3);
              v110 = v81 + *((_DWORD *)v83 + 2);
              v111 = v109 >> 11;
              if ( (unsigned int)(v110 >> 11) > 7 || v111 > 7 )
                v112 = 0.0;
              else
                v112 = *(float *)(*((_QWORD *)&unk_18E8E8158 + 1668 * (int)((v110 >> 11) + 8 * v111))
                                + 4LL * ((v110 & 0x7FF) + 2049 * (v109 & 0x7FFu)));
              v113 = fminf(fmaxf(v107, 0.0), 1.0);
              v114 = (float)((float)(1.0 - (float)((float)(3.0 - (float)(v113 + v113)) * (float)(v113 * v113))) * v112)
                   + (float)(v108 * (float)((float)(3.0 - (float)(v113 + v113)) * (float)(v113 * v113)));
            }
            v115 = (float *)(v83 + 4);
            v116 = *((unsigned int *)v83 - 2);
            v117 = 0.0;
            do
            {
              v117 = fmaxf(v117, *v115);
              v115 += 3;
              --v116;
            }
            while ( v116 );
            v118 = fminf(fmaxf(v117, 0.0), 1.0);
            sub_14007A520(
              v84,
              v80,
              (float)((float)(1.0 - (float)((float)(3.0 - (float)(v118 + v118)) * (float)(v118 * v118))) * v87)
            + (float)(v114 * (float)((float)(3.0 - (float)(v118 + v118)) * (float)(v118 * v118))));
            v81 = v132;
          }
          ++v84;
          v83 += 28;
          --v82;
        }
        while ( v82 );
        v79 = v133;
      }
      ++v80;
      v77 += 7168;
      --v78;
    }
    while ( v78 );
  }
}

