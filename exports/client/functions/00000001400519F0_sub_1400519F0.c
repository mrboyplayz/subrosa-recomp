/* Address: 0x1400519f0 | Name: sub_1400519F0 | Size: 270 bytes */
void __fastcall sub_1400519F0(int a1, int a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned int v4; // r11d
  __int64 v5; // r9
  unsigned int v6; // r8d
  unsigned int v7; // eax
  int v8; // ecx

  if ( dword_140404A6C[456202453] )
  {
    v2 = dword_140404A6C[283831474];
    v3 = (__int64)(int)dword_140404A6C[308307070] << 7;
    v4 = dword_140404A6C[308307070] + 1;
    *(unsigned int *)((char *)&dword_140404A6C[297756285] + v3) = 12;
    *(unsigned int *)((char *)&dword_140404A6C[297756286] + v3) = v2;
    dword_140404A6C[308307070] = v4;
    v5 = 1116LL * a2 + 23492LL * a1;
    v6 = (*(unsigned int *)((char *)&dword_140404A6C[283831606] + v5) + 1) << 16;
    v7 = *(unsigned int *)((char *)&dword_140404A6C[283831595] + v5)
       + 16
       * (*(unsigned int *)((char *)&dword_140404A6C[283831596] + v5)
        + 16 * *(unsigned int *)((char *)&dword_140404A6C[283831604] + v5));
    *(unsigned int *)((char *)&dword_140404A6C[297756293] + v3) = *(unsigned int *)((char *)&dword_140404A6C[283831588]
                                                                                  + v5)
                                                                + 2
                                                                * (a2
                                                                 + 8
                                                                 * (a1
                                                                  + 16
                                                                  * (*(unsigned int *)((char *)&dword_140404A6C[283831591]
                                                                                     + v5)
                                                                   + (*(unsigned int *)((char *)&dword_140404A6C[283831603]
                                                                                      + v5) << 8))));
    v8 = *(unsigned int *)((char *)&dword_140404A6C[283831605] + v5);
    *(unsigned int *)((char *)&dword_140404A6C[297756294] + v3) = v7;
    *(unsigned int *)((char *)&dword_140404A6C[297756295] + v3) = v8 / 60 + v6;
    *(unsigned int *)((char *)&dword_140404A6C[297756296] + v3) = *(unsigned int *)((char *)&dword_140404A6C[283831607]
                                                                                  + v5);
    HIWORD(dword_140404A6C[308307070]) = 0;
  }
}

