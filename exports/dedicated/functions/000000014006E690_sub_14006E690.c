/* Address: 0x14006e690 | Name: sub_14006E690 | Size: 685 bytes */
__int64 __fastcall sub_14006E690(signed int a1)
{
  unsigned __int64 v2; // rax
  int v3; // ebx
  int *v4; // r11
  int v5; // r10d
  __int64 v6; // rsi
  char *v7; // rcx
  char *v8; // rdi
  int v9; // r9d
  char v10; // al
  char v11; // dl
  unsigned __int64 v12; // rdi
  __int64 v13; // r9
  char *v14; // r8
  char *v15; // rcx
  __int64 *v16; // rdx
  char v17; // al
  char *v18; // r9
  int *v19; // r11
  _BYTE *v20; // r10
  int v21; // r8d
  char v22; // cl
  char v23; // dl
  __int64 v24; // r9
  char *v25; // r8
  char *v26; // rcx
  _DWORD *v27; // rdx
  char v28; // al

  v2 = 7040LL * a1;
  v3 = 0;
  v4 = &dword_190260A28[v2 / 4];
  v5 = 0;
  v6 = a1;
  v7 = (char *)&unk_19025F875 + v2;
  v8 = (char *)&unk_19025F0C0 + v2;
  do
  {
    v9 = *v4;
    *(v7 - 1) = v5 + 65;
    v10 = 12;
    if ( *((_DWORD *)v8 + 1690) != v5 )
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
  v12 = 7040 * v6;
  *((_BYTE *)&unk_19025F0C0 + 7040 * v6 + 2032) = 0;
  sub_1400395A0(a1, 0x11u);
  v13 = 15;
  v14 = (char *)&unk_19025F8B4 + 7040 * v6;
  v15 = (char *)&unk_19025F8B6 + 7040 * v6;
  v16 = &qword_190260AA8[880 * v6];
  do
  {
    if ( *(_DWORD *)v16 == -1 )
      v17 = 32;
    else
      v17 = *(_DWORD *)v16 + 65;
    *v14 = v17;
    v16 = (__int64 *)((char *)v16 + 4);
    *(_WORD *)(v15 - 1) = 8224;
    v14 += 4;
    v15[1] = 32;
    v15 += 4;
    --v13;
  }
  while ( v13 );
  *((_BYTE *)&unk_19025F0C0 + v12 + 2096) = 0;
  sub_1400395A0(a1, 0x12u);
  sub_1400395A0(a1, 0x13u);
  v18 = (char *)&unk_19025F935 + v12;
  v19 = &dword_190260A64[v12 / 4];
  v20 = (char *)&unk_190260136 + v12;
  do
  {
    v21 = *v19;
    *(v20 - 2050) = v3 + 80;
    v22 = 12;
    if ( *(_DWORD *)((char *)&unk_19025F0C0 + v12 + 6760) != v3 + 15 )
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
  *((_BYTE *)&unk_19025F0C0 + v12 + 2208) = 0;
  sub_1400395A0(a1, 0x14u);
  v24 = 11;
  v25 = (char *)&unk_19025F974 + v12;
  v26 = (char *)&unk_19025F976 + v12;
  v27 = (_DWORD *)&qword_190260AE0[v12 / 8] + 1;
  do
  {
    if ( *v27 == -1 )
      v28 = 32;
    else
      v28 = *v27 + 65;
    *v25 = v28;
    ++v27;
    *(_WORD *)(v26 - 1) = 8224;
    v25 += 4;
    v26[1] = 32;
    v26 += 4;
    --v24;
  }
  while ( v24 );
  *((_BYTE *)&unk_19025F0C0 + v12 + 2272) = 0;
  return sub_1400395A0(a1, 0x15u);
}

