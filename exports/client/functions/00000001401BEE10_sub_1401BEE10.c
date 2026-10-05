/* Address: 0x1401bee10 | Name: sub_1401BEE10 | Size: 3853 bytes */
__int64 __fastcall sub_1401BEE10(
        __int16 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        int *a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11)
{
  void *v11; // rsp
  void *v12; // rsp
  void *v13; // rsp
  void *v14; // rsp
  void *v15; // rsp
  int i; // [rsp+30h] [rbp+0h] BYREF
  int v18; // [rsp+34h] [rbp+4h]
  int v19; // [rsp+38h] [rbp+8h] BYREF
  int v20; // [rsp+3Ch] [rbp+Ch]
  int v21; // [rsp+40h] [rbp+10h]
  void *v22; // [rsp+48h] [rbp+18h]
  int v23; // [rsp+50h] [rbp+20h]
  int v24; // [rsp+54h] [rbp+24h]
  int v25; // [rsp+58h] [rbp+28h]
  int v26; // [rsp+5Ch] [rbp+2Ch]
  int v27; // [rsp+60h] [rbp+30h]
  int v28; // [rsp+64h] [rbp+34h]
  int v29; // [rsp+68h] [rbp+38h]
  void *v30; // [rsp+70h] [rbp+40h]
  int v31; // [rsp+78h] [rbp+48h]
  int v32; // [rsp+7Ch] [rbp+4Ch]
  int v33; // [rsp+80h] [rbp+50h]
  BOOL v34; // [rsp+84h] [rbp+54h]
  int v35; // [rsp+88h] [rbp+58h]
  int v36; // [rsp+8Ch] [rbp+5Ch]
  int v37; // [rsp+90h] [rbp+60h]
  int v38; // [rsp+94h] [rbp+64h]
  int v39; // [rsp+98h] [rbp+68h]
  int v40; // [rsp+9Ch] [rbp+6Ch]
  int v41; // [rsp+A0h] [rbp+70h]
  int v42; // [rsp+A4h] [rbp+74h]
  int v43; // [rsp+A8h] [rbp+78h]
  int v44; // [rsp+ACh] [rbp+7Ch]
  BOOL v45; // [rsp+B0h] [rbp+80h]
  int v46; // [rsp+B4h] [rbp+84h]
  int v47; // [rsp+B8h] [rbp+88h]
  unsigned int v48; // [rsp+BCh] [rbp+8Ch]
  __int16 v49; // [rsp+C0h] [rbp+90h] BYREF
  _DWORD v50[3]; // [rsp+C4h] [rbp+94h] BYREF
  int *v51; // [rsp+D0h] [rbp+A0h]
  int *p_i; // [rsp+D8h] [rbp+A8h]
  int *v53; // [rsp+E0h] [rbp+B0h]
  int *v54; // [rsp+E8h] [rbp+B8h]
  __int64 v55; // [rsp+F0h] [rbp+C0h]
  signed int v60; // [rsp+140h] [rbp+110h]

  v22 = (void *)(a2 - 4);
  v11 = alloca(sub_1401F89D0());
  v30 = &i;
  for ( i = 0; i < a11 + 2; ++i )
  {
    v18 = *(__int16 *)(a3 + 2LL * (i - 2)) + *(__int16 *)(a2 + 2LL * (i - 2));
    v23 = *(__int16 *)(a2 + 2LL * (i - 2)) - *(__int16 *)(a3 + 2LL * (i - 2));
    *((_WORD *)v22 + i) = (v18 & 1) + (v18 >> 1);
    if ( (v23 & 1) + (v23 >> 1) <= 0x7FFF )
    {
      if ( (v23 & 1) + (v23 >> 1) >= -32768 )
        v43 = (v23 & 1) + (v23 >> 1);
      else
        v43 = -32768;
      v44 = v43;
    }
    else
    {
      v44 = 0x7FFF;
    }
    *((_WORD *)v30 + i) = v44;
  }
  MEMORY[0x1401FC920](v22, a1 + 2);
  MEMORY[0x1401FC920](v30, a1 + 4);
  MEMORY[0x1401FC920](a1 + 2, (char *)v22 + 2 * a11);
  MEMORY[0x1401FC920](a1 + 4, (char *)v30 + 2 * a11);
  v12 = alloca(sub_1401F89D0());
  p_i = &i;
  v13 = alloca(sub_1401F89D0());
  v54 = &i;
  for ( i = 0; i < a11; ++i )
  {
    v18 = (((*((__int16 *)v22 + i + 2) + *((__int16 *)v22 + i) + 2 * *((__int16 *)v22 + i + 1)) >> 1) + 1) >> 1;
    *((_WORD *)p_i + i) = v18;
    *((_WORD *)v54 + i) = *((_WORD *)v22 + i + 1) - v18;
  }
  v14 = alloca(sub_1401F89D0());
  v51 = &i;
  v15 = alloca(sub_1401F89D0());
  v53 = &i;
  for ( i = 0; i < a11; ++i )
  {
    v18 = (((*((__int16 *)v30 + i + 2) + *((__int16 *)v30 + i) + 2 * *((__int16 *)v30 + i + 1)) >> 1) + 1) >> 1;
    *((_WORD *)v51 + i) = v18;
    *((_WORD *)v53 + i) = *((_WORD *)v30 + i + 1) - v18;
  }
  v45 = a11 == 10 * a10;
  v34 = v45;
  if ( a11 == 10 * a10 )
    v32 = 328;
  else
    v32 = 655;
  v26 = ((__int16)v32 * (__int64)(a8 * a8)) >> 16;
  v19 = sub_1401C0320((unsigned int)&v49, (_DWORD)p_i, (_DWORD)v51, (int)a1 + 12, a11, v26);
  v20 = sub_1401C0320((unsigned int)v50, (_DWORD)v54, (_DWORD)v53, (int)a1 + 20, a11, v26);
  v25 = 3 * v49 + v50[0];
  if ( v25 >= 0x10000 )
    v33 = 0x10000;
  else
    v33 = v25;
  v25 = v33;
  if ( v34 )
    v35 = 1200;
  else
    v35 = 600;
  v60 = a7 - v35;
  if ( v60 < 1 )
    v60 = 1;
  v24 = 600 * (__int16)a10 + 2000;
  v36 = 3 * v25;
  *a6 = sub_1401BE550(v60, 3 * v25 + 851968, 19);
  if ( *a6 >= v24 )
  {
    a6[1] = v60 - *a6;
    v21 = 0x4000;
  }
  else
  {
    *a6 = v24;
    a6[1] = v60 - *a6;
    v21 = sub_1401BE550(2 * a6[1] - v24, ((__int16)v24 * (__int64)(v36 + 0x10000)) >> 16, 16);
    if ( v21 <= 0x4000 )
    {
      if ( v21 >= 0 )
        v37 = v21;
      else
        v37 = 0;
      v38 = v37;
    }
    else
    {
      v38 = 0x4000;
    }
    v21 = v38;
  }
  a1[14] += (unsigned int)((__int16)v26 * (v21 - a1[14])) >> 16;
  *a5 = 0;
  if ( a9 )
  {
    v21 = 0;
    v19 = 0;
    v20 = 0;
    sub_1401C06A0(&v19, a4);
  }
  else if ( a1[15] || 8 * v60 >= 13 * v24 && (int)((a1[14] * (__int64)v25) >> 16) >= 819 )
  {
    if ( a1[15] && (8 * v60 < 11 * v24 || (int)((a1[14] * (__int64)v25) >> 16) < 328) )
    {
      v19 = ((__int16)v19 * a1[14]) >> 14;
      v20 = ((__int16)v20 * a1[14]) >> 14;
      sub_1401C06A0(&v19, a4);
      v21 = 0;
      v19 = 0;
      v20 = 0;
    }
    else if ( a1[14] <= 15565 )
    {
      v19 = ((__int16)v19 * a1[14]) >> 14;
      v20 = ((__int16)v20 * a1[14]) >> 14;
      sub_1401C06A0(&v19, a4);
      v21 = a1[14];
    }
    else
    {
      sub_1401C06A0(&v19, a4);
      v21 = 0x4000;
    }
  }
  else
  {
    v19 = ((__int16)v19 * a1[14]) >> 14;
    v20 = ((__int16)v20 * a1[14]) >> 14;
    sub_1401C06A0(&v19, a4);
    v21 = 0;
    v19 = 0;
    v20 = 0;
    *a6 = v60;
    a6[1] = 0;
    *a5 = 1;
  }
  if ( *a5 == 1 )
  {
    a1[16] += a11 - 8 * a10;
    if ( a1[16] >= 5 * a10 )
      a1[16] = 10000;
    else
      *a5 = 0;
  }
  else
  {
    a1[16] = 0;
  }
  if ( !*a5 && a6[1] < 1 )
  {
    a6[1] = 1;
    *a6 = sub_1401BE3A0(1u, v60 - a6[1]);
  }
  v28 = -*a1;
  v29 = -a1[1];
  v27 = a1[15] << 10;
  v50[1] = 8 * a10;
  v31 = 0x10000 / (8 * a10);
  v46 = -(((((__int16)v31 * (__int16)(v19 - *a1)) >> 15) + 1) >> 1);
  v47 = -(((((__int16)v31 * (__int16)(v20 - a1[1])) >> 15) + 1) >> 1);
  v48 = (unsigned int)(((__int16)v31 * (__int64)(v21 - a1[15])) >> 16) << 10;
  for ( i = 0; i < 8 * a10; ++i )
  {
    v28 += v46;
    v29 += v47;
    v27 += v48;
    v18 = (*((__int16 *)v22 + i + 2) + *((__int16 *)v22 + i) + 2 * *((__int16 *)v22 + i + 1)) << 9;
    v18 = (((__int16)v28 * (__int64)v18) >> 16) + ((*((__int16 *)v30 + i + 1) * (__int64)v27) >> 16);
    v18 += ((__int16)v29 * (__int64)(*((__int16 *)v22 + i + 1) << 11)) >> 16;
    if ( ((v18 >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v18 >> 7) + 1) >> 1 >= -32768 )
        v39 = ((v18 >> 7) + 1) >> 1;
      else
        v39 = -32768;
      v40 = v39;
    }
    else
    {
      v40 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * (i - 1)) = v40;
  }
  v28 = -v19;
  v29 = -v20;
  v27 = v21 << 10;
  for ( i = 8 * a10; i < a11; ++i )
  {
    v18 = (*((__int16 *)v22 + i + 2) + *((__int16 *)v22 + i) + 2 * *((__int16 *)v22 + i + 1)) << 9;
    v18 = (((__int16)v28 * (__int64)v18) >> 16) + ((*((__int16 *)v30 + i + 1) * (__int64)v27) >> 16);
    v18 += ((__int16)v29 * (__int64)(*((__int16 *)v22 + i + 1) << 11)) >> 16;
    if ( ((v18 >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v18 >> 7) + 1) >> 1 >= -32768 )
        v41 = ((v18 >> 7) + 1) >> 1;
      else
        v41 = -32768;
      v42 = v41;
    }
    else
    {
      v42 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * (i - 1)) = v42;
  }
  *a1 = v19;
  a1[1] = v20;
  a1[15] = v21;
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v55);
}

