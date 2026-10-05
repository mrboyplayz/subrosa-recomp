/* Address: 0x140020000 | Name: sub_140020000 | Size: 297 bytes */
_UNKNOWN **sub_140020000()
{
  _UNKNOWN **result; // rax
  int v1; // r13d
  unsigned int *v2; // r14
  int v3; // r12d
  _DWORD *v4; // rbx
  int v5; // r15d
  __int64 v6; // rbp
  int v7; // edi
  __int64 v8; // rsi
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v1 = 0;
  if ( (int)dword_140404A6C[210457991] > 0 )
  {
    v2 = &dword_140404A6C[210457994];
    do
    {
      v3 = 0;
      v4 = v2 + 2562;
      do
      {
        v5 = 0;
        v6 = 8;
        do
        {
          v7 = 0;
          v8 = 8;
          do
          {
            if ( *v4 )
            {
              sub_1400D4FC0(0, v7 + 8 * *(v2 - 1), v3 + 8 * *v2, v5 + 8 * v2[1], *v4);
              result = (_UNKNOWN **)sub_14003FA40(v7 + 8 * *(v2 - 1), v5 + 8 * v2[1]);
            }
            ++v7;
            ++v4;
            --v8;
          }
          while ( v8 );
          ++v5;
          --v6;
        }
        while ( v6 );
        ++v3;
      }
      while ( v3 < 8 );
      ++v1;
      v2 += 3588;
    }
    while ( v1 < (int)dword_140404A6C[210457991] );
  }
  return result;
}

