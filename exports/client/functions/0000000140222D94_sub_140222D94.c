/* Address: 0x140222d94 | Name: sub_140222D94 | Size: 63 bytes */
char __fastcall sub_140222D94(__int64 a1, __int64 a2, int a3, char a4, int a5)
{
  __int64 v6; // rcx

  if ( !*(_DWORD *)a2 )
  {
    *(_DWORD *)a2 = a3;
    *(_BYTE *)(a2 + 4) = a4;
    *(_DWORD *)(a2 + 16) = a5;
    return 1;
  }
  if ( sub_140214A64(a1, a2, a3, a4, a5) )
    return 1;
  *errno() = 22;
  sub_14024CF6C(v6);
  return 0;
}

