/* Address: 0x14026ba68 | Name: ceil | Size: 194 bytes */
double __cdecl ceil(double X)
{
  double v1; // rdx
  unsigned __int64 v2; // rax
  _BOOL8 v3; // r8
  double v4; // rax

  v1 = X;
  v2 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v3 = *(_QWORD *)&X != (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL);
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) < 0x4340000000000000LL )
  {
    if ( v2 >= 0x3FF0000000000000LL )
    {
      *(_QWORD *)&v4 = *(_QWORD *)&X & ~((1LL << (51 - (unsigned __int8)(*(_QWORD *)&X >> 52))) - 1);
      X = v4;
      if ( !v3 && *(_QWORD *)&v4 != *(_QWORD *)&v1 )
        return v4 + 1.0;
    }
    else if ( v2 )
    {
      if ( *(_QWORD *)&X == (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) )
        return 1.0;
      else
        return -0.0;
    }
  }
  else if ( v2 > 0x7FF0000000000000LL )
  {
    return handle_nan(*(__int64 *)&X);
  }
  return X;
}

