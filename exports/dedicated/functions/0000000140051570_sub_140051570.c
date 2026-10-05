/* Address: 0x140051570 | Name: sub_140051570 | Size: 470 bytes */
__int64 __fastcall sub_140051570(float *a1, float a2, float a3)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  __int64 result; // rax
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4

  v4 = (dword_16F0D0C64 << 13) ^ dword_16F0D0C64;
  ++dword_16F0D0C64;
  *a1 = 1.0
      - (float)((float)(((15731 * v4 * v4 + 789221) * (15731 * v4 * v4 + 789221) - 771171059) & 0x7FFFFFFF)
              * 9.3132257e-10);
  v5 = ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64) * ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64);
  ++dword_16F0D0C64;
  a1[1] = 1.0
        - (float)((float)(((15731 * v5 + 789221) * (15731 * v5 + 789221) - 771171059) & 0x7FFFFFFF) * 9.3132257e-10);
  v6 = ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64) * ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64);
  ++dword_16F0D0C64;
  a1[2] = 1.0
        - (float)((float)(((15731 * v6 + 789221) * (15731 * v6 + 789221) - 771171059) & 0x7FFFFFFF) * 9.3132257e-10);
  sub_140049260((__int64)a1, a1);
  v7 = ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64) * ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64);
  result = (unsigned int)++dword_16F0D0C64;
  v9 = (float)((float)((float)((float)(1.0
                                     - (float)((float)(((15731 * v7 + 789221) * (15731 * v7 + 789221) - 771171059)
                                                     & 0x7FFFFFFF)
                                             * 9.3132257e-10))
                             + 1.0)
                     * a2)
             * 0.5)
     + a3;
  v10 = v9 * *a1;
  v11 = v9 * a1[1];
  v12 = v9 * a1[2];
  *a1 = v10;
  a1[1] = v11;
  a1[2] = v12;
  return result;
}

