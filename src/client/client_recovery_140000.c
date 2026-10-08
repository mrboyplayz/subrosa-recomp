#include "shared_client.h"

//----- (00000001401449C0) ----------------------------------------------------
double            sub_1401449C0(int a1, int a2)
{
  int v2; // eax
  signed int v3; // r13d
  int v4; // edi
  float *v5; // rbx
  __int64 v6; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm6_4
  __int64 v10; // rdx
  float v11; // xmm8_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  __int64 v14; // rax
  float *v15; // rdx
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  int v19; // edx
  unsigned int *v20; // rcx
  int v21; // r14d
  unsigned int *v22; // rcx
  int v23; // r15d
  unsigned int *v24; // rdx
  int v25; // r8d
  int v26; // edi
  int v27; // ebp
  int *v28; // rsi
  int *v29; // r10
  int v30; // r11d
  unsigned int *v31; // rbx
  _DWORD *v32; // r9
  __int64 v33; // r12
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  int v46; // ebx
  signed int v47; // ebp
  __int64 v48; // rdi
  signed int v49; // r15d
  signed int v50; // r12d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  __int64 v58; // rdx
  int v59; // r11d
  int v60; // r10d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // rdx
  int v69; // r9d
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int v76; // eax
  __int64 v77; // rdx
  unsigned int v78; // r14d
  float v79; // xmm2_4
  float v80; // xmm2_4
  float v81; // xmm2_4
  unsigned int v82; // eax
  float v83; // xmm2_4
  unsigned int v84; // eax
  float v85; // xmm2_4
  unsigned int v86; // eax
  float v87; // xmm2_4
  float v88; // xmm2_4
  float v89; // xmm2_4
  float v90; // xmm2_4
  unsigned int v91; // eax
  float v92; // xmm2_4
  unsigned int v93; // eax
  float v94; // xmm2_4
  unsigned int v95; // eax
  float v96; // xmm2_4
  unsigned int v97; // r11d
  float v98; // xmm2_4
  unsigned int v99; // r10d
  float v100; // xmm2_4
  unsigned int v101; // r9d
  float v102; // xmm2_4
  int v103; // edx
  unsigned int *v104; // rcx
  int v105; // r8d
  int v106; // esi
  int v107; // ecx
  unsigned int *v108; // rdx
  int v109; // r8d
  int v110; // edx
  unsigned int *v111; // r9
  unsigned int *v112; // r10
  unsigned int v113; // eax
  int v114; // ecx
  unsigned int v115; // eax
  unsigned int v116; // eax
  unsigned int v117; // eax
  __int64 v118; // rbx
  void *v119; // rcx
  __m128i *v120; // rax
  unsigned int v121; // ecx
  unsigned int v122; // eax
  void *v123; // rcx
  __int64 v124; // rax
  bool v125; // cc
  __int64 v126; // r8
  __int64 v127; // rdx
  __m128i *v128; // rax
  unsigned int v129; // ecx
  __m128i *v130; // rax
  unsigned int v131; // ecx
  __m128i *v132; // rax
  unsigned int v133; // ecx
  __m128i *v134; // rax
  unsigned int v135; // ecx
  void *v136; // rcx
  __m128i *v137; // rax
  unsigned int v138; // ecx
  __int64 v139; // r8
  __int64 v140; // r8
  __int64 v141; // r8
  __int64 v142; // r8
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401449C0[176];
#define v144 (*(unsigned int * (*))(void *)(sr_frame_1401449C0 + 0)) /* [rsp+20h] */
#define v147 (*(unsigned int * (*))(void *)(sr_frame_1401449C0 + 168)) /* [rsp+C8h] */

  v2 = dword_140404A6C[177495247];
  v3 = 0;
  v4 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v5 = (float *)&dword_140404A6C[177814739];
    do
    {
      v6 = 3 * *((_DWORD *)v5 - 319491);
      v7 = *(float *)&dword_140404A6C[v6 + 177167567];
      v8 = *(float *)&dword_140404A6C[v6 + 177167568];
      v9 = *(float *)&dword_140404A6C[v6 + 177167569];
      v10 = 3 * *((_DWORD *)v5 - 319490);
      v11 = *(float *)&dword_140404A6C[v10 + 177167568] - v8;
      v12 = *(float *)&dword_140404A6C[v10 + 177167569] - v9;
      v13 = *(float *)&dword_140404A6C[v10 + 177167567] - v7;
      v14 = 3 * *((_DWORD *)v5 - 319489);
      v15 = v5 - 2;
      v16 = *(float *)&dword_140404A6C[v14 + 177167568] - v8;
      v17 = *(float *)&dword_140404A6C[v14 + 177167569] - v9;
      v18 = *(float *)&dword_140404A6C[v14 + 177167567] - v7;
      *v15 = (float)(v16 * v12) - (float)(v17 * v11);
      *v5 = (float)(v11 * v18) - (float)(v16 * v13);
      *(v5 - 1) = (float)(v17 * v13) - (float)(v12 * v18);
      sub_14007A240((__int64)v15, v15);
      v2 = dword_140404A6C[177495247];
      ++v4;
      v5 += 3;
    }
    while ( v4 < (int)dword_140404A6C[177495247] );
  }
  v19 = 0;
  if ( v2 > 0 )
  {
    v20 = &dword_140404A6C[178158802];
    do
    {
      *(_QWORD *)(v20 - 1) = -1;
      ++v19;
      v20[1] = -1;
      v20 += 3;
      v2 = dword_140404A6C[177495247];
    }
    while ( v19 < (int)dword_140404A6C[177495247] );
  }
  v21 = 0;
  if ( v2 > 0 )
  {
    v22 = &dword_140404A6C[178158801];
    v23 = 0;
    v24 = &dword_140404A6C[178224338];
    v144 = &dword_140404A6C[178158801];
    v147 = &dword_140404A6C[178224338];
    do
    {
      v25 = v21 + 1;
      v26 = v21 + 1;
      if ( v21 + 1 < v2 )
      {
        v27 = v23 + 5;
        v28 = (int *)(v24 + 8);
        v29 = (int *)(v22 + 3);
        do
        {
          v30 = 0;
          v31 = v24;
          v32 = v22;
          v33 = 3;
          do
          {
            if ( *v32 == -1 )
            {
              if ( *v29 == -1 )
              {
                v34 = 3 * *(v32 - 663553);
                v35 = 3 * dword_140404A6C[v27 + 177495247];
                if ( *(float *)&dword_140404A6C[v35 + 177167567] == *(float *)&dword_140404A6C[v34 + 177167567]
                  && *(float *)&dword_140404A6C[v35 + 177167568] == *(float *)&dword_140404A6C[v34 + 177167568]
                  && *(float *)&dword_140404A6C[v35 + 177167569] == *(float *)&dword_140404A6C[v34 + 177167569] )
                {
                  v36 = (int)(3 * dword_140404A6C[v23 + 177495248 + (v30 + 1) % 3]);
                  v37 = 3 * *(v29 - 663553);
                  if ( *(float *)&dword_140404A6C[v37 + 177167567] == *(float *)&dword_140404A6C[v36 + 177167567]
                    && *(float *)&dword_140404A6C[v37 + 177167568] == *(float *)&dword_140404A6C[v36 + 177167568]
                    && *(float *)&dword_140404A6C[v37 + 177167569] == *(float *)&dword_140404A6C[v36 + 177167569] )
                  {
                    *v32 = v26;
                    *v31 = 2;
                    *v29 = v21;
                    *(v28 - 2) = (v30 + 2) % 3;
                  }
                }
              }
              if ( *v32 == -1 )
              {
                if ( v29[1] == -1 )
                {
                  v38 = 3 * *(v32 - 663553);
                  v39 = 3 * dword_140404A6C[v27 + 177495248];
                  if ( *(float *)&dword_140404A6C[v39 + 177167567] == *(float *)&dword_140404A6C[v38 + 177167567]
                    && *(float *)&dword_140404A6C[v39 + 177167568] == *(float *)&dword_140404A6C[v38 + 177167568]
                    && *(float *)&dword_140404A6C[v39 + 177167569] == *(float *)&dword_140404A6C[v38 + 177167569] )
                  {
                    v40 = (int)(3 * dword_140404A6C[v23 + 177495248 + (v30 + 1) % 3]);
                    v41 = 3 * *(v29 - 663552);
                    if ( *(float *)&dword_140404A6C[v41 + 177167567] == *(float *)&dword_140404A6C[v40 + 177167567]
                      && *(float *)&dword_140404A6C[v41 + 177167568] == *(float *)&dword_140404A6C[v40 + 177167568]
                      && *(float *)&dword_140404A6C[v41 + 177167569] == *(float *)&dword_140404A6C[v40 + 177167569] )
                    {
                      *v32 = v26;
                      *v31 = 0;
                      v29[1] = v21;
                      *v28 = (v30 + 2) % 3;
                    }
                  }
                }
                if ( *v32 == -1 && v29[2] == -1 )
                {
                  v42 = 3 * *(v32 - 663553);
                  v43 = 3 * dword_140404A6C[v27 + 177495246];
                  if ( *(float *)&dword_140404A6C[v43 + 177167567] == *(float *)&dword_140404A6C[v42 + 177167567]
                    && *(float *)&dword_140404A6C[v43 + 177167568] == *(float *)&dword_140404A6C[v42 + 177167568]
                    && *(float *)&dword_140404A6C[v43 + 177167569] == *(float *)&dword_140404A6C[v42 + 177167569] )
                  {
                    v44 = (int)(3 * dword_140404A6C[v23 + 177495248 + (v30 + 1) % 3]);
                    v45 = 3 * *(v29 - 663551);
                    if ( *(float *)&dword_140404A6C[v45 + 177167567] == *(float *)&dword_140404A6C[v44 + 177167567]
                      && *(float *)&dword_140404A6C[v45 + 177167568] == *(float *)&dword_140404A6C[v44 + 177167568]
                      && *(float *)&dword_140404A6C[v45 + 177167569] == *(float *)&dword_140404A6C[v44 + 177167569] )
                    {
                      *v32 = v26;
                      *v31 = 1;
                      v29[2] = v21;
                      v28[2] = (v30 + 2) % 3;
                    }
                  }
                }
              }
            }
            ++v30;
            ++v32;
            v31 += 2;
            --v33;
          }
          while ( v33 );
          v2 = dword_140404A6C[177495247];
          ++v26;
          v22 = v144;
          v27 += 3;
          v24 = v147;
          v29 += 3;
          v28 += 6;
        }
        while ( v26 < (int)dword_140404A6C[177495247] );
        v25 = v21 + 1;
      }
      v24 += 6;
      v22 += 3;
      v23 += 3;
      v147 = v24;
      v144 = v22;
      v21 = v25;
    }
    while ( v25 < v2 );
  }
  dword_140404A6C[177167566] = 8;
  v46 = 0;
  if ( v2 > 0 )
  {
    v47 = dword_140404A6C[283827702];
    v48 = 0;
    v49 = dword_140404A6C[283827765];
    v50 = dword_140404A6C[283827734];
    do
    {
      v51 = (int)(3 * dword_140404A6C[3 * v48 + 177495248]);
      v52 = 3 * v46 * dword_140404A6C[177167566];
      dword_140404A6C[v52 + 177347791] = dword_140404A6C[v51 + 177167567];
      dword_140404A6C[v52 + 177347792] = dword_140404A6C[v51 + 177167568];
      dword_140404A6C[v52 + 177347793] = dword_140404A6C[v51 + 177167569];
      v53 = 3 * v46 * dword_140404A6C[177167566];
      dword_140404A6C[v53 + 177347794] = dword_140404A6C[6 * v48 + 178011345];
      dword_140404A6C[v53 + 177347795] = dword_140404A6C[6 * v48 + 178011346];
      if ( a2 || (v56 = dword_140404A6C[v48 + 178207953], v56 == -2) )
      {
        v54 = 3 * v46 * dword_140404A6C[177167566];
        dword_140404A6C[v54 + 177347796] = dword_140404A6C[3 * v48 + 177814737];
        dword_140404A6C[v54 + 177347797] = dword_140404A6C[3 * v48 + 177814738];
        v55 = dword_140404A6C[3 * v48 + 177814739];
      }
      else
      {
        if ( v56 == -1 )
          v57 = dword_140404A6C[3 * v48 + 177495248];
        else
          v57 = dword_140404A6C[v46 + v56 + 2 * v46 + 177495248];
        v58 = (int)(3 * v57);
        v54 = 3 * v46 * dword_140404A6C[177167566];
        dword_140404A6C[v54 + 177347796] = dword_140404A6C[v58 + 177249487];
        dword_140404A6C[v54 + 177347797] = dword_140404A6C[v58 + 177249488];
        v55 = dword_140404A6C[v58 + 177249489];
      }
      dword_140404A6C[v54 + 177347798] = v55;
      v59 = 3 * v46;
      v60 = 3 * v46 + 1;
      v61 = (int)(3 * dword_140404A6C[3 * v48 + 177495249]);
      v62 = dword_140404A6C[177167566] * v60;
      dword_140404A6C[v62 + 177347791] = dword_140404A6C[v61 + 177167567];
      dword_140404A6C[v62 + 177347792] = dword_140404A6C[v61 + 177167568];
      dword_140404A6C[v62 + 177347793] = dword_140404A6C[v61 + 177167569];
      v63 = dword_140404A6C[177167566] * v60;
      dword_140404A6C[v63 + 177347794] = dword_140404A6C[6 * v48 + 178011347];
      dword_140404A6C[v63 + 177347795] = dword_140404A6C[6 * v48 + 178011348];
      if ( a2 || (v66 = dword_140404A6C[v48 + 178207953], v66 == -2) )
      {
        v64 = dword_140404A6C[177167566] * v60;
        dword_140404A6C[v64 + 177347796] = dword_140404A6C[3 * v48 + 177814737];
        dword_140404A6C[v64 + 177347797] = dword_140404A6C[3 * v48 + 177814738];
        v65 = dword_140404A6C[3 * v48 + 177814739];
      }
      else
      {
        if ( v66 == -1 )
          v67 = dword_140404A6C[3 * v48 + 177495249];
        else
          v67 = dword_140404A6C[v59 + v66 + 177495248];
        v68 = (int)(3 * v67);
        v64 = dword_140404A6C[177167566] * v60;
        dword_140404A6C[v64 + 177347796] = dword_140404A6C[v68 + 177249487];
        dword_140404A6C[v64 + 177347797] = dword_140404A6C[v68 + 177249488];
        v65 = dword_140404A6C[v68 + 177249489];
      }
      dword_140404A6C[v64 + 177347798] = v65;
      v69 = v59 + 2;
      v70 = (int)(3 * dword_140404A6C[3 * v48 + 177495250]);
      v71 = dword_140404A6C[177167566] * (v59 + 2);
      dword_140404A6C[v71 + 177347791] = dword_140404A6C[v70 + 177167567];
      dword_140404A6C[v71 + 177347792] = dword_140404A6C[v70 + 177167568];
      dword_140404A6C[v71 + 177347793] = dword_140404A6C[v70 + 177167569];
      v72 = dword_140404A6C[177167566] * (v59 + 2);
      dword_140404A6C[v72 + 177347794] = dword_140404A6C[6 * v48 + 178011349];
      dword_140404A6C[v72 + 177347795] = dword_140404A6C[6 * v48 + 178011350];
      if ( a2 || (v75 = dword_140404A6C[v48 + 178207953], v75 == -2) )
      {
        v73 = dword_140404A6C[177167566] * v69;
        dword_140404A6C[v73 + 177347796] = dword_140404A6C[3 * v48 + 177814737];
        dword_140404A6C[v73 + 177347797] = dword_140404A6C[3 * v48 + 177814738];
        v74 = dword_140404A6C[3 * v48 + 177814739];
      }
      else
      {
        if ( v75 == -1 )
          v76 = dword_140404A6C[3 * v48 + 177495250];
        else
          v76 = dword_140404A6C[v59 + v75 + 177495248];
        v77 = (int)(3 * v76);
        v73 = dword_140404A6C[177167566] * v69;
        dword_140404A6C[v73 + 177347796] = dword_140404A6C[v77 + 177249487];
        dword_140404A6C[v73 + 177347797] = dword_140404A6C[v77 + 177249488];
        v74 = dword_140404A6C[v77 + 177249489];
      }
      v78 = dword_140404A6C[283826991];
      dword_140404A6C[v73 + 177347798] = v74;
      if ( a1 >= v47 && a1 <= (int)dword_140404A6C[283827733] || a1 >= v50 && a1 <= v49 )
      {
        v79 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v79 >= 0.9375 && v79 < 1.0 )
          dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347794] = 1099169792;
        v80 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v80 >= 0.9375 && v80 < 1.0 )
          dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347794] = 1099169792;
        v81 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v81 >= 0.9375 && v81 < 1.0 )
          dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347794] = 1099169792;
        v82 = dword_140404A6C[177167566] * v59;
        v83 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v83 >= 0.8125 && v83 < 0.875 && *(float *)&dword_140404A6C[v82 + 177347794] < 0.5 )
          dword_140404A6C[v82 + 177347794] = 1099169792;
        v84 = dword_140404A6C[177167566] * v60;
        v85 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v85 >= 0.8125 && v85 < 0.875 && *(float *)&dword_140404A6C[v84 + 177347794] < 0.5 )
          dword_140404A6C[v84 + 177347794] = 1099169792;
        v86 = dword_140404A6C[177167566] * v69;
        v87 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v87 >= 0.8125 && v87 < 0.875 && *(float *)&dword_140404A6C[v86 + 177347794] < 0.5 )
          dword_140404A6C[v86 + 177347794] = 1099169792;
        v88 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v88 >= 0.75 && v88 < 0.8125 )
          dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347794] = 1099694080;
        v89 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v89 >= 0.75 && v89 < 0.8125 )
          dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347794] = 1099694080;
        v90 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v90 >= 0.75 && v90 < 0.8125 )
          dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347794] = 1099694080;
        v91 = dword_140404A6C[177167566] * v59;
        v92 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v59 + 177347795];
        if ( v92 >= 0.875 && v92 < 0.9375 && *(float *)&dword_140404A6C[v91 + 177347794] < 0.5 )
          dword_140404A6C[v91 + 177347794] = 1100218368;
        v93 = dword_140404A6C[177167566] * v60;
        v94 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v60 + 177347795];
        if ( v94 >= 0.875 && v94 < 0.9375 && *(float *)&dword_140404A6C[v93 + 177347794] < 0.5 )
          dword_140404A6C[v93 + 177347794] = 1100218368;
        v95 = dword_140404A6C[177167566] * v69;
        v96 = *(float *)&dword_140404A6C[dword_140404A6C[177167566] * v69 + 177347795];
        if ( v96 >= 0.875 && v96 < 0.9375 && *(float *)&dword_140404A6C[v95 + 177347794] < 0.5 )
          dword_140404A6C[v95 + 177347794] = 1100218368;
      }
      if ( a1 == v78 )
      {
        v97 = dword_140404A6C[177167566] * v59;
        v98 = *(float *)&dword_140404A6C[v97 + 177347795];
        if ( v98 >= 0.875 && v98 < 0.9375 && *(float *)&dword_140404A6C[v97 + 177347794] < 0.0625 )
          dword_140404A6C[v97 + 177347794] = 1099169792;
        v99 = dword_140404A6C[177167566] * v60;
        v100 = *(float *)&dword_140404A6C[v99 + 177347795];
        if ( v100 >= 0.875 && v100 < 0.9375 && *(float *)&dword_140404A6C[v99 + 177347794] < 0.0625 )
          dword_140404A6C[v99 + 177347794] = 1099169792;
        v101 = dword_140404A6C[177167566] * v69;
        v102 = *(float *)&dword_140404A6C[v101 + 177347795];
        if ( v102 >= 0.875 && v102 < 0.9375 && *(float *)&dword_140404A6C[v101 + 177347794] < 0.0625 )
          dword_140404A6C[v101 + 177347794] = 1099169792;
      }
      v2 = dword_140404A6C[177495247];
      ++v46;
      ++v48;
    }
    while ( v46 < (int)dword_140404A6C[177495247] );
    v3 = 0;
  }
  v103 = 0;
  if ( v2 > 0 )
  {
    v104 = &dword_140404A6C[178109649];
    do
    {
      ++v103;
      *v104 = *(v104 - 614401);
      v104[1] = *(v104 - 614400);
      v104[2] = *(v104 - 614399);
      v104 += 3;
      v2 = dword_140404A6C[177495247];
    }
    while ( v103 < (int)dword_140404A6C[177495247] );
  }
  v105 = 0;
  v106 = 2;
  if ( v2 > 0 )
  {
    v107 = 2;
    v108 = &dword_140404A6C[177495249];
    do
    {
      v108[1] = v107;
      *(v108 - 1) = v107 - 2;
      v108 += 3;
      ++v105;
      *(v108 - 3) = v107 - 1;
      v107 += 3;
      v2 = dword_140404A6C[177495247];
    }
    while ( v105 < (int)dword_140404A6C[177495247] );
  }
  v109 = 0;
  if ( v2 > 0 )
  {
    v110 = 2;
    v111 = &dword_140404A6C[178224338];
    v112 = &dword_140404A6C[178158802];
    do
    {
      v113 = v110 - 2;
      *(v111 - 1) = v110 - 2;
      v114 = *(v112 - 1);
      if ( v114 != -1 )
        v113 = dword_140404A6C[*v111 + 3 * v114 + 177495248];
      *v111 = v113;
      v115 = v110 - 1;
      v111[1] = v110 - 1;
      if ( *v112 != -1 )
        v115 = dword_140404A6C[v111[2] + 3 * *v112 + 177495248];
      v111[2] = v115;
      v111[3] = v110;
      v116 = v112[1];
      if ( v116 == -1 )
        v117 = v110;
      else
        v117 = dword_140404A6C[v111[4] + 3 * v116 + 177495248];
      v111[4] = v117;
      ++v109;
      v111 += 6;
      v110 += 3;
      v112 += 3;
    }
    while ( v109 < (int)dword_140404A6C[177495247] );
    v3 = 0;
  }
  v118 = 908LL * a1;
  v119 = *(void **)&dword_140404A6C[v118 + 178527463];
  dword_140404A6C[v118 + 178527461] = dword_140404A6C[177167565];
  dword_140404A6C[v118 + 178527462] = dword_140404A6C[177167566];
  free(v119);
  v120 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247] * dword_140404A6C[177167566]);
  v121 = dword_140404A6C[177495247] * dword_140404A6C[177167566];
  *(_QWORD *)&dword_140404A6C[v118 + 178527463] = (uint64)(uintptr_t)(v120);
  sub_1401FC920(v120, (     __m128i *)&dword_140404A6C[177347791], (int)(12 * v121));
  v122 = dword_140404A6C[177495247];
  v123 = *(void **)&dword_140404A6C[v118 + 178527467];
  dword_140404A6C[v118 + 178527465] = dword_140404A6C[177495247];
  dword_140404A6C[v118 + 178527475] = v122;
  free(v123);
  v124 = sr_path_malloc(12 * dword_140404A6C[177495247]);
  v125 = (int)dword_140404A6C[v118 + 178527465] <= 0;
  *(_QWORD *)&dword_140404A6C[v118 + 178527467] = v124;
  if ( !v125 )
  {
    v126 = 0;
    v127 = 0;
    do
    {
      ++v3;
      v126 += 12;
      v127 += 12;
      *(_DWORD *)(v126 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 12) = v106 - 2;
      *(_DWORD *)(v127 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 8) = v106 - 1;
      *(_DWORD *)(v127 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 4) = v106;
      v106 += 3;
    }
    while ( v3 < (int)dword_140404A6C[v118 + 178527465] );
  }
  free(*(void **)&dword_140404A6C[v118 + 178527469]);
  v128 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v129 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527469] = (uint64)(uintptr_t)(v128);
  sub_1401FC920(v128, (     __m128i *)&dword_140404A6C[178109649], (int)(12 * v129));
  free(*(void **)&dword_140404A6C[v118 + 178527471]);
  v130 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v131 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527471] = (uint64)(uintptr_t)(v130);
  sub_1401FC920(v130, (     __m128i *)&dword_140404A6C[177814737], (int)(12 * v131));
  free(*(void **)&dword_140404A6C[v118 + 178527473]);
  v132 = (__m128i *)sr_path_malloc(12 * dword_140404A6C[177495247]);
  v133 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527473] = (uint64)(uintptr_t)(v132);
  sub_1401FC920(v132, (     __m128i *)&dword_140404A6C[178158801], (int)(12 * v133));
  free(*(void **)&dword_140404A6C[v118 + 178527477]);
  v134 = (__m128i *)sr_path_malloc(24 * dword_140404A6C[177495247]);
  v135 = dword_140404A6C[177495247];
  *(_QWORD *)&dword_140404A6C[v118 + 178527477] = (uint64)(uintptr_t)(v134);
  sub_1401FC920(v134, (     __m128i *)&dword_140404A6C[178224337], (int)(24 * v135));
  v136 = *(void **)&dword_140404A6C[v118 + 178527481];
  dword_140404A6C[v118 + 178527479] = dword_140404A6C[178519250];
  free(v136);
  v137 = (__m128i *)sr_path_malloc(8 * dword_140404A6C[178519250]);
  v138 = dword_140404A6C[178519250];
  *(_QWORD *)&dword_140404A6C[v118 + 178527481] = (uint64)(uintptr_t)(v137);
  sub_1401FC920(v137, (     __m128i *)&dword_140404A6C[178519251], (int)(8 * v138));
  qword_140404170(34962, dword_140404A6C[2 * dword_140404A6C[a1 + 283790166] + 283793813], v139);
  unk_140404190(
    34962,
    (int)(12 * dword_140404A6C[v118 + 178527465] * dword_140404A6C[v118 + 178527462]),
    *(_QWORD *)&dword_140404A6C[v118 + 178527463],
    35044);
  qword_140404170(34962, 0, v140);
  qword_140404170(34963, dword_140404A6C[2 * dword_140404A6C[a1 + 283790166] + 283793814], v141);
  unk_140404190(
    34963,
    (int)(24 * dword_140404A6C[v118 + 178527465]),
    *(_QWORD *)&dword_140404A6C[v118 + 178527477],
    35044);
  return qword_140404170(34963, 0, v142);
}
#undef v144
#undef v147

// 140278F80: using guessed type __int128 xmmword_140278F80;
// 140278FE0: using guessed type __int128 xmmword_140278FE0;
// 140278FF0: using guessed type __int128 xmmword_140278FF0;
// 140279020: using guessed type __int128 xmmword_140279020;
// 140279040: using guessed type __int128 xmmword_140279040;
// 140279060: using guessed type __int128 xmmword_140279060;
// 140279070: using guessed type __int128 xmmword_140279070;
// 140279330: using guessed type __int128 xmmword_140279330;
// 140279350: using guessed type __int128 xmmword_140279350;
// 140279360: using guessed type __int128 xmmword_140279360;
// 140279370: using guessed type __int128 xmmword_140279370;
// 140279380: using guessed type __int128 xmmword_140279380;
// 140279390: using guessed type __int128 xmmword_140279390;
// 1402793A0: using guessed type __int128 xmmword_1402793A0;
// 1402793B0: using guessed type __int128 xmmword_1402793B0;
// 1402793C0: using guessed type __int128 xmmword_1402793C0;
// 1402793D0: using guessed type __int128 xmmword_1402793D0;
// 1402793E0: using guessed type __int128 xmmword_1402793E0;
// 1402793F0: using guessed type __int128 xmmword_1402793F0;
// 140279440: using guessed type __int128 xmmword_140279440;
// 140279450: using guessed type __int128 xmmword_140279450;
// 140279740: using guessed type __int128 xmmword_140279740;
// 140279750: using guessed type __int128 xmmword_140279750;
// 140279790: using guessed type __int128 xmmword_140279790;
// 1402797A0: using guessed type __int128 xmmword_1402797A0;
// 1402797B0: using guessed type __int128 xmmword_1402797B0;
// 1402797C0: using guessed type __int128 xmmword_1402797C0;
// 1402798D0: using guessed type __int128 xmmword_1402798D0;
// 1402798E0: using guessed type __int128 xmmword_1402798E0;
// 1402798F0: using guessed type __int128 xmmword_1402798F0;
// 140279900: using guessed type __int128 xmmword_140279900;
// 140279910: using guessed type __int128 xmmword_140279910;
// 140279920: using guessed type __int128 xmmword_140279920;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 192E9A680: using guessed type unsigned int;
// 192E9A688: using guessed type int[];
// 192E9A6B4: using guessed type unsigned int;
// 192E9A6B8: using guessed type unsigned int;
// 192EB1EF4: using guessed type unsigned int;
// 192EB2998: using guessed type unsigned int;
// 192EB2C48: using guessed type unsigned int;
// 192EB2C74: using guessed type unsigned int;
// 192EB2C78: using guessed type unsigned int;
// 192EB2C80: using guessed type unsigned int;
// 192EB3184: using guessed type unsigned int;
// 192EB3494: using guessed type unsigned int;
// 192ECA4B4: using guessed type unsigned int;
// 192ECAEBC: using guessed type unsigned int;
// 192ECAEC0: using guessed type unsigned int;
// 192ECAF58: using guessed type unsigned int;
// 192ECAF5C: using guessed type unsigned int;
// 192ECAF6C: using guessed type unsigned int;
// 192ECAF7C: using guessed type unsigned int;
// 192ECB208: using guessed type unsigned int;
// 192ECB234: using guessed type unsigned int;
// 192ECB238: using guessed type unsigned int;
// 192ECB240: using guessed type unsigned int;
// 192ECB744: using guessed type unsigned int;
// 192EE2A74: using guessed type unsigned int;
// 192EE347C: using guessed type unsigned int;
// 192EE3480: using guessed type unsigned int;
// 192EE3518: using guessed type unsigned int;
// 192EE351C: using guessed type unsigned int;
// 192EE352C: using guessed type unsigned int;
// 192EE3530: using guessed type unsigned int;
// 192EE37C8: using guessed type unsigned int;
// 192EE37F4: using guessed type unsigned int;
// 192EE37F8: using guessed type unsigned int;
// 192EE3800: using guessed type unsigned int;
// 192EE3D04: using guessed type unsigned int;
// 192EFB034: using guessed type unsigned int;
// 192EFBA3C: using guessed type unsigned int;
// 192EFBA40: using guessed type unsigned int;
// 192EFBAD8: using guessed type unsigned int;
// 192EFBADC: using guessed type unsigned int;
// 192EFBAEC: using guessed type unsigned int;
// 192EFBAFC: using guessed type unsigned int;
// 192EFBD80: using guessed type unsigned int;
// 192EFBD88: using guessed type unsigned int;
// 192EFBDB4: using guessed type unsigned int;
// 192EFBDB8: using guessed type unsigned int;
// 192F135F4: using guessed type unsigned int;
// 192F14098: using guessed type unsigned int;
// 192F1409C: using guessed type unsigned int;
// 192F140AC: using guessed type unsigned int;
// 192F140B0: using guessed type unsigned int;
// 192F14340: using guessed type unsigned int;
// 192F14348: using guessed type unsigned int;
// 192F14354: using guessed type unsigned int;
// 192F14374: using guessed type unsigned int;
// 192F14378: using guessed type unsigned int;
// 192F2BBB4: using guessed type unsigned int;
// 192F2C658: using guessed type unsigned int;
// 192F2C65C: using guessed type unsigned int;
// 192F2C66C: using guessed type unsigned int;
// 192F2C670: using guessed type unsigned int;
// 192F2C900: using guessed type unsigned int;
// 192F2C908: using guessed type unsigned int;
// 192F2C934: using guessed type unsigned int;
// 192F2C938: using guessed type unsigned int;
// 192F44174: using guessed type unsigned int;
// 192F44C18: using guessed type unsigned int;
// 192F44C1C: using guessed type unsigned int;
// 192F44C2C: using guessed type unsigned int;
// 192F44C3C: using guessed type unsigned int;
// 192F44EC0: using guessed type unsigned int;
// 192F44EC8: using guessed type unsigned int;
// 192F44ED4: using guessed type unsigned int;
// 192F44EF4: using guessed type unsigned int;
// 192F44EF8: using guessed type unsigned int;
// 192F5C734: using guessed type unsigned int;
// 192F5D1D8: using guessed type unsigned int;
// 192F5D1DC: using guessed type unsigned int;
// 192F5D1EC: using guessed type unsigned int;
// 192F5D1FC: using guessed type unsigned int;
// 192F5D20C: using guessed type unsigned int;
// 192F5D21C: using guessed type unsigned int;
// 192F5D220: using guessed type unsigned int;
// 192F5D480: using guessed type unsigned int;
// 192F5D488: using guessed type unsigned int;
// 192F5D4B4: using guessed type unsigned int;
// 192F5D4B8: using guessed type unsigned int;
// 192F74CF4: using guessed type unsigned int;
// 192F75798: using guessed type unsigned int;
// 192F7579C: using guessed type unsigned int;
// 192F757AC: using guessed type unsigned int;
// 192F757BC: using guessed type unsigned int;
// 192F757CC: using guessed type unsigned int;
// 192F757DC: using guessed type unsigned int;
// 192F757E0: using guessed type unsigned int;
// 192F75A40: using guessed type unsigned int;
// 192F75A48: using guessed type unsigned int;
// 192F75A54: using guessed type unsigned int;
// 192F75A74: using guessed type unsigned int;
// 192F75A78: using guessed type unsigned int;
// 192F8D2B4: using guessed type unsigned int;
// 192F8DD58: using guessed type unsigned int;
// 192F8DD5C: using guessed type unsigned int;
// 192F8DD6C: using guessed type unsigned int;
// 192F8DD7C: using guessed type unsigned int;
// 192F8DD8C: using guessed type unsigned int;
// 192F8DD9C: using guessed type unsigned int;
// 192F8DDA0: using guessed type unsigned int;
// 192F8E008: using guessed type unsigned int;
// 192F8E034: using guessed type unsigned int;
// 192F8E038: using guessed type unsigned int;
// 192F8E040: using guessed type unsigned int;
// 192F8E544: using guessed type unsigned int;
// 192FA5874: using guessed type unsigned int;
// 192FA627C: using guessed type unsigned int;
// 192FA6280: using guessed type unsigned int;
// 192FA6318: using guessed type unsigned int;
// 192FA631C: using guessed type unsigned int;
// 192FA632C: using guessed type unsigned int;
// 192FA6330: using guessed type unsigned int;
// 192FA65C8: using guessed type unsigned int;
// 192FA65D4: using guessed type unsigned int;
// 192FA65F4: using guessed type unsigned int;
// 192FA65F8: using guessed type unsigned int;
// 192FA6600: using guessed type unsigned int;
// 192FA6B04: using guessed type unsigned int;
// 192FBE83C: using guessed type unsigned int;
// 192FBE840: using guessed type unsigned int;
// 192FBE8D8: using guessed type unsigned int;
// 193007CC0: using guessed type unsigned int;
// 193007CC8: using guessed type unsigned int;
// 193007CF4: using guessed type unsigned int;
// 193007CF8: using guessed type unsigned int;
// 19301F534: using guessed type unsigned int;
// 19301FFD8: using guessed type unsigned int;
// 19301FFDC: using guessed type unsigned int;
// 19301FFEC: using guessed type unsigned int;
// 19301FFFC: using guessed type unsigned int;
// 193020280: using guessed type unsigned int;
// 193020288: using guessed type unsigned int;
// 1930202B4: using guessed type unsigned int;
// 1930202B8: using guessed type unsigned int;
// 193037AF4: using guessed type unsigned int;
// 193038598: using guessed type unsigned int;
// 19303859C: using guessed type unsigned int;
// 1930385AC: using guessed type unsigned int;
// 1930385B0: using guessed type unsigned int;

//----- (000000014014B210) ----------------------------------------------------
__int64 sub_14014B210()
{
  strcpy((char *)&dword_140404A6C[347031994], "Train");
  dword_140404A6C[347032003] = 1218199552;
  dword_140404A6C[347031989] = 1;
  dword_140404A6C[347032002] = 1000;
  dword_140404A6C[347031991] = 0;
  asset_load_vehicle_sbv_candidate(13, "train04");
  return sub_14014E9C0(13, 0.375, 12.0, 0);
}

// 140301DB0: using guessed type char *off_140301DB0[3];
// 140404288: using guessed type __int64 (__fastcall *unk_140404288)(_QWORD, _QWORD);
// 1404042D0: using guessed type __int64 (__fastcall *unk_1404042D0)(_QWORD);
// 1404042E0: using guessed type double (__fastcall *qword_1404042E0)(_QWORD);
// 140404308: using guessed type __int64 (__fastcall *qword_140404308)(_QWORD, _QWORD);
// 140404330: using guessed type __int64 (__fastcall *unk_140404330)(_QWORD, _QWORD, _QWORD);
// 140404338: using guessed type double (__fastcall *qword_140404338)(_QWORD, _QWORD, _QWORD);
// 140404340: using guessed type __int64 (__fastcall *unk_140404340)(_QWORD, _QWORD, _QWORD);
// 140404538: using guessed type __int64 (__fastcall *unk_140404538)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014014C390) ----------------------------------------------------
__int64 sub_14014C390()
{
  unsigned int v0; // ebx
  signed int v1; // eax
  signed int v2; // r8d
  unsigned int *v3; // rdx
  int v4; // edx
  unsigned int *v5; // r15
  int v6; // eax
  __int64 v7; // rax
  signed int v8; // r14d
  __int64 v9; // r12
  bool v10; // cc
  signed int v11; // ebp
  __int64 v12; // r13
  signed int *v13; // rdi
  signed int v14; // r11d
  __int64 v15; // r9
  __int64 v16; // rcx
       char *v17; // r8
  unsigned int *v18; // rdx
  char v19; // al
  __int64 v20; // r9
       char *v21; // r8
  unsigned int *v22; // rdx
  char v23; // al
  signed int v24; // ebp
  unsigned int *v25; // r14
  unsigned int v26; // ebx
  __int64 v27; // rdi
  unsigned int *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v33; // [rsp+50h] [rbp+8h]

  v0 = 0;
  dword_140404A6C[487149972] = 0;
  if ( dword_140404A6C[283831312] != 8 )
  {
    if ( dword_140404A6C[283831312] != 4 )
      goto LABEL_37;
    v4 = 0;
    v33 = 0;
    if ( (int)dword_140404A6C[225641186] <= 0 )
      goto LABEL_37;
    v5 = &dword_140404A6C[225654181];
    while ( 1 )
    {
      v6 = *(v5 - 12978);
      if ( v6 != 1 )
        goto LABEL_24;
      v7 = (int)*(v5 - 12856);
      v8 = 0;
      v9 = 5873 * v7;
      v10 = (int)*v5 <= 0;
      v11 = 0;
      dword_140404A6C[5873 * v7 + 283831511] = 0;
      if ( !v10 )
        break;
LABEL_36:
      ++v4;
      v5 += 14019;
      v33 = v4;
      if ( v4 >= (int)dword_140404A6C[225641186] )
        goto LABEL_37;
    }
    v12 = 5873 * v7;
    v13 = (signed int *)(v5 + 4);
    do
    {
      v14 = sub_140050EF0(0x2710u);
      v15 = 2570LL * v14;
      *v13 = v14;
      v16 = (int)dword_140404A6C[v15 + 275754072];
      if ( (int)v16 < 256 )
      {
        dword_140404A6C[6 * v16 + 275754073 + v15] = 0;
        v17 = "MISSION.EXE";
        v18 = &dword_140404A6C[6 * (int)dword_140404A6C[v15 + 275754072] + 275754074 + v15];
        do
        {
          v19 = *v17++;
          *(_BYTE *)v18 = v19;
          v18 = (unsigned int *)((char *)v18 + 1);
        }
        while ( v19 );
        dword_140404A6C[6 * (int)dword_140404A6C[v15 + 275754072]++ + 275754078 + v15] = 0;
        LODWORD(v16) = dword_140404A6C[v15 + 275754072];
      }
      v20 = 2570LL * v14;
      if ( (int)v16 < 256 )
      {
        v21 = "DECRYPT.EXE";
        dword_140404A6C[6 * (int)v16 + 275754073 + v20] = 0;
        v22 = &dword_140404A6C[6 * (int)dword_140404A6C[v20 + 275754072] + 275754074 + v20];
        do
        {
          v23 = *v21++;
          *(_BYTE *)v22 = v23;
          v22 = (unsigned int *)((char *)v22 + 1);
        }
        while ( v23 );
        dword_140404A6C[6 * (int)dword_140404A6C[v20 + 275754072]++ + 275754078 + v20] = 0;
      }
      ++v11;
      v13 += 4;
      dword_140404A6C[v12 + 283831512 + v8] = v14;
      v8 = dword_140404A6C[v9 + 283831511] + 1;
      dword_140404A6C[v9 + 283831511] = v8;
    }
    while ( v11 < (int)*v5 );
    v6 = *(v5 - 12978);
    v0 = dword_140404A6C[487149972];
    v4 = v33;
LABEL_24:
    if ( v6 == 4 )
    {
      v24 = 0;
      *(v5 - 12855) = v0;
      dword_140404A6C[259 * v0 + 487149973] = v4;
      dword_140404A6C[259 * dword_140404A6C[487149972] + 487149974] = 0;
      v10 = (int)*v5 <= 0;
      dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975] = 0;
      if ( !v10 )
      {
        v25 = v5 + 4;
        do
        {
          v26 = 0;
          v27 = 0;
          v28 = &dword_140404A6C[275753045];
          while ( *v28 )
          {
            ++v26;
            ++v27;
            v28 += 2570;
            if ( (__int64)v28 >= (__int64)&dword_140404A6C[278384725] )
            {
              v26 = -1;
              goto LABEL_33;
            }
          }
          if ( v26 != -1 )
          {
            sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[2570 * v26 + 275753045]), 0, 0x2828u);
            v29 = 2570 * v27;
            dword_140404A6C[v29 + 275753045] = 1;
            dword_140404A6C[v29 + 275753046] = 10000;
          }
LABEL_33:
          v30 = (int)dword_140404A6C[487149972];
          v31 = 259LL * (int)dword_140404A6C[487149972];
          *v25 = v26;
          ++v24;
          v25 += 4;
          dword_140404A6C[259 * v30 + 487149976 + (int)dword_140404A6C[v31 + 487149975]] = v26;
          ++dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975];
        }
        while ( v24 < (int)*v5 );
        v4 = v33;
      }
      v0 = ++dword_140404A6C[487149972];
    }
    goto LABEL_36;
  }
  v1 = dword_140404A6C[225641186];
  v2 = 0;
  if ( (int)dword_140404A6C[225641186] > 0 )
  {
    v3 = &dword_140404A6C[225641326];
    do
    {
      if ( *(v3 - 123) == 4 )
      {
        *v3 = v0;
        dword_140404A6C[259 * v0 + 487149973] = v2;
        dword_140404A6C[259 * dword_140404A6C[487149972] + 487149974] = 0;
        v1 = dword_140404A6C[225641186];
        dword_140404A6C[259 * dword_140404A6C[487149972] + 487149975] = 0;
        v0 = ++dword_140404A6C[487149972];
      }
      ++v2;
      v3 += 14019;
    }
    while ( v2 < v1 );
  }
LABEL_37:
  dword_140404A6C[487148756] = 1154924544;
  dword_140404A6C[487148758] = 1151188992;
  dword_140404A6C[487148775] = 1155416064;
  dword_140404A6C[487148757] = 1110966272;
  dword_140404A6C[487148777] = 1148944384;
  strcpy((char *)&dword_140404A6C[487148759], "Hondo Park");
  dword_140404A6C[487148794] = 1152892928;
  dword_140404A6C[487148776] = 1106247680;
  dword_140404A6C[487148796] = 1153089536;
  strcpy((char *)&dword_140404A6C[487148778], "Rio Granary");
  dword_140404A6C[487148813] = 1151352832;
  dword_140404A6C[487148795] = 1112014848;
  dword_140404A6C[487148815] = 1153417216;
  *(_OWORD *)&dword_140404A6C[487148797] = xmmword_1402772B8;
  dword_140404A6C[487148814] = 1115160576;
  dword_140404A6C[487148832] = 1154564096;
  strcpy((char *)&dword_140404A6C[487148816], "Park above the Kamel Building");
  dword_140404A6C[487148834] = 1153220608;
  dword_140404A6C[487148833] = 1115947008;
  dword_140404A6C[487148851] = 1151877120;
  strcpy((char *)&dword_140404A6C[487148835], "Bobson Dugnutt Museum");
  strcpy((char *)&dword_140404A6C[487148854], "The Mall");
  dword_140404A6C[487148853] = 1151483904;
  dword_140404A6C[487148870] = 1154007040;
  dword_140404A6C[487148871] = 1104150528;
  dword_140404A6C[487148872] = 1150402560;
  strcpy((char *)&dword_140404A6C[487148873], "Gas Station");
  dword_140404A6C[487148889] = 1153515520;
  dword_140404A6C[487148891] = 1151320064;
  dword_140404A6C[487148852] = 1108869120;
  dword_140404A6C[487148890] = 1108869120;
  strcpy((char *)&dword_140404A6C[487148892], "Red Cube Park");
  dword_140404A6C[487148755] = 8;
  return 107;
}

// 1402772B8: using guessed type __int128 xmmword_1402772B8;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1760C55F4: using guessed type unsigned int;
// 1B4657DB8: using guessed type unsigned int;
// 1B4657DBC: using guessed type unsigned int;
// 1B4657DC0: using guessed type unsigned int;
// 1B4657DC4: using guessed type unsigned int;
// 1B4657E08: using guessed type unsigned int;
// 1B4657E0C: using guessed type unsigned int;
// 1B4657E10: using guessed type unsigned int;
// 1B4657E54: using guessed type unsigned int;
// 1B4657E58: using guessed type unsigned int;
// 1B4657E5C: using guessed type unsigned int;
// 1B4657E60: using guessed type unsigned int;
// 1B4657EA0: using guessed type unsigned int;
// 1B4657EA4: using guessed type unsigned int;
// 1B4657EA8: using guessed type unsigned int;
// 1B4657EEC: using guessed type unsigned int;
// 1B4657EF0: using guessed type unsigned int;
// 1B4657EF4: using guessed type unsigned int;
// 1B4657F38: using guessed type unsigned int;
// 1B4657F3C: using guessed type unsigned int;
// 1B4657F40: using guessed type unsigned int;
// 1B4657F84: using guessed type unsigned int;
// 1B4657F88: using guessed type unsigned int;
// 1B4657F8C: using guessed type unsigned int;
// 1B4657FD0: using guessed type unsigned int;
// 1B4657FD4: using guessed type unsigned int;
// 1B4657FD8: using guessed type unsigned int;
// 1B46590BC: using guessed type unsigned int;

//----- (000000014014CA70) ----------------------------------------------------
__int64 sub_14014CA70()
{
  unsigned int *v0; // rbx
  void *v1; // rcx
  _WORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 result; // rax

  v0 = &dword_140404A6C[18182167];
  do
  {
    v1 = *((void **)v0 - 2);
    *(v0 - 6) = 1;
    *v0 = 1086324736;
    *(v0 - 5) = 0x40000;
    free(v1);
    v2 = (_WORD *)sr_path_malloc(0x100000);
    *((_QWORD *)v0 - 2) = (uint64)(uintptr_t)(v2);
    sub_1401FCD30((void *)(uintptr_t)(v2), 0, 0x100000u);
    v3 = 0;
    v4 = 384;
    *((_QWORD *)v0 - 1) = 0;
    do
    {
      *(_DWORD *)(*((_QWORD *)v0 - 2) + 4 * v3) = 0;
      v5 = *((_QWORD *)v0 - 2);
      v6 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v6;
      *(_DWORD *)(v5 + 4 * v6) = 0;
      v7 = *((_QWORD *)v0 - 2);
      v8 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v8;
      *(_DWORD *)(v7 + 4 * v8) = 0;
      v9 = *((_QWORD *)v0 - 2);
      v10 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v10;
      *(_DWORD *)(v9 + 4 * v10) = 0;
      v11 = *((_QWORD *)v0 - 2);
      v12 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v12;
      *(_DWORD *)(v11 + 4 * v12) = 0;
      v13 = *((_QWORD *)v0 - 2);
      v14 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v14;
      *(_DWORD *)(v13 + 4 * v14) = 0;
      v15 = *((_QWORD *)v0 - 2);
      v16 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v16;
      *(_DWORD *)(v15 + 4 * v16) = 0;
      v17 = *((_QWORD *)v0 - 2);
      v18 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v18;
      *(_DWORD *)(v17 + 4 * v18) = 0;
      v19 = *((_QWORD *)v0 - 2);
      v20 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v20;
      *(_DWORD *)(v19 + 4 * v20) = 0;
      v21 = *((_QWORD *)v0 - 2);
      v22 = (*(v0 - 2) + 1) & 0x3FFFF;
      *(v0 - 2) = v22;
      *(_DWORD *)(v21 + 4 * v22) = 0;
      result = (*(v0 - 2) + 1) & 0x3FFFF;
      v3 = (unsigned int)result;
      *(v0 - 2) = result;
      --v4;
    }
    while ( v4 );
    v0 += 8;
  }
  while ( (__int64)v0 < (__int64)&dword_140404A6C[18182231] );
  return result;
}

// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (000000014014CBE0) ----------------------------------------------------
void sub_14014CBE0()
{
  __int64 v0; // rbp
  __int64 v1; // r8
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  unsigned int *v5; // rbx
  unsigned int *v6; // rdi
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rax
       __m128i *v10; // rdx
  signed int v11; // esi
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm4_4
  float v19; // xmm5_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // r11d
  __int64 v30; // r8
  __int64 v31; // rax
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm5_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rdx
  int v44; // r11d
  __int64 v45; // r8
  __int64 v46; // rax
  float v47; // xmm3_4
  float v48; // xmm4_4
  float v49; // xmm5_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // r8
  __int64 v60; // r8

  v0 = 6;
  dword_140404A6C[159842279] = 6;
  dword_140404A6C[159842283] = 8;
  free(*(void **)&dword_140404A6C[159842281]);
  *(_QWORD *)&dword_140404A6C[159842281] = sr_path_malloc(12 * dword_140404A6C[159842279]);
  free(*(void **)&dword_140404A6C[159842285]);
  *(_QWORD *)&dword_140404A6C[159842285] = sr_path_malloc(12 * dword_140404A6C[159842283]);
  **(_DWORD **)&dword_140404A6C[159842281] = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 4LL) = 1065353216;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 8LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 12LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 16LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 20LL) = 1065353216;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 24LL) = -1082130432;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 40LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 44LL) = -1082130432;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 48LL) = 1065353216;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 52LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 56LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 60LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 64LL) = -1082130432;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842281] + 68LL) = 0;
  **(_DWORD **)&dword_140404A6C[159842285] = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 4LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 8LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 12LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 16LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 20LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 24LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 28LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 32LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 40LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 44LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 48LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 52LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 56LL) = 5;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 60LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 64LL) = 2;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 68LL) = 5;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 72LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 76LL) = 3;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 80LL) = 5;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 84LL) = 1;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 88LL) = 4;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[159842285] + 92LL) = 5;
  unk_140404180(1, &dword_140404A6C[159842277]);
  unk_140404180(1, &dword_140404A6C[159842278]);
  qword_140404170(34962, dword_140404A6C[159842277], v1);
  unk_140404190(34962, 12 * dword_140404A6C[159842279], *(_QWORD *)&dword_140404A6C[159842281], 35044);
  qword_140404170(34962, 0, v2);
  qword_140404170(34963, dword_140404A6C[159842278], v3);
  unk_140404190(34963, 12 * dword_140404A6C[159842283], *(_QWORD *)&dword_140404A6C[159842285], 35044);
  qword_140404170(34963, 0, v4);
  v5 = &dword_140404A6C[159842289];
  v6 = &dword_140404A6C[159842288];
  do
  {
    free(*((void **)v5 + 1));
    v7 = sr_path_malloc((int)(12 * (*(v5 - 10) + 3 * *(v5 - 6))));
    v8 = *((void **)v5 + 3);
    *((_QWORD *)v5 + 1) = v7;
    free(v8);
    v9 = sr_path_malloc((int)(48 * *(v5 - 6)));
    v10 = *((     __m128i **)v5 - 4);
    *((_QWORD *)v5 + 3) = v9;
    LODWORD(v9) = *(v5 - 10);
    *v5 = v9;
    sub_1401FC920(*((__m128i **)v5 + 1), v10, 12 * (int)v9);
    v11 = 0;
    v5[4] = 0;
    if ( (int)*(v5 - 6) > 0 )
    {
      v12 = 0;
      do
      {
        v13 = *((_QWORD *)v5 - 4);
        v14 = *((_QWORD *)v5 - 2);
        v15 = 3 * *(_DWORD *)(v12 + v14);
        v16 = 3 * *(_DWORD *)(v12 + v14 + 4);
        v17 = *(float *)(v13 + 4 * v16) + *(float *)(v13 + 4 * v15);
        v18 = *(float *)(v13 + 4 * v16 + 4) + *(float *)(v13 + 4 * v15 + 4);
        v19 = *(float *)(v13 + 4 * v16 + 8) + *(float *)(v13 + 4 * v15 + 8);
        v20 = fsqrt((float)((float)(v18 * v18) + (float)(v17 * v17)) + (float)(v19 * v19));
        if ( v20 == 0.0 )
        {
          v22 = 0.0;
          v23 = 0.0;
          v24 = 0.0;
        }
        else
        {
          v21 = 1.0 / v20;
          v22 = (float)(1.0 / v20) * v17;
          v23 = v21 * v18;
          v24 = v21 * v19;
        }
        v25 = *((_QWORD *)v5 + 1);
        v26 = (int)(3 * *v5);
        *(float *)(v25 + 4 * v26) = v22;
        *(float *)(v25 + 4 * v26 + 4) = v23;
        *(float *)(v25 + 4 * v26 + 8) = v24;
        v27 = *((_QWORD *)v5 - 4);
        v28 = *((_QWORD *)v5 - 2);
        v29 = *v5 + 1;
        *v5 = v29;
        v30 = 3 * *(_DWORD *)(v12 + v28 + 4);
        v31 = 3 * *(_DWORD *)(v12 + v28 + 8);
        v32 = *(float *)(v27 + 4 * v31 + 4) + *(float *)(v27 + 4 * v30 + 4);
        v33 = *(float *)(v27 + 4 * v30) + *(float *)(v27 + 4 * v31);
        v34 = *(float *)(v27 + 4 * v31 + 8) + *(float *)(v27 + 4 * v30 + 8);
        v35 = fsqrt((float)((float)(v32 * v32) + (float)(v33 * v33)) + (float)(v34 * v34));
        if ( v35 == 0.0 )
        {
          v37 = 0.0;
          v38 = 0.0;
          v39 = 0.0;
        }
        else
        {
          v36 = 1.0 / v35;
          v37 = (float)(1.0 / v35) * v33;
          v38 = v36 * v32;
          v39 = v36 * v34;
        }
        v40 = 3 * v29;
        v41 = *((_QWORD *)v5 + 1);
        *(float *)(v41 + 4 * v40) = v37;
        *(float *)(v41 + 4 * v40 + 4) = v38;
        *(float *)(v41 + 4 * v40 + 8) = v39;
        v42 = *((_QWORD *)v5 - 4);
        v43 = *((_QWORD *)v5 - 2);
        v44 = *v5 + 1;
        *v5 = v44;
        v45 = 3 * *(_DWORD *)(v12 + v43 + 8);
        v46 = 3 * *(_DWORD *)(v12 + v43);
        v47 = *(float *)(v42 + 4 * v46) + *(float *)(v42 + 4 * v45);
        v48 = *(float *)(v42 + 4 * v46 + 4) + *(float *)(v42 + 4 * v45 + 4);
        v49 = *(float *)(v42 + 4 * v46 + 8) + *(float *)(v42 + 4 * v45 + 8);
        v50 = fsqrt((float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(v49 * v49));
        if ( v50 == 0.0 )
        {
          v52 = 0.0;
          v53 = 0.0;
          v54 = 0.0;
        }
        else
        {
          v51 = 1.0 / v50;
          v52 = (float)(1.0 / v50) * v47;
          v53 = v51 * v48;
          v54 = v51 * v49;
        }
        v55 = 3 * v44;
        v56 = *((_QWORD *)v5 + 1);
        *(float *)(v56 + 4 * v55) = v52;
        *(float *)(v56 + 4 * v55 + 4) = v53;
        *(float *)(v56 + 4 * v55 + 8) = v54;
        ++*v5;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *(_DWORD *)(v12 + *((_QWORD *)v5 - 2));
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = *v5 - 3;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *v5 - 1;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *v5 - 1;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = *v5 - 2;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *(_DWORD *)(v12 + *((_QWORD *)v5 - 2) + 8);
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *v5 - 1;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = *v5 - 3;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *v5 - 2;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4])) = *v5 - 3;
        ++v11;
        LODWORD(v56) = *(_DWORD *)(v12 + *((_QWORD *)v5 - 2) + 4);
        v12 += 12;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]) + 4) = v56;
        *(_DWORD *)(*((_QWORD *)v5 + 3) + 4LL * (int)(3 * v5[4]++) + 8) = *v5 - 2;
      }
      while ( v11 < (int)*(v5 - 6) );
    }
    unk_140404180(1, v6 - 1);
    unk_140404180(1, v6);
    qword_140404170(34962, *(v5 - 2), v57);
    unk_140404190(34962, (int)(12 * *v5), *((_QWORD *)v5 + 1), 35044);
    qword_140404170(34962, 0, v58);
    qword_140404170(34963, *(v5 - 1), v59);
    unk_140404190(34963, (int)(12 * v5[4]), *((_QWORD *)v5 + 3), 35044);
    qword_140404170(34963, 0, v60);
    v6 += 10;
    v5 += 10;
    --v0;
  }
  while ( v0 );
}

// 14014CEAF: variable 'v1' is possibly undefined
// 14014CEE2: variable 'v2' is possibly undefined
// 14014CEF3: variable 'v3' is possibly undefined
// 14014CF26: variable 'v4' is possibly undefined
// 14014D33B: variable 'v57' is possibly undefined
// 14014D367: variable 'v58' is possibly undefined
// 14014D375: variable 'v59' is possibly undefined
// 14014D3A2: variable 'v60' is possibly undefined
// 14023ACF8: using guessed type __int64 __fastcall j__malloc_base(_QWORD);
// 140404170: using guessed type double (__fastcall *qword_140404170)(_QWORD, _QWORD, _QWORD);
// 140404180: using guessed type __int64 (__fastcall *unk_140404180)(_QWORD, _QWORD);
// 140404190: using guessed type __int64 (__fastcall *unk_140404190)(_QWORD, _QWORD, _QWORD, _QWORD);
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 1665C4A08: using guessed type unsigned int;
// 1665C4A18: using guessed type unsigned int;

//----- (000000014014FAB0) ----------------------------------------------------
void            sub_14014FAB0(     char *a1, char *a2, char *a3, char *a4)
{
  __int64 v4; // r10
  int v8; // ebx
  char v9; // r8
  int v10; // r9d
  __int64 v11; // rax
  char v12; // dl
  int v13; // ecx
  __int64 v14; // rax
  char v15; // cl
  __int64 v16; // rax

  v4 = *(_QWORD *)&dword_140404A6C[71856245];
  if ( *(_QWORD *)&dword_140404A6C[71856245] )
  {
    v8 = 0;
    if ( a2 )
    {
      v9 = *a2;
      v10 = 0;
      if ( *a2 )
      {
        v11 = 0;
        do
        {
          *((_BYTE *)&dword_140404A6C[71823477] + v11) = v9;
          ++v10;
          ++v11;
          if ( *a2 == 10 )
          {
            ++v10;
            *((_BYTE *)&dword_140404A6C[71823477] + v11++) = 34;
          }
          v9 = *++a2;
          if ( v9 == 13 )
          {
            *(_WORD *)((char *)&dword_140404A6C[71823477] + v11) = 28252;
            v10 += 3;
            *((_BYTE *)&dword_140404A6C[71823477] + v11 + 2) = 34;
            v11 += 3;
            v9 = *a2;
          }
        }
        while ( v9 );
      }
      if ( (unsigned __int64)v10 >= 0x20000 )
        goto LABEL_33;
      *((_BYTE *)&dword_140404A6C[71823477] + v10) = 0;
      sub_1400920F0(v4, "char %svs[]=\"%s\";\r\n\r\n", a1, (     char *)&dword_140404A6C[71823477]);
      v4 = *(_QWORD *)&dword_140404A6C[71856245];
    }
    if ( a3 )
    {
      v12 = *a3;
      v13 = 0;
      if ( *a3 )
      {
        v14 = 0;
        do
        {
          *((_BYTE *)&dword_140404A6C[71823477] + v14) = v12;
          ++v13;
          ++v14;
          if ( *a3 == 10 )
          {
            ++v13;
            *((_BYTE *)&dword_140404A6C[71823477] + v14++) = 34;
          }
          v12 = *++a3;
          if ( v12 == 13 )
          {
            *(_WORD *)((char *)&dword_140404A6C[71823477] + v14) = 28252;
            v13 += 3;
            *((_BYTE *)&dword_140404A6C[71823477] + v14 + 2) = 34;
            v14 += 3;
            v12 = *a3;
          }
        }
        while ( v12 );
      }
      if ( (unsigned __int64)v13 >= 0x20000 )
        goto LABEL_33;
      *((_BYTE *)&dword_140404A6C[71823477] + v13) = 0;
      sub_1400920F0(v4, "char %sfs[]=\"%s\";\r\n\r\n", a1, (     char *)&dword_140404A6C[71823477]);
      v4 = *(_QWORD *)&dword_140404A6C[71856245];
    }
    if ( !a4 )
      return;
    v15 = *a4;
    if ( *a4 )
    {
      v16 = 0;
      do
      {
        *((_BYTE *)&dword_140404A6C[71823477] + v16) = v15;
        ++v8;
        ++v16;
        if ( *a4 == 10 )
        {
          ++v8;
          *((_BYTE *)&dword_140404A6C[71823477] + v16++) = 34;
        }
        v15 = *++a4;
        if ( v15 == 13 )
        {
          *(_WORD *)((char *)&dword_140404A6C[71823477] + v16) = 28252;
          v8 += 3;
          *((_BYTE *)&dword_140404A6C[71823477] + v16 + 2) = 34;
          v16 += 3;
          v15 = *a4;
        }
      }
      while ( v15 );
    }
    if ( (unsigned __int64)v8 < 0x20000 )
    {
      *((_BYTE *)&dword_140404A6C[71823477] + v8) = 0;
      sub_1400920F0(v4, "char %sgs[]=\"%s\";\r\n\r\n", a1, (     char *)&dword_140404A6C[71823477]);
      return;
    }
LABEL_33:
    sub_1401F8694();
  }
}

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151620C40: using guessed type unsigned int;

//----- (000000014014FCF0) ----------------------------------------------------
void               sub_14014FCF0(float *a1, unsigned int *a2, unsigned int *a3)
{
  union { __int64 first; float coordinates[3]; } sr_position;
  unsigned int v4; // r15d
  float v5; // xmm1_4
  unsigned int v6; // r13d
  unsigned int v7; // xmm0_4
  unsigned int *v8; // rcx
  unsigned int v9; // xmm0_4
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned int *v12; // r14
  int v13; // edx
  unsigned int *v14; // rsi
  int v15; // r11d
  float *v16; // rbp
  int v17; // ecx
  float v18; // xmm7_4
  unsigned int *v19; // rax
  __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r10
  int v23; // edi
  __int64 v24; // rbx
  float v25; // xmm3_4
  unsigned int *v26; // r9
  __int64 v27; // rax
  float v28; // xmm2_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ebp
  unsigned int *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  float v38; // xmm7_4
  float v39; // xmm9_4
  float v40; // xmm10_4
  signed int v41; // eax
  float v42; // xmm7_4
  float v43; // xmm1_4
  float v44; // xmm9_4
  float v45; // xmm0_4
  float v46; // xmm9_4
  float v47; // xmm1_4
  float v48; // xmm10_4
  bool v49; // zf
  __int64 v50; // rcx
  unsigned int v51; // eax
  float v52; // xmm6_4
  float v53; // xmm8_4
  float v54; // xmm6_4
  float v55; // xmm6_4
  float v56; // xmm7_4
  __int64 v57; // rcx
  float v58; // xmm7_4
  float v59; // xmm9_4
  float v60; // xmm7_4
  float v61; // xmm8_4
  float v62; // xmm0_4
  float v63; // xmm9_4
  float v64; // xmm6_4
  __int64 v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // rcx
  float v68; // xmm10_4
  float v69; // xmm6_4
  __int64 v70; // rcx
  float v71; // xmm6_4
  __int64 v72; // rax
  __int64 v73; // rax
  int v74; // r8d
  unsigned int *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  int v78; // r8d
  unsigned int v79; // edx
  unsigned int *v80; // rax
  float v81; // xmm3_4
  unsigned int *v82; // rbx
  float v83; // xmm4_4
  float v84; // xmm5_4
  float v85; // xmm6_4
  float v86; // xmm7_4
  unsigned int *v87; // rdx
  float v88; // xmm8_4
  __int64 v89; // r10
  int v90; // r8d
  __int64 v91; // r9
  __int64 v92; // rax
  float v93; // xmm0_4
  float v94; // xmm1_4
  float v95; // xmm2_4
  __int64 v96; // rax
  unsigned int v97; // r8d
  __int64 v98; // r9
  __int64 v99; // rax
  float v100; // xmm0_4
  float v101; // xmm1_4
  float v102; // xmm2_4
  __int64 v103; // rax
  int **v104; // r8
  __int64 v105; // r14
  int v106; // r13d
  unsigned int *v107; // rdi
  __int64 v108; // r15
  unsigned int v109; // ecx
  int v110; // edx
  __int64 v111; // rsi
  unsigned int v112; // eax
  __int64 v113; // rcx
  int **v114; // r12
  __int64 v115; // rbp
  __int64 v116; // rcx
  __int64 v117; // rdx
  int v118; // r8d
  int *v119; // rcx
  unsigned int *v120; // r9
  __int16 *v121; // r8
  int v122; // edx
  __int64 v123; // r9
  __m128i v124; // xmm0
  int v125; // ecx
  signed int v126; // edx
  signed int v127; // r8d
  int v128; // ecx
  float *v129; // r12
  unsigned int *v130; // r11
  __int64 v131; // rdx
  float v132; // xmm0_4
  float v133; // xmm3_4
  float v134; // xmm4_4
  __int64 v135; // rcx
  int v136; // eax
  float v137; // xmm6_4
  float v138; // xmm6_4
  float v139; // xmm6_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_14014FCF0[96];
#define v141 (*(__int64 (*))(void *)(sr_frame_14014FCF0 + 0)) /* [rsp+0h] */
#define v142 (*(int (*))(void *)(sr_frame_14014FCF0 + 32)) /* [rsp+20h] */
#define v143 (*(unsigned int (*))(void *)(sr_frame_14014FCF0 + 40)) /* [rsp+28h] */
#define v144 (*(unsigned int * (*))(void *)(sr_frame_14014FCF0 + 48)) /* [rsp+30h] */
#define v145 (*(float * (*))(void *)(sr_frame_14014FCF0 + 56)) /* [rsp+38h] */
#define v146 (*(unsigned int * (*))(void *)(sr_frame_14014FCF0 + 64)) /* [rsp+40h] */
#define v149 (*(__int64 (*))(void *)(sr_frame_14014FCF0 + 88)) /* [rsp+58h] */

  v4 = dword_140404A6C[283831309];
  v5 = 1.0;
  v6 = dword_140404A6C[283831448];
  v146 = a3;
  v145 = a1;
  if ( dword_140404A6C[283831309] && dword_140404A6C[283831448] == 2 )
    v5 = fminf(fmaxf((float)(int)dword_140404A6C[283831450] * 0.016666668f, 0.0), 1.0);
  *(float *)&dword_140404A6C[18198666] = (float)((float)((float)(int)dword_140404A6C[73991612] * v5)
                                               * (float)((float)(int)dword_140404A6C[73991612] * v5))
                                       * 0.000099999997f;
  dword_140404A6C[18198546] = *(unsigned int *)a1;
  __builtin_memcpy(&dword_140404A6C[18198547], a1 + 1, 4);
  v7 = *((_DWORD *)a1 + 2);
  v8 = &dword_140404A6C[129721918];
  dword_140404A6C[18198548] = v7;
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
  v9 = a3[2];
  v10 = 512;
  dword_140404A6C[18198560] = v9;
  do
  {
    v11 = (int)*v8;
    if ( (_DWORD)v11 != -1 && (!*(v8 - 5209) || !v4) )
    {
      if ( !dword_140404A6C[278720 * v11 + 327698] )
        dword_140404A6C[278720 * v11 + 327698] = 1;
      *v8 = -1;
    }
    v8 += 5210;
    --v10;
  }
  while ( v10 );
  v12 = &dword_140404A6C[70326528];
  v13 = dword_140404A6C[70326525];
  if ( !v4 )
    goto LABEL_91;
  if ( v6 != 3 )
  {
    v14 = &dword_140404A6C[129716710];
    v15 = 0;
    v16 = (float *)&dword_140404A6C[285044403];
    do
    {
      if ( *(v14 - 1) && ((*v14 - 12) & 0xFFFFFFFD) != 0 && (int)v14[3659] > 0 )
      {
        v17 = 0;
        v18 = fsqrt(
                (float)((float)((float)(a1[1] - *(v16 - 1)) * (float)(a1[1] - *(v16 - 1)))
                      + (float)((float)(*a1 - *(v16 - 2)) * (float)(*a1 - *(v16 - 2))))
              + (float)((float)(a1[2] - *v16) * (float)(a1[2] - *v16)));
        if ( v13 <= 0 )
        {
LABEL_22:
          if ( v13 >= 8 )
          {
            v21 = 0;
            v22 = 0;
            v23 = -1;
            v24 = -1;
            v25 = 65536.0;
            v26 = &dword_140404A6C[70326526];
            do
            {
              v27 = (int)*v26;
              if ( (_DWORD)v27 != v15 )
              {
                v28 = a1[1] - *(float *)&dword_140404A6C[77 * v27 + 285044402];
                v29 = a1[2] - *(float *)&dword_140404A6C[77 * v27 + 285044403];
                v30 = fsqrt(
                        (float)((float)(v28 * v28)
                              + (float)((float)(*a1 - *(float *)&dword_140404A6C[77 * v27 + 285044401])
                                      * (float)(*a1 - *(float *)&dword_140404A6C[77 * v27 + 285044401])))
                      + (float)(v29 * v29));
                if ( v18 < v30 && v25 > v30 )
                {
                  v23 = v21;
                  v24 = v22;
                  v25 = v30;
                }
              }
              ++v21;
              ++v22;
              v26 += 5;
            }
            while ( v21 < v13 );
            if ( v23 != -1 )
            {
              v31 = (int)dword_140404A6C[5 * v24 + 70326527];
              if ( (_DWORD)v31 != -1 && !dword_140404A6C[278720 * v31 + 327698] )
                dword_140404A6C[278720 * v31 + 327698] = 1;
              v32 = (int)dword_140404A6C[5 * v24 + 70326528];
              if ( (_DWORD)v32 != -1 && !dword_140404A6C[278720 * v32 + 327698] )
                dword_140404A6C[278720 * v32 + 327698] = 1;
              dword_140404A6C[5 * v24 + 70326526] = v15;
              *(_QWORD *)&dword_140404A6C[5 * v24 + 70326529] = 0;
              *(_QWORD *)&dword_140404A6C[5 * v24 + 70326527] = -1;
              v13 = dword_140404A6C[70326525];
            }
          }
          else
          {
            v20 = 5LL * v13;
            dword_140404A6C[v20 + 70326526] = v15;
            dword_140404A6C[5 * v13 + 70326527] = -1;
            dword_140404A6C[v20 + 70326528] = -1;
            *(_QWORD *)&dword_140404A6C[v20 + 70326529] = 0;
            v13 = ++dword_140404A6C[70326525];
          }
        }
        else
        {
          v19 = &dword_140404A6C[70326526];
          while ( *v19 != v15 )
          {
            ++v17;
            v19 += 5;
            if ( v17 >= v13 )
              goto LABEL_22;
          }
        }
      }
      ++v15;
      v14 += 5210;
      v16 += 77;
    }
    while ( v15 < 512 );
    v4 = dword_140404A6C[283831309];
    v33 = 0;
    if ( v13 > 0 )
    {
      v34 = &dword_140404A6C[70326527];
      while ( 1 )
      {
        v35 = (int)*(v34 - 1);
        v36 = 77 * v35;
        v37 = 5210 * v35;
        v38 = *(float *)&dword_140404A6C[77 * v35 + 285044401];
        v39 = *(float *)&dword_140404A6C[77 * v35 + 285044402];
        v40 = *(float *)&dword_140404A6C[77 * v35 + 285044403];
        if ( dword_140404A6C[5210 * v35 + 129716709]
          && (float)((float)((float)((float)(a1[1] - v39) * (float)(a1[1] - v39))
                           + (float)((float)(*a1 - v38) * (float)(*a1 - v38)))
                   + (float)((float)(a1[2] - v40) * (float)(a1[2] - v40))) < 65536.0
          && (int)dword_140404A6C[v37 + 129720369] > 0 )
        {
          v41 = *v34;
          v42 = (float)(v38 - (float)(*(float *)&dword_140404A6C[v36 + 285044410] * 2.5))
              - (float)(*(float *)&dword_140404A6C[v36 + 285044407] * 0.25);
          v43 = *(float *)&dword_140404A6C[v36 + 285044408] * 0.25;
          v44 = v39 - (float)(*(float *)&dword_140404A6C[v36 + 285044411] * 2.5);
          v45 = *(float *)&dword_140404A6C[v36 + 285044412] * 2.5;
          *(float *)&sr_position.first = v42;
          v46 = v44 - v43;
          v47 = *(float *)&dword_140404A6C[v36 + 285044409] * 0.25;
          *((float *)&sr_position.first + 1) = v46;
          v48 = (float)(v40 - v45) - v47;
          sr_position.coordinates[2] = v48;
          if ( v41 != -1
            || ((v49 = dword_140404A6C[v37 + 129716710] == 13, v142 = 1, !v49)
              ? (v41 = sub_140069FA0(dword_140404A6C[283785942], (unsigned int *)&sr_position.first, 0.5, 1.0, v142))
              : (v41 = sub_140069FA0(dword_140404A6C[283786013], (unsigned int *)&sr_position.first, 0.125, 1.0, v142)),
                *v34 = v41,
                v41 != -1) )
          {
            v50 = 278720LL * v41;
            v51 = dword_140404A6C[v37 + 129716744];
            *(float *)&dword_140404A6C[v50 + 606302] = v42;
            *(float *)&dword_140404A6C[v50 + 606303] = v46;
            *(float *)&dword_140404A6C[v50 + 606304] = v48;
            dword_140404A6C[v50 + 606305] = v51;
            dword_140404A6C[v50 + 606306] = dword_140404A6C[v37 + 129716745];
            dword_140404A6C[v50 + 606307] = dword_140404A6C[v37 + 129716746];
            v52 = (float)(int)dword_140404A6C[v37 + 129720369];
            if ( (int)dword_140404A6C[v37 + 129720369] < 100 )
              v53 = 0.29882812;
            else
              v53 = (float)(v52 * 0.00048828125) + 0.25;
            if ( dword_140404A6C[v37 + 129716710] == 13 )
            {
              v55 = v52 * 0.0078125;
              if ( v55 < 0.25 )
                v55 = 0.0;
              v54 = fminf(v55, 1.0);
              v53 = fmaxf(v53, 0.5) * 0.5;
            }
            else
            {
              v54 = fminf(v52 * 0.015625, 0.5);
            }
            if ( (float)((float)((float)((float)(a1[1] - v46) * (float)(a1[1] - v46))
                               + (float)((float)(*a1 - v42) * (float)(*a1 - v42)))
                       + (float)((float)(a1[2] - v48) * (float)(a1[2] - v48))) <= 16384.0 )
            {
              v56 = 1.0;
              if ( (unsigned int)sub_1400DC050((float *)&sr_position.first, a1, 0) )
                v56 = 0.5;
            }
            else
            {
              v56 = 0.5;
            }
            v57 = 278720LL * (int)*v34;
            v58 = (float)((float)((float)((float)(v56 * v54) * 0.5) - *((float *)v34 + 2)) * 0.125)
                + *((float *)v34 + 2);
            *(float *)&dword_140404A6C[v57 + 327704] = v58;
            *(float *)&dword_140404A6C[v57 + 327706] = v53;
            *((float *)v34 + 2) = v58;
          }
          v49 = dword_140404A6C[v37 + 129716710] == 13;
          v59 = (float)(*(float *)&dword_140404A6C[v36 + 285044412] * 0.125)
              + *(float *)&dword_140404A6C[v36 + 285044403];
          v60 = (float)((float)(*(float *)&dword_140404A6C[v36 + 285044410] * 0.125)
                      + *(float *)&dword_140404A6C[v36 + 285044401])
              - (float)(*(float *)&dword_140404A6C[v36 + 285044407] * 0.25);
          v61 = (float)((float)(*(float *)&dword_140404A6C[v36 + 285044411] * 0.125)
                      + *(float *)&dword_140404A6C[v36 + 285044402])
              - (float)(*(float *)&dword_140404A6C[v36 + 285044408] * 0.25);
          *(float *)&sr_position.first = v60;
          v62 = *(float *)&dword_140404A6C[v36 + 285044409] * 0.25;
          *((float *)&sr_position.first + 1) = v61;
          v63 = v59 - v62;
          sr_position.coordinates[2] = v63;
          if ( !v49 && v34[1] == -1 )
          {
            v64 = fminf(
                    (float)(*(float *)&dword_140404A6C[v37 + 129720536] + *(float *)&dword_140404A6C[v37 + 129720493])
                  + (float)(*(float *)&dword_140404A6C[v37 + 129720450] + *(float *)&dword_140404A6C[v37 + 129720407]),
                    0.25);
            if ( v64 > 0.0625 )
            {
              v34[1] = sub_140069FA0(dword_140404A6C[283785946], (unsigned int *)&sr_position.first, v64, 1.0, 1u);
              *((float *)v34 + 3) = v64;
            }
          }
          v65 = (int)v34[1];
          if ( (_DWORD)v65 == -1 )
            goto LABEL_86;
          v66 = dword_140404A6C[v37 + 129716744];
          v67 = 278720 * v65;
          v68 = fminf(
                  (float)(*(float *)&dword_140404A6C[v37 + 129720536] + *(float *)&dword_140404A6C[v37 + 129720493])
                + (float)(*(float *)&dword_140404A6C[v37 + 129720450] + *(float *)&dword_140404A6C[v37 + 129720407]),
                  1.0);
          *(float *)&dword_140404A6C[v67 + 606302] = v60;
          *(float *)&dword_140404A6C[v67 + 606303] = v61;
          *(float *)&dword_140404A6C[v67 + 606304] = v63;
          dword_140404A6C[v67 + 606305] = v66;
          dword_140404A6C[v67 + 606306] = dword_140404A6C[v37 + 129716745];
          dword_140404A6C[v67 + 606307] = dword_140404A6C[v37 + 129716746];
          if ( (float)((float)((float)((float)(a1[1] - v61) * (float)(a1[1] - v61))
                             + (float)((float)(*a1 - v60) * (float)(*a1 - v60)))
                     + (float)((float)(a1[2] - v63) * (float)(a1[2] - v63))) <= 16384.0 )
          {
            v69 = 1.0;
            if ( (unsigned int)sub_1400DC050((float *)&sr_position.first, a1, 0) )
              v69 = 0.5;
            LODWORD(v65) = v34[1];
          }
          else
          {
            v69 = 0.5;
          }
          v70 = 278720LL * (int)v65;
          v71 = (float)((float)((float)(v69 * v68) - *((float *)v34 + 3)) * 0.125) + *((float *)v34 + 3);
          *((float *)v34 + 3) = v71;
          *(float *)&dword_140404A6C[v70 + 327704] = v71;
          if ( v71 >= 0.0625 || (_DWORD)v65 == -1 )
            goto LABEL_86;
          if ( !dword_140404A6C[v70 + 327698] )
            dword_140404A6C[v70 + 327698] = 1;
        }
        else
        {
          v72 = (int)*v34;
          if ( (_DWORD)v72 != -1 )
          {
            if ( !dword_140404A6C[278720 * v72 + 327698] )
              dword_140404A6C[278720 * v72 + 327698] = 1;
            *v34 = -1;
            v13 = dword_140404A6C[70326525];
          }
          v73 = (int)v34[1];
          if ( (_DWORD)v73 == -1 )
            goto LABEL_87;
          if ( !dword_140404A6C[278720 * v73 + 327698] )
            dword_140404A6C[278720 * v73 + 327698] = 1;
        }
        v34[1] = -1;
LABEL_86:
        v13 = dword_140404A6C[70326525];
LABEL_87:
        ++v33;
        v34 += 5;
        if ( v33 >= v13 )
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
LABEL_91:
    v74 = 0;
    if ( v13 > 0 )
    {
      v75 = &dword_140404A6C[70326528];
      do
      {
        v76 = (int)*(v75 - 1);
        if ( (_DWORD)v76 != -1 )
        {
          if ( !dword_140404A6C[278720 * v76 + 327698] )
            dword_140404A6C[278720 * v76 + 327698] = 1;
          *(v75 - 1) = -1;
          v13 = dword_140404A6C[70326525];
        }
        v77 = (int)*v75;
        if ( (_DWORD)v77 != -1 )
        {
          if ( !dword_140404A6C[278720 * v77 + 327698] )
            dword_140404A6C[278720 * v77 + 327698] = 1;
          *v75 = -1;
          v13 = dword_140404A6C[70326525];
        }
        ++v74;
        v75 += 5;
      }
      while ( v74 < v13 );
    }
  }
  v78 = 0;
  while ( v78 < v13 )
  {
    if ( *(v12 - 1) == -1 && *v12 == -1 )
    {
      v79 = v13 - 1;
      dword_140404A6C[70326525] = v79;
      __builtin_memcpy(v12 - 2, &dword_140404A6C[5 * v79 + 70326526], 16);
      v12[2] = dword_140404A6C[5 * v79 + 70326530];
      v13 = dword_140404A6C[70326525];
    }
    else
    {
      ++v78;
      v12 += 5;
    }
  }
  v80 = &dword_140404A6C[71856270];
  do
  {
    *v80 = 0;
    v80 += 3597;
  }
  while ( (__int64)v80 < (__int64)&dword_140404A6C[72777102] );
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
  v81 = *(float *)&dword_140404A6C[284024513];
  v82 = &dword_140404A6C[308307086];
  v83 = *(float *)&dword_140404A6C[284024512];
  v84 = *(float *)&dword_140404A6C[284024511];
  v85 = *(float *)&dword_140404A6C[284024504];
  v86 = *(float *)&dword_140404A6C[284024503];
  v87 = &dword_140404A6C[308307086];
  v88 = *(float *)&dword_140404A6C[284024502];
  v89 = 4;
  do
  {
    v90 = *(v87 - 9);
    if ( v90 )
    {
      v91 = (int)*(v87 - 7);
      if ( (_DWORD)v91 != -1 && dword_140404A6C[v91 + 284023074] )
      {
        *(v87 - 9) = 0;
        v90 = 0;
      }
      v92 = (int)*(v87 - 5);
      if ( (_DWORD)v92 == -1 || v6 == 3 )
      {
        v96 = (int)*(v87 - 4);
        if ( (_DWORD)v96 == -1 )
        {
          v93 = v85 - v81;
          v94 = v86 - v83;
          v95 = v88 - v84;
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
      *((float *)v87 - 2) = v95;
      *((float *)v87 - 1) = v94;
      *(float *)v87 = v93;
      if ( v90 && (_DWORD)v91 != -1 )
        dword_140404A6C[3597 * v91 + 71856270] = 1;
    }
    v97 = v87[96392];
    if ( v97 )
    {
      v98 = (int)v87[96394];
      if ( (_DWORD)v98 != -1 && dword_140404A6C[v98 + 284023074] )
      {
        v87[96392] = 0;
        v97 = 0;
      }
      v99 = (int)v87[96396];
      if ( (_DWORD)v99 == -1 || v6 == 3 )
      {
        v103 = (int)v87[96397];
        if ( (_DWORD)v103 == -1 )
        {
          v100 = v85 - v81;
          v101 = v86 - v83;
          v102 = v88 - v84;
        }
        else
        {
          v100 = *(float *)&dword_140404A6C[13 * v103 + 285083827];
          v101 = *(float *)&dword_140404A6C[13 * v103 + 285083826];
          v102 = *(float *)&dword_140404A6C[13 * v103 + 285083825];
        }
      }
      else
      {
        v100 = *(float *)&dword_140404A6C[344 * v99 + 284956409];
        v101 = *(float *)&dword_140404A6C[344 * v99 + 284956408];
        v102 = *(float *)&dword_140404A6C[344 * v99 + 284956407];
      }
      *((float *)v87 + 96399) = v102;
      *((float *)v87 + 96400) = v101;
      *((float *)v87 + 96401) = v100;
      if ( v97 && (_DWORD)v98 != -1 )
        dword_140404A6C[3597 * v98 + 71856270] = 1;
    }
    v87 += 192802;
    --v89;
  }
  while ( v89 );
  v104 = (int **)&dword_140404A6C[299853565];
  v105 = 0;
  v144 = &dword_140404A6C[299853565];
  v106 = 2048;
  sr_position.first = 8;
  v107 = &dword_140404A6C[18182165];
  v108 = 0;
  do
  {
    v109 = *(v82 - 9);
    v110 = v106 - 1992;
    v82[63623] = v106 - 1992;
    if ( v109 && (!*(v82 - 8) || *(v82 - 6) != *(v82 - 7)) )
    {
      sub_1401E27C0(*v104, 4028, (int *)v104);
      v109 = *(v82 - 9);
      v110 = v82[63623];
      v82[30726] = ((unsigned __int8)v82[30725] - 8) & 0x3F;
    }
    *(v82 - 6) = *(v82 - 7);
    *(v82 - 8) = v109;
    if ( v109 )
    {
      if ( dword_140404A6C[7] )
      {
        v111 = 278720LL * v110;
        if ( !dword_140404A6C[v111 + 327697] )
        {
          sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v111 + 327698]), 0, 0x1102FCu);
          v112 = *(v82 - 2);
          dword_140404A6C[v111 + 327772] = 0;
          dword_140404A6C[v111 + 589917] = 0;
          *(_QWORD *)&dword_140404A6C[v111 + 327697] = 1;
          dword_140404A6C[v111 + 327699] = 1065353216;
          dword_140404A6C[v111 + 327700] = 1;
          dword_140404A6C[v111 + 327702] = v106;
          dword_140404A6C[v111 + 327704] = 1065353216;
          dword_140404A6C[v111 + 327705] = 1065353216;
          dword_140404A6C[v111 + 327706] = 1065353216;
          dword_140404A6C[v111 + 327707] = 1065353216;
          dword_140404A6C[v111 + 327708] = 1;
          *(_QWORD *)v107 = 0;
          dword_140404A6C[v111 + 606302] = v112;
          dword_140404A6C[v111 + 606303] = *(v82 - 1);
          dword_140404A6C[v111 + 606304] = *v82;
          dword_140404A6C[v111 + 606308] = v107[2];
          dword_140404A6C[v111 + 606310] = 1;
          dword_140404A6C[v111 + 606414] = 0;
        }
      }
    }
    else
    {
      v113 = 278720LL * v110;
      if ( !dword_140404A6C[v113 + 327698] )
        dword_140404A6C[v113 + 327698] = 1;
    }
    v114 = (int **)v144;
    v115 = 8;
    do
    {
      if ( (int)sub_14007D6C0(v106) < 5760 )
      {
        v116 = (int)v82[30726];
        if ( (_DWORD)v116 != (v82[30725] & 0x3F) )
        {
          v143 = 0;
          v117 = v116;
          v142 = 2048;
          v118 = dword_140404A6C[v105 + 308337813 + v116];
          v119 = *v114;
          v120 = &dword_140404A6C[v108 + 308307091];
          if ( v118 <= 0 )
          {
            sub_1401E25C0(v119, nullptr, 0, (__int64)v120, v142, v143);
            sub_1401FCD30((void *)(uintptr_t)(&dword_140404A6C[v108 + 308307091]), 0, 0x780u);
          }
          else
          {
            sub_1401E25C0(
              v119,
              (char *)&dword_140404A6C[512 * v117 + 308337941 + v108],
              v118,
              (__int64)v120,
              v142,
              v143);
          }
          v121 = (__int16 *)v82 + 11;
          v122 = 0;
          dword_140404A6C[v105 + 308337813 + (int)v82[30726]] = 0;
          v123 = 96;
          do
          {
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107) & 0x3FFFF)) = (float)*(v121 - 1) * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 1) & 0x3FFFF)) = (float)*v121 * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 2) & 0x3FFFF)) = (float)v121[1] * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 3) & 0x3FFFF)) = (float)v121[2] * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 4) & 0x3FFFF)) = (float)v121[3] * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 5) & 0x3FFFF)) = (float)v121[4] * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 6) & 0x3FFFF)) = (float)v121[5] * 0.000030517578;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 7) & 0x3FFFF)) = (float)v121[6] * 0.000030517578;
            v124 = _mm_cvtsi32_si128(v121[7]);
            v121 += 10;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v122 + *v107 + 8) & 0x3FFFF)) = SR_VEC_READ_LANES(128, _mm_cvtepi32_ps(v124), f32)[0]
                                                                                     * 0.000030517578;
            v125 = v122 + *v107;
            v122 += 10;
            *(float *)(*((_QWORD *)v107 - 1) + 4LL * ((v125 + 9) & 0x3FFFF)) = (float)*(v121 - 2) * 0.000030517578;
            --v123;
          }
          while ( v123 );
          *v107 = (*v107 + 960) & 0x3FFFF;
          v82[30726] = ((unsigned __int8)v82[30726] + 1) & 0x3F;
        }
      }
      --v115;
    }
    while ( v115 );
    v126 = v82[30725];
    v127 = v82[30726];
    v128 = v126 - v127;
    v129 = v145;
    if ( *(v82 - 9) )
    {
      if ( v126 < v127 )
        v128 += 64;
      if ( v128 > 16 )
        v82[30726] = ((_BYTE)v126 - 8) & 0x3F;
    }
    v130 = v146;
    v131 = (int)v82[63623];
    v132 = *((float *)v82 - 2);
    v133 = *((float *)v82 - 1);
    v134 = *(float *)v82;
    v135 = 278720 * v131;
    v49 = *(v82 - 4) == -1;
    *(float *)&dword_140404A6C[v135 + 606302] = v132;
    *(float *)&dword_140404A6C[v135 + 606303] = v133;
    *(float *)&dword_140404A6C[v135 + 606304] = v134;
    dword_140404A6C[v135 + 606305] = *v130;
    dword_140404A6C[v135 + 606306] = v130[1];
    dword_140404A6C[v135 + 606307] = v130[2];
    if ( v49 )
    {
      v136 = *(v82 - 3);
      if ( v136 )
      {
        if ( v136 == 1 )
          dword_140404A6C[v135 + 606308] = 1086324736;
        else
          dword_140404A6C[v135 + 606308] = 1098907648;
      }
      else
      {
        dword_140404A6C[v135 + 606308] = 0x40000000;
      }
    }
    else
    {
      dword_140404A6C[v135 + 606308] = 1065353216;
    }
    if ( (float)((float)((float)((float)(v129[1] - v133) * (float)(v129[1] - v133))
                       + (float)((float)(*v129 - v132) * (float)(*v129 - v132)))
               + (float)((float)(v129[2] - v134) * (float)(v129[2] - v134))) <= 16384.0 )
    {
      v137 = 1.0;
      if ( (unsigned int)sub_1400DC050((float *)v82 - 2, v129, 0) )
        v137 = 0.5;
      LODWORD(v131) = v82[63623];
    }
    else
    {
      v137 = 0.5;
    }
    ++v106;
    v104 = (int **)(v144 + 2);
    v138 = (float)(v137 - *((float *)v82 + 4)) * 0.125;
    v108 += 96401;
    v144 += 2;
    v139 = v138 + *((float *)v82 + 4);
    v105 += 96401;
    v107 += 8;
    *((float *)v82 + 4) = v139;
    v82 += 96401;
    v49 = sr_position.first-- == 1;
    *(float *)&dword_140404A6C[278720 * (int)v131 + 327704] = v139;
  }
  while ( !v49 );
  return; /* native void spatial audio update */
}
#undef v141
#undef v142
#undef v143
#undef v144
#undef v145
#undef v146
#undef v149

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140153040) ----------------------------------------------------
_BOOL8            sub_140153040(__int64 a1, __int64 a2, float *a3, float *a4, float *a5, float a6)
{
  int v6; // r14d
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  float v14; // xmm12_4
  float v15; // xmm15_4
  __int64 v16; // rax
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm4_4
  __int64 v20; // rax
  float v21; // xmm14_4
  float v22; // xmm13_4
  float v23; // xmm8_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  float v26; // xmm13_4
  float v27; // xmm14_4
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm14_4
  __int64 v31; // rax
  float v32; // xmm8_4
  float v33; // xmm6_4
  float v34; // xmm4_4
  float v35; // xmm7_4
  float v36; // xmm1_4
  float v37; // xmm5_4
  float v38; // xmm6_4
  float v39; // xmm2_4
  float v40; // xmm5_4
  float v41; // xmm3_4
  float v42; // xmm6_4
  float v43; // xmm1_4
  float v44; // xmm9_4
  float v45; // xmm0_4
  float v46; // xmm4_4
  float v47; // xmm12_4
  float v48; // xmm1_4
  float v49; // xmm3_4
  float v50; // xmm7_4
  float v51; // xmm7_4
  float v52; // xmm3_4
  float v53; // xmm6_4
  float v54; // xmm3_4
  float v55; // xmm9_4
  float v56; // xmm5_4
  float v57; // xmm6_4
  float v58; // xmm0_4
  float v59; // xmm8_4
  float v60; // xmm9_4
  float v61; // xmm7_4
  bool v62; // zf
  float v63; // xmm3_4
  float v64; // xmm15_4
  float v65; // xmm0_4
  float v66; // xmm2_4
  float v67; // xmm12_4
  float v68; // xmm12_4
  float v69; // xmm13_4
  float v70; // xmm14_4
  __int64 v71; // rax
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // xmm6_4
  float v75; // xmm5_4
  float v76; // xmm3_4
  float v77; // xmm1_4
  float v78; // xmm6_4
  float v79; // xmm5_4
  float v80; // xmm4_4
  float v81; // xmm6_4
  float v82; // xmm1_4
  float v83; // xmm3_4
  float v84; // xmm4_4
  float v85; // xmm5_4
  float v86; // xmm0_4
  float v87; // xmm4_4
  float v88; // xmm5_4
  float v89; // xmm6_4
  float v90; // xmm3_4
  float v91; // xmm3_4
  float v92; // xmm4_4
  float v93; // xmm5_4
  float v94; // xmm0_4
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_140153040[416];
#define v96 (*(float (*))(void *)(sr_frame_140153040 + 8)) /* [rsp+48h] */
#define v97 (*(float (*))(void *)(sr_frame_140153040 + 12)) /* [rsp+4Ch] */
#define v98 (*(float (*))(void *)(sr_frame_140153040 + 16)) /* [rsp+50h] */
#define v99 (*(float (*))(void *)(sr_frame_140153040 + 24)) /* [rsp+58h] */
#define v100 (*(float (*))(void *)(sr_frame_140153040 + 28)) /* [rsp+5Ch] */
#define v101 (*(float (*))(void *)(sr_frame_140153040 + 32)) /* [rsp+60h] */
#define v102 (*(float (*))(void *)(sr_frame_140153040 + 40)) /* [rsp+68h] */
#define v103 (*(float (*))(void *)(sr_frame_140153040 + 44)) /* [rsp+6Ch] */
#define v104 (*(float (*))(void *)(sr_frame_140153040 + 48)) /* [rsp+70h] */
#define v105 (*(float (*))(void *)(sr_frame_140153040 + 56)) /* [rsp+78h] */
#define v106 (*(float (*))(void *)(sr_frame_140153040 + 60)) /* [rsp+7Ch] */
#define v107 (*(float (*))(void *)(sr_frame_140153040 + 64)) /* [rsp+80h] */
#define v108 (*(float (*))(void *)(sr_frame_140153040 + 72)) /* [rsp+88h] */
#define v109 (*(float (*))(void *)(sr_frame_140153040 + 76)) /* [rsp+8Ch] */
#define v110 (*(float (*))(void *)(sr_frame_140153040 + 80)) /* [rsp+90h] */
#define v111 (*(float (*))(void *)(sr_frame_140153040 + 84)) /* [rsp+94h] */
#define v112 (*(float (*))(void *)(sr_frame_140153040 + 88)) /* [rsp+98h] */
#define v113 (*(float (*)[4])(void *)(sr_frame_140153040 + 96)) /* [rsp+A0h] */
#define v114 (*(float (*)[4])(void *)(sr_frame_140153040 + 112)) /* [rsp+B0h] */
#define v115 (*(float (*)[4])(void *)(sr_frame_140153040 + 128)) /* [rsp+C0h] */
#define v116 (*(float (*)[4])(void *)(sr_frame_140153040 + 144)) /* [rsp+D0h] */
#define v117 (*(__int128 (*))(void *)(sr_frame_140153040 + 160)) /* [rsp+E0h] */
#define v118 (*(float (*))(void *)(sr_frame_140153040 + 392)) /* [rsp+1C8h] */
#define v119 (*(float (*))(void *)(sr_frame_140153040 + 400)) /* [rsp+1D0h] */

  v6 = 0;
  *(_DWORD *)(a1 + 28) = 0;
  if ( *(int *)(a2 + 48) <= 0 )
    return 0;
  v11 = 0;
  do
  {
    v12 = *(_QWORD *)(a2 + 8);
    v13 = *(_QWORD *)(a2 + 56);
    v14 = a4[3];
    v15 = *a4;
    v16 = 3 * *(_DWORD *)(v11 + v13 + 8);
    v17 = *(float *)(v12 + 4 * v16);
    v18 = *(float *)(v12 + 4 * v16 + 4);
    v19 = *(float *)(v12 + 4 * v16 + 8);
    v20 = 3 * *(_DWORD *)(v11 + v13 + 12);
    v21 = a4[4] * v18;
    v22 = (float)(v14 * v18) + (float)(*a4 * v17);
    v23 = a4[5] * v18;
    v24 = *(float *)(v12 + 4 * v20 + 4);
    v25 = *(float *)(v12 + 4 * v20);
    v26 = v22 + (float)(a4[6] * v19);
    v27 = v21 + (float)(a4[1] * v17);
    v28 = a4[2] * v17;
    v29 = *(float *)(v12 + 4 * v20 + 8);
    v30 = v27 + (float)(a4[7] * v19);
    v31 = 3 * *(_DWORD *)(v11 + v13 + 16);
    v32 = (float)(v23 + v28) + (float)(a4[8] * v19);
    v33 = v25;
    v34 = (float)((float)(v25 * *a4) + (float)(v24 * v14)) + (float)(v29 * a4[6]);
    v35 = *(float *)(v12 + 4 * v31);
    v36 = v29 * a4[7];
    v37 = (float)(v25 * a4[2]) + (float)(v24 * a4[5]);
    v38 = (float)(v33 * a4[1]) + (float)(v24 * a4[4]);
    v39 = *(float *)(v12 + 4 * v31 + 4);
    v40 = v37 + (float)(v29 * a4[8]);
    v41 = *(float *)(v12 + 4 * v31 + 8);
    v42 = v38 + v36;
    v118 = v32;
    v43 = v41 * a4[6];
    v119 = v34;
    v108 = v42;
    v109 = v40;
    v44 = (float)((float)(v35 * v15) + (float)(v39 * v14)) + v43;
    v45 = v39 * a4[4];
    v46 = v34 - v26;
    v47 = v35 * a4[1];
    v48 = v41 * a4[7];
    v49 = v41 * a4[8];
    v50 = (float)(v35 * a4[2]) + (float)(v39 * a4[5]);
    v110 = v44;
    v51 = v50 + v49;
    v52 = v42;
    v111 = (float)(v47 + v45) + v48;
    v53 = v44 - v26;
    v54 = v52 - v30;
    v112 = v51;
    v55 = (float)((float)(v111 - v30) * (float)(v40 - v32)) - (float)((float)(v51 - v32) * v54);
    v56 = (float)((float)(v51 - v32) * v46) - (float)(v53 * (float)(v40 - v32));
    v57 = (float)(v53 * v54) - (float)((float)(v111 - v30) * v46);
    v58 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57));
    if ( v58 == 0.0 )
    {
      v96 = 0.0;
      v59 = 0.0;
      v97 = 0.0;
      v60 = 0.0;
      v61 = 0.0;
    }
    else
    {
      v59 = (float)(1.0 / v58) * v55;
      v60 = (float)(1.0 / v58) * v56;
      v96 = v59;
      v61 = (float)(1.0 / v58) * v57;
      v97 = v60;
    }
    v62 = *(_DWORD *)(v11 + v13 + 4) == 4;
    v63 = *a3;
    v64 = a3[1];
    v65 = *a3 + v119;
    v66 = a3[2];
    v67 = *a3;
    v98 = v61;
    v68 = v67 + v26;
    v115[0] = v65;
    v69 = v64 + v30;
    v70 = v66 + v118;
    v115[1] = v64 + v108;
    v114[0] = v68;
    v115[2] = v66 + v109;
    v114[1] = v69;
    v113[0] = v63 + v110;
    v114[2] = v66 + v118;
    v113[1] = v64 + v111;
    v113[2] = v66 + v112;
    if ( v62 )
    {
      v71 = 3 * *(_DWORD *)(v11 + v13 + 20);
      v72 = *(float *)(v12 + 4 * v71);
      v73 = (float)((float)(v72 * *a4) + (float)(*(float *)(v12 + 4 * v71 + 4) * a4[3]))
          + (float)((float)(*(float *)(v12 + 4 * v71 + 8) * a4[6]) + v63);
      v74 = (float)(*(float *)(v12 + 4 * v71 + 8) * a4[8]) + (float)(v72 * a4[2]);
      v75 = *(float *)(v12 + 4 * v71 + 4) * a4[5];
      v76 = (float)(*(float *)(v12 + 4 * v71 + 8) * a4[7]) + (float)(v72 * a4[1]);
      v77 = (float)(*(float *)(v12 + 4 * v71 + 4) * a4[4]) + v64;
      v116[0] = v73;
      v78 = v74 + (float)(v75 + a3[2]);
      v116[1] = v76 + v77;
      v116[2] = v78;
    }
    v79 = a5[1];
    v80 = *a5;
    v81 = a5[2];
    v82 = *a5 - v68;
    v103 = v79 - v69;
    v102 = v82;
    v104 = v81 - v70;
    v83 = (float)((float)(v60 * (float)(v79 - v69)) + (float)(v59 * v82)) + (float)(v61 * (float)(v81 - v70));
    if ( v83 <= a6 && v83 >= 0.0 )
    {
      v102 = (float)(v59 * (float)-a6) + v80;
      v103 = (float)(v60 * (float)-a6) + v79;
      v104 = (float)(v61 * (float)-a6) + v81;
      if ( sub_140077FA0(&v99, &v96, (float *)&v117, a5, &v102, v114, v115, v113) )
      {
        v84 = v100;
        v85 = v101;
        v86 = fsqrt(
                (float)((float)((float)(v100 - a5[1]) * (float)(v100 - a5[1]))
                      + (float)((float)(v99 - *a5) * (float)(v99 - *a5)))
              + (float)((float)(v101 - a5[2]) * (float)(v101 - a5[2])));
        if ( (float)(a6 - v86) > *(float *)(a1 + 28) )
        {
          *(float *)a1 = v99;
          *(float *)(a1 + 4) = v84;
          *(float *)(a1 + 8) = v85;
          *(float *)(a1 + 12) = v59;
          *(float *)(a1 + 16) = v60;
          *(float *)(a1 + 20) = v61;
          *(float *)(a1 + 28) = a6 - v86;
        }
      }
    }
    if ( *(_DWORD *)(v11 + *(_QWORD *)(a2 + 56) + 4) == 4 )
    {
      v87 = *a5;
      v88 = a5[1];
      v89 = a5[2];
      v90 = v59 * (float)(*a5 - v68);
      v105 = *a5 - v68;
      v106 = v88 - v69;
      v107 = v89 - v70;
      v91 = (float)(v90 + (float)(v60 * (float)(v88 - v69))) + (float)(v61 * (float)(v89 - v70));
      if ( v91 <= a6 && v91 >= 0.0 )
      {
        v105 = (float)(v59 * (float)-a6) + v87;
        v106 = (float)(v60 * (float)-a6) + v88;
        v107 = (float)(v61 * (float)-a6) + v89;
        if ( sub_140077FA0(&v99, &v96, (float *)&v117 + 1, a5, &v105, v114, v113, v116) )
        {
          v92 = v100;
          v93 = v101;
          v94 = fsqrt(
                  (float)((float)((float)(v100 - a5[1]) * (float)(v100 - a5[1]))
                        + (float)((float)(v99 - *a5) * (float)(v99 - *a5)))
                + (float)((float)(v101 - a5[2]) * (float)(v101 - a5[2])));
          if ( (float)(a6 - v94) > *(float *)(a1 + 28) )
          {
            *(float *)a1 = v99;
            *(float *)(a1 + 4) = v92;
            *(float *)(a1 + 8) = v93;
            *(float *)(a1 + 12) = v59;
            *(float *)(a1 + 16) = v60;
            *(float *)(a1 + 20) = v61;
            *(float *)(a1 + 28) = a6 - v94;
          }
        }
      }
    }
    ++v6;
    v11 += 36;
  }
  while ( v6 < *(_DWORD *)(a2 + 48) );
  return *(float *)(a1 + 28) > 0.0;
}
#undef v96
#undef v97
#undef v98
#undef v99
#undef v100
#undef v101
#undef v102
#undef v103
#undef v104
#undef v105
#undef v106
#undef v107
#undef v108
#undef v109
#undef v110
#undef v111
#undef v112
#undef v113
#undef v114
#undef v115
#undef v116
#undef v117
#undef v118
#undef v119

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

//----- (0000000140154200) ----------------------------------------------------
__int64            sub_140154200(float *a1, float *a2, float *a3, float *a4, float a5, float *a6, float *a7)
{
  float v7; // xmm3_4
  float v8; // xmm5_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm8_4
  float v20; // xmm9_4
  float v21; // xmm6_4
  float v22; // xmm5_4
  float v23; // xmm0_4
  float v24; // xmm4_4

  v7 = 0.0;
  v8 = *a7 - *a6;
  v9 = a7[1] - a6[1];
  v10 = a7[2] - a6[2];
  v11 = fsqrt((float)((float)(v9 * v9) + (float)(v8 * v8)) + (float)(v10 * v10));
  if ( v11 == 0.0 )
  {
    v12 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
  }
  else
  {
    v12 = v8 * (float)(1.0 / v11);
    v13 = v9 * (float)(1.0 / v11);
    v14 = v10 * (float)(1.0 / v11);
  }
  v15 = (float)((float)((float)(*a4 - *a6) * v12) + (float)((float)(a4[1] - a6[1]) * v13))
      + (float)((float)(a4[2] - a6[2]) * v14);
  if ( v15 <= 0.0 )
    return 0;
  if ( v15 >= v11 )
    return 0;
  v16 = (float)(v12 * v15) + *a6;
  *a1 = v16;
  v17 = (float)(v13 * v15) + a6[1];
  a1[1] = v17;
  v18 = (float)(v14 * v15) + a6[2];
  a1[2] = v18;
  v19 = *a4 - v16;
  v20 = a4[1] - v17;
  v21 = a4[2] - v18;
  v22 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21));
  if ( v22 >= a5 )
    return 0;
  if ( v22 == 0.0 )
  {
    v23 = 0.0;
    v24 = 0.0;
  }
  else
  {
    v7 = (float)(1.0 / v22) * v21;
    v23 = (float)(1.0 / v22) * v20;
    v24 = (float)(1.0 / v22) * v19;
  }
  *a2 = v24;
  a2[1] = v23;
  a2[2] = v7;
  *a3 = v22;
  return 1;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 1402B34F0: using guessed type int sr_static_voxel_vertices[];
// 1402B3558: using guessed type int (sr_static_voxel_normals+2)[18];
// 1402B3664: using guessed type int (sr_static_voxel_faces+1)[];

//----- (00000001401550A0) ----------------------------------------------------
_BOOL8            sub_1401550A0(int a1, float *a2, float a3)
{
  __int64 v3; // r15
  __int64 v4; // rbx
  signed int v7; // esi
  int *v8; // rdi
  __int64 v9; // rax
  float v10; // xmm0_4
  float v11; // xmm4_4
  float v12; // xmm15_4
  __int64 v13; // rax
  __int64 v14; // rax
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  __int64 v18; // rax
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm9_4
  float v24; // xmm10_4
  __int64 v25; // rax
  float v26; // xmm6_4
  float v27; // xmm9_4
  float v28; // xmm10_4
  __int64 v29; // rax
  float v30; // xmm11_4
  float v31; // xmm12_4
  float v32; // xmm13_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm8_4
  float v36; // xmm3_4
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  float v40; // xmm12_4
  float v41; // xmm13_4
  float v42; // xmm11_4
  float v43; // xmm3_4
  float v44; // xmm4_4
  float v45; // xmm6_4
  float v46; // xmm5_4
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  /* Stack locals keep their original frame adjacency (see frameify.py). */
  _Alignas(16) unsigned char sr_frame_1401550A0[352];
#define v51 (*(__int64 (*))(void *)(sr_frame_1401550A0 + 0)) /* [rsp+48h] */
#define v52 (*(float (*))(void *)(sr_frame_1401550A0 + 8)) /* [rsp+50h] */
#define v53 (*(unsigned int (*))(void *)(sr_frame_1401550A0 + 16)) /* [rsp+58h] */
#define v54 (*(unsigned int (*))(void *)(sr_frame_1401550A0 + 20)) /* [rsp+5Ch] */
#define v55 (*(unsigned int (*))(void *)(sr_frame_1401550A0 + 24)) /* [rsp+60h] */
#define v56 (*(float (*)[3])(void *)(sr_frame_1401550A0 + 32)) /* [rsp+68h] */
#define v57 (*(float (*)[4])(void *)(sr_frame_1401550A0 + 48)) /* [rsp+78h] */
#define v58 (*(float (*)[4])(void *)(sr_frame_1401550A0 + 64)) /* [rsp+88h] */
#define v59 (*(float (*)[6])(void *)(sr_frame_1401550A0 + 80)) /* [rsp+98h] */
#define v60 (*(float (*))(void *)(sr_frame_1401550A0 + 320)) /* [rsp+188h] */
#define v61 (*(float (*))(void *)(sr_frame_1401550A0 + 328)) /* [rsp+190h] */
#define v62 (*(float (*))(void *)(sr_frame_1401550A0 + 336)) /* [rsp+198h] */

  v3 = a1;
  v4 = 5210LL * a1;
  if ( (float)(*a2 + a3) < *(float *)&dword_140404A6C[v4 + 129716753] )
    return 0;
  if ( (float)(a2[1] + a3) < *(float *)&dword_140404A6C[v4 + 129716754] )
    return 0;
  if ( (float)(a2[2] + a3) < *(float *)&dword_140404A6C[v4 + 129716755] )
    return 0;
  if ( (float)(*a2 - a3) > *(float *)&dword_140404A6C[v4 + 129716756] )
    return 0;
  if ( (float)(a2[1] - a3) > *(float *)&dword_140404A6C[v4 + 129716757] )
    return 0;
  if ( (float)(a2[2] - a3) > *(float *)&dword_140404A6C[v4 + 129716758] )
    return 0;
  v7 = 0;
  dword_140404A6C[73006988] = 1199570944;
  if ( (int)dword_140404A6C[v4 + 129717219] <= 0 )
    return 0;
  v8 = (int *)&dword_140404A6C[v4 + 129717222];
  do
  {
    if ( dword_140404A6C[v4 + 129716710] != 13 || v8[13] > 0 )
    {
      v9 = v4 * 4 + 16LL * *(v8 - 1);
      v10 = *(float *)((char *)&dword_140404A6C[129719654] + v9);
      v11 = *(float *)((char *)&dword_140404A6C[129719655] + v9);
      v12 = *(float *)((char *)&dword_140404A6C[129719653] + v9);
      v13 = *v8;
      v62 = v10;
      v57[1] = v10;
      v14 = v4 * 4 + 16 * v13;
      v61 = v11;
      v57[2] = v11;
      v57[0] = v12;
      v15 = *(float *)((char *)&dword_140404A6C[129719653] + v14);
      v16 = *(float *)((char *)&dword_140404A6C[129719654] + v14);
      v17 = *(float *)((char *)&dword_140404A6C[129719655] + v14);
      v18 = v4 * 4 + 16LL * v8[1];
      v58[1] = v16;
      v19 = v16 - v10;
      v58[2] = v17;
      v20 = v17 - v11;
      v58[0] = v15;
      v21 = v15 - v12;
      v22 = *(float *)((char *)&dword_140404A6C[129719654] + v18);
      v23 = *(float *)((char *)&dword_140404A6C[129719655] + v18);
      v24 = *(float *)((char *)&dword_140404A6C[129719653] + v18);
      v25 = v8[2];
      v56[1] = v22;
      v26 = v22 - v10;
      v56[2] = v23;
      v27 = v23 - v11;
      v56[0] = v24;
      v28 = v24 - v12;
      v29 = v4 * 4 + 16 * v25;
      v30 = *(float *)((char *)&dword_140404A6C[129719653] + v29);
      v31 = *(float *)((char *)&dword_140404A6C[129719654] + v29);
      v32 = *(float *)((char *)&dword_140404A6C[129719655] + v29);
      v33 = (float)(v26 * v20) - (float)(v27 * v19);
      v59[0] = v30;
      v59[1] = v31;
      v34 = (float)(v27 * v21) - (float)(v28 * v20);
      v59[2] = v32;
      v35 = (float)(v28 * v19) - (float)(v26 * v21);
      v36 = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v35 * v35));
      if ( v36 == 0.0 )
      {
        v51 = 0;
        v52 = 0.0;
      }
      else
      {
        *(float *)&v51 = v33 * (float)(1.0 / v36);
        *((float *)&v51 + 1) = v34 * (float)(1.0 / v36);
        v52 = v35 * (float)(1.0 / v36);
      }
      if ( sub_140158760((float *)&v53, (float *)&v51, &v60, a2, a3, v57, v58, v56)
        && *(float *)&dword_140404A6C[73006988] > v60 )
      {
        v37 = v4 * 4 + 16LL * *(v8 - 1);
        dword_140404A6C[73006981] = v53;
        dword_140404A6C[73006982] = v54;
        dword_140404A6C[73006983] = v55;
        v38 = 5210 * v3 + *(int *)((char *)&dword_140404A6C[129719656] + v37);
        *(_QWORD *)&dword_140404A6C[73006984] = v51;
        *(float *)&dword_140404A6C[73006986] = v52;
        dword_140404A6C[73006994] = dword_140404A6C[v38 + 129716769];
        v39 = v4 * 4 + 16LL * *v8;
        *(float *)&dword_140404A6C[73006988] = v60;
        dword_140404A6C[73006993] = v7;
        dword_140404A6C[73006995] = dword_140404A6C[5210 * v3
                                                  + 129716769
                                                  + *(int *)((char *)&dword_140404A6C[129719656] + v39)];
        dword_140404A6C[73006996] = dword_140404A6C[5210 * v3
                                                  + 129716769
                                                  + (int)dword_140404A6C[4 * v8[1] + 129719656 + v4]];
        sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], v57, v58, v56);
      }
      if ( *(v8 - 2) == 4 )
      {
        v40 = v31 - v62;
        v41 = v32 - v61;
        v42 = v30 - v12;
        v43 = (float)(v27 * v40) - (float)(v26 * v41);
        v44 = (float)(v28 * v41) - (float)(v27 * v42);
        v45 = (float)(v26 * v42) - (float)(v28 * v40);
        v46 = fsqrt((float)((float)(v44 * v44) + (float)(v43 * v43)) + (float)(v45 * v45));
        if ( v46 == 0.0 )
        {
          v51 = 0;
          v52 = 0.0;
        }
        else
        {
          *(float *)&v51 = v43 * (float)(1.0 / v46);
          *((float *)&v51 + 1) = v44 * (float)(1.0 / v46);
          v52 = v45 * (float)(1.0 / v46);
        }
        if ( sub_140158760((float *)&v53, (float *)&v51, &v60, a2, a3, v57, v56, v59)
          && *(float *)&dword_140404A6C[73006988] > v60 )
        {
          v47 = v4 * 4 + 16LL * *(v8 - 1);
          dword_140404A6C[73006981] = v53;
          dword_140404A6C[73006982] = v54;
          dword_140404A6C[73006983] = v55;
          v48 = 5210 * v3 + *(int *)((char *)&dword_140404A6C[129719656] + v47);
          *(_QWORD *)&dword_140404A6C[73006984] = v51;
          *(float *)&dword_140404A6C[73006986] = v52;
          dword_140404A6C[73006994] = dword_140404A6C[v48 + 129716769];
          v49 = v4 * 4 + 16LL * v8[1];
          *(float *)&dword_140404A6C[73006988] = v60;
          dword_140404A6C[73006993] = v7;
          dword_140404A6C[73006995] = dword_140404A6C[5210 * v3
                                                    + 129716769
                                                    + *(int *)((char *)&dword_140404A6C[129719656] + v49)];
          dword_140404A6C[73006996] = dword_140404A6C[5210 * v3
                                                    + 129716769
                                                    + (int)dword_140404A6C[4 * v8[2] + 129719656 + v4]];
          sub_14002D370((float *)&dword_140404A6C[73006998], (float *)&dword_140404A6C[73006981], v57, v56, v59);
        }
      }
    }
    ++v7;
    v8 += 16;
  }
  while ( v7 < (int)dword_140404A6C[v4 + 129717219] );
  return *(float *)&dword_140404A6C[73006988] < 65536.0;
}
#undef v51
#undef v52
#undef v53
#undef v54
#undef v55
#undef v56
#undef v57
#undef v58
#undef v59
#undef v60
#undef v61
#undef v62

// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A84880: using guessed type unsigned int;
// 151A84884: using guessed type unsigned int;
// 151A84888: using guessed type unsigned int;
// 151A8488C: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 151A8489C: using guessed type unsigned int;
// 151A848B0: using guessed type unsigned int;
// 151A848B4: using guessed type unsigned int;
// 151A848B8: using guessed type unsigned int;
// 151A848BC: using guessed type unsigned int;

//----- (00000001401563E0) ----------------------------------------------------
__int64            sub_1401563E0(_DWORD *a1, float *a2, float *a3, float *a4, float a5, float *a6)
{
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm6_4
  float v9; // xmm7_4

  v6 = *a4 - *a6;
  v7 = a4[1] - a6[1];
  v8 = a4[2] - a6[2];
  v9 = fsqrt((float)((float)(v7 * v7) + (float)(v6 * v6)) + (float)(v8 * v8));
  if ( v9 < a5 )
  {
    *a2 = (float)(1.0 / v9) * v6;
    a2[1] = (float)(1.0 / v9) * v7;
    a2[2] = (float)(1.0 / v9) * v8;
    *a1 = *(_DWORD *)a4;
    a1[1] = *((_DWORD *)a4 + 1);
    a1[2] = *((_DWORD *)a4 + 2);
    *a3 = a5 - v9;
  }
  return 0;
}

// 140279870: using guessed type __int128 xmmword_140279870;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];

