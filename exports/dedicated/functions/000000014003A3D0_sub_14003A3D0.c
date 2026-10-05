/* Address: 0x14003a3d0 | Name: sub_14003A3D0 | Size: 386 bytes */
void __fastcall sub_14003A3D0(int a1)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  __int128 v5; // xmm0
  int v6; // ecx
  __int64 v7; // xmm1_8
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax

  if ( dword_163D75B60 )
  {
    v2 = dword_191541414;
    v3 = 3597LL * a1;
    v4 = (__int64)dword_196199564++ << 7;
    v5 = *(_OWORD *)&byte_16D67D5A4[v3 * 4];
    v6 = dword_16D67D624[v3] + 1;
    *(_DWORD *)((char *)&unk_195999560 + v4) = 7;
    v7 = *(_QWORD *)&byte_16D67D5A4[v3 * 4 + 16];
    *(_DWORD *)((char *)&unk_195999564 + v4) = v2;
    v8 = dword_16D67D63C[v3];
    *(int *)((char *)&dword_195999580 + v4) = a1
                                            + ((*(_DWORD *)((char *)&unk_16D6802B8 + v3 * 4)
                                              + 2 * (dword_16D67D5A0[v3] + 2 * v6)) << 8);
    v9 = dword_16D680D58[v3];
    *(int *)((char *)&dword_195999584 + v4) = v8;
    v10 = dword_16D680D5C[v3];
    *(int *)((char *)&dword_195999588 + v4) = dword_16D680D4C[v3]
                                            + 2 * (dword_16D680D70[v3] + 32 * (dword_16D680D50[v3] + 8 * v9));
    v11 = v10
        + 8
        * (dword_16D680D54[v3]
         + 16
         * (dword_16D680D60[v3]
          + 32
          * (dword_16D680D64[v3] + 16 * (*(_DWORD *)&algn_16D680D68[v3 * 4] + 16 * *(_DWORD *)&algn_16D680D74[v3 * 4]))));
    v12 = *(_DWORD *)&byte_16D67D5A4[v3 * 4 + 24];
    *(_DWORD *)((char *)&unk_19599958C + v4) = v11;
    *(_OWORD *)((char *)&unk_1959995A0 + v4) = v5;
    *(_QWORD *)((char *)&unk_1959995B0 + v4) = v7;
    *(_DWORD *)((char *)&unk_1959995B8 + v4) = v12;
    *(_WORD *)((char *)&unk_1959995BC + v4) = *(_WORD *)&byte_16D67D5A4[v3 * 4 + 28];
    byte_1959995BE[v4] = byte_16D67D5A4[v3 * 4 + 30];
    byte_1959995BE[v4 + 1] = 0;
    HIWORD(dword_196199564) = 0;
  }
}

