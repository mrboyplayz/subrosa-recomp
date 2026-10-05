/* Address: 0x1401bc040 | Name: sub_1401BC040 | Size: 588 bytes */
__int64 __fastcall sub_1401BC040(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-38h]
  int v7; // [rsp+4h] [rbp-34h]
  int v8; // [rsp+8h] [rbp-30h]
  int v9; // [rsp+Ch] [rbp-2Ch]
  int v10; // [rsp+Ch] [rbp-2Ch]
  int v11; // [rsp+10h] [rbp-28h]
  int v12; // [rsp+10h] [rbp-28h]
  int v13; // [rsp+18h] [rbp-20h]
  __int16 v14; // [rsp+1Ch] [rbp-1Ch]
  int v15; // [rsp+20h] [rbp-18h]
  __int16 v16; // [rsp+24h] [rbp-14h]
  int v17; // [rsp+28h] [rbp-10h]

  v17 = a5 >> 1;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)v17;
    if ( i >= v17 )
      break;
    v11 = *(__int16 *)(a1 + 4LL * i) << 10;
    v9 = ((word_140301FEC * (__int64)(v11 - *a2)) >> 16) + v11 - *a2;
    v7 = v9 + *a2;
    *a2 = v9 + v11;
    v12 = *(__int16 *)(a1 + 2LL * (2 * i + 1)) << 10;
    v10 = (word_140301FE8 * (__int64)(v12 - a2[1])) >> 16;
    v8 = v10 + a2[1];
    a2[1] = v10 + v12;
    if ( (((v7 + v8) >> 10) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((v7 + v8) >> 10) + 1) >> 1 >= -32768 )
        v13 = (((v7 + v8) >> 10) + 1) >> 1;
      else
        LOWORD(v13) = 0x8000;
      v14 = v13;
    }
    else
    {
      v14 = 0x7FFF;
    }
    *(_WORD *)(a3 + 2LL * i) = v14;
    if ( (((v8 - v7) >> 10) + 1) >> 1 <= 0x7FFF )
    {
      if ( (((v8 - v7) >> 10) + 1) >> 1 >= -32768 )
        v15 = (((v8 - v7) >> 10) + 1) >> 1;
      else
        LOWORD(v15) = 0x8000;
      v16 = v15;
    }
    else
    {
      v16 = 0x7FFF;
    }
    *(_WORD *)(a4 + 2LL * i) = v16;
  }
  return result;
}

