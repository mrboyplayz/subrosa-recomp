/* Address: 0x14025a91c | Name: _i64toa | Size: 49 bytes */
char *__cdecl i64toa(__int64 Value, char *Buffer, int Radix)
{
  char v3; // al

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_14025A5CC(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, v3);
  return Buffer;
}

