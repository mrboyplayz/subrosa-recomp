/* Address: 0x14021c7a4 | Name: sub_14021C7A4 | Size: 344 bytes */
char __fastcall sub_14021C7A4(__int64 a1)
{
  unsigned __int16 *v1; // rdi
  __int64 v3; // rdx
  bool v4; // cl
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ecx
  char v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // al
  unsigned int v14; // eax

  v1 = nullptr;
  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v5 = *(int *)(a1 + 3564);
    if ( (unsigned int)v5 > 0x63 )
    {
      *errno() = 22;
      sub_14024CF6C(v6);
      return 0;
    }
    v7 = 3 * v5;
    if ( *(_DWORD *)(a1 + 1144) == 1 )
    {
      v8 = *(_DWORD *)(a1 + 60);
      v9 = *(_BYTE *)(a1 + 65);
      v10 = a1 + 1160 + 8 * v7;
      if ( *(_DWORD *)v10 )
      {
        if ( !sub_140214C94(a1, v10, 3, v9, v8) )
        {
          *errno() = 22;
          sub_14024CF6C(v11);
          v12 = 0;
          goto LABEL_21;
        }
      }
      else
      {
        *(_DWORD *)v10 = 3;
        *(_BYTE *)(v10 + 4) = v9;
        *(_DWORD *)(v10 + 16) = v8;
      }
    }
    else
    {
      v1 = **(unsigned __int16 ***)(a1 + 8 * v7 + 1168);
    }
    v12 = 1;
LABEL_21:
    if ( v12 )
      goto LABEL_3;
    return 0;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  v1 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_3:
  if ( *(_DWORD *)(a1 + 1144) == 1 && *(_DWORD *)(a1 + 1148) != 1 )
    return 1;
  if ( !v1 || (v3 = *((_QWORD *)v1 + 1)) == 0 )
  {
    *(_QWORD *)(a1 + 72) = "(null)";
    v14 = 6;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      v4 = 1;
      goto LABEL_25;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      v4 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_25;
    }
  }
  v4 = 0;
LABEL_25:
  *(_QWORD *)(a1 + 72) = v3;
  v14 = *v1;
  if ( !v4 )
  {
LABEL_28:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_29;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v14 >>= 1;
LABEL_29:
  *(_DWORD *)(a1 + 80) = v14;
  return 1;
}

