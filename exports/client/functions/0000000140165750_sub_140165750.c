/* Address: 0x140165750 | Name: sub_140165750 | Size: 95 bytes */
__int64 __fastcall sub_140165750(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v4; // rdi
  int v5; // edx
  int v6; // eax

  v2 = *(_DWORD *)(a1 + 18468);
  v4 = (int)a2;
  if ( v2 < (int)a2 )
  {
    sub_140161D20((_QWORD *)a1, a2);
    v2 = *(_DWORD *)(a1 + 18468);
  }
  v5 = __ROL4__(*(_DWORD *)(a1 + 18464), v4);
  *(_DWORD *)(a1 + 18468) = v2 - v4;
  v6 = dword_14026FBF0[v4];
  *(_DWORD *)(a1 + 18464) = v5 & ~v6;
  return v5 & (unsigned int)v6;
}

