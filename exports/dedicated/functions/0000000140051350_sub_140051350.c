/* Address: 0x140051350 | Name: sub_140051350 | Size: 86 bytes */
float sub_140051350()
{
  int v0; // ecx

  v0 = ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64) * ((dword_16F0D0C64 << 13) ^ dword_16F0D0C64);
  ++dword_16F0D0C64;
  return 1.0
       - (float)((float)(((15731 * v0 + 789221) * (15731 * v0 + 789221) - 771171059) & 0x7FFFFFFF) * 9.3132257e-10);
}

