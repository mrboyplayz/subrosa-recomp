/* Address: 0x1401d1210 | Name: sub_1401D1210 | Size: 187 bytes */
__int64 __fastcall sub_1401D1210(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+20h] [rbp-18h]
  __int16 v5; // [rsp+24h] [rbp-14h]
  __int16 v6; // [rsp+28h] [rbp-10h]

  result = (unsigned int)(a3 - 1);
  for ( i = a3 - 1; i >= 0; --i )
  {
    if ( (int)sub_1401AD3B0() <= 0x7FFF )
    {
      if ( (int)sub_1401AD3B0() >= -32768 )
        v5 = sub_1401AD3B0();
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

