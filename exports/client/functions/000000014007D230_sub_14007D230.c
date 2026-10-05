/* Address: 0x14007d230 | Name: sub_14007D230 | Size: 234 bytes */
__int64 __fastcall sub_14007D230(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // xmm0_4
  unsigned int v4; // xmm1_4
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax

  v5 = dword_140404A6C[456217207];
  if ( (int)dword_140404A6C[456217207] < 0x10000 )
  {
    v6 = dword_140404A6C[456217208];
  }
  else
  {
    sub_14006E0D0(a1, a2, a3);
    v5 = 0;
    v6 = 9;
    dword_140404A6C[456217207] = 0;
    dword_140404A6C[456217208] = 9;
  }
  v7 = (int)(v6 * v5);
  dword_140404A6C[v7 + 456217209] = v3;
  dword_140404A6C[v7 + 456217210] = v4;
  dword_140404A6C[v7 + 456217211] = 0;
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

