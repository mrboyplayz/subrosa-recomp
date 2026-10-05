/* Address: 0x140220a54 | Name: sub_140220A54 | Size: 260 bytes */
char __fastcall sub_140220A54(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v4; // rcx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx
  _QWORD *v14; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v14 = nullptr;
  if ( !unknown_libname_276(a1, &v14) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !get_printf_count_output() )
  {
LABEL_6:
    *errno() = 22;
    sub_14024CF6C(v4);
    return 0;
  }
  v5 = *(_DWORD *)(a1 + 60);
  if ( v5 > 5 )
  {
    v9 = v5 - 6;
    if ( !v9 )
      goto LABEL_21;
    v10 = v9 - 1;
    if ( !v10 )
      goto LABEL_21;
    v7 = v10 - 2;
    if ( !v7 )
      goto LABEL_21;
  }
  else
  {
    if ( v5 == 5 )
    {
LABEL_21:
      v1 = 8;
      goto LABEL_22;
    }
    if ( !v5 )
      goto LABEL_15;
    v6 = v5 - 1;
    if ( !v6 )
    {
      v1 = 1;
      goto LABEL_22;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 2;
      goto LABEL_22;
    }
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_15:
    v1 = 4;
    goto LABEL_22;
  }
  if ( v8 == 1 )
    goto LABEL_21;
LABEL_22:
  v11 = v1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 2;
      if ( v13 )
      {
        if ( v13 != 4 )
          goto LABEL_6;
        *v14 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v14 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v14 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v14 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

