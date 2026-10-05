/* Address: 0x140223f88 | Name: unknown_libname_585 | Size: 213 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_585(__int64 a1)
{
  unsigned __int16 *v2; // rsi
  int v3; // edi
  void *v4; // r9
  __int64 v6; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v7; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v8[12]; // [rsp+34h] [rbp-24h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    v2 = *(unsigned __int16 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = (void *)*v2;
      v7 = 0;
      ++v2;
      if ( (unsigned int)CDialog::CreateIndirect((CDialog *)&v7, (const struct DLGTEMPLATE *)v8, (struct CWnd *)6, v4)
        || !v7 )
      {
        break;
      }
      unknown_libname_593(a1 + 1128, v8, v7, a1 + 40, a1 + 16);
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v9);
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    unknown_libname_593(a1 + 1128, *(_QWORD *)(a1 + 72), *(unsigned int *)(a1 + 80), a1 + 40, a1 + 16);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v9);
}

