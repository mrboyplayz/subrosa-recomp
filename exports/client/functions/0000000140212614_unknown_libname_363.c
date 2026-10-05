/* Address: 0x140212614 | Name: unknown_libname_363 | Size: 141 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_363(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  char v12; // dl

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  v7 = a3;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v9 = 512;
  }
  v10 = v9 + v6 - 1;
  for ( *(_QWORD *)(a1 + 72) = v10; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v12 = a2 % v7 + 48;
    a2 /= v7;
    if ( v12 > 57 )
      v12 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v12;
  }
  *(_DWORD *)(a1 + 80) = v10 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

