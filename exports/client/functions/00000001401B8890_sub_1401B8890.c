/* Address: 0x1401b8890 | Name: sub_1401B8890 | Size: 80 bytes */
__m128 __fastcall sub_1401B8890(float a1, float a2, float a3)
{
  float v3; // xmm0_4
  __int128 v4; // xmm1

  v3 = sqrt((float)((float)(a2 * a3) + 1.0));
  v4 = LODWORD(a1);
  *(float *)&v4 = a1 / v3;
  return (__m128)v4;
}

