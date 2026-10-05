/* Address: 0x1400a0010 | Name: sub_1400A0010 | Size: 65 bytes */
__int64 __fastcall sub_1400A0010(float a1)
{
  float v1; // xmm1_4

  v1 = pow(a1, 1.75);
  return (unsigned int)(int)(float)((float)(1.0 - (float)(v1 * 0.00390625)) * 256.0);
}

