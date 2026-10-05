/* Address: 0x1400d52e0 | Name: sub_1400D52E0 | Size: 279 bytes */
__int64 __fastcall sub_1400D52E0(unsigned int a1, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // r9d
  int v7; // edi
  int v9; // esi
  __int64 result; // rax
  unsigned int *v11; // rcx

  v5 = a2 >> 3;
  v6 = 0;
  v7 = a3 >> 3;
  v9 = a4 >> 3;
  result = 0xFFFFFFFFLL;
  if ( (int)dword_140404A6C[210457991] <= 0 )
    goto LABEL_10;
  v11 = &dword_140404A6C[210457993];
  do
  {
    if ( *(v11 - 1) == a1 && *v11 == v5 && v11[1] == v7 && v11[2] == v9 )
      result = (unsigned int)v6;
    ++v6;
    v11 += 3588;
  }
  while ( v6 < (int)dword_140404A6C[210457991] );
  if ( (_DWORD)result == -1 )
  {
LABEL_10:
    if ( (int)dword_140404A6C[210457991] < 4096 )
    {
      MEMORY[0x1401FCD30](&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992], 0, 14352);
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992] = a1;
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457993] = v5;
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457994] = v7;
      dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457995] = v9;
      return dword_140404A6C[210457991]++;
    }
  }
  return result;
}

