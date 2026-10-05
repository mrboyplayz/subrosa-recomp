/* Address: 0x14006c780 | Name: sub_14006C780 | Size: 153 bytes */
__int64 sub_14006C780()
{
  int v0; // ecx
  int v1; // r9d
  __int64 result; // rax
  int v3; // r11d

  v0 = (signed int)(16 * dword_140404A6C[137297756]) / 9;
  if ( (int)dword_140404A6C[137297755] <= v0 )
    v0 = dword_140404A6C[137297755];
  v1 = 0;
  dword_140404A6C[137297761] = v0;
  result = (unsigned int)(v0 + 8 * (v0 + 1));
  v3 = (int)result / 16;
  dword_140404A6C[137297762] = (int)result / 16;
  if ( (int)dword_140404A6C[137297755] > v0 )
  {
    result = (unsigned int)((signed int)(dword_140404A6C[137297755] - v0) / 2);
    v1 = (signed int)(dword_140404A6C[137297755] - v0) / 2;
  }
  dword_140404A6C[137297763] = v1;
  if ( (int)dword_140404A6C[137297756] <= v3 )
  {
    dword_140404A6C[137297764] = 0;
  }
  else
  {
    dword_140404A6C[137297764] = (signed int)(dword_140404A6C[137297756] - v3) / 2;
    return (unsigned int)((signed int)(dword_140404A6C[137297756] - v3) / 2);
  }
  return result;
}

