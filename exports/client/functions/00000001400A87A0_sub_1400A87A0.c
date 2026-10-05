/* Address: 0x1400a87a0 | Name: sub_1400A87A0 | Size: 4019 bytes */
__int64 __fastcall sub_1400A87A0(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  __int64 v5; // rbx
  unsigned int v6; // r13d
  __int64 result; // rax
  unsigned int *v8; // rdi
  float *v9; // r15
  __int64 v10; // rbp
  float v11; // xmm7_4
  float v12; // xmm6_4
  int v13; // r14d
  unsigned int *v14; // rsi
  float v15; // xmm2_4
  float *v16; // r12
  float v17; // xmm1_4
  float v18; // xmm0_4
  __int64 v19; // rdi
  __int64 v20; // r14
  BOOL v21; // esi
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // r9
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  float v29; // xmm0_4
  __int64 v30; // r10
  int v31; // edx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rcx
  signed int v36; // edi
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned int v40; // ecx
  __int64 v41; // rcx
  float v42; // xmm0_4
  float v43; // xmm6_4
  __int64 v44; // rdx
  __int64 v45; // rcx
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
  __int64 v56; // rbp
  int v57; // edx
  bool v58; // zf
  __int64 v59; // r14
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // edx
  BOOL v73; // edx
  _BOOL8 v74; // rax
  float v75; // xmm0_4
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rdx
  double v82; // xmm0_8
  unsigned int v83; // r14d
  float *v84; // r13
  int v85; // esi
  float v86; // xmm2_4
  float v87; // xmm1_4
  float v88; // xmm0_4
  unsigned __int64 v89; // rdx
  __int64 v90; // r9
  __int64 v91; // r8
  _BOOL8 v92; // r8
  unsigned int *v93; // r8
  float v94; // xmm10_4
  int i; // edx
  int v96; // r10d
  signed int v97; // ecx
  float v98; // xmm11_4
  float *v99; // r9
  float v100; // xmm12_4
  float v101; // xmm13_4
  float v102; // xmm14_4
  float v103; // xmm15_4
  float v104; // xmm2_4
  float v105; // xmm5_4
  float v106; // xmm1_4
  float v107; // xmm4_4
  float v108; // xmm8_4
  float v109; // xmm6_4
  float v110; // xmm9_4
  float v111; // xmm1_4
  float v112; // xmm7_4
  unsigned int *v113; // rax
  __int64 v114; // [rsp+20h] [rbp-E8h] BYREF
  float v115; // [rsp+28h] [rbp-E0h]

  v4 = a1;
  v5 = 7166LL * (int)a1;
  v6 = -1;
  result = (int)dword_140404A6C[v5 + 280658340];
  dword_140404A6C[v5 + 280658335] = -1;
  if ( (_DWORD)result != dword_140404A6C[v5 + 280658341] )
  {
    v8 = &dword_140404A6C[278845902];
    v9 = (float *)&dword_140404A6C[278845916];
    v10 = v5 * 4 + 48 * result;
    v11 = 0.5;
    dword_140404A6C[v5 + 280658335] = *(unsigned int *)((char *)&dword_140404A6C[280658342] + v10);
    dword_140404A6C[v5 + 280658336] = *(unsigned int *)((char *)&dword_140404A6C[280658343] + v10);
    dword_140404A6C[v5 + 280658337] = (int)(float)(*(float *)((char *)&dword_140404A6C[280658343] + v10) * 100.0);
    result = *(unsigned int *)((char *)&dword_140404A6C[280658342] + v10);
    if ( (_DWORD)result == 4 )
    {
      if ( dword_140404A6C[v5 + 280651313] == -1 )
      {
        v12 = 0.5;
        v13 = 0;
        v14 = &dword_140404A6C[278845902];
        v15 = *(float *)&dword_140404A6C[v5 + 280651693] * 1.5;
        v16 = (float *)&dword_140404A6C[278845916];
        v17 = *(float *)&dword_140404A6C[v5 + 280651694] * 1.5;
        *(float *)&v114 = *(float *)&dword_140404A6C[v5 + 280651674]
                        - (float)(*(float *)&dword_140404A6C[v5 + 280651692] * 1.5);
        *((float *)&v114 + 1) = *(float *)&dword_140404A6C[v5 + 280651675] - v15;
        v115 = *(float *)&dword_140404A6C[v5 + 280651676] - v17;
        do
        {
          if ( *(v14 - 9) )
          {
            if ( *v14 == -1 && v14[1] == -1 )
            {
              v18 = sub_14007ABA0((float *)&dword_140404A6C[v5 + 280651674], (float *)&v114, v16);
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
        if ( v6 != -1 && dword_140404A6C[1760 * v6 + 278845898] == 39 && !dword_140404A6C[v5 + 280658139] )
          sub_1400E35D0(v6, 0xFFFFFFFFLL, a1, 0);
      }
      dword_140404A6C[v5 + 280658340] = ((unsigned __int8)dword_140404A6C[v5 + 280658340] + 1) & 7;
      result = *(unsigned int *)((char *)&dword_140404A6C[280658342] + v10);
    }
    if ( (_DWORD)result == 2 )
    {
      LODWORD(v19) = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v10);
      v20 = *(int *)((char *)&dword_140404A6C[280658353] + v10);
      if ( (int)v19 < 2 )
        goto LABEL_35;
      v21 = 1;
      v22 = v5 * 4 + 40 * (v20 + 2);
      v23 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v22);
      if ( v23 > 0 )
      {
        v24 = (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v22) + 278845898];
        if ( (int)dword_140404A6C[1268 * v24 + 278521294] > 0 )
          v21 = (unsigned int)(v24 - 13) <= 1;
      }
      v25 = !v21;
      if ( dword_140404A6C[10 * v21 + 280658139 + v5] )
        v25 = v21;
      v26 = v25 ^ 1;
      if ( (_DWORD)v19 != 2 )
        v26 = v25;
      v19 = (unsigned int)v26;
      v27 = v5 * 4 + 40 * v26;
      v28 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v27);
      if ( v28 <= 0 )
      {
        if ( !v28 && !dword_140404A6C[14 * v19 + 280658223 + v5] && v23 > 0 )
          goto LABEL_34;
      }
      else if ( dword_140404A6C[1268
                              * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v27)
                                                   + 278845898]
                              + 278521660
                              + v20]
             && v23 < 2 )
      {
LABEL_34:
        *(unsigned int *)((char *)&dword_140404A6C[280658352] + v10) = v19;
LABEL_35:
        if ( (_DWORD)v19 == -1 )
          goto LABEL_53;
        v29 = *(float *)((char *)&dword_140404A6C[280658343] + v10) + 0.06666667;
        *(float *)((char *)&dword_140404A6C[280658343] + v10) = v29;
        v30 = v5 * 4 + 40LL * (int)v19;
        v31 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v30);
        if ( v31 <= 0 )
        {
          if ( v31 )
            goto LABEL_39;
          if ( dword_140404A6C[14 * (int)v19 + 280658223 + v5] )
            goto LABEL_39;
          result = 5 * v20;
          v32 = v20;
          if ( (int)dword_140404A6C[10 * v20 + 280658159 + v5] <= 0 )
            goto LABEL_39;
        }
        else
        {
          v32 = v20;
          if ( !dword_140404A6C[1268
                              * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v30)
                                                   + 278845898]
                              + 278521660
                              + v20]
            || (result = 5 * v20, (int)dword_140404A6C[10 * v20 + 280658159 + v5] >= 2) )
          {
LABEL_39:
            *(unsigned int *)((char *)&dword_140404A6C[280658343] + v10) = 1065353216;
            v32 = v20;
            v31 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v30);
LABEL_40:
            if ( v31 <= 0 )
            {
              if ( v31 )
                goto LABEL_53;
              if ( dword_140404A6C[14 * (int)v19 + 280658223 + v5] )
                goto LABEL_53;
              v35 = v5 * 4 + 40 * (v32 + 2);
              if ( *(int *)((char *)&dword_140404A6C[280658139] + v35) <= 0 )
                goto LABEL_53;
              v33 = *(unsigned int *)((char *)&dword_140404A6C[280658140] + v35);
              v34 = (unsigned int)v19;
              goto LABEL_52;
            }
            v33 = *(int *)((char *)&dword_140404A6C[280658140] + v30);
            if ( dword_140404A6C[1268 * (int)dword_140404A6C[1760 * v33 + 278845898] + 278521660 + v32] )
            {
              v34 = (unsigned int)(v20 + 2);
LABEL_52:
              sub_1400E35D0(v33, 0xFFFFFFFFLL, v4, v34);
            }
LABEL_53:
            result = ((unsigned __int8)dword_140404A6C[v5 + 280658340] + 1) & 7;
            dword_140404A6C[v5 + 280658340] = result;
            goto LABEL_54;
          }
        }
        if ( v29 < 1.0 )
        {
LABEL_54:
          dword_140404A6C[v5 + 280658338] = v19;
          dword_140404A6C[v5 + 280658339] = v20;
          return result;
        }
        goto LABEL_40;
      }
      LODWORD(v19) = v19 ^ 1;
      if ( !(unsigned int)sub_1400A85E0(v4, 2, (unsigned int)v19, (unsigned int)v20, v114, LODWORD(v115)) )
        LODWORD(v19) = -1;
      goto LABEL_34;
    }
    if ( (_DWORD)result == 1 )
    {
      v36 = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v10);
      if ( v36 == 3 )
      {
        v36 = 1;
        v37 = dword_140404A6C[v5 + 280658149];
        if ( v37 <= 0 || (int)dword_140404A6C[v5 + 280658139] <= 0 )
        {
          v40 = dword_140404A6C[v5 + 280658139];
          if ( v40 || v37 )
          {
            v36 = v40 != 0;
            v41 = v5 * 4 + 40LL * (v40 == 0);
            if ( *(int *)((char *)&dword_140404A6C[280658139] + v41) > 0
              && !dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v41) + 278845906] )
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
          v38 = (int)dword_140404A6C[1760 * dword_140404A6C[v5 + 280658140] + 278845898];
          v39 = (int)dword_140404A6C[1760 * dword_140404A6C[v5 + 280658150] + 278845898];
          if ( !dword_140404A6C[1268 * v39 + 278521356 + v38] )
          {
            v36 = 0;
            if ( !dword_140404A6C[1268 * v38 + 278521356 + v39] )
              v36 = -1;
          }
        }
        *(unsigned int *)((char *)&dword_140404A6C[280658352] + v10) = v36;
      }
      if ( v36 == -1 )
        goto LABEL_110;
      v42 = *(float *)((char *)&dword_140404A6C[280658343] + v10) + 0.033333335;
      *(float *)((char *)&dword_140404A6C[280658343] + v10) = v42;
      v43 = v42;
      if ( v42 < 0.875
        || (v44 = v5 * 4 + 40LL * v36, *(int *)((char *)&dword_140404A6C[280658139] + v44) <= 0)
        || (v45 = v5 * 4 + 40 * (v36 ^ 1LL), *(int *)((char *)&dword_140404A6C[280658139] + v45) <= 0)
        || (v46 = *(int *)((char *)&dword_140404A6C[280658140] + v45),
            v47 = 1760 * v46,
            v48 = (int)dword_140404A6C[1760 * v46 + 278845898],
            !dword_140404A6C[1268
                           * (int)dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v44)
                                                + 278845898]
                           + 278521356
                           + v48])
        || !dword_140404A6C[1268 * v48 + 278521289]
        || (v49 = (int)dword_140404A6C[v47 + 278845906], (int)v49 <= 0) )
      {
LABEL_84:
        result = sub_1400A85E0(v4, 1, (unsigned int)v36, 0, v114, LODWORD(v115));
        if ( (_DWORD)result )
        {
          if ( v43 < 1.0 )
          {
LABEL_111:
            dword_140404A6C[v5 + 280658338] = v36;
            return result;
          }
        }
        else
        {
          *(unsigned int *)((char *)&dword_140404A6C[280658343] + v10) = 1065353216;
        }
        v55 = v36 ^ 1LL;
        v56 = v5 * 4 + 40LL * v36;
        v57 = *(unsigned int *)((char *)&dword_140404A6C[280658139] + v56);
        v58 = v57 == 0;
        if ( v57 > 0 )
        {
          v59 = v5 * 4 + 40 * v55;
          if ( *(int *)((char *)&dword_140404A6C[280658139] + v59) > 0 )
          {
            v60 = *(int *)((char *)&dword_140404A6C[280658140] + v59);
            v61 = 1760 * v60;
            v62 = (int)dword_140404A6C[1760 * v60 + 278845898];
            if ( !dword_140404A6C[1268
                                * (int)dword_140404A6C[1760
                                                     * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v56)
                                                     + 278845898]
                                + 278521356
                                + v62] )
            {
LABEL_110:
              result = ((unsigned __int8)dword_140404A6C[v5 + 280658340] + 1) & 7;
              dword_140404A6C[v5 + 280658340] = result;
              goto LABEL_111;
            }
            if ( !dword_140404A6C[1268 * v62 + 278521289] )
              goto LABEL_99;
            v63 = (int)dword_140404A6C[v61 + 278845906];
            if ( (int)v63 <= 0 )
              goto LABEL_99;
            v64 = (int)dword_140404A6C[1760 * v60 + 278845906 + v63];
            if ( (unsigned int)v64 > 0x3FF )
              goto LABEL_99;
            v65 = 1760 * v64;
            v66 = v64;
            v67 = dword_140404A6C[1760 * v64 + 278845903];
            if ( (_DWORD)v67 == -1 )
            {
              v68 = dword_140404A6C[v65 + 278845902];
              if ( (_DWORD)v68 == -1 )
                goto LABEL_99;
              sub_1400CA7C0(v64, v68, dword_140404A6C[v65 + 278845904]);
            }
            else
            {
              sub_1400CA9B0(v64, v67, v61 * 4, v60);
            }
            if ( dword_140404A6C[456202453] )
              ++dword_140404A6C[v66 + 280648157];
LABEL_99:
            if ( !(unsigned int)sub_1400E35D0(
                                  *(unsigned int *)((char *)&dword_140404A6C[280658140] + v59),
                                  *(unsigned int *)((char *)&dword_140404A6C[280658140] + v56),
                                  0xFFFFFFFFLL,
                                  0)
              || !dword_140404A6C[1268
                                * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v59)
                                                + 278845898]
                                + 278521289] )
            {
              goto LABEL_110;
            }
            goto LABEL_109;
          }
          v58 = v57 == 0;
        }
        if ( !v58 )
          goto LABEL_110;
        v69 = v5 * 4 + 40 * v55;
        if ( *(int *)((char *)&dword_140404A6C[280658139] + v69) <= 0 )
          goto LABEL_110;
        v70 = *(int *)((char *)&dword_140404A6C[280658140] + v69);
        v71 = (int)dword_140404A6C[1760 * v70 + 278845906];
        if ( (int)v71 <= 0
          || !dword_140404A6C[1268 * dword_140404A6C[1760 * dword_140404A6C[1760 * v70 + 278845907] + 278845898]
                            + 278521356
                            + dword_140404A6C[1760 * v70 + 278845898]]
          || !(unsigned int)sub_1400E35D0(
                              dword_140404A6C[1760 * v70 + 278845906 + v71],
                              0xFFFFFFFFLL,
                              v4,
                              (unsigned int)v36)
          || !dword_140404A6C[1268
                            * dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v69)
                                            + 278845898]
                            + 278521289] )
        {
          goto LABEL_110;
        }
LABEL_109:
        sub_1400515E0(
          dword_140404A6C[283786000],
          &dword_140404A6C[1760 * *(unsigned int *)((char *)&dword_140404A6C[280658140] + v56) + 278845916]);
        goto LABEL_110;
      }
      v50 = (int)dword_140404A6C[1760 * v46 + 278845906 + v49];
      if ( (unsigned int)v50 <= 0x3FF )
      {
        v51 = 1760 * v50;
        v52 = v50;
        v53 = dword_140404A6C[1760 * v50 + 278845903];
        if ( (_DWORD)v53 != -1 )
        {
          sub_1400CA9B0(v50, v53, v48, v47 * 4);
          goto LABEL_81;
        }
        v54 = dword_140404A6C[v51 + 278845902];
        if ( (_DWORD)v54 != -1 )
        {
          sub_1400CA7C0(v50, v54, dword_140404A6C[v51 + 278845904]);
LABEL_81:
          if ( dword_140404A6C[456202453] )
            ++dword_140404A6C[v52 + 280648157];
        }
      }
      *(unsigned int *)((char *)&dword_140404A6C[280658343] + v10) = 0;
      v43 = 0.0;
      goto LABEL_84;
    }
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 3 )
        return result;
      if ( dword_140404A6C[v5 + 280651313] == -1 )
      {
        v83 = -1;
        v84 = (float *)(0x140000000LL + v5 * 4 + 1126820052);
        v85 = 0;
        v86 = *(float *)&dword_140404A6C[v5 + 280651693] * 1.5;
        v87 = *(float *)&dword_140404A6C[v5 + 280651694] * 1.5;
        *(float *)&v114 = *v84 - (float)(*(float *)&dword_140404A6C[v5 + 280651692] * 1.5);
        *((float *)&v114 + 1) = *(float *)(0x140000004LL + v5 * 4 + 1126820052) - v86;
        v115 = *(float *)(0x140000008LL + v5 * 4 + 1126820052) - v87;
        do
        {
          if ( *(v8 - 9) )
          {
            if ( *v8 == -1 && v8[1] == -1 )
            {
              v88 = sub_14007ABA0(v84, (float *)&v114, v9);
              if ( v88 < v11 )
              {
                v83 = v85;
                v11 = v88;
              }
            }
          }
          ++v85;
          v9 += 1760;
          v8 += 1760;
        }
        while ( v85 < 1024 );
        if ( v83 == -1 )
        {
          v93 = &dword_140404A6C[129716721];
          v94 = 1.375;
          for ( i = 0; i < 512; ++i )
          {
            if ( *(v93 - 12) )
            {
              v96 = v93[5163];
              v97 = 0;
              if ( v96 > 0 )
              {
                v98 = *((float *)v93 + 5);
                v99 = (float *)(v93 + 5165);
                v100 = *((float *)v93 - 1);
                v101 = *((float *)v93 + 6);
                v102 = *(float *)v93;
                v103 = *((float *)v93 + 7);
                do
                {
                  v104 = *(v99 - 1);
                  v105 = (float)((float)((float)(v101 * v104) + v102) + (float)(*v99 * *((float *)v93 + 9)))
                       + (float)(v99[1] * *((float *)v93 + 12));
                  v106 = v99[1];
                  v107 = v106 * *((float *)v93 + 11);
                  v108 = *(float *)(0x140000004LL + v5 * 4 + 1126820052)
                       - (float)(*(float *)&dword_140404A6C[v5 + 280651693] * 0.75);
                  v109 = (float)((float)((float)(v103 * v104) + *((float *)v93 + 1))
                               + (float)(*v99 * *((float *)v93 + 10)))
                       + (float)(v106 * *((float *)v93 + 13));
                  v110 = *(float *)(0x140000008LL + v5 * 4 + 1126820052)
                       - (float)(*(float *)&dword_140404A6C[v5 + 280651694] * 0.75);
                  v111 = *v84 - (float)(*(float *)&dword_140404A6C[v5 + 280651692] * 0.75);
                  v112 = (float)((float)((float)((float)((float)(v98 * v104) + v100)
                                               + (float)(*v99 * *((float *)v93 + 8)))
                                       + v107)
                               - v111)
                       * (float)((float)((float)((float)((float)(v98 * v104) + v100)
                                               + (float)(*v99 * *((float *)v93 + 8)))
                                       + v107)
                               - v111);
                  if ( fsqrt(
                         (float)((float)((float)(v105 - v108) * (float)(v105 - v108)) + v112)
                       + (float)((float)(v109 - v110) * (float)(v109 - v110))) < v94 )
                  {
                    v113 = &dword_140404A6C[280651313];
                    while ( !*(v113 - 10) || *v113 != i || v113[1] != v97 )
                    {
                      v113 += 7166;
                      if ( (__int64)v113 >= (__int64)&dword_140404A6C[282485809] )
                      {
                        dword_140404A6C[v5 + 280651313] = i;
                        dword_140404A6C[v5 + 280651314] = v97;
                        v94 = fsqrt(
                                (float)((float)((float)(v105 - v108) * (float)(v105 - v108)) + v112)
                              + (float)((float)(v109 - v110) * (float)(v109 - v110)));
                        break;
                      }
                    }
                  }
                  ++v97;
                  v99 += 3;
                }
                while ( v97 < v96 );
              }
            }
            v93 += 5210;
          }
        }
        else
        {
          v89 = (int)dword_140404A6C[1760 * v83 + 278845898];
          if ( (((_DWORD)v89 - 39) & 0xFFFFFFFC) != 0 || (_DWORD)v89 == 40 )
          {
            v90 = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v10);
            if ( (_DWORD)v90 == 3 )
            {
              if ( (unsigned int)v89 <= 0x24 )
              {
                v91 = 0x100200E000LL;
                if ( _bittest64(&v91, v89) )
                  goto LABEL_154;
              }
              v92 = 0;
              if ( !dword_140404A6C[1268 * v89 + 278521289] )
                v92 = (int)dword_140404A6C[1268 * v89 + 278521294] > 0;
              if ( (_DWORD)v89 == 16 )
LABEL_154:
                v92 = 0;
              v90 = (unsigned int)v92 ^ 1;
              if ( (int)dword_140404A6C[10 * v92 + 280658139 + v5] <= 0 )
                v90 = v92;
              *(unsigned int *)((char *)&dword_140404A6C[280658352] + v10) = v90;
            }
            if ( !dword_140404A6C[10 * (int)v90 + 280658139 + v5] )
              sub_1400E35D0(v83, 0xFFFFFFFFLL, v4, v90);
          }
        }
      }
    }
    else
    {
      v72 = *(unsigned int *)((char *)&dword_140404A6C[280658352] + v10);
      if ( v72 >= 2 )
      {
        v73 = v72 != 2;
        v74 = !v73;
        if ( dword_140404A6C[10 * v73 + 280658139 + v5] )
          v74 = v73;
        v72 = v74;
        result = 5 * v74;
        if ( !dword_140404A6C[2 * result + 280658139 + v5] )
          v72 = -1;
        *(unsigned int *)((char *)&dword_140404A6C[280658352] + v10) = v72;
      }
      if ( v72 != -1 )
      {
        v75 = *(float *)&dword_140404A6C[v5 + 280651331];
        if ( v75 <= -0.196349540849375 || v75 >= 0.0981747704246875 )
          goto LABEL_131;
        v76 = v5 * 4 + 40LL * v72;
        if ( *(int *)((char *)&dword_140404A6C[280658139] + v76) > 0 )
        {
          v77 = *(int *)((char *)&dword_140404A6C[280658140] + v76);
          if ( (unsigned int)v77 <= 0x3FF )
          {
            v78 = 1760 * v77;
            v79 = v77;
            v80 = dword_140404A6C[1760 * v77 + 278845903];
            if ( (_DWORD)v80 != -1 )
            {
              sub_1400CA9B0(v77, v80, a3, a4);
              goto LABEL_128;
            }
            v81 = dword_140404A6C[v78 + 278845902];
            if ( (_DWORD)v81 != -1 )
            {
              sub_1400CA7C0(v77, v81, dword_140404A6C[v78 + 278845904]);
LABEL_128:
              if ( dword_140404A6C[456202453] )
                ++dword_140404A6C[v79 + 280648157];
            }
          }
        }
        result = ((unsigned __int8)dword_140404A6C[v5 + 280658340] + 1) & 7;
        dword_140404A6C[v5 + 280658340] = result;
        v75 = *(float *)&dword_140404A6C[v5 + 280651331];
LABEL_131:
        v82 = v75;
        if ( v82 >= -0.1595340019401172 )
        {
          if ( v82 <= 0.1472621556370313 )
            dword_140404A6C[v5 + 280651331] = 0;
          else
            *(float *)&dword_140404A6C[v5 + 280651331] = v82 - 0.1472621556370313;
        }
        else
        {
          *(float *)&dword_140404A6C[v5 + 280651331] = v82 + 0.1595340019401172;
        }
        return result;
      }
    }
    result = ((unsigned __int8)dword_140404A6C[v5 + 280658340] + 1) & 7;
    dword_140404A6C[v5 + 280658340] = result;
  }
  return result;
}

