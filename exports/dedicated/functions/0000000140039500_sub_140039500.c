/* Address: 0x140039500 | Name: sub_140039500 | Size: 149 bytes */
__int64 __fastcall sub_140039500(int a1)
{
  int *v2; // rax
  unsigned int v3; // edi
  __int64 v5; // rbx

  v2 = (int *)&unk_18F7174C0;
  v3 = 0;
  while ( *v2 )
  {
    ++v3;
    v2 += 2570;
    if ( (__int64)v2 >= (__int64)&dword_1901214C0 )
      return 0xFFFFFFFFLL;
  }
  if ( v3 != -1 )
  {
    v5 = 10280LL * (int)v3;
    memset((char *)&unk_18F7174C4 + v5, 0, 0x2824u);
    *(_DWORD *)((char *)&unk_18F7174C0 + v5) = 1;
    *(_DWORD *)((char *)&unk_18F7174C0 + v5 + 4) = a1;
  }
  return v3;
}

