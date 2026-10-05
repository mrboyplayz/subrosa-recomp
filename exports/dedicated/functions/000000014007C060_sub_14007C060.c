/* Address: 0x14007c060 | Name: sub_14007C060 | Size: 347 bytes */
void __fastcall sub_14007C060(int a1, int a2, int a3, int a4)
{
  char v4; // si
  int v5; // ebx
  int v6; // r8d
  int v7; // r10d
  _DWORD *v8; // rax
  __int64 v9; // r11
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rcx
  char *v13; // r10
  __int64 v14; // rdx
  _DWORD *v15; // r8
  __int64 v16; // rcx
  _DWORD *v17; // rax

  v4 = a3;
  v5 = a3 >> 3;
  v6 = 0;
  v7 = -1;
  if ( dword_180092B08 > 0 )
  {
    v8 = &unk_180092B10;
    do
    {
      if ( *(v8 - 1) == a1 && *v8 == a2 >> 3 && v8[1] == v5 && v8[2] == a4 >> 3 )
        v7 = v6;
      ++v6;
      v8 += 3588;
    }
    while ( v6 < dword_180092B08 );
    if ( v7 != -1 )
    {
      v9 = 14352LL * v7;
      v10 = (a4 & 7) + 8 * (v4 & 7);
      v11 = 0;
      v12 = 3588LL * v7 + (a2 & 7u) + 8 * v10;
      v13 = (char *)&unk_180092B1C + v9;
      *((_DWORD *)&unk_17BE3F2C0 + v12 + 17387031) = 0;
LABEL_11:
      v14 = 0;
      v15 = v13;
LABEL_12:
      v16 = 0;
      v17 = v15;
      while ( !*v17 )
      {
        ++v16;
        ++v17;
        if ( v16 >= 8 )
        {
          ++v14;
          v15 += 8;
          if ( v14 < 8 )
            goto LABEL_12;
          ++v11;
          v13 += 256;
          if ( v11 >= 8 )
          {
            memcpy((char *)&unk_180092B0C + v9, (char *)&unk_180092B0C + 14352 * --dword_180092B08, 0x3810u);
            return;
          }
          goto LABEL_11;
        }
      }
    }
  }
}

