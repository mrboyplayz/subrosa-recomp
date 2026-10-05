/* Address: 0x1401b0ed0 | Name: sub_1401B0ED0 | Size: 643 bytes */
float __fastcall sub_1401B0ED0(float *a1)
{
  float v2; // [rsp+0h] [rbp-38h]
  float v3; // [rsp+4h] [rbp-34h]
  float v4; // [rsp+8h] [rbp-30h]
  float v5; // [rsp+Ch] [rbp-2Ch]
  float v6; // [rsp+10h] [rbp-28h]
  float v11; // [rsp+28h] [rbp-10h]

  v5 = a1[2];
  if ( *a1 <= a1[1] )
  {
    v6 = *a1;
    v3 = a1[1];
  }
  else
  {
    v6 = a1[1];
    v3 = *a1;
  }
  if ( a1[3] <= a1[4] )
  {
    v2 = a1[3];
    v4 = a1[4];
  }
  else
  {
    v2 = a1[4];
    v4 = a1[3];
  }
  if ( v6 > v2 )
  {
    v2 = v6;
    v11 = v3;
    v3 = v4;
    v4 = v11;
  }
  if ( v5 <= v3 )
  {
    if ( v2 <= v5 )
    {
      if ( v4 <= v5 )
        return v4;
      else
        return a1[2];
    }
    else if ( v2 <= v3 )
    {
      return v2;
    }
    else
    {
      return v3;
    }
  }
  else if ( v2 <= v3 )
  {
    if ( v3 <= v4 )
      return v3;
    else
      return v4;
  }
  else if ( v2 <= v5 )
  {
    return v2;
  }
  else
  {
    return a1[2];
  }
}

