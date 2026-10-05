/* Address: 0x14007d320 | Name: sub_14007D320 | Size: 249 bytes */
__int64 __fastcall sub_14007D320(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 result; // rax

  v4 = dword_140404A6C[456217207];
  v5 = 0x10000;
  if ( !dword_140404A6C[456217205] )
    v5 = 65532;
  if ( (int)dword_140404A6C[456217207] < v5 )
  {
    v6 = dword_140404A6C[456217208];
  }
  else
  {
    sub_14006E0D0(65532, dword_140404A6C[456217207], a3);
    v4 = 0;
    v6 = 9;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
  }
  v7 = v4 * v6;
  dword_140404A6C[v7 + 456217209] = *a1;
  dword_140404A6C[v7 + 456217210] = a1[1];
  dword_140404A6C[dword_140404A6C[456217207] * dword_140404A6C[456217208] + 456217211] = 0;
  v8 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[v8 + 456217212] = dword_140404A6C[456807037];
  dword_140404A6C[v8 + 456217213] = dword_140404A6C[456807038];
  result = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[(int)result + 456217214] = dword_140404A6C[456807033];
  dword_140404A6C[(int)result + 456217215] = dword_140404A6C[456807034];
  dword_140404A6C[(int)result + 456217216] = dword_140404A6C[456807035];
  dword_140404A6C[(int)result + 456217217] = dword_140404A6C[456807036];
  ++dword_140404A6C[456217207];
  return result;
}

