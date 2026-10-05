/* Address: 0x14011c300 | Name: sub_14011C300 | Size: 57 bytes */
float __fastcall sub_14011C300(__int64 a1, float *a2)
{
  double v3; // xmm0_8

  sub_14007A240(a1, a2);
  v3 = acos(fminf(fmaxf(a2[3], -1.0), 1.0));
  return v3 + v3;
}

