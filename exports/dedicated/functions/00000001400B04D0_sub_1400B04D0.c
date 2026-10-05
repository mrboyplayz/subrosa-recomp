/* Address: 0x1400b04d0 | Name: sub_1400B04D0 | Size: 500 bytes */
__int64 __fastcall sub_1400B04D0(int a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r13
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  int *v7; // r12
  char *v8; // r15
  __int64 result; // rax
  __int64 v10; // rbp
  int *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  int *v16; // rbx
  __int64 v17; // [rsp+60h] [rbp+18h]

  v2 = a1;
  if ( dword_1915413AC == 3 )
    return sub_140039A90(0, &byte_16D67D77C[14388 * v2 + 84 * a2], v2, dword_16D67D770[3597 * v2 + 21 * a2]);
  v3 = 14388LL * a1;
  v4 = dword_16D67D63C[v3 / 4];
  if ( (_DWORD)v4 == -1 )
    return sub_140039A90(0, &byte_16D67D77C[14388 * v2 + 84 * a2], v2, dword_16D67D770[3597 * v2 + 21 * a2]);
  v5 = 7166 * v4;
  if ( dword_190941A04[7166 * v4] <= 0 )
    return sub_140039A90(0, &byte_16D67D77C[14388 * v2 + 84 * a2], v2, dword_16D67D770[3597 * v2 + 21 * a2]);
  v6 = 84LL * a2;
  v17 = v6;
  v7 = (int *)((char *)dword_16D67D770 + v6 + v3);
  v8 = &byte_16D67D77C[v6 + v3];
  result = sub_140039A90(1, v8, v4, *v7);
  v10 = 0;
  v11 = &dword_19094849C[v5];
  do
  {
    if ( *(v11 - 1) > 0 )
    {
      v12 = *v11;
      if ( !v10 && dword_19025F0D4[1760 * v12] == 25 )
      {
        v13 = *((int *)&unk_19025F21C + 1760 * v12);
        if ( (_DWORD)v13 != -1 && *((_DWORD *)&unk_19025F21C + 1760 * v13) == (_DWORD)v12 )
          result = sub_140039A90(2, v8, v13, *(int *)((char *)dword_16D67D770 + v6 + v3));
      }
      if ( dword_19025F0D4[1760 * v12] == 26 )
      {
        v14 = 257LL * SLODWORD(qword_19025F428[880 * v12]);
        result = (unsigned int)dword_18ED9E9A0[v14];
        if ( (int)result > 0 )
        {
          v15 = (unsigned int)result;
          v16 = &dword_18ED9E9A4[v14];
          do
          {
            if ( (_DWORD)v12 != *v16 )
              result = sub_140039A90(2, v8, *v16, *v7);
            ++v16;
            --v15;
          }
          while ( v15 );
          v6 = v17;
        }
      }
    }
    ++v10;
    v11 += 10;
  }
  while ( v10 < 2 );
  return result;
}

