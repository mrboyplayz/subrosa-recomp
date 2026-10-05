/* Address: 0x14007d420 | Name: sub_14007D420 | Size: 249 bytes */
__int64 __fastcall sub_14007D420(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // xmm0_4
  unsigned int v4; // xmm1_4
  unsigned int v5; // xmm2_4
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax

  v6 = dword_140404A6C[456217207];
  if ( (int)dword_140404A6C[456217207] < 0x10000 )
  {
    v7 = dword_140404A6C[456217208];
  }
  else
  {
    sub_14006E0D0(a1, a2, a3);
    v6 = 0;
    v7 = 9;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
  }
  v8 = (int)(v7 * v6);
  dword_140404A6C[v8 + 456217209] = v3;
  dword_140404A6C[v8 + 456217210] = v4;
  dword_140404A6C[v8 + 456217211] = v5;
  v9 = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[v9 + 456217212] = dword_140404A6C[456807037];
  dword_140404A6C[v9 + 456217213] = dword_140404A6C[456807038];
  result = dword_140404A6C[456217207] * dword_140404A6C[456217208];
  dword_140404A6C[(int)result + 456217214] = dword_140404A6C[456807033];
  dword_140404A6C[(int)result + 456217215] = dword_140404A6C[456807034];
  dword_140404A6C[(int)result + 456217216] = dword_140404A6C[456807035];
  dword_140404A6C[(int)result + 456217217] = dword_140404A6C[456807036];
  ++dword_140404A6C[456217207];
  return result;
}

