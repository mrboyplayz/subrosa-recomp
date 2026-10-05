/* Address: 0x14014fcf0 | Name: sub_14014FCF0 | Size: 5265 bytes */
__int64 __fastcall sub_14014FCF0(unsigned int *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v4; // r15d
  float v5; // xmm1_4
  unsigned int v6; // r13d
  unsigned __int64 v7; // r9
  unsigned int v8; // xmm0_4
  unsigned int *v9; // rcx
  unsigned int v10; // xmm0_4
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int *v13; // r14
  int v14; // edx
  unsigned int *v15; // rsi
  int v16; // r11d
  float *v17; // rbp
  int v18; // ecx
  float v19; // xmm7_4
  unsigned int *v20; // rax
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // r10
  int v24; // edi
  __int64 v25; // rbx
  float v26; // xmm3_4
  unsigned int *v27; // r9
  __int64 v28; // rax
  float v29; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ebp
  unsigned int *v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdi
  float v39; // xmm7_4
  float v40; // xmm9_4
  float v41; // xmm10_4
  signed int v42; // eax
  float v43; // xmm7_4
  float v44; // xmm1_4
  float v45; // xmm9_4
  float v46; // xmm0_4
  float v47; // xmm9_4
  float v48; // xmm1_4
  float v49; // xmm10_4
  bool v50; // zf
  __int64 v51; // rcx
  unsigned int v52; // eax
  float v53; // xmm6_4
  float v54; // xmm8_4
  float v55; // xmm6_4
  float v56; // xmm6_4
  float v57; // xmm7_4
  __int64 v58; // rcx
  float v59; // xmm7_4
  float v60; // xmm9_4
  float v61; // xmm7_4
  float v62; // xmm8_4
  float v63; // xmm0_4
  float v64; // xmm9_4
  float v65; // xmm6_4
  __int64 v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // rcx
  float v69; // xmm10_4
  float v70; // xmm6_4
  __int64 v71; // rcx
  float v72; // xmm6_4
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // r8d
  unsigned int *v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // r8d
  unsigned int v80; // edx
  unsigned int *v81; // rax
  float v82; // xmm3_4
  unsigned int *v83; // rbx
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm6_4
  float v87; // xmm7_4
  unsigned int *v88; // rdx
  float v89; // xmm8_4
  __int64 v90; // r10
  int v91; // r8d
  __int64 v92; // rax
  float v93; // xmm0_4
  float v94; // xmm1_4
  float v95; // xmm2_4
  __int64 v96; // rax
  unsigned int v97; // r8d
  __int64 v98; // rax
  float v99; // xmm0_4
  float v100; // xmm1_4
  float v101; // xmm2_4
  __int64 v102; // rax
  unsigned int *v103; // r8
  __int64 v104; // r14
  unsigned int v105; // r13d
  unsigned int *v106; // rdi
  __int64 v107; // r15
  unsigned int v108; // ecx
  __int64 v109; // rdx
  __int64 v110; // rsi
  unsigned int v111; // eax
  __int64 v112; // rcx
  unsigned int *v113; // r12
  __int64 v114; // rbp
  __int64 v115; // rcx
  __int64 v116; // rdx
  int v117; // r8d
  __int64 v118; // rcx
  unsigned int *v119; // r9
  __m128i v120; // xmm0
  int v121; // ecx
  signed int v122; // edx
  signed int v123; // r8d
  int v124; // ecx
  float *v125; // r12
  unsigned int *v126; // r11
  __int64 v127; // rdx
  float v128; // xmm0_4
  float v129; // xmm3_4
  float v130; // xmm4_4
  __int64 v131; // rcx
  int v132; // eax
  float v133; // xmm6_4
  float v134; // xmm6_4
  float v135; // xmm6_4
  __int64 v137; // [rsp+0h] [rbp-128h] BYREF
  unsigned int v138; // [rsp+20h] [rbp-108h]
  int v139; // [rsp+28h] [rbp-100h]
  unsigned int *v140; // [rsp+30h] [rbp-F8h]
  float *v141; // [rsp+38h] [rbp-F0h]
  unsigned int *v142; // [rsp+40h] [rbp-E8h]
  __int64 v143; // [rsp+48h] [rbp-E0h] BYREF
  float v144; // [rsp+50h] [rbp-D8h]
  __int64 v145; // [rsp+58h] [rbp-D0h]

  v4 = dword_140404A6C[283831309];
  v5 = 1.0;
  v6 = dword_140404A6C[283831448];
  v142 = a3;
  v141 = (float *)a1;
  if ( dword_140404A6C[283831309] && dword_140404A6C[283831448] == 2 )
    v5 = fminf(fmaxf((float)(int)dword_140404A6C[283831450] * 0.016666668, 0.0), 1.0);
  v7 = 0x140000000uLL;
  *(float *)&dword_140404A6C[18198666] = (float)((float)((float)(int)dword_140404A6C[73991612] * v5)
                                               * (float)((float)(int)dword_140404A6C[73991612] * v5))
                                       * 0.000099999997;
  dword_140404A6C[18198546] = *a1;
  dword_140404A6C[18198547] = a1[1];
  v8 = a1[2];
  v9 = &dword_140404A6C[129721918];
  dword_140404A6C[18198548] = v8;
  dword_140404A6C[18198549] = *a2;
  dword_140404A6C[18198550] = a2[1];
  dword_140404A6C[18198551] = a2[2];
  dword_140404A6C[18198552] = a2[3];
  dword_140404A6C[18198553] = a2[4];
  dword_140404A6C[18198554] = a2[5];
  dword_140404A6C[18198555] = a2[6];
  dword_140404A6C[18198556] = a2[7];
  dword_140404A6C[18198557] = a2[8];
  dword_140404A6C[18198558] = *a3;
  dword_140404A6C[18198559] = a3[1];
  v10 = a3[2];
  v11 = 512;
  dword_140404A6C[18198560] = v10;
  do
  {
    v12 = (int)*v9;
    if ( (_DWORD)v12 != -1 && (!*(v9 - 5209) || !v4) )
    {
      if ( !dword_140404A6C[278720 * v12 + 327698] )
        dword_140404A6C[278720 * v12 + 327698] = 1;
      *v9 = -1;
    }
    v9 += 5210;
    --v11;
  }
  while ( v11 );
  v13 = &dword_140404A6C[70326528];
  v14 = dword_140404A6C[70326525];
  if ( !v4 )
    goto LABEL_92;
  if ( v6 != 3 )
  {
    v15 = &dword_140404A6C[129716710];
    v16 = 0;
    v17 = (float *)&dword_140404A6C[285044403];
    do
    {
      if ( *(v15 - 1) && ((*v15 - 12) & 0xFFFFFFFD) != 0 && (int)v15[3659] > 0 )
      {
        v18 = 0;
        v19 = fsqrt(
                (float)((float)((float)(*((float *)a1 + 1) - *(v17 - 1)) * (float)(*((float *)a1 + 1) - *(v17 - 1)))
                      + (float)((float)(*(float *)a1 - *(v17 - 2)) * (float)(*(float *)a1 - *(v17 - 2))))
              + (float)((float)(*((float *)a1 + 2) - *v17) * (float)(*((float *)a1 + 2) - *v17)));
        if ( v14 <= 0 )
        {
LABEL_22:
          if ( v14 >= 8 )
          {
            v22 = 0;
            v23 = 0;
            v24 = -1;
            v25 = -1;
            v26 = 65536.0;
            v27 = &dword_140404A6C[70326526];
            do
            {
              v28 = (int)*v27;
              if ( (_DWORD)v28 != v16 )
              {
                v29 = *((float *)a1 + 1) - *(float *)&dword_140404A6C[77 * v28 + 285044402];
                v30 = *((float *)a1 + 2) - *(float *)&dword_140404A6C[77 * v28 + 285044403];
                v31 = fsqrt(
                        (float)((float)(v29 * v29)
                              + (float)((float)(*(float *)a1 - *(float *)&dword_140404A6C[77 * v28 + 285044401])
                                      * (float)(*(float *)a1 - *(float *)&dword_140404A6C[77 * v28 + 285044401])))
                      + (float)(v30 * v30));
                if ( v19 < v31 && v26 > v31 )
                {
                  v24 = v22;
                  v25 = v23;
                  v26 = v31;
                }
              }
              ++v22;
              ++v23;
              v27 += 5;
            }
            while ( v22 < v14 );
            v7 = 0x140000000uLL;
            if ( v24 != -1 )
            {
              v32 = (int)dword_140404A6C[5 * v25 + 70326527];
              if ( (_DWORD)v32 != -1 && !dword_140404A6C[278720 * v32 + 327698] )
                dword_140404A6C[278720 * v32 + 327698] = 1;
              v33 = (int)dword_140404A6C[5 * v25 + 70326528];
              if ( (_DWORD)v33 != -1 && !dword_140404A6C[278720 * v33 + 327698] )
                dword_140404A6C[278720 * v33 + 327698] = 1;
              dword_140404A6C[5 * v25 + 70326526] = v16;
              *(_QWORD *)&dword_140404A6C[5 * v25 + 70326529] = 0;
              *(_QWORD *)&dword_140404A6C[5 * v25 + 70326527] = -1;
              v14 = dword_140404A6C[70326525];
            }
          }
          else
          {
            v21 = 5LL * v14;
            dword_140404A6C[v21 + 70326526] = v16;
            dword_140404A6C[5 * v14 + 70326527] = -1;
            dword_140404A6C[v21 + 70326528] = -1;
            *(_QWORD *)&dword_140404A6C[v21 + 70326529] = 0;
            v14 = ++dword_140404A6C[70326525];
          }
        }
        else
        {
          v20 = &dword_140404A6C[70326526];
          while ( *v20 != v16 )
          {
            ++v18;
            v20 += 5;
            if ( v18 >= v14 )
              goto LABEL_22;
          }
        }
      }
      ++v16;
      v15 += 5210;
      v17 += 77;
    }
    while ( v16 < 512 );
    v4 = dword_140404A6C[283831309];
    v34 = 0;
    if ( v14 > 0 )
    {
      v35 = &dword_140404A6C[70326527];
      while ( 1 )
      {
        v36 = (int)*(v35 - 1);
        v37 = 77 * v36;
        v38 = 5210 * v36;
        v39 = *(float *)&dword_140404A6C[77 * v36 + 285044401];
        v40 = *(float *)&dword_140404A6C[77 * v36 + 285044402];
        v41 = *(float *)&dword_140404A6C[77 * v36 + 285044403];
        if ( dword_140404A6C[5210 * v36 + 129716709]
          && (float)((float)((float)((float)(*((float *)a1 + 1) - v40) * (float)(*((float *)a1 + 1) - v40))
                           + (float)((float)(*(float *)a1 - v39) * (float)(*(float *)a1 - v39)))
                   + (float)((float)(*((float *)a1 + 2) - v41) * (float)(*((float *)a1 + 2) - v41))) < 65536.0
          && (int)dword_140404A6C[v38 + 129720369] > 0 )
        {
          v42 = *v35;
          v43 = (float)(v39 - (float)(*(float *)&dword_140404A6C[v37 + 285044410] * 2.5))
              - (float)(*(float *)&dword_140404A6C[v37 + 285044407] * 0.25);
          v44 = *(float *)&dword_140404A6C[v37 + 285044408] * 0.25;
          v45 = v40 - (float)(*(float *)&dword_140404A6C[v37 + 285044411] * 2.5);
          v46 = *(float *)&dword_140404A6C[v37 + 285044412] * 2.5;
          *(float *)&v143 = v43;
          v47 = v45 - v44;
          v48 = *(float *)&dword_140404A6C[v37 + 285044409] * 0.25;
          *((float *)&v143 + 1) = v47;
          v49 = (float)(v41 - v46) - v48;
          v144 = v49;
          if ( v42 != -1
            || ((v50 = dword_140404A6C[v38 + 129716710] == 13, v138 = 1, !v50)
              ? (v42 = sub_140069FA0(dword_140404A6C[283785942], (unsigned int *)&v143, 0.5, 1.0, v138))
              : (v42 = sub_140069FA0(dword_140404A6C[283786013], (unsigned int *)&v143, 0.125, 1.0, v138)),
                *v35 = v42,
                v7 = 0x140000000uLL,
                v42 != -1) )
          {
            v51 = 278720LL * v42;
            v52 = dword_140404A6C[v38 + 129716744];
            *(float *)&dword_140404A6C[v51 + 606302] = v43;
            *(float *)&dword_140404A6C[v51 + 606303] = v47;
            *(float *)&dword_140404A6C[v51 + 606304] = v49;
            dword_140404A6C[v51 + 606305] = v52;
            dword_140404A6C[v51 + 606306] = dword_140404A6C[v38 + 129716745];
            dword_140404A6C[v51 + 606307] = dword_140404A6C[v38 + 129716746];
            v53 = (float)(int)dword_140404A6C[v38 + 129720369];
            if ( (int)dword_140404A6C[v38 + 129720369] < 100 )
              v54 = 0.29882812;
            else
              v54 = (float)(v53 * 0.00048828125) + 0.25;
            if ( dword_140404A6C[v38 + 129716710] == 13 )
            {
              v56 = v53 * 0.0078125;
              if ( v56 < 0.25 )
                v56 = 0.0;
              v55 = fminf(v56, 1.0);
              v54 = fmaxf(v54, 0.5) * 0.5;
            }
            else
            {
              v55 = fminf(v53 * 0.015625, 0.5);
            }
            if ( (float)((float)((float)((float)(*((float *)a1 + 1) - v47) * (float)(*((float *)a1 + 1) - v47))
                               + (float)((float)(*(float *)a1 - v43) * (float)(*(float *)a1 - v43)))
                       + (float)((float)(*((float *)a1 + 2) - v49) * (float)(*((float *)a1 + 2) - v49))) <= 16384.0 )
            {
              v57 = 1.0;
              if ( (unsigned int)sub_1400DC050(&v143, a1, 0) )
                v57 = 0.5;
              v7 = 0x140000000uLL;
            }
            else
            {
              v57 = 0.5;
            }
            v58 = 278720LL * (int)*v35;
            v59 = (float)((float)((float)((float)(v57 * v55) * 0.5) - *((float *)v35 + 2)) * 0.125)
                + *((float *)v35 + 2);
            *(float *)&dword_140404A6C[v58 + 327704] = v59;
            *(float *)&dword_140404A6C[v58 + 327706] = v54;
            *((float *)v35 + 2) = v59;
          }
          v50 = dword_140404A6C[v38 + 129716710] == 13;
          v60 = (float)(*(float *)&dword_140404A6C[v37 + 285044412] * 0.125)
              + *(float *)&dword_140404A6C[v37 + 285044403];
          v61 = (float)((float)(*(float *)&dword_140404A6C[v37 + 285044410] * 0.125)
                      + *(float *)&dword_140404A6C[v37 + 285044401])
              - (float)(*(float *)&dword_140404A6C[v37 + 285044407] * 0.25);
          v62 = (float)((float)(*(float *)&dword_140404A6C[v37 + 285044411] * 0.125)
                      + *(float *)&dword_140404A6C[v37 + 285044402])
              - (float)(*(float *)&dword_140404A6C[v37 + 285044408] * 0.25);
          *(float *)&v143 = v61;
          v63 = *(float *)&dword_140404A6C[v37 + 285044409] * 0.25;
          *((float *)&v143 + 1) = v62;
          v64 = v60 - v63;
          v144 = v64;
          if ( !v50 && v35[1] == -1 )
          {
            v65 = fminf(
                    (float)(*(float *)&dword_140404A6C[v38 + 129720536] + *(float *)&dword_140404A6C[v38 + 129720493])
                  + (float)(*(float *)&dword_140404A6C[v38 + 129720450] + *(float *)&dword_140404A6C[v38 + 129720407]),
                    0.25);
            if ( v65 > 0.0625 )
            {
              v35[1] = sub_140069FA0(dword_140404A6C[283785946], (unsigned int *)&v143, v65, 1.0, 1u);
              v7 = 0x140000000uLL;
              *((float *)v35 + 3) = v65;
            }
          }
          v66 = (int)v35[1];
          if ( (_DWORD)v66 == -1 )
            goto LABEL_87;
          v67 = dword_140404A6C[v38 + 129716744];
          v68 = 278720 * v66;
          v69 = fminf(
                  (float)(*(float *)&dword_140404A6C[v38 + 129720536] + *(float *)&dword_140404A6C[v38 + 129720493])
                + (float)(*(float *)&dword_140404A6C[v38 + 129720450] + *(float *)&dword_140404A6C[v38 + 129720407]),
                  1.0);
          *(float *)&dword_140404A6C[v68 + 606302] = v61;
          *(float *)&dword_140404A6C[v68 + 606303] = v62;
          *(float *)&dword_140404A6C[v68 + 606304] = v64;
          dword_140404A6C[v68 + 606305] = v67;
          dword_140404A6C[v68 + 606306] = dword_140404A6C[v38 + 129716745];
          dword_140404A6C[v68 + 606307] = dword_140404A6C[v38 + 129716746];
          if ( (float)((float)((float)((float)(*((float *)a1 + 1) - v62) * (float)(*((float *)a1 + 1) - v62))
                             + (float)((float)(*(float *)a1 - v61) * (float)(*(float *)a1 - v61)))
                     + (float)((float)(*((float *)a1 + 2) - v64) * (float)(*((float *)a1 + 2) - v64))) <= 16384.0 )
          {
            v70 = 1.0;
            if ( (unsigned int)sub_1400DC050(&v143, a1, 0) )
              v70 = 0.5;
            LODWORD(v66) = v35[1];
            v7 = 0x140000000uLL;
          }
          else
          {
            v70 = 0.5;
          }
          v71 = 278720LL * (int)v66;
          v72 = (float)((float)((float)(v70 * v69) - *((float *)v35 + 3)) * 0.125) + *((float *)v35 + 3);
          *((float *)v35 + 3) = v72;
          *(float *)&dword_140404A6C[v71 + 327704] = v72;
          if ( v72 >= 0.0625 || (_DWORD)v66 == -1 )
            goto LABEL_87;
          if ( !dword_140404A6C[v71 + 327698] )
            dword_140404A6C[v71 + 327698] = 1;
        }
        else
        {
          v73 = (int)*v35;
          if ( (_DWORD)v73 != -1 )
          {
            if ( !dword_140404A6C[278720 * v73 + 327698] )
              dword_140404A6C[278720 * v73 + 327698] = 1;
            *v35 = -1;
            v14 = dword_140404A6C[70326525];
          }
          v74 = (int)v35[1];
          if ( (_DWORD)v74 == -1 )
            goto LABEL_88;
          if ( !dword_140404A6C[278720 * v74 + 327698] )
            dword_140404A6C[278720 * v74 + 327698] = 1;
        }
        v35[1] = -1;
LABEL_87:
        v14 = dword_140404A6C[70326525];
LABEL_88:
        ++v34;
        v35 += 5;
        if ( v34 >= v14 )
        {
          v6 = dword_140404A6C[283831448];
          v4 = dword_140404A6C[283831309];
          break;
        }
      }
    }
  }
  if ( !v4 || v6 == 3 )
  {
LABEL_92:
    v75 = 0;
    if ( v14 > 0 )
    {
      v76 = &dword_140404A6C[70326528];
      do
      {
        v77 = (int)*(v76 - 1);
        if ( (_DWORD)v77 != -1 )
        {
          if ( !dword_140404A6C[278720 * v77 + 327698] )
            dword_140404A6C[278720 * v77 + 327698] = 1;
          *(v76 - 1) = -1;
          v14 = dword_140404A6C[70326525];
        }
        v78 = (int)*v76;
        if ( (_DWORD)v78 != -1 )
        {
          if ( !dword_140404A6C[278720 * v78 + 327698] )
            dword_140404A6C[278720 * v78 + 327698] = 1;
          *v76 = -1;
          v14 = dword_140404A6C[70326525];
        }
        ++v75;
        v76 += 5;
      }
      while ( v75 < v14 );
    }
  }
  v79 = 0;
  while ( v79 < v14 )
  {
    if ( *(v13 - 1) == -1 && *v13 == -1 )
    {
      v80 = v14 - 1;
      dword_140404A6C[70326525] = v80;
      *(_OWORD *)(v13 - 2) = *(_OWORD *)&dword_140404A6C[5 * v80 + 70326526];
      v13[2] = dword_140404A6C[5 * v80 + 70326530];
      v14 = dword_140404A6C[70326525];
    }
    else
    {
      ++v79;
      v13 += 5;
    }
  }
  v81 = &dword_140404A6C[71856270];
  do
  {
    *v81 = 0;
    v81 += 3597;
  }
  while ( (__int64)v81 < (__int64)&dword_140404A6C[72777102] );
  if ( !v4 )
  {
    dword_140404A6C[308307077] = 0;
    dword_140404A6C[308403478] = 0;
    dword_140404A6C[308499879] = 0;
    dword_140404A6C[308596280] = 0;
    dword_140404A6C[308692681] = 0;
    dword_140404A6C[308789082] = 0;
    dword_140404A6C[308885483] = 0;
    dword_140404A6C[308981884] = 0;
  }
  v82 = *(float *)&dword_140404A6C[284024513];
  v83 = &dword_140404A6C[308307086];
  v84 = *(float *)&dword_140404A6C[284024512];
  v85 = *(float *)&dword_140404A6C[284024511];
  v86 = *(float *)&dword_140404A6C[284024504];
  v87 = *(float *)&dword_140404A6C[284024503];
  v88 = &dword_140404A6C[308307086];
  v89 = *(float *)&dword_140404A6C[284024502];
  v90 = 4;
  do
  {
    v91 = *(v88 - 9);
    if ( v91 )
    {
      v7 = (int)*(v88 - 7);
      if ( (_DWORD)v7 != -1 && dword_140404A6C[v7 + 284023074] )
      {
        *(v88 - 9) = 0;
        v91 = 0;
      }
      v92 = (int)*(v88 - 5);
      if ( (_DWORD)v92 == -1 || v6 == 3 )
      {
        v96 = (int)*(v88 - 4);
        if ( (_DWORD)v96 == -1 )
        {
          v93 = v86 - v82;
          v94 = v87 - v84;
          v95 = v89 - v85;
        }
        else
        {
          v93 = *(float *)&dword_140404A6C[13 * v96 + 285083827];
          v94 = *(float *)&dword_140404A6C[13 * v96 + 285083826];
          v95 = *(float *)&dword_140404A6C[13 * v96 + 285083825];
        }
      }
      else
      {
        v93 = *(float *)&dword_140404A6C[344 * v92 + 284956409];
        v94 = *(float *)&dword_140404A6C[344 * v92 + 284956408];
        v95 = *(float *)&dword_140404A6C[344 * v92 + 284956407];
      }
      *((float *)v88 - 2) = v95;
      *((float *)v88 - 1) = v94;
      *(float *)v88 = v93;
      if ( v91 && (_DWORD)v7 != -1 )
        dword_140404A6C[3597 * v7 + 71856270] = 1;
    }
    v97 = v88[96392];
    if ( v97 )
    {
      v7 = (int)v88[96394];
      if ( (_DWORD)v7 != -1 && dword_140404A6C[v7 + 284023074] )
      {
        v88[96392] = 0;
        v97 = 0;
      }
      v98 = (int)v88[96396];
      if ( (_DWORD)v98 == -1 || v6 == 3 )
      {
        v102 = (int)v88[96397];
        if ( (_DWORD)v102 == -1 )
        {
          v99 = v86 - v82;
          v100 = v87 - v84;
          v101 = v89 - v85;
        }
        else
        {
          v99 = *(float *)&dword_140404A6C[13 * v102 + 285083827];
          v100 = *(float *)&dword_140404A6C[13 * v102 + 285083826];
          v101 = *(float *)&dword_140404A6C[13 * v102 + 285083825];
        }
      }
      else
      {
        v99 = *(float *)&dword_140404A6C[344 * v98 + 284956409];
        v100 = *(float *)&dword_140404A6C[344 * v98 + 284956408];
        v101 = *(float *)&dword_140404A6C[344 * v98 + 284956407];
      }
      *((float *)v88 + 96399) = v101;
      *((float *)v88 + 96400) = v100;
      *((float *)v88 + 96401) = v99;
      if ( v97 && (_DWORD)v7 != -1 )
        dword_140404A6C[3597 * v7 + 71856270] = 1;
    }
    v88 += 192802;
    --v90;
  }
  while ( v90 );
  v103 = &dword_140404A6C[299853565];
  v104 = 0;
  v140 = &dword_140404A6C[299853565];
  v105 = 2048;
  v143 = 8;
  v106 = &dword_140404A6C[18182165];
  v107 = 0;
  do
  {
    v108 = *(v83 - 9);
    v109 = v105 - 1992;
    v83[63623] = v109;
    if ( v108 && (!*(v83 - 8) || *(v83 - 6) != *(v83 - 7)) )
    {
      sub_1401E27C0(*(_QWORD *)v103, 4028);
      v108 = *(v83 - 9);
      v109 = v83[63623];
      v83[30726] = ((unsigned __int8)v83[30725] - 8) & 0x3F;
    }
    *(v83 - 6) = *(v83 - 7);
    *(v83 - 8) = v108;
    if ( v108 )
    {
      if ( dword_140404A6C[7] )
      {
        v110 = 278720LL * (int)v109;
        if ( !dword_140404A6C[v110 + 327697] )
        {
          MEMORY[0x1401FCD30](&dword_140404A6C[v110 + 327698], 0, 1114876);
          v111 = *(v83 - 2);
          dword_140404A6C[v110 + 327772] = 0;
          dword_140404A6C[v110 + 589917] = 0;
          *(_QWORD *)&dword_140404A6C[v110 + 327697] = 1;
          dword_140404A6C[v110 + 327699] = 1065353216;
          dword_140404A6C[v110 + 327700] = 1;
          dword_140404A6C[v110 + 327702] = v105;
          dword_140404A6C[v110 + 327704] = 1065353216;
          dword_140404A6C[v110 + 327705] = 1065353216;
          dword_140404A6C[v110 + 327706] = 1065353216;
          dword_140404A6C[v110 + 327707] = 1065353216;
          dword_140404A6C[v110 + 327708] = 1;
          *(_QWORD *)v106 = 0;
          dword_140404A6C[v110 + 606302] = v111;
          dword_140404A6C[v110 + 606303] = *(v83 - 1);
          dword_140404A6C[v110 + 606304] = *v83;
          dword_140404A6C[v110 + 606308] = v106[2];
          dword_140404A6C[v110 + 606310] = 1;
          dword_140404A6C[v110 + 606414] = 0;
        }
      }
    }
    else
    {
      v112 = 278720LL * (int)v109;
      if ( !dword_140404A6C[v112 + 327698] )
        dword_140404A6C[v112 + 327698] = 1;
    }
    v113 = v140;
    v114 = 8;
    do
    {
      if ( (int)sub_14007D6C0(v105, v109, v103, v7) < 5760 )
      {
        v115 = (int)v83[30726];
        if ( (_DWORD)v115 != (v83[30725] & 0x3F) )
        {
          v139 = 0;
          v116 = v115;
          v138 = 2048;
          v117 = dword_140404A6C[v104 + 308337813 + v115];
          v118 = *(_QWORD *)v113;
          v119 = &dword_140404A6C[v107 + 308307091];
          if ( v117 <= 0 )
          {
            sub_1401E25C0(v118, 0, 0, (_DWORD)v119, v138, v139);
            MEMORY[0x1401FCD30](&dword_140404A6C[v107 + 308307091], 0, 1920);
          }
          else
          {
            sub_1401E25C0(
              v118,
              (unsigned int)&dword_140404A6C[512 * v116 + 308337941 + v107],
              v117,
              (_DWORD)v119,
              v138,
              v139);
          }
          v103 = (unsigned int *)((char *)v83 + 22);
          LODWORD(v109) = 0;
          dword_140404A6C[v104 + 308337813 + (int)v83[30726]] = 0;
          v7 = 96;
          do
          {
            *(float *)(*((_QWORD *)v106 - 1) + 4LL * (((_DWORD)v109 + *v106) & 0x3FFFF)) = (float)*((__int16 *)v103 - 1)
                                                                                         * 0.000030517578;
            *(float *)(*((_QWORD *)v106 - 1) + 4LL * (((_DWORD)v109 + *v106 + 1) & 0x3FFFF)) = (float)*(__int16 *)v103
                                                                                             * 0.000030517578;
            *(float *)(*((_QWORD *)v106 - 1) + 4LL * (((_DWORD)v109 + *v106 + 2) & 0x3FFFF)) = (float)*((__int16 *)v103 + 1)
                                                                                             * 0.000030517578;
            *(float *)(*((_QWORD *)v106 - 1) + 4LL * (((_DWORD)v109 + *v106 + 3) & 0x3FFFF)) = (float)*((__int16 *)v103 + 2)
                                                                                             * 0.000030517578;
            *(float *)(*((_QWORD *)v106 - 1) + 4LL * (((_DWORD)v109 + *v106 + 4) & 0x3FFFF)) = (float)*((__int16 *)v103 + 3)
                                                                                             * 0.000030517578;
            *(float *)(*((_QWORD *)v106 - 1) + 4LL * (((_DWORD)v109 + *v106 + 5) & 0x3FFFF)) = (float)*((__int16 *)v103 + 4)
                                                                                             * 0.000030517578;
            *(float *)(*((_QWORD *)v106 - 1) + 4LL * (((_DWORD)v109 + *v106 + 6) & 0x3FFFF)) = (float)*((__int16 *)v103 + 5)
                                                                                             * 0.000030517578;
            *(float *)(*((_QWORD *)v106 - 1) + 4LL * (((_DWORD)v109 + *v106 + 7) & 0x3FFFF)) = (float)*((__int16 *)v103 + 6)
                                                                                             * 0.000030517578;
            v120 = _mm_cvtsi32_si128(*((__int16 *)v103 + 7));
            v103 += 5;
            *(float *)(*((_QWORD *)v106 - 1) + 4LL * (((_DWORD)v109 + *v106 + 8) & 0x3FFFF)) = _mm_cvtepi32_ps(v120).m128_f32[0]
                                                                                             * 0.000030517578;
            v121 = v109 + *v106;
            v109 = (unsigned int)(v109 + 10);
            *(float *)(*((_QWORD *)v106 - 1) + 4LL * ((v121 + 9) & 0x3FFFF)) = (float)*((__int16 *)v103 - 2)
                                                                             * 0.000030517578;
            --v7;
          }
          while ( v7 );
          *v106 = (*v106 + 960) & 0x3FFFF;
          v83[30726] = ((unsigned __int8)v83[30726] + 1) & 0x3F;
        }
      }
      --v114;
    }
    while ( v114 );
    v122 = v83[30725];
    v123 = v83[30726];
    v124 = v122 - v123;
    v125 = v141;
    if ( *(v83 - 9) )
    {
      if ( v122 < v123 )
        v124 += 64;
      if ( v124 > 16 )
        v83[30726] = ((_BYTE)v122 - 8) & 0x3F;
    }
    v126 = v142;
    v127 = (int)v83[63623];
    v128 = *((float *)v83 - 2);
    v129 = *((float *)v83 - 1);
    v130 = *(float *)v83;
    v131 = 278720 * v127;
    v50 = *(v83 - 4) == -1;
    *(float *)&dword_140404A6C[v131 + 606302] = v128;
    *(float *)&dword_140404A6C[v131 + 606303] = v129;
    *(float *)&dword_140404A6C[v131 + 606304] = v130;
    dword_140404A6C[v131 + 606305] = *v126;
    dword_140404A6C[v131 + 606306] = v126[1];
    dword_140404A6C[v131 + 606307] = v126[2];
    if ( v50 )
    {
      v132 = *(v83 - 3);
      if ( v132 )
      {
        if ( v132 == 1 )
          dword_140404A6C[v131 + 606308] = 1086324736;
        else
          dword_140404A6C[v131 + 606308] = 1098907648;
      }
      else
      {
        dword_140404A6C[v131 + 606308] = 0x40000000;
      }
    }
    else
    {
      dword_140404A6C[v131 + 606308] = 1065353216;
    }
    if ( (float)((float)((float)((float)(v125[1] - v129) * (float)(v125[1] - v129))
                       + (float)((float)(*v125 - v128) * (float)(*v125 - v128)))
               + (float)((float)(v125[2] - v130) * (float)(v125[2] - v130))) <= 16384.0 )
    {
      v133 = 1.0;
      if ( (unsigned int)sub_1400DC050(v83 - 2, v125, 0) )
        v133 = 0.5;
      LODWORD(v127) = v83[63623];
    }
    else
    {
      v133 = 0.5;
    }
    ++v105;
    v103 = v140 + 2;
    v134 = (float)(v133 - *((float *)v83 + 4)) * 0.125;
    v107 += 96401;
    v140 += 2;
    v135 = v134 + *((float *)v83 + 4);
    v104 += 96401;
    v106 += 8;
    *((float *)v83 + 4) = v135;
    v83 += 96401;
    v50 = v143-- == 1;
    *(float *)&dword_140404A6C[278720 * (int)v127 + 327704] = v135;
  }
  while ( !v50 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v137 ^ v145);
}

