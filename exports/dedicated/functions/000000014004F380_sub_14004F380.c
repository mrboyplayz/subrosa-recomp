/* Address: 0x14004f380 | Name: sub_14004F380 | Size: 279 bytes */
unsigned __int64 __fastcall sub_14004F380(_BYTE *a1, __int64 a2, unsigned __int64 a3, FILE *a4)
{
  _BYTE *v6; // rsi
  int i; // ebx
  int v8; // ebx
  _BYTE *v9; // r14
  char v10; // al
  int v11; // ecx
  int v12; // ebx
  _BYTE *v13; // r14
  char v14; // al
  int v15; // ecx

  v6 = a1;
  switch ( a2 )
  {
    case 1LL:
      for ( i = 0; i < a3; ++v6 )
      {
        ++i;
        *v6 = fgetc(a4);
      }
      break;
    case 2LL:
      v8 = 0;
      if ( a3 )
      {
        v9 = a1 + 1;
        do
        {
          *v9 = fgetc(a4);
          v10 = fgetc(a4);
          v11 = 2 * v8++;
          v9 += 2;
          v6[v11] = v10;
        }
        while ( v8 < a3 );
      }
      break;
    case 4LL:
      v12 = 0;
      if ( a3 )
      {
        v13 = a1 + 2;
        do
        {
          v13[1] = fgetc(a4);
          *v13 = fgetc(a4);
          *(v13 - 1) = fgetc(a4);
          v14 = fgetc(a4);
          v15 = 4 * v12++;
          v13 += 4;
          v6[v15] = v14;
        }
        while ( v12 < a3 );
      }
      break;
  }
  return a3;
}

