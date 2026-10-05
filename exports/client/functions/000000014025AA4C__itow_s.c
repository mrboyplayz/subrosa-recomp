/* Address: 0x14025aa4c | Name: _itow_s | Size: 32 bytes */
__int64 __fastcall itow_s(signed int a1, __int16 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // al

  v4 = 0;
  if ( a4 == 10 )
    v4 = a1 < 0;
  return sub_14025A7DC(a1, a2, a3, a4, v4);
}

