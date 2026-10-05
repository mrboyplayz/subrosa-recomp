/* Address: 0x14007a2c0 | Name: sub_14007A2C0 | Size: 683 bytes */
__int64 __fastcall sub_14007A2C0(int a1, int a2, int a3, int a4, float a5, float a6, float a7)
{
  float v7; // xmm4_4
  signed int v8; // eax
  int v9; // r8d
  int v10; // r10d
  __int64 v11; // r9

  v7 = (float)(a2 + a4);
  if ( dword_140404A6C[137297765] )
  {
    v8 = a3 * dword_140404A6C[137297761];
    v9 = 0;
    v10 = 0;
    v11 = (unsigned int)(int)(float)((float)(a4 * dword_140404A6C[137297762])
                                   * (float)(1.0 / *(float *)&dword_140404A6C[438291415]));
    if ( (int)dword_140404A6C[137297755] > (int)dword_140404A6C[137297761] )
      v9 = (signed int)(dword_140404A6C[137297755] - dword_140404A6C[137297761]) / 2;
    if ( (int)dword_140404A6C[137297756] > (int)dword_140404A6C[137297762] )
      v10 = (signed int)(dword_140404A6C[137297756] - dword_140404A6C[137297762]) / 2;
    qword_140302FE8(
      (unsigned int)(v9
                   + (int)(float)((float)(a1 * dword_140404A6C[137297761])
                                * (float)(1.0 / *(float *)&dword_140404A6C[438291414]))),
      (unsigned int)(v10
                   + (int)(float)((float)(dword_140404A6C[137297762]
                                        * (int)(float)(*(float *)&dword_140404A6C[438291415] - v7))
                                * (float)(1.0 / *(float *)&dword_140404A6C[438291415]))),
      (unsigned int)(int)(float)((float)v8 * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      v11);
  }
  else
  {
    qword_140302FE8(
      (unsigned int)(int)(float)((float)(a1 * dword_140404A6C[137297755])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      (unsigned int)(int)(float)((float)(dword_140404A6C[137297756]
                                       * (int)(float)(*(float *)&dword_140404A6C[438291415] - v7))
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291415])),
      (unsigned int)(int)(float)((float)(a3 * dword_140404A6C[137297755])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291414])),
      (unsigned int)(int)(float)((float)(a4 * dword_140404A6C[137297756])
                               * (float)(1.0 / *(float *)&dword_140404A6C[438291415])));
  }
  sub_140079F00((__int64)&dword_140404A6C[431564485], -a5, a5, -a6, a6, -a7, a7);
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

