/* Address: 0x14019af20 | Name: sub_14019AF20 | Size: 181 bytes */
_BOOL8 __fastcall sub_14019AF20(__int64 a1, char a2)
{
  unsigned int v3; // [rsp+20h] [rbp-28h]
  BOOL v4; // [rsp+24h] [rbp-24h]
  unsigned int v5; // [rsp+2Ch] [rbp-1Ch]
  unsigned int v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+34h] [rbp-14h]

  v6 = *(_DWORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 36);
  v3 = v6 >> a2;
  v4 = v5 < v6 >> a2;
  if ( v5 < v6 >> a2 )
  {
    v7 = v6 >> a2;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = v5 - v3;
    v7 = v6 - v3;
  }
  *(_DWORD *)(a1 + 32) = v7;
  sub_1401B5EA0(a1);
  return v4;
}

