/* Address: 0x14025cae4 | Name: _sincos_special | Size: 162 bytes */
double __fastcall sincos_special(double a1, __int64 a2, int a3)
{
  double v4; // [rsp+60h] [rbp+8h]

  v4 = a1;
  if ( (*(_QWORD *)&a1 & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&a1 & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      *(_QWORD *)&v4 = *(_QWORD *)&a1 | 0x8000000000000LL;
    }
    else
    {
      v4 = NAN;
      handle_error(a2, a3, 0xFFF8000000000000uLL, 1, 8, 0x21u, a1, 0, 1);
    }
  }
  return v4;
}

