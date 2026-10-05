/* Address: 0x140080690 | Name: sub_140080690 | Size: 142 bytes */
__int64 __fastcall sub_140080690(int a1, unsigned int a2, char *a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 result; // rax
  unsigned int *v7; // rax
  char v8; // cl

  v4 = 2570LL * a1;
  v5 = (int)dword_140404A6C[v4 + 275754072];
  if ( (int)v5 >= 256 )
    return 0xFFFFFFFFLL;
  dword_140404A6C[6 * v5 + 275754073 + v4] = a4;
  v7 = &dword_140404A6C[6 * (int)dword_140404A6C[v4 + 275754072] + 275754074 + v4];
  do
  {
    v8 = *a3++;
    *(_BYTE *)v7 = v8;
    v7 = (unsigned int *)((char *)v7 + 1);
  }
  while ( v8 );
  dword_140404A6C[6 * (int)dword_140404A6C[v4 + 275754072] + 275754078 + v4] = a2;
  result = dword_140404A6C[v4 + 275754072];
  dword_140404A6C[v4 + 275754072] = result + 1;
  return result;
}

