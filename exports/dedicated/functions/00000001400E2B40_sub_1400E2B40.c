/* Address: 0x1400e2b40 | Name: sub_1400E2B40 | Size: 467 bytes */
__int64 __fastcall sub_1400E2B40(int *a1, float *a2, float *a3, int a4, int a5)
{
  __int64 result; // rax
  __int64 v8; // r14
  int v9; // r10d
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
  v9 = *((_DWORD *)&unk_14BC53360 + v8 + 3079);
  if ( v9 < *((_DWORD *)&unk_14BC53360 + v8 + 3083) )
  {
    v10 = *((int *)&unk_14BC53360 + v8 + 3079);
    do
    {
      v11 = *a1;
      if ( (int)v11 < 1024 )
      {
        result = v10 + 2572LL * a4;
        if ( *((float *)&unk_14BC53360 + 6 * result + 9231) <= *a3
          && *((float *)&unk_14BC53360 + 6 * result + 9232) <= a3[1]
          && *((float *)&unk_14BC53360 + 6 * result + 9233) <= a3[2]
          && *((float *)&unk_14BC53360 + 6 * result + 9234) >= *a2
          && *((float *)&unk_14BC53360 + 6 * result + 9235) >= a2[1]
          && *((float *)&unk_14BC53360 + 6 * result + 9236) >= a2[2] )
        {
          v12 = 6 * v11;
          v13 = 3 * (5144LL * a4 + *((int *)&unk_14BC53360 + 15432 * a4 + 3 * v10 + 3087));
          a1[2 * v12 + 1] = *((_DWORD *)&unk_14BC53360
                            + 15432 * a4
                            + 3 * *((int *)&unk_14BC53360 + 15432 * a4 + 3 * v10 + 3087)
                            + 6);
          a1[2 * v12 + 2] = *((_DWORD *)&unk_14BC53360 + v13 + 7);
          a1[2 * v12 + 3] = *((_DWORD *)&unk_14BC53360 + v13 + 8);
          v14 = 3 * (5144LL * a4 + *((int *)&unk_14BC53360 + 15432 * a4 + 3 * v10 + 3088));
          v15 = 6LL * *a1;
          a1[2 * v15 + 4] = *((_DWORD *)&unk_14BC53360
                            + 15432 * a4
                            + 3 * *((int *)&unk_14BC53360 + 15432 * a4 + 3 * v10 + 3088)
                            + 6);
          a1[2 * v15 + 5] = *((_DWORD *)&unk_14BC53360 + v14 + 7);
          a1[2 * v15 + 6] = *((_DWORD *)&unk_14BC53360 + v14 + 8);
          v16 = 3 * (5144LL * a4 + *((int *)&unk_14BC53360 + 15432 * a4 + 3 * v10 + 3089));
          v17 = 6LL * *a1;
          a1[2 * v17 + 7] = *((_DWORD *)&unk_14BC53360
                            + 15432 * a4
                            + 3 * *((int *)&unk_14BC53360 + 15432 * a4 + 3 * v10 + 3089)
                            + 6);
          a1[2 * v17 + 8] = *((_DWORD *)&unk_14BC53360 + v16 + 7);
          result = *((unsigned int *)&unk_14BC53360 + v16 + 8);
          a1[2 * v17 + 9] = result;
          ++*a1;
        }
      }
      ++v9;
      ++v10;
    }
    while ( v9 < *((_DWORD *)&unk_14BC53360 + v8 + 3083) );
  }
  return result;
}

