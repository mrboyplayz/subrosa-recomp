/* Address: 0x140216da4 | Name: sub_140216DA4 | Size: 618 bytes */
__int64 __fastcall sub_140216DA4(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int16 v4; // cx
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v13; // al
  _DWORD *v14; // rdx
  int v15; // ecx
  int v16; // ecx
  __int16 v17; // ax
  __int64 v18; // rcx
  __int16 v19; // cx
  __int64 v20; // rcx

  if ( *(_QWORD *)(a1 + 1128) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      *errno() = 22;
      sub_14024CF6C(v2);
      return 0xFFFFFFFFLL;
    }
    if ( ++*(_DWORD *)(a1 + 1136) == 2 )
      return *(unsigned int *)(a1 + 40);
    while ( 1 )
    {
      *(_DWORD *)(a1 + 80) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      while ( 1 )
      {
        v19 = **(_WORD **)(a1 + 24);
        *(_WORD *)(a1 + 66) = v19;
        if ( !v19 )
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
          v5 = byte_140284C00[v4 - 32] & 0xF;
        }
        v6 = byte_140284C00[*(_DWORD *)(a1 + 44) + 8 * v5] >> 4;
        *(_DWORD *)(a1 + 44) = v6;
        if ( v6 == 8 )
          goto LABEL_54;
        if ( !v6 )
        {
          v18 = *(unsigned __int16 *)(a1 + 66);
          *(_BYTE *)(a1 + 84) = 1;
          if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
            && (unsigned __int16)sub_140256B38(v18, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
          {
            *(_DWORD *)(a1 + 40) = -1;
          }
          else
          {
            ++*(_DWORD *)(a1 + 40);
          }
          goto LABEL_48;
        }
        v7 = v6 - 1;
        if ( v7 )
        {
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
                    if ( v12 != 1 )
                      return 0xFFFFFFFFLL;
                    v13 = sub_14021B508(a1);
                  }
                  else
                  {
                    v13 = sub_1402199E4(a1);
                  }
                  goto LABEL_49;
                }
                if ( *(_WORD *)(a1 + 66) == 42 )
                {
                  *(_QWORD *)(a1 + 32) += 8LL;
                  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                  if ( v15 < 0 )
                    v15 = -1;
                  *(_DWORD *)(a1 + 56) = v15;
LABEL_48:
                  v13 = 1;
                  goto LABEL_49;
                }
                v14 = (_DWORD *)(a1 + 56);
                goto LABEL_23;
              }
              *(_DWORD *)(a1 + 56) = 0;
            }
            else
            {
              if ( *(_WORD *)(a1 + 66) == 42 )
              {
                *(_QWORD *)(a1 + 32) += 8LL;
                v16 = *(_DWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
                *(_DWORD *)(a1 + 52) = v16;
                if ( v16 < 0 )
                {
                  *(_DWORD *)(a1 + 48) |= 4u;
                  *(_DWORD *)(a1 + 52) = -v16;
                }
                goto LABEL_48;
              }
              v14 = (_DWORD *)(a1 + 52);
LABEL_23:
              v13 = unknown_libname_458(a1, v14);
LABEL_49:
              if ( !v13 )
                return 0xFFFFFFFFLL;
            }
          }
          else
          {
            v17 = *(_WORD *)(a1 + 66);
            switch ( v17 )
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
      if ( ++*(_DWORD *)(a1 + 1136) == 2 )
        return *(unsigned int *)(a1 + 40);
    }
  }
LABEL_54:
  *errno() = 22;
  sub_14024CF6C(v20);
  return 0xFFFFFFFFLL;
}

