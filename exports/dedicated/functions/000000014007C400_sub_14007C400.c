/* Address: 0x14007c400 | Name: sub_14007C400 | Size: 187 bytes */
__int64 __fastcall sub_14007C400(int a1, int a2, int a3, int a4)
{
  char v4; // si
  int v5; // edi
  int v6; // r9d
  int v7; // r10d
  _DWORD *v8; // rax

  v4 = a4;
  v5 = a4 >> 3;
  v6 = 0;
  v7 = -1;
  if ( dword_180092B08 <= 0 )
    return 0;
  v8 = &unk_180092B10;
  do
  {
    if ( *(v8 - 1) == a1 && *v8 == a2 >> 3 && v8[1] == a3 >> 3 && v8[2] == v5 )
      v7 = v6;
    ++v6;
    v8 += 3588;
  }
  while ( v6 < dword_180092B08 );
  if ( v7 == -1 )
    return 0;
  else
    return *((unsigned int *)&unk_180092B1C + 3588 * v7 + 64 * (a3 & 7u) + 8 * (v4 & 7) + (a2 & 7));
}

