/* Address: 0x1400287c0 | Name: sub_1400287C0 | Size: 120 bytes */
__int64 __fastcall sub_1400287C0(int a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx

  v4 = dword_196AC59A0++;
  *(_DWORD *)(qword_196AC5980[a1] + 4LL * (a2 + dword_16CDE9ED4[263004 * a1] * (a4 + a3 * dword_16CDE9EDC[263004 * a1]))) = v4;
  memset(&dword_196AC59A4[512 * v4], -1, 0x800u);
  return (unsigned int)v4;
}

