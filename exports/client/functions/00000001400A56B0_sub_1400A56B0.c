/* Address: 0x1400a56b0 | Name: sub_1400A56B0 | Size: 470 bytes */
__int64 __fastcall sub_1400A56B0(float *a1, float a2, float a3)
{
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  __int64 result; // rax
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm2_4

  v4 = (dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253];
  ++dword_140404A6C[133919253];
  *a1 = 1.0
      - (float)((float)(((15731 * v4 * v4 + 789221) * (15731 * v4 * v4 + 789221) - 771171059) & 0x7FFFFFFF)
              * 9.3132257e-10);
  v5 = ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253])
     * ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253]);
  ++dword_140404A6C[133919253];
  a1[1] = 1.0
        - (float)((float)(((15731 * v5 + 789221) * (15731 * v5 + 789221) - 771171059) & 0x7FFFFFFF) * 9.3132257e-10);
  v6 = ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253])
     * ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253]);
  ++dword_140404A6C[133919253];
  a1[2] = 1.0
        - (float)((float)(((15731 * v6 + 789221) * (15731 * v6 + 789221) - 771171059) & 0x7FFFFFFF) * 9.3132257e-10);
  sub_14007A240((__int64)a1, a1);
  v7 = ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253])
     * ((dword_140404A6C[133919253] << 13) ^ dword_140404A6C[133919253]);
  result = ++dword_140404A6C[133919253];
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

