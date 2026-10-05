/* Address: 0x1401449c0 | Name: sub_1401449C0 | Size: 4580 bytes */
double __fastcall sub_1401449C0(int a1, int a2)
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
  __int64 v120; // rax
  unsigned int v121; // eax
  void *v122; // rcx
  __int64 v123; // rax
  bool v124; // cc
  __int64 v125; // r8
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  void *v131; // rcx
  __int64 v132; // rax
  __int64 v133; // r8
  __int64 v134; // r8
  __int64 v135; // r8
  __int64 v136; // r8
  unsigned int *v138; // [rsp+20h] [rbp-88h]
  unsigned int *v141; // [rsp+C8h] [rbp+20h]

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
    v138 = &dword_140404A6C[178158801];
    v141 = &dword_140404A6C[178224338];
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
          v22 = v138;
          v27 += 3;
          v24 = v141;
          v29 += 3;
          v28 += 6;
        }
        while ( v26 < (int)dword_140404A6C[177495247] );
        v25 = v21 + 1;
      }
      v24 += 6;
      v22 += 3;
      v23 += 3;
      v141 = v24;
      v138 = v22;
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
  v120 = j__malloc_base(12 * dword_140404A6C[177495247] * dword_140404A6C[177167566]);
  *(_QWORD *)&dword_140404A6C[v118 + 178527463] = v120;
  MEMORY[0x1401FC920](v120, &dword_140404A6C[177347791]);
  v121 = dword_140404A6C[177495247];
  v122 = *(void **)&dword_140404A6C[v118 + 178527467];
  dword_140404A6C[v118 + 178527465] = dword_140404A6C[177495247];
  dword_140404A6C[v118 + 178527475] = v121;
  free(v122);
  v123 = j__malloc_base(12 * dword_140404A6C[177495247]);
  v124 = (int)dword_140404A6C[v118 + 178527465] <= 0;
  *(_QWORD *)&dword_140404A6C[v118 + 178527467] = v123;
  if ( !v124 )
  {
    v125 = 0;
    v126 = 0;
    do
    {
      ++v3;
      v125 += 12;
      v126 += 12;
      *(_DWORD *)(v125 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 12) = v106 - 2;
      *(_DWORD *)(v126 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 8) = v106 - 1;
      *(_DWORD *)(v126 + *(_QWORD *)&dword_140404A6C[v118 + 178527467] - 4) = v106;
      v106 += 3;
    }
    while ( v3 < (int)dword_140404A6C[v118 + 178527465] );
  }
  free(*(void **)&dword_140404A6C[v118 + 178527469]);
  v127 = j__malloc_base(12 * dword_140404A6C[177495247]);
  *(_QWORD *)&dword_140404A6C[v118 + 178527469] = v127;
  MEMORY[0x1401FC920](v127, &dword_140404A6C[178109649]);
  free(*(void **)&dword_140404A6C[v118 + 178527471]);
  v128 = j__malloc_base(12 * dword_140404A6C[177495247]);
  *(_QWORD *)&dword_140404A6C[v118 + 178527471] = v128;
  MEMORY[0x1401FC920](v128, &dword_140404A6C[177814737]);
  free(*(void **)&dword_140404A6C[v118 + 178527473]);
  v129 = j__malloc_base(12 * dword_140404A6C[177495247]);
  *(_QWORD *)&dword_140404A6C[v118 + 178527473] = v129;
  MEMORY[0x1401FC920](v129, &dword_140404A6C[178158801]);
  free(*(void **)&dword_140404A6C[v118 + 178527477]);
  v130 = j__malloc_base(24 * dword_140404A6C[177495247]);
  *(_QWORD *)&dword_140404A6C[v118 + 178527477] = v130;
  MEMORY[0x1401FC920](v130, &dword_140404A6C[178224337]);
  v131 = *(void **)&dword_140404A6C[v118 + 178527481];
  dword_140404A6C[v118 + 178527479] = dword_140404A6C[178519250];
  free(v131);
  v132 = j__malloc_base(8 * dword_140404A6C[178519250]);
  *(_QWORD *)&dword_140404A6C[v118 + 178527481] = v132;
  MEMORY[0x1401FC920](v132, &dword_140404A6C[178519251]);
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[a1 + 283790166] + 283793813], v133);
  unk_140404190(
    34962,
    (int)(12 * dword_140404A6C[v118 + 178527465] * dword_140404A6C[v118 + 178527462]),
    *(_QWORD *)&dword_140404A6C[v118 + 178527463],
    35044);
  unk_140404170(34962, 0, v134);
  unk_140404170(34963, dword_140404A6C[2 * dword_140404A6C[a1 + 283790166] + 283793814], v135);
  unk_140404190(
    34963,
    (int)(24 * dword_140404A6C[v118 + 178527465]),
    *(_QWORD *)&dword_140404A6C[v118 + 178527477],
    35044);
  return unk_140404170(34963, 0, v136);
}

