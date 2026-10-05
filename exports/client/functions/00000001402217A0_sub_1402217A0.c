/* Address: 0x1402217a0 | Name: sub_1402217A0 | Size: 181 bytes */
char __fastcall sub_1402217A0(__int64 a1)
{
  const __int16 **v1; // rdi
  char result; // al
  int v4; // edx
  bool v5; // al
  const __int16 *v6; // rcx
  int v7; // eax
  const char *v8; // rcx

  v1 = (const __int16 **)(a1 + 72);
  result = unknown_libname_252(a1, (_QWORD *)(a1 + 72));
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
      return 1;
    v4 = *(_DWORD *)(a1 + 56);
    if ( v4 == -1 )
      v4 = 0x7FFFFFFF;
    switch ( *(_DWORD *)(a1 + 60) )
    {
      case 2:
        v5 = 0;
        break;
      case 3:
      case 0xC:
LABEL_13:
        v6 = *v1;
        if ( !*v1 )
        {
          v6 = L"(null)";
          *v1 = L"(null)";
        }
        *(_BYTE *)(a1 + 84) = 1;
        v7 = MEMORY[0x140254F48](v6, v4);
LABEL_19:
        *(_DWORD *)(a1 + 80) = v7;
        return 1;
      case 0xD:
LABEL_16:
        v8 = (const char *)*v1;
        if ( !*v1 )
        {
          v8 = "(null)";
          *v1 = (const __int16 *)"(null)";
        }
        v7 = strnlen(v8, v4);
        goto LABEL_19;
      default:
        v5 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
        break;
    }
    if ( v5 )
      goto LABEL_13;
    goto LABEL_16;
  }
  return result;
}

