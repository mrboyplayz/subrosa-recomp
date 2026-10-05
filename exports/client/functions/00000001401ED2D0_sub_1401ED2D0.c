/* Address: 0x1401ed2d0 | Name: sub_1401ED2D0 | Size: 12361 bytes */
__int64 __fastcall sub_1401ED2D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        signed int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void (__fastcall *a10)(__int64, int *, _QWORD, _QWORD, int, int, int))
{
  float v10; // xmm0_4
  float v11; // xmm0_4
  void *v12; // rsp
  void *v13; // rsp
  void *v14; // rsp
  void *v15; // rsp
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int64 v18; // rax
  __int64 v19; // rax
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  char v32; // [rsp+30h] [rbp-2580h] BYREF
  char v33; // [rsp+3F0h] [rbp-21C0h] BYREF
  char v34; // [rsp+7B0h] [rbp-1E00h] BYREF
  char v35; // [rsp+16B0h] [rbp-F00h] BYREF
  int i; // [rsp+25B0h] [rbp+0h] BYREF
  int j; // [rsp+25B4h] [rbp+4h]
  int v38; // [rsp+25B8h] [rbp+8h]
  float *v39; // [rsp+25C0h] [rbp+10h]
  float v40; // [rsp+25C8h] [rbp+18h]
  int v41; // [rsp+25CCh] [rbp+1Ch]
  float v42; // [rsp+25D0h] [rbp+20h]
  float v43; // [rsp+25D4h] [rbp+24h]
  float v44; // [rsp+25D8h] [rbp+28h]
  __int64 v45; // [rsp+25E0h] [rbp+30h]
  float v46; // [rsp+25E8h] [rbp+38h]
  float v47; // [rsp+25ECh] [rbp+3Ch]
  float v48; // [rsp+25F0h] [rbp+40h]
  float v49; // [rsp+25F4h] [rbp+44h]
  float v50; // [rsp+25F8h] [rbp+48h]
  float v51; // [rsp+25FCh] [rbp+4Ch]
  float v52; // [rsp+2600h] [rbp+50h]
  float v53; // [rsp+2604h] [rbp+54h]
  float v54; // [rsp+2608h] [rbp+58h]
  float v55; // [rsp+260Ch] [rbp+5Ch]
  float v56; // [rsp+2610h] [rbp+60h]
  int m; // [rsp+2614h] [rbp+64h]
  int k; // [rsp+2618h] [rbp+68h]
  float v59; // [rsp+261Ch] [rbp+6Ch]
  float v60; // [rsp+2620h] [rbp+70h]
  float v61; // [rsp+2624h] [rbp+74h]
  float v62; // [rsp+2628h] [rbp+78h]
  float v63; // [rsp+262Ch] [rbp+7Ch]
  float v64; // [rsp+2630h] [rbp+80h]
  int v65; // [rsp+2634h] [rbp+84h]
  int v66; // [rsp+2638h] [rbp+88h]
  float v67; // [rsp+263Ch] [rbp+8Ch]
  float v68; // [rsp+2640h] [rbp+90h]
  float v69; // [rsp+2644h] [rbp+94h]
  float v70; // [rsp+2648h] [rbp+98h]
  float v71; // [rsp+264Ch] [rbp+9Ch]
  int v72; // [rsp+2650h] [rbp+A0h]
  float v73; // [rsp+2654h] [rbp+A4h]
  float v74; // [rsp+2658h] [rbp+A8h]
  float v75; // [rsp+265Ch] [rbp+ACh]
  float v76; // [rsp+2660h] [rbp+B0h]
  float v77; // [rsp+2664h] [rbp+B4h]
  float v78; // [rsp+2668h] [rbp+B8h]
  int v79; // [rsp+266Ch] [rbp+BCh]
  float v80; // [rsp+2670h] [rbp+C0h]
  float v81; // [rsp+2674h] [rbp+C4h]
  char *v82; // [rsp+2678h] [rbp+C8h]
  int v83; // [rsp+2680h] [rbp+D0h]
  int v84; // [rsp+2684h] [rbp+D4h]
  float v85; // [rsp+2688h] [rbp+D8h]
  float v86; // [rsp+268Ch] [rbp+DCh]
  float v87; // [rsp+2690h] [rbp+E0h]
  float v88; // [rsp+2694h] [rbp+E4h]
  float v89; // [rsp+2698h] [rbp+E8h]
  float v90; // [rsp+269Ch] [rbp+ECh]
  float v91; // [rsp+26A0h] [rbp+F0h]
  float v92; // [rsp+26A4h] [rbp+F4h]
  float v93; // [rsp+26A8h] [rbp+F8h]
  float v94; // [rsp+26ACh] [rbp+FCh]
  float v95; // [rsp+26B0h] [rbp+100h]
  float v96; // [rsp+26B4h] [rbp+104h]
  float v97; // [rsp+26B8h] [rbp+108h]
  float v98; // [rsp+26BCh] [rbp+10Ch]
  float v99; // [rsp+26C0h] [rbp+110h]
  float v100; // [rsp+26C4h] [rbp+114h]
  float v101; // [rsp+26C8h] [rbp+118h]
  float v102; // [rsp+26CCh] [rbp+11Ch]
  float v103; // [rsp+26D0h] [rbp+120h]
  float v104; // [rsp+26D4h] [rbp+124h]
  float v105; // [rsp+26D8h] [rbp+128h]
  float v106; // [rsp+26DCh] [rbp+12Ch]
  float v107; // [rsp+26E0h] [rbp+130h]
  float v108; // [rsp+26E4h] [rbp+134h]
  float v109; // [rsp+26E8h] [rbp+138h]
  float v110; // [rsp+26ECh] [rbp+13Ch]
  float v111; // [rsp+26F0h] [rbp+140h]
  int v112; // [rsp+26F4h] [rbp+144h]
  float v113; // [rsp+26F8h] [rbp+148h]
  float v114; // [rsp+26FCh] [rbp+14Ch]
  int v115; // [rsp+2700h] [rbp+150h]
  float v116; // [rsp+2704h] [rbp+154h]
  float v117; // [rsp+2708h] [rbp+158h]
  float v118; // [rsp+270Ch] [rbp+15Ch]
  float v119; // [rsp+2710h] [rbp+160h]
  BOOL v120; // [rsp+2714h] [rbp+164h]
  float v121; // [rsp+2718h] [rbp+168h]
  int v122; // [rsp+271Ch] [rbp+16Ch]
  float v123; // [rsp+2720h] [rbp+170h]
  float v124; // [rsp+2724h] [rbp+174h]
  float v125; // [rsp+2728h] [rbp+178h]
  float v126; // [rsp+272Ch] [rbp+17Ch]
  BOOL v127; // [rsp+2730h] [rbp+180h]
  float v128; // [rsp+2734h] [rbp+184h]
  float v129; // [rsp+2738h] [rbp+188h]
  float v130; // [rsp+273Ch] [rbp+18Ch]
  int v131; // [rsp+2740h] [rbp+190h]
  int v132; // [rsp+2744h] [rbp+194h]
  int v133; // [rsp+2748h] [rbp+198h]
  int v134; // [rsp+274Ch] [rbp+19Ch]
  char *v135; // [rsp+2750h] [rbp+1A0h]
  char *v136; // [rsp+2758h] [rbp+1A8h]
  float v137; // [rsp+2760h] [rbp+1B0h]
  float v138; // [rsp+2764h] [rbp+1B4h]
  float v139; // [rsp+2768h] [rbp+1B8h]
  int v140; // [rsp+276Ch] [rbp+1BCh]
  float v141; // [rsp+2770h] [rbp+1C0h]
  float v142; // [rsp+2774h] [rbp+1C4h]
  float v143; // [rsp+2778h] [rbp+1C8h]
  float v144; // [rsp+277Ch] [rbp+1CCh]
  BOOL v145; // [rsp+2780h] [rbp+1D0h]
  float v146; // [rsp+2784h] [rbp+1D4h]
  float v147; // [rsp+2788h] [rbp+1D8h]
  float v148; // [rsp+278Ch] [rbp+1DCh]
  __int64 v149; // [rsp+2790h] [rbp+1E0h]
  __int64 v150; // [rsp+2798h] [rbp+1E8h]
  __int64 v151; // [rsp+27A0h] [rbp+1F0h]
  _DWORD v152[2]; // [rsp+27A8h] [rbp+1F8h] BYREF
  __int64 v153; // [rsp+27B0h] [rbp+200h]
  __int64 v154; // [rsp+27B8h] [rbp+208h]
  __int64 v155; // [rsp+27C0h] [rbp+210h]
  float v156[10]; // [rsp+27C8h] [rbp+218h]
  float v157[40]; // [rsp+27F0h] [rbp+240h]
  float v158[20]; // [rsp+2890h] [rbp+2E0h]
  float v159[20]; // [rsp+28E0h] [rbp+330h]
  _DWORD v160[76]; // [rsp+2930h] [rbp+380h] BYREF
  _BYTE v161[1088]; // [rsp+2A60h] [rbp+4B0h] BYREF
  __int64 v162; // [rsp+2EA0h] [rbp+8F0h]
  int v165; // [rsp+2ED8h] [rbp+928h]

  v165 = a4;
  v38 = 480;
  v66 = 240;
  v149 = a1 + 12;
  v150 = a1 + 972;
  v151 = a1 + 1932;
  v89 = 97.409088;
  v62 = 0.0;
  v41 = 0;
  v59 = 0.0;
  v63 = 0.0;
  if ( !*(_DWORD *)(a1 + 7460) )
  {
    *(_DWORD *)(a1 + 5772) = 240;
    *(_DWORD *)(a1 + 7460) = 1;
  }
  if ( *(_DWORD *)(a1 + 7436) + 1 <= 10 )
    v132 = *(_DWORD *)(a1 + 7436) + 1;
  else
    v132 = 10;
  v75 = 1.0 / (float)v132;
  if ( *(_DWORD *)(a1 + 7436) + 1 <= 25 )
    v133 = *(_DWORD *)(a1 + 7436) + 1;
  else
    v133 = 25;
  v129 = 1.0 / (float)v133;
  if ( *(_DWORD *)(a1 + 7436) + 1 <= 100 )
    v134 = *(_DWORD *)(a1 + 7436) + 1;
  else
    v134 = 100;
  v10 = 1.0 / (float)v134;
  v60 = v10;
  if ( *(int *)(a1 + 7436) <= 1 )
  {
    v10 = 1.0;
    v60 = 1.0;
  }
  if ( *(_DWORD *)(a1 + 8) == 48000 )
  {
    v165 = a4 / 2;
    a5 /= 2;
  }
  else if ( *(_DWORD *)(a1 + 8) == 16000 )
  {
    v165 = 3 * a4 / 2;
    a5 = 3 * a5 / 2;
  }
  v154 = *(_QWORD *)(a2 + 88);
  if ( v165 >= 720 - *(_DWORD *)(a1 + 5772) )
    v83 = 720 - *(_DWORD *)(a1 + 5772);
  else
    v83 = v165;
  sub_1401ED000(
    a10,
    a3,
    a1 + 4LL * *(int *)(a1 + 5772) + 2892,
    (float *)(a1 + 7592),
    v83,
    a5,
    a6,
    a7,
    a8,
    *(_DWORD *)(a1 + 8));
  *(float *)(a1 + 7456) = *(float *)(a1 + 7456) + v10;
  if ( v165 + *(_DWORD *)(a1 + 5772) >= 720 )
  {
    v11 = *(float *)(a1 + 7456);
    v143 = v11;
    v45 = a1 + ((__int64)(int)(*(_DWORD *)(a1 + 7444))++ << 6) + 7604;
    if ( *(int *)(a1 + 7444) >= 100 )
      *(_DWORD *)(a1 + 7444) -= 100;
    v145 = sub_1401E5190(a1 + 2892, 720, 1, a9);
    v12 = alloca(3840);
    v135 = &v35;
    v13 = alloca(3840);
    v39 = (float *)&v34;
    v14 = alloca(960);
    v82 = &v33;
    v15 = alloca(960);
    v136 = &v32;
    for ( i = 0; i < v66; ++i )
    {
      v76 = flt_140282D70[i];
      *(float *)&v135[8 * i] = v76 * *(float *)(a1 + 4LL * i + 2892);
      *(float *)&v135[8 * i + 4] = v76 * *(float *)(a1 + 4LL * (i + v66) + 2892);
      *(float *)&v135[8 * (v38 - i) - 8] = v76 * *(float *)(a1 + 4LL * (v38 - i - 1) + 2892);
      v11 = v76 * *(float *)(a1 + 4LL * (v66 + v38 - i - 1) + 2892);
      *(float *)&v135[8 * (v38 - i) - 4] = v11;
    }
    v153 = a1 + 2892;
    MEMORY[0x1401FC920](a1 + 2892, a1 + 4812);
    v84 = v165 - (720 - *(_DWORD *)(a1 + 5772));
    sub_1401ED000(
      a10,
      a3,
      a1 + 3852,
      (float *)(a1 + 7592),
      v84,
      a5 + 720 - *(_DWORD *)(a1 + 5772),
      a6,
      a7,
      a8,
      *(_DWORD *)(a1 + 8));
    *(float *)(a1 + 7456) = v11;
    *(_DWORD *)(a1 + 5772) = v84 + 240;
    if ( v145 )
    {
      v65 = *(_DWORD *)(a1 + 7444) - 2;
      v65 += v65 < 0 ? 0x64 : 0;
      MEMORY[0x1401FC920](v45, a1 + ((__int64)v65 << 6) + 7604);
    }
    else
    {
      sub_1401A13C0(v154, (__int64)v135, (__int64)v39);
      for ( i = 1; i < v66; ++i )
      {
        v146 = v39[2 * i] + v39[2 * (v38 - i)];
        v147 = v39[2 * i + 1] - v39[2 * (v38 - i) + 1];
        v148 = v39[2 * i + 1] + v39[2 * (v38 - i) + 1];
        v137 = v39[2 * (v38 - i)] - v39[2 * i];
        v85 = 0.15915494 * sub_1401A6B90(v147, v146);
        v86 = v85 - *(float *)(v149 + 4LL * i);
        v87 = v86 - *(float *)(v150 + 4LL * i);
        v90 = 0.15915494 * sub_1401A6B90(v137, v148);
        v91 = v90 - v85;
        v88 = (float)(v90 - v85) - v86;
        v47 = v87 - (float)(int)sub_1401AD3B0();
        v16 = sub_140244390();
        *(float *)&v136[4 * i] = v16;
        v47 = v47 * v47;
        v47 = v47 * v47;
        v44 = v88 - (float)(int)sub_1401AD3B0();
        v155 = i;
        v17 = sub_140244390();
        *(float *)&v136[4 * i] = *(float *)&v136[4 * v155] + v17;
        v44 = v44 * v44;
        v44 = v44 * v44;
        v138 = 0.25 * (float)((float)(*(float *)(v151 + 4LL * i) + v47) + (float)(2.0 * v44));
        *(float *)&v82[4 * i] = (float)(1.0 / (float)((float)((float)(640.0 * v89) * v138) + 1.0)) - 0.015;
        *(float *)&v161[4 * i + 128] = (float)(1.0 / (float)((float)((float)(640.0 * v89) * v44) + 1.0)) - 0.015;
        *(float *)(v149 + 4LL * i) = v90;
        *(float *)(v150 + 4LL * i) = v91;
        *(float *)(v151 + 4LL * i) = v44;
      }
      for ( i = 2; i < v66 - 1; ++i )
      {
        if ( *(float *)&v161[4 * i + 124] <= *(float *)&v161[4 * i + 132] )
          v18 = i + 1;
        else
          v18 = i - 1;
        v92 = *(float *)&v161[4 * v18 + 128];
        if ( v92 <= *(float *)&v161[4 * i + 128] )
        {
          if ( *(float *)&v161[4 * i + 124] <= *(float *)&v161[4 * i + 132] )
            v19 = i + 1;
          else
            v19 = i - 1;
          v93 = *(float *)&v161[4 * v19 + 128];
          v94 = v93;
        }
        else
        {
          v94 = *(float *)&v161[4 * i + 128];
        }
        v95 = v94;
        if ( *(float *)&v82[4 * i] <= (float)(v94 - 0.1) )
          v96 = v95 - 0.1;
        else
          v96 = *(float *)&v82[4 * i];
        *(float *)&v82[4 * i] = 0.89999998 * v96;
      }
      v43 = 0.0;
      v74 = 0.0;
      *(_DWORD *)(v45 + 16) = 0;
      v51 = 0.0;
      v64 = 0.0;
      if ( !*(_DWORD *)(a1 + 7436) )
      {
        for ( j = 0; j < 18; ++j )
        {
          *(_DWORD *)(a1 + 4LL * j + 7008) = 1343554297;
          *(_DWORD *)(a1 + 4LL * j + 7080) = -803929351;
        }
      }
      v54 = 0.0;
      v50 = 0.0;
      v52 = 0.0;
      v97 = 2.0 * *v39;
      v98 = 2.0 * v39[1];
      v52 = (float)(v97 * v97) + (float)(v98 * v98);
      for ( i = 1; i < 4; ++i )
      {
        v139 = (float)((float)((float)(v39[2 * i] * v39[2 * i]) + (float)(v39[2 * (v38 - i)] * v39[2 * (v38 - i)]))
                     + (float)(v39[2 * i + 1] * v39[2 * i + 1]))
             + (float)(v39[2 * (v38 - i) + 1] * v39[2 * (v38 - i) + 1]);
        v52 = v52 + v139;
      }
      v20 = log((float)(v52 + 1.0e-10));
      v157[0] = 0.72134751 * v20;
      for ( j = 0; j < 18; ++j )
      {
        v42 = 0.0;
        v67 = 0.0;
        v78 = 0.0;
        for ( i = dword_140283130[j]; i < dword_140283130[j + 1]; ++i )
        {
          v55 = (float)((float)((float)(v39[2 * i] * v39[2 * i]) + (float)(v39[2 * (v38 - i)] * v39[2 * (v38 - i)]))
                      + (float)(v39[2 * i + 1] * v39[2 * i + 1]))
              + (float)(v39[2 * (v38 - i) + 1] * v39[2 * (v38 - i) + 1]);
          v42 = v42 + v55;
          if ( *(float *)&v82[4 * i] >= 0.0 )
            v99 = *(float *)&v82[4 * i];
          else
            v99 = 0.0;
          v67 = v67 + (float)(v55 * v99);
          v78 = v78 + (float)((float)(v55 * 2.0) * (float)(0.5 - *(float *)&v136[4 * i]));
        }
        if ( v42 >= 1000000000.0 )
        {
          *(_DWORD *)v45 = 0;
          return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v162);
        }
        *(float *)(a1 + 72LL * *(int *)(a1 + 7432) + 5856 + 4LL * j) = v42;
        v51 = v51 + (float)(v78 / (float)(v42 + 1.0e-15));
        v21 = sqrt((float)(v42 + 1.0e-10));
        v50 = v50 + v21;
        v22 = log((float)(v42 + 1.0e-10));
        v157[j + 20] = v22;
        v23 = log((float)(v42 + 1.0e-10));
        v157[j + 1] = 0.72134751 * v23;
        *(float *)(a1 + 72LL * *(int *)(a1 + 7432) + 6432 + 4LL * j) = v157[j + 20];
        if ( !*(_DWORD *)(a1 + 7436) )
        {
          *(float *)(a1 + 4LL * j + 7008) = v157[j + 20];
          *(_DWORD *)(a1 + 4LL * j + 7080) = *(_DWORD *)(a1 + 4LL * j + 7008);
        }
        if ( *(float *)(a1 + 4LL * j + 7080) > *(float *)(a1 + 4LL * j + 7008) + 7.5 )
        {
          if ( (float)(*(float *)(a1 + 4LL * j + 7080) - v157[j + 20]) <= (float)(v157[j + 20]
                                                                                - *(float *)(a1 + 4LL * j + 7008)) )
            *(float *)(a1 + 4LL * j + 7008) = *(float *)(a1 + 4LL * j + 7008) + 0.0099999998;
          else
            *(float *)(a1 + 4LL * j + 7080) = *(float *)(a1 + 4LL * j + 7080) - 0.0099999998;
        }
        if ( v157[j + 20] <= *(float *)(a1 + 4LL * j + 7080) )
        {
          if ( *(float *)(a1 + 4LL * j + 7008) > v157[j + 20] )
          {
            *(float *)(a1 + 4LL * j + 7008) = v157[j + 20];
            if ( *(float *)(a1 + 4LL * j + 7080) <= (float)(*(float *)(a1 + 4LL * j + 7008) + 15.0) )
              v101 = *(float *)(a1 + 4LL * j + 7080);
            else
              v101 = *(float *)(a1 + 4LL * j + 7008) + 15.0;
            *(float *)(a1 + 4LL * j + 7080) = v101;
          }
        }
        else
        {
          *(float *)(a1 + 4LL * j + 7080) = v157[j + 20];
          if ( (float)(*(float *)(a1 + 4LL * j + 7080) - 15.0) <= *(float *)(a1 + 4LL * j + 7008) )
            v100 = *(float *)(a1 + 4LL * j + 7008);
          else
            v100 = *(float *)(a1 + 4LL * j + 7080) - 15.0;
          *(float *)(a1 + 4LL * j + 7008) = v100;
        }
        v54 = v54
            + (float)((float)(v157[j + 20] - *(float *)(a1 + 4LL * j + 7008))
                    / (float)((float)(*(float *)(a1 + 4LL * j + 7080) - *(float *)(a1 + 4LL * j + 7008))
                            + 0.0000099999997));
        v56 = 0.0;
        v77 = 0.0;
        for ( i = 0; i < 8; ++i )
        {
          v24 = sqrt(*(float *)(a1 + 72LL * i + 5856 + 4LL * j));
          v77 = v77 + v24;
          v56 = v56 + *(float *)(a1 + 72LL * i + 5856 + 4LL * j);
        }
        v25 = sqrt((float)(8.0 * v56) + 1.0e-15);
        if ( (float)(v77 / v25) <= 0.99000001 )
        {
          v26 = sqrt((float)(8.0 * v56) + 1.0e-15);
          v102 = v77 / v26;
        }
        else
        {
          v102 = 0.99000001;
        }
        v46 = (float)(v102 * v102) * (float)(v102 * v102);
        v64 = v64 + v46;
        if ( (float)(v67 / (float)(v42 + 1.0e-15)) <= (float)(v46 * *(float *)(a1 + 4LL * j + 5776)) )
          v103 = v46 * *(float *)(a1 + 4LL * j + 5776);
        else
          v103 = v67 / (float)(v42 + 1.0e-15);
        *(float *)&v160[j + 28] = v103;
        v43 = v43 + *(float *)&v160[j + 28];
        if ( j >= 9 )
          v43 = v43 - *(float *)&v160[j + 19];
        if ( v74 <= (float)((float)((float)(0.029999999 * (float)(j - 18)) + 1.0) * v43) )
          v104 = (float)((float)(0.029999999 * (float)(j - 18)) + 1.0) * v43;
        else
          v104 = v74;
        v74 = v104;
        v62 = v62 + (float)(*(float *)&v160[j + 28] * (float)(j - 8));
        *(_DWORD *)(a1 + 4LL * j + 5776) = v160[j + 28];
      }
      v159[0] = v157[0];
      v158[0] = v157[0] - 2.5;
      for ( j = 1; j < 19; ++j )
      {
        v68 = (float)(2.0 * (float)(dword_140283130[j] - dword_140283130[j - 1])) / 4.0;
        if ( v157[j] <= (float)(v159[j - 1] + v68) )
          v105 = v157[j];
        else
          v105 = v159[j - 1] + v68;
        v159[j] = v105;
        if ( (float)(v158[j - 1] - v68) <= (float)(v157[j] - 2.5) )
          v27 = v157[j] - 2.5;
        else
          v27 = v158[j - 1] - v68;
        v106 = v27;
        v158[j] = v27;
      }
      for ( j = 16; j >= 0; --j )
      {
        v69 = (float)(2.0 * (float)(dword_140283130[j + 1] - dword_140283130[j])) / 4.0;
        if ( v159[j] <= (float)(v159[j + 1] + v69) )
          v107 = v159[j];
        else
          v107 = v159[j + 1] + v69;
        v159[j] = v107;
        if ( (float)(v158[j + 1] - v69) <= v158[j] )
          v108 = v158[j];
        else
          v108 = v158[j + 1] - v69;
        v158[j] = v108;
      }
      for ( j = 0; j < 19; ++j )
      {
        if ( (float)(v158[j] - v157[j]) >= 0.0 )
          v109 = v158[j] - v157[j];
        else
          v109 = 0.0;
        if ( (float)(v157[j] - (float)(v159[j] + 2.5)) >= 0.0 )
          v110 = v157[j] - (float)(v159[j] + 2.5);
        else
          v110 = 0.0;
        v111 = v109 + v110;
        if ( (int)floor((float)(64.0 * (float)(v109 + v110)) + 0.5) <= 255 )
          v112 = (int)floor((float)(64.0 * v111) + 0.5);
        else
          v112 = 255;
        *(_BYTE *)(v45 + j + 44) = v112;
      }
      for ( i = 0; i < 8; ++i )
      {
        v71 = 9.9999999e14;
        for ( k = 0; k < 8; ++k )
        {
          v70 = 0.0;
          for ( m = 0; m < 18; ++m )
          {
            v113 = *(float *)(a1 + 72LL * i + 6432 + 4LL * m) - *(float *)(a1 + 72LL * k + 6432 + 4LL * m);
            v70 = v70 + (float)(v113 * v113);
          }
          if ( k != i )
          {
            if ( v70 <= v71 )
              v114 = v70;
            else
              v114 = v71;
            v71 = v114;
          }
        }
        v63 = v63 + v71;
      }
      v28 = sqrt((float)((float)(v63 / 8.0) / 18.0));
      v63 = v28;
      v61 = 0.0;
      v41 = 0;
      v59 = 0.0;
      if ( a9 - 8 >= 0 )
        v115 = a9 - 8;
      else
        v115 = 0;
      v140 = 1;
      v48 = 0.00056999997 / (float)(1 << v115);
      v48 = v48 * v48;
      v73 = 0.0;
      v53 = 0.0;
      for ( j = 0; j < 18; ++j )
      {
        v40 = 0.0;
        v72 = dword_140283130[j];
        v79 = dword_140283130[j + 1];
        for ( i = v72; i < v79; ++i )
        {
          v141 = (float)((float)((float)(v39[2 * i] * v39[2 * i]) + (float)(v39[2 * (v38 - i)] * v39[2 * (v38 - i)]))
                       + (float)(v39[2 * i + 1] * v39[2 * i + 1]))
               + (float)(v39[2 * (v38 - i) + 1] * v39[2 * (v38 - i) + 1]);
          v40 = v40 + v141;
        }
        if ( v59 <= v40 )
          v116 = v40;
        else
          v116 = v59;
        v59 = v116;
        if ( v72 >= 64 )
          v53 = v53 + v40;
        else
          v73 = v73 + v40;
        if ( (float)((float)(1.0 - v60) * *(float *)(a1 + 4LL * j + 7152)) <= v40 )
          v117 = v40;
        else
          v117 = (float)(1.0 - v60) * *(float *)(a1 + 4LL * j + 7152);
        *(float *)(a1 + 4LL * j + 7152) = v117;
        if ( v40 <= *(float *)(a1 + 4LL * j + 7152) )
          v118 = *(float *)(a1 + 4LL * j + 7152);
        else
          v118 = v40;
        v142 = v118;
        if ( (float)(v40 * 1000000000.0) > v59
          && (v142 > (float)((float)(3.0 * v48) * (float)(v79 - v72)) || v40 > (float)(v48 * (float)(v79 - v72))) )
        {
          v41 = j + 1;
        }
        if ( *(_DWORD *)(a1 + 5852) < j + 1 )
          v119 = 0.050000001;
        else
          v119 = 0.0099999998;
        v120 = (float)(v119 * v61) > v40;
        v160[j + 56] = v120;
        if ( (float)(0.050000001 * v61) <= v40 )
          v121 = v40;
        else
          v121 = 0.050000001 * v61;
        v61 = v121;
      }
      if ( *(_DWORD *)(a1 + 8) == 48000 )
      {
        v49 = v143 * 0.00027777778;
        if ( *(_DWORD *)(a1 + 5852) == 20 )
          *(float *)&v122 = 10.0;
        else
          *(float *)&v122 = 30.0;
        v125 = *(float *)&v122;
        v53 = v53 + v49;
        if ( (float)((float)(1.0 - v60) * *(float *)(a1 + 4LL * j + 7152)) <= v49 )
          v123 = v49;
        else
          v123 = (float)(1.0 - v60) * *(float *)(a1 + 4LL * j + 7152);
        *(float *)(a1 + 4LL * j + 7152) = v123;
        if ( v49 <= *(float *)(a1 + 4LL * j + 7152) )
          v124 = *(float *)(a1 + 4LL * j + 7152);
        else
          v124 = v49;
        v144 = v124;
        if ( v124 > (float)((float)((float)(3.0 * v125) * v48) * 160.0) || v49 > (float)((float)(v125 * v48) * 160.0) )
          v41 = 20;
        if ( *(_DWORD *)(a1 + 5852) == 20 )
          v126 = 0.0099999998;
        else
          v126 = 0.050000001;
        v127 = (float)(v126 * v61) > v49;
        v160[j + 56] = v127;
      }
      if ( v53 <= v73 )
        *(_DWORD *)(v45 + 40) = 1065353216;
      else
        *(float *)(v45 + 40) = v73 / v53;
      if ( v41 == 20 && v160[74] )
      {
        v41 -= 2;
      }
      else if ( v41 > 0 && v41 <= 18 && v160[v41 + 55] )
      {
        --v41;
      }
      if ( *(int *)(a1 + 7436) <= 2 )
        v41 = 20;
      v29 = log10(v50);
      v50 = 20.0 * v29;
      if ( (float)(*(float *)(a1 + 7424) - 0.003) <= (float)(20.0 * v29) )
        v128 = v50;
      else
        v128 = *(float *)(a1 + 7424) - 0.003;
      *(float *)(a1 + 7424) = v128;
      *(float *)(a1 + 7428) = *(float *)(a1 + 7428) * (float)(1.0 - v129);
      if ( (float)(*(float *)(a1 + 7424) - 30.0) > v50 )
        *(float *)(a1 + 7428) = *(float *)(a1 + 7428) + v129;
      for ( i = 0; i < 8; ++i )
      {
        v80 = 0.0;
        for ( j = 0; j < 16; ++j )
          v80 = v80 + (float)(flt_140282B70[16 * i + j] * v157[j + 20]);
        v156[i] = v80;
      }
      for ( i = 0; i < 8; ++i )
      {
        v81 = 0.0;
        for ( j = 0; j < 16; ++j )
          v81 = v81
              + (float)((float)(flt_140282B70[16 * i + j] * 0.5)
                      * (float)(*(float *)(a1 + 4LL * j + 7080) + *(float *)(a1 + 4LL * j + 7008)));
        *(float *)&v160[i + 48] = v81;
      }
      v64 = v64 / 18.0;
      v54 = v54 / 18.0;
      if ( *(int *)(a1 + 7436) < 10 )
        v54 = 0.5;
      v51 = v51 / 18.0;
      *(float *)(v45 + 16) = v51 + (float)((float)(1.0 - v51) * v54);
      v43 = v74 / 9.0;
      if ( (float)(v74 / 9.0) <= (float)(*(float *)(a1 + 5848) * 0.80000001) )
        v130 = *(float *)(a1 + 5848) * 0.80000001;
      else
        v130 = v43;
      v43 = v130;
      *(float *)(a1 + 5848) = v130;
      v62 = v62 / 64.0;
      *(float *)(v45 + 8) = v62;
      *(_DWORD *)(a1 + 7432) = (*(_DWORD *)(a1 + 7432) + 1) % 8;
      if ( *(_DWORD *)(a1 + 7436) + 1 >= 10000 )
        v131 = 10000;
      else
        v131 = *(_DWORD *)(a1 + 7436) + 1;
      *(_DWORD *)(a1 + 7436) = v131;
      *(float *)(v45 + 4) = v43;
      for ( i = 0; i < 4; ++i )
        *(float *)&v160[i] = (float)((float)((float)(-0.12299 * (float)(v156[i] + *(float *)(a1 + 4LL * (i + 24) + 7228)))
                                           + (float)(0.49195001
                                                   * (float)(*(float *)(a1 + 4LL * i + 7228)
                                                           + *(float *)(a1 + 4LL * (i + 16) + 7228))))
                                   + (float)(0.69692999 * *(float *)(a1 + 4LL * (i + 8) + 7228)))
                           - (float)(1.4349 * *(float *)(a1 + 4LL * i + 7356));
      for ( i = 0; i < 4; ++i )
        *(float *)(a1 + 4LL * i + 7356) = (float)((float)(1.0 - v75) * *(float *)(a1 + 4LL * i + 7356))
                                        + (float)(v75 * v156[i]);
      for ( i = 0; i < 4; ++i )
        *(float *)&v160[i + 4] = (float)(0.63246 * (float)(v156[i] - *(float *)(a1 + 4LL * (i + 24) + 7228)))
                               + (float)(0.31623
                                       * (float)(*(float *)(a1 + 4LL * i + 7228) - *(float *)(a1 + 4LL * (i + 16) + 7228)));
      for ( i = 0; i < 3; ++i )
        *(float *)&v160[i + 8] = (float)((float)(0.53451997 * (float)(v156[i] + *(float *)(a1 + 4LL * (i + 24) + 7228)))
                                       - (float)(0.26725999
                                               * (float)(*(float *)(a1 + 4LL * i + 7228)
                                                       + *(float *)(a1 + 4LL * (i + 16) + 7228))))
                               - (float)(0.53451997 * *(float *)(a1 + 4LL * (i + 8) + 7228));
      if ( *(int *)(a1 + 7436) > 5 )
      {
        for ( i = 0; i < 9; ++i )
          *(float *)(a1 + 4LL * i + 7388) = (float)((float)(1.0 - v75) * *(float *)(a1 + 4LL * i + 7388))
                                          + (float)((float)(v75 * *(float *)&v160[i]) * *(float *)&v160[i]);
      }
      for ( i = 0; i < 4; ++i )
        *(float *)&v160[i] = v156[i] - *(float *)&v160[i + 48];
      for ( i = 0; i < 8; ++i )
      {
        *(_DWORD *)(a1 + 4LL * (i + 24) + 7228) = *(_DWORD *)(a1 + 4LL * (i + 16) + 7228);
        *(_DWORD *)(a1 + 4LL * (i + 16) + 7228) = *(_DWORD *)(a1 + 4LL * (i + 8) + 7228);
        *(_DWORD *)(a1 + 4LL * (i + 8) + 7228) = *(_DWORD *)(a1 + 4LL * i + 7228);
        *(float *)(a1 + 4LL * i + 7228) = v156[i];
      }
      for ( i = 0; i < 9; ++i )
      {
        v30 = sqrt(*(float *)(a1 + 4LL * i + 7388));
        *(float *)&v160[i + 11] = v30 - flt_140283180[i];
      }
      *(float *)&v160[18] = v63 - 0.77999997;
      *(float *)&v160[20] = *(float *)(v45 + 4) - 0.154723;
      *(float *)&v160[21] = *(float *)(v45 + 16) - 0.72464299;
      *(float *)&v160[22] = v64 - 0.74371701;
      *(float *)&v160[23] = *(float *)(v45 + 8) + 0.069215998;
      *(float *)&v160[24] = *(float *)(a1 + 7428) - 0.067929998;
      sub_1401EB890((__int64)&off_140282AF8, (__int64)v161, (__int64)v160);
      sub_1401EBA20((__int64)&off_140282B18, a1 + 7464, (__int64)v161);
      sub_1401EB890((__int64)&off_140282B38, (__int64)v152, a1 + 7464);
      *(_DWORD *)(v45 + 36) = v152[1];
      *(_DWORD *)(v45 + 20) = v152[0];
      *(_DWORD *)(v45 + 32) = v41;
      *(_DWORD *)(a1 + 5852) = v41;
      *(float *)(v45 + 12) = v51;
      *(_DWORD *)v45 = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 5772) += v165;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v162);
}

