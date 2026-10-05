/* Address: 0x1401c6e20 | Name: sub_1401C6E20 | Size: 325 bytes */
__int64 __fastcall sub_1401C6E20(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  unsigned __int8 *v7; // [rsp+8h] [rbp-10h]

  v7 = (unsigned __int8 *)(*(__int16 *)(a3 + 2) * a4 / 2 + *(_QWORD *)(a3 + 40));
  for ( i = 0; ; i += 2 )
  {
    result = (unsigned int)*(__int16 *)(a3 + 2);
    if ( i >= (int)result )
      break;
    v5 = *v7++;
    *(_WORD *)(a1 + 2LL * i) = 9 * (((int)v5 >> 1) & 7);
    *(_BYTE *)(a2 + i) = *(_BYTE *)(*(_QWORD *)(a3 + 32) + (*(__int16 *)(a3 + 2) - 1) * (v5 & 1) + i);
    *(_WORD *)(a1 + 2LL * (i + 1)) = 9 * (((int)v5 >> 5) & 7);
    *(_BYTE *)(a2 + i + 1) = *(_BYTE *)(*(_QWORD *)(a3 + 32) + i + (*(__int16 *)(a3 + 2) - 1) * (((int)v5 >> 4) & 1) + 1);
  }
  return result;
}

