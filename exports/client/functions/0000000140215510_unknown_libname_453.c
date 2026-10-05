/* Address: 0x140215510 | Name: unknown_libname_453 | Size: 161 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_453(__int64 a1, _DWORD *a2)
{
  int *v2; // rbx
  int v5; // ebp
  char v6; // si
  __int64 v7; // rcx
  int *v8; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(int **)(a1 + 16);
  if ( !v2 )
  {
    v2 = errno();
    *(_QWORD *)(a1 + 16) = v2;
  }
  v5 = *v2;
  *v2 = 0;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 24);
  v10 = 0;
  *a2 = sub_14023CCCC(v7 - 1, &v10, 10);
  v8 = *(int **)(a1 + 16);
  if ( !v8 )
  {
    v8 = errno();
    *(_QWORD *)(a1 + 16) = v8;
  }
  if ( *v8 == 34 || v10 < *(_QWORD *)(a1 + 24) )
    v6 = 0;
  else
    *(_QWORD *)(a1 + 24) = v10;
  if ( !*v2 && v5 )
    *v2 = v5;
  return v6;
}

