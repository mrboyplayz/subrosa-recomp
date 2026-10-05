/* Address: 0x1401178f0 | Name: sub_1401178F0 | Size: 4338 bytes */
__int64 __fastcall sub_1401178F0(int a1)
{
  __int64 v1; // r15
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  int v5; // eax
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebp
  unsigned int *v11; // rbx
  char v12; // al
  __int64 v13; // r13
  unsigned int v14; // xmm6_4
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  double v21; // xmm0_8
  float v22; // xmm1_4
  float v23; // xmm6_4
  signed int v24; // ebx
  __int64 v25; // rax
  float v26; // xmm1_4
  float v27; // xmm2_4
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  float v32; // xmm1_4
  float v33; // xmm8_4
  float v34; // xmm10_4
  float *v35; // rbx
  float v36; // xmm2_4
  float v37; // xmm1_4
  int v38; // ebp
  __int64 v39; // rax
  float v40; // xmm7_4
  double v41; // xmm0_8
  bool v42; // cc
  bool v43; // zf
  __int64 v44; // rbx
  __int64 v45; // rcx
  float v46; // xmm0_4
  __int64 v47; // rax
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm4_4
  unsigned int v51; // xmm3_4
  float v52; // xmm2_4
  int v53; // eax
  __int64 v54; // rdx
  unsigned int v55; // ecx
  float v56; // xmm6_4
  float v57; // xmm11_4
  __int64 v58; // rax
  float v59; // xmm2_4
  float v60; // xmm3_4
  float v61; // xmm9_4
  float v62; // xmm13_4
  float v63; // xmm0_4
  float v64; // xmm9_4
  float v65; // xmm12_4
  float v66; // xmm10_4
  double v67; // xmm0_8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rcx
  float v75; // xmm3_4
  float v76; // xmm2_4
  float v77; // xmm4_4
  float *v78; // rbx
  float *v79; // r15
  int v80; // ebp
  __int64 v81; // rax
  float v82; // xmm0_4
  __int64 v84; // [rsp+0h] [rbp-128h] BYREF
  int v85; // [rsp+20h] [rbp-108h]
  float v86; // [rsp+28h] [rbp-100h] BYREF
  float v87; // [rsp+2Ch] [rbp-FCh]
  float v88; // [rsp+30h] [rbp-F8h]
  _OWORD v89[2]; // [rsp+40h] [rbp-E8h] BYREF
  int v90; // [rsp+60h] [rbp-C8h]
  __int64 v91; // [rsp+68h] [rbp-C0h]

  v1 = a1;
  v2 = 3597LL * a1;
  v3 = 3597LL * a1;
  v4 = 0;
  v85 = a1;
  *(_QWORD *)&dword_140404A6C[v2 + 71856293] = 0;
  *(_QWORD *)&dword_140404A6C[v2 + 71856295] = 0;
  v5 = dword_140404A6C[v3 + 71859665];
  dword_140404A6C[v3 + 71856325] = 0;
  if ( v5 > 0 )
  {
    dword_140404A6C[v3 + 71859665] = v5 - 1;
    return MEMORY[0x1401F8B20]((unsigned __int64)&v84 ^ v91);
  }
  v6 = (int)dword_140404A6C[v3 + 71856292];
  if ( (_DWORD)v6 == -1 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v84 ^ v91);
  v7 = 7166 * v6;
  if ( dword_140404A6C[7166 * v6 + 280658335] == -1 && (int)dword_140404A6C[v7 + 280658139] > 0 )
  {
    v8 = 1760LL * (int)dword_140404A6C[v7 + 280658140];
    if ( dword_140404A6C[v8 + 278845974] )
      goto LABEL_27;
    if ( !dword_140404A6C[v8 + 278845906] )
    {
      if ( (int)dword_140404A6C[v7 + 280658149] <= 0 )
      {
        v10 = 4;
        v4 = 4;
        v11 = &dword_140404A6C[v7 + 280658170];
        do
        {
          if ( (int)*(v11 - 1) > 0
            && dword_140404A6C[1268 * dword_140404A6C[1760 * *v11 + 278845898]
                             + 278521356
                             + dword_140404A6C[1760 * dword_140404A6C[v7 + 280658140] + 278845898]]
            && (rand() & 1) == 0 )
          {
            dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
            dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = v10;
            dword_140404A6C[3597 * v1 + 71856369 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
            dword_140404A6C[3597 * v1 + 71856370 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 0;
            dword_140404A6C[3597 * v1 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v1 + 71856362] + 1) & 0x3F;
          }
          ++v10;
          v11 += 10;
          --v4;
        }
        while ( v4 );
        goto LABEL_27;
      }
      if ( (int)dword_140404A6C[1760 * dword_140404A6C[v7 + 280658150] + 278845974] <= 0 )
      {
        if ( (rand() & 0x1F) != 0 )
          goto LABEL_27;
        v9 = 3597 * v1;
        dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
        dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 2;
        goto LABEL_12;
      }
      if ( (rand() & 0x1F) == 0 )
      {
        v9 = 3597 * v1;
        dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
        dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
LABEL_12:
        dword_140404A6C[21 * (int)dword_140404A6C[v9 + 71856362] + 71856369 + v9] = 1;
        dword_140404A6C[21 * (int)dword_140404A6C[v9 + 71856362] + 71856370 + v9] = 0;
        dword_140404A6C[v9 + 71856362] = ((unsigned __int8)dword_140404A6C[v9 + 71856362] + 1) & 0x3F;
      }
LABEL_27:
      a1 = v85;
      goto LABEL_28;
    }
    if ( (int)dword_140404A6C[1760 * dword_140404A6C[v8 + 278845907] + 278845974] <= 0 )
    {
      if ( (rand() & 0x1F) == 0 )
      {
        dword_140404A6C[3597 * v1 + 71856367 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 3;
        dword_140404A6C[3597 * v1 + 71856368 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
        dword_140404A6C[3597 * v1 + 71856369 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 1;
        dword_140404A6C[3597 * v1 + 71856370 + 21 * (int)dword_140404A6C[3597 * v1 + 71856362]] = 0;
        dword_140404A6C[3597 * v1 + 71856362] = ((unsigned __int8)dword_140404A6C[3597 * v1 + 71856362] + 1) & 0x3F;
      }
      goto LABEL_27;
    }
    v12 = rand();
    a1 = v85;
    if ( (v12 & 0x1F) == 0 )
      dword_140404A6C[3597 * v1 + 71856325] |= 0x1000u;
  }
LABEL_28:
  v13 = (int)dword_140404A6C[v7 + 280651313];
  if ( (_DWORD)v13 == -1 )
  {
    sub_140008440(a1, v6);
    dword_140404A6C[v3 + 71856339] = 1;
    v89[0] = xmmword_140278D30;
    v90 = 1065353216;
    v89[1] = xmmword_140278D30;
    sub_14007B2A0((__int64)v89, (float *)&dword_1402F6188);
    v14 = dword_140404A6C[v7 + 280651357];
    v21 = sub_14000B5F0(v16, v15, v17);
    v22 = *(float *)&dword_140404A6C[v3 + 71856297] - *(float *)&v21;
    dword_140404A6C[v3 + 71856301] = v14;
    *(float *)&dword_140404A6C[v3 + 71856297] = v22;
    if ( v22 >= -2.74889357189125 )
    {
      if ( v22 > 2.74889357189125 )
        dword_140404A6C[v3 + 71856297] = 1076882911;
    }
    else
    {
      dword_140404A6C[v3 + 71856297] = -1070600737;
    }
    if ( *(float *)&dword_140404A6C[v7 + 280651456] < 0.89999998 )
    {
      if ( (dword_140404A6C[283831474] & 0x7F) > 0x40 )
        dword_140404A6C[v3 + 71856325] |= 8u;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v84 ^ v91);
    }
    v23 = 0.0;
    if ( (int)dword_140404A6C[v3 + 71859146] < (int)dword_140404A6C[v3 + 71859147] )
    {
      dword_140404A6C[v3 + 71856296] = 1065353216;
      v24 = dword_140404A6C[v3 + 71859146];
      v25 = v3 * 4 + 32LL * v24;
      v26 = *(float *)((char *)&dword_140404A6C[71859148] + v25) - *(float *)&dword_140404A6C[v7 + 280651335];
      v27 = *(float *)((char *)&dword_140404A6C[71859150] + v25) - *(float *)&dword_140404A6C[v7 + 280651337];
      sub_14023F704(&dword_140404A6C[71859148], v18);
      if ( (float)((float)(v27 * v27) + (float)(v26 * v26)) < 4.0 )
      {
        v28 = v24 + 1;
        if ( v24 + 1 >= (int)dword_140404A6C[v3 + 71859147] )
          v28 = 0;
        dword_140404A6C[v3 + 71859146] = v28;
      }
    }
    if ( (int)dword_140404A6C[v3 + 71859668] <= 0 )
      goto LABEL_67;
    v19 = 3LL * (int)dword_140404A6C[v3 + 71859669];
    v29 = v3 * 4 + 24LL * (int)dword_140404A6C[v3 + 71859669];
    if ( *(float *)((char *)&dword_140404A6C[71859674] + v29) < 2.0
      && fabs(*(float *)((char *)&dword_140404A6C[71859672] + v29) - *(float *)&dword_140404A6C[v7 + 280651336]) < 2.0
      && (rand() & 0x1F) == 0 )
    {
      v30 = (int)dword_140404A6C[v3 + 71859669];
      *(_QWORD *)&dword_140404A6C[v3 + 71859146] = 0;
      v19 = 3 * v30;
      v18 = &dword_140404A6C[6 * v30 + 71859671 + v3];
      dword_140404A6C[v3 + 71859148] = *v18;
      dword_140404A6C[v3 + 71859149] = v18[1];
      dword_140404A6C[v3 + 71859150] = v18[2];
      ++dword_140404A6C[v3 + 71859147];
    }
    if ( (int)dword_140404A6C[v3 + 71859668] <= 0 )
      goto LABEL_67;
    v19 = 3LL * (int)dword_140404A6C[v3 + 71859669];
    v31 = v3 * 4 + 24LL * (int)dword_140404A6C[v3 + 71859669];
    if ( *(float *)((char *)&dword_140404A6C[71859674] + v31) <= 12.0 )
      goto LABEL_67;
    v32 = *(float *)((char *)&dword_140404A6C[71859673] + v31) - *(float *)&dword_140404A6C[v7 + 280651988];
    v33 = (float)(*(float *)((char *)&dword_140404A6C[71859672] + v31) - *(float *)&dword_140404A6C[v7 + 280651987])
        - 0.25;
    v34 = (float)((float)(v33 * v33)
                + (float)((float)(*(float *)((char *)&dword_140404A6C[71859671] + v31)
                                - *(float *)&dword_140404A6C[v7 + 280651986])
                        * (float)(*(float *)((char *)&dword_140404A6C[71859671] + v31)
                                - *(float *)&dword_140404A6C[v7 + 280651986])))
        + (float)(v32 * v32);
    sub_14023F704(v19, v18);
    v23 = sub_14023EDE4();
    if ( dword_140404A6C[v3 + 71859140] == 1
      && (dword_140404A6C[v3 + 71856296] = 1065353216, dword_140404A6C[v3 + 71859140] == 1)
      || v34 >= 1024.0 )
    {
      if ( v34 >= 4096.0 )
      {
LABEL_67:
        v40 = *(float *)&dword_140404A6C[v3 + 71856297];
        v41 = sub_14000B5F0(v19, v18, v20);
        *(float *)&dword_140404A6C[v3 + 71856297] = (float)(*(float *)&v41 * 0.5) + v40;
        *(float *)&dword_140404A6C[v3 + 71856298] = (float)((float)(v23 - *(float *)&dword_140404A6C[v3 + 71856298])
                                                          * 0.0625)
                                                  + *(float *)&dword_140404A6C[v3 + 71856298];
        v42 = (int)dword_140404A6C[v3 + 71859668] <= 0;
        dword_140404A6C[v3 + 71856330] = 1;
        if ( !v42 && *(float *)&dword_140404A6C[v3 + 71859674] > 8.0 )
          dword_140404A6C[v3 + 71856330] = 0;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v84 ^ v91);
      }
    }
    else
    {
      dword_140404A6C[v3 + 71856296] = 0;
    }
    if ( fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64(sub_14000B5F0(v19, v18, v20)))) < 0.125
      && fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64(sub_14000B5F0(v19, v18, v20)))) < 0.125 )
    {
      v35 = (float *)&dword_140404A6C[280651676];
      v36 = *(float *)&dword_140404A6C[v7 + 280652159] * 64.0;
      v37 = *(float *)&dword_140404A6C[v7 + 280652158] * 64.0;
      v38 = 0;
      v86 = *(float *)(0x140000000LL + v7 * 4 + 1126821924) - (float)(*(float *)&dword_140404A6C[v7 + 280652157] * 64.0);
      v87 = *(float *)(0x140000004LL + v7 * 4 + 1126821924) - v37;
      v88 = *(float *)(0x140000008LL + v7 * 4 + 1126821924) - v36;
      while ( 1 )
      {
        if ( *((_DWORD *)v35 - 373) )
        {
          if ( v38 != (_DWORD)v6 )
          {
            v39 = *((int *)v35 - 371);
            if ( (_DWORD)v39 != -1 )
            {
              v19 = 14388 * v39;
              if ( dword_140404A6C[3597 * v39 + 71856286] == dword_140404A6C[v3 + 71856286]
                && (float)((float)((float)((float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v35 - 1))
                                         * (float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v35 - 1)))
                                 + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v35 - 2))
                                         * (float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v35 - 2))))
                         + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v35)
                                 * (float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v35))) < 16384.0
                && sub_1400DB060(v38, (float *)(0x140000000LL + v7 * 4 + 1126821924), &v86, 0.25) )
              {
                break;
              }
            }
          }
        }
        ++v38;
        v35 += 7166;
        if ( v38 >= 256 )
        {
          if ( (int)dword_140404A6C[v7 + 280658139] > 0 )
          {
            v19 = 7040LL * (int)dword_140404A6C[v7 + 280658140];
            if ( *(int *)((char *)&dword_140404A6C[278845974] + v19) > 0 && (rand() & 3) == 0 )
              dword_140404A6C[v3 + 71856325] |= 1u;
          }
          goto LABEL_67;
        }
      }
    }
    goto LABEL_67;
  }
  v43 = dword_140404A6C[v7 + 280651314] == 0;
  dword_140404A6C[v3 + 71856339] = 2;
  if ( v43 )
  {
    if ( dword_140404A6C[283831448] == 1 )
    {
      dword_140404A6C[v3 + 71856296] = -1082130432;
    }
    else
    {
      v44 = 5210 * v13;
      v45 = (int)dword_140404A6C[5210 * v13 + 129720183];
      if ( (_DWORD)v45 != -1 )
      {
        dword_140404A6C[383 * v45 + 132400669] = 1;
        sub_140009E30(v45);
        v46 = *(float *)&dword_140404A6C[v44 + 129716744] * *(float *)&dword_140404A6C[v44 + 129716732];
        v47 = (int)dword_140404A6C[v44 + 129720183];
        v48 = *(float *)&dword_140404A6C[v44 + 129716745] * *(float *)&dword_140404A6C[v44 + 129716733];
        dword_140404A6C[v3 + 71856293] = 0x40000000;
        v49 = *(float *)&dword_140404A6C[v44 + 129716746] * *(float *)&dword_140404A6C[v44 + 129716734];
        dword_140404A6C[v3 + 71856295] = -1082130432;
        v50 = *(float *)&dword_140404A6C[383 * v47 + 132400658];
        v51 = dword_140404A6C[383 * v47 + 132400657];
        dword_140404A6C[v3 + 71856294] = v51;
        v52 = (float)((float)(v48 + v46) + (float)(v49 + v50)) * 8.0;
        if ( v52 > 1.0 )
          v52 = 1.0;
        *(float *)&dword_140404A6C[v3 + 71856296] = v52 / (float)(fabs(*(float *)&v51) + 1.0);
        if ( v50 < 0.050000001 )
          dword_140404A6C[v3 + 71856296] = -1082130432;
        v53 = dword_140404A6C[383 * v47 + 132401001];
        dword_140404A6C[v3 + 71856325] = 0;
        if ( v53 >= 180 )
        {
          dword_140404A6C[v3 + 71856296] = 1065353216;
          *(_QWORD *)&dword_140404A6C[v3 + 71856293] = 0x40000000;
          dword_140404A6C[v3 + 71856295] = 1065353216;
          if ( v53 >= 280 )
            dword_140404A6C[v3 + 71856296] = -1082130432;
        }
      }
    }
  }
  else
  {
    sub_140008440(a1, v6);
    v55 = dword_140404A6C[v7 + 280651314];
    v56 = 0.0;
    v57 = 0.0;
    if ( v55 == 1 )
    {
      v57 = 0.78539819;
    }
    else if ( ((v55 - 2) & 0xFFFFFFFD) != 0 )
    {
      if ( ((v55 - 3) & 0xFFFFFFFD) == 0 )
        v57 = 2.3561945;
    }
    else
    {
      v57 = -2.3561945;
    }
    if ( (int)dword_140404A6C[v3 + 71859668] > 0 )
    {
      v58 = v3 * 4 + 24LL * (int)dword_140404A6C[v3 + 71859669];
      if ( *(float *)((char *)&dword_140404A6C[71859674] + v58) > 8.0 )
      {
        v59 = *(float *)((char *)&dword_140404A6C[71859671] + v58) - *(float *)&dword_140404A6C[v7 + 280652142];
        v60 = *(float *)((char *)&dword_140404A6C[71859673] + v58) - *(float *)&dword_140404A6C[v7 + 280652144];
        v61 = (float)(*(float *)((char *)&dword_140404A6C[71859672] + v58) - *(float *)&dword_140404A6C[v7 + 280652143])
            - 0.25;
        v62 = (float)((float)(v61 * v61) + (float)(v59 * v59)) + (float)(v60 * v60);
        v63 = fsqrt(v62);
        if ( v63 == 0.0 )
        {
          v65 = 0.0;
          v64 = 0.0;
          v66 = 0.0;
        }
        else
        {
          v64 = v61 * (float)(1.0 / v63);
          v65 = (float)(1.0 / v63) * v59;
          v66 = (float)(1.0 / v63) * v60;
        }
        v67 = sub_14023F704(3LL * (int)dword_140404A6C[v3 + 71859669], v54);
        v57 = *(float *)&v67;
        v56 = sub_14023EDE4();
        if ( v62 < 1024.0
          && fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64(sub_14000B5F0(v69, v68, v70)))) < 0.125
          && fabs(COERCE_FLOAT(COERCE_UNSIGNED_INT64(sub_14000B5F0(v72, v71, v73)))) < 0.125 )
        {
          v74 = 1760LL * (int)dword_140404A6C[1760 * dword_140404A6C[v7 + 280658140] + 278845907];
          v75 = *(float *)&dword_140404A6C[v74 + 278845941];
          v76 = *(float *)&dword_140404A6C[v74 + 278845940];
          v77 = *(float *)&dword_140404A6C[v74 + 278845942];
          if ( (float)((float)((float)(v65 * v76) + (float)(v64 * v75)) + (float)(v66 * v77)) < -0.9975 )
          {
            v78 = (float *)&dword_140404A6C[280651676];
            v79 = (float *)(0x140000000LL + v74 * 4 + 1119597020);
            v80 = 0;
            v86 = *v79 - (float)(v76 * 64.0);
            v87 = *(float *)(0x140000004LL + v74 * 4 + 1119597020) - (float)(v75 * 64.0);
            v88 = *(float *)(0x140000008LL + v74 * 4 + 1119597020) - (float)(v77 * 64.0);
            while ( 1 )
            {
              if ( *((_DWORD *)v78 - 373) )
              {
                if ( v4 != v6 )
                {
                  v81 = *((int *)v78 - 371);
                  if ( (_DWORD)v81 != -1
                    && dword_140404A6C[3597 * v81 + 71856286] == dword_140404A6C[v3 + 71856286]
                    && (float)((float)((float)((float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v78 - 1))
                                             * (float)(*(float *)&dword_140404A6C[v7 + 280651675] - *(v78 - 1)))
                                     + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v78 - 2))
                                             * (float)(*(float *)&dword_140404A6C[v7 + 280651674] - *(v78 - 2))))
                             + (float)((float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v78)
                                     * (float)(*(float *)&dword_140404A6C[v7 + 280651676] - *v78))) < 4096.0
                    && sub_1400DB060(v80, v79, &v86, 0.25) )
                  {
                    break;
                  }
                }
              }
              ++v80;
              ++v4;
              v78 += 7166;
              if ( v80 >= 256 )
              {
                if ( (!(unsigned int)sub_1400DC940((unsigned int)v13, v79, &v86, 0)
                   || dword_140404A6C[73006993] == -1
                   || dword_140404A6C[73006992] == 1)
                  && (int)dword_140404A6C[v7 + 280658139] > 0
                  && (int)dword_140404A6C[1760 * dword_140404A6C[v7 + 280658140] + 278845974] > 0 )
                {
                  dword_140404A6C[v3 + 71856325] |= 1u;
                }
                break;
              }
            }
          }
        }
      }
    }
    v82 = *(float *)&dword_140404A6C[v3 + 71856298];
    *(float *)&dword_140404A6C[v3 + 71856297] = (float)((float)(v57 - *(float *)&dword_140404A6C[v3 + 71856297]) * 0.0625)
                                              + *(float *)&dword_140404A6C[v3 + 71856297];
    *(float *)&dword_140404A6C[v3 + 71856298] = (float)((float)(v56 - v82) * 0.0625) + v82;
  }
  if ( (int)dword_140404A6C[5210 * v13 + 129716712] > 0 )
  {
    dword_140404A6C[v3 + 71859667] = 0;
  }
  else if ( (int)++dword_140404A6C[v3 + 71859667] >= 180 )
  {
    dword_140404A6C[v3 + 71856325] |= 0x800u;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v84 ^ v91);
}

