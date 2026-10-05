/* Address: 0x14023e7d4 | Name: acos | Stack analysis corrected in export snapshot. */
double __cdecl acos(double X)
{
  __int64 v1; // rdx
  double v2; // xmm6_8
  double v3; // xmm5_8
  double v4; // xmm6_8
  double v5; // xmm1_8
  double v6; // xmm4_8
  double v7; // [rsp+70h] [rbp+8h]
  double v8; // [rsp+78h] [rbp+10h]

  v7 = 0.0;
  v1 = (*(_QWORD *)&X >> 52) & 0x7FFLL;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
    return handle_nan(*(_QWORD *)&X);
  if ( (unsigned int)v1 < 0x3C7 )
  {
    v2 = 1.570796326794897;
LABEL_10:
    set_statfp(32);
    return v2;
  }
  if ( (unsigned int)v1 < 0x3FF )
  {
    v3 = X;
    if ( X < 0.0 )
      v3 = -X;
    if ( (unsigned int)v1 < 0x3FE )
    {
      v5 = 0.0;
      v4 = v3 * v3;
      v8 = v3 * v3;
    }
    else
    {
      v4 = (1.0 - v3) * 0.5;
      v8 = v4;
      v7 = sqrt(v4);
      v5 = v7;
      v3 = v7;
    }
    v6 = (((((v4 * 0.0000482901920344787 + 0.001092426972350747) * v4 - 0.05499898092356859) * v4 + 0.2755581752569377)
         * v4
         - 0.4450172168676356)
        * v4
        + 0.227485835556935)
       * v4
       / ((((v4 * 0.1058694220872044 - 0.9436391370324927) * v4 + 2.76568859157271) * v4 - 3.284315057209587) * v4
        + 1.36491501334161);
    if ( (unsigned int)v1 < 0x3FE )
    {
      return 1.570796326794897 - (X - (6.123233995736766e-17 - v6 * X));
    }
    else if ( X >= 0.0 )
    {
      return (v3 + v3) * v6
           + (v8
            - COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL)
            * COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL))
           / (COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL) + v7)
           + (v8
            - COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL)
            * COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL))
           / (COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL) + v7)
           + COERCE_DOUBLE(*(_QWORD *)&v5 & 0xFFFFFFFF00000000uLL) * 2.0;
    }
    else
    {
      return 3.141592653589793 - (v6 * v3 - 6.123233995736766e-17 + v5 + v6 * v3 - 6.123233995736766e-17 + v5);
    }
  }
  else
  {
    if ( X == 1.0 )
      return 0.0;
    if ( X == -1.0 )
    {
      v2 = 3.141592653589793;
      goto LABEL_10;
    }
    handle_error((__int64)"acos", 13, 0xFFF8000000000000uLL, 1, 8, 0x21u, X, 0, 1);
  }
  return X;
}

