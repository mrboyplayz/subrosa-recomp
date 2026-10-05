/* Address: 0x14014aae0 | Name: sub_14014AAE0 | Size: 1839 bytes */
__int64 __fastcall sub_14014AAE0(int a1)
{
  unsigned int v1; // edi
  float v2; // xmm7_4
  float v3; // xmm0_4
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // rcx
  float *v8; // rax
  float v9; // xmm1_4
  float *v10; // rax
  int v11; // ecx
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  __int64 v16; // rcx
  float *v17; // rax
  signed int v18; // ecx
  float v19; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm3_4
  float v22; // xmm4_4
  float *v23; // rax
  __int64 v24; // r11
  float v25; // xmm8_4
  float v26; // xmm9_4
  float v27; // xmm10_4
  __int64 v28; // rcx
  float *v29; // rax
  __int64 v30; // rcx
  float v31; // xmm3_4
  float v32; // xmm4_4
  float v33; // xmm8_4
  float v34; // xmm9_4
  float v35; // xmm10_4
  float *v36; // rax
  float v37; // xmm1_4
  float v38; // xmm3_4
  __int64 v39; // rdx
  unsigned int *v40; // rcx
  unsigned int *v41; // r8
  unsigned int v42; // eax
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm8_4
  float v47; // xmm9_4
  float v48; // xmm10_4
  unsigned int *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rax
  float v53; // xmm8_4
  unsigned int *v54; // r9
  unsigned int *v55; // r8
  __int64 v56; // r10
  float v57; // xmm10_4
  __int64 v58; // rax
  __int64 v59; // rdx
  float v60; // xmm3_4
  float v61; // xmm2_4
  int v62; // edx
  float v63; // xmm2_4
  float v64; // xmm3_4
  __int64 v65; // rcx
  float *v66; // rax
  __int64 result; // rax
  signed int v68; // r8d
  float v69; // xmm11_4
  float v70; // xmm7_4
  float v71; // xmm2_4
  float v72; // xmm3_4
  float *v73; // rdx
  __int64 v74; // rax
  float v75; // xmm0_4
  signed int v76; // r8d
  unsigned int *v77; // rdx
  float v78; // [rsp+20h] [rbp-68h] BYREF
  float v79; // [rsp+24h] [rbp-64h]
  float v80; // [rsp+28h] [rbp-60h]

  v1 = 0;
  v2 = 0.0;
  v3 = 0.0;
  v5 = 24944LL * a1;
  v6 = dword_140404A6C[v5 + 346707733];
  if ( v6 <= 0 )
  {
    v13 = 0.0;
    v14 = 0.0;
    v15 = 0.0;
  }
  else
  {
    v7 = (unsigned int)v6;
    v8 = (float *)&dword_140404A6C[v5 + 346707738];
    do
    {
      v3 = v3 + *v8;
      v8 += 5;
      --v7;
    }
    while ( v7 );
    v9 = 1.0 / v3;
    v10 = (float *)&dword_140404A6C[v5 + 346707738];
    v11 = 0;
    do
    {
      ++v11;
      v12 = v9 * *v10;
      v10 += 5;
      *(v10 - 5) = v12;
      v6 = dword_140404A6C[v5 + 346707733];
    }
    while ( v11 < v6 );
    v13 = 0.0;
    v14 = 0.0;
    v15 = 0.0;
    if ( v6 > 0 )
    {
      v16 = (unsigned int)v6;
      v17 = (float *)&dword_140404A6C[v5 + 346707737];
      do
      {
        v13 = v13 + *(v17 - 2);
        v14 = v14 + *(v17 - 1);
        v15 = v15 + *v17;
        v17 += 5;
        --v16;
      }
      while ( v16 );
    }
  }
  v18 = 0;
  v19 = 1.0 / (float)v6;
  v20 = v13 * v19;
  v21 = v14 * v19;
  v22 = v15 * v19;
  *(float *)&dword_140404A6C[v5 + 346708247] = v20;
  *(float *)&dword_140404A6C[v5 + 346708248] = v21;
  *(float *)&dword_140404A6C[v5 + 346708249] = v22;
  if ( (int)dword_140404A6C[v5 + 346731811] > 0 )
  {
    v23 = (float *)&dword_140404A6C[v5 + 346731822];
    do
    {
      ++v18;
      *(v23 - 2) = *(v23 - 2) - v20;
      *(v23 - 1) = *(v23 - 1) - v21;
      *v23 = *v23 - v22;
      v23 += 20;
    }
    while ( v18 < (int)dword_140404A6C[v5 + 346731811] );
  }
  v24 = dword_140404A6C[v5 + 346708054];
  v25 = 0.0;
  v26 = 0.0;
  v27 = 0.0;
  if ( (int)v24 > 0 )
  {
    v28 = (unsigned int)v24;
    v29 = (float *)&dword_140404A6C[v5 + 346707737];
    do
    {
      v25 = v25 + *(v29 - 2);
      v26 = v26 + *(v29 - 1);
      v27 = v27 + *v29;
      v29 += 5;
      --v28;
    }
    while ( v28 );
  }
  v30 = dword_140404A6C[v5 + 346707733];
  v31 = 0.0;
  dword_140404A6C[v5 + 346707732] = 0;
  v32 = 1.0 / (float)(int)v24;
  v33 = v25 * v32;
  v34 = v26 * v32;
  v35 = v27 * v32;
  if ( (int)v30 > 0 )
  {
    v36 = (float *)&dword_140404A6C[v5 + 346707737];
    do
    {
      v37 = fsqrt(
              (float)((float)((float)(v34 - *(v36 - 1)) * (float)(v34 - *(v36 - 1)))
                    + (float)((float)(v33 - *(v36 - 2)) * (float)(v33 - *(v36 - 2))))
            + (float)((float)(v35 - *v36) * (float)(v35 - *v36)));
      if ( v31 < v37 )
      {
        *(float *)&dword_140404A6C[v5 + 346707732] = v37;
        v31 = v37;
      }
      v36 += 5;
      --v30;
    }
    while ( v30 );
  }
  v38 = v31 * 1.125;
  *(float *)&dword_140404A6C[v5 + 346707732] = v38;
  if ( dword_140404A6C[v5 + 346707717] )
  {
    v46 = 0.0;
    v47 = 0.0;
    v48 = 0.0;
    if ( (int)v24 <= 0 )
    {
      v53 = 0.0;
      v34 = 0.0;
      v57 = 0.0;
    }
    else
    {
      v49 = &dword_140404A6C[v5 + 346708055];
      v50 = v24;
      do
      {
        v51 = (int)*v49++;
        v52 = v5 * 4 + 20 * v51;
        v46 = v46 + *(float *)((char *)&dword_140404A6C[346707735] + v52);
        v47 = v47 + *(float *)((char *)&dword_140404A6C[346707736] + v52);
        v48 = v48 + *(float *)((char *)&dword_140404A6C[346707737] + v52);
        --v50;
      }
      while ( v50 );
      v53 = v46 * v32;
      v54 = &dword_140404A6C[v5 + 346708055];
      v55 = &dword_140404A6C[346706183];
      v56 = v24;
      v34 = v47 * v32;
      v57 = v48 * v32;
      do
      {
        v58 = (int)*v54;
        v55 += 3;
        ++v54;
        v59 = v5 * 4 + 20 * v58;
        *(v55 - 5) = *(unsigned int *)((char *)&dword_140404A6C[346707735] + v59);
        *(v55 - 4) = *(unsigned int *)((char *)&dword_140404A6C[346707736] + v59);
        *(v55 - 3) = *(unsigned int *)((char *)&dword_140404A6C[346707737] + v59);
        --v56;
      }
      while ( v56 );
    }
    v60 = v38 * 0.25;
    v78 = (float)(*(float *)&dword_1402F6198 * v60) + v53;
    v79 = (float)(*(float *)&dword_1402F619C * v60) + v34;
    v80 = (float)(*(float *)&dword_1402F61A0 * v60) + v57;
    sub_14002E730((__int64)&dword_140404A6C[v5 + 346708183], v24, (__int64)&dword_140404A6C[346706181], &v78);
    v61 = *(float *)&dword_140404A6C[v5 + 346707732] * 0.25;
    v45 = v61 * *(float *)&dword_1402F617C;
    v78 = (float)(v61 * *(float *)&dword_1402F6178) + v53;
    v80 = (float)(v61 * *(float *)&dword_1402F6180) + v57;
  }
  else
  {
    if ( (int)v24 > 0 )
    {
      v39 = v24;
      v40 = &dword_140404A6C[v5 + 346707737];
      v41 = &dword_140404A6C[346706183];
      do
      {
        v42 = *(v40 - 2);
        v40 += 5;
        *(v41 - 2) = v42;
        v41 += 3;
        *(v41 - 4) = *(v40 - 6);
        *(v41 - 3) = *(v40 - 5);
        --v39;
      }
      while ( v39 );
    }
    v43 = v38 * 0.25;
    v78 = (float)(*(float *)&dword_1402F6198 * v43) + v33;
    v79 = (float)(*(float *)&dword_1402F619C * v43) + v34;
    v80 = (float)(*(float *)&dword_1402F61A0 * v43) + v35;
    sub_14002E730((__int64)&dword_140404A6C[v5 + 346708183], v24, (__int64)&dword_140404A6C[346706181], &v78);
    v44 = *(float *)&dword_140404A6C[v5 + 346707732] * 0.25;
    v45 = *(float *)&dword_1402F617C * v44;
    v78 = (float)(*(float *)&dword_1402F6178 * v44) + v33;
    v80 = (float)(*(float *)&dword_1402F6180 * v44) + v35;
  }
  v79 = v45 + v34;
  sub_14002E730(
    (__int64)&dword_140404A6C[v5 + 346708119],
    dword_140404A6C[v5 + 346708054],
    (__int64)&dword_140404A6C[346706181],
    &v78);
  v62 = dword_140404A6C[v5 + 346708054];
  v63 = 0.0;
  v64 = 0.0;
  if ( v62 > 0 )
  {
    v65 = (unsigned int)v62;
    v66 = (float *)&dword_140404A6C[v5 + 346707737];
    do
    {
      v2 = v2 + *(v66 - 2);
      v63 = v63 + *(v66 - 1);
      v64 = v64 + *v66;
      v66 += 5;
      --v65;
    }
    while ( v65 );
  }
  result = 0;
  v68 = 0;
  dword_140404A6C[v5 + 346715422] = 0;
  v69 = 1.0 / (float)v62;
  v70 = v2 * v69;
  v71 = v63 * v69;
  v72 = v64 * v69;
  if ( (int)dword_140404A6C[v5 + 346707733] > 0 )
  {
    v73 = (float *)&dword_140404A6C[v5 + 346707737];
    do
    {
      ++v68;
      v74 = v5 * 4 + 12LL * (int)result;
      *(float *)((char *)&dword_140404A6C[346715423] + v74) = *(v73 - 2) - v70;
      *(float *)((char *)&dword_140404A6C[346715424] + v74) = *(v73 - 1) - v71;
      v75 = *v73;
      v73 += 5;
      *(float *)((char *)&dword_140404A6C[346715425] + v74) = v75 - v72;
      result = dword_140404A6C[v5 + 346715422] + 1;
      dword_140404A6C[v5 + 346715422] = result;
    }
    while ( v68 < (int)dword_140404A6C[v5 + 346707733] );
  }
  v76 = 0;
  dword_140404A6C[v5 + 346718495] = 0;
  if ( (int)dword_140404A6C[v5 + 346709019] > 0 )
  {
    v77 = &dword_140404A6C[v5 + 346709020];
    do
    {
      if ( v77[15] != 1 )
      {
        dword_140404A6C[13 * (int)v1 + 346718496 + v5] = *v77;
        dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718497 + v5] = v77[1];
        dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718498 + v5] = v77[2];
        dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718499 + v5] = v77[3];
        result = v77[4];
        dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718500 + v5] = result;
        v1 = dword_140404A6C[v5 + 346718495] + 1;
        dword_140404A6C[v5 + 346718495] = v1;
      }
      ++v76;
      v77 += 16;
    }
    while ( v76 < (int)dword_140404A6C[v5 + 346709019] );
  }
  if ( !a1 )
  {
    dword_140404A6C[13 * (int)v1 + 346718496 + v5] = 4;
    dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718497 + v5] = 10;
    dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718498 + v5] = 11;
    dword_140404A6C[13 * (int)dword_140404A6C[v5 + 346718495] + 346718499 + v5] = 13;
    result = (int)dword_140404A6C[v5 + 346718495];
    dword_140404A6C[13 * result + 346718500 + v5] = 12;
    ++dword_140404A6C[v5 + 346718495];
  }
  return result;
}

