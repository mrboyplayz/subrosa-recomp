/* Address: 0x14025ab7c | Name: _ultoa | Size: 35 bytes */
char *__cdecl ultoa(unsigned int Value, char *Buffer, int Radix)
{
  sub_14025A430(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, 0);
  return Buffer;
}

