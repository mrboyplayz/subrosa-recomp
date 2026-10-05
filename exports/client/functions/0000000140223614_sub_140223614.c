/* Address: 0x140223614 | Name: sub_140223614 | Size: 155 bytes */
char __fastcall sub_140223614(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  int v4; // r8d
  char v5; // r9
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx

  if ( *(_DWORD *)(a1 + 1148) == 2 && *(_DWORD *)(a1 + 1144) == 1 )
  {
    v1 = *(int *)(a1 + 3564);
    if ( (unsigned int)v1 > 0x63 )
    {
      *errno() = 22;
      sub_14024CF6C(v2);
      return 0;
    }
    v4 = *(_DWORD *)(a1 + 60);
    v5 = *(_BYTE *)(a1 + 65);
    v6 = 0;
    v7 = a1 + 8 * (v1 + 2 * v1 + 145);
    if ( *(_DWORD *)v7 )
    {
      if ( !sub_140214A64(a1, v7, 4, v5, v4) )
      {
        *errno() = 22;
        sub_14024CF6C(v8);
        return v6;
      }
    }
    else
    {
      *(_DWORD *)v7 = 4;
      *(_BYTE *)(v7 + 4) = v5;
      *(_DWORD *)(v7 + 16) = v4;
    }
    return 1;
  }
  return 1;
}

