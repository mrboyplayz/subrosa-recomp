/* Address: 0x1402475ec | Name: sub_1402475EC | Size: 349 bytes */
__int64 __fastcall sub_1402475EC(char *a1)
{
  int v2; // eax
  __int64 v3; // rcx

  v2 = set_error_mode(3);
  if ( v2 == 1 || !v2 && dword_140404A6C[19064881] == 1 )
    return write_string_to_console(a1);
  if ( (unsigned int)sub_140259444(&dword_140404A6C[19064885], 788, L"Runtime Error!\n\nProgram: ") )
    goto LABEL_15;
  HIWORD(dword_140404A6C[19065027]) = 0;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, char *, __int64))GetModuleFileNameW)(
                        0,
                        (char *)&dword_140404A6C[19064897] + 2,
                        260) )
  {
    if ( (unsigned int)sub_140259444((char *)&dword_140404A6C[19064897] + 2, 763, L"<program name unknown>") )
      goto LABEL_15;
  }
  v3 = -1;
  do
    ++v3;
  while ( *((_WORD *)&dword_140404A6C[19064897] + v3 + 1) );
  if ( (unsigned __int64)(v3 + 1) > 0x3C
    && (unsigned int)sub_140260D80((char *)&dword_140404A6C[19064868] + 2 * v3, 763 - (v3 - 59), asc_140285E10, 3)
    || (unsigned int)sub_14025ACB4(&dword_140404A6C[19064885], 788, L"\n\n")
    || (unsigned int)sub_14025ACB4(&dword_140404A6C[19064885], 788, a1) )
  {
LABEL_15:
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140247748LL);
  }
  return unknown_libname_892(&dword_140404A6C[19064885], L"Microsoft Visual C++ Runtime Library", 73744);
}

