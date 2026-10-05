/* Address: 0x1400c5360 | Name: sub_1400C5360 | Size: 685 bytes */
__int64 __fastcall sub_1400C5360(signed int a1)
{
  __int64 v2; // rax
  int v3; // ebx
  unsigned int *v4; // r11
  int v5; // r10d
  __int64 v6; // rsi
  char *v7; // rcx
  unsigned int *v8; // rdi
  int v9; // r9d
  char v10; // al
  char v11; // dl
  __int64 v12; // rdi
  __int64 v13; // r9
  unsigned int *v14; // r8
  char *v15; // rcx
  unsigned int *v16; // rdx
  char v17; // al
  char *v18; // r9
  unsigned int *v19; // r11
  _BYTE *v20; // r10
  int v21; // r8d
  char v22; // cl
  char v23; // dl
  __int64 v24; // r9
  unsigned int *v25; // r8
  char *v26; // rcx
  unsigned int *v27; // rdx
  char v28; // al

  v2 = 1760LL * a1;
  v3 = 0;
  v4 = &dword_140404A6C[v2 + 278847519];
  v5 = 0;
  v6 = a1;
  v7 = (char *)&dword_140404A6C[v2 + 278846386] + 1;
  v8 = &dword_140404A6C[v2 + 278845893];
  do
  {
    v9 = *v4;
    *(v7 - 1) = v5 + 65;
    v10 = 12;
    if ( v8[1690] != v5 )
      v10 = 15;
    v7[2047] = v10;
    v7[2048] = -113;
    if ( v9 < 10 )
      v11 = 32;
    else
      v11 = v9 / 10 + 48;
    *v7 = v11;
    ++v5;
    v7[1] = v9 % 10 + 48;
    ++v4;
    v7[2049] = -113;
    v7[2] = 32;
    v7 += 4;
  }
  while ( v5 < 15 );
  v12 = 1760 * v6;
  LOBYTE(dword_140404A6C[1760 * v6 + 278846401]) = 0;
  sub_140050F90(a1, 17);
  v13 = 15;
  v14 = &dword_140404A6C[1760 * v6 + 278846402];
  v15 = (char *)&dword_140404A6C[1760 * v6 + 278846402] + 2;
  v16 = &dword_140404A6C[1760 * v6 + 278847551];
  do
  {
    if ( *v16 == -1 )
      v17 = 32;
    else
      v17 = *v16 + 65;
    *(_BYTE *)v14 = v17;
    ++v16;
    *(_WORD *)(v15 - 1) = 8224;
    ++v14;
    v15[1] = 32;
    v15 += 4;
    --v13;
  }
  while ( v13 );
  LOBYTE(dword_140404A6C[v12 + 278846417]) = 0;
  sub_140050F90(a1, 18);
  sub_140050F90(a1, 19);
  v18 = (char *)&dword_140404A6C[v12 + 278846434] + 1;
  v19 = &dword_140404A6C[v12 + 278847534];
  v20 = (char *)&dword_140404A6C[v12 + 278846946] + 2;
  do
  {
    v21 = *v19;
    *(v20 - 2050) = v3 + 80;
    v22 = 12;
    if ( dword_140404A6C[v12 + 278847583] != v3 + 15 )
      v22 = 15;
    *(v20 - 2) = v22;
    if ( v21 < 10 )
    {
      v18[2048] = -113;
      v23 = 32;
    }
    else
    {
      *(v20 - 1) = -113;
      v23 = v21 / 10 + 48;
    }
    *v18 = v23;
    ++v3;
    v18[1] = v21
           - 2
           * (4
            * (((((unsigned __int64)(1717986919LL * v21) >> 32) & 0x80000000) != 0LL)
             + ((int)((unsigned __int64)(1717986919LL * v21) >> 32) >> 2))
            + v21 / 10)
           + 48;
    ++v19;
    *v20 = -113;
    v20 += 4;
    v18[2] = 32;
    v18 += 4;
  }
  while ( v3 < 11 );
  LOBYTE(dword_140404A6C[v12 + 278846445]) = 0;
  sub_140050F90(a1, 20);
  v24 = 11;
  v25 = &dword_140404A6C[v12 + 278846450];
  v26 = (char *)&dword_140404A6C[v12 + 278846450] + 2;
  v27 = &dword_140404A6C[v12 + 278847566];
  do
  {
    if ( *v27 == -1 )
      v28 = 32;
    else
      v28 = *v27 + 65;
    *(_BYTE *)v25 = v28;
    ++v27;
    *(_WORD *)(v26 - 1) = 8224;
    ++v25;
    v26[1] = 32;
    v26 += 4;
    --v24;
  }
  while ( v24 );
  LOBYTE(dword_140404A6C[v12 + 278846461]) = 0;
  return sub_140050F90(a1, 21);
}

