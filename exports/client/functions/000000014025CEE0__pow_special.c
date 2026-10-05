/* Address: 0x14025cee0 | Name: _pow_special | Size: 292 bytes */
// local variable allocation has failed, the output may be wrong!
__m128 __fastcall pow_special(double a1, double a2, double a3, unsigned int a4)
{
  __m128 result; // xmm0

  if ( a4 == 2 )
  {
    handle_error((__int64)&unk_14028A604, 29, *(__int64 *)&a3, 2, 4, 0x22u, a1, *(__int64 *)&a2, 2);
  }
  else if ( a4 > 2 )
  {
    if ( a4 <= 5 )
    {
      *(double *)result.m128_u64 = handle_nan(*(_QWORD *)&a3);
      return result;
    }
    if ( a4 == 6 )
    {
      handle_error((__int64)&unk_14028A604, 29, *(__int64 *)&a3, 1, 8, 0x21u, a1, *(__int64 *)&a2, 2);
    }
    else if ( a4 <= 8 )
    {
      handle_error((__int64)&unk_14028A604, 29, *(__int64 *)&a3, 4, 18, 0x22u, a1, *(__int64 *)&a2, 2);
    }
    else if ( a4 == 9 )
    {
      handle_error((__int64)&unk_14028A604, 29, *(__int64 *)&a3, 3, 17, 0x22u, a1, *(__int64 *)&a2, 2);
    }
  }
  return *(__m128 *)&a3;
}

