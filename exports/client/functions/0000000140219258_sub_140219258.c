/* Address: 0x140219258 | Name: sub_140219258 | Size: 369 bytes */
char __fastcall sub_140219258(__int64 a1)
{
  char v1; // al
  __int64 v3; // rcx
  _BYTE *v4; // rax
  int v5; // eax
  _BYTE *v6; // rax
  char *v7; // rdx
  char v8; // al
  unsigned __int8 v9; // al
  __int64 v10; // rdx

  v1 = *(_BYTE *)(a1 + 65);
  if ( v1 == 70 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 7;
      return sub_14021A7E8(a1);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_BYTE *)a1 & 8) == 0 )
    {
      *(_DWORD *)(a1 + 44) = 8;
LABEL_7:
      *errno() = 22;
      sub_14024CF6C(v3);
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 60) )
      goto LABEL_7;
    switch ( v1 )
    {
      case 'I':
        v7 = *(char **)(a1 + 24);
        v8 = *v7;
        if ( *v7 == 51 && v7[1] == 50 )
        {
          *(_DWORD *)(a1 + 60) = 10;
          *(_QWORD *)(a1 + 24) = v7 + 2;
        }
        else if ( v8 == 54 && v7[1] == 52 )
        {
          *(_DWORD *)(a1 + 60) = 11;
          *(_QWORD *)(a1 + 24) = v7 + 2;
        }
        else
        {
          v9 = v8 - 88;
          if ( v9 <= 0x20u )
          {
            v10 = 0x120821001LL;
            if ( _bittest64(&v10, (char)v9) )
              *(_DWORD *)(a1 + 60) = 9;
          }
        }
        return 1;
      case 'L':
        *(_DWORD *)(a1 + 60) = 8;
        return 1;
      case 'T':
        *(_DWORD *)(a1 + 60) = 13;
        return 1;
      case 'h':
        v6 = *(_BYTE **)(a1 + 24);
        if ( *v6 == 104 )
        {
          *(_QWORD *)(a1 + 24) = v6 + 1;
          v5 = 1;
        }
        else
        {
          v5 = 2;
        }
        break;
      case 'j':
        *(_DWORD *)(a1 + 60) = 5;
        return 1;
      case 'l':
        v4 = *(_BYTE **)(a1 + 24);
        if ( *v4 == 108 )
        {
          *(_QWORD *)(a1 + 24) = v4 + 1;
          v5 = 4;
        }
        else
        {
          v5 = 3;
        }
        break;
      default:
        switch ( v1 )
        {
          case 't':
            *(_DWORD *)(a1 + 60) = 7;
            break;
          case 'w':
            *(_DWORD *)(a1 + 60) = 12;
            break;
          case 'z':
            *(_DWORD *)(a1 + 60) = 6;
            break;
        }
        return 1;
    }
    *(_DWORD *)(a1 + 60) = v5;
  }
  return 1;
}

