/* Address: 0x14007a8c0 | Name: sub_14007A8C0 | Size: 730 bytes */
__int64 __fastcall sub_14007A8C0(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  float v8; // xmm6_4
  float v9; // xmm10_4
  unsigned int v10; // ebp
  unsigned int v11; // esi
  unsigned int v12; // edi
  __int64 v13; // rbx
  float v14; // xmm8_4

  v8 = (float)a3;
  v9 = (float)a4;
  v10 = (int)(float)((float)(a1 * dword_140404A6C[278520508]) * (float)(1.0 / *(float *)&dword_140404A6C[438291414]));
  v11 = (int)(float)((float)(a3 * dword_140404A6C[278520508]) * (float)(1.0 / *(float *)&dword_140404A6C[438291414]));
  v12 = (int)(float)((float)(dword_140404A6C[278520509]
                           * (int)(float)(*(float *)&dword_140404A6C[438291415] - (float)(a2 + a4)))
                   * (float)(1.0 / *(float *)&dword_140404A6C[438291415]));
  v13 = (unsigned int)(int)(float)((float)(a4 * dword_140404A6C[278520509])
                                 * (float)(1.0 / *(float *)&dword_140404A6C[438291415]));
  qword_140302FE8(v10, v12, v11, v13);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))&dword_140404A6C[18215071])(v10, v12, v11, (unsigned int)v13);
  *(float *)&dword_140404A6C[431564485] = a5 / (float)(a5 * a7);
  *(_OWORD *)&dword_140404A6C[431564486] = 0;
  *(_OWORD *)&dword_140404A6C[431564491] = 0;
  *(float *)&dword_140404A6C[431564490] = a5 / (float)((float)((float)(v9 / v8) * a7) * a5);
  if ( dword_140404A6C[73991626] )
  {
    *(_OWORD *)&dword_140404A6C[431564495] = xmmword_140278DE0;
    *(float *)&dword_140404A6C[431564499] = a5;
    dword_140404A6C[431564500] = 0;
  }
  else
  {
    *(_QWORD *)&dword_140404A6C[431564497] = 0;
    dword_140404A6C[431564500] = 0;
    v14 = 1.0 / (float)(a6 - a5);
    *(float *)&dword_140404A6C[431564495] = -(float)((float)(a5 + a6) * v14);
    dword_140404A6C[431564496] = -1082130432;
    *(float *)&dword_140404A6C[431564499] = (float)(v14 * a5) * (float)(a6 * -2.0);
  }
  *(_OWORD *)&dword_140404A6C[431564501] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564505] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564509] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564513] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564517] = xmmword_140278D30;
  *(_OWORD *)&dword_140404A6C[431564521] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564525] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564529] = xmmword_140279490;
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  return sub_14007A0E0(
           &dword_140404A6C[431564565],
           (__int64)&dword_140404A6C[431564533],
           (__int64)&dword_140404A6C[431564485]);
}

