/* Address: 0x1401bb2c0 | Name: sub_1401BB2C0 | Size: 706 bytes */
__int64 __fastcall sub_1401BB2C0(__int64 a1, int *a2, _DWORD *a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  __int64 result; // rax
  int v7; // [rsp+0h] [rbp-38h]
  int i; // [rsp+4h] [rbp-34h]
  __int16 v9; // [rsp+8h] [rbp-30h]
  int v10; // [rsp+Ch] [rbp-2Ch]
  __int16 v11; // [rsp+10h] [rbp-28h]
  int v12; // [rsp+14h] [rbp-24h]
  int v13; // [rsp+18h] [rbp-20h]
  int v14; // [rsp+1Ch] [rbp-1Ch]
  int v15; // [rsp+20h] [rbp-18h]

  v12 = -*a3 & 0x3FFF;
  v13 = -*a3 >> 14;
  v14 = -a3[1] & 0x3FFF;
  v15 = -a3[1] >> 14;
  for ( i = 0; ; ++i )
  {
    result = a6;
    if ( i >= (int)a6 )
      break;
    v9 = *(_WORD *)(a1 + 2LL * i);
    v7 = 4 * (((v9 * (__int64)*a2) >> 16) + *a4);
    *a4 = a4[1] + ((((int)(((__int16)v12 * (__int64)v7) >> 16) >> 13) + 1) >> 1);
    *a4 += ((__int16)v13 * (__int64)v7) >> 16;
    *a4 += (v9 * (__int64)a2[1]) >> 16;
    a4[1] = (((int)(((__int16)v14 * (__int64)v7) >> 16) >> 13) + 1) >> 1;
    a4[1] += ((__int16)v15 * (__int64)v7) >> 16;
    a4[1] += (v9 * (__int64)a2[2]) >> 16;
    if ( (v7 + 0x3FFF) >> 14 <= 0x7FFF )
    {
      if ( (v7 + 0x3FFF) >> 14 >= -32768 )
        v10 = (v7 + 0x3FFF) >> 14;
      else
        LOWORD(v10) = 0x8000;
      v11 = v10;
    }
    else
    {
      v11 = 0x7FFF;
    }
    *(_WORD *)(a5 + 2LL * i) = v11;
  }
  return result;
}

