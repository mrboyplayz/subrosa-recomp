/* Address: 0x140039840 | Name: sub_140039840 | Size: 154 bytes */
void __fastcall sub_140039840(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v4; // r11d
  int v5; // eax
  __int64 v6; // r10

  if ( dword_163D75B60 )
  {
    v4 = dword_196199564;
    v5 = dword_191541414;
    v6 = (__int64)dword_196199564 << 7;
    *(_DWORD *)((char *)&unk_195999560 + v6) = 0;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 4) = v5;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 8) = *a2;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 12) = a2[1];
    *(_DWORD *)((char *)&unk_195999560 + v6 + 16) = a2[2];
    *(_DWORD *)((char *)&unk_195999560 + v6 + 20) = *a3;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 24) = a3[1];
    *(_DWORD *)((char *)&unk_195999560 + v6 + 28) = a3[2];
    *(_DWORD *)((char *)&unk_195999560 + v6 + 32) = a1;
    dword_196199564 = v4 + 1;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 36) = a4;
    HIWORD(dword_196199564) = 0;
  }
}

