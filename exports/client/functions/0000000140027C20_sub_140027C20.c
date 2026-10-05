/* Address: 0x140027c20 | Name: sub_140027C20 | Size: 211 bytes */
__int64 sub_140027C20()
{
  unsigned int *v0; // rbx
  __int64 result; // rax
  int v2; // edi
  int v3; // r11d
  signed int v4; // r9d
  unsigned int *v5; // r10
  unsigned int *v6; // rax
  int v7; // ecx
  int v8; // edx

  v0 = &dword_140404A6C[468657209];
  MEMORY[0x1401FCD30](&dword_140404A6C[468657209], 0, 1024);
  result = dword_140404A6C[468653112];
  v2 = 0;
  if ( (int)dword_140404A6C[468653112] > 0 )
  {
    v3 = dword_140404A6C[421784253];
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &dword_140404A6C[421784739];
        do
        {
          v6 = &dword_140404A6C[16 * (__int64)v2 + 468653113];
          do
          {
            v7 = *((unsigned __int8 *)v6 + (char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468653113]);
            v8 = *(unsigned __int8 *)v6 - v7;
            if ( v8 )
              break;
            v6 = (unsigned int *)((char *)v6 + 1);
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 46;
        }
        while ( v4 < v3 );
        result = dword_140404A6C[468653112];
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

