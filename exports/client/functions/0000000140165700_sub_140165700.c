/* Address: 0x140165700 | Name: sub_140165700 | Size: 66 bytes */
__int64 __fastcall sub_140165700(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // eax
  int v4; // ecx

  v1 = *(unsigned int *)(a1 + 18468);
  if ( (int)v1 < 1 )
  {
    sub_140161D20((_QWORD *)a1, v1);
    LODWORD(v1) = *(_DWORD *)(a1 + 18468);
  }
  v3 = *(_DWORD *)(a1 + 18464);
  v4 = 2 * v3;
  *(_DWORD *)(a1 + 18464) = v4;
  *(_DWORD *)(a1 + 18468) = v1 - 1;
  return v3 & 0x80000000;
}

