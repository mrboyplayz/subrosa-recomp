/* Address: 0x1401ba3a0 | Name: sub_1401BA3A0 | Size: 222 bytes */
__int64 __fastcall sub_1401BA3A0(__int64 a1, unsigned int a2, int a3)
{
  int v4; // [rsp+20h] [rbp-28h]
  int v5; // [rsp+24h] [rbp-24h]
  int v6; // [rsp+28h] [rbp-20h]
  unsigned int v7; // [rsp+2Ch] [rbp-1Ch]
  int v8; // [rsp+30h] [rbp-18h]

  if ( a3 <= 1 )
    return 1;
  v8 = sub_14019A1A0(a2, (unsigned int)a3);
  v7 = 0;
  v4 = 0;
  do
  {
    v6 = 0;
    v5 = 0;
    do
    {
      v6 |= *(_DWORD *)(a1 + 4LL * (v5 + v8 * v4));
      ++v5;
    }
    while ( v5 < v8 );
    v7 |= (v6 != 0) << v4++;
  }
  while ( v4 < a3 );
  return v7;
}

