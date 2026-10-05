/* Address: 0x140039c60 | Name: sub_140039C60 | Size: 93 bytes */
__int64 __fastcall sub_140039C60(int a1, int a2, float a3, float a4)
{
  int v4; // eax
  __int64 v5; // r8
  __int64 result; // rax

  if ( dword_163D75B60 )
  {
    v4 = dword_191541414;
    v5 = (__int64)dword_196199564++ << 7;
    *(_DWORD *)((char *)&unk_195999560 + v5) = 19;
    *(_DWORD *)((char *)&unk_195999560 + v5 + 4) = v4;
    *(_DWORD *)((char *)&unk_195999560 + v5 + 32) = a1;
    *(_DWORD *)((char *)&unk_195999560 + v5 + 36) = a2;
    *(float *)((char *)&unk_195999560 + v5 + 48) = a3;
    *(float *)((char *)&unk_195999560 + v5 + 52) = a4;
    HIWORD(dword_196199564) = 0;
    return 0;
  }
  return result;
}

