/* Address: 0x1401f8ac0 | Name: sub_1401F8AC0 | Size: 85 bytes */
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MEMORY[0x1401F8AC0](float a1, __int64 a2, double a3)
{
  __int64 result; // rax

  *(float *)&a3 = a1;
  if ( *(float *)_mm_and_si128(*(__m128i *)&a3, (__m128i)xmmword_140283420).m128i_i32 >= 0.00012207031 )
  {
    if ( dword_140302080 >= 2 )
      return sub_1401FAAC0();
    else
      return sub_1401FA180();
  }
  return result;
}

