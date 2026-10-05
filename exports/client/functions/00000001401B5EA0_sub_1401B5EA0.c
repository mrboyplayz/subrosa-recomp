/* Address: 0x1401b5ea0 | Name: sub_1401B5EA0 | Size: 163 bytes */
_DWORD *__fastcall sub_1401B5EA0(_DWORD *a1)
{
  _DWORD *result; // rax
  int v2; // [rsp+20h] [rbp-18h]

  while ( 1 )
  {
    result = a1;
    if ( a1[8] > 0x800000u )
      break;
    a1[6] += 8;
    a1[8] <<= 8;
    v2 = a1[11];
    a1[11] = sub_1401B5DD0((__int64)a1);
    a1[9] = ((unsigned __int8)~((a1[11] | (v2 << 8)) >> 1) + (a1[9] << 8)) & 0x7FFFFFFF;
  }
  return result;
}

