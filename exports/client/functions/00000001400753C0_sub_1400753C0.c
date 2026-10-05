/* Address: 0x1400753c0 | Name: sub_1400753C0 | Size: 62 bytes */
__int64 sub_1400753C0()
{
  __int64 result; // rax

  result = dword_140404A6C[70317962];
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    result = (int)result - 1;
    dword_140404A6C[70087069] = dword_140404A6C[2 * (int)result + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (int)result + 70317964];
  }
  return result;
}

