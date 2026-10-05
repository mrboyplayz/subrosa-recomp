/* Address: 0x140188720 | Name: sub_140188720 | Size: 467 bytes */
__int64 __fastcall sub_140188720(int *a1, float *a2, float *a3, int a4, int a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  signed int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx

  result = a5;
  v8 = a5 + 15432LL * a4;
  v9 = dword_140404A6C[v8 + 358300580];
  if ( v9 < (int)dword_140404A6C[v8 + 358300584] )
  {
    v10 = (int)dword_140404A6C[v8 + 358300580];
    do
    {
      v11 = *a1;
      if ( (int)v11 < 1024 )
      {
        result = v10 + 2572LL * a4;
        if ( *(float *)&dword_140404A6C[6 * result + 358306732] <= *a3
          && *(float *)&dword_140404A6C[6 * result + 358306733] <= a3[1]
          && *(float *)&dword_140404A6C[6 * result + 358306734] <= a3[2]
          && *(float *)&dword_140404A6C[6 * result + 358306735] >= *a2
          && *(float *)&dword_140404A6C[6 * result + 358306736] >= a2[1]
          && *(float *)&dword_140404A6C[6 * result + 358306737] >= a2[2] )
        {
          v12 = 6 * v11;
          v13 = 3 * (5144LL * a4 + (int)dword_140404A6C[15432 * a4 + 358300588 + 3 * v10]);
          a1[2 * v12 + 1] = dword_140404A6C[15432 * a4
                                          + 358297507
                                          + 3 * dword_140404A6C[15432 * a4 + 358300588 + 3 * v10]];
          a1[2 * v12 + 2] = dword_140404A6C[v13 + 358297508];
          a1[2 * v12 + 3] = dword_140404A6C[v13 + 358297509];
          v14 = 3 * (5144LL * a4 + (int)dword_140404A6C[15432 * a4 + 358300589 + 3 * v10]);
          v15 = 6LL * *a1;
          a1[2 * v15 + 4] = dword_140404A6C[15432 * a4
                                          + 358297507
                                          + 3 * dword_140404A6C[15432 * a4 + 358300589 + 3 * v10]];
          a1[2 * v15 + 5] = dword_140404A6C[v14 + 358297508];
          a1[2 * v15 + 6] = dword_140404A6C[v14 + 358297509];
          v16 = 3 * (5144LL * a4 + (int)dword_140404A6C[15432 * a4 + 358300590 + 3 * v10]);
          v17 = 6LL * *a1;
          a1[2 * v17 + 7] = dword_140404A6C[15432 * a4
                                          + 358297507
                                          + 3 * dword_140404A6C[15432 * a4 + 358300590 + 3 * v10]];
          a1[2 * v17 + 8] = dword_140404A6C[v16 + 358297508];
          result = dword_140404A6C[v16 + 358297509];
          a1[2 * v17 + 9] = result;
          ++*a1;
        }
      }
      ++v9;
      ++v10;
    }
    while ( v9 < (int)dword_140404A6C[v8 + 358300584] );
  }
  return result;
}

