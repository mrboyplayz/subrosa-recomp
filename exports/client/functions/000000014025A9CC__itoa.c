/* Address: 0x14025a9cc | Name: _itoa | Size: 48 bytes */
char *__cdecl itoa(int Value, char *Buffer, int Radix)
{
  char v3; // al

  v3 = 0;
  if ( Radix == 10 )
    v3 = Value < 0;
  sub_14025A430(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, v3);
  return Buffer;
}

