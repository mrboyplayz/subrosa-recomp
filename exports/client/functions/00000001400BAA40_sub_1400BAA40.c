/* Address: 0x1400baa40 | Name: sub_1400BAA40 | Size: 3175 bytes */
__int64 __fastcall sub_1400BAA40(__int64 a1, _BOOL8 a2, __int64 a3)
{
  __int64 v4; // r13
  int v5; // r15d
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm9_4
  float v12; // xmm4_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm11_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  __int64 v25; // r8
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm2_4
  unsigned int v29; // xmm6_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm2_4
  unsigned int v35; // xmm6_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  unsigned int *v38; // rdi
  __int64 v39; // r14
  float *v40; // rsi
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm7_4
  float v44; // xmm1_4
  float v45; // xmm8_4
  float v46; // xmm7_4
  float v47; // xmm8_4
  float v48; // xmm5_4
  float v49; // xmm4_4
  float v50; // xmm6_4
  float v51; // xmm0_4
  double v52; // xmm0_8
  double v53; // xmm0_8
  double v54; // xmm0_8
  double v55; // xmm0_8
  bool v56; // zf
  float v57; // xmm2_4
  float v58; // xmm3_4
  float v59; // xmm4_4
  float v60; // xmm2_4
  _BOOL8 v61; // rcx
  __int64 v62; // rdx
  int v63; // ecx
  unsigned int v64; // eax
  int v65; // ecx
  float v66; // xmm0_4
  float v67; // xmm0_4
  __int64 v69; // [rsp+8h] [rbp-99h] BYREF
  float v70; // [rsp+28h] [rbp-79h] BYREF
  float v71; // [rsp+2Ch] [rbp-75h]
  float v72; // [rsp+30h] [rbp-71h]
  float v73; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v74; // [rsp+3Ch] [rbp-65h]
  float v75; // [rsp+40h] [rbp-61h]
  __int64 v76; // [rsp+48h] [rbp-59h]

  v4 = a2;
  v5 = a1;
  v6 = 7166LL * (int)a1;
  v7 = dword_140404A6C[v6 + 280658024];
  if ( v7 > 0 )
    dword_140404A6C[v6 + 280658024] = v7 - 1;
  v8 = dword_140404A6C[v6 + 280658079];
  if ( v8 > 0 )
    dword_140404A6C[v6 + 280658079] = v8 - 1;
  if ( dword_140404A6C[v6 + 280658026] == 1 && dword_140404A6C[v6 + 280658081] == 1 )
  {
    v9 = *(float *)&dword_140404A6C[v6 + 280657933] * 8.0;
    v71 = 0.0;
    v10 = *(float *)&dword_140404A6C[v6 + 280657935] * 8.0;
    v74 = 0;
    v11 = *(float *)&dword_140404A6C[v6 + 280657916];
    v12 = (float)(v9 + *(float *)&dword_140404A6C[v6 + 280657914])
        + (float)(*(float *)&dword_140404A6C[v6 + 280657992] * 16.0);
    v13 = *(float *)&dword_140404A6C[v6 + 280651452] * 0.09375;
    v14 = *(float *)&dword_140404A6C[v6 + 280651454] * 0.09375;
    v15 = (float)(v10 + v11) + (float)(*(float *)&dword_140404A6C[v6 + 280657994] * 16.0);
    v16 = *(float *)&dword_140404A6C[v6 + 280651458] * 0.03125;
    v17 = *(float *)&dword_140404A6C[v6 + 280651460] * 0.03125;
    v18 = *(float *)&dword_140404A6C[v6 + 280652376] - (float)((float)(v12 - v13) - v16);
    v19 = *(float *)&dword_140404A6C[v6 + 280652378] - (float)((float)(v15 - v14) - v17);
    v20 = fsqrt((float)(v19 * v19) + (float)(v18 * v18));
    v21 = *(float *)&dword_140404A6C[v6 + 280652612] - (float)((float)(v14 + v15) - v17);
    v70 = *(float *)&dword_140404A6C[v6 + 280652610] - (float)((float)(v13 + v12) - v16);
    v72 = v21;
    v22 = fsqrt((float)(v21 * v21) + (float)(v70 * v70));
    v23 = (float)((float)(*(float *)&dword_140404A6C[v6 + 280652378] + *(float *)&dword_140404A6C[v6 + 280652612]) * 0.5)
        - v11;
    v73 = (float)((float)(*(float *)&dword_140404A6C[v6 + 280652610] + *(float *)&dword_140404A6C[v6 + 280652376]) * 0.5)
        - *(float *)&dword_140404A6C[v6 + 280657914];
    v75 = v23;
    v24 = fsqrt((float)(v23 * v23) + (float)(v73 * v73));
    if ( v20 > 0.125 || v22 > 0.125 || v24 > 0.125 )
    {
      a2 = v22 > v20;
      v25 = v6 * 4 + 220 * a2;
      if ( !*(unsigned int *)((char *)&dword_140404A6C[280658024] + v25)
        || (a1 = v6 * 4 + 220LL * (v22 <= v20), *(unsigned int *)((char *)&dword_140404A6C[280658024] + a1)) )
      {
        *(unsigned int *)((char *)&dword_140404A6C[280658026] + v25) = 3;
        *(unsigned int *)((char *)&dword_140404A6C[280658028] + v25) = 0;
        *(float *)((char *)&dword_140404A6C[280658029] + v25) = *(float *)(a3 + 12 * a2) - *(float *)(v4 + 12 * a2);
        *(float *)((char *)&dword_140404A6C[280658030] + v25) = *(float *)(a3 + 12 * a2 + 4)
                                                              - *(float *)(v4 + 12 * a2 + 4);
        *(float *)((char *)&dword_140404A6C[280658031] + v25) = *(float *)(a3 + 12 * a2 + 8)
                                                              - *(float *)(v4 + 12 * a2 + 8);
      }
    }
  }
  if ( dword_140404A6C[v6 + 280658026] == 1 )
  {
    if ( !dword_140404A6C[v6 + 280652451] )
      dword_140404A6C[v6 + 280658053] = 0;
    v26 = *(float *)&dword_140404A6C[v6 + 280658035];
    v27 = *(float *)&dword_140404A6C[v6 + 280658037];
    v28 = *(float *)&dword_140404A6C[v6 + 280652376] - v26;
    v29 = dword_140404A6C[v6 + 280658036];
    v30 = *(float *)&dword_140404A6C[v6 + 280652378] - v27;
    v71 = 0.0;
    v70 = v28;
    v72 = v30;
    v31 = fsqrt((float)(v30 * v30) + (float)(v28 * v28));
    if ( v31 > 0.03125 )
    {
      dword_140404A6C[v6 + 280658036] = v29;
      *(float *)&dword_140404A6C[v6 + 280658035] = (float)((float)(v28 * (float)(1.0 / v31)) * 0.03125) + v26;
      *(float *)&dword_140404A6C[v6 + 280658037] = (float)((float)(v30 * (float)(1.0 / v31)) * 0.03125) + v27;
    }
  }
  if ( dword_140404A6C[v6 + 280658081] == 1 )
  {
    if ( !dword_140404A6C[v6 + 280652685] )
      dword_140404A6C[v6 + 280658108] = 0;
    v32 = *(float *)&dword_140404A6C[v6 + 280658090];
    v33 = *(float *)&dword_140404A6C[v6 + 280658092];
    v34 = *(float *)&dword_140404A6C[v6 + 280652610] - v32;
    v35 = dword_140404A6C[v6 + 280658091];
    v36 = *(float *)&dword_140404A6C[v6 + 280652612] - v33;
    v71 = 0.0;
    v70 = v34;
    v72 = v36;
    v37 = fsqrt((float)(v36 * v36) + (float)(v34 * v34));
    if ( v37 > 0.03125 )
    {
      *(float *)&dword_140404A6C[v6 + 280658090] = (float)((float)(v34 * (float)(1.0 / v37)) * 0.03125) + v32;
      dword_140404A6C[v6 + 280658091] = v35;
      *(float *)&dword_140404A6C[v6 + 280658092] = (float)((float)(v36 * (float)(1.0 / v37)) * 0.03125) + v33;
    }
  }
  v38 = &dword_140404A6C[v6 + 280658028];
  v39 = 2;
  v40 = (float *)&dword_140404A6C[v6 + 280652378];
  do
  {
    if ( *(v38 - 2) == 3 && *(float *)v38 >= 1.0 )
    {
      v41 = *(float *)&dword_1402F6188;
      v42 = *(float *)&dword_1402F618C;
      v43 = *(float *)&dword_1402F6188;
      v44 = *(float *)&dword_1402F6190;
      v45 = *(float *)&dword_1402F618C;
      *v38 = 1065353216;
      v46 = v43 * 0.375;
      v47 = v45 * 0.375;
      v48 = v46 + *(v40 - 2);
      v49 = v47 + *(v40 - 1);
      v73 = v48;
      v74 = LODWORD(v49);
      v50 = (float)(v44 * 0.375) + *v40;
      v70 = v48 - (float)(v41 * 0.75);
      v75 = v50;
      v71 = v49 - (float)(v42 * 0.75);
      v72 = v50 - (float)(v44 * 0.75);
      v51 = *(float *)&dword_140404A6C[v6 + 280651441];
      if ( v49 > v51 )
      {
        v74 = dword_140404A6C[v6 + 280651441];
        v70 = v48 - v46;
        v71 = v51 - v47;
        v72 = v50 - (float)(v44 * 0.375);
      }
      if ( (unsigned int)sub_1400B91E0(v5, (__int64)&v73, (__int64)&v70) )
      {
        *(v38 - 2) = 1;
        v38[25] = 0;
        *(v38 - 4) = 5;
        v38[7] = *((_DWORD *)v40 - 2);
        v38[8] = *((_DWORD *)v40 - 1);
        v38[9] = *(_DWORD *)v40;
        v38[8] = 1023410176;
        v38[29] = dword_140404A6C[v6 + 280651341];
      }
    }
    v40 += 234;
    v38 += 55;
    --v39;
  }
  while ( v39 );
  if ( !dword_140404A6C[v6 + 280658026]
    && *(float *)&dword_140404A6C[v6 + 280657934] < 0.033333335
    && (int)dword_140404A6C[v6 + 280652451] > 0 )
  {
    dword_140404A6C[v6 + 280658026] = 1;
    dword_140404A6C[v6 + 280658024] = 5;
    dword_140404A6C[v6 + 280658035] = dword_140404A6C[v6 + 280652376];
    dword_140404A6C[v6 + 280658036] = dword_140404A6C[v6 + 280652377];
    dword_140404A6C[v6 + 280658037] = dword_140404A6C[v6 + 280652378];
    dword_140404A6C[v6 + 280658036] = 1023410176;
    v52 = sub_14023F704(a1, a2);
    dword_140404A6C[v6 + 280658057] = LODWORD(v52);
  }
  if ( !dword_140404A6C[v6 + 280658081]
    && *(float *)&dword_140404A6C[v6 + 280657934] < 0.033333335
    && (int)dword_140404A6C[v6 + 280652685] > 0 )
  {
    dword_140404A6C[v6 + 280658081] = 1;
    dword_140404A6C[v6 + 280658079] = 5;
    dword_140404A6C[v6 + 280658090] = dword_140404A6C[v6 + 280652610];
    dword_140404A6C[v6 + 280658091] = dword_140404A6C[v6 + 280652611];
    dword_140404A6C[v6 + 280658092] = dword_140404A6C[v6 + 280652612];
    dword_140404A6C[v6 + 280658091] = 1023410176;
    v53 = sub_14023F704(a1, a2);
    dword_140404A6C[v6 + 280658112] = LODWORD(v53);
  }
  if ( !dword_140404A6C[v6 + 280651325] && *(float *)&dword_140404A6C[v6 + 280657921] < 0.5 )
  {
    dword_140404A6C[v6 + 280657908] = 0;
    dword_140404A6C[v6 + 280658026] = 0;
    dword_140404A6C[v6 + 280658081] = 0;
    if ( dword_140404A6C[v6 + 280651324] )
    {
      if ( fsqrt(
             (float)((float)(*(float *)&dword_140404A6C[v6 + 280657933] * *(float *)&dword_140404A6C[v6 + 280657933])
                   + (float)(*(float *)&dword_140404A6C[v6 + 280657934] * *(float *)&dword_140404A6C[v6 + 280657934]))
           + (float)(*(float *)&dword_140404A6C[v6 + 280657935] * *(float *)&dword_140404A6C[v6 + 280657935])) < 0.0083333338 )
        dword_140404A6C[v6 + 280651325] = 5;
    }
  }
  if ( !dword_140404A6C[v6 + 280658026] && dword_140404A6C[v6 + 280658081] == 1 && dword_140404A6C[v6 + 280652685] )
  {
    dword_140404A6C[v6 + 280658026] = 1;
    dword_140404A6C[v6 + 280658024] = 5;
    dword_140404A6C[v6 + 280658035] = dword_140404A6C[v6 + 280652376];
    dword_140404A6C[v6 + 280658036] = dword_140404A6C[v6 + 280652377];
    dword_140404A6C[v6 + 280658037] = dword_140404A6C[v6 + 280652378];
    dword_140404A6C[v6 + 280658036] = 1023410176;
    v54 = sub_14023F704(a1, a2);
    dword_140404A6C[v6 + 280658057] = LODWORD(v54);
  }
  if ( !dword_140404A6C[v6 + 280658081] && dword_140404A6C[v6 + 280658026] == 1 && dword_140404A6C[v6 + 280652451] )
  {
    dword_140404A6C[v6 + 280658081] = 1;
    dword_140404A6C[v6 + 280658079] = 5;
    dword_140404A6C[v6 + 280658090] = dword_140404A6C[v6 + 280652610];
    dword_140404A6C[v6 + 280658091] = dword_140404A6C[v6 + 280652611];
    dword_140404A6C[v6 + 280658092] = dword_140404A6C[v6 + 280652612];
    dword_140404A6C[v6 + 280658091] = 1023410176;
    v55 = sub_14023F704(a1, a2);
    dword_140404A6C[v6 + 280658112] = LODWORD(v55);
  }
  if ( dword_140404A6C[v6 + 280651325] == 5 )
  {
    v56 = (dword_140404A6C[v6 + 280651436] & 8) == 0;
    dword_140404A6C[v6 + 280657908] = 0;
    if ( v56 )
    {
      dword_140404A6C[v6 + 280658026] = 0;
      dword_140404A6C[v6 + 280658081] = 0;
    }
    else
    {
      v57 = *(float *)&dword_140404A6C[v6 + 280657914];
      v58 = *(float *)&dword_140404A6C[v6 + 280657916];
      v59 = fsqrt(
              (float)((float)(*(float *)&dword_140404A6C[v6 + 280652378] - v58)
                    * (float)(*(float *)&dword_140404A6C[v6 + 280652378] - v58))
            + (float)((float)(*(float *)&dword_140404A6C[v6 + 280652376] - v57)
                    * (float)(*(float *)&dword_140404A6C[v6 + 280652376] - v57)));
      v60 = fsqrt(
              (float)((float)(*(float *)&dword_140404A6C[v6 + 280652612] - v58)
                    * (float)(*(float *)&dword_140404A6C[v6 + 280652612] - v58))
            + (float)((float)(*(float *)&dword_140404A6C[v6 + 280652610] - v57)
                    * (float)(*(float *)&dword_140404A6C[v6 + 280652610] - v57)));
      if ( !dword_140404A6C[v6 + 280658026] && !dword_140404A6C[v6 + 280658081] )
      {
        v61 = v59 > v60;
        v62 = v6 * 4 + 220 * v61;
        *(unsigned int *)((char *)&dword_140404A6C[280658026] + v62) = 3;
        *(unsigned int *)((char *)&dword_140404A6C[280658028] + v62) = 0;
        *(float *)((char *)&dword_140404A6C[280658029] + v62) = *(float *)(a3 + 12 * v61) - *(float *)(v4 + 12 * v61);
        *(float *)((char *)&dword_140404A6C[280658030] + v62) = *(float *)(a3 + 12 * v61 + 4)
                                                              - *(float *)(v4 + 12 * v61 + 4);
        *(float *)((char *)&dword_140404A6C[280658031] + v62) = *(float *)(a3 + 12 * v61 + 8)
                                                              - *(float *)(v4 + 12 * v61 + 8);
      }
    }
    if ( *(float *)&dword_140404A6C[v6 + 280657921] > 0.5 )
    {
      if ( (int)++dword_140404A6C[v6 + 280651326] >= 10 )
        dword_140404A6C[v6 + 280651325] = 0;
    }
    else
    {
      dword_140404A6C[v6 + 280651326] = 0;
    }
  }
  if ( dword_140404A6C[v6 + 280652451] || dword_140404A6C[v6 + 280658026] != 1 )
  {
    dword_140404A6C[v6 + 280658027] = 0;
    v63 = 0;
  }
  else
  {
    v63 = ++dword_140404A6C[v6 + 280658027];
  }
  v64 = dword_140404A6C[v6 + 280658026];
  if ( v64 == 1 && v63 >= 30 )
  {
    v64 = 0;
    dword_140404A6C[v6 + 280658026] = 0;
  }
  if ( dword_140404A6C[v6 + 280652685] || dword_140404A6C[v6 + 280658081] != 1 )
  {
    v56 = dword_140404A6C[v6 + 280658081] == 1;
    v65 = 0;
    dword_140404A6C[v6 + 280658082] = 0;
    if ( !v56 )
      goto LABEL_75;
  }
  else
  {
    v65 = ++dword_140404A6C[v6 + 280658082];
  }
  if ( v65 >= 30 )
    dword_140404A6C[v6 + 280658081] = 0;
LABEL_75:
  if ( v64 == 1 )
  {
    v66 = *(float *)&dword_140404A6C[v6 + 280658053];
    if ( v66 < 1.0 )
      *(float *)&dword_140404A6C[v6 + 280658053] = v66 + 0.5;
    if ( !dword_140404A6C[v6 + 280652451] )
      dword_140404A6C[v6 + 280658053] = 0;
  }
  if ( dword_140404A6C[v6 + 280658081] == 1 )
  {
    v67 = *(float *)&dword_140404A6C[v6 + 280658108];
    if ( v67 < 1.0 )
      *(float *)&dword_140404A6C[v6 + 280658108] = v67 + 0.5;
    if ( !dword_140404A6C[v6 + 280652685] )
      dword_140404A6C[v6 + 280658108] = 0;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v69 ^ v76);
}

