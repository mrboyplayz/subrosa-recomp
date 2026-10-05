/* Address: 0x1400398e0 | Name: sub_1400398E0 | Size: 172 bytes */
void __fastcall sub_1400398E0(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // eax
  int v5; // r11d
  __int64 v6; // r10
  int v7; // xmm0_4

  if ( dword_163D75B60 )
  {
    v4 = dword_191541414;
    v5 = dword_196199564;
    v6 = (__int64)dword_196199564 << 7;
    *(_DWORD *)((char *)&unk_195999560 + v6) = 1;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 4) = v4;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 8) = *a3;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 12) = a3[1];
    *(_DWORD *)((char *)&unk_195999560 + v6 + 16) = a3[2];
    if ( a4 )
    {
      *(_DWORD *)((char *)&unk_195999560 + v6 + 20) = *a4;
      *(_DWORD *)((char *)&unk_195999560 + v6 + 24) = a4[1];
      v7 = a4[2];
    }
    else
    {
      *(_QWORD *)((char *)&unk_195999560 + v6 + 20) = 0;
      v7 = 0;
    }
    *(_DWORD *)((char *)&unk_195999560 + v6 + 28) = v7;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 32) = a1;
    *(_DWORD *)((char *)&unk_195999560 + v6 + 36) = a2;
    dword_196199564 = v5 + 1;
    HIWORD(dword_196199564) = 0;
  }
}

