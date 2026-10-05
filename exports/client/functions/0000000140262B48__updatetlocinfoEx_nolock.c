/* Address: 0x140262b48 | Name: _updatetlocinfoEx_nolock | Size: 101 bytes */
__int64 __fastcall updatetlocinfoEx_nolock(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx

  if ( !a2 || !a1 )
    return 0;
  v3 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    MEMORY[0x1402627A8](a2);
    if ( v3 )
    {
      sub_140262A34(v3);
      if ( !*(_DWORD *)(v3 + 16) && (__int16 **)v3 != &off_140302420 )
        sub_140262834(v3);
    }
  }
  return a2;
}

