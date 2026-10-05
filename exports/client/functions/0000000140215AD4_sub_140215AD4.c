/* Address: 0x140215ad4 | Name: sub_140215AD4 | Size: 551 bytes */
__int64 __fastcall sub_140215AD4(__int64 a1)
{
  __int64 v2; // rcx
  char v4; // cl
  int v5; // ecx
  __int64 v6; // rcx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  char v14; // al
  _DWORD *v15; // rdx
  int v16; // ecx
  int v17; // ecx
  char v18; // al
  char *v19; // rax
  char v20; // cl
  __int64 v21; // rcx

  if ( !*(_QWORD *)(a1 + 1128) )
    goto LABEL_53;
  if ( (unsigned __int8)sub_14022389C() )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno() = 22;
      sub_14024CF6C(v2);
      return 0xFFFFFFFFLL;
    }
    if ( ++*(_DWORD *)(a1 + 1136) == 2 )
      return *(unsigned int *)(a1 + 40);
LABEL_6:
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v19 = *(char **)(a1 + 24);
            v20 = *v19;
            *(_BYTE *)(a1 + 65) = *v19;
            if ( !v20 )
            {
              ++*(_QWORD *)(a1 + 24);
LABEL_49:
              if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
              {
                if ( ++*(_DWORD *)(a1 + 1136) == 2 )
                  return *(unsigned int *)(a1 + 40);
                goto LABEL_6;
              }
LABEL_53:
              *errno() = 22;
              sub_14024CF6C(v21);
              return 0xFFFFFFFFLL;
            }
            ++*(_QWORD *)(a1 + 24);
            if ( *(int *)(a1 + 40) < 0 )
              goto LABEL_49;
            v4 = *(_BYTE *)(a1 + 65);
            if ( (unsigned __int8)(v4 - 32) > 0x5Au )
            {
              v5 = 0;
            }
            else
            {
              _mm_lfence();
              v5 = byte_140284C60[v4 - 32] & 0xF;
            }
            v6 = (unsigned int)(*(_DWORD *)(a1 + 44) + 8 * v5 + v5);
            v7 = byte_140284C60[v6] >> 4;
            *(_DWORD *)(a1 + 44) = v7;
            if ( v7 == 8 )
              goto LABEL_53;
            if ( !v7 )
            {
              v14 = sub_140217CE0(a1);
              goto LABEL_46;
            }
            v8 = v7 - 1;
            if ( v8 )
              break;
            *(_DWORD *)(a1 + 52) = 0;
            *(_DWORD *)(a1 + 48) = 0;
            *(_DWORD *)(a1 + 60) = 0;
            *(_BYTE *)(a1 + 64) = 0;
            *(_DWORD *)(a1 + 56) = -1;
            *(_BYTE *)(a1 + 84) = 0;
          }
          v9 = v8 - 1;
          if ( v9 )
            break;
          v18 = *(_BYTE *)(a1 + 65);
          switch ( v18 )
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
        v10 = v9 - 1;
        if ( v10 )
          break;
        if ( *(_BYTE *)(a1 + 65) == 42 )
        {
          *(_QWORD *)(a1 + 32) += 8LL;
          v17 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
          *(_DWORD *)(a1 + 52) = v17;
          if ( v17 < 0 )
          {
            *(_DWORD *)(a1 + 48) |= 4u;
            *(_DWORD *)(a1 + 52) = -v17;
          }
          goto LABEL_33;
        }
        v15 = (_DWORD *)(a1 + 52);
LABEL_24:
        v14 = unknown_libname_450(a1, v15);
LABEL_46:
        if ( !v14 )
          return 0xFFFFFFFFLL;
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
            if ( v13 != 1 )
              return 0xFFFFFFFFLL;
            v14 = sub_14021A044(a1);
          }
          else
          {
            v14 = sub_140218DFC(a1);
          }
          goto LABEL_46;
        }
        if ( *(_BYTE *)(a1 + 65) == 42 )
        {
          *(_QWORD *)(a1 + 32) += 8LL;
          v16 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
          if ( v16 < 0 )
            v16 = -1;
          *(_DWORD *)(a1 + 56) = v16;
LABEL_33:
          v14 = 1;
          goto LABEL_46;
        }
        v15 = (_DWORD *)(a1 + 56);
        goto LABEL_24;
      }
      *(_DWORD *)(a1 + 56) = 0;
    }
  }
  return 0xFFFFFFFFLL;
}

