/* Address: 0x1401a2610 | Name: sub_1401A2610 | Size: 234 bytes */
__int64 __fastcall sub_1401A2610(__int64 a1, signed int a2, int a3, __int64 a4)
{
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+24h] [rbp-24h]
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+2Ch] [rbp-1Ch]
  int v10; // [rsp+30h] [rbp-18h]

  if ( a2 >= a3 )
    v6 = a3;
  else
    v6 = a2;
  if ( a2 <= a3 )
    v7 = a3;
  else
    v7 = a2;
  if ( a2 >= a3 + 1 )
    v8 = a3 + 1;
  else
    v8 = a2;
  if ( a2 <= a3 + 1 )
    v9 = a3 + 1;
  else
    v9 = a2;
  v10 = *((_DWORD *)*(&off_14027E020 + v8) + v9) + *((_DWORD *)*(&off_14027E020 + v6) + v7);
  v4 = sub_1401B57D0((unsigned int)a2, a1);
  return sub_14019A5E0(a4, v4, v10);
}

