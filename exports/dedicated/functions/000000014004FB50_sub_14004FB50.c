/* Address: 0x14004fb50 | Name: sub_14004FB50 | Size: 202 bytes */
void __fastcall sub_14004FB50(float *a1, float *a2)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  __int64 v8; // r8
  __int64 v9; // r8
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  float X; // [rsp+30h] [rbp-28h]
  float v12; // [rsp+34h] [rbp-24h]
  float Y[2]; // [rsp+38h] [rbp-20h] BYREF
  float v14; // [rsp+40h] [rbp-18h]

  v3 = a2[6];
  v4 = a2[4];
  v5 = a2[7];
  v10 = *(_OWORD *)a2;
  v6 = a2[5];
  Y[0] = v3;
  v7 = a2[8];
  v12 = v6;
  X = v4;
  Y[1] = v5;
  v14 = v7;
  *a1 = atan2f(v6, v4);
  sub_140049C20((__int64)&v10, (float *)&v10, v8);
  a1[2] = atan2f(-*((float *)&v10 + 3), X);
  sub_140049C20((__int64)&v10, Y, v9);
  a1[1] = atan2f(Y[0], v14);
}

