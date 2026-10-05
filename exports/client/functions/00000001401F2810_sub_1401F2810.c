/* Address: 0x1401f2810 | Name: sub_1401F2810 | Size: 64 bytes */
__m128 __fastcall sub_1401F2810(float a1)
{
  __int128 v1; // xmm1

  v1 = 0x3F000000u;
  *(float *)&v1 = (float)(0.5 * sub_1401F2690(0.5 * a1)) + 0.5;
  return (__m128)v1;
}

