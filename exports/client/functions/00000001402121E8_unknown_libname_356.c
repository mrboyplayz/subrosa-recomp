/* Address: 0x1402121e8 | Name: unknown_libname_356 | Size: 163 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_356(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // ecx
  unsigned __int16 v13; // dx

  v4 = *(_QWORD *)(a1 + 1120);
  v6 = a1 + 88;
  if ( v4 )
  {
    v6 = v4;
    v9 = *(_QWORD *)(a1 + 1112) >> 2;
  }
  else
  {
    v9 = 256;
  }
  v10 = v6 + 2 * (v9 - 1);
  *(_QWORD *)(a1 + 72) = v10;
  for ( result = v10; ; result = *(_QWORD *)(a1 + 72) )
  {
    v12 = *(_DWORD *)(a1 + 56);
    if ( v12 <= 0 && !a2 )
      break;
    *(_DWORD *)(a1 + 56) = v12 - 1;
    v13 = a2 % a3 + 48;
    a2 /= a3;
    if ( v13 > 0x39u )
      LOBYTE(v13) = v13 + 32 * (a4 ^ 1) + 7;
    **(_WORD **)(a1 + 72) = (char)v13;
    *(_QWORD *)(a1 + 72) -= 2LL;
  }
  *(_DWORD *)(a1 + 80) = (v10 - result) >> 1;
  *(_QWORD *)(a1 + 72) += 2LL;
  return result;
}

