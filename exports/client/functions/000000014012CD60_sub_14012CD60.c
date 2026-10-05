/* Address: 0x14012cd60 | Name: sub_14012CD60 | Size: 322 bytes */
void __fastcall sub_14012CD60(int a1, int a2, int a3)
{
  __int64 v6; // r9
  unsigned int *v7; // rbp
  unsigned int *v8; // rsi
  signed int v9; // eax
  signed int v10; // eax
  int v11; // ebx
  signed int v12; // eax
  signed int v13; // eax
  signed int v14; // eax

  if ( a1 != -1 )
  {
    v6 = 7166LL * a1;
    v7 = &dword_140404A6C[v6 + 280651440];
    v8 = &dword_140404A6C[v6 + 280651452];
    if ( a2 == 14 )
    {
      v13 = sub_140054130(14, v7, nullptr, v8);
      sub_1400E35D0(v13, -1, a1, 6);
      v14 = sub_140054130(14, v7, nullptr, v8);
      sub_1400E35D0(v14, -1, a1, 6);
    }
    else
    {
      v9 = sub_140054130(a2, v7, nullptr, v8);
      sub_1400E35D0(v9, -1, a1, 0);
      v10 = sub_140054130(a2 + 1, v7, nullptr, v8);
      v11 = 1;
      sub_1400E35D0(v10, -1, a1, 1);
      if ( a3 > 1 )
      {
        do
        {
          v12 = sub_140054130(a2 + 1, v7, nullptr, v8);
          sub_1400E35D0(v12, -1, a1, ((v11++ - 1) >> 1) + 3);
        }
        while ( v11 < a3 );
      }
    }
  }
}

