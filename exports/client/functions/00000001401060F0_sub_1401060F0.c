/* Address: 0x1401060f0 | Name: sub_1401060F0 | Size: 111 bytes */
__int64 __fastcall sub_1401060F0(int a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = 47224LL * a1;
  v3 = (int)dword_140404A6C[v2 + 438924123];
  result = ((_WORD)v3 + 1) & 0x7FF;
  if ( (_DWORD)result != dword_140404A6C[v2 + 438924125] )
  {
    dword_140404A6C[5 * v3 + 438924126 + v2] = 1;
    dword_140404A6C[5 * (int)dword_140404A6C[v2 + 438924123] + 438924127 + v2] = a2;
    result = ((unsigned __int16)dword_140404A6C[v2 + 438924123] + 1) & 0x7FF;
    dword_140404A6C[v2 + 438924123] = result;
  }
  return result;
}

