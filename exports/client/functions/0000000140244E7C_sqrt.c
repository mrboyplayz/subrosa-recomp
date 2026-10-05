/* Address: 0x140244e7c | Name: sqrt | Stack analysis corrected in export snapshot. */
double __cdecl sqrt(double X)
{
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
      return handle_nan(*(_QWORD *)&X);
    if ( X < 0.0 )
      goto LABEL_5;
  }
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0 || X >= 0.0 )
    return sqrt(X);
LABEL_5:
  handle_error((__int64)"sqrt", 5, 0xFFF8000000000000uLL, 1, 8, 0x21u, X, 0, 1);
  return 0.0;
}

