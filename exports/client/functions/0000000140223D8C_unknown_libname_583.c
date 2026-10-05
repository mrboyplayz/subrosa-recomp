/* Address: 0x140223d8c | Name: unknown_libname_583 | Size: 289 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_583(__int64 a1)
{
  unsigned __int16 *v2; // rsi
  int v3; // edi
  void *v4; // r9
  _DWORD *v5; // r9
  int v6; // r8d
  __int64 v7; // r10
  _DWORD *v8; // r9
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  int v11; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v12[12]; // [rsp+34h] [rbp-24h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 84) && *(int *)(a1 + 80) > 0 )
  {
    v2 = *(unsigned __int16 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = (void *)*v2;
      v11 = 0;
      ++v2;
      if ( (unsigned int)CDialog::CreateIndirect((CDialog *)&v11, (const struct DLGTEMPLATE *)v12, (struct CWnd *)6, v4)
        || !v11 )
      {
        break;
      }
      v5 = (_DWORD *)(a1 + 40);
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL) )
        sub_1402248A8(a1 + 1128, (unsigned int)v12, v11, (_DWORD)v5, a1 + 16);
      else
        *v5 += v11;
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ v13);
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 80);
    v7 = a1 + 1128;
    v8 = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)v7 + 8LL) )
      sub_1402248A8(v7, *(_QWORD *)(a1 + 72), v6, (_DWORD)v8, a1 + 16);
    else
      *v8 += v6;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ v13);
}

