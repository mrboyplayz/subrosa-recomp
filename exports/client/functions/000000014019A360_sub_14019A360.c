/* Address: 0x14019a360 | Name: sub_14019A360 | Size: 225 bytes */
__int64 __fastcall sub_14019A360(__int64 a1, int a2, int a3, char a4)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h]

  v6 = *(_DWORD *)(a1 + 32) >> a4;
  if ( a2 )
  {
    *(_DWORD *)(a1 + 36) += *(_DWORD *)(a1 + 32) - ((1 << a4) - a2) * v6;
    v4 = (a3 - a2) * v6;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 32) - ((1 << a4) - a3) * v6;
  }
  *(_DWORD *)(a1 + 32) = v4;
  return sub_1401B6120(a1);
}

