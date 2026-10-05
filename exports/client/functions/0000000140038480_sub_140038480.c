/* Address: 0x140038480 | Name: sub_140038480 | Size: 103 bytes */
float __fastcall sub_140038480(float a1, float a2, float a3)
{
  float v4; // xmm3_4

  v4 = (1.0 - cos(a3 * 3.14159265359)) * 0.5;
  return (float)((float)(1.0 - v4) * a1) + (float)(a2 * v4);
}

