/* Address: 0x140051dc0 | Name: sub_140051DC0 | Size: 386 bytes */
void __fastcall sub_140051DC0(int a1)
{
  unsigned int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  __int128 v5; // xmm0
  unsigned int v6; // ecx
  __int64 v7; // xmm1_8
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax

  if ( dword_140404A6C[456202453] )
  {
    v2 = dword_140404A6C[283831474];
    v3 = 3597LL * a1;
    v4 = (__int64)(int)dword_140404A6C[308307070]++ << 7;
    v5 = *(_OWORD *)&dword_140404A6C[v3 + 71856254];
    v6 = dword_140404A6C[v3 + 71856286] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v4) = 7;
    v7 = *(_QWORD *)&dword_140404A6C[v3 + 71856258];
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v4) = v2;
    v8 = dword_140404A6C[v3 + 71856292];
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v4) = a1
                                                                + ((dword_140404A6C[v3 + 71859139]
                                                                  + 2 * (dword_140404A6C[v3 + 71856253] + 2 * v6)) << 8);
    v9 = dword_140404A6C[v3 + 71859819];
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v4) = v8;
    v10 = dword_140404A6C[v3 + 71859820];
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v4) = dword_140404A6C[v3 + 71859816]
                                                                + 2
                                                                * (dword_140404A6C[v3 + 71859825]
                                                                 + 32 * (dword_140404A6C[v3 + 71859817] + 8 * v9));
    v11 = v10
        + 8
        * (dword_140404A6C[v3 + 71859818]
         + 16
         * (dword_140404A6C[v3 + 71859821]
          + 32
          * (dword_140404A6C[v3 + 71859822] + 16
                                            * (dword_140404A6C[v3 + 71859823] + 16 * dword_140404A6C[v3 + 71859826]))));
    v12 = dword_140404A6C[v3 + 71856260];
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v4) = v11;
    *(_OWORD *)((char *)&dword_140404A6C[297756301] + v4) = v5;
    *(_QWORD *)((char *)&dword_140404A6C[297756305] + v4) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756307] + v4) = v12;
    *(_WORD *)((char *)&dword_140404A6C[297756308] + v4) = dword_140404A6C[v3 + 71856261];
    *((_BYTE *)&dword_140404A6C[297756308] + v4 + 2) = BYTE2(dword_140404A6C[v3 + 71856261]);
    *((_BYTE *)&dword_140404A6C[297756308] + v4 + 3) = 0;
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

