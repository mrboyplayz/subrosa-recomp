/* Address: 0x14011c640 | Name: sub_14011C640 | Size: 112 bytes */
float __fastcall sub_14011C640(float *a1, float *a2, float a3)
{
  float v3; // xmm5_4

  v3 = (float)((float)(a1[1] * a2[1]) + (float)(*a1 * *a2)) + (float)(a1[2] * a2[2]);
  return fsqrt(
           (float)(a3 * a3)
         - (float)((float)((float)((float)(*a1 * *a1) + (float)(a1[1] * a1[1])) + (float)(a1[2] * a1[2]))
                 - (float)(v3 * v3)))
       - v3;
}

