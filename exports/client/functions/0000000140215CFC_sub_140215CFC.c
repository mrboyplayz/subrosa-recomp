/* Address: 0x140215cfc | Name: sub_140215CFC | Size: 678 bytes */
__int64 __fastcall sub_140215CFC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  int v5; // eax
  _BYTE *v6; // rax
  int *v7; // r14
  int *v8; // rsi
  char v9; // cl
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  char v18; // al
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  int v21; // eax
  char v22; // al
  char *v23; // rax
  char v24; // cl

  if ( !*(_QWORD *)(a1 + 1128) )
  {
LABEL_2:
    *errno() = 22;
    sub_14024CF6C(v2);
    return 0xFFFFFFFFLL;
  }
  if ( !(unsigned __int8)sub_14022389C() )
    return 0xFFFFFFFFLL;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno() = 22;
    sub_14024CF6C(v4);
    return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    v5 = ++*(_DWORD *)(a1 + 1144);
    if ( v5 == 3 || v5 == 2 && *(_DWORD *)(a1 + 1148) == 1 )
      return *(unsigned int *)(a1 + 40);
    v6 = *(_BYTE **)(a1 + 1152);
    v7 = (int *)(a1 + 52);
    v8 = (int *)(a1 + 56);
    *(_DWORD *)(a1 + 1148) = 0;
    *(_DWORD *)(a1 + 3560) = -1;
    *(_DWORD *)(a1 + 3564) = -1;
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 24) = v6;
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    LOBYTE(v6) = *v6;
    *(_BYTE *)(a1 + 65) = (_BYTE)v6;
    if ( (_BYTE)v6 )
    {
      do
      {
        ++*(_QWORD *)(a1 + 24);
        if ( *(int *)(a1 + 40) < 0 )
          goto LABEL_59;
        v9 = *(_BYTE *)(a1 + 65);
        if ( (unsigned __int8)(v9 - 32) > 0x5Au )
        {
          v10 = 0;
        }
        else
        {
          _mm_lfence();
          v10 = byte_140284C60[v9 - 32] & 0xF;
        }
        *(_DWORD *)(a1 + 44) = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * v10 + v10] >> 4;
        if ( !(unsigned __int8)unknown_libname_567(a1) )
          return 0xFFFFFFFFLL;
        v11 = *(_DWORD *)(a1 + 44);
        if ( v11 == 8 )
          goto LABEL_2;
        if ( !v11 )
        {
          v18 = sub_140217D50(a1);
          goto LABEL_56;
        }
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v16 = v15 - 1;
                if ( v16 )
                {
                  v17 = v16 - 1;
                  if ( v17 )
                  {
                    if ( v17 != 1 )
                      return 0xFFFFFFFFLL;
                    v18 = sub_14021A2C8(a1);
                  }
                  else
                  {
                    v18 = sub_140218F70(a1);
                  }
                  goto LABEL_56;
                }
                v19 = a1;
                if ( *(_BYTE *)(a1 + 65) != 42 )
                {
                  v20 = (_DWORD *)(a1 + 56);
LABEL_29:
                  v18 = unknown_libname_451(v19, v20);
                  goto LABEL_56;
                }
                if ( !(unsigned __int8)sub_140222840(a1) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                {
                  if ( *v8 < 0 )
                    *v8 = -1;
                  goto LABEL_43;
                }
              }
              else
              {
                *v8 = 0;
              }
            }
            else
            {
              v19 = a1;
              if ( *(_BYTE *)(a1 + 65) != 42 )
              {
                v20 = (_DWORD *)(a1 + 52);
                goto LABEL_29;
              }
              if ( !(unsigned __int8)sub_140222390(a1) )
                return 0xFFFFFFFFLL;
              if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
              {
                v21 = *v7;
                if ( *v7 < 0 )
                {
                  *(_DWORD *)(a1 + 48) |= 4u;
                  *v7 = -v21;
                }
LABEL_43:
                v18 = 1;
LABEL_56:
                if ( !v18 )
                  return 0xFFFFFFFFLL;
              }
            }
          }
          else
          {
            v22 = *(_BYTE *)(a1 + 65);
            switch ( v22 )
            {
              case ' ':
                *(_DWORD *)(a1 + 48) |= 2u;
                break;
              case '#':
                *(_DWORD *)(a1 + 48) |= 0x20u;
                break;
              case '+':
                *(_DWORD *)(a1 + 48) |= 1u;
                break;
              case '-':
                *(_DWORD *)(a1 + 48) |= 4u;
                break;
              case '0':
                *(_DWORD *)(a1 + 48) |= 8u;
                break;
            }
          }
        }
        else
        {
          *v7 = 0;
          *(_BYTE *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 48) = 0;
          *v8 = -1;
          *(_DWORD *)(a1 + 60) = 0;
          *(_BYTE *)(a1 + 84) = 0;
        }
        v23 = *(char **)(a1 + 24);
        v24 = *v23;
        *(_BYTE *)(a1 + 65) = *v23;
      }
      while ( v24 );
    }
    ++*(_QWORD *)(a1 + 24);
LABEL_59:
    if ( !(unsigned __int8)unknown_libname_575(a1) )
      return 0xFFFFFFFFLL;
  }
}

