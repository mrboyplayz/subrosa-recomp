/* Address: 0x1400755f0 | Name: sub_1400755F0 | Size: 86 bytes */
__int64 __fastcall sub_1400755F0(float a1, float a2)
{
  __int64 result; // rax

  result = (int)dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    result = (int)dword_140404A6C[70317962];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  *(float *)&dword_140404A6C[70087070] = a2;
  *(float *)&dword_140404A6C[70087069] = a1;
  return result;
}

