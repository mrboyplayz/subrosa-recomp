#include "shared_client.h"


//----- (00000001401C0320) ----------------------------------------------------
__int64            sub_1401C0320(int *a1, __int64 a2, __int64 a3, signed int *a4, signed int a5, unsigned int a6)
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


//----- (00000001401C06A0) ----------------------------------------------------
__int64            sub_1401C06A0(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-38h]
  int j; // [rsp+4h] [rbp-34h]
  int k; // [rsp+8h] [rbp-30h]
  int v6; // [rsp+Ch] [rbp-2Ch]
  int v7; // [rsp+10h] [rbp-28h]
  int v8; // [rsp+14h] [rbp-24h]
  int v9; // [rsp+1Ch] [rbp-1Ch]
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+24h] [rbp-14h]

  v10 = 0;
  for ( i = 0; i < 2; ++i )
  {
    v9 = 0x7FFFFFFF;
    for ( j = 0; j < 15; ++j )
    {
      v7 = word_1402827A0[j];
      v11 = (6554LL * (word_1402827A0[j + 1] - v7)) >> 16;
      for ( k = 0; k < 5; ++k )
      {
        v6 = (__int16)(2 * k + 1) * (__int16)v11 + v7;
        if ( a1[i] - v6 <= 0 )
          v8 = v6 - a1[i];
        else
          v8 = a1[i] - v6;
        if ( v8 >= v9 )
          goto LABEL_14;
        v9 = v8;
        v10 = (__int16)(2 * k + 1) * (__int16)v11 + v7;
        *(_BYTE *)(3LL * i + a2) = j;
        *(_BYTE *)(3LL * i + a2 + 1) = k;
      }
    }
LABEL_14:
    *(_BYTE *)(3LL * i + a2 + 2) = *(char *)(3LL * i + a2) / 3;
    *(_BYTE *)(3LL * i + a2) -= 3 * *(_BYTE *)(3LL * i + a2 + 2);
    a1[i] = v10;
  }
  result = (unsigned int)(*a1 - a1[1]);
  *a1 = result;
  return result;
}

// 1402827A0: using guessed type __int16 word_1402827A0[16];

//----- (00000001401C0940) ----------------------------------------------------
__int64            sub_1401C0940(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-18h]

  result = (__int64)sub_14019A4F0(a1, *(char *)(a2 + 5) + 5 * *(char *)(a2 + 2), (__int64)&unk_1402827C0, 8);
  for ( i = 0; i < 2; ++i )
  {
    sub_14019A4F0(a1, *(char *)(3LL * i + a2), (__int64)&unk_14028215C, 8);
    sub_14019A4F0(a1, *(char *)(3LL * i + a2 + 1), (__int64)&unk_1402823A4, 8);
    result = (unsigned int)(i + 1);
  }
  return result;
}


//----- (00000001401C0A60) ----------------------------------------------------
_DWORD *           sub_1401C0A60(_DWORD *a1, char a2)
{
  return sub_14019A4F0(a1, a2, (__int64)&unk_140282764, 8);
}


//----- (00000001401C0AA0) ----------------------------------------------------
__int64            sub_1401C0AA0(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v4; // [rsp+0h] [rbp-58h] BYREF
  int i; // [rsp+20h] [rbp-38h]
  int v6; // [rsp+24h] [rbp-34h]
  int v7; // [rsp+28h] [rbp-30h]
  _DWORD v8[6]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+48h] [rbp-10h]

  v2 = sub_14019AFE0(a1, (__int64)&unk_1402827C0, 8);
  v8[2] = v2 / 5;
  v8[5] = v2 % 5;
  for ( i = 0; i < 2; ++i )
  {
    v8[3 * i] = sub_14019AFE0(a1, (__int64)&unk_14028215C, 8);
    v8[3 * i + 1] = sub_14019AFE0(a1, (__int64)&unk_1402823A4, 8);
  }
  for ( i = 0; i < 2; ++i )
  {
    v8[3 * i] += 3 * v8[3 * i + 2];
    v6 = word_1402827A0[v8[3 * i]];
    v7 = (6554LL * (word_1402827A0[v8[3 * i] + 1] - v6)) >> 16;
    a2[i] = (__int16)(2 * v8[3 * i + 1] + 1) * (__int16)v7 + v6;
  }
  *a2 -= a2[1];
  return sub_1401F8B20((unsigned __int64)&v4 ^ v9);
}

// 1402827A0: using guessed type __int16 word_1402827A0[16];

//----- (00000001401C0D30) ----------------------------------------------------
__int64            sub_1401C0D30(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = sub_14019AFE0(a1, (__int64)&unk_140282764, 8);
  *a2 = result;
  return result;
}


//----- (00000001401C0D70) ----------------------------------------------------
__int64            sub_1401C0D70(_DWORD *a1, __int64 a2, int a3, __int16 a4, __int16 a5, __int64 a6)
{
  __int64 result; // rax
  _BYTE v7[4]; // [rsp+20h] [rbp-38h] BYREF
  int i; // [rsp+24h] [rbp-34h]
  int j; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]
  int v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  char *v14; // [rsp+48h] [rbp-10h]
  int v16; // [rsp+70h] [rbp+18h]

  v13 = 1;
  v7[1] = 0;
  v12 = a2;
  v14 = (char *)&unk_140282738 + 7 * (__int16)(a5 + 2 * a4);
  v16 = (a3 + 8) >> 4;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)v16;
    if ( i >= v16 )
      break;
    v10 = *(_DWORD *)(a6 + 4LL * i);
    if ( v10 > 0 )
    {
      if ( (v10 & 0x1Fu) >= 6 )
        v11 = 6;
      else
        v11 = v10 & 0x1F;
      v7[0] = v14[v11];
      for ( j = 0; j < 16; ++j )
      {
        if ( *(_BYTE *)(v12 + j) )
          sub_14019A4F0(a1, (*(char *)(v12 + j) >> 15) + 1, (__int64)v7, 8);
      }
    }
    v12 += 16;
  }
  return result;
}


//----- (00000001401C0EF0) ----------------------------------------------------
__int64            sub_1401C0EF0(_DWORD *a1, __int64 a2, int a3, __int16 a4, __int16 a5, __int64 a6)
{
  __int64 result; // rax
  __int16 v7; // ax
  int i; // [rsp+20h] [rbp-48h]
  int j; // [rsp+24h] [rbp-44h]
  _BYTE v10[4]; // [rsp+28h] [rbp-40h] BYREF
  int v11; // [rsp+2Ch] [rbp-3Ch]
  int v12; // [rsp+30h] [rbp-38h]
  __int64 v13; // [rsp+38h] [rbp-30h]
  __int64 v14; // [rsp+40h] [rbp-28h]
  char *v15; // [rsp+48h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-18h]
  int v18; // [rsp+80h] [rbp+18h]

  v14 = 1;
  v10[1] = 0;
  v13 = a2;
  v15 = (char *)&unk_140282738 + 7 * (__int16)(a5 + 2 * a4);
  v18 = (a3 + 8) >> 4;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)v18;
    if ( i >= v18 )
      break;
    v11 = *(_DWORD *)(a6 + 4LL * i);
    if ( v11 > 0 )
    {
      if ( (v11 & 0x1Fu) >= 6 )
        v12 = 6;
      else
        v12 = v11 & 0x1F;
      v10[0] = v15[v12];
      for ( j = 0; j < 16; ++j )
      {
        if ( *(__int16 *)(v13 + 2LL * j) > 0 )
        {
          v16 = j;
          v7 = sub_14019AFE0(a1, (__int64)v10, 8);
          *(_WORD *)(v13 + 2LL * j) = (2 * v7 - 1) * *(_WORD *)(v13 + 2 * v16);
        }
      }
    }
    v13 += 32;
  }
  return result;
}


//----- (00000001401C1090) ----------------------------------------------------
__int64            sub_1401C1090(int *a1)
{
  if ( a1[2] != 8000
    && a1[2] != 12000
    && a1[2] != 16000
    && a1[2] != 24000
    && a1[2] != 32000
    && a1[2] != 44100
    && a1[2] != 48000
    || a1[5] != 8000 && a1[5] != 12000 && a1[5] != 16000
    || a1[3] != 8000 && a1[3] != 12000 && a1[3] != 16000
    || a1[4] != 8000 && a1[4] != 12000 && a1[4] != 16000
    || a1[4] > a1[5]
    || a1[3] < a1[5]
    || a1[4] > a1[3] )
  {
    return 4294967194LL;
  }
  if ( a1[6] != 10 && a1[6] != 20 && a1[6] != 40 && a1[6] != 60 )
    return 4294967193LL;
  if ( (unsigned int)a1[8] > 0x64 )
    return 4294967191LL;
  if ( (unsigned int)a1[12] >= 2 )
    return 4294967188LL;
  if ( (unsigned int)a1[13] >= 2 )
    return 4294967187LL;
  if ( (unsigned int)a1[10] >= 2 )
    return 4294967189LL;
  if ( *a1 < 1 || *a1 > 2 )
    return 4294967185LL;
  if ( a1[1] < 1 || a1[1] > 2 )
    return 4294967185LL;
  if ( a1[1] > *a1 )
    return 4294967185LL;
  if ( (unsigned int)a1[9] <= 0xA )
    return 0;
  return 4294967190LL;
}


//----- (00000001401C12F0) ----------------------------------------------------
__int64            sub_1401C12F0(int *a1, _DWORD *a2)
{
  int v3; // [rsp+20h] [rbp-28h]
  int v4; // [rsp+24h] [rbp-24h]
  unsigned int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]
  int v10; // [rsp+3Ch] [rbp-Ch]

  v4 = a1[1144];
  if ( !v4 )
    v4 = a1[8];
  v5 = v4;
  v3 = 1000 * (__int16)v4;
  if ( v3 )
  {
    if ( v3 <= a1[1139] && v3 <= a1[1141] && v3 >= a1[1142] )
    {
      if ( a1[6] >= 256 )
        a1[7] = 0;
      if ( a1[1134] || a2[16] )
      {
        if ( 1000 * (__int16)v4 <= a1[1143] )
        {
          if ( 1000 * (__int16)v4 >= a1[1143] )
          {
            if ( a1[7] < 0 )
              a1[7] = 1;
          }
          else if ( a2[16] )
          {
            if ( v4 == 8 )
              v10 = 12;
            else
              v10 = 16;
            v5 = v10;
            a1[6] = 0;
            sub_1401FCD30((void *)(uintptr_t)((_WORD *)a1 + 8), 0, 8u);
            a1[7] = 1;
          }
          else if ( a1[7] )
          {
            a1[7] = 1;
          }
          else
          {
            a2[22] = 1;
            a2[14] -= 5 * a2[14] / (a2[6] + 5);
          }
        }
        else
        {
          if ( !a1[7] )
          {
            a1[6] = 256;
            sub_1401FCD30((void *)(uintptr_t)((_WORD *)a1 + 8), 0, 8u);
          }
          if ( a2[16] )
          {
            a1[7] = 0;
            if ( v4 == 16 )
              return 12;
            else
              return 8;
          }
          else if ( a1[6] > 0 )
          {
            a1[7] = -2;
          }
          else
          {
            a2[22] = 1;
            a2[14] -= 5 * a2[14] / (a2[6] + 5);
          }
        }
      }
    }
    else
    {
      if ( a1[1139] >= a1[1141] )
        v7 = a1[1141];
      else
        v7 = a1[1139];
      if ( v7 <= a1[1142] )
        v8 = a1[1142];
      else
        v8 = v7;
      return (unsigned int)(v8 / 1000);
    }
  }
  else
  {
    if ( a1[1143] >= a1[1139] )
      v6 = a1[1139];
    else
      v6 = a1[1143];
    return (unsigned int)(v6 / 1000);
  }
  return v5;
}


//----- (00000001401C1660) ----------------------------------------------------
__int64            sub_1401C1660(_DWORD *a1, int a2)
{
  int v3; // [rsp+4h] [rbp-24h]
  int v4; // [rsp+8h] [rbp-20h]
  unsigned __int8 *v5; // [rsp+10h] [rbp-18h]
  int v6; // [rsp+38h] [rbp+10h]

  v6 = a2;
  a1[1152] = a2;
  if ( a1[1145] == 2 )
    v6 = a2 - (a1[1144] / 16 + 2000);
  if ( a1[1144] == 8 )
  {
    v3 = 107;
    v5 = (unsigned __int8 *)&unk_14027E0C0;
  }
  else if ( a1[1144] == 12 )
  {
    v3 = 155;
    v5 = (unsigned __int8 *)&unk_14027E130;
  }
  else
  {
    v3 = 191;
    v5 = (unsigned __int8 *)&unk_14027E1D0;
  }
  if ( (v6 + 200) / 400 - 10 >= v3 - 1 )
    v4 = v3 - 1;
  else
    v4 = (v6 + 200) / 400 - 10;
  if ( v4 > 0 )
    a1[1183] = 21 * v5[v4];
  else
    a1[1183] = 0;
  return 0;
}


//----- (00000001401C1790) ----------------------------------------------------
__int64            sub_1401C1790(_DWORD *a1, int a2, __int16 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rcx
  void *v6; // rsp
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int i; // [rsp+30h] [rbp+0h] BYREF
  int j; // [rsp+34h] [rbp+4h]
  int v18; // [rsp+38h] [rbp+8h]
  int v19; // [rsp+3Ch] [rbp+Ch]
  int v20; // [rsp+40h] [rbp+10h]
  int k; // [rsp+44h] [rbp+14h]
  int *v22; // [rsp+48h] [rbp+18h]
  int v23; // [rsp+50h] [rbp+20h]
  int v24; // [rsp+54h] [rbp+24h]
  int *v25; // [rsp+58h] [rbp+28h]
  int *p_i; // [rsp+60h] [rbp+30h]
  int v27; // [rsp+68h] [rbp+38h]
  int v28; // [rsp+6Ch] [rbp+3Ch]
  int v29; // [rsp+70h] [rbp+40h]
  int v30; // [rsp+74h] [rbp+44h]
  int v31; // [rsp+78h] [rbp+48h]
  int v32; // [rsp+7Ch] [rbp+4Ch]
  int v33; // [rsp+80h] [rbp+50h]
  int *v34; // [rsp+88h] [rbp+58h]
  int v35; // [rsp+90h] [rbp+60h]
  __int64 v36; // [rsp+98h] [rbp+68h]
  char *v37; // [rsp+A0h] [rbp+70h]
  __int64 v38; // [rsp+A8h] [rbp+78h]
  _WORD v39[16]; // [rsp+B0h] [rbp+80h] BYREF
  __int64 v40; // [rsp+D0h] [rbp+A0h]

  v23 = 0;
  sub_1401FCD30((void *)(uintptr_t)(v39), 0, 0x20u);
  v18 = a5 >> 4;
  if ( 16 * (a5 >> 4) < a5 )
  {
    ++v18;
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a5 + a4)), 0, 0x10u);
  }
  v5 = 64LL * v18 + 15;
  if ( v5 <= 64LL * v18 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = alloca(v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v25 = &i;
  for ( i = 0; i < 16 * v18; i += 4 )
  {
    if ( *(char *)(a4 + i) <= 0 )
      v27 = -*(char *)(a4 + i);
    else
      v27 = *(char *)(a4 + i);
    v25[i] = v27;
    if ( *(char *)(a4 + i + 1) <= 0 )
      v28 = -*(char *)(a4 + i + 1);
    else
      v28 = *(char *)(a4 + i + 1);
    v25[i + 1] = v28;
    if ( *(char *)(a4 + i + 2) <= 0 )
      v29 = -*(char *)(a4 + i + 2);
    else
      v29 = *(char *)(a4 + i + 2);
    v25[i + 2] = v29;
    if ( *(char *)(a4 + i + 3) <= 0 )
      v30 = -*(char *)(a4 + i + 3);
    else
      v30 = *(char *)(a4 + i + 3);
    v25[i + 3] = v30;
  }
  v7 = 4LL * v18 + 15;
  if ( v7 <= 4LL * v18 )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = &i;
  v9 = 4LL * v18 + 15;
  if ( v9 <= 4LL * v18 )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  v22 = &i;
  v34 = v25;
  for ( i = 0; i < v18; ++i )
  {
    v22[i] = 0;
    while ( 1 )
    {
      v19 = sub_1401D6B20((__int64)v39, (__int64)v34, unk_1402820FC, 8);
      v11 = sub_1401D6B20((__int64)v39, (__int64)v39, unk_1402820FD, 4);
      v19 += v11;
      v12 = sub_1401D6B20((__int64)v39, (__int64)v39, unk_1402820FE, 2);
      v19 += v12;
      v13 = sub_1401D6B20((__int64)&p_i[i], (__int64)v39, unk_1402820FF, 1);
      v19 += v13;
      if ( !v19 )
        break;
      ++v22[i];
      for ( j = 0; j < 16; ++j )
        v34[j] >>= 1;
    }
    v34 += 16;
  }
  v31 = 0x7FFFFFFF;
  for ( j = 0; j < 9; ++j )
  {
    v37 = (char *)&unk_1402823B0 + 18 * j;
    v20 = byte_140282470[9 * (a2 >> 1) + j];
    for ( i = 0; i < v18; ++i )
    {
      if ( v22[i] <= 0 )
        v14 = (unsigned __int8)v37[p_i[i]];
      else
        v14 = (unsigned __int8)v37[17];
      v20 += v14;
    }
    if ( v20 < v31 )
    {
      v31 = v20;
      v23 = j;
    }
  }
  sub_14019A4F0(a1, v23, (__int64)&unk_140282458 + 9 * (a2 >> 1), 8);
  v38 = (__int64)&unk_1402822F0 + 18 * v23;
  for ( i = 0; i < v18; ++i )
  {
    if ( v22[i] )
    {
      sub_14019A4F0(a1, 17, v38, 8);
      for ( j = 0; j < v22[i] - 1; ++j )
        sub_14019A4F0(a1, 17, (__int64)&unk_140282392, 8);
      sub_14019A4F0(a1, p_i[i], (__int64)&unk_140282392, 8);
    }
    else
    {
      sub_14019A4F0(a1, p_i[i], v38, 8);
    }
  }
  for ( i = 0; i < v18; ++i )
  {
    if ( p_i[i] > 0 )
      sub_1401C1FB0(a1, (unsigned int *)&v25[16 * i]);
  }
  for ( i = 0; i < v18; ++i )
  {
    if ( v22[i] > 0 )
    {
      v36 = 16 * i + a4;
      v35 = v22[i] - 1;
      for ( j = 0; j < 16; ++j )
      {
        if ( *(char *)(v36 + j) <= 0 )
          v32 = -*(char *)(v36 + j);
        else
          v32 = *(char *)(v36 + j);
        v33 = (char)v32;
        for ( k = v35; k > 0; --k )
        {
          v24 = (v33 >> k) & 1;
          sub_14019A4F0(a1, v24, (__int64)&unk_14028213C, 8);
        }
        v24 = v33 & 1;
        sub_14019A4F0(a1, v24, (__int64)&unk_14028213C, 8);
      }
    }
  }
  sub_1401C0D70(a1, a4, a5, a2, a3, (__int64)p_i);
  return sub_1401F8B20((unsigned __int64)&i ^ v40);
}

// 140282470: using guessed type unsigned __int8 byte_140282470[24];

//----- (00000001401C1FB0) ----------------------------------------------------
__int64            sub_1401C1FB0(_DWORD *a1, unsigned int *a2)
{
  __int64 v3; // [rsp+0h] [rbp-78h] BYREF
  int v4[2]; // [rsp+20h] [rbp-58h] BYREF
  int v5; // [rsp+28h] [rbp-50h] BYREF
  int v6[2]; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+38h] [rbp-40h]
  int v8; // [rsp+3Ch] [rbp-3Ch]
  int v9[2]; // [rsp+40h] [rbp-38h] BYREF
  int v10; // [rsp+48h] [rbp-30h]
  int v11; // [rsp+4Ch] [rbp-2Ch]
  int v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+54h] [rbp-24h]
  int v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+5Ch] [rbp-1Ch]
  __int64 v16; // [rsp+60h] [rbp-18h]

  sub_1401DB040((__int64)v9, (__int64)a2, 8u);
  sub_1401DB040((__int64)v6, (__int64)v9, 4u);
  sub_1401DB040((__int64)v4, (__int64)v6, 2u);
  sub_1401DB040((__int64)&v5, (__int64)v4, 1u);
  sub_1401DB0B0(a1, v4[0], v5, (__int64)&unk_1402826A0);
  sub_1401DB0B0(a1, v6[0], v4[0], (__int64)&unk_1402825F0);
  sub_1401DB0B0(a1, v9[0], v6[0], (__int64)&unk_140282540);
  sub_1401DB0B0(a1, *a2, v9[0], (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, a2[2], v9[1], (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, v10, v6[1], (__int64)&unk_140282540);
  sub_1401DB0B0(a1, a2[4], v10, (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, a2[6], v11, (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, v7, v4[1], (__int64)&unk_1402825F0);
  sub_1401DB0B0(a1, v12, v7, (__int64)&unk_140282540);
  sub_1401DB0B0(a1, a2[8], v12, (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, a2[10], v13, (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, v14, v8, (__int64)&unk_140282540);
  sub_1401DB0B0(a1, a2[12], v14, (__int64)&unk_1402824A0);
  sub_1401DB0B0(a1, a2[14], v15, (__int64)&unk_1402824A0);
  return sub_1401F8B20((unsigned __int64)&v3 ^ v16);
}


//----- (00000001401C2340) ----------------------------------------------------
__int64            sub_1401C2340(__int16 *a1, _DWORD *a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-D8h] BYREF
  __int16 v5; // [rsp+30h] [rbp-A8h] BYREF
  __int16 v6; // [rsp+32h] [rbp-A6h] BYREF
  __int16 *v7; // [rsp+38h] [rbp-A0h]
  __int16 *v8; // [rsp+40h] [rbp-98h]
  __int16 *v9; // [rsp+48h] [rbp-90h]
  __int16 *v10; // [rsp+50h] [rbp-88h]
  __int16 *v11; // [rsp+58h] [rbp-80h]
  __int16 *v12; // [rsp+60h] [rbp-78h]
  __int16 *v13; // [rsp+68h] [rbp-70h]
  __int16 *v14; // [rsp+70h] [rbp-68h]
  __int16 *v15; // [rsp+78h] [rbp-60h]
  __int16 *v16; // [rsp+80h] [rbp-58h]
  __int16 *v17; // [rsp+88h] [rbp-50h]
  __int16 *v18; // [rsp+90h] [rbp-48h]
  __int16 *v19; // [rsp+98h] [rbp-40h]
  __int16 *v20; // [rsp+A0h] [rbp-38h]
  __int16 v21; // [rsp+A8h] [rbp-30h] BYREF
  __int16 v22; // [rsp+AAh] [rbp-2Eh] BYREF
  __int16 v23; // [rsp+ACh] [rbp-2Ch] BYREF
  __int16 v24; // [rsp+AEh] [rbp-2Ah] BYREF
  __int16 v25; // [rsp+B0h] [rbp-28h] BYREF
  __int16 v26; // [rsp+B2h] [rbp-26h] BYREF
  __int16 v27; // [rsp+B4h] [rbp-24h] BYREF
  __int16 v28; // [rsp+B6h] [rbp-22h] BYREF
  __int16 v29; // [rsp+B8h] [rbp-20h] BYREF
  __int16 v30; // [rsp+BAh] [rbp-1Eh] BYREF
  __int16 v31; // [rsp+BCh] [rbp-1Ch] BYREF
  __int16 v32; // [rsp+BEh] [rbp-1Ah] BYREF
  __int64 v33; // [rsp+C0h] [rbp-18h]

  sub_1401DB110(&v5, &v6, a2, a3, (__int64)&unk_1402826A0);
  v7 = &v21;
  sub_1401DB110(&v21, &v22, a2, v5, (__int64)&unk_1402825F0);
  v8 = &v25;
  sub_1401DB110(&v25, &v26, a2, v21, (__int64)&unk_140282540);
  v9 = a1;
  sub_1401DB110(a1, a1 + 1, a2, v25, (__int64)&unk_1402824A0);
  v10 = a1 + 2;
  sub_1401DB110(a1 + 2, a1 + 3, a2, v26, (__int64)&unk_1402824A0);
  v11 = &v27;
  sub_1401DB110(&v27, &v28, a2, v22, (__int64)&unk_140282540);
  v12 = a1 + 4;
  sub_1401DB110(a1 + 4, a1 + 5, a2, v27, (__int64)&unk_1402824A0);
  v13 = a1 + 6;
  sub_1401DB110(a1 + 6, a1 + 7, a2, v28, (__int64)&unk_1402824A0);
  v14 = &v23;
  sub_1401DB110(&v23, &v24, a2, v6, (__int64)&unk_1402825F0);
  v15 = &v29;
  sub_1401DB110(&v29, &v30, a2, v23, (__int64)&unk_140282540);
  v16 = a1 + 8;
  sub_1401DB110(a1 + 8, a1 + 9, a2, v29, (__int64)&unk_1402824A0);
  v17 = a1 + 10;
  sub_1401DB110(a1 + 10, a1 + 11, a2, v30, (__int64)&unk_1402824A0);
  v18 = &v31;
  sub_1401DB110(&v31, &v32, a2, v24, (__int64)&unk_140282540);
  v19 = a1 + 12;
  sub_1401DB110(a1 + 12, a1 + 13, a2, v31, (__int64)&unk_1402824A0);
  v20 = a1 + 14;
  sub_1401DB110(a1 + 14, a1 + 15, a2, v32, (__int64)&unk_1402824A0);
  return sub_1401F8B20((unsigned __int64)&v4 ^ v33);
}


//----- (00000001401C2970) ----------------------------------------------------
__int64            sub_1401C2970(char *a1, __int64 a2, char *a3, int a4, unsigned int a5)
{
  __int64 result; // rax
  int v6; // eax
  signed int i; // [rsp+20h] [rbp-38h]
  int v8; // [rsp+24h] [rbp-34h]
  char v9; // [rsp+28h] [rbp-30h]
  char v10; // [rsp+2Ch] [rbp-2Ch]
  char v11; // [rsp+30h] [rbp-28h]
  char v12; // [rsp+34h] [rbp-24h]
  char v13; // [rsp+38h] [rbp-20h]
  char v14; // [rsp+3Ch] [rbp-1Ch]
  char v15; // [rsp+40h] [rbp-18h]
  char v16; // [rsp+44h] [rbp-14h]
  char v17; // [rsp+48h] [rbp-10h]

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    a1[i] = (unsigned int)(2251 * (__int16)(sub_1401BC2A0(*(_DWORD *)(a2 + 4LL * i)) - 2090)) >> 16;
    if ( a1[i] < *a3 )
      ++a1[i];
    if ( a1[i] <= 63 )
    {
      if ( a1[i] >= 0 )
        v9 = a1[i];
      else
        v9 = 0;
      v10 = v9;
    }
    else
    {
      v10 = 63;
    }
    a1[i] = v10;
    if ( i || a4 )
    {
      a1[i] -= *a3;
      v8 = *a3 + 8;
      if ( a1[i] > v8 )
        a1[i] = ((a1[i] - v8 + 1) >> 1) + v8;
      if ( a1[i] <= 36 )
      {
        if ( a1[i] >= -4 )
          v16 = a1[i];
        else
          v16 = -4;
        v17 = v16;
      }
      else
      {
        v17 = 36;
      }
      a1[i] = v17;
      if ( a1[i] <= v8 )
      {
        *a3 += a1[i];
      }
      else
      {
        *a3 += 2 * a1[i] - v8;
        *a3 = sub_1401BE320(*a3, 0x3Fu);
      }
      a1[i] += 4;
    }
    else
    {
      if ( *a3 - 4 <= 63 )
      {
        if ( *a1 <= 63 )
        {
          if ( *a1 >= *a3 - 4 )
            v13 = *a1;
          else
            v13 = *a3 - 4;
          v14 = v13;
        }
        else
        {
          v14 = 63;
        }
        v15 = v14;
      }
      else
      {
        if ( *a1 <= *a3 - 4 )
        {
          if ( *a1 >= 63 )
            v11 = *a1;
          else
            v11 = 63;
          v12 = v11;
        }
        else
        {
          v12 = *a3 - 4;
        }
        v15 = v12;
      }
      *a1 = v15;
      *a3 = *a1;
    }
    v6 = sub_1401BE360((unsigned int)((1907825LL * *a3) >> 16) + 2090, 0xF7Fu);
    *(_DWORD *)(a2 + 4LL * i) = sub_1401BC3D0(v6);
  }
  return result;
}


//----- (00000001401C2D70) ----------------------------------------------------
__int64            sub_1401C2D70(__int64 a1, char *a2, char *a3, int a4, unsigned int a5)
{
  __int64 result; // rax
  char v6; // al
  int v7; // eax
  signed int i; // [rsp+20h] [rbp-28h]
  int v9; // [rsp+24h] [rbp-24h]
  int v10; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+2Ch] [rbp-1Ch]
  char v12; // [rsp+30h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    if ( i || a4 )
    {
      v9 = a2[i] - 4;
      v10 = *a3 + 8;
      if ( v9 <= v10 )
        v6 = v9 + *a3;
      else
        v6 = 2 * v9 - v10 + *a3;
      *a3 = v6;
    }
    else
    {
      *a3 = sub_1401BE3A0(*a2, *a3 - 16);
    }
    if ( *a3 <= 63 )
    {
      if ( *a3 >= 0 )
        v11 = *a3;
      else
        v11 = 0;
      v12 = v11;
    }
    else
    {
      v12 = 63;
    }
    *a3 = v12;
    v7 = sub_1401BE360((unsigned int)((1907825LL * *a3) >> 16) + 2090, 0xF7Fu);
    *(_DWORD *)(a1 + 4LL * i) = sub_1401BC3D0(v7);
  }
  return result;
}


//----- (00000001401C2EE0) ----------------------------------------------------
__int64            sub_1401C2EE0(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-18h]
  unsigned int v4; // [rsp+4h] [rbp-14h]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 = (v4 << 8) + *(char *)(a1 + i);
  return v4;
}


//----- (00000001401C2F40) ----------------------------------------------------
__int64            sub_1401C2F40(__int64 a1, __int64 a2, __int64 a3, __int16 a4, unsigned int a5)
{
  __int64 result; // rax
  signed int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    *(_WORD *)(a1 + 2LL * i) = ((a4 * (__int16)(*(_WORD *)(a3 + 2LL * i) - *(_WORD *)(a2 + 2LL * i))) >> 2)
                             + *(_WORD *)(a2 + 2LL * i);
  }
  return result;
}


//----- (00000001401C2FD0) ----------------------------------------------------
__int64            sub_1401C2FD0(
        __int64 a1,
        __m128i *a2,
        _BYTE *a3,
        int *a4,
        _DWORD *a5,
        __int64 a6,
        _DWORD *a7,
        __int16 a8,
        int a9)
{
  __int64 result; // rax
  int i; // [rsp+60h] [rbp-78h]
  int m; // [rsp+60h] [rbp-78h]
  int j; // [rsp+64h] [rbp-74h]
  int k; // [rsp+64h] [rbp-74h]
  int v14; // [rsp+68h] [rbp-70h]
  unsigned int v15; // [rsp+68h] [rbp-70h]
  int v16; // [rsp+6Ch] [rbp-6Ch]
  int v17; // [rsp+70h] [rbp-68h]
  int v18; // [rsp+78h] [rbp-60h] BYREF
  int v19; // [rsp+7Ch] [rbp-5Ch]
  int v20; // [rsp+80h] [rbp-58h] BYREF
  int v21; // [rsp+84h] [rbp-54h]
  int v22; // [rsp+88h] [rbp-50h] BYREF
  int v23; // [rsp+8Ch] [rbp-4Ch]
  int v24; // [rsp+90h] [rbp-48h]
  int v25; // [rsp+94h] [rbp-44h]
  int v26; // [rsp+98h] [rbp-40h]
  int v27; // [rsp+9Ch] [rbp-3Ch]
  __m128i Src; // [rsp+A0h] [rbp-38h] BYREF
  _DWORD *v29; // [rsp+B0h] [rbp-28h]
  char *v30; // [rsp+B8h] [rbp-20h]
  __int64 v31; // [rsp+C0h] [rbp-18h]
  __int64 v32; // [rsp+C8h] [rbp-10h]

  v24 = 0x7FFFFFFF;
  v25 = 0;
  for ( i = 0; i < 3; ++i )
  {
    v31 = (__int64)*(&off_140282688 + i);
    v30 = (char *)*(&off_140282768 + i);
    v32 = (__int64)*(&off_140282780 + i);
    v26 = byte_1402822CC[i];
    SR_VEC_LANES(128, Src, i64)[1] = a6;
    v29 = a7;
    v14 = 0;
    v16 = 0;
    v17 = *a4;
    for ( j = 0; j < a9; ++j )
    {
      v27 = sub_1401BC3D0(5333 - v17 + 896) - 51;
      sub_1401C3400(&SR_VEC_LANES(128, Src, i8)[j], &v18, &v20, &v22, (_DWORD *)SR_VEC_LANES(128, Src, i64)[1], v29, v30, v32, v31, a8, v27, v26);
      if ( v18 + v14 >= 0 )
        v19 = v18 + v14;
      else
        v19 = 0x7FFFFFFF;
      v14 = v19;
      if ( v20 + v16 >= 0 )
        v21 = v20 + v16;
      else
        v21 = 0x7FFFFFFF;
      v16 = v21;
      if ( (int)(v17 + sub_1401BC2A0(v22 + 51) - 896) >= 0 )
        v23 = v17 + sub_1401BC2A0(v22 + 51) - 896;
      else
        v23 = 0;
      v17 = v23;
      SR_VEC_LANES(128, Src, i64)[1] += 100;
      v29 += 5;
    }
    if ( v16 <= v24 )
    {
      v24 = v16;
      *a3 = i;
      sub_1401FC920(a2, &Src, a9);
      v25 = v17;
    }
  }
  v30 = (char *)*(&off_140282768 + (char)*a3);
  for ( k = 0; k < a9; ++k )
  {
    for ( m = 0; m < 5; ++m )
      *(_WORD *)(a1 + 2LL * (m + 5 * k)) = v30[5 * SR_VEC_PTR_LANES(128, a2, i8)[k] + m] << 7;
  }
  if ( a9 == 2 )
    v15 = v14 >> 1;
  else
    v15 = v14 >> 2;
  *a4 = v25;
  result = (unsigned int)(-3 * (__int16)(sub_1401BC2A0(v15) - 1920));
  *a5 = result;
  return result;
}

// 1401C33AC: variable 'v14' is possibly undefined
// 140282688: using guessed type _UNKNOWN *off_140282688;
// 140282768: using guessed type _UNKNOWN *off_140282768;
// 140282780: using guessed type _UNKNOWN *off_140282780;

//----- (00000001401C3400) ----------------------------------------------------
__int64            sub_1401C3400(
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
  return sub_1401F8B20((unsigned __int64)&v13 ^ v29);
}


//----- (00000001401C3AC0) ----------------------------------------------------
__int64            sub_1401C3AC0(
        _DWORD *a1,
        __m128i *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        __int16 a15)
{
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  unsigned __int64 v19; // rcx
  void *v20; // rsp
  int v21; // eax
  int v22; // ecx
  unsigned __int64 v23; // rax
       __m128i *v24; // rcx
  unsigned __int64 v25; // rax
       __m128i *v26; // rcx
  int i; // [rsp+A0h] [rbp+0h] BYREF
  BOOL v29; // [rsp+A4h] [rbp+4h]
  int v30; // [rsp+A8h] [rbp+8h]
  int v31; // [rsp+ACh] [rbp+Ch]
  int v32; // [rsp+B0h] [rbp+10h]
  int v33; // [rsp+B4h] [rbp+14h]
  int v34; // [rsp+B8h] [rbp+18h]
  __int64 v35; // [rsp+C0h] [rbp+20h]
  int *v36; // [rsp+C8h] [rbp+28h]
  __int16 *v37; // [rsp+D0h] [rbp+30h]
  int *v38; // [rsp+D8h] [rbp+38h]
  int *v39; // [rsp+E0h] [rbp+40h]
  _WORD *v40; // [rsp+E8h] [rbp+48h]
  __int16 *v41; // [rsp+F0h] [rbp+50h]
  __int16 *v42; // [rsp+F8h] [rbp+58h]
  void *v43; // [rsp+100h] [rbp+60h]
  void *v44; // [rsp+108h] [rbp+68h]
  __int64 v45; // [rsp+110h] [rbp+70h]

  SR_VEC_LANES(128, a2[271], i32)[1] = a3[34];
  v32 = SR_VEC_LANES(128, a2[270], i32)[2];
  v33 = word_1402827F8[2 * (a3[29] >> 1) + a3[30]];
  v29 = a3[31] != 4;
  v15 = 4LL * (a1[1146] + a1[1148]) + 15;
  if ( v15 <= 4LL * (a1[1146] + a1[1148]) )
    v15 = 0xFFFFFFFFFFFFFF0LL;
  v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
  v38 = &i;
  v17 = 2LL * (a1[1146] + a1[1148]) + 15;
  if ( v17 <= 2LL * (a1[1146] + a1[1148]) )
    v17 = 0xFFFFFFFFFFFFFF0LL;
  v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
  v36 = &i;
  v19 = 4LL * (int)a1[1147] + 15;
  if ( v19 <= 4LL * (int)a1[1147] )
    v19 = 0xFFFFFFFFFFFFFF0LL;
  v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
  v39 = &i;
  SR_VEC_LANES(128, a2[271], i32)[0] = a1[1148];
  SR_VEC_LANES(128, a2[270], i32)[3] = a1[1148];
  v35 = (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 2 * a1[1148];
  for ( i = 0; i < a1[1145]; ++i )
  {
    v37 = (__int16 *)(a6 + 32LL * ((1 - v29) | (i >> 1)));
    v42 = (__int16 *)(a7 + 10LL * i);
    v41 = (__int16 *)(a8 + 48LL * i);
    v31 = *(int *)(a9 + 4LL * i) >> 2;
    v31 |= *(int *)(a9 + 4LL * i) >> 1 << 16;
    SR_VEC_LANES(128, a2[271], i32)[3] = 0;
    if ( a3[29] == 2 )
    {
      v32 = *(_DWORD *)(a13 + 4LL * i);
      if ( ((3 - 2 * v29) & i) == 0 )
      {
        v30 = a1[1148] - v32 - a1[1160] - 2;
        v21 = a1[1148] - v30;
        v22 = a1[1147] * i;
        v40 = (_WORD *)v36 + v30;
        sub_1401BBB40(v40, (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 2 * v22 + 2 * v30, v37, v21, a1[1160]);
        SR_VEC_LANES(128, a2[271], i32)[3] = 1;
        SR_VEC_LANES(128, a2[270], i32)[3] = a1[1148];
      }
    }
    sub_1401D7560((__int64)a1, a2, a4, (__int64)v39, (__int64)v36, (__int64)v38, i, a15, a12, a13, a3[29]);
    v34 = a3[29];
    sub_1401D7910(
      a2,
      v34,
      (__int64)v39,
      a5,
      v35,
      (__int64)v38,
      v37,
      v42,
      v41,
      v32,
      v31,
      *(_DWORD *)(a10 + 4LL * i),
      *(_DWORD *)(a11 + 4LL * i),
      *(_DWORD *)(a12 + 4LL * i),
      a14,
      v33,
      a1[1147],
      a1[1159],
      a1[1160]);
    a4 += 2LL * (int)a1[1147];
    a5 += (int)a1[1147];
    v35 += 2LL * (int)a1[1147];
  }
  SR_VEC_LANES(128, a2[270], i32)[2] = *(_DWORD *)(a13 + 4LL * (a1[1145] - 1));
  v23 = 2LL * (int)a1[1148];
  v24 = (__m128i *)((char *)a2 + 2 * a1[1146]);
  v43 = a2;
  sub_1401FC920(a2, v24, v23);
  v25 = 4LL * (int)a1[1148];
  v26 = (__m128i *)((char *)a2 + 4 * a1[1146] + 1280);
  v44 = &a2[80];
  sub_1401FC920(a2 + 80, v26, v25);
  return sub_1401F8B20((unsigned __int64)&i ^ v45);
}

// 1402827F8: using guessed type __int16 word_1402827F8[4];

//----- (00000001401C4120) ----------------------------------------------------
__int64            sub_1401C4120(
        _DWORD *a1,
        __m128i *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _DWORD *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  void *v17; // rsp
  unsigned __int64 v18; // rcx
  void *v19; // rsp
  unsigned __int64 v20; // rcx
  void *v21; // rsp
  unsigned __int64 v22; // rcx
  void *v23; // rsp
  void *v24; // rsp
  int v25; // eax
  int v26; // ecx
  unsigned __int64 v27; // rax
       __m128i *v28; // rcx
  unsigned __int64 v29; // rax
       __m128i *v30; // rcx
  int v32; // [rsp+C0h] [rbp-A0h] BYREF
  int i; // [rsp+160h] [rbp+0h] BYREF
  int j; // [rsp+164h] [rbp+4h]
  int v35; // [rsp+168h] [rbp+8h]
  int v36; // [rsp+16Ch] [rbp+Ch]
  __m128i *v37; // [rsp+170h] [rbp+10h]
  int *v38; // [rsp+178h] [rbp+18h]
  int v39; // [rsp+180h] [rbp+20h]
  int v40; // [rsp+184h] [rbp+24h]
  int v41; // [rsp+188h] [rbp+28h]
  int v42; // [rsp+18Ch] [rbp+2Ch]
  BOOL v43; // [rsp+190h] [rbp+30h]
  int v44; // [rsp+194h] [rbp+34h]
  int v45; // [rsp+198h] [rbp+38h]
  int v46; // [rsp+19Ch] [rbp+3Ch] BYREF
  int v47; // [rsp+1A0h] [rbp+40h]
  int v48; // [rsp+1A4h] [rbp+44h]
  int v49; // [rsp+1A8h] [rbp+48h]
  int v50; // [rsp+1ACh] [rbp+4Ch]
  __int64 v51; // [rsp+1B0h] [rbp+50h]
  __int64 v52; // [rsp+1B8h] [rbp+58h]
  int v53; // [rsp+1C0h] [rbp+60h]
  int v54; // [rsp+1C4h] [rbp+64h]
  int *v55; // [rsp+1C8h] [rbp+68h]
  __int16 *v56; // [rsp+1D0h] [rbp+70h]
  int *p_i; // [rsp+1D8h] [rbp+78h]
  int *v58; // [rsp+1E0h] [rbp+80h]
  _WORD *v59; // [rsp+1E8h] [rbp+88h]
  __int16 *v60; // [rsp+1F0h] [rbp+90h]
  __int16 *v61; // [rsp+1F8h] [rbp+98h]
  int *v62; // [rsp+200h] [rbp+A0h]
  __m128i *v63; // [rsp+208h] [rbp+A8h]
  __m128i *v64; // [rsp+210h] [rbp+B0h]
  __int64 v65; // [rsp+218h] [rbp+B8h]

  v40 = SR_VEC_LANES(128, a2[270], i32)[2];
  v15 = 1300LL * (int)a1[1157];
  v16 = v15 + 15;
  if ( v15 + 15 <= v15 )
    v16 = 0xFFFFFFFFFFFFFF0LL;
  v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0uLL);
  v38 = &i;
  sub_1401FCD30((void *)(uintptr_t)(&i), 0, 1300LL * (int)a1[1157]);
  for ( i = 0; i < a1[1157]; ++i )
  {
    v37 = (__m128i *)&v38[325 * i];
    SR_VEC_LANES(128, v37[80], i32)[2] = (a3[34] + (_BYTE)i) & 3;
    SR_VEC_LANES(128, v37[80], i32)[3] = SR_VEC_LANES(128, v37[80], i32)[2];
    SR_VEC_LANES(128, v37[81], i32)[0] = 0;
    SR_VEC_LANES(128, v37[80], i32)[0] = SR_VEC_LANES(128, a2[270], i32)[0];
    SR_VEC_LANES(128, v37[80], i32)[1] = SR_VEC_LANES(128, a2[270], i32)[1];
    SR_VEC_LANES(128, v37[64], i32)[0] = SR_VEC_LANES(128, a2[79], i32)[a1[1148] + 3];
    sub_1401FC920(v37, a2 + 240, 0x40u);
    sub_1401FC920(v37 + 74, a2 + 264, 0x60u);
  }
  v54 = word_1402827F8[2 * (a3[29] >> 1) + a3[30]];
  v46 = 0;
  v36 = sub_1401BE320(0x28u, a1[1147]);
  if ( a3[29] == 2 )
  {
    for ( i = 0; i < a1[1145]; ++i )
      v36 = sub_1401BE320(v36, *(_DWORD *)(a13 + 4LL * i) - 3);
  }
  else if ( v40 > 0 )
  {
    v36 = sub_1401BE320(v36, v40 - 3);
  }
  v43 = a3[31] != 4;
  v18 = 4LL * (a1[1146] + a1[1148]) + 15;
  if ( v18 <= 4LL * (a1[1146] + a1[1148]) )
    v18 = 0xFFFFFFFFFFFFFF0LL;
  v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
  p_i = &i;
  v20 = 2LL * (a1[1146] + a1[1148]) + 15;
  if ( v20 <= 2LL * (a1[1146] + a1[1148]) )
    v20 = 0xFFFFFFFFFFFFFF0LL;
  v21 = alloca(v20 & 0xFFFFFFFFFFFFFFF0uLL);
  v55 = &i;
  v22 = 4LL * (int)a1[1147] + 15;
  if ( v22 <= 4LL * (int)a1[1147] )
    v22 = 0xFFFFFFFFFFFFFF0LL;
  v23 = alloca(v22 & 0xFFFFFFFFFFFFFFF0uLL);
  v58 = &i;
  v24 = alloca(160);
  v62 = &v32;
  v52 = (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 2 * a1[1148];
  SR_VEC_LANES(128, a2[271], i32)[0] = a1[1148];
  SR_VEC_LANES(128, a2[270], i32)[3] = a1[1148];
  v42 = 0;
  for ( i = 0; i < a1[1145]; ++i )
  {
    v56 = (__int16 *)(a6 + 32LL * ((1 - v43) | (i >> 1)));
    v61 = (__int16 *)(a7 + 10LL * i);
    v60 = (__int16 *)(a8 + 48LL * i);
    v45 = a9[i] >> 2;
    v45 |= a9[i] >> 1 << 16;
    SR_VEC_LANES(128, a2[271], i32)[3] = 0;
    if ( a3[29] == 2 )
    {
      v40 = *(_DWORD *)(a13 + 4LL * i);
      if ( ((3 - 2 * v43) & i) == 0 )
      {
        if ( i == 2 )
        {
          v41 = v38[324];
          v39 = 0;
          for ( j = 1; j < a1[1157]; ++j )
          {
            if ( v38[325 * j + 324] < v41 )
            {
              v41 = v38[325 * j + 324];
              v39 = j;
            }
          }
          for ( j = 0; j < a1[1157]; ++j )
          {
            if ( j != v39 )
              v38[325 * j + 324] += 0x7FFFFFF;
          }
          v37 = (__m128i *)&v38[325 * v39];
          v35 = v36 + v46;
          for ( j = 0; j < v36; ++j )
          {
            v35 = (v35 - 1) % 40;
            v35 += v35 < 0 ? 0x28 : 0;
            *(_BYTE *)(a5 + j - v36) = ((SR_VEC_LANES(128, v37[34], i32)[v35] >> 9) + 1) >> 1;
            if ( (((int)((*(int *)(a12 + 4) * (__int64)SR_VEC_LANES(128, v37[44], i32)[v35]) >> 16) >> 13) + 1) >> 1 <= 0x7FFF )
            {
              if ( (((int)((*(int *)(a12 + 4) * (__int64)SR_VEC_LANES(128, v37[44], i32)[v35]) >> 16) >> 13) + 1) >> 1 >= -32768 )
                v48 = (((int)((*(int *)(a12 + 4) * (__int64)SR_VEC_LANES(128, v37[44], i32)[v35]) >> 16) >> 13) + 1) >> 1;
              else
                v48 = -32768;
              v49 = v48;
            }
            else
            {
              v49 = 0x7FFF;
            }
            *(_WORD *)(v52 + 2LL * (j - v36)) = v49;
            SR_VEC_LANES(128, a2[80], i32)[j + SR_VEC_LANES(128, a2[271], i32)[0] - v36] = SR_VEC_LANES(128, v37[64], i32)[v35];
          }
          v42 = 0;
        }
        v44 = a1[1148] - v40 - a1[1160] - 2;
        v25 = a1[1148] - v44;
        v26 = a1[1147] * i;
        v59 = (_WORD *)v55 + v44;
        sub_1401BBB40(v59, (__int64)SR_VEC_PTR_LANES(128, a2, i64) + 2 * v26 + 2 * v44, v56, v25, a1[1160]);
        SR_VEC_LANES(128, a2[270], i32)[3] = a1[1148];
        SR_VEC_LANES(128, a2[271], i32)[3] = 1;
      }
    }
    sub_1401D82A0(
      (__int64)a1,
      a2,
      (__int64)v38,
      a4,
      (__int64)v58,
      (__int64)v55,
      (__int64)p_i,
      i,
      a1[1157],
      a15,
      a12,
      a13,
      a3[29],
      v36);
    v53 = v42;
    sub_1401D8730(
      (__int64)a2,
      (__int64)v38,
      a3[29],
      (__int64)v58,
      a5,
      v52,
      (__int64)p_i,
      (__int64)v62,
      v56,
      v61,
      v60,
      v40,
      v45,
      a10[i],
      *(_DWORD *)(a11 + 4LL * i),
      *(_DWORD *)(a12 + 4LL * i),
      a14,
      v54,
      a1[1147],
      v42++,
      a1[1159],
      a1[1160],
      a1[1168],
      a1[1157],
      &v46,
      v36);
    a4 += 2LL * (int)a1[1147];
    a5 += (int)a1[1147];
    v52 += 2LL * (int)a1[1147];
  }
  v41 = v38[324];
  v39 = 0;
  for ( i = 1; i < a1[1157]; ++i )
  {
    if ( v38[325 * i + 324] < v41 )
    {
      v41 = v38[325 * i + 324];
      v39 = i;
    }
  }
  v37 = (__m128i *)&v38[325 * v39];
  a3[34] = SR_VEC_LANES(128, v37[80], i8)[12];
  v35 = v36 + v46;
  v47 = *(int *)(a12 + 4LL * (a1[1145] - 1)) >> 6;
  for ( j = 0; j < v36; ++j )
  {
    v35 = (v35 - 1) % 40;
    v35 += v35 < 0 ? 0x28 : 0;
    *(_BYTE *)(a5 + j - v36) = ((SR_VEC_LANES(128, v37[34], i32)[v35] >> 9) + 1) >> 1;
    if ( (((int)((v47 * (__int64)SR_VEC_LANES(128, v37[44], i32)[v35]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((int)((v47 * (__int64)SR_VEC_LANES(128, v37[44], i32)[v35]) >> 16) >> 7) + 1) >> 1 >= -32768 )
        v50 = (((int)((v47 * (__int64)SR_VEC_LANES(128, v37[44], i32)[v35]) >> 16) >> 7) + 1) >> 1;
      else
        v50 = -32768;
      LODWORD(v51) = v50;
    }
    else
    {
      LODWORD(v51) = 0x7FFF;
    }
    *(_WORD *)(v52 + 2LL * (j - v36)) = v51;
    SR_VEC_LANES(128, a2[80], i32)[j + SR_VEC_LANES(128, a2[271], i32)[0] - v36] = SR_VEC_LANES(128, v37[64], i32)[v35];
  }
  sub_1401FC920(a2 + 240, (__m128i *)((char *)v37 + 4 * a1[1147]), 0x40u);
  sub_1401FC920(a2 + 264, v37 + 74, 0x60u);
  SR_VEC_LANES(128, a2[270], i32)[0] = SR_VEC_LANES(128, v37[80], i32)[0];
  SR_VEC_LANES(128, a2[270], i32)[1] = SR_VEC_LANES(128, v37[80], i32)[1];
  SR_VEC_LANES(128, a2[270], i32)[2] = *(_DWORD *)(a13 + 4LL * (a1[1145] - 1));
  v27 = 2LL * (int)a1[1148];
  v28 = (__m128i *)((char *)a2 + 2 * a1[1146]);
  v63 = a2;
  sub_1401FC920(a2, v28, v27);
  v29 = 4LL * (int)a1[1148];
  v30 = (__m128i *)((char *)a2 + 4 * a1[1146] + 1280);
  v64 = a2 + 80;
  sub_1401FC920(a2 + 80, v30, v29);
  return sub_1401F8B20((unsigned __int64)&i ^ v65);
}

// 1402827F8: using guessed type __int16 word_1402827F8[4];

//----- (00000001401C4FB0) ----------------------------------------------------
__int64            sub_1401C4FB0(__int64 a1)
{
  int i; // [rsp+20h] [rbp-28h]
  int j; // [rsp+20h] [rbp-28h]
  int k; // [rsp+20h] [rbp-28h]

  sub_1401FCD30((void *)(uintptr_t)((_WORD *)a1), 0, 0x70u);
  for ( i = 0; i < 4; ++i )
    *(_DWORD *)(a1 + 4LL * i + 92) = sub_1401BE420(50 / (i + 1), 1u);
  for ( j = 0; j < 4; ++j )
  {
    *(_DWORD *)(a1 + 4LL * j + 60) = 100 * *(_DWORD *)(a1 + 4LL * j + 92);
    *(_DWORD *)(a1 + 4LL * j + 76) = 0x7FFFFFFF / *(_DWORD *)(a1 + 4LL * j + 60);
  }
  *(_DWORD *)(a1 + 108) = 15;
  for ( k = 0; k < 4; ++k )
    *(_DWORD *)(a1 + 4LL * k + 40) = 25600;
  return 0;
}


//----- (00000001401C50E0) ----------------------------------------------------
__int64            sub_1401C50E0(_DWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  void *v3; // rsp
  char v4; // al
  int v5; // eax
  int v6; // eax
  int j; // [rsp+30h] [rbp+0h] BYREF
  signed int v9; // [rsp+34h] [rbp+4h]
  int i; // [rsp+38h] [rbp+8h]
  signed int v11; // [rsp+3Ch] [rbp+Ch]
  int *v12; // [rsp+40h] [rbp+10h]
  int v13; // [rsp+48h] [rbp+18h]
  _DWORD *v14; // [rsp+50h] [rbp+20h]
  int v15; // [rsp+58h] [rbp+28h]
  int v16; // [rsp+5Ch] [rbp+2Ch]
  int k; // [rsp+60h] [rbp+30h]
  __int16 v18; // [rsp+64h] [rbp+34h]
  int v19; // [rsp+68h] [rbp+38h]
  int v20; // [rsp+6Ch] [rbp+3Ch]
  int v21; // [rsp+70h] [rbp+40h]
  int v22; // [rsp+74h] [rbp+44h]
  int v23; // [rsp+78h] [rbp+48h]
  int v24; // [rsp+7Ch] [rbp+4Ch]
  int v25; // [rsp+80h] [rbp+50h]
  int v26; // [rsp+84h] [rbp+54h]
  int v27; // [rsp+88h] [rbp+58h]
  int v28; // [rsp+8Ch] [rbp+5Ch]
  int v29; // [rsp+90h] [rbp+60h]
  _DWORD *v30; // [rsp+98h] [rbp+68h]
  _DWORD v31[4]; // [rsp+A0h] [rbp+70h] BYREF
  int v32; // [rsp+B0h] [rbp+80h]
  int v33; // [rsp+B4h] [rbp+84h]
  int v34; // [rsp+B8h] [rbp+88h]
  int v35; // [rsp+BCh] [rbp+8Ch]
  _DWORD v36[4]; // [rsp+C0h] [rbp+90h]
  __int64 v37; // [rsp+D0h] [rbp+A0h]

  v29 = 0;
  v14 = a1 + 9;
  v23 = (int)a1[1146] >> 1;
  v19 = (int)a1[1146] >> 2;
  v13 = (int)a1[1146] >> 3;
  v32 = 0;
  v33 = v19 + v13;
  v34 = v13 + v19 + v13;
  v35 = v19 + v34;
  v2 = 2LL * (v23 + v19 + v34) + 15;
  if ( v2 <= 2LL * (v23 + v19 + v34) )
    v2 = 0xFFFFFFFFFFFFFF0LL;
  v3 = alloca(v2 & 0xFFFFFFFFFFFFFFF0uLL);
  v12 = &j;
  sub_1401BC040(a2, v14, (__int64)&j, (__int64)&j + 2 * v35, a1[1146]);
  sub_1401BC040((__int64)v12, v14 + 2, (__int64)v12, (__int64)v12 + 2 * v34, v23);
  sub_1401BC040((__int64)v12, v14 + 4, (__int64)v12, (__int64)v12 + 2 * v33, v19);
  *((__int16 *)v12 + v13 - 1) >>= 1;
  v18 = *((_WORD *)v12 + v13 - 1);
  for ( i = v13 - 1; i > 0; --i )
  {
    *((__int16 *)v12 + i - 1) >>= 1;
    *((_WORD *)v12 + i) -= *((_WORD *)v12 + i - 1);
  }
  *(_WORD *)v12 -= *((_WORD *)v14 + 28);
  *((_WORD *)v14 + 28) = v18;
  for ( j = 0; j < 4; ++j )
  {
    v4 = sub_1401BE320(4 - j, 3u);
    v30 = a1;
    v13 = (int)a1[1146] >> v4;
    v27 = v13 >> 2;
    v20 = 0;
    v31[j] = v14[j + 6];
    for ( k = 0; k < 4; ++k )
    {
      v11 = 0;
      for ( i = 0; i < v27; ++i )
      {
        v24 = *((__int16 *)v12 + v20 + i + *(&v32 + j)) >> 3;
        v11 += (__int16)v24 * (__int16)v24;
      }
      if ( k >= 3 )
      {
        if ( (v11 >> 1) + v31[j] >= 0 )
          v26 = v31[j] + (v11 >> 1);
        else
          v26 = 0x7FFFFFFF;
        v31[j] = v26;
      }
      else
      {
        if ( v11 + v31[j] >= 0 )
          v25 = v11 + v31[j];
        else
          v25 = 0x7FFFFFFF;
        v31[j] = v25;
      }
      v20 += v27;
    }
    v14[j + 6] = v11;
  }
  sub_1401DB1D0((__int64)v31, (__int64)v14);
  v11 = 0;
  v21 = 0;
  for ( j = 0; j < 4; ++j )
  {
    v9 = v31[j] - v14[j + 15];
    if ( v9 <= 0 )
    {
      v36[j] = 256;
    }
    else
    {
      if ( (v31[j] & 0xFF800000) != 0 )
        v5 = v31[j] / (((int)v14[j + 15] >> 8) + 1);
      else
        v5 = (v31[j] << 8) / (v14[j + 15] + 1);
      v36[j] = v5;
      v6 = sub_1401BC2A0(v36[j]);
      v16 = v6 - 1024;
      v11 += (__int16)(v6 - 1024) * (__int16)(v6 - 1024);
      if ( v9 < 0x100000 )
        v16 = ((__int16)v16 * (__int64)(int)((unsigned int)sub_1401BE4C0(v9) << 6)) >> 16;
      v21 += ((__int16)v16 * (__int64)dword_14027CC18[j]) >> 16;
    }
  }
  v11 /= 4;
  v28 = (__int16)(3 * sub_1401BE4C0(v11));
  v15 = sub_1401BC300((unsigned int)((45000LL * (__int16)v28) >> 16) - 128);
  a1[1182] = 2 * sub_1401BC300(v21) - 0x8000;
  v9 = 0;
  for ( j = 0; j < 4; ++j )
    v9 += ((v31[j] - v14[j + 15]) >> 4) * (j + 1);
  if ( a1[1146] == 20 * a1[1144] )
    v9 >>= 1;
  if ( v9 > 0 )
  {
    if ( v9 < 0x4000 )
    {
      v9 <<= 16;
      v9 = sub_1401BE4C0(v9);
      v15 = ((__int16)v15 * (__int64)(v9 + 0x8000)) >> 16;
    }
  }
  else
  {
    v15 >>= 1;
  }
  a1[1133] = sub_1401BE320(v15 >> 7, 0xFFu);
  v22 = (__int16)((unsigned int)((__int16)v15 * v15) >> 16) >> 4;
  if ( a1[1146] == 10 * a1[1144] )
    v22 >>= 1;
  for ( j = 0; j < 4; ++j )
  {
    v14[j + 10] += ((__int16)v22 * (__int64)(v36[j] - v14[j + 10])) >> 16;
    v16 = 3 * (sub_1401BC2A0(v14[j + 10]) - 1024);
    a1[j + 1178] = sub_1401BC300((v16 - 2048) >> 4);
  }
  return sub_1401F8B20((unsigned __int64)&j ^ v37);
}

// 14027CC18: using guessed type int dword_14027CC18[4];

//----- (00000001401C58E0) ----------------------------------------------------
__int64            sub_1401C58E0(_DWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // [rsp+0h] [rbp-68h] BYREF
  int v5; // [rsp+30h] [rbp-38h]
  int v6; // [rsp+34h] [rbp-34h]
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  int v9; // [rsp+40h] [rbp-28h] BYREF
  int v10[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v11; // [rsp+58h] [rbp-10h]

  v5 = 0;
  v6 = 0;
  if ( a1[3] )
  {
    v5 = (256 - a1[2]) << 10;
    v6 = v5 >> 16;
    v5 -= v5 >> 16 << 16;
    sub_1401D6BB0((__m128i *)v10, (__m128i *)&v9, v6, v5);
    if ( a1[3] + a1[2] <= 256 )
    {
      if ( a1[3] + a1[2] >= 0 )
        v7 = a1[3] + a1[2];
      else
        v7 = 0;
      v8 = v7;
    }
    else
    {
      v8 = 256;
    }
    a1[2] = v8;
    sub_1401BB2C0(a2, v10, &v9, a1, a2, a3);
  }
  return sub_1401F8B20((unsigned __int64)&v4 ^ v11);
}


//----- (00000001401C5A20) ----------------------------------------------------
__int64            sub_1401C5A20(__int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-D8h] BYREF
  int i; // [rsp+40h] [rbp-98h]
  int v8; // [rsp+44h] [rbp-94h]
  __int16 v9; // [rsp+48h] [rbp-90h]
  BOOL v10; // [rsp+4Ch] [rbp-8Ch]
  BOOL v11; // [rsp+50h] [rbp-88h]
  void *v12; // [rsp+58h] [rbp-80h]
  __int16 v13[16]; // [rsp+60h] [rbp-78h] BYREF
  __int16 v14[16]; // [rsp+80h] [rbp-58h] BYREF
  _WORD v15[16]; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v16; // [rsp+C0h] [rbp-18h]

  v8 = ((-268434LL * *(__int16 *)(a1 + 4532)) >> 16) + 3146;
  if ( *(_DWORD *)(a1 + 4580) == 2 )
    v8 += v8 >> 1;
  sub_1401BDFF0(v13, a3, *(_DWORD *)(a1 + 4640));
  v10 = *(_DWORD *)(a1 + 4632) == 1 && *(char *)(a1 + 4783) < 4;
  v11 = v10;
  if ( v10 )
  {
    sub_1401C2F40((__int64)v14, a4, (__int64)a3, *(char *)(a1 + 4783), *(_DWORD *)(a1 + 4640));
    sub_1401BDFF0(v15, v14, *(_DWORD *)(a1 + 4640));
    v9 = (*(char *)(a1 + 4783) * *(char *)(a1 + 4783)) << 11;
    for ( i = 0; i < *(_DWORD *)(a1 + 4640); ++i )
      v13[i] = ((unsigned int)(v9 * (__int16)v15[i]) >> 16) + (v13[i] >> 1);
  }
  sub_1401C5DA0(
    (_BYTE *)(a1 + 4760),
    a3,
    *(__int16 **)(a1 + 4704),
    (__int64)v13,
    v8,
    *(_DWORD *)(a1 + 4660),
    *(char *)(a1 + 4781));
  CWinApp__ShowAppMessageBox((struct CWinApp *)(a2 + 32), (     char *)a3, *(_DWORD *)(a1 + 4640));
  if ( v11 )
  {
    sub_1401C2F40((__int64)v14, a4, (__int64)a3, *(char *)(a1 + 4783), *(_DWORD *)(a1 + 4640));
    CWinApp__ShowAppMessageBox((struct CWinApp *)a2, (     char *)v14, *(_DWORD *)(a1 + 4640));
  }
  else
  {
    v4 = 2LL * *(int *)(a1 + 4640);
    v12 = (void *)a2;
    sub_1401FC920((__m128i *)a2, (     __m128i *)(a2 + 32), v4);
  }
  return sub_1401F8B20((unsigned __int64)&v6 ^ v16);
}


//----- (00000001401C5DA0) ----------------------------------------------------
__int64            sub_1401C5DA0(_BYTE *a1, __int16 *a2, __int16 *a3, __int64 a4, int a5, int a6, int a7)
{
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // rax
  int j; // [rsp+50h] [rbp+0h] BYREF
  int i; // [rsp+54h] [rbp+4h]
  int v22; // [rsp+58h] [rbp+8h]
  int v23; // [rsp+5Ch] [rbp+Ch]
  unsigned int v24; // [rsp+60h] [rbp+10h]
  int v25; // [rsp+64h] [rbp+14h] BYREF
  int *v26; // [rsp+68h] [rbp+18h]
  int v27; // [rsp+70h] [rbp+20h]
  int v28; // [rsp+74h] [rbp+24h]
  unsigned __int8 *v29; // [rsp+78h] [rbp+28h]
  int *v30; // [rsp+80h] [rbp+30h]
  int *v31; // [rsp+88h] [rbp+38h]
  int *v32; // [rsp+90h] [rbp+40h]
  __int64 v33; // [rsp+98h] [rbp+48h]
  __int64 v34; // [rsp+A0h] [rbp+50h]
  void *v35; // [rsp+A8h] [rbp+58h]
  _BYTE v36[48]; // [rsp+B0h] [rbp+60h] BYREF
  _BYTE v37[32]; // [rsp+E0h] [rbp+90h] BYREF
  _WORD v38[16]; // [rsp+100h] [rbp+B0h] BYREF
  _WORD v39[16]; // [rsp+120h] [rbp+D0h] BYREF
  __int64 v40; // [rsp+140h] [rbp+F0h]

  sub_1401BD8C0(a2, *((__int16 **)a3 + 8), a3[1]);
  v7 = 4LL * *a3 + 15;
  if ( v7 <= 4LL * *a3 )
    v7 = 0xFFFFFFFFFFFFFF0LL;
  v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
  v31 = &j;
  sub_1401C62A0((__int64)&j, (__int64)a2, *((_QWORD *)a3 + 1), *((_QWORD *)a3 + 2), *a3, a3[1]);
  v9 = 4LL * a6 + 15;
  if ( v9 <= 4LL * a6 )
    v9 = 0xFFFFFFFFFFFFFF0LL;
  v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0uLL);
  v30 = &j;
  sub_1401BD610((__int64)v31, (__int64)&j, *a3, a6);
  v11 = 4LL * a6 + 15;
  if ( v11 <= 4LL * a6 )
    v11 = 0xFFFFFFFFFFFFFF0LL;
  v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
  v26 = &j;
  v13 = 16 * a6 + 15LL;
  if ( v13 <= 16 * a6 )
    v13 = 0xFFFFFFFFFFFFFF0LL;
  v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
  v32 = &j;
  for ( i = 0; i < a6; ++i )
  {
    v22 = v30[i];
    v33 = a3[1] * v22 + *((_QWORD *)a3 + 1);
    v34 = *((_QWORD *)a3 + 2) + 2LL * a3[1] * v22;
    for ( j = 0; j < a3[1]; ++j )
    {
      *(_WORD *)&v36[2 * j + 16] = *(unsigned __int8 *)(v33 + j) << 7;
      v23 = *(__int16 *)(v34 + 2LL * j);
      v39[j] = ((__int16)v23 * (__int16)(a2[j] - *(_WORD *)&v36[2 * j + 16])) >> 14;
      v38[j] = sub_1401BE550(*(__int16 *)(a4 + 2LL * j), (__int16)v23 * (__int16)v23, 21);
    }
    sub_1401C6E20((__int64)v37, (__int64)v36, (__int64)a3, v22);
    v15 = sub_1401C64A0(
            &v32[4 * i],
            (__int64)v39,
            (__int64)v38,
            (__int64)v36,
            (__int64)v37,
            *((_QWORD *)a3 + 7),
            a3[2],
            a3[3],
            a5,
            a3[1]);
    v26[i] = v15;
    v29 = (unsigned __int8 *)(*a3 * (a7 >> 1) + *((_QWORD *)a3 + 3));
    if ( v22 )
      v16 = v29[v22 - 1] - v29[v22];
    else
      v16 = 256 - *v29;
    v24 = v16;
    v17 = sub_1401BC2A0(v16);
    v27 = 1024 - v17;
    v26[i] += (__int16)(a5 >> 2) * (__int16)(1024 - v17);
  }
  sub_1401BD610((__int64)v26, (__int64)&v25, a6, 1);
  *a1 = v30[v25];
  v18 = a3[1];
  v35 = a1 + 1;
  sub_1401FC920((__m128i *)(a1 + 1), (     __m128i *)&v32[4 * v25], v18);
  sub_1401C6F70(a2, a1, (__int64)a3);
  v28 = *v26;
  return sub_1401F8B20((unsigned __int64)&j ^ v40);
}


//----- (00000001401C62A0) ----------------------------------------------------
__int64            sub_1401C62A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, int a6)
{
  __int64 result; // rax
  int j; // [rsp+0h] [rbp-38h]
  int v8; // [rsp+4h] [rbp-34h]
  int v9; // [rsp+4h] [rbp-34h]
  int v10; // [rsp+8h] [rbp-30h]
  int v11; // [rsp+8h] [rbp-30h]
  int v12; // [rsp+Ch] [rbp-2Ch]
  int v13; // [rsp+Ch] [rbp-2Ch]
  signed int i; // [rsp+10h] [rbp-28h]
  int v15; // [rsp+18h] [rbp-20h]
  int v16; // [rsp+1Ch] [rbp-1Ch]

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    v12 = 0;
    v10 = 0;
    for ( j = a6 - 2; j >= 0; j -= 2 )
    {
      v8 = *(__int16 *)(a4 + 2LL * (j + 1))
         * (__int16)(*(_WORD *)(a2 + 2LL * (j + 1)) - (*(unsigned __int8 *)(a3 + j + 1) << 7));
      if ( v8 - (v10 >> 1) <= 0 )
        v15 = (v10 >> 1) - v8;
      else
        v15 = v8 - (v10 >> 1);
      v13 = v15 + v12;
      v11 = *(__int16 *)(a4 + 2LL * (j + 1))
          * (__int16)(*(_WORD *)(a2 + 2LL * (j + 1)) - (*(unsigned __int8 *)(a3 + j + 1) << 7));
      v9 = *(__int16 *)(a4 + 2LL * j) * (__int16)(*(_WORD *)(a2 + 2LL * j) - (*(unsigned __int8 *)(a3 + j) << 7));
      if ( v9 - (v11 >> 1) <= 0 )
        v16 = (v11 >> 1) - v9;
      else
        v16 = v9 - (v11 >> 1);
      v12 = v16 + v13;
      v10 = *(__int16 *)(a4 + 2LL * j) * (__int16)(*(_WORD *)(a2 + 2LL * j) - (*(unsigned __int8 *)(a3 + j) << 7));
    }
    *(_DWORD *)(a1 + 4LL * i) = v12;
    a3 += a6;
    a4 += 2LL * a6;
  }
  return result;
}


//----- (00000001401C64A0) ----------------------------------------------------
__int64            sub_1401C64A0(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int16 a10)
{
  __int64 v11; // [rsp+0h] [rbp-1E8h] BYREF
  int j; // [rsp+20h] [rbp-1C8h]
  __int16 v13; // [rsp+24h] [rbp-1C4h]
  __int16 v14; // [rsp+28h] [rbp-1C0h]
  int i; // [rsp+2Ch] [rbp-1BCh]
  int v16; // [rsp+30h] [rbp-1B8h]
  int v17; // [rsp+34h] [rbp-1B4h]
  int v18; // [rsp+38h] [rbp-1B0h]
  int v19; // [rsp+3Ch] [rbp-1ACh]
  int v20; // [rsp+40h] [rbp-1A8h]
  int v21; // [rsp+44h] [rbp-1A4h]
  int v22; // [rsp+48h] [rbp-1A0h]
  int v23; // [rsp+4Ch] [rbp-19Ch]
  int v24; // [rsp+50h] [rbp-198h]
  int v25; // [rsp+54h] [rbp-194h]
  int v26; // [rsp+58h] [rbp-190h]
  int v27; // [rsp+5Ch] [rbp-18Ch]
  int v28; // [rsp+60h] [rbp-188h]
  int v29; // [rsp+64h] [rbp-184h]
  int v30; // [rsp+68h] [rbp-180h]
  __int64 v31; // [rsp+70h] [rbp-178h]
  int v32; // [rsp+78h] [rbp-170h]
  __int64 v33; // [rsp+80h] [rbp-168h]
  _DWORD v34[62]; // [rsp+88h] [rbp-160h]
  _WORD v35[40]; // [rsp+180h] [rbp-68h] BYREF
  __int64 v36; // [rsp+1D0h] [rbp-18h]

  for ( i = -10; i <= 9; ++i )
  {
    v13 = (_WORD)i << 10;
    v14 = ((_WORD)i << 10) + 1024;
    if ( i <= 0 )
    {
      if ( i )
      {
        v13 += 102;
        if ( i != -1 )
          v14 += 102;
      }
      else
      {
        v14 -= 102;
      }
    }
    else
    {
      v13 -= 102;
      v14 -= 102;
    }
    v34[i + 32] = (a7 * v13) >> 16;
    v34[i + 52] = (a7 * v14) >> 16;
  }
  v17 = 1;
  v34[0] = 0;
  v33 = 0;
  v35[0] = 0;
  for ( i = a10 - 1; i >= 0; --i )
  {
    v31 = *(__int16 *)(a5 + 2LL * i) + a6;
    v24 = *(__int16 *)(a2 + 2LL * i);
    for ( j = 0; j < v17; ++j )
    {
      v23 = ((__int16)v35[j] * *(unsigned __int8 *)(a4 + i)) >> 8;
      v32 = v24 - v23;
      v16 = ((__int16)(v24 - v23) * a8) >> 16;
      if ( v16 <= 9 )
      {
        if ( v16 >= -10 )
          v28 = v16;
        else
          v28 = -10;
        v29 = v28;
      }
      else
      {
        v29 = 9;
      }
      v16 = v29;
      *((_BYTE *)&v35[8 * j + 8] + i) = v29;
      v13 = v34[v16 + 32];
      v14 = v34[v16 + 52];
      v13 += v23;
      v14 += v23;
      v35[j] = v13;
      v35[v17 + j] = v14;
      if ( v16 + 1 < 4 )
      {
        if ( v16 > -4 )
        {
          v18 = *(unsigned __int8 *)(v31 + v16 + 4);
          v22 = *(unsigned __int8 *)(v31 + v16 + 5);
        }
        else if ( v16 == -4 )
        {
          v18 = 280;
          v22 = *(unsigned __int8 *)(v31 + 1);
        }
        else
        {
          v18 = -43 * (__int16)v16 + 108;
          v22 = -43 * (__int16)v16 + 65;
        }
      }
      else if ( v16 == 3 )
      {
        v18 = *(unsigned __int8 *)(v31 + 7);
        v22 = 280;
      }
      else
      {
        v18 = 43 * (__int16)v16 + 108;
        v22 = 43 * (__int16)v16 + 151;
      }
      v30 = v34[j];
      v34[j] = (__int16)v18 * a9 + *(__int16 *)(a3 + 2LL * i) * (__int16)(v24 - v13) * (__int16)(v24 - v13) + v30;
      v21 = v24 - v14;
      v34[v17 + j] = (__int16)v22 * a9 + *(__int16 *)(a3 + 2LL * i) * (__int16)v21 * (__int16)v21 + v30;
    }
    if ( v17 > 2 )
    {
      for ( j = 0; j < 4; ++j )
      {
        if ( v34[j] <= v34[j + 4] )
        {
          v34[j + 8] = v34[j];
          v34[j + 12] = v34[j + 4];
          v34[j + 16] = j;
        }
        else
        {
          v34[j + 12] = v34[j];
          v34[j + 8] = v34[j + 4];
          v34[j] = v34[j + 8];
          v34[j + 4] = v34[j + 12];
          v13 = v35[j];
          v35[j] = v35[j + 4];
          v35[j + 4] = v13;
          v34[j + 16] = j + 4;
        }
      }
      while ( 1 )
      {
        v26 = 0x7FFFFFFF;
        v25 = 0;
        v19 = 0;
        v20 = 0;
        for ( j = 0; j < 4; ++j )
        {
          if ( v26 > v34[j + 12] )
          {
            v26 = v34[j + 12];
            v19 = j;
          }
          if ( v25 < v34[j + 8] )
          {
            v25 = v34[j + 8];
            v20 = j;
          }
        }
        if ( v26 >= v25 )
          break;
        v34[v20 + 16] = v34[v19 + 16] ^ 4;
        v34[v20] = v34[v19 + 4];
        v35[v20] = v35[v19 + 4];
        v34[v20 + 8] = 0;
        v34[v19 + 12] = 0x7FFFFFFF;
        sub_1401FC920((__m128i *)&v35[8 * v20 + 8], (     __m128i *)&v35[8 * v19 + 8], 0x10u);
      }
      for ( j = 0; j < 4; ++j )
        *((_BYTE *)&v35[8 * j + 8] + i) += (int)v34[j + 16] >> 2;
    }
    else
    {
      for ( j = 0; j < v17; ++j )
        *((_BYTE *)&v35[8 * v17 + 8 + 8 * j] + i) = *((_BYTE *)&v35[8 * j + 8] + i) + 1;
      v17 *= 2;
      for ( j = v17; j < 4; ++j )
        *((_BYTE *)&v35[8 * j + 8] + i) = *((_BYTE *)&v35[8 * (j - v17) + 8] + i);
    }
  }
  v16 = 0;
  v27 = 0x7FFFFFFF;
  for ( j = 0; j < 8; ++j )
  {
    if ( v27 > v34[j] )
    {
      v27 = v34[j];
      v16 = j;
    }
  }
  for ( j = 0; j < a10; ++j )
    a1[j] = *((_BYTE *)&v35[8 * (v16 & 3) + 8] + j);
  *a1 += v16 >> 2;
  return sub_1401F8B20((unsigned __int64)&v11 ^ v36);
}


//----- (00000001401C6E20) ----------------------------------------------------
__int64            sub_1401C6E20(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  unsigned __int8 *v7; // [rsp+8h] [rbp-10h]

  v7 = (unsigned __int8 *)(*(__int16 *)(a3 + 2) * a4 / 2 + *(_QWORD *)(a3 + 40));
  for ( i = 0; ; i += 2 )
  {
    result = (unsigned int)*(__int16 *)(a3 + 2);
    if ( i >= (int)result )
      break;
    v5 = *v7++;
    *(_WORD *)(a1 + 2LL * i) = 9 * (((int)v5 >> 1) & 7);
    *(_BYTE *)(a2 + i) = *(_BYTE *)(*(_QWORD *)(a3 + 32) + (*(__int16 *)(a3 + 2) - 1) * (v5 & 1) + i);
    *(_WORD *)(a1 + 2LL * (i + 1)) = 9 * (((int)v5 >> 5) & 7);
    *(_BYTE *)(a2 + i + 1) = *(_BYTE *)(*(_QWORD *)(a3 + 32) + i + (*(__int16 *)(a3 + 2) - 1) * (((int)v5 >> 4) & 1) + 1);
  }
  return result;
}


//----- (00000001401C6F70) ----------------------------------------------------
__int64            sub_1401C6F70(__int16 *a1, char *a2, __int64 a3)
{
  __int64 v4; // [rsp+0h] [rbp-B8h] BYREF
  int i; // [rsp+30h] [rbp-88h]
  int v6; // [rsp+34h] [rbp-84h]
  int v7; // [rsp+38h] [rbp-80h]
  int v8; // [rsp+3Ch] [rbp-7Ch]
  __int64 v9; // [rsp+40h] [rbp-78h]
  __int64 v10; // [rsp+48h] [rbp-70h]
  _BYTE v11[16]; // [rsp+50h] [rbp-68h] BYREF
  _WORD v12[16]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v13[32]; // [rsp+80h] [rbp-38h] BYREF
  __int64 v14; // [rsp+A0h] [rbp-18h]

  sub_1401C6E20((__int64)v13, (__int64)v11, a3, *a2);
  sub_1401D6F30((__int64)v12, (__int64)(a2 + 1), (__int64)v11, *(_WORD *)(a3 + 4), *(_WORD *)(a3 + 2));
  v10 = *(__int16 *)(a3 + 2) * *a2 + *(_QWORD *)(a3 + 8);
  v9 = *(_QWORD *)(a3 + 16) + 2LL * *(__int16 *)(a3 + 2) * *a2;
  for ( i = 0; i < *(__int16 *)(a3 + 2); ++i )
  {
    v6 = (*(unsigned __int8 *)(v10 + i) << 7) + ((__int16)v12[i] << 14) / *(__int16 *)(v9 + 2LL * i);
    if ( v6 <= 0x7FFF )
    {
      if ( v6 >= 0 )
        v7 = v6;
      else
        v7 = 0;
      v8 = v7;
    }
    else
    {
      v8 = 0x7FFF;
    }
    a1[i] = v8;
  }
  sub_1401BD8C0(a1, *(__int16 **)(a3 + 64), *(__int16 *)(a3 + 2));
  return sub_1401F8B20((unsigned __int64)&v4 ^ v14);
}


//----- (00000001401C7180) ----------------------------------------------------
__int64            sub_1401C7180(_DWORD *a1)
{
  sub_1401FCD30((void *)(uintptr_t)(a1), 0, 0x10C0u);
  a1[594] = 1;
  *a1 = 0x10000;
  a1[1048] = sub_1401A13B0();
  sub_1401C9630(a1);
  sub_1401BEA90(a1);
  return 0;
}


//----- (00000001401C71F0) ----------------------------------------------------
__int64            sub_1401C71F0(__int64 a1, int a2, int a3)
{
  unsigned int v4; // [rsp+20h] [rbp-18h]
  int v5; // [rsp+24h] [rbp-14h]

  v4 = 0;
  *(_DWORD *)(a1 + 2332) = 5 * (__int16)a2;
  v5 = *(__int16 *)(a1 + 2332) * *(__int16 *)(a1 + 2324);
  if ( *(_DWORD *)(a1 + 2316) != a2 || *(_DWORD *)(a1 + 2320) != a3 )
  {
    v4 = sub_1401BA4E0(a1 + 2448, 1000 * (__int16)a2, a3, 0);
    *(_DWORD *)(a1 + 2320) = a3;
  }
  if ( *(_DWORD *)(a1 + 2316) != a2 || v5 != *(_DWORD *)(a1 + 2328) )
  {
    if ( a2 == 8 )
    {
      if ( *(_DWORD *)(a1 + 2324) == 4 )
        *(_QWORD *)(a1 + 2392) = (uint64)(uintptr_t)(&unk_1402822D0);
      else
        *(_QWORD *)(a1 + 2392) = (uint64)(uintptr_t)(&unk_140281F84);
    }
    else if ( *(_DWORD *)(a1 + 2324) == 4 )
    {
      *(_QWORD *)(a1 + 2392) = (uint64)(uintptr_t)(&unk_1402822A8);
    }
    else
    {
      *(_QWORD *)(a1 + 2392) = (uint64)(uintptr_t)(&unk_1402822E0);
    }
    if ( *(_DWORD *)(a1 + 2316) != a2 )
    {
      *(_DWORD *)(a1 + 2336) = 20 * (__int16)a2;
      if ( a2 == 8 || a2 == 12 )
      {
        *(_DWORD *)(a1 + 2340) = 10;
        *(_QWORD *)(a1 + 2752) = (uint64)(uintptr_t)(&unk_140282870);
      }
      else
      {
        *(_DWORD *)(a1 + 2340) = 16;
        *(_QWORD *)(a1 + 2752) = (uint64)(uintptr_t)(&unk_140282800);
      }
      switch ( a2 )
      {
        case 16:
          *(_QWORD *)(a1 + 2384) = (uint64)(uintptr_t)(&unk_140282538);
          break;
        case 12:
          *(_QWORD *)(a1 + 2384) = (uint64)(uintptr_t)(&unk_14028225C);
          break;
        case 8:
          *(_QWORD *)(a1 + 2384) = (uint64)(uintptr_t)(&unk_1402821FC);
          break;
      }
      *(_DWORD *)(a1 + 2376) = 1;
      *(_DWORD *)(a1 + 2308) = 100;
      *(_BYTE *)(a1 + 2312) = 10;
      *(_DWORD *)(a1 + 4188) = 0;
      sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 1348)), 0, 0x3C0u);
      sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 1284)), 0, 0x40u);
    }
    *(_DWORD *)(a1 + 2316) = a2;
    *(_DWORD *)(a1 + 2328) = v5;
  }
  return v4;
}


//----- (00000001401C74B0) ----------------------------------------------------
__int64            sub_1401C74B0(__int64 a1, _DWORD *a2,      __m128i *a3, unsigned int *a4, int a5, int a6, int a7)
{
  void *v7; // rsp
  unsigned __int64 v8; // rcx
  void *v9; // rsp
       __m128i *v10; // rcx
  _BYTE v12[96]; // [rsp+10h] [rbp-90h] BYREF
  int v13; // [rsp+98h] [rbp-8h]
  int v14; // [rsp+A0h] [rbp+0h] BYREF
       __m128i *v15; // [rsp+A8h] [rbp+8h]
  int v16; // [rsp+B0h] [rbp+10h]
  int v17; // [rsp+B4h] [rbp+14h]
  _BYTE *v18; // [rsp+B8h] [rbp+18h]
  __int64 v19; // [rsp+C0h] [rbp+20h]
  __int64 v20; // [rsp+C8h] [rbp+28h]

  v17 = 0;
  v14 = *(_DWORD *)(a1 + 2328);
  v7 = alloca(144);
  v15 = (     __m128i *)v12;
  v13 = 0;
  if ( !a5 || a5 == 2 && *(_DWORD *)(a1 + 4LL * *(int *)(a1 + 2400) + 2432) == 1 )
  {
    v8 = 2LL * (int)((v14 + 15) & 0xFFFFFFF0) + 15;
    if ( v8 <= 2LL * (int)((v14 + 15) & 0xFFFFFFF0) )
      v8 = 0xFFFFFFFFFFFFFF0LL;
    v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
    v18 = v12;
    sub_1401C7770(a1, a2, *(_DWORD *)(a1 + 2400), a5, a6);
    sub_1401C92B0(a2, (__int64)v18, *(char *)(a1 + 2789), *(char *)(a1 + 2790), *(_DWORD *)(a1 + 2328));
    sub_1401C7DF0(a1, (__int64)v15, a6);
    sub_1401C82D0(a1, (__int64)v15, a3, (__int64)v18, a7);
    sub_1401BEB10((_DWORD *)a1, v15, (__int64)a3, 0);
    *(_DWORD *)(a1 + 4184) = 0;
    *(_DWORD *)(a1 + 4188) = *(char *)(a1 + 2789);
    *(_DWORD *)(a1 + 2376) = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 2789) = *(_BYTE *)(a1 + 4188);
    sub_1401BEB10((_DWORD *)a1, v15, (__int64)a3, 1);
  }
  v16 = *(_DWORD *)(a1 + 2336) - *(_DWORD *)(a1 + 2328);
  v10 = (     __m128i *)(a1 + 2LL * *(int *)(a1 + 2328) + 1348);
  v19 = a1 + 1348;
  sub_1401FC920((__m128i *)(a1 + 1348), v10, 2LL * v16);
  sub_1401FC920((__m128i *)(a1 + 2LL * v16 + 1348), a3, 2LL * *(int *)(a1 + 2328));
  sub_1401C96E0(a1, (__int64)v15, (__int64)a3, v14);
  sub_1401BEBC0((_DWORD *)a1, (__int64)a3, v14);
  *(_DWORD *)(a1 + 2308) = SR_VEC_PTR_LANES(128, v15, i32)[*(_DWORD *)(a1 + 2324) - 1];
  *a4 = v14;
  return sub_1401F8B20((unsigned __int64)&v14 ^ v20);
}


//----- (00000001401C7770) ----------------------------------------------------
__int64            sub_1401C7770(__int64 a1, _DWORD *a2, int a3, int a4, int a5)
{
  __int16 v5; // ax
  __int64 v7; // [rsp+0h] [rbp-88h] BYREF
  int v8; // [rsp+20h] [rbp-68h]
  int i; // [rsp+24h] [rbp-64h]
  int v10; // [rsp+28h] [rbp-60h]
  int j; // [rsp+2Ch] [rbp-5Ch]
  int v12; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  _BYTE v14[16]; // [rsp+40h] [rbp-48h] BYREF
  _WORD v15[16]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]

  if ( a4 || *(_DWORD *)(a1 + 4LL * a3 + 2416) )
    v8 = sub_14019AFE0(a2, (__int64)&unk_140282454, 8) + 2;
  else
    v8 = sub_14019AFE0(a2, (__int64)&unk_14028246C, 8);
  *(_BYTE *)(a1 + 2789) = v8 >> 1;
  *(_BYTE *)(a1 + 2790) = v8 & 1;
  if ( a5 == 2 )
  {
    *(_BYTE *)(a1 + 2760) = sub_14019AFE0(a2, (__int64)&unk_140282230, 8);
  }
  else
  {
    *(_BYTE *)(a1 + 2760) = 8 * sub_14019AFE0(a2, (__int64)&unk_140282218 + 8 * *(char *)(a1 + 2789), 8);
    v13 = 0;
    *(_BYTE *)(a1 + 2760) += sub_14019AFE0(a2, (__int64)&unk_140282538, 8);
  }
  for ( i = 1; i < *(_DWORD *)(a1 + 2324); ++i )
    *(_BYTE *)(a1 + i + 2760) = sub_14019AFE0(a2, (__int64)&unk_140282230, 8);
  *(_BYTE *)(a1 + 2768) = sub_14019AFE0(
                            a2,
                            **(__int16 **)(a1 + 2752) * (*(char *)(a1 + 2789) >> 1)
                          + *(_QWORD *)(*(_QWORD *)(a1 + 2752) + 24LL),
                            8);
  sub_1401C6E20((__int64)v15, (__int64)v14, *(_QWORD *)(a1 + 2752), *(char *)(a1 + 2768));
  for ( i = 0; i < *(__int16 *)(*(_QWORD *)(a1 + 2752) + 2LL); ++i )
  {
    v8 = sub_14019AFE0(a2, (__int16)v15[i] + *(_QWORD *)(*(_QWORD *)(a1 + 2752) + 48LL), 8);
    if ( v8 )
    {
      if ( v8 == 8 )
        v8 = sub_14019AFE0(a2, (__int64)&unk_140282264, 8) + 8;
    }
    else
    {
      v8 = -(int)sub_14019AFE0(a2, (__int64)&unk_140282264, 8);
    }
    *(_BYTE *)(a1 + i + 1 + 2768) = v8 - 4;
  }
  if ( *(_DWORD *)(a1 + 2324) == 4 )
    *(_BYTE *)(a1 + 2791) = sub_14019AFE0(a2, (__int64)&unk_1402827F0, 8);
  else
    *(_BYTE *)(a1 + 2791) = 4;
  if ( *(_BYTE *)(a1 + 2789) == 2 )
  {
    v12 = 1;
    if ( a5 == 2 && *(_DWORD *)(a1 + 2408) == 2 )
    {
      v5 = sub_14019AFE0(a2, (__int64)&unk_140282290, 8);
      v10 = v5;
      if ( v5 > 0 )
      {
        v10 -= 9;
        *(_WORD *)(a1 + 2786) = v10 + *(_WORD *)(a1 + 2412);
        v12 = 0;
      }
    }
    if ( v12 )
    {
      *(_WORD *)(a1 + 2786) = (*(int *)(a1 + 2316) >> 1) * sub_14019AFE0(a2, (__int64)&unk_140282270, 8);
      *(_WORD *)(a1 + 2786) += sub_14019AFE0(a2, *(_QWORD *)(a1 + 2384), 8);
    }
    *(_WORD *)(a1 + 2412) = *(_WORD *)(a1 + 2786);
    *(_BYTE *)(a1 + 2788) = sub_14019AFE0(a2, *(_QWORD *)(a1 + 2392), 8);
    *(_BYTE *)(a1 + 2792) = sub_14019AFE0(a2, (__int64)&unk_14028226C, 8);
    for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
      *(_BYTE *)(a1 + j + 2764) = sub_14019AFE0(a2, (__int64)*(&off_1402825D8 + *(char *)(a1 + 2792)), 8);
    if ( a5 )
      *(_BYTE *)(a1 + 2793) = 0;
    else
      *(_BYTE *)(a1 + 2793) = sub_14019AFE0(a2, (__int64)&unk_1402822DC, 8);
  }
  *(_DWORD *)(a1 + 2408) = *(char *)(a1 + 2789);
  *(_BYTE *)(a1 + 2794) = sub_14019AFE0(a2, (__int64)&unk_1402821FC, 8);
  return sub_1401F8B20((unsigned __int64)&v7 ^ v16);
}

// 1402825D8: using guessed type _UNKNOWN *off_1402825D8;

//----- (00000001401C7DF0) ----------------------------------------------------
__int64            sub_1401C7DF0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-A8h] BYREF
  int i; // [rsp+30h] [rbp-78h]
  int j; // [rsp+34h] [rbp-74h]
  int v8; // [rsp+38h] [rbp-70h]
  BOOL v9; // [rsp+3Ch] [rbp-6Ch]
  __int64 v10; // [rsp+40h] [rbp-68h]
  __int64 v11; // [rsp+48h] [rbp-60h]
  __int64 v12; // [rsp+50h] [rbp-58h]
  __int16 v13[16]; // [rsp+58h] [rbp-50h] BYREF
  _WORD v14[16]; // [rsp+78h] [rbp-30h] BYREF
  __int64 v15; // [rsp+98h] [rbp-10h]

  v9 = a3 == 2;
  v10 = a2 + 16;
  sub_1401C2D70(a2 + 16, (char *)(a1 + 2760), (char *)(a1 + 2312), v9, *(_DWORD *)(a1 + 2324));
  sub_1401C6F70(v13, (char *)(a1 + 2768), *(_QWORD *)(a1 + 2752));
  CWinApp__ShowAppMessageBox((struct CWinApp *)(a2 + 64), (     char *)v13, *(_DWORD *)(a1 + 2340));
  if ( *(_DWORD *)(a1 + 2376) == 1 )
    *(_BYTE *)(a1 + 2791) = 4;
  if ( *(char *)(a1 + 2791) >= 4 )
  {
    v3 = 2LL * *(int *)(a1 + 2340);
    v11 = a2 + 32;
    sub_1401FC920((__m128i *)(a2 + 32), (     __m128i *)(a2 + 64), v3);
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 2340); ++i )
      v14[i] = (((v13[i] - *(__int16 *)(a1 + 2LL * i + 2344)) * *(char *)(a1 + 2791)) >> 2)
             + *(_WORD *)(a1 + 2LL * i + 2344);
    CWinApp__ShowAppMessageBox((struct CWinApp *)(a2 + 32), (     char *)v14, *(_DWORD *)(a1 + 2340));
  }
  sub_1401FC920((__m128i *)(a1 + 2344), (     __m128i *)v13, 2LL * *(int *)(a1 + 2340));
  if ( *(_DWORD *)(a1 + 4184) )
  {
    sub_1401BBDE0(a2 + 32, *(_DWORD *)(a1 + 2340), 63570);
    sub_1401BBDE0(a2 + 64, *(_DWORD *)(a1 + 2340), 63570);
  }
  if ( *(_BYTE *)(a1 + 2789) == 2 )
  {
    sub_1401BC700(*(_WORD *)(a1 + 2786), *(_BYTE *)(a1 + 2788), a2, *(_DWORD *)(a1 + 2316), *(_DWORD *)(a1 + 2324));
    v12 = (__int64)*(&off_140282768 + *(char *)(a1 + 2792));
    for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
    {
      v8 = *(char *)(a1 + j + 2764);
      for ( i = 0; i < 5; ++i )
        *(_WORD *)(a2 + 2LL * (i + 5 * j) + 96) = *(char *)(v12 + i + 5 * v8) << 7;
    }
    v8 = *(char *)(a1 + 2793);
    *(_DWORD *)(a2 + 136) = word_140282798[v8];
  }
  else
  {
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)a2), 0, 4LL * *(int *)(a1 + 2324));
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a2 + 96)), 0, 10LL * *(_DWORD *)(a1 + 2324));
    *(_BYTE *)(a1 + 2792) = 0;
    *(_DWORD *)(a2 + 136) = 0;
  }
  return sub_1401F8B20((unsigned __int64)&v5 ^ v15);
}

// 140282768: using guessed type _UNKNOWN *off_140282768;
// 140282798: using guessed type __int16 word_140282798[4];

//----- (00000001401C82D0) ----------------------------------------------------
__int64            sub_1401C82D0(__int64 a1, __int64 a2,      __m128i *a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  void *v7; // rsp
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  unsigned __int64 v12; // rcx
  void *v13; // rsp
  int v14; // eax
  int v15; // ecx
  int v17; // [rsp+28h] [rbp-8h]
  int i; // [rsp+30h] [rbp+0h] BYREF
  int v19; // [rsp+34h] [rbp+4h]
  int j; // [rsp+38h] [rbp+8h]
  __m128i *v21; // [rsp+40h] [rbp+10h]
  int v22; // [rsp+48h] [rbp+18h]
  int v23; // [rsp+4Ch] [rbp+1Ch]
  int v24; // [rsp+50h] [rbp+20h]
  int v25; // [rsp+54h] [rbp+24h]
  int v26; // [rsp+58h] [rbp+28h]
  int *v27; // [rsp+60h] [rbp+30h]
  int v28; // [rsp+68h] [rbp+38h]
  int v29; // [rsp+6Ch] [rbp+3Ch]
  int v30; // [rsp+70h] [rbp+40h]
  int v31; // [rsp+74h] [rbp+44h]
  _WORD *v32; // [rsp+78h] [rbp+48h]
  int *v33; // [rsp+80h] [rbp+50h]
  int v34; // [rsp+88h] [rbp+58h]
  int v35; // [rsp+8Ch] [rbp+5Ch]
  int v36; // [rsp+90h] [rbp+60h]
  int v37; // [rsp+94h] [rbp+64h]
  int v38; // [rsp+98h] [rbp+68h]
  int v39; // [rsp+9Ch] [rbp+6Ch]
  int v40; // [rsp+A0h] [rbp+70h]
  int v41; // [rsp+A4h] [rbp+74h]
  int v42; // [rsp+A8h] [rbp+78h]
  __int32 v43; // [rsp+ACh] [rbp+7Ch]
  int v44; // [rsp+B0h] [rbp+80h]
  int v45; // [rsp+B4h] [rbp+84h]
  BOOL v46; // [rsp+B8h] [rbp+88h]
  int v47; // [rsp+BCh] [rbp+8Ch]
  int v48; // [rsp+C0h] [rbp+90h]
  int v49; // [rsp+C4h] [rbp+94h]
  int *v50; // [rsp+C8h] [rbp+98h]
  int *v51; // [rsp+D0h] [rbp+A0h]
  int v52; // [rsp+D8h] [rbp+A8h]
       __m128i *v53; // [rsp+E0h] [rbp+B0h]
  __m128i *v54; // [rsp+E8h] [rbp+B8h]
  int *v55; // [rsp+F0h] [rbp+C0h]
  int *v56; // [rsp+F8h] [rbp+C8h]
  _WORD *v57; // [rsp+100h] [rbp+D0h]
  __m128i v58[2]; // [rsp+108h] [rbp+D8h] BYREF
  __int64 v59; // [rsp+128h] [rbp+F8h]

  v25 = 0;
  v5 = 2LL * *(int *)(a1 + 2336);
  v6 = v5 + 15;
  if ( v5 + 15 <= v5 )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
  v55 = &i;
  v8 = 4LL * (*(_DWORD *)(a1 + 2328) + *(_DWORD *)(a1 + 2336)) + 15;
  if ( v8 <= 4LL * (*(_DWORD *)(a1 + 2328) + *(_DWORD *)(a1 + 2336)) )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  v50 = &i;
  v10 = 4LL * *(int *)(a1 + 2332) + 15;
  if ( v10 <= 4LL * *(int *)(a1 + 2332) )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
  v56 = &i;
  v12 = 4LL * (*(_DWORD *)(a1 + 2332) + 16) + 15;
  if ( v12 <= 4LL * (*(_DWORD *)(a1 + 2332) + 16) )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = alloca(v12 & 0xFFFFFFFFFFFFFFF0uLL);
  v21 = (__m128i *)&i;
  v52 = word_1402827F8[2 * (*(char *)(a1 + 2789) >> 1) + *(char *)(a1 + 2790)];
  v46 = *(char *)(a1 + 2791) < 4;
  v24 = *(char *)(a1 + 2794);
  for ( i = 0; i < *(_DWORD *)(a1 + 2328); ++i )
  {
    v24 = 196314165 * v24 + 907633515;
    *(_DWORD *)(a1 + 4LL * i + 4) = *(__int16 *)(a4 + 2LL * i) << 14;
    if ( *(int *)(a1 + 4LL * i + 4) <= 0 )
    {
      if ( *(int *)(a1 + 4LL * i + 4) < 0 )
        *(_DWORD *)(a1 + 4LL * i + 4) += 1280;
    }
    else
    {
      *(_DWORD *)(a1 + 4LL * i + 4) -= 1280;
    }
    *(_DWORD *)(a1 + 4LL * i + 4) += 16 * v52;
    if ( v24 < 0 )
      *(_DWORD *)(a1 + 4LL * i + 4) = -*(_DWORD *)(a1 + 4LL * i + 4);
    v24 += *(__int16 *)(a4 + 2LL * i);
  }
  sub_1401FC920(v21, (     __m128i *)(a1 + 1284), 0x40u);
  v51 = (int *)(a1 + 4);
  v53 = a3;
  v23 = *(_DWORD *)(a1 + 2336);
  for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
  {
    v27 = v56;
    v54 = (__m128i *)(a2 + 32LL * (j >> 1) + 32);
    sub_1401FC920(v58, v54, 2LL * *(int *)(a1 + 2340));
    v32 = (_WORD *)(a2 + 10LL * j + 96);
    v30 = *(char *)(a1 + 2789);
    v31 = *(int *)(a2 + 4LL * j + 16) >> 6;
    v29 = sub_1401BE820(*(_DWORD *)(a2 + 4LL * j + 16), 47);
    if ( *(_DWORD *)(a2 + 4LL * j + 16) == *(_DWORD *)a1 )
    {
      v26 = 0x10000;
    }
    else
    {
      v26 = sub_1401BE550(*(_DWORD *)a1, *(_DWORD *)(a2 + 4LL * j + 16), 16);
      for ( i = 0; i < 16; ++i )
        SR_VEC_PTR_LANES(128, v21, i32)[i] = (SR_VEC_PTR_LANES(128, v21, i32)[i] * (__int64)v26) >> 16;
    }
    *(_DWORD *)a1 = *(_DWORD *)(a2 + 4LL * j + 16);
    if ( *(_DWORD *)(a1 + 4184) && *(_DWORD *)(a1 + 4188) == 2 && *(_BYTE *)(a1 + 2789) != 2 && j < 2 )
    {
      sub_1401FCD30((void *)(uintptr_t)(v32), 0, 0xAu);
      v32[2] = 4096;
      v30 = 2;
      *(_DWORD *)(a2 + 4LL * j) = *(_DWORD *)(a1 + 2308);
    }
    if ( v30 == 2 )
    {
      v25 = *(_DWORD *)(a2 + 4LL * j);
      if ( !j || j == 2 && v46 )
      {
        v28 = *(_DWORD *)(a1 + 2336) - v25 - *(_DWORD *)(a1 + 2340) - 2;
        if ( j == 2 )
          sub_1401FC920((__m128i *)(a1 + 2LL * *(int *)(a1 + 2336) + 1348), a3, 4LL * *(_DWORD *)(a1 + 2332));
        v14 = *(_DWORD *)(a1 + 2336) - v28;
        v15 = *(_DWORD *)(a1 + 2332) * j;
        v57 = (_WORD *)v55 + v28;
        v17 = a5;
        sub_1401BBB40(v57, a1 + 2LL * (v15 + v28) + 1348, SR_VEC_PTR_LANES(128, v54, i16), v14, *(_DWORD *)(a1 + 2340));
        if ( !j )
          v29 = 4 * ((*(__int16 *)(a2 + 136) * (__int64)v29) >> 16);
        for ( i = 0; i < v25 + 2; ++i )
          v50[v23 - i - 1] = (*((__int16 *)v55 + *(_DWORD *)(a1 + 2336) - i - 1) * (__int64)v29) >> 16;
      }
      else if ( v26 != 0x10000 )
      {
        for ( i = 0; i < v25 + 2; ++i )
          v50[v23 - i - 1] = (v50[v23 - i - 1] * (__int64)v26) >> 16;
      }
    }
    if ( v30 == 2 )
    {
      v33 = &v50[v23 - v25 + 2];
      for ( i = 0; i < *(_DWORD *)(a1 + 2332); ++i )
      {
        v22 = 2;
        v22 = (((__int16)*v32 * (__int64)*v33) >> 16) + 2;
        v22 += ((__int16)v32[1] * (__int64)*(v33 - 1)) >> 16;
        v22 += ((__int16)v32[2] * (__int64)*(v33 - 2)) >> 16;
        v22 += ((__int16)v32[3] * (__int64)*(v33 - 3)) >> 16;
        v22 += ((__int16)v32[4] * (__int64)*(v33 - 4)) >> 16;
        ++v33;
        v27[i] = v51[i] + 2 * v22;
        v50[v23++] = 2 * v27[i];
      }
    }
    else
    {
      v27 = v51;
    }
    for ( i = 0; i < *(_DWORD *)(a1 + 2332); ++i )
    {
      v19 = *(int *)(a1 + 2340) >> 1;
      v19 += (SR_VEC_LANES(128, v58[0], i16)[0] * (__int64)SR_VEC_LANES(128, v21[3], i32)[i + 3]) >> 16;
      v19 += (SR_VEC_LANES(128, v58[0], i16)[1] * (__int64)SR_VEC_LANES(128, v21[3], i32)[i + 2]) >> 16;
      v19 += (SR_VEC_LANES(128, v58[0], i16)[2] * (__int64)SR_VEC_LANES(128, v21[3], i32)[i + 1]) >> 16;
      v19 += (SR_VEC_LANES(128, v58[0], i16)[3] * (__int64)SR_VEC_LANES(128, v21[3], i32)[i]) >> 16;
      v19 += (SR_VEC_LANES(128, v58[0], i16)[4] * (__int64)SR_VEC_LANES(128, v21[2], i32)[i + 3]) >> 16;
      v19 += (SR_VEC_LANES(128, v58[0], i16)[5] * (__int64)SR_VEC_LANES(128, v21[2], i32)[i + 2]) >> 16;
      v19 += (SR_VEC_LANES(128, v58[0], i16)[6] * (__int64)SR_VEC_LANES(128, v21[2], i32)[i + 1]) >> 16;
      v19 += (SR_VEC_LANES(128, v58[0], i16)[7] * (__int64)SR_VEC_LANES(128, v21[2], i32)[i]) >> 16;
      v19 += (SR_VEC_LANES(128, v58[1], i16)[0] * (__int64)SR_VEC_LANES(128, v21[1], i32)[i + 3]) >> 16;
      v19 += (SR_VEC_LANES(128, v58[1], i16)[1] * (__int64)SR_VEC_LANES(128, v21[1], i32)[i + 2]) >> 16;
      if ( *(_DWORD *)(a1 + 2340) == 16 )
      {
        v19 += (SR_VEC_LANES(128, v58[1], i16)[2] * (__int64)SR_VEC_LANES(128, v21[1], i32)[i + 1]) >> 16;
        v19 += (SR_VEC_LANES(128, v58[1], i16)[3] * (__int64)SR_VEC_LANES(128, v21[1], i32)[i]) >> 16;
        v19 += (SR_VEC_LANES(128, v58[1], i16)[4] * (__int64)SR_VEC_PTR_LANES(128, v21, i32)[i + 3]) >> 16;
        v19 += (SR_VEC_LANES(128, v58[1], i16)[5] * (__int64)SR_VEC_PTR_LANES(128, v21, i32)[i + 2]) >> 16;
        v19 += (SR_VEC_LANES(128, v58[1], i16)[6] * (__int64)SR_VEC_PTR_LANES(128, v21, i32)[i + 1]) >> 16;
        v19 += (SR_VEC_LANES(128, v58[1], i16)[7] * (__int64)SR_VEC_PTR_LANES(128, v21, i32)[i]) >> 16;
      }
      if ( v19 <= 0x7FFFFFF )
      {
        if ( v19 >= -134217728 )
          v47 = v19;
        else
          v47 = -134217728;
        v48 = v47;
      }
      else
      {
        v48 = 0x7FFFFFF;
      }
      if ( 16 * v48 + v27[i] < 0 )
      {
        if ( v19 <= 0x7FFFFFF )
        {
          if ( v19 >= -134217728 )
            v38 = v19;
          else
            v38 = -134217728;
          v39 = v38;
        }
        else
        {
          v39 = 0x7FFFFFF;
        }
        if ( ((16 * v39) | v27[i]) < 0 )
        {
          if ( v19 <= 0x7FFFFFF )
          {
            if ( v19 >= -134217728 )
              v40 = v19;
            else
              v40 = -134217728;
            v41 = v40;
          }
          else
          {
            v41 = 0x7FFFFFF;
          }
          v42 = v27[i] + 16 * v41;
        }
        else
        {
          v42 = 0x7FFFFFFF;
        }
        v43 = v42;
      }
      else
      {
        if ( v19 <= 0x7FFFFFF )
        {
          if ( v19 >= -134217728 )
            v49 = v19;
          else
            v49 = -134217728;
          v34 = v49;
        }
        else
        {
          v34 = 0x7FFFFFF;
        }
        if ( ((16 * v34) & v27[i]) >= 0 )
        {
          if ( v19 <= 0x7FFFFFF )
          {
            if ( v19 >= -134217728 )
              v35 = v19;
            else
              v35 = -134217728;
            v36 = v35;
          }
          else
          {
            v36 = 0x7FFFFFF;
          }
          v37 = v27[i] + 16 * v36;
        }
        else
        {
          v37 = 0x80000000;
        }
        v43 = v37;
      }
      SR_VEC_LANES(128, v21[4], i32)[i] = v43;
      if ( (((int)((v31 * (__int64)SR_VEC_LANES(128, v21[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((v31 * (__int64)SR_VEC_LANES(128, v21[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
          v44 = (((int)((v31 * (__int64)SR_VEC_LANES(128, v21[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
        else
          v44 = -32768;
        v45 = v44;
      }
      else
      {
        v45 = 0x7FFF;
      }
      SR_VEC_PTR_LANES(128, v53, i16)[i] = v45;
    }
    sub_1401FC920(v21, (__m128i *)((char *)v21 + 4 * *(int *)(a1 + 2332)), 0x40u);
    v51 += *(int *)(a1 + 2332);
    v53 = (     __m128i *)((char *)v53 + 2 * *(int *)(a1 + 2332));
  }
  sub_1401FC920((__m128i *)(a1 + 1284), v21, 0x40u);
  return sub_1401F8B20((unsigned __int64)&i ^ v59);
}

// 1402827F8: using guessed type __int16 word_1402827F8[4];

//----- (00000001401C92B0) ----------------------------------------------------
__int64            sub_1401C92B0(_DWORD *a1, __int64 a2, int a3, __int16 a4, int a5)
{
  __int64 v6; // [rsp+0h] [rbp-128h] BYREF
  int i; // [rsp+30h] [rbp-F8h]
  int v8; // [rsp+34h] [rbp-F4h]
  int j; // [rsp+38h] [rbp-F0h]
  int v10; // [rsp+3Ch] [rbp-ECh]
  int k; // [rsp+40h] [rbp-E8h]
  int v12; // [rsp+44h] [rbp-E4h]
  int v13; // [rsp+48h] [rbp-E0h]
  _BOOL8 v14; // [rsp+50h] [rbp-D8h]
  __int64 v15; // [rsp+58h] [rbp-D0h]
  __int64 v16; // [rsp+60h] [rbp-C8h]
  _DWORD v17[40]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+110h] [rbp-18h]
  __int16 v21; // [rsp+140h] [rbp+18h]

  v21 = a3;
  v13 = sub_14019AFE0(a1, (__int64)&unk_140282458 + 9 * (a3 >> 1), 8);
  v8 = a5 >> 4;
  if ( 16 * (a5 >> 4) < a5 )
    ++v8;
  v16 = (__int64)&unk_1402822F0 + 18 * v13;
  for ( i = 0; i < v8; ++i )
  {
    v17[i + 20] = 0;
    for ( v17[i] = sub_14019AFE0(a1, v16, 8);
          v17[i] == 17;
          v17[i] = sub_14019AFE0(a1, (__int64)&unk_1402822F0 + v14 + 162, 8) )
    {
      v14 = ++v17[i + 20] == 10;
    }
  }
  for ( i = 0; i < v8; ++i )
  {
    if ( (int)v17[i] <= 0 )
      sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a2 + 32LL * (__int16)i)), 0, 0x20u);
    else
      sub_1401C2340((__int16 *)(a2 + 32LL * (__int16)i), a1, v17[i]);
  }
  for ( i = 0; i < v8; ++i )
  {
    if ( (int)v17[i + 20] > 0 )
    {
      v12 = v17[i + 20];
      v15 = a2 + 32LL * (__int16)i;
      for ( j = 0; j < 16; ++j )
      {
        v10 = *(__int16 *)(v15 + 2LL * j);
        for ( k = 0; k < v12; ++k )
          v10 = sub_14019AFE0(a1, (__int64)&unk_14028213C, 8) + 2 * v10;
        *(_WORD *)(v15 + 2LL * j) = v10;
      }
      v17[i] |= 32 * v12;
    }
  }
  sub_1401C0EF0(a1, a2, a5, v21, a4, (__int64)v17);
  return sub_1401F8B20((unsigned __int64)&v6 ^ v18);
}


//----- (00000001401C9630) ----------------------------------------------------
_DWORD *           sub_1401C9630(_DWORD *a1)
{
  int i; // [rsp+0h] [rbp-18h]
  int v3; // [rsp+4h] [rbp-14h]
  int v4; // [rsp+Ch] [rbp-Ch]

  v4 = 0x7FFF / (a1[585] + 1);
  v3 = 0;
  for ( i = 0; i < a1[585]; ++i )
  {
    v3 += v4;
    *((_WORD *)a1 + i + 2038) = v3;
  }
  a1[1043] = 0;
  a1[1044] = 3176576;
  return a1;
}


//----- (00000001401C96E0) ----------------------------------------------------
__int64            sub_1401C96E0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
       __m128i *v6; // rcx
  unsigned __int64 v7; // rcx
  void *v8; // rsp
  int i; // [rsp+20h] [rbp+0h] BYREF
  int v11; // [rsp+24h] [rbp+4h]
  __m128i *p_i; // [rsp+28h] [rbp+8h]
  signed int v13; // [rsp+30h] [rbp+10h]
  __m128i *v14; // [rsp+38h] [rbp+18h]
  signed int v15; // [rsp+40h] [rbp+20h]
  int v16; // [rsp+44h] [rbp+24h]
  int v17; // [rsp+48h] [rbp+28h]
  int v18; // [rsp+4Ch] [rbp+2Ch]
  int v19; // [rsp+50h] [rbp+30h]
  int v20; // [rsp+54h] [rbp+34h]
  int v21; // [rsp+58h] [rbp+38h]
  __int32 v22; // [rsp+5Ch] [rbp+3Ch]
  int v23; // [rsp+60h] [rbp+40h]
  int v24; // [rsp+64h] [rbp+44h]
  int v25; // [rsp+68h] [rbp+48h]
  int v26; // [rsp+6Ch] [rbp+4Ch]
  __int32 v27; // [rsp+70h] [rbp+50h]
  __int32 v28; // [rsp+74h] [rbp+54h]
  int v29; // [rsp+78h] [rbp+58h]
  int v30; // [rsp+7Ch] [rbp+5Ch]
  int v31; // [rsp+80h] [rbp+60h]
  int v32; // [rsp+84h] [rbp+64h]
  int v33; // [rsp+88h] [rbp+68h]
  int v34; // [rsp+8Ch] [rbp+6Ch]
  int v35; // [rsp+90h] [rbp+70h]
  int v36; // [rsp+94h] [rbp+74h]
  int v37; // [rsp+98h] [rbp+78h]
  int v38; // [rsp+9Ch] [rbp+7Ch]
  __m128i *v39; // [rsp+A0h] [rbp+80h]
  __m128i *v40; // [rsp+A8h] [rbp+88h]
  __m128i *v41; // [rsp+B0h] [rbp+90h]
  _WORD v42[16]; // [rsp+B8h] [rbp+98h] BYREF
  __int64 v43; // [rsp+D8h] [rbp+B8h]

  v14 = (__m128i *)(a1 + 2796);
  if ( *(_DWORD *)(a1 + 2316) != *(_DWORD *)(a1 + 4180) )
  {
    sub_1401C9630((_DWORD *)a1);
    SR_VEC_LANES(128, v14[86], i32)[2] = *(_DWORD *)(a1 + 2316);
  }
  if ( !*(_DWORD *)(a1 + 4184) && !*(_DWORD *)(a1 + 4188) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 2340); ++i )
      SR_VEC_LANES(128, v14[80], i16)[i] += (unsigned int)(16348 * (*(__int16 *)(a1 + 2LL * i + 2344) - SR_VEC_LANES(128, v14[80], i16)[i])) >> 16;
    v37 = 0;
    v38 = 0;
    for ( i = 0; i < *(_DWORD *)(a1 + 2324); ++i )
    {
      if ( *(_DWORD *)(a2 + 4LL * i + 16) > v37 )
      {
        v37 = *(_DWORD *)(a2 + 4LL * i + 16);
        v38 = i;
      }
    }
    v4 = 4LL * *(_DWORD *)(a1 + 2332) * (*(_DWORD *)(a1 + 2324) - 1);
    v39 = (__m128i *)((char *)v14 + 4 * *(int *)(a1 + 2332));
    sub_1401FC920(v39, v14, v4);
    v5 = 4LL * *(int *)(a1 + 2332);
    v6 = (     __m128i *)(a1 + 4LL * *(_DWORD *)(a1 + 2332) * v38 + 4);
    v40 = v14;
    sub_1401FC920(v14, v6, v5);
    for ( i = 0; i < *(_DWORD *)(a1 + 2324); ++i )
      SR_VEC_LANES(128, v14[86], i32)[0] += (4634LL * (*(_DWORD *)(a2 + 4LL * i + 16) - SR_VEC_LANES(128, v14[86], i32)[0])) >> 16;
  }
  if ( *(_DWORD *)(a1 + 4184) )
  {
    v7 = 4LL * (a4 + 16) + 15;
    if ( v7 <= 4LL * (a4 + 16) )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    p_i = (__m128i *)&i;
    v13 = (*(int *)(a1 + 4272) * (__int64)*(__int16 *)(a1 + 4252)) >> 16;
    if ( v13 < 0x200000 && SR_VEC_LANES(128, v14[86], i32)[0] <= 0x800000 )
    {
      v13 = (v13 * (__int64)v13) >> 16;
      v13 = ((SR_VEC_LANES(128, v14[86], i32)[0] * (__int64)SR_VEC_LANES(128, v14[86], i32)[0]) >> 16) - 32 * v13;
      v13 = (unsigned int)sub_1401BE4C0(v13) << 8;
    }
    else
    {
      v13 = (v13 >> 16) * (v13 >> 16);
      v13 = (SR_VEC_LANES(128, v14[86], i32)[0] >> 16) * (SR_VEC_LANES(128, v14[86], i32)[0] >> 16) - 32 * v13;
      v13 = (unsigned int)sub_1401BE4C0(v13) << 16;
    }
    v15 = v13 >> 6;
    v41 = p_i + 4;
    sub_1401CA9F0((__int64)SR_VEC_LANES(128, p_i[4], i64), (__int64)v14, a4, &SR_VEC_LANES(128, v14[86], i32)[1]);
    CWinApp__ShowAppMessageBox((struct CWinApp *)v42, SR_VEC_LANES(128, v14[80], i8), *(_DWORD *)(a1 + 2340));
    sub_1401FC920(p_i, v14 + 82, 0x40u);
    for ( i = 0; i < a4; ++i )
    {
      v11 = *(int *)(a1 + 2340) >> 1;
      v11 += (v42[0] * (__int64)SR_VEC_LANES(128, p_i[3], i32)[i + 3]) >> 16;
      v11 += (v42[1] * (__int64)SR_VEC_LANES(128, p_i[3], i32)[i + 2]) >> 16;
      v11 += (v42[2] * (__int64)SR_VEC_LANES(128, p_i[3], i32)[i + 1]) >> 16;
      v11 += (v42[3] * (__int64)SR_VEC_LANES(128, p_i[3], i32)[i]) >> 16;
      v11 += (v42[4] * (__int64)SR_VEC_LANES(128, p_i[2], i32)[i + 3]) >> 16;
      v11 += (v42[5] * (__int64)SR_VEC_LANES(128, p_i[2], i32)[i + 2]) >> 16;
      v11 += (v42[6] * (__int64)SR_VEC_LANES(128, p_i[2], i32)[i + 1]) >> 16;
      v11 += (v42[7] * (__int64)SR_VEC_LANES(128, p_i[2], i32)[i]) >> 16;
      v11 += (v42[8] * (__int64)SR_VEC_LANES(128, p_i[1], i32)[i + 3]) >> 16;
      v11 += (v42[9] * (__int64)SR_VEC_LANES(128, p_i[1], i32)[i + 2]) >> 16;
      if ( *(_DWORD *)(a1 + 2340) == 16 )
      {
        v11 += (v42[10] * (__int64)SR_VEC_LANES(128, p_i[1], i32)[i + 1]) >> 16;
        v11 += (v42[11] * (__int64)SR_VEC_LANES(128, p_i[1], i32)[i]) >> 16;
        v11 += (v42[12] * (__int64)SR_VEC_PTR_LANES(128, p_i, i32)[i + 3]) >> 16;
        v11 += (v42[13] * (__int64)SR_VEC_PTR_LANES(128, p_i, i32)[i + 2]) >> 16;
        v11 += (v42[14] * (__int64)SR_VEC_PTR_LANES(128, p_i, i32)[i + 1]) >> 16;
        v11 += (v42[15] * (__int64)SR_VEC_PTR_LANES(128, p_i, i32)[i]) >> 16;
      }
      if ( v11 <= 0x7FFFFFF )
      {
        if ( v11 >= -134217728 )
          v16 = v11;
        else
          v16 = -134217728;
        v17 = v16;
      }
      else
      {
        v17 = 0x7FFFFFF;
      }
      if ( 16 * v17 + SR_VEC_LANES(128, p_i[4], i32)[i] < 0 )
      {
        if ( v11 <= 0x7FFFFFF )
        {
          if ( v11 >= -134217728 )
            v23 = v11;
          else
            v23 = -134217728;
          v24 = v23;
        }
        else
        {
          v24 = 0x7FFFFFF;
        }
        if ( ((16 * v24) | SR_VEC_LANES(128, p_i[4], i32)[i]) < 0 )
        {
          if ( v11 <= 0x7FFFFFF )
          {
            if ( v11 >= -134217728 )
              v25 = v11;
            else
              v25 = -134217728;
            v26 = v25;
          }
          else
          {
            v26 = 0x7FFFFFF;
          }
          v27 = SR_VEC_LANES(128, p_i[4], i32)[i] + 16 * v26;
        }
        else
        {
          v27 = 0x7FFFFFFF;
        }
        v28 = v27;
      }
      else
      {
        if ( v11 <= 0x7FFFFFF )
        {
          if ( v11 >= -134217728 )
            v18 = v11;
          else
            v18 = -134217728;
          v19 = v18;
        }
        else
        {
          v19 = 0x7FFFFFF;
        }
        if ( ((16 * v19) & SR_VEC_LANES(128, p_i[4], i32)[i]) >= 0 )
        {
          if ( v11 <= 0x7FFFFFF )
          {
            if ( v11 >= -134217728 )
              v20 = v11;
            else
              v20 = -134217728;
            v21 = v20;
          }
          else
          {
            v21 = 0x7FFFFFF;
          }
          v22 = SR_VEC_LANES(128, p_i[4], i32)[i] + 16 * v21;
        }
        else
        {
          v22 = 0x80000000;
        }
        v28 = v22;
      }
      SR_VEC_LANES(128, p_i[4], i32)[i] = v28;
      if ( (((int)((v15 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((v15 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
          v29 = (((int)((v15 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
        else
          v29 = -32768;
        v30 = v29;
      }
      else
      {
        v30 = 0x7FFF;
      }
      if ( v30 + *(__int16 *)(a3 + 2LL * i) <= 0x7FFF )
      {
        if ( (((int)((v15 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
        {
          if ( (((int)((v15 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
            v31 = (((int)((v15 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
          else
            v31 = -32768;
          v32 = v31;
        }
        else
        {
          v32 = 0x7FFF;
        }
        if ( v32 + *(__int16 *)(a3 + 2LL * i) >= -32768 )
        {
          if ( (((int)((v15 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
          {
            if ( (((int)((v15 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
              v33 = (((int)((v15 * (__int64)SR_VEC_LANES(128, p_i[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
            else
              v33 = -32768;
            v34 = v33;
          }
          else
          {
            v34 = 0x7FFF;
          }
          v35 = v34 + *(__int16 *)(a3 + 2LL * i);
        }
        else
        {
          v35 = -32768;
        }
        v36 = v35;
      }
      else
      {
        v36 = 0x7FFF;
      }
      *(_WORD *)(a3 + 2LL * i) = v36;
    }
    sub_1401FC920(v14 + 82, (__m128i *)((char *)p_i + 4 * a4), 0x40u);
  }
  else
  {
    sub_1401FCD30((void *)(uintptr_t)((__m128i *)SR_VEC_LANES(128, v14[82], i16)), 0, 4LL * *(int *)(a1 + 2340));
  }
  return sub_1401F8B20((unsigned __int64)&i ^ v43);
}


//----- (00000001401CA330) ----------------------------------------------------
__int64            sub_1401CA330(__int64 a1, _DWORD *a2, int a3, int a4, int a5)
{
  __int64 v6; // [rsp+0h] [rbp-88h] BYREF
  int i; // [rsp+20h] [rbp-68h]
  char *v8; // [rsp+28h] [rbp-60h]
  int v9; // [rsp+30h] [rbp-58h]
  int j; // [rsp+34h] [rbp-54h]
  int v11; // [rsp+38h] [rbp-50h]
  int v12; // [rsp+3Ch] [rbp-4Ch]
  int v13; // [rsp+40h] [rbp-48h]
  int v14; // [rsp+44h] [rbp-44h]
  _WORD v15[16]; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+68h] [rbp-20h] BYREF
  __int64 v17; // [rsp+78h] [rbp-10h]

  if ( a4 )
    v8 = (char *)(a1 + 36LL * a3 + 6120);
  else
    v8 = (char *)(a1 + 4752);
  v11 = v8[30] + 2 * v8[29];
  if ( a4 || v11 >= 2 )
    sub_14019A4F0(a2, v11 - 2, (__int64)&unk_140282454, 8);
  else
    sub_14019A4F0(a2, v11, (__int64)&unk_14028246C, 8);
  if ( a5 == 2 )
  {
    sub_14019A4F0(a2, *v8, (__int64)&unk_140282230, 8);
  }
  else
  {
    sub_14019A4F0(a2, *v8 >> 3, (__int64)&unk_140282218 + 8 * v8[29], 8);
    sub_14019A4F0(a2, *v8 & 7, (__int64)&unk_140282538, 8);
  }
  for ( i = 1; i < *(_DWORD *)(a1 + 4580); ++i )
    sub_14019A4F0(a2, v8[i], (__int64)&unk_140282230, 8);
  sub_14019A4F0(a2, v8[8], **(__int16 **)(a1 + 4704) * (v8[29] >> 1) + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 24LL), 8);
  sub_1401C6E20((__int64)v15, (__int64)v16, *(_QWORD *)(a1 + 4704), v8[8]);
  for ( i = 0; i < *(__int16 *)(*(_QWORD *)(a1 + 4704) + 2LL); ++i )
  {
    if ( v8[i + 9] < 4 )
    {
      if ( v8[i + 9] > -4 )
      {
        sub_14019A4F0(a2, v8[i + 9] + 4, (__int16)v15[i] + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 48LL), 8);
      }
      else
      {
        sub_14019A4F0(a2, 0, (__int16)v15[i] + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 48LL), 8);
        sub_14019A4F0(a2, -v8[i + 9] - 4, (__int64)&unk_140282264, 8);
      }
    }
    else
    {
      sub_14019A4F0(a2, 8, (__int16)v15[i] + *(_QWORD *)(*(_QWORD *)(a1 + 4704) + 48LL), 8);
      sub_14019A4F0(a2, v8[i + 9] - 4, (__int64)&unk_140282264, 8);
    }
  }
  if ( *(_DWORD *)(a1 + 4580) == 4 )
    sub_14019A4F0(a2, v8[31], (__int64)&unk_1402827F0, 8);
  if ( v8[29] == 2 )
  {
    v12 = 1;
    if ( a5 == 2 && *(_DWORD *)(a1 + 5784) == 2 )
    {
      v9 = *((__int16 *)v8 + 13) - *(__int16 *)(a1 + 5788);
      if ( v9 >= -8 && v9 <= 11 )
      {
        v9 += 9;
        v12 = 0;
      }
      else
      {
        v9 = 0;
      }
      sub_14019A4F0(a2, v9, (__int64)&unk_140282290, 8);
    }
    if ( v12 )
    {
      v13 = *((__int16 *)v8 + 13) / (*(int *)(a1 + 4576) >> 1);
      v14 = *((__int16 *)v8 + 13) - (__int16)(*(int *)(a1 + 4576) >> 1) * (__int16)v13;
      sub_14019A4F0(a2, v13, (__int64)&unk_140282270, 8);
      sub_14019A4F0(a2, v14, *(_QWORD *)(a1 + 4688), 8);
    }
    *(_WORD *)(a1 + 5788) = *((_WORD *)v8 + 13);
    sub_14019A4F0(a2, v8[28], *(_QWORD *)(a1 + 4696), 8);
    sub_14019A4F0(a2, v8[32], (__int64)&unk_14028226C, 8);
    for ( j = 0; j < *(_DWORD *)(a1 + 4580); ++j )
      sub_14019A4F0(a2, v8[j + 4], (__int64)*(&off_1402825D8 + v8[32]), 8);
    if ( !a5 )
      sub_14019A4F0(a2, v8[33], (__int64)&unk_1402822DC, 8);
  }
  *(_DWORD *)(a1 + 5784) = v8[29];
  sub_14019A4F0(a2, v8[34], (__int64)&unk_1402821FC, 8);
  return sub_1401F8B20((unsigned __int64)&v6 ^ v17);
}

// 1402825D8: using guessed type _UNKNOWN *off_1402825D8;

//----- (00000001401CA9F0) ----------------------------------------------------
int *           sub_1401CA9F0(__int64 a1, __int64 a2, int a3, int *a4)
{
  int i; // [rsp+0h] [rbp-18h]
  int j; // [rsp+4h] [rbp-14h]
  int v7; // [rsp+8h] [rbp-10h]

  for ( i = 255; i > a3; i >>= 1 )
    ;
  v7 = *a4;
  for ( j = 0; j < a3; ++j )
  {
    v7 = 196314165 * v7 + 907633515;
    *(_DWORD *)(a1 + 4LL * j) = *(_DWORD *)(a2 + 4LL * (i & (v7 >> 24)));
  }
  *a4 = v7;
  return a4;
}


//----- (00000001401CAAA0) ----------------------------------------------------
__int64            sub_1401CAAA0(_DWORD *a1)
{
  *a1 = 20264;
  return 0;
}


//----- (00000001401CAAD0) ----------------------------------------------------
__int64            sub_1401CAAD0(__int64 a1, int a2, _DWORD *a3)
{
  int v4; // [rsp+20h] [rbp-18h]
  int i; // [rsp+24h] [rbp-14h]

  v4 = 0;
  sub_1401FCD30((void *)(uintptr_t)((_WORD *)a1), 0, 0x4F28u);
  for ( i = 0; i < 2; ++i )
    v4 += sub_1401D26F0((_DWORD *)(10088LL * i + a1), a2);
  *(_DWORD *)(a1 + 20240) = 1;
  *(_DWORD *)(a1 + 20244) = 1;
  return (unsigned int)sub_1401D68F0(a1, a3) + v4;
}


//----- (00000001401CABA0) ----------------------------------------------------
__int64            sub_1401CABA0(
             __m128i *a1,
        int *a2,
             __m128i *a3,
        int a4,
        unsigned __int8 **a5,
        int *a6,
        int a7,
        int a8)
{
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char v15; // al
  __int32 v16; // eax
  int v17; // eax
  __int8 *v18; // rdi
  __int8 *v19; // rsi
  int i; // [rsp+60h] [rbp+0h] BYREF
       __m128i *v22; // [rsp+68h] [rbp+8h]
  int j; // [rsp+70h] [rbp+10h]
  int v24; // [rsp+74h] [rbp+14h]
  int v25; // [rsp+78h] [rbp+18h]
  int v26; // [rsp+7Ch] [rbp+1Ch]
  __int32 v27; // [rsp+80h] [rbp+20h]
  int v28; // [rsp+84h] [rbp+24h]
  int v29; // [rsp+88h] [rbp+28h]
  _BYTE v30[4]; // [rsp+8Ch] [rbp+2Ch] BYREF
  int v31; // [rsp+90h] [rbp+30h]
  int v32; // [rsp+94h] [rbp+34h]
  int v33; // [rsp+98h] [rbp+38h]
  int v34; // [rsp+9Ch] [rbp+3Ch]
  int v35; // [rsp+A0h] [rbp+40h]
  void *p_i; // [rsp+A8h] [rbp+48h]
  __int32 v37; // [rsp+B0h] [rbp+50h]
  int v38; // [rsp+B4h] [rbp+54h]
  int v39; // [rsp+B8h] [rbp+58h]
  unsigned int v40; // [rsp+BCh] [rbp+5Ch]
  __int32 v41; // [rsp+C0h] [rbp+60h]
  __int32 v42; // [rsp+C4h] [rbp+64h]
  int v43; // [rsp+C8h] [rbp+68h]
  BOOL v44; // [rsp+CCh] [rbp+6Ch]
  int v45; // [rsp+D0h] [rbp+70h]
  int v46; // [rsp+D4h] [rbp+74h]
  int v47; // [rsp+D8h] [rbp+78h]
  int v48; // [rsp+DCh] [rbp+7Ch]
  int v49; // [rsp+E0h] [rbp+80h]
  int v50; // [rsp+E4h] [rbp+84h]
  BOOL v51; // [rsp+E8h] [rbp+88h]
  BOOL v52; // [rsp+ECh] [rbp+8Ch]
  __int32 v53; // [rsp+F0h] [rbp+90h]
  __int32 v54; // [rsp+F4h] [rbp+94h]
  BOOL v55; // [rsp+F8h] [rbp+98h]
  int v56; // [rsp+FCh] [rbp+9Ch]
  int v57; // [rsp+100h] [rbp+A0h]
  int v58; // [rsp+104h] [rbp+A4h]
  BOOL v59; // [rsp+108h] [rbp+A8h]
  int v60; // [rsp+10Ch] [rbp+ACh]
  unsigned int v61; // [rsp+110h] [rbp+B0h]
  __int32 v62; // [rsp+114h] [rbp+B4h]
  int v63; // [rsp+118h] [rbp+B8h]
  __int32 v64; // [rsp+11Ch] [rbp+BCh]
  int v65; // [rsp+120h] [rbp+C0h]
  __int32 v66; // [rsp+124h] [rbp+C4h]
  __int32 v67; // [rsp+128h] [rbp+C8h]
  BOOL v68; // [rsp+12Ch] [rbp+CCh]
  int v69[2]; // [rsp+130h] [rbp+D0h] BYREF
  __int64 v70; // [rsp+138h] [rbp+D8h]
  __int64 v71; // [rsp+140h] [rbp+E0h]
  __int8 *v72; // [rsp+148h] [rbp+E8h]
  _DWORD v73[5]; // [rsp+150h] [rbp+F0h] BYREF
  __int64 v74; // [rsp+168h] [rbp+108h]

  v57 = 0;
  v58 = 0;
  v24 = 0;
  v26 = 0;
  v22 = a1;
  if ( a2[17] )
  {
    SR_VEC_LANES(128, v22[291], i32)[2] = 1;
    SR_VEC_LANES(128, v22[922], i32)[0] = 1;
  }
  SR_VEC_LANES(128, v22[990], i32)[3] = 0;
  SR_VEC_LANES(128, v22[360], i32)[1] = 0;
  v24 = sub_1401C1090(a2);
  if ( !v24 )
  {
    a2[22] = 0;
    if ( a2[1] > SR_VEC_LANES(128, v22[1265], i32)[1] )
    {
      v24 += sub_1401D26F0(&SR_VEC_LANES(128, v22[630], i32)[2], SR_VEC_LANES(128, v22[319], i32)[1]);
      sub_1401FCD30((void *)(uintptr_t)((     __m128i *)SR_VEC_LANES(128, v22[1261], i16)), 0, 4u);
      sub_1401FCD30((void *)(uintptr_t)(&SR_VEC_LANES(128, v22[1261], i16)[4]), 0, 4u);
      SR_VEC_LANES(128, v22[1261], i32)[3] = 0;
      SR_VEC_LANES(128, v22[1262], i32)[0] = 1;
      SR_VEC_LANES(128, v22[1262], i32)[1] = 0;
      SR_VEC_LANES(128, v22[1262], i32)[2] = 1;
      SR_VEC_LANES(128, v22[1262], i16)[7] = 0;
      SR_VEC_LANES(128, v22[1262], i16)[6] = 0x4000;
      if ( SR_VEC_LANES(128, v22[1265], i32)[0] == 2 )
      {
        sub_1401FC920((__m128i *)&SR_VEC_LANES(128, v22[992], u64)[1], v22 + 362, 0x130u);
        sub_1401FC920((__m128i *)&SR_VEC_LANES(128, v22[630], u64)[1], v22, 8u);
      }
    }
    v59 = a2[6] != SR_VEC_LANES(128, v22[288], i32)[1] || SR_VEC_LANES(128, v22[1265], i32)[1] != a2[1];
    v68 = v59;
    SR_VEC_LANES(128, v22[1265], i32)[0] = *a2;
    SR_VEC_LANES(128, v22[1265], i32)[1] = a2[1];
    v31 = 100 * a4 / a2[2];
    if ( v31 <= 1 )
      v60 = 1;
    else
      v60 = v31 >> 1;
    v35 = v60;
    v33 = 0;
    if ( a7 )
    {
      if ( v31 != 1 )
        return sub_1401F8B20((unsigned __int64)&i ^ v74);
      if ( a7 == 2 )
      {
        qmemcpy(v73, &v22[1], sizeof(v73));
        v73[4] = SR_VEC_LANES(128, v22[286], i32)[0];
      }
      for ( i = 0; i < a2[1]; ++i )
      {
        v24 = sub_1401D26F0(&SR_VEC_PTR_LANES(128, v22, i32)[2522 * i], SR_VEC_LANES(128, v22[319], i32)[2522 * i + 1]);
        if ( a7 == 2 )
          qmemcpy((char *)&v22[1] + 10088 * i, v73, 0x14u);
      }
      v57 = a2[6];
      a2[6] = 10;
      v58 = a2[9];
      a2[9] = 0;
      for ( i = 0; i < a2[1]; ++i )
      {
        SR_VEC_LANES(128, v22[291], i32)[2522 * i + 3] = 0;
        SR_VEC_LANES(128, v22[292], i32)[2522 * i + 2] = 1;
      }
    }
    else if ( a2[2] * v31 != 100 * a4 || a4 < 0 || 1000 * a4 > a2[2] * a2[6] )
    {
      return sub_1401F8B20((unsigned __int64)&i ^ v74);
    }
    for ( i = 0; i < a2[1]; ++i )
    {
      if ( i == 1 )
        v40 = SR_VEC_LANES(128, v22[286], u32)[0];
      else
        v40 = 0;
      v61 = v40;
      v24 = sub_1401D2790(&SR_VEC_PTR_LANES(128, v22, i32)[2522 * i], a2, SR_VEC_LANES(128, v22[1266], i32)[0], i, v40);
      if ( v24 )
        return sub_1401F8B20((unsigned __int64)&i ^ v74);
      if ( SR_VEC_LANES(128, v22[291], i32)[2522 * i + 2] || v68 )
      {
        for ( j = 0; j < SR_VEC_LANES(128, v22[360], i32)[0]; ++j )
          SR_VEC_LANES(128, v22[296], i32)[2522 * i + 1 + j] = 0;
      }
      SR_VEC_LANES(128, v22[381], i32)[2522 * i + 1] = SR_VEC_LANES(128, v22[381], i32)[2522 * i];
    }
    v37 = SR_VEC_LANES(128, v22[286], i32)[0] * 10 * v31;
    v67 = SR_VEC_LANES(128, v22[284], i32)[3] * v37 / (1000 * SR_VEC_LANES(128, v22[286], i32)[0]);
    v8 = 2LL * v67 + 15;
    if ( v8 <= 2LL * v67 )
      v8 = 0xFFFFFFFFFFFFFF0LL;
    v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
    p_i = &i;
    while ( 1 )
    {
      v27 = SR_VEC_LANES(128, v22[286], i32)[2] - SR_VEC_LANES(128, v22[359], i32)[3];
      v41 = v27 >= v37 ? v37 : v27;
      v27 = v41;
      v26 = SR_VEC_LANES(128, v22[284], i32)[3] * v41 / (1000 * SR_VEC_LANES(128, v22[286], i32)[0]);
      if ( *a2 == 2 && a2[1] == 2 )
      {
        v62 = SR_VEC_LANES(128, v22[360], i32)[1];
        for ( i = 0; i < v26; ++i )
          *((_WORD *)p_i + i) = SR_VEC_PTR_LANES(128, a3, i16)[2 * i];
        if ( SR_VEC_LANES(128, v22[1265], i32)[2] == 1 && !v62 )
          sub_1401FC920((__m128i *)&SR_VEC_LANES(128, v22[992], u64)[1], v22 + 362, 0x130u);
        v10 = sub_1401BAA30(
                (     __m128i *)SR_VEC_LANES(128, v22[362], i32),
                (__m128i *)((char *)&SR_VEC_LANES(128, v22[319], u64)[1] + 2 * SR_VEC_LANES(128, v22[359], i32)[3] + 4),
                (     __m128i *)p_i,
                v26);
        v24 += v10;
        SR_VEC_LANES(128, v22[359], i32)[3] += v27;
        v27 = SR_VEC_LANES(128, v22[917], i32)[0] - SR_VEC_LANES(128, v22[990], i32)[1];
        v42 = v27 >= SR_VEC_LANES(128, v22[916], i32)[2] * 10 * v31 ? SR_VEC_LANES(128, v22[916], i32)[2] * 10 * v31 : v27;
        v27 = v42;
        for ( i = 0; i < v26; ++i )
          *((_WORD *)p_i + i) = SR_VEC_PTR_LANES(128, a3, i16)[2 * i + 1];
        v11 = sub_1401BAA30(
                &SR_VEC_LANES(128, v22[992], i32)[2],
                (__m128i *)((char *)SR_VEC_LANES(128, v22[950], i64) + 2 * SR_VEC_LANES(128, v22[990], i32)[1] + 4),
                (     __m128i *)p_i,
                v26);
        v24 += v11;
        SR_VEC_LANES(128, v22[990], i32)[1] += v27;
      }
      else if ( *a2 == 2 && a2[1] == 1 )
      {
        for ( i = 0; i < v26; ++i )
        {
          v43 = SR_VEC_PTR_LANES(128, a3, i16)[2 * i + 1] + SR_VEC_PTR_LANES(128, a3, i16)[2 * i];
          *((_WORD *)p_i + i) = (v43 & 1) + (v43 >> 1);
        }
        v12 = sub_1401BAA30(
                (     __m128i *)SR_VEC_LANES(128, v22[362], i32),
                (__m128i *)((char *)&SR_VEC_LANES(128, v22[319], u64)[1] + 2 * SR_VEC_LANES(128, v22[359], i32)[3] + 4),
                (     __m128i *)p_i,
                v26);
        v24 += v12;
        if ( SR_VEC_LANES(128, v22[1265], i32)[2] == 2 && !SR_VEC_LANES(128, v22[360], i32)[1] )
        {
          v13 = sub_1401BAA30(
                  &SR_VEC_LANES(128, v22[992], i32)[2],
                  (__m128i *)((char *)SR_VEC_LANES(128, v22[950], i64) + 2 * SR_VEC_LANES(128, v22[990], i32)[1] + 4),
                  (     __m128i *)p_i,
                  v26);
          v24 += v13;
          for ( i = 0; i < SR_VEC_LANES(128, v22[286], i32)[2]; ++i )
            SR_VEC_LANES(128, v22[319], i16)[SR_VEC_LANES(128, v22[359], i32)[3] + 6 + i] = (SR_VEC_LANES(128, v22[950], i16)[SR_VEC_LANES(128, v22[990], i32)[1] + 2 + i]
                                                               + SR_VEC_LANES(128, v22[319], i16)[SR_VEC_LANES(128, v22[359], i32)[3] + 6 + i]) >> 1;
        }
        SR_VEC_LANES(128, v22[359], i32)[3] += v27;
      }
      else
      {
        sub_1401FC920((__m128i *)p_i, a3, 2LL * v26);
        v14 = sub_1401BAA30(
                (     __m128i *)SR_VEC_LANES(128, v22[362], i32),
                (__m128i *)((char *)&SR_VEC_LANES(128, v22[319], u64)[1] + 2 * SR_VEC_LANES(128, v22[359], i32)[3] + 4),
                (     __m128i *)p_i,
                v26);
        v24 += v14;
        SR_VEC_LANES(128, v22[359], i32)[3] += v27;
      }
      a3 = (     __m128i *)((char *)a3 + 2 * *a2 * v26);
      a4 -= v26;
      SR_VEC_LANES(128, v22[1266], i32)[0] = 0;
      if ( SR_VEC_LANES(128, v22[359], i32)[3] < SR_VEC_LANES(128, v22[286], i32)[2] )
        break;
      if ( !SR_VEC_LANES(128, v22[360], i32)[1] && !a7 )
      {
        v30[0] = 0;
        v30[1] = 0;
        v15 = *((_BYTE *)a2 + 4) * (SR_VEC_LANES(128, v22[360], i8)[0] + 1);
        v63 = 256;
        v30[0] = -(char)(256 >> v15);
        sub_14019A4F0(a5, 0, (__int64)v30, 8);
        for ( i = 0; i < a2[1]; ++i )
        {
          v34 = 0;
          for ( j = 0; j < SR_VEC_LANES(128, v22[360], i32)[2522 * i]; ++j )
          {
            v70 = j;
            v34 |= SR_VEC_LANES(128, v22[296], i32)[2522 * i + 1 + j] << j;
          }
          v44 = v34 > 0;
          SR_VEC_LANES(128, v22[296], i8)[10088 * i + 3] = v44;
          if ( v34 && SR_VEC_LANES(128, v22[360], i32)[2522 * i] > 1 )
            sub_14019A4F0(a5, v34 - 1, (__int64)*(&off_1402827E0 + SR_VEC_LANES(128, v22[360], i32)[2522 * i] - 2), 8);
        }
        for ( j = 0; j < SR_VEC_LANES(128, v22[360], i32)[0]; ++j )
        {
          for ( i = 0; i < a2[1]; ++i )
          {
            if ( SR_VEC_LANES(128, v22[296], i32)[2522 * i + 1 + j] )
            {
              if ( a2[1] == 2 && !i )
              {
                sub_1401C0940(a5, (__int64)SR_VEC_LANES(128, v22[1263], i64) + 6 * j + 2);
                if ( !SR_VEC_LANES(128, v22[926], i32)[j + 3] )
                  sub_1401C0A60(a5, SR_VEC_LANES(128, v22[1264], i8)[j + 4]);
              }
              if ( j > 0 && SR_VEC_LANES(128, v22[296], i32)[2522 * i + j] )
                v45 = 2;
              else
                v45 = 0;
              sub_1401CA330((__int64)&SR_VEC_PTR_LANES(128, v22, i64)[1261 * i], a5, j, 1, v45);
              sub_1401C1790(
                a5,
                SR_VEC_LANES(128, v22[384], i8)[10088 * i + 5 + 36 * j],
                SR_VEC_LANES(128, v22[384], i8)[10088 * i + 6 + 36 * j],
                (__int64)&SR_VEC_LANES(128, v22[389], i64)[1261 * i + 40 * j] + 4,
                SR_VEC_LANES(128, v22[286], i32)[2522 * i + 2]);
            }
          }
        }
        for ( i = 0; i < a2[1]; ++i )
          sub_1401FCD30((void *)(uintptr_t)(&SR_VEC_LANES(128, v22[296], i16)[5044 * i + 2]), 0, 0xCu);
        v16 = sub_14019A0A0((__int64)a5);
        SR_VEC_LANES(128, v22[1264], i32)[2] = v16;
      }
      sub_1401D1380((__int64)v22);
      v32 = a2[6] * a2[7] / 1000;
      if ( !a7 )
        v32 -= SR_VEC_LANES(128, v22[1264], i32)[2];
      v71 = 0;
      v32 /= SR_VEC_LANES(128, v22[360], i32)[0];
      if ( a2[6] == 10 )
        v25 = 100 * (__int16)v32;
      else
        v25 = 50 * (__int16)v32;
      v25 -= 1000 * SR_VEC_LANES(128, v22[1264], i32)[3] / 500;
      if ( !a7 && SR_VEC_LANES(128, v22[360], i32)[1] > 0 )
      {
        v17 = sub_14019A0A0((__int64)a5);
        v64 = v17 - SR_VEC_LANES(128, v22[1264], i32)[2] - SR_VEC_LANES(128, v22[360], i32)[1] * v32;
        v25 -= 1000 * v64 / 500;
      }
      if ( a2[7] <= 5000 )
      {
        if ( v25 <= 5000 )
        {
          v48 = v25 >= a2[7] ? v25 : a2[7];
          v49 = v48;
        }
        else
        {
          v49 = 5000;
        }
        v50 = v49;
      }
      else
      {
        if ( v25 <= a2[7] )
        {
          v46 = v25 >= 5000 ? v25 : 5000;
          v47 = v46;
        }
        else
        {
          v47 = a2[7];
        }
        v50 = v47;
      }
      v25 = v50;
      if ( a2[1] == 2 )
      {
        v18 = &SR_VEC_LANES(128, v22[1264], i8)[SR_VEC_LANES(128, v22[360], i32)[1] + 4];
        v19 = &SR_VEC_LANES(128, v22[1263], i8)[6 * SR_VEC_LANES(128, v22[360], i32)[1] + 2];
        v72 = &SR_VEC_LANES(128, v22[319], i8)[12];
        sub_1401BEE10(
          SR_VEC_LANES(128, v22[1261], i16),
          (__int64)&SR_VEC_LANES(128, v22[319], i64)[1] + 4,
          (__int64)SR_VEC_LANES(128, v22[950], i64) + 4,
          (__int64)v19,
          v18,
          v69,
          v25,
          SR_VEC_LANES(128, v22[283], i32)[1],
          a2[15],
          SR_VEC_LANES(128, v22[286], i32)[0],
          SR_VEC_LANES(128, v22[286], i32)[2]);
        if ( SR_VEC_LANES(128, v22[1264], i8)[SR_VEC_LANES(128, v22[360], i32)[1] + 4] )
        {
          SR_VEC_LANES(128, v22[926], i8)[SR_VEC_LANES(128, v22[360], i32)[1] + 8] = 0;
        }
        else
        {
          if ( SR_VEC_LANES(128, v22[1266], i32)[1] == 1 )
          {
            sub_1401FCD30((void *)(uintptr_t)((     __m128i *)SR_VEC_LANES(128, v22[1080], i16)), 0, 0xCu);
            sub_1401FCD30((void *)(uintptr_t)(&SR_VEC_LANES(128, v22[639], i16)[6]), 0, 0x1100u);
            sub_1401FCD30((void *)(uintptr_t)(&SR_VEC_LANES(128, v22[911], i16)[6]), 0, 0x20u);
            sub_1401FCD30((void *)(uintptr_t)(&SR_VEC_LANES(128, v22[631], i16)[4]), 0, 8u);
            SR_VEC_LANES(128, v22[914], i32)[2] = 100;
            SR_VEC_LANES(128, v22[910], i32)[1] = 100;
            SR_VEC_LANES(128, v22[1080], i8)[0] = 10;
            SR_VEC_LANES(128, v22[914], i8)[5] = 0;
            SR_VEC_LANES(128, v22[911], i32)[1] = 0x10000;
            SR_VEC_LANES(128, v22[922], i32)[0] = 1;
          }
          sub_1401D1630((__int64)&SR_VEC_LANES(128, v22[630], i64)[1], a8);
        }
        if ( !a7 )
        {
          sub_1401C0940(a5, (__int64)SR_VEC_LANES(128, v22[1263], i64) + 6 * SR_VEC_LANES(128, v22[360], i32)[1] + 2);
          if ( !SR_VEC_LANES(128, v22[926], i8)[SR_VEC_LANES(128, v22[360], i32)[1] + 8] )
            sub_1401C0A60(a5, SR_VEC_LANES(128, v22[1264], i8)[SR_VEC_LANES(128, v22[360], i32)[1] + 4]);
        }
      }
      else
      {
        sub_1401FC920((__m128i *)&SR_VEC_LANES(128, v22[319], u64)[1], (     __m128i *)((char *)v22 + 20180), 4u);
        sub_1401FC920(
          (__m128i *)((char *)SR_VEC_LANES(128, v22[1261], i64) + 4),
          (     __m128i *)((char *)v22 + 2 * SR_VEC_LANES(128, v22[286], i32)[2] + 5112),
          4u);
      }
      sub_1401D1630((__int64)v22, a8);
      for ( i = 0; i < a2[1]; ++i )
      {
        v28 = a2[14];
        if ( v35 != 2 || v33 )
        {
          if ( v35 == 3 )
          {
            if ( v33 )
            {
              if ( v33 == 1 )
                v28 = 3 * v28 / 4;
            }
            else
            {
              v28 = 2 * v28 / 5;
            }
          }
        }
        else
        {
          v28 = 3 * v28 / 5;
        }
        v51 = a2[13] && v33 == v35 - 1;
        v52 = v51;
        if ( a2[1] == 1 )
        {
          v38 = v25;
        }
        else
        {
          v38 = v69[i];
          if ( !i && v69[1] > 0 )
          {
            v52 = 0;
            v65 = 2 * v35;
            v28 -= a2[14] / (2 * v35);
          }
        }
        if ( v38 > 0 )
        {
          sub_1401C1660(&SR_VEC_PTR_LANES(128, v22, i32)[2522 * i], v38);
          if ( SR_VEC_LANES(128, v22[360], i32)[1] - i > 0 )
          {
            if ( i > 0 && SR_VEC_LANES(128, v22[1266], i32)[1] )
              v39 = 1;
            else
              v39 = 2;
          }
          else
          {
            v39 = 0;
          }
          v24 = sub_1401D1780();
        }
        SR_VEC_LANES(128, v22[291], i32)[2522 * i + 3] = 0;
        SR_VEC_LANES(128, v22[359], i32)[2522 * i + 3] = 0;
        ++SR_VEC_LANES(128, v22[360], i32)[2522 * i + 1];
      }
      SR_VEC_LANES(128, v22[1266], i32)[1] = SR_VEC_LANES(128, v22[1264], i8)[SR_VEC_LANES(128, v22[360], i32)[1] + 3];
      if ( *a6 > 0 && SR_VEC_LANES(128, v22[360], i32)[1] == SR_VEC_LANES(128, v22[360], i32)[0] )
      {
        v29 = 0;
        for ( i = 0; i < a2[1]; ++i )
        {
          for ( j = 0; j < SR_VEC_LANES(128, v22[360], i32)[2522 * i]; ++j )
          {
            v29 *= 2;
            v29 |= (char)SR_VEC_LANES(128, v22[296], u8)[10088 * i + j];
          }
          v29 *= 2;
          v29 |= (char)SR_VEC_LANES(128, v22[296], u8)[10088 * i + 3];
        }
        if ( !a7 )
          sub_14019A7C0(a5, v29, *((_BYTE *)a2 + 4) * (SR_VEC_LANES(128, v22[360], i8)[0] + 1));
        if ( SR_VEC_LANES(128, v22[381], i32)[1] && (a2[1] == 1 || SR_VEC_LANES(128, v22[1011], i32)[3]) )
          *a6 = 0;
        SR_VEC_LANES(128, v22[1264], i32)[3] += 8 * *a6;
        SR_VEC_LANES(128, v22[1264], i32)[3] -= a2[6] * a2[7] / 1000;
        if ( SR_VEC_LANES(128, v22[1264], i32)[3] <= 10000 )
        {
          if ( SR_VEC_LANES(128, v22[1264], i32)[3] >= 0 )
            v53 = SR_VEC_LANES(128, v22[1264], i32)[3];
          else
            v53 = 0;
          v54 = v53;
        }
        else
        {
          v54 = 10000;
        }
        SR_VEC_LANES(128, v22[1264], i32)[3] = v54;
        v66 = ((3188LL * SR_VEC_LANES(128, v22[1265], i16)[6]) >> 16) + 13;
        if ( SR_VEC_LANES(128, v22[283], i32)[1] >= v66 )
        {
          SR_VEC_LANES(128, v22[1266], i32)[0] = 0;
          SR_VEC_LANES(128, v22[1265], i32)[3] += a2[6];
        }
        else
        {
          SR_VEC_LANES(128, v22[1266], i32)[0] = 1;
          SR_VEC_LANES(128, v22[1265], i32)[3] = 0;
        }
      }
      if ( !a4 )
        break;
      ++v33;
    }
    SR_VEC_LANES(128, v22[1265], i32)[2] = a2[1];
    a2[19] = SR_VEC_LANES(128, v22[1266], i32)[0];
    v55 = SR_VEC_LANES(128, v22[286], i32)[0] == 16 && !SR_VEC_LANES(128, v22[1], i32)[3];
    a2[20] = v55;
    a2[18] = 1000 * SR_VEC_LANES(128, v22[286], i16)[0];
    if ( a2[15] )
      v56 = 0;
    else
      v56 = SR_VEC_LANES(128, v22[1262], i16)[6];
    a2[21] = v56;
    if ( a7 )
    {
      a2[6] = v57;
      a2[9] = v58;
      for ( i = 0; i < a2[1]; ++i )
      {
        SR_VEC_LANES(128, v22[291], i32)[2522 * i + 3] = 0;
        SR_VEC_LANES(128, v22[292], i32)[2522 * i + 2] = 0;
      }
    }
    a2[23] = SR_VEC_LANES(128, v22[298], i8)[13];
    a2[24] = word_1402827F8[2 * (SR_VEC_LANES(128, v22[298], i8)[13] >> 1) + SR_VEC_LANES(128, v22[298], i8)[14]];
  }
  return sub_1401F8B20((unsigned __int64)&i ^ v74);
}

// 1402827E0: using guessed type _UNKNOWN *off_1402827E0;
// 1402827F8: using guessed type __int16 word_1402827F8[4];

//----- (00000001401CCA90) ----------------------------------------------------
__int64            sub_1401CCA90(_DWORD *a1)
{
  *a1 = 8600;
  return 0;
}


//----- (00000001401CCAC0) ----------------------------------------------------
__int64            sub_1401CCAC0(__int64 a1)
{
  int i; // [rsp+20h] [rbp-18h]
  unsigned int v3; // [rsp+24h] [rbp-14h]

  v3 = 0;
  for ( i = 0; i < 2; ++i )
    v3 = sub_1401C7180((_DWORD *)(4288LL * i + a1));
  sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 8576)), 0, 0xCu);
  *(_DWORD *)(a1 + 8596) = 0;
  return v3;
}


//----- (00000001401CCB60) ----------------------------------------------------
__int64            sub_1401CCB60(
             __m128i *a1,
        __int32 *a2,
        int a3,
        int a4,
        _DWORD *a5,
             __m128i *a6,
        int *a7,
        int a8)
{
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  int v10; // eax
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  int v15; // eax
  int v16; // eax
  int i; // [rsp+40h] [rbp+0h] BYREF
  int j; // [rsp+44h] [rbp+4h]
       __m128i *v20; // [rsp+48h] [rbp+8h]
  int v21; // [rsp+50h] [rbp+10h]
       __m128i *v22; // [rsp+58h] [rbp+18h]
  int v23; // [rsp+60h] [rbp+20h] BYREF
  __int32 v24; // [rsp+64h] [rbp+24h] BYREF
  int v25; // [rsp+68h] [rbp+28h]
  int v26; // [rsp+6Ch] [rbp+2Ch]
  BOOL v27; // [rsp+70h] [rbp+30h]
  __m128i *v28; // [rsp+78h] [rbp+38h]
  __m128i *v29; // [rsp+80h] [rbp+40h]
  BOOL v30; // [rsp+88h] [rbp+48h]
  int v31; // [rsp+8Ch] [rbp+4Ch]
  BOOL v32; // [rsp+90h] [rbp+50h]
  __int32 v33; // [rsp+94h] [rbp+54h]
  BOOL v34; // [rsp+98h] [rbp+58h]
  BOOL v35; // [rsp+9Ch] [rbp+5Ch]
  BOOL v36; // [rsp+A0h] [rbp+60h]
  int v37; // [rsp+A4h] [rbp+64h]
  int v38; // [rsp+A8h] [rbp+68h]
  int v39; // [rsp+ACh] [rbp+6Ch]
  __int32 v40; // [rsp+B0h] [rbp+70h]
  __int32 v41; // [rsp+B4h] [rbp+74h]
  __m128i *v42; // [rsp+B8h] [rbp+78h]
  _DWORD v43[2]; // [rsp+C0h] [rbp+80h] BYREF
  __m128i *v44; // [rsp+C8h] [rbp+88h]
  int v45; // [rsp+D0h] [rbp+90h]
  BOOL v46; // [rsp+D4h] [rbp+94h]
  __m128i *p_i; // [rsp+D8h] [rbp+98h]
  __m128i *v48; // [rsp+E0h] [rbp+A0h]
  _DWORD v49[6]; // [rsp+E8h] [rbp+A8h]
  char v50[640]; // [rsp+100h] [rbp+C0h] BYREF
  __int64 v51; // [rsp+380h] [rbp+340h]

  v24 = 0;
  v21 = 0;
  memset(v43, 0, sizeof(v43));
  v22 = a1;
  v20 = a1;
  if ( a4 )
  {
    for ( i = 0; i < a2[1]; ++i )
      SR_VEC_LANES(128, v20[268 * i + 150], i32)[0] = 0;
  }
  if ( a2[1] > SR_VEC_LANES(128, v22[537], i32)[0] )
    v21 += sub_1401C7180((     __m128i *)SR_VEC_LANES(128, v20[268], i32));
  v30 = a2[1] == 1 && SR_VEC_LANES(128, v22[537], i32)[0] == 2 && a2[3] == 1000 * SR_VEC_LANES(128, v20[144], i32)[3];
  v46 = v30;
  if ( !SR_VEC_LANES(128, v20[150], i32)[0] )
  {
    for ( i = 0; i < a2[1]; ++i )
    {
      if ( a2[4] )
      {
        switch ( a2[4] )
        {
          case 10:
            SR_VEC_LANES(128, v20[268 * i + 150], i32)[1] = 1;
            SR_VEC_LANES(128, v20[268 * i + 145], i32)[1] = 2;
            break;
          case 20:
            SR_VEC_LANES(128, v20[268 * i + 150], i32)[1] = 1;
            SR_VEC_LANES(128, v20[268 * i + 145], i32)[1] = 4;
            break;
          case 40:
            SR_VEC_LANES(128, v20[268 * i + 150], i32)[1] = 2;
            SR_VEC_LANES(128, v20[268 * i + 145], i32)[1] = 4;
            break;
          case 60:
            SR_VEC_LANES(128, v20[268 * i + 150], i32)[1] = 3;
            SR_VEC_LANES(128, v20[268 * i + 145], i32)[1] = 4;
            break;
          default:
            return sub_1401F8B20((unsigned __int64)&i ^ v51);
        }
      }
      else
      {
        SR_VEC_LANES(128, v20[268 * i + 150], i32)[1] = 1;
        SR_VEC_LANES(128, v20[268 * i + 145], i32)[1] = 2;
      }
      v25 = (a2[3] >> 10) + 1;
      if ( v25 != 8 && v25 != 12 && v25 != 16 )
        return sub_1401F8B20((unsigned __int64)&i ^ v51);
      v21 += sub_1401C71F0((__int64)SR_VEC_LANES(128, v20[268 * i], i64), v25, a2[2]);
    }
  }
  if ( *a2 == 2 && a2[1] == 2 && (SR_VEC_LANES(128, v22[536], i32)[3] == 1 || SR_VEC_LANES(128, v22[537], i32)[0] == 1) )
  {
    sub_1401FCD30((void *)(uintptr_t)((     __m128i *)SR_VEC_LANES(128, v22[536], i16)), 0, 4u);
    sub_1401FCD30((void *)(uintptr_t)(&SR_VEC_LANES(128, v22[536], i16)[4]), 0, 4u);
    sub_1401FC920((__m128i *)&v20[421], v20 + 153, 0x130u);
  }
  SR_VEC_LANES(128, v22[536], i32)[3] = *a2;
  SR_VEC_LANES(128, v22[537], i32)[0] = a2[1];
  if ( a2[2] <= 48000 && a2[2] >= 8000 )
  {
    if ( a3 != 1 && !SR_VEC_LANES(128, v20[150], i32)[0] )
    {
      for ( i = 0; i < a2[1]; ++i )
      {
        for ( j = 0; j < SR_VEC_LANES(128, v20[268 * i + 150], i32)[1]; ++j )
          SR_VEC_LANES(128, v20[268 * i + 151], i32)[j] = sub_14019AF20(a5, 1);
        SR_VEC_LANES(128, v20[268 * i + 151], i32)[3] = sub_14019AF20(a5, 1);
      }
      for ( i = 0; i < a2[1]; ++i )
      {
        sub_1401FCD30((void *)(uintptr_t)((     __m128i *)SR_VEC_LANES(128, v20[268 * i + 152], i16)), 0, 0xCu);
        if ( SR_VEC_LANES(128, v20[268 * i + 151], i32)[3] )
        {
          if ( SR_VEC_LANES(128, v20[268 * i + 150], i32)[1] == 1 )
          {
            SR_VEC_LANES(128, v20[268 * i + 152], i32)[0] = 1;
          }
          else
          {
            v45 = sub_14019AFE0(a5, (__int64)*(&off_1402827E0 + SR_VEC_LANES(128, v20[268 * i + 150], i32)[1] - 2), 8) + 1;
            for ( j = 0; j < SR_VEC_LANES(128, v20[268 * i + 150], i32)[1]; ++j )
              SR_VEC_LANES(128, v20[268 * i + 152], i32)[j] = (v45 >> j) & 1;
          }
        }
      }
      if ( !a3 )
      {
        for ( j = 0; j < SR_VEC_LANES(128, v20[150], i32)[1]; ++j )
        {
          for ( i = 0; i < a2[1]; ++i )
          {
            if ( SR_VEC_LANES(128, v20[268 * i + 152], i32)[j] )
            {
              if ( a2[1] == 2 && !i )
              {
                sub_1401C0AA0(a5, v43);
                if ( !SR_VEC_LANES(128, v20[420], i32)[j] )
                  sub_1401C0D30(a5, &v24);
              }
              if ( j > 0 && SR_VEC_LANES(128, v20[268 * i + 151], i32)[j + 3] )
                v31 = 2;
              else
                v31 = 0;
              sub_1401C7770((__int64)SR_VEC_LANES(128, v20[268 * i], i64), a5, j, 1, v31);
              sub_1401C92B0(
                a5,
                (__int64)v50,
                SR_VEC_LANES(128, v20[268 * i + 174], i8)[5],
                SR_VEC_LANES(128, v20[268 * i + 174], i8)[6],
                SR_VEC_LANES(128, v20[268 * i + 145], i32)[2]);
            }
          }
        }
      }
    }
    if ( a2[1] == 2 )
    {
      if ( !a3 || a3 == 2 && SR_VEC_LANES(128, v20[152], i32)[SR_VEC_LANES(128, v20[150], i32)[0]] == 1 )
      {
        sub_1401C0AA0(a5, v43);
        if ( (a3 || SR_VEC_LANES(128, v20[419], i32)[SR_VEC_LANES(128, v20[150], i32)[0]]) && (a3 != 2 || SR_VEC_LANES(128, v20[420], i32)[SR_VEC_LANES(128, v20[150], i32)[0]]) )
          v24 = 0;
        else
          sub_1401C0D30(a5, &v24);
      }
      else
      {
        for ( i = 0; i < 2; ++i )
          v43[i] = SR_VEC_LANES(128, v22[536], i16)[i];
      }
    }
    if ( a2[1] == 2 && !v24 && SR_VEC_LANES(128, v22[537], i32)[1] == 1 )
    {
      sub_1401FCD30((void *)(uintptr_t)(&SR_VEC_LANES(128, v22[352], i16)[2]), 0, 0x3C0u);
      sub_1401FCD30((void *)(uintptr_t)(&SR_VEC_LANES(128, v22[348], i16)[2]), 0, 0x40u);
      SR_VEC_LANES(128, v22[412], i32)[1] = 100;
      SR_VEC_LANES(128, v22[412], i8)[8] = 10;
      SR_VEC_LANES(128, v22[529], i32)[3] = 0;
      SR_VEC_LANES(128, v22[416], i32)[2] = 1;
    }
    v32 = a2[1] * a2[3] < *a2 * a2[2];
    v27 = v32;
    if ( v32 )
      v33 = 0;
    else
      v33 = (SR_VEC_LANES(128, v20[145], i32)[2] + 2) * a2[1];
    v8 = 2LL * v33 + 15;
    if ( v8 <= 2LL * v33 )
      v8 = 0xFFFFFFFFFFFFFF0LL;
    v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
    p_i = (__m128i *)&i;
    if ( v27 )
    {
      v28 = (__m128i *)a6;
      v29 = (__m128i *)((char *)SR_VEC_PTR_LANES(128, a6, i64) + 2 * SR_VEC_LANES(128, v20[145], i32)[2] + 4);
    }
    else
    {
      v28 = p_i;
      v29 = (__m128i *)((char *)SR_VEC_PTR_LANES(128, p_i, i64) + 2 * SR_VEC_LANES(128, v20[145], i32)[2] + 4);
    }
    if ( a3 )
    {
      v35 = !SR_VEC_LANES(128, v22[537], i32)[1] || a2[1] == 2 && a3 == 2 && SR_VEC_LANES(128, v20[420], i32)[SR_VEC_LANES(128, v20[418], i32)[0]] == 1;
      v36 = v35;
    }
    else
    {
      v34 = v24 == 0;
      v36 = v34;
    }
    for ( i = 0; i < a2[1]; ++i )
    {
      if ( i && !v36 )
      {
        sub_1401FCD30((void *)(uintptr_t)(&SR_VEC_PTR_LANES(128, (*(&v28 + i)), i16)[2]), 0, 2LL * v23);
      }
      else
      {
        v37 = SR_VEC_LANES(128, v20[150], i32)[0] - i;
        if ( v37 > 0 )
        {
          if ( a3 == 2 )
          {
            if ( SR_VEC_LANES(128, v20[268 * i + 151], i32)[v37 + 3] )
              v38 = 2;
            else
              v38 = 0;
            v26 = v38;
          }
          else if ( i > 0 && SR_VEC_LANES(128, v22[537], i32)[1] )
          {
            v26 = 1;
          }
          else
          {
            v26 = 2;
          }
        }
        else
        {
          v26 = 0;
        }
        v10 = sub_1401C74B0(
                (__int64)SR_VEC_LANES(128, v20[268 * i], i64),
                a5,
                (     __m128i *)((char *)SR_VEC_PTR_LANES(128, (*(&v28 + i)), i64) + 4),
                (unsigned int *)&v23,
                a3,
                v26,
                a8);
        v21 += v10;
      }
      ++SR_VEC_LANES(128, v20[268 * i + 150], i32)[0];
    }
    if ( *a2 == 2 && a2[1] == 2 )
    {
      sub_1401BFD30(SR_VEC_LANES(128, v22[536], i16), v28, v29, v43, SR_VEC_LANES(128, v20[144], i32)[3], v23);
    }
    else
    {
      sub_1401FC920(v28, (     __m128i *)((char *)v22 + 8580), 4u);
      sub_1401FC920((__m128i *)((char *)SR_VEC_LANES(128, v22[536], i64) + 4), (__m128i *)((char *)v28 + 2 * v23), 4u);
    }
    *a7 = a2[2] * v23 / (1000 * SR_VEC_LANES(128, v20[144], i16)[6]);
    if ( *a2 == 2 )
      v39 = *a7;
    else
      v39 = 0;
    v11 = 2LL * v39 + 15;
    if ( v11 <= 2LL * v39 )
      v11 = 0xFFFFFFFFFFFFFF0LL;
    v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
    v48 = (__m128i *)&i;
    if ( *a2 == 2 )
      v42 = v48;
    else
      v42 = (__m128i *)a6;
    if ( v27 )
      v40 = (SR_VEC_LANES(128, v20[145], i32)[2] + 2) * a2[1];
    else
      v40 = 0;
    v13 = 2LL * v40 + 15;
    if ( v13 <= 2LL * v40 )
      v13 = 0xFFFFFFFFFFFFFF0LL;
    v14 = alloca(v13 & 0xFFFFFFFFFFFFFFF0uLL);
    v44 = (__m128i *)&i;
    if ( v27 )
    {
      sub_1401FC920(v44, a6, 2LL * (SR_VEC_LANES(128, v20[145], i32)[2] + 2) * a2[1]);
      v28 = v44;
      v29 = (__m128i *)((char *)SR_VEC_PTR_LANES(128, v44, i64) + 2 * SR_VEC_LANES(128, v20[145], i32)[2] + 4);
    }
    for ( i = 0; ; ++i )
    {
      v41 = *a2 >= a2[1] ? a2[1] : *a2;
      if ( i >= v41 )
        break;
      v15 = sub_1401BAA30(
              (     __m128i *)SR_VEC_LANES(128, v20[268 * i + 153], i32),
              v42,
              (     __m128i *)&SR_VEC_PTR_LANES(128, (*(&v28 + i)), i16)[1],
              v23);
      v21 += v15;
      if ( *a2 == 2 )
      {
        for ( j = 0; j < *a7; ++j )
          SR_VEC_PTR_LANES(128, a6, i16)[2 * j + i] = SR_VEC_PTR_LANES(128, v42, i16)[j];
      }
    }
    if ( *a2 == 2 && a2[1] == 1 )
    {
      if ( v46 )
      {
        v16 = sub_1401BAA30((     __m128i *)SR_VEC_LANES(128, v20[421], i32), v42, (     __m128i *)&SR_VEC_PTR_LANES(128, v28, i16)[1], v23);
        v21 += v16;
        for ( j = 0; j < *a7; ++j )
          SR_VEC_PTR_LANES(128, a6, i16)[2 * j + 1] = SR_VEC_PTR_LANES(128, v42, i16)[j];
      }
      else
      {
        for ( j = 0; j < *a7; ++j )
          SR_VEC_PTR_LANES(128, a6, i16)[2 * j + 1] = SR_VEC_PTR_LANES(128, a6, i16)[2 * j];
      }
    }
    if ( SR_VEC_LANES(128, v20[261], i32)[3] == 2 )
    {
      v49[0] = 6;
      v49[1] = 4;
      v49[2] = 3;
      a2[5] = v49[(SR_VEC_LANES(128, v20[144], i32)[3] - 8) >> 2] * SR_VEC_LANES(128, v20[144], i32)[1];
    }
    else
    {
      a2[5] = 0;
    }
    if ( a3 == 1 )
    {
      for ( j = 0; j < SR_VEC_LANES(128, v22[537], i32)[0]; ++j )
        SR_VEC_LANES(128, v22[268 * j + 144], i8)[8] = 10;
    }
    else
    {
      SR_VEC_LANES(128, v22[537], i32)[1] = v24;
    }
  }
  else
  {
    v21 = -200;
  }
  return sub_1401F8B20((unsigned __int64)&i ^ v51);
}

// 1402827E0: using guessed type _UNKNOWN *off_1402827E0;

//----- (00000001401CDE70) ----------------------------------------------------
__int64            sub_1401CDE70(__int64 a1, int a2, float a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  float v5; // [rsp+4h] [rbp-14h]

  v5 = a3;
  for ( i = 0; i < a2 - 1; ++i )
  {
    *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i) * v5;
    v5 = v5 * a3;
  }
  result = a2 - 1;
  *(float *)(a1 + 4 * result) = *(float *)(a1 + 4 * result) * v5;
  return result;
}


//----- (00000001401CDF20) ----------------------------------------------------
__int64            sub_1401CDF20(     __m128i *a1, int a2)
{
  __int32 v2; // xmm0_4
  __int32 v3; // xmm0_4
  __int64 v5; // [rsp+0h] [rbp-D8h] BYREF
  int j; // [rsp+20h] [rbp-B8h]
  int i; // [rsp+24h] [rbp-B4h]
  double v8; // [rsp+28h] [rbp-B0h]
  double v9; // [rsp+30h] [rbp-A8h]
  double v10; // [rsp+38h] [rbp-A0h]
  double v11; // [rsp+40h] [rbp-98h]
  double v12; // [rsp+48h] [rbp-90h]
  double v13; // [rsp+50h] [rbp-88h]
  __m128i v14[6]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-18h]

  sub_1401FC920(v14, a1, 4LL * a2);
  v9 = 1.0;
  for ( i = a2 - 1; i > 0; --i )
  {
    v8 = (float)-*(float *)&SR_VEC_LANES(128, v14[0], i32)[i];
    v10 = 1.0 - v8 * v8;
    v9 = v9 * v10;
    if ( v9 * 10000.0 < 1.0 )
      return sub_1401F8B20((unsigned __int64)&v5 ^ v15);
    v13 = 1.0 / v10;
    for ( j = 0; j < (i + 1) >> 1; ++j )
    {
      v11 = *(float *)&SR_VEC_LANES(128, v14[0], i32)[j];
      v12 = *(float *)&SR_VEC_LANES(128, v14[0], i32)[i - j - 1];
      *(float *)&v2 = (v11 - v12 * v8) * v13;
      SR_VEC_LANES(128, v14[0], i32)[j] = v2;
      *(float *)&v3 = (v12 - v11 * v8) * v13;
      SR_VEC_LANES(128, v14[0], i32)[i - j - 1] = v3;
    }
  }
  v8 = (float)-*(float *)SR_VEC_LANES(128, v14[0], i32);
  v10 = 1.0 - v8 * v8;
  v9 = v9 * v10;
  return sub_1401F8B20((unsigned __int64)&v5 ^ v15);
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401CE180) ----------------------------------------------------
__int64            sub_1401CE180(__int64 a1, __int64 a2, int a3)
{
  float v3; // xmm0_4
  int i; // [rsp+0h] [rbp-1D8h] BYREF
  int j; // [rsp+4h] [rbp-1D4h]
  double v7; // [rsp+8h] [rbp-1D0h]
  double v8; // [rsp+10h] [rbp-1C8h]
  double v9; // [rsp+18h] [rbp-1C0h]
  double v10; // [rsp+20h] [rbp-1B8h]
  double v11; // [rsp+28h] [rbp-1B0h]
  _OWORD v12[25]; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v13; // [rsp+1C0h] [rbp-18h]

  i = 0;
  do
  {
    v8 = *(float *)(a2 + 4LL * i);
    *((double *)&v12[i] + 1) = v8;
    *(double *)&v12[i++] = v8;
  }
  while ( i <= a3 );
  for ( i = 0; i < a3; ++i )
  {
    if ( *((double *)v12 + 1) <= 9.999999717180685e-10 )
      v9 = 9.999999717180685e-10;
    else
      v9 = *((double *)v12 + 1);
    v7 = -*(double *)&v12[i + 1] / v9;
    v3 = v7;
    *(float *)(a1 + 4LL * i) = v3;
    for ( j = 0; j < a3 - i; ++j )
    {
      v10 = *(double *)&v12[j + 1 + i];
      v11 = *((double *)&v12[j] + 1);
      *(double *)&v12[j + 1 + i] = v10 + v11 * v7;
      *((double *)&v12[j] + 1) = v11 + v10 * v7;
    }
  }
  return sub_1401F8B20((unsigned __int64)&i ^ v13);
}


//----- (00000001401CE410) ----------------------------------------------------
__int64            sub_1401CE410(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  int j; // [rsp+4h] [rbp-24h]
  float v6; // [rsp+8h] [rbp-20h]
  float v7; // [rsp+Ch] [rbp-1Ch]
  float v8; // [rsp+10h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    v6 = *(float *)(a2 + 4LL * i);
    for ( j = 0; j < (i + 1) >> 1; ++j )
    {
      v7 = *(float *)(a1 + 4LL * j);
      v8 = *(float *)(a1 + 4LL * (i - j - 1));
      *(float *)(a1 + 4LL * j) = v7 + (float)(v8 * v6);
      *(float *)(a1 + 4LL * (i - j - 1)) = v8 + (float)(v7 * v6);
    }
    *(float *)(a1 + 4LL * i) = -v6;
  }
  return result;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401CE540) ----------------------------------------------------
__int64            sub_1401CE540(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  float v5; // xmm0_4
  int i; // [rsp+20h] [rbp-18h]
  unsigned int v10; // [rsp+58h] [rbp+20h]

  v10 = a4;
  if ( a4 > a3 )
    v10 = a3;
  for ( i = 0; ; ++i )
  {
    result = v10;
    if ( i >= (int)v10 )
      break;
    v5 = sub_1401D0EF0(a2, a2 + 4LL * i, a3 - i);
    *(float *)(a1 + 4LL * i) = v5;
  }
  return result;
}


//----- (00000001401CE5E0) ----------------------------------------------------
__int64 sub_1401CE5E0()
{
  float v0; // xmm0_4
  float v1; // xmm0_4
  float v2; // xmm0_4
  float v3; // xmm0_4
  _DWORD v5[12]; // [rsp-20h] [rbp-6DF0h] BYREF
  int i; // [rsp+20h] [rbp-6DB0h]
  int j; // [rsp+24h] [rbp-6DACh]
  int m; // [rsp+28h] [rbp-6DA8h]
  int k; // [rsp+2Ch] [rbp-6DA4h]
  int v10; // [rsp+30h] [rbp-6DA0h]
  int v11; // [rsp+34h] [rbp-6D9Ch]
  signed int v12; // [rsp+38h] [rbp-6D98h]
  int v13; // [rsp+3Ch] [rbp-6D94h]
  float v14; // [rsp+40h] [rbp-6D90h]
  int v15; // [rsp+44h] [rbp-6D8Ch]
  int v16; // [rsp+48h] [rbp-6D88h]
  int v17; // [rsp+4Ch] [rbp-6D84h]
  int v18; // [rsp+50h] [rbp-6D80h]
  signed int v19; // [rsp+54h] [rbp-6D7Ch]
  int v20; // [rsp+58h] [rbp-6D78h]
  float *v21; // [rsp+60h] [rbp-6D70h]
  int v22; // [rsp+68h] [rbp-6D68h]
  int v23; // [rsp+6Ch] [rbp-6D64h]
  float v24; // [rsp+70h] [rbp-6D60h]
  float v25; // [rsp+74h] [rbp-6D5Ch]
  double v26; // [rsp+78h] [rbp-6D58h]
  float *v27; // [rsp+80h] [rbp-6D50h]
  int v28; // [rsp+88h] [rbp-6D48h]
  int v29; // [rsp+8Ch] [rbp-6D44h]
  int v30; // [rsp+90h] [rbp-6D40h]
  float v31; // [rsp+94h] [rbp-6D3Ch]
  int v32; // [rsp+98h] [rbp-6D38h]
  int v33; // [rsp+9Ch] [rbp-6D34h]
  int v34; // [rsp+A0h] [rbp-6D30h]
  int v35; // [rsp+A4h] [rbp-6D2Ch]
  char *v36; // [rsp+A8h] [rbp-6D28h]
  float v37; // [rsp+B0h] [rbp-6D20h]
  float v38; // [rsp+B4h] [rbp-6D1Ch]
  float v39; // [rsp+B8h] [rbp-6D18h]
  int v40; // [rsp+BCh] [rbp-6D14h]
  signed int v41; // [rsp+C0h] [rbp-6D10h]
  signed int v42; // [rsp+C4h] [rbp-6D0Ch]
  signed int v43; // [rsp+C8h] [rbp-6D08h]
  signed int v44; // [rsp+CCh] [rbp-6D04h]
  int v45; // [rsp+D0h] [rbp-6D00h]
  int v46; // [rsp+D4h] [rbp-6CFCh]
  signed int v47; // [rsp+D8h] [rbp-6CF8h]
  signed int v48; // [rsp+DCh] [rbp-6CF4h]
  int v49; // [rsp+E0h] [rbp-6CF0h]
  int v50; // [rsp+E4h] [rbp-6CECh]
  int v51; // [rsp+E8h] [rbp-6CE8h]
  int v52; // [rsp+ECh] [rbp-6CE4h]
  int v53; // [rsp+F0h] [rbp-6CE0h]
  int v54; // [rsp+F4h] [rbp-6CDCh]
  int v55; // [rsp+F8h] [rbp-6CD8h]
  int v56; // [rsp+FCh] [rbp-6CD4h]
  float v57; // [rsp+100h] [rbp-6CD0h]
  float v58; // [rsp+104h] [rbp-6CCCh]
  float v59; // [rsp+108h] [rbp-6CC8h]
  double v60; // [rsp+110h] [rbp-6CC0h]
  double v61; // [rsp+118h] [rbp-6CB8h]
  float v62; // [rsp+120h] [rbp-6CB0h]
  int v63; // [rsp+124h] [rbp-6CACh]
  float v64; // [rsp+128h] [rbp-6CA8h]
  int v65; // [rsp+12Ch] [rbp-6CA4h]
  double v66; // [rsp+130h] [rbp-6CA0h]
  unsigned __int64 v67; // [rsp+138h] [rbp-6C98h]
  double v68; // [rsp+140h] [rbp-6C90h]
  __m128i v69[4]; // [rsp+148h] [rbp-6C88h] BYREF
  _DWORD v70[24]; // [rsp+190h] [rbp-6C40h] BYREF
  float v71[160]; // [rsp+1F0h] [rbp-6BE0h] BYREF
  float v72[68]; // [rsp+470h] [rbp-6960h] BYREF
  _DWORD v73[596]; // [rsp+580h] [rbp-6850h] BYREF
  _BYTE v74[640]; // [rsp+ED0h] [rbp-5F00h] BYREF
  __int64 v75; // [rsp+1150h] [rbp-5C80h] BYREF
  _QWORD v76[340]; // [rsp+13D0h] [rbp-5A00h] BYREF
  _QWORD v77[378]; // [rsp+1E70h] [rbp-4F60h] BYREF
  _WORD v78[320]; // [rsp+2A40h] [rbp-4390h] BYREF
  _BYTE v79[320]; // [rsp+2CC0h] [rbp-4110h] BYREF
  _BYTE v80[960]; // [rsp+2E00h] [rbp-3FD0h] BYREF
  _BYTE v81[1280]; // [rsp+31C0h] [rbp-3C10h] BYREF
  __int64 v82; // [rsp+36C0h] [rbp-3710h]
  __int64 v83; // [rsp+36E0h] [rbp-36F0h]
  _WORD *v84; // [rsp+36E8h] [rbp-36E8h]
  _WORD *v85; // [rsp+36F0h] [rbp-36E0h]
  _BYTE *v86; // [rsp+36F8h] [rbp-36D8h]
  float *v87; // [rsp+3700h] [rbp-36D0h]
  int v88; // [rsp+3708h] [rbp-36C8h]
  float v89; // [rsp+3710h] [rbp-36C0h]
  float v90; // [rsp+3718h] [rbp-36B8h]
  int v91; // [rsp+3720h] [rbp-36B0h]
  int v92; // [rsp+3728h] [rbp-36A8h]
  int v93; // [rsp+3730h] [rbp-36A0h]
  int v94; // [rsp+3738h] [rbp-3698h]

  v28 = v91 * (5 * v93 + 20);
  v56 = 20 * v93 + 80;
  v29 = 40 * v93 + 160;
  v33 = 5 * v91;
  v65 = 20;
  v13 = 40;
  v12 = 2 * v91;
  v11 = 8;
  v15 = 16;
  v19 = 18 * v91 - 1;
  v17 = 72;
  v23 = 143;
  if ( v91 == 16 )
  {
    sub_1401D1210((__int64)v81, v83, v28);
    sub_1401FCD30((void *)(uintptr_t)(v69), 0, 8u);
    sub_1401BAD00(v69, (__int64)v78, (__int64)v81, v28);
    sub_1401D12E0((__int64)v74, (__int64)v78, v29);
  }
  else if ( v91 == 12 )
  {
    sub_1401D1210((__int64)v80, v83, v28);
    sub_1401FCD30((void *)(uintptr_t)(v69), 0, 0x18u);
    sub_1401BAEE0(v69, v78, (__int64)v80, v28);
    sub_1401D12E0((__int64)v74, (__int64)v78, v29);
  }
  else
  {
    sub_1401D1210((__int64)v78, v83, v29);
  }
  sub_1401FCD30((void *)(uintptr_t)(v69), 0, 8u);
  sub_1401BAD00(v69, (__int64)v79, (__int64)v78, v29);
  sub_1401D12E0((__int64)v71, (__int64)v79, v56);
  for ( i = v56 - 1; i > 0; --i )
  {
    if ( (float)((float)(int)v71[i] + v71[i - 1]) <= 32767.0 )
    {
      if ( (float)((float)(int)v71[i] + v71[i - 1]) >= -32768.0 )
        v57 = (float)(int)v71[i] + v71[i - 1];
      else
        v57 = -32768.0;
      v58 = v57;
    }
    else
    {
      v58 = 32767.0;
    }
    v71[i] = (float)(__int16)(int)v58;
  }
  sub_1401FCD30((void *)(uintptr_t)(v73), 0, 596LL * v93);
  v21 = &v71[4 * v65];
  for ( j = 0; j < v93 >> 1; ++j )
  {
    v27 = &v21[-v11];
    v5[10] = v94;
    sub_1401A9C80(v21, (__int64)&v21[-v17], (__int64)v72, v13, v17 - v11 + 1);
    v26 = v72[v17 - v11];
    v68 = sub_1401D1050((__int64)v21, v13);
    v61 = v68 + sub_1401D1050((__int64)v27, v13) + (float)((float)v13 * 4000.0);
    v0 = 2.0 * v26 / v61;
    *(float *)&v73[v11] = *(float *)&v73[v11] + v0;
    for ( k = v11 + 1; k <= v17; ++k )
    {
      --v27;
      v26 = v72[v17 - k];
      v61 = v61 + *v27 * *v27 - v27[v13] * v27[v13];
      v1 = 2.0 * v26 / v61;
      *(float *)&v73[k] = *(float *)&v73[k] + v1;
    }
    v21 += v13;
  }
  for ( i = v17; i >= v11; --i )
    *(float *)&v73[i] = *(float *)&v73[i] - (float)((float)(*(float *)&v73[i] * (float)i) / 4096.0);
  v16 = 2 * v92 + 4;
  sub_1401CFF30((__int64)&v73[v11], (__int64)v70, v17 - v11 + 1, v16);
  v59 = *(float *)&v73[v11];
  if ( v59 >= 0.2 )
  {
    v62 = v89 * v59;
    for ( i = 0; i < v16; ++i )
    {
      if ( *(float *)&v73[i + v11] <= v62 )
      {
        v16 = i;
        break;
      }
      v70[i] = 2 * (v11 + v70[i]);
    }
    for ( i = v15 - 5; i < v23 + 5; ++i )
    {
      v67 = 2LL * i;
      if ( v67 >= 0x12A )
        sub_1401F8694();
      *(_WORD *)((char *)&v77[340] + v67) = 0;
    }
    for ( i = 0; i < v16; ++i )
      *((_WORD *)&v77[340] + (int)v70[i]) = 1;
    for ( i = v23 + 3; i >= v15; --i )
      *((_WORD *)&v77[340] + i) += *((_WORD *)&v77[339] + i + 2) + *((_WORD *)&v77[339] + i + 3);
    v16 = 0;
    for ( i = v15; i < v23 + 1; ++i )
    {
      if ( *((__int16 *)&v77[340] + i + 1) > 0 )
        v70[v16++] = i;
    }
    for ( i = v23 + 3; i >= v15; --i )
      *((_WORD *)&v77[340] + i) += *((_WORD *)&v77[339] + i + 1)
                                 + *((_WORD *)&v77[339] + i + 2)
                                 + *((_WORD *)&v77[339] + i + 3);
    v30 = 0;
    for ( i = v15; i < v23 + 4; ++i )
    {
      if ( *((__int16 *)&v77[340] + i) > 0 )
        *((_WORD *)&v77[340] + v30++) = i - 2;
    }
    sub_1401FCD30((void *)(uintptr_t)(v73), 0, 0x950u);
    if ( v91 == 8 )
      v21 = (float *)(v83 + 640);
    else
      v21 = (float *)&v75;
    for ( j = 0; j < v93; ++j )
    {
      v66 = sub_1401D1050((__int64)v21, v13) + 1.0;
      for ( m = 0; m < v30; ++m )
      {
        k = *((__int16 *)&v77[340] + m);
        v27 = &v21[-k];
        v26 = sub_1401D0EF0((__int64)v27, (__int64)v21, v13);
        if ( v26 <= 0.0 )
        {
          v73[149 * j + k] = 0;
        }
        else
        {
          v60 = sub_1401D1050((__int64)v27, v13);
          v2 = 2.0 * v26 / (v60 + v66);
          *(float *)&v73[149 * j + k] = v2;
        }
      }
      v21 += v13;
    }
    v25 = 0.0;
    v39 = -1000.0;
    v20 = 0;
    v10 = -1;
    if ( v88 <= 0 )
    {
      v38 = 0.0;
    }
    else
    {
      if ( v91 == 12 )
      {
        v88 = 2 * v88 / 3;
      }
      else if ( v91 == 16 )
      {
        v88 >>= 1;
      }
      v38 = sub_1401D1340((float)v88);
    }
    if ( v93 == 4 )
    {
      v22 = 11;
      v36 = (char *)&unk_14027E290;
      if ( v91 == 8 && v92 > 0 )
        v18 = 11;
      else
        v18 = 3;
    }
    else
    {
      v22 = 3;
      v36 = (char *)&unk_14027BC14;
      v18 = 3;
    }
    for ( j = 0; j < v16; ++j )
    {
      k = v70[j];
      for ( m = 0; m < v18; ++m )
      {
        SR_VEC_LANES(128, v69[1], i32)[m + 2] = 0;
        for ( i = 0; i < v93; ++i )
          *(float *)&SR_VEC_LANES(128, v69[1], i32)[m + 2] = *(float *)&SR_VEC_LANES(128, v69[1], i32)[m + 2]
                                             + *(float *)&v73[149 * i + v36[m + v22 * i] + k];
      }
      v14 = -1000.0;
      v40 = 0;
      for ( i = 0; i < v18; ++i )
      {
        if ( *(float *)&SR_VEC_LANES(128, v69[1], i32)[i + 2] > v14 )
        {
          v14 = *(float *)&SR_VEC_LANES(128, v69[1], i32)[i + 2];
          v40 = i;
        }
      }
      v37 = sub_1401D1340((float)k);
      v31 = v14 - (float)((float)(0.2 * (float)v93) * v37);
      if ( v88 > 0 )
      {
        v24 = (float)(v37 - v38) * (float)(v37 - v38);
        v31 = v31 - (float)((float)((float)((float)(0.2 * (float)v93) * *v87) * v24) / (float)(v24 + 0.5));
      }
      if ( v31 > v39 && v14 > (float)((float)v93 * v90) )
      {
        v39 = v31;
        v25 = v14;
        v10 = k;
        v20 = v40;
      }
    }
    if ( v10 == -1 )
    {
      sub_1401FCD30((void *)(uintptr_t)(v84), 0, 0x10u);
      *v87 = 0.0;
      *v85 = 0;
      *v86 = 0;
    }
    else
    {
      *v87 = v25 / (float)v93;
      if ( v91 <= 8 )
      {
        for ( j = 0; j < v93; ++j )
        {
          *(_DWORD *)&v84[2 * j] = v36[v20 + v22 * j] + v10;
          if ( v15 <= 144 )
          {
            if ( *(int *)&v84[2 * j] <= 144 )
            {
              if ( *(_DWORD *)&v84[2 * j] >= v15 )
                v53 = *(_DWORD *)&v84[2 * j];
              else
                v53 = v15;
              v54 = v53;
            }
            else
            {
              v54 = 144;
            }
            v55 = v54;
          }
          else
          {
            if ( *(_DWORD *)&v84[2 * j] <= v15 )
            {
              if ( *(int *)&v84[2 * j] >= 144 )
                v51 = *(_DWORD *)&v84[2 * j];
              else
                v51 = 144;
              v52 = v51;
            }
            else
            {
              v52 = v15;
            }
            v55 = v52;
          }
          *(_DWORD *)&v84[2 * j] = v55;
        }
        *v85 = v10 - v15;
        *v86 = v20;
      }
      else
      {
        if ( v91 == 12 )
          v10 = ((3 * (_BYTE)v10) & 1) + ((3 * (__int16)v10) >> 1);
        else
          v10 *= 2;
        if ( v12 <= v19 )
        {
          if ( v10 <= v19 )
          {
            if ( v10 >= v12 )
              v43 = v10;
            else
              v43 = v12;
            v44 = v43;
          }
          else
          {
            v44 = v19;
          }
          v45 = v44;
        }
        else
        {
          if ( v10 <= v12 )
          {
            if ( v10 >= v19 )
              v41 = v10;
            else
              v41 = v19;
            v42 = v41;
          }
          else
          {
            v42 = v12;
          }
          v45 = v42;
        }
        v10 = v45;
        v34 = sub_1401BE3A0(v45 - 2, v12);
        v63 = sub_1401BE320(v45 + 2, v19);
        v35 = v45;
        v20 = 0;
        v25 = -1000.0;
        sub_1401E0010((__int64)v77, v83, v34, v33, v93, v92, v94);
        sub_1401E0340((__int64)v76, v83, v34, v33, v93, v92);
        v32 = 0;
        v64 = 0.050000001 / (float)v45;
        if ( v93 == 4 )
        {
          v18 = byte_14027BB84[v92];
          v22 = 34;
          v36 = byte_14027E2C0;
        }
        else
        {
          v18 = 12;
          v22 = 12;
          v36 = (char *)&unk_14027CC28;
        }
        v21 = (float *)(v83 + 80LL * v91);
        v66 = sub_1401D1050((__int64)v21, v33 * v93) + 1.0;
        for ( k = v34; k <= v63; ++k )
        {
          for ( m = 0; m < v18; ++m )
          {
            v26 = 0.0;
            v60 = v66;
            for ( j = 0; j < v93; ++j )
            {
              v26 = v26 + *((float *)&v77[85 * j] + 5 * m + v32);
              v60 = v60 + *((float *)&v76[85 * j] + 5 * m + v32);
            }
            if ( v26 <= 0.0 )
            {
              v14 = 0.0;
            }
            else
            {
              v3 = 2.0 * v26 / v60;
              v14 = v3 * (float)(1.0 - (float)(v64 * (float)m));
            }
            if ( v14 > v25 && byte_14027E2C0[m] + k <= v19 )
            {
              v25 = v14;
              v35 = k;
              v20 = m;
            }
          }
          ++v32;
        }
        for ( j = 0; j < v93; ++j )
        {
          *(_DWORD *)&v84[2 * j] = v36[v20 + v22 * j] + v35;
          if ( v12 <= 18 * v91 )
          {
            if ( *(_DWORD *)&v84[2 * j] <= 18 * v91 )
            {
              if ( *(_DWORD *)&v84[2 * j] >= v12 )
                v48 = *(_DWORD *)&v84[2 * j];
              else
                v48 = v12;
              v49 = v48;
            }
            else
            {
              v49 = 18 * v91;
            }
            v50 = v49;
          }
          else
          {
            if ( *(_DWORD *)&v84[2 * j] <= v12 )
            {
              if ( *(_DWORD *)&v84[2 * j] >= 18 * v91 )
                v46 = *(_DWORD *)&v84[2 * j];
              else
                v46 = 18 * v91;
              v47 = v46;
            }
            else
            {
              v47 = v12;
            }
            v50 = v47;
          }
          *(_DWORD *)&v84[2 * j] = v50;
        }
        *v85 = v35 - v12;
        *v86 = v20;
      }
    }
  }
  else
  {
    sub_1401FCD30((void *)(uintptr_t)(v84), 0, 4LL * v93);
    *v87 = 0.0;
    *v85 = 0;
    *v86 = 0;
  }
  return sub_1401F8B20((unsigned __int64)v5 ^ v82);
}


//----- (00000001401CFF30) ----------------------------------------------------
__int64            sub_1401CFF30(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int k; // [rsp+0h] [rbp-18h]
  int n; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  int j; // [rsp+4h] [rbp-14h]
  int m; // [rsp+4h] [rbp-14h]
  float v10; // [rsp+8h] [rbp-10h]
  float v11; // [rsp+8h] [rbp-10h]

  for ( i = 0; i < a4; ++i )
    *(_DWORD *)(a2 + 4LL * i) = i;
  for ( j = 1; j < a4; ++j )
  {
    v10 = *(float *)(a1 + 4LL * j);
    for ( k = j - 1; k >= 0 && v10 > *(float *)(a1 + 4LL * k); --k )
    {
      *(_DWORD *)(a1 + 4LL * (k + 1)) = *(_DWORD *)(a1 + 4LL * k);
      *(_DWORD *)(a2 + 4LL * (k + 1)) = *(_DWORD *)(a2 + 4LL * k);
    }
    *(float *)(a1 + 4LL * (k + 1)) = v10;
    *(_DWORD *)(a2 + 4LL * (k + 1)) = j;
  }
  for ( m = a4; ; ++m )
  {
    result = (unsigned int)a3;
    if ( m >= a3 )
      break;
    v11 = *(float *)(a1 + 4LL * m);
    if ( v11 > *(float *)(a1 + 4LL * (a4 - 1)) )
    {
      for ( n = a4 - 2; n >= 0 && v11 > *(float *)(a1 + 4LL * n); --n )
      {
        *(_DWORD *)(a1 + 4LL * (n + 1)) = *(_DWORD *)(a1 + 4LL * n);
        *(_DWORD *)(a2 + 4LL * (n + 1)) = *(_DWORD *)(a2 + 4LL * n);
      }
      *(float *)(a1 + 4LL * (n + 1)) = v11;
      *(_DWORD *)(a2 + 4LL * (n + 1)) = m;
    }
  }
  return result;
}


//----- (00000001401D0150) ----------------------------------------------------
__int64            sub_1401D0150(__int64 a1, __int64 a2, float a3, int a4, int a5, int a6)
{
  float v6; // xmm0_4
  float v7; // xmm0_4
  __int64 v9; // [rsp+0h] [rbp-498h] BYREF
  int k; // [rsp+20h] [rbp-478h]
  int j; // [rsp+24h] [rbp-474h]
  int i; // [rsp+28h] [rbp-470h]
  double v13; // [rsp+30h] [rbp-468h]
  double v14; // [rsp+38h] [rbp-460h]
  __int64 v15; // [rsp+40h] [rbp-458h]
  double v16; // [rsp+48h] [rbp-450h]
  double v17; // [rsp+50h] [rbp-448h]
  double v18; // [rsp+58h] [rbp-440h]
  int v19; // [rsp+60h] [rbp-438h]
  double v20; // [rsp+68h] [rbp-430h]
  double v21; // [rsp+70h] [rbp-428h]
  double v22; // [rsp+78h] [rbp-420h]
  double v23; // [rsp+80h] [rbp-418h]
  double v24; // [rsp+88h] [rbp-410h]
  __int64 v25; // [rsp+90h] [rbp-408h]
  double v26[24]; // [rsp+A0h] [rbp-3F8h]
  double v27[26]; // [rsp+160h] [rbp-338h]
  double v28[26]; // [rsp+230h] [rbp-268h]
  __m128i v29[12]; // [rsp+300h] [rbp-198h] BYREF
  __m128i v30; // [rsp+3C0h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+480h] [rbp-18h]

  v20 = sub_1401D1050(a2, a4 * a5);
  sub_1401FCD30((void *)(uintptr_t)(v29), 0, 0xC0u);
  for ( i = 0; i < a5; ++i )
  {
    v15 = a2 + 4LL * a4 * i;
    for ( j = 1; j < a6 + 1; ++j )
    {
      v25 = j - 1;
      *(double *)&SR_VEC_LANES(128, v29[0], i64)[v25] = *(double *)&SR_VEC_LANES(128, v29[0], i64)[v25] + sub_1401D0EF0(v15, v15 + 4LL * j, a4 - j);
    }
  }
  sub_1401FC920(&v30, v29, 0xC0u);
  v24 = v20 + 0.000009999999747378752 * v20 + 9.999999717180685e-10;
  v28[0] = v24;
  v27[0] = v24;
  v21 = 1.0;
  v19 = 0;
  for ( j = 0; j < a6; ++j )
  {
    for ( i = 0; i < a5; ++i )
    {
      v15 = a2 + 4LL * a4 * i;
      v13 = *(float *)(v15 + 4LL * j);
      v16 = *(float *)(v15 + 4LL * (a4 - j - 1));
      for ( k = 0; k < j; ++k )
      {
        *(double *)&SR_VEC_LANES(128, v29[0], i64)[k] = *(double *)&SR_VEC_LANES(128, v29[0], i64)[k]
                                        - (float)(*(float *)(v15 + 4LL * j) * *(float *)(v15 + 4LL * (j - k - 1)));
        *(double *)&SR_VEC_LANES(128, v30, i64)[k] = *(double *)&SR_VEC_LANES(128, v30, i64)[k]
                                     - (float)(*(float *)(v15 + 4LL * (a4 - j - 1))
                                             * *(float *)(v15 + 4LL * (k + a4 - j)));
        v14 = v26[k];
        v13 = v13 + *(float *)(v15 + 4LL * (j - k - 1)) * v14;
        v16 = v16 + *(float *)(v15 + 4LL * (k + a4 - j)) * v14;
      }
      for ( k = 0; k <= j; ++k )
      {
        v28[k] = v28[k] - v13 * *(float *)(v15 + 4LL * (j - k));
        v27[k] = v27[k] - v16 * *(float *)(v15 + 4LL * (a4 - j + k - 1));
      }
    }
    v13 = *(double *)&SR_VEC_LANES(128, v29[0], i64)[j];
    v16 = *(double *)&SR_VEC_LANES(128, v30, i64)[j];
    for ( k = 0; k < j; ++k )
    {
      v14 = v26[k];
      v13 = v13 + *(double *)&SR_VEC_LANES(128, v30, i64)[j - k - 1] * v14;
      v16 = v16 + *(double *)&SR_VEC_LANES(128, v29[0], i64)[j - k - 1] * v14;
    }
    v28[j + 1] = v13;
    v27[j + 1] = v16;
    v22 = v27[j + 1];
    v23 = v27[0];
    v18 = v28[0];
    for ( k = 0; k < j; ++k )
    {
      v14 = v26[k];
      v22 = v22 + v27[j - k] * v14;
      v23 = v23 + v27[k + 1] * v14;
      v18 = v18 + v28[k + 1] * v14;
    }
    v17 = -2.0 * v22 / (v18 + v23);
    v13 = v21 * (1.0 - v17 * v17);
    if ( a3 < v13 )
    {
      v21 = v13;
    }
    else
    {
      v17 = sqrt(1.0 - a3 / v21);
      if ( v22 > 0.0 )
        v17 = -v17;
      v21 = a3;
      v19 = 1;
    }
    for ( k = 0; k < (j + 1) >> 1; ++k )
    {
      v13 = v26[k];
      v16 = v26[j - k - 1];
      v26[k] = v13 + v17 * v16;
      v26[j - k - 1] = v16 + v17 * v13;
    }
    v26[j] = v17;
    if ( v19 )
    {
      for ( k = j + 1; k < a6; ++k )
        v26[k] = 0.0;
      break;
    }
    for ( k = 0; k <= j + 1; ++k )
    {
      v13 = v28[k];
      v28[k] = v28[k] + v17 * v27[j - k + 1];
      v27[j - k + 1] = v27[j - k + 1] + v17 * v13;
    }
  }
  if ( v19 )
  {
    for ( k = 0; k < a6; ++k )
    {
      v6 = -v26[k];
      *(float *)(a1 + 4LL * k) = v6;
    }
    for ( i = 0; i < a5; ++i )
      v20 = v20 - sub_1401D1050(a2 + 4LL * a4 * i, a6);
    v18 = v20 * v21;
  }
  else
  {
    v18 = v28[0];
    v13 = 1.0;
    for ( k = 0; k < a6; ++k )
    {
      v14 = v26[k];
      v18 = v18 + v28[k + 1] * v14;
      v13 = v13 + v14 * v14;
      v7 = -v14;
      *(float *)(a1 + 4LL * k) = v7;
    }
    v18 = v18 - 0.000009999999747378752 * v20 * v13;
  }
  return sub_1401F8B20((unsigned __int64)&v9 ^ v31);
}


//----- (00000001401D0C90) ----------------------------------------------------
__int64            sub_1401D0C90(__int64 a1, float a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; i < (unsigned __int16)(a3 & 0xFFFC); i += 4 )
  {
    *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i) * a2;
    *(float *)(a1 + 4LL * (i + 1)) = *(float *)(a1 + 4LL * (i + 1)) * a2;
    *(float *)(a1 + 4LL * (i + 2)) = *(float *)(a1 + 4LL * (i + 2)) * a2;
    *(float *)(a1 + 4LL * (i + 3)) = *(float *)(a1 + 4LL * (i + 3)) * a2;
  }
  while ( 1 )
  {
    result = (unsigned int)a3;
    if ( i >= a3 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a1 + 4LL * i) * a2;
    ++i;
  }
  return result;
}


//----- (00000001401D0DC0) ----------------------------------------------------
__int64            sub_1401D0DC0(__int64 a1, __int64 a2, float a3, int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; i < (unsigned __int16)(a4 & 0xFFFC); i += 4 )
  {
    *(float *)(a1 + 4LL * i) = a3 * *(float *)(a2 + 4LL * i);
    *(float *)(a1 + 4LL * (i + 1)) = a3 * *(float *)(a2 + 4LL * (i + 1));
    *(float *)(a1 + 4LL * (i + 2)) = a3 * *(float *)(a2 + 4LL * (i + 2));
    *(float *)(a1 + 4LL * (i + 3)) = a3 * *(float *)(a2 + 4LL * (i + 3));
  }
  while ( 1 )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = a3 * *(float *)(a2 + 4LL * i);
    ++i;
  }
  return result;
}


//----- (00000001401D0EF0) ----------------------------------------------------
double            sub_1401D0EF0(__int64 a1, __int64 a2, int a3)
{
  int i; // [rsp+0h] [rbp-18h]
  double v5; // [rsp+8h] [rbp-10h]

  v5 = 0.0;
  for ( i = 0; i < a3 - 3; i += 4 )
    v5 = v5
       + *(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i)
       + *(float *)(a1 + 4LL * (i + 1)) * *(float *)(a2 + 4LL * (i + 1))
       + *(float *)(a1 + 4LL * (i + 2)) * *(float *)(a2 + 4LL * (i + 2))
       + *(float *)(a1 + 4LL * (i + 3)) * *(float *)(a2 + 4LL * (i + 3));
  while ( i < a3 )
  {
    v5 = v5 + *(float *)(a1 + 4LL * i) * *(float *)(a2 + 4LL * i);
    ++i;
  }
  return v5;
}


//----- (00000001401D1050) ----------------------------------------------------
double            sub_1401D1050(__int64 a1, int a2)
{
  int i; // [rsp+0h] [rbp-18h]
  double v4; // [rsp+8h] [rbp-10h]

  v4 = 0.0;
  for ( i = 0; i < a2 - 3; i += 4 )
    v4 = v4
       + *(float *)(a1 + 4LL * i) * *(float *)(a1 + 4LL * i)
       + *(float *)(a1 + 4LL * (i + 1)) * *(float *)(a1 + 4LL * (i + 1))
       + *(float *)(a1 + 4LL * (i + 2)) * *(float *)(a1 + 4LL * (i + 2))
       + *(float *)(a1 + 4LL * (i + 3)) * *(float *)(a1 + 4LL * (i + 3));
  while ( i < a2 )
  {
    v4 = v4 + *(float *)(a1 + 4LL * i) * *(float *)(a1 + 4LL * i);
    ++i;
  }
  return v4;
}


//----- (00000001401D11A0) ----------------------------------------------------
float            sub_1401D11A0(float a1)
{
  return 1.0 / (exp((float)-a1) + 1.0);
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401D11F0) ----------------------------------------------------
__int64            sub_1401D11F0(float a1)
{
  return sub_1401AD3B0(a1);
}


//----- (00000001401D1210) ----------------------------------------------------
__int64            sub_1401D1210(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-18h]
  __int16 v5; // [rsp+24h] [rbp-14h]
  __int16 v6; // [rsp+28h] [rbp-10h]

  result = (unsigned int)(a3 - 1);
  for ( i = a3 - 1; i >= 0; --i )
  {
    if ( (int)sub_1401AD3B0(*(float *)(a2 + 4LL * i)) <= 0x7FFF )
    {
      if ( (int)sub_1401AD3B0(*(float *)(a2 + 4LL * i)) >= -32768 )
        v5 = sub_1401AD3B0(*(float *)(a2 + 4LL * i));
      else
        v5 = 0x8000;
      v6 = v5;
    }
    else
    {
      v6 = 0x7FFF;
    }
    *(_WORD *)(a1 + 2LL * i) = v6;
    result = (unsigned int)(i - 1);
  }
  return result;
}


//----- (00000001401D12E0) ----------------------------------------------------
__int64            sub_1401D12E0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  result = (unsigned int)(a3 - 1);
  for ( i = a3 - 1; i >= 0; --i )
  {
    *(float *)(a1 + 4LL * i) = (float)*(__int16 *)(a2 + 2LL * i);
    result = (unsigned int)(i - 1);
  }
  return result;
}


//----- (00000001401D1340) ----------------------------------------------------
float            sub_1401D1340(double a1)
{
  return 3.32192809488736 * log10(a1);
}


//----- (00000001401D1380) ----------------------------------------------------
__int64            sub_1401D1380(__int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+20h] [rbp-58h]
  int v4; // [rsp+30h] [rbp-48h]
  __int16 v5; // [rsp+38h] [rbp-40h]
  __int16 v6; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v7; // [rsp+40h] [rbp-38h]
  unsigned int v8; // [rsp+44h] [rbp-34h]
  unsigned int v9; // [rsp+48h] [rbp-30h]
  unsigned int v10; // [rsp+4Ch] [rbp-2Ch]
  unsigned int v11; // [rsp+50h] [rbp-28h]
  signed int v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  result = (unsigned int)*(char *)(a1 + 4541);
  if ( (_DWORD)result == 2 )
  {
    v4 = sub_1401BC2A0(65536000 * *(_DWORD *)(a1 + 4576) / *(_DWORD *)(a1 + 4544)) - 2048;
    v13 = (int)(((__int16)*(_DWORD *)(a1 + 4712) * (__int64)(-4 * *(_DWORD *)(a1 + 4712))) >> 16);
    v2 = (((__int16)(v4 - (sub_1401BC2A0(0x3C0000u) - 2048)) * v13) >> 16) + v4 - (*(int *)(a1 + 8) >> 8);
    if ( v2 < 0 )
      v2 *= 3;
    if ( v2 <= 51 )
    {
      if ( v2 >= -51 )
        v5 = v2;
      else
        v5 = -51;
      v6 = v5;
    }
    else
    {
      v6 = 51;
    }
    *(_DWORD *)(a1 + 8) += (6554LL * v6 * *(__int16 *)(a1 + 4532)) >> 16;
    v12 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
    if ( v12 <= (int)((unsigned int)sub_1401BC2A0(0x64u) << 8) )
    {
      if ( *(_DWORD *)(a1 + 8) <= (signed int)((unsigned int)sub_1401BC2A0(0x64u) << 8) )
      {
        if ( *(_DWORD *)(a1 + 8) >= (signed int)((unsigned int)sub_1401BC2A0(0x3Cu) << 8) )
          v9 = *(_DWORD *)(a1 + 8);
        else
          v9 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
        v10 = v9;
      }
      else
      {
        v10 = (unsigned int)sub_1401BC2A0(0x64u) << 8;
      }
      v11 = v10;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 8) <= (signed int)((unsigned int)sub_1401BC2A0(0x3Cu) << 8) )
      {
        if ( *(_DWORD *)(a1 + 8) >= (signed int)((unsigned int)sub_1401BC2A0(0x64u) << 8) )
          v7 = *(_DWORD *)(a1 + 8);
        else
          v7 = (unsigned int)sub_1401BC2A0(0x64u) << 8;
        v8 = v7;
      }
      else
      {
        v8 = (unsigned int)sub_1401BC2A0(0x3Cu) << 8;
      }
      v11 = v8;
    }
    *(_DWORD *)(a1 + 8) = v11;
    return a1;
  }
  return result;
}


//----- (00000001401D1630) ----------------------------------------------------
__int64            sub_1401D1630(__int64 a1, int a2)
{
  __int64 result; // rax

  sub_1401C50E0((_DWORD *)a1, a1 + 5114);
  if ( !a2 && *(int *)(a1 + 4532) >= 13 )
    *(_DWORD *)(a1 + 4532) = 12;
  if ( *(int *)(a1 + 4532) >= 13 )
  {
    *(_DWORD *)(a1 + 6104) = 0;
    *(_DWORD *)(a1 + 6100) = 0;
    *(_BYTE *)(a1 + 4781) = 1;
    result = *(int *)(a1 + 5764);
    *(_BYTE *)(a1 + result + 4736) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 4781) = 0;
    if ( (int)++*(_DWORD *)(a1 + 6104) > 10 )
    {
      if ( *(int *)(a1 + 6104) > 30 )
      {
        *(_DWORD *)(a1 + 6104) = 10;
        *(_DWORD *)(a1 + 6100) = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 6100) = 0;
    }
    result = *(int *)(a1 + 5764);
    *(_BYTE *)(a1 + result + 4736) = 0;
  }
  return result;
}


//----- (00000001401D1780) ----------------------------------------------------
__int64            sub_1401D1780()
{
  unsigned __int64 v0; // rax
       __m128i *v1; // rcx
  int v2; // eax
  _QWORD v4[6]; // [rsp-20h] [rbp-6BE8h] BYREF
  int i; // [rsp+10h] [rbp-6BB8h]
  __int16 v6; // [rsp+14h] [rbp-6BB4h]
  int v7; // [rsp+18h] [rbp-6BB0h]
  char v8; // [rsp+1Ch] [rbp-6BACh]
  int v9; // [rsp+20h] [rbp-6BA8h]
  __int16 v10; // [rsp+24h] [rbp-6BA4h]
  int j; // [rsp+28h] [rbp-6BA0h]
  int v12; // [rsp+2Ch] [rbp-6B9Ch]
  int v13; // [rsp+30h] [rbp-6B98h]
  int v14; // [rsp+34h] [rbp-6B94h]
  __int16 v15; // [rsp+38h] [rbp-6B90h]
  int v16; // [rsp+3Ch] [rbp-6B8Ch]
  int v17; // [rsp+40h] [rbp-6B88h]
  int k; // [rsp+44h] [rbp-6B84h]
  int v19; // [rsp+48h] [rbp-6B80h]
  int v20; // [rsp+4Ch] [rbp-6B7Ch]
  _DWORD *v21; // [rsp+50h] [rbp-6B78h]
  int v22; // [rsp+58h] [rbp-6B70h]
  int v23; // [rsp+5Ch] [rbp-6B6Ch]
  int v24; // [rsp+60h] [rbp-6B68h]
  float v25; // [rsp+64h] [rbp-6B64h]
  int v26; // [rsp+68h] [rbp-6B60h]
  int v27; // [rsp+6Ch] [rbp-6B5Ch]
  BOOL v28; // [rsp+70h] [rbp-6B58h]
  int v29; // [rsp+74h] [rbp-6B54h]
  int v30; // [rsp+78h] [rbp-6B50h]
  int v31; // [rsp+7Ch] [rbp-6B4Ch]
  int v32; // [rsp+80h] [rbp-6B48h]
  _DWORD *v33; // [rsp+88h] [rbp-6B40h]
  _DWORD *v34; // [rsp+90h] [rbp-6B38h]
  __m128i v35; // [rsp+98h] [rbp-6B30h] BYREF
  unsigned int v36; // [rsp+B4h] [rbp-6B14h]
  __m128i v37[4]; // [rsp+D0h] [rbp-6AF8h] BYREF
  float v38[173]; // [rsp+110h] [rbp-6AB8h] BYREF
  float v39; // [rsp+3C4h] [rbp-6804h]
  _DWORD v40[4]; // [rsp+3E8h] [rbp-67E0h]
  char v41; // [rsp+3F8h] [rbp-67D0h]
  __m128i v42[272]; // [rsp+400h] [rbp-67C8h] BYREF
  __m128i v43[272]; // [rsp+1500h] [rbp-56C8h] BYREF
  _DWORD v44[4]; // [rsp+2600h] [rbp-45C8h] BYREF
  _DWORD v45[8]; // [rsp+2610h] [rbp-45B8h] BYREF
  _DWORD v46[676]; // [rsp+2630h] [rbp-4598h] BYREF
  __m128i v47[80]; // [rsp+30C0h] [rbp-3B08h] BYREF
  __int64 v48; // [rsp+35C0h] [rbp-3608h]
  _DWORD *v49; // [rsp+35E0h] [rbp-35E8h]
  int *v50; // [rsp+35E8h] [rbp-35E0h]
  __m128i *v51; // [rsp+35F0h] [rbp-35D8h]
  int v52; // [rsp+35F8h] [rbp-35D0h]
  int v53; // [rsp+3600h] [rbp-35C8h]
  int v54; // [rsp+3608h] [rbp-35C0h]

  v29 = 0;
  memset(v44, 0, sizeof(v44));
  v12 = 0;
  v9 = 0;
  v20 = 0;
  v16 = 0;
  v8 = 0;
  *((_BYTE *)v49 + 4786) = v49[1155]++ & 3;
  v21 = &v49[v49[1148] + 1801];
  v33 = &v46[v49[1148]];
  sub_1401C58E0(v49 + 4, (__int64)v49 + 5114, v49[1146]);
  sub_1401D12E0((__int64)&v21[5 * v49[1144]], (__int64)v49 + 5114, v49[1146]);
  for ( i = 0; i < 8; ++i )
    *(float *)&v21[5 * v49[1144] + ((int)v49[1146] >> 3) * i] = *(float *)&v21[5 * v49[1144] + ((int)v49[1146] >> 3) * i]
                                                              + (float)((float)(1 - (i & 2)) * 0.000001);
  if ( !v49[1170] )
  {
    sub_1401D3B00((__int64)v49, (__int64)v38, v46, (__int64)v21, v49[1277]);
    sub_1401D29C0((__int64)v49, v38, (__int64)v33, (__int64)v21);
    sub_1401D4100((__int64)v49, (__int64)v38, (__int64)v33, (__int64)v21, v52);
    sub_1401D5670((__int64)v49, (__int64)v38, v52);
    sub_1401DEAE0();
    v22 = 6;
    v6 = 256;
    v13 = 0;
    v24 = 0;
    v14 = sub_1401C2EE0((__int64)(v49 + 1188), v49[1145]);
    v17 = -1;
    v23 = -1;
    sub_1401FC920(v37, v51, 0x38u);
    sub_1401FC920(v42, (     __m128i *)(v49 + 37), 0x1100u);
    v32 = *((char *)v49 + 4786);
    v15 = *((_WORD *)v49 + 2894);
    v30 = v49[1446];
    for ( j = 0; ; ++j )
    {
      if ( v14 == v17 )
      {
        v7 = v16;
      }
      else if ( v14 == v23 )
      {
        v7 = v20;
      }
      else
      {
        if ( j > 0 )
        {
          sub_1401FC920(v51, v37, 0x38u);
          sub_1401FC920((__m128i *)(v49 + 37), v42, 0x1100u);
          *((_BYTE *)v49 + 4786) = v32;
          *((_WORD *)v49 + 2894) = v15;
          v49[1446] = v30;
        }
        v4[5] = (uint64)(uintptr_t)(v21);
        sub_1401D62A0(v49, (__int64)v38, (char *)v49 + 4752, (__m128i *)(v49 + 37), (__int64)(v49 + 1197), (__int64)v21);
        if ( j == v22 && !v13 )
          sub_1401FC920(&v35, v51, 0x38u);
        sub_1401CA330((__int64)v49, v51, v49[1441], 0, v52);
        sub_1401C1790(v51, *((char *)v49 + 4781), *((char *)v49 + 4782), (__int64)(v49 + 1197), v49[1146]);
        v7 = sub_14019A0A0((__int64)v51);
        if ( j == v22 && !v13 && v7 > v53 )
        {
          sub_1401FC920(v51, &v35, 0x38u);
          *((_BYTE *)v49 + 7192) = v41;
          for ( i = 0; i < v49[1145]; ++i )
            *((_BYTE *)v49 + i + 4752) = 4;
          if ( v52 != 2 )
            *((_BYTE *)v49 + 4752) = v41;
          *((_WORD *)v49 + 2894) = v15;
          v49[1446] = v30;
          for ( i = 0; i < v49[1146]; ++i )
            *((_BYTE *)v49 + i + 4788) = 0;
          sub_1401CA330((__int64)v49, v51, v49[1441], 0, v52);
          sub_1401C1790(v51, *((char *)v49 + 4781), *((char *)v49 + 4782), (__int64)(v49 + 1197), v49[1146]);
          v7 = sub_14019A0A0((__int64)v51);
        }
        if ( !v54 && !j && v7 <= v53 )
          goto LABEL_88;
      }
      if ( j == v22 )
        break;
      if ( v7 <= v53 )
      {
        if ( v7 >= v53 - 5 )
          goto LABEL_88;
        v13 = 1;
        v16 = v7;
        v9 = v6;
        if ( v14 != v17 )
        {
          v17 = v14;
          sub_1401FC920(&v35, v51, 0x38u);
          sub_1401FC920(v47, (     __m128i *)SR_VEC_PTR_LANES(128, v51, i64)[0], SR_VEC_LANES(128, v51[1], u32)[3]);
          sub_1401FC920(v43, (     __m128i *)(v49 + 37), 0x1100u);
          v8 = *((_BYTE *)v49 + 7192);
        }
      }
      else if ( v13 || j < 2 )
      {
        v24 = 1;
        v20 = v7;
        v12 = v6;
        v23 = v14;
      }
      else
      {
        if ( (float)(v39 * 1.5) <= 1.5 )
          v25 = 1.5;
        else
          v25 = v39 * 1.5;
        v39 = v25;
        *((_BYTE *)v49 + 4782) = 0;
        v24 = 0;
        v23 = -1;
      }
      if ( !v13 && v7 > v53 )
      {
        for ( i = 0; i < v49[1145]; ++i )
        {
          v19 = 0;
          for ( k = v49[1147] * i; k < v49[1147] * (i + 1); ++k )
            v19 += abs(*((char *)v49 + k + 4788));
          if ( j && (v19 >= v45[i + 4] || v44[i]) )
          {
            v44[i] = 1;
          }
          else
          {
            v45[i + 4] = v19;
            *((_WORD *)&v46[672] + i) = v6;
          }
        }
      }
      if ( (v24 & v13) != 0 )
      {
        v6 = (v53 - v16) * (v12 - v9) / (v20 - v16) + v9;
        if ( v6 <= ((v12 - v9) >> 2) + v9 )
        {
          if ( v6 < v12 - ((v12 - v9) >> 2) )
            v6 = v12 - ((v12 - v9) >> 2);
        }
        else
        {
          v6 = ((v12 - v9) >> 2) + v9;
        }
      }
      else if ( v7 <= v53 )
      {
        v31 = sub_1401BC3D0(((v7 - v53) << 7) / v49[1146] + 2048);
        v6 = (unsigned int)(v6 * v31) >> 16;
      }
      else if ( v6 >= 0x4000 )
      {
        v6 = 0x7FFF;
      }
      else
      {
        v6 *= 2;
      }
      for ( i = 0; i < v49[1145]; ++i )
      {
        if ( v44[i] )
          v10 = *((_WORD *)&v46[672] + i);
        else
          v10 = v6;
        if ( (int)((v10 * (__int64)(int)v40[i]) >> 16) <= 0x7FFFFF )
        {
          if ( (int)((v10 * (__int64)(int)v40[i]) >> 16) >= -8388608 )
            v26 = (v10 * (__int64)(int)v40[i]) >> 16;
          else
            v26 = -8388608;
          v27 = v26;
        }
        else
        {
          v27 = 0x7FFFFF;
        }
        v45[i] = v27 << 8;
      }
      *((_BYTE *)v49 + 7192) = v41;
      v28 = v52 == 2;
      sub_1401C2970((char *)v49 + 4752, (__int64)v45, (char *)v49 + 7192, v28, v49[1145]);
      v14 = sub_1401C2EE0((__int64)(v49 + 1188), v49[1145]);
      for ( i = 0; i < v49[1145]; ++i )
        v38[i] = (float)(int)v45[i] / 65536.0;
    }
    if ( v13 && (v14 == v17 || v7 > v53) )
    {
      sub_1401FC920(v51, &v35, 0x38u);
      sub_1401FC920((__m128i *)SR_VEC_PTR_LANES(128, v51, i64)[0], v47, v36);
      sub_1401FC920((__m128i *)(v49 + 37), v43, 0x1100u);
      *((_BYTE *)v49 + 7192) = v8;
    }
  }
LABEL_88:
  v0 = 4LL * (5 * v49[1144] + v49[1148]);
  v1 = (     __m128i *)&v49[v49[1146] + 1801];
  v34 = v49 + 1801;
  sub_1401FC920((__m128i *)(v49 + 1801), v1, v0);
  if ( v49[1170] )
  {
    *v50 = 0;
  }
  else
  {
    v49[1136] = LODWORD(v38[v49[1145] + 56]);
    *((_BYTE *)v49 + 4541) = *((_BYTE *)v49 + 4781);
    v49[1166] = 0;
    v2 = sub_14019A0A0((__int64)v51);
    *v50 = (v2 + 7) >> 3;
  }
  return sub_1401F8B20((unsigned __int64)v4 ^ v48);
}


//----- (00000001401D26F0) ----------------------------------------------------
__int64            sub_1401D26F0(_DWORD *a1, int a2)
{
  sub_1401FCD30((void *)(uintptr_t)(a1), 0, 0x2768u);
  a1[1277] = a2;
  a1[2] = ((unsigned int)sub_1401BC2A0(0x3C0000u) - 2048) << 8;
  a1[3] = a1[2];
  a1[1166] = 1;
  return (unsigned int)sub_1401C4FB0((__int64)(a1 + 9));
}


//----- (00000001401D2790) ----------------------------------------------------
__int64            sub_1401D2790(int *a1, int *a2, int a3, int a4, unsigned int a5)
{
  int v6; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+20h] [rbp-18h]
  unsigned int v11; // [rsp+24h] [rbp-14h]

  v7 = 0;
  a1[1524] = a2[12];
  a1[1169] = a2[13];
  a1[1139] = a2[2];
  a1[1141] = a2[3];
  a1[1142] = a2[4];
  a1[1143] = a2[5];
  a1[1527] = a2[10];
  a1[1442] = *a2;
  a1[1443] = a2[1];
  a1[1134] = a3;
  a1[1444] = a4;
  if ( !a1[1167] || a1[1170] )
  {
    v11 = sub_1401C12F0(a1, a2);
    if ( a5 )
      v11 = a5;
    v8 = sub_1401DB3D0(a1, v11);
    v9 = sub_1401DB660((__int64)a1, v11, a2[6]) + v8;
    v10 = sub_1401DBB00(a1, a2[9]) + v9;
    a1[1154] = a2[8];
    v6 = sub_1401DBFF0(a1, (__int64)a2);
    a1[1167] = 1;
    return (unsigned int)(v6 + v10);
  }
  else
  {
    if ( a1[1139] != a1[1140] && a1[1144] > 0 )
      return (unsigned int)sub_1401DB3D0(a1, a1[1144]);
    return v7;
  }
}


//----- (00000001401D29C0) ----------------------------------------------------
__int64            sub_1401D29C0(__int64 a1, float *a2, __int64 a3, __int64 a4)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  __int64 v12; // [rsp+0h] [rbp-568h] BYREF
  int i; // [rsp+30h] [rbp-538h]
  float v14; // [rsp+34h] [rbp-534h]
  float v15; // [rsp+38h] [rbp-530h]
  float v16; // [rsp+3Ch] [rbp-52Ch]
  int v17; // [rsp+40h] [rbp-528h]
  float v18; // [rsp+44h] [rbp-524h]
  __int64 v19; // [rsp+48h] [rbp-520h]
  int v20; // [rsp+50h] [rbp-518h]
  float v21; // [rsp+54h] [rbp-514h]
  int v22; // [rsp+58h] [rbp-510h]
  signed int v23; // [rsp+5Ch] [rbp-50Ch]
  float v24; // [rsp+60h] [rbp-508h]
  float v25; // [rsp+64h] [rbp-504h]
  float v26; // [rsp+68h] [rbp-500h]
  float v27; // [rsp+6Ch] [rbp-4FCh]
  int v28; // [rsp+70h] [rbp-4F8h]
  float v29; // [rsp+74h] [rbp-4F4h]
  __int64 v30; // [rsp+78h] [rbp-4F0h]
  float v31; // [rsp+80h] [rbp-4E8h]
  float v32; // [rsp+84h] [rbp-4E4h]
  float v33; // [rsp+88h] [rbp-4E0h]
  float v34; // [rsp+8Ch] [rbp-4DCh]
  __int64 v35; // [rsp+90h] [rbp-4D8h]
  __m128i *v36; // [rsp+98h] [rbp-4D0h]
  __int64 v37; // [rsp+A0h] [rbp-4C8h]
  float v38[28]; // [rsp+B0h] [rbp-4B8h] BYREF
  _BYTE v39[112]; // [rsp+120h] [rbp-448h] BYREF
  _DWORD v40[240]; // [rsp+190h] [rbp-3D8h] BYREF
  __int64 v41; // [rsp+550h] [rbp-18h]

  v19 = a1 + 7192;
  v30 = a4 - 4LL * *(int *)(a1 + 4600);
  v15 = (float)*(int *)(a1 + 4732) * 0.0078125;
  a2[174] = (float)(0.5 * (float)(*(_DWORD *)(a1 + 4716) + *(_DWORD *)(a1 + 4712))) * 0.000030517578;
  a2[175] = sub_1401D11A0(0.25 * (float)(v15 - 20.0));
  if ( !*(_DWORD *)(a1 + 4676) )
  {
    v14 = 1.0 - (float)((float)*(int *)(a1 + 4532) * 0.00390625);
    v15 = v15 - (float)((float)((float)((float)(2.0 * a2[175]) * (float)((float)(0.5 * a2[174]) + 0.5)) * v14) * v14);
  }
  if ( *(_BYTE *)(a1 + 4781) == 2 )
    v15 = v15 + (float)(2.0 * *(float *)(a1 + 10084));
  else
    v15 = v15
        + (float)((float)((float)((float)(-0.40000001 * (float)*(int *)(a1 + 4732)) * 0.0078125) + 6.0)
                * (float)(1.0 - a2[174]));
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    *(_BYTE *)(a1 + 4782) = 0;
  }
  else
  {
    v20 = 2 * *(_DWORD *)(a1 + 4576);
    v21 = 0.0;
    v27 = 0.0;
    v35 = a3;
    v28 = 5 * *(__int16 *)(a1 + 4580) / 2;
    for ( i = 0; i < v28; ++i )
    {
      v31 = (float)v20;
      v4 = sub_1401D1050(v35, v20);
      v24 = (float)v20 + v4;
      v26 = sub_1401D1340(v24);
      if ( i > 0 )
      {
        v5 = *(double *)SR_VEC_READ_LANES(128, sub_140244390((float)(v26 - v27)), u64);
        v21 = v21 + v5;
      }
      v27 = v26;
      v35 += 4LL * v20;
    }
    *(_BYTE *)(a1 + 4782) = v21 <= (float)(0.60000002 * (float)(v28 - 1));
  }
  v16 = 0.001 * a2[176];
  v32 = 0.94 / (float)((float)(v16 * v16) + 1.0);
  v25 = (float)((float)*(int *)(a1 + 4672) / 65536.0) + (float)(0.0099999998 * a2[175]);
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    v22 = 3 * *(_DWORD *)(a1 + 4576);
    v23 = (*(_DWORD *)(a1 + 4604) - v22) / 2;
    sub_1401D5E90((__int64)v40, v30, 1, v23);
    v36 = (__m128i *)&v40[v23];
    sub_1401FC920(v36, (     __m128i *)(v30 + 4LL * v23), 4LL * v22);
    v17 = v22 + v23;
    sub_1401D5E90((__int64)&v40[v17], v30 + 4LL * v17, 2, v23);
    v30 += 4LL * *(int *)(a1 + 4588);
    if ( *(int *)(a1 + 4672) <= 0 )
      sub_1401CE540((__int64)v38, (__int64)v40, *(_DWORD *)(a1 + 4604), *(_DWORD *)(a1 + 4636) + 1);
    else
      sub_1401D3760((__int64)v38, (__int64)v40, v25, *(_DWORD *)(a1 + 4604), *(_DWORD *)(a1 + 4636));
    v38[0] = v38[0] + (float)((float)(v38[0] * 0.000029999999) + 1.0);
    v6 = v38[0];
    sub_1401CE180((__int64)v39, (__int64)v38, *(_DWORD *)(a1 + 4636));
    v24 = v6;
    sub_1401CE410((__int64)&a2[24 * i + 61], (__int64)v39, *(_DWORD *)(a1 + 4636));
    v7 = sqrt(v6);
    a2[i] = v7;
    if ( *(int *)(a1 + 4672) > 0 )
    {
      v37 = i;
      a2[i] = a2[i] * SR_VEC_READ_LANES(128, sub_1401DF980((__int64)&a2[24 * i + 61], v25, *(_DWORD *)(a1 + 4636)), f32)[0];
    }
    sub_1401CDE70((__int64)&a2[24 * i + 61], *(_DWORD *)(a1 + 4636), v32);
    if ( *(int *)(a1 + 4672) <= 0 )
      sub_1401DFE10((__int64)&a2[24 * i + 61], 3.9990001, *(_DWORD *)(a1 + 4636));
    else
      sub_1401DFA30(&a2[24 * i + 61], v25, 3.9990001, *(_DWORD *)(a1 + 4636));
  }
  v8 = pow(2.0, (float)(-0.16 * v15));
  v33 = v8;
  v9 = pow(2.0, 0.3199999928474426);
  v34 = v9;
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    a2[i] = a2[i] * v33;
    a2[i] = a2[i] + v34;
  }
  v16 = (float)(4.0 * (float)((float)(0.5 * (float)((float)((float)*(int *)(a1 + 4712) * 0.000030517578) - 1.0)) + 1.0))
      * (float)((float)*(int *)(a1 + 4532) * 0.00390625);
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    {
      v14 = (float)(0.2 / (float)*(int *)(a1 + 4576)) + (float)(3.0 / (float)SLODWORD(a2[i + 57]));
      a2[i + 157] = v14 + -1.0;
      a2[i + 161] = (float)(1.0 - v14) - (float)(v14 * v16);
    }
    v29 = -0.25 - (float)((float)(0.26249999 * (float)*(int *)(a1 + 4532)) * 0.00390625);
  }
  else
  {
    v14 = 1.3 / (float)*(int *)(a1 + 4576);
    a2[157] = v14 + -1.0;
    a2[161] = (float)(1.0 - v14) - (float)((float)(v14 * v16) * 0.60000002);
    for ( i = 1; i < *(_DWORD *)(a1 + 4580); ++i )
    {
      a2[i + 157] = a2[157];
      a2[i + 161] = a2[161];
    }
    v29 = -0.25;
  }
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    v18 = 0.30000001;
    v18 = (float)(0.2 * (float)(1.0 - (float)((float)(1.0 - a2[175]) * a2[174]))) + 0.30000001;
    v10 = sqrt(*(float *)(a1 + 10084));
    v18 = v18 * v10;
  }
  else
  {
    v18 = 0.0;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    *(float *)(v19 + 4) = *(float *)(v19 + 4) + (float)(0.40000001 * (float)(v18 - *(float *)(v19 + 4)));
    a2[i + 169] = *(float *)(v19 + 4);
    *(float *)(v19 + 8) = *(float *)(v19 + 8) + (float)(0.40000001 * (float)(v29 - *(float *)(v19 + 8)));
    a2[i + 165] = *(float *)(v19 + 8);
  }
  return sub_1401F8B20((unsigned __int64)&v12 ^ v41);
}


//----- (00000001401D3760) ----------------------------------------------------
__int64            sub_1401D3760(__int64 a1, __int64 a2, float a3, int a4, int a5)
{
  float v5; // xmm0_4
  int j; // [rsp+0h] [rbp-1D8h] BYREF
  int i; // [rsp+4h] [rbp-1D4h]
  double v9; // [rsp+8h] [rbp-1D0h]
  double v10; // [rsp+10h] [rbp-1C8h]
  double v11[26]; // [rsp+20h] [rbp-1B8h] BYREF
  _QWORD v12[29]; // [rsp+F0h] [rbp-E8h] BYREF

  memset(v11, 0, 0xC8u);
  memset(v12, 0, 0xC8u);
  for ( i = 0; i < a4; ++i )
  {
    v9 = *(float *)(a2 + 4LL * i);
    for ( j = 0; j < a5; j += 2 )
    {
      v10 = v11[j] + a3 * (v11[j + 1] - v9);
      v11[j] = v9;
      *(double *)&v12[j] = *(double *)&v12[j] + v11[0] * v9;
      v9 = v11[j + 1] + a3 * (v11[j + 2] - v10);
      v11[j + 1] = v10;
      *(double *)&v12[j + 1] = *(double *)&v12[j + 1] + v11[0] * v10;
    }
    v11[a5] = v9;
    *(double *)&v12[a5] = *(double *)&v12[a5] + v11[0] * v9;
  }
  for ( j = 0; j < a5 + 1; ++j )
  {
    v5 = *(double *)&v12[j];
    *(float *)(a1 + 4LL * j) = v5;
  }
  return sub_1401F8B20((unsigned __int64)&j ^ v12[26]);
}


//----- (00000001401D39E0) ----------------------------------------------------
__int64            sub_1401D39E0(__int64 a1, __int64 a2, int a3)
{
  int v4; // [rsp+0h] [rbp-18h]
  float v5; // [rsp+4h] [rbp-14h]
  float v6; // [rsp+8h] [rbp-10h]

  if ( a3 )
  {
    *(_BYTE *)(a1 + 4785) = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 5760) + *(_DWORD *)(a1 + 4616);
    if ( (float)((float)((float)v4 * *(float *)(a2 + 708)) * 0.1) <= 2.0 )
    {
      if ( (float)((float)((float)v4 * *(float *)(a2 + 708)) * 0.1) >= 0.0 )
        v5 = (float)((float)v4 * *(float *)(a2 + 708)) * 0.1;
      else
        v5 = 0.0;
      v6 = v5;
    }
    else
    {
      v6 = 2.0;
    }
    *(_BYTE *)(a1 + 4785) = (int)v6;
  }
  *(float *)(a2 + 224) = (float)word_140282798[*(char *)(a1 + 4785)] / 16384.0;
  return a2;
}

// 140282798: using guessed type __int16 word_140282798[4];

//----- (00000001401D3B00) ----------------------------------------------------
__int64            sub_1401D3B00(__int64 a1, __int64 a2, _WORD *a3, __int64 a4, int a5)
{
  float v5; // xmm1_4
  float v6; // xmm0_4
  _QWORD v8[5]; // [rsp+0h] [rbp-788h] BYREF
  int v9; // [rsp+28h] [rbp-760h]
  float v10; // [rsp+30h] [rbp-758h]
  float v11; // [rsp+38h] [rbp-750h]
  int v12; // [rsp+40h] [rbp-748h]
  int v13; // [rsp+48h] [rbp-740h]
  int v14; // [rsp+50h] [rbp-738h]
  int v15; // [rsp+58h] [rbp-730h]
  float v16; // [rsp+60h] [rbp-728h]
       __m128i *v17; // [rsp+68h] [rbp-720h]
  __m128i *v18; // [rsp+70h] [rbp-718h]
  float v19; // [rsp+78h] [rbp-710h]
  float v20; // [rsp+7Ch] [rbp-70Ch]
  int v21; // [rsp+80h] [rbp-708h]
  __int64 v22; // [rsp+88h] [rbp-700h]
  __int64 v23; // [rsp+90h] [rbp-6F8h]
  float v24[20]; // [rsp+A0h] [rbp-6E8h] BYREF
  float v25[16]; // [rsp+F0h] [rbp-698h] BYREF
  _BYTE v26[64]; // [rsp+130h] [rbp-658h] BYREF
  _DWORD v27[384]; // [rsp+170h] [rbp-618h] BYREF
  __int64 v28; // [rsp+770h] [rbp-18h]

  v21 = *(_DWORD *)(a1 + 4592) + *(_DWORD *)(a1 + 4584) + *(_DWORD *)(a1 + 4596);
  v22 = a4 - 4LL * *(int *)(a1 + 4592);
  v17 = (     __m128i *)(v22 + 4LL * v21 - 4LL * *(int *)(a1 + 4548));
  v18 = (__m128i *)v27;
  sub_1401D5E90((__int64)v27, (__int64)v17, 1, *(_DWORD *)(a1 + 4596));
  v18 = (__m128i *)&v27[*(int *)(a1 + 4596)];
  v17 = (     __m128i *)((char *)v17 + 4 * *(int *)(a1 + 4596));
  sub_1401FC920(v18, v17, 4LL * (*(_DWORD *)(a1 + 4548) - 2 * *(_DWORD *)(a1 + 4596)));
  v18 = (__m128i *)((char *)v18 + 4 * (*(_DWORD *)(a1 + 4548) - 2 * *(_DWORD *)(a1 + 4596)));
  v17 = (     __m128i *)((char *)v17 + 4 * (*(_DWORD *)(a1 + 4548) - 2 * *(_DWORD *)(a1 + 4596)));
  sub_1401D5E90((__int64)v18, (__int64)v17, 2, *(_DWORD *)(a1 + 4596));
  sub_1401CE540((__int64)v24, (__int64)v27, *(_DWORD *)(a1 + 4548), *(_DWORD *)(a1 + 4648) + 1);
  v24[0] = v24[0] + (float)((float)(v24[0] * 0.001) + 1.0);
  v5 = v24[0];
  sub_1401CE180((__int64)v26, (__int64)v24, *(_DWORD *)(a1 + 4648));
  v19 = v5;
  if ( v5 <= 1.0 )
    v20 = 1.0;
  else
    v20 = v19;
  *(float *)(a2 + 704) = v24[0] / v20;
  sub_1401CE410((__int64)v25, (__int64)v26, *(_DWORD *)(a1 + 4648));
  sub_1401CDE70((__int64)v25, *(_DWORD *)(a1 + 4648), 0.99000001);
  sub_1401D5120(a3, v25, v22, v21, *(_DWORD *)(a1 + 4648));
  if ( !*(_BYTE *)(a1 + 4781) || *(_DWORD *)(a1 + 4664) )
  {
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a2 + 228)), 0, 0x10u);
    *(_WORD *)(a1 + 4778) = 0;
    *(_BYTE *)(a1 + 4780) = 0;
    *(_DWORD *)(a1 + 10084) = 0;
  }
  else
  {
    v16 = 0.60000002;
    v16 = (float)((float)((float)(0.60000002 - (float)(0.0040000002 * (float)*(int *)(a1 + 4648)))
                        - (float)((float)(0.1 * (float)*(int *)(a1 + 4532)) * 0.00390625))
                - (float)(0.15000001 * (float)(*(char *)(a1 + 4541) >> 1)))
        - (float)((float)(0.1 * (float)*(int *)(a1 + 4728)) * 0.000030517578);
    v6 = (float)*(int *)(a1 + 4652) / 65536.0;
    v23 = a2 + 228;
    v15 = a5;
    v14 = *(_DWORD *)(a1 + 4580);
    v13 = *(_DWORD *)(a1 + 4644);
    v12 = *(_DWORD *)(a1 + 4576);
    v11 = v16;
    v10 = v6;
    v9 = *(_DWORD *)(a1 + 4544);
    v8[4] = a1 + 10084;
    if ( (unsigned int)sub_1401CE5E0() )
      *(_BYTE *)(a1 + 4781) = 1;
    else
      *(_BYTE *)(a1 + 4781) = 2;
  }
  return sub_1401F8B20((unsigned __int64)v8 ^ v28);
}


//----- (00000001401D4100) ----------------------------------------------------
__int64            sub_1401D4100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  float v5; // xmm0_4
  __int64 v7; // [rsp+0h] [rbp-8B8h] BYREF
  int i; // [rsp+50h] [rbp-868h]
  float v9; // [rsp+54h] [rbp-864h]
  _BYTE *v10; // [rsp+58h] [rbp-860h]
  __int64 v11; // [rsp+60h] [rbp-858h]
  __int64 v12; // [rsp+68h] [rbp-850h]
  __int64 v13; // [rsp+70h] [rbp-848h]
  __int64 v14; // [rsp+78h] [rbp-840h]
  __int64 v15; // [rsp+80h] [rbp-838h]
  float v16[6]; // [rsp+88h] [rbp-830h] BYREF
  _BYTE v17[80]; // [rsp+A0h] [rbp-818h] BYREF
  float v18[100]; // [rsp+F0h] [rbp-7C8h] BYREF
  _BYTE v19[1536]; // [rsp+280h] [rbp-638h] BYREF
  __m128i v20[2]; // [rsp+880h] [rbp-38h] BYREF
  __int64 v21; // [rsp+8A0h] [rbp-18h]

  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    v16[i] = 1.0 / *(float *)(a2 + 4LL * i);
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    sub_1401D49F0(v18, (__int64)v17, a3, a2 + 228, *(_DWORD *)(a1 + 4588), *(_DWORD *)(a1 + 4580));
    v12 = a1 + 4756;
    v13 = a2 + 144;
    sub_1401D5210(
      a2 + 144,
      (__m128i *)(a1 + 4756),
      (_BYTE *)(a1 + 4784),
      (int *)(a1 + 4656),
      (float *)(a2 + 708),
      (__int64)v18,
      (__int64)v17,
      *(_DWORD *)(a1 + 4588),
      *(_DWORD *)(a1 + 4580),
      *(_DWORD *)(a1 + 5108));
    sub_1401D39E0(a1, a2, a5);
    sub_1401D4C00(
      (__int64)v19,
      a4 - 4LL * *(int *)(a1 + 4640),
      a2 + 144,
      a2 + 228,
      (__int64)v16,
      *(_DWORD *)(a1 + 4588),
      *(_DWORD *)(a1 + 4580),
      *(_DWORD *)(a1 + 4640));
  }
  else
  {
    v11 = a4 - 4LL * *(int *)(a1 + 4640);
    v10 = v19;
    for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    {
      sub_1401D0DC0((__int64)v10, v11, v16[i], *(_DWORD *)(a1 + 4640) + *(_DWORD *)(a1 + 4588));
      v10 += 4 * *(_DWORD *)(a1 + 4640) + 4 * *(_DWORD *)(a1 + 4588);
      v11 += 4LL * *(int *)(a1 + 4588);
    }
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a2 + 144)), 0, 20LL * *(_DWORD *)(a1 + 4580));
    *(_DWORD *)(a2 + 708) = 0;
    *(_DWORD *)(a1 + 4656) = 0;
  }
  if ( *(_DWORD *)(a1 + 4664) )
  {
    v9 = 0.0099999998;
  }
  else
  {
    v5 = pow(2.0, (float)(*(float *)(a2 + 708) / 3.0));
    v9 = v5 / 10000.0;
    v9 = (float)(v5 / 10000.0) / (float)((float)(0.75 * *(float *)(a2 + 700)) + 0.25);
  }
  sub_1401D4680(a1, v20, (__int64)v19, v9);
  v14 = a1;
  sub_1401D61A0(a1, a2 + 16, SR_VEC_LANES(128, v20[0], i16), a1 + 4500);
  v15 = a2 + 712;
  sub_1401D4E10(
    (float *)(a2 + 712),
    (__int64)v19,
    (float *)(a2 + 16),
    (float *)a2,
    *(_DWORD *)(a1 + 4588),
    *(_DWORD *)(a1 + 4580),
    *(_DWORD *)(a1 + 4640));
  sub_1401FC920((__m128i *)(a1 + 4500), v20, 0x20u);
  return sub_1401F8B20((unsigned __int64)&v7 ^ v21);
}


//----- (00000001401D4680) ----------------------------------------------------
__int64            sub_1401D4680(__int64 a1, _WORD *a2, __int64 a3, float a4)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  __int64 v7; // [rsp+0h] [rbp-708h] BYREF
  int v8; // [rsp+30h] [rbp-6D8h]
  int i; // [rsp+34h] [rbp-6D4h]
  float v10; // [rsp+38h] [rbp-6D0h]
  float v11; // [rsp+3Ch] [rbp-6CCh]
  float v12; // [rsp+40h] [rbp-6C8h]
  double v13; // [rsp+48h] [rbp-6C0h]
  float v14[16]; // [rsp+50h] [rbp-6B8h] BYREF
  _BYTE v15[64]; // [rsp+90h] [rbp-678h] BYREF
  _DWORD v16[384]; // [rsp+D0h] [rbp-638h] BYREF
  char v17[32]; // [rsp+6D0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+6F0h] [rbp-18h]

  v8 = *(_DWORD *)(a1 + 4640) + *(_DWORD *)(a1 + 4588);
  *(_BYTE *)(a1 + 4783) = 4;
  sub_1401D0150((__int64)v15, a3, a4, v8, *(_DWORD *)(a1 + 4580), *(_DWORD *)(a1 + 4640));
  v10 = v4;
  if ( *(_DWORD *)(a1 + 4632) && !*(_DWORD *)(a1 + 4664) && *(_DWORD *)(a1 + 4580) == 4 )
  {
    sub_1401D0150((__int64)v14, a3 + 8LL * v8, a4, v8, 2, *(_DWORD *)(a1 + 4640));
    v10 = v10 - v4;
    sub_1401D6050(a2, (__int64)v14, *(_DWORD *)(a1 + 4640));
    v12 = 3.4028235e38;
    for ( i = 3; i >= 0; --i )
    {
      sub_1401C2F40((__int64)v17, a1 + 4500, (__int64)a2, i, *(_DWORD *)(a1 + 4640));
      sub_1401D6100((__int64)v14, v17, *(_DWORD *)(a1 + 4640));
      sub_1401D5120(v16, v14, a3, 2 * v8, *(_DWORD *)(a1 + 4640));
      v13 = sub_1401D1050((__int64)&v16[*(int *)(a1 + 4640)], v8 - *(_DWORD *)(a1 + 4640));
      v5 = v13 + sub_1401D1050((__int64)&v16[*(int *)(a1 + 4640) + v8], v8 - *(_DWORD *)(a1 + 4640));
      v11 = v5;
      if ( v10 <= v5 )
      {
        if ( v11 > v12 )
          break;
      }
      else
      {
        v10 = v11;
        *(_BYTE *)(a1 + 4783) = i;
      }
      v12 = v11;
    }
  }
  if ( *(_BYTE *)(a1 + 4783) == 4 )
    sub_1401D6050(a2, (__int64)v15, *(_DWORD *)(a1 + 4640));
  return sub_1401F8B20((unsigned __int64)&v7 ^ v18);
}

// 1401D4724: variable 'v4' is possibly undefined

//----- (00000001401D49F0) ----------------------------------------------------
__int64            sub_1401D49F0(float *a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned int a6)
{
  __int64 result; // rax
  float v7; // xmm0_4
  signed int i; // [rsp+30h] [rbp-38h]
  float v9; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    v12 = a3 - 4LL * (*(_DWORD *)(a4 + 4LL * i) + 2);
    sub_1401D5B50(v12, a5, 5, a1);
    sub_1401D5E00(v12, a3, a5, 5u, a2);
    v7 = sub_1401D1050(a3, a5 + 5);
    if ( v7 <= (float)((float)(0.015 * (float)(*a1 + a1[24])) + 1.0) )
      v9 = (float)(0.015 * (float)(*a1 + a1[24])) + 1.0;
    else
      v9 = v7;
    sub_1401D0C90((__int64)a1, 1.0 / v9, 25);
    sub_1401D0C90(a2, 1.0 / v9, 5);
    a3 += 4LL * a5;
    a1 += 25;
    a2 += 20;
  }
  return result;
}


//----- (00000001401D4C00) ----------------------------------------------------
__int64            sub_1401D4C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7, int a8)
{
  int j; // [rsp+0h] [rbp-58h] BYREF
  int i; // [rsp+4h] [rbp-54h]
  int k; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+10h] [rbp-48h]
  __int64 v13; // [rsp+18h] [rbp-40h]
  float v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  float v16[6]; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+48h] [rbp-10h]

  v13 = a2;
  v12 = a1;
  for ( i = 0; i < a7; ++i )
  {
    v15 = v13 - 4LL * *(int *)(a4 + 4LL * i);
    v14 = *(float *)(a5 + 4LL * i);
    for ( j = 0; j < 5; ++j )
      v16[j] = *(float *)(a3 + 4LL * (j + 5 * i));
    for ( j = 0; j < a8 + a6; ++j )
    {
      *(_DWORD *)(v12 + 4LL * j) = *(_DWORD *)(v13 + 4LL * j);
      for ( k = 0; k < 5; ++k )
        *(float *)(v12 + 4LL * j) = *(float *)(v12 + 4LL * j) - (float)(v16[k] * *(float *)(v15 + 4LL * (2 - k)));
      *(float *)(v12 + 4LL * j) = *(float *)(v12 + 4LL * j) * v14;
      v15 += 4;
    }
    v12 += 4LL * (a8 + a6);
    v13 += 4LL * a6;
  }
  return sub_1401F8B20((unsigned __int64)&j ^ v17);
}


//----- (00000001401D4E10) ----------------------------------------------------
__int64            sub_1401D4E10(float *a1, __int64 a2, float *a3, float *a4, int a5, int a6, int a7)
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
  sub_1401D5120(v19, a3, a2, 2 * (a5 + a7), a7);
  v15 = (float)(*a4 * *a4);
  v7 = v15 * sub_1401D1050((__int64)v14, a5);
  *a1 = v7;
  v16 = (float)(a4[1] * a4[1]);
  v8 = v16 * sub_1401D1050((__int64)&v14[v13], a5);
  a1[1] = v8;
  if ( a6 == 4 )
  {
    sub_1401D5120(v19, a3 + 16, a2 + 8LL * v13, 2 * v13, a7);
    v17 = (float)(a4[2] * a4[2]);
    v9 = v17 * sub_1401D1050((__int64)v14, a5);
    a1[2] = v9;
    v18 = (float)(a4[3] * a4[3]);
    v10 = v18 * sub_1401D1050((__int64)&v14[v13], a5);
    a1[3] = v10;
  }
  return sub_1401F8B20((unsigned __int64)&v12 ^ v20);
}


//----- (00000001401D5120) ----------------------------------------------------
_WORD *           sub_1401D5120(_WORD *a1, float *a2, __int64 a3, int a4, int a5)
{
  switch ( a5 )
  {
    case 6:
      sub_1401DF7F0((__int64)a1, a2, a3, a4);
      break;
    case 8:
      sub_1401DF610((__int64)a1, a2, a3, a4);
      break;
    case 10:
      sub_1401DF3D0((__int64)a1, a2, a3, a4);
      break;
    case 12:
      sub_1401DF140((__int64)a1, a2, a3, a4);
      break;
    case 16:
      sub_1401DEE00((__int64)a1, a2, a3, a4);
      break;
  }
  return sub_1401FCD30((void *)(uintptr_t)(a1), 0, 4LL * a5);
}


//----- (00000001401D5210) ----------------------------------------------------
__int64            sub_1401D5210(
        __int64 a1,
        __m128i *a2,
        _BYTE *a3,
        int *a4,
        float *a5,
        __int64 a6,
        __int64 a7,
        __int16 a8,
        int a9,
        int a10)
{
  _DWORD v11[20]; // [rsp+0h] [rbp-278h] BYREF
  int i; // [rsp+50h] [rbp-228h]
  int v13[3]; // [rsp+54h] [rbp-224h] BYREF
  _DWORD v14[20]; // [rsp+60h] [rbp-218h] BYREF
  _DWORD v15[100]; // [rsp+B0h] [rbp-1C8h] BYREF
  _WORD v16[20]; // [rsp+240h] [rbp-38h] BYREF
  __int64 v17; // [rsp+268h] [rbp-10h]

  for ( i = 0; i < 25 * a9; ++i )
    v15[i] = sub_1401D11F0(*(float *)(a6 + 4LL * i) * 131072.0);
  for ( i = 0; i < 5 * a9; ++i )
    v14[i] = sub_1401D11F0(*(float *)(a7 + 4LL * i) * 131072.0);
  v11[18] = a10;
  sub_1401C2FD0((__int64)v16, a2, a3, a4, v13, (__int64)v15, v14, a8, a9);
  for ( i = 0; i < 5 * a9; ++i )
    *(float *)(a1 + 4LL * i) = (float)(__int16)v16[i] * 0.000061035156;
  *a5 = (float)v13[0] * 0.0078125;
  return sub_1401F8B20((unsigned __int64)v11 ^ v17);
}


//----- (00000001401D53D0) ----------------------------------------------------
float            sub_1401D53D0(__int64 a1, float *a2, __int64 a3, float a4, int a5)
{
  int j; // [rsp+0h] [rbp-28h]
  int k; // [rsp+0h] [rbp-28h]
  int n; // [rsp+0h] [rbp-28h]
  float v9; // [rsp+4h] [rbp-24h]
  float v10; // [rsp+8h] [rbp-20h]
  float v11; // [rsp+8h] [rbp-20h]
  int m; // [rsp+Ch] [rbp-1Ch]
  int i; // [rsp+10h] [rbp-18h]
  float v14; // [rsp+14h] [rbp-14h]

  v9 = 0.0;
  v14 = 0.0000000099999999 * (float)(*a2 + a2[a5 * a5 - 1]);
  for ( i = 0; i < 10; ++i )
  {
    v10 = 0.0;
    for ( j = 0; j < a5; ++j )
      v10 = v10 + (float)(*(float *)(a3 + 4LL * j) * *(float *)(a1 + 4LL * j));
    v9 = a4 - (float)(2.0 * v10);
    for ( k = 0; k < a5; ++k )
    {
      v11 = 0.0;
      for ( m = k + 1; m < a5; ++m )
        v11 = v11 + (float)(a2[m * a5 + k] * *(float *)(a1 + 4LL * m));
      v9 = v9
         + (float)(*(float *)(a1 + 4LL * k)
                 * (float)((float)(2.0 * v11) + (float)(a2[k * a5 + k] * *(float *)(a1 + 4LL * k))));
    }
    if ( v9 > 0.0 )
      break;
    for ( n = 0; n < a5; ++n )
      a2[n * a5 + n] = a2[n * a5 + n] + v14;
    v14 = v14 * 2.0;
  }
  if ( i == 10 )
    return 1.0;
  return v9;
}


//----- (00000001401D5670) ----------------------------------------------------
__int64            sub_1401D5670(__int64 a1, __int64 a2, int a3)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  __int64 v6; // [rsp+0h] [rbp-78h] BYREF
  int i; // [rsp+30h] [rbp-48h]
  float v8; // [rsp+34h] [rbp-44h]
  int v9; // [rsp+38h] [rbp-40h]
  BOOL v10; // [rsp+3Ch] [rbp-3Ch]
  float v11; // [rsp+40h] [rbp-38h]
  float v12; // [rsp+44h] [rbp-34h]
  float v13; // [rsp+48h] [rbp-30h]
  char *v14; // [rsp+50h] [rbp-28h]
  __m128i v15; // [rsp+58h] [rbp-20h] BYREF
  __int64 v16; // [rsp+68h] [rbp-10h]

  v14 = (char *)(a1 + 7192);
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    v11 = 1.0 - (float)(0.5 * sub_1401D11A0(0.25 * (float)(*(float *)(a2 + 708) - 12.0)));
    for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
      *(float *)(a2 + 4LL * i) = *(float *)(a2 + 4LL * i) * v11;
  }
  v3 = pow(2.0, (float)(0.33000001 * (float)(21.0 - (float)((float)*(int *)(a1 + 4732) * 0.0078125))))
     / (double)*(int *)(a1 + 4588);
  v12 = v3;
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    v4 = sqrt((float)((float)(*(float *)(a2 + 4LL * i) * *(float *)(a2 + 4LL * i))
                    + (float)(*(float *)(a2 + 4LL * i + 712) * v12)));
    v8 = v4;
    if ( v4 >= 32767.0 )
      v9 = 1191181824;
    else
      v9 = LODWORD(v8);
    *(_DWORD *)(a2 + 4LL * i) = v9;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    SR_VEC_LANES(128, v15, i32)[i] = (int)(float)(*(float *)(a2 + 4LL * i) * 65536.0);
  sub_1401FC920((__m128i *)(a2 + 728), &v15, 4LL * *(int *)(a1 + 4580));
  *(_BYTE *)(a2 + 744) = *v14;
  v10 = a3 == 2;
  sub_1401C2970((char *)(a1 + 4752), (__int64)&v15, v14, v10, *(_DWORD *)(a1 + 4580));
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    *(float *)(a2 + 4LL * i) = (float)SR_VEC_LANES(128, v15, i32)[i] / 65536.0;
  if ( *(_BYTE *)(a1 + 4781) == 2 )
    *(_BYTE *)(a1 + 4782) = (float)(*(float *)(a2 + 708) + (float)((float)*(int *)(a1 + 4728) * 0.000030517578)) <= 1.0;
  v13 = (float)word_1402827F8[2 * (*(char *)(a1 + 4781) >> 1) + *(char *)(a1 + 4782)] / 1024.0;
  *(float *)(a2 + 692) = (float)((float)((float)((float)((float)(-0.050000001 * (float)*(int *)(a1 + 4628)) + 1.2)
                                               + (float)((float)(-0.2 * (float)*(int *)(a1 + 4532)) * 0.00390625))
                                       + (float)(-0.1 * *(float *)(a2 + 696)))
                               + (float)(-0.2 * *(float *)(a2 + 700)))
                       + (float)(0.80000001 * v13);
  return sub_1401F8B20((unsigned __int64)&v6 ^ v16);
}

// 1402827F8: using guessed type __int16 word_1402827F8[4];

//----- (00000001401D5B50) ----------------------------------------------------
__int64            sub_1401D5B50(__int64 a1, int a2, int a3, float *a4)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  __int64 result; // rax
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  int i; // [rsp+20h] [rbp-28h]
  int k; // [rsp+20h] [rbp-28h]
  int j; // [rsp+24h] [rbp-24h]
  double v14; // [rsp+28h] [rbp-20h]
  double v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+38h] [rbp-10h]

  v16 = a1 + 4LL * (a3 - 1);
  v14 = sub_1401D1050(v16, a2);
  v4 = v14;
  *a4 = v4;
  for ( i = 1; i < a3; ++i )
  {
    v14 = v14
        + (float)((float)(*(float *)(v16 + 4LL * -i) * *(float *)(v16 + 4LL * -i))
                - (float)(*(float *)(v16 + 4LL * (a2 - i)) * *(float *)(v16 + 4LL * (a2 - i))));
    v5 = v14;
    a4[i + a3 * i] = v5;
  }
  v17 = a1 + 4LL * (a3 - 2);
  for ( j = 1; ; ++j )
  {
    result = (unsigned int)a3;
    if ( j >= a3 )
      break;
    v15 = sub_1401D0EF0(v16, v17, a2);
    v7 = v15;
    a4[a3 * j] = v7;
    v8 = v15;
    a4[j] = v8;
    for ( k = 1; k < a3 - j; ++k )
    {
      v15 = v15
          + (float)((float)(*(float *)(v16 + 4LL * -k) * *(float *)(v17 + 4LL * -k))
                  - (float)(*(float *)(v16 + 4LL * (a2 - k)) * *(float *)(v17 + 4LL * (a2 - k))));
      v9 = v15;
      a4[k + a3 * (k + j)] = v9;
      v10 = v15;
      a4[k + j + a3 * k] = v10;
    }
    v17 -= 4;
  }
  return result;
}


//----- (00000001401D5E00) ----------------------------------------------------
__int64            sub_1401D5E00(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  float v6; // xmm0_4
  int i; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = a1 + 4LL * (int)(a4 - 1);
  for ( i = 0; ; ++i )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    v6 = sub_1401D0EF0(v8, a2, a3);
    *(float *)(a5 + 4LL * i) = v6;
    v8 -= 4;
  }
  return result;
}


//----- (00000001401D5E90) ----------------------------------------------------
__int64            sub_1401D5E90(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  float v6; // [rsp+4h] [rbp-24h]
  float v7; // [rsp+8h] [rbp-20h]
  float v8; // [rsp+10h] [rbp-18h]

  v8 = 2.0 - (float)((float)(3.1415927 / (float)(int)(a4 + 1)) * (float)(3.1415927 / (float)(int)(a4 + 1)));
  if ( a3 >= 2 )
  {
    v6 = 1.0;
    v7 = 0.5 * v8;
  }
  else
  {
    v6 = 0.0;
    v7 = 3.1415927 / (float)(int)(a4 + 1);
  }
  for ( i = 0; ; i += 4 )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    *(float *)(a1 + 4LL * i) = (float)(*(float *)(a2 + 4LL * i) * 0.5) * (float)(v6 + v7);
    *(float *)(a1 + 4LL * (i + 1)) = *(float *)(a2 + 4LL * (i + 1)) * v7;
    v6 = (float)(v8 * v7) - v6;
    *(float *)(a1 + 4LL * (i + 2)) = (float)(*(float *)(a2 + 4LL * (i + 2)) * 0.5) * (float)(v7 + v6);
    *(float *)(a1 + 4LL * (i + 3)) = *(float *)(a2 + 4LL * (i + 3)) * v6;
    v7 = (float)(v8 * v6) - v7;
  }
  return result;
}


//----- (00000001401D6050) ----------------------------------------------------
__int64            sub_1401D6050(_WORD *a1, __int64 a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-88h] BYREF
  int i; // [rsp+20h] [rbp-68h]
  _DWORD v6[16]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+70h] [rbp-18h]

  for ( i = 0; i < a3; ++i )
    v6[i] = sub_1401D11F0(*(float *)(a2 + 4LL * i) * 65536.0);
  sub_1401BC940(a1, (__int64)v6, a3);
  return sub_1401F8B20((unsigned __int64)&v4 ^ v7);
}


//----- (00000001401D6100) ----------------------------------------------------
__int64            sub_1401D6100(__int64 a1,      char *a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-58h] BYREF
  int i; // [rsp+20h] [rbp-38h]
  _WORD v6[16]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-10h]

  CWinApp__ShowAppMessageBox((struct CWinApp *)v6, a2, a3);
  for ( i = 0; i < a3; ++i )
    *(float *)(a1 + 4LL * i) = (float)(__int16)v6[i] * 0.00024414062;
  return sub_1401F8B20((unsigned __int64)&v4 ^ v7);
}


//----- (00000001401D61A0) ----------------------------------------------------
__int64            sub_1401D61A0(__int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  __int64 v5; // [rsp+0h] [rbp-88h] BYREF
  int i; // [rsp+20h] [rbp-68h]
  int j; // [rsp+24h] [rbp-64h]
  _OWORD v8[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]

  sub_1401C5A20(a1, (__int64)v8, a3, a4);
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 4640); ++j )
      *(float *)(((__int64)i << 6) + a2 + 4LL * j) = (float)*((__int16 *)&v8[2 * i] + j) * 0.00024414062;
  }
  return sub_1401F8B20((unsigned __int64)&v5 ^ v9);
}


//----- (00000001401D62A0) ----------------------------------------------------
__int64            sub_1401D62A0(_DWORD *a1, __int64 a2, char *a3, __m128i *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // [rsp+0h] [rbp-4A8h] BYREF
  __int64 v8; // [rsp+68h] [rbp-440h]
  __int64 v9; // [rsp+70h] [rbp-438h]
  int i; // [rsp+80h] [rbp-428h]
  int j; // [rsp+84h] [rbp-424h]
  int v12; // [rsp+88h] [rbp-420h]
  int v13; // [rsp+8Ch] [rbp-41Ch]
  unsigned int v14; // [rsp+90h] [rbp-418h]
  __int64 v15; // [rsp+98h] [rbp-410h]
  _DWORD *v16; // [rsp+A0h] [rbp-408h]
  _DWORD v17[4]; // [rsp+A8h] [rbp-400h] BYREF
  _DWORD v18[4]; // [rsp+B8h] [rbp-3F0h] BYREF
  int v19[4]; // [rsp+C8h] [rbp-3E0h] BYREF
  int v20[4]; // [rsp+D8h] [rbp-3D0h] BYREF
  _WORD v21[20]; // [rsp+E8h] [rbp-3C0h] BYREF
  _OWORD v22[4]; // [rsp+110h] [rbp-398h] BYREF
  _WORD v23[96]; // [rsp+150h] [rbp-358h] BYREF
  _WORD v24[320]; // [rsp+210h] [rbp-298h] BYREF
  __int64 v25; // [rsp+490h] [rbp-18h]

  for ( i = 0; i < a1[1145]; ++i )
  {
    for ( j = 0; j < a1[1159]; ++j )
      v23[24 * i + j] = sub_1401D11F0(*(float *)(a2 + 4LL * (j + 24 * i) + 244) * 8192.0);
  }
  for ( i = 0; i < a1[1145]; ++i )
  {
    v14 = (unsigned int)sub_1401D11F0(*(float *)(a2 + 4LL * i + 644) * 16384.0) << 16;
    v18[i] = (unsigned __int16)sub_1401D11F0(*(float *)(a2 + 4LL * i + 628) * 16384.0) | v14;
    v19[i] = sub_1401D11F0(*(float *)(a2 + 4LL * i + 660) * 16384.0);
    v20[i] = sub_1401D11F0(*(float *)(a2 + 4LL * i + 676) * 16384.0);
  }
  v13 = sub_1401D11F0(*(float *)(a2 + 692) * 1024.0);
  for ( i = 0; i < 5 * a1[1145]; ++i )
    v21[i] = sub_1401D11F0(*(float *)(a2 + 4LL * i + 144) * 16384.0);
  for ( j = 0; j < 2; ++j )
  {
    for ( i = 0; i < a1[1160]; ++i )
      *((_WORD *)&v22[2 * j] + i) = sub_1401D11F0(*(float *)(a2 + ((__int64)j << 6) + 16 + 4LL * i) * 4096.0);
  }
  for ( i = 0; i < a1[1145]; ++i )
    v17[i] = sub_1401D11F0(*(float *)(a2 + 4LL * i) * 65536.0);
  if ( a3[29] == 2 )
    v12 = word_140282798[a3[33]];
  else
    v12 = 0;
  for ( i = 0; i < a1[1146]; ++i )
    v24[i] = sub_1401D11F0(*(float *)(a6 + 4LL * i));
  if ( (int)a1[1157] <= 1 && (int)a1[1168] <= 0 )
  {
    v16 = a1;
    sub_1401C3AC0(
      a1,
      a4,
      a3,
      (__int64)v24,
      a5,
      (__int64)v22,
      (__int64)v21,
      (__int64)v23,
      (__int64)v20,
      (__int64)v19,
      (__int64)v18,
      (__int64)v17,
      a2 + 228,
      v13,
      v12);
  }
  else
  {
    v15 = (__int64)a1;
    LODWORD(v8) = v13;
    LODWORD(v9) = v12;
    sub_1401C4120(
      a1,
      a4,
      a3,
      (__int64)v24,
      a5,
      (__int64)v22,
      (__int64)v21,
      (__int64)v23,
      v20,
      v19,
      (__int64)v18,
      (__int64)v17,
      a2 + 228,
      v8,
      v9);
  }
  return sub_1401F8B20((unsigned __int64)&v7 ^ v25);
}

// 140282798: using guessed type __int16 word_140282798[4];

//----- (00000001401D68F0) ----------------------------------------------------
__int64            sub_1401D68F0(__int64 a1, _DWORD *a2)
{
  BOOL v3; // [rsp+0h] [rbp-28h]

  *a2 = *(_DWORD *)(a1 + 20240);
  a2[1] = *(_DWORD *)(a1 + 20244);
  a2[2] = *(_DWORD *)(a1 + 4556);
  a2[3] = *(_DWORD *)(a1 + 4564);
  a2[4] = *(_DWORD *)(a1 + 4568);
  a2[5] = *(_DWORD *)(a1 + 4572);
  a2[6] = *(_DWORD *)(a1 + 4612);
  a2[7] = *(_DWORD *)(a1 + 4608);
  a2[8] = *(_DWORD *)(a1 + 4616);
  a2[9] = *(_DWORD *)(a1 + 4624);
  a2[10] = *(_DWORD *)(a1 + 6108);
  a2[12] = *(_DWORD *)(a1 + 6096);
  a2[13] = *(_DWORD *)(a1 + 4676);
  a2[18] = 1000 * *(__int16 *)(a1 + 4576);
  a2[19] = *(_DWORD *)(a1 + 4536);
  v3 = *(_DWORD *)(a1 + 4576) == 16 && !*(_DWORD *)(a1 + 28);
  a2[20] = v3;
  return 0;
}


//----- (00000001401D6B20) ----------------------------------------------------
__int64            sub_1401D6B20(__int64 a1, __int64 a2, int a3, int a4)
{
  int i; // [rsp+0h] [rbp-18h]
  int v6; // [rsp+4h] [rbp-14h]

  for ( i = 0; i < a4; ++i )
  {
    v6 = *(_DWORD *)(a2 + 4LL * (2 * i + 1)) + *(_DWORD *)(a2 + 8LL * i);
    if ( v6 > a3 )
      return 1;
    *(_DWORD *)(a1 + 4LL * i) = v6;
  }
  return 0;
}


//----- (00000001401D6BB0) ----------------------------------------------------
unsigned __int64            sub_1401D6BB0(__m128i *a1, __m128i *a2, int a3, int a4)
{
  unsigned __int64 result; // rax
  int k; // [rsp+20h] [rbp-18h]
  int i; // [rsp+20h] [rbp-18h]
  int m; // [rsp+24h] [rbp-14h]
  int j; // [rsp+24h] [rbp-14h]

  if ( a3 >= 4 )
  {
    sub_1401FC920(a1, (     __m128i *)&dword_1402828B8[12], 0xCu);
    return (unsigned __int64)sub_1401FC920(a2, (     __m128i *)&dword_140282848[8], 8u);
  }
  else if ( a4 <= 0 )
  {
    sub_1401FC920(a1, (     __m128i *)&dword_1402828B8[3 * a3], 0xCu);
    return (unsigned __int64)sub_1401FC920(a2, (     __m128i *)&dword_140282848[2 * a3], 8u);
  }
  else if ( a4 >= 0x8000 )
  {
    for ( i = 0; i < 3; ++i )
    {
      SR_VEC_PTR_LANES(128, a1, i32)[i] = (((__int16)a4 * (__int64)(dword_1402828B8[3 * a3 + 3 + i] - dword_1402828B8[3 * a3 + i])) >> 16)
                       + dword_1402828B8[3 * a3 + 3 + i];
      result = (unsigned int)(i + 1);
    }
    for ( j = 0; j < 2; ++j )
    {
      SR_VEC_PTR_LANES(128, a2, i32)[j] = (((__int16)a4 * (__int64)(dword_140282848[2 * a3 + 2 + j] - dword_140282848[2 * a3 + j])) >> 16)
                       + dword_140282848[2 * a3 + 2 + j];
      result = (unsigned int)(j + 1);
    }
  }
  else
  {
    for ( k = 0; k < 3; ++k )
    {
      SR_VEC_PTR_LANES(128, a1, i32)[k] = (((__int16)a4 * (__int64)(dword_1402828B8[3 * a3 + 3 + k] - dword_1402828B8[3 * a3 + k])) >> 16)
                       + dword_1402828B8[3 * a3 + k];
      result = (unsigned int)(k + 1);
    }
    for ( m = 0; m < 2; ++m )
    {
      SR_VEC_PTR_LANES(128, a2, i32)[m] = (((__int16)a4 * (__int64)(dword_140282848[2 * a3 + 2 + m] - dword_140282848[2 * a3 + m])) >> 16)
                       + dword_140282848[2 * a3 + m];
      result = (unsigned int)(m + 1);
    }
  }
  return result;
}

// 140282848: using guessed type _DWORD dword_140282848[10];
// 1402828B8: using guessed type _DWORD dword_1402828B8[18];

//----- (00000001401D6F30) ----------------------------------------------------
__int64            sub_1401D6F30(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5)
{
  __int64 result; // rax
  __int16 v6; // [rsp+0h] [rbp-18h]
  int v7; // [rsp+0h] [rbp-18h]
  int v8; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  int v10; // [rsp+8h] [rbp-10h]

  v6 = 0;
  result = (unsigned int)(a5 - 1);
  for ( i = a5 - 1; i >= 0; --i )
  {
    v10 = (*(unsigned __int8 *)(a3 + i) * v6) >> 8;
    v7 = *(char *)(a2 + i) << 10;
    if ( v7 <= 0 )
      v8 = v7 + (v7 < 0 ? 0x66 : 0);
    else
      v8 = v7 - 102;
    v6 = ((unsigned int)(a4 * v8) >> 16) + v10;
    *(_WORD *)(a1 + 2LL * i) = v6;
    result = (unsigned int)(i - 1);
  }
  return result;
}


//----- (00000001401D7000) ----------------------------------------------------
__int64            sub_1401D7000(int *a1, __int16 *a2, int a3)
{
  unsigned int v4; // [rsp+0h] [rbp-18h]

  v4 = ((a2[9] * (__int64)*(a1 - 9)) >> 16)
     + ((a2[8] * (__int64)*(a1 - 8)) >> 16)
     + ((a2[7] * (__int64)*(a1 - 7)) >> 16)
     + ((a2[6] * (__int64)*(a1 - 6)) >> 16)
     + ((a2[5] * (__int64)*(a1 - 5)) >> 16)
     + ((a2[4] * (__int64)*(a1 - 4)) >> 16)
     + ((a2[3] * (__int64)*(a1 - 3)) >> 16)
     + ((a2[2] * (__int64)*(a1 - 2)) >> 16)
     + ((a2[1] * (__int64)*(a1 - 1)) >> 16)
     + ((*a2 * (__int64)*a1) >> 16)
     + (a3 >> 1);
  if ( a3 == 16 )
    v4 += ((a2[15] * (__int64)*(a1 - 15)) >> 16)
        + ((a2[14] * (__int64)*(a1 - 14)) >> 16)
        + ((a2[13] * (__int64)*(a1 - 13)) >> 16)
        + ((a2[12] * (__int64)*(a1 - 12)) >> 16)
        + ((a2[11] * (__int64)*(a1 - 11)) >> 16)
        + ((a2[10] * (__int64)*(a1 - 10)) >> 16);
  return v4;
}


//----- (00000001401D73B0) ----------------------------------------------------
__int64            sub_1401D73B0(int *a1, int *a2, __int16 *a3, int a4)
{
  int v5; // [rsp+0h] [rbp-18h]
  int v6; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  int v8; // [rsp+8h] [rbp-10h]
  int v9; // [rsp+8h] [rbp-10h]
  int v10; // [rsp+Ch] [rbp-Ch]

  v8 = *a1;
  v10 = *a2;
  *a2 = *a1;
  v5 = ((*a3 * (__int64)v8) >> 16) + (a4 >> 1);
  for ( i = 2; i < a4; i += 2 )
  {
    v9 = a2[i - 1];
    a2[i - 1] = v10;
    v6 = ((a3[i - 1] * (__int64)v10) >> 16) + v5;
    v10 = a2[i];
    a2[i] = v9;
    v5 = ((a3[i] * (__int64)v9) >> 16) + v6;
  }
  a2[a4 - 1] = v10;
  return 2 * ((unsigned int)((a3[a4 - 1] * (__int64)v10) >> 16) + v5);
}


//----- (00000001401D7560) ----------------------------------------------------
__int64            sub_1401D7560(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int16 a8,
        __int64 a9,
        __int64 a10,
        int a11)
{
  int v11; // eax
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-28h]
  int j; // [rsp+20h] [rbp-28h]
  int k; // [rsp+20h] [rbp-28h]
  int m; // [rsp+20h] [rbp-28h]
  int n; // [rsp+20h] [rbp-28h]
  int ii; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+24h] [rbp-24h]
  int v20; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+30h] [rbp-18h]

  v21 = *(_DWORD *)(a10 + 4LL * a7);
  if ( *(int *)(a9 + 4LL * a7) <= 1 )
    v11 = sub_1401BE820(1, 47);
  else
    v11 = sub_1401BE820(*(_DWORD *)(a9 + 4LL * a7), 47);
  v20 = v11;
  for ( i = 0; i < *(_DWORD *)(a1 + 4588); ++i )
    *(_DWORD *)(a4 + 4LL * i) = ((((v11 >> 4) + 1) >> 1) * (__int64)*(__int16 *)(a3 + 2LL * i)) >> 16;
  if ( a2[1087] )
  {
    if ( !a7 )
      v20 = 4 * ((a8 * (__int64)v11) >> 16);
    for ( j = a2[1083] - v21 - 2; j < a2[1083]; ++j )
      *(_DWORD *)(a6 + 4LL * j) = (*(__int16 *)(a5 + 2LL * j) * (__int64)v20) >> 16;
  }
  result = a7;
  if ( *(_DWORD *)(a9 + 4LL * a7) != a2[1086] )
  {
    v19 = sub_1401BE550(a2[1086], *(_DWORD *)(a9 + 4LL * a7), 16);
    for ( k = a2[1084] - *(_DWORD *)(a1 + 4592); k < a2[1084]; ++k )
      a2[k + 320] = ((int)a2[k + 320] * (__int64)v19) >> 16;
    if ( a11 == 2 && !a2[1087] )
    {
      for ( m = a2[1083] - v21 - 2; m < a2[1083]; ++m )
        *(_DWORD *)(a6 + 4LL * m) = (*(int *)(a6 + 4LL * m) * (__int64)v19) >> 16;
    }
    a2[1080] = ((int)a2[1080] * (__int64)v19) >> 16;
    a2[1081] = ((int)a2[1081] * (__int64)v19) >> 16;
    for ( n = 0; n < 16; ++n )
      a2[n + 960] = ((int)a2[n + 960] * (__int64)v19) >> 16;
    for ( ii = 0; ii < 24; ++ii )
      a2[ii + 1056] = ((int)a2[ii + 1056] * (__int64)v19) >> 16;
    result = *(unsigned int *)(a9 + 4LL * a7);
    a2[1086] = result;
  }
  return result;
}


//----- (00000001401D7910) ----------------------------------------------------
__m128i *           sub_1401D7910(
        __m128i *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int16 *a7,
        __int16 *a8,
        __int16 *a9,
        int a10,
        int a11,
        __int16 a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19)
{
  int v19; // eax
  int v21; // [rsp+20h] [rbp-98h]
  int v22; // [rsp+20h] [rbp-98h]
  int v23; // [rsp+24h] [rbp-94h]
  int v24; // [rsp+28h] [rbp-90h]
  int v25; // [rsp+2Ch] [rbp-8Ch]
  int v26; // [rsp+30h] [rbp-88h]
  int v27; // [rsp+34h] [rbp-84h]
  int i; // [rsp+38h] [rbp-80h]
  int v29; // [rsp+3Ch] [rbp-7Ch]
  int v30; // [rsp+40h] [rbp-78h]
  int v31; // [rsp+44h] [rbp-74h]
  int v32; // [rsp+4Ch] [rbp-6Ch]
  int v33; // [rsp+50h] [rbp-68h]
  int v34; // [rsp+54h] [rbp-64h]
  int v35; // [rsp+58h] [rbp-60h]
  int v36; // [rsp+5Ch] [rbp-5Ch]
  int v37; // [rsp+60h] [rbp-58h]
  int *v38; // [rsp+68h] [rbp-50h]
  int v39; // [rsp+70h] [rbp-48h]
  int v40; // [rsp+74h] [rbp-44h]
  int v41; // [rsp+78h] [rbp-40h]
  int v42; // [rsp+7Ch] [rbp-3Ch]
  __int16 v43; // [rsp+80h] [rbp-38h]
  __int32 v44; // [rsp+84h] [rbp-34h]
  __int32 *v45; // [rsp+90h] [rbp-28h]
  int *v46; // [rsp+98h] [rbp-20h]

  v45 = &SR_VEC_LANES(128, a1[80], i32)[SR_VEC_LANES(128, a1[271], i32)[0] - a10 + 1];
  v38 = (int *)(a6 + 4LL * (SR_VEC_LANES(128, a1[270], i32)[3] - a10 + 2));
  v37 = a14 >> 6;
  v46 = &SR_VEC_LANES(128, a1[243], i32)[3];
  for ( i = 0; i < a17; ++i )
  {
    SR_VEC_LANES(128, a1[271], i32)[1] = 196314165 * SR_VEC_LANES(128, a1[271], i32)[1] + 907633515;
    v41 = sub_1401D7000(v46, a7, a19);
    if ( a2 == 2 )
    {
      v23 = ((a8[4] * (__int64)*(v38 - 4)) >> 16)
          + ((a8[3] * (__int64)*(v38 - 3)) >> 16)
          + ((a8[2] * (__int64)*(v38 - 2)) >> 16)
          + ((a8[1] * (__int64)*(v38 - 1)) >> 16)
          + ((*a8 * (__int64)*v38) >> 16)
          + 2;
      ++v38;
    }
    else
    {
      v23 = 0;
    }
    v34 = ((a12 * (__int64)SR_VEC_LANES(128, a1[270], i32)[0]) >> 16)
        + sub_1401D73B0(&SR_VEC_LANES(128, a1[270], i32)[1], SR_VEC_LANES(128, a1[264], i32), a9, a18);
    v35 = ((((__int64)a13 >> 16) * SR_VEC_LANES(128, a1[270], i32)[0]) >> 16)
        + (((__int16)a13 * (__int64)SR_VEC_LANES(128, a1[79], i32)[SR_VEC_LANES(128, a1[271], i32)[0] + 3]) >> 16);
    v25 = 4 * v41 - v34 - v35;
    if ( a10 <= 0 )
    {
      v19 = (v25 >> 1) + 1;
    }
    else
    {
      v31 = 2 * (((((__int64)a11 >> 16) * *(v45 - 1)) >> 16) + (((__int16)a11 * (__int64)(*(v45 - 2) + *v45)) >> 16));
      ++v45;
      v19 = ((v23 - v31 + 2 * v25) >> 2) + 1;
    }
    v27 = *(_DWORD *)(a3 + 4LL * i) - (v19 >> 1);
    if ( SR_VEC_LANES(128, a1[271], i32)[1] < 0 )
      v27 = (v19 >> 1) - *(_DWORD *)(a3 + 4LL * i);
    if ( v27 <= 30720 )
    {
      if ( v27 >= -31744 )
        v39 = v27;
      else
        v39 = -31744;
      v40 = v39;
    }
    else
    {
      v40 = 30720;
    }
    v21 = v40 - a16;
    v26 = (v40 - a16) >> 10;
    if ( a15 > 2048 )
    {
      v33 = a15 / 2 - 512;
      if ( v21 <= v33 )
      {
        if ( v21 >= 512 - a15 / 2 )
        {
          if ( v21 >= 0 )
            v26 = 0;
          else
            v26 = -1;
        }
        else
        {
          v26 = (v33 + v21) >> 10;
        }
      }
      else
      {
        v26 = (v21 - v33) >> 10;
      }
    }
    if ( v26 <= 0 )
    {
      if ( v26 )
      {
        if ( v26 == -1 )
        {
          v24 = a16;
          v22 = a16 - 944;
          v29 = (__int16)a15 * (__int16)(944 - a16);
          v30 = (__int16)a15 * (__int16)a16;
        }
        else
        {
          v22 = a16 + (v26 << 10) + 80;
          v24 = v22 + 1024;
          v29 = (__int16)a15 * (__int16)-(__int16)(a16 + ((_WORD)v26 << 10) + 80);
          v30 = (__int16)a15 * (__int16)-(__int16)(a16 + ((_WORD)v26 << 10) + 80 + 1024);
        }
      }
      else
      {
        v22 = a16;
        v24 = a16 + 944;
        v29 = (__int16)a15 * (__int16)a16;
        v30 = (__int16)a15 * (__int16)(a16 + 944);
      }
    }
    else
    {
      v22 = a16 + (v26 << 10) - 80;
      v24 = v22 + 1024;
      v29 = (__int16)a15 * (__int16)v22;
      v30 = (__int16)a15 * (__int16)(v22 + 1024);
    }
    if ( (__int16)(v40 - v24) * (__int16)(v40 - v24) + v30 < (__int16)(v40 - v22) * (__int16)(v40 - v22) + v29 )
      v22 = v24;
    *(_BYTE *)(a4 + i) = ((v22 >> 9) + 1) >> 1;
    v36 = 16 * v22;
    if ( SR_VEC_LANES(128, a1[271], i32)[1] < 0 )
      v36 = -16 * v22;
    v32 = 16 * v41 + v36 + 2 * v23;
    if ( (((int)((v37 * (__int64)v32) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((int)((v37 * (__int64)v32) >> 16) >> 7) + 1) >> 1 >= -32768 )
        v42 = (((int)((v37 * (__int64)v32) >> 16) >> 7) + 1) >> 1;
      else
        LOWORD(v42) = 0x8000;
      v43 = v42;
    }
    else
    {
      v43 = 0x7FFF;
    }
    *(_WORD *)(a5 + 2LL * i) = v43;
    *++v46 = v32;
    SR_VEC_LANES(128, a1[270], i32)[1] = v32 - 16 * *(_DWORD *)(a3 + 4LL * i);
    v44 = SR_VEC_LANES(128, a1[270], i32)[1] - 4 * v34;
    SR_VEC_LANES(128, a1[270], i32)[0] = v44;
    SR_VEC_LANES(128, a1[80], i32)[SR_VEC_LANES(128, a1[271], i32)[0]] = v44 - 4 * v35;
    *(_DWORD *)(a6 + 4LL * SR_VEC_LANES(128, a1[270], i32)[3]) = 2 * (v36 + 2 * v23);
    ++SR_VEC_LANES(128, a1[271], i32)[0];
    ++SR_VEC_LANES(128, a1[270], i32)[3];
    SR_VEC_LANES(128, a1[271], i32)[1] += *(char *)(a4 + i);
  }
  return sub_1401FC920(a1 + 240, (__m128i *)((char *)a1 + 4 * a17 + 3840), 0x40u);
}


//----- (00000001401D82A0) ----------------------------------------------------
__int64            sub_1401D82A0(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        __int16 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        int a14)
{
  int v14; // eax
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-38h]
  int j; // [rsp+20h] [rbp-38h]
  int k; // [rsp+20h] [rbp-38h]
  int m; // [rsp+20h] [rbp-38h]
  int ii; // [rsp+20h] [rbp-38h]
  int jj; // [rsp+20h] [rbp-38h]
  int kk; // [rsp+20h] [rbp-38h]
  int v23; // [rsp+24h] [rbp-34h]
  int v24; // [rsp+28h] [rbp-30h]
  int n; // [rsp+2Ch] [rbp-2Ch]
  int v26; // [rsp+34h] [rbp-24h]
  __int64 v27; // [rsp+40h] [rbp-18h]

  v26 = *(_DWORD *)(a12 + 4LL * a8);
  if ( *(int *)(a11 + 4LL * a8) <= 1 )
    v14 = sub_1401BE820(1, 47);
  else
    v14 = sub_1401BE820(*(_DWORD *)(a11 + 4LL * a8), 47);
  v24 = v14;
  for ( i = 0; i < *(_DWORD *)(a1 + 4588); ++i )
    *(_DWORD *)(a5 + 4LL * i) = ((((v14 >> 4) + 1) >> 1) * (__int64)*(__int16 *)(a4 + 2LL * i)) >> 16;
  if ( a2[1087] )
  {
    if ( !a8 )
      v24 = 4 * ((a10 * (__int64)v14) >> 16);
    for ( j = a2[1083] - v26 - 2; j < a2[1083]; ++j )
      *(_DWORD *)(a7 + 4LL * j) = (*(__int16 *)(a6 + 2LL * j) * (__int64)v24) >> 16;
  }
  result = a8;
  if ( *(_DWORD *)(a11 + 4LL * a8) != a2[1086] )
  {
    v23 = sub_1401BE550(a2[1086], *(_DWORD *)(a11 + 4LL * a8), 16);
    for ( k = a2[1084] - *(_DWORD *)(a1 + 4592); k < a2[1084]; ++k )
      a2[k + 320] = ((int)a2[k + 320] * (__int64)v23) >> 16;
    if ( a13 == 2 && !a2[1087] )
    {
      for ( m = a2[1083] - v26 - 2; m < a2[1083] - a14; ++m )
        *(_DWORD *)(a7 + 4LL * m) = (*(int *)(a7 + 4LL * m) * (__int64)v23) >> 16;
    }
    for ( n = 0; n < a9; ++n )
    {
      v27 = 1300LL * n + a3;
      *(_DWORD *)(v27 + 1280) = (*(int *)(v27 + 1280) * (__int64)v23) >> 16;
      *(_DWORD *)(v27 + 1284) = (*(int *)(v27 + 1284) * (__int64)v23) >> 16;
      for ( ii = 0; ii < 16; ++ii )
        *(_DWORD *)(v27 + 4LL * ii) = (*(int *)(v27 + 4LL * ii) * (__int64)v23) >> 16;
      for ( jj = 0; jj < 24; ++jj )
        *(_DWORD *)(v27 + 4LL * jj + 1184) = (*(int *)(v27 + 4LL * jj + 1184) * (__int64)v23) >> 16;
      for ( kk = 0; kk < 40; ++kk )
      {
        *(_DWORD *)(v27 + 4LL * kk + 864) = (*(int *)(v27 + 4LL * kk + 864) * (__int64)v23) >> 16;
        *(_DWORD *)(v27 + 4LL * kk + 1024) = (*(int *)(v27 + 4LL * kk + 1024) * (__int64)v23) >> 16;
      }
    }
    result = *(unsigned int *)(a11 + 4LL * a8);
    a2[1086] = result;
  }
  return result;
}


//----- (00000001401D8730) ----------------------------------------------------
__int64            sub_1401D8730(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int16 *a9,
        __int16 *a10,
        __int16 *a11,
        int a12,
        int a13,
        __int16 a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        __int16 a23,
        int a24,
        int *a25,
        int a26)
{
  unsigned __int64 v26; // rcx
  void *v27; // rsp
  int j; // [rsp+20h] [rbp+0h] BYREF
  int v30; // [rsp+24h] [rbp+4h]
  void *v31; // [rsp+28h] [rbp+8h]
  int v32; // [rsp+30h] [rbp+10h]
  int v33; // [rsp+34h] [rbp+14h]
  int *v34; // [rsp+38h] [rbp+18h]
  int i; // [rsp+40h] [rbp+20h]
  int v36; // [rsp+44h] [rbp+24h]
  int k; // [rsp+48h] [rbp+28h]
  int v38; // [rsp+4Ch] [rbp+2Ch]
  int v39; // [rsp+50h] [rbp+30h]
  int v40; // [rsp+54h] [rbp+34h]
  int v41; // [rsp+58h] [rbp+38h]
  int v42; // [rsp+5Ch] [rbp+3Ch]
  int v43; // [rsp+60h] [rbp+40h]
  int v44; // [rsp+64h] [rbp+44h]
  int *v45; // [rsp+68h] [rbp+48h]
  int v46; // [rsp+70h] [rbp+50h]
  int v47; // [rsp+74h] [rbp+54h]
  int v48; // [rsp+78h] [rbp+58h]
  int v49; // [rsp+7Ch] [rbp+5Ch]
  int v50; // [rsp+80h] [rbp+60h]
  int v51; // [rsp+84h] [rbp+64h]
  int v52; // [rsp+88h] [rbp+68h]
  int v53; // [rsp+8Ch] [rbp+6Ch]
  int v54; // [rsp+90h] [rbp+70h]
  int v55; // [rsp+94h] [rbp+74h]
  int v56; // [rsp+98h] [rbp+78h]
  int v57; // [rsp+9Ch] [rbp+7Ch]
  int v58; // [rsp+A0h] [rbp+80h]
  int v59; // [rsp+A4h] [rbp+84h]
  int *v60; // [rsp+A8h] [rbp+88h]
  int v61; // [rsp+B0h] [rbp+90h]
  int v62; // [rsp+B4h] [rbp+94h]
  int v63; // [rsp+B8h] [rbp+98h]
  int v64; // [rsp+BCh] [rbp+9Ch]
  _DWORD *v65; // [rsp+C0h] [rbp+A0h]
  int v66; // [rsp+C8h] [rbp+A8h]
  int v67; // [rsp+CCh] [rbp+ACh]
  int *v68; // [rsp+D0h] [rbp+B0h]
  void *v69; // [rsp+D8h] [rbp+B8h]
  __int64 v70; // [rsp+E0h] [rbp+C0h]

  v26 = 56LL * a24 + 15;
  if ( v26 <= 56LL * a24 )
    v26 = 0xFFFFFFFFFFFFFF0LL;
  v27 = alloca(v26 & 0xFFFFFFFFFFFFFFF0uLL);
  v45 = &j;
  v65 = (_DWORD *)(a1 + 4LL * (*(_DWORD *)(a1 + 4336) - a12 + 1) + 1280);
  v60 = (int *)(a7 + 4LL * (*(_DWORD *)(a1 + 4332) - a12 + 2));
  v67 = a16 >> 6;
  for ( i = 0; i < a19; ++i )
  {
    if ( a3 == 2 )
    {
      v33 = 2;
      v33 = ((*a10 * (__int64)*v60) >> 16) + 2;
      v33 += (a10[1] * (__int64)*(v60 - 1)) >> 16;
      v33 += (a10[2] * (__int64)*(v60 - 2)) >> 16;
      v33 += (a10[3] * (__int64)*(v60 - 3)) >> 16;
      v33 += (a10[4] * (__int64)*(v60 - 4)) >> 16;
      v33 *= 2;
      ++v60;
    }
    else
    {
      v33 = 0;
    }
    if ( a12 <= 0 )
    {
      v48 = 0;
    }
    else
    {
      v48 = ((__int16)a13 * (__int64)(*(v65 - 2) + *v65)) >> 16;
      v48 += (((__int64)a13 >> 16) * (int)*(v65 - 1)) >> 16;
      v48 = v33 - 4 * v48;
      ++v65;
    }
    for ( j = 0; j < a24; ++j )
    {
      v31 = (void *)(1300LL * j + a2);
      v34 = &v45[14 * j];
      *((_DWORD *)v31 + 322) = 196314165 * *((_DWORD *)v31 + 322) + 907633515;
      v68 = (int *)((char *)v31 + 4 * i + 60);
      v53 = 16 * sub_1401D7000(v68, a9, a22);
      v40 = ((a23 * (__int64)*((int *)v31 + 296)) >> 16) + *((_DWORD *)v31 + 321);
      v36 = ((a23 * (__int64)(*((_DWORD *)v31 + 297) - v40)) >> 16) + *((_DWORD *)v31 + 296);
      *((_DWORD *)v31 + 296) = v40;
      v32 = a21 >> 1;
      v32 = ((*a11 * (__int64)v40) >> 16) + (a21 >> 1);
      for ( k = 2; k < a21; k += 2 )
      {
        v40 = ((a23 * (__int64)(*((_DWORD *)v31 + k + 296) - v36)) >> 16) + *((_DWORD *)v31 + k + 295);
        *((_DWORD *)v31 + k + 295) = v36;
        v32 += (a11[k - 1] * (__int64)v36) >> 16;
        v36 = ((a23 * (__int64)(*((_DWORD *)v31 + k + 297) - v40)) >> 16) + *((_DWORD *)v31 + k + 296);
        *((_DWORD *)v31 + k + 296) = v40;
        v32 += (a11[k] * (__int64)v40) >> 16;
      }
      *((_DWORD *)v31 + a21 + 295) = v36;
      v32 += (a11[a21 - 1] * (__int64)v36) >> 16;
      v32 *= 2;
      v32 += (a14 * (__int64)*((int *)v31 + 320)) >> 16;
      v32 *= 4;
      v47 = ((__int16)a15 * (__int64)*((int *)v31 + *a25 + 256)) >> 16;
      v47 += (((__int64)a15 >> 16) * *((int *)v31 + 320)) >> 16;
      v47 *= 4;
      v40 = v53 + v48;
      v36 = (((v53 + v48 - (v47 + v32)) >> 3) + 1) >> 1;
      v42 = *(_DWORD *)(a4 + 4LL * i) - v36;
      if ( *((int *)v31 + 322) < 0 )
        v42 = -v42;
      if ( v42 <= 30720 )
      {
        if ( v42 >= -31744 )
          v61 = v42;
        else
          v61 = -31744;
        v62 = v61;
      }
      else
      {
        v62 = 30720;
      }
      v42 = v62;
      v30 = v62 - a18;
      v41 = (v62 - a18) >> 10;
      if ( a17 > 2048 )
      {
        v55 = a17 / 2 - 512;
        if ( v30 <= v55 )
        {
          if ( v30 >= -v55 )
          {
            if ( v30 >= 0 )
              v41 = 0;
            else
              v41 = -1;
          }
          else
          {
            v41 = (v55 + v30) >> 10;
          }
        }
        else
        {
          v41 = (v30 - v55) >> 10;
        }
      }
      if ( v41 <= 0 )
      {
        if ( v41 )
        {
          if ( v41 == -1 )
          {
            v38 = a18;
            v30 = a18 - 944;
            v44 = (__int16)a17 * (__int16)(944 - a18);
            v43 = (__int16)a17 * (__int16)a18;
          }
          else
          {
            v30 = a18 + (v41 << 10) + 80;
            v38 = v30 + 1024;
            v44 = (__int16)a17 * (__int16)-(__int16)(a18 + ((_WORD)v41 << 10) + 80);
            v43 = (__int16)a17 * (__int16)-(__int16)(a18 + ((_WORD)v41 << 10) + 80 + 1024);
          }
        }
        else
        {
          v30 = a18;
          v38 = a18 + 944;
          v44 = (__int16)a17 * (__int16)a18;
          v43 = (__int16)a17 * (__int16)(a18 + 944);
        }
      }
      else
      {
        v30 = a18 + (v41 << 10) - 80;
        v38 = v30 + 1024;
        v44 = (__int16)a17 * (__int16)v30;
        v43 = (__int16)a17 * (__int16)(v30 + 1024);
      }
      v44 = ((__int16)(v42 - v30) * (__int16)(v42 - v30) + v44) >> 10;
      v52 = v42 - v38;
      v43 = ((__int16)(v42 - v38) * (__int16)(v42 - v38) + v43) >> 10;
      if ( v44 >= v43 )
      {
        v34[1] = v43 + *((_DWORD *)v31 + 324);
        v34[8] = v44 + *((_DWORD *)v31 + 324);
        *v34 = v38;
        v34[7] = v30;
      }
      else
      {
        v34[1] = v44 + *((_DWORD *)v31 + 324);
        v34[8] = v43 + *((_DWORD *)v31 + 324);
        *v34 = v30;
        v34[7] = v38;
      }
      v46 = 16 * *v34;
      if ( *((int *)v31 + 322) < 0 )
        v46 = -v46;
      v50 = v33 + v46;
      v51 = v53 + v33 + v46;
      v34[4] = v51 - 16 * *(_DWORD *)(a4 + 4LL * i);
      v54 = v34[4] - v32;
      v34[5] = v54 - v47;
      v34[3] = v54;
      v34[6] = v50;
      v34[2] = v51;
      v46 = 16 * v34[7];
      if ( *((int *)v31 + 322) < 0 )
        v46 = -v46;
      v50 = v33 + v46;
      v51 = v53 + v33 + v46;
      v34[11] = v51 - 16 * *(_DWORD *)(a4 + 4LL * i);
      v54 = v34[11] - v32;
      v34[12] = v54 - v47;
      v34[10] = v54;
      v34[13] = v50;
      v34[9] = v51;
    }
    *a25 = (*a25 - 1) % 40;
    if ( *a25 < 0 )
      *a25 += 40;
    v39 = (a26 + *a25) % 40;
    v49 = v45[1];
    v57 = 0;
    for ( j = 1; j < a24; ++j )
    {
      if ( v45[14 * j + 1] < v49 )
      {
        v49 = v45[14 * j + 1];
        v57 = j;
      }
    }
    v66 = *(_DWORD *)(1300LL * v57 + a2 + 4LL * v39 + 384);
    for ( j = 0; j < a24; ++j )
    {
      if ( *(_DWORD *)(1300LL * j + a2 + 4LL * v39 + 384) != v66 )
      {
        v45[14 * j + 1] += 0x7FFFFFF;
        v45[14 * j + 8] += 0x7FFFFFF;
      }
    }
    v58 = v45[1];
    v49 = v45[8];
    v56 = 0;
    v59 = 0;
    for ( j = 1; j < a24; ++j )
    {
      if ( v45[14 * j + 1] > v58 )
      {
        v58 = v45[14 * j + 1];
        v56 = j;
      }
      if ( v45[14 * j + 8] < v49 )
      {
        v49 = v45[14 * j + 8];
        v59 = j;
      }
    }
    if ( v49 < v58 )
    {
      v69 = (void *)(1300LL * v56 + a2 + 4LL * i);
      sub_1401FC920((__m128i *)v69, (     __m128i *)(1300LL * v59 + a2 + 4LL * i), 1300 - 4LL * i);
      sub_1401FC920((__m128i *)&v45[14 * v56], (     __m128i *)&v45[14 * v59 + 7], 0x1Cu);
    }
    v31 = (void *)(1300LL * v57 + a2);
    if ( a20 > 0 || i >= a26 )
    {
      *(_BYTE *)(a5 + i - a26) = ((*((int *)v31 + v39 + 136) >> 9) + 1) >> 1;
      if ( (((int)((*(int *)(a8 + 4LL * v39) * (__int64)*((int *)v31 + v39 + 176)) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((*(int *)(a8 + 4LL * v39) * (__int64)*((int *)v31 + v39 + 176)) >> 16) >> 7) + 1) >> 1 >= -32768 )
          v63 = (((int)((*(int *)(a8 + 4LL * v39) * (__int64)*((int *)v31 + v39 + 176)) >> 16) >> 7) + 1) >> 1;
        else
          v63 = -32768;
        v64 = v63;
      }
      else
      {
        v64 = 0x7FFF;
      }
      *(_WORD *)(a6 + 2LL * (i - a26)) = v64;
      *(_DWORD *)(a1 + 4LL * (*(_DWORD *)(a1 + 4336) - a26) + 1280) = *((_DWORD *)v31 + v39 + 256);
      *(_DWORD *)(a7 + 4LL * (*(_DWORD *)(a1 + 4332) - a26)) = *((_DWORD *)v31 + v39 + 216);
    }
    ++*(_DWORD *)(a1 + 4336);
    ++*(_DWORD *)(a1 + 4332);
    for ( j = 0; j < a24; ++j )
    {
      v31 = (void *)(1300LL * j + a2);
      v34 = &v45[14 * j];
      *((_DWORD *)v31 + 320) = v34[3];
      *((_DWORD *)v31 + 321) = v34[4];
      *((_DWORD *)v31 + i + 16) = v34[2];
      *((_DWORD *)v31 + *a25 + 176) = v34[2];
      *((_DWORD *)v31 + *a25 + 136) = *v34;
      *((_DWORD *)v31 + *a25 + 216) = 2 * v34[6];
      *((_DWORD *)v31 + *a25 + 256) = v34[5];
      *((_DWORD *)v31 + 322) += ((*v34 >> 9) + 1) >> 1;
      *((_DWORD *)v31 + *a25 + 96) = *((_DWORD *)v31 + 322);
      *((_DWORD *)v31 + 324) = v34[1];
    }
    *(_DWORD *)(a8 + 4LL * *a25) = v67;
  }
  for ( j = 0; j < a24; ++j )
  {
    v31 = (void *)(1300LL * j + a2);
    sub_1401FC920((__m128i *)v31, (     __m128i *)((char *)v31 + 4 * a19), 0x40u);
  }
  return sub_1401F8B20((unsigned __int64)&j ^ v70);
}


//----- (00000001401D9A80) ----------------------------------------------------
__int64            sub_1401D9A80(__int64 a1,      __m128i *a2)
{
  int j; // [rsp+20h] [rbp-48h]
  int m; // [rsp+20h] [rbp-48h]
  int k; // [rsp+20h] [rbp-48h]
  int v6; // [rsp+24h] [rbp-44h]
  int i; // [rsp+28h] [rbp-40h]
  __int64 v8; // [rsp+30h] [rbp-38h]
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]

  v8 = a1 + 4196;
  *(_DWORD *)(a1 + 4188) = *(char *)(a1 + 2789);
  v6 = 0;
  if ( *(_BYTE *)(a1 + 2789) == 2 )
  {
    for ( i = 0; *(_DWORD *)(a1 + 2332) * i < SR_VEC_PTR_LANES(128, a2, i32)[*(_DWORD *)(a1 + 2324) - 1] && i != *(_DWORD *)(a1 + 2324); ++i )
    {
      v9 = 0;
      for ( j = 0; j < 5; ++j )
        v9 += SR_VEC_LANES(128, a2[6], i16)[5 * (*(_DWORD *)(a1 + 2324) - 1 - i) + j];
      if ( v9 > v6 )
      {
        v6 = v9;
        sub_1401FC920(
          (__m128i *)(v8 + 4),
          (     __m128i *)((char *)a2 + 10 * (__int16)(*(_DWORD *)(a1 + 2324) - 1 - i) + 96),
          0xAu);
        *(_DWORD *)v8 = SR_VEC_PTR_LANES(128, a2, i32)[*(_DWORD *)(a1 + 2324) - 1 - i] << 8;
      }
    }
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(v8 + 4)), 0, 0xAu);
    *(_WORD *)(v8 + 8) = v6;
    if ( v6 >= 11469 )
    {
      if ( v6 > 15565 )
      {
        for ( k = 0; k < 5; ++k )
          *(_WORD *)(v8 + 2LL * k + 4) = ((__int16)(255016960 / v6) * *(__int16 *)(v8 + 2LL * k + 4)) >> 14;
      }
    }
    else
    {
      if ( v6 <= 1 )
        v10 = 1;
      else
        v10 = v6;
      for ( m = 0; m < 5; ++m )
        *(_WORD *)(v8 + 2LL * m + 4) = ((__int16)(11744256 / v10) * *(__int16 *)(v8 + 2LL * m + 4)) >> 10;
    }
  }
  else
  {
    *(_DWORD *)v8 = 4608 * *(__int16 *)(a1 + 2316);
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 4200)), 0, 0xAu);
  }
  sub_1401FC920((__m128i *)(v8 + 14), a2 + 4, 2LL * *(int *)(a1 + 2340));
  *(_WORD *)(v8 + 68) = SR_VEC_LANES(128, a2[8], i16)[4];
  sub_1401FC920(
    (__m128i *)(v8 + 72),
    (     __m128i *)((char *)&SR_VEC_PTR_LANES(128, a2, u64)[1] + 4 * *(_DWORD *)(a1 + 2324)),
    8u);
  *(_DWORD *)(v8 + 88) = *(_DWORD *)(a1 + 2332);
  *(_DWORD *)(v8 + 84) = *(_DWORD *)(a1 + 2324);
  return v8;
}

// 1401D9CBD: conditional instruction was optimized away because %var_44.4>=3CCE

//----- (00000001401D9E20) ----------------------------------------------------
__int64            sub_1401D9E20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rcx
  void *v5; // rsp
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int i; // [rsp+40h] [rbp+0h] BYREF
  int v13; // [rsp+44h] [rbp+4h]
  signed __int16 v14; // [rsp+48h] [rbp+8h]
  __m128i *v15; // [rsp+50h] [rbp+10h]
  int *v16; // [rsp+58h] [rbp+18h]
  int v17; // [rsp+60h] [rbp+20h]
  int k; // [rsp+64h] [rbp+24h]
  int v19; // [rsp+68h] [rbp+28h]
  signed int v20; // [rsp+6Ch] [rbp+2Ch]
  int v21; // [rsp+70h] [rbp+30h] BYREF
  int v22; // [rsp+74h] [rbp+34h]
  int v23; // [rsp+78h] [rbp+38h]
  int v24; // [rsp+7Ch] [rbp+3Ch]
  int v25; // [rsp+80h] [rbp+40h]
  int v26; // [rsp+84h] [rbp+44h]
  int v27; // [rsp+88h] [rbp+48h]
  __int16 *v28; // [rsp+90h] [rbp+50h]
  int j; // [rsp+98h] [rbp+58h]
  int *v30; // [rsp+A0h] [rbp+60h]
  int v31; // [rsp+A8h] [rbp+68h]
  int v32; // [rsp+ACh] [rbp+6Ch]
  __int32 v33; // [rsp+B0h] [rbp+70h]
  int v34; // [rsp+B4h] [rbp+74h]
  int v35; // [rsp+B8h] [rbp+78h]
  int v36; // [rsp+BCh] [rbp+7Ch]
  int v37; // [rsp+C0h] [rbp+80h]
  __int32 v38; // [rsp+C4h] [rbp+84h]
  __int32 v39; // [rsp+C8h] [rbp+88h]
  int v40; // [rsp+CCh] [rbp+8Ch]
  int v41; // [rsp+D0h] [rbp+90h]
  int v42; // [rsp+D4h] [rbp+94h]
  int v43; // [rsp+D8h] [rbp+98h]
  int v44; // [rsp+DCh] [rbp+9Ch]
  int v45; // [rsp+E0h] [rbp+A0h]
  int v46; // [rsp+E4h] [rbp+A4h]
  int v47; // [rsp+E8h] [rbp+A8h]
  int v48; // [rsp+ECh] [rbp+ACh]
  int v49; // [rsp+F0h] [rbp+B0h]
  int v50; // [rsp+F4h] [rbp+B4h]
  int v51; // [rsp+F8h] [rbp+B8h]
  int v52; // [rsp+FCh] [rbp+BCh]
  int *v53; // [rsp+100h] [rbp+C0h]
  int v54; // [rsp+108h] [rbp+C8h]
  int v55; // [rsp+10Ch] [rbp+CCh] BYREF
  int v56; // [rsp+110h] [rbp+D0h] BYREF
  int v57; // [rsp+114h] [rbp+D4h] BYREF
  int v58; // [rsp+118h] [rbp+D8h] BYREF
  unsigned int v59; // [rsp+11Ch] [rbp+DCh]
  int *v60; // [rsp+120h] [rbp+E0h]
  __int64 v61; // [rsp+128h] [rbp+E8h]
  _WORD *v62; // [rsp+130h] [rbp+F0h]
  __int16 v63[16]; // [rsp+138h] [rbp+F8h] BYREF
  __int64 v64; // [rsp+158h] [rbp+118h]

  v16 = (int *)(a1 + 4196);
  v3 = 4LL * (*(_DWORD *)(a1 + 2328) + *(_DWORD *)(a1 + 2336));
  v4 = v3 + 15;
  if ( v3 + 15 <= v3 )
    v4 = 0xFFFFFFFFFFFFFF0LL;
  v5 = alloca(v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v53 = &i;
  v6 = 2LL * *(int *)(a1 + 2336) + 15;
  if ( v6 <= 2LL * *(int *)(a1 + 2336) )
    v6 = 0xFFFFFFFFFFFFFF0LL;
  v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
  v60 = &i;
  v21 = v16[18] >> 6;
  v22 = v16[19] >> 6;
  if ( *(_DWORD *)(a1 + 2376) )
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)v16 + 7), 0, 0x20u);
  sub_1401DAE50(&v55, &v56, &v58, &v57, a1 + 4, (__int64)&v21, *(_DWORD *)(a1 + 2332), *(_DWORD *)(a1 + 2324));
  if ( v55 >> v57 >= v58 >> v56 )
    v8 = sub_1401BE3A0(0, v16[22] * v16[21] - 128);
  else
    v8 = sub_1401BE3A0(0, v16[22] * (v16[21] - 1) - 128);
  v61 = a1 + 4LL * v8 + 4;
  v28 = (__int16 *)(v16 + 1);
  v14 = *((_WORD *)v16 + 28);
  v54 = word_14027A0B4[(int)sub_1401BE320(1u, *(_DWORD *)(a1 + 4184))];
  if ( *(_DWORD *)(a1 + 4188) == 2 )
    v25 = word_14027A0B8[(int)sub_1401BE320(1u, *(_DWORD *)(a1 + 4184))];
  else
    v25 = word_14027A114[(int)sub_1401BE320(1u, *(_DWORD *)(a1 + 4184))];
  sub_1401BBDE0((__int64)v16 + 14, *(_DWORD *)(a1 + 2340), 64881);
  sub_1401FC920((__m128i *)v63, (     __m128i *)((char *)v16 + 14), 2LL * *(int *)(a1 + 2340));
  if ( !*(_DWORD *)(a1 + 4184) )
  {
    v14 = 0x4000;
    if ( *(_DWORD *)(a1 + 4188) == 2 )
    {
      for ( i = 0; i < 5; ++i )
        v14 -= v28[i];
      v14 = sub_1401BE3E0(0xCCDu, v14);
      v14 = (*((__int16 *)v16 + 34) * v14) >> 14;
    }
    else
    {
      v59 = sub_1401BBF70((__int64)v16 + 14, *(_DWORD *)(a1 + 2340));
      v20 = sub_1401BE360(0x8000000u, v59);
      v20 = 8 * sub_1401BE420(0x400000u, v20);
      v25 = (int)(((__int16)v25 * (__int64)v20) >> 16) >> 14;
    }
  }
  v26 = v16[13];
  v27 = ((*v16 >> 7) + 1) >> 1;
  v24 = *(_DWORD *)(a1 + 2336);
  v19 = *(_DWORD *)(a1 + 2336) - v27 - *(_DWORD *)(a1 + 2340) - 2;
  v9 = *(_DWORD *)(a1 + 2336) - v19;
  v62 = (_WORD *)v60 + v19;
  sub_1401BBB40(v62, a1 + 2LL * v19 + 1348, v63, v9, *(_DWORD *)(a1 + 2340));
  v23 = sub_1401BE820(v16[19], 46);
  if ( v23 >= 0x3FFFFFFF )
    v48 = 0x3FFFFFFF;
  else
    v48 = v23;
  v23 = v48;
  for ( i = *(_DWORD *)(a1 + 2340) + v19; i < *(_DWORD *)(a1 + 2336); ++i )
    v53[i] = (*((__int16 *)v60 + i) * (__int64)v23) >> 16;
  for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
  {
    v30 = &v53[v24 - v27 + 2];
    for ( i = 0; i < *(_DWORD *)(a1 + 2332); ++i )
    {
      v17 = 2;
      v17 = ((*v28 * (__int64)*v30) >> 16) + 2;
      v17 += (v28[1] * (__int64)*(v30 - 1)) >> 16;
      v17 += (v28[2] * (__int64)*(v30 - 2)) >> 16;
      v17 += (v28[3] * (__int64)*(v30 - 3)) >> 16;
      v17 += (v28[4] * (__int64)*(v30 - 4)) >> 16;
      ++v30;
      v26 = 196314165 * v26 + 907633515;
      v19 = (v26 >> 25) & 0x7F;
      v53[v24++] = 4 * (((v14 * (__int64)*(int *)(v61 + 4LL * v19)) >> 16) + v17);
    }
    for ( k = 0; k < 5; ++k )
      v28[k] = (v28[k] * (__int16)v54) >> 15;
    if ( *(_BYTE *)(a1 + 2789) )
      v14 = ((__int16)v25 * v14) >> 15;
    *v16 += (655LL * *v16) >> 16;
    v10 = sub_1401BE360(*v16, 4608 * *(__int16 *)(a1 + 2316));
    *v16 = v10;
    v27 = ((*v16 >> 7) + 1) >> 1;
  }
  v15 = (__m128i *)&v53[*(_DWORD *)(a1 + 2336) - 16];
  sub_1401FC920(v15, (     __m128i *)(a1 + 1284), 0x40u);
  for ( i = 0; i < *(_DWORD *)(a1 + 2328); ++i )
  {
    v13 = *(int *)(a1 + 2340) >> 1;
    v13 += (v63[0] * (__int64)SR_VEC_LANES(128, v15[3], i32)[i + 3]) >> 16;
    v13 += (v63[1] * (__int64)SR_VEC_LANES(128, v15[3], i32)[i + 2]) >> 16;
    v13 += (v63[2] * (__int64)SR_VEC_LANES(128, v15[3], i32)[i + 1]) >> 16;
    v13 += (v63[3] * (__int64)SR_VEC_LANES(128, v15[3], i32)[i]) >> 16;
    v13 += (v63[4] * (__int64)SR_VEC_LANES(128, v15[2], i32)[i + 3]) >> 16;
    v13 += (v63[5] * (__int64)SR_VEC_LANES(128, v15[2], i32)[i + 2]) >> 16;
    v13 += (v63[6] * (__int64)SR_VEC_LANES(128, v15[2], i32)[i + 1]) >> 16;
    v13 += (v63[7] * (__int64)SR_VEC_LANES(128, v15[2], i32)[i]) >> 16;
    v13 += (v63[8] * (__int64)SR_VEC_LANES(128, v15[1], i32)[i + 3]) >> 16;
    v13 += (v63[9] * (__int64)SR_VEC_LANES(128, v15[1], i32)[i + 2]) >> 16;
    for ( k = 10; k < *(_DWORD *)(a1 + 2340); ++k )
      v13 += (v63[k] * (__int64)SR_VEC_PTR_LANES(128, v15, i32)[i + 16 - k - 1]) >> 16;
    if ( v13 <= 0x7FFFFFF )
    {
      if ( v13 >= -134217728 )
        v49 = v13;
      else
        v49 = -134217728;
      v50 = v49;
    }
    else
    {
      v50 = 0x7FFFFFF;
    }
    if ( 16 * v50 + SR_VEC_LANES(128, v15[4], i32)[i] < 0 )
    {
      if ( v13 <= 0x7FFFFFF )
      {
        if ( v13 >= -134217728 )
          v34 = v13;
        else
          v34 = -134217728;
        v35 = v34;
      }
      else
      {
        v35 = 0x7FFFFFF;
      }
      if ( ((16 * v35) | SR_VEC_LANES(128, v15[4], i32)[i]) < 0 )
      {
        if ( v13 <= 0x7FFFFFF )
        {
          if ( v13 >= -134217728 )
            v36 = v13;
          else
            v36 = -134217728;
          v37 = v36;
        }
        else
        {
          v37 = 0x7FFFFFF;
        }
        v38 = SR_VEC_LANES(128, v15[4], i32)[i] + 16 * v37;
      }
      else
      {
        v38 = 0x7FFFFFFF;
      }
      v39 = v38;
    }
    else
    {
      if ( v13 <= 0x7FFFFFF )
      {
        if ( v13 >= -134217728 )
          v51 = v13;
        else
          v51 = -134217728;
        v52 = v51;
      }
      else
      {
        v52 = 0x7FFFFFF;
      }
      if ( ((16 * v52) & SR_VEC_LANES(128, v15[4], i32)[i]) >= 0 )
      {
        if ( v13 <= 0x7FFFFFF )
        {
          if ( v13 >= -134217728 )
            v31 = v13;
          else
            v31 = -134217728;
          v32 = v31;
        }
        else
        {
          v32 = 0x7FFFFFF;
        }
        v33 = SR_VEC_LANES(128, v15[4], i32)[i] + 16 * v32;
      }
      else
      {
        v33 = 0x80000000;
      }
      v39 = v33;
    }
    SR_VEC_LANES(128, v15[4], i32)[i] = v39;
    if ( (((int)((v22 * (__int64)SR_VEC_LANES(128, v15[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((int)((v22 * (__int64)SR_VEC_LANES(128, v15[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
        v40 = (((int)((v22 * (__int64)SR_VEC_LANES(128, v15[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
      else
        v40 = -32768;
      v41 = v40;
    }
    else
    {
      v41 = 0x7FFF;
    }
    if ( v41 <= 0x7FFF )
    {
      if ( (((int)((v22 * (__int64)SR_VEC_LANES(128, v15[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
      {
        if ( (((int)((v22 * (__int64)SR_VEC_LANES(128, v15[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
          v42 = (((int)((v22 * (__int64)SR_VEC_LANES(128, v15[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
        else
          v42 = -32768;
        v43 = v42;
      }
      else
      {
        v43 = 0x7FFF;
      }
      if ( v43 >= -32768 )
      {
        if ( (((int)((v22 * (__int64)SR_VEC_LANES(128, v15[4], i32)[i]) >> 16) >> 7) + 1) >> 1 <= 0x7FFF )
        {
          if ( (((int)((v22 * (__int64)SR_VEC_LANES(128, v15[4], i32)[i]) >> 16) >> 7) + 1) >> 1 >= -32768 )
            v44 = (((int)((v22 * (__int64)SR_VEC_LANES(128, v15[4], i32)[i]) >> 16) >> 7) + 1) >> 1;
          else
            v44 = -32768;
          v45 = v44;
        }
        else
        {
          v45 = 0x7FFF;
        }
        v46 = v45;
      }
      else
      {
        v46 = -32768;
      }
      v47 = v46;
    }
    else
    {
      v47 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * i) = v47;
  }
  sub_1401FC920((__m128i *)(a1 + 1284), (__m128i *)((char *)v15 + 4 * *(int *)(a1 + 2328)), 0x40u);
  v16[13] = v26;
  *((_WORD *)v16 + 28) = v14;
  for ( i = 0; i < 4; ++i )
    *(_DWORD *)(a2 + 4LL * i) = v27;
  return sub_1401F8B20((unsigned __int64)&i ^ v64);
}

// 14027A0B4: using guessed type __int16 word_14027A0B4[2];
// 14027A0B8: using guessed type __int16 word_14027A0B8[4];
// 14027A114: using guessed type __int16 word_14027A114[2];

//----- (00000001401DAE50) ----------------------------------------------------
__int64            sub_1401DAE50(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        signed int a7,
        int a8)
{
  unsigned __int64 v8; // rcx
  void *v9; // rsp
  int i; // [rsp+20h] [rbp+0h] BYREF
  signed int j; // [rsp+24h] [rbp+4h]
  int v13; // [rsp+28h] [rbp+8h]
  int v14; // [rsp+2Ch] [rbp+Ch]
  int *v15; // [rsp+30h] [rbp+10h]
  int *v16; // [rsp+38h] [rbp+18h]
  __int64 v17; // [rsp+40h] [rbp+20h]

  v8 = 4LL * a7 + 15;
  if ( v8 <= 4LL * a7 )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  v16 = &i;
  v15 = &i;
  for ( i = 0; i < 2; ++i )
  {
    for ( j = 0; j < a7; ++j )
    {
      if ( (int)((*(int *)(a6 + 4LL * i) * (__int64)*(int *)(a5 + 4LL * (a7 * (i + a8 - 2) + j))) >> 16) >> 8 <= 0x7FFF )
      {
        if ( (int)((*(int *)(a6 + 4LL * i) * (__int64)*(int *)(a5 + 4LL * (a7 * (i + a8 - 2) + j))) >> 16) >> 8 >= -32768 )
          v13 = (int)((*(int *)(a6 + 4LL * i) * (__int64)*(int *)(a5 + 4LL * (a7 * (i + a8 - 2) + j))) >> 16) >> 8;
        else
          v13 = -32768;
        v14 = v13;
      }
      else
      {
        v14 = 0x7FFF;
      }
      *((_WORD *)v15 + j) = v14;
    }
    v15 = (int *)((char *)v15 + 2 * a7);
  }
  sub_1401BC4C0(a1, a2, (__int64)v16, a7);
  sub_1401BC4C0(a3, a4, (__int64)v16 + 2 * a7, a7);
  return sub_1401F8B20((unsigned __int64)&i ^ v17);
}


//----- (00000001401DB040) ----------------------------------------------------
__int64            sub_1401DB040(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; ; ++i )
  {
    result = a3;
    if ( i >= (int)a3 )
      break;
    *(_DWORD *)(a1 + 4LL * i) = *(_DWORD *)(a2 + 4LL * (2 * i + 1)) + *(_DWORD *)(a2 + 8LL * i);
  }
  return result;
}


//----- (00000001401DB0B0) ----------------------------------------------------
_DWORD *           sub_1401DB0B0(_DWORD *a1, int a2, int a3, __int64 a4)
{
  _DWORD *result; // rax

  if ( a3 > 0 )
    return sub_14019A4F0(a1, a2, byte_140282488[a3] + a4, 8);
  return result;
}

// 140282488: using guessed type unsigned __int8 byte_140282488[24];

//----- (00000001401DB110) ----------------------------------------------------
__int64            sub_1401DB110(__int16 *a1, _WORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  __int64 result; // rax

  if ( a4 <= 0 )
  {
    *a1 = 0;
    *a2 = 0;
    return 0;
  }
  else
  {
    *a1 = sub_14019AFE0(a3, byte_140282488[a4] + a5, 8);
    result = (unsigned int)(a4 - *a1);
    *a2 = a4 - *a1;
  }
  return result;
}

// 140282488: using guessed type unsigned __int8 byte_140282488[24];

//----- (00000001401DB1D0) ----------------------------------------------------
__int64            sub_1401DB1D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v3; // ax
  int i; // [rsp+20h] [rbp-38h]
  int v5; // [rsp+24h] [rbp-34h]
  int v6; // [rsp+30h] [rbp-28h]
  unsigned int v7; // [rsp+34h] [rbp-24h]
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]

  result = a2;
  if ( *(int *)(a2 + 108) >= 1000 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0x7FFF / ((*(int *)(a2 + 108) >> 4) + 1);
    result = (unsigned int)(*(_DWORD *)(a2 + 108) + 1);
    *(_DWORD *)(a2 + 108) = result;
  }
  for ( i = 0; i < 4; ++i )
  {
    v5 = *(_DWORD *)(a2 + 4LL * i + 60);
    if ( *(_DWORD *)(a2 + 4LL * i + 92) + *(_DWORD *)(a1 + 4LL * i) >= 0 )
      v6 = *(_DWORD *)(a2 + 4LL * i + 92) + *(_DWORD *)(a1 + 4LL * i);
    else
      v6 = 0x7FFFFFFF;
    v8 = 0x7FFFFFFF / v6;
    if ( v6 <= 8 * v5 )
    {
      if ( v6 >= v5 )
        v3 = sub_1401BE3A0((__int16)((__int64)(int)((v5 * (__int64)v8) >> 16) >> 5), v7);
      else
        v3 = sub_1401BE3A0(0x400u, v7);
    }
    else
    {
      v3 = sub_1401BE3A0(0x80u, v7);
    }
    *(_DWORD *)(a2 + 4LL * i + 76) += (v3 * (__int64)(v8 - *(_DWORD *)(a2 + 4LL * i + 76))) >> 16;
    if ( 0x7FFFFFFF / *(_DWORD *)(a2 + 4LL * i + 76) >= 0xFFFFFF )
      v9 = 0xFFFFFF;
    else
      v9 = 0x7FFFFFFF / *(_DWORD *)(a2 + 4LL * i + 76);
    *(_DWORD *)(a2 + 4LL * i + 60) = v9;
    result = (unsigned int)(i + 1);
  }
  return result;
}


//----- (00000001401DB3D0) ----------------------------------------------------
__int64            sub_1401DB3D0(int *a1, int a2)
{
  unsigned __int64 v2; // rcx
  void *v3; // rsp
  void *v4; // rsp
  int v5; // eax
  unsigned __int64 v6; // rcx
  void *v7; // rsp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __m128i v12[17]; // [rsp+0h] [rbp-130h] BYREF
  int v13; // [rsp+130h] [rbp+0h] BYREF
  int v14; // [rsp+134h] [rbp+4h]
  int v15; // [rsp+138h] [rbp+8h]
  int v16; // [rsp+13Ch] [rbp+Ch]
  int v17; // [rsp+140h] [rbp+10h]
  int v18; // [rsp+144h] [rbp+14h]
  __m128i *v19; // [rsp+148h] [rbp+18h]
  _DWORD *v20; // [rsp+150h] [rbp+20h]
       __m128i *v21; // [rsp+158h] [rbp+28h]
  __int64 v22; // [rsp+160h] [rbp+30h]
  __int16 v24; // [rsp+188h] [rbp+58h]

  v24 = a2;
  v13 = 0;
  if ( a1[1144] != a2 || a1[1140] != a1[1139] )
  {
    if ( a1[1144] )
    {
      v15 = 10 * a1[1145] + 5;
      v14 = a1[1144] * v15;
      v16 = a2 * v15;
      if ( v14 <= a2 * v15 )
        v17 = v16;
      else
        v17 = v14;
      v2 = 2LL * v17 + 15;
      if ( v2 <= 2LL * v17 )
        v2 = 0xFFFFFFFFFFFFFF0LL;
      v3 = alloca(v2 & 0xFFFFFFFFFFFFFFF0uLL);
      v19 = (__m128i *)&v13;
      sub_1401D1210((__int64)&v13, (__int64)(a1 + 1801), v14);
      v4 = alloca(304);
      v20 = (_DWORD *)v12;
      v5 = sub_1401BA4E0((__int64)v12, 1000 * *((__int16 *)a1 + 2288), a1[1139], 0);
      v13 += v5;
      v18 = a1[1139] / 1000 * v15;
      v6 = 2LL * v18 + 15;
      if ( v6 <= 2LL * v18 )
        v6 = 0xFFFFFFFFFFFFFF0LL;
      v7 = alloca(v6 & 0xFFFFFFFFFFFFFFF0uLL);
      v21 = v12;
      v8 = sub_1401BAA30(v20, v12, v19, v14);
      v13 += v8;
      v9 = sub_1401BA4E0((__int64)(a1 + 1448), a1[1139], 1000 * v24, 1);
      v13 += v9;
      v10 = sub_1401BAA30(a1 + 1448, v19, v21, v18);
      v13 += v10;
      sub_1401D12E0((__int64)(a1 + 1801), (__int64)v19, v16);
    }
    else
    {
      v13 += sub_1401BA4E0((__int64)(a1 + 1448), a1[1139], 1000 * a2, 1);
    }
  }
  a1[1140] = a1[1139];
  return sub_1401F8B20((unsigned __int64)&v13 ^ v22);
}


//----- (00000001401DB660) ----------------------------------------------------
__int64            sub_1401DB660(__int64 a1, int a2, int a3)
{
  int v3; // eax
  int v5; // [rsp+20h] [rbp-18h]
  unsigned int v6; // [rsp+24h] [rbp-14h]

  v6 = 0;
  if ( a3 != *(_DWORD *)(a1 + 4612) )
  {
    if ( a3 != 10 && a3 != 20 && a3 != 40 && a3 != 60 )
      v6 = -103;
    if ( a3 > 10 )
    {
      *(_DWORD *)(a1 + 5760) = a3 / 20;
      *(_DWORD *)(a1 + 4580) = 4;
      *(_DWORD *)(a1 + 4584) = 20 * (__int16)a2;
      *(_DWORD *)(a1 + 4548) = 24 * (__int16)a2;
      if ( *(_DWORD *)(a1 + 4576) == 8 )
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822D0);
      else
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822A8);
    }
    else
    {
      *(_DWORD *)(a1 + 5760) = 1;
      if ( a3 == 10 )
        v5 = 2;
      else
        v5 = 1;
      *(_DWORD *)(a1 + 4580) = v5;
      *(_DWORD *)(a1 + 4584) = (__int16)a2 * (__int16)a3;
      *(_DWORD *)(a1 + 4548) = 14 * (__int16)a2;
      if ( *(_DWORD *)(a1 + 4576) == 8 )
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_140281F84);
      else
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822E0);
    }
    *(_DWORD *)(a1 + 4612) = a3;
    *(_DWORD *)(a1 + 4608) = 0;
  }
  if ( *(_DWORD *)(a1 + 4576) != a2 )
  {
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 7192)), 0, 0xCu);
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 148)), 0, 0x1100u);
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 4500)), 0, 0x20u);
    sub_1401FCD30((void *)(uintptr_t)((_WORD *)(a1 + 16)), 0, 8u);
    *(_DWORD *)(a1 + 5756) = 0;
    *(_DWORD *)(a1 + 5764) = 0;
    *(_DWORD *)(a1 + 4608) = 0;
    *(_DWORD *)(a1 + 4544) = 100;
    *(_DWORD *)(a1 + 4664) = 1;
    *(_BYTE *)(a1 + 7192) = 10;
    *(_DWORD *)(a1 + 4476) = 100;
    *(_DWORD *)(a1 + 4492) = 0x10000;
    *(_BYTE *)(a1 + 4541) = 0;
    *(_DWORD *)(a1 + 4576) = a2;
    if ( *(_DWORD *)(a1 + 4576) == 8 )
    {
      if ( *(_DWORD *)(a1 + 4580) == 4 )
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822D0);
      else
        *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_140281F84);
    }
    else if ( *(_DWORD *)(a1 + 4580) == 4 )
    {
      *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822A8);
    }
    else
    {
      *(_QWORD *)(a1 + 4696) = (uint64)(uintptr_t)(&unk_1402822E0);
    }
    if ( *(_DWORD *)(a1 + 4576) == 8 || *(_DWORD *)(a1 + 4576) == 12 )
    {
      *(_DWORD *)(a1 + 4640) = 10;
      *(_QWORD *)(a1 + 4704) = (uint64)(uintptr_t)(&unk_140282870);
    }
    else
    {
      *(_DWORD *)(a1 + 4640) = 16;
      *(_QWORD *)(a1 + 4704) = (uint64)(uintptr_t)(&unk_140282800);
    }
    *(_DWORD *)(a1 + 4588) = 5 * a2;
    *(_DWORD *)(a1 + 4584) = *(__int16 *)(a1 + 4580) * *(__int16 *)(a1 + 4588);
    *(_DWORD *)(a1 + 4592) = 20 * (__int16)a2;
    *(_DWORD *)(a1 + 4596) = 2 * (__int16)a2;
    *(_DWORD *)(a1 + 4552) = 18 * (__int16)a2;
    if ( *(_DWORD *)(a1 + 4580) == 4 )
      v3 = 24 * (__int16)a2;
    else
      v3 = 14 * (__int16)a2;
    *(_DWORD *)(a1 + 4548) = v3;
    if ( *(_DWORD *)(a1 + 4576) == 16 )
    {
      *(_QWORD *)(a1 + 4688) = (uint64)(uintptr_t)(&unk_140282538);
    }
    else if ( *(_DWORD *)(a1 + 4576) == 12 )
    {
      *(_QWORD *)(a1 + 4688) = (uint64)(uintptr_t)(&unk_14028225C);
    }
    else
    {
      *(_QWORD *)(a1 + 4688) = (uint64)(uintptr_t)(&unk_1402821FC);
    }
  }
  return v6;
}


//----- (00000001401DBB00) ----------------------------------------------------
__int64            sub_1401DBB00(_DWORD *a1, int a2)
{
  if ( a2 >= 1 )
  {
    if ( a2 >= 2 )
    {
      if ( a2 >= 3 )
      {
        if ( a2 >= 4 )
        {
          if ( a2 >= 6 )
          {
            if ( a2 >= 8 )
            {
              a1[1161] = 2;
              a1[1163] = 45875;
              a1[1162] = 16;
              a1[1159] = 24;
              a1[1150] = 5 * a1[1144];
              a1[1157] = 4;
              a1[1158] = 1;
              a1[1165] = 16;
            }
            else
            {
              a1[1161] = 1;
              a1[1163] = 47186;
              a1[1162] = 12;
              a1[1159] = 20;
              a1[1150] = 5 * a1[1144];
              a1[1157] = 3;
              a1[1158] = 1;
              a1[1165] = 8;
            }
            a1[1168] = 983 * a1[1144];
          }
          else
          {
            a1[1161] = 1;
            a1[1163] = 48497;
            a1[1162] = 10;
            a1[1159] = 16;
            a1[1150] = 5 * a1[1144];
            a1[1157] = 2;
            a1[1158] = 1;
            a1[1165] = 6;
            a1[1168] = 983 * a1[1144];
          }
        }
        else
        {
          a1[1161] = 1;
          a1[1163] = 49807;
          a1[1162] = 8;
          a1[1159] = 14;
          a1[1150] = 5 * a1[1144];
          a1[1157] = 2;
          a1[1158] = 0;
          a1[1165] = 4;
          a1[1168] = 0;
        }
      }
      else
      {
        a1[1161] = 0;
        a1[1163] = 52429;
        a1[1162] = 6;
        a1[1159] = 12;
        a1[1150] = 3 * a1[1144];
        a1[1157] = 2;
        a1[1158] = 0;
        a1[1165] = 2;
        a1[1168] = 0;
      }
    }
    else
    {
      a1[1161] = 1;
      a1[1163] = 49807;
      a1[1162] = 8;
      a1[1159] = 14;
      a1[1150] = 5 * a1[1144];
      a1[1157] = 1;
      a1[1158] = 0;
      a1[1165] = 3;
      a1[1168] = 0;
    }
  }
  else
  {
    a1[1161] = 0;
    a1[1163] = 52429;
    a1[1162] = 6;
    a1[1159] = 12;
    a1[1150] = 3 * a1[1144];
    a1[1157] = 1;
    a1[1158] = 0;
    a1[1165] = 2;
    a1[1168] = 0;
  }
  a1[1162] = sub_1401BE320(a1[1162], a1[1160]);
  a1[1151] = 5 * a1[1144] + 2 * a1[1150];
  a1[1156] = a2;
  return 0;
}


//----- (00000001401DBFF0) ----------------------------------------------------
__int64            sub_1401DBFF0(int *a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-18h]

  v3 = a1[1528];
  a1[1528] = *(_DWORD *)(a2 + 44);
  if ( a1[1528] )
  {
    if ( v3 )
      a1[1529] = sub_1401BE3A0(7 - (unsigned int)((26214LL * a1[1154]) >> 16), 2u);
    else
      a1[1529] = 7;
  }
  return 0;
}


//----- (00000001401DC0A0) ----------------------------------------------------
__int64            sub_1401DC0A0(__int64 a1, int a2)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int j; // [rsp+4h] [rbp-14h]

  for ( i = 2; ; ++i )
  {
    result = (unsigned int)a2;
    if ( i > a2 )
      break;
    for ( j = a2; j > i; --j )
      *(_DWORD *)(a1 + 4LL * (j - 2)) -= *(_DWORD *)(a1 + 4LL * j);
    *(_DWORD *)(a1 + 4LL * (i - 2)) -= 2 * *(_DWORD *)(a1 + 4LL * i);
  }
  return result;
}


//----- (00000001401DC160) ----------------------------------------------------
__int64            sub_1401DC160(_DWORD *a1, int a2, int a3)
{
  unsigned int v4; // [rsp+0h] [rbp-18h]
  int v5; // [rsp+4h] [rbp-14h]
  int i; // [rsp+8h] [rbp-10h]

  v4 = a1[a3];
  v5 = 16 * a2;
  if ( a3 == 8 )
  {
    return (unsigned int)((v5
                         * (__int64)(int)(((v5
                                          * (__int64)(int)(((v5
                                                           * (__int64)(int)(((v5
                                                                            * (__int64)(int)(((v5
                                                                                             * (__int64)(int)(((v5 * (__int64)(int)(((v5 * (__int64)(int)(((v5 * (__int64)(int)v4) >> 16) + a1[7])) >> 16) + a1[6])) >> 16) + a1[5])) >> 16)
                                                                                           + a1[4])) >> 16)
                                                                          + a1[3])) >> 16)
                                                         + a1[2])) >> 16)
                                        + a1[1])) >> 16)
         + *a1;
  }
  else
  {
    for ( i = a3 - 1; i >= 0; --i )
      v4 = ((v5 * (__int64)(int)v4) >> 16) + a1[i];
  }
  return v4;
}


//----- (00000001401DC340) ----------------------------------------------------
__int64            sub_1401DC340(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int i; // [rsp+20h] [rbp-18h]
  int j; // [rsp+20h] [rbp-18h]

  *(_DWORD *)(a2 + 4LL * a4) = 0x10000;
  *(_DWORD *)(a3 + 4LL * a4) = 0x10000;
  for ( i = 0; i < a4; ++i )
  {
    *(_DWORD *)(a2 + 4LL * i) = -*(_DWORD *)(a1 + 4LL * (a4 - i - 1)) - *(_DWORD *)(a1 + 4LL * (i + a4));
    *(_DWORD *)(a3 + 4LL * i) = *(_DWORD *)(a1 + 4LL * (i + a4)) - *(_DWORD *)(a1 + 4LL * (a4 - i - 1));
  }
  for ( j = a4; j > 0; --j )
  {
    *(_DWORD *)(a2 + 4LL * (j - 1)) -= *(_DWORD *)(a2 + 4LL * j);
    *(_DWORD *)(a3 + 4LL * (j - 1)) += *(_DWORD *)(a3 + 4LL * j);
  }
  sub_1401DC0A0(a2, a4);
  return sub_1401DC0A0(a3, a4);
}


//----- (00000001401DC4C0) ----------------------------------------------------
__int64            sub_1401DC4C0(_DWORD *a1, int a2)
{
  int v3; // eax
  int v4; // [rsp+20h] [rbp-98h]
  int v5; // [rsp+24h] [rbp-94h]
  int v6; // [rsp+28h] [rbp-90h]
  int i; // [rsp+2Ch] [rbp-8Ch]
  int j; // [rsp+30h] [rbp-88h]
  int v9; // [rsp+34h] [rbp-84h]
  int v10; // [rsp+38h] [rbp-80h]
  int v11; // [rsp+38h] [rbp-80h]
  int v12; // [rsp+3Ch] [rbp-7Ch]
  int v13; // [rsp+40h] [rbp-78h]
  unsigned int v14; // [rsp+54h] [rbp-64h]
  int v15; // [rsp+58h] [rbp-60h]
  char v16; // [rsp+5Ch] [rbp-5Ch]
  char v17; // [rsp+60h] [rbp-58h]
  signed int v18; // [rsp+64h] [rbp-54h]
  char v19; // [rsp+68h] [rbp-50h]
  unsigned int v20; // [rsp+6Ch] [rbp-4Ch]
  int v21; // [rsp+70h] [rbp-48h]
  signed int v22; // [rsp+74h] [rbp-44h]
  unsigned int v23; // [rsp+78h] [rbp-40h]
  int v24; // [rsp+7Ch] [rbp-3Ch]
  char v25; // [rsp+80h] [rbp-38h]
  char v26; // [rsp+84h] [rbp-34h]
  signed int v27; // [rsp+88h] [rbp-30h]
  char v28; // [rsp+8Ch] [rbp-2Ch]
  unsigned int v29; // [rsp+90h] [rbp-28h]
  int v30; // [rsp+94h] [rbp-24h]
  signed int v31; // [rsp+98h] [rbp-20h]
  __int64 v32; // [rsp+A0h] [rbp-18h]
  __int64 v33; // [rsp+A8h] [rbp-10h]

  v10 = 0x40000000;
  for ( i = a2 - 1; i > 0; --i )
  {
    if ( (int)a1[i] > 16773022 || (int)a1[i] < -16773022 )
      return 0;
    v4 = -128 * a1[i];
    v9 = 0x40000000 - ((unsigned __int64)(v4 * (__int64)v4) >> 32);
    v10 = 4 * ((unsigned __int64)(v9 * (__int64)v10) >> 32);
    if ( v10 < 107374 )
      return 0;
    if ( v9 <= 0 )
      v3 = sub_1401BA490(((unsigned __int64)(v4 * (__int64)v4) >> 32) - 0x40000000);
    else
      v3 = sub_1401BA490(v9);
    v13 = 32 - v3;
    v12 = sub_1401BE820(v9, 32 - v3 + 30);
    for ( j = 0; j < (i + 1) >> 1; ++j )
    {
      v5 = a1[j];
      v6 = a1[i - j - 1];
      if ( v13 == 1 )
      {
        if ( (int)(v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v6) >> 30) + 1) >> 1) & (v5 ^ 0x80000000)) >= 0 )
            v15 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v15 = 0x7FFFFFFF;
          v18 = v15;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v6) >> 30) + 1) >> 1) ^ 0x80000000) & v5) >= 0 )
            v14 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v14 = 0x80000000;
          v18 = v14;
        }
        if ( (int)(v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v6) >> 30) + 1) >> 1) & (v5 ^ 0x80000000)) >= 0 )
            v17 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v17 = -1;
          v19 = v17;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v6) >> 30) + 1) >> 1) ^ 0x80000000) & v5) >= 0 )
            v16 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v16 = 0;
          v19 = v16;
        }
        v32 = (((_BYTE)v12 * v19) & 1) + ((v12 * (__int64)v18) >> 1);
      }
      else
      {
        if ( (int)(v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v6) >> 30) + 1) >> 1) & (v5 ^ 0x80000000)) >= 0 )
            v21 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v21 = 0x7FFFFFFF;
          v22 = v21;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v6) >> 30) + 1) >> 1) ^ 0x80000000) & v5) >= 0 )
            v20 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v20 = 0x80000000;
          v22 = v20;
        }
        v32 = (((v12 * (__int64)v22) >> ((unsigned __int8)v13 - 1)) + 1) >> 1;
      }
      if ( v32 > 0x7FFFFFFF || v32 < (__int64)0xFFFFFFFF80000000uLL )
        return 0;
      a1[j] = v32;
      if ( v13 == 1 )
      {
        if ( (int)(v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v5) >> 30) + 1) >> 1) & (v6 ^ 0x80000000)) >= 0 )
            v24 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v24 = 0x7FFFFFFF;
          v27 = v24;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v5) >> 30) + 1) >> 1) ^ 0x80000000) & v6) >= 0 )
            v23 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v23 = 0x80000000;
          v27 = v23;
        }
        if ( (int)(v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v5) >> 30) + 1) >> 1) & (v6 ^ 0x80000000)) >= 0 )
            v26 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v26 = -1;
          v28 = v26;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v5) >> 30) + 1) >> 1) ^ 0x80000000) & v6) >= 0 )
            v25 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v25 = 0;
          v28 = v25;
        }
        v33 = (((_BYTE)v12 * v28) & 1) + ((v12 * (__int64)v27) >> 1);
      }
      else
      {
        if ( (int)(v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v5) >> 30) + 1) >> 1) & (v6 ^ 0x80000000)) >= 0 )
            v30 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v30 = 0x7FFFFFFF;
          v31 = v30;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v5) >> 30) + 1) >> 1) ^ 0x80000000) & v6) >= 0 )
            v29 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v29 = 0x80000000;
          v31 = v29;
        }
        v33 = (((v12 * (__int64)v31) >> ((unsigned __int8)v13 - 1)) + 1) >> 1;
      }
      if ( v33 > 0x7FFFFFFF || v33 < (__int64)0xFFFFFFFF80000000uLL )
        return 0;
      a1[i - j - 1] = v33;
    }
  }
  if ( (int)a1[i] > 16773022 || (int)a1[i] < -16773022 )
    return 0;
  v11 = 4
      * ((unsigned __int64)((int)(0x40000000 - ((unsigned __int64)(-128 * *a1 * (__int64)(-128 * *a1)) >> 32))
                          * (__int64)v10) >> 32);
  if ( v11 >= 107374 )
    return (unsigned int)v11;
  else
    return 0;
}


//----- (00000001401DCE10) ----------------------------------------------------
__int64            sub_1401DCE10(_DWORD *a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int j; // [rsp+4h] [rbp-14h]
  int v6; // [rsp+8h] [rbp-10h]

  *a1 = 0x10000;
  a1[1] = -*a2;
  for ( i = 1; ; ++i )
  {
    result = (unsigned int)a3;
    if ( i >= a3 )
      break;
    v6 = a2[2 * i];
    a1[i + 1] = 2 * a1[i - 1] - (((((int)a1[i] * (__int64)v6) >> 15) + 1) >> 1);
    for ( j = i; j > 1; --j )
      a1[j] += a1[j - 2] - (((((int)a1[j - 1] * (__int64)v6) >> 15) + 1) >> 1);
    a1[1] -= v6;
  }
  return result;
}


//----- (00000001401DCF80) ----------------------------------------------------
__int64            sub_1401DCF80(__int64 a1, __int16 *a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // rsp
  __m128i v8; // [rsp+20h] [rbp+0h] BYREF
  void *v9; // [rsp+30h] [rbp+10h]
  unsigned int v10; // [rsp+38h] [rbp+18h]
  int v11; // [rsp+3Ch] [rbp+1Ch]
  __int32 v12; // [rsp+40h] [rbp+20h]
  __int64 v13; // [rsp+48h] [rbp+28h]

  SR_VEC_LANES(128, v8, i64)[1] = a1;
  v4 = 2LL * (2 * *(_DWORD *)(a1 + 268) + 8);
  v5 = v4 + 15;
  if ( v4 + 15 <= v4 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = alloca(v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v9 = &v8;
  sub_1401FC920(&v8, (     __m128i *)(SR_VEC_LANES(128, v8, i64)[1] + 24), 0x10u);
  v11 = *(_DWORD *)(SR_VEC_LANES(128, v8, i64)[1] + 272);
  while ( 1 )
  {
    v10 = a4 >= *(_DWORD *)(SR_VEC_LANES(128, v8, i64)[1] + 268) ? *(_DWORD *)(SR_VEC_LANES(128, v8, i64)[1] + 268) : a4;
    SR_VEC_LANES(128, v8, i32)[0] = v10;
    sub_1401DD3A0((_DWORD *)SR_VEC_LANES(128, v8, i64)[1], (__int64)v9 + 16, a3, v10);
    v12 = SR_VEC_LANES(128, v8, i32)[0] << 17;
    a2 = sub_1401DE800(a2, (__int64)v9, SR_VEC_LANES(128, v8, i32)[0] << 17, v11);
    a3 += 2LL * SR_VEC_LANES(128, v8, i32)[0];
    a4 -= SR_VEC_LANES(128, v8, i32)[0];
    if ( a4 <= 0 )
      break;
    sub_1401FC920((__m128i *)v9, (     __m128i *)((char *)v9 + 4 * SR_VEC_LANES(128, v8, i32)[0]), 0x10u);
  }
  sub_1401FC920((__m128i *)(SR_VEC_LANES(128, v8, i64)[1] + 24), (     __m128i *)((char *)v9 + 4 * SR_VEC_LANES(128, v8, i32)[0]), 0x10u);
  return sub_1401F8B20((unsigned __int64)&v8 ^ v13);
}


//----- (00000001401DD130) ----------------------------------------------------
__int64            sub_1401DD130(__int64 a1, __int16 *a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  void *v6; // rsp
  unsigned __int64 v7; // rax
  __m128i v9; // [rsp+40h] [rbp+0h] BYREF
  __m128i *v10; // [rsp+50h] [rbp+10h]
  signed int v11; // [rsp+58h] [rbp+18h]
  int v12; // [rsp+5Ch] [rbp+1Ch]
  __int32 v13; // [rsp+60h] [rbp+20h]
  __int16 *v14; // [rsp+68h] [rbp+28h]
  __int64 v15; // [rsp+70h] [rbp+30h]
  __int64 v16; // [rsp+78h] [rbp+38h]

  SR_VEC_LANES(128, v9, i64)[0] = a1;
  v4 = 4LL * (*(_DWORD *)(a1 + 276) + *(_DWORD *)(a1 + 268));
  v5 = v4 + 15;
  if ( v4 + 15 <= v4 )
    v5 = 0xFFFFFFFFFFFFFF0LL;
  v6 = alloca(v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v10 = &v9;
  sub_1401FC920(&v9, (     __m128i *)(SR_VEC_LANES(128, v9, i64)[0] + 24), 4LL * *(int *)(SR_VEC_LANES(128, v9, i64)[0] + 276));
  v14 = (__int16 *)(*(_QWORD *)(SR_VEC_LANES(128, v9, i64)[0] + 296) + 4LL);
  v12 = *(_DWORD *)(SR_VEC_LANES(128, v9, i64)[0] + 272);
  while ( 1 )
  {
    v11 = a4 >= *(_DWORD *)(SR_VEC_LANES(128, v9, i64)[0] + 268) ? *(_DWORD *)(SR_VEC_LANES(128, v9, i64)[0] + 268) : a4;
    SR_VEC_LANES(128, v9, i32)[2] = v11;
    sub_1401DD7A0(
      SR_VEC_LANES(128, v9, i64)[0],
      (__int64)SR_VEC_PTR_LANES(128, v10, i64) + 4 * *(int *)(SR_VEC_LANES(128, v9, i64)[0] + 276),
      a3,
      *(__int16 **)(SR_VEC_LANES(128, v9, i64)[0] + 296),
      v11);
    v13 = SR_VEC_LANES(128, v9, i32)[2] << 16;
    a2 = sub_1401DD8A0(
           a2,
           (__int64)v10,
           v14,
           *(_DWORD *)(SR_VEC_LANES(128, v9, i64)[0] + 276),
           *(_DWORD *)(SR_VEC_LANES(128, v9, i64)[0] + 280),
           SR_VEC_LANES(128, v9, i32)[2] << 16,
           v12);
    a3 += 2LL * SR_VEC_LANES(128, v9, i32)[2];
    a4 -= SR_VEC_LANES(128, v9, i32)[2];
    if ( a4 <= 1 )
      break;
    sub_1401FC920(v10, (__m128i *)((char *)v10 + 4 * SR_VEC_LANES(128, v9, i32)[2]), 4LL * *(int *)(SR_VEC_LANES(128, v9, i64)[0] + 276));
  }
  v7 = 4LL * *(int *)(SR_VEC_LANES(128, v9, i64)[0] + 276);
  v15 = SR_VEC_LANES(128, v9, i64)[0] + 24;
  sub_1401FC920((__m128i *)(SR_VEC_LANES(128, v9, i64)[0] + 24), (__m128i *)((char *)v10 + 4 * SR_VEC_LANES(128, v9, i32)[2]), v7);
  return sub_1401F8B20((unsigned __int64)&v9 ^ v16);
}


//----- (00000001401DD350) ----------------------------------------------------
__int64            sub_1401DD350(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  return sub_1401DD3A0(a1, a2, a3, a4);
}


//----- (00000001401DD3A0) ----------------------------------------------------
__int64            sub_1401DD3A0(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  int v5; // [rsp+0h] [rbp-38h]
  int v6; // [rsp+0h] [rbp-38h]
  int v7; // [rsp+0h] [rbp-38h]
  int v8; // [rsp+0h] [rbp-38h]
  int v9; // [rsp+0h] [rbp-38h]
  int v10; // [rsp+0h] [rbp-38h]
  int v11; // [rsp+8h] [rbp-30h]
  int v12; // [rsp+8h] [rbp-30h]
  int v13; // [rsp+8h] [rbp-30h]
  int v14; // [rsp+8h] [rbp-30h]
  int i; // [rsp+Ch] [rbp-2Ch]
  int v16; // [rsp+10h] [rbp-28h]
  int v17; // [rsp+10h] [rbp-28h]
  int v18; // [rsp+14h] [rbp-24h]
  int v19; // [rsp+18h] [rbp-20h]
  __int16 v20; // [rsp+1Ch] [rbp-1Ch]
  int v21; // [rsp+20h] [rbp-18h]
  __int16 v22; // [rsp+24h] [rbp-14h]

  for ( i = 0; ; ++i )
  {
    result = a4;
    if ( i >= (int)a4 )
      break;
    v18 = *(__int16 *)(a3 + 2LL * i) << 10;
    v5 = (unk_14027E928 * (__int64)(v18 - *a1)) >> 16;
    v11 = v5 + *a1;
    *a1 = v5 + v18;
    v6 = (unk_14027E92A * (__int64)(v11 - a1[1])) >> 16;
    v16 = v6 + a1[1];
    a1[1] = v6 + v11;
    v7 = ((unk_14027E92C * (__int64)(v16 - a1[2])) >> 16) + v16 - a1[2];
    v12 = v7 + a1[2];
    a1[2] = v7 + v16;
    if ( ((v12 >> 9) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v12 >> 9) + 1) >> 1 >= -32768 )
        v19 = ((v12 >> 9) + 1) >> 1;
      else
        LOWORD(v19) = 0x8000;
      v20 = v19;
    }
    else
    {
      v20 = 0x7FFF;
    }
    *(_WORD *)(a2 + 4LL * i) = v20;
    v8 = (unk_14027E9D8 * (__int64)(v18 - a1[3])) >> 16;
    v13 = v8 + a1[3];
    a1[3] = v8 + v18;
    v9 = (unk_14027E9DA * (__int64)(v13 - a1[4])) >> 16;
    v17 = v9 + a1[4];
    a1[4] = v9 + v13;
    v10 = ((unk_14027E9DC * (__int64)(v17 - a1[5])) >> 16) + v17 - a1[5];
    v14 = v10 + a1[5];
    a1[5] = v10 + v17;
    if ( ((v14 >> 9) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v14 >> 9) + 1) >> 1 >= -32768 )
        v21 = ((v14 >> 9) + 1) >> 1;
      else
        LOWORD(v21) = 0x8000;
      v22 = v21;
    }
    else
    {
      v22 = 0x7FFF;
    }
    *(_WORD *)(a2 + 2LL * (2 * i + 1)) = v22;
  }
  return result;
}


//----- (00000001401DD7A0) ----------------------------------------------------
__int64            sub_1401DD7A0(_DWORD *a1, __int64 a2, __int64 a3, __int16 *a4, unsigned int a5)
{
  __int64 result; // rax
  signed int i; // [rsp+0h] [rbp-18h]
  int v7; // [rsp+4h] [rbp-14h]

  for ( i = 0; ; ++i )
  {
    result = a5;
    if ( i >= (int)a5 )
      break;
    v7 = *a1 + (*(__int16 *)(a3 + 2LL * i) << 8);
    *(_DWORD *)(a2 + 4LL * i) = v7;
    v7 *= 4;
    *a1 = ((*a4 * (__int64)v7) >> 16) + a1[1];
    a1[1] = (a4[1] * (__int64)v7) >> 16;
  }
  return result;
}


//----- (00000001401DD8A0) ----------------------------------------------------
__int16 *           sub_1401DD8A0(__int16 *a1, __int64 a2, __int16 *a3, int a4, int a5, int a6, int a7)
{
  int v8; // [rsp+0h] [rbp-48h]
  int v9; // [rsp+0h] [rbp-48h]
  int v10; // [rsp+0h] [rbp-48h]
  int v11; // [rsp+0h] [rbp-48h]
  int v12; // [rsp+0h] [rbp-48h]
  int v13; // [rsp+0h] [rbp-48h]
  int v14; // [rsp+0h] [rbp-48h]
  int v15; // [rsp+0h] [rbp-48h]
  int i; // [rsp+10h] [rbp-38h]
  int j; // [rsp+10h] [rbp-38h]
  int k; // [rsp+10h] [rbp-38h]
  int v19; // [rsp+24h] [rbp-24h]
  int v20; // [rsp+28h] [rbp-20h]
  __int16 v21; // [rsp+2Ch] [rbp-1Ch]
  int v22; // [rsp+30h] [rbp-18h]
  __int16 v23; // [rsp+34h] [rbp-14h]
  int v24; // [rsp+38h] [rbp-10h]
  __int16 v25; // [rsp+3Ch] [rbp-Ch]

  switch ( a4 )
  {
    case 18:
      for ( i = 0; i < a6; i += a7 )
      {
        v19 = (__int64)((__int16)a5 * (unsigned __int64)(unsigned __int16)i) >> 16;
        v8 = ((a3[9 * v19 + 6] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 24)) >> 16)
           + ((a3[9 * v19 + 5] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 20)) >> 16)
           + ((a3[9 * v19 + 4] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 16)) >> 16)
           + ((a3[9 * v19 + 3] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 12)) >> 16)
           + ((a3[9 * v19 + 2] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 8)) >> 16)
           + ((a3[9 * v19 + 1] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 4)) >> 16)
           + ((a3[9 * v19] * (__int64)*(int *)(a2 + 4LL * (i >> 16))) >> 16);
        v9 = ((a3[9 * (a5 - 1 - v19) + 3] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 56)) >> 16)
           + ((a3[9 * (a5 - 1 - v19) + 2] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 60)) >> 16)
           + ((a3[9 * (a5 - 1 - v19) + 1] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 64)) >> 16)
           + ((a3[9 * (a5 - 1 - v19)] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 68)) >> 16)
           + ((a3[9 * v19 + 8] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 32)) >> 16)
           + ((a3[9 * v19 + 7] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 28)) >> 16)
           + v8;
        v10 = ((a3[9 * (a5 - 1 - v19) + 8] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 36)) >> 16)
            + ((a3[9 * (a5 - 1 - v19) + 7] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 40)) >> 16)
            + ((a3[9 * (a5 - 1 - v19) + 6] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 44)) >> 16)
            + ((a3[9 * (a5 - 1 - v19) + 5] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 48)) >> 16)
            + ((a3[9 * (a5 - 1 - v19) + 4] * (__int64)*(int *)(a2 + 4LL * (i >> 16) + 52)) >> 16)
            + v9;
        if ( ((v10 >> 5) + 1) >> 1 <= 0x7FFF )
        {
          if ( ((v10 >> 5) + 1) >> 1 >= -32768 )
            v20 = ((v10 >> 5) + 1) >> 1;
          else
            LOWORD(v20) = 0x8000;
          v21 = v20;
        }
        else
        {
          v21 = 0x7FFF;
        }
        *a1++ = v21;
      }
      break;
    case 24:
      for ( j = 0; j < a6; j += a7 )
      {
        v11 = ((a3[5] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 72) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 20))) >> 16)
            + ((a3[4] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 76) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 16))) >> 16)
            + ((a3[3] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 80) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 12))) >> 16)
            + ((a3[2] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 84) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 8))) >> 16)
            + ((a3[1] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 88) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 4))) >> 16)
            + ((*a3 * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 92) + *(_DWORD *)(a2 + 4LL * (j >> 16)))) >> 16);
        v12 = ((a3[11] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 48) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 44))) >> 16)
            + ((a3[10] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 52) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 40))) >> 16)
            + ((a3[9] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 56) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 36))) >> 16)
            + ((a3[8] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 60) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 32))) >> 16)
            + ((a3[7] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 64) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 28))) >> 16)
            + ((a3[6] * (__int64)(*(_DWORD *)(a2 + 4LL * (j >> 16) + 68) + *(_DWORD *)(a2 + 4LL * (j >> 16) + 24))) >> 16)
            + v11;
        if ( ((v12 >> 5) + 1) >> 1 <= 0x7FFF )
        {
          if ( ((v12 >> 5) + 1) >> 1 >= -32768 )
            v22 = ((v12 >> 5) + 1) >> 1;
          else
            LOWORD(v22) = 0x8000;
          v23 = v22;
        }
        else
        {
          v23 = 0x7FFF;
        }
        *a1++ = v23;
      }
      break;
    case 36:
      for ( k = 0; k < a6; k += a7 )
      {
        v13 = ((a3[5] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 120) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 20))) >> 16)
            + ((a3[4] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 124) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 16))) >> 16)
            + ((a3[3] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 128) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 12))) >> 16)
            + ((a3[2] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 132) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 8))) >> 16)
            + ((a3[1] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 136) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 4))) >> 16)
            + ((*a3 * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 140) + *(_DWORD *)(a2 + 4LL * (k >> 16)))) >> 16);
        v14 = ((a3[11] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 96) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 44))) >> 16)
            + ((a3[10] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 100) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 40))) >> 16)
            + ((a3[9] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 104) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 36))) >> 16)
            + ((a3[8] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 108) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 32))) >> 16)
            + ((a3[7] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 112) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 28))) >> 16)
            + ((a3[6] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 116) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 24))) >> 16)
            + v13;
        v15 = ((a3[17] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 72) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 68))) >> 16)
            + ((a3[16] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 76) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 64))) >> 16)
            + ((a3[15] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 80) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 60))) >> 16)
            + ((a3[14] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 84) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 56))) >> 16)
            + ((a3[13] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 88) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 52))) >> 16)
            + ((a3[12] * (__int64)(*(_DWORD *)(a2 + 4LL * (k >> 16) + 92) + *(_DWORD *)(a2 + 4LL * (k >> 16) + 48))) >> 16)
            + v14;
        if ( ((v15 >> 5) + 1) >> 1 <= 0x7FFF )
        {
          if ( ((v15 >> 5) + 1) >> 1 >= -32768 )
            v24 = ((v15 >> 5) + 1) >> 1;
          else
            LOWORD(v24) = 0x8000;
          v25 = v24;
        }
        else
        {
          v25 = 0x7FFF;
        }
        *a1++ = v25;
      }
      break;
  }
  return a1;
}


//----- (00000001401DE800) ----------------------------------------------------
__int16 *           sub_1401DE800(__int16 *a1, __int64 a2, int a3, int a4)
{
  int v5; // [rsp+0h] [rbp-28h]
  int v6; // [rsp+4h] [rbp-24h]
  int i; // [rsp+8h] [rbp-20h]
  int v8; // [rsp+Ch] [rbp-1Ch]
  __int16 v9; // [rsp+10h] [rbp-18h]

  for ( i = 0; i < a3; i += a4 )
  {
    v6 = (12LL * (unsigned __int16)i) >> 16;
    v5 = word_140282170[4 * (11 - v6)] * *(__int16 *)(a2 + 2LL * (i >> 16) + 14)
       + word_140282170[4 * (11 - v6) + 1] * *(__int16 *)(a2 + 2LL * (i >> 16) + 12)
       + word_140282170[4 * (11 - v6) + 2] * *(__int16 *)(a2 + 2LL * (i >> 16) + 10)
       + word_140282170[4 * (11 - v6) + 3] * *(__int16 *)(a2 + 2LL * (i >> 16) + 8)
       + word_140282170[4 * v6 + 3] * *(__int16 *)(a2 + 2LL * (i >> 16) + 6)
       + word_140282170[4 * v6 + 2] * *(__int16 *)(a2 + 2LL * (i >> 16) + 4)
       + word_140282170[4 * v6 + 1] * *(__int16 *)(a2 + 2LL * (i >> 16) + 2)
       + word_140282170[4 * v6] * *(__int16 *)(a2 + 2LL * (i >> 16));
    if ( ((v5 >> 14) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v5 >> 14) + 1) >> 1 >= -32768 )
        v8 = ((v5 >> 14) + 1) >> 1;
      else
        LOWORD(v8) = 0x8000;
      v9 = v8;
    }
    else
    {
      v9 = 0x7FFF;
    }
    *a1++ = v9;
  }
  return a1;
}

// 140282170: using guessed type __int16 word_140282170[48];

//----- (00000001401DEAE0) ----------------------------------------------------
__int64            sub_1401DEAE0()
{
  __int64 v1; // [rsp-20h] [rbp-2310h] BYREF
  int i; // [rsp+10h] [rbp-22E0h]
  __m128i *v3; // [rsp+18h] [rbp-22D8h]
  BOOL v4; // [rsp+20h] [rbp-22D0h]
  __m128i v5[272]; // [rsp+30h] [rbp-22C0h] BYREF
  _DWORD v6[4]; // [rsp+1130h] [rbp-11C0h] BYREF
  __m128i v7; // [rsp+1140h] [rbp-11B0h] BYREF
  __int64 v8; // [rsp+1150h] [rbp-11A0h]
  _DWORD *v9; // [rsp+1170h] [rbp-1180h]
  __m128i *v10; // [rsp+1178h] [rbp-1178h]
  __int64 v11; // [rsp+1180h] [rbp-1170h]
  int v12; // [rsp+1188h] [rbp-1168h]

  v3 = (__m128i *)&v9[9 * v9[1441] + 1530];
  if ( v9[1528] && (int)v9[1133] > 77 )
  {
    v9[v9[1441] + 1185] = 1;
    sub_1401FC920(v5, (     __m128i *)(v9 + 37), 0x1100u);
    sub_1401FC920(v3, (     __m128i *)v9 + 297, 0x24u);
    sub_1401FC920(&v7, v10, 4LL * (int)v9[1145]);
    if ( !v9[1441] || !v9[v9[1441] + 1184] )
    {
      *((_BYTE *)v9 + 4540) = *((_BYTE *)v9 + 7192);
      SR_VEC_PTR_LANES(128, v3, i8)[0] += *((_BYTE *)v9 + 6116);
      SR_VEC_PTR_LANES(128, v3, i8)[0] = sub_1401BE320(SR_VEC_PTR_LANES(128, v3, i8)[0], 0x3Fu);
    }
    v4 = v12 == 2;
    sub_1401C2D70((__int64)v6, SR_VEC_PTR_LANES(128, v3, i8), (char *)v9 + 4540, v4, v9[1145]);
    for ( i = 0; i < v9[1145]; ++i )
      *(float *)&SR_VEC_PTR_LANES(128, v10, i32)[i] = (float)(int)v6[i] * 0.000015258789;
    sub_1401D62A0(v9, (__int64)v10, SR_VEC_PTR_LANES(128, v3, i8), v5, (__int64)&v9[80 * v9[1441] + 1557], v11);
    sub_1401FC920(v10, &v7, 4LL * (int)v9[1145]);
  }
  return sub_1401F8B20((unsigned __int64)&v1 ^ v8);
}


//----- (00000001401DEE00) ----------------------------------------------------
__int64            sub_1401DEE00(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result; // rax
  float v5; // xmm0_4
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 16; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    v5 = (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1)) * *a2)
                                                                                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 4) * a2[1]))
                                                                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 8)
                                                                                               * a2[2]))
                                                                               + (float)(*(float *)(a3
                                                                                                  + 4LL * (i - 1)
                                                                                                  - 12)
                                                                                       * a2[3]))
                                                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 16)
                                                                               * a2[4]))
                                                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 20) * a2[5]))
                                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 24) * a2[6]))
                                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 28) * a2[7]))
                                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 32) * a2[8]))
                               + (float)(*(float *)(a3 + 4LL * (i - 1) - 36) * a2[9]))
                       + (float)(*(float *)(a3 + 4LL * (i - 1) - 40) * a2[10]))
               + (float)(*(float *)(a3 + 4LL * (i - 1) - 44) * a2[11]))
       + (float)(*(float *)(a3 + 4LL * (i - 1) - 48) * a2[12]);
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)(v5 + (float)(*(float *)(a3 + 4LL * (i - 1) - 52) * a2[13]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 56) * a2[14]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 60) * a2[15]));
  }
  return result;
}


//----- (00000001401DF140) ----------------------------------------------------
__int64            sub_1401DF140(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 12; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1)) * *a2) + (float)(*(float *)(a3 + 4LL * (i - 1) - 4) * a2[1])) + (float)(*(float *)(a3 + 4LL * (i - 1) - 8) * a2[2])) + (float)(*(float *)(a3 + 4LL * (i - 1) - 12) * a2[3]))
                                                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 16) * a2[4]))
                                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 20)
                                                                                             * a2[5]))
                                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 24)
                                                                                     * a2[6]))
                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 28)
                                                                             * a2[7]))
                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 32) * a2[8]))
                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 36) * a2[9]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 40) * a2[10]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 44) * a2[11]));
  }
  return result;
}


//----- (00000001401DF3D0) ----------------------------------------------------
__int64            sub_1401DF3D0(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 10; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)((float)((float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1)) * *a2) + (float)(*(float *)(a3 + 4LL * (i - 1) - 4) * a2[1]))
                                                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 8) * a2[2]))
                                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 12)
                                                                                             * a2[3]))
                                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 16)
                                                                                     * a2[4]))
                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 20)
                                                                             * a2[5]))
                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 24) * a2[6]))
                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 28) * a2[7]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 32) * a2[8]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 36) * a2[9]));
  }
  return result;
}


//----- (00000001401DF610) ----------------------------------------------------
__int64            sub_1401DF610(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 8; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1))
                                                                                             * *a2)
                                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 4)
                                                                                             * a2[1]))
                                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 8)
                                                                                     * a2[2]))
                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 12)
                                                                             * a2[3]))
                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 16) * a2[4]))
                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 20) * a2[5]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 24) * a2[6]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 28) * a2[7]));
  }
  return result;
}


//----- (00000001401DF7F0) ----------------------------------------------------
__int64            sub_1401DF7F0(__int64 a1, float *a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 6; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    *(float *)(a1 + 4LL * i) = *(float *)(a3 + 4LL * (i - 1) + 4)
                             - (float)((float)((float)((float)((float)((float)(*(float *)(a3 + 4LL * (i - 1)) * *a2)
                                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 4) * a2[1]))
                                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 8) * a2[2]))
                                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 12) * a2[3]))
                                             + (float)(*(float *)(a3 + 4LL * (i - 1) - 16) * a2[4]))
                                     + (float)(*(float *)(a3 + 4LL * (i - 1) - 20) * a2[5]));
  }
  return result;
}


//----- (00000001401DF980) ----------------------------------------------------
__m128            sub_1401DF980(__int64 a1, float a2, int a3)
{
  __int128 v3; // xmm1
  int i; // [rsp+0h] [rbp-18h]
  float v6; // [rsp+4h] [rbp-14h]
  float v7; // [rsp+28h] [rbp+10h]

  v7 = -a2;
  v6 = *(float *)(a1 + 4LL * (a3 - 1));
  for ( i = a3 - 2; i >= 0; --i )
    v6 = (float)(v7 * v6) + *(float *)(a1 + 4LL * i);
  v3 = 0x3F800000u;
  *(float *)&v3 = 1.0 / (float)(1.0 - (float)(v7 * v6));
  return (__m128)v3;
}

// 140279870: using guessed type __int128 xmmword_140279870;

//----- (00000001401DFA30) ----------------------------------------------------
float            sub_1401DFA30(float *a1, float a2, float a3, int a4)
{
  float result; // xmm0_4
  float v5; // xmm0_4
  int i; // [rsp+20h] [rbp-28h]
  int j; // [rsp+20h] [rbp-28h]
  int m; // [rsp+20h] [rbp-28h]
  int n; // [rsp+20h] [rbp-28h]
  int ii; // [rsp+20h] [rbp-28h]
  int jj; // [rsp+20h] [rbp-28h]
  int kk; // [rsp+20h] [rbp-28h]
  float v13; // [rsp+24h] [rbp-24h]
  float v14; // [rsp+24h] [rbp-24h]
  float v15; // [rsp+28h] [rbp-20h]
  int k; // [rsp+2Ch] [rbp-1Ch]
  int v17; // [rsp+34h] [rbp-14h]

  v17 = 0;
  for ( i = a4 - 1; i > 0; --i )
    a1[i - 1] = a1[i - 1] - (float)(a2 * a1[i]);
  result = (float)(1.0 - (float)(a2 * a2)) / (float)((float)(a2 * *a1) + 1.0);
  v13 = result;
  for ( j = 0; j < a4; ++j )
  {
    result = a1[j] * v13;
    a1[j] = result;
  }
  for ( k = 0; k < 10; ++k )
  {
    v15 = -1.0;
    for ( m = 0; m < a4; ++m )
    {
      v5 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(a1[m]), u64);
      if ( v5 > v15 )
      {
        v15 = v5;
        v17 = m;
      }
    }
    result = a3;
    if ( a3 >= v15 )
      break;
    for ( n = 1; n < a4; ++n )
      a1[n - 1] = a1[n - 1] + (float)(a2 * a1[n]);
    v14 = 1.0 / v13;
    for ( ii = 0; ii < a4; ++ii )
      a1[ii] = a1[ii] * v14;
    sub_1401CDE70(
      (__int64)a1,
      a4,
      0.99000001
    - (float)((float)((float)((float)(0.1 * (float)k) + 0.80000001) * (float)(v15 - a3))
            / (float)(v15 * (float)(v17 + 1))));
    for ( jj = a4 - 1; jj > 0; --jj )
      a1[jj - 1] = a1[jj - 1] - (float)(a2 * a1[jj]);
    result = (float)(1.0 - (float)(a2 * a2)) / (float)((float)(a2 * *a1) + 1.0);
    v13 = result;
    for ( kk = 0; kk < a4; ++kk )
    {
      result = a1[kk] * v13;
      a1[kk] = result;
    }
  }
  return result;
}


//----- (00000001401DFE10) ----------------------------------------------------
float            sub_1401DFE10(__int64 a1, float a2, int a3)
{
  float result; // xmm0_4
  float v4; // xmm0_4
  int j; // [rsp+20h] [rbp-28h]
  float v6; // [rsp+24h] [rbp-24h]
  int i; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v8 = 0;
  for ( i = 0; i < 10; ++i )
  {
    v6 = -1.0;
    for ( j = 0; j < a3; ++j )
    {
      v4 = *(double *)SR_VEC_READ_LANES(128, sub_140244390(*(float *)(a1 + 4LL * j)), u64);
      if ( v4 > v6 )
      {
        v6 = v4;
        v8 = j;
      }
    }
    result = a2;
    if ( a2 >= v6 )
      break;
    result = 0.99000001
           - (float)((float)((float)((float)(0.1 * (float)i) + 0.80000001) * (float)(v6 - a2))
                   / (float)(v6 * (float)(v8 + 1)));
    sub_1401CDE70(a1, a3, result);
  }
  return result;
}


//----- (00000001401DFF50) ----------------------------------------------------
__int64            sub_1401DFF50(__int64 a1, float *a2, float a3, int a4)
{
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; i < a4; ++i )
    *(float *)(a1 + 4LL * (i + a4 * i)) = *(float *)(a1 + 4LL * (i + a4 * i)) + a3;
  *a2 = *a2 + a3;
  return 0;
}
