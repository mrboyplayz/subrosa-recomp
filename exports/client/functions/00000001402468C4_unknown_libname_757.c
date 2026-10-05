/* Address: 0x1402468c4 | Name: unknown_libname_757 | Size: 67 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_757(__int64 a1, __int64 (__fastcall *a2)(__int64))
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = a1 + 8;
  v4 = a1;
  do
  {
    result = a2(v4);
    v4 += 8;
  }
  while ( v4 != v2 );
  return result;
}

