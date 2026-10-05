/* Address: 0x14025a974 | Name: _i64tow | Size: 49 bytes */
#49 *__cdecl i64tow(__int64 Value, #49 *Buffer, int Radix)
{
  char v3; // al

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_14025A698(Value, (__int16 *)Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, v3);
  return Buffer;
}

