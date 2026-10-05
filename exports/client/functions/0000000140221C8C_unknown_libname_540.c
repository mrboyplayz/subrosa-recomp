/* Address: 0x140221c8c | Name: unknown_libname_540 | Size: 199 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_540(__int64 a1)
{
  int v2; // esi
  __int64 v3; // r8
  __int64 v4; // rdx
  const __int16 *v5; // rbx
  int v6; // eax
  int i; // r9d
  const __int16 *v8; // rcx

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(unsigned int *)(a1 + 60);
  v4 = *(unsigned __int16 *)(a1 + 66);
  v5 = *(const __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  *(_QWORD *)(a1 + 72) = v5;
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  if ( (unsigned __int8)MEMORY[0x140211A94](*(_QWORD *)a1, v4, v3) )
  {
    if ( !v5 )
    {
      v5 = L"(null)";
      *(_QWORD *)(a1 + 72) = L"(null)";
    }
    *(_BYTE *)(a1 + 84) = 1;
    v6 = MEMORY[0x140254F48](v5, v2);
  }
  else
  {
    if ( !v5 )
    {
      v5 = (const __int16 *)"(null)";
      *(_QWORD *)(a1 + 72) = "(null)";
    }
    for ( i = 0; i < v2; v5 = (const __int16 *)((char *)v8 + 1) )
    {
      if ( !*(_BYTE *)v5 )
        break;
      v8 = (const __int16 *)((char *)v5 + 1);
      if ( (*(_WORD *)(***(_QWORD ***)(a1 + 8) + 2LL * *(unsigned __int8 *)v5) & 0x8000) == 0 )
        v8 = v5;
      ++i;
    }
    v6 = i;
  }
  *(_DWORD *)(a1 + 80) = v6;
  return 1;
}

