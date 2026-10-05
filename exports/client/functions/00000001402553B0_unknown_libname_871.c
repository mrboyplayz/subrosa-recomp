/* Address: 0x1402553b0 | Name: unknown_libname_871 | Size: 56 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void __fastcall unknown_libname_871(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(**(_QWORD **)a1 + 136LL);
  if ( v1 && _InterlockedExchangeAdd((volatile signed __int32 *)v1, 0xFFFFFFFF) == 1 && v1 != &unk_1403025A0 )
    free_base(v1);
}

