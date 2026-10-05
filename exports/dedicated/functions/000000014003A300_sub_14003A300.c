/* Address: 0x14003a300 | Name: sub_14003A300 | Size: 196 bytes */
void __fastcall sub_14003A300(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // r11d
  int v6; // xmm0_4
  int v7; // eax
  __int64 v8; // r10
  int v9; // xmm1_4

  if ( dword_163D75B60 )
  {
    v5 = dword_196199564;
    v6 = 0;
    v7 = dword_191541414;
    v8 = (__int64)dword_196199564 << 7;
    *(_DWORD *)((char *)&unk_195999560 + v8) = 4;
    *(_DWORD *)((char *)&unk_195999560 + v8 + 4) = v7;
    *(_DWORD *)((char *)&unk_195999560 + v8 + 32) = a1;
    *(_DWORD *)((char *)&unk_195999560 + v8 + 36) = a2;
    *(_DWORD *)((char *)&unk_195999560 + v8 + 40) = a3;
    if ( a4 )
    {
      *(_DWORD *)((char *)&unk_195999560 + v8 + 8) = *a4;
      *(_DWORD *)((char *)&unk_195999560 + v8 + 12) = a4[1];
      v9 = a4[2];
    }
    else
    {
      *(_QWORD *)((char *)&unk_195999560 + v8 + 8) = 0;
      v9 = 0;
    }
    *(_DWORD *)((char *)&unk_195999560 + v8 + 16) = v9;
    if ( a5 )
    {
      *(_DWORD *)((char *)&unk_195999560 + v8 + 20) = *a5;
      *(_DWORD *)((char *)&unk_195999560 + v8 + 24) = a5[1];
      v6 = a5[2];
    }
    else
    {
      *(_QWORD *)((char *)&unk_195999560 + v8 + 20) = 0;
    }
    *(_DWORD *)((char *)&unk_195999560 + v8 + 28) = v6;
    dword_196199564 = v5 + 1;
    HIWORD(dword_196199564) = 0;
  }
}

