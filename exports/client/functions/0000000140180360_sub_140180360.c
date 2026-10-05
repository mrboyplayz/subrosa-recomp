/* Address: 0x140180360 | Name: sub_140180360 | Size: 70 bytes */
float __fastcall sub_140180360(float a1)
{
  float v1; // xmm0_4

  if ( a1 >= 0.0 )
    return pow(a1, 0.3333333432674408);
  v1 = pow((float)-a1, 0.3333333432674408);
  return -v1;
}

