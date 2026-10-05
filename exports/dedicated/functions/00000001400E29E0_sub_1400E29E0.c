/* Address: 0x1400e29e0 | Name: sub_1400E29E0 | Size: 352 bytes */
__int64 __fastcall sub_1400E29E0(int *a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v6; // rdi
  int v7; // r10d
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
  v7 = *((_DWORD *)&unk_14BC53360 + v6 + 3079);
  if ( v7 < *((_DWORD *)&unk_14BC53360 + v6 + 3083) )
  {
    v8 = *((int *)&unk_14BC53360 + v6 + 3079);
    do
    {
      v9 = *a1;
      if ( (int)v9 < 1024 )
      {
        v10 = 6 * v9;
        v11 = 3 * (5144 * v3 + *((int *)&unk_14BC53360 + 15432 * v3 + 3 * v8 + 3087));
        a1[2 * v10 + 1] = *((_DWORD *)&unk_14BC53360
                          + 15432 * v3
                          + 3 * *((int *)&unk_14BC53360 + 15432 * v3 + 3 * v8 + 3087)
                          + 6);
        a1[2 * v10 + 2] = *((_DWORD *)&unk_14BC53360 + v11 + 7);
        a1[2 * v10 + 3] = *((_DWORD *)&unk_14BC53360 + v11 + 8);
        v12 = 3 * (5144 * v3 + *((int *)&unk_14BC53360 + 15432 * v3 + 3 * v8 + 3088));
        v13 = 6LL * *a1;
        a1[2 * v13 + 4] = *((_DWORD *)&unk_14BC53360
                          + 15432 * v3
                          + 3 * *((int *)&unk_14BC53360 + 15432 * v3 + 3 * v8 + 3088)
                          + 6);
        a1[2 * v13 + 5] = *((_DWORD *)&unk_14BC53360 + v12 + 7);
        a1[2 * v13 + 6] = *((_DWORD *)&unk_14BC53360 + v12 + 8);
        v14 = 3 * (5144 * v3 + *((int *)&unk_14BC53360 + 15432 * v3 + 3 * v8 + 3089));
        v15 = 6LL * *a1;
        a1[2 * v15 + 7] = *((_DWORD *)&unk_14BC53360
                          + 15432 * v3
                          + 3 * *((int *)&unk_14BC53360 + 15432 * v3 + 3 * v8 + 3089)
                          + 6);
        a1[2 * v15 + 8] = *((_DWORD *)&unk_14BC53360 + v14 + 7);
        a1[2 * v15 + 9] = *((_DWORD *)&unk_14BC53360 + v14 + 8);
        v16 = 6LL * *a1;
        a1[2 * v16 + 10] = *((_DWORD *)&unk_14BC53360 + 15432 * v3 + 3 * v8 + 6159);
        a1[2 * v16 + 11] = *((_DWORD *)&unk_14BC53360 + 15432 * v3 + 3 * v8 + 6160);
        result = *((unsigned int *)&unk_14BC53360 + 15432 * v3 + 3 * v8 + 6161);
        a1[2 * v16 + 12] = result;
        ++*a1;
      }
      ++v7;
      ++v8;
    }
    while ( v7 < *((_DWORD *)&unk_14BC53360 + v6 + 3083) );
  }
  return result;
}

