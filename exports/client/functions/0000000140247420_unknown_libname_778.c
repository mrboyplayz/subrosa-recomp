/* Address: 0x140247420 | Name: unknown_libname_778 | Size: 62 bytes */
// Microsoft VisualC 64bit universal runtime
void __fastcall unknown_libname_778(__int64 a1, void **a2)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)*a2, 0xFFFFFFFF) == 1 && *a2 != &unk_1403025A0 )
  {
    free_base(*a2);
    *a2 = &unk_1403025A0;
  }
}

