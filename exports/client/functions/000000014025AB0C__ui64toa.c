/* Address: 0x14025ab0c | Name: _ui64toa | Size: 35 bytes */
char *__cdecl ui64toa(unsigned __int64 Value, char *Buffer, int Radix)
{
  sub_14025A5CC(Value, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Radix, 0);
  return Buffer;
}

