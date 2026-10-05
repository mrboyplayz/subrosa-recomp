/* Address: 0x1401c64a0 | Name: sub_1401C64A0 | Size: 2423 bytes */
__int64 __fastcall sub_1401C64A0(
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
        MEMORY[0x1401FC920](&v35[8 * v20 + 8], &v35[8 * v19 + 8]);
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
  return MEMORY[0x1401F8B20]((unsigned __int64)&v11 ^ v36);
}

