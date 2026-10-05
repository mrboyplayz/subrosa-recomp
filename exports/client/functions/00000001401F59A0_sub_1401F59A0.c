/* Address: 0x1401f59a0 | Name: sub_1401F59A0 | Size: 1113 bytes */
__int64 __fastcall sub_1401F59A0(
        _DWORD *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        _BYTE *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // ecx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  _BYTE v15[384]; // [rsp-180h] [rbp-1F0h] BYREF
  int i; // [rsp+70h] [rbp+0h] BYREF
  int v17; // [rsp+74h] [rbp+4h]
  int v18; // [rsp+78h] [rbp+8h]
  int v19; // [rsp+7Ch] [rbp+Ch]
  int v20; // [rsp+80h] [rbp+10h]
  int v21; // [rsp+84h] [rbp+14h]
  int v22; // [rsp+88h] [rbp+18h]
  int v23; // [rsp+8Ch] [rbp+1Ch]
  int v24; // [rsp+90h] [rbp+20h]
  BOOL v25; // [rsp+94h] [rbp+24h]
  signed int v26; // [rsp+98h] [rbp+28h]
  BOOL v27; // [rsp+9Ch] [rbp+2Ch]
  int v28; // [rsp+A0h] [rbp+30h]
  int v29; // [rsp+A4h] [rbp+34h]
  int v30; // [rsp+A8h] [rbp+38h]
  int v31; // [rsp+ACh] [rbp+3Ch]
  int v32; // [rsp+B0h] [rbp+40h]
  int v33; // [rsp+B4h] [rbp+44h]
  int v34; // [rsp+B8h] [rbp+48h]
  _BYTE *v35; // [rsp+C0h] [rbp+50h]
  int *v36; // [rsp+C8h] [rbp+58h]
  __int64 v37; // [rsp+D0h] [rbp+60h]

  v17 = 0;
  if ( a3 == 2 )
    v20 = 3;
  else
    v20 = 2 * a3;
  v23 = v20;
  if ( a1[37] || a1[41] == -1 )
  {
    v19 = a6;
  }
  else
  {
    v30 = 3 * a1[40];
    v9 = 24 * a1[36];
    v29 = a3 * a4;
    v31 = v9 / (int)(a3 * a4);
    v21 = v30 / v31;
    if ( v30 / v31 >= a6 )
      v22 = a6;
    else
      v22 = v21;
    v19 = v22;
  }
  v10 = (unsigned int)((v19 - v23) >> 31);
  LODWORD(v10) = (v19 - v23) % a3;
  if ( (v19 - v23) / a3 + 1 <= 1276 )
  {
    v10 = (unsigned int)((v19 - v23) >> 31);
    LODWORD(v10) = (v19 - v23) % a3;
    v24 = (v19 - v23) / a3 + 1;
  }
  else
  {
    v24 = 1276;
  }
  v18 = v24;
  v11 = v24 * a3 + 15LL;
  if ( v11 <= v24 * a3 )
    v11 = 0xFFFFFFFFFFFFFF0LL;
  v12 = alloca(sub_1401F89D0(v11 & 0xFFFFFFFFFFFFFFF0uLL, v10));
  v36 = &i;
  v13 = alloca(496);
  v35 = v15;
  sub_1401E37F0(v15);
  v32 = a1[34];
  v33 = a1[32];
  v34 = a1[30];
  a1[34] = a1[3556];
  a1[32] = a1[3560];
  a1[30] = a1[3548];
  v28 = a1[17];
  if ( v28 )
    a1[30] = 1;
  else
    a1[3558] = a1[3548];
  for ( i = 0; i < a3; ++i )
  {
    a1[17] = 0;
    v25 = i < a3 - 1;
    a1[4534] = v25;
    if ( a7 && i == a3 - 1 )
      a1[34] = 1002;
    v26 = sub_1401E5400(a1, a2 + 4LL * (int)(a4 * a1[28] * i), a4, (char *)v36 + v18 * i, v18, a8, 0, 0, 0, 0, 0, 0, a9);
    if ( v26 < 0 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v37);
    v17 = sub_1401E3870((__int64)v35, (__int64)v36 + v18 * i, v26);
    if ( v17 < 0 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v37);
  }
  v27 = a1[37] == 0;
  v17 = sub_1401EA090((__int64)v35, 0, a3, a5, v19, 0, v27);
  if ( v17 >= 0 )
  {
    a1[34] = v32;
    a1[32] = v33;
    a1[30] = v34;
    a1[17] = v28;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v37);
}

