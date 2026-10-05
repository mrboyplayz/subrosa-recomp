/* Address: 0x14004dde0 | Name: sub_14004DDE0 | Size: 227 bytes */
float __fastcall sub_14004DDE0(int a1, float a2, float a3, float a4, float a5, float a6)
{
  float v7; // xmm3_4
  float v9; // xmm7_4
  float v10; // xmm6_4
  float v11; // [rsp+30h] [rbp+8h]

  v7 = 1.0 - a2;
  if ( a1 == 1 )
    return (float)(v7 * a3) + (float)(a2 * a6);
  v9 = a2 * a6;
  v10 = v7 * a3;
  if ( a1 == 2 )
    return (float)((float)((float)((float)(a4 + a4) * v7) + v9) * a2) + (float)(v10 * v7);
  if ( a1 == 3 )
    return (float)((float)((float)((float)(v7 * v7) * (float)(a4 * 3.0))
                         + (float)((float)((float)((float)(a5 * 3.0) * v7) + v9) * a2))
                 * a2)
         + (float)((float)(v10 * v7) * v7);
  return v11;
}

