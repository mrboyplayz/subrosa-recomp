/* Address: 0x1402355cc | Name: sub_1402355CC | Size: 309 bytes */
char __fastcall MEMORY[0x1402355CC](__int64 a1)
{
  unsigned __int64 v1; // rax
  _BYTE *v2; // r8
  char v4; // al
  char v5; // cl
  _BYTE *v6; // rcx
  char v7; // al
  __int64 v8; // r8

  v2 = *(_BYTE **)(a1 + 8);
  LOBYTE(v1) = *v2;
  if ( *v2 == 73 )
  {
    v6 = v2 + 1;
    v7 = v2[1];
    if ( v7 == 51 )
    {
      if ( v2[2] == 50 )
      {
        *(_DWORD *)(a1 + 40) = 9;
        *(_QWORD *)(a1 + 8) = v2 + 3;
        LOBYTE(v1) = (_BYTE)v2 + 3;
        return v1;
      }
    }
    else if ( v7 == 54 && v2[2] == 52 )
    {
      LOBYTE(v1) = (_BYTE)v2 + 3;
      *(_QWORD *)(a1 + 8) = v2 + 3;
      goto LABEL_25;
    }
    LOBYTE(v1) = v7 - 88;
    if ( (unsigned __int8)v1 > 0x20u )
      return v1;
    v8 = 0x120821001LL;
    if ( !_bittest64(&v8, v1) )
      return v1;
    *(_QWORD *)(a1 + 8) = v6;
LABEL_25:
    *(_DWORD *)(a1 + 40) = 10;
    return v1;
  }
  switch ( (_BYTE)v1 )
  {
    case 'L':
      *(_DWORD *)(a1 + 40) = 8;
      *(_QWORD *)(a1 + 8) = v2 + 1;
      LOBYTE(v1) = (_BYTE)v2 + 1;
      break;
    case 'T':
      *(_DWORD *)(a1 + 40) = 11;
      *(_QWORD *)(a1 + 8) = v2 + 1;
      LOBYTE(v1) = (_BYTE)v2 + 1;
      break;
    case 'h':
      v5 = v2[1];
      v1 = (unsigned __int64)&v2[(v5 == 104) + 1];
      *(_QWORD *)(a1 + 8) = v1;
      *(_DWORD *)(a1 + 40) = (v5 != 104) + 1;
      break;
    case 'j':
      *(_DWORD *)(a1 + 40) = 5;
      *(_QWORD *)(a1 + 8) = v2 + 1;
      LOBYTE(v1) = (_BYTE)v2 + 1;
      break;
    case 'l':
      v4 = v2[1];
      *(_QWORD *)(a1 + 8) = &v2[(v4 == 108) + 1];
      LODWORD(v1) = 4 - (v4 != 108);
      *(_DWORD *)(a1 + 40) = v1;
      break;
    case 't':
      *(_DWORD *)(a1 + 40) = 7;
      *(_QWORD *)(a1 + 8) = v2 + 1;
      LOBYTE(v1) = (_BYTE)v2 + 1;
      break;
    case 'z':
      *(_DWORD *)(a1 + 40) = 6;
      *(_QWORD *)(a1 + 8) = v2 + 1;
      LOBYTE(v1) = (_BYTE)v2 + 1;
      break;
  }
  return v1;
}

