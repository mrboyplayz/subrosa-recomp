/* Address: 0x14013ec80 | Name: asset_scan_itemsets_sis_candidate | Size: 2319 bytes */
// Candidate .sis item-set scanner: references *.sis and filesystem enumeration helper.
__int64 asset_scan_itemsets_sis_candidate()
{
  unsigned int v0; // eax
  int v1; // ebx
  int v2; // edi
  unsigned int *v3; // rcx
  int i; // edi
  unsigned int *v5; // rcx
  int v6; // ebp
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ecx
  char *v11; // rdx
  unsigned int *v12; // rcx
  char v13; // al
  int v14; // eax
  int v15; // r9d
  __int64 v16; // r8
  __int64 v17; // rax
  char *v18; // rcx
  char v19; // dl
  char v20; // dl
  char v21; // dl
  __int64 v22; // rax
  int v23; // r9d
  unsigned int *v24; // rdx
  char *v25; // r8
  char v26; // al
  char *v27; // rcx
  char v28; // al
  char *v29; // rdx
  _BYTE v32[32]; // [rsp+0h] [rbp-288h] BYREF
  char v33[36]; // [rsp+20h] [rbp-268h] BYREF
  char v34; // [rsp+44h] [rbp-244h] BYREF
  __int64 v35; // [rsp+220h] [rbp-68h]

  *(_OWORD *)&dword_140404A6C[272300382] = xmmword_140279510;
  dword_140404A6C[272300381] = 41;
  dword_140404A6C[272300410] = 37;
  *(_OWORD *)&dword_140404A6C[272300411] = xmmword_140279590;
  dword_140404A6C[272300439] = 37;
  dword_140404A6C[272300468] = 37;
  *(_OWORD *)&dword_140404A6C[272300444] = xmmword_140279490;
  dword_140404A6C[272300497] = 37;
  *(_OWORD *)&dword_140404A6C[272300448] = xmmword_140279490;
  dword_140404A6C[272300526] = 37;
  *(_OWORD *)&dword_140404A6C[272300386] = xmmword_140279490;
  dword_140404A6C[272300555] = 37;
  *(_OWORD *)&dword_140404A6C[272300390] = xmmword_140279490;
  dword_140404A6C[272300364] = 7;
  *(_OWORD *)&dword_140404A6C[272300415] = xmmword_140279490;
  dword_140404A6C[272302277] = 41;
  *(_OWORD *)&dword_140404A6C[272300419] = xmmword_140279490;
  dword_140404A6C[272302306] = 44;
  *(_OWORD *)&dword_140404A6C[272300440] = xmmword_1402795F0;
  dword_140404A6C[272302335] = 44;
  dword_140404A6C[272302364] = 44;
  *(_OWORD *)&dword_140404A6C[272300469] = xmmword_140279630;
  dword_140404A6C[272302393] = 44;
  dword_140404A6C[272302422] = 44;
  *(_OWORD *)&dword_140404A6C[272300502] = xmmword_140279490;
  dword_140404A6C[272302451] = 44;
  *(_OWORD *)&dword_140404A6C[272300506] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300473] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300477] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300498] = xmmword_1402795B0;
  *(_OWORD *)&dword_140404A6C[272300527] = xmmword_140279610;
  *(_OWORD *)&dword_140404A6C[272300560] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300564] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300531] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300535] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272300556] = xmmword_140279640;
  *(_OWORD *)&dword_140404A6C[272302278] = xmmword_140279510;
  *(_OWORD *)&dword_140404A6C[272302307] = xmmword_140279590;
  *(_OWORD *)&dword_140404A6C[272302282] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302286] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302311] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302315] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302340] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302344] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302336] = xmmword_140279580;
  *(_OWORD *)&dword_140404A6C[272302365] = xmmword_140279570;
  *(_OWORD *)&dword_140404A6C[272302369] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302373] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302398] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302402] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302394] = xmmword_1402795E0;
  *(_OWORD *)&dword_140404A6C[272302423] = xmmword_1402795C0;
  *(_OWORD *)&dword_140404A6C[272302427] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302431] = xmmword_140279490;
  v0 = 3;
  v1 = 0;
  *(_OWORD *)&dword_140404A6C[272302456] = xmmword_140279490;
  dword_140404A6C[272302260] = 7;
  v2 = 0;
  *(_OWORD *)&dword_140404A6C[272302460] = xmmword_140279490;
  dword_140404A6C[272301329] = 38;
  *(_OWORD *)&dword_140404A6C[272302452] = xmmword_140279620;
  dword_140404A6C[272301358] = 37;
  dword_140404A6C[272301387] = 37;
  *(_OWORD *)&dword_140404A6C[272301330] = xmmword_140279520;
  dword_140404A6C[272301312] = 3;
  *(_OWORD *)&dword_140404A6C[272301334] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272301338] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272301363] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272301367] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272301359] = xmmword_140279500;
  *(_OWORD *)&dword_140404A6C[272301388] = xmmword_1402794D0;
  *(_OWORD *)&dword_140404A6C[272301392] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272301396] = xmmword_140279490;
  do
  {
    dword_140404A6C[29 * v0 + 272301329] = 45;
    *(float *)&dword_140404A6C[29 * dword_140404A6C[272301312] + 272301330] = 0.5 - (float)((float)v2 * 0.375);
    dword_140404A6C[29 * dword_140404A6C[272301312] + 272301331] = 1066663936;
    dword_140404A6C[29 * dword_140404A6C[272301312] + 272301332] = 0;
    v3 = &dword_140404A6C[29 * dword_140404A6C[272301312] + 272301333];
    *(_QWORD *)v3 = 1065353216;
    *((_QWORD *)v3 + 1) = 0;
    *((_QWORD *)v3 + 2) = 1065353216;
    *((_QWORD *)v3 + 3) = 0;
    v3[8] = 1065353216;
    sub_14007B2A0(
      0x140000000LL + 116LL * (int)dword_140404A6C[272301312] + 1093418688,
      (float *)(0x140000000LL + 116LL * (int)dword_140404A6C[272301312] + 1093418688));
    ++v2;
    v0 = ++dword_140404A6C[272301312];
  }
  while ( v2 < 4 );
  for ( i = 0; i < 3; ++i )
  {
    dword_140404A6C[29 * v0 + 272301329] = 45;
    *(float *)&dword_140404A6C[29 * dword_140404A6C[272301312] + 272301330] = 0.3125 - (float)((float)i * 0.375);
    dword_140404A6C[29 * dword_140404A6C[272301312] + 272301331] = 1069023232;
    dword_140404A6C[29 * dword_140404A6C[272301312] + 272301332] = 0;
    v5 = &dword_140404A6C[29 * dword_140404A6C[272301312] + 272301333];
    *(_QWORD *)v5 = 1065353216;
    *((_QWORD *)v5 + 1) = 0;
    *((_QWORD *)v5 + 2) = 1065353216;
    *((_QWORD *)v5 + 3) = 0;
    v5[8] = 1065353216;
    sub_14007B2A0(
      0x140000000LL + 116LL * (int)dword_140404A6C[272301312] + 1093418688,
      (float *)(0x140000000LL + 116LL * (int)dword_140404A6C[272301312] + 1093418688));
    sub_14007B2A0(
      0x140000000LL + 116LL * (int)dword_140404A6C[272301312] + 1093418688,
      (float *)&dword_140404A6C[29 * dword_140404A6C[272301312] + 272301336]);
    v0 = ++dword_140404A6C[272301312];
  }
  *(_OWORD *)&dword_140404A6C[272302282] = xmmword_140279490;
  dword_140404A6C[272302277] = 37;
  *(_OWORD *)&dword_140404A6C[272302286] = xmmword_140279490;
  dword_140404A6C[272302306] = 37;
  *(_OWORD *)&dword_140404A6C[272302278] = xmmword_1402794F0;
  dword_140404A6C[272302335] = 37;
  dword_140404A6C[272302364] = 37;
  *(_OWORD *)&dword_140404A6C[272302307] = xmmword_1402794C0;
  dword_140404A6C[272302393] = 37;
  dword_140404A6C[272302422] = 37;
  *(_OWORD *)&dword_140404A6C[272302311] = xmmword_140279490;
  dword_140404A6C[272302451] = 37;
  *(_OWORD *)&dword_140404A6C[272302315] = xmmword_140279490;
  dword_140404A6C[272302480] = 37;
  *(_OWORD *)&dword_140404A6C[272302340] = xmmword_140279490;
  dword_140404A6C[272302260] = 8;
  *(_OWORD *)&dword_140404A6C[272302344] = xmmword_140279490;
  dword_140404A6C[273270149] = 4;
  *(_OWORD *)&dword_140404A6C[272302336] = xmmword_140279560;
  *(_OWORD *)&dword_140404A6C[272302365] = xmmword_140279540;
  *(_OWORD *)&dword_140404A6C[272302369] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302373] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302398] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302402] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302394] = xmmword_1402795A0;
  *(_OWORD *)&dword_140404A6C[272302423] = xmmword_140279580;
  *(_OWORD *)&dword_140404A6C[272302427] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302431] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302456] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302460] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302452] = xmmword_140279600;
  *(_OWORD *)&dword_140404A6C[272302481] = xmmword_1402795D0;
  *(_OWORD *)&dword_140404A6C[272302485] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[272302489] = xmmword_140279490;
  v6 = sub_14024C22C("data");
  v7 = sub_14024C22C("itemset");
  v8 = sub_14023A198("*.sis", v33);
  dword_140404A6C[293119325] = 0;
  v9 = v8;
  v10 = 0;
  if ( (_DWORD)v8 != -1 )
  {
    do
    {
      if ( v10 >= 1024 )
        break;
      if ( (v33[0] & 0x10) == 0 )
      {
        v11 = &v34;
        v12 = &dword_140404A6C[16 * (__int64)v10 + 293119326];
        do
        {
          v13 = *v11++;
          *(_BYTE *)v12 = v13;
          v12 = (unsigned int *)((char *)v12 + 1);
        }
        while ( v13 );
        ++dword_140404A6C[293119325];
      }
      v14 = sub_14023A5C4(v9, v33);
      v10 = dword_140404A6C[293119325];
    }
    while ( v14 != -1 );
  }
  LOBYTE(dword_140404A6C[16 * (__int64)v10 + 293119326]) = 0;
  sub_140239CCC(v9);
  sub_14023AE00(&dword_140404A6C[293119326], (int)dword_140404A6C[293119325], 64, sub_14004C4C0);
  v15 = 0;
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v16 = 0;
    do
    {
      v17 = 0;
      v18 = (char *)&dword_140404A6C[v16 + 293119326] + 1;
      do
      {
        v19 = *(v18 - 1);
        if ( !v19 || v19 == 46 )
          break;
        if ( !*v18 || *v18 == 46 )
        {
          ++v17;
          break;
        }
        v20 = v18[1];
        if ( !v20 || v20 == 46 )
        {
          v17 += 2;
          break;
        }
        v21 = v18[2];
        if ( !v21 || v21 == 46 )
        {
          v17 += 3;
          break;
        }
        v17 += 4;
        v18 += 4;
      }
      while ( v17 < 64 );
      v22 = v16 * 4 + v17;
      ++v15;
      v16 += 16;
      *((_BYTE *)&dword_140404A6C[293119326] + v22) = 0;
    }
    while ( v15 < (int)dword_140404A6C[293119325] );
  }
  if ( !v7 )
    sub_14024C22C("..");
  if ( !v6 )
    sub_14024C22C("..");
  if ( (int)dword_140404A6C[293119325] > 0 )
  {
    v23 = dword_140404A6C[273270149];
    do
    {
      v24 = &dword_140404A6C[16 * (__int64)v1 + 293119326];
      v25 = (char *)v24;
      do
      {
        v26 = *v25;
        *((_BYTE *)&dword_140404A6C[272299397] + 3792LL * v23 - (_QWORD)v24 + (_QWORD)v25) = *v25;
        ++v25;
      }
      while ( v26 );
      v27 = (char *)(v33 - (char *)v24);
      do
      {
        v28 = *(_BYTE *)v24;
        v27[(_QWORD)v24] = *(_BYTE *)v24;
        v24 = (unsigned int *)((char *)v24 + 1);
      }
      while ( v28 );
      v29 = &v32[31];
      while ( *++v29 != 0 )
        ;
      strcpy(v29, ".sis");
      sub_1400E7960(v23, v33);
      ++v1;
      v23 = ++dword_140404A6C[273270149];
    }
    while ( v1 < (int)dword_140404A6C[293119325] );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v32 ^ v35);
}

