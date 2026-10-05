/* Address: 0x140165bb0 | Name: sub_140165BB0 | Size: 175 bytes */
__int64 __fastcall sub_140165BB0(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rdx

  v2 = j__malloc_base(18568);
  *(_QWORD *)v2 = a1;
  sub_14016DFD0(v2);
  v3 = 0;
  *(_DWORD *)(v2 + 18508) = -1;
  *(_DWORD *)(v2 + 18504) = 0;
  *(_BYTE *)(v2 + 18472) = -1;
  if ( sub_140160790((_BYTE *)v2, v4) == -40 )
    v3 = 1;
  else
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "no SOI";
  a1[24] = a1[26];
  a1[25] = a1[27];
  free((void *)v2);
  return v3;
}

