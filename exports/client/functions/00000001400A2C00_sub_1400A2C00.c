/* Address: 0x1400a2c00 | Name: sub_1400A2C00 | Size: 442 bytes */
__int64 __fastcall sub_1400A2C00(int a1, signed int a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  bool v4; // sf
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8

  result = dword_140404A6C[137297772];
  v3 = a2;
  v4 = (dword_140404A6C[137297772] & 0x80000000) != 0;
  if ( (int)dword_140404A6C[137297772] > 0 )
  {
    v5 = 3597LL * a1;
    do
    {
      result = (unsigned int)(result - 1);
      dword_140404A6C[21 * (int)dword_140404A6C[v5 + 71856362] + 71856367 + v5] = 2;
      dword_140404A6C[21 * (int)dword_140404A6C[v5 + 71856362] + 71856368 + v5] = a2;
      dword_140404A6C[21 * (int)dword_140404A6C[v5 + 71856362] + 71856369 + v5] = 0;
      dword_140404A6C[v5 + 71856362] = ((unsigned __int8)dword_140404A6C[v5 + 71856362] + 1) & 0x3F;
      v4 = (int)result < 0;
    }
    while ( (int)result > 0 );
    dword_140404A6C[137297772] = result;
  }
  if ( v4 )
  {
    v6 = 3597LL * a1;
    v7 = (unsigned int)-(int)result;
    dword_140404A6C[137297772] = 0;
    do
    {
      dword_140404A6C[21 * (int)dword_140404A6C[v6 + 71856362] + 71856367 + v6] = 2;
      dword_140404A6C[21 * (int)dword_140404A6C[v6 + 71856362] + 71856368 + v6] = v3;
      dword_140404A6C[21 * (int)dword_140404A6C[v6 + 71856362] + 71856369 + v6] = 1;
      result = ((unsigned __int8)dword_140404A6C[v6 + 71856362] + 1) & 0x3F;
      dword_140404A6C[v6 + 71856362] = result;
      --v7;
    }
    while ( v7 );
  }
  if ( BYTE1(dword_140404A6C[284024770]) )
  {
    if ( !BYTE1(dword_140404A6C[284024642]) )
    {
      dword_140404A6C[3597 * a1 + 71856367 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = 2;
      dword_140404A6C[3597 * a1 + 71856368 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = v3;
      dword_140404A6C[3597 * a1 + 71856369 + 21 * dword_140404A6C[3597 * a1 + 71856362]] = dword_140404A6C[1760 * v3 + 278846061]
                                                                                         + 2;
      result = ((unsigned __int8)dword_140404A6C[3597 * a1 + 71856362] + 1) & 0x3F;
      dword_140404A6C[3597 * a1 + 71856362] = result;
    }
  }
  return result;
}

