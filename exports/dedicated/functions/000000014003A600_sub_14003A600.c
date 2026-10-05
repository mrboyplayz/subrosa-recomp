/* Address: 0x14003a600 | Name: sub_14003A600 | Size: 156 bytes */
void __fastcall sub_14003A600(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // r11d
  int v6; // eax
  __int64 v7; // r10
  int v8; // xmm0_4

  if ( dword_163D75B60 )
  {
    v5 = dword_196199564;
    v6 = dword_191541414;
    v7 = (__int64)dword_196199564 << 7;
    *(_DWORD *)((char *)&unk_195999560 + v7) = 21;
    *(_DWORD *)((char *)&unk_195999560 + v7 + 4) = v6;
    *(_DWORD *)((char *)&unk_195999560 + v7 + 32) = a1;
    *(_DWORD *)((char *)&unk_195999560 + v7 + 36) = a2;
    *(_DWORD *)((char *)&unk_195999560 + v7 + 40) = a3;
    *(_DWORD *)((char *)&unk_195999560 + v7 + 44) = a4;
    if ( a5 )
    {
      *(_DWORD *)((char *)&unk_195999560 + v7 + 8) = *a5;
      *(_DWORD *)((char *)&unk_195999560 + v7 + 12) = a5[1];
      v8 = a5[2];
    }
    else
    {
      *(_QWORD *)((char *)&unk_195999560 + v7 + 8) = 0;
      v8 = 0;
    }
    *(_DWORD *)((char *)&unk_195999560 + v7 + 16) = v8;
    dword_196199564 = v5 + 1;
    HIWORD(dword_196199564) = 0;
  }
}

