/* Address: 0x140197630 | Name: sub_140197630 | Size: 432 bytes */
__int64 __fastcall sub_140197630(int a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  unsigned int *v5; // rdi
  __int64 v7; // rbx
  unsigned int *v8; // rdi
  unsigned int *v9; // rsi
  int Buffer; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  if ( !a2 )
    return 0;
  Buffer = 1;
  if ( a3 )
  {
    sub_14020CE0C(&Buffer, 4, 1, a2);
    sub_14020CE0C(&dword_140404A6C[46 * v3 + 421784763], 1, 64, a2);
    v5 = &dword_140404A6C[46 * v3 + 421784733];
    sub_14020CE0C(v5 + 22, 4, 1, a2);
    sub_14020CE0C(v5 + 26, 4, 1, a2);
    sub_14020CE0C(*((_QWORD *)v5 + 12), 1, (int)v5[22], a2);
    sub_14020CE0C(*((_QWORD *)v5 + 14), 1, (int)v5[26], a2);
    return 1;
  }
  fread(&Buffer, 4, 1, a2);
  if ( Buffer != 1 )
    return 0;
  v7 = 46 * v3;
  fread(&dword_140404A6C[v7 + 421784763], 1, 64, a2);
  v8 = &dword_140404A6C[v7 + 421784733];
  fread(&dword_140404A6C[v7 + 421784755], 4, 1, a2);
  v9 = &dword_140404A6C[v7 + 421784733];
  fread(&dword_140404A6C[v7 + 421784759], 4, 1, a2);
  if ( (int)dword_140404A6C[v7 + 421784755] > 0 )
    *(_QWORD *)&dword_140404A6C[v7 + 421784757] = j__malloc_base((int)v8[22]);
  if ( (int)v9[26] > 0 )
    *(_QWORD *)&dword_140404A6C[v7 + 421784761] = j__malloc_base((int)v9[26]);
  fread(*(_QWORD *)&dword_140404A6C[v7 + 421784757], 1, (int)v8[22], a2);
  fread(*(_QWORD *)&dword_140404A6C[v7 + 421784761], 1, (int)v9[26], a2);
  return 1;
}

