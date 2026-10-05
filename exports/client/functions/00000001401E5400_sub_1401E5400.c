/* Address: 0x1401e5400 | Name: sub_1401E5400 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1401E5400(
        int *a1,
        __int64 a2,
        int a3,
        __m128i *a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void (__fastcall *a12)(__int64, int *, _QWORD, _QWORD, int, int, int),
        int a13)
{
  float v13; // xmm0_4
  int v14; // ecx
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  int v17; // eax
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  float v20; // xmm0_4
  int v21; // eax
  unsigned __int64 v22; // rcx
  void *v23; // rsp
  unsigned __int64 v24; // rax
  const __m128i *v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  const __m128i *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __m128i *v32; // r8
  __m128i *v33; // r8
  int v34; // eax
  __int32 v35; // eax
  __m128i v37; // [rsp+60h] [rbp+0h] BYREF
  int v38; // [rsp+70h] [rbp+10h]
  int v39; // [rsp+74h] [rbp+14h]
  BOOL v40; // [rsp+78h] [rbp+18h]
  _DWORD *v41; // [rsp+80h] [rbp+20h]
  int v42; // [rsp+88h] [rbp+28h]
  int v43; // [rsp+8Ch] [rbp+2Ch]
  int v44; // [rsp+90h] [rbp+30h]
  int v45; // [rsp+94h] [rbp+34h]
  int v46; // [rsp+98h] [rbp+38h]
  int v47; // [rsp+9Ch] [rbp+3Ch]
  const __m128i *v48; // [rsp+A0h] [rbp+40h]
  BOOL v49; // [rsp+A8h] [rbp+48h]
  __int16 v50; // [rsp+ACh] [rbp+4Ch]
  int v51; // [rsp+B0h] [rbp+50h]
  int v52; // [rsp+B4h] [rbp+54h]
  int i; // [rsp+B8h] [rbp+58h]
  __m128i v54; // [rsp+BCh] [rbp+5Ch] BYREF
  int v55; // [rsp+CCh] [rbp+6Ch]
  int v56; // [rsp+D0h] [rbp+70h]
  float v57; // [rsp+D4h] [rbp+74h]
  int v58; // [rsp+D8h] [rbp+78h]
  signed int v59; // [rsp+DCh] [rbp+7Ch]
  int v60; // [rsp+E0h] [rbp+80h]
  int v61; // [rsp+E4h] [rbp+84h]
  unsigned int v62; // [rsp+E8h] [rbp+88h]
  int v63; // [rsp+ECh] [rbp+8Ch]
  float v64; // [rsp+F0h] [rbp+90h]
  int v65; // [rsp+F4h] [rbp+94h]
  int v66; // [rsp+F8h] [rbp+98h]
  int v67; // [rsp+FCh] [rbp+9Ch]
  float v68; // [rsp+100h] [rbp+A0h]
  __m128i v69; // [rsp+108h] [rbp+A8h] BYREF
  float v70; // [rsp+118h] [rbp+B8h]
  int v71; // [rsp+11Ch] [rbp+BCh]
  float v72; // [rsp+120h] [rbp+C0h]
  float v73; // [rsp+124h] [rbp+C4h]
  int v74; // [rsp+128h] [rbp+C8h]
  int v75; // [rsp+12Ch] [rbp+CCh]
  float v76; // [rsp+130h] [rbp+D0h]
  float v77; // [rsp+134h] [rbp+D4h]
  __int32 v78; // [rsp+138h] [rbp+D8h]
  int v79; // [rsp+13Ch] [rbp+DCh]
  int v80; // [rsp+140h] [rbp+E0h]
  int v81; // [rsp+144h] [rbp+E4h]
  unsigned int v82; // [rsp+148h] [rbp+E8h]
  float v83; // [rsp+14Ch] [rbp+ECh]
  int v84; // [rsp+150h] [rbp+F0h]
  int v85; // [rsp+154h] [rbp+F4h]
  __int32 v86; // [rsp+158h] [rbp+F8h]
  int v87; // [rsp+15Ch] [rbp+FCh]
  BOOL v88; // [rsp+160h] [rbp+100h]
  int v89; // [rsp+164h] [rbp+104h]
  __int32 v90; // [rsp+168h] [rbp+108h]
  __int32 v91; // [rsp+16Ch] [rbp+10Ch]
  int v92; // [rsp+170h] [rbp+110h]
  int v93; // [rsp+174h] [rbp+114h]
  int v94; // [rsp+178h] [rbp+118h]
  BOOL v95; // [rsp+17Ch] [rbp+11Ch]
  int v96; // [rsp+180h] [rbp+120h]
  int v97; // [rsp+184h] [rbp+124h]
  int v98; // [rsp+188h] [rbp+128h]
  BOOL v99; // [rsp+18Ch] [rbp+12Ch]
  int v100; // [rsp+190h] [rbp+130h]
  int v101; // [rsp+194h] [rbp+134h]
  __int32 v102; // [rsp+198h] [rbp+138h]
  int v103; // [rsp+19Ch] [rbp+13Ch]
  int v104; // [rsp+1A0h] [rbp+140h]
  int v105; // [rsp+1A4h] [rbp+144h]
  unsigned int v106; // [rsp+1A8h] [rbp+148h]
  BOOL v107; // [rsp+1ACh] [rbp+14Ch]
  BOOL v108; // [rsp+1B0h] [rbp+150h]
  float v109; // [rsp+1B4h] [rbp+154h]
  int v110; // [rsp+1B8h] [rbp+158h]
  float v111; // [rsp+1BCh] [rbp+15Ch]
  int v112; // [rsp+1C0h] [rbp+160h]
  __int32 v113; // [rsp+1C4h] [rbp+164h]
  int v114; // [rsp+1C8h] [rbp+168h]
  int v115; // [rsp+1CCh] [rbp+16Ch]
  BOOL v116; // [rsp+1D0h] [rbp+170h]
  int v117; // [rsp+1D4h] [rbp+174h]
  BOOL v118; // [rsp+1D8h] [rbp+178h]
  BOOL v119; // [rsp+1DCh] [rbp+17Ch]
  BOOL v120; // [rsp+1E0h] [rbp+180h]
  float v121; // [rsp+1E4h] [rbp+184h]
  BOOL v122; // [rsp+1E8h] [rbp+188h]
  __int32 v123; // [rsp+1ECh] [rbp+18Ch]
  __int32 v124; // [rsp+1F0h] [rbp+190h]
  __int32 v125; // [rsp+1F4h] [rbp+194h]
  __int32 v126; // [rsp+1F8h] [rbp+198h]
  unsigned int v127; // [rsp+1FCh] [rbp+19Ch]
  int v128; // [rsp+200h] [rbp+1A0h]
  __int32 v129; // [rsp+204h] [rbp+1A4h]
  const __m128i *v130; // [rsp+208h] [rbp+1A8h]
  const __m128i *v131; // [rsp+210h] [rbp+1B0h]
  __m128i v132; // [rsp+218h] [rbp+1B8h] BYREF
  __int32 v133; // [rsp+228h] [rbp+1C8h]
  int v134; // [rsp+22Ch] [rbp+1CCh]
  int v135; // [rsp+230h] [rbp+1D0h]
  int v136; // [rsp+234h] [rbp+1D4h]
  int v137; // [rsp+238h] [rbp+1D8h]
  int v138; // [rsp+23Ch] [rbp+1DCh]
  int v139; // [rsp+240h] [rbp+1E0h] BYREF
  int v140; // [rsp+244h] [rbp+1E4h] BYREF
  __int32 v141; // [rsp+248h] [rbp+1E8h]
  __int32 v142; // [rsp+24Ch] [rbp+1ECh]
  int v143; // [rsp+250h] [rbp+1F0h]
  int v144; // [rsp+254h] [rbp+1F4h]
  char v145[4]; // [rsp+258h] [rbp+1F8h] BYREF
  char v146[4]; // [rsp+25Ch] [rbp+1FCh] BYREF
  float v147; // [rsp+260h] [rbp+200h]
  int v148; // [rsp+264h] [rbp+204h]
  int v149; // [rsp+268h] [rbp+208h]
  int v150; // [rsp+26Ch] [rbp+20Ch]
  _DWORD *v151; // [rsp+270h] [rbp+210h]
  __m128i *v152; // [rsp+278h] [rbp+218h]
  _DWORD *v153; // [rsp+280h] [rbp+220h]
  unsigned __int8 *v154[4]; // [rsp+288h] [rbp+228h] BYREF
  int v155; // [rsp+2A8h] [rbp+248h]
  __int64 v156; // [rsp+2C0h] [rbp+260h]
  int *v157; // [rsp+2C8h] [rbp+268h]
  __int64 v158; // [rsp+2D0h] [rbp+270h]
  __int64 v159; // [rsp+2D8h] [rbp+278h]
  int *v160; // [rsp+2E0h] [rbp+280h]
  __m128i *v161; // [rsp+2E8h] [rbp+288h]
  int *v162; // [rsp+2F0h] [rbp+290h]
  char *v163; // [rsp+2F8h] [rbp+298h]
  __m128i *v164; // [rsp+300h] [rbp+2A0h]
  __m128i v165; // [rsp+310h] [rbp+2B0h] BYREF
  __int32 v166; // [rsp+324h] [rbp+2C4h]
  __int32 v167; // [rsp+328h] [rbp+2C8h]
  __int32 v168; // [rsp+32Ch] [rbp+2CCh]
  int v169; // [rsp+330h] [rbp+2D0h]
  float v170; // [rsp+334h] [rbp+2D4h]
  _DWORD v171[36]; // [rsp+350h] [rbp+2F0h] BYREF
  __int64 v172; // [rsp+3E0h] [rbp+380h]
  __int8 *v177; // [rsp+418h] [rbp+3B8h]
  __m128i *v178; // [rsp+418h] [rbp+3B8h]
  unsigned int v179; // [rsp+428h] [rbp+3C8h]

  v37.m128i_i32[0] = 0;
  v67 = 0;
  v127 = 0;
  v40 = 0;
  v37.m128i_i32[3] = 0;
  v49 = 0;
  v80 = 0;
  v54.m128i_i32[0] = 0;
  v75 = -1;
  v104 = -1;
  v54.m128i_i32[3] = 0;
  if ( a5 <= 1276 )
    v129 = a5;
  else
    v129 = 1276;
  v37.m128i_i32[1] = v129;
  a1[4535] = 0;
  if ( a3 <= 0 || v37.m128i_i32[1] <= 0 || v37.m128i_i32[1] == 1 && a1[36] == 10 * a3 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v172);
  v130 = (const __m128i *)((char *)a1 + a1[1]);
  v41 = (int *)((char *)a1 + *a1);
  if ( a1[27] == 2051 )
    v84 = 0;
  else
    v84 = a1[29];
  if ( a6 >= a1[42] )
    v82 = a1[42];
  else
    v82 = a6;
  v179 = v82;
  sub_140199190(v41, 10015, &v69);
  v165.m128i_i32[0] = 0;
  if ( a1[11] < 7 || a1[36] < 16000 )
  {
    if ( a1[1912] )
      sub_1401EBF00((__int64)(a1 + 47));
  }
  else
  {
    v54.m128i_i32[3] = sub_1401E5190(a2, a3, a1[28], v179);
    v75 = a1[1909];
    v104 = a1[1910];
    sub_1401ECBA0(a1 + 47, v69.m128i_i64[0], a7, a8, a3, a9, a10, a11, a1[36], v179, a12, (__int64)&v165);
    if ( !v54.m128i_i32[3] && v170 > 0.1 )
    {
      v147 = 0.99900001 * *((float *)a1 + 4533);
      v13 = sub_1401F5870(a2, a3, a1[28]);
      if ( v147 <= v13 )
        v83 = sub_1401F5870(a2, a3, a1[28]);
      else
        v83 = 0.99900001 * *((float *)a1 + 4533);
      *((float *)a1 + 4533) = v83;
    }
  }
  if ( !v54.m128i_i32[3] )
    a1[35] = -1;
  a1[4531] = 0;
  if ( v165.m128i_i32[0] )
  {
    if ( a1[31] == -1000 )
    {
      if ( a1[3557] )
      {
        if ( a1[3557] == 1002 )
          v69.m128i_i32[2] = v168;
        else
          v69.m128i_i32[2] = v167;
      }
      else
      {
        v69.m128i_i32[2] = v166;
      }
      a1[35] = (int)floor((float)(100.0 * (float)(1.0 - *(float *)&v69.m128i_i32[2])) + 0.5);
    }
    v63 = v169;
    if ( v169 > 12 )
    {
      if ( v63 > 14 )
      {
        if ( v63 > 16 )
        {
          if ( v63 > 18 )
            a1[4531] = 1105;
          else
            a1[4531] = 1104;
        }
        else
        {
          a1[4531] = 1103;
        }
      }
      else
      {
        a1[4531] = 1102;
      }
    }
    else
    {
      a1[4531] = 1101;
    }
  }
  if ( a1[28] != 2 || a1[30] == 1 )
    v57 = 0.0;
  else
    v57 = sub_1401F4BB0(a2, a3, a1[36], (float *)a1 + 3566);
  v39 = v84;
  a1[40] = sub_1401F4B00(a1, (unsigned int)a3, v37.m128i_u32[1]);
  v38 = a1[36] / a3;
  if ( !a1[37] )
  {
    v55 = 12 * a1[36] / a3;
    v148 = 12 * a1[40] / 8;
    if ( (v55 / 2 + v148) / v55 >= v37.m128i_i32[1] )
    {
      v85 = v37.m128i_i32[1];
    }
    else
    {
      v150 = 12 * a1[40] / 8;
      v85 = (v55 / 2 + v150) / v55;
    }
    v69.m128i_i32[3] = v85;
    a1[40] = 8 * v55 * v85 / 12;
    if ( v69.m128i_i32[3] >= 1 )
      v86 = v69.m128i_i32[3];
    else
      v86 = 1;
    v37.m128i_i32[1] = v86;
  }
  if ( v37.m128i_i32[1] < 3 || a1[40] < 24 * v38 || v38 < 50 && (v38 * v37.m128i_i32[1] < 300 || a1[40] < 2400) )
  {
    v46 = a1[3556];
    if ( a1[3560] )
      v87 = a1[3560];
    else
      v87 = 1101;
    v51 = v87;
    v54.m128i_i32[1] = 0;
    v92 = 0;
    if ( !v46 )
      v46 = 1000;
    if ( v38 > 100 )
      v46 = 1002;
    if ( v38 == 25 && v46 != 1000 )
    {
      v38 = 50;
      v54.m128i_i32[1] = 1;
    }
    if ( v38 <= 16 )
    {
      if ( a5 == 1 || v46 == 1000 && v38 != 10 )
      {
        v46 = 1000;
        v88 = v38 <= 12;
        v54.m128i_i32[1] = v88;
        if ( v38 == 12 )
          v89 = 25;
        else
          v89 = 16;
        v38 = v89;
      }
      else
      {
        v92 = 50 / v38;
        v38 = 50;
        v54.m128i_i32[1] = 3;
      }
    }
    if ( v46 == 1000 && v51 > 1103 )
    {
      v51 = 1103;
    }
    else if ( v46 == 1002 && v51 == 1102 )
    {
      v51 = 1101;
    }
    else if ( v46 == 1001 && v51 <= 1104 )
    {
      v51 = 1104;
    }
    a4->m128i_i8[0] = sub_1401F3E60(v46, v38, v51, a1[3548]);
    a4->m128i_i8[0] |= v54.m128i_u8[4];
    if ( v54.m128i_i32[1] > 1 )
      v90 = 2;
    else
      v90 = 1;
    v37.m128i_i32[0] = v90;
    if ( v37.m128i_i32[1] <= v90 )
      v91 = v37.m128i_i32[0];
    else
      v91 = v37.m128i_i32[1];
    v37.m128i_i32[1] = v91;
    if ( v54.m128i_i32[1] == 3 )
      a4->m128i_i8[1] = v92;
    if ( !a1[37] )
    {
      if ( (unsigned int)sub_1401E3980(a4, v37.m128i_i32[0], v37.m128i_i32[1]) )
        v37.m128i_i32[0] = -3;
      else
        v37.m128i_i32[0] = v37.m128i_i32[1];
    }
    return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v172);
  }
  v113 = 8 * v37.m128i_i32[1] * v38;
  v43 = sub_1401F5760(a1[40], a1[28], a1[36] / a3, a1[37], 0, a1[11], a1[10]);
  if ( a1[31] == 3001 )
  {
    v42 = 127;
  }
  else if ( a1[31] == 3002 )
  {
    v42 = 0;
  }
  else if ( a1[35] < 0 )
  {
    if ( a1[27] == 2048 )
      v42 = 115;
    else
      v42 = 48;
  }
  else
  {
    v42 = (327 * a1[35]) >> 8;
    if ( a1[27] == 2049 )
    {
      if ( v42 >= 115 )
        v93 = 115;
      else
        v93 = v42;
      v42 = v93;
    }
  }
  if ( a1[30] == -1000 || a1[28] != 2 )
  {
    if ( a1[28] == 2 )
    {
      v56 = ((2000 * v42 * v42) >> 14) + 17000;
      if ( a1[3548] == 2 )
        v56 -= 1000;
      else
        v56 += 1000;
      if ( v43 <= v56 )
        v94 = 1;
      else
        v94 = 2;
      a1[3548] = v94;
    }
    else
    {
      a1[3548] = a1[28];
    }
  }
  else
  {
    a1[3548] = a1[30];
  }
  v43 = sub_1401F5760(a1[40], a1[3548], a1[36] / a3, a1[37], 0, a1[11], a1[10]);
  v95 = a1[46] && !v165.m128i_i32[0] && !v54.m128i_i32[3];
  a1[14] = v95;
  if ( a1[27] == 2051 )
  {
    a1[3556] = 1002;
  }
  else if ( a1[34] == -1000 )
  {
    v132.m128i_i32[2] = (int)(float)((float)((float)(1.0 - v57) * (float)unk_14027BCF8)
                                   + (float)(v57 * (float)unk_14027BD00));
    v96 = (int)(float)((float)((float)(1.0 - v57) * (float)unk_14027BD04) + (float)(v57 * (float)unk_14027BD04));
    v52 = (((v132.m128i_i32[2] - v96) * v42 * v42) >> 14) + v96;
    if ( a1[27] == 2048 )
      v52 += 8000;
    if ( a1[3557] == 1002 )
    {
      v52 -= 4000;
    }
    else if ( a1[3557] > 0 )
    {
      v52 += 4000;
    }
    if ( v43 < v52 )
      v97 = 1000;
    else
      v97 = 1002;
    a1[3556] = v97;
    if ( a1[12] && a1[10] > (128 - v42) >> 4 )
      a1[3556] = 1000;
    if ( a1[14] && v42 > 100 )
      a1[3556] = 1000;
    if ( v38 <= 50 )
      v98 = 6000;
    else
      v98 = 9000;
    if ( v37.m128i_i32[1] < a3 * v98 / (8 * a1[36]) )
      a1[3556] = 1002;
  }
  else
  {
    a1[3556] = a1[34];
  }
  if ( a1[3556] != 1002 && a3 < a1[36] / 100 )
    a1[3556] = 1002;
  if ( a1[44] )
    a1[3556] = 1002;
  if ( a1[3557] > 0 && (a1[3556] != 1002 && a1[3557] == 1002 || a1[3556] == 1002 && a1[3557] != 1002) )
  {
    v40 = 1;
    v99 = a1[3556] != 1002;
    v49 = v99;
    if ( !v99 )
    {
      if ( a3 < a1[36] / 100 )
      {
        v40 = 0;
      }
      else
      {
        a1[3556] = a1[3557];
        v80 = 1;
      }
    }
  }
  if ( a1[3548] != 1 || a1[3558] != 2 || a1[17] || a1[3556] == 1002 || a1[3557] == 1002 )
  {
    a1[17] = 0;
  }
  else
  {
    a1[17] = 1;
    a1[3548] = 2;
  }
  v43 = sub_1401F5760(a1[40], a1[3548], a1[36] / a3, a1[37], a1[3556], a1[11], a1[10]);
  if ( a1[3556] != 1002 && a1[3557] == 1002 )
  {
    sub_1401CAAD0((__int64)v130, a1[45], v171);
    v67 = 1;
  }
  if ( a1[3556] == 1002 || a1[3563] || a1[21] )
  {
    v47 = 1105;
    if ( a1[28] != 2 || a1[30] == 1 )
    {
      v153 = &unk_14027BC78;
      v151 = &unk_14027BC98;
    }
    else
    {
      v153 = &unk_14027BCB8;
      v151 = &unk_14027BCD8;
    }
    for ( v37.m128i_i32[2] = 0; v37.m128i_i32[2] < 8; ++v37.m128i_i32[2] )
      v171[v37.m128i_i32[2] + 28] = v151[v37.m128i_i32[2]]
                                  + (((v153[v37.m128i_i32[2]] - v151[v37.m128i_i32[2]]) * v42 * v42) >> 14);
    do
    {
      v58 = v171[2 * v47 - 2176];
      v100 = v171[2 * v47 - 2175];
      if ( !a1[3563] )
      {
        if ( a1[3561] < v47 )
          v58 += v100;
        else
          v58 -= v100;
      }
      if ( v43 >= v58 )
        break;
      --v47;
    }
    while ( v47 > 1101 );
    if ( v47 == 1102 )
      v47 = 1103;
    a1[3561] = v47;
    a1[3560] = v47;
    if ( !a1[3563] && a1[3556] != 1002 && !a1[22] && a1[3560] > 1103 )
      a1[3560] = 1103;
  }
  if ( a1[3560] > a1[33] )
    a1[3560] = a1[33];
  if ( a1[32] != -1000 )
    a1[3560] = a1[32];
  if ( a1[3556] != 1002 && v113 < 15000 )
  {
    if ( a1[3560] >= 1103 )
      v101 = 1103;
    else
      v101 = a1[3560];
    a1[3560] = v101;
  }
  if ( a1[36] <= 24000 && a1[3560] > 1104 )
    a1[3560] = 1104;
  if ( a1[36] <= 16000 && a1[3560] > 1103 )
    a1[3560] = 1103;
  if ( a1[36] <= 12000 && a1[3560] > 1102 )
    a1[3560] = 1102;
  if ( a1[36] <= 8000 && a1[3560] > 1101 )
    a1[3560] = 1101;
  if ( a1[4531] && a1[32] == -1000 )
  {
    if ( v43 <= 18000 * a1[3548] && a1[3556] == 1002 )
    {
      v54.m128i_i32[2] = 1101;
    }
    else if ( v43 <= 24000 * a1[3548] && a1[3556] == 1002 )
    {
      v54.m128i_i32[2] = 1102;
    }
    else if ( v43 > 30000 * a1[3548] )
    {
      if ( v43 > 44000 * a1[3548] )
        v54.m128i_i32[2] = 1105;
      else
        v54.m128i_i32[2] = 1104;
    }
    else
    {
      v54.m128i_i32[2] = 1103;
    }
    if ( a1[4531] <= v54.m128i_i32[2] )
      v102 = v54.m128i_i32[2];
    else
      v102 = a1[4531];
    a1[4531] = v102;
    if ( a1[3560] >= a1[4531] )
      v103 = a1[4531];
    else
      v103 = a1[3560];
    a1[3560] = v103;
  }
  a1[13] = sub_1401F53F0(a1[12], a1[10], a1[13], a1[3556], a1 + 3560, v43);
  sub_140199190(v41, 4036, (__m128i *)v179);
  if ( a1[3556] == 1002 && a1[3560] == 1102 )
    a1[3560] = 1103;
  if ( a1[44] )
    a1[3560] = 1101;
  v44 = a1[3560];
  if ( a1[3556] == 1000 && v44 > 1103 )
    a1[3556] = 1001;
  if ( a1[3556] == 1001 && v44 <= 1103 )
    a1[3556] = 1000;
  if ( a3 > a1[36] / 50 && a1[3556] != 1000 || a3 > 3 * a1[36] / 50 )
  {
    if ( a1[3556] == 1000 )
    {
      if ( a3 == 2 * a1[36] / 25 )
      {
        v59 = a1[36] / 25;
      }
      else if ( a3 == 3 * a1[36] / 25 )
      {
        v59 = 3 * a1[36] / 50;
      }
      else
      {
        v59 = a1[36] / 50;
      }
    }
    else
    {
      v59 = a1[36] / 50;
    }
    v132.m128i_i32[3] = a3 / v59;
    if ( v75 != -1 )
    {
      a1[1909] = v75;
      a1[1910] = v104;
    }
    v37.m128i_i32[0] = sub_1401F59A0(a1, a2, v132.m128i_i32[3], v59, a4, a5, v80, v179, a13);
    return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v172);
  }
  if ( a1[3562] )
  {
    v40 = 1;
    v49 = 1;
    a1[3562] = 0;
    v67 = 2;
  }
  if ( a1[3556] == 1002 )
    v40 = 0;
  if ( v40 )
  {
    v37.m128i_i32[3] = sub_1401F5E00(v37.m128i_i32[1], a1[40], v38, a1[3548]);
    if ( !v37.m128i_i32[3] )
      v40 = 0;
  }
  v133 = v37.m128i_i32[1] - v37.m128i_i32[3];
  v14 = a3 * a1[40];
  v149 = 8 * a1[36];
  if ( v37.m128i_i32[1] - v37.m128i_i32[3] >= v14 / v149 )
    v105 = a3 * a1[40] / (8 * a1[36]);
  else
    v105 = v37.m128i_i32[1] - v37.m128i_i32[3];
  v135 = v105 - 1;
  v177 = &a4->m128i_i8[1];
  sub_14019A1E0(v154, v177, (unsigned int)(v37.m128i_i32[1] - 1));
  v15 = 4LL * a1[28] * (a3 + v39) + 15;
  if ( v15 <= 4LL * a1[28] * (a3 + v39) )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
  v48 = &v37;
  MEMORY[0x1401FC920](&v37, (const __m128i *)&a1[a1[28] * (a1[43] - v39) + 3571], 4LL * a1[28] * v39);
  if ( a1[3556] == 1002 )
    v106 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
  else
    v106 = v130->m128i_u32[2];
  a1[3550] += (983LL * (int)(v106 - a1[3550])) >> 16;
  v134 = sub_1401BC3D0(a1[3550] >> 8);
  if ( a1[27] == 2048 )
    sub_1401F41E0(a2, v134, (__int64)v48->m128i_i64 + 4 * a1[28] * v39, (float *)a1 + 3552, a3, a1[28], a1[36]);
  else
    sub_1401F43C0(a2, 3, (__int64)v48->m128i_i64 + 4 * a1[28] * v39, (float *)a1 + 3552, a3, a1[28], a1[36]);
  if ( a13 )
  {
    v17 = a1[28] * a3;
    v156 = (__int64)v48->m128i_i64 + 4 * a1[28] * v39;
    v70 = sub_1401A9C00(v156, v156, v17);
    if ( v70 >= 1000000000.0 )
    {
      MEMORY[0x1401FCD30](&v48->m128i_i16[2 * a1[28] * v39], 0, 4LL * a1[28] * a3);
      a1[3555] = 0;
      a1[3554] = 0;
      a1[3553] = 0;
      a1[3552] = 0;
    }
  }
  v68 = 1.0;
  if ( a1[3556] != 1002 )
  {
    v18 = 2LL * a3 * a1[28] + 15;
    if ( v18 <= 2LL * a3 * a1[28] )
      v18 = 0xFFFFFFFFFFFFFF0LL;
    v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
    v131 = &v37;
    v81 = -1;
    if ( v165.m128i_i32[0] )
    {
      v107 = v170 >= 0.1;
      v81 = v107;
    }
    v71 = v38 * 8 * v135;
    if ( a1[3556] == 1001 )
    {
      v108 = a1[36] == 50 * a3;
      a1[9] = sub_1401F5530(v71, v44, v108, a1[37], a1[13], a1[3548]);
      if ( !*((_QWORD *)a1 + 1782) )
      {
        v136 = v71 - a1[9];
        v20 = exp(0.6931471805599453 * (float)((float)-v136 * 0.0009765625));
        v68 = 1.0 - v20;
      }
    }
    else
    {
      a1[9] = v71;
    }
    if ( *((_QWORD *)a1 + 1782) && a1[37] && !a1[44] )
    {
      v72 = 0.0;
      v65 = 17;
      v50 = 16000;
      if ( a1[3560] == 1101 )
      {
        v65 = 13;
        v50 = 8000;
      }
      else if ( a1[3560] == 1102 )
      {
        v65 = 15;
        v50 = 12000;
      }
      for ( i = 0; i < a1[28]; ++i )
      {
        for ( v37.m128i_i32[2] = 0; v37.m128i_i32[2] < v65; ++v37.m128i_i32[2] )
        {
          if ( *(float *)(*((_QWORD *)a1 + 1782) + 4LL * (v37.m128i_i32[2] + 21 * i)) >= 0.5 )
            v109 = 0.5;
          else
            v109 = *(float *)(*((_QWORD *)a1 + 1782) + 4LL * (v37.m128i_i32[2] + 21 * i));
          if ( v109 <= -2.0 )
          {
            v111 = -2.0;
          }
          else
          {
            if ( *(float *)(*((_QWORD *)a1 + 1782) + 4LL * (v37.m128i_i32[2] + 21 * i)) >= 0.5 )
              v110 = 1056964608;
            else
              v110 = *(_DWORD *)(*((_QWORD *)a1 + 1782) + 4LL * (v37.m128i_i32[2] + 21 * i));
            v111 = *(float *)&v110;
          }
          v64 = v111;
          if ( v111 > 0.0 )
            v64 = 0.5 * v64;
          v72 = v72 + v64;
        }
      }
      v73 = (float)(v72 / (float)v65) * (float)a1[28];
      v73 = v73 + 0.2;
      v60 = (int)(float)((float)v50 * v73);
      if ( v60 <= -2 * a1[9] / 3 )
        v112 = -2 * a1[9] / 3;
      else
        v112 = v60;
      v60 = v112;
      if ( a1[3560] == 1104 || a1[3560] == 1105 )
        a1[9] += 3 * v60 / 5;
      else
        a1[9] += v60;
    }
    a1[8] = 1000 * a3 / a1[36];
    a1[2] = a1[28];
    a1[3] = a1[3548];
    if ( v44 == 1101 )
    {
      a1[7] = 8000;
    }
    else if ( v44 == 1102 )
    {
      a1[7] = 12000;
    }
    else
    {
      a1[7] = 16000;
    }
    if ( a1[3556] == 1001 )
      a1[6] = 16000;
    else
      a1[6] = 8000;
    a1[5] = 16000;
    if ( a1[3556] == 1000 )
    {
      v66 = v113;
      if ( v38 > 50 )
        v66 = 2 * v66 / 3;
      if ( v66 < 8000 )
      {
        a1[5] = 12000;
        if ( a1[7] <= 12000 )
          v114 = a1[7];
        else
          v114 = 12000;
        a1[7] = v114;
      }
      if ( v66 < 7000 )
      {
        a1[5] = 8000;
        if ( a1[7] <= 8000 )
          v115 = a1[7];
        else
          v115 = 8000;
        a1[7] = v115;
      }
    }
    v116 = a1[37] == 0;
    a1[15] = v116;
    a1[16] = 8 * v37.m128i_i32[1] - 8;
    if ( v40 )
    {
      if ( v37.m128i_i32[3] >= 2 )
      {
        a1[16] -= 8 * v37.m128i_i32[3] + 1;
        if ( a1[3556] == 1001 )
          a1[16] -= 20;
      }
    }
    if ( a1[15] )
    {
      if ( a1[3556] == 1001 )
      {
        if ( a1[16] >= a3 * a1[9] / a1[36] )
          v117 = a3 * a1[9] / a1[36];
        else
          v117 = a1[16];
        a1[16] = v117;
      }
    }
    else if ( a1[3556] == 1001 )
    {
      v118 = a1[36] == 50 * a3;
      v137 = sub_1401F5530(a1[36] * a1[16] / a3, v44, v118, a1[37], a1[13], a1[3548]);
      a1[16] = a3 * v137 / a1[36];
    }
    if ( v67 )
    {
      v139 = 0;
      v138 = a1[43] - a1[29];
      v74 = (v138 - a1[36] / 400) * a1[28];
      v21 = a1[36] / 400;
      v157 = &a1[v74 + 3571];
      sub_1401F48B0(
        (__int64)v157,
        (__int64)v157,
        0.0,
        1.0,
        *(_DWORD *)(v69.m128i_i64[0] + 4),
        v21,
        a1[28],
        *(_QWORD *)(v69.m128i_i64[0] + 72),
        a1[36]);
      MEMORY[0x1401FCD30]((_WORD *)a1 + 7142, 0, 4LL * v74);
      for ( v37.m128i_i32[2] = 0; v37.m128i_i32[2] < a1[28] * a1[43]; ++v37.m128i_i32[2] )
        v131->m128i_i16[v37.m128i_i32[2]] = sub_1401AD3E0();
      sub_1401CABA0(v130, a1 + 2, v131, a1[43], nullptr, &v139, v67, v81);
      a1[18] = 0;
    }
    for ( v37.m128i_i32[2] = 0; v37.m128i_i32[2] < a1[28] * a3; ++v37.m128i_i32[2] )
      v131->m128i_i16[v37.m128i_i32[2]] = sub_1401AD3E0();
    v37.m128i_i32[0] = sub_1401CABA0(v130, a1 + 2, v131, a3, v154, &v140, 0, v81);
    if ( v37.m128i_i32[0] )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v172);
    if ( a1[3556] == 1000 )
    {
      switch ( a1[20] )
      {
        case 8000:
          v44 = 1101;
          break;
        case 12000:
          v44 = 1102;
          break;
        case 16000:
          v44 = 1103;
          break;
      }
    }
    v119 = a1[24] && !a1[4534];
    a1[18] = v119;
    if ( !v140 )
    {
      a1[4535] = 0;
      *(v177 - 1) = sub_1401F3E60(a1[3556], a1[36] / a3, v44, a1[3548]);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v172);
    }
    if ( a1[18] )
    {
      v37.m128i_i32[3] = sub_1401F5E00(v37.m128i_i32[1], a1[40], v38, a1[3548]);
      v120 = v37.m128i_i32[3] != 0;
      v40 = v120;
      v49 = 0;
      a1[3562] = 1;
    }
  }
  v62 = 21;
  v61 = v44;
  if ( v44 == 1101 )
  {
    v62 = 13;
  }
  else if ( v61 > 1101 )
  {
    if ( v61 <= 1103 )
    {
      v62 = 17;
    }
    else if ( v61 == 1104 )
    {
      v62 = 19;
    }
    else if ( v61 == 1105 )
    {
      v62 = 21;
    }
  }
  sub_140199190(v41, 10012, (__m128i *)v62);
  sub_140199190(v41, 10008, (__m128i *)(unsigned int)a1[3548]);
  sub_140199190(v41, 4002, (__m128i *)0xFFFFFFFFLL);
  if ( a1[3556] != 1000 )
  {
    v121 = 2.0;
    sub_140199190(v41, 4006, nullptr);
    if ( a1[19] )
      v121 = 0.0;
    sub_140199190(v41, 10002, (__m128i *)(unsigned int)(int)v121);
    if ( a1[3556] == 1001 )
    {
      if ( a1[37] )
      {
        sub_140199190(v41, 4002, (__m128i *)(unsigned int)(a1[40] - a1[9]));
        sub_140199190(v41, 4020, nullptr);
      }
    }
    else if ( a1[37] )
    {
      sub_140199190(v41, 4006, (__m128i *)1);
      sub_140199190(v41, 4020, (__m128i *)(unsigned int)a1[38]);
      sub_140199190(v41, 4002, (__m128i *)(unsigned int)a1[40]);
    }
  }
  v22 = 4LL * (a1[36] * a1[28] / 400) + 15;
  if ( v22 <= 4LL * (a1[36] * a1[28] / 400) )
    v22 = 0xFFFFFFFFFFFFFF0LL;
  v23 = alloca(v22 & 0xFFFFFFFFFFFFFFF0uLL);
  v152 = &v37;
  if ( a1[3556] != 1000 && a1[3556] != a1[3557] && a1[3557] > 0 )
  {
    v158 = a1[36] * a1[28] / 400;
    v159 = 4 * v158;
    MEMORY[0x1401FC920](v152, (const __m128i *)&a1[a1[28] * (a1[43] - v39 - a1[36] / 400) + 3571], 4 * v158);
  }
  if ( (a1[43] - (v39 + a3)) * a1[28] <= 0 )
  {
    v27 = 4LL * a1[28] * a1[43];
    v28 = (const __m128i *)((char *)v48 + 4 * a1[28] * (v39 + a3 - a1[43]));
    v162 = a1 + 3571;
    MEMORY[0x1401FC920]((__m128i *)(a1 + 3571), v28, v27);
  }
  else
  {
    v24 = 4LL * (a1[43] - a3 - v39) * a1[28];
    v25 = (const __m128i *)&a1[a3 * a1[28] + 3571];
    v160 = a1 + 3571;
    MEMORY[0x1401FC920]((__m128i *)(a1 + 3571), v25, v24);
    v26 = 4LL * a1[28] * (v39 + a3);
    v161 = (__m128i *)&a1[(a1[43] - a3 - v39) * a1[28] + 3571];
    MEMORY[0x1401FC920](v161, v48, v26);
  }
  if ( *((float *)a1 + 3551) < 1.0 || v68 < 1.0 )
    sub_1401F48B0(
      (__int64)v48,
      (__int64)v48,
      *((float *)a1 + 3551),
      v68,
      *(_DWORD *)(v69.m128i_i64[0] + 4),
      a3,
      a1[28],
      *(_QWORD *)(v69.m128i_i64[0] + 72),
      a1[36]);
  *((float *)a1 + 3551) = v68;
  if ( a1[3556] != 1001 || a1[3548] == 1 )
  {
    if ( v43 <= 32000 )
    {
      if ( v43 >= 16000 )
        a1[23] = 0x4000 - ((32000 - v43) << 11) / (v43 - 14000);
      else
        a1[23] = 0;
    }
    else
    {
      a1[23] = 0x4000;
    }
  }
  if ( !*((_QWORD *)a1 + 1782) && a1[28] == 2 && (*((__int16 *)a1 + 7098) < 0x4000 || a1[23] < 0x4000) )
  {
    v77 = (float)*((__int16 *)a1 + 7098);
    v76 = (float)a1[23];
    v77 = v77 * 0.000061035156;
    v76 = v76 * 0.000061035156;
    sub_1401F4640(
      (__int64)v48,
      (__int64)v48,
      v77,
      v76,
      *(_DWORD *)(v69.m128i_i64[0] + 4),
      a3,
      a1[28],
      *(_QWORD *)(v69.m128i_i64[0] + 72),
      a1[36]);
    *((_WORD *)a1 + 7098) = *((_WORD *)a1 + 46);
  }
  if ( a1[3556] == 1002
    || (v122 = a1[3556] == 1001, v29 = sub_14019A0A0((__int64)v154), v29 + 20 * v122 + 17 > 8 * v37.m128i_i32[1] - 8) )
  {
    v40 = 0;
  }
  else
  {
    if ( a1[3556] == 1001 )
      sub_14019A450(v154, v40, 12);
    if ( v40 )
    {
      sub_14019A450(v154, v49, 1);
      if ( a1[3556] == 1001 )
      {
        v141 = v37.m128i_i32[1] - 1;
        v30 = sub_14019A0A0((__int64)v154);
        v78 = v141 - ((v30 + 18) >> 3);
      }
      else
      {
        v142 = v37.m128i_i32[1] - 1;
        v31 = sub_14019A0A0((__int64)v154);
        v78 = v142 - ((v31 + 7) >> 3);
      }
      v123 = v78 >= v37.m128i_i32[3] ? v37.m128i_i32[3] : v78;
      v37.m128i_i32[3] = v123;
      v124 = v123 >= 2 ? v37.m128i_i32[3] : 2;
      if ( v124 <= 257 )
      {
        v125 = v37.m128i_i32[3] >= 2 ? v37.m128i_i32[3] : 2;
        v126 = v125;
      }
      else
      {
        v126 = 257;
      }
      v37.m128i_i32[3] = v126;
      if ( a1[3556] == 1001 )
        sub_14019A5E0(v154, v37.m128i_i32[3] - 2, 256);
    }
  }
  if ( !v40 )
  {
    a1[3562] = 0;
    v37.m128i_i32[3] = 0;
  }
  if ( a1[3556] != 1002 )
    v127 = 17;
  if ( a1[3556] == 1000 )
  {
    v37.m128i_i32[0] = (int)(sub_14019A0A0((__int64)v154) + 7) >> 3;
    sub_14019A9C0(v154);
    v45 = v37.m128i_i32[0];
  }
  else
  {
    v45 = v37.m128i_i32[1] - 1 - v37.m128i_i32[3];
    sub_14019A8F0((__int64)v154, v45);
  }
  if ( v40 || a1[3556] != 1000 )
    sub_140199190(v41, 10022, &v165);
  if ( a1[3556] == 1001 )
  {
    v132.m128i_i64[0] = *(_QWORD *)(a1 + 25);
    sub_140199190(v41, 10028, &v132);
  }
  if ( v40 && v49 )
  {
    sub_140199190(v41, 10010, nullptr);
    sub_140199190(v41, 4006, nullptr);
    sub_140199190(v41, 4002, (__m128i *)0xFFFFFFFFLL);
    v163 = &v177[v45];
    v143 = sub_14019B2E0((__int64)v41, (__int64)v48, a1[36] / 200, (__int64)v163, v37.m128i_i32[3], nullptr);
    if ( v143 < 0 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v172);
    sub_140199190(v41, 4031, &v54);
    sub_140199190(v41, 4028, v32);
  }
  sub_140199190(v41, 10010, (__m128i *)v127);
  if ( a1[3556] != 1000 )
  {
    if ( a1[3556] != a1[3557] && a1[3557] > 0 )
    {
      sub_140199190(v41, 4028, v33);
      sub_14019B2E0((__int64)v41, (__int64)v152, a1[36] / 400, (__int64)v146, 2, nullptr);
      sub_140199190(v41, 10002, nullptr);
    }
    v34 = sub_14019A0A0((__int64)v154);
    if ( v34 <= 8 * v45 )
    {
      if ( v40 && v49 && a1[3556] == 1001 && a1[37] )
        sub_140199190(v41, 4002, (__m128i *)(unsigned int)(a1[40] - a1[9]));
      sub_140199190(v41, 4006, (__m128i *)(unsigned int)a1[37]);
      v37.m128i_i32[0] = sub_14019B2E0((__int64)v41, (__int64)v48, a3, 0, v45, (unsigned int *)v154);
      if ( v37.m128i_i32[0] < 0 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v172);
      if ( v40 && v49 && a1[3556] == 1001 && a1[37] )
      {
        v164 = (__m128i *)&v177[v37.m128i_i32[0]];
        MEMORY[0x1401FC920](v164, (const __m128i *)&v177[v45], v37.m128i_i32[3]);
        v45 += v37.m128i_i32[3];
      }
    }
  }
  if ( v40 && !v49 )
  {
    v79 = a1[36] / 200;
    v128 = a1[36] / 400;
    sub_140199190(v41, 4028, v33);
    sub_140199190(v41, 10010, nullptr);
    sub_140199190(v41, 10002, nullptr);
    sub_140199190(v41, 4006, nullptr);
    sub_140199190(v41, 4002, (__m128i *)0xFFFFFFFFLL);
    if ( a1[3556] == 1001 )
    {
      v45 = v37.m128i_i32[0];
      sub_14019A8F0((__int64)v154, v37.m128i_u32[0]);
    }
    sub_14019B2E0(
      (__int64)v41,
      (__int64)v48->m128i_i64 + 4 * (a3 - v79 - v128) * a1[28],
      v128,
      (__int64)v145,
      2,
      nullptr);
    v144 = sub_14019B2E0(
             (__int64)v41,
             (__int64)v48->m128i_i64 + 4 * (a3 - v79) * a1[28],
             v79,
             (__int64)&v177[v45],
             v37.m128i_i32[3],
             nullptr);
    if ( v144 < 0 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v172);
    sub_140199190(v41, 4031, &v54);
  }
  v178 = (__m128i *)(v177 - 1);
  v178->m128i_i8[0] = sub_1401F3E60(a1[3556], a1[36] / a3, v44, a1[3548]);
  a1[4535] = v54.m128i_i32[0] ^ v155;
  if ( v80 )
    a1[3557] = 1002;
  else
    a1[3557] = a1[3556];
  a1[3558] = a1[3548];
  a1[3559] = a3;
  a1[3563] = 0;
  if ( a1[46] && (v165.m128i_i32[0] || v54.m128i_i32[3]) )
  {
    if ( (unsigned int)sub_1401F58C0(v170, a1 + 4532, *((float *)a1 + 4533), a2, a3, a1[28], v54.m128i_i32[3]) )
    {
      a1[4535] = 0;
      v178->m128i_i8[0] = sub_1401F3E60(a1[3556], a1[36] / a3, v44, a1[3548]);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v172);
    }
  }
  else
  {
    a1[4532] = 0;
  }
  v35 = sub_14019A0A0((__int64)v154);
  if ( v35 <= 8 * v37.m128i_i32[1] - 8 )
  {
    if ( a1[3556] == 1000 && !v40 )
    {
      while ( v37.m128i_i32[0] > 2 && !v178->m128i_i8[v37.m128i_i32[0]] )
        --v37.m128i_i32[0];
    }
  }
  else
  {
    if ( v37.m128i_i32[1] < 2 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v172);
    v178->m128i_i8[1] = 0;
    v37.m128i_i32[0] = 1;
    a1[4535] = 0;
  }
  v37.m128i_i32[0] += v37.m128i_i32[3] + 1;
  if ( !a1[37] && !(unsigned int)sub_1401E3980(v178, v37.m128i_i32[0], v37.m128i_i32[1]) )
    v37.m128i_i32[0] = v37.m128i_i32[1];
  return MEMORY[0x1401F8B20]((unsigned __int64)&v37 ^ v172);
}

