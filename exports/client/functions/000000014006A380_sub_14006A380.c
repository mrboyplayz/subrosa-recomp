/* Address: 0x14006a380 | Name: sub_14006A380 | Size: 179 bytes */
__int64 __fastcall sub_14006A380(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r9d
  signed int v5; // ebx
  int v6; // edi
  __int64 result; // rax

  v3 = dword_140404A6C[196622];
  v5 = 0;
  v6 = a3 / 2;
  if ( (signed int)(dword_140404A6C[196622] + a3 / 2) > 0x40000 )
  {
    v5 = 0x40000 - dword_140404A6C[196622];
    MEMORY[0x1401FC920]((char *)&dword_140404A6C[196624] + 2 * (int)dword_140404A6C[196622], a2);
    v6 -= v5;
    v3 = 0;
    dword_140404A6C[196622] = 0;
  }
  result = MEMORY[0x1401FC920]((char *)&dword_140404A6C[196624] + 2 * (int)v3, a2 + 2LL * v5);
  dword_140404A6C[196622] = (v6 + dword_140404A6C[196622]) & 0x3FFFF;
  return result;
}

