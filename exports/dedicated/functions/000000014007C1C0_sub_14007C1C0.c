/* Address: 0x14007c1c0 | Name: sub_14007C1C0 | Size: 397 bytes */
void __fastcall sub_14007C1C0(signed int a1, signed int a2, signed int a3, signed int a4)
{
  int v5; // ebx
  int v7; // r8d
  int v10; // r10d
  _DWORD *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // rcx
  char *v15; // r10
  __int64 v16; // rdx
  _DWORD *v17; // r8
  __int64 v18; // rcx
  _DWORD *v19; // rax

  v5 = a3 >> 3;
  v7 = 0;
  v10 = -1;
  if ( dword_180092B08 > 0 )
  {
    v11 = &unk_180092B10;
    do
    {
      if ( *(v11 - 1) == a1 && *v11 == a2 >> 3 && v11[1] == v5 && v11[2] == a4 >> 3 )
        v10 = v7;
      ++v7;
      v11 += 3588;
    }
    while ( v7 < dword_180092B08 );
    if ( v10 != -1 )
    {
      v12 = 0;
      v13 = 14352LL * v10;
      v14 = 3588LL * v10 + (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7u));
      v15 = (char *)&unk_18009531C + v13;
      *((_DWORD *)&unk_17BE3F2C0 + v14 + 17389591) = 0;
LABEL_11:
      v16 = 0;
      v17 = v15;
LABEL_12:
      v18 = 0;
      v19 = v17;
      while ( !*(v19 - 2560) && !*v19 && !v19[512] )
      {
        ++v18;
        ++v19;
        if ( v18 >= 8 )
        {
          ++v16;
          v17 += 8;
          if ( v16 < 8 )
            goto LABEL_12;
          ++v12;
          v15 += 256;
          if ( v12 >= 8 )
          {
            memcpy((char *)&unk_180092B0C + v13, (char *)&unk_180092B0C + 14352 * --dword_180092B08, 0x3810u);
            break;
          }
          goto LABEL_11;
        }
      }
      sub_14000DC70(a1, a2, a3, a4, 0);
    }
  }
}

