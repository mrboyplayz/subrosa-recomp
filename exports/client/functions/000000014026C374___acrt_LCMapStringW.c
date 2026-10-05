/* Address: 0x14026c374 | Name: __acrt_LCMapStringW | Size: 135 bytes */
__int64 __fastcall _acrt_LCMapStringW(__int64 a1, unsigned int a2, __int64 a3, int a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  unsigned int v10; // eax
  bool v11; // sf
  bool v12; // of

  v6 = a4;
  if ( a4 > 0 )
  {
    v10 = MEMORY[0x140254F48](a3, a4);
    v12 = __OFSUB__(v10, v6);
    v11 = (int)(v10 - v6) < 0;
    v6 = v10 + 1;
    if ( v11 == v12 )
      v6 = v10;
  }
  return sub_14024F4D0(a1, a2, a3, v6, a5, a6, 0, 0, 0);
}

