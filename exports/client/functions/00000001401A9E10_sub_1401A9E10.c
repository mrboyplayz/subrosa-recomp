/* Address: 0x1401a9e10 | Name: sub_1401A9E10 | Size: 190 bytes */
__int64 __fastcall sub_1401A9E10(float a1, float a2, float *a3)
{
  float v4; // [rsp+0h] [rbp-18h]

  if ( a2 <= a1 )
    v4 = a2;
  else
    v4 = a1;
  *a3 = a1 + (float)(v4 / 3.0);
  a3[1] = a2 + (float)(v4 / 3.0);
  return 4;
}

