/* Address: 0x14017ffc0 | Name: sub_14017FFC0 | Size: 145 bytes */
__int64 __fastcall sub_14017FFC0(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float v7; // xmm5_4
  float v8; // xmm6_4
  int v9; // edx
  float v10; // xmm1_4

  v7 = a2 + *(float *)(a1 + 16);
  v8 = a3 + *(float *)(a1 + 20);
  v9 = (int)v8;
  v10 = (float)(v7 + a4) + a6;
  *(float *)(a1 + 16) = v10;
  *(float *)(a1 + 20) = (float)(v8 + a5) + a7;
  LOBYTE(v9) = 4;
  return sub_140180200(
           a1,
           v9,
           (int)v10,
           (int)(float)((float)(v8 + a5) + a7),
           (int)v7,
           (int)v8,
           (int)(float)(v7 + a4),
           (int)(float)(v8 + a5));
}

