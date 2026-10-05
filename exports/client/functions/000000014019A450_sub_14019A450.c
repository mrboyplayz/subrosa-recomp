/* Address: 0x14019a450 | Name: sub_14019A450 | Size: 154 bytes */
__int64 __fastcall sub_14019A450(__int64 a1, int a2, char a3)
{
  unsigned int v4; // [rsp+20h] [rbp-18h]
  unsigned int v5; // [rsp+20h] [rbp-18h]
  unsigned int v6; // [rsp+24h] [rbp-14h]
  unsigned int v7; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 32);
  v6 = v4 >> a3;
  v5 = v4 - (v4 >> a3);
  if ( a2 )
  {
    *(_DWORD *)(a1 + 36) += v5;
    v7 = v6;
  }
  else
  {
    v7 = v5;
  }
  *(_DWORD *)(a1 + 32) = v7;
  return sub_1401B6120(a1);
}

