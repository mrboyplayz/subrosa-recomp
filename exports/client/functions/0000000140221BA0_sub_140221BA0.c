/* Address: 0x140221ba0 | Name: sub_140221BA0 | Size: 233 bytes */
char __fastcall sub_140221BA0(__int64 a1)
{
  const __int16 **v1; // rsi
  char result; // al
  int v4; // ebp
  const __int16 *v5; // rbx
  int v6; // eax
  int i; // r8d
  const __int16 *v8; // rax

  v1 = (const __int16 **)(a1 + 72);
  result = unknown_libname_254(a1, (_QWORD *)(a1 + 72));
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
    {
      v4 = *(_DWORD *)(a1 + 56);
      if ( v4 == -1 )
        v4 = 0x7FFFFFFF;
      v5 = *v1;
      if ( (unsigned __int8)MEMORY[0x140211A94](
                              *(_QWORD *)a1,
                              *(unsigned __int16 *)(a1 + 66),
                              *(unsigned int *)(a1 + 60)) )
      {
        if ( !v5 )
        {
          v5 = L"(null)";
          *v1 = L"(null)";
        }
        *(_BYTE *)(a1 + 84) = 1;
        v6 = MEMORY[0x140254F48](v5, v4);
      }
      else
      {
        if ( !v5 )
        {
          v5 = (const __int16 *)"(null)";
          *v1 = (const __int16 *)"(null)";
        }
        for ( i = 0; i < v4; v5 = (const __int16 *)((char *)v8 + 1) )
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
    }
    return 1;
  }
  return result;
}

