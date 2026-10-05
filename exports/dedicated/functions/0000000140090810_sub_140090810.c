/* Address: 0x140090810 | Name: sub_140090810 | Size: 357 bytes */
__int64 sub_140090810()
{
  __int64 result; // rax
  int i; // r10d
  __int64 v2; // rdx
  char v3; // r8
  int v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // [rsp+30h] [rbp+8h]

  result = sub_140090980("serversteamban.txt");
  for ( dword_16E14BA28 = 0; ; ++dword_16E14BA28 )
  {
    for ( i = dword_1406A6780; i < dword_1406A6784; dword_1406A6780 = ++i )
    {
      v2 = 0;
      if ( i < dword_1406A6784 )
      {
        result = (unsigned int)i;
        do
        {
          v3 = aSteamban[v2];
          if ( !v3 )
            break;
          if ( v3 != byte_1406A6788[(int)result] )
            break;
          result = (unsigned int)(result + 1);
          ++v2;
        }
        while ( (int)result < dword_1406A6784 );
      }
      if ( !aSteamban[v2] )
        break;
    }
    v4 = i + 9;
    dword_1406A6780 = i + 9;
    if ( i + 9 >= dword_1406A6784 )
      break;
    do
    {
      v5 = byte_1406A6788[v4];
      if ( (unsigned __int8)(v5 - 48) <= 9u )
        break;
      if ( v5 == 45 )
        break;
      dword_1406A6780 = ++v4;
    }
    while ( v4 < dword_1406A6784 );
    v6 = 0;
    if ( v4 < dword_1406A6784 )
    {
      do
      {
        if ( v6 >= 255 )
          break;
        v7 = byte_1406A6788[v4];
        if ( (unsigned __int8)(v7 - 48) > 9u && v7 != 45 )
          break;
        byte_1407A6788[v6++] = v7;
        v4 = ++dword_1406A6780;
      }
      while ( dword_1406A6780 < dword_1406A6784 );
    }
    byte_1407A6788[v6] = 0;
    sub_1400DBFB0(byte_1407A6788, "%I64u");
    result = v8;
    qword_16E14BA30[dword_16E14BA28] = v8;
  }
  return result;
}

