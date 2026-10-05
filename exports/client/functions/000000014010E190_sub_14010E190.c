/* Address: 0x14010e190 | Name: sub_14010E190 | Size: 147 bytes */
__int64 __fastcall sub_14010E190(int a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rcx

  v5 = a3;
  v6 = dword_140404A6C[96401 * a3 + 308337813 + a4];
  v7 = *(_QWORD *)&dword_140404A6C[2 * a1 + 299853565];
  if ( v6 > 0 )
    return sub_1401E25C0(
             v7,
             (unsigned int)&dword_140404A6C[96401 * v5 + 308337941 + 512 * (__int64)a4],
             v6,
             a2,
             2048,
             0);
  sub_1401E25C0(v7, 0, 0, a2, 2048, 0);
  return MEMORY[0x1401FCD30](a2, 0, 1920);
}

