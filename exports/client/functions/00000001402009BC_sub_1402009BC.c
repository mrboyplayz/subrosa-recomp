/* Address: 0x1402009bc | Name: sub_1402009BC | Size: 319 bytes */
__int64 __fastcall sub_1402009BC(__int64 a1)
{
  unsigned int v2; // edx
  unsigned int v3; // edx
  int v4; // edx
  _OWORD *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+28h] [rbp-18h]
  __int128 v9; // [rsp+30h] [rbp-10h] BYREF

  if ( !**(_BYTE **)&dword_140404A6C[19064555] )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = &off_1402848D0;
    return a1;
  }
  v2 = (char)**(_BYTE **)&dword_140404A6C[19064555] - 65;
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v2 > 0x14 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 8) = 2;
    *(_QWORD *)a1 = 0;
    return a1;
  }
  v8 = 2;
  v7 = 0;
  if ( (~(dword_140404A6C[19064559] >> 1) & 1) != 0 )
  {
    v3 = v2 & 0xFFFFFFFE;
    if ( v3 > 0xC )
    {
      switch ( v3 )
      {
        case 0xEu:
          v4 = 8;
          goto LABEL_25;
        case 0x10u:
          v4 = 6;
          goto LABEL_25;
        case 0x12u:
          v4 = 9;
          goto LABEL_25;
        case 0x14u:
          v4 = 10;
          goto LABEL_25;
      }
    }
    else
    {
      switch ( v3 )
      {
        case 0xCu:
          v4 = 7;
          goto LABEL_25;
        case 0u:
          v4 = 1;
          goto LABEL_25;
        case 2u:
          v4 = 2;
          goto LABEL_25;
        case 4u:
          v4 = 4;
          goto LABEL_25;
        case 6u:
          v4 = 3;
          goto LABEL_25;
        case 8u:
          v4 = 5;
LABEL_25:
          v5 = sub_1401FEC0C(&v9, v4);
          v8 = 0;
          sub_1401FDF84((__int64)&v7, *(char **)v5, *((_DWORD *)v5 + 2));
          break;
      }
    }
  }
  *(_QWORD *)a1 = v7;
  *(_DWORD *)(a1 + 8) = v8;
  return a1;
}

