/* Address: 0x14007d6c0 | Name: sub_14007D6C0 | Size: 69 bytes */
__int64 __fastcall sub_14007D6C0(int a1)
{
  __int64 v1; // rax
  unsigned int v2; // r10d
  int v3; // r8d

  v1 = 8LL * a1;
  v2 = dword_140404A6C[v1 + 18165782];
  v3 = dword_140404A6C[v1 + 18165781] - v2;
  if ( v3 >= (int)dword_140404A6C[v1 + 18165778] / -2 )
    return (unsigned int)v3;
  else
    return dword_140404A6C[v1 + 18165781] + dword_140404A6C[v1 + 18165778] - v2;
}

