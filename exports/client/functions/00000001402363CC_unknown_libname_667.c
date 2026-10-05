/* Address: 0x1402363cc | Name: unknown_libname_667 | Size: 46 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_667(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 && v1 <= *(_QWORD *)(a1 + 8) )
    return 1;
  *errno() = 22;
  sub_14024CF6C(v2);
  return 0;
}

