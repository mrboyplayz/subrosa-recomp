/* Address: 0x1401a3a00 | Name: sub_1401A3A00 | Size: 1303 bytes */
__int64 __fastcall sub_1401A3A00(
        __int64 a1,
        __int64 a2,
        int *a3,
        int a4,
        int *a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // [rsp+0h] [rbp-98h] BYREF
  int v13; // [rsp+20h] [rbp-78h]
  int v14; // [rsp+24h] [rbp-74h]
  int i; // [rsp+28h] [rbp-70h]
  int v16; // [rsp+2Ch] [rbp-6Ch]
  int j; // [rsp+30h] [rbp-68h]
  int v18; // [rsp+34h] [rbp-64h]
  int v19; // [rsp+38h] [rbp-60h]
  float v20; // [rsp+3Ch] [rbp-5Ch]
  unsigned int v21; // [rsp+40h] [rbp-58h]
  BOOL v22; // [rsp+44h] [rbp-54h]
  BOOL v23; // [rsp+48h] [rbp-50h]
  BOOL v24; // [rsp+4Ch] [rbp-4Ch]
  int v25; // [rsp+50h] [rbp-48h]
  __int64 v26; // [rsp+58h] [rbp-40h]
  int v27; // [rsp+60h] [rbp-38h]
  __int64 v28; // [rsp+68h] [rbp-30h]
  int v29; // [rsp+70h] [rbp-28h]
  int v30; // [rsp+74h] [rbp-24h]
  int v31; // [rsp+78h] [rbp-20h]
  __int64 v32; // [rsp+80h] [rbp-18h]

  v14 = 0;
  v21 = 0;
  v26 = *(_QWORD *)(a1 + 32);
  v13 = 0;
  v27 = *(_DWORD *)(a1 + 48) * a10;
  if ( (*(__int16 *)(v26 + 2LL * a8) - *(__int16 *)(v26 + 2LL * (a8 - 1))) * a10 > 8 )
  {
    v18 = 0;
    do
    {
      for ( i = 0; i < a8; ++i )
      {
        v25 = 0;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        v28 = a2 + 4LL * *(__int16 *)(v26 + 2LL * i) * a10 + 4LL * v27 * v18;
        v16 = (*(__int16 *)(v26 + 2LL * (i + 1)) - *(__int16 *)(v26 + 2LL * i)) * a10;
        if ( v16 > 8 )
        {
          for ( j = 0; j < v16; ++j )
          {
            v20 = (float)(*(float *)(v28 + 4LL * j) * *(float *)(v28 + 4LL * j)) * (float)v16;
            if ( v20 < 0.25 )
              ++v29;
            if ( v20 < 0.0625 )
              ++v30;
            if ( v20 < 0.015625 )
              ++v31;
          }
          if ( i > *(_DWORD *)(a1 + 8) - 4 )
            v13 += sub_14019A1A0((unsigned int)(32 * (v29 + v30)), (unsigned int)v16);
          v23 = 2 * v31 >= v16;
          v22 = 2 * v30 >= v16;
          v24 = 2 * v29 >= v16;
          v25 = v24 + v22 + v23;
          v14 += *(_DWORD *)(a11 + 4LL * i) * v25;
          v21 += *(_DWORD *)(a11 + 4LL * i);
        }
      }
      ++v18;
    }
    while ( v18 < a9 );
    if ( a7 )
    {
      if ( v13 )
        v13 = sub_14019A1A0((unsigned int)v13, (unsigned int)((a8 + 4 - *(_DWORD *)(a1 + 8)) * a9));
      *a5 = (v13 + *a5) >> 1;
      v13 = *a5;
      if ( *a6 == 2 )
      {
        v13 += 4;
      }
      else if ( !*a6 )
      {
        v13 -= 4;
      }
      if ( v13 <= 22 )
        *a6 = v13 > 18;
      else
        *a6 = 2;
    }
    v14 = (int)(*a3 + sub_14019A1A0((unsigned int)(v14 << 8), v21)) >> 1;
    *a3 = v14;
    v14 = (3 * v14 + ((3 - a4) << 7) + 66) >> 2;
    if ( v14 >= 80 )
    {
      if ( v14 >= 256 )
        v19 = v14 < 384;
      else
        v19 = 2;
    }
    else
    {
      v19 = 3;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v32);
}

