/* Address: 0x1400447c0 | Name: sub_1400447C0 | Size: 343 bytes */
__int64 sub_1400447C0()
{
  unsigned int *v0; // rdi
  __int64 v1; // rsi
  unsigned int *v2; // rbx
  __int64 result; // rax
  signed int v4; // ecx
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1

  v0 = &dword_140404A6C[438881245];
  v1 = 256;
  v2 = &dword_140404A6C[438881247];
  do
  {
    result = sub_140115AE0(v2 - 2, 1);
    if ( *v0 )
    {
      v4 = dword_140404A6C[289317484];
      if ( (int)dword_140404A6C[289317484] < 0x10000 )
      {
        v5 = dword_140404A6C[289317483];
        result = dword_140404A6C[289317484] + 4;
        v6 = dword_140404A6C[289317485];
        if ( (int)result <= (int)dword_140404A6C[289317483] )
        {
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            v4 = dword_140404A6C[289317484] + 1;
            v6 = 0;
            ++dword_140404A6C[289317484];
            dword_140404A6C[289317485] = 0;
          }
          v7 = v4;
          v4 += 4;
          result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v7);
          *v2 = result;
          dword_140404A6C[289317484] = v4;
        }
        if ( v4 < 0x10000 )
        {
          result = (unsigned int)(v4 + 32);
          if ( (int)result <= v5 )
          {
            if ( v6 > 0 )
            {
              ++v4;
              v6 = 0;
              dword_140404A6C[289317484] = v4;
              dword_140404A6C[289317485] = 0;
            }
            result = v4;
            v4 += 32;
            v8 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + result);
            v9 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + result);
            dword_140404A6C[289317484] = v4;
            *(_OWORD *)(v2 + 1) = v8;
            *(_OWORD *)(v2 + 5) = v9;
          }
          if ( v4 < 0x10000 )
          {
            result = (unsigned int)(v4 + 4);
            if ( (int)result <= v5 )
            {
              if ( v6 > 0 )
              {
                ++v4;
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v4;
              }
              result = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v4);
              v2[17] = result;
              dword_140404A6C[289317484] = v4 + 4;
            }
          }
        }
      }
    }
    v2 += 20;
    v0 += 20;
    --v1;
  }
  while ( v1 );
  return result;
}

