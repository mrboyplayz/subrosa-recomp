/* Address: 0x1400b3920 | Name: sub_1400B3920 | Size: 311 bytes */
__int64 __fastcall sub_1400B3920(__int64 a1, __int64 a2, float *a3, float *a4)
{
  int v4; // r11d
  __int64 result; // rax
  float *v7; // rcx
  __int64 v8; // r8
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm10_4
  float v12; // xmm8_4
  float v13; // xmm11_4
  float v14; // xmm7_4
  float v15; // xmm9_4
  float v16; // xmm3_4
  float v17; // xmm6_4

  v4 = 0;
  result = a1;
  if ( *(int *)a2 > 0 )
  {
    v7 = (float *)(a1 + 8);
    v8 = -8 - result;
    do
    {
      ++v4;
      v9 = a4[4];
      result = v8 + *(_QWORD *)(a2 + 8);
      v10 = a4[7];
      v11 = a4[5];
      v12 = *(float *)((char *)v7 + result);
      v13 = *(float *)((char *)v7 + result + 4);
      v14 = *(float *)((char *)v7 + result + 8);
      v15 = a4[8];
      v16 = a4[1] * v12;
      v17 = a4[2] * v12;
      *(v7 - 2) = (float)((float)(v12 * *a4) + (float)(v14 * a4[6])) + (float)((float)(v13 * a4[3]) + *a3);
      *(v7 - 1) = (float)((float)(v10 * v14) + v16) + (float)((float)(v9 * v13) + a3[1]);
      *v7 = (float)((float)(v15 * v14) + v17) + (float)((float)(v11 * v13) + a3[2]);
      v7 += 3;
    }
    while ( v4 < *(_DWORD *)a2 );
  }
  return result;
}

