/* Address: 0x1400959e0 | Name: sub_1400959E0 | Size: 279 bytes */
unsigned __int64 __fastcall sub_1400959E0(unsigned __int8 *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int8 *v6; // rsi
  int i; // ebx
  int v8; // ebx
  unsigned __int8 *v9; // r14
  int v10; // ebx
  unsigned __int8 *v11; // r14

  v6 = a1;
  switch ( a2 )
  {
    case 1LL:
      for ( i = 0; i < a3; ++v6 )
      {
        sub_14020BCA8(*v6, a4);
        ++i;
      }
      break;
    case 2LL:
      v8 = 0;
      if ( a3 )
      {
        v9 = a1 + 1;
        do
        {
          sub_14020BCA8(*v9, a4);
          sub_14020BCA8(v6[2 * v8++], a4);
          v9 += 2;
        }
        while ( v8 < a3 );
      }
      break;
    case 4LL:
      v10 = 0;
      if ( a3 )
      {
        v11 = a1 + 2;
        do
        {
          sub_14020BCA8(v11[1], a4);
          sub_14020BCA8(*v11, a4);
          sub_14020BCA8(*(v11 - 1), a4);
          sub_14020BCA8(v6[4 * v10++], a4);
          v11 += 4;
        }
        while ( v10 < a3 );
      }
      break;
  }
  return a3;
}

