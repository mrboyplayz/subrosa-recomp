/* Address: 0x140051170 | Name: sub_140051170 | Size: 189 bytes */
__int64 __fastcall sub_140051170(int a1, unsigned int a2, int a3)
{
  __int64 v4; // rdx
  unsigned int *v5; // rax
  unsigned int v6; // ebx
  unsigned int v8; // ecx
  __int64 v9; // r9
  unsigned int v10; // eax

  v4 = a1;
  v5 = &dword_140404A6C[290382645];
  v6 = 0;
  while ( *v5 )
  {
    ++v6;
    v5 += 39;
    if ( (__int64)v5 >= (__int64)&dword_140404A6C[291021621] )
      return 0xFFFFFFFFLL;
  }
  if ( v6 == -1 )
    return 0xFFFFFFFFLL;
  v8 = 64;
  if ( a3 <= 64 )
    v8 = a3;
  v9 = 39LL * (int)v6;
  v10 = dword_140404A6C[283831474];
  dword_140404A6C[v9 + 290382649] = v4;
  dword_140404A6C[v9 + 290382651] = v8;
  dword_140404A6C[v9 + 290382650] = a2;
  dword_140404A6C[v9 + 290382648] = v10;
  *(_QWORD *)&dword_140404A6C[v9 + 290382645] = 1;
  dword_140404A6C[v9 + 290382647] = 0;
  MEMORY[0x1401FC920](
    &dword_140404A6C[v9 + 290382652],
    (char *)&dword_140404A6C[1760 * v4 + 278846111] + (int)(a2 << 6));
  return v6;
}

