/* Address: 0x14010ef40 | Name: sub_14010EF40 | Size: 163 bytes */
__int64 __fastcall sub_14010EF40(int a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = 1760LL * a1;
  sub_140115D90(&dword_140404A6C[v1 + 278845898], 8);
  sub_140115D90(&dword_140404A6C[v1 + 278845903], 10);
  sub_140115D90(&dword_140404A6C[v1 + 278845902], 10);
  result = sub_140115D90(&dword_140404A6C[v1 + 278845904], 4);
  if ( dword_140404A6C[v1 + 278845898] == 39 )
  {
    sub_140115D90(&dword_140404A6C[v1 + 278846111], 5);
    return sub_140115D90(&dword_140404A6C[v1 + 278846112], 5);
  }
  return result;
}

