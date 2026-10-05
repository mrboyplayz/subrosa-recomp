/* Address: 0x14020bc54 | Name: unknown_libname_207 | Size: 22 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_207(unsigned __int8 a1, __int64 a2)
{
  if ( --*(_DWORD *)(a2 + 16) < 0 )
    return sub_140251DA8(a1, a2);
  *(_BYTE *)(*(_QWORD *)a2)++ = a1;
  return a1;
}

