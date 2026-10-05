/* Address: 0x1401f67c0 | Name: sub_1401F67C0 | Size: 264 bytes */
float __fastcall sub_1401F67C0(float a1, float a2)
{
  float v3; // [rsp+20h] [rbp-18h]
  int v4; // [rsp+24h] [rbp-14h]
  float v5; // [rsp+28h] [rbp-10h]

  if ( a1 <= a2 )
  {
    v5 = a2;
    v3 = a2 - a1;
  }
  else
  {
    v5 = a1;
    v3 = a1 - a2;
  }
  if ( v3 >= 8.0 )
    return v5;
  v4 = (int)floor((float)(2.0 * v3));
  return (float)(v5 + flt_140281F40[v4])
       + (float)((float)((float)(2.0 * v3) - (float)v4) * (float)(flt_140281F40[v4 + 1] - flt_140281F40[v4]));
}

