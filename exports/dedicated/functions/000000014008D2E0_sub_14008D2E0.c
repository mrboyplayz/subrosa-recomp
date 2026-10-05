/* Address: 0x14008d2e0 | Name: sub_14008D2E0 | Size: 3388 bytes */
__int64 __fastcall sub_14008D2E0(int a1, int a2, const char *a3)
{
  char *v3; // r9
  int v4; // r12d
  int v5; // ebp
  bool v6; // zf
  char *v7; // rcx
  FILE *v8; // rax
  __int64 v9; // r9
  FILE *v10; // rdi
  int i; // esi
  int v12; // r15d
  _DWORD *v13; // rsi
  __int64 v14; // r12
  int j; // ebx
  bool v16; // cc
  int k; // ebx
  int v18; // r11d
  int v19; // r15d
  int v20; // r8d
  __int64 v21; // r14
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  int v25; // edi
  int v26; // r11d
  int v27; // esi
  int v28; // r12d
  int v29; // r13d
  int v30; // r15d
  int v31; // r10d
  int v32; // xmm2_4
  int v33; // xmm4_4
  float *v34; // rax
  float v35; // xmm1_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v39; // xmm0_4
  float v40; // xmm3_4
  float v41; // xmm1_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  int v44; // ebx
  _DWORD *v45; // rdi
  int v46; // eax
  int v47; // r10d
  int *v48; // r9
  int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // r11
  __int64 v52; // rsi
  int v53; // ecx
  int v54; // eax
  __int64 v55; // rsi
  __int64 v56; // r8
  __int64 v57; // r11
  __int64 v58; // r8
  __int64 v59; // r11
  int v60; // eax
  __int64 v61; // r10
  int *v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  int v65; // ecx
  __int64 v66; // r11
  __int64 v67; // rsi
  int v68; // edx
  _DWORD *v69; // r8
  __int64 v70; // r10
  __int64 v71; // rdx
  _BYTE v72[32]; // [rsp+0h] [rbp-138h] BYREF
  int v73; // [rsp+20h] [rbp-118h] BYREF
  __int64 v74; // [rsp+28h] [rbp-110h]
  int v75; // [rsp+30h] [rbp-108h]
  __int64 v76; // [rsp+38h] [rbp-100h]
  char v77[16]; // [rsp+40h] [rbp-F8h] BYREF
  char FileName[64]; // [rsp+50h] [rbp-E8h] BYREF

  v3 = &v72[79];
  strcpy(FileName, "data/model/");
  v4 = a2;
  v75 = a2;
  v5 = a1;
  LODWORD(v74) = a1;
  do
    v6 = *++v3 == 0;
  while ( !v6 );
  strcpy(v3, a3);
  v7 = &v72[79];
  do
    v6 = *++v7 == 0;
  while ( !v6 );
  strcpy(v7, ".cmo");
  v8 = fopen(FileName, "rb");
  v9 = 0;
  v10 = v8;
  v76 = 1;
  if ( v8 )
  {
    qword_19AAD8648(v77, 1, 4, v8);
    v77[4] = 0;
    if ( strcmp(v77, off_140147738) || (qword_19AAD8648(&v73, 4, 1, v10), (unsigned int)(v73 - 1) > 2) )
    {
      fclose(v10);
      return 0;
    }
    qword_19AAD8648(dword_177DD6380, 4, 1, v10);
    for ( i = 0; i < (int)dword_177DD6380[0]; ++i )
    {
      qword_19AAD8648(&dword_177DD6380[2 * i + 1 + i], 4, 3, v10);
      if ( v73 >= 3 )
        qword_19AAD8648(&dword_177DD638C[2 * i + 98302], 4, 2, v10);
      qword_19AAD8648(&dword_177DD638C[i + 262142], 4, 1, v10);
    }
    qword_19AAD8648(&dword_177EF6384, 4, 1, v10);
    v12 = 0;
    if ( dword_177EF6384 > 0 )
    {
      v13 = &unk_177EF6388;
      do
      {
        v14 = 44LL * v12;
        qword_19AAD8648((char *)&unk_177EF6388 + v14, 4, 1, v10);
        for ( j = 0; j < *v13; ++j )
          qword_19AAD8648((char *)&unk_177EF638C + 44 * v12 + 4 * j, 4, 1, v10);
        qword_19AAD8648((char *)&unk_177EF63AC + v14, 4, 1, v10);
        v16 = v73 < 2;
        v13[10] = 0;
        if ( !v16 )
          qword_19AAD8648((char *)&unk_177EF63B0 + v14, 4, 1, v10);
        ++v12;
        v13 += 11;
      }
      while ( v12 < dword_177EF6384 );
      v5 = v74;
      v4 = v75;
    }
    qword_19AAD8648(&dword_178056388, 4, 1, v10);
    for ( k = 0; k < dword_178056388; ++k )
      qword_19AAD8648((char *)&unk_17805638C + 4 * k, 4, 1, v10);
    fclose(v10);
    v9 = 0;
  }
  v18 = dword_177DD6380[0];
  v19 = v73;
  v20 = 0;
  v21 = v4;
  dword_1782D6BA0 = dword_177DD6380[0];
  v74 = v4;
  if ( (int)dword_177DD6380[0] <= 0 )
  {
    v44 = dword_177EF6384;
  }
  else
  {
    v22 = 0;
    v23 = qword_19153D9E0;
    v24 = 0;
    v25 = dword_19153D9A4;
    v9 = dword_177DD6380[0];
    v26 = qword_19153DA20;
    v27 = unk_19153D9A0;
    v28 = qword_19153D960;
    v29 = dword_19153D924;
    v30 = qword_19153CE08;
    v31 = qword_19153CDB0;
    *(_QWORD *)v77 = *(__int64 *)((char *)&qword_19153CE08 + 4);
    do
    {
      v32 = dword_177DD6380[v22 + 1];
      v33 = dword_177DD6380[v22 + 2];
      v34 = (float *)&dword_1782D6BB0[v22];
      v35 = *(float *)&dword_177DD6380[v22 + 3];
      if ( v74 == -1 )
      {
        dword_1782D6BA8[v22] = v32;
        v39 = *(float *)&v33;
        dword_1782D6BAC[v22] = v33;
        v40 = v35;
        *v34 = v35;
        if ( v5 == v30 )
        {
          v40 = v35 * 0.125;
          *v34 = v35 * 0.125;
          *(float *)&dword_1782D6BA8[v22] = *(float *)&v32 * 0.125;
          v39 = *(float *)&v33 * 0.125;
          *(float *)&dword_1782D6BAC[v22] = *(float *)&v33 * 0.125;
        }
        if ( v5 == *(_DWORD *)v77 )
        {
          v39 = *(float *)&v33 * 0.09375;
          v40 = v35 * 0.09375;
          *(float *)&dword_1782D6BAC[v22] = *(float *)&v33 * 0.09375;
          *(float *)&dword_1782D6BA8[v22] = *(float *)&v32 * 0.09375;
          *v34 = v35 * 0.09375;
        }
        v41 = v40;
        if ( v5 >= v29 )
        {
          if ( v5 <= v27 )
          {
            v41 = *v34;
            v39 = v39 - 0.0234375;
            *(float *)&dword_1782D6BAC[v22] = v39;
          }
          if ( v5 <= v28 )
          {
            v39 = v39 - 0.03125;
            *(float *)&dword_1782D6BAC[v22] = v39;
          }
        }
        if ( v5 >= v25 )
        {
          if ( v5 <= v26 )
          {
            v39 = v39 - 0.0234375;
            *(float *)&dword_1782D6BAC[v22] = v39;
          }
          if ( v5 <= v23 )
            *(float *)&dword_1782D6BAC[v22] = v39 - 0.03125;
        }
        if ( v5 == v31 )
          v41 = *v34 - 0.03125;
        v37 = -v41;
        v36 = -*(float *)&dword_1782D6BA8[v22];
      }
      else
      {
        v36 = *(float *)&v32 * 0.375;
        *(float *)&dword_1782D6BAC[v22] = *(float *)&v33 * 0.375;
        v37 = v35 * 0.375;
      }
      *(float *)&dword_1782D6BA8[v22] = v36;
      v21 = v74;
      *v34 = v37;
      v42 = *(float *)&dword_1782D6BAC[v22];
      v43 = *(float *)&dword_1782D6BB0[v22];
      *(_QWORD *)((char *)&unk_178306BA8 + v24 * 4) = 0;
      if ( (float)((float)((float)(v42 * v42) + (float)(v36 * v36)) + (float)(v43 * v43)) > 1.0 )
        v20 = v76;
      if ( v73 >= 3 )
      {
        *(_DWORD *)((char *)&unk_178306BA8 + v24 * 4) = dword_177DD6380[v24 + 98305];
        *(_DWORD *)((char *)&unk_178306BAC + v24 * 4) = dword_177DD6380[v24 + 98306];
        v21 = v74;
      }
      v22 += 3;
      v24 += 2;
      --v9;
    }
    while ( v9 );
    v44 = dword_177EF6384;
    v18 = dword_1782D6BA0;
    v19 = v73;
    v4 = v75;
    if ( v20 )
      v44 = 0;
    dword_177EF6384 = v44;
  }
  v45 = &unk_177EF638C;
  v46 = 0;
  dword_178416BA8 = 0;
  v47 = 0;
  if ( v44 > 0 )
  {
    v48 = (int *)&unk_177EF638C;
    while ( 1 )
    {
      v49 = *(v48 - 1);
      if ( v49 == 3 )
      {
        v50 = *v48;
        v51 = v48[1];
        v52 = v48[2];
        dword_178416BAC[3 * v46] = v50;
        dword_178416BB0[3 * dword_178416BA8] = v51;
        dword_178416BB4[3 * dword_178416BA8] = v52;
        dword_17860EBB0[6 * dword_178416BA8] = 1065353216;
        dword_17860EBB4[6 * dword_178416BA8] = 0;
        dword_17860EBB8[6 * dword_178416BA8] = 1065353216;
        dword_17860EBBC[6 * dword_178416BA8] = 0;
        dword_17860EBC0[6 * dword_178416BA8] = 1065353216;
        dword_17860EBC4[6 * dword_178416BA8] = 0;
        if ( v19 >= 3 )
        {
          dword_17860EBB0[6 * dword_178416BA8] = dword_177DD6380[2 * v50 + 98305];
          dword_17860EBB4[6 * dword_178416BA8] = dword_177DD6380[2 * v50 + 98306];
          dword_17860EBB8[6 * dword_178416BA8] = dword_177DD6380[2 * v51 + 98305];
          dword_17860EBBC[6 * dword_178416BA8] = dword_177DD6380[2 * v51 + 98306];
          dword_17860EBC0[6 * dword_178416BA8] = dword_177DD6380[2 * v52 + 98305];
          v53 = 3 * dword_178416BA8;
          v54 = dword_177DD6380[2 * v52 + 98306];
LABEL_65:
          dword_17860EBC4[2 * v53] = v54;
        }
      }
      else
      {
        if ( v49 != 4 || v48[9] )
          goto LABEL_67;
        v55 = *v48;
        v56 = v48[1];
        v57 = v48[2];
        dword_178416BAC[3 * v46] = v55;
        dword_178416BB0[3 * dword_178416BA8] = v56;
        dword_178416BB4[3 * dword_178416BA8] = v57;
        dword_17860EBB0[6 * dword_178416BA8] = 0;
        dword_17860EBB4[6 * dword_178416BA8] = 0;
        dword_17860EBB8[6 * dword_178416BA8] = 0;
        dword_17860EBBC[6 * dword_178416BA8] = 0;
        dword_17860EBC0[6 * dword_178416BA8] = 0;
        dword_17860EBC4[6 * dword_178416BA8] = 0;
        if ( v19 >= 3 )
        {
          dword_17860EBB0[6 * dword_178416BA8] = dword_177DD6380[2 * v55 + 98305];
          dword_17860EBB4[6 * dword_178416BA8] = dword_177DD6380[2 * v55 + 98306];
          dword_17860EBB8[6 * dword_178416BA8] = dword_177DD6380[2 * v56 + 98305];
          dword_17860EBBC[6 * dword_178416BA8] = dword_177DD6380[2 * v56 + 98306];
          dword_17860EBC0[6 * dword_178416BA8] = dword_177DD6380[2 * v57 + 98305];
          dword_17860EBC4[6 * dword_178416BA8] = dword_177DD6380[2 * v57 + 98306];
        }
        v58 = v57;
        ++dword_178416BA8;
        dword_178416BAC[3 * dword_178416BA8] = v55;
        dword_178416BB0[3 * dword_178416BA8] = v57;
        v59 = v48[3];
        dword_178416BB4[3 * dword_178416BA8] = v59;
        dword_17860EBB0[6 * dword_178416BA8] = 0;
        dword_17860EBB4[6 * dword_178416BA8] = 0;
        dword_17860EBB8[6 * dword_178416BA8] = 0;
        dword_17860EBBC[6 * dword_178416BA8] = 0;
        dword_17860EBC0[6 * dword_178416BA8] = 0;
        dword_17860EBC4[6 * dword_178416BA8] = 0;
        if ( v19 >= 3 )
        {
          dword_17860EBB0[6 * dword_178416BA8] = dword_177DD6380[2 * v55 + 98305];
          dword_17860EBB4[6 * dword_178416BA8] = dword_177DD6380[2 * v55 + 98306];
          dword_17860EBB8[6 * dword_178416BA8] = dword_177DD6380[2 * v58 + 98305];
          dword_17860EBBC[6 * dword_178416BA8] = dword_177DD6380[2 * v58 + 98306];
          dword_17860EBC0[6 * dword_178416BA8] = dword_177DD6380[2 * v59 + 98305];
          v53 = 3 * dword_178416BA8;
          v54 = dword_177DD6380[2 * v59 + 98306];
          goto LABEL_65;
        }
      }
      v46 = ++dword_178416BA8;
LABEL_67:
      ++v47;
      v48 += 11;
      if ( v47 >= v44 )
      {
        v4 = v75;
        v9 = 0;
        v18 = dword_1782D6BA0;
        v21 = v75;
        break;
      }
    }
  }
  if ( v4 != -1 )
  {
    v60 = 0;
    *(_DWORD *)&algn_1901226A0[5072 * v21 + 28] = 0;
    if ( v18 > 0 )
    {
      v61 = (unsigned int)v18;
      v62 = dword_1782D6BB0;
      v63 = 5072 * v21;
      do
      {
        v62 += 3;
        v64 = v63 + 12LL * v60;
        *(_DWORD *)((char *)&unk_1901226C0 + v64) = *(v62 - 5);
        *(_DWORD *)((char *)&unk_1901226C0 + v64 + 4) = *(v62 - 4);
        *(_DWORD *)((char *)&unk_1901226C0 + v64 + 8) = *(v62 - 3);
        v60 = *(_DWORD *)&algn_1901226A0[v63 + 28] + 1;
        *(_DWORD *)&algn_1901226A0[v63 + 28] = v60;
        --v61;
      }
      while ( v61 );
      v9 = 0;
    }
    *((_DWORD *)&unk_1901229C0 + 1268 * v21) = 0;
    v65 = 0;
    if ( v44 > 0 )
    {
      v66 = 5072 * v21;
      v67 = (unsigned int)v44;
      do
      {
        v68 = *(v45 - 1);
        *(_DWORD *)((char *)&unk_1901229C8 + 24 * v65 + v66) = v68;
        if ( v68 > 0 )
        {
          v69 = v45;
          v70 = (unsigned int)v68;
          do
          {
            ++v69;
            v71 = 1268 * v21 + v9 + 6LL * *(int *)((char *)&unk_1901229C0 + v66);
            ++v9;
            dword_1901229CC[v71] = *(v69 - 1);
            --v70;
          }
          while ( v70 );
        }
        v45 += 11;
        v65 = *(_DWORD *)((char *)&unk_1901229C0 + v66) + 1;
        v9 = 0;
        *(_DWORD *)((char *)&unk_1901229C0 + v66) = v65;
        --v67;
      }
      while ( v67 );
    }
  }
  return 1;
}

