/* Address: 0x1400d3190 | Name: sub_1400D3190 | Size: 431 bytes */
__int64 sub_1400D3190()
{
  int v0; // ebp
  unsigned int *v1; // r14
  unsigned int *v2; // r15
  __int64 v3; // r12
  __int64 v4; // r8
  int v5; // r11d
  int v6; // esi
  int v7; // ebx
  __int64 v8; // rdi
  int v9; // ecx
  int v10; // r9d
  unsigned int v11; // r8d
  __int64 v12; // rax
  __int64 result; // rax

  v0 = 1;
  v1 = &dword_140404A6C[283791480];
  v2 = &dword_140404A6C[271838022];
  v3 = 7;
  do
  {
    v4 = 0;
    dword_140404A6C[271575869] = 0;
    v5 = 0;
    v6 = 128 / v0;
    v7 = 128 / v0 + 2;
    if ( v7 > 0 )
    {
      do
      {
        ++v5;
        v8 = (unsigned int)v7;
        v9 = (v6 + 3) * v5 + 1;
        do
        {
          v10 = v9 - 1 - (v6 + 3);
          dword_140404A6C[3 * (_DWORD)v4 + 271575870] = v10;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575871] = v9 - (v6 + 3);
          v11 = v9 - 1;
          dword_140404A6C[3 * dword_140404A6C[271575869]++ + 271575872] = v9;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575870] = v10;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575871] = v9++;
          dword_140404A6C[3 * dword_140404A6C[271575869] + 271575872] = v11;
          v4 = ++dword_140404A6C[271575869];
          --v8;
        }
        while ( v8 );
      }
      while ( v5 < v7 );
    }
    v12 = (int)*v1;
    *v2 = v4;
    unk_140404170(34963, dword_140404A6C[2 * v12 + 283793814], v4);
    result = unk_140404190(34963, 12 * dword_140404A6C[271575869], &dword_140404A6C[271575870], 35044);
    v0 = __ROL4__(v0, 1);
    v2 += 24582;
    ++v1;
    --v3;
  }
  while ( v3 );
  return result;
}

