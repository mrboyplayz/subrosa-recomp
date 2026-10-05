#include "shared_client.h"

// 14020C0C8: using guessed type __int64 __fastcall fread(_QWORD, _QWORD, _QWORD, _QWORD);
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 16A91BDA8: using guessed type unsigned int;
// 16A94BDAC: using guessed type unsigned int;

//----- (00000001400E8580) ----------------------------------------------------
// Candidate .cmc character clothing/config loader: formats data/model/%s.cmc.
void            asset_load_character_cmc_candidate(int a1,      char *a2)
{
  int v2; // r13d
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned int *v5; // rbx
  int v6; // edi
  unsigned int *v7; // rbx
  float v8; // xmm0_4
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r13
  unsigned int *v14; // r12
  __int64 v15; // rbx
  int v16; // r14d
  float *v17; // rsi
  signed int v18; // r9d
  __int64 v19; // r10
  unsigned int v20; // ecx
  __int64 v21; // rax
  signed int v22; // edx
  __int64 v23; // rdx
  float v24; // xmm0_4
  __int64 v25; // rdx
  float *v26; // rax
  signed int v27; // ecx
  float v28; // xmm1_4
  float *v29; // rax
  float v30; // xmm0_4
  int i; // esi
  __int64 v32; // rdi
  unsigned int *v33; // rbx
  __int64 v34; // r8
  unsigned int v35; // xmm12_4
  unsigned int v36; // xmm13_4
  unsigned int v37; // xmm14_4
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // eax
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
  int v55; // eax
  int v56; // r11d
  __int64 v57; // rdx
  unsigned int *v58; // r9
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
  unsigned int *v72; // rcx
  unsigned int v73; // eax
  signed int v74; // edi
  signed int v75; // r11d
  unsigned int *v76; // r9
  __int64 v77; // r10
  unsigned int *v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r15
  __int64 v83; // rbx
  unsigned int *v84; // rdx
  unsigned int *v85; // rcx
  unsigned __int64 v86; // r8
  unsigned int v87; // eax
  unsigned int v88; // r9d
  int v89; // r14d
  unsigned int *v90; // rsi
  __int64 v91; // r10
  __int64 v92; // r8
  __int64 v93; // rdx
  float *v94; // rcx
  float v95; // xmm7_4
  float v96; // xmm3_4
  float v97; // xmm8_4
  float v98; // xmm5_4
  float v99; // xmm4_4
  float v100; // xmm6_4
  float v101; // xmm9_4
  float v102; // xmm7_4
  float v103; // xmm8_4
  float v104; // xmm3_4
  float v105; // xmm9_4
  float v106; // xmm7_4
  float v107; // xmm8_4
  __int64 v108; // rbp
  __int64 v109; // rdx
  __int64 v110; // rdi
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rcx
  unsigned int v114; // edx
  unsigned int v115; // ecx
  __int64 v116; // r8
  float v117; // xmm0_4
  __int64 v118; // r8
  float v119; // xmm0_4
  unsigned int v120; // r9d
  unsigned int v121; // r8d
  __int64 v122; // r11
  float v123; // xmm0_4
  __int64 v124; // rcx
  float v125; // xmm0_4
  int v126; // r11d
  __int64 v127; // rcx
  unsigned int *v128; // r9
  signed int v129; // ecx
  __int64 v130; // r8
  __int64 v132; // [rsp+0h] [rbp-458h] BYREF
  int v133; // [rsp+20h] [rbp-438h]
  int v134; // [rsp+24h] [rbp-434h] BYREF
  int v135; // [rsp+28h] [rbp-430h]
  __int64 v136; // [rsp+30h] [rbp-428h]
  __int64 v137; // [rsp+38h] [rbp-420h]
  __int64 v138; // [rsp+40h] [rbp-418h]
  __int64 v139; // [rsp+48h] [rbp-410h]
  __int64 v140; // [rsp+50h] [rbp-408h]
  unsigned __int64 v141; // [rsp+60h] [rbp-3F8h]
  char v142[256]; // [rsp+70h] [rbp-3E8h] BYREF
  char v143[512]; // [rsp+170h] [rbp-2E8h] BYREF
  __int64 v144; // [rsp+370h] [rbp-E8h]

  v2 = a1;
  v135 = a1;
  sub_140158AB0(v143, "data/model/%s.cmc", a2);
  v3 = sub_14020B8D8(v143, "rb");
  v4 = v3;
  v136 = v3;
  v5 = &dword_140404A6C[173447320];
  if ( v3 )
  {
    (*(void (           **)(char *, __int64, __int64, __int64))&dword_140404A6C[293250407])(v142, 1, 4, v3);
    (*(void (           **)(int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(&v134, 4, 1, v4);
    if ( v134 != 2 )
    {
      sub_14020B9E8(v4);
      return;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
      &dword_140404A6C[174250135],
      4,
      1,
      v4);
    v6 = 0;
    if ( (int)dword_140404A6C[174250135] > 0 )
    {
      v7 = &dword_140404A6C[174250138];
      do
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
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
      while ( v6 < (int)dword_140404A6C[174250135] );
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
      &dword_140404A6C[173447317],
      4,
      1,
      v4);
    v9 = 0;
    v133 = 0;
    if ( (int)dword_140404A6C[173447317] > 0 )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v140 = 0;
      v13 = 0;
      v139 = 0;
      v137 = 0;
      v14 = &dword_140404A6C[173447320];
      v138 = 0;
      do
      {
        v15 = v9;
        v141 = 276LL * v9;
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v141 / 4 + 173447318],
          4,
          3,
          v4);
        v16 = 0;
        if ( (int)dword_140404A6C[174250135] > 0 )
        {
          v17 = (float *)(v14 + 3);
          do
          {
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              &dword_140404A6C[46 * v15 + 173447321 + 23 * v15 + 2 * v16 + v16],
              4,
              3,
              v4);
            *(v17 - 2) = *(v17 - 2) * 1.125;
            *(v17 - 1) = *(v17 - 1) * 1.125;
            *v17 = *v17 * 1.125;
            (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
              &dword_140404A6C[69 * v15 + 173447369 + v16++],
              4,
              1,
              v4);
            v17 += 3;
          }
          while ( v16 < (int)dword_140404A6C[174250135] );
          v10 = v140;
          v11 = v139;
          v12 = v138;
          v13 = v137;
        }
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
          &dword_140404A6C[v141 / 4 + 173447385],
          4,
          2,
          v4);
        v18 = 0;
        *(unsigned int *)((char *)&dword_140404A6C[174012566] + v10) = *(v14 - 2);
        v19 = 0;
        v20 = 0;
        *(unsigned int *)((char *)&dword_140404A6C[174012567] + v10) = *(v14 - 1);
        *(unsigned int *)((char *)&dword_140404A6C[174012568] + v10) = *v14;
        *(unsigned int *)((char *)&dword_140404A6C[174012590] + v10) = v14[65];
        *(unsigned int *)((char *)&dword_140404A6C[174012591] + v10) = v14[66];
        LODWORD(v21) = 0;
        *(unsigned int *)((char *)&dword_140404A6C[174012569] + v10) = 0;
        v22 = dword_140404A6C[174250135];
        if ( (int)dword_140404A6C[174250135] > 0 )
        {
          do
          {
            v21 = *(int *)((char *)&dword_140404A6C[174012569] + v10);
            v20 = v21;
            if ( (int)v21 < 4 && *(float *)&dword_140404A6C[v12 + 173447369 + v19] > 0.0 )
            {
              dword_140404A6C[v11 + 174012570 + v21] = v18;
              v23 = v10 + 12LL * *(int *)((char *)&dword_140404A6C[174012569] + v10);
              *(unsigned int *)((char *)&dword_140404A6C[174012574] + v23) = dword_140404A6C[3 * v19
                                                                                           + 173447321
                                                                                           + 3 * v13];
              *(unsigned int *)((char *)&dword_140404A6C[174012575] + v23) = dword_140404A6C[3 * v19
                                                                                           + 173447322
                                                                                           + 3 * v13];
              *(unsigned int *)((char *)&dword_140404A6C[174012576] + v23) = dword_140404A6C[3 * v19
                                                                                           + 173447323
                                                                                           + 3 * v13];
              dword_140404A6C[v11 + 174012586 + (int)(*(unsigned int *)((char *)&dword_140404A6C[174012569] + v10))++] = dword_140404A6C[v12 + 173447369 + v19];
              LODWORD(v21) = *(unsigned int *)((char *)&dword_140404A6C[174012569] + v10);
              v20 = v21;
              v22 = dword_140404A6C[174250135];
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
          v26 = (float *)((char *)&dword_140404A6C[174012586] + v10);
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
          v29 = (float *)((char *)&dword_140404A6C[174012586] + v10);
          do
          {
            ++v27;
            v30 = v28 * *v29++;
            *(v29 - 1) = v30;
          }
          while ( v27 < *(int *)((char *)&dword_140404A6C[174012569] + v10) );
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
      while ( v9 < (int)dword_140404A6C[173447317] );
      v2 = v135;
    }
    (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(
      &dword_140404A6C[174225558],
      4,
      1,
      v4);
    for ( i = 0; i < (int)dword_140404A6C[174225558]; ++i )
    {
      v32 = 3;
      v33 = &dword_140404A6C[3 * i + 174225559];
      do
      {
        (*(void (           **)(unsigned int *, __int64, __int64, __int64))&dword_140404A6C[293250407])(v33++, 4, 1, v4);
        --v32;
      }
      while ( v32 );
    }
    sub_14020B9E8(v4);
    v5 = &dword_140404A6C[173447320];
  }
  v34 = 0;
  *(_OWORD *)&dword_140404A6C[280651452] = xmmword_140278D30;
  dword_140404A6C[280651460] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651456] = xmmword_140278D30;
  dword_140404A6C[280651538] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651530] = xmmword_140278D30;
  dword_140404A6C[280651616] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651534] = xmmword_140278D30;
  dword_140404A6C[280651694] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651608] = xmmword_140278D30;
  dword_140404A6C[280651772] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651612] = xmmword_140278D30;
  dword_140404A6C[280651850] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651686] = xmmword_140278D30;
  dword_140404A6C[280651928] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651690] = xmmword_140278D30;
  dword_140404A6C[280652006] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651764] = xmmword_140278D30;
  dword_140404A6C[280652084] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651768] = xmmword_140278D30;
  dword_140404A6C[280652162] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651842] = xmmword_140278D30;
  dword_140404A6C[280652240] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651846] = xmmword_140278D30;
  dword_140404A6C[280652318] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651920] = xmmword_140278D30;
  dword_140404A6C[280652396] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651924] = xmmword_140278D30;
  dword_140404A6C[280652474] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280651998] = xmmword_140278D30;
  dword_140404A6C[280652552] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280652002] = xmmword_140278D30;
  dword_140404A6C[280652630] = 1065353216;
  *(_OWORD *)&dword_140404A6C[280652076] = xmmword_140278D30;
  dword_140404A6C[174250139] = 0;
  *(_OWORD *)&dword_140404A6C[280652080] = xmmword_140278D30;
  dword_140404A6C[174250140] = -1103101952;
  *(_OWORD *)&dword_140404A6C[280652154] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652158] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652232] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652236] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652310] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652314] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652388] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652392] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652466] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652470] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652544] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652548] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652622] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[280652626] = xmmword_140278D30;
  dword_140404A6C[174250141] = 1031798784;
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
  v55 = dword_140404A6C[173447317];
  v56 = 0;
  v57 = dword_140404A6C[173447317];
  if ( (int)dword_140404A6C[173447317] > 0 )
  {
    v58 = &dword_140404A6C[174012568];
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
      v55 = dword_140404A6C[173447317];
      v57 = dword_140404A6C[173447317];
    }
    while ( v56 < (int)dword_140404A6C[173447317] );
  }
  dword_140404A6C[177167565] = v55;
  if ( v55 > 0 )
  {
    v72 = &dword_140404A6C[177167569];
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
  v74 = dword_140404A6C[174225558];
  v75 = 0;
  dword_140404A6C[177495247] = dword_140404A6C[174225558];
  if ( (int)dword_140404A6C[174225558] > 0 )
  {
    v76 = &dword_140404A6C[178011346];
    v77 = 0;
    v78 = &dword_140404A6C[178207953];
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
  v85 = &dword_140404A6C[174250144];
  v86 = (unsigned __int64)&dword_140404A6C[174250432];
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
  while ( (__int64)v85 < (__int64)&dword_140404A6C[174250432] );
  v88 = 0;
  dword_140404A6C[v83 + 160858070] = 16;
  v89 = 0;
  dword_140404A6C[v83 + 160858069] = 0;
  if ( (int)dword_140404A6C[174225558] > 0 )
  {
    v90 = &dword_140404A6C[174225559];
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
    while ( v89 < (int)dword_140404A6C[174225558] );
    v82 = v136;
  }
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v82 + 283791190] + 283793813], v86);
  unk_140404190(
    34962,
    (int)(4 * dword_140404A6C[v83 + 160858069] * dword_140404A6C[v83 + 160858070]),
    &dword_140404A6C[v83 + 160858071],
    35044);
  qword_140404170(34962, 0, v130);
  return;
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 150F610D8: using guessed type unsigned int;
// 150F610E0: using guessed type unsigned int;
// 150F610E4: using guessed type unsigned int;
// 150F610F4: using guessed type unsigned int;
// 151042894: using guessed type unsigned int;
// 183EBFAA4: using guessed type unsigned int;

//----- (00000001400FBA50) ----------------------------------------------------
__int64 sub_1400FBA50()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v19; // [rsp+8h] [rbp-A9h] BYREF
  __int64 v20; // [rsp+28h] [rbp-89h]
  __int64 v21; // [rsp+30h] [rbp-81h]
  _Alignas(8) unsigned sr_character_position[3];
  _Alignas(16) unsigned sr_character_rotation[12];
  _Alignas(16) unsigned sr_character_transform[16];
  float v37[4]; // [rsp+C8h] [rbp+17h] BYREF
  unsigned sr_character_light[3];
  __int64 v40; // [rsp+E8h] [rbp+37h]

  static const float sr_character_axis[3] = {0.0f,1.0f,0.0f};

  unk_140404718(36160, 36064, 3553, dword_140404A6C[44 * dword_140404A6C[283829862] + 284024944], 0);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(2929);
  qword_140302F58(515);
  LOBYTE(v0) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v0);
  (*(void (**)(float,float,float,float))&dword_140404A6C[18215089])(0.125f,0.125f,0.125f,0.0f);
  (*(void (           **)(__int64))&dword_140404A6C[18215087])(16640);
  sub_14007A570(0, 0, 1024, 640, 0.125, 1024.0, 1.0);
  *(_OWORD *)&dword_140404A6C[284024502] = xmmword_1402796C0;
  *(_OWORD *)&dword_140404A6C[284024506] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[284024510] = xmmword_140279490;
  sub_14007BE20((float *)&dword_140404A6C[284024502], &dword_140404A6C[284024505]);
  qword_1404042E0(dword_140404A6C[71737865]);
  unk_140404098(33985);
  (*(void (           **)(__int64))&dword_140404A6C[18215103])(3553);
  qword_140404050(3553, dword_140404A6C[44 * dword_140404A6C[283830721] + 284024944]);
  unk_140404098(33984);
  (*(int64_t *)(void *)sr_character_position) = 0;
  sr_character_position[2] = 0;
  (*(__int128 *)(void *)sr_character_rotation) = xmmword_140278D30;
  sr_character_rotation[8] = 1065353216;
  (*(__int128 *)(void *)(sr_character_rotation+4)) = xmmword_140278D30;
  sub_14007B2A0((__int64)&(*(__int128 *)(void *)sr_character_rotation), sr_character_axis, sr_export_float_lane_container(1080177110));
  sr_character_light[0] = 0;
  qmemcpy((sr_character_light+1), "333?333?", 8);
  dword_140404A6C[284545205] = 1056964608;
  dword_140404A6C[284545206] = 1056964608;
  dword_140404A6C[284545207] = 1056964608;
  dword_140404A6C[284545209] = 1056964608;
  dword_140404A6C[284545210] = 1056964608;
  dword_140404A6C[284545211] = 1056964608;
  qword_140404338(dword_140404A6C[71737871], 1, &dword_140404A6C[284024502]);
  qword_140404338(dword_140404A6C[71737872], 1, &(*(int64_t *)(void *)sr_character_position));
  unk_140404370(dword_140404A6C[71737873], 1, 0, &(*(__int128 *)(void *)sr_character_rotation));
  qword_140404338(dword_140404A6C[71737875], 1, &sr_character_light[0]);
  qword_140404338(dword_140404A6C[71737876], 1, &dword_140404A6C[284545205]);
  qword_140404338(dword_140404A6C[71737877], 1, &dword_140404A6C[284545209]);
  v5 = (int)dword_140404A6C[283830724];
  v37[3] = 0.0;
  v6 = (int)dword_140404A6C[16 * dword_140404A6C[73991647] + 283827702 + dword_140404A6C[73991648]];
  v37[0] = (float)((float)(int)dword_140404A6C[73991649] + 0.5) * 0.0625;
  v37[2] = (float)((float)(int)dword_140404A6C[73991652] + 0.5) * 0.0625;
  v37[1] = (float)((float)(int)dword_140404A6C[73991650] + 0.5) * 0.0625;
  unk_140404098(33984);
  qword_140404050(3553, dword_140404A6C[44 * v5 + 284024944]);
  unk_140404098(33986);
  qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  dword_140404A6C[431564532] = 1065353216;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  sr_character_transform[3] = 0;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_QWORD *)&dword_140404A6C[431564529] = (*(int64_t *)(void *)sr_character_position);
  dword_140404A6C[431564531] = sr_character_position[2];
  (*(int64_t *)(void *)sr_character_transform) = (*(__int128 *)(void *)sr_character_rotation);
  sr_character_transform[4] = HIDWORD((*(__int128 *)(void *)sr_character_rotation));
  sr_character_transform[2] = DWORD2((*(__int128 *)(void *)sr_character_rotation));
  (*(int64_t *)(void *)(sr_character_transform+8)) = *((_QWORD *)&(*(__int128 *)(void *)(sr_character_rotation+4)) + 1);
  (*(int64_t *)(void *)(sr_character_transform+5)) = (*(__int128 *)(void *)(sr_character_rotation+4));
  (*(__int128 *)(void *)(sr_character_transform+12)) = xmmword_140279490;
  sr_character_transform[10] = sr_character_rotation[8];
  sr_character_transform[7] = 0;
  sr_character_transform[11] = 0;
  sub_14007A0E0(&dword_140404A6C[431564517], (__int64)&(*(int64_t *)(void *)sr_character_transform), (__int64)&dword_140404A6C[431564517]);
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  qword_140404378(dword_140404A6C[71737874], 1, 0, &dword_140404A6C[431564565]);
  qword_140404238(0);
  qword_140404238(1);
  qword_140404238(2);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v6 + 283790166] + 283793813], v7);
  v21 = 0;
  LODWORD(v20) = 4 * dword_140404A6C[908 * v6 + 178527462];
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(0));
  v8 = 4 * dword_140404A6C[908 * v6 + 178527462];
  v21 = 12;
  LODWORD(v20) = v8;
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 2, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(12));
  v9 = 4 * dword_140404A6C[908 * v6 + 178527462];
  v21 = 20;
  LODWORD(v20) = v9;
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(20));
  unk_140404470(3, v37);
  qword_140302FF8(4, 0, 3 * dword_140404A6C[908 * v6 + 178527465]);
  qword_140404170(34962, 0, v10);
  qword_140404230(0);
  qword_140404230(1);
  qword_140404230(2);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  unk_140404098(33984);
  v11 = (int)dword_140404A6C[283830724];
  v12 = (int)dword_140404A6C[16 * dword_140404A6C[73991647] + 283827734 + dword_140404A6C[73991651]];
  unk_140404098(33984);
  qword_140404050(3553, dword_140404A6C[44 * v11 + 284024944]);
  unk_140404098(33986);
  qword_140404050(34067, dword_140404A6C[44 * dword_140404A6C[283829872] + 284024944]);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  dword_140404A6C[431564532] = 1065353216;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  sr_character_transform[3] = 0;
  *(_QWORD *)&dword_140404A6C[431564529] = (*(int64_t *)(void *)sr_character_position);
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  sr_character_transform[7] = 0;
  dword_140404A6C[431564531] = sr_character_position[2];
  (*(int64_t *)(void *)sr_character_transform) = (*(__int128 *)(void *)sr_character_rotation);
  sr_character_transform[4] = HIDWORD((*(__int128 *)(void *)sr_character_rotation));
  sr_character_transform[2] = DWORD2((*(__int128 *)(void *)sr_character_rotation));
  (*(int64_t *)(void *)(sr_character_transform+8)) = *((_QWORD *)&(*(__int128 *)(void *)(sr_character_rotation+4)) + 1);
  (*(int64_t *)(void *)(sr_character_transform+5)) = (*(__int128 *)(void *)(sr_character_rotation+4));
  (*(__int128 *)(void *)(sr_character_transform+12)) = xmmword_140279490;
  sr_character_transform[10] = sr_character_rotation[8];
  sr_character_transform[11] = 0;
  sub_14007A0E0(&dword_140404A6C[431564517], (__int64)&(*(int64_t *)(void *)sr_character_transform), (__int64)&dword_140404A6C[431564517]);
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  qword_140404378(dword_140404A6C[71737874], 1, 0, &dword_140404A6C[431564565]);
  qword_140404238(0);
  qword_140404238(1);
  qword_140404238(2);
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v12 + 283790166] + 283793813], v13);
  v21 = 0;
  LODWORD(v20) = 4 * dword_140404A6C[908 * v12 + 178527462];
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(0, 3, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(0));
  v14 = 4 * dword_140404A6C[908 * v12 + 178527462];
  v21 = 12;
  LODWORD(v20) = v14;
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(1, 2, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(12));
  v15 = 4 * dword_140404A6C[908 * v12 + 178527462];
  v21 = 20;
  LODWORD(v20) = v15;
  ((void (*)(unsigned,int,unsigned,unsigned char,int,const void *))qword_1404044A8)(2, 3, 5126,0,(int)(uint32_t)((uint32_t)v20),(const void *)(intptr_t)(20));
  unk_140404470(3, v37);
  qword_140302FF8(4, 0, 3 * dword_140404A6C[908 * v12 + 178527465]);
  qword_140404170(34962, 0, v16);
  qword_140404230(0);
  qword_140404230(1);
  qword_140404230(2);
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  unk_140404098(33984);
  LOBYTE(v17) = 1;
  (*(void (           **)(__int64))&dword_140404A6C[18215099])(v17);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2929);
  (*(void (           **)(_QWORD))&dword_140404A6C[18215099])(0);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(2884);
  (*(void (           **)(__int64))&dword_140404A6C[18215101])(3042);
  unk_1404046F0(36160, dword_140404A6C[2 * dword_140404A6C[283790134] + 283791765]);
  unk_140404718(36160, 36064, 3553, dword_140404A6C[42 * dword_140404A6C[283829873] + 436582486], 0);
  qword_1404042E0(dword_140404A6C[71738345]);
  qword_140404050(3553, dword_140404A6C[42 * dword_140404A6C[283829862] + 436582486]);
  unk_140404098(33985);
  qword_140404050(3553, dword_140404A6C[42 * dword_140404A6C[283829862] + 436582486]);
  unk_140404098(33984);
  qword_140302FF8(4, 0, 3);
  sub_14007BB00();
  return 0; /* compatibility result discarded by all reviewed callers */
}
