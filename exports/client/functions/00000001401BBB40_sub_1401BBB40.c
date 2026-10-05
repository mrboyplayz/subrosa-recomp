/* Address: 0x1401bbb40 | Name: sub_1401BBB40 | Size: 661 bytes */
__int64 __fastcall sub_1401BBB40(__int64 a1, __int64 a2, __int16 *a3, int a4, int a5)
{
  int v6; // [rsp+20h] [rbp-28h]
  int j; // [rsp+24h] [rbp-24h]
  int i; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  int v10; // [rsp+30h] [rbp-18h]
  __int16 v11; // [rsp+34h] [rbp-14h]
  __int16 *v12; // [rsp+38h] [rbp-10h]

  for ( i = a5; i < a4; ++i )
  {
    v12 = (__int16 *)(a2 + 2LL * (i - 1));
    v6 = a3[5] * *(v12 - 5)
       + a3[4] * *(v12 - 4)
       + a3[3] * *(v12 - 3)
       + a3[2] * *(v12 - 2)
       + a3[1] * *(v12 - 1)
       + *a3 * *v12;
    for ( j = 6; j < a5; j += 2 )
      v6 += a3[j + 1] * v12[-j - 1] + a3[j] * v12[-j];
    v9 = ((((v12[1] << 12) - v6) >> 11) + 1) >> 1;
    if ( v9 <= 0x7FFF )
    {
      if ( v9 >= -32768 )
        v10 = ((((v12[1] << 12) - v6) >> 11) + 1) >> 1;
      else
        LOWORD(v10) = 0x8000;
      v11 = v10;
    }
    else
    {
      v11 = 0x7FFF;
    }
    *(_WORD *)(a1 + 2LL * i) = v11;
  }
  return MEMORY[0x1401FCD30](a1, 0, 2LL * a5);
}

