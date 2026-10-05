/* Address: 0x14015cbd0 | Name: sub_14015CBD0 | Size: 218 bytes */
__int16 __fastcall sub_14015CBD0(_WORD *a1, unsigned __int8 *a2)
{
  int v2; // r10d
  unsigned __int8 *v4; // r11
  __int64 v5; // rax
  int v6; // ebx
  int v7; // edi
  int v8; // r8d

  v2 = 0;
  v4 = a2;
  do
  {
    v5 = *v4;
    *a1 = 0;
    if ( (_BYTE)v5 != 0xFF )
    {
      v6 = a2[v5 + 1280];
      v7 = a2[v5 + 1024] >> 4;
      v8 = a2[v5 + 1024] & 0xF;
      if ( v8 )
      {
        LOWORD(v5) = v6 + v8;
        if ( (unsigned int)(v6 + v8) <= 9 )
        {
          LODWORD(v5) = ((v2 << v6) & 0x1FF) >> (9 - v8);
          if ( (int)v5 < 1 << (v8 - 1) )
            LODWORD(v5) = 1 - (1 << v8) + v5;
          if ( (unsigned int)(v5 + 128) <= 0xFF )
          {
            LOWORD(v5) = v6 + v8 + 16 * (v7 + 16 * v5);
            *a1 = v5;
          }
        }
      }
    }
    ++v2;
    ++v4;
    ++a1;
  }
  while ( v2 < 512 );
  return v5;
}

