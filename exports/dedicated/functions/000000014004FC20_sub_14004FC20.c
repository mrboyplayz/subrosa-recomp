/* Address: 0x14004fc20 | Name: sub_14004FC20 | Size: 195 bytes */
float sub_14004FC20()
{
  int i; // ecx
  char v1; // dl
  int v2; // r9d
  __int64 v3; // rdx
  char v4; // cl
  float v6; // [rsp+30h] [rbp+8h]

  for ( i = dword_1406A6780; i < dword_1406A6784; dword_1406A6780 = ++i )
  {
    v1 = *((_BYTE *)&dword_1406A6780 + i + 8);
    if ( v1 != 47 && v1 > 44 && v1 < 58 )
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
      if ( (unsigned __int8)(v4 - 48) > 9u && (unsigned __int8)(v4 - 45) > 1u )
        break;
      *((_BYTE *)&dword_1406A6780 + v3 + 1048584) = v4;
      ++v2;
      ++v3;
      i = ++dword_1406A6780;
    }
    while ( dword_1406A6780 < dword_1406A6784 );
  }
  *((_BYTE *)&dword_1406A6780 + v2 + 1048584) = 0;
  sub_1400DBFB0(byte_1407A6788, "%f");
  return v6;
}

