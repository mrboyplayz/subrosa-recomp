/* Address: 0x1401b1160 | Name: sub_1401B1160 | Size: 229 bytes */
float __fastcall sub_1401B1160(float *a1)
{
  float v2; // [rsp+0h] [rbp-18h]
  float v3; // [rsp+4h] [rbp-14h]
  float v4; // [rsp+8h] [rbp-10h]

  if ( *a1 <= a1[1] )
  {
    v4 = *a1;
    v2 = a1[1];
  }
  else
  {
    v4 = a1[1];
    v2 = *a1;
  }
  v3 = a1[2];
  if ( v3 > v2 )
    return v2;
  if ( v3 <= v4 )
    return v4;
  return a1[2];
}

