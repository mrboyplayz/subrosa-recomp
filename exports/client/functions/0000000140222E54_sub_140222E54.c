/* Address: 0x140222e54 | Name: sub_140222E54 | Size: 64 bytes */
char __fastcall sub_140222E54(_QWORD *a1, __int64 a2, int a3, unsigned __int16 a4, int a5)
{
  __int64 v6; // rcx

  if ( !*(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = a3;
    *(_WORD *)(a2 + 4) = a4;
    *(_DWORD *)(a2 + 16) = a5;
    return 1;
  }
  if ( sub_1402150C4(a1, a2, a3, a4, a5) )
    return 1;
  *errno() = 22;
  sub_14024CF6C(v6);
  return 0;
}

