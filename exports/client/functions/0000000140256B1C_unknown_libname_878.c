/* Address: 0x140256b1c | Name: unknown_libname_878 | Size: 28 bytes */
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_878(unsigned __int16 a1, __int64 a2)
{
  bool v2; // sf

  v2 = *(_DWORD *)(a2 + 16) - 2 < 0;
  *(_DWORD *)(a2 + 16) -= 2;
  if ( v2 )
    return sub_140251E94(a1, a2);
  **(_WORD **)a2 = a1;
  *(_QWORD *)a2 += 2LL;
  return a1;
}

