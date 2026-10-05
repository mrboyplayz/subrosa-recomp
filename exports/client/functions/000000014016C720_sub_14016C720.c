/* Address: 0x14016c720 | Name: sub_14016C720 | Size: 576 bytes */
__int64 __fastcall sub_14016C720(__int64 a1, _BYTE *a2, int a3)
{
  _BYTE *v4; // rsi
  int v6; // r15d
  int v7; // r14d
  unsigned __int8 *v8; // rax
  unsigned __int8 v9; // cl
  int v10; // eax
  unsigned __int8 *v11; // rax
  unsigned int v12; // ebp
  char *v13; // rax
  char v14; // cl
  int v15; // eax
  char *v16; // rax
  int v17; // edi
  char v18; // cl
  char *v19; // rax

  v4 = a2;
  v6 = 0;
  v7 = a3;
  if ( a3 <= 0 )
    return 1;
  while ( 1 )
  {
    v8 = *(unsigned __int8 **)(a1 + 192);
    if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                *(_QWORD *)(a1 + 40),
                a1 + 56,
                *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v10 )
        {
          *(_QWORD *)(a1 + 200) = v10 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v11 = *(unsigned __int8 **)(a1 + 192);
        v9 = *v11;
        v8 = v11 + 1;
        *(_QWORD *)(a1 + 192) = v8;
      }
      else
      {
        v9 = 0;
      }
    }
    else
    {
      v9 = *v8++;
      *(_QWORD *)(a1 + 192) = v8;
    }
    if ( v9 == 128 )
      goto LABEL_33;
    if ( v9 >= 0x80u )
      break;
    v12 = v9 + 1;
    if ( v12 > v7 )
      return 0;
    v6 += v12;
    do
    {
      v13 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                  *(_QWORD *)(a1 + 40),
                  a1 + 56,
                  *(unsigned int *)(a1 + 52));
          *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 192) = a1 + 56;
          if ( v15 )
          {
            *(_QWORD *)(a1 + 200) = v15 + a1 + 56;
          }
          else
          {
            *(_DWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 200) = a1 + 57;
            *(_BYTE *)(a1 + 56) = 0;
          }
          v16 = *(char **)(a1 + 192);
          v14 = *v16;
          *(_QWORD *)(a1 + 192) = v16 + 1;
        }
        else
        {
          v14 = 0;
        }
      }
      else
      {
        v14 = *v13;
        *(_QWORD *)(a1 + 192) = v13 + 1;
      }
      *v4 = v14;
      v4 += 4;
      --v12;
    }
    while ( v12 );
LABEL_33:
    v7 = a3 - v6;
    if ( a3 - v6 <= 0 )
      return 1;
  }
  if ( v9 <= 0x80u )
    goto LABEL_33;
  v17 = 257 - v9;
  if ( v17 <= v7 )
  {
    if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        sub_14016D910(a1, a2);
        v19 = *(char **)(a1 + 192);
        v18 = *v19;
        *(_QWORD *)(a1 + 192) = v19 + 1;
      }
      else
      {
        v18 = 0;
      }
    }
    else
    {
      v18 = *v8;
      *(_QWORD *)(a1 + 192) = v8 + 1;
    }
    for ( v6 += v17; v17; --v17 )
    {
      *v4 = v18;
      v4 += 4;
    }
    goto LABEL_33;
  }
  return 0;
}

