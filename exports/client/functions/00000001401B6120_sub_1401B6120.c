/* Address: 0x1401b6120 | Name: sub_1401B6120 | Size: 114 bytes */
_DWORD *__fastcall sub_1401B6120(_DWORD *a1)
{
  _DWORD *result; // rax

  while ( 1 )
  {
    result = a1;
    if ( a1[8] > 0x800000u )
      break;
    sub_1401B6030(a1, a1[9] >> 23);
    a1[9] = (a1[9] << 8) & 0x7FFFFFFF;
    a1[8] <<= 8;
    a1[6] += 8;
  }
  return result;
}

