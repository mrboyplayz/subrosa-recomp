/* Address: 0x140054e60 | Name: sub_140054E60 | Size: 855 bytes */
__int64 __fastcall sub_140054E60(int a1)
{
  __int64 v1; // r12
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v5; // r15
  int *v6; // rbx
  __int64 v7; // rsi
  int i; // edi
  int v9; // xmm1_4
  int v10; // eax
  int v11; // xmm1_4
  int v12; // eax
  int v13; // xmm1_4
  int v14; // eax
  int v15; // edi
  int *v16; // rbx
  int v17; // xmm1_4
  int v18; // eax
  int v19; // xmm1_4
  int v20; // eax
  int v21; // xmm1_4
  __int64 result; // rax
  int v23; // [rsp+20h] [rbp-10h] BYREF
  __int64 v24; // [rsp+24h] [rbp-Ch]

  v23 = dword_191041614;
  v1 = a1;
  v24 = qword_191041618;
  v2 = sub_14003C520(a1, 0, 1, (float *)&v23);
  if ( v2 != -1 )
    *((_DWORD *)&unk_1909419A0 + 7166 * v1 + 296) = v2;
  v23 = dword_191041678;
  v24 = qword_19104167C;
  v3 = sub_14003C520(v1, 1, 2, (float *)&v23);
  if ( v3 != -1 )
    *((_DWORD *)&unk_1909419A0 + 7166 * v1 + 374) = v3;
  v23 = dword_1910416DC;
  v24 = qword_1910416E0;
  v4 = sub_14003C520(v1, 2, 3, (float *)&v23);
  if ( v4 != -1 )
    *((_DWORD *)&unk_1909419A0 + 7166 * v1 + 452) = v4;
  v5 = 0;
  v6 = &dword_191041A68;
  v7 = 0;
  for ( i = 10; i < 16; i += 3 )
  {
    v9 = *(v6 - 51);
    v23 = *(v6 - 52);
    HIDWORD(v24) = *(v6 - 50);
    LODWORD(v24) = v9;
    v10 = sub_14003C520(v1, 0, i, (float *)&v23);
    if ( v10 != -1 )
      *(_DWORD *)((char *)&unk_1909419A0 + 28664 * v1 + v7 + 3992) = v10;
    v11 = *(v6 - 26);
    v23 = *(v6 - 27);
    HIDWORD(v24) = *(v6 - 25);
    LODWORD(v24) = v11;
    v12 = sub_14003C520(v1, i, i + 1, (float *)&v23);
    if ( v12 != -1 )
      *(_DWORD *)((char *)&unk_1909419A0 + 28664 * v1 + v7 + 4304) = v12;
    v13 = *(v6 - 1);
    v23 = *(v6 - 2);
    HIDWORD(v24) = *v6;
    LODWORD(v24) = v13;
    v14 = sub_14003C520(v1, i + 1, i + 2, (float *)&v23);
    if ( v14 != -1 )
      *(_DWORD *)((char *)&unk_1909419A0 + 28664 * v1 + v7 + 4616) = v14;
    v6 += 75;
    v7 += 936;
  }
  v15 = 4;
  v16 = &dword_191041810;
  do
  {
    v17 = *(v16 - 51);
    v23 = *(v16 - 52);
    HIDWORD(v24) = *(v16 - 50);
    LODWORD(v24) = v17;
    v18 = sub_14003C520(v1, 2, v15, (float *)&v23);
    if ( v18 != -1 )
      *(_DWORD *)((char *)&unk_1909419A0 + 28664 * v1 + v5 + 2120) = v18;
    v19 = *(v16 - 26);
    v23 = *(v16 - 27);
    HIDWORD(v24) = *(v16 - 25);
    LODWORD(v24) = v19;
    v20 = sub_14003C520(v1, v15, v15 + 1, (float *)&v23);
    if ( v20 != -1 )
      *(_DWORD *)((char *)&unk_1909419A0 + 28664 * v1 + v5 + 2432) = v20;
    v21 = *(v16 - 1);
    v23 = *(v16 - 2);
    HIDWORD(v24) = *v16;
    LODWORD(v24) = v21;
    result = sub_14003C520(v1, v15 + 1, v15 + 2, (float *)&v23);
    if ( (_DWORD)result != -1 )
      *(_DWORD *)((char *)&unk_1909419A0 + 28664 * v1 + v5 + 2744) = result;
    v15 += 3;
    v16 += 75;
    v5 += 936;
  }
  while ( v15 < 10 );
  return result;
}

