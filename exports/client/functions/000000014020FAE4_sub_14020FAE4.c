/* Address: 0x14020fae4 | Name: sub_14020FAE4 | Size: 186 bytes */
char __fastcall sub_14020FAE4(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v5; // rax
  int v6; // r8d
  char v7; // r9
  __int64 v8; // rdx
  char v9; // bl
  __int64 v10; // rcx

  if ( *(_DWORD *)(a1 + 1148) != 1 )
  {
    v2 = *(int *)(a1 + 3564);
    if ( (unsigned int)v2 > 0x63 )
    {
      *errno() = 22;
      sub_14024CF6C(v3);
      return 0;
    }
    v5 = 3 * v2;
    if ( *(_DWORD *)(a1 + 1144) != 1 )
    {
      *a2 = **(int **)(a1 + 8 * v5 + 1168);
      return 1;
    }
    v6 = *(_DWORD *)(a1 + 60);
    v7 = *(_BYTE *)(a1 + 65);
    v8 = a1 + 1160 + 8 * v5;
    v9 = 0;
    if ( *(_DWORD *)v8 )
    {
      if ( !(unsigned __int8)sub_140214A64(a1, v8, 1, v7, v6) )
      {
        *errno() = 22;
        sub_14024CF6C(v10);
        return v9;
      }
    }
    else
    {
      *(_DWORD *)v8 = 1;
      *(_BYTE *)(v8 + 4) = v7;
      *(_DWORD *)(v8 + 16) = v6;
    }
    return 1;
  }
  *(_QWORD *)(a1 + 32) += 8LL;
  *a2 = *(int *)(*(_QWORD *)(a1 + 32) - 8LL);
  return 1;
}

