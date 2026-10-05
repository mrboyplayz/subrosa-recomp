/* Address: 0x1400af1e0 | Name: sub_1400AF1E0 | Size: 105 bytes */
double __fastcall sub_1400AF1E0(float *a1, float a2, unsigned int a3)
{
  signed int v3; // edx
  float v4; // xmm3_4
  unsigned int v5; // eax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = (unsigned int)(1 << a3) >> 1;
  v4 = *a1;
  v5 = (int)(float)(fabs(*a1) * (float)((float)v3 / a2));
  v7 = v5;
  if ( v5 > v3 - 1 )
  {
    v7 = v3 - 1;
    v5 = v3 - 1;
  }
  if ( v4 < 0.0 )
    v7 = v3 | v5;
  return sub_1400AFDB0(&v7, a3);
}

