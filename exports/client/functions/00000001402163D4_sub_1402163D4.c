/* Address: 0x1402163d4 | Name: sub_1402163D4 | Size: 661 bytes */
__int64 __fastcall sub_1402163D4(__int64 a1)
{
  __int64 v2; // rcx
  int v4; // eax
  _BYTE *v5; // rax
  int *v6; // r14
  int *v7; // rsi
  char v8; // cl
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  char v17; // al
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  int v20; // eax
  char v21; // al
  char *v22; // rax
  char v23; // cl
  __int64 v24; // rcx

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno() = 22;
      sub_14024CF6C(v2);
      return 0xFFFFFFFFLL;
    }
    while ( 1 )
    {
      v4 = ++*(_DWORD *)(a1 + 1144);
      if ( v4 == 3 || v4 == 2 && *(_DWORD *)(a1 + 1148) == 1 )
        return *(unsigned int *)(a1 + 40);
      v5 = *(_BYTE **)(a1 + 1152);
      v6 = (int *)(a1 + 52);
      v7 = (int *)(a1 + 56);
      *(_DWORD *)(a1 + 1148) = 0;
      *(_DWORD *)(a1 + 3560) = -1;
      *(_DWORD *)(a1 + 3564) = -1;
      *(_DWORD *)(a1 + 52) = 0;
      *(_DWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 24) = v5;
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      LOBYTE(v5) = *v5;
      *(_BYTE *)(a1 + 65) = (_BYTE)v5;
      if ( (_BYTE)v5 )
      {
        do
        {
          ++*(_QWORD *)(a1 + 24);
          if ( *(int *)(a1 + 40) < 0 )
            goto LABEL_56;
          v8 = *(_BYTE *)(a1 + 65);
          if ( (unsigned __int8)(v8 - 32) > 0x5Au )
          {
            v9 = 0;
          }
          else
          {
            _mm_lfence();
            v9 = byte_140284C60[v8 - 32] & 0xF;
          }
          *(_DWORD *)(a1 + 44) = byte_140284C60[*(_DWORD *)(a1 + 44) + 8 * v9 + v9] >> 4;
          if ( !(unsigned __int8)unknown_libname_568(a1) )
            return 0xFFFFFFFFLL;
          v10 = *(_DWORD *)(a1 + 44);
          if ( v10 == 8 )
            goto LABEL_58;
          if ( !v10 )
          {
            v17 = sub_140217EC8(a1);
            goto LABEL_53;
          }
          v11 = v10 - 1;
          if ( v11 )
          {
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
                      if ( v16 != 1 )
                        return 0xFFFFFFFFLL;
                      v17 = sub_14021AA50(a1);
                    }
                    else
                    {
                      v17 = sub_1402193CC(a1);
                    }
                    goto LABEL_53;
                  }
                  v18 = a1;
                  if ( *(_BYTE *)(a1 + 65) != 42 )
                  {
                    v19 = (_DWORD *)(a1 + 56);
LABEL_26:
                    v17 = unknown_libname_454(v18, v19);
                    goto LABEL_53;
                  }
                  if ( !(unsigned __int8)sub_140222958(a1) )
                    return 0xFFFFFFFFLL;
                  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                  {
                    if ( *v7 < 0 )
                      *v7 = -1;
                    goto LABEL_40;
                  }
                }
                else
                {
                  *v7 = 0;
                }
              }
              else
              {
                v18 = a1;
                if ( *(_BYTE *)(a1 + 65) != 42 )
                {
                  v19 = (_DWORD *)(a1 + 52);
                  goto LABEL_26;
                }
                if ( !(unsigned __int8)sub_1402224A8(a1) )
                  return 0xFFFFFFFFLL;
                if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
                {
                  v20 = *v6;
                  if ( *v6 < 0 )
                  {
                    *(_DWORD *)(a1 + 48) |= 4u;
                    *v6 = -v20;
                  }
LABEL_40:
                  v17 = 1;
LABEL_53:
                  if ( !v17 )
                    return 0xFFFFFFFFLL;
                }
              }
            }
            else
            {
              v21 = *(_BYTE *)(a1 + 65);
              switch ( v21 )
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
            *v6 = 0;
            *(_BYTE *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 48) = 0;
            *v7 = -1;
            *(_DWORD *)(a1 + 60) = 0;
            *(_BYTE *)(a1 + 84) = 0;
          }
          v22 = *(char **)(a1 + 24);
          v23 = *v22;
          *(_BYTE *)(a1 + 65) = *v22;
        }
        while ( v23 );
      }
      ++*(_QWORD *)(a1 + 24);
LABEL_56:
      if ( !(unsigned __int8)unknown_libname_576(a1) )
        return 0xFFFFFFFFLL;
    }
  }
  else
  {
LABEL_58:
    *errno() = 22;
    sub_14024CF6C(v24);
    return 0xFFFFFFFFLL;
  }
}

