/* Address: 0x1400d4e50 | Name: sub_1400D4E50 | Size: 368 bytes */
void __fastcall sub_1400D4E50(unsigned int a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5; // esi
  int v6; // ebx
  char v7; // r14
  int v8; // edi
  int v10; // r9d
  char v11; // r15
  char v12; // r12
  unsigned int v13; // r10d
  unsigned int *v14; // rax

  v5 = a4 >> 3;
  v6 = a2 >> 3;
  v7 = a4;
  v8 = a3 >> 3;
  v10 = 0;
  v11 = a3;
  v12 = a2;
  v13 = -1;
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v14 = &dword_140404A6C[210457993];
    do
    {
      if ( *(v14 - 1) == a1 && *v14 == v6 && v14[1] == v8 && v14[2] == v5 )
        v13 = v10;
      ++v10;
      v14 += 3588;
    }
    while ( v10 < (int)dword_140404A6C[210457991] );
    if ( v13 != -1 )
      goto LABEL_12;
  }
  if ( (int)dword_140404A6C[210457991] < 4096 )
  {
    MEMORY[0x1401FCD30](&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992], 0, 14352);
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992] = a1;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457993] = v6;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457994] = v8;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457995] = v5;
    v13 = dword_140404A6C[210457991]++;
    if ( v13 != -1 )
LABEL_12:
      dword_140404A6C[3588 * v13 + 210461068 + 64 * (v11 & 7) + 8 * (v7 & 7) + (v12 & 7)] = a5;
  }
}

