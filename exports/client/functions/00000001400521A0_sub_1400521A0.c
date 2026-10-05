/* Address: 0x1400521a0 | Name: sub_1400521A0 | Size: 157 bytes */
__int64 __fastcall sub_1400521A0(unsigned int a1, float a2, float a3, float a4)
{
  int v5; // ecx
  unsigned int *v6; // rax
  float v8[6]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = 0.0;
  v8[1] = -0.03125;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  v8[2] = a4 * -0.5;
  dword_140404A6C[178519250] = 0;
  sub_140002D00(v8, a2, a3, a4);
  v5 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v6 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v6 - 1) = 0;
      ++v5;
      *(_QWORD *)(v6 + 1) = 0;
      *(_QWORD *)(v6 + 3) = 0;
      v6 += 6;
    }
    while ( v5 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}

