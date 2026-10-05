/* Address: 0x140051e50 | Name: sub_140051E50 | Size: 4019 bytes */
__int64 __fastcall sub_140051E50(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  unsigned __int64 v5; // rbx
  unsigned int v6; // r13d
  __int64 result; // rax
  _DWORD *v8; // rdi
  float *v9; // r15
  unsigned __int64 v10; // rbp
  float v11; // xmm7_4
  float v12; // xmm6_4
  int v13; // r14d
  _DWORD *v14; // rsi
  float v15; // xmm2_4
  float *v16; // r12
  float v17; // xmm1_4
  float v18; // xmm0_4
  __int64 v19; // rdi
  __int64 v20; // r14
  BOOL v21; // esi
  unsigned __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // r9
  unsigned int v25; // ecx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  int v28; // eax
  float v29; // xmm0_4
  unsigned __int64 v30; // r10
  int v31; // edx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r9
  unsigned __int64 v35; // rcx
  int v36; // edi
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // ecx
  unsigned __int64 v41; // rcx
  float v42; // xmm0_4
  float v43; // xmm6_4
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // r10
  __int64 v47; // r9
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rbp
  int v57; // edx
  bool v58; // zf
  unsigned __int64 v59; // r14
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rdx
  float v69; // xmm3_4
  unsigned __int64 v70; // rsi
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // edx
  BOOL v74; // edx
  _BOOL8 v75; // rax
  float v76; // xmm0_4
  unsigned __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rdx
  double v83; // xmm0_8
  unsigned int v84; // r14d
  float *v85; // r13
  int v86; // esi
  float v87; // xmm2_4
  float v88; // xmm1_4
  float v89; // xmm0_4
  unsigned __int64 v90; // rdx
  __int64 v91; // r9
  __int64 v92; // r8
  _BOOL8 v93; // r8
  int *v94; // r8
  float v95; // xmm10_4
  int i; // edx
  int v97; // r10d
  int v98; // ecx
  float v99; // xmm11_4
  float *v100; // r9
  float v101; // xmm12_4
  float v102; // xmm13_4
  float v103; // xmm14_4
  float v104; // xmm15_4
  float v105; // xmm2_4
  float v106; // xmm5_4
  float v107; // xmm1_4
  float v108; // xmm4_4
  float v109; // xmm8_4
  float v110; // xmm6_4
  float v111; // xmm9_4
  float v112; // xmm1_4
  float v113; // xmm7_4
  int *v114; // rax
  float v115; // [rsp+20h] [rbp-E8h] BYREF
  float v116; // [rsp+24h] [rbp-E4h]
  float v117; // [rsp+28h] [rbp-E0h]

  v4 = a1;
  v5 = 28664LL * (int)a1;
  v6 = -1;
  result = *(int *)((char *)&unk_1909487BC + v5);
  *(_DWORD *)((char *)&unk_1909487A8 + v5) = -1;
  if ( (_DWORD)result != *(_DWORD *)((char *)&unk_1909487C0 + v5) )
  {
    v8 = &unk_19025F0E4;
    v9 = (float *)dword_19025F11C;
    v10 = v5 + 48 * result;
    v11 = 0.5;
    *(_DWORD *)((char *)&unk_1909487A8 + v5) = *(int *)((char *)&dword_1909487C4 + v10);
    *(_DWORD *)((char *)&unk_1909487AC + v5) = *(int *)((char *)&dword_1909487C8 + v10);
    *(_DWORD *)((char *)&unk_1909487B0 + v5) = (int)(float)(*(float *)((char *)&dword_1909487C8 + v10) * 100.0);
    result = *(unsigned int *)((char *)&dword_1909487C4 + v10);
    if ( (_DWORD)result == 4 )
    {
      if ( dword_1909419F0[v5 / 4] == -1 )
      {
        v12 = 0.5;
        v13 = 0;
        v14 = &unk_19025F0E4;
        v15 = *(float *)((char *)&xmmword_190941FD4 + v5 + 12) * 1.5;
        v16 = (float *)dword_19025F11C;
        v17 = *(float *)&dword_190941FE4[v5 / 4] * 1.5;
        v115 = *(float *)&dword_190941F94[v5 / 4] - (float)(*(float *)((char *)&xmmword_190941FD4 + v5 + 8) * 1.5);
        v116 = *(float *)&dword_190941F94[v5 / 4 + 1] - v15;
        v117 = *(float *)&dword_190941F94[v5 / 4 + 2] - v17;
        do
        {
          if ( *(v14 - 9) )
          {
            if ( *v14 == -1 && v14[1] == -1 )
            {
              v18 = sub_1400492D0((float *)&dword_190941F94[v5 / 4], &v115, v16);
              if ( v18 < v12 )
              {
                v6 = v13;
                v12 = v18;
              }
            }
          }
          ++v13;
          v16 += 1760;
          v14 += 1760;
        }
        while ( v13 < 1024 );
        v4 = a1;
        if ( v6 != -1 && dword_19025F0D4[1760 * v6] == 39 && !dword_190948498[v5 / 4] )
          sub_140089E50(v6, 0xFFFFFFFFLL, a1, 0);
      }
      *(_DWORD *)((char *)&unk_1909487BC + v5) = ((unsigned __int8)*(_DWORD *)((char *)&unk_1909487BC + v5) + 1) & 7;
      result = *(unsigned int *)((char *)&dword_1909487C4 + v10);
    }
    if ( (_DWORD)result == 2 )
    {
      LODWORD(v19) = *(int *)((char *)&dword_1909487EC + v10);
      v20 = *(int *)((char *)&dword_1909487F0 + v10);
      if ( (int)v19 < 2 )
        goto LABEL_35;
      v21 = 1;
      v22 = v5 + 40 * (v20 + 2);
      v23 = *(int *)((char *)dword_190948498 + v22);
      if ( v23 > 0 )
      {
        v24 = dword_19025F0D4[1760 * *(int *)((char *)dword_19094849C + v22)];
        if ( dword_1901220E4[1268 * v24] > 0 )
          v21 = (unsigned int)(v24 - 13) <= 1;
      }
      v25 = !v21;
      if ( dword_190948498[10 * v21 + v5 / 4] )
        v25 = v21;
      v26 = v25 ^ 1;
      if ( (_DWORD)v19 != 2 )
        v26 = v25;
      v19 = (unsigned int)v26;
      v27 = v5 + 40 * v26;
      v28 = *(int *)((char *)dword_190948498 + v27);
      if ( v28 <= 0 )
      {
        if ( !v28 && !dword_1909485E8[14 * v19 + v5 / 4] && v23 > 0 )
          goto LABEL_34;
      }
      else if ( dword_19012269C[1268 * dword_19025F0D4[1760 * *(int *)((char *)dword_19094849C + v27)] + v20] && v23 < 2 )
      {
LABEL_34:
        *(int *)((char *)&dword_1909487EC + v10) = v19;
LABEL_35:
        if ( (_DWORD)v19 == -1 )
          goto LABEL_53;
        v29 = *(float *)((char *)&dword_1909487C8 + v10) + 0.06666667;
        *(float *)((char *)&dword_1909487C8 + v10) = v29;
        v30 = v5 + 40LL * (int)v19;
        v31 = *(int *)((char *)dword_190948498 + v30);
        if ( v31 <= 0 )
        {
          if ( v31 )
            goto LABEL_39;
          if ( dword_1909485E8[14 * (int)v19 + v5 / 4] )
            goto LABEL_39;
          result = 5 * v20;
          v32 = v20;
          if ( *(int *)((char *)&unk_1909484E8 + 40 * v20 + v5) <= 0 )
            goto LABEL_39;
        }
        else
        {
          v32 = v20;
          if ( !dword_19012269C[1268 * dword_19025F0D4[1760 * *(int *)((char *)dword_19094849C + v30)] + v20]
            || (result = 5 * v20, *(int *)((char *)&unk_1909484E8 + 40 * v20 + v5) >= 2) )
          {
LABEL_39:
            *(int *)((char *)&dword_1909487C8 + v10) = 1065353216;
            v32 = v20;
            v31 = *(int *)((char *)dword_190948498 + v30);
LABEL_40:
            if ( v31 <= 0 )
            {
              if ( v31 )
                goto LABEL_53;
              if ( dword_1909485E8[14 * (int)v19 + v5 / 4] )
                goto LABEL_53;
              v35 = v5 + 40 * (v32 + 2);
              if ( *(int *)((char *)dword_190948498 + v35) <= 0 )
                goto LABEL_53;
              v33 = *(unsigned int *)((char *)dword_19094849C + v35);
              v34 = (unsigned int)v19;
              goto LABEL_52;
            }
            v33 = *(int *)((char *)dword_19094849C + v30);
            if ( dword_19012269C[1268 * dword_19025F0D4[1760 * v33] + v32] )
            {
              v34 = (unsigned int)(v20 + 2);
LABEL_52:
              sub_140089E50(v33, 0xFFFFFFFFLL, v4, v34);
            }
LABEL_53:
            result = ((unsigned __int8)*(_DWORD *)((char *)&unk_1909487BC + v5) + 1) & 7;
            *(_DWORD *)((char *)&unk_1909487BC + v5) = result;
            goto LABEL_54;
          }
        }
        if ( v29 < 1.0 )
        {
LABEL_54:
          *(_DWORD *)((char *)&unk_1909487B4 + v5) = v19;
          *(_DWORD *)((char *)&unk_1909487B8 + v5) = v20;
          return result;
        }
        goto LABEL_40;
      }
      LODWORD(v19) = v19 ^ 1;
      if ( !sub_140051C90(v4, 2, v19, v20) )
        LODWORD(v19) = -1;
      goto LABEL_34;
    }
    if ( (_DWORD)result == 1 )
    {
      v36 = *(int *)((char *)&dword_1909487EC + v10);
      if ( v36 == 3 )
      {
        v36 = 1;
        v37 = *(_DWORD *)((char *)&unk_1909484C0 + v5);
        if ( v37 <= 0 || dword_190948498[v5 / 4] <= 0 )
        {
          v40 = dword_190948498[v5 / 4];
          if ( v40 || v37 )
          {
            v36 = v40 != 0;
            v41 = v5 + 40LL * (v40 == 0);
            if ( *(int *)((char *)dword_190948498 + v41) > 0
              && !dword_19025F0F4[1760 * *(int *)((char *)dword_19094849C + v41)] )
            {
              v36 = -1;
            }
          }
          else
          {
            v36 = -1;
          }
        }
        else
        {
          v38 = dword_19025F0D4[1760 * dword_19094849C[v5 / 4]];
          v39 = dword_19025F0D4[1760 * *(int *)((char *)&unk_1909484C4 + v5)];
          if ( !dword_1901221DC[1268 * v39 + v38] )
          {
            v36 = 0;
            if ( !dword_1901221DC[1268 * v38 + v39] )
              v36 = -1;
          }
        }
        *(int *)((char *)&dword_1909487EC + v10) = v36;
      }
      if ( v36 == -1 )
        goto LABEL_111;
      v42 = *(float *)((char *)&dword_1909487C8 + v10) + 0.033333335;
      *(float *)((char *)&dword_1909487C8 + v10) = v42;
      v43 = v42;
      if ( v42 < 0.875
        || (v44 = v5 + 40LL * v36, *(int *)((char *)dword_190948498 + v44) <= 0)
        || (v45 = v5 + 40 * (v36 ^ 1LL), *(int *)((char *)dword_190948498 + v45) <= 0)
        || (v46 = *(int *)((char *)dword_19094849C + v45),
            v47 = 1760 * v46,
            v48 = dword_19025F0D4[1760 * v46],
            !dword_1901221DC[1268 * dword_19025F0D4[1760 * *(int *)((char *)dword_19094849C + v44)] + v48])
        || !dword_1901220D0[1268 * v48]
        || (v49 = dword_19025F0F4[v47], (int)v49 <= 0) )
      {
LABEL_84:
        result = sub_140051C90(v4, 1, v36, 0);
        if ( (_DWORD)result )
        {
          if ( v43 < 1.0 )
          {
LABEL_112:
            *(_DWORD *)((char *)&unk_1909487B4 + v5) = v36;
            return result;
          }
        }
        else
        {
          *(int *)((char *)&dword_1909487C8 + v10) = 1065353216;
        }
        v55 = v36 ^ 1LL;
        v56 = v5 + 40LL * v36;
        v57 = *(int *)((char *)dword_190948498 + v56);
        v58 = v57 == 0;
        if ( v57 > 0 )
        {
          v59 = v5 + 40 * v55;
          if ( *(int *)((char *)dword_190948498 + v59) > 0 )
          {
            v60 = *(int *)((char *)dword_19094849C + v59);
            v61 = 1760 * v60;
            v62 = dword_19025F0D4[1760 * v60];
            if ( !dword_1901221DC[1268 * dword_19025F0D4[1760 * *(int *)((char *)dword_19094849C + v56)] + v62] )
            {
LABEL_111:
              result = ((unsigned __int8)*(_DWORD *)((char *)&unk_1909487BC + v5) + 1) & 7;
              *(_DWORD *)((char *)&unk_1909487BC + v5) = result;
              goto LABEL_112;
            }
            if ( !dword_1901220D0[1268 * v62] )
              goto LABEL_99;
            v63 = dword_19025F0F4[v61];
            if ( (int)v63 <= 0 )
              goto LABEL_99;
            v64 = dword_19025F0F4[1760 * v60 + v63];
            if ( (unsigned int)v64 > 0x3FF )
              goto LABEL_99;
            v65 = 7040 * v64;
            v66 = v64;
            v67 = *((unsigned int *)&unk_19025F0E8 + 1760 * v64);
            if ( (_DWORD)v67 == -1 )
            {
              v68 = *(unsigned int *)((char *)&unk_19025F0E4 + v65);
              if ( (_DWORD)v68 == -1 )
              {
LABEL_99:
                if ( !(unsigned int)sub_140089E50(
                                      *(unsigned int *)((char *)dword_19094849C + v59),
                                      *(unsigned int *)((char *)dword_19094849C + v56),
                                      0xFFFFFFFFLL,
                                      0)
                  || !dword_1901220D0[1268 * dword_19025F0D4[1760 * *(int *)((char *)dword_19094849C + v59)]] )
                {
                  goto LABEL_111;
                }
                v69 = 1.0;
                goto LABEL_110;
              }
              sub_140073BA0(v64, v68, *(unsigned int *)((char *)&unk_19025F0EC + v65));
            }
            else
            {
              sub_140073D90(v64, v67, v61 * 4, v60);
            }
            if ( dword_163D75B60 )
              ++dword_19093F0C0[v66];
            goto LABEL_99;
          }
          v58 = v57 == 0;
        }
        if ( !v58 )
          goto LABEL_111;
        v70 = v5 + 40 * v55;
        if ( *(int *)((char *)dword_190948498 + v70) <= 0 )
          goto LABEL_111;
        v71 = *(int *)((char *)dword_19094849C + v70);
        v72 = dword_19025F0F4[1760 * v71];
        if ( (int)v72 <= 0
          || !dword_1901221DC[1268 * dword_19025F0D4[1760 * dword_19025F0F8[1760 * v71]] + dword_19025F0D4[1760 * v71]]
          || !(unsigned int)sub_140089E50(
                              (unsigned int)dword_19025F0F4[1760 * v71 + v72],
                              0xFFFFFFFFLL,
                              v4,
                              (unsigned int)v36)
          || !dword_1901220D0[1268 * dword_19025F0D4[1760 * *(int *)((char *)dword_19094849C + v70)]] )
        {
          goto LABEL_111;
        }
        v69 = 0.875;
LABEL_110:
        sub_140039BF0(dword_191536D8C, &dword_19025F11C[1760 * *(int *)((char *)dword_19094849C + v56)], 1.0, v69);
        goto LABEL_111;
      }
      v50 = dword_19025F0F4[1760 * v46 + v49];
      if ( (unsigned int)v50 <= 0x3FF )
      {
        v51 = 7040 * v50;
        v52 = v50;
        v53 = *((unsigned int *)&unk_19025F0E8 + 1760 * v50);
        if ( (_DWORD)v53 != -1 )
        {
          sub_140073D90(v50, v53, v48, v47 * 4);
          goto LABEL_81;
        }
        v54 = *(unsigned int *)((char *)&unk_19025F0E4 + v51);
        if ( (_DWORD)v54 != -1 )
        {
          sub_140073BA0(v50, v54, *(unsigned int *)((char *)&unk_19025F0EC + v51));
LABEL_81:
          if ( dword_163D75B60 )
            ++dword_19093F0C0[v52];
        }
      }
      *(int *)((char *)&dword_1909487C8 + v10) = 0;
      v43 = 0.0;
      goto LABEL_84;
    }
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 3 )
        return result;
      if ( dword_1909419F0[v5 / 4] == -1 )
      {
        v84 = -1;
        v85 = (float *)(0x140000000LL + v5 + 1351884692);
        v86 = 0;
        v87 = *(float *)((char *)&xmmword_190941FD4 + v5 + 12) * 1.5;
        v88 = *(float *)&dword_190941FE4[v5 / 4] * 1.5;
        v115 = *v85 - (float)(*(float *)((char *)&xmmword_190941FD4 + v5 + 8) * 1.5);
        v116 = *(float *)(0x140000004LL + v5 + 1351884692) - v87;
        v117 = *(float *)(0x140000008LL + v5 + 1351884692) - v88;
        do
        {
          if ( *(v8 - 9) )
          {
            if ( *v8 == -1 && v8[1] == -1 )
            {
              v89 = sub_1400492D0(v85, &v115, v9);
              if ( v89 < v11 )
              {
                v84 = v86;
                v11 = v89;
              }
            }
          }
          ++v86;
          v9 += 1760;
          v8 += 1760;
        }
        while ( v86 < 1024 );
        if ( v84 == -1 )
        {
          v94 = dword_16E6A3C90;
          v95 = 1.375;
          for ( i = 0; i < 512; ++i )
          {
            if ( *(v94 - 12) )
            {
              v97 = v94[5163];
              v98 = 0;
              if ( v97 > 0 )
              {
                v99 = *((float *)v94 + 5);
                v100 = (float *)(v94 + 5165);
                v101 = *((float *)v94 - 1);
                v102 = *((float *)v94 + 6);
                v103 = *(float *)v94;
                v104 = *((float *)v94 + 7);
                do
                {
                  v105 = *(v100 - 1);
                  v106 = (float)((float)((float)(v102 * v105) + v103) + (float)(*v100 * *((float *)v94 + 9)))
                       + (float)(v100[1] * *((float *)v94 + 12));
                  v107 = v100[1];
                  v108 = v107 * *((float *)v94 + 11);
                  v109 = *(float *)(0x140000004LL + v5 + 1351884692)
                       - (float)(*(float *)((char *)&xmmword_190941FD4 + v5 + 12) * 0.75);
                  v110 = (float)((float)((float)(v104 * v105) + *((float *)v94 + 1))
                               + (float)(*v100 * *((float *)v94 + 10)))
                       + (float)(v107 * *((float *)v94 + 13));
                  v111 = *(float *)(0x140000008LL + v5 + 1351884692)
                       - (float)(*(float *)&dword_190941FE4[v5 / 4] * 0.75);
                  v112 = *v85 - (float)(*(float *)((char *)&xmmword_190941FD4 + v5 + 8) * 0.75);
                  v113 = (float)((float)((float)((float)((float)(v99 * v105) + v101)
                                               + (float)(*v100 * *((float *)v94 + 8)))
                                       + v108)
                               - v112)
                       * (float)((float)((float)((float)((float)(v99 * v105) + v101)
                                               + (float)(*v100 * *((float *)v94 + 8)))
                                       + v108)
                               - v112);
                  if ( fsqrt(
                         (float)((float)((float)(v106 - v109) * (float)(v106 - v109)) + v113)
                       + (float)((float)(v110 - v111) * (float)(v110 - v111))) < v95 )
                  {
                    v114 = dword_1909419F0;
                    while ( !*(v114 - 10) || *v114 != i || v114[1] != v98 )
                    {
                      v114 += 7166;
                      if ( (__int64)v114 >= (__int64)dword_1910411F0 )
                      {
                        dword_1909419F0[v5 / 4] = i;
                        dword_1909419F4[v5 / 4] = v98;
                        v95 = fsqrt(
                                (float)((float)((float)(v106 - v109) * (float)(v106 - v109)) + v113)
                              + (float)((float)(v110 - v111) * (float)(v110 - v111)));
                        break;
                      }
                    }
                  }
                  ++v98;
                  v100 += 3;
                }
                while ( v98 < v97 );
              }
            }
            v94 += 5210;
          }
        }
        else
        {
          v90 = dword_19025F0D4[1760 * v84];
          if ( (((_DWORD)v90 - 39) & 0xFFFFFFFC) != 0 || (_DWORD)v90 == 40 )
          {
            v91 = *(unsigned int *)((char *)&dword_1909487EC + v10);
            if ( (_DWORD)v91 == 3 )
            {
              if ( (unsigned int)v90 <= 0x24 )
              {
                v92 = 0x100200E000LL;
                if ( _bittest64(&v92, v90) )
                  goto LABEL_155;
              }
              v93 = 0;
              if ( !dword_1901220D0[1268 * v90] )
                v93 = dword_1901220E4[1268 * v90] > 0;
              if ( (_DWORD)v90 == 16 )
LABEL_155:
                v93 = 0;
              v91 = (unsigned int)v93 ^ 1;
              if ( dword_190948498[10 * v93 + v5 / 4] <= 0 )
                v91 = v93;
              *(int *)((char *)&dword_1909487EC + v10) = v91;
            }
            if ( !dword_190948498[10 * (int)v91 + v5 / 4] )
              sub_140089E50(v84, 0xFFFFFFFFLL, v4, v91);
          }
        }
      }
    }
    else
    {
      v73 = *(int *)((char *)&dword_1909487EC + v10);
      if ( v73 >= 2 )
      {
        v74 = v73 != 2;
        v75 = !v74;
        if ( dword_190948498[10 * v74 + v5 / 4] )
          v75 = v74;
        v73 = v75;
        result = 5 * v75;
        if ( !dword_190948498[2 * result + v5 / 4] )
          v73 = -1;
        *(int *)((char *)&dword_1909487EC + v10) = v73;
      }
      if ( v73 != -1 )
      {
        v76 = *(float *)&algn_190941A08[v5 + 48];
        if ( v76 <= -0.196349540849375 || v76 >= 0.0981747704246875 )
          goto LABEL_132;
        v77 = v5 + 40LL * v73;
        if ( *(int *)((char *)dword_190948498 + v77) > 0 )
        {
          v78 = *(int *)((char *)dword_19094849C + v77);
          if ( (unsigned int)v78 <= 0x3FF )
          {
            v79 = 7040 * v78;
            v80 = v78;
            v81 = *((unsigned int *)&unk_19025F0E8 + 1760 * v78);
            if ( (_DWORD)v81 != -1 )
            {
              sub_140073D90(v78, v81, a3, a4);
              goto LABEL_129;
            }
            v82 = *(unsigned int *)((char *)&unk_19025F0E4 + v79);
            if ( (_DWORD)v82 != -1 )
            {
              sub_140073BA0(v78, v82, *(unsigned int *)((char *)&unk_19025F0EC + v79));
LABEL_129:
              if ( dword_163D75B60 )
                ++dword_19093F0C0[v80];
            }
          }
        }
        result = ((unsigned __int8)*(_DWORD *)((char *)&unk_1909487BC + v5) + 1) & 7;
        *(_DWORD *)((char *)&unk_1909487BC + v5) = result;
        v76 = *(float *)&algn_190941A08[v5 + 48];
LABEL_132:
        v83 = v76;
        if ( v83 >= -0.1595340019401172 )
        {
          if ( v83 <= 0.1472621556370313 )
            *(_DWORD *)&algn_190941A08[v5 + 48] = 0;
          else
            *(float *)&algn_190941A08[v5 + 48] = v83 - 0.1472621556370313;
        }
        else
        {
          *(float *)&algn_190941A08[v5 + 48] = v83 + 0.1595340019401172;
        }
        return result;
      }
    }
    result = ((unsigned __int8)*(_DWORD *)((char *)&unk_1909487BC + v5) + 1) & 7;
    *(_DWORD *)((char *)&unk_1909487BC + v5) = result;
  }
  return result;
}

