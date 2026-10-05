/* Address: 0x1400b0cc0 | Name: sub_1400B0CC0 | Size: 224 bytes */
int *__fastcall sub_1400B0CC0(__int64 a1)
{
  int *result; // rax
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // r10
  int *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx

  result = (int *)(int)a1;
  v2 = 3597LL * (int)a1;
  v3 = dword_16D67D63C[v2];
  if ( (_DWORD)v3 != -1 )
  {
    sub_1400B2B90(a1, (unsigned int)dword_16D67D62C[v2]);
    result = dword_19094849C;
    v4 = 7;
    v5 = &dword_19094849C[7166 * v3];
    do
    {
      v6 = *(v5 - 1);
      if ( v6 > 0 )
      {
        result = v5;
        do
        {
          v7 = *result;
          if ( dword_19025F0D4[1760 * v7] == 27 )
          {
            v8 = dword_19025F340[1760 * v7];
            if ( (unsigned int)v8 <= 0x1FF )
            {
              v9 = 5210 * v8;
              if ( dword_16E6A3C60[5210 * v8] )
              {
                if ( dword_16E6A3C6C[v9] > 0 )
                  dword_16D67D5EC[v2] += dword_14AA15314[24944 * dword_16E6A3C64[v9]];
              }
            }
          }
          ++result;
          --v6;
        }
        while ( v6 );
      }
      v5 += 10;
      --v4;
    }
    while ( v4 );
  }
  return result;
}

