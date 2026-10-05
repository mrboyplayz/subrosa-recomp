/* Address: 0x1400c5610 | Name: sub_1400C5610 | Size: 320 bytes */
__int64 __fastcall sub_1400C5610(int a1, int a2, __int64 a3, int a4)
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
        *((_BYTE *)&dword_140404A6C[278846114] + v10) = v8;
      }
      else
      {
        v11 = *(char *)(v5 + a3);
        v12 = LOBYTE(dword_140404A6C[1760 * v6 + 278847390 + v8]) + 65;
        *((_BYTE *)&dword_140404A6C[278846626] + v10) = 15;
        *((_BYTE *)&dword_140404A6C[278846114] + v10) = v12;
        if ( dword_140404A6C[1760 * v6 + 278847583] == dword_140404A6C[1760 * v6 + 278847390 + v11] )
          *((_BYTE *)&dword_140404A6C[278846626] + v10) = 12;
      }
    }
    else
    {
      if ( v9 <= 0x19u )
      {
        LODWORD(v8) = dword_140404A6C[1760 * v6 + 278847551 + (int)dword_140404A6C[1760 * v6 + 278847390 + v8]];
        if ( (_DWORD)v8 == -1 )
          LOBYTE(v8) = 32;
        else
          LOBYTE(v8) = v8 + 65;
      }
      *((_BYTE *)&dword_140404A6C[1760 * v6 + 278846114 + 16 * a2] + v5) = v8;
    }
    ++v4;
    ++v5;
  }
  while ( v5 < 62 );
  *((_BYTE *)&dword_140404A6C[1760 * v6 + 278846114 + 16 * a2] + v4) = 0;
  return v4;
}

