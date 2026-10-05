/* Address: 0x1402409a0 | Name: fmod | Stack analysis corrected in export snapshot. */
// local variable allocation has failed, the output may be wrong!
double __cdecl fmod(double X, double Y)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  double v6; // xmm4_8
  double v7; // xmm5_8
  double v8; // xmm2_8
  double v9; // xmm7_8
  double v10; // xmm6_8
  double v11; // xmm2_8
  double v12; // xmm2_8
  double v13; // st6
  __int16 v14; // fps
  __m128i v15; // xmm1
  __int64 v16; // xmm1_8
  double v17; // [rsp+30h] [rbp-88h]
  __int64 v18; // [rsp+38h] [rbp-80h]

  v2 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v3 = *(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFLL;
  if ( (*(_QWORD *)&Y & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
    return Y;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) > 0x7FF0000000000000LL )
    return X;
  if ( v2 == 0x7FF0000000000000LL )
  {
    v16 = _mm_or_si128(*(__m128i *)&X, (__m128i)xmmword_1402879A0).m128i_u64[0];
LABEL_21:
    handle_error((__int64)"fmod", 22, v16, 1, 8, 0x21u, v17, v18, 2);
    return X;
  }
  if ( !v3 )
  {
    v16 = 0x7FF8000000000000LL;
    goto LABEL_21;
  }
  if ( v2 == v3 )
  {
    *(double *)v15.m128i_i64 = X;
    *(_QWORD *)&X = _mm_or_si128((__m128i)0LL, _mm_and_si128(v15, (__m128i)xmmword_140287960)).m128i_u64[0];
  }
  else
  {
    v4 = __ROR8__(*(_QWORD *)&X & 0x7FF0000000000000LL, 52);
    v5 = __ROR8__(*(_QWORD *)&Y & 0x7FF0000000000000LL, 52);
    if ( !v4 || !v5 || v4 - v5 >= 52 )
      goto LABEL_16;
    v6 = *(double *)_mm_and_si128(*(__m128i *)&X, (__m128i)xmmword_1402879B0).m128i_i64;
    v7 = *(double *)_mm_and_si128(*(__m128i *)&Y, (__m128i)xmmword_1402879B0).m128i_i64;
    if ( v6 <= v7 )
      return X;
    v8 = (double)(int)(v6 / v7);
    if ( v5 - 1023 + __ROR8__(*(_QWORD *)&v8 & 0x7FF0000000000000LL, 52) - 1023LL < 1023 )
    {
      v9 = v8 * v7;
      v10 = (v8 - COERCE_DOUBLE(*(_QWORD *)&v8 & 0xFFFFFFFFF8000000uLL))
          * (v7 - COERCE_DOUBLE(*(_QWORD *)&v7 & 0xFFFFFFFFF8000000uLL))
          + COERCE_DOUBLE(*(_QWORD *)&v7 & 0xFFFFFFFFF8000000uLL)
          * COERCE_DOUBLE(*(_QWORD *)&v8 & 0xFFFFFFFFF8000000uLL)
          - v8 * v7
          + COERCE_DOUBLE(*(_QWORD *)&v7 & 0xFFFFFFFFF8000000uLL)
          * (v8 - COERCE_DOUBLE(*(_QWORD *)&v8 & 0xFFFFFFFFF8000000uLL))
          + COERCE_DOUBLE(*(_QWORD *)&v8 & 0xFFFFFFFFF8000000uLL)
          * (v7 - COERCE_DOUBLE(*(_QWORD *)&v7 & 0xFFFFFFFFF8000000uLL));
      v11 = *(double *)_mm_and_si128(*(__m128i *)&X, (__m128i)xmmword_1402879B0).m128i_i64;
      v12 = v11 - (v11 - v9) - v9 - v10 + v11 - v9;
      if ( v12 < 0.0 )
        v12 = v12 + v7;
      if ( X > 0.0 )
        return v12;
      else
        *(_QWORD *)&X = *(_QWORD *)&v12 | 0x8000000000000000uLL;
    }
    else
    {
LABEL_16:
      __asm
      {
        ffree   st
        ffree   st(1)
      }
      v13 = X;
      __asm { fnclex }
      do
        v13 = __FPREM__(v13, Y);
      while ( (v14 & 0x400) == 0x400 );
      return v13;
    }
  }
  return X;
}

