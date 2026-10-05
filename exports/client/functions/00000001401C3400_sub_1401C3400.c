/* Address: 0x1401c3400 | Name: sub_1401C3400 | Size: 1721 bytes */
__int64 __fastcall sub_1401C3400(
        _BYTE *a1,
        _DWORD *a2,
        int *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        char *a7,
        __int64 a8,
        __int64 a9,
        __int16 a10,
        int a11,
        int a12)
{
  __int64 v13; // [rsp+0h] [rbp-78h] BYREF
  int v14; // [rsp+20h] [rbp-58h]
  int v15; // [rsp+24h] [rbp-54h]
  char *v16; // [rsp+28h] [rbp-50h]
  int i; // [rsp+30h] [rbp-48h]
  int v18; // [rsp+34h] [rbp-44h]
  int v19; // [rsp+38h] [rbp-40h]
  int v20; // [rsp+3Ch] [rbp-3Ch]
  int v21; // [rsp+40h] [rbp-38h]
  int v22; // [rsp+44h] [rbp-34h]
  int v23; // [rsp+48h] [rbp-30h]
  int v24; // [rsp+50h] [rbp-28h]
  int v25; // [rsp+54h] [rbp-24h]
  int v26; // [rsp+58h] [rbp-20h]
  int v27; // [rsp+5Ch] [rbp-1Ch]
  int v28; // [rsp+60h] [rbp-18h]
  __int64 v29; // [rsp+68h] [rbp-10h]

  v24 = -128 * *a6;
  v25 = -128 * a6[1];
  v26 = -128 * a6[2];
  v27 = -128 * a6[3];
  v28 = -128 * a6[4];
  *a3 = 0x7FFFFFFF;
  *a2 = 0x7FFFFFFF;
  v16 = a7;
  *a1 = 0;
  for ( i = 0; i < a12; ++i )
  {
    v18 = *(unsigned __int8 *)(a8 + i);
    v15 = 32801;
    if ( v18 - a11 <= 0 )
      v19 = 0;
    else
      v19 = v18 - a11;
    v21 = v19 << 11;
    v14 = *v16 * *a5 + 2 * (v16[4] * a5[4] + v16[3] * a5[3] + v16[2] * a5[2] + v24 + v16[1] * a5[1]);
    v15 += ((v16[3] * (__int64)(v16[3] * a5[18] + 2 * (v27 + v16[4] * a5[19]))) >> 16)
         + ((v16[2] * (__int64)(v16[2] * a5[12] + 2 * (v16[4] * a5[14] + v26 + v16[3] * a5[13]))) >> 16)
         + ((v16[1] * (__int64)(v16[1] * a5[6] + 2 * (v16[4] * a5[9] + v16[3] * a5[8] + v25 + v16[2] * a5[7]))) >> 16)
         + ((*v16 * (__int64)v14) >> 16);
    v14 = 2 * v28;
    v14 = v16[4] * a5[24] + 2 * v28;
    v15 += (v16[4] * (__int64)v14) >> 16;
    if ( v15 >= 0 )
    {
      v22 = a10;
      v23 = (__int16)(sub_1401BC2A0(v21 + v15) - 1920) * a10;
      v20 = v23 + 4 * *(unsigned __int8 *)(a9 + i);
      if ( v20 <= *a3 )
      {
        *a3 = v20;
        *a2 = v21 + v15;
        *a1 = i;
        *a4 = v18;
      }
    }
    v16 += 5;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v29);
}

