/* Address: 0x14007bf40 | Name: sub_14007BF40 | Size: 279 bytes */
__int64 __fastcall sub_14007BF40(int a1, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // r9d
  int v7; // edi
  int v9; // esi
  __int64 result; // rax
  _DWORD *v11; // rcx

  v5 = a2 >> 3;
  v6 = 0;
  v7 = a3 >> 3;
  v9 = a4 >> 3;
  result = 0xFFFFFFFFLL;
  if ( dword_180092B08 <= 0 )
    goto LABEL_10;
  v11 = &unk_180092B10;
  do
  {
    if ( *(v11 - 1) == a1 && *v11 == v5 && v11[1] == v7 && v11[2] == v9 )
      result = (unsigned int)v6;
    ++v6;
    v11 += 3588;
  }
  while ( v6 < dword_180092B08 );
  if ( (_DWORD)result == -1 )
  {
LABEL_10:
    if ( dword_180092B08 < 4096 )
    {
      memset((char *)&unk_180092B0C + 14352 * dword_180092B08, 0, 0x3810u);
      *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387027) = a1;
      *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387028) = v5;
      *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387029) = v7;
      *((_DWORD *)&unk_17BE3F2C0 + 3588 * dword_180092B08 + 17387030) = v9;
      return (unsigned int)dword_180092B08++;
    }
  }
  return result;
}

