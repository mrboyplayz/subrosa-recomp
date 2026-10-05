/* Address: 0x1400513d0 | Name: sub_1400513D0 | Size: 414 bytes */
__int64 __fastcall sub_1400513D0(float *a1, float a2, float a3)
{
  int v4; // edx
  int v7; // ecx
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  int v13; // ecx
  __int64 result; // rax
  float v15; // xmm1_4
  float v16; // xmm0_4

  v4 = ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64) * ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64);
  ++dword_16F0D0C64;
  *a1 = 1.0 - (float)((float)(((15731 * v4 + 789221) * (15731 * v4 + 789221) - 771171059) & 0x7FFFFFFF) * 9.3132257e-10);
  v7 = ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64) * ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64);
  ++dword_16F0D0C64;
  v8 = *a1;
  v9 = 1.0 - (float)((float)(((15731 * v7 + 789221) * (15731 * v7 + 789221) - 771171059) & 0x7FFFFFFF) * 9.3132257e-10);
  v10 = fsqrt((float)(v8 * v8) + (float)(v9 * v9));
  if ( v10 == 0.0 )
  {
    v11 = 0.0;
    v12 = 0.0;
  }
  else
  {
    v11 = v9 * (float)(1.0 / v10);
    v12 = v8 * (float)(1.0 / v10);
  }
  *a1 = v12;
  a1[1] = v11;
  v13 = ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64) * ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64);
  result = (unsigned int)++dword_16F0D0C64;
  v15 = (float)((float)((float)((float)(1.0
                                      - (float)((float)(((15731 * v13 + 789221) * (15731 * v13 + 789221) - 771171059)
                                                      & 0x7FFFFFFF)
                                              * 9.3132257e-10))
                              + 1.0)
                      * a2)
              * 0.5)
      + a3;
  v16 = v15 * *a1;
  a1[1] = v15 * a1[1];
  *a1 = v16;
  return result;
}

