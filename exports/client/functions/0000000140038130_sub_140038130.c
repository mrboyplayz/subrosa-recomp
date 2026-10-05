/* Address: 0x140038130 | Name: sub_140038130 | Size: 120 bytes */
__int64 __fastcall sub_140038130(int a1, int a2, int a3, int a4)
{
  __int64 v4; // rbx

  v4 = (int)dword_140404A6C[421506989]++;
  *(_DWORD *)(*(_QWORD *)&dword_140404A6C[2 * a1 + 421506981]
            + 4LL
            * (int)(a2 + dword_140404A6C[263004 * a1 + 111579650] * (a4 + a3 * dword_140404A6C[263004 * a1 + 111579652]))) = v4;
  MEMORY[0x1401FCD30](&dword_140404A6C[512 * v4 + 421506990], 0xFFFFFFFFLL, 2048);
  return (unsigned int)v4;
}

