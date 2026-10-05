/* Address: 0x14007b8a0 | Name: sub_14007B8A0 | Size: 517 bytes */
void __fastcall sub_14007B8A0(int a1, int a2, int a3, int a4, int a5, _WORD *a6)
{
  int v6; // edi
  char v7; // r15
  int v8; // esi
  int v10; // ebp
  int v11; // r9d
  char v12; // r12
  char v13; // r13
  int v14; // ebx
  _DWORD *v15; // rax
  __int64 v16; // r12
  __int64 v17; // r15
  unsigned int v18; // r13d
  __int64 v19; // rdx

  v6 = a2 >> 3;
  v7 = a4;
  v8 = a3 >> 3;
  v10 = a4 >> 3;
  v11 = 0;
  v12 = a3;
  v13 = a2;
  v14 = -1;
  if ( dword_180092B08 > 0 )
  {
    v15 = &unk_180092B10;
    do
    {
      if ( *(v15 - 1) == a1 && *v15 == v6 && v15[1] == v8 && v15[2] == v10 )
        v14 = v11;
      ++v11;
      v15 += 3588;
    }
    while ( v11 < dword_180092B08 );
    if ( v14 != -1 )
      goto LABEL_12;
  }
  if ( dword_180092B08 < 4096 )
  {
    memset((char *)&unk_180092B0C + 14352 * dword_180092B08, 0, 0x3810u);
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387027) = a1;
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387028) = v6;
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387029) = v8;
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387030) = v10;
    v14 = dword_180092B08++;
    if ( v14 != -1 )
    {
LABEL_12:
      v16 = v12 & 7;
      v17 = v7 & 7;
      v18 = v13 & 7;
      *((_DWORD *)&unk_17BE3F2C0 + 3588 * v14 + 64 * (_DWORD)v16 + 8 * (_DWORD)v17 + v18 + 17387031) = a5;
      v19 = 2 * (v18 + 897LL * v14 + 8 * (v17 + 8 * v16));
      *((_WORD *)&unk_17BE3F2C0 + 4 * v19 + 34775086) = *a6;
      *((_WORD *)&unk_17BE3F2C0 + 4 * v19 + 34775087) = a6[1];
      *((_WORD *)&unk_17BE3F2C0 + 4 * v19 + 34775088) = a6[2];
      *((_WORD *)&unk_17BE3F2C0 + 4 * v19 + 34775089) = a6[3];
      *((_WORD *)&unk_17BE3F2C0 + 4 * v19 + 34775090) = a6[4];
      *((_WORD *)&unk_17BE3F2C0 + 4 * v19 + 34775091) = a6[5];
      *((_WORD *)&unk_17BE3F2C0 + 4 * v19 + 34775092) = a6[6];
      *((_WORD *)&unk_17BE3F2C0 + 4 * v19 + 34775093) = a6[7];
    }
  }
}

