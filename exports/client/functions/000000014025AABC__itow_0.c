/* Address: 0x14025aabc | Name: _itow_0 | Size: 48 bytes */
#49 *__cdecl itow_0(int Value, #49 *Buffer, int Radix)
{
  char v3; // al

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_14025A4F8(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, v3);
  return Buffer;
}

