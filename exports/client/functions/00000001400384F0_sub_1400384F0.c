/* Address: 0x1400384f0 | Name: sub_1400384F0 | Size: 556 bytes */
__m128 __fastcall sub_1400384F0(float a1, float a2, int a3)
{
  int v4; // r10d
  int v5; // ebx
  int v6; // r8d
  int v7; // ecx
  int v8; // r14d
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  int v12; // esi
  int v13; // ebp
  float v14; // xmm10_4
  double v15; // xmm0_8
  __int128 v16; // xmm5
  float v17; // xmm7_4

  v4 = (int)a1;
  v5 = (int)a2;
  v6 = a3 & ((int)a1 + 1);
  v7 = ((57 * v5 + v4) << 13) ^ (57 * v5 + v4);
  v8 = 15731 * v7 * v7;
  v9 = ((v6 + 57 * v5) << 13) ^ (v6 + 57 * v5);
  v10 = 57 * (a3 & ((int)a2 + 1));
  v11 = 15731 * v9 * v9 + 789221;
  v12 = 15731 * (((v10 + v4) << 13) ^ (v10 + v4)) * (((v10 + v4) << 13) ^ (v10 + v4)) + 789221;
  v13 = 15731 * (((v10 + v6) << 13) ^ (v10 + v6)) * (((v10 + v6) << 13) ^ (v10 + v6)) + 789221;
  v14 = (1.0 - cos((float)(a1 - (float)(int)a1) * 3.14159265359)) * 0.5;
  v15 = cos((float)(a2 - (float)(int)a2) * 3.14159265359);
  v16 = 0x3F800000u;
  v17 = (1.0 - v15) * 0.5;
  *(float *)&v16 = (float)((float)((float)((float)(1.0
                                                 - (float)((float)((v11 * v11 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                         * v14)
                                 + (float)((float)(1.0
                                                 - (float)((float)(((v8 + 789221) * (v8 + 789221) - 771171059)
                                                                 & 0x7FFFFFFF)
                                                         * 9.3132257e-10))
                                         * (float)(1.0 - v14)))
                         * (float)(1.0 - v17))
                 + (float)((float)((float)((float)(1.0
                                                 - (float)((float)((v12 * v12 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                         * (float)(1.0 - v14))
                                 + (float)((float)(1.0
                                                 - (float)((float)((v13 * v13 - 771171059) & 0x7FFFFFFF) * 9.3132257e-10))
                                         * v14))
                         * v17);
  return (__m128)v16;
}

