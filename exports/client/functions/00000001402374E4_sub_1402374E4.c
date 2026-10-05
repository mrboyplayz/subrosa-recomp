/* Address: 0x1402374e4 | Name: sub_1402374E4 | Size: 95 bytes */
bool __fastcall sub_1402374E4(int a1)
{
  return !(a1 % 4) && a1 != 100 * (a1 / 100) || a1 + 1900 == 400 * ((a1 + 1900) / 400);
}

