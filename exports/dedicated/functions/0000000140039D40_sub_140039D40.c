/* Address: 0x140039d40 | Name: sub_140039D40 | Size: 223 bytes */
void __fastcall sub_140039D40(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, _DWORD *a8)
{
  int v8; // eax
  int v9; // xmm0_4
  int v10; // r11d
  __int64 v11; // r10
  int v12; // xmm1_4

  if ( dword_163D75B60 )
  {
    v8 = dword_191541414;
    v9 = 0;
    v10 = dword_196199564;
    v11 = (__int64)dword_196199564 << 7;
    *(_DWORD *)((char *)&unk_195999560 + v11) = 16;
    *(_DWORD *)((char *)&unk_195999560 + v11 + 4) = v8;
    *(_DWORD *)((char *)&unk_195999560 + v11 + 32) = a1 + (a2 << 16);
    *(_DWORD *)((char *)&unk_195999560 + v11 + 36) = a3 + (a4 << 16);
    *(_DWORD *)((char *)&unk_195999560 + v11 + 40) = a5;
    *(_DWORD *)((char *)&unk_195999560 + v11 + 44) = a6;
    if ( a7 )
    {
      *(_DWORD *)((char *)&unk_195999560 + v11 + 8) = *a7;
      *(_DWORD *)((char *)&unk_195999560 + v11 + 12) = a7[1];
      v12 = a7[2];
    }
    else
    {
      *(_QWORD *)((char *)&unk_195999560 + v11 + 8) = 0;
      v12 = 0;
    }
    *(_DWORD *)((char *)&unk_195999560 + v11 + 16) = v12;
    if ( a8 )
    {
      *(_DWORD *)((char *)&unk_195999560 + v11 + 20) = *a8;
      *(_DWORD *)((char *)&unk_195999560 + v11 + 24) = a8[1];
      v9 = a8[2];
    }
    else
    {
      *(_QWORD *)((char *)&unk_195999560 + v11 + 20) = 0;
    }
    *(_DWORD *)((char *)&unk_195999560 + v11 + 28) = v9;
    dword_196199564 = v10 + 1;
    HIWORD(dword_196199564) = 0;
  }
}

