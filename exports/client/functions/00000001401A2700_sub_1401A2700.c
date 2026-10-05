/* Address: 0x1401a2700 | Name: sub_1401A2700 | Size: 230 bytes */
__int64 __fastcall sub_1401A2700(__int64 a1, signed int a2, signed int a3, unsigned int *a4)
{
  unsigned int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+24h] [rbp-14h]
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

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
  v4 = sub_14019B0A0(a4, *((_DWORD *)*(&off_14027E020 + v8) + v9) + *((_DWORD *)*(&off_14027E020 + v6) + v7));
  return sub_1401B5990((unsigned int)a2, (unsigned int)a3, v4, a1);
}

