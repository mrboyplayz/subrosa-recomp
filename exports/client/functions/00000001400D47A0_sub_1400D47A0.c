/* Address: 0x1400d47a0 | Name: sub_1400D47A0 | Size: 417 bytes */
__m128 __fastcall sub_1400D47A0(float a1, float a2, int a3)
{
  __int128 v4; // xmm5
  int v5; // r10d
  int v6; // edx
  int v7; // r8d
  int v8; // ebx
  float v9; // xmm7_4
  int v10; // ecx
  int v11; // edx
  int v12; // edi
  int v13; // ecx
  int v14; // r9d

  v4 = 0x3F800000u;
  v5 = (int)a1;
  v6 = 57 * (int)a2;
  v7 = a3 & ((int)a1 + 1);
  v8 = 15731 * (((v6 + v5) << 13) ^ (v6 + v5)) * (((v6 + v5) << 13) ^ (v6 + v5));
  v9 = a1 - (float)(int)a1;
  v10 = (((v7 + v6) << 13) ^ (v7 + v6)) * (((v7 + v6) << 13) ^ (v7 + v6));
  v11 = 57 * (a3 & ((int)a2 + 1));
  v12 = ((15731 * v10 + 789221) * (15731 * v10 + 789221) - 771171059) & 0x7FFFFFFF;
  v13 = (((v11 + v7) << 13) ^ (v11 + v7)) * (((v11 + v7) << 13) ^ (v11 + v7));
  v14 = 15731 * (((v11 + v5) << 13) ^ (v11 + v5)) * (((v11 + v5) << 13) ^ (v11 + v5)) + 789221;
  *(float *)&v4 = (float)((float)((float)((float)(1.0
                                                - (float)((float)(((v8 + 789221) * (v8 + 789221) - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * (float)(1.0 - v9))
                                + (float)((float)(1.0 - (float)((float)v12 * 9.3132257e-10)) * v9))
                        * (float)(1.0 - (float)(a2 - (float)(int)a2)))
                + (float)((float)((float)((float)(1.0
                                                - (float)((float)((v14 * v14 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                        * (float)(1.0 - v9))
                                + (float)((float)(1.0
                                                - (float)((float)(((15731 * v13 + 789221) * (15731 * v13 + 789221)
                                                                 - 771171059)
                                                                & 0x7FFFFFFF)
                                                        * 9.3132257e-10))
                                        * v9))
                        * (float)(a2 - (float)(int)a2));
  return (__m128)v4;
}

