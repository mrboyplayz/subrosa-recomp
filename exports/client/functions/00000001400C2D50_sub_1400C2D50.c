/* Address: 0x1400c2d50 | Name: sub_1400C2D50 | Size: 82 bytes */
__int64 __fastcall sub_1400C2D50(unsigned int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  unsigned int v3; // r8d

  dword_140404A6C[18600733] = a1;
  LODWORD(result) = 1;
  do
  {
    v2 = (int)result;
    v3 = result
       + 1812433253 * (dword_140404A6C[(int)result + 18600732] ^ (dword_140404A6C[(int)result + 18600732] >> 30));
    result = (unsigned int)(result + 1);
    dword_140404A6C[v2 + 18600733] = v3;
  }
  while ( (int)result < 624 );
  dword_14030186C = result;
  return result;
}

