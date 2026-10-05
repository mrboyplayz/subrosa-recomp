/* Address: 0x1402183f4 | Name: sub_1402183F4 | Size: 96 bytes */
char __fastcall sub_1402183F4(__int64 a1)
{
  char result; // al
  __int64 v3; // rcx
  char v4; // r8

  result = sub_140218994(a1, 0);
  if ( result )
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
  return result;
}

