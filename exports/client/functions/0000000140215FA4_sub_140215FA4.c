/* Address: 0x140215fa4 | Name: sub_140215FA4 | Size: 534 bytes */
__int64 __fastcall sub_140215FA4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  char v5; // cl
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char v14; // al
  _DWORD *v15; // rdx
  int v16; // ecx
  int v17; // ecx
  char v18; // al
  char *v19; // rax
  char v20; // cl

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
  if ( ++*(_DWORD *)(a1 + 1136) == 2 )
    return *(unsigned int *)(a1 + 40);
  do
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      v19 = *(char **)(a1 + 24);
      v20 = *v19;
      *(_BYTE *)(a1 + 65) = *v19;
      if ( !v20 )
        break;
      ++*(_QWORD *)(a1 + 24);
      if ( *(int *)(a1 + 40) < 0 )
        goto LABEL_51;
      v5 = *(_BYTE *)(a1 + 65);
      if ( (unsigned __int8)(v5 - 32) > 0x5Au )
      {
        v6 = 0;
      }
      else
      {
        _mm_lfence();
        v6 = byte_140284C00[v5 - 32] & 0xF;
      }
      v7 = byte_140284C00[*(_DWORD *)(a1 + 44) + 8 * v6] >> 4;
      *(_DWORD *)(a1 + 44) = v7;
      if ( v7 == 8 )
        goto LABEL_2;
      if ( !v7 )
      {
        v14 = sub_140217DE4(a1);
        goto LABEL_48;
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
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
                  v14 = sub_14021A564(a1);
                }
                else
                {
                  v14 = sub_1402190E4(a1);
                }
                goto LABEL_48;
              }
              if ( *(_BYTE *)(a1 + 65) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                v16 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                if ( v16 < 0 )
                  v16 = -1;
                *(_DWORD *)(a1 + 56) = v16;
LABEL_35:
                v14 = 1;
                goto LABEL_48;
              }
              v15 = (_DWORD *)(a1 + 56);
              goto LABEL_26;
            }
            *(_DWORD *)(a1 + 56) = 0;
          }
          else
          {
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
              goto LABEL_35;
            }
            v15 = (_DWORD *)(a1 + 52);
LABEL_26:
            v14 = unknown_libname_452(a1, v15);
LABEL_48:
            if ( !v14 )
              return 0xFFFFFFFFLL;
          }
        }
        else
        {
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
      }
      else
      {
        *(_DWORD *)(a1 + 52) = 0;
        *(_DWORD *)(a1 + 48) = 0;
        *(_DWORD *)(a1 + 60) = 0;
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 56) = -1;
        *(_BYTE *)(a1 + 84) = 0;
      }
    }
    ++*(_QWORD *)(a1 + 24);
LABEL_51:
    ++*(_DWORD *)(a1 + 1136);
  }
  while ( *(_DWORD *)(a1 + 1136) != 2 );
  return *(unsigned int *)(a1 + 40);
}

