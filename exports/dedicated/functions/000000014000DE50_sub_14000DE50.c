/* Address: 0x14000de50 | Name: sub_14000DE50 | Size: 4129 bytes */
__int64 __fastcall sub_14000DE50(int a1)
{
  int v1; // ebx
  unsigned __int64 v2; // rbp
  __int64 v3; // r14
  bool v4; // cc
  int v5; // eax
  int v6; // r15d
  int v7; // r9d
  __int64 v8; // r12
  int v9; // edi
  int v10; // edx
  __int64 v11; // rsi
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r9d
  int *v23; // r8
  int *v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  void *v30; // rcx
  void *v31; // rax
  void *v32; // rcx
  void *v33; // rax
  void *v34; // rcx
  void *v35; // rax
  void *v36; // rcx
  void *v37; // rax
  int v38; // r9d
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  __int64 v41; // xmm0_8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  void *v45; // rcx
  void *v46; // rax
  void *v47; // rcx
  void *v48; // rax
  void *v49; // rcx
  void *v50; // rax
  void *v51; // rcx
  void *v52; // rax
  void *v53; // rcx
  void *v54; // rax
  void *v55; // rcx
  void *v56; // rax
  void *v57; // rcx
  int v58; // edx
  __int64 v59; // rcx
  void *v60; // rcx
  __int64 result; // rax
  __int64 v62; // rdx
  _DWORD *v63; // r8
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  int v69; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v2 = 232LL * a1;
  v3 = 29LL * a1;
  v4 = dword_1607918A4 <= 0;
  v5 = 0;
  dword_15AE317CC[v2 / 4] = 0;
  v6 = 0;
  qword_15AE317D0[v3] = 0;
  qword_15AE317D8[v3] = 0;
  qword_15AE317E0[v3] = 0;
  if ( !v4 )
  {
    v7 = v69;
    v8 = 0;
    do
    {
      v9 = -1;
      v10 = 0;
      v11 = 3LL * dword_1607918A8[4 * v8];
      do
      {
        if ( !v10 || v10 == 5 )
          v7 = 0;
        if ( v10 == 1 || v10 == 4 )
          v7 = 1;
        if ( (unsigned int)(v10 - 2) <= 1 )
          v7 = 2;
        if ( v10 >= 3 )
          v12 = 1.0;
        else
          v12 = 0.0;
        if ( v12 == *(float *)&dword_1606618A4[v7 + v11]
          && v12 == *(float *)&dword_1606618A4[2 * dword_1607918AC[4 * v8] + v7 + dword_1607918AC[4 * v8]]
          && v12 == *(float *)&dword_1606618A4[2 * dword_1607918B0[4 * v8] + v7 + dword_1607918B0[4 * v8]]
          && v12 == *(float *)&dword_1606618A4[2 * dword_1607918B4[4 * v8] + v7 + dword_1607918B4[4 * v8]] )
        {
          v9 = v10;
        }
        if ( v10 == -1 || v10 == 4 )
          v7 = 0;
        if ( !v10 || v10 == 3 )
          v7 = 1;
        if ( (unsigned int)(v10 - 1) <= 1 )
          v7 = 2;
        if ( v10 + 1 >= 3 )
          v13 = 1.0;
        else
          v13 = 0.0;
        if ( v13 == *(float *)&dword_1606618A4[v7 + v11]
          && v13 == *(float *)&dword_1606618A4[2 * dword_1607918AC[4 * v8] + v7 + dword_1607918AC[4 * v8]]
          && v13 == *(float *)&dword_1606618A4[2 * dword_1607918B0[4 * v8] + v7 + dword_1607918B0[4 * v8]]
          && v13 == *(float *)&dword_1606618A4[2 * dword_1607918B4[4 * v8] + v7 + dword_1607918B4[4 * v8]] )
        {
          v9 = v10 + 1;
        }
        if ( v10 == -2 || v10 == 3 )
          v7 = 0;
        if ( v10 == -1 || v10 == 2 )
          v7 = 1;
        if ( (unsigned int)v10 <= 1 )
          v7 = 2;
        if ( v10 + 2 >= 3 )
          v14 = 1.0;
        else
          v14 = 0.0;
        if ( v14 == *(float *)&dword_1606618A4[v7 + v11]
          && v14 == *(float *)&dword_1606618A4[2 * dword_1607918AC[4 * v8] + v7 + dword_1607918AC[4 * v8]]
          && v14 == *(float *)&dword_1606618A4[2 * dword_1607918B0[4 * v8] + v7 + dword_1607918B0[4 * v8]]
          && v14 == *(float *)&dword_1606618A4[2 * dword_1607918B4[4 * v8] + v7 + dword_1607918B4[4 * v8]] )
        {
          v9 = v10 + 2;
        }
        if ( v10 == -3 || v10 == 2 )
          v7 = 0;
        if ( v10 == -2 || v10 == 1 )
          v7 = 1;
        if ( (unsigned int)(v10 + 1) <= 1 )
          v7 = 2;
        if ( v10 + 3 >= 3 )
          v15 = 1.0;
        else
          v15 = 0.0;
        if ( v15 == *(float *)&dword_1606618A4[v7 + v11]
          && v15 == *(float *)&dword_1606618A4[2 * dword_1607918AC[4 * v8] + v7 + dword_1607918AC[4 * v8]]
          && v15 == *(float *)&dword_1606618A4[2 * dword_1607918B0[4 * v8] + v7 + dword_1607918B0[4 * v8]]
          && v15 == *(float *)&dword_1606618A4[2 * dword_1607918B4[4 * v8] + v7 + dword_1607918B4[4 * v8]] )
        {
          v9 = v10 + 3;
        }
        if ( v10 == -4 || v10 == 1 )
          v7 = 0;
        if ( v10 == -3 || !v10 )
          v7 = 1;
        if ( (unsigned int)(v10 + 2) <= 1 )
          v7 = 2;
        if ( v10 + 4 >= 3 )
          v16 = 1.0;
        else
          v16 = 0.0;
        if ( v16 == *(float *)&dword_1606618A4[v7 + v11]
          && v16 == *(float *)&dword_1606618A4[2 * dword_1607918AC[4 * v8] + v7 + dword_1607918AC[4 * v8]]
          && v16 == *(float *)&dword_1606618A4[2 * dword_1607918B0[4 * v8] + v7 + dword_1607918B0[4 * v8]]
          && v16 == *(float *)&dword_1606618A4[2 * dword_1607918B4[4 * v8] + v7 + dword_1607918B4[4 * v8]] )
        {
          v9 = v10 + 4;
        }
        if ( v10 == -5 || !v10 )
          v7 = 0;
        if ( v10 == -4 || v10 == -1 )
          v7 = 1;
        if ( (unsigned int)(v10 + 3) <= 1 )
          v7 = 2;
        if ( v10 + 5 >= 3 )
          v17 = 1.0;
        else
          v17 = 0.0;
        if ( v17 == *(float *)&dword_1606618A4[v7 + v11]
          && v17 == *(float *)&dword_1606618A4[2 * dword_1607918AC[4 * v8] + v7 + dword_1607918AC[4 * v8]]
          && v17 == *(float *)&dword_1606618A4[2 * dword_1607918B0[4 * v8] + v7 + dword_1607918B0[4 * v8]]
          && v17 == *(float *)&dword_1606618A4[2 * dword_1607918B4[4 * v8] + v7 + dword_1607918B4[4 * v8]] )
        {
          v9 = v10 + 5;
        }
        v10 += 6;
      }
      while ( v10 < 6 );
      if ( v9 != -1 )
      {
        v18 = dword_15AE317CC[v2 / 4];
        if ( v6 > (int)v18 )
        {
          v19 = dword_15AE317CC[v2 / 4];
          dword_1607958A8 = dword_1607918A8[4 * v19];
          dword_1607958AC = dword_1607918AC[4 * v19];
          dword_1607958B0 = dword_1607918B0[4 * v19];
          dword_1607958B4 = dword_1607918B4[4 * v19];
          v20 = 2 * v19;
          dword_1607D28A8 = dword_1607D18A8[v18];
          dword_1607F28A8 = dword_1607F18A8[v18];
          dword_1607918A8[2 * v20] = dword_1607918A8[4 * v8];
          dword_1607918AC[2 * v20] = dword_1607918AC[4 * v8];
          dword_1607918B0[2 * v20] = dword_1607918B0[4 * v8];
          dword_1607918B4[2 * v20] = dword_1607918B4[4 * v8];
          dword_1607D18A8[v18] = dword_1607D18A8[v8];
          dword_1607F18A8[v18] = dword_1607F18A8[v8];
          dword_1607918A8[4 * v8] = dword_1607958A8;
          dword_1607918AC[4 * v8] = dword_1607958AC;
          dword_1607918B0[4 * v8] = dword_1607958B0;
          dword_1607918B4[4 * v8] = dword_1607958B4;
          dword_1607D18A8[v8] = dword_1607D28A8;
          dword_1607F18A8[v8] = dword_1607F28A8;
        }
        *((_DWORD *)&qword_15AE317D0[v3] + v9) |= 1 << v18;
        v21 = dword_15AE317CC[v2 / 4];
        dword_1607E18A8[v21] = v9;
        dword_15AE317CC[v2 / 4] = v21 + 1;
      }
      ++v6;
      ++v8;
    }
    while ( v6 < dword_1607918A4 );
    v5 = qword_15AE317D0[v3];
  }
  v4 = dword_1607918A4 <= 0;
  HIDWORD(qword_15AE317D0[v3]) = ~HIDWORD(qword_15AE317D0[v3]);
  v22 = 0;
  LODWORD(qword_15AE317D8[v3]) = ~LODWORD(qword_15AE317D8[v3]);
  HIDWORD(qword_15AE317D8[v3]) = ~HIDWORD(qword_15AE317D8[v3]);
  LODWORD(qword_15AE317E0[v3]) = ~LODWORD(qword_15AE317E0[v3]);
  HIDWORD(qword_15AE317E0[v3]) = ~HIDWORD(qword_15AE317E0[v3]);
  LODWORD(qword_15AE317D0[v3]) = ~v5;
  if ( !v4 )
  {
    v23 = dword_1607F18A8;
    v24 = dword_1607918AC;
    do
    {
      v25 = *(v23 - 0x8000) & 0xF0000;
      if ( v25 )
      {
        switch ( v25 )
        {
          case 65536:
            dword_1606F18A4[3 * *(v24 - 1)] = LODWORD(dword_1606618AC[3 * *(v24 - 1)]);
            dword_1606F18A8[3 * *(v24 - 1)] = dword_1606618A8[3 * *(v24 - 1)];
            dword_1606F18A4[3 * *v24] = LODWORD(dword_1606618AC[3 * *v24]);
            dword_1606F18A8[3 * *v24] = dword_1606618A8[3 * *v24];
            dword_1606F18A4[3 * v24[1]] = LODWORD(dword_1606618AC[3 * v24[1]]);
            dword_1606F18A8[3 * v24[1]] = dword_1606618A8[3 * v24[1]];
            v26 = 3LL * v24[2];
            v27 = LODWORD(dword_1606618AC[3 * v24[2]]);
            goto LABEL_122;
          case 131072:
            *(float *)&dword_1606F18A4[3 * *(v24 - 1)] = 1.0 - dword_1606618AC[3 * *(v24 - 1)];
            dword_1606F18A8[3 * *(v24 - 1)] = dword_1606618A8[3 * *(v24 - 1)];
            *(float *)&dword_1606F18A4[3 * *v24] = 1.0 - dword_1606618AC[3 * *v24];
            dword_1606F18A8[3 * *v24] = dword_1606618A8[3 * *v24];
            *(float *)&dword_1606F18A4[3 * v24[1]] = 1.0 - dword_1606618AC[3 * v24[1]];
            dword_1606F18A8[3 * v24[1]] = dword_1606618A8[3 * v24[1]];
            *(float *)&dword_1606F18A4[3 * v24[2]] = 1.0 - dword_1606618AC[3 * v24[2]];
            goto LABEL_123;
          case 196608:
            dword_1606F18A4[3 * *(v24 - 1)] = dword_1606618A4[3 * *(v24 - 1)];
            dword_1606F18A8[3 * *(v24 - 1)] = LODWORD(dword_1606618AC[3 * *(v24 - 1)]);
            dword_1606F18A4[3 * *v24] = dword_1606618A4[3 * *v24];
            dword_1606F18A8[3 * *v24] = LODWORD(dword_1606618AC[3 * *v24]);
            dword_1606F18A4[3 * v24[1]] = dword_1606618A4[3 * v24[1]];
            dword_1606F18A8[3 * v24[1]] = LODWORD(dword_1606618AC[3 * v24[1]]);
            dword_1606F18A4[3 * v24[2]] = dword_1606618A4[3 * v24[2]];
            v28 = 3LL * v24[2];
            v29 = LODWORD(dword_1606618AC[3 * v24[2]]);
LABEL_124:
            dword_1606F18A8[v28] = v29;
            break;
          case 262144:
            dword_1606F18A4[3 * *(v24 - 1)] = dword_1606618A4[3 * *(v24 - 1)];
            *(float *)&dword_1606F18A8[3 * *(v24 - 1)] = 1.0 - dword_1606618AC[3 * *(v24 - 1)];
            dword_1606F18A4[3 * *v24] = dword_1606618A4[3 * *v24];
            *(float *)&dword_1606F18A8[3 * *v24] = 1.0 - dword_1606618AC[3 * *v24];
            dword_1606F18A4[3 * v24[1]] = dword_1606618A4[3 * v24[1]];
            *(float *)&dword_1606F18A8[3 * v24[1]] = 1.0 - dword_1606618AC[3 * v24[1]];
            dword_1606F18A4[3 * v24[2]] = dword_1606618A4[3 * v24[2]];
            *(float *)&dword_1606F18A8[3 * v24[2]] = 1.0 - dword_1606618AC[3 * v24[2]];
            *v23 |= 1u;
            break;
          case 327680:
            *(float *)&dword_1606F18A4[3 * *(v24 - 1)] = 1.0 - *(float *)&dword_1606618A4[3 * *(v24 - 1)];
            dword_1606F18A8[3 * *(v24 - 1)] = dword_1606618A8[3 * *(v24 - 1)];
            *(float *)&dword_1606F18A4[3 * *v24] = 1.0 - *(float *)&dword_1606618A4[3 * *v24];
            dword_1606F18A8[3 * *v24] = dword_1606618A8[3 * *v24];
            *(float *)&dword_1606F18A4[3 * v24[1]] = 1.0 - *(float *)&dword_1606618A4[3 * v24[1]];
            dword_1606F18A8[3 * v24[1]] = dword_1606618A8[3 * v24[1]];
            *(float *)&dword_1606F18A4[3 * v24[2]] = 1.0 - *(float *)&dword_1606618A4[3 * v24[2]];
LABEL_123:
            v28 = 3LL * v24[2];
            v29 = dword_1606618A8[3 * v24[2]];
            goto LABEL_124;
          case 393216:
            dword_1606F18A4[3 * *(v24 - 1)] = dword_1606618A4[3 * *(v24 - 1)];
            dword_1606F18A8[3 * *(v24 - 1)] = dword_1606618A8[3 * *(v24 - 1)];
            dword_1606F18A4[3 * *v24] = dword_1606618A4[3 * *v24];
            dword_1606F18A8[3 * *v24] = dword_1606618A8[3 * *v24];
            dword_1606F18A4[3 * v24[1]] = dword_1606618A4[3 * v24[1]];
            dword_1606F18A8[3 * v24[1]] = dword_1606618A8[3 * v24[1]];
            v26 = 3LL * v24[2];
            v27 = dword_1606618A4[3 * v24[2]];
LABEL_122:
            dword_1606F18A4[v26] = v27;
            goto LABEL_123;
        }
      }
      ++v22;
      ++v23;
      v24 += 4;
    }
    while ( v22 < dword_1607918A4 );
  }
  v30 = (void *)qword_15AE317A8[v2 / 8];
  dword_15AE317A0[v2 / 4] = dword_1605618A0[0];
  free(v30);
  v31 = malloc(12 * dword_1605618A0[0]);
  v32 = (void *)qword_15AE317B0[v2 / 8];
  qword_15AE317A8[v2 / 8] = (__int64)v31;
  free(v32);
  v33 = malloc(12 * dword_1605618A0[0]);
  v34 = (void *)qword_15AE317B8[v2 / 8];
  qword_15AE317B0[v2 / 8] = (__int64)v33;
  free(v34);
  v35 = malloc(12 * dword_1605618A0[0]);
  v36 = (void *)qword_15AE317C0[v2 / 8];
  qword_15AE317B8[v2 / 8] = (__int64)v35;
  free(v36);
  v37 = malloc(8 * dword_1605618A0[0]);
  v4 = dword_1605618A0[0] <= 0;
  v38 = 0;
  qword_15AE317C0[v2 / 8] = (__int64)v37;
  if ( !v4 )
  {
    v39 = 0;
    v40 = 0;
    do
    {
      v41 = *(_QWORD *)&dword_1606618A4[v40 / 4];
      v40 += 12LL;
      v42 = qword_15AE317A8[v2 / 8];
      v39 += 8;
      ++v38;
      *(_QWORD *)(v42 + v40 - 12) = v41;
      *(_DWORD *)(v42 + v40 - 4) = *(_DWORD *)((char *)&unk_1606618A0 + v40);
      v43 = qword_15AE317B0[v2 / 8];
      *(_QWORD *)(v43 + v40 - 12) = *(_QWORD *)((char *)&unk_160691898 + v40);
      *(_DWORD *)(v43 + v40 - 4) = *(_DWORD *)((char *)&unk_1606918A0 + v40);
      v44 = qword_15AE317B8[v2 / 8];
      *(_QWORD *)(v44 + v40 - 12) = *(_QWORD *)((char *)&unk_1606C1898 + v40);
      *(_DWORD *)(v44 + v40 - 4) = *(_DWORD *)((char *)&unk_1606C18A0 + v40);
      *(_QWORD *)(v39 + qword_15AE317C0[v2 / 8] - 8) = *(_QWORD *)((char *)&unk_1606F1898 + v40);
    }
    while ( v38 < dword_1605618A0[0] );
  }
  v45 = (void *)qword_15AE317E8[v2 / 8];
  dword_15AE317C8[v2 / 4] = dword_1607918A4;
  dword_15AE31808[v2 / 4] = dword_1608418A8;
  free(v45);
  v46 = malloc(16 * dword_1607918A4);
  v47 = (void *)qword_15AE317F0[v2 / 8];
  qword_15AE317E8[v2 / 8] = (__int64)v46;
  free(v47);
  v48 = malloc(4 * dword_1607918A4);
  v49 = (void *)qword_15AE31800[v2 / 8];
  qword_15AE317F0[v2 / 8] = (__int64)v48;
  free(v49);
  v50 = malloc(4 * dword_1607918A4);
  v51 = (void *)qword_15AE317F8[v2 / 8];
  qword_15AE31800[v2 / 8] = (__int64)v50;
  free(v51);
  v52 = malloc(4 * dword_1607918A4);
  v53 = (void *)qword_15AE31810[v2 / 8];
  qword_15AE317F8[v2 / 8] = (__int64)v52;
  free(v53);
  v54 = malloc(12 * dword_1608418A8);
  v55 = (void *)qword_15AE31818[v2 / 8];
  qword_15AE31810[v2 / 8] = (__int64)v54;
  free(v55);
  v56 = malloc(4 * dword_1608418A8);
  v57 = (void *)qword_15AE317E8[v2 / 8];
  qword_15AE31818[v2 / 8] = (__int64)v56;
  memcpy(v57, dword_1607918A8, 16 * dword_1607918A4);
  memcpy((void *)qword_15AE317F0[v2 / 8], dword_1607D18A8, 4 * dword_1607918A4);
  memcpy((void *)qword_15AE31800[v2 / 8], dword_1607E18A8, 4 * dword_1607918A4);
  memcpy((void *)qword_15AE317F8[v2 / 8], dword_1607F18A8, 4 * dword_1607918A4);
  memcpy((void *)qword_15AE31810[v2 / 8], &unk_1608418AC, 12 * dword_1608418A8);
  memcpy((void *)qword_15AE31818[v2 / 8], &unk_1608A18B0, 4 * dword_1608418A8);
  v58 = 0;
  if ( dword_15AE317C8[v2 / 4] > 0 )
  {
    v59 = 0;
    do
    {
      v59 += 4;
      ++v58;
      *(_DWORD *)(qword_15AE317F0[v2 / 8] + v59 - 4) &= 0xFFFu;
    }
    while ( v58 < dword_15AE317C8[v2 / 4] );
  }
  v60 = (void *)qword_15AE31840[v2 / 8];
  dword_15AE31838[v2 / 4] = dword_160A130F4;
  free(v60);
  result = (__int64)malloc(48 * dword_160A130F4);
  qword_15AE31840[v2 / 8] = result;
  if ( dword_15AE31838[v2 / 4] > 0 )
  {
    v62 = 0;
    v63 = &unk_160A13114;
    do
    {
      v64 = *(v63 - 2);
      v63 += 20;
      v65 = qword_15AE31840[v2 / 8];
      v62 += 48;
      ++v1;
      *(_DWORD *)(v62 + v65 - 48) = v64;
      *(_DWORD *)(v62 + v65 - 44) = *(v63 - 21);
      *(_DWORD *)(v62 + v65 - 40) = *(v63 - 20);
      v66 = qword_15AE31840[v2 / 8];
      *(_DWORD *)(v66 + v62 - 36) = *(v63 - 19);
      *(_DWORD *)(v66 + v62 - 32) = *(v63 - 18);
      *(_DWORD *)(v66 + v62 - 28) = *(v63 - 17);
      v67 = qword_15AE31840[v2 / 8];
      *(_DWORD *)(v67 + v62 - 24) = *(v63 - 16);
      *(_DWORD *)(v67 + v62 - 20) = *(v63 - 15);
      *(_DWORD *)(v67 + v62 - 16) = *(v63 - 14);
      v68 = qword_15AE31840[v2 / 8];
      *(_DWORD *)(v68 + v62 - 12) = *(v63 - 13);
      *(_DWORD *)(v68 + v62 - 8) = *(v63 - 12);
      result = (unsigned int)*(v63 - 11);
      *(_DWORD *)(v68 + v62 - 4) = result;
    }
    while ( v1 < dword_15AE31838[v2 / 4] );
  }
  return result;
}

