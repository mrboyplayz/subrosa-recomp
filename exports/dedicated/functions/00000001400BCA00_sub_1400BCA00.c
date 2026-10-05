/* Address: 0x1400bca00 | Name: sub_1400BCA00 | Size: 465 bytes */
__m128 __fastcall sub_1400BCA00(float a1, float a2, int a3)
{
  int v4; // r11d
  __int128 v5; // xmm5
  int v6; // r8d
  int v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  float v11; // xmm7_4
  int v12; // r9d
  int v13; // edi
  int v14; // ecx
  float v15; // xmm8_4

  v4 = (int)a2;
  v5 = 0x3F800000u;
  v6 = a3 & ((int)a1 + 1);
  v7 = ((57 * v4 + (int)a1) << 13) ^ (57 * v4 + (int)a1);
  v8 = 15731 * v7 * v7;
  v9 = ((v6 + 57 * v4) << 13) ^ (v6 + 57 * v4);
  v10 = 57 * (a3 & ((int)a2 + 1));
  v11 = (float)(3.0 - (float)((float)(a1 - (float)(int)a1) + (float)(a1 - (float)(int)a1)))
      * (float)((float)(a1 - (float)(int)a1) * (float)(a1 - (float)(int)a1));
  v12 = 15731 * (((v10 + (int)a1) << 13) ^ (v10 + (int)a1)) * (((v10 + (int)a1) << 13) ^ (v10 + (int)a1)) + 789221;
  v13 = (15731 * v9 * v9 + 789221) * (15731 * v9 * v9 + 789221) - 771171059;
  v14 = (((v10 + v6) << 13) ^ (v10 + v6)) * (((v10 + v6) << 13) ^ (v10 + v6));
  v15 = (float)(3.0 - (float)((float)(a2 - (float)(int)a2) + (float)(a2 - (float)(int)a2)))
      * (float)((float)(a2 - (float)(int)a2) * (float)(a2 - (float)(int)a2));
  *(float *)&v5 = (float)((float)((float)((float)(1.0
                                                - (float)((float)(((v8 + 789221) * (v8 + 789221) - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * (float)(1.0 - v11))
                                + (float)((float)(1.0 - (float)((float)(v13 & 0x7FFFFFFF) * 9.3132257e-10)) * v11))
                        * (float)(1.0 - v15))
                + (float)((float)((float)((float)(1.0
                                                - (float)((float)((v12 * v12 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                        * (float)(1.0 - v11))
                                + (float)((float)(1.0
                                                - (float)((float)(((15731 * v14 + 789221) * (15731 * v14 + 789221)
                                                                 - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * v11))
                        * v15);
  return (__m128)v5;
}

