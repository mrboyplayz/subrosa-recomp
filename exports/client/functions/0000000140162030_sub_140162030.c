/* Address: 0x140162030 | Name: sub_140162030 | Size: 481 bytes */
__int64 __fastcall sub_140162030(__int64 a1, __int64 a2)
{
  char *v2; // rax
  int v5; // ebp
  char v6; // di
  char *v7; // rax
  __int64 v8; // rsi
  char *v9; // rax
  int v10; // eax
  char *v11; // rax
  char *v12; // rax
  unsigned __int64 v13; // rcx
  char v14; // cl

  v2 = *(char **)(a1 + 192);
  v5 = 0;
  if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1, a2);
      v7 = *(char **)(a1 + 192);
      v6 = *v7;
      *(_QWORD *)(a1 + 192) = v7 + 1;
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    v6 = *v2;
    *(_QWORD *)(a1 + 192) = v2 + 1;
  }
  v8 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_11;
      if ( !*(_DWORD *)(a1 + 48) )
        break;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      break;
LABEL_11:
    if ( v6 == 10 )
      break;
    *(_BYTE *)(v8 + a2) = v6;
    ++v5;
    if ( ++v8 == 1023 )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(a1 + 16) )
          goto LABEL_25;
        if ( (*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          break;
        v12 = *(char **)(a1 + 192);
        v13 = *(_QWORD *)(a1 + 200);
LABEL_26:
        if ( (unsigned __int64)v12 < v13 )
        {
LABEL_29:
          v14 = *v12;
          *(_QWORD *)(a1 + 192) = v12 + 1;
          if ( v14 == 10 )
            goto LABEL_30;
        }
        else if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1, a2);
          v12 = *(char **)(a1 + 192);
          goto LABEL_29;
        }
      }
      if ( !*(_DWORD *)(a1 + 48) )
        break;
LABEL_25:
      v12 = *(char **)(a1 + 192);
      v13 = *(_QWORD *)(a1 + 200);
      if ( (unsigned __int64)v12 >= v13 )
        break;
      goto LABEL_26;
    }
    v9 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 200) )
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
        v11 = *(char **)(a1 + 192);
        v6 = *v11;
        *(_QWORD *)(a1 + 192) = v11 + 1;
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      v6 = *v9;
      *(_QWORD *)(a1 + 192) = v9 + 1;
    }
  }
LABEL_30:
  *(_BYTE *)(v5 + a2) = 0;
  return a2;
}

