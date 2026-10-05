/* Address: 0x140210d3c | Name: sub_140210D3C | Size: 188 bytes */
char __fastcall sub_140210D3C(__int64 a1, _QWORD *a2)
{
  __int64 v2; // xmm0_8
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v6; // rax
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  char v10; // bl
  __int64 v11; // rcx

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v3 = *(int *)(a1 + 3564);
    if ( (unsigned int)v3 > 0x63 )
    {
      *errno() = 22;
      sub_14024CF6C(v4);
      return 0;
    }
    v6 = 3 * v3;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      v2 = **(_QWORD **)(a1 + 8 * v6 + 1168);
      goto LABEL_13;
    }
    v7 = *(_DWORD *)(a1 + 60);
    v8 = *(unsigned __int16 *)(a1 + 66);
    v9 = a1 + 1160 + 8 * v6;
    v10 = 0;
    if ( *(_DWORD *)v9 )
    {
      if ( !(unsigned __int8)sub_140214EC4(a1, v9, 4, v8, v7) )
      {
        *errno() = 22;
        sub_14024CF6C(v11);
        return v10;
      }
    }
    else
    {
      *(_DWORD *)v9 = 4;
      *(_WORD *)(v9 + 4) = v8;
      *(_DWORD *)(v9 + 16) = v7;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
LABEL_13:
  *a2 = v2;
  return 1;
}

