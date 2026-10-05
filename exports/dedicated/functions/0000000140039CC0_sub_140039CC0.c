/* Address: 0x140039cc0 | Name: sub_140039CC0 | Size: 125 bytes */
void __fastcall sub_140039CC0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  __int64 v7; // r10
  int v8; // r11d

  if ( dword_163D75B60 )
  {
    v6 = dword_191541414;
    v7 = (__int64)dword_196199564 << 7;
    v8 = dword_196199564 + 1;
    *(_DWORD *)((char *)&unk_195999560 + v7) = 15;
    *(_DWORD *)((char *)&unk_195999560 + v7 + 4) = v6;
    *(_DWORD *)((char *)&unk_195999560 + v7 + 32) = a1 + (a2 << 16);
    *(_DWORD *)((char *)&unk_195999560 + v7 + 36) = a3 + (a4 << 16);
    *(_DWORD *)((char *)&unk_195999560 + v7 + 40) = a5;
    *(_DWORD *)((char *)&unk_195999560 + v7 + 44) = a6;
    dword_196199564 = v8;
    HIWORD(dword_196199564) = 0;
  }
}

