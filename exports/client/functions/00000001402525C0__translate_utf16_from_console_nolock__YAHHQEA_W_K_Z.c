/* Address: 0x1402525c0 | Name: ?translate_utf16_from_console_nolock@@YAHHQEA_W_K@Z | Size: 143 bytes */
__int64 __fastcall translate_utf16_from_console_nolock(int a1, __int16 *a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  __int64 v4; // r11
  __int16 *v6; // r8
  __int16 *v7; // rax
  __int16 v8; // dx
  __int64 v9; // rcx

  v3 = (unsigned __int64)&a2[a3];
  v4 = a1;
  v6 = a2;
  v7 = a2;
  if ( (unsigned __int64)a2 < v3 )
  {
    while ( 1 )
    {
      v8 = *v6;
      if ( *v6 == 26 )
        break;
      if ( v8 == 13 && (unsigned __int64)(v6 + 1) < v3 && v6[1] == 10 )
      {
        v8 = 10;
        v9 = 4;
      }
      else
      {
        v9 = 2;
      }
      v6 = (__int16 *)((char *)v6 + v9);
      *v7++ = v8;
      if ( (unsigned __int64)v6 >= v3 )
        return 2 * (unsigned int)(v7 - a2);
    }
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v4 >> 6) + 19065401] + 72 * (v4 & 0x3F) + 56) |= 2u;
  }
  return 2 * (unsigned int)(v7 - a2);
}

