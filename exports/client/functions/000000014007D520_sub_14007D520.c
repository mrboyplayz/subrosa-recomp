/* Address: 0x14007d520 | Name: sub_14007D520 | Size: 215 bytes */
__int64 __fastcall sub_14007D520(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax

  v3 = dword_140404A6C[456217207];
  if ( (int)dword_140404A6C[456217207] < 0x10000 )
  {
    v5 = dword_140404A6C[456217208];
  }
  else
  {
    sub_14006E0D0((__int64)a1, a2, a3);
    v3 = 0;
    v5 = 9;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
  }
  v6 = (int)(v3 * v5);
  dword_140404A6C[v6 + 456217209] = *a1;
  dword_140404A6C[v6 + 456217210] = a1[1];
  dword_140404A6C[v6 + 456217211] = a1[2];
  v7 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[v7 + 456217212] = dword_140404A6C[456807037];
  dword_140404A6C[v7 + 456217213] = dword_140404A6C[456807038];
  result = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[(int)result + 456217214] = dword_140404A6C[456807033];
  dword_140404A6C[(int)result + 456217215] = dword_140404A6C[456807034];
  dword_140404A6C[(int)result + 456217216] = dword_140404A6C[456807035];
  dword_140404A6C[(int)result + 456217217] = dword_140404A6C[456807036];
  ++dword_140404A6C[456217207];
  return result;
}

