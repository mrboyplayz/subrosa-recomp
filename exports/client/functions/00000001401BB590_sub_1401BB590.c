/* Address: 0x1401bb590 | Name: sub_1401BB590 | Size: 1440 bytes */
__int64 __fastcall sub_1401BB590(__int64 a1, int *a2, _DWORD *a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-38h]
  int v8; // [rsp+8h] [rbp-30h]
  int v9; // [rsp+Ch] [rbp-2Ch]
  int v10; // [rsp+10h] [rbp-28h]
  int v11; // [rsp+14h] [rbp-24h]
  int v12; // [rsp+18h] [rbp-20h]
  int v13; // [rsp+1Ch] [rbp-1Ch]
  int v14; // [rsp+20h] [rbp-18h]
  __int16 v15; // [rsp+24h] [rbp-14h]
  int v16; // [rsp+28h] [rbp-10h]
  __int16 v17; // [rsp+2Ch] [rbp-Ch]

  v10 = -*a3 & 0x3FFF;
  v11 = -*a3 >> 14;
  v12 = -a3[1] & 0x3FFF;
  v13 = -a3[1] >> 14;
  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    v8 = 4 * (((*(__int16 *)(a1 + 4LL * i) * (__int64)*a2) >> 16) + *a4);
    v9 = 4 * (((*(__int16 *)(a1 + 2LL * (2 * i + 1)) * (__int64)*a2) >> 16) + a4[2]);
    *a4 = a4[1] + ((((int)(((__int16)v10 * (__int64)v8) >> 16) >> 13) + 1) >> 1);
    a4[2] = a4[3] + ((((int)(((__int16)v10 * (__int64)v9) >> 16) >> 13) + 1) >> 1);
    *a4 += ((__int16)v11 * (__int64)v8) >> 16;
    a4[2] += ((__int16)v11 * (__int64)v9) >> 16;
    *a4 += (*(__int16 *)(a1 + 4LL * i) * (__int64)a2[1]) >> 16;
    a4[2] += (*(__int16 *)(a1 + 2LL * (2 * i + 1)) * (__int64)a2[1]) >> 16;
    a4[1] = (((int)(((__int16)v12 * (__int64)v8) >> 16) >> 13) + 1) >> 1;
    a4[3] = (((int)(((__int16)v12 * (__int64)v9) >> 16) >> 13) + 1) >> 1;
    a4[1] += ((__int16)v13 * (__int64)v8) >> 16;
    a4[3] += ((__int16)v13 * (__int64)v9) >> 16;
    a4[1] += (*(__int16 *)(a1 + 4LL * i) * (__int64)a2[2]) >> 16;
    a4[3] += (*(__int16 *)(a1 + 2LL * (2 * i + 1)) * (__int64)a2[2]) >> 16;
    if ( (v8 + 0x3FFF) >> 14 <= 0x7FFF )
    {
      if ( (v8 + 0x3FFF) >> 14 >= -32768 )
        v14 = (v8 + 0x3FFF) >> 14;
      else
        LOWORD(v14) = 0x8000;
      v15 = v14;
    }
    else
    {
      v15 = 0x7FFF;
    }
    *(_WORD *)(a5 + 4LL * i) = v15;
    if ( (v9 + 0x3FFF) >> 14 <= 0x7FFF )
    {
      if ( (v9 + 0x3FFF) >> 14 >= -32768 )
        v16 = (v9 + 0x3FFF) >> 14;
      else
        LOWORD(v16) = 0x8000;
      v17 = v16;
    }
    else
    {
      v17 = 0x7FFF;
    }
    *(_WORD *)(a5 + 2LL * (2 * i + 1)) = v17;
  }
  return result;
}

