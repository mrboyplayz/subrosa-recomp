/* Address: 0x14015afd0 | Name: sub_14015AFD0 | Size: 156 bytes */
__int64 __fastcall sub_14015AFD0(int a1, char *a2, int a3, int a4)
{
  __int64 v4; // rdi
  char *v5; // r10
  __int64 v6; // rcx
  int v7; // ebx
  char *v9; // rcx

  v4 = 16388LL * a1;
  v5 = a2;
  if ( (int)dword_140404A6C[v4 + 291021662] > 0 )
  {
    ++dword_140404A6C[v4 + 291021661];
    dword_140404A6C[v4 + 291021662] = 0;
  }
  v6 = (int)dword_140404A6C[v4 + 291021661];
  v7 = a4 * a3;
  if ( (int)v6 + a4 * a3 >= 0x10000 )
    return 0;
  if ( dword_140404A6C[v4 + 291021664] )
  {
    a2 = (char *)&dword_140404A6C[v4 + 291021665] + v6;
    v9 = v5;
  }
  else
  {
    v9 = (char *)&dword_140404A6C[v4 + 291021665] + v6;
  }
  MEMORY[0x1401FC920](v9, a2);
  dword_140404A6C[v4 + 291021661] += v7;
  return 1;
}

