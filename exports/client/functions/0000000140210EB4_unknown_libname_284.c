/* Address: 0x140210eb4 | Name: unknown_libname_284 | Size: 21 bytes */
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_284(__int64 a1, _QWORD *a2)
{
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

