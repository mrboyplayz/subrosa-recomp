/* Address: 0x1400c6980 | Name: sub_1400C6980 | Size: 289 bytes */
__int64 __fastcall sub_1400C6980(signed int a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 result; // rax
  int v5; // edi
  int v6; // r8d
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = 1760LL * a1;
  v3 = a1;
  result = dword_140404A6C[v2 + 278847584];
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    dword_140404A6C[v2 + 278847584] = result;
    if ( !(_DWORD)result )
    {
      v5 = 0;
      v6 = rand() % 26;
      v7 = 1760 * v3;
      do
      {
        v8 = v7 + (int)dword_140404A6C[v7 + 278847455 + v6];
        if ( dword_140404A6C[v8 + 278847519] && dword_140404A6C[v8 + 278847551] == -1 )
          break;
        ++v5;
        v6 = rand() % 26;
      }
      while ( v5 < 1000 );
      dword_140404A6C[v7 + 278847551 + (int)dword_140404A6C[v7 + 278847455 + v6]] = v6;
      sub_1400C5750(a1);
      LOBYTE(dword_140404A6C[v2 + 278846130]) = 0;
      return sub_140050F90(a1, 1);
    }
  }
  return result;
}

