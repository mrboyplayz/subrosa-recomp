/* Address: 0x14021ec5c | Name: sub_14021EC5C | Size: 255 bytes */
char __fastcall sub_14021EC5C(__int64 a1)
{
  int v2; // ecx
  int v3; // ecx
  bool v4; // al
  const struct DLGTEMPLATE *v5; // rdx
  __int64 v6; // r8
  _BYTE *v7; // rdx
  __int64 v9; // rcx
  unsigned __int16 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 60) - 2;
  if ( !v2 )
  {
    v4 = 0;
LABEL_7:
    if ( v4 )
      goto LABEL_8;
    goto LABEL_16;
  }
  v3 = v2 - 1;
  if ( !v3 || v3 == 9 )
  {
LABEL_8:
    v10 = 0;
    if ( sub_140211650(a1, &v10) )
    {
      if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
      {
        v5 = *(const struct DLGTEMPLATE **)(a1 + 1120);
        if ( v5 )
        {
          v6 = *(_QWORD *)(a1 + 1112) >> 1;
        }
        else
        {
          v6 = 512;
          v5 = (const struct DLGTEMPLATE *)(a1 + 88);
        }
        if ( (unsigned int)CDialog::CreateIndirect((CDialog *)(a1 + 80), v5, (struct CWnd *)v6, (void *)v10) )
          *(_BYTE *)(a1 + 64) = 1;
        goto LABEL_23;
      }
      return 1;
    }
    return 0;
  }
  if ( *(_DWORD *)(a1 + 60) != 13 )
  {
    v4 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
    goto LABEL_7;
  }
LABEL_16:
  v7 = *(_BYTE **)(a1 + 1120);
  if ( !v7 )
    v7 = (_BYTE *)(a1 + 88);
  if ( !sub_14020F6BC(a1, v7) )
    return 0;
  if ( *(_DWORD *)(a1 + 1144) != 1 || *(_DWORD *)(a1 + 1148) == 1 )
  {
    *(_DWORD *)(a1 + 80) = 1;
LABEL_23:
    v9 = *(_QWORD *)(a1 + 1120);
    if ( !v9 )
      v9 = a1 + 88;
    *(_QWORD *)(a1 + 72) = v9;
  }
  return 1;
}

