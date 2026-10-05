/* Address: 0x140069580 | Name: sub_140069580 | Size: 40 bytes */
__int64 sub_140069580()
{
  __int64 result; // rax

  if ( !dword_140404A6C[196619] )
    return 0;
  result = dword_140404A6C[196622] - dword_140404A6C[196623] + 0x40000;
  if ( (signed int)(dword_140404A6C[196622] - dword_140404A6C[196623]) >= -131072 )
    return dword_140404A6C[196622] - dword_140404A6C[196623];
  return result;
}

