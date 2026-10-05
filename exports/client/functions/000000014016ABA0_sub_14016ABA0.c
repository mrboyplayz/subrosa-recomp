/* Address: 0x14016aba0 | Name: sub_14016ABA0 | Size: 548 bytes */
unsigned __int64 __fastcall sub_14016ABA0(__int64 a1, _BYTE *a2)
{
  char *v4; // rax
  char v5; // cl
  int v6; // eax
  char *v7; // rax
  char v8; // cl
  unsigned __int64 result; // rax
  char *v10; // rax
  char v11; // cl
  int v12; // eax
  char *v13; // rax
  char v14; // cl

  while ( 1 )
  {
LABEL_1:
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_5;
      if ( !*(_DWORD *)(a1 + 48) )
        break;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      break;
LABEL_5:
    if ( *a2 != 32 && (unsigned __int8)(*a2 - 9) > 4u )
      break;
    v4 = *(char **)(a1 + 192);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
               *(_QWORD *)(a1 + 40),
               a1 + 56,
               *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v6 )
        {
          *(_QWORD *)(a1 + 200) = v6 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v7 = *(char **)(a1 + 192);
        v8 = *v7;
        *(_QWORD *)(a1 + 192) = v7 + 1;
        *a2 = v8;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      v5 = *v4;
      *(_QWORD *)(a1 + 192) = v4 + 1;
      *a2 = v5;
    }
  }
  if ( !*(_QWORD *)(a1 + 16) )
    goto LABEL_18;
  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40));
  if ( !(_DWORD)result )
  {
LABEL_19:
    if ( *a2 != 35 )
      return result;
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
          goto LABEL_24;
        if ( !*(_DWORD *)(a1 + 48) )
          goto LABEL_1;
      }
      if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
        goto LABEL_1;
LABEL_24:
      if ( *a2 == 10 || *a2 == 13 )
        goto LABEL_1;
      v10 = *(char **)(a1 + 192);
      if ( (unsigned __int64)v10 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
                  *(_QWORD *)(a1 + 40),
                  a1 + 56,
                  *(unsigned int *)(a1 + 52));
          *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
          *(_QWORD *)(a1 + 192) = a1 + 56;
          if ( v12 )
          {
            *(_QWORD *)(a1 + 200) = v12 + a1 + 56;
          }
          else
          {
            *(_DWORD *)(a1 + 48) = 0;
            *(_QWORD *)(a1 + 200) = a1 + 57;
            *(_BYTE *)(a1 + 56) = 0;
          }
          v13 = *(char **)(a1 + 192);
          v14 = *v13;
          *(_QWORD *)(a1 + 192) = v13 + 1;
          *a2 = v14;
        }
        else
        {
          *a2 = 0;
        }
      }
      else
      {
        v11 = *v10;
        *(_QWORD *)(a1 + 192) = v10 + 1;
        *a2 = v11;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
LABEL_18:
    result = *(_QWORD *)(a1 + 200);
    if ( *(_QWORD *)(a1 + 192) < result )
      goto LABEL_19;
  }
  return result;
}

