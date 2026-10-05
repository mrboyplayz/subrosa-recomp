/* Address: 0x1401885c0 | Name: sub_1401885C0 | Size: 352 bytes */
__int64 __fastcall sub_1401885C0(int *a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v6; // rdi
  signed int v7; // r10d
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx

  v3 = a2;
  result = a3;
  v6 = a3 + 15432LL * a2;
  v7 = dword_140404A6C[v6 + 358300580];
  if ( v7 < (int)dword_140404A6C[v6 + 358300584] )
  {
    v8 = (int)dword_140404A6C[v6 + 358300580];
    do
    {
      v9 = *a1;
      if ( (int)v9 < 1024 )
      {
        v10 = 6 * v9;
        v11 = 3 * (5144 * v3 + (int)dword_140404A6C[15432 * v3 + 358300588 + 3 * v8]);
        a1[2 * v10 + 1] = dword_140404A6C[15432 * v3
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * v3 + 358300588 + 3 * v8]];
        a1[2 * v10 + 2] = dword_140404A6C[v11 + 358297508];
        a1[2 * v10 + 3] = dword_140404A6C[v11 + 358297509];
        v12 = 3 * (5144 * v3 + (int)dword_140404A6C[15432 * v3 + 358300589 + 3 * v8]);
        v13 = 6LL * *a1;
        a1[2 * v13 + 4] = dword_140404A6C[15432 * v3
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * v3 + 358300589 + 3 * v8]];
        a1[2 * v13 + 5] = dword_140404A6C[v12 + 358297508];
        a1[2 * v13 + 6] = dword_140404A6C[v12 + 358297509];
        v14 = 3 * (5144 * v3 + (int)dword_140404A6C[15432 * v3 + 358300590 + 3 * v8]);
        v15 = 6LL * *a1;
        a1[2 * v15 + 7] = dword_140404A6C[15432 * v3
                                        + 358297507
                                        + 3 * (int)dword_140404A6C[15432 * v3 + 358300590 + 3 * v8]];
        a1[2 * v15 + 8] = dword_140404A6C[v14 + 358297508];
        a1[2 * v15 + 9] = dword_140404A6C[v14 + 358297509];
        v16 = 6LL * *a1;
        a1[2 * v16 + 10] = dword_140404A6C[15432 * v3 + 358303660 + 3 * v8];
        a1[2 * v16 + 11] = dword_140404A6C[15432 * v3 + 358303661 + 3 * v8];
        result = dword_140404A6C[15432 * v3 + 358303662 + 3 * v8];
        a1[2 * v16 + 12] = result;
        ++*a1;
      }
      ++v7;
      ++v8;
    }
    while ( v7 < (int)dword_140404A6C[v6 + 358300584] );
  }
  return result;
}

