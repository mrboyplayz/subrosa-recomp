/* Address: 0x140160730 | Name: sub_140160730 | Size: 86 bytes */
unsigned __int64 __fastcall sub_140160730(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rdx

  v3 = sub_1401604F0(a1, a2);
  v5 = sub_1401604F0(a1, v4) + (v3 << 16);
  v7 = sub_1401604F0(a1, v6);
  return v5 | ((unsigned __int64)((v7 << 16) + (unsigned int)sub_1401604F0(a1, v8)) << 32);
}

