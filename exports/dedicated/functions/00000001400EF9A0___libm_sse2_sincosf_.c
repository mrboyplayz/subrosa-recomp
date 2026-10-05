/* Address: 0x1400ef9a0 | Name: __libm_sse2_sincosf_ | Size: 85 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall _libm_sse2_sincosf_(float a1, __int64 a2, double a3)
{
  __int64 result; // rax

  *(float *)&a3 = a1;
  if ( *(float *)_mm_and_si128(*(__m128i *)&a3, (__m128i)xmmword_1400F8090).m128i_i32 >= 0.00012207031 )
  {
    if ( dword_140148180 >= 2 )
      return _sse4_sinf4();
    else
      return _sse2_sinf4();
  }
  return result;
}

