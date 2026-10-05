/* Address: 0x1401d4e10 | Name: sub_1401D4E10 | Size: 776 bytes */
__int64 __fastcall sub_1401D4E10(float *a1, int a2, int a3, float *a4, int a5, int a6, int a7)
{
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  __int64 v12; // [rsp+0h] [rbp-378h] BYREF
  int v13; // [rsp+30h] [rbp-348h]
  _DWORD *v14; // [rsp+38h] [rbp-340h]
  double v15; // [rsp+40h] [rbp-338h]
  double v16; // [rsp+48h] [rbp-330h]
  double v17; // [rsp+50h] [rbp-328h]
  double v18; // [rsp+58h] [rbp-320h]
  _DWORD v19[192]; // [rsp+60h] [rbp-318h] BYREF
  __int64 v20; // [rsp+360h] [rbp-18h]

  v14 = &v19[a7];
  v13 = a5 + a7;
  sub_1401D5120((unsigned int)v19, a3, a2, 2 * (a5 + a7), a7);
  v15 = (float)(*a4 * *a4);
  v7 = v15 * sub_1401D1050((__int64)v14, a5);
  *a1 = v7;
  v16 = (float)(a4[1] * a4[1]);
  v8 = v16 * sub_1401D1050((__int64)&v14[v13], a5);
  a1[1] = v8;
  if ( a6 == 4 )
  {
    sub_1401D5120((unsigned int)v19, a3 + 64, a2 + 8 * v13, 2 * v13, a7);
    v17 = (float)(a4[2] * a4[2]);
    v9 = v17 * sub_1401D1050((__int64)v14, a5);
    a1[2] = v9;
    v18 = (float)(a4[3] * a4[3]);
    v10 = v18 * sub_1401D1050((__int64)&v14[v13], a5);
    a1[3] = v10;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v20);
}

