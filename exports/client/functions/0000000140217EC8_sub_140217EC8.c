/* Address: 0x140217ec8 | Name: sub_140217EC8 | Size: 152 bytes */
char __fastcall sub_140217EC8(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  char v4; // r8
  __int64 v6; // rcx

  v1 = *(_DWORD *)(a1 + 1144);
  if ( v1 == 1 )
  {
    if ( *(_DWORD *)(a1 + 1148) == 2 )
      return 1;
  }
  else if ( v1 == 2 && !*(_DWORD *)(a1 + 1148) )
  {
    return 1;
  }
  if ( (unsigned __int8)sub_1402188EC(a1, 0) )
  {
    v3 = *(_QWORD *)(a1 + 1128);
    v4 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(v3 + 16) == *(_QWORD *)(v3 + 8) )
    {
      if ( *(_BYTE *)(v3 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(v3 + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v4;
    }
    return 1;
  }
  *errno() = 22;
  sub_14024CF6C(v6);
  return 0;
}

