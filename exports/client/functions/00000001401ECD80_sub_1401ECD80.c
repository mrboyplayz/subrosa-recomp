/* Address: 0x1401ecd80 | Name: sub_1401ECD80 | Size: 630 bytes */
float __fastcall sub_1401ECD80(float *a1, __int64 a2, __int64 a3, int a4)
{
  float v5; // [rsp+0h] [rbp-28h]
  float v6; // [rsp+4h] [rbp-24h]
  float v7; // [rsp+4h] [rbp-24h]
  float v8; // [rsp+8h] [rbp-20h]
  float v9; // [rsp+8h] [rbp-20h]
  float v10; // [rsp+Ch] [rbp-1Ch]
  float v11; // [rsp+Ch] [rbp-1Ch]
  int i; // [rsp+10h] [rbp-18h]
  float v13; // [rsp+14h] [rbp-14h]
  float v14; // [rsp+14h] [rbp-14h]
  float v15; // [rsp+18h] [rbp-10h]

  v15 = 0.0;
  for ( i = 0; i < a4 / 2; ++i )
  {
    v6 = *(float *)(a3 + 8LL * i);
    v13 = v6 - *a1;
    v10 = *a1 + (float)(0.60743707 * v13);
    *a1 = v6 + (float)(0.60743707 * v13);
    v8 = v10;
    v7 = *(float *)(a3 + 4LL * (2 * i + 1));
    v14 = v7 - a1[1];
    v11 = (float)(v10 + a1[1]) + (float)(0.15063 * v14);
    a1[1] = v7 + (float)(0.15063 * v14);
    v5 = 0.15063 * (float)((float)-v7 - a1[2]);
    v9 = (float)(v8 + a1[2]) + v5;
    a1[2] = v5 - v7;
    v15 = v15 + (float)(v9 * v9);
    *(float *)(a2 + 4LL * i) = 0.5 * v11;
  }
  return v15;
}

