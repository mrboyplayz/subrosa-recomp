/* Address: 0x1400c90d0 | Name: sub_1400C90D0 | Size: 68 bytes */
__int64 __fastcall sub_1400C90D0(unsigned int a1)
{
  __int64 v2; // rdx

  v2 = 1760LL * (int)a1;
  *(_QWORD *)&dword_140404A6C[v2 + 278846111] = 0;
  MEMORY[0x1401FCD30](&dword_140404A6C[v2 + 278847325], 0, 1312);
  return sub_1400C92B0(a1);
}

