/* Address: 0x14021598c | Name: unknown_libname_460 | Size: 163 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_460(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // esi
  __int64 v6; // rcx
  int *v7; // rax
  char result; // al
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno();
    *(_QWORD *)(a1 + 16) = v2;
  }
  v5 = *v2;
  *v2 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v9 = 0;
  *a2 = sub_14023CDD4(v6 - 2, &v9, 10);
  v7 = *(int **)(a1 + 16);
  if ( !v7 )
  {
    v7 = errno();
    *(_QWORD *)(a1 + 16) = v7;
  }
  if ( *v7 == 34 || v9 < *(_QWORD *)(a1 + 24) )
  {
    result = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v9;
    result = 1;
  }
  if ( !*v2 )
  {
    if ( v5 )
      *v2 = v5;
  }
  return result;
}

