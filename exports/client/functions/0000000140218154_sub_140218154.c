/* Address: 0x140218154 | Name: sub_140218154 | Size: 120 bytes */
char __fastcall MEMORY[0x140218154](__int64 a1)
{
  int v1; // eax
  __int16 v3; // r9
  __int64 v4; // rcx

  v1 = *(_DWORD *)(a1 + 1144);
  if ( v1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 1148) == 2 )
      return 1;
    goto LABEL_6;
  }
  if ( v1 != 2 || *(_DWORD *)(a1 + 1148) )
  {
LABEL_6:
    v3 = *(_WORD *)(a1 + 66);
    *(_BYTE *)(a1 + 84) = 1;
    v4 = *(_QWORD *)(a1 + 1128);
    if ( *(_QWORD *)(v4 + 16) == *(_QWORD *)(v4 + 8) )
    {
      if ( *(_BYTE *)(v4 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(v4 + 16);
      ***(_WORD ***)(a1 + 1128) = v3;
      **(_QWORD **)(a1 + 1128) += 2LL;
    }
  }
  return 1;
}

