/* Address: 0x14016d7a0 | Name: sub_14016D7A0 | Size: 84 bytes */
_BOOL8 __fastcall sub_14016D7A0(_QWORD *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  int v5; // eax

  v3 = sub_1401604F0((__int64)a1, a2);
  v5 = sub_1401604F0((__int64)a1, v4);
  a1[24] = a1[26];
  a1[25] = a1[27];
  return (v3 << 16) + v5 == 943870035;
}

