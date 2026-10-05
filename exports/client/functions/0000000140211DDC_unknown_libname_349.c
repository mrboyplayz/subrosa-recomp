/* Address: 0x140211ddc | Name: unknown_libname_349 | Size: 135 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_349(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 result; // rax
  char v10; // dl

  v4 = a1 + 88;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    v4 = *(_QWORD *)(a1 + 1120);
    v7 = *(_QWORD *)(a1 + 1112) >> 1;
  }
  else
  {
    v7 = 512;
  }
  v8 = v7 + v4 - 1;
  for ( *(_QWORD *)(a1 + 72) = v8; ; --*(_QWORD *)(a1 + 72) )
  {
    result = *(unsigned int *)(a1 + 56);
    if ( (int)result <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = result - 1;
    v10 = a2 % a3 + 48;
    a2 /= a3;
    if ( v10 > 57 )
      v10 += 32 * (a4 ^ 1) + 7;
    **(_BYTE **)(a1 + 72) = v10;
  }
  *(_DWORD *)(a1 + 80) = v8 - *(_DWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 72);
  return result;
}

