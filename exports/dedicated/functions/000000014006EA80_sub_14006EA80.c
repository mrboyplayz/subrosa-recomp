/* Address: 0x14006ea80 | Name: sub_14006EA80 | Size: 391 bytes */
__int64 __fastcall sub_14006EA80(signed int a1)
{
  __int64 v2; // rsi
  int *v3; // rdi
  signed int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 i; // r8
  __int64 v8; // rcx
  __int64 v9; // r9
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  char v14; // al
  __int64 v15; // rcx

  v2 = a1;
  v3 = &dword_190260720[1760 * a1];
  v4 = 3;
  v5 = 7040LL * a1;
  v6 = v5 + 128;
  do
  {
    for ( i = 0; i < 62; ++i )
    {
      v8 = *((char *)v3 + i);
      if ( !(_BYTE)v8 )
        break;
      v9 = v6 + i;
      if ( (unsigned __int8)(v8 - 65) > 0x19u )
      {
        *((_BYTE *)&unk_19025F0C0 + v9 + 884) = v8;
      }
      else
      {
        v10 = *((_BYTE *)&unk_19025F0C0 + 7040 * v2 + 4 * v8 + 5988) + 65;
        *((_BYTE *)&unk_19025F0C0 + v9 + 2932) = 15;
        *((_BYTE *)&unk_19025F0C0 + v9 + 884) = v10;
        if ( *(_DWORD *)((char *)&unk_19025F0C0 + v5 + 6760) == *((_DWORD *)&unk_19025F0C0 + 1760 * v2 + v8 + 1497) )
          *((_BYTE *)&unk_19025F0C0 + v9 + 2932) = 12;
      }
    }
    *((_BYTE *)&unk_19025F0C0 + i + v6 + 884) = 0;
    sub_1400395A0(a1, v4 - 1);
    v11 = 0;
    do
    {
      v12 = *((char *)v3 + v11);
      if ( !(_BYTE)v12 )
        break;
      if ( (unsigned __int8)(v12 - 65) > 0x19u )
      {
        v14 = *((_BYTE *)v3 + v11);
      }
      else
      {
        v13 = *((_DWORD *)&unk_19025F0C0 + 1760 * v2 + *((int *)&unk_19025F0C0 + 1760 * v2 + v12 + 1497) + 1658);
        v14 = v13 == -1 ? 32 : v13 + 65;
      }
      v15 = v6 + v11++;
      *((_BYTE *)&unk_19025F0C0 + v15 + 948) = v14;
    }
    while ( v11 < 62 );
    *((_BYTE *)&unk_19025F0C0 + v6 + v11 + 948) = 0;
    sub_1400395A0(a1, v4);
    v4 += 3;
    v3 += 16;
    v6 += 192;
  }
  while ( v4 < 18 );
  return sub_14006E690(a1);
}

