/* Address: 0x140012940 | Name: sub_140012940 | Size: 137 bytes */
__int64 __fastcall sub_140012940(unsigned int a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx

  if ( a1 <= 0xFFF )
  {
    result = a2;
    v3 = a2 + 6930LL * (int)a1;
    v4 = (int)dword_140404A6C[v3 + 83200503];
    dword_140404A6C[v3 + 83200503] = -1;
    if ( (unsigned int)v4 <= 0x3FF )
    {
      dword_140404A6C[8969 * v4 + 73991662] = -1;
      sub_1401941F0(0, (unsigned int)v4);
      sub_1401941F0(3, (unsigned int)v4);
      return sub_1401941F0(5, (unsigned int)v4);
    }
  }
  return result;
}

