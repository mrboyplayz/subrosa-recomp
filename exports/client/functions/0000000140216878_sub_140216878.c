/* Address: 0x140216878 | Name: sub_140216878 | Size: 631 bytes */
__int64 __fastcall sub_140216878(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int16 v4; // cx
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
  __int16 v18; // ax
  __int64 v19; // rcx
  __int16 v20; // cx
  __int64 v21; // rcx

  if ( !*(_QWORD *)(a1 + 1128) )
    goto LABEL_56;
  if ( !*(_QWORD *)(a1 + 24) )
  {
    *errno() = 22;
    sub_14024CF6C(v2);
    return 0xFFFFFFFFLL;
  }
  if ( ++*(_DWORD *)(a1 + 1136) == 2 )
    return *(unsigned int *)(a1 + 40);
  while ( 2 )
  {
    *(_DWORD *)(a1 + 80) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    while ( 1 )
    {
      v20 = **(_WORD **)(a1 + 24);
      *(_WORD *)(a1 + 66) = v20;
      if ( !v20 )
        break;
      *(_QWORD *)(a1 + 24) += 2LL;
      if ( *(int *)(a1 + 40) < 0 )
        goto LABEL_52;
      v4 = *(_WORD *)(a1 + 66);
      if ( (unsigned __int16)(v4 - 32) > 0x5Au )
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
        goto LABEL_56;
      if ( !v7 )
      {
        v19 = *(unsigned __int16 *)(a1 + 66);
        *(_BYTE *)(a1 + 84) = 1;
        if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
          && (unsigned __int16)sub_140256B38(v19, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
        {
          *(_DWORD *)(a1 + 40) = -1;
        }
        else
        {
          ++*(_DWORD *)(a1 + 40);
        }
        goto LABEL_48;
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( !v10 )
          {
            if ( *(_WORD *)(a1 + 66) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              v17 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              *(_DWORD *)(a1 + 52) = v17;
              if ( v17 < 0 )
              {
                *(_DWORD *)(a1 + 48) |= 4u;
                *(_DWORD *)(a1 + 52) = -v17;
              }
              goto LABEL_48;
            }
            v15 = (_DWORD *)(a1 + 52);
            goto LABEL_23;
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
                v14 = sub_14021AF34(a1);
              }
              else
              {
                v14 = sub_1402196B4(a1);
              }
              goto LABEL_49;
            }
            if ( *(_WORD *)(a1 + 66) == 42 )
            {
              *(_QWORD *)(a1 + 32) += 8LL;
              v16 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
              if ( v16 < 0 )
                v16 = -1;
              *(_DWORD *)(a1 + 56) = v16;
LABEL_48:
              v14 = 1;
              goto LABEL_49;
            }
            v15 = (_DWORD *)(a1 + 56);
LABEL_23:
            v14 = unknown_libname_456(a1, v15);
LABEL_49:
            if ( !v14 )
              return 0xFFFFFFFFLL;
          }
          else
          {
            *(_DWORD *)(a1 + 56) = 0;
          }
        }
        else
        {
          v18 = *(_WORD *)(a1 + 66);
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
        *(_QWORD *)(a1 + 48) = 0;
        *(_BYTE *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 56) = -1;
        *(_DWORD *)(a1 + 60) = 0;
        *(_BYTE *)(a1 + 84) = 0;
      }
    }
    *(_QWORD *)(a1 + 24) += 2LL;
LABEL_52:
    if ( !*(_DWORD *)(a1 + 44) || *(_DWORD *)(a1 + 44) == 7 )
    {
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
      continue;
    }
    break;
  }
LABEL_56:
  *errno() = 22;
  sub_14024CF6C(v21);
  return 0xFFFFFFFFLL;
}

