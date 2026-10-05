/* Address: 0x1400d4c40 | Name: sub_1400D4C40 | Size: 517 bytes */
void __fastcall sub_1400D4C40(unsigned int a1, int a2, int a3, int a4, unsigned int a5, _WORD *a6)
{
  int v6; // edi
  char v7; // r15
  int v8; // esi
  int v10; // ebp
  int v11; // r9d
  char v12; // r12
  char v13; // r13
  signed int v14; // ebx
  unsigned int *v15; // rax
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
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v15 = &dword_140404A6C[210457993];
    do
    {
      if ( *(v15 - 1) == a1 && *v15 == v6 && v15[1] == v8 && v15[2] == v10 )
        v14 = v11;
      ++v11;
      v15 += 3588;
    }
    while ( v11 < (int)dword_140404A6C[210457991] );
    if ( v14 != -1 )
      goto LABEL_12;
  }
  if ( (int)dword_140404A6C[210457991] < 4096 )
  {
    MEMORY[0x1401FCD30](&dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992], 0, 14352);
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457992] = a1;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457993] = v6;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457994] = v8;
    dword_140404A6C[3588 * dword_140404A6C[210457991] + 210457995] = v10;
    v14 = dword_140404A6C[210457991]++;
    if ( v14 != -1 )
    {
LABEL_12:
      v16 = v12 & 7;
      v17 = v7 & 7;
      v18 = v13 & 7;
      dword_140404A6C[3588 * v14 + 210457996 + 64 * (_DWORD)v16 + 8 * (_DWORD)v17 + v18] = a5;
      v19 = 2 * (v18 + 897LL * v14 + 8 * (v17 + 8 * v16));
      LOWORD(dword_140404A6C[2 * v19 + 210458508]) = *a6;
      HIWORD(dword_140404A6C[2 * v19 + 210458508]) = a6[1];
      LOWORD(dword_140404A6C[2 * v19 + 210458509]) = a6[2];
      HIWORD(dword_140404A6C[2 * v19 + 210458509]) = a6[3];
      LOWORD(dword_140404A6C[2 * v19 + 210458510]) = a6[4];
      HIWORD(dword_140404A6C[2 * v19 + 210458510]) = a6[5];
      LOWORD(dword_140404A6C[2 * v19 + 210458511]) = a6[6];
      HIWORD(dword_140404A6C[2 * v19 + 210458511]) = a6[7];
    }
  }
}

