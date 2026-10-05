/* Address: 0x1402211ac | Name: unknown_libname_533 | Size: 219 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_533(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rbx

  v1 = 8;
  *(_QWORD *)(a1 + 32) += 8LL;
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !get_printf_count_output() )
    goto LABEL_2;
  v6 = *(_DWORD *)(a1 + 60);
  if ( v6 <= 5 )
  {
    if ( v6 == 5 )
      goto LABEL_18;
    if ( !v6 )
      goto LABEL_17;
    v7 = v6 - 1;
    if ( !v7 )
    {
      v1 = 1;
      goto LABEL_18;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v1 = 2;
      goto LABEL_18;
    }
LABEL_8:
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        v1 = 0;
      goto LABEL_18;
    }
LABEL_17:
    v1 = 4;
    goto LABEL_18;
  }
  v10 = v6 - 6;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v8 = v11 - 2;
      if ( v8 )
        goto LABEL_8;
    }
  }
LABEL_18:
  v12 = v1 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 2;
      if ( v14 )
      {
        if ( v14 != 4 )
        {
LABEL_2:
          *errno() = 22;
          sub_14024CF6C(v4);
          return 0;
        }
        *v3 = *(int *)(a1 + 40);
      }
      else
      {
        *(_DWORD *)v3 = *(_DWORD *)(a1 + 40);
      }
    }
    else
    {
      *(_WORD *)v3 = *(_WORD *)(a1 + 40);
    }
  }
  else
  {
    *(_BYTE *)v3 = *(_BYTE *)(a1 + 40);
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 1;
}

