/* Address: 0x14006c400 | Name: sub_14006C400 | Size: 82 bytes */
__int64 __fastcall sub_14006C400(int a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // r8d

  dword_1403C1600[0] = a1;
  LODWORD(result) = 1;
  do
  {
    v2 = (int)result;
    v3 = result
       + 1812433253 * (dword_1403C1600[(int)result - 1] ^ ((unsigned int)dword_1403C1600[(int)result - 1] >> 30));
    result = (unsigned int)(result + 1);
    dword_1403C1600[v2] = v3;
  }
  while ( (int)result < 624 );
  dword_140147C7C = result;
  return result;
}

