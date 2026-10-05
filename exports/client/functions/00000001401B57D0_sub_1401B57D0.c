/* Address: 0x1401b57d0 | Name: sub_1401B57D0 | Size: 427 bytes */
__int64 __fastcall sub_1401B57D0(int a1, __int64 a2)
{
  int v3; // [rsp+20h] [rbp-28h]
  int v4; // [rsp+24h] [rbp-24h]
  unsigned int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]
  int v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+3Ch] [rbp-Ch]

  v3 = a1 - 1;
  v5 = *(int *)(a2 + 4LL * (a1 - 1)) < 0;
  v4 = abs(*(_DWORD *)(a2 + 4LL * (a1 - 1)));
  do
  {
    --v3;
    if ( a1 - v3 >= v4 )
      v6 = v4;
    else
      v6 = a1 - v3;
    if ( a1 - v3 <= v4 )
      v7 = v4;
    else
      v7 = a1 - v3;
    v5 += *((_DWORD *)*(&off_14027E020 + v6) + v7);
    v4 += abs(*(_DWORD *)(a2 + 4LL * v3));
    if ( *(int *)(a2 + 4LL * v3) < 0 )
    {
      if ( a1 - v3 >= v4 + 1 )
        v8 = v4 + 1;
      else
        v8 = a1 - v3;
      if ( a1 - v3 <= v4 + 1 )
        v9 = v4 + 1;
      else
        v9 = a1 - v3;
      v5 += *((_DWORD *)*(&off_14027E020 + v8) + v9);
    }
  }
  while ( v3 > 0 );
  return v5;
}

