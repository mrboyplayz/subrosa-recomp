/* Address: 0x14006cec0 | Name: sub_14006CEC0 | Size: 233 bytes */
__int64 __fastcall sub_14006CEC0(int a1, int a2, unsigned int a3)
{
  __int64 result; // rax
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
      result = (unsigned int)dword_19025F230[1760 * a1 + ((unsigned __int64)a3 >> 5)];
      if ( !_bittest((const int *)&result, a3 & 0x1F) )
        break;
      if ( (int)++a3 >= 64 )
        return result;
    }
  }
  v4 = a1;
  v5 = 1760LL * a1;
  v6 = (__int64)(int)a3 >> 5;
  dword_19025F238[v5 + (int)a3] = a2;
  result = v6 + v5;
  v7 = 1 << (a3 & 0x1F);
  *(_DWORD *)(4 * (v6 + v5) + 1344664112 + 0x140000000LL) |= v7;
  if ( dword_163D75B40 > 0 )
  {
    v8 = ~__ROL4__(1, a3);
    result = (__int64)&dword_160F2B70C[4 * v4 + v4 + v6];
    v9 = (unsigned int)dword_163D75B40;
    do
    {
      *(_DWORD *)result &= v8;
      result += 188896;
      --v9;
    }
    while ( v9 );
  }
  dword_163D1B52C[4 * v4 + v4 + v6] &= ~v7;
  return result;
}

