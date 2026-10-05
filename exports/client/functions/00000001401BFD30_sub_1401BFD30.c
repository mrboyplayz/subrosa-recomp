/* Address: 0x1401bfd30 | Name: sub_1401BFD30 | Size: 1512 bytes */
__int64 __fastcall sub_1401BFD30(__int16 *a1, __int64 a2, __int64 a3, _DWORD *a4, int a5, int a6)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-58h]
  int j; // [rsp+20h] [rbp-58h]
  int k; // [rsp+20h] [rbp-58h]
  int v10; // [rsp+24h] [rbp-54h]
  int v11; // [rsp+24h] [rbp-54h]
  int v12; // [rsp+24h] [rbp-54h]
  int v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+2Ch] [rbp-4Ch]
  int v16; // [rsp+2Ch] [rbp-4Ch]
  int v17; // [rsp+30h] [rbp-48h]
  int v18; // [rsp+34h] [rbp-44h]
  int v19; // [rsp+38h] [rbp-40h]
  __int16 v20; // [rsp+3Ch] [rbp-3Ch]
  int v21; // [rsp+40h] [rbp-38h]
  __int16 v22; // [rsp+44h] [rbp-34h]
  __int16 v23; // [rsp+48h] [rbp-30h]
  __int16 v24; // [rsp+4Ch] [rbp-2Ch]
  __int16 v25; // [rsp+50h] [rbp-28h]
  __int16 v26; // [rsp+54h] [rbp-24h]
  int v27; // [rsp+5Ch] [rbp-1Ch]
  int v28; // [rsp+60h] [rbp-18h]

  MEMORY[0x1401FC920](a2, a1 + 2);
  MEMORY[0x1401FC920](a3, a1 + 4);
  MEMORY[0x1401FC920](a1 + 2, a2 + 2LL * a6);
  MEMORY[0x1401FC920](a1 + 4, a3 + 2LL * a6);
  v13 = *a1;
  v15 = a1[1];
  v18 = 0x10000 / (8 * a5);
  v27 = ((((__int16)v18 * (__int16)(*a4 - *a1)) >> 15) + 1) >> 1;
  v28 = ((((__int16)v18 * (__int16)(a4[1] - a1[1])) >> 15) + 1) >> 1;
  for ( i = 0; i < 8 * a5; ++i )
  {
    v13 += v27;
    v15 += v28;
    v10 = (((__int16)v15 * (__int64)(*(__int16 *)(a2 + 2LL * (i + 1)) << 11)) >> 16)
        + (((__int16)v13
          * (__int64)((*(__int16 *)(a2 + 2LL * (i + 2))
                     + *(__int16 *)(a2 + 2LL * i)
                     + 2 * *(__int16 *)(a2 + 2LL * (i + 1))) << 9)) >> 16)
        + (*(__int16 *)(a3 + 2LL * (i + 1)) << 8);
    if ( ((v10 >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v10 >> 7) + 1) >> 1 >= -32768 )
        v19 = ((v10 >> 7) + 1) >> 1;
      else
        LOWORD(v19) = 0x8000;
      v20 = v19;
    }
    else
    {
      v20 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * (i + 1)) = v20;
  }
  v14 = *a4;
  v16 = a4[1];
  for ( j = 8 * a5; j < a6; ++j )
  {
    v11 = (((__int16)v16 * (__int64)(*(__int16 *)(a2 + 2LL * (j + 1)) << 11)) >> 16)
        + (((__int16)v14
          * (__int64)((*(__int16 *)(a2 + 2LL * (j + 2))
                     + *(__int16 *)(a2 + 2LL * j)
                     + 2 * *(__int16 *)(a2 + 2LL * (j + 1))) << 9)) >> 16)
        + (*(__int16 *)(a3 + 2LL * (j + 1)) << 8);
    if ( ((v11 >> 7) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v11 >> 7) + 1) >> 1 >= -32768 )
        v21 = ((v11 >> 7) + 1) >> 1;
      else
        LOWORD(v21) = 0x8000;
      v22 = v21;
    }
    else
    {
      v22 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * (j + 1)) = v22;
  }
  *a1 = *(_WORD *)a4;
  a1[1] = *((_WORD *)a4 + 2);
  for ( k = 0; ; ++k )
  {
    result = (unsigned int)a6;
    if ( k >= a6 )
      break;
    v12 = *(__int16 *)(a3 + 2LL * (k + 1)) + *(__int16 *)(a2 + 2LL * (k + 1));
    v17 = *(__int16 *)(a2 + 2LL * (k + 1)) - *(__int16 *)(a3 + 2LL * (k + 1));
    if ( v12 <= 0x7FFF )
    {
      if ( v12 >= -32768 )
        v23 = *(_WORD *)(a3 + 2LL * (k + 1)) + *(_WORD *)(a2 + 2LL * (k + 1));
      else
        v23 = 0x8000;
      v24 = v23;
    }
    else
    {
      v24 = 0x7FFF;
    }
    *(_WORD *)(a2 + 2LL * (k + 1)) = v24;
    if ( v17 <= 0x7FFF )
    {
      if ( v17 >= -32768 )
        v25 = v17;
      else
        v25 = 0x8000;
      v26 = v25;
    }
    else
    {
      v26 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * (k + 1)) = v26;
  }
  return result;
}

