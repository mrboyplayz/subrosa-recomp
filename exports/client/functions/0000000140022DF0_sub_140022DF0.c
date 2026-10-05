/* Address: 0x140022df0 | Name: sub_140022DF0 | Size: 3113 bytes */
__int64 __fastcall sub_140022DF0(unsigned int a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r9
  unsigned int v12; // edx
  int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rbp
  __int64 v16; // rdi
  unsigned int v17; // xmm0_4
  float v18; // xmm1_4
  unsigned int v19; // xmm0_4
  float v20; // xmm1_4
  __int64 v21; // rbx
  __int64 v22; // r9
  __int64 v23; // rcx
  float v24; // xmm13_4
  float v25; // xmm14_4
  float v26; // xmm15_4
  unsigned int v27; // eax
  __int64 v28; // rdx
  float v29; // xmm10_4
  float v30; // xmm11_4
  float v31; // xmm12_4
  float v32; // xmm4_4
  float v33; // xmm10_4
  float v34; // xmm11_4
  float v35; // xmm12_4
  __int64 v36; // r11
  __int64 v37; // rdx
  __int64 v38; // rcx
  float v39; // xmm6_4
  float v40; // xmm2_4
  float v41; // xmm9_4
  float v42; // xmm7_4
  float v43; // xmm3_4
  float v44; // xmm0_4
  float v45; // xmm12_4
  unsigned int v46; // xmm14_4
  unsigned int v47; // xmm15_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm7_4
  float v51; // xmm10_4
  float v52; // xmm9_4
  float v53; // xmm5_4
  float v54; // xmm6_4
  __int64 v55; // rax
  float v56; // xmm0_4
  float v57; // xmm11_4
  float v58; // xmm8_4
  float v59; // xmm4_4
  float v60; // xmm0_4
  float v61; // xmm11_4
  float v62; // xmm7_4
  float v63; // xmm10_4
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 result; // rax
  unsigned int v81; // ebp
  unsigned int v82; // ebx
  int v83; // ecx
  unsigned int v84; // ebx
  __int64 v86; // [rsp+120h] [rbp+18h]
  __int64 v87; // [rsp+128h] [rbp+20h]

  v2 = 0;
  v3 = 7166LL * (int)a1;
  v4 = (int)a1;
  v5 = a2;
  v6 = dword_140404A6C[v3 + 280658445];
  v7 = v6 == 1;
  if ( v6 == 2 )
  {
    v7 = 2;
  }
  else if ( v6 == 3 )
  {
    v7 = 3;
  }
  v8 = dword_140404A6C[v3 + 280658439];
  v9 = v7 + 8;
  if ( v8 != 1 )
    v9 = v7;
  v10 = (unsigned int)v9;
  v11 = (int)dword_140404A6C[v9 + 283827638];
  v12 = dword_140404A6C[908 * v11 + 178527465];
  if ( (int)dword_140404A6C[v3 + 280658447] > 0 )
    v12 += dword_140404A6C[908 * dword_140404A6C[2 * v8 + 16 + 283827638] + 178527465];
  v13 = dword_140404A6C[v3 + 280658449];
  if ( v13 > 0 )
    v12 += dword_140404A6C[908 * dword_140404A6C[v13 + 2 * v8 + 283827657] + 178527465];
  v14 = 908 * v5;
  v86 = v5;
  v87 = 908 * v5;
  if ( dword_140404A6C[908 * v5 + 178527465] != v12 )
  {
    dword_140404A6C[v14 + 178527465] = v12;
    dword_140404A6C[v14 + 178527462] = 8;
    dword_140404A6C[v14 + 178527475] = dword_140404A6C[908 * v11 + 178527465];
    dword_140404A6C[v14 + 178527484] = v11;
  }
  v15 = 344LL * (int)a1;
  v16 = 240LL * (int)a1;
  *(float *)&v17 = *(float *)&dword_140404A6C[v15 + 284956344]
                 - (float)(*(float *)&dword_140404A6C[v15 + 284956350] * 0.125);
  v18 = *(float *)&dword_140404A6C[v15 + 284956351] * 0.125;
  dword_140404A6C[v16 + 23875734] = dword_140404A6C[v15 + 284956345];
  dword_140404A6C[v16 + 23875735] = dword_140404A6C[v15 + 284956346];
  dword_140404A6C[v16 + 23875733] = v17;
  *(float *)&v19 = *(float *)&dword_140404A6C[v16 + 23875734] - v18;
  v20 = *(float *)&dword_140404A6C[v15 + 284956352] * 0.125;
  dword_140404A6C[v16 + 23875734] = v19;
  *(float *)&dword_140404A6C[v16 + 23875735] = *(float *)&dword_140404A6C[v16 + 23875735] - v20;
  do
  {
    v21 = 25 * v2;
    v22 = v15 * 4 + 84 * v2;
    v23 = v16 * 4 + 36 * v2;
    v24 = *(float *)((char *)&dword_140404A6C[284956350] + v22);
    v25 = *(float *)((char *)&dword_140404A6C[284956351] + v22);
    v26 = *(float *)((char *)&dword_140404A6C[284956352] + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875781] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956347]
                                                                                  + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875782] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956348]
                                                                                  + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875783] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956349]
                                                                                  + v22);
    v27 = *(unsigned int *)((char *)&dword_140404A6C[284956353] + v22);
    *(float *)((char *)&dword_140404A6C[23875784] + v23) = v24;
    *(float *)((char *)&dword_140404A6C[23875785] + v23) = v25;
    *(float *)((char *)&dword_140404A6C[23875786] + v23) = v26;
    *(unsigned int *)((char *)&dword_140404A6C[23875787] + v23) = v27;
    *(unsigned int *)((char *)&dword_140404A6C[23875788] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956354]
                                                                                  + v22);
    *(unsigned int *)((char *)&dword_140404A6C[23875789] + v23) = *(unsigned int *)((char *)&dword_140404A6C[284956355]
                                                                                  + v22);
    if ( !v2 )
      goto LABEL_38;
    v28 = 786828 * v10 + 24 * v2;
    v29 = *(float *)((char *)&dword_140404A6C[161054683] + v28);
    v30 = *(float *)((char *)&dword_140404A6C[161054684] + v28);
    v31 = *(float *)((char *)&dword_140404A6C[161054685] + v28);
    if ( (unsigned __int64)(v2 - 1) <= 1 )
      v30 = 0.25;
    if ( v2 == 10 || v2 == 13 )
      v30 = 0.125;
    if ( (unsigned __int64)(v2 - 5) <= 1 || (unsigned __int64)(v2 - 8) <= 1 )
    {
      v32 = fsqrt((float)((float)(v30 * v30) + (float)(v29 * v29)) + (float)(v31 * v31));
      if ( v32 == 0.0 )
      {
        v33 = 0.0;
        v34 = 0.0;
        v35 = 0.0;
      }
      else
      {
        v33 = v29 * (float)(1.0 / v32);
        v34 = v30 * (float)(1.0 / v32);
        v35 = v31 * (float)(1.0 / v32);
      }
      v29 = v33 * 0.328125;
      v30 = v34 * 0.328125;
      v31 = v35 * 0.328125;
    }
    if ( v2 == 4 )
    {
      v29 = -0.1875;
    }
    else
    {
      if ( v2 != 7 )
        goto LABEL_31;
      v29 = 0.1875;
    }
    v30 = 0.125;
LABEL_31:
    v36 = (int)dword_140404A6C[v21 + 282486045];
    v37 = v16 * 4 + 36 * v36;
    v38 = 3 * (v2 + 80 * v4);
    v39 = *(float *)((char *)&dword_140404A6C[23875785] + v37);
    v40 = (float)(v31 * *(float *)((char *)&dword_140404A6C[23875787] + v37))
        + (float)(v29 * *(float *)((char *)&dword_140404A6C[23875781] + v37));
    v41 = *(float *)((char *)&dword_140404A6C[23875786] + v37);
    v42 = *(float *)((char *)&dword_140404A6C[23875783] + v37);
    v43 = v31 * *(float *)((char *)&dword_140404A6C[23875788] + v37);
    v44 = v29 * *(float *)((char *)&dword_140404A6C[23875782] + v37);
    v45 = v31 * *(float *)((char *)&dword_140404A6C[23875789] + v37);
    *(float *)&dword_140404A6C[v38 + 23875733] = v40
                                               + (float)((float)(v30
                                                               * *(float *)((char *)&dword_140404A6C[23875784] + v37))
                                                       + *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v36]);
    *(float *)&dword_140404A6C[v38 + 23875734] = (float)(v43 + v44)
                                               + (float)((float)(v30 * v39)
                                                       + *(float *)&dword_140404A6C[240 * v4 + 23875734 + 3 * v36]);
    *(float *)&dword_140404A6C[v38 + 23875735] = (float)((float)(v29 * v42) + v45)
                                               + (float)((float)(v30 * v41)
                                                       + *(float *)&dword_140404A6C[240 * v4 + 23875735 + 3 * v36]);
    if ( v2 == 4 || v2 == 7 )
    {
      *(float *)&v46 = (float)(v25 * 0.1640625) + *(float *)((char *)&dword_140404A6C[284956345] + v22);
      *(float *)&v47 = (float)(v26 * 0.1640625) + *(float *)((char *)&dword_140404A6C[284956346] + v22);
      *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v2] = (float)(v24 * 0.1640625)
                                                               + *(float *)((char *)&dword_140404A6C[284956344] + v22);
      dword_140404A6C[240 * v4 + 23875734 + 3 * v2] = v46;
      dword_140404A6C[240 * v4 + 23875735 + 3 * v2] = v47;
    }
    v48 = *(float *)&dword_140404A6C[25 * v36 + 282486050] - *(float *)&dword_140404A6C[25 * v36 + 282486047];
    v49 = *(float *)&dword_140404A6C[25 * v36 + 282486051] - *(float *)&dword_140404A6C[25 * v36 + 282486048];
    if ( v2 == 12 || v2 == 15 )
    {
      v49 = v49 - 0.0625;
      v48 = v48 - 0.09375;
    }
    v50 = *(float *)((char *)&dword_140404A6C[23875786] + v37);
    v51 = *(float *)((char *)&dword_140404A6C[23875789] + v37);
    v52 = *(float *)&dword_140404A6C[v21 + 282486050] - v48;
    v53 = *(float *)&dword_140404A6C[v21 + 282486049]
        - (float)(*(float *)&dword_140404A6C[25 * v36 + 282486049] - *(float *)&dword_140404A6C[25 * v36 + 282486046]);
    v54 = *(float *)&dword_140404A6C[v21 + 282486051] - v49;
    v55 = v3 * 4 + 312 * v2;
    v56 = v52 * *(float *)((char *)&dword_140404A6C[23875785] + v37);
    v57 = (float)(*(float *)((char *)&dword_140404A6C[23875788] + v37) * v54)
        + (float)(*(float *)((char *)&dword_140404A6C[23875782] + v37) * v53);
    v58 = (float)((float)(v54 * *(float *)((char *)&dword_140404A6C[23875787] + v37))
                + (float)(v53 * *(float *)((char *)&dword_140404A6C[23875781] + v37)))
        + (float)((float)(v52 * *(float *)((char *)&dword_140404A6C[23875784] + v37))
                + *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v36]);
    v59 = *(float *)((char *)&dword_140404A6C[23875783] + v37) * v53;
    *(float *)&dword_140404A6C[240 * v4 + 23875733 + 3 * v2] = v58;
    v60 = v56 + *(float *)&dword_140404A6C[240 * v4 + 23875734 + 3 * v36];
    *(float *)((char *)&dword_140404A6C[280651512] + v55) = v58;
    v61 = v57 + v60;
    *(float *)&dword_140404A6C[240 * v4 + 23875734 + 3 * v2] = v61;
    v62 = (float)(v50 * v52) + *(float *)&dword_140404A6C[240 * v4 + 23875735 + 3 * v36];
    *(float *)((char *)&dword_140404A6C[280651513] + v55) = v61;
    v63 = (float)((float)(v51 * v54) + v59) + v62;
    *(float *)&dword_140404A6C[240 * v4 + 23875735 + 3 * v2] = v63;
    *(float *)((char *)&dword_140404A6C[280651514] + v55) = v63;
LABEL_38:
    ++v2;
  }
  while ( v2 < 16 );
  v64 = 240 * v4;
  dword_140404A6C[v64 + 23875685] = dword_140404A6C[196707 * v10 + 161054680];
  dword_140404A6C[v64 + 23875686] = dword_140404A6C[196707 * v10 + 161054681];
  dword_140404A6C[v64 + 23875687] = dword_140404A6C[196707 * v10 + 161054682];
  v65 = 240 * v4;
  dword_140404A6C[v65 + 23875688] = dword_140404A6C[196707 * v10 + 161054686];
  dword_140404A6C[v65 + 23875689] = dword_140404A6C[196707 * v10 + 161054687];
  dword_140404A6C[v65 + 23875690] = dword_140404A6C[196707 * v10 + 161054688];
  v66 = 240 * v4;
  dword_140404A6C[v66 + 23875691] = dword_140404A6C[196707 * v10 + 161054692];
  dword_140404A6C[v66 + 23875692] = dword_140404A6C[196707 * v10 + 161054693];
  dword_140404A6C[v66 + 23875693] = dword_140404A6C[196707 * v10 + 161054694];
  v67 = 240 * v4;
  dword_140404A6C[v67 + 23875694] = dword_140404A6C[196707 * v10 + 161054698];
  dword_140404A6C[v67 + 23875695] = dword_140404A6C[196707 * v10 + 161054699];
  dword_140404A6C[v67 + 23875696] = dword_140404A6C[196707 * v10 + 161054700];
  v68 = 240 * v4;
  dword_140404A6C[v68 + 23875697] = dword_140404A6C[196707 * v10 + 161054704];
  dword_140404A6C[v68 + 23875698] = dword_140404A6C[196707 * v10 + 161054705];
  dword_140404A6C[v68 + 23875699] = dword_140404A6C[196707 * v10 + 161054706];
  v69 = 240 * v4;
  dword_140404A6C[v69 + 23875700] = dword_140404A6C[196707 * v10 + 161054710];
  dword_140404A6C[v69 + 23875701] = dword_140404A6C[196707 * v10 + 161054711];
  dword_140404A6C[v69 + 23875702] = dword_140404A6C[196707 * v10 + 161054712];
  v70 = 240 * v4;
  dword_140404A6C[v70 + 23875703] = dword_140404A6C[196707 * v10 + 161054716];
  dword_140404A6C[v70 + 23875704] = dword_140404A6C[196707 * v10 + 161054717];
  dword_140404A6C[v70 + 23875705] = dword_140404A6C[196707 * v10 + 161054718];
  v71 = 240 * v4;
  dword_140404A6C[v71 + 23875706] = dword_140404A6C[196707 * v10 + 161054722];
  dword_140404A6C[v71 + 23875707] = dword_140404A6C[196707 * v10 + 161054723];
  dword_140404A6C[v71 + 23875708] = dword_140404A6C[196707 * v10 + 161054724];
  v72 = 240 * v4;
  dword_140404A6C[v72 + 23875709] = dword_140404A6C[196707 * v10 + 161054728];
  dword_140404A6C[v72 + 23875710] = dword_140404A6C[196707 * v10 + 161054729];
  dword_140404A6C[v72 + 23875711] = dword_140404A6C[196707 * v10 + 161054730];
  v73 = 240 * v4;
  dword_140404A6C[v73 + 23875712] = dword_140404A6C[196707 * v10 + 161054734];
  dword_140404A6C[v73 + 23875713] = dword_140404A6C[196707 * v10 + 161054735];
  dword_140404A6C[v73 + 23875714] = dword_140404A6C[196707 * v10 + 161054736];
  v74 = 240 * v4;
  dword_140404A6C[v74 + 23875715] = dword_140404A6C[196707 * v10 + 161054740];
  dword_140404A6C[v74 + 23875716] = dword_140404A6C[196707 * v10 + 161054741];
  dword_140404A6C[v74 + 23875717] = dword_140404A6C[196707 * v10 + 161054742];
  v75 = 240 * v4;
  dword_140404A6C[v75 + 23875718] = dword_140404A6C[196707 * v10 + 161054746];
  dword_140404A6C[v75 + 23875719] = dword_140404A6C[196707 * v10 + 161054747];
  dword_140404A6C[v75 + 23875720] = dword_140404A6C[196707 * v10 + 161054748];
  v76 = 240 * v4;
  dword_140404A6C[v76 + 23875721] = dword_140404A6C[196707 * v10 + 161054752];
  dword_140404A6C[v76 + 23875722] = dword_140404A6C[196707 * v10 + 161054753];
  dword_140404A6C[v76 + 23875723] = dword_140404A6C[196707 * v10 + 161054754];
  v77 = 240 * v4;
  dword_140404A6C[v77 + 23875724] = dword_140404A6C[196707 * v10 + 161054758];
  dword_140404A6C[v77 + 23875725] = dword_140404A6C[196707 * v10 + 161054759];
  dword_140404A6C[v77 + 23875726] = dword_140404A6C[196707 * v10 + 161054760];
  v78 = 240 * v4;
  dword_140404A6C[v78 + 23875727] = dword_140404A6C[196707 * v10 + 161054764];
  dword_140404A6C[v78 + 23875728] = dword_140404A6C[196707 * v10 + 161054765];
  dword_140404A6C[v78 + 23875729] = dword_140404A6C[196707 * v10 + 161054766];
  v79 = 240 * v4;
  dword_140404A6C[v79 + 23875730] = dword_140404A6C[196707 * v10 + 161054770];
  dword_140404A6C[v79 + 23875731] = dword_140404A6C[196707 * v10 + 161054771];
  dword_140404A6C[v79 + 23875732] = dword_140404A6C[196707 * v10 + 161054772];
  unk_140404530(35982, 0, dword_140404A6C[2 * dword_140404A6C[v86 + 283790166] + 283793813]);
  sub_14011E730(a1, (unsigned int)v10);
  result = (int)dword_140404A6C[v10 + 283827638];
  v81 = dword_140404A6C[908 * result + 178527465];
  if ( (int)dword_140404A6C[v3 + 280658447] > 0 )
  {
    v82 = 2 * dword_140404A6C[v3 + 280658439] + 16;
    unk_140404528(
      35982,
      0,
      dword_140404A6C[2 * dword_140404A6C[v86 + 283790166] + 283793813],
      (int)(12 * v81 * dword_140404A6C[v87 + 178527462]),
      (int)(12 * dword_140404A6C[v87 + 178527462] * dword_140404A6C[908 * dword_140404A6C[v82 + 283827638] + 178527465]));
    sub_14011E730(a1, v82);
    result = (int)dword_140404A6C[v82 + 283827638];
    v81 += dword_140404A6C[908 * result + 178527465];
  }
  v83 = dword_140404A6C[v3 + 280658449];
  if ( v83 > 0 )
  {
    v84 = v83 + 2 * dword_140404A6C[v3 + 280658439];
    unk_140404528(
      35982,
      0,
      dword_140404A6C[2 * dword_140404A6C[v86 + 283790166] + 283793813],
      (int)(12 * v81 * dword_140404A6C[v87 + 178527462]),
      (int)(12 * dword_140404A6C[v87 + 178527462] * dword_140404A6C[908 * dword_140404A6C[v84 + 283827657] + 178527465]));
    return sub_14011E730(a1, v84 + 19);
  }
  return result;
}

