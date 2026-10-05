/* Address: 0x1401d6f30 | Name: sub_1401D6F30 | Size: 202 bytes */
__int64 __fastcall sub_1401D6F30(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5)
{
  __int64 result; // rax
  __int16 v6; // [rsp+0h] [rbp-18h]
  int v7; // [rsp+0h] [rbp-18h]
  int v8; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  int v10; // [rsp+8h] [rbp-10h]

  v6 = 0;
  result = (unsigned int)(a5 - 1);
  for ( i = a5 - 1; i >= 0; --i )
  {
    v10 = (*(unsigned __int8 *)(a3 + i) * v6) >> 8;
    v7 = *(char *)(a2 + i) << 10;
    if ( v7 <= 0 )
      v8 = v7 + (v7 < 0 ? 0x66 : 0);
    else
      v8 = v7 - 102;
    v6 = ((unsigned int)(a4 * v8) >> 16) + v10;
    *(_WORD *)(a1 + 2LL * i) = v6;
    result = (unsigned int)(i - 1);
  }
  return result;
}

