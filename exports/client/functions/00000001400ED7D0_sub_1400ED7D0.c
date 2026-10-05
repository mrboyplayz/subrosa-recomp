/* Address: 0x1400ed7d0 | Name: sub_1400ED7D0 | Size: 357 bytes */
__int64 sub_1400ED7D0()
{
  __int64 result; // rax
  int i; // r10d
  __int64 v2; // rdx
  char v3; // r8
  int v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  result = sub_1400ED940("serversteamban.txt");
  for ( dword_140404A6C[134967863] = 0; ; ++dword_140404A6C[134967863] )
  {
    for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
    {
      v2 = 0;
      if ( i < (int)dword_140404A6C[293250414] )
      {
        result = (unsigned int)i;
        do
        {
          v3 = aSteamban[v2];
          if ( !v3 )
            break;
          if ( v3 != *((_BYTE *)&dword_140404A6C[293250415] + (int)result) )
            break;
          result = (unsigned int)(result + 1);
          ++v2;
        }
        while ( (int)result < (int)dword_140404A6C[293250414] );
      }
      if ( !aSteamban[v2] )
        break;
    }
    v4 = i + 9;
    dword_140404A6C[293250413] = i + 9;
    if ( i + 9 >= (int)dword_140404A6C[293250414] )
      break;
    do
    {
      v5 = *((_BYTE *)&dword_140404A6C[293250415] + v4);
      if ( (unsigned __int8)(v5 - 48) <= 9u )
        break;
      if ( v5 == 45 )
        break;
      dword_140404A6C[293250413] = ++v4;
    }
    while ( v4 < (int)dword_140404A6C[293250414] );
    v6 = 0;
    if ( v4 < (int)dword_140404A6C[293250414] )
    {
      do
      {
        if ( v6 >= 255 )
          break;
        v7 = *((_BYTE *)&dword_140404A6C[293250415] + v4);
        if ( (unsigned __int8)(v7 - 48) > 9u && v7 != 45 )
          break;
        *((_BYTE *)&dword_140404A6C[293512559] + v6++) = v7;
        v4 = ++dword_140404A6C[293250413];
      }
      while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
    }
    *((_BYTE *)&dword_140404A6C[293512559] + v6) = 0;
    sub_14015B070(&dword_140404A6C[293512559], "%I64u", &v8);
    result = v8;
    *(_QWORD *)&dword_140404A6C[2 * dword_140404A6C[134967863] + 134967865] = v8;
  }
  return result;
}

