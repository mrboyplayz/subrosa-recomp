/* Address: 0x14025b610 | Name: unknown_libname_891 | Size: 163 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_891(__int64 a1, __int64 a2, unsigned int a3)
{
  BOOL v6; // eax
  bool v7; // si
  __int64 v9; // rcx

  v6 = IsDebuggerPresent();
  v7 = v6;
  if ( v6 )
  {
    if ( a1 )
      _acrt_OutputDebugStringA(a1);
    if ( (unsigned int)sub_14025A3C4() != 1 )
      return 4;
  }
  if ( (unsigned int)sub_14025A334() != 2 || !sub_14024F84C() )
    return (unsigned int)v7 + 3;
  if ( (unsigned __int8)sub_14024FB24() )
  {
    v9 = sub_14024FA78();
  }
  else
  {
    a3 |= 0x200000u;
    v9 = 0;
  }
  return sub_14024F65C(v9, a1, a2, a3);
}

