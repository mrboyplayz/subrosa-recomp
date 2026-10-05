/* Address: 0x1401bad00 | Name: sub_1401BAD00 | Size: 462 bytes */
__int64 __fastcall sub_1401BAD00(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int v5; // [rsp+0h] [rbp-28h]
  int v6; // [rsp+0h] [rbp-28h]
  int i; // [rsp+4h] [rbp-24h]
  int v8; // [rsp+8h] [rbp-20h]
  int v9; // [rsp+8h] [rbp-20h]
  int v10; // [rsp+Ch] [rbp-1Ch]
  int v11; // [rsp+Ch] [rbp-1Ch]
  int v12; // [rsp+14h] [rbp-14h]
  __int16 v13; // [rsp+18h] [rbp-10h]
  int v14; // [rsp+1Ch] [rbp-Ch]

  v14 = a4 >> 1;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)v14;
    if ( i >= v14 )
      break;
    v10 = *(__int16 *)(a3 + 4LL * i) << 10;
    v8 = ((-25727LL * (v10 - *a1)) >> 16) + v10 - *a1;
    v5 = v8 + *a1;
    *a1 = v8 + v10;
    v11 = *(__int16 *)(a3 + 2LL * (2 * i + 1)) << 10;
    v9 = (9872LL * (v11 - a1[1])) >> 16;
    v6 = v9 + a1[1] + v5;
    a1[1] = v9 + v11;
    if ( ((v6 >> 10) + 1) >> 1 <= 0x7FFF )
    {
      if ( ((v6 >> 10) + 1) >> 1 >= -32768 )
        v12 = ((v6 >> 10) + 1) >> 1;
      else
        LOWORD(v12) = 0x8000;
      v13 = v12;
    }
    else
    {
      v13 = 0x7FFF;
    }
    *(_WORD *)(a2 + 2LL * i) = v13;
  }
  return result;
}

