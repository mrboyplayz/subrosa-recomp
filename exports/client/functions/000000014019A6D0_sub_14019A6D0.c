/* Address: 0x14019a6d0 | Name: sub_14019A6D0 | Size: 219 bytes */
__int64 __fastcall sub_14019A6D0(_DWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-18h]
  unsigned int v5; // [rsp+24h] [rbp-14h]

  v5 = a1[4];
  v4 = a1[5];
  if ( (unsigned int)(a3 + v4) > 0x20 )
  {
    do
    {
      a1[12] |= sub_1401B5FB0(a1, (unsigned __int8)v5);
      v5 >>= 8;
      v4 -= 8;
    }
    while ( v4 >= 8 );
  }
  a1[4] = (a2 << v4) | v5;
  a1[5] = a3 + v4;
  result = (unsigned int)(a3 + a1[6]);
  a1[6] = result;
  return result;
}

