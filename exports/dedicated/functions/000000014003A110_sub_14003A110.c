/* Address: 0x14003a110 | Name: sub_14003A110 | Size: 198 bytes */
void __fastcall sub_14003A110(int a1, int a2, int a3, int a4)
{
  int v4; // eax
  int v5; // r10d
  __int64 v6; // rbx
  __int64 v7; // r9

  if ( dword_163D75B60 )
  {
    v4 = dword_191541414;
    v5 = 64;
    v6 = dword_196199564;
    if ( a4 <= 64 )
      v5 = a4;
    v7 = (__int64)dword_196199564 << 7;
    *(_DWORD *)((char *)&unk_195999560 + v7) = 22;
    *(_DWORD *)((char *)&unk_195999560 + v7 + 4) = v4;
    *(_DWORD *)((char *)&unk_195999560 + v7 + 32) = a1 + (a2 << 8);
    *(_DWORD *)((char *)&unk_195999560 + v7 + 36) = a3;
    *(_DWORD *)((char *)&unk_195999560 + v7 + 40) = v5;
    memcpy((char *)&unk_1959995A0 + 128 * v6, (char *)&unk_191541638 + 23492 * a1 + 1116 * a2 + 64 * a3, v5);
    dword_196199564 = v6 + 1;
    HIWORD(dword_196199564) = 0;
  }
}

