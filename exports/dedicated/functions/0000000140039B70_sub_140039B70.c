/* Address: 0x140039b70 | Name: sub_140039B70 | Size: 116 bytes */
void __fastcall sub_140039B70(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // eax
  __int64 v6; // r10
  int v7; // r11d

  if ( dword_163D75B60 )
  {
    v5 = dword_191541414;
    v6 = (__int64)dword_196199564 << 7;
    v7 = dword_196199564 + 1;
    *(_DWORD *)((char *)&unk_195999560 + v6) = 18;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 4) = v5;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 32) = a1 + (a2 << 16);
    *(_DWORD *)((char *)&unk_195999560 + v6 + 36) = a3 + (a4 << 16);
    *(_DWORD *)((char *)&unk_195999560 + v6 + 40) = a5;
    dword_196199564 = v7;
    HIWORD(dword_196199564) = 0;
  }
}

