/* Address: 0x14025c42c | Name: _handle_nan | Size: 25 bytes */
double __fastcall handle_nan(__int64 a1)
{
  double result; // xmm0_8

  *(_QWORD *)&result = a1 | 0x8000000000000LL;
  return result;
}

