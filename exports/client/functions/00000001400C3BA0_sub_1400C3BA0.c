/* Address: 0x1400c3ba0 | Name: sub_1400C3BA0 | Size: 233 bytes */
unsigned int *__fastcall sub_1400C3BA0(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int *result; // rax
  __int64 v4; // r11
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // r10d
  int v8; // r9d
  __int64 v9; // rcx

  if ( a3 == -1 )
  {
    a3 = 0;
    while ( 1 )
    {
      result = (unsigned int *)dword_140404A6C[1760 * a1 + 278845985 + ((unsigned __int64)a3 >> 5)];
      if ( !_bittest((const int *)&result, a3 & 0x1F) )
        break;
      if ( (int)++a3 >= 64 )
        return result;
    }
  }
  v4 = a1;
  v5 = 1760LL * a1;
  v6 = (__int64)(int)a3 >> 5;
  dword_140404A6C[v5 + 278845987 + (int)a3] = a2;
  result = (unsigned int *)(v6 + v5);
  v7 = 1 << (a3 & 0x1F);
  *(_DWORD *)(4 * (v6 + v5) + 1119597296 + 0x140000000LL) |= v7;
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v8 = ~__ROL4__(1, a3);
    result = &dword_140404A6C[4 * v4 + 438889304 + v4 + v6];
    v9 = dword_140404A6C[456202445];
    do
    {
      *result &= v8;
      result += 47224;
      --v9;
    }
    while ( v9 );
  }
  dword_140404A6C[4 * v4 + 450931424 + v4 + v6] &= ~v7;
  return result;
}

