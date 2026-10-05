/* Address: 0x1401bbde0 | Name: sub_1401BBDE0 | Size: 187 bytes */
__int64 __fastcall sub_1401BBDE0(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-18h]
  int v5; // [rsp+30h] [rbp+18h]

  v5 = a3;
  for ( i = 0; i < a2 - 1; ++i )
  {
    *(_WORD *)(a1 + 2LL * i) = (((*(__int16 *)(a1 + 2LL * i) * v5) >> 15) + 1) >> 1;
    v5 += ((((a3 - 0x10000) * v5) >> 15) + 1) >> 1;
  }
  result = (unsigned int)((((*(__int16 *)(a1 + 2LL * (a2 - 1)) * v5) >> 15) + 1) >> 1);
  *(_WORD *)(a1 + 2LL * (a2 - 1)) = result;
  return result;
}

