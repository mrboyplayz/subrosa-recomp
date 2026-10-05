/* Address: 0x1400d5950 | Name: sub_1400D5950 | Size: 187 bytes */
__int64 __fastcall sub_1400D5950(int a1, int a2, int a3, int a4)
{
  char v4; // si
  int v5; // edi
  int v6; // r9d
  int v7; // r10d
  unsigned int *v8; // rax

  v4 = a4;
  v5 = a4 >> 3;
  v6 = 0;
  v7 = -1;
  if ( (int)dword_140404A6C[210457991] <= 0 )
    return 0;
  v8 = &dword_140404A6C[210457993];
  do
  {
    if ( *(v8 - 1) == a1 && *v8 == a2 >> 3 && v8[1] == a3 >> 3 && v8[2] == v5 )
      v7 = v6;
    ++v6;
    v8 += 3588;
  }
  while ( v6 < (int)dword_140404A6C[210457991] );
  if ( v7 == -1 )
    return 0;
  else
    return dword_140404A6C[3588 * v7 + 210457996 + 64 * (a3 & 7) + 8 * (v4 & 7) + (a2 & 7)];
}

