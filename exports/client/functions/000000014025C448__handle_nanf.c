/* Address: 0x14025c448 | Name: _handle_nanf | Size: 15 bytes */
float __fastcall handle_nanf(int a1)
{
  float result; // xmm0_4

  LODWORD(result) = a1 | 0x400000;
  return result;
}

