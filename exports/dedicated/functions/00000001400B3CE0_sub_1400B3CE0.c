/* Address: 0x1400b3ce0 | Name: sub_1400B3CE0 | Size: 57 bytes */
float __fastcall sub_1400B3CE0(__int64 a1, float *a2)
{
  double v3; // xmm0_8

  sub_140049260(a1, a2);
  v3 = acos(fminf(fmaxf(a2[3], -1.0), 1.0));
  return v3 + v3;
}

