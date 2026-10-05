/* Address: 0x1401164b0 | Name: sub_1401164B0 | Size: 500 bytes */
__int64 __fastcall sub_1401164B0(int a1, int a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r13
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int *v7; // r12
  char *v8; // r15
  __int64 result; // rax
  __int64 v10; // rbp
  unsigned int *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int *v16; // rbx
  __int64 v17; // [rsp+60h] [rbp+18h]

  v2 = a1;
  if ( dword_140404A6C[283831448] == 3 )
    return sub_140051480(
             0,
             (__int64)&dword_140404A6C[3597 * v2 + 71856372 + 21 * a2],
             v2,
             dword_140404A6C[3597 * v2 + 71856369 + 21 * a2]);
  v3 = 14388LL * a1;
  v4 = (int)dword_140404A6C[v3 / 4 + 71856292];
  if ( (_DWORD)v4 == -1 )
    return sub_140051480(
             0,
             (__int64)&dword_140404A6C[3597 * v2 + 71856372 + 21 * a2],
             v2,
             dword_140404A6C[3597 * v2 + 71856369 + 21 * a2]);
  v5 = 7166 * v4;
  if ( (int)dword_140404A6C[7166 * v4 + 280651318] <= 0 )
    return sub_140051480(
             0,
             (__int64)&dword_140404A6C[3597 * v2 + 71856372 + 21 * a2],
             v2,
             dword_140404A6C[3597 * v2 + 71856369 + 21 * a2]);
  v6 = 84LL * a2;
  v17 = v6;
  v7 = (unsigned int *)((char *)&dword_140404A6C[71856369] + v6 + v3);
  v8 = (char *)&dword_140404A6C[71856372] + v6 + v3;
  result = sub_140051480(1u, (__int64)v8, v4, *v7);
  v10 = 0;
  v11 = &dword_140404A6C[v5 + 280658140];
  do
  {
    if ( (int)*(v11 - 1) > 0 )
    {
      v12 = (int)*v11;
      if ( !v10 && dword_140404A6C[1760 * v12 + 278845898] == 25 )
      {
        v13 = (int)dword_140404A6C[1760 * v12 + 278845980];
        if ( (_DWORD)v13 != -1 && dword_140404A6C[1760 * v13 + 278845980] == (_DWORD)v12 )
          result = sub_140051480(2u, (__int64)v8, v13, *(unsigned int *)((char *)&dword_140404A6C[71856369] + v6 + v3));
      }
      if ( dword_140404A6C[1760 * v12 + 278845898] == 26 )
      {
        v14 = 257LL * (int)dword_140404A6C[1760 * v12 + 278846111];
        result = dword_140404A6C[v14 + 273270157];
        if ( (int)result > 0 )
        {
          v15 = (unsigned int)result;
          v16 = &dword_140404A6C[v14 + 273270158];
          do
          {
            if ( (_DWORD)v12 != *v16 )
              result = sub_140051480(2u, (__int64)v8, *v16, *v7);
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

