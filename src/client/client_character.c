#include "shared_client.h"

//----- (00000001400E8580) ----------------------------------------------------
// Candidate .cmc character clothing/config loader: formats data/model/%s.cmc.
void            asset_load_character_cmc_candidate(int a1,      char *a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  unsigned int *v5;
  int v6;
  unsigned int *v7;
  float v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int *v14;
  __int64 v15;
  int v16;
  float *v17;
  signed int v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  signed int v22;
  __int64 v23;
  float v24;
  __int64 v25;
  float *v26;
  signed int v27;
  float v28;
  float *v29;
  float v30;
  int i;
  __int64 v32;
  unsigned int *v33;
  __int64 v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  __int64 v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  int v55;
  int v56;
  __int64 v57;
  unsigned int *v58;
  int v59;
  float v60;
  float v61;
  float v62;
  float *v63;
  __int64 v64;
  float *v65;
  float v66;
  float v67;
  float v68;
  float v69;
  __int64 v70;
  float v71;
  unsigned int *v72;
  unsigned int v73;
  signed int v74;
  signed int v75;
  unsigned int *v76;
  __int64 v77;
  unsigned int *v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  unsigned int *v84;
  unsigned int *v85;
  unsigned __int64 v86;
  unsigned int v87;
  unsigned int v88;
  int v89;
  unsigned int *v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  float *v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  unsigned int v114;
  unsigned int v115;
  __int64 v116;
  float v117;
  __int64 v118;
  float v119;
  unsigned int v120;
  unsigned int v121;
  __int64 v122;
  float v123;
  __int64 v124;
  float v125;
  int v126;
  __int64 v127;
  unsigned int *v128;
  signed int v129;
  __int64 v130;
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400E8580[896];
#define v132 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 0)) /* [rsp+0h] */
#define v133 (*(int (*))(void *)(sr_frame_1400E8580 + 32)) /* [rsp+20h] */
#define v134 (*(int (*))(void *)(sr_frame_1400E8580 + 36)) /* [rsp+24h] */
#define v135 (*(int (*))(void *)(sr_frame_1400E8580 + 40)) /* [rsp+28h] */
#define v136 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 48)) /* [rsp+30h] */
#define v137 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 56)) /* [rsp+38h] */
#define v138 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 64)) /* [rsp+40h] */
#define v139 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 72)) /* [rsp+48h] */
#define v140 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 80)) /* [rsp+50h] */
#define v141 (*(unsigned __int64 (*))(void *)(sr_frame_1400E8580 + 96)) /* [rsp+60h] */
#define v142 (*(char (*)[256])(void *)(sr_frame_1400E8580 + 112)) /* [rsp+70h] */
#define v143 (*(char (*)[512])(void *)(sr_frame_1400E8580 + 368)) /* [rsp+170h] */
#define v144 (*(__int64 (*))(void *)(sr_frame_1400E8580 + 880)) /* [rsp+370h] */

  v2 = a1;
  v135 = a1;
  crt_sprintf(v143, "data/model/%s.cmc", a2);
  v3 = crt_fopen(v143, "rb");
  v4 = v3;
  v136 = v3;
  v5 = &g_1699AACCC;
  if ( v3 )
  {
    (*(void (           **)(char *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(v142, 1, 4, v3);
    (*(void (           **)(int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(&v134, 4, 1, v4);
    if ( v134 != 2 )
    {
      crt_fclose(v4);
      return;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_169CBACC8,
      4,
      1,
      v4);
    v6 = 0;
    if ( (int)g_169CBACC8 > 0 )
    {
      v7 = &g_169CBACD4;
      do
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[18 * v6 + 174250136],
          4,
          3,
          v4);
        v8 = *((float *)v7 - 2);
        v7 += 18;
        ++v6;
        *((float *)v7 - 20) = v8 * 1.125;
        *((float *)v7 - 19) = *((float *)v7 - 19) * 1.125;
        *((float *)v7 - 18) = *((float *)v7 - 18) * 1.125;
      }
      while ( v6 < (int)g_169CBACC8 );
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_1699AACC0,
      4,
      1,
      v4);
    v9 = 0;
    v133 = 0;
    if ( (int)g_1699AACC0 > 0 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v140 = 0;
      v13 = 0;
      v139 = 0;
      v137 = 0;
      v14 = &g_1699AACCC;
      v138 = 0;
      do
      {
        v15 = v9;
        v141 = 276LL * v9;
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[v141 / 4 + 173447318],
          4,
          3,
          v4);
        v16 = 0;
        if ( (int)g_169CBACC8 > 0 )
        {
          v17 = (float *)(v14 + 3);
          do
          {
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              &dword_140404A6C[46 * v15 + 173447321 + 23 * v15 + 2 * v16 + v16],
              4,
              3,
              v4);
            *(v17 - 2) = *(v17 - 2) * 1.125;
            *(v17 - 1) = *(v17 - 1) * 1.125;
            *v17 = *v17 * 1.125;
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
              &dword_140404A6C[69 * v15 + 173447369 + v16++],
              4,
              1,
              v4);
            v17 += 3;
          }
          while ( v16 < (int)g_169CBACC8 );
          v10 = v140;
          v11 = v139;
          v12 = v138;
          v13 = v137;
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
          &dword_140404A6C[v141 / 4 + 173447385],
          4,
          2,
          v4);
        v18 = 0;
        *(unsigned int *)((char *)&g_169BD2CC4 + v10) = *(v14 - 2);
        v19 = 0;
        v20 = 0;
        *(unsigned int *)((char *)&g_169BD2CC8 + v10) = *(v14 - 1);
        *(unsigned int *)((char *)&g_169BD2CCC + v10) = *v14;
        *(unsigned int *)((char *)&g_169BD2D24 + v10) = v14[65];
        *(unsigned int *)((char *)&g_169BD2D28 + v10) = v14[66];
        LODWORD(v21) = 0;
        *(unsigned int *)((char *)&g_169BD2CD0 + v10) = 0;
        v22 = g_169CBACC8;
        if ( (int)g_169CBACC8 > 0 )
        {
          do
          {
            v21 = *(int *)((char *)&g_169BD2CD0 + v10);
            v20 = v21;
            if ( (int)v21 < 4 && *(float *)&dword_140404A6C[v12 + 173447369 + v19] > 0.0 )
            {
              dword_140404A6C[v11 + 174012570 + v21] = v18;
              v23 = v10 + 12LL * *(int *)((char *)&g_169BD2CD0 + v10);
              *(unsigned int *)((char *)&g_169BD2CE4 + v23) = dword_140404A6C[3 * v19
                                                                                           + 173447321
                                                                                           + 3 * v13];
              *(unsigned int *)((char *)&g_169BD2CE8 + v23) = dword_140404A6C[3 * v19
                                                                                           + 173447322
                                                                                           + 3 * v13];
              *(unsigned int *)((char *)&g_169BD2CEC + v23) = dword_140404A6C[3 * v19
                                                                                           + 173447323
                                                                                           + 3 * v13];
              dword_140404A6C[v11 + 174012586 + (int)(*(unsigned int *)((char *)&g_169BD2CD0 + v10))++] = dword_140404A6C[v12 + 173447369 + v19];
              LODWORD(v21) = *(unsigned int *)((char *)&g_169BD2CD0 + v10);
              v20 = v21;
              v22 = g_169CBACC8;
            }
            ++v18;
            ++v19;
          }
          while ( v18 < v22 );
          v4 = v136;
        }
        v24 = 0.0;
        if ( (int)v21 > 0 )
        {
          v25 = v20;
          v26 = (float *)((char *)&g_169BD2D14 + v10);
          do
          {
            v24 = v24 + *v26++;
            --v25;
          }
          while ( v25 );
          LODWORD(v21) = v20;
        }
        v27 = 0;
        if ( (int)v21 > 0 )
        {
          v28 = 1.0 / v24;
          v29 = (float *)((char *)&g_169BD2D14 + v10);
          do
          {
            ++v27;
            v30 = v28 * *v29++;
            *(v29 - 1) = v30;
          }
          while ( v27 < *(int *)((char *)&g_169BD2CD0 + v10) );
        }
        v13 += 23;
        v9 = v133 + 1;
        v137 = v13;
        v12 += 69;
        v133 = v9;
        v11 += 26;
        v138 = v12;
        v10 += 104;
        v139 = v11;
        v14 += 69;
        v140 = v10;
      }
      while ( v9 < (int)g_1699AACC0 );
      v2 = v135;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(
      &g_169CA2CC4,
      4,
      1,
      v4);
    for ( i = 0; i < (int)g_169CA2CC4; ++i )
    {
      v32 = 3;
      v33 = &dword_140404A6C[3 * i + 174225559];
      do
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))(unsigned int *)&g_1862AE008)(v33++, 4, 1, v4);
        --v32;
      }
      while ( v32 );
    }
    crt_fclose(v4);
    v5 = &g_1699AACCC;
  }
  v34 = 0;
  g_18329E55C = xmmword_140278D30;
  g_18329E57C = 1065353216;
  g_18329E56C = xmmword_140278D30;
  g_18329E6B4 = 1065353216;
  g_18329E694 = xmmword_140278D30;
  g_18329E7EC = 1065353216;
  g_18329E6A4 = xmmword_140278D30;
  g_18329E924 = 1065353216;
  g_18329E7CC = xmmword_140278D30;
  g_18329EA5C = 1065353216;
  g_18329E7DC = xmmword_140278D30;
  g_18329EB94 = 1065353216;
  g_18329E904 = xmmword_140278D30;
  g_18329ECCC = 1065353216;
  g_18329E914 = xmmword_140278D30;
  g_18329EE04 = 1065353216;
  g_18329EA3C = xmmword_140278D30;
  g_18329EF3C = 1065353216;
  g_18329EA4C = xmmword_140278D30;
  g_18329F074 = 1065353216;
  g_18329EB74 = xmmword_140278D30;
  g_18329F1AC = 1065353216;
  g_18329EB84 = xmmword_140278D30;
  g_18329F2E4 = 1065353216;
  g_18329ECAC = xmmword_140278D30;
  g_18329F41C = 1065353216;
  g_18329ECBC = xmmword_140278D30;
  g_18329F554 = 1065353216;
  g_18329EDE4 = xmmword_140278D30;
  g_18329F68C = 1065353216;
  g_18329EDF4 = xmmword_140278D30;
  g_18329F7C4 = 1065353216;
  g_18329EF1C = xmmword_140278D30;
  g_169CBACD8 = 0;
  g_18329EF2C = xmmword_140278D30;
  g_169CBACDC = -1103101952;
  g_18329F054 = xmmword_140278D30;
  g_18329F064 = xmmword_140278D30;
  g_18329F18C = xmmword_140278D30;
  g_18329F19C = xmmword_140278D30;
  g_18329F2C4 = xmmword_140278D30;
  g_18329F2D4 = xmmword_140278D30;
  g_18329F3FC = xmmword_140278D30;
  g_18329F40C = xmmword_140278D30;
  g_18329F534 = xmmword_140278D30;
  g_18329F544 = xmmword_140278D30;
  g_18329F66C = xmmword_140278D30;
  g_18329F67C = xmmword_140278D30;
  g_18329F7A4 = xmmword_140278D30;
  g_18329F7B4 = xmmword_140278D30;
  g_169CBACE0 = 1031798784;
  do
  {
    v35 = dword_140404A6C[78 * v34 + 280651455];
    v36 = dword_140404A6C[78 * v34 + 280651456];
    v37 = dword_140404A6C[78 * v34 + 280651457];
    v38 = 9 * v34;
    v39 = (int)dword_140404A6C[25 * v34 + 282486045];
    dword_140404A6C[2 * v38 + 174250145] = dword_140404A6C[78 * v34 + 280651452];
    dword_140404A6C[2 * v38 + 174250146] = dword_140404A6C[78 * v34 + 280651453];
    dword_140404A6C[2 * v38 + 174250147] = dword_140404A6C[78 * v34 + 280651454];
    v40 = dword_140404A6C[78 * v34 + 280651458];
    dword_140404A6C[2 * v38 + 174250148] = v35;
    dword_140404A6C[2 * v38 + 174250149] = v36;
    dword_140404A6C[2 * v38 + 174250150] = v37;
    dword_140404A6C[2 * v38 + 174250151] = v40;
    dword_140404A6C[2 * v38 + 174250152] = dword_140404A6C[78 * v34 + 280651459];
    dword_140404A6C[2 * v38 + 174250153] = dword_140404A6C[78 * v34 + 280651460];
    if ( v34 )
    {
      v41 = *(float *)&dword_140404A6C[18 * v34 + 174250136];
      v42 = *(float *)&dword_140404A6C[18 * v34 + 174250137];
      v43 = *(float *)&dword_140404A6C[18 * v34 + 174250138];
      if ( (unsigned __int64)(v34 - 5) <= 1 || (unsigned __int64)(v34 - 8) <= 1 )
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
      v48 = 9 * v39;
      v49 = *(float *)&dword_140404A6C[2 * v48 + 174250149];
      v50 = *(float *)&dword_140404A6C[2 * v48 + 174250146];
      v51 = *(float *)&dword_140404A6C[2 * v48 + 174250150];
      v52 = *(float *)&dword_140404A6C[2 * v48 + 174250147];
      v53 = *(float *)&dword_140404A6C[2 * v48 + 174250152] * v43;
      v54 = *(float *)&dword_140404A6C[2 * v48 + 174250153] * v43;
      *(float *)&dword_140404A6C[18 * v34 + 174250139] = (float)((float)(v43
                                                                       * *(float *)&dword_140404A6C[2 * v48 + 174250151])
                                                               + (float)(v41
                                                                       * *(float *)&dword_140404A6C[2 * v48 + 174250145]))
                                                       + (float)((float)(v42
                                                                       * *(float *)&dword_140404A6C[2 * v48 + 174250148])
                                                               + *(float *)&dword_140404A6C[2 * v48 + 174250139]);
      *(float *)&dword_140404A6C[18 * v34 + 174250140] = (float)((float)(v50 * v41) + v53)
                                                       + (float)((float)(v49 * v42)
                                                               + *(float *)&dword_140404A6C[2 * v48 + 174250140]);
      *(float *)&dword_140404A6C[18 * v34 + 174250141] = (float)((float)(v52 * v41) + v54)
                                                       + (float)((float)(v51 * v42)
                                                               + *(float *)&dword_140404A6C[2 * v48 + 174250141]);
    }
    ++v34;
    dword_140404A6C[2 * v38 + 174250142] = dword_140404A6C[2 * v38 + 174250139];
    dword_140404A6C[2 * v38 + 174250143] = dword_140404A6C[2 * v38 + 174250140];
    dword_140404A6C[2 * v38 + 174250144] = dword_140404A6C[2 * v38 + 174250141];
  }
  while ( v34 < 16 );
  v55 = g_1699AACC0;
  v56 = 0;
  v57 = g_1699AACC0;
  if ( (int)g_1699AACC0 > 0 )
  {
    v58 = &g_169BD2CCC;
    do
    {
      v59 = v58[1];
      v60 = 0.0;
      v61 = 0.0;
      v62 = 0.0;
      if ( v59 > 0 )
      {
        v63 = (float *)(v58 + 18);
        v64 = (unsigned int)v59;
        v65 = (float *)(v58 + 8);
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
              + (float)((float)((float)((float)(v71 * *(float *)&dword_140404A6C[18 * v70 + 174250151])
                                      + (float)(v66 * *(float *)&dword_140404A6C[18 * v70 + 174250145]))
                              + (float)((float)(v67 * *(float *)&dword_140404A6C[18 * v70 + 174250148])
                                      + *(float *)&dword_140404A6C[18 * v70 + 174250139]))
                      * v69);
          v61 = v61
              + (float)((float)((float)((float)(v66 * *(float *)&dword_140404A6C[18 * v70 + 174250146])
                                      + (float)(v68 * *(float *)&dword_140404A6C[18 * v70 + 174250152]))
                              + (float)((float)(v67 * *(float *)&dword_140404A6C[18 * v70 + 174250149])
                                      + *(float *)&dword_140404A6C[18 * v70 + 174250140]))
                      * v69);
          v62 = v62
              + (float)((float)((float)((float)(v66 * *(float *)&dword_140404A6C[18 * v70 + 174250147])
                                      + (float)(v68 * *(float *)&dword_140404A6C[18 * v70 + 174250153]))
                              + (float)((float)(v67 * *(float *)&dword_140404A6C[18 * v70 + 174250150])
                                      + *(float *)&dword_140404A6C[18 * v70 + 174250141]))
                      * v69);
          --v64;
        }
        while ( v64 );
      }
      *((float *)v58 - 2) = v60;
      ++v56;
      *((float *)v58 - 1) = v61;
      *(float *)v58 = v62;
      v58 += 26;
      v55 = g_1699AACC0;
      v57 = g_1699AACC0;
    }
    while ( v56 < (int)g_1699AACC0 );
  }
  mesh_vertex_count = v55;
  if ( v55 > 0 )
  {
    v72 = (unsigned int *)&g_16A7DBDB0;
    do
    {
      v73 = *(v5 - 2);
      v5 += 69;
      *(v72 - 2) = v73;
      v72 += 3;
      *(v72 - 4) = *(v5 - 70);
      *(v72 - 3) = *(v5 - 69);
      --v57;
    }
    while ( v57 );
  }
  v74 = g_169CA2CC4;
  v75 = 0;
  mesh_triangle_count = g_169CA2CC4;
  if ( (int)g_169CA2CC4 > 0 )
  {
    v76 = &g_16AB13DB4;
    v77 = 0;
    v78 = &g_16ABD3DB0;
    do
    {
      v79 = (int)dword_140404A6C[v77 + 174225559];
      v76 += 6;
      v80 = (int)dword_140404A6C[v77 + 174225560];
      ++v75;
      v81 = (int)dword_140404A6C[v77 + 174225561];
      ++v78;
      dword_140404A6C[v77 + 177495248] = v79;
      dword_140404A6C[v77 + 177495249] = v80;
      dword_140404A6C[v77 + 177495250] = v81;
      v77 += 3;
      *(v78 - 1) = -2;
      *(v76 - 7) = dword_140404A6C[69 * v79 + 173447385];
      *(v76 - 6) = dword_140404A6C[69 * v79 + 173447386];
      *(v76 - 5) = dword_140404A6C[69 * v80 + 173447385];
      *(v76 - 4) = dword_140404A6C[69 * v80 + 173447386];
      *(v76 - 3) = dword_140404A6C[69 * v81 + 173447385];
      *(v76 - 2) = dword_140404A6C[69 * v81 + 173447386];
    }
    while ( v75 < v74 );
  }
  v82 = v2;
  v136 = v2;
  sub_1401449C0(dword_140404A6C[v2 + 283827638], 0);
  v83 = 196707LL * v2;
  v84 = &dword_140404A6C[v83 + 161054682];
  v85 = &g_169CBACEC;
  v86 = (unsigned __int64)&g_169CBB16C;
  do
  {
    *(v84 - 2) = *(v85 - 2);
    *(v84 - 1) = *(v85 - 1);
    *v84 = *v85;
    v84[1] = *(v85 - 8);
    v84[2] = *(v85 - 7);
    v84[3] = *(v85 - 6);
    v84[4] = v85[16];
    v84[5] = v85[17];
    v84[6] = v85[18];
    v84[7] = v85[10];
    v84[8] = v85[11];
    v84[9] = v85[12];
    v84[10] = v85[34];
    v84[11] = v85[35];
    v84[12] = v85[36];
    v84[13] = v85[28];
    v84[14] = v85[29];
    v84[15] = v85[30];
    v84[16] = v85[52];
    v84[17] = v85[53];
    v84[18] = v85[54];
    v84[19] = v85[46];
    v84[20] = v85[47];
    v84[21] = v85[48];
    v84[22] = v85[70];
    v84[23] = v85[71];
    v84[24] = v85[72];
    v84[25] = v85[64];
    v84[26] = v85[65];
    v84[27] = v85[66];
    v84[28] = v85[88];
    v84[29] = v85[89];
    v84[30] = v85[90];
    v84[31] = v85[82];
    v84[32] = v85[83];
    v84[33] = v85[84];
    v84[34] = v85[106];
    v84[35] = v85[107];
    v84[36] = v85[108];
    v84[37] = v85[100];
    v84[38] = v85[101];
    v84 += 48;
    *(v84 - 9) = v85[102];
    *(v84 - 8) = v85[124];
    *(v84 - 7) = v85[125];
    *(v84 - 6) = v85[126];
    *(v84 - 5) = v85[118];
    *(v84 - 4) = v85[119];
    v87 = v85[120];
    v85 += 144;
    *(v84 - 3) = v87;
  }
  while ( (__int64)v85 < (__int64)&g_169CBB16C );
  v88 = 0;
  dword_140404A6C[v83 + 160858070] = 16;
  v89 = 0;
  dword_140404A6C[v83 + 160858069] = 0;
  if ( (int)g_169CA2CC4 > 0 )
  {
    v90 = &g_169CA2CC8;
    v91 = 196707LL * v2;
    do
    {
      v92 = 26LL * (int)v90[2];
      v93 = 26LL * (int)v90[1];
      v94 = (float *)&dword_140404A6C[26 * *v90 + 174012566];
      v95 = *(float *)&dword_140404A6C[v92 + 174012568] - v94[2];
      v96 = *(float *)&dword_140404A6C[v93 + 174012568] - v94[2];
      v97 = *(float *)&dword_140404A6C[v92 + 174012566] - *v94;
      v98 = *(float *)&dword_140404A6C[v93 + 174012567] - v94[1];
      v99 = *(float *)&dword_140404A6C[v92 + 174012567] - v94[1];
      v100 = *(float *)&dword_140404A6C[v93 + 174012566] - *v94;
      v101 = (float)(v99 * v96) - (float)(v95 * v98);
      v102 = (float)(v95 * v100) - (float)(v97 * v96);
      v103 = (float)(v97 * v98) - (float)(v99 * v100);
      v104 = fsqrt((float)((float)(v102 * v102) + (float)(v101 * v101)) + (float)(v103 * v103));
      if ( v104 == 0.0 )
      {
        v105 = 0.0;
        v106 = 0.0;
        v107 = 0.0;
      }
      else
      {
        v105 = v101 * (float)(1.0 / v104);
        v106 = v102 * (float)(1.0 / v104);
        v107 = v103 * (float)(1.0 / v104);
      }
      v108 = 3;
      do
      {
        v109 = (int)*v90;
        if ( (unsigned int)(v2 - 22) <= 1 )
          *(float *)&dword_140404A6C[26 * *v90 + 174012568] = *(float *)&dword_140404A6C[26 * *v90 + 174012568]
                                                            - 0.015625;
        v110 = 26 * v109;
        v111 = v91 + (int)(v88 * dword_140404A6C[v83 + 160858070]);
        dword_140404A6C[v111 + 160858071] = dword_140404A6C[26 * v109 + 174012566];
        dword_140404A6C[v111 + 160858072] = dword_140404A6C[26 * v109 + 174012567];
        dword_140404A6C[v111 + 160858073] = dword_140404A6C[26 * v109 + 174012568];
        v112 = v91 + (int)(dword_140404A6C[v83 + 160858069] * dword_140404A6C[v83 + 160858070]);
        dword_140404A6C[v112 + 160858074] = dword_140404A6C[26 * v109 + 174012590];
        dword_140404A6C[v112 + 160858075] = dword_140404A6C[26 * v109 + 174012591];
        v113 = v91 + (int)(dword_140404A6C[v83 + 160858069] * dword_140404A6C[v83 + 160858070]);
        *(float *)&dword_140404A6C[v113 + 160858076] = v105;
        *(float *)&dword_140404A6C[v113 + 160858077] = v106;
        *(float *)&dword_140404A6C[v113 + 160858078] = v107;
        v114 = dword_140404A6C[v83 + 160858069];
        v115 = dword_140404A6C[v83 + 160858070];
        v116 = v91 + (int)(v115 * v114);
        v117 = *(float *)&dword_140404A6C[v116 + 160858075];
        if ( v117 >= 0.9375 && v117 < 1.0 )
        {
          dword_140404A6C[v116 + 160858074] = 1099169792;
          v115 = dword_140404A6C[v83 + 160858070];
          v114 = dword_140404A6C[v83 + 160858069];
        }
        v118 = v91 + (int)(v115 * v114);
        v119 = *(float *)&dword_140404A6C[v118 + 160858075];
        if ( v119 >= 0.625 && v119 < 0.6875 )
        {
          dword_140404A6C[v118 + 160858074] = 1099694080;
          v115 = dword_140404A6C[v83 + 160858070];
          v114 = dword_140404A6C[v83 + 160858069];
        }
        v120 = v115;
        v121 = v114;
        v122 = (int)(v115 * v114);
        v123 = *(float *)&dword_140404A6C[v122 + 160858075 + v91];
        if ( v123 >= 0.375 && v123 < 0.4375 && *(float *)&dword_140404A6C[v122 + 160858074 + v91] < 0.3125 )
        {
          dword_140404A6C[v122 + 160858074 + v91] = 1099694080;
          v120 = dword_140404A6C[v83 + 160858070];
          v121 = dword_140404A6C[v83 + 160858069];
        }
        v124 = v91 + (int)(v120 * v121);
        v125 = *(float *)&dword_140404A6C[v124 + 160858075];
        if ( v125 >= 0.5 && v125 < 0.5625 )
        {
          dword_140404A6C[v124 + 160858074] = 1100218368;
          v121 = dword_140404A6C[v83 + 160858069];
        }
        v126 = dword_140404A6C[v110 + 174012569];
        v127 = v91 + (int)(4 * v121);
        v86 = 0;
        dword_140404A6C[v127 + 161021911] = 1065353216;
        dword_140404A6C[v91 + 161021912 + (int)(4 * dword_140404A6C[v83 + 160858069])] = 0;
        dword_140404A6C[v91 + 161021913 + (int)(4 * dword_140404A6C[v83 + 160858069])] = 0;
        dword_140404A6C[v91 + 161021914 + (int)(4 * dword_140404A6C[v83 + 160858069])] = 0;
        dword_140404A6C[v91 + 160989143 + (int)(4 * dword_140404A6C[v83 + 160858069])] = 0;
        dword_140404A6C[v91 + 160989144 + (int)(4 * dword_140404A6C[v83 + 160858069])] = 0;
        dword_140404A6C[v91 + 160989145 + (int)(4 * dword_140404A6C[v83 + 160858069])] = 0;
        dword_140404A6C[v91 + 160989146 + (int)(4 * dword_140404A6C[v83 + 160858069])] = 0;
        if ( v126 > 0 )
        {
          v128 = &dword_140404A6C[v110 + 174012586];
          do
          {
            dword_140404A6C[v91 + 160989143 + (int)(v86 + 4 * dword_140404A6C[v83 + 160858069])] = *(++v128 - 17);
            v129 = v86 + 4 * dword_140404A6C[v83 + 160858069];
            v86 = (unsigned int)(v86 + 1);
            dword_140404A6C[v91 + 161021911 + v129] = *(v128 - 1);
          }
          while ( (int)v86 < v126 );
        }
        ++v90;
        *(_OWORD *)&dword_140404A6C[v91
                                  + 160858079
                                  + (int)(dword_140404A6C[v83 + 160858069] * dword_140404A6C[v83 + 160858070])] = *(_OWORD *)&dword_140404A6C[v91 + 160989143 + (int)(4 * dword_140404A6C[v83 + 160858069])];
        *(_OWORD *)&dword_140404A6C[v91
                                  + 160858083
                                  + (int)(dword_140404A6C[v83 + 160858069] * dword_140404A6C[v83 + 160858070])] = *(_OWORD *)&dword_140404A6C[v91 + 161021911 + (int)(4 * dword_140404A6C[v83 + 160858069])];
        v88 = dword_140404A6C[v83 + 160858069] + 1;
        dword_140404A6C[v83 + 160858069] = v88;
        --v108;
      }
      while ( v108 );
      ++v89;
    }
    while ( v89 < (int)g_169CA2CC4 );
    v82 = v136;
  }
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v82 + 283791190] + 283793813]);
  glBufferData(34962,
    (int)(4 * dword_140404A6C[v83 + 160858069] * dword_140404A6C[v83 + 160858070]),
    &dword_140404A6C[v83 + 160858071],
    35044);
  glBindBuffer(34962, 0);
  return;
}
#undef v132
#undef v133
#undef v134
#undef v135
#undef v136
#undef v137
#undef v138
#undef v139
#undef v140
#undef v141
#undef v142
#undef v143
#undef v144

//----- (00000001400FBA50) ----------------------------------------------------
__int64 sub_1400FBA50()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  _Alignas(8) unsigned sr_character_position[3];
  _Alignas(16) unsigned sr_character_rotation[12];
  _Alignas(16) unsigned sr_character_transform[16];
  unsigned sr_character_light[3];
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1400FBA50[240];
#define v19 (*(__int64 (*))(void *)(sr_frame_1400FBA50 + 0)) /* [rsp+8h] */
#define v20 (*(__int64 (*))(void *)(sr_frame_1400FBA50 + 32)) /* [rsp+28h] */
#define v21 (*(__int64 (*))(void *)(sr_frame_1400FBA50 + 40)) /* [rsp+30h] */
#define v37 (*(float (*)[4])(void *)(sr_frame_1400FBA50 + 192)) /* [rsp+C8h] */
#define v40 (*(__int64 (*))(void *)(sr_frame_1400FBA50 + 224)) /* [rsp+E8h] */

  static const float sr_character_axis[3] = {0.0f,1.0f,0.0f};

  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[44 * g_183EBE404 + 284024944], 0);
  glEnable(2929);
  glDepthFunc(515);
  LOBYTE(v0) = 1;
  glDepthMask(v0);
  glClearColor(0.125f,0.125f,0.125f,0.0f);
  glClear(16640);
  sub_14007A570(0, 0, 1024, 640, 0.125, 1024.0, 1.0);
  *(_OWORD *)&g_183F7C544 = xmmword_1402796C0;
  *(_OWORD *)&g_183F7C554 = xmmword_140279490;
  *(_OWORD *)&g_183F7C564 = xmmword_140279490;
  sub_14007BE20((float *)(unsigned int *)&g_183F7C544, (unsigned int *)&g_183F7C550);
  glUseProgram(model_program);
  glActiveTexture(33985);
  glEnable(3553);
  glBindTexture(3553, dword_140404A6C[44 * g_183EBF170 + 284024944]);
  glActiveTexture(33984);
  (*(int64_t *)(void *)sr_character_position) = 0;
  sr_character_position[2] = 0;
  (*(__int128 *)(void *)sr_character_rotation) = xmmword_140278D30;
  sr_character_rotation[8] = 1065353216;
  (*(__int128 *)(void *)(sr_character_rotation+4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_character_rotation), sr_character_axis, sr_export_float_lane_container(1080177110));
  sr_character_light[0] = 0;
  qmemcpy((sr_character_light+1), "333?333?", 8);
  *(unsigned int *)&g_184178D40 = 1056964608;
  *(unsigned int *)&g_184178D44 = 1056964608;
  *(unsigned int *)&g_184178D48 = 1056964608;
  *(unsigned int *)&g_184178D50 = 1056964608;
  *(unsigned int *)&g_184178D54 = 1056964608;
  *(unsigned int *)&g_184178D58 = 1056964608;
  glUniform3fv(model_u_viewposition, 1, (unsigned int *)&g_183F7C544);
  glUniform3fv(model_u_objposition, 1, &(*(int64_t *)(void *)sr_character_position));
  glUniformMatrix3fv(model_u_objorientation, 1, 0, &(*(__int128 *)(void *)sr_character_rotation));
  glUniform3fv(model_u_lightdirection, 1, &sr_character_light[0]);
  glUniform3fv(model_u_lightambient, 1, (unsigned int *)&g_184178D40);
  glUniform3fv(model_u_lightdiffuse, 1, (unsigned int *)&g_184178D50);
  v5 = (int)g_183EBF17C;
  v37[3] = 0.0;
  v6 = (int)dword_140404A6C[16 * g_151E461E8 + 283827702 + g_151E461EC];
  v37[0] = (float)((float)(int)g_151E461F0 + 0.5) * 0.0625;
  v37[2] = (float)((float)(int)g_151E461FC + 0.5) * 0.0625;
  v37[1] = (float)((float)(int)g_151E461F4 + 0.5) * 0.0625;
  glActiveTexture(33984);
  glBindTexture(3553, dword_140404A6C[44 * v5 + 284024944]);
  glActiveTexture(33986);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E63C = 1065353216;
  g_1A724E620 = xmmword_140278E20;
  sr_character_transform[3] = 0;
  g_1A724E610 = xmmword_140278D80;
  *(_QWORD *)&g_1A724E630 = (*(int64_t *)(void *)sr_character_position);
  g_1A724E638 = sr_character_position[2];
  (*(int64_t *)(void *)sr_character_transform) = (*(__int128 *)(void *)sr_character_rotation);
  sr_character_transform[4] = HIDWORD((*(__int128 *)(void *)sr_character_rotation));
  sr_character_transform[2] = DWORD2((*(__int128 *)(void *)sr_character_rotation));
  (*(int64_t *)(void *)(sr_character_transform+8)) = *((_QWORD *)&(*(__int128 *)(void *)(sr_character_rotation+4)) + 1);
  (*(int64_t *)(void *)(sr_character_transform+5)) = (*(__int128 *)(void *)(sr_character_rotation+4));
  (*(__int128 *)(void *)(sr_character_transform+12)) = xmmword_140279490;
  sr_character_transform[10] = sr_character_rotation[8];
  sr_character_transform[7] = 0;
  sr_character_transform[11] = 0;
  sub_14007A0E0((unsigned int *)&g_1A724E600, (__int64)&(*(int64_t *)(void *)sr_character_transform), (__int64)(unsigned int *)&g_1A724E600);
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glUniformMatrix4fv(model_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glEnableVertexAttribArray(2);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v6 + 283790166] + 283793813]);
  v21 = 0;
  LODWORD(v20) = 4 * dword_140404A6C[908 * v6 + 178527462];
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(0));
  v8 = 4 * dword_140404A6C[908 * v6 + 178527462];
  v21 = 12;
  LODWORD(v20) = v8;
  glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(12));
  v9 = 4 * dword_140404A6C[908 * v6 + 178527462];
  v21 = 20;
  LODWORD(v20) = v9;
  glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(20));
  glVertexAttrib4fv(3, v37);
  glDrawArrays(4, 0, 3 * dword_140404A6C[908 * v6 + 178527465]);
  glBindBuffer(34962, 0);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glDisableVertexAttribArray(2);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glActiveTexture(33984);
  v11 = (int)g_183EBF17C;
  v12 = (int)dword_140404A6C[16 * g_151E461E8 + 283827734 + g_151E461F8];
  glActiveTexture(33984);
  glBindTexture(3553, dword_140404A6C[44 * v11 + 284024944]);
  glActiveTexture(33986);
  glBindTexture(34067, dword_140404A6C[44 * shading_cube_map + 284024944]);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E63C = 1065353216;
  g_1A724E620 = xmmword_140278E20;
  sr_character_transform[3] = 0;
  *(_QWORD *)&g_1A724E630 = (*(int64_t *)(void *)sr_character_position);
  g_1A724E610 = xmmword_140278D80;
  sr_character_transform[7] = 0;
  g_1A724E638 = sr_character_position[2];
  (*(int64_t *)(void *)sr_character_transform) = (*(__int128 *)(void *)sr_character_rotation);
  sr_character_transform[4] = HIDWORD((*(__int128 *)(void *)sr_character_rotation));
  sr_character_transform[2] = DWORD2((*(__int128 *)(void *)sr_character_rotation));
  (*(int64_t *)(void *)(sr_character_transform+8)) = *((_QWORD *)&(*(__int128 *)(void *)(sr_character_rotation+4)) + 1);
  (*(int64_t *)(void *)(sr_character_transform+5)) = (*(__int128 *)(void *)(sr_character_rotation+4));
  (*(__int128 *)(void *)(sr_character_transform+12)) = xmmword_140279490;
  sr_character_transform[10] = sr_character_rotation[8];
  sr_character_transform[11] = 0;
  sub_14007A0E0((unsigned int *)&g_1A724E600, (__int64)&(*(int64_t *)(void *)sr_character_transform), (__int64)(unsigned int *)&g_1A724E600);
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glUniformMatrix4fv(model_u_modelviewprojectionmatrix, 1, 0, (unsigned int *)&g_1A724E6C0);
  glEnableVertexAttribArray(0);
  glEnableVertexAttribArray(1);
  glEnableVertexAttribArray(2);
  glBindBuffer(34962, dword_140404A6C[2 * dword_140404A6C[v12 + 283790166] + 283793813]);
  v21 = 0;
  LODWORD(v20) = 4 * dword_140404A6C[908 * v12 + 178527462];
  glVertexAttribPointer(0, 3, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(0));
  v14 = 4 * dword_140404A6C[908 * v12 + 178527462];
  v21 = 12;
  LODWORD(v20) = v14;
  glVertexAttribPointer(1, 2, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(12));
  v15 = 4 * dword_140404A6C[908 * v12 + 178527462];
  v21 = 20;
  LODWORD(v20) = v15;
  glVertexAttribPointer(2, 3, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(20));
  glVertexAttrib4fv(3, v37);
  glDrawArrays(4, 0, 3 * dword_140404A6C[908 * v12 + 178527465]);
  glBindBuffer(34962, 0);
  glDisableVertexAttribArray(0);
  glDisableVertexAttribArray(1);
  glDisableVertexAttribArray(2);
  g_1A724E600 = xmmword_140278D30;
  g_1A724E610 = xmmword_140278D80;
  g_1A724E620 = xmmword_140278E20;
  g_1A724E630 = xmmword_140279490;
  sub_14007A0E0((unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E600, (__int64)(unsigned int *)&g_1A724E5C0);
  sub_14007A0E0((unsigned int *)&g_1A724E6C0, (__int64)(unsigned int *)&g_1A724E640, (__int64)(unsigned int *)&g_1A724E580);
  glActiveTexture(33984);
  LOBYTE(v17) = 1;
  glDepthMask(v17);
  glDisable(2929);
  glDepthMask(0);
  glDisable(2884);
  glDisable(3042);
  glBindFramebuffer(36160, dword_140404A6C[2 * g_183E97744 + 283791765]);
  glFramebufferTexture2D(36160, 36064, 3553, dword_140404A6C[42 * g_183EBE430 + 436582486], 0);
  glUseProgram(hdr_program);
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE404 + 436582486]);
  glActiveTexture(33985);
  glBindTexture(3553, dword_140404A6C[42 * g_183EBE404 + 436582486]);
  glActiveTexture(33984);
  glDrawArrays(4, 0, 3);
  sub_14007BB00();
  return 0; /* compatibility result discarded by all reviewed callers */
}
#undef v19
#undef v20
#undef v21
#undef v37
#undef v40
