/* Address: 0x1401c50e0 | Name: sub_1401C50E0 | Size: 2034 bytes */
__int64 __fastcall sub_1401C50E0(_DWORD *a1, __int64 a2)
{
  void *v2; // rsp
  char v3; // al
  int v4; // eax
  int v5; // eax
  int j; // [rsp+30h] [rbp+0h] BYREF
  signed int v8; // [rsp+34h] [rbp+4h]
  int i; // [rsp+38h] [rbp+8h]
  signed int v10; // [rsp+3Ch] [rbp+Ch]
  int *v11; // [rsp+40h] [rbp+10h]
  int v12; // [rsp+48h] [rbp+18h]
  _DWORD *v13; // [rsp+50h] [rbp+20h]
  int v14; // [rsp+58h] [rbp+28h]
  int v15; // [rsp+5Ch] [rbp+2Ch]
  int k; // [rsp+60h] [rbp+30h]
  __int16 v17; // [rsp+64h] [rbp+34h]
  int v18; // [rsp+68h] [rbp+38h]
  int v19; // [rsp+6Ch] [rbp+3Ch]
  int v20; // [rsp+70h] [rbp+40h]
  int v21; // [rsp+74h] [rbp+44h]
  int v22; // [rsp+78h] [rbp+48h]
  int v23; // [rsp+7Ch] [rbp+4Ch]
  int v24; // [rsp+80h] [rbp+50h]
  int v25; // [rsp+84h] [rbp+54h]
  int v26; // [rsp+88h] [rbp+58h]
  int v27; // [rsp+8Ch] [rbp+5Ch]
  int v28; // [rsp+90h] [rbp+60h]
  _DWORD *v29; // [rsp+98h] [rbp+68h]
  _DWORD v30[4]; // [rsp+A0h] [rbp+70h] BYREF
  int v31; // [rsp+B0h] [rbp+80h]
  int v32; // [rsp+B4h] [rbp+84h]
  int v33; // [rsp+B8h] [rbp+88h]
  int v34; // [rsp+BCh] [rbp+8Ch]
  _DWORD v35[4]; // [rsp+C0h] [rbp+90h]
  __int64 v36; // [rsp+D0h] [rbp+A0h]

  v28 = 0;
  v13 = a1 + 9;
  v22 = (int)a1[1146] >> 1;
  v18 = (int)a1[1146] >> 2;
  v12 = (int)a1[1146] >> 3;
  v31 = 0;
  v32 = v18 + v12;
  v33 = v12 + v18 + v12;
  v34 = v18 + v33;
  v2 = alloca(sub_1401F89D0());
  v11 = &j;
  sub_1401BC040(a2, v13, (__int64)&j, (__int64)&j + 2 * v34, a1[1146]);
  sub_1401BC040((__int64)v11, v13 + 2, (__int64)v11, (__int64)v11 + 2 * v33, v22);
  sub_1401BC040((__int64)v11, v13 + 4, (__int64)v11, (__int64)v11 + 2 * v32, v18);
  *((__int16 *)v11 + v12 - 1) >>= 1;
  v17 = *((_WORD *)v11 + v12 - 1);
  for ( i = v12 - 1; i > 0; --i )
  {
    *((__int16 *)v11 + i - 1) >>= 1;
    *((_WORD *)v11 + i) -= *((_WORD *)v11 + i - 1);
  }
  *(_WORD *)v11 -= *((_WORD *)v13 + 28);
  *((_WORD *)v13 + 28) = v17;
  for ( j = 0; j < 4; ++j )
  {
    v3 = sub_1401BE320(4 - j, 3u);
    v29 = a1;
    v12 = (int)a1[1146] >> v3;
    v26 = v12 >> 2;
    v19 = 0;
    v30[j] = v13[j + 6];
    for ( k = 0; k < 4; ++k )
    {
      v10 = 0;
      for ( i = 0; i < v26; ++i )
      {
        v23 = *((__int16 *)v11 + v19 + i + *(&v31 + j)) >> 3;
        v10 += (__int16)v23 * (__int16)v23;
      }
      if ( k >= 3 )
      {
        if ( (v10 >> 1) + v30[j] >= 0 )
          v25 = v30[j] + (v10 >> 1);
        else
          v25 = 0x7FFFFFFF;
        v30[j] = v25;
      }
      else
      {
        if ( v10 + v30[j] >= 0 )
          v24 = v10 + v30[j];
        else
          v24 = 0x7FFFFFFF;
        v30[j] = v24;
      }
      v19 += v26;
    }
    v13[j + 6] = v10;
  }
  sub_1401DB1D0(v30, v13);
  v10 = 0;
  v20 = 0;
  for ( j = 0; j < 4; ++j )
  {
    v8 = v30[j] - v13[j + 15];
    if ( v8 <= 0 )
    {
      v35[j] = 256;
    }
    else
    {
      if ( (v30[j] & 0xFF800000) != 0 )
        v4 = v30[j] / (((int)v13[j + 15] >> 8) + 1);
      else
        v4 = (v30[j] << 8) / (v13[j + 15] + 1);
      v35[j] = v4;
      v5 = sub_1401BC2A0(v35[j]);
      v15 = v5 - 1024;
      v10 += (__int16)(v5 - 1024) * (__int16)(v5 - 1024);
      if ( v8 < 0x100000 )
        v15 = ((__int16)v15 * (__int64)(int)((unsigned int)sub_1401BE4C0(v8) << 6)) >> 16;
      v20 += ((__int16)v15 * (__int64)dword_14027CC18[j]) >> 16;
    }
  }
  v10 /= 4;
  v27 = (__int16)(3 * sub_1401BE4C0(v10));
  v14 = sub_1401BC300((unsigned int)((45000LL * (__int16)v27) >> 16) - 128);
  a1[1182] = 2 * sub_1401BC300(v20) - 0x8000;
  v8 = 0;
  for ( j = 0; j < 4; ++j )
    v8 += ((v30[j] - v13[j + 15]) >> 4) * (j + 1);
  if ( a1[1146] == 20 * a1[1144] )
    v8 >>= 1;
  if ( v8 > 0 )
  {
    if ( v8 < 0x4000 )
    {
      v8 <<= 16;
      v8 = sub_1401BE4C0(v8);
      v14 = ((__int16)v14 * (__int64)(v8 + 0x8000)) >> 16;
    }
  }
  else
  {
    v14 >>= 1;
  }
  a1[1133] = sub_1401BE320(v14 >> 7, 0xFFu);
  v21 = (__int16)((unsigned int)((__int16)v14 * v14) >> 16) >> 4;
  if ( a1[1146] == 10 * a1[1144] )
    v21 >>= 1;
  for ( j = 0; j < 4; ++j )
  {
    v13[j + 10] += ((__int16)v21 * (__int64)(v35[j] - v13[j + 10])) >> 16;
    v15 = 3 * (sub_1401BC2A0(v13[j + 10]) - 1024);
    a1[j + 1178] = sub_1401BC300((v15 - 2048) >> 4);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&j ^ v36);
}

