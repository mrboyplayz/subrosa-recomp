/* Address: 0x140217e54 | Name: sub_140217E54 | Size: 116 bytes */
char __fastcall sub_140217E54(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // r8
  __int64 v5; // rcx

  if ( (unsigned __int8)sub_140218844(a1, 0) )
  {
    v2 = *(_QWORD *)(a1 + 1128);
    v3 = *(_BYTE *)(a1 + 65);
    if ( *(_QWORD *)(v2 + 16) == *(_QWORD *)(v2 + 8) )
    {
      if ( *(_BYTE *)(v2 + 24) )
        ++*(_DWORD *)(a1 + 40);
      else
        *(_DWORD *)(a1 + 40) = -1;
    }
    else
    {
      ++*(_DWORD *)(a1 + 40);
      ++*(_QWORD *)(v2 + 16);
      *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v3;
    }
    return 1;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v5);
    return 0;
  }
}

