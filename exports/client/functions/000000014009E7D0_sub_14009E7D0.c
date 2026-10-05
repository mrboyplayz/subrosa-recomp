/* Address: 0x14009e7d0 | Name: sub_14009E7D0 | Size: 172 bytes */
void __fastcall sub_14009E7D0(_DWORD *a1, __int64 a2)
{
  double v3; // xmm0_8
  __int64 v4; // rdx
  __int64 v5; // rcx
  double v6; // xmm0_8
  __int64 v7; // rdx
  __int64 v8; // rcx
  double v9; // xmm0_8

  v3 = sub_14023F704(a1, a2);
  *a1 = LODWORD(v3);
  v6 = sub_14023F704(v5, v4);
  a1[1] = LODWORD(v6);
  MEMORY[0x1401F8AC0]();
  v9 = sub_14023F704(v8, v7);
  a1[2] = LODWORD(v9);
}

