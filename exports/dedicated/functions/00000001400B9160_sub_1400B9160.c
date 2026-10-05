/* Address: 0x1400b9160 | Name: sub_1400B9160 | Size: 322 bytes */
void __fastcall sub_1400B9160(int a1, int a2, int a3)
{
  unsigned __int64 v6; // r9
  int *v7; // rbp
  int *v8; // rsi
  int *v9; // r9
  signed int v10; // eax
  signed int v11; // eax
  int v12; // ebx
  signed int v13; // eax
  signed int v14; // eax
  signed int v15; // eax

  if ( a1 != -1 )
  {
    v6 = 28664LL * a1;
    v7 = &dword_190941BEC[v6 / 4];
    v8 = (int *)((char *)&xmmword_190941C1C + v6);
    v9 = (int *)((char *)&xmmword_190941C1C + v6);
    if ( a2 == 14 )
    {
      v14 = sub_14003B080(14, v7, nullptr, v9);
      sub_140089E50(v14, -1, a1, 6);
      v15 = sub_14003B080(14, v7, nullptr, v8);
      sub_140089E50(v15, -1, a1, 6);
    }
    else
    {
      v10 = sub_14003B080(a2, v7, nullptr, v9);
      sub_140089E50(v10, -1, a1, 0);
      v11 = sub_14003B080(a2 + 1, v7, nullptr, v8);
      v12 = 1;
      sub_140089E50(v11, -1, a1, 1);
      if ( a3 > 1 )
      {
        do
        {
          v13 = sub_14003B080(a2 + 1, v7, nullptr, v8);
          sub_140089E50(v13, -1, a1, ((v12++ - 1) >> 1) + 3);
        }
        while ( v12 < a3 );
      }
    }
  }
}

