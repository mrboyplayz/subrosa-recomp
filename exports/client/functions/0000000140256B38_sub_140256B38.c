/* Address: 0x140256b38 | Name: sub_140256B38 | Size: 380 bytes */
__int64 __fastcall sub_140256B38(unsigned __int16 a1, __int64 a2)
{
  __int64 v2; // rdi
  bool v4; // sf
  char *v5; // rbp
  __int64 v6; // rbx
  _BYTE *v7; // rdx
  __int64 v8; // rbx
  int v9; // ebx
  char *v10; // rbp
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  int v13; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[12]; // [rsp+24h] [rbp-34h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]

  v2 = a2;
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) != 0 )
  {
    v4 = *(_DWORD *)(a2 + 16) - 2 < 0;
    *(_DWORD *)(a2 + 16) -= 2;
    if ( !v4 )
    {
      **(_WORD **)a2 = a1;
      *(_QWORD *)a2 += 2LL;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v15);
    }
LABEL_22:
    sub_140251E94(a1, a2);
    return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v15);
  }
  v5 = (char *)&unk_1403022C0;
  if ( fileno((FILE *)a2) == -1 || fileno((FILE *)v2) == -2 )
  {
    v7 = &unk_1403022C0;
  }
  else
  {
    v6 = (__int64)fileno((FILE *)v2) >> 6;
    v7 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (fileno((FILE *)v2) & 0x3F));
  }
  if ( (unsigned __int8)(v7[57] - 1) <= 1u )
    goto LABEL_20;
  if ( fileno((FILE *)v2) != -1 && fileno((FILE *)v2) != -2 )
  {
    v8 = (__int64)fileno((FILE *)v2) >> 6;
    v5 = (char *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 72LL * (fileno((FILE *)v2) & 0x3F));
  }
  v9 = 0;
  if ( v5[56] >= 0 )
  {
LABEL_20:
    v4 = *(_DWORD *)(v2 + 16) - 2 < 0;
    *(_DWORD *)(v2 + 16) -= 2;
    if ( !v4 )
    {
      **(_WORD **)v2 = a1;
      *(_QWORD *)v2 += 2LL;
      return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v15);
    }
    a2 = v2;
    goto LABEL_22;
  }
  if ( !(unsigned int)CDialog::CreateIndirect(
                        (CDialog *)&v13,
                        (const struct DLGTEMPLATE *)v14,
                        (struct CWnd *)5,
                        (void *)a1)
    && v13 > 0 )
  {
    v10 = v14;
    do
    {
      if ( (unsigned int)unknown_libname_207((unsigned int)*v10, v2) == -1 )
        break;
      ++v9;
      ++v10;
    }
    while ( v9 < v13 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v15);
}

