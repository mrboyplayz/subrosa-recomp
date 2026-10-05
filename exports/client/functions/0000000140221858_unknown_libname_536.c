/* Address: 0x140221858 | Name: unknown_libname_536 | Size: 150 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_536(__int64 a1)
{
  int v2; // r8d
  const __int16 *v3; // rcx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  bool v7; // al
  int v8; // eax

  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(const __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  v4 = *(_DWORD *)(a1 + 60);
  if ( v2 == -1 )
    v2 = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 72) = v3;
  v5 = v4 - 2;
  if ( !v5 )
  {
    v7 = 0;
LABEL_9:
    if ( v7 )
    {
LABEL_10:
      if ( !v3 )
      {
        v3 = L"(null)";
        *(_QWORD *)(a1 + 72) = L"(null)";
      }
      *(_BYTE *)(a1 + 84) = 1;
      v8 = MEMORY[0x140254F48](v3, v2);
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 || v6 == 9 )
    goto LABEL_10;
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v7 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( !v3 )
  {
    v3 = (const __int16 *)"(null)";
    *(_QWORD *)(a1 + 72) = "(null)";
  }
  v8 = strnlen(v3, v2);
LABEL_16:
  *(_DWORD *)(a1 + 80) = v8;
  return 1;
}

