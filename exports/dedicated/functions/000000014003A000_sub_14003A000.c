/* Address: 0x14003a000 | Name: sub_14003A000 | Size: 270 bytes */
void __fastcall sub_14003A000(int a1, int a2)
{
  int v2; // eax
  __int64 v3; // r10
  int v4; // r11d
  __int64 v5; // r9
  int v6; // r8d
  int v7; // eax
  int v8; // ecx

  if ( dword_163D75B60 )
  {
    v2 = dword_191541414;
    v3 = (__int64)dword_196199564 << 7;
    v4 = dword_196199564 + 1;
    *(_DWORD *)((char *)&unk_195999560 + v3) = 12;
    *(_DWORD *)((char *)&unk_195999564 + v3) = v2;
    dword_196199564 = v4;
    v5 = 1116LL * a2 + 23492LL * a1;
    v6 = (*(_DWORD *)((char *)&unk_191541624 + v5) + 1) << 16;
    v7 = *(_DWORD *)((char *)&unk_1915415F8 + v5)
       + 16 * (*(_DWORD *)((char *)&unk_1915415FC + v5) + 16 * *(_DWORD *)((char *)&unk_19154161C + v5));
    *(int *)((char *)&dword_195999580 + v3) = *(_DWORD *)((char *)&unk_1915415DC + v5)
                                            + 2
                                            * (a2
                                             + 8
                                             * (a1
                                              + 16
                                              * (*(_DWORD *)((char *)&unk_1915415E8 + v5)
                                               + (*(_DWORD *)((char *)&unk_191541618 + v5) << 8))));
    v8 = *(_DWORD *)((char *)&unk_191541620 + v5);
    *(int *)((char *)&dword_195999584 + v3) = v7;
    *(int *)((char *)&dword_195999588 + v3) = v8 / 60 + v6;
    *(_DWORD *)((char *)&unk_19599958C + v3) = *(_DWORD *)((char *)&unk_191541628 + v5);
    HIWORD(dword_196199564) = 0;
  }
}

