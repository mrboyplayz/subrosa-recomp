/* Address: 0x1401c0320 | Name: sub_1401C0320 | Size: 884 bytes */
__int64 __fastcall sub_1401C0320(int *a1, __int64 a2, __int64 a3, signed int *a4, signed int a5, unsigned int a6)
{
  int v6; // eax
  int v8; // [rsp+20h] [rbp-58h]
  int v9; // [rsp+20h] [rbp-58h]
  int v10; // [rsp+24h] [rbp-54h]
  unsigned int v11; // [rsp+24h] [rbp-54h]
  signed int v12; // [rsp+28h] [rbp-50h] BYREF
  signed int v13; // [rsp+2Ch] [rbp-4Ch] BYREF
  int v14; // [rsp+30h] [rbp-48h]
  unsigned int v15; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-40h] BYREF
  int v17; // [rsp+3Ch] [rbp-3Ch]
  int v18; // [rsp+40h] [rbp-38h]
  unsigned int v19; // [rsp+44h] [rbp-34h]
  signed int v20; // [rsp+48h] [rbp-30h]
  signed int v21; // [rsp+4Ch] [rbp-2Ch]
  int v22; // [rsp+50h] [rbp-28h]
  int v23; // [rsp+54h] [rbp-24h]
  __int64 v24; // [rsp+58h] [rbp-20h]
  __int64 v25; // [rsp+60h] [rbp-18h]
  __int16 v30; // [rsp+A8h] [rbp+30h]

  sub_1401BC4C0(&v12, &v16, a2, a5);
  sub_1401BC4C0(&v13, &v15, a3, a5);
  v6 = sub_1401BE3A0(v16, v15);
  v8 = (v6 & 1) + v6;
  v13 >>= v8 - v15;
  v12 >>= v8 - v16;
  v12 = sub_1401BE3A0(v12, 1u);
  v20 = sub_1401BE210(a2, a3, v8, a5);
  v10 = sub_1401BE550(v20, v12, 13);
  if ( v10 <= 0x4000 )
  {
    if ( v10 >= -16384 )
      v17 = v10;
    else
      v17 = -16384;
    v18 = v17;
  }
  else
  {
    v18 = 0x4000;
  }
  v11 = v18;
  v14 = ((__int16)v18 * (__int64)v18) >> 16;
  if ( v14 <= 0 )
    v19 = -v14;
  else
    v19 = v14;
  v30 = sub_1401BE3A0(a6, v19);
  v9 = v8 >> 1;
  v24 = *a4;
  *a4 = ((v30 * (__int64)(int)(((unsigned int)sub_1401BE4C0(v12) << v9) - *a4)) >> 16) + v24;
  v13 -= 16 * (((__int16)v11 * (__int64)v20) >> 16);
  v13 += (unsigned int)(((__int16)v14 * (__int64)v12) >> 16) << 6;
  v25 = a4[1];
  a4[1] = ((v30 * (__int64)(int)(((unsigned int)sub_1401BE4C0(v13) << v9) - a4[1])) >> 16) + v25;
  if ( *a4 <= 1 )
    v21 = 1;
  else
    v21 = *a4;
  *a1 = sub_1401BE550(a4[1], v21, 14);
  if ( *a1 <= 0x7FFF )
  {
    if ( *a1 >= 0 )
      v22 = *a1;
    else
      v22 = 0;
    v23 = v22;
  }
  else
  {
    v23 = 0x7FFF;
  }
  *a1 = v23;
  return v11;
}

