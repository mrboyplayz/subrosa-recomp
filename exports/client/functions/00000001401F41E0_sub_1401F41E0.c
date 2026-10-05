/* Address: 0x1401f41e0 | Name: sub_1401F41E0 | Size: 461 bytes */
__int64 __fastcall sub_1401F41E0(__int64 a1, __int16 a2, __int64 a3, float *a4, int a5, int a6, int a7)
{
  __int64 v8; // [rsp+0h] [rbp-88h] BYREF
  int v9; // [rsp+40h] [rbp-48h]
  int v10; // [rsp+44h] [rbp-44h]
  int v11; // [rsp+48h] [rbp-40h]
  int v12; // [rsp+4Ch] [rbp-3Ch]
  int v13; // [rsp+50h] [rbp-38h]
  int v14[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v15; // [rsp+60h] [rbp-28h]
  int v16[4]; // [rsp+68h] [rbp-20h] BYREF
  __int64 v17; // [rsp+78h] [rbp-10h]

  v12 = 2471 * a2;
  v13 = a7 / 1000;
  v10 = v12 / (a7 / 1000);
  v9 = 0x10000000 - 471 * v10;
  v16[0] = v9;
  v16[1] = 2 * (471 * v10 - 0x10000000);
  v16[2] = v9;
  v11 = v9 >> 6;
  v14[0] = ((int)(((v10 * (__int64)v10) >> 16) - 0x800000) * (__int64)(v9 >> 6)) >> 16;
  v14[1] = (v11 * (__int64)v11) >> 16;
  sub_1401F3F90(a1, v16, v14, a4, a3, a5, a6);
  if ( a6 == 2 )
  {
    v15 = a1 + 4;
    sub_1401F3F90(a1 + 4, v16, v14, a4 + 2, a3 + 4, a5, 2);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v17);
}

