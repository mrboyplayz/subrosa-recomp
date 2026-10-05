/* Address: 0x1401c1790 | Name: sub_1401C1790 | Size: 2061 bytes */
__int64 __fastcall sub_1401C1790(__int64 a1, int a2, __int16 a3, __int64 a4, int a5)
{
  void *v5; // rsp
  void *v6; // rsp
  void *v7; // rsp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int i; // [rsp+30h] [rbp+0h] BYREF
  int j; // [rsp+34h] [rbp+4h]
  int v15; // [rsp+38h] [rbp+8h]
  int v16; // [rsp+3Ch] [rbp+Ch]
  int v17; // [rsp+40h] [rbp+10h]
  int k; // [rsp+44h] [rbp+14h]
  int *v19; // [rsp+48h] [rbp+18h]
  int v20; // [rsp+50h] [rbp+20h]
  int v21; // [rsp+54h] [rbp+24h]
  int *v22; // [rsp+58h] [rbp+28h]
  int *p_i; // [rsp+60h] [rbp+30h]
  int v24; // [rsp+68h] [rbp+38h]
  int v25; // [rsp+6Ch] [rbp+3Ch]
  int v26; // [rsp+70h] [rbp+40h]
  int v27; // [rsp+74h] [rbp+44h]
  int v28; // [rsp+78h] [rbp+48h]
  int v29; // [rsp+7Ch] [rbp+4Ch]
  int v30; // [rsp+80h] [rbp+50h]
  int *v31; // [rsp+88h] [rbp+58h]
  int v32; // [rsp+90h] [rbp+60h]
  __int64 v33; // [rsp+98h] [rbp+68h]
  char *v34; // [rsp+A0h] [rbp+70h]
  __int64 v35; // [rsp+A8h] [rbp+78h]
  _BYTE v36[32]; // [rsp+B0h] [rbp+80h] BYREF
  __int64 v37; // [rsp+D0h] [rbp+A0h]

  v20 = 0;
  MEMORY[0x1401FCD30](v36, 0, 32);
  v15 = a5 >> 4;
  if ( 16 * (a5 >> 4) < a5 )
  {
    ++v15;
    MEMORY[0x1401FCD30](a5 + a4, 0, 16);
  }
  v5 = alloca(sub_1401F89D0());
  v22 = &i;
  for ( i = 0; i < 16 * v15; i += 4 )
  {
    if ( *(char *)(a4 + i) <= 0 )
      v24 = -*(char *)(a4 + i);
    else
      v24 = *(char *)(a4 + i);
    v22[i] = v24;
    if ( *(char *)(a4 + i + 1) <= 0 )
      v25 = -*(char *)(a4 + i + 1);
    else
      v25 = *(char *)(a4 + i + 1);
    v22[i + 1] = v25;
    if ( *(char *)(a4 + i + 2) <= 0 )
      v26 = -*(char *)(a4 + i + 2);
    else
      v26 = *(char *)(a4 + i + 2);
    v22[i + 2] = v26;
    if ( *(char *)(a4 + i + 3) <= 0 )
      v27 = -*(char *)(a4 + i + 3);
    else
      v27 = *(char *)(a4 + i + 3);
    v22[i + 3] = v27;
  }
  v6 = alloca(sub_1401F89D0());
  p_i = &i;
  v7 = alloca(sub_1401F89D0());
  v19 = &i;
  v31 = v22;
  for ( i = 0; i < v15; ++i )
  {
    v19[i] = 0;
    while ( 1 )
    {
      v16 = sub_1401D6B20(v36, v31, unk_1402820FC, 8);
      v8 = sub_1401D6B20(v36, v36, unk_1402820FD, 4);
      v16 += v8;
      v9 = sub_1401D6B20(v36, v36, unk_1402820FE, 2);
      v16 += v9;
      v10 = sub_1401D6B20(&p_i[i], v36, unk_1402820FF, 1);
      v16 += v10;
      if ( !v16 )
        break;
      ++v19[i];
      for ( j = 0; j < 16; ++j )
        v31[j] >>= 1;
    }
    v31 += 16;
  }
  v28 = 0x7FFFFFFF;
  for ( j = 0; j < 9; ++j )
  {
    v34 = (char *)&unk_1402823B0 + 18 * j;
    v17 = byte_140282470[9 * (a2 >> 1) + j];
    for ( i = 0; i < v15; ++i )
    {
      if ( v19[i] <= 0 )
        v11 = (unsigned __int8)v34[p_i[i]];
      else
        v11 = (unsigned __int8)v34[17];
      v17 += v11;
    }
    if ( v17 < v28 )
    {
      v28 = v17;
      v20 = j;
    }
  }
  sub_14019A4F0(a1, v20, (__int64)&unk_140282458 + 9 * (a2 >> 1), 8);
  v35 = (__int64)&unk_1402822F0 + 18 * v20;
  for ( i = 0; i < v15; ++i )
  {
    if ( v19[i] )
    {
      sub_14019A4F0(a1, 17, v35, 8);
      for ( j = 0; j < v19[i] - 1; ++j )
        sub_14019A4F0(a1, 17, (__int64)&unk_140282392, 8);
      sub_14019A4F0(a1, p_i[i], (__int64)&unk_140282392, 8);
    }
    else
    {
      sub_14019A4F0(a1, p_i[i], v35, 8);
    }
  }
  for ( i = 0; i < v15; ++i )
  {
    if ( p_i[i] > 0 )
      sub_1401C1FB0(a1, &v22[16 * i]);
  }
  for ( i = 0; i < v15; ++i )
  {
    if ( v19[i] > 0 )
    {
      v33 = 16 * i + a4;
      v32 = v19[i] - 1;
      for ( j = 0; j < 16; ++j )
      {
        if ( *(char *)(v33 + j) <= 0 )
          v29 = -*(char *)(v33 + j);
        else
          v29 = *(char *)(v33 + j);
        v30 = (char)v29;
        for ( k = v32; k > 0; --k )
        {
          v21 = (v30 >> k) & 1;
          sub_14019A4F0(a1, v21, (__int64)&unk_14028213C, 8);
        }
        v21 = v30 & 1;
        sub_14019A4F0(a1, v21, (__int64)&unk_14028213C, 8);
      }
    }
  }
  sub_1401C0D70(a1, a4, a5, a2, a3, (__int64)p_i);
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v37);
}

