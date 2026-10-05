/* Address: 0x1400c9b60 | Name: sub_1400C9B60 | Size: 365 bytes */
void __fastcall sub_1400C9B60(signed int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int v6; // eax
  int v7; // esi
  int v8; // r8d
  __int64 v9; // rdi
  __int64 v10; // rax

  v1 = a1;
  v2 = 1760LL * a1;
  v3 = dword_140404A6C[v2 + 278847324];
  if ( !v3 )
  {
    sub_1400C3ED0(a1);
    v3 = dword_140404A6C[v2 + 278847324];
  }
  v4 = v3;
  if ( v3 == 1 )
  {
    v5 = dword_140404A6C[v2 + 278847584];
    if ( v5 > 0 )
    {
      v6 = v5 - 1;
      dword_140404A6C[v2 + 278847584] = v6;
      if ( !v6 )
      {
        v7 = 0;
        v8 = rand() % 26;
        v9 = 1760 * v1;
        do
        {
          v10 = v9 + (int)dword_140404A6C[v9 + 278847455 + v8];
          if ( dword_140404A6C[v10 + 278847519] && dword_140404A6C[v10 + 278847551] == -1 )
            break;
          ++v7;
          v8 = rand() % 26;
        }
        while ( v7 < 1000 );
        dword_140404A6C[v9 + 278847551 + (int)dword_140404A6C[v9 + 278847455 + v8]] = v8;
        sub_1400C5750(v1);
        LOBYTE(dword_140404A6C[v2 + 278846130]) = 0;
        sub_140050F90(v1, 1);
        v4 = dword_140404A6C[v2 + 278847324];
      }
    }
  }
  if ( v4 == 2 )
  {
    sub_1400C8500(v1);
    v4 = dword_140404A6C[v2 + 278847324];
  }
  if ( v4 == 3 )
    sub_1400C9820(v1);
}

