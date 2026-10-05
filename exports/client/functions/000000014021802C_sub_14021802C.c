/* Address: 0x14021802c | Name: sub_14021802C | Size: 124 bytes */
char __fastcall sub_14021802C(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rax
  __int64 v4; // rcx

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
  *(_BYTE *)(a1 + 84) = 1;
  v3 = *(_QWORD *)(a1 + 1128);
  v4 = *(unsigned __int16 *)(a1 + 66);
  if ( ((*(_DWORD *)(v3 + 20) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(v4, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}

