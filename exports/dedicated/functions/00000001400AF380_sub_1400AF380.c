/* Address: 0x1400af380 | Name: sub_1400AF380 | Size: 170 bytes */
__int64 sub_1400AF380()
{
  int i; // ecx
  char v1; // dl
  int v2; // r9d
  __int64 v3; // rdx
  char v4; // cl

  for ( i = dword_1406A6780; i < dword_1406A6784; dword_1406A6780 = ++i )
  {
    v1 = *((_BYTE *)&dword_1406A6780 + i + 8);
    if ( (unsigned __int8)(v1 - 48) <= 9u )
      break;
    if ( v1 == 45 )
      break;
  }
  v2 = 0;
  if ( i < dword_1406A6784 )
  {
    v3 = 0;
    do
    {
      if ( v3 >= 255 )
        break;
      v4 = *((_BYTE *)&dword_1406A6780 + i + 8);
      if ( (unsigned __int8)(v4 - 48) > 9u && v4 != 45 )
        break;
      *((_BYTE *)&dword_1406A6780 + v3 + 1048584) = v4;
      ++v2;
      ++v3;
      i = ++dword_1406A6780;
    }
    while ( dword_1406A6780 < dword_1406A6784 );
  }
  *((_BYTE *)&dword_1406A6780 + v2 + 1048584) = 0;
  return sub_1400512C0((__int64)byte_1407A6788);
}

