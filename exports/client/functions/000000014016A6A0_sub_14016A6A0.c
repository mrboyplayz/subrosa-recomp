/* Address: 0x14016a6a0 | Name: sub_14016A6A0 | Size: 294 bytes */
__int64 __fastcall sub_14016A6A0(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // esi
  char *v5; // rax
  char v6; // cl
  int v7; // eax
  char *v8; // rax
  char v9; // cl

  v2 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      if ( !(*(unsigned int (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 40)) )
        goto LABEL_6;
      if ( !*(_DWORD *)(a1 + 48) )
        return v2;
    }
    if ( *(_QWORD *)(a1 + 192) >= *(_QWORD *)(a1 + 200) )
      return v2;
LABEL_6:
    if ( (unsigned __int8)(*a2 - 48) > 9u )
      return v2;
    v5 = *(char **)(a1 + 192);
    v2 = (char)*a2 + 2 * (5 * v2 - 24);
    if ( (unsigned __int64)v5 >= *(_QWORD *)(a1 + 200) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(
               *(_QWORD *)(a1 + 40),
               a1 + 56,
               *(unsigned int *)(a1 + 52));
        *(_DWORD *)(a1 + 184) += *(_DWORD *)(a1 + 192) - *(_DWORD *)(a1 + 208);
        *(_QWORD *)(a1 + 192) = a1 + 56;
        if ( v7 )
        {
          *(_QWORD *)(a1 + 200) = v7 + a1 + 56;
        }
        else
        {
          *(_DWORD *)(a1 + 48) = 0;
          *(_QWORD *)(a1 + 200) = a1 + 57;
          *(_BYTE *)(a1 + 56) = 0;
        }
        v8 = *(char **)(a1 + 192);
        v9 = *v8;
        *(_QWORD *)(a1 + 192) = v8 + 1;
        *a2 = v9;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      v6 = *v5;
      *(_QWORD *)(a1 + 192) = v5 + 1;
      *a2 = v6;
    }
  }
}

