/* Address: 0x1400ef930 | Name: __libm_sse2_sincos_ | Size: 91 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall _libm_sse2_sincos_(double a1, __int64 a2, double a3)
{
  __int64 result; // rax

  a3 = a1;
  if ( *(double *)_mm_and_si128(*(__m128i *)&a3, (__m128i)xmmword_1400F8040).m128i_i64 >= 0.000000007450580596923828 )
  {
    if ( dword_140148180 >= 2 )
      return _sse4_sin2();
    else
      return _sse2_sin2();
  }
  return result;
}

