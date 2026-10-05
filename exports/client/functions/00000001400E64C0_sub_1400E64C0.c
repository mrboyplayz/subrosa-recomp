/* Address: 0x1400e64c0 | Name: sub_1400E64C0 | Size: 289 bytes */
__int64 sub_1400E64C0()
{
  __int64 result; // rax
  int i; // r9d
  __int64 v2; // rdx
  char v3; // r8
  unsigned int v4; // r9d
  int v5; // ecx
  __int64 v6; // rdx

  dword_140404A6C[135033401] = 0;
  result = sub_1400ED940("serveradmin.txt");
  while ( 1 )
  {
LABEL_2:
    for ( i = dword_140404A6C[293250413]; i < (int)dword_140404A6C[293250414]; dword_140404A6C[293250413] = ++i )
    {
      v2 = 0;
      if ( i < (int)dword_140404A6C[293250414] )
      {
        result = (unsigned int)i;
        do
        {
          v3 = aAdminphone[v2];
          if ( !v3 )
            break;
          if ( v3 != *((_BYTE *)&dword_140404A6C[293250415] + (int)result) )
            break;
          result = (unsigned int)(result + 1);
          ++v2;
        }
        while ( (int)result < (int)dword_140404A6C[293250414] );
      }
      if ( !aAdminphone[v2] )
        break;
    }
    dword_140404A6C[293250413] = i + 11;
    if ( i + 11 >= (int)dword_140404A6C[293250414] )
      return result;
    v4 = sub_140115360();
    result = (int)dword_140404A6C[135033401];
    if ( (int)dword_140404A6C[135033401] < 1024 )
    {
      dword_140404A6C[dword_140404A6C[135033401] + 135033402] = v4;
      ++dword_140404A6C[135033401];
    }
    v5 = 0;
    v6 = 0;
    if ( (int)dword_140404A6C[134050358] > 0 )
    {
      result = (__int64)&dword_140404A6C[134050362];
      while ( *(_DWORD *)result != v4 )
      {
        ++v5;
        ++v6;
        result += 112;
        if ( v5 >= (int)dword_140404A6C[134050358] )
          goto LABEL_2;
      }
      if ( v6 != -1 )
      {
        result = 112 * v6;
        dword_140404A6C[28 * v6 + 134050386] = 1;
      }
    }
  }
}

