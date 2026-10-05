/* Address: 0x14007bab0 | Name: sub_14007BAB0 | Size: 368 bytes */
void __fastcall sub_14007BAB0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // ebx
  char v7; // r14
  int v8; // edi
  int v10; // r9d
  char v11; // r15
  char v12; // r12
  int v13; // r10d
  _DWORD *v14; // rax

  v5 = a4 >> 3;
  v6 = a2 >> 3;
  v7 = a4;
  v8 = a3 >> 3;
  v10 = 0;
  v11 = a3;
  v12 = a2;
  v13 = -1;
  if ( dword_180092B08 > 0 )
  {
    v14 = &unk_180092B10;
    do
    {
      if ( *(v14 - 1) == a1 && *v14 == v6 && v14[1] == v8 && v14[2] == v5 )
        v13 = v10;
      ++v10;
      v14 += 3588;
    }
    while ( v10 < dword_180092B08 );
    if ( v13 != -1 )
      goto LABEL_12;
  }
  if ( dword_180092B08 < 4096 )
  {
    memset((char *)&unk_180092B0C + 14352 * dword_180092B08, 0, 0x3810u);
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387027) = a1;
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387028) = v6;
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387029) = v8;
    *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387030) = v5;
    v13 = dword_180092B08++;
    if ( v13 != -1 )
LABEL_12:
      *((_DWORD *)&unk_17BE3F2C0 + 3588 * v13 + 64 * (v11 & 7u) + 8 * (v7 & 7) + (v12 & 7) + 17390103) = a5;
  }
}

