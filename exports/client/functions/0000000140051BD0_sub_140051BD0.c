/* Address: 0x140051bd0 | Name: sub_140051BD0 | Size: 284 bytes */
void __fastcall sub_140051BD0(int a1, int a2)
{
  __int64 v2; // rax
  unsigned int *v3; // r8
  int v4; // eax
  signed int v5; // r9d
  unsigned int v6; // r11d
  unsigned int v7; // r10d
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1

  if ( dword_140404A6C[456202453] )
  {
    v2 = -1;
    v3 = &dword_140404A6C[5873 * a1 + 283831611 + 279 * a2];
    do
      ++v2;
    while ( *((_BYTE *)v3 + v2) );
    v4 = ((int)v2 + 1) >> 6;
    v5 = 0;
    if ( v4 >= 0 )
    {
      v6 = dword_140404A6C[283831474];
      v7 = (a2 << 8) + a1;
      do
      {
        v8 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
        HIWORD(dword_140404A6C[308307070]) = 0;
        v9 = *(_OWORD *)v3;
        *(unsigned int *)((char *)&dword_140404A6C[297756285] + v8) = 22;
        *(unsigned int *)((char *)&dword_140404A6C[297756286] + v8) = v6;
        *(unsigned int *)((char *)&dword_140404A6C[297756293] + v8) = v7;
        *(unsigned int *)((char *)&dword_140404A6C[297756294] + v8) = v5++;
        *(unsigned int *)((char *)&dword_140404A6C[297756295] + v8) = 64;
        v10 = *((_OWORD *)v3 + 1);
        v3 += 16;
        *(_OWORD *)((char *)&dword_140404A6C[297756301] + v8) = v9;
        v11 = *((_OWORD *)v3 - 2);
        *(_OWORD *)((char *)&dword_140404A6C[297756305] + v8) = v10;
        v12 = *((_OWORD *)v3 - 1);
        *(_OWORD *)((char *)&dword_140404A6C[297756309] + v8) = v11;
        *(_OWORD *)((char *)&dword_140404A6C[297756313] + v8) = v12;
      }
      while ( v5 <= v4 );
    }
  }
}

