/* Address: 0x1400ca740 | Name: sub_1400CA740 | Size: 124 bytes */
__int64 __fastcall sub_1400CA740(int a1, int a2)
{
  __int64 v2; // r10
  signed int v3; // r8d
  __int64 result; // rax
  int v5; // r9d
  unsigned int v6; // edx
  char v7; // cl
  int v8; // eax

  v2 = 1760LL * a1;
  v3 = a2;
  result = dword_140404A6C[v2 + 278846062];
  if ( (_DWORD)result )
  {
    if ( (int)result > 0 )
    {
      result = (unsigned int)(result - 1);
      dword_140404A6C[v2 + 278846062] = result;
      if ( a2 <= (int)result )
      {
        LODWORD(result) = dword_140404A6C[v2 + 278846063];
        v5 = 3 * a2;
        do
        {
          ++v3;
          v6 = result & ~(7 << v5);
          v7 = v5;
          v8 = (v6 >> (v5 + 3)) & 7;
          v5 += 3;
          result = v6 | (v8 << v7);
          dword_140404A6C[v2 + 278846063] = result;
        }
        while ( v3 <= (int)dword_140404A6C[v2 + 278846062] );
      }
    }
  }
  else
  {
    dword_140404A6C[v2 + 278845900] = 0;
  }
  return result;
}

