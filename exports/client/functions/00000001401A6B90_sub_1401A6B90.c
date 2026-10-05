/* Address: 0x1401a6b90 | Name: sub_1401A6B90 | Size: 489 bytes */
float __fastcall sub_1401A6B90(float a1, float a2)
{
  float v3; // [rsp+0h] [rbp-28h]
  float v4; // [rsp+4h] [rbp-24h]
  float v5; // [rsp+8h] [rbp-20h]
  float v6; // [rsp+Ch] [rbp-1Ch]
  float v7; // [rsp+10h] [rbp-18h]

  v4 = a2 * a2;
  v3 = a1 * a1;
  if ( (float)((float)(a2 * a2) + (float)(a1 * a1)) < 1.0e-18 )
    return 0.0;
  if ( v3 <= v4 )
  {
    if ( a1 >= 0.0 )
      v6 = 1.5707964;
    else
      v6 = -1.5707964;
    if ( (float)(a2 * a1) >= 0.0 )
      v7 = 1.5707964;
    else
      v7 = -1.5707964;
    return (float)((float)((float)((float)(a2 * a1) * (float)(v4 + (float)(0.43157974 * v3)))
                         / (float)((float)(v4 + (float)(0.67848402 * v3)) * (float)(v4 + (float)(0.085955419 * v3))))
                 + v6)
         - v7;
  }
  else
  {
    if ( a1 >= 0.0 )
      v5 = 1.5707964;
    else
      v5 = -1.5707964;
    return (float)((float)((float)((float)-a2 * a1) * (float)(v3 + (float)(0.43157974 * v4)))
                 / (float)((float)(v3 + (float)(0.67848402 * v4)) * (float)(v3 + (float)(0.085955419 * v4))))
         + v5;
  }
}

