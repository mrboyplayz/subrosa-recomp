/* Address: 0x14007a570 | Name: sub_14007A570 | Size: 842 bytes */
__int64 __fastcall sub_14007A570(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  float v7; // xmm7_4
  float v8; // xmm4_4
  signed int v9; // eax
  int v10; // r8d
  int v11; // r10d
  __int64 v12; // r9
  float v13; // xmm6_4

  v7 = (float)a4 / (float)a3;
  v8 = (float)(a2 + a4);
  if ( dword_140404A6C[137297765] )
  {
    v9 = a3 * dword_140404A6C[137297761];
    v10 = 0;
    v11 = 0;
    v12 = (unsigned int)(int)(float)((float)(a4 * dword_140404A6C[137297762])
                                   * (float)(1.0 / *(float *)&dword_140404A6C[438291415]));
    if ( (int)dword_140404A6C[137297755] > (int)dword_140404A6C[137297761] )
      v10 = (signed int)(dword_140404A6C[137297755] - dword_140404A6C[137297761]) / 2;
    if ( (int)dword_140404A6C[137297756] > (int)dword_140404A6C[137297762] )
      v11 = (signed int)(dword_140404A6C[137297756] - dword_140404A6C[137297762]) / 2;
    qword_140302FE8(
      (unsigned int)(v10
                   + (int)(float)((float)(a1 * dword_140404A6C[137297761])
                                * (float)(1.0 / *(float *)&dword_140404A6C[438291414]))),
      (unsigned int)(v11
                   + (int)(float)((float)(dword_140404A6C[137297762]
                                        * (int)(float)(*(float *)&dword_140404A6C[438291415] - v8))
                                * (float)(1.0 / *(float *)&dword_140404A6C[438291415]))),
      (unsigned int)(int)(float)((float)v9 * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      v12);
  }
  else
  {
    qword_140302FE8(
      (unsigned int)(int)(float)((float)(a1 * dword_140404A6C[137297755])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      (unsigned int)(int)(float)((float)(dword_140404A6C[137297756]
                                       * (int)(float)(*(float *)&dword_140404A6C[438291415] - v8))
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291415])),
      (unsigned int)(int)(float)((float)(a3 * dword_140404A6C[137297755])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      (unsigned int)(int)(float)((float)(a4 * dword_140404A6C[137297756])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291415])));
  }
  *(_QWORD *)&dword_140404A6C[431564497] = 0;
  dword_140404A6C[431564532] = 1065353216;
  *(float *)&dword_140404A6C[431564485] = a5 / (float)(a5 * a7);
  *(_OWORD *)&dword_140404A6C[431564486] = 0;
  *(float *)&dword_140404A6C[431564490] = a5 / (float)((float)(v7 * a7) * a5);
  *(_OWORD *)&dword_140404A6C[431564491] = 0;
  v13 = 1.0 / (float)(a6 - a5);
  dword_140404A6C[431564496] = -1082130432;
  *(float *)&dword_140404A6C[431564495] = -(float)((float)(a5 + a6) * v13);
  *(_OWORD *)&dword_140404A6C[431564504] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564500] = xmmword_140278D80;
  *(_OWORD *)&dword_140404A6C[431564512] = 0;
  *(_OWORD *)&dword_140404A6C[431564508] = xmmword_140279490;
  *(_OWORD *)&dword_140404A6C[431564520] = xmmword_140278E20;
  *(_OWORD *)&dword_140404A6C[431564516] = xmmword_140278D90;
  *(_OWORD *)&dword_140404A6C[431564528] = 0;
  *(_OWORD *)&dword_140404A6C[431564524] = xmmword_140279490;
  *(float *)&dword_140404A6C[431564499] = (float)(v13 * a5) * (float)(a6 * -2.0);
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564549], (__int64)&dword_140404A6C[431564501], (__int64)&dword_140404A6C[431564485]);
  return sub_14007A0E0(
           &dword_140404A6C[431564565],
           (__int64)&dword_140404A6C[431564533],
           (__int64)&dword_140404A6C[431564485]);
}

