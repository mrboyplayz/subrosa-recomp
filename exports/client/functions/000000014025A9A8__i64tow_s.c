/* Address: 0x14025a9a8 | Name: _i64tow_s | Size: 33 bytes */
__int64 __fastcall i64tow_s(signed __int64 a1, __int16 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // al

  v4 = 0;
  if ( a4 == 10 )
    v4 = a1 < 0;
  return sub_14025A8B0(a1, a2, a3, a4, v4);
}

