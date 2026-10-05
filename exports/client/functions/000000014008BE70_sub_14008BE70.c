/* Address: 0x14008be70 | Name: sub_14008BE70 | Size: 437 bytes */
// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_14008BE70(__int64 a1, double a2, double a3, double a4)
{
  __m128i v5; // xmm9
  __int128 v6; // xmm7
  __int64 v7; // rdi
  char *v8; // r8
  __int64 v9; // rbx
  unsigned __int8 *v10; // rax
  char *v11; // rdx
  __int64 v12; // rcx

  v5 = *(__m128i *)&a3;
  v6 = 0;
  v7 = 0;
  do
  {
    if ( !*(_BYTE *)(v7 + a1) )
      break;
    v8 = (char *)&dword_140404A6C[18601421] - v7 - a1;
    v9 = 0;
    v10 = (unsigned __int8 *)(v7 + a1 + 2);
    v11 = (char *)&dword_140404A6C[18601421] + -v7 - a1 + 1;
    do
    {
      v12 = *(v10 - 2);
      if ( !(_BYTE)v12 || (_BYTE)v12 == 10 )
        break;
      v10[(_QWORD)v8 - 2] = v12;
      v12 = *(v10 - 1);
      if ( !(_BYTE)v12 || (_BYTE)v12 == 10 )
      {
        ++v9;
        break;
      }
      v10[(_QWORD)v11 - 2] = v12;
      v12 = *v10;
      if ( !(_BYTE)v12 || (_BYTE)v12 == 10 )
      {
        v9 += 2;
        break;
      }
      v10[(_QWORD)v8] = v12;
      v12 = v10[1];
      if ( !(_BYTE)v12 || (_BYTE)v12 == 10 )
      {
        v9 += 3;
        break;
      }
      v10[(_QWORD)v11] = v12;
      v9 += 4;
      v10 += 4;
    }
    while ( v9 < 1024 );
    if ( (unsigned __int64)v9 >= 0x400 )
      sub_1401F8694(v12, v11, v8);
    *((_BYTE *)&dword_140404A6C[18601421] + v9) = 0;
    if ( *(_BYTE *)(v9 + v7 + a1) == 10 )
      ++v9;
    sub_14006D930(
      &dword_140404A6C[18601421],
      (unsigned int)_mm_cvtsi128_si32(*(__m128i *)&a2),
      (unsigned int)_mm_cvtsi128_si32(v5),
      (unsigned int)_mm_cvtsi128_si32(*(__m128i *)&a4),
      64);
    v7 += v9;
    *(float *)v5.m128i_i32 = *(float *)v5.m128i_i32 + *(float *)&a4;
    *(float *)&v6 = *(float *)&v6 + *(float *)&a4;
  }
  while ( v7 < 1024 );
  return (__m128)v6;
}

