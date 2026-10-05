/* Address: 0x14007b180 | Name: sub_14007B180 | Size: 101 bytes */
__int64 __fastcall sub_14007B180(__int64 a1, int a2, int a3)
{
  signed int v3; // eax
  int v5; // ebx

  v3 = dword_140404A6C[289301092];
  if ( (int)dword_140404A6C[289301092] >= 0x10000 )
    return 0;
  if ( (int)dword_140404A6C[289301093] > 0 )
  {
    v3 = dword_140404A6C[289301092] + 1;
    dword_140404A6C[289301093] = 0;
    ++dword_140404A6C[289301092];
  }
  v5 = a3 * a2;
  MEMORY[0x1401FC920]((char *)&dword_140404A6C[289301094] + v3, a1);
  dword_140404A6C[289301092] += v5;
  return 1;
}

