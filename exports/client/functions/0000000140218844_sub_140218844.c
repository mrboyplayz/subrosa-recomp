/* Address: 0x140218844 | Name: sub_140218844 | Size: 168 bytes */
char __fastcall sub_140218844(__int64 a1)
{
  __int64 v1; // r9
  int v3; // ecx
  __int64 v4; // rcx
  char *v5; // rax
  char v6; // cl
  __int64 v7; // rcx

  v1 = *(char *)(a1 + 65);
  *(_BYTE *)(a1 + 84) = 0;
  if ( (int)v1 < -1 )
    v3 = 0;
  else
    v3 = *(_WORD *)(***(_QWORD ***)(a1 + 8) + 2 * v1) & 0x8000;
  if ( !v3 )
    return 1;
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
    *(_BYTE *)(**(_QWORD **)(a1 + 1128))++ = v1;
  }
  v5 = *(char **)(a1 + 24);
  v6 = *v5;
  *(_BYTE *)(a1 + 65) = *v5;
  *(_QWORD *)(a1 + 24) = v5 + 1;
  if ( v6 )
    return 1;
  *errno() = 22;
  sub_14024CF6C(v7);
  return 0;
}

