/* Address: 0x14006e940 | Name: sub_14006E940 | Size: 320 bytes */
__int64 __fastcall sub_14006E940(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r11d
  __int64 v5; // r10
  __int64 v6; // rsi
  __int64 v8; // rax
  unsigned __int8 v9; // cl
  __int64 v10; // r8
  __int64 v11; // rcx
  char v12; // al

  v4 = 0;
  v5 = 0;
  v6 = a1;
  do
  {
    v8 = *(char *)(v5 + a3);
    if ( !(_BYTE)v8 )
      break;
    v9 = v8 - 65;
    if ( a4 )
    {
      v10 = v5 + ((a2 + 110 * v6) << 6);
      if ( v9 > 0x19u )
      {
        *((_BYTE *)&unk_19025F0C0 + v10 + 884) = v8;
      }
      else
      {
        v11 = *(char *)(v5 + a3);
        v12 = *((_BYTE *)&unk_19025F0C0 + 7040 * v6 + 4 * v8 + 5988) + 65;
        *((_BYTE *)&unk_19025F0C0 + v10 + 2932) = 15;
        *((_BYTE *)&unk_19025F0C0 + v10 + 884) = v12;
        if ( *((_DWORD *)&unk_19025F0C0 + 1760 * v6 + 1690) == *((_DWORD *)&unk_19025F0C0 + 1760 * v6 + v11 + 1497) )
          *((_BYTE *)&unk_19025F0C0 + v10 + 2932) = 12;
      }
    }
    else
    {
      if ( v9 <= 0x19u )
      {
        LODWORD(v8) = *((_DWORD *)&unk_19025F0C0 + 1760 * v6 + *((int *)&unk_19025F0C0 + 1760 * v6 + v8 + 1497) + 1658);
        if ( (_DWORD)v8 == -1 )
          LOBYTE(v8) = 32;
        else
          LOBYTE(v8) = v8 + 65;
      }
      *((_BYTE *)&unk_19025F0C0 + 7040 * v6 + 64 * a2 + v5 + 884) = v8;
    }
    ++v4;
    ++v5;
  }
  while ( v5 < 62 );
  *((_BYTE *)&unk_19025F0C0 + 7040 * v6 + 64 * a2 + v4 + 884) = 0;
  return v4;
}

