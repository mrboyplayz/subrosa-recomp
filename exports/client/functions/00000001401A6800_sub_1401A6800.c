/* Address: 0x1401a6800 | Name: sub_1401A6800 | Size: 204 bytes */
__int64 __fastcall sub_1401A6800(float *a1, unsigned int a2, float a3)
{
  float v3; // xmm0_4
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-28h]
  float v6; // [rsp+28h] [rbp-20h]
  float *v7; // [rsp+30h] [rbp-18h]

  v6 = sub_1401A9C00(a1, a1, a2) + 1.0e-15;
  v3 = sqrt(v6);
  v7 = a1;
  for ( i = 0; ; ++i )
  {
    result = a2;
    if ( i >= (int)a2 )
      break;
    *v7 = (float)((float)(1.0 / v3) * a3) * *v7;
    ++v7;
  }
  return result;
}

