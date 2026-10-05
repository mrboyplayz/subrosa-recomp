/* Address: 0x14002db60 | Name: sub_14002DB60 | Size: 3020 bytes */
__int64 __fastcall sub_14002DB60(signed int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // xmm11_4
  unsigned int v7; // xmm12_4
  unsigned int v8; // xmm13_4
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rsi
  float v13; // xmm7_4
  unsigned int *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rax
  float *v21; // rcx
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  __int64 v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  float *v31; // rcx
  float v32; // xmm4_4
  float v33; // xmm1_4
  float v34; // xmm8_4
  float v35; // xmm0_4
  float v36; // xmm6_4
  float v37; // xmm6_4
  unsigned int *v38; // rdi
  signed int v39; // esi
  unsigned int *v40; // r15
  __int64 v41; // rdx
  unsigned int *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  float *v45; // rcx
  float v46; // xmm8_4
  float v47; // xmm6_4
  unsigned int v48; // eax
  unsigned int *v49; // rdi
  signed int i; // r13d
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _DWORD *v55; // rax
  __int64 v56; // r15
  float *v57; // rcx
  float v58; // xmm7_4
  float v59; // xmm6_4
  __int64 v60; // rax
  __int64 v61; // rax
  signed int v62; // r12d
  __int64 v63; // r9
  int *v64; // r15
  __int64 v65; // rsi
  __int64 v66; // r8
  unsigned int *v67; // rdx
  float *v68; // rcx
  float v69; // xmm7_4
  float v70; // xmm6_4
  __int64 v72; // [rsp+0h] [rbp-100h] BYREF
  float v73; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v74; // [rsp+48h] [rbp-B8h]
  __int64 v75; // [rsp+50h] [rbp-B0h]
  unsigned int v76; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v77; // [rsp+5Ch] [rbp-A4h]
  unsigned int v78; // [rsp+60h] [rbp-A0h]
  __int64 v79; // [rsp+68h] [rbp-98h]

  v73 = *(float *)&a1;
  v2 = a1;
  v3 = a2;
  if ( !dword_140404A6C[73991637] )
  {
    v4 = 47224LL * a1;
    dword_140404A6C[v4 + 438887428] = 0;
    dword_140404A6C[v4 + 438887438] = 0;
    dword_140404A6C[v4 + 438887448] = 0;
    dword_140404A6C[v4 + 438887458] = 0;
    dword_140404A6C[v4 + 438887468] = 0;
    dword_140404A6C[v4 + 438887478] = 0;
    dword_140404A6C[v4 + 438887488] = 0;
    dword_140404A6C[v4 + 438887498] = 0;
    return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v79);
  }
  v5 = (int)dword_140404A6C[3597 * a2 + 71856292];
  if ( (_DWORD)v5 == -1 )
  {
    v9 = (int)dword_140404A6C[47224 * a1 + 438887508];
    if ( (_DWORD)v9 == -1 )
    {
      v6 = dword_140404A6C[280651674];
      v7 = dword_140404A6C[280651675];
      v8 = dword_140404A6C[280651676];
    }
    else
    {
      v10 = 7166 * v9;
      v6 = dword_140404A6C[v10 + 280651674];
      v7 = dword_140404A6C[v10 + 280651675];
      v8 = dword_140404A6C[v10 + 280651676];
    }
  }
  else
  {
    v6 = dword_140404A6C[7166 * v5 + 280651674];
    v7 = dword_140404A6C[7166 * v5 + 280651675];
    v8 = dword_140404A6C[7166 * v5 + 280651676];
  }
  v11 = (int)dword_140404A6C[3597 * v3 + 71856292];
  v12 = 8;
  v13 = v73;
  v76 = v6;
  v77 = v7;
  v78 = v8;
  v14 = &dword_140404A6C[47224 * v2 + 438887428];
  v74 = 188896 * v2;
  do
  {
    if ( !*v14 )
      goto LABEL_64;
    v15 = (int)v14[1];
    v13 = 128.0;
    v16 = 3597 * v15;
    if ( !dword_140404A6C[3597 * v15 + 71856253] )
      *v14 = 0;
    v17 = (int)v14[3];
    v18 = 32901 * v15;
    if ( (_DWORD)v17 != -1 )
    {
      v13 = 1.0;
      if ( dword_140404A6C[v18 + 299853693] )
        *v14 = 0;
      v26 = 1760 * v17;
      v27 = dword_140404A6C[v26 + 278845898];
      if ( v27 == 25 )
      {
        v28 = (int)dword_140404A6C[v26 + 278845980];
        if ( (_DWORD)v28 == -1 )
          goto LABEL_56;
        v29 = 1760 * v28;
        if ( dword_140404A6C[1760 * v28 + 278845902] == -1 )
          *v14 = 0;
        if ( dword_140404A6C[v29 + 278845904] )
          *v14 = 0;
        if ( dword_140404A6C[v29 + 278845980] == -1 )
          *v14 = 0;
        if ( dword_140404A6C[v29 + 278846052] != 3 )
LABEL_56:
          *v14 = 0;
      }
      else if ( v27 == 26 )
      {
        v30 = 1760LL * (int)v14[4];
        if ( !dword_140404A6C[v30 + 278845893] )
          *v14 = 0;
        if ( dword_140404A6C[v30 + 278845902] == -1 )
          *v14 = 0;
        if ( (int)dword_140404A6C[v30 + 278845904] >= 2 )
          *v14 = 0;
        if ( !dword_140404A6C[v30 + 278846112] )
          goto LABEL_56;
      }
      v31 = (float *)&dword_140404A6C[v26 + 278845916];
      v32 = *(float *)&dword_140404A6C[v26 + 278845917];
      v33 = (float)(*(float *)&v6 - *(float *)&dword_140404A6C[v26 + 278845916])
          * (float)(*(float *)&v6 - *(float *)&dword_140404A6C[v26 + 278845916]);
      v34 = fsqrt(
              (float)((float)((float)(v31[1] - *(float *)&v7) * (float)(v31[1] - *(float *)&v7))
                    + (float)((float)(*v31 - *(float *)&v6) * (float)(*v31 - *(float *)&v6)))
            + (float)((float)(v31[2] - *(float *)&v8) * (float)(v31[2] - *(float *)&v8)));
      v35 = (float)(*(float *)&v8 - *(float *)&dword_140404A6C[v26 + 278845918])
          * (float)(*(float *)&v8 - *(float *)&dword_140404A6C[v26 + 278845918]);
      *((float *)v14 + 8) = v34;
      if ( (float)((float)((float)((float)(*(float *)&v7 - v32) * (float)(*(float *)&v7 - v32)) + v33) + v35) <= 16384.0 )
      {
        v36 = 1.0;
        if ( (unsigned int)sub_1400DC050(v31, &v76, 0) )
          v36 = 0.5;
        v34 = *((float *)v14 + 8);
        v8 = v78;
        v7 = v77;
        v6 = v76;
      }
      else
      {
        v36 = 0.5;
      }
      v37 = (float)((float)(v36 - *((float *)v14 + 9)) * 0.125) + *((float *)v14 + 9);
      *((float *)v14 + 9) = v37;
      if ( v34 > v37 )
        goto LABEL_63;
      goto LABEL_64;
    }
    v19 = dword_140404A6C[v18 + 299853695];
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v13 = 64.0;
      }
      else if ( v19 == 2 )
      {
        v13 = 128.0;
      }
    }
    else
    {
      v13 = 8.0;
    }
    v20 = (int)dword_140404A6C[v16 + 71856292];
    v14[2] = v20;
    if ( dword_140404A6C[v18 + 299853693] )
      *v14 = 0;
    if ( dword_140404A6C[283831448] != 3 )
    {
      if ( v11 == -1 )
      {
        if ( (_DWORD)v20 != -1 )
          goto LABEL_26;
      }
      else
      {
        if ( (_DWORD)v20 == -1 )
        {
          *v14 = 0;
          goto LABEL_34;
        }
LABEL_26:
        if ( (int)dword_140404A6C[280651318] <= 0 )
          *v14 = 0;
        v21 = (float *)(0x140000000LL + 28664 * v20 + 1126820052);
        v22 = *v21;
        v23 = *(float *)(0x140000004LL + 28664 * v20 + 1126820052);
        v24 = *(float *)(0x140000008LL + 28664 * v20 + 1126820052);
        *((float *)v14 + 8) = fsqrt(
                                (float)((float)((float)(v23 - *(float *)&v7) * (float)(v23 - *(float *)&v7))
                                      + (float)((float)(*v21 - *(float *)&v6) * (float)(*v21 - *(float *)&v6)))
                              + (float)((float)(v24 - *(float *)&v8) * (float)(v24 - *(float *)&v8)));
        if ( (float)((float)((float)((float)(*(float *)&v6 - v22) * (float)(*(float *)&v6 - v22))
                           + (float)((float)(*(float *)&v7 - v23) * (float)(*(float *)&v7 - v23)))
                   + (float)((float)(*(float *)&v8 - v24) * (float)(*(float *)&v8 - v24))) <= 16384.0 )
        {
          v25 = 1.0;
          if ( (unsigned int)sub_1400DC050(v21, &v76, 0) )
            v25 = 0.5;
          v8 = v78;
          v7 = v77;
          v6 = v76;
        }
        else
        {
          v25 = 0.5;
        }
        *((float *)v14 + 9) = (float)((float)(v25 - *((float *)v14 + 9)) * 0.125) + *((float *)v14 + 9);
      }
LABEL_34:
      if ( (float)(v13 * *((float *)v14 + 9)) >= *((float *)v14 + 8) )
        goto LABEL_64;
LABEL_63:
      *v14 = 0;
    }
LABEL_64:
    v14 += 10;
    --v12;
  }
  while ( v12 );
  v38 = &dword_140404A6C[71856292];
  v39 = 0;
  v40 = &dword_140404A6C[299853695];
  while ( 2 )
  {
    if ( v39 != (_DWORD)v3 && *(v38 - 39) && !*(v40 - 2) )
    {
      v41 = 0;
      v42 = &dword_140404A6C[v74 / 4 + 438887429];
      do
      {
        if ( *(v42 - 1) && *v42 == v39 && v42[1] == *v38 )
          goto LABEL_96;
        ++v41;
        v42 += 10;
      }
      while ( v41 < 8 );
      if ( dword_140404A6C[283831448] == 3 )
      {
LABEL_80:
        v44 = (int)*v38;
        if ( (_DWORD)v44 == -1 || dword_140404A6C[283831448] == 3 )
          goto LABEL_87;
        v45 = (float *)(0x140000000LL + 28664 * v44 + 1126820052);
        v46 = fsqrt(
                (float)((float)((float)(v45[1] - *(float *)&v7) * (float)(v45[1] - *(float *)&v7))
                      + (float)((float)(*v45 - *(float *)&v6) * (float)(*v45 - *(float *)&v6)))
              + (float)((float)(v45[2] - *(float *)&v8) * (float)(v45[2] - *(float *)&v8)));
        if ( (float)((float)((float)((float)(*(float *)&v7 - *(float *)(0x140000004LL + 28664 * v44 + 1126820052))
                                   * (float)(*(float *)&v7 - *(float *)(0x140000004LL + 28664 * v44 + 1126820052)))
                           + (float)((float)(*(float *)&v6 - *v45) * (float)(*(float *)&v6 - *v45)))
                   + (float)((float)(*(float *)&v8 - *(float *)(0x140000008LL + 28664 * v44 + 1126820052))
                           * (float)(*(float *)&v8 - *(float *)(0x140000008LL + 28664 * v44 + 1126820052)))) <= 16384.0 )
        {
          v47 = 1.0;
          if ( (unsigned int)sub_1400DC050(v45, &v76, 0) )
            v47 = 0.5;
          v8 = v78;
          v7 = v77;
          v6 = v76;
        }
        else
        {
          v47 = 0.5;
        }
      }
      else
      {
        v43 = (int)*v38;
        if ( v11 != -1 )
        {
          if ( (_DWORD)v43 == -1 )
            goto LABEL_96;
          goto LABEL_79;
        }
        if ( (_DWORD)v43 != -1 )
        {
LABEL_79:
          if ( (int)dword_140404A6C[7166 * v43 + 280651318] <= 0 )
            goto LABEL_96;
          goto LABEL_80;
        }
LABEL_87:
        v46 = 4.0;
        v47 = 1.0;
      }
      v48 = *v40;
      if ( *v40 )
      {
        if ( v48 == 1 )
        {
          v13 = 64.0;
        }
        else if ( v48 == 2 )
        {
          v13 = 128.0;
        }
      }
      else
      {
        v13 = 8.0;
      }
      if ( v46 < (float)(v47 * v13) )
        sub_140007490(LODWORD(v73), v39, *v38, 0xFFFFFFFF, 0xFFFFFFFF, LODWORD(v46), LODWORD(v47));
    }
LABEL_96:
    ++v39;
    v40 += 32901;
    v38 += 3597;
    if ( v39 < 256 )
      continue;
    break;
  }
  v49 = &dword_140404A6C[278845980];
  for ( i = 0; i < 1024; ++i )
  {
    if ( *(v49 - 87) )
    {
      if ( *(v49 - 82) != 25
        || (v51 = (int)*v49, (_DWORD)v51 == -1)
        || (v52 = (int)*(v49 - 78), (_DWORD)v52 == -1)
        || *(v49 - 76)
        || v49[72] != 3
        || (v53 = (int)dword_140404A6C[7166 * v52 + 280651305], (_DWORD)v53 == -1)
        || dword_140404A6C[32901 * v53 + 299853693] )
      {
LABEL_119:
        if ( *(v49 - 82) == 26 )
        {
          if ( v49[132] )
          {
            v60 = (int)*(v49 - 78);
            if ( (_DWORD)v60 != -1 && (int)*(v49 - 76) < 2 )
            {
              v61 = (int)dword_140404A6C[7166 * v60 + 280651305];
              if ( (_DWORD)v61 != -1 && !dword_140404A6C[32901 * v61 + 299853693] )
              {
                v62 = 0;
                v63 = 1028LL * (int)v49[131];
                v75 = v63;
                if ( *(int *)((char *)&dword_140404A6C[273270157] + v63) > 0 )
                {
                  v64 = (int *)((char *)&dword_140404A6C[273270158] + v63);
                  do
                  {
                    v65 = *v64;
                    if ( i != (_DWORD)v65 )
                    {
                      v66 = 0;
                      v67 = &dword_140404A6C[v74 / 4 + 438887429];
                      while ( !*(v67 - 1)
                           || *v67 != dword_140404A6C[7166 * *(v49 - 78) + 280651305]
                           || v67[2] != (_DWORD)v65 )
                      {
                        ++v66;
                        v67 += 10;
                        if ( v66 >= 8 )
                        {
                          v68 = (float *)(0x140000000LL + 7040 * v65 + 1119597020);
                          v69 = fsqrt(
                                  (float)((float)((float)(v68[1] - *(float *)&v7) * (float)(v68[1] - *(float *)&v7))
                                        + (float)((float)(*v68 - *(float *)&v6) * (float)(*v68 - *(float *)&v6)))
                                + (float)((float)(v68[2] - *(float *)&v8) * (float)(v68[2] - *(float *)&v8)));
                          if ( (float)((float)((float)((float)(*(float *)&v7
                                                             - *(float *)(0x140000004LL + 7040 * v65 + 1119597020))
                                                     * (float)(*(float *)&v7
                                                             - *(float *)(0x140000004LL + 7040 * v65 + 1119597020)))
                                             + (float)((float)(*(float *)&v6 - *v68) * (float)(*(float *)&v6 - *v68)))
                                     + (float)((float)(*(float *)&v8
                                                     - *(float *)(0x140000008LL + 7040 * v65 + 1119597020))
                                             * (float)(*(float *)&v8
                                                     - *(float *)(0x140000008LL + 7040 * v65 + 1119597020)))) <= 16384.0 )
                          {
                            v70 = 1.0;
                            if ( (unsigned int)sub_1400DC050(v68, &v76, 0) )
                              v70 = 0.5;
                            v8 = v78;
                            v7 = v77;
                            v6 = v76;
                            v63 = v75;
                          }
                          else
                          {
                            v70 = 0.5;
                          }
                          if ( v69 < v70 )
                          {
                            sub_140007490(
                              LODWORD(v73),
                              dword_140404A6C[7166 * *(v49 - 78) + 280651305],
                              0xFFFFFFFF,
                              v65,
                              i,
                              LODWORD(v69),
                              LODWORD(v70));
                            v63 = v75;
                          }
                          break;
                        }
                      }
                    }
                    ++v62;
                    ++v64;
                  }
                  while ( v62 < *(int *)((char *)&dword_140404A6C[273270157] + v63) );
                }
              }
            }
          }
        }
      }
      else
      {
        v54 = 0;
        v55 = (_DWORD *)(0x140000000LL + v74 + 1759763072);
        while ( !*(v55 - 1) || *v55 != (_DWORD)v53 || v55[2] != (_DWORD)v51 )
        {
          ++v54;
          v55 += 10;
          if ( v54 >= 8 )
          {
            v56 = 1760 * v51;
            if ( dword_140404A6C[1760 * v51 + 278845980] == i )
            {
              v57 = (float *)&dword_140404A6C[v56 + 278845916];
              v58 = fsqrt(
                      (float)((float)((float)(v57[1] - *(float *)&v7) * (float)(v57[1] - *(float *)&v7))
                            + (float)((float)(*v57 - *(float *)&v6) * (float)(*v57 - *(float *)&v6)))
                    + (float)((float)(v57[2] - *(float *)&v8) * (float)(v57[2] - *(float *)&v8)));
              if ( (float)((float)((float)((float)(*(float *)&v7 - *(float *)&dword_140404A6C[v56 + 278845917])
                                         * (float)(*(float *)&v7 - *(float *)&dword_140404A6C[v56 + 278845917]))
                                 + (float)((float)(*(float *)&v6 - *(float *)&dword_140404A6C[v56 + 278845916])
                                         * (float)(*(float *)&v6 - *(float *)&dword_140404A6C[v56 + 278845916])))
                         + (float)((float)(*(float *)&v8 - *(float *)&dword_140404A6C[v56 + 278845918])
                                 * (float)(*(float *)&v8 - *(float *)&dword_140404A6C[v56 + 278845918]))) <= 16384.0 )
              {
                v59 = 1.0;
                if ( (unsigned int)sub_1400DC050(v57, &v76, 0) )
                  v59 = 0.5;
                v8 = v78;
                v7 = v77;
                v6 = v76;
              }
              else
              {
                v59 = 0.5;
              }
              if ( v58 < v59 )
                sub_140007490(
                  LODWORD(v73),
                  dword_140404A6C[7166 * *(v49 - 78) + 280651305],
                  0xFFFFFFFF,
                  v51,
                  dword_140404A6C[v56 + 278845980],
                  LODWORD(v58),
                  LODWORD(v59));
            }
            goto LABEL_119;
          }
        }
      }
    }
    v49 += 1760;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v79);
}

