/* Address: 0x140027b40 | Name: sub_140027B40 | Size: 211 bytes */
__int64 sub_140027B40()
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

  v0 = &dword_140404A6C[468674618];
  MEMORY[0x1401FCD30](&dword_140404A6C[468674618], 0, 4096);
  result = dword_140404A6C[468658233];
  v2 = 0;
  if ( (int)dword_140404A6C[468658233] > 0 )
  {
    v3 = dword_140404A6C[19928869];
    do
    {
      v4 = 0;
      if ( v3 > 0 )
      {
        v5 = &dword_140404A6C[20074597];
        do
        {
          v6 = &dword_140404A6C[16 * (__int64)v2 + 468658234];
          do
          {
            v7 = *((unsigned __int8 *)v6 + (char *)v5 - (char *)&dword_140404A6C[16 * (__int64)v2 + 468658234]);
            v8 = *(unsigned __int8 *)v6 - v7;
            if ( v8 )
              break;
            v6 = (unsigned int *)((char *)v6 + 1);
          }
          while ( v7 );
          if ( !v8 )
            *v0 = v4;
          ++v4;
          v5 += 58;
        }
        while ( v4 < v3 );
        result = dword_140404A6C[468658233];
      }
      ++v2;
      ++v0;
    }
    while ( v2 < (int)result );
  }
  return result;
}

