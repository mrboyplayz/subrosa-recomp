/* Address: 0x14018db20 | Name: sub_14018DB20 | Size: 198 bytes */
__int64 __fastcall sub_14018DB20(int a1)
{
  __int64 v1; // rdi
  unsigned int v2; // eax
  unsigned int v3; // eax
  __int64 result; // rax
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 1760LL * a1;
  sub_140115AE0(&dword_140404A6C[v1 + 278845898], 8);
  sub_140115AE0(&v5, 10);
  v2 = v5;
  if ( v5 == 1023 )
    v2 = -1;
  dword_140404A6C[v1 + 278845903] = v2;
  sub_140115AE0(&v5, 10);
  v3 = v5;
  if ( v5 == 1023 )
    v3 = -1;
  dword_140404A6C[v1 + 278845902] = v3;
  result = sub_140115AE0(&dword_140404A6C[v1 + 278845904], 4);
  if ( dword_140404A6C[v1 + 278845898] == 39 )
  {
    sub_140115AE0(&dword_140404A6C[v1 + 278846111], 5);
    return sub_140115AE0(&dword_140404A6C[v1 + 278846112], 5);
  }
  return result;
}

