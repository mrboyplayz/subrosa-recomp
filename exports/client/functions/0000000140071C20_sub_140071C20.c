/* Address: 0x140071c20 | Name: sub_140071C20 | Size: 1695 bytes */
__int64 __fastcall sub_140071C20(unsigned __int8 *a1, float a2, float a3, float a4, float a5, int a6, __int16 a7)
{
  __int64 v7; // r15
  float v8; // xmm6_4
  float v9; // xmm7_4
  unsigned __int8 *v10; // rdi
  unsigned int v11; // r12d
  unsigned int *v12; // rdx
  int v13; // r8d
  signed int v14; // ebx
  BOOL v15; // edx
  __int64 v16; // rbp
  __int64 v17; // r13
  unsigned int *v18; // rax
  __int64 v20; // rsi
  char *v21; // rcx
  unsigned __int8 v22; // al
  int v23; // edx
  _BYTE *v24; // rcx
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned int *v28; // rcx
  __int64 v29; // r9
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  unsigned int v34; // xmm5_4
  unsigned int v35; // xmm7_4
  float v36; // xmm4_4
  unsigned int v37; // xmm1_4
  float v38; // xmm6_4
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // xmm0_4
  unsigned int v42; // xmm0_4
  float v43; // xmm5_4
  float v44; // xmm5_4
  float v45; // xmm7_4
  float v46; // xmm7_4
  float v47; // xmm0_4
  float v48; // xmm2_4

  v7 = (int)dword_140404A6C[70087046];
  v8 = a2;
  v9 = a3;
  v10 = a1;
  v11 = sub_14006C670(a1, 1u);
  v12 = &dword_140404A6C[70290892];
  v13 = 0;
  v14 = -1;
  do
  {
    if ( *(v12 - 1) - 1 <= 1 && *v12 == v11 )
      v14 = v13;
    ++v13;
    v12 += 98;
  }
  while ( v13 < 256 );
  v15 = 0;
  if ( v14 == -1 )
  {
    v14 = 0;
    v18 = &dword_140404A6C[70290891];
    while ( *v18 )
    {
      ++v14;
      v18 += 98;
      if ( (__int64)v18 >= (__int64)&dword_140404A6C[70315979] )
        return 0xFFFFFFFFLL;
    }
    if ( v14 == -1 )
      return 0xFFFFFFFFLL;
    v16 = v14;
    v17 = v14;
    goto LABEL_18;
  }
  if ( (a7 & 0x100) != 0 )
    v15 = dword_140404A6C[98 * v14 + 70290891] == 1;
  v16 = v14;
  v17 = v14;
  if ( v15 )
  {
LABEL_18:
    if ( (a7 & 1) != 0 )
    {
      v8 = a2 + (float)(a4 * -0.5);
    }
    else if ( (a7 & 2) != 0 )
    {
      v8 = a2 - a4;
    }
    if ( (a7 & 4) != 0 )
    {
      v9 = a3 + (float)(a5 * -0.5);
    }
    else if ( (a7 & 8) != 0 )
    {
      v9 = a3 - a5;
    }
    v20 = 98 * v17;
    MEMORY[0x1401FCD30](&dword_140404A6C[98 * v17 + 70290891], 0, 392);
    *(float *)&dword_140404A6C[v20 + 70290899] = a5;
    *(float *)&dword_140404A6C[v20 + 70290896] = v8;
    *(float *)&dword_140404A6C[v20 + 70290897] = v9;
    *(float *)&dword_140404A6C[v20 + 70290898] = a4;
    dword_140404A6C[v20 + 70290901] = 1101004800;
    if ( (a7 & 0x200) != 0 )
    {
      dword_140404A6C[v20 + 70290901] = 0;
      dword_140404A6C[v20 + 70290972] = 1;
    }
    dword_140404A6C[v20 + 70290900] = 0x40000000;
    v21 = (char *)&dword_140404A6C[70087029] + v20 * 4 - (_QWORD)v10;
    do
    {
      v22 = *v10;
      v10[(_QWORD)v21 + 815516] = *v10;
      ++v10;
    }
    while ( v22 );
    v23 = 0;
    v24 = (char *)&dword_140404A6C[v20 + 70290908] + 1;
    do
    {
      v25 = *(v24 - 1);
      if ( !v25 || v25 == 35 && *v24 == 35 )
        break;
      ++v24;
      ++v23;
    }
    while ( v24 - ((char *)&dword_140404A6C[v20 + 70290908] + 1) < 255 );
    *((_BYTE *)&dword_140404A6C[v20 + 70290908] + v23) = 0;
  }
  v26 = 98 * v17;
  if ( (int)dword_140404A6C[98 * v17 + 70290891] <= 1 )
  {
    v27 = 0;
    v28 = &dword_140404A6C[70290895];
    v29 = 256;
    do
    {
      if ( (int)*(v28 - 4) >= 2 && v27 != v16 && *(v28 - 2) == (_DWORD)v7 && (int)*v28 < 256 )
        ++*v28;
      ++v27;
      v28 += 98;
      --v29;
    }
    while ( v29 );
    dword_140404A6C[v26 + 70290895] = 0;
    dword_140404A6C[v26 + 70290894] = dword_140404A6C[70087103];
    dword_140404A6C[70087103] = v14;
  }
  dword_140404A6C[v26 + 70290891] = 3;
  dword_140404A6C[v26 + 70290892] = v11;
  dword_140404A6C[v26 + 70290893] = v7;
  if ( dword_140404A6C[70317860] == v14 )
  {
    if ( dword_140404A6C[70317859] )
    {
      if ( dword_140404A6C[70317859] == 1 )
      {
        v32 = (float)(*(float *)&dword_140404A6C[70317781] - *(float *)&dword_140404A6C[70317862])
            - *(float *)&dword_140404A6C[v26 + 70290973];
        *(float *)&dword_140404A6C[v26 + 70290898] = v32;
        v33 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[70317863];
        *(float *)&dword_140404A6C[v26 + 70290898] = fmaxf(v32, 64.0);
        *(float *)&dword_140404A6C[v26 + 70290899] = fmaxf(v33 - *(float *)&dword_140404A6C[v26 + 70290974], 64.0);
      }
    }
    else
    {
      v30 = *(float *)&dword_140404A6C[70317781] - *(float *)&dword_140404A6C[70317862];
      *(float *)&dword_140404A6C[v26 + 70290896] = *(float *)&dword_140404A6C[70317781]
                                                 - *(float *)&dword_140404A6C[70317862];
      v31 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[70317863];
      *(float *)&dword_140404A6C[v26 + 70290896] = fmaxf(v30, 4.0);
      *(float *)&dword_140404A6C[v26 + 70290897] = fmaxf(v31, 4.0);
    }
  }
  v34 = dword_140404A6C[v26 + 70290896];
  v35 = dword_140404A6C[v26 + 70290897];
  if ( (_DWORD)v7 != -1 )
  {
    *(float *)&v34 = *(float *)&v34 + *(float *)&dword_140404A6C[98 * v7 + 70290981];
    *(float *)&v35 = (float)(*(float *)&dword_140404A6C[98 * v7 + 70290982]
                           - *(float *)&dword_140404A6C[98 * v7 + 70290905])
                   + *(float *)&v35;
  }
  v36 = *(float *)&dword_140404A6C[v26 + 70290900];
  v37 = dword_140404A6C[v26 + 70290901];
  v38 = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290973] = v34;
  v39 = dword_140404A6C[v26 + 70290898];
  dword_140404A6C[v26 + 70290974] = v35;
  dword_140404A6C[v26 + 70290975] = v39;
  v40 = dword_140404A6C[v26 + 70290899];
  *(float *)&dword_140404A6C[v26 + 70290977] = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290976] = v40;
  *(float *)&v41 = *(float *)&dword_140404A6C[v26 + 70290898] - (float)(v36 + v36);
  *(float *)&dword_140404A6C[v26 + 70290978] = *(float *)&v35 + v36;
  dword_140404A6C[v26 + 70290980] = v37;
  *(float *)&dword_140404A6C[v26 + 70290981] = *(float *)&v34 + v36;
  dword_140404A6C[v26 + 70290979] = v41;
  *(float *)&v42 = *(float *)&dword_140404A6C[v26 + 70290898] - (float)(v36 + v36);
  *(float *)&dword_140404A6C[v26 + 70290982] = (float)(*(float *)&v35 + v36) + *(float *)&v37;
  dword_140404A6C[v26 + 70290983] = v42;
  *(float *)&dword_140404A6C[v26 + 70290984] = (float)(*(float *)&dword_140404A6C[v26 + 70290899] - (float)(v36 + v36))
                                             - *(float *)&v37;
  v43 = (float)(*(float *)&v34 + *(float *)&dword_140404A6C[v26 + 70290898]) - 16.0;
  *(float *)&dword_140404A6C[v26 + 70290987] = v36 + 16.0;
  v44 = v43 - v36;
  *(float *)&dword_140404A6C[v26 + 70290985] = v44;
  v45 = *(float *)&v35 + *(float *)&dword_140404A6C[v26 + 70290899];
  *(float *)&dword_140404A6C[v26 + 70290988] = v36 + 16.0;
  v46 = (float)(v45 - 16.0) - v36;
  *(float *)&dword_140404A6C[v26 + 70290986] = v46;
  if ( dword_140404A6C[70087105] != v14 || !dword_140404A6C[70317817] || dword_140404A6C[70317856] )
    goto LABEL_66;
  if ( *(float *)&dword_140404A6C[70317781] >= v38
    && *(float *)&dword_140404A6C[70317781] < (float)(v38 + *(float *)&dword_140404A6C[v26 + 70290979]) )
  {
    v47 = *(float *)&dword_140404A6C[v26 + 70290978];
    if ( *(float *)&dword_140404A6C[70317782] >= v47
      && *(float *)&dword_140404A6C[70317782] < (float)(v47 + *(float *)&dword_140404A6C[v26 + 70290980]) )
    {
      dword_140404A6C[70317859] = 0;
      dword_140404A6C[70317860] = v14;
      *(float *)&dword_140404A6C[70317862] = *(float *)&dword_140404A6C[70317781]
                                           - *(float *)&dword_140404A6C[v26 + 70290896];
      v48 = *(float *)&dword_140404A6C[70317782] - *(float *)&dword_140404A6C[v26 + 70290897];
LABEL_65:
      *(float *)&dword_140404A6C[70317863] = v48;
      goto LABEL_66;
    }
  }
  if ( *(float *)&dword_140404A6C[70317781] >= v44
    && *(float *)&dword_140404A6C[70317781] < (float)(v44 + *(float *)&dword_140404A6C[v26 + 70290987])
    && *(float *)&dword_140404A6C[70317782] >= v46
    && *(float *)&dword_140404A6C[70317782] < (float)(v46 + *(float *)&dword_140404A6C[v26 + 70290988]) )
  {
    dword_140404A6C[70317859] = 1;
    dword_140404A6C[70317860] = v14;
    *(float *)&dword_140404A6C[70317862] = *(float *)&dword_140404A6C[70317781]
                                         - (float)(*(float *)&dword_140404A6C[v26 + 70290985]
                                                 + *(float *)&dword_140404A6C[v26 + 70290987]);
    v48 = *(float *)&dword_140404A6C[70317782]
        - (float)(*(float *)&dword_140404A6C[v26 + 70290988] + *(float *)&dword_140404A6C[v26 + 70290986]);
    goto LABEL_65;
  }
LABEL_66:
  dword_140404A6C[70087046] = v14;
  if ( (int)dword_140404A6C[70087029] < 16 )
  {
    dword_140404A6C[dword_140404A6C[70087029] + 70087030] = v14;
    ++dword_140404A6C[70087029];
  }
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1082130432;
  return (unsigned int)v14;
}

