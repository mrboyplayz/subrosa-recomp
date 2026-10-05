/* Address: 0x140039ec0 | Name: sub_140039EC0 | Size: 79 bytes */
__int64 __fastcall sub_140039EC0(int a1, int a2)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 result; // rax

  if ( dword_163D75B60 )
  {
    v2 = dword_191541414;
    v3 = (__int64)dword_196199564++ << 7;
    *(_DWORD *)((char *)&unk_195999560 + v3) = 10;
    *(_DWORD *)((char *)&unk_195999560 + v3 + 4) = v2;
    *(_DWORD *)((char *)&unk_195999560 + v3 + 32) = a1;
    HIWORD(dword_196199564) = 0;
    *(_DWORD *)((char *)&unk_195999560 + v3 + 36) = a2;
    return 0;
  }
  return result;
}

