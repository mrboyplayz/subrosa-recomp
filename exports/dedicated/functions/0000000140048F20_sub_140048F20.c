/* Address: 0x140048f20 | Name: sub_140048F20 | Size: 263 bytes */
__int64 __fastcall sub_140048F20(__int64 a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  float v9; // xmm5_4
  float v10; // xmm3_4
  float v11; // xmm0_4

  v9 = 1.0 / (float)(a3 - a2);
  *(_QWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(float *)a1 = v9 + v9;
  v10 = 1.0 / (float)(a5 - a4);
  *(float *)(a1 + 20) = v10 + v10;
  v11 = 1.0 / (float)(a7 - a6);
  *(float *)(a1 + 40) = v11 * -2.0;
  *(float *)(a1 + 48) = -(float)((float)(a2 + a3) * v9);
  *(float *)(a1 + 52) = -(float)((float)(a4 + a5) * v10);
  *(float *)(a1 + 56) = -(float)((float)(a6 + a7) * v11);
  return 0;
}

