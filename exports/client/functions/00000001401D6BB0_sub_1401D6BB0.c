/* Address: 0x1401d6bb0 | Name: sub_1401D6BB0 | Size: 886 bytes */
__int64 __fastcall sub_1401D6BB0(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int k; // [rsp+20h] [rbp-18h]
  int i; // [rsp+20h] [rbp-18h]
  int m; // [rsp+24h] [rbp-14h]
  int j; // [rsp+24h] [rbp-14h]

  if ( a3 >= 4 )
  {
    MEMORY[0x1401FC920](a1, &dword_1402828B8[12]);
    return MEMORY[0x1401FC920](a2, &dword_140282848[8]);
  }
  else if ( a4 <= 0 )
  {
    MEMORY[0x1401FC920](a1, &dword_1402828B8[3 * a3]);
    return MEMORY[0x1401FC920](a2, &dword_140282848[2 * a3]);
  }
  else if ( a4 >= 0x8000 )
  {
    for ( i = 0; i < 3; ++i )
    {
      *(_DWORD *)(a1 + 4LL * i) = (((__int16)a4
                                  * (__int64)(dword_1402828B8[3 * a3 + 3 + i] - dword_1402828B8[3 * a3 + i])) >> 16)
                                + dword_1402828B8[3 * a3 + 3 + i];
      result = (unsigned int)(i + 1);
    }
    for ( j = 0; j < 2; ++j )
    {
      *(_DWORD *)(a2 + 4LL * j) = (((__int16)a4
                                  * (__int64)(dword_140282848[2 * a3 + 2 + j] - dword_140282848[2 * a3 + j])) >> 16)
                                + dword_140282848[2 * a3 + 2 + j];
      result = (unsigned int)(j + 1);
    }
  }
  else
  {
    for ( k = 0; k < 3; ++k )
    {
      *(_DWORD *)(a1 + 4LL * k) = (((__int16)a4
                                  * (__int64)(dword_1402828B8[3 * a3 + 3 + k] - dword_1402828B8[3 * a3 + k])) >> 16)
                                + dword_1402828B8[3 * a3 + k];
      result = (unsigned int)(k + 1);
    }
    for ( m = 0; m < 2; ++m )
    {
      *(_DWORD *)(a2 + 4LL * m) = (((__int16)a4
                                  * (__int64)(dword_140282848[2 * a3 + 2 + m] - dword_140282848[2 * a3 + m])) >> 16)
                                + dword_140282848[2 * a3 + m];
      result = (unsigned int)(m + 1);
    }
  }
  return result;
}

