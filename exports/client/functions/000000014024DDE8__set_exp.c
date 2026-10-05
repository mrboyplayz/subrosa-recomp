/* Address: 0x14024dde8 | Name: _set_exp | Size: 56 bytes */
double __fastcall set_exp(double a1, __int16 a2)
{
  double v3; // [rsp+18h] [rbp+18h]

  v3 = a1;
  HIWORD(v3) = (16 * (a2 + 1022)) | HIWORD(a1) & 0x800F;
  return v3;
}

