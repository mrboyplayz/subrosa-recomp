/* Address: 0x14019a290 | Name: sub_14019A290 | Size: 187 bytes */
__int64 __fastcall sub_14019A290(__int64 a1, int a2, int a3, unsigned int a4)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]

  v6 = sub_14019A1A0(*(unsigned int *)(a1 + 32), a4);
  if ( a2 )
  {
    *(_DWORD *)(a1 + 36) += *(_DWORD *)(a1 + 32) - (a4 - a2) * v6;
    v4 = (a3 - a2) * v6;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 32) - (a4 - a3) * v6;
  }
  *(_DWORD *)(a1 + 32) = v4;
  return sub_1401B6120(a1);
}

