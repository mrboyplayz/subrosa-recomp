/* Address: 0x140039bf0 | Name: sub_140039BF0 | Size: 111 bytes */
__int64 __fastcall sub_140039BF0(int a1, _DWORD *a2, float a3, float a4)
{
  int v4; // eax
  __int64 v5; // r8
  int v6; // r9d
  __int64 result; // rax

  if ( dword_163D75B60 )
  {
    v4 = dword_191541414;
    v5 = (__int64)dword_196199564 << 7;
    v6 = dword_196199564 + 1;
    *(_DWORD *)((char *)&unk_195999560 + v5) = 9;
    *(_DWORD *)((char *)&unk_195999560 + v5 + 4) = v4;
    *(_DWORD *)((char *)&unk_195999560 + v5 + 32) = a1;
    *(_DWORD *)((char *)&unk_195999560 + v5 + 8) = *a2;
    *(_DWORD *)((char *)&unk_195999560 + v5 + 12) = a2[1];
    *(_DWORD *)((char *)&unk_195999560 + v5 + 16) = a2[2];
    *(float *)((char *)&unk_195999560 + v5 + 48) = a3;
    dword_196199564 = v6;
    HIWORD(dword_196199564) = 0;
    *(float *)((char *)&unk_195999560 + v5 + 52) = a4;
    return 0;
  }
  return result;
}

