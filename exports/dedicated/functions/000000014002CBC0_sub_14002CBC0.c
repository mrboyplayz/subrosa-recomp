/* Address: 0x14002cbc0 | Name: sub_14002CBC0 | Size: 157 bytes */
void __fastcall sub_14002CBC0(float *a1, float a2, float a3)
{
  float v3; // xmm5_4
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm4_4
  float v7; // xmm5_4
  float v8; // xmm0_4

  v3 = *a1;
  v4 = a1[2];
  v5 = fsqrt((float)(v4 * v4) + (float)(v3 * v3));
  if ( v5 > a2 )
  {
    if ( v5 == 0.0 )
    {
      v7 = 0.0;
      v6 = 0.0;
    }
    else
    {
      v6 = (float)(1.0 / v5) * v4;
      v7 = (float)(1.0 / v5) * v3;
    }
    v3 = v7 * a2;
    v4 = v6 * a2;
  }
  *a1 = v3;
  v8 = fmaxf(-a3, a1[1]);
  a1[2] = v4;
  if ( a3 >= v8 )
    a1[1] = v8;
  else
    a1[1] = a3;
}

