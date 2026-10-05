/* Address: 0x14008a7b0 | Name: sub_14008A7B0 | Size: 289 bytes */
__int64 sub_14008A7B0()
{
  __int64 result; // rax
  int i; // r9d
  __int64 v2; // rdx
  char v3; // r8
  int v4; // r9d
  int v5; // ecx
  __int64 v6; // rdx

  dword_16E18BA30 = 0;
  result = sub_140090980("serveradmin.txt");
  while ( 1 )
  {
LABEL_2:
    for ( i = dword_1406A6780; i < dword_1406A6784; dword_1406A6780 = ++i )
    {
      v2 = 0;
      if ( i < dword_1406A6784 )
      {
        result = (unsigned int)i;
        do
        {
          v3 = aAdminphone[v2];
          if ( !v3 )
            break;
          if ( v3 != byte_1406A6788[(int)result] )
            break;
          result = (unsigned int)(result + 1);
          ++v2;
        }
        while ( (int)result < dword_1406A6784 );
      }
      if ( !aAdminphone[v2] )
        break;
    }
    dword_1406A6780 = i + 11;
    if ( i + 11 >= dword_1406A6784 )
      return result;
    v4 = sub_1400AF380();
    result = dword_16E18BA30;
    if ( dword_16E18BA30 < 1024 )
      dword_16E18BA34[dword_16E18BA30++] = v4;
    v5 = 0;
    v6 = 0;
    if ( dword_16DDCBA24 > 0 )
    {
      result = (__int64)&unk_16DDCBA34;
      while ( *(_DWORD *)result != v4 )
      {
        ++v5;
        ++v6;
        result += 112;
        if ( v5 >= dword_16DDCBA24 )
          goto LABEL_2;
      }
      if ( v6 != -1 )
      {
        result = 112 * v6;
        dword_16DDCBA94[28 * v6] = 1;
      }
    }
  }
}

