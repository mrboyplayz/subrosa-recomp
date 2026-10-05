/* Address: 0x1401f8a50 | Name: sub_1401F8A50 | Size: 91 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MEMORY[0x1401F8A50](double a1, __int64 a2, double a3)
{
  __int64 result; // rax

  a3 = a1;
  if ( *(double *)_mm_and_si128(*(__m128i *)&a3, (__m128i)xmmword_1402833D0).m128i_i64 >= 0.000000007450580596923828 )
  {
    if ( dword_140302080 >= 2 )
      return sub_1401F9B00();
    else
      return sub_1401F9480();
  }
  return result;
}

